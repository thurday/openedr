//  (C) Copyright John Maddock 2004. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//
// This progam scans for *.ipp files in the libs/config/test
// directory and then generates the *.cpp test files from them
// along with config_test.cpp and a Jamfile.
//

#include <boost/regex.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/detail/lightweight_main.hpp>
#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include <ctime>

namespace fs = boost::filesystem;

fs::path config_path;

std::string copyright(
"//  Copyright John Maddock 2002-4.\n"
"//  Use, modification and distribution are subject to the \n"
"//  Boost Software License, Version 1.0. (See accompanying file \n"
"//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)\n"
"\n"
"//  See http://www.boost.org/libs/config for the most recent version."
"//\n//  Revision $Id$\n//\n");

std::stringstream config_test1;
std::stringstream config_test1a;
std::stringstream config_test2;
std::stringstream jamfile;
std::stringstream jamfile_v2;
std::stringstream build_config_test;
std::stringstream build_config_jamfile;
std::set<std::string> macro_list;
std::set<std::string> feature_list;

void write_config_info()
{
   // load the file into memory so we can scan it:
   fs::ifstream ifs(config_path / "config_info.cpp");
   std::string file_text;
   std::copy(std::istreambuf_iterator<char>(ifs), std::istreambuf_iterator<char>(), std::back_inserter(file_text));
   ifs.close();
   // create macro list:
   std::stringstream ss;
   for(std::set<std::string>::const_iterator i(macro_list.begin()), j(macro_list.end());
      i != j;
      ++i)
   {
      ss << "   PRINT_MACRO(" << *i << ");\n";
   }
   std::string macros = ss.str();
   // scan for Boost macro block:
   boost::regex re("BEGIN\\s+GENERATED\\s+BLOCK\\s+DO\\s+NOT\\s+EDIT\\s+THIS[^\\n]+\\n(.*?)\\n\\s+//\\s*END\\s+GENERATED\\s+BLOCK");
   boost::smatch what;
   if(boost::regex_search(file_text, what, re))
   {
      std::string new_text;
      new_text.append(what.prefix().first, what[1].first);
      new_text.append(macros);
      new_text.append(what[1].second, what.suffix().second);
      fs::ofstream ofs(config_path / "config_info.cpp");
      ofs << new_text;
   }
}

void write_config_test()
{
   fs::ofstream ofs(config_path / "config_test.cpp");
   time_t t = std::time(0);
   ofs << "//  This file was automatically generated on " << std::ctime(&t);
   ofs << "//  by libs/config/tools/generate.cpp\n" << copyright << std::endl;
   ofs << "// Test file for config setup\n"
      "// This file should compile, if it does not then\n"
      "// one or more macros need to be defined.\n"
      "// see boost_*.ipp for more details\n\n"
      "// Do not edit this file, it was generated automatically by\n\n"
      "#include <boost/config.hpp>\n#include <iostream>\n#include \"test.hpp\"\n\n"
      "int error_count = 0;\n\n";
   ofs << config_test1.str() << std::endl;
   ofs << config_test1a.str() << std::endl;
   ofs << "int main( int, char *[] )\n{\n" << config_test2.str() << "   return error_count;\n}\n\n";
}

void write_jamfile_v2() 
{
   fs::ofstream ofs(config_path / "all" / "Jamfile.v2");
   time_t t = std::time(0);
   ofs << "#\n# Regression test Jamfile for boost configuration setup.\n# *** DO NOT EDIT THIS FILE BY HAND ***\n"
      "# This file was automatically generated on " << std::ctime(&t);
   ofs << "#  by libs/config/tools/generate.cpp\n"
      "# Copyright John Maddock.\n"
      "# Use, modification and distribution are subject to the \n"
      "# Boost Software License, Version 1.0. (See accompanying file \n"
      "# LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)\n"
      "#\n# If you need to alter build preferences then set them in\n"
      "# the template defined in options_v2.jam.\n#\n"
      "path-constant DOT : . ;\n"
      "include $(DOT)/options_v2.jam ;\n\n"
      "run ../config_info.cpp  : : : <threading>single <toolset>msvc:<runtime-link>static <toolset>msvc:<link>static ;\n"
      "run ../config_info.cpp  : : : <threading>multi : config_info_threaded ;\n"
      "run ../math_info.cpp : : : <toolset>borland:<runtime-link>static <toolset>borland:<link>static ;\n"
      "run ../config_test.cpp : : : <threading>single <toolset>msvc:<runtime-link>static <toolset>msvc:<link>static ;\n"
      "run ../config_test.cpp : : : <threading>multi : config_test_threaded ;\n"
      "run ../limits_test.cpp ../../../test/build//boost_test_exec_monitor ;\n"
      "run ../abi/abi_test.cpp ../abi/main.cpp  ;\n\n";
   ofs << jamfile_v2.str() << std::endl;

}

void write_test_file(const fs::path& file, 
                     const std::string& macro_name, 
                     const std::string& namespace_name, 
                     const std::string& header_file,
                     bool positive_test, 
                     bool expect_success)
{
   if(!fs::exists(file))
   {
      std::cout << "Writing test file " << file.string() << std::endl;

      fs::ofstream ofs(file);
      std::time_t t = std::time(0);
      ofs << "//  This file was automatically generated on " << std::ctime(&t);
      ofs << "//  by libs/config/tools/generate.cpp\n" << copyright << std::endl;
      ofs << "\n// Test file for macro " << macro_name << std::endl;

      if(expect_success)
      {
         ofs << "// This file should compile, if it does not then\n"
            "// " << macro_name << " should ";
         if(positive_test)
            ofs << "not ";
         ofs << "be defined.\n";
      }
      else
      {
         ofs << "// This file should not compile, if it does then\n"
            "// " << macro_name << " should ";
         if(!positive_test)
            ofs << "not ";
         ofs << "be defined.\n";
      }
      ofs << "// See file " << header_file << " for details\n\n";

      ofs << "// Must not have BOOST_ASSERT_CONFIG set; it defeats\n"
         "// the objective of this file:\n"
         "#ifdef BOOST_ASSERT_CONFIG\n"
         "#  undef BOOST_ASSERT_CONFIG\n"
         "#endif\n\n";

      static const boost::regex tr1_exp("BOOST_HAS_TR1.*");

      ofs << "#include <boost/config.hpp>\n";

      ofs << "#include \"test.hpp\"\n\n"
         "#if";
      if(positive_test != expect_success)
         ofs << "n";
      ofs << "def " << macro_name << 
         "\n#include \"" << header_file << 
         "\"\n#else\n";
      if(expect_success)
         ofs << "namespace " << namespace_name << " = empty_boost;\n";
      else
         ofs << "#error \"this file should not compile\"\n";
      ofs << "#endif\n\n";

      ofs << "int main( int, char *[] )\n{\n   return " << namespace_name << "::test();\n}\n\n";  
   }
   else
   {
      std::cout << "Skipping existing test file " << file.string() << std::endl;
   }
}

void write_build_tests()
{
   fs::ofstream ofs(config_path / ".." / "checks" / "test_case.cpp");
   time_t t = std::time(0);
   ofs << "//  This file was automatically generated on " << std::ctime(&t);
   ofs << "//  by libs/config/tools/generate.cpp\n" << copyright << std::endl;
   ofs << "#include <boost/config.hpp>\n\n";
   ofs << build_config_test.str() << std::endl;
   ofs << "int main( int, char *[] )\n{\n" << "   return 0;\n}\n\n";
}

void write_build_check_jamfile()
{
   fs::ofstream ofs(config_path / ".." / "checks" / "Jamfile.v2");
   time_t t = std::time(0);
   ofs << "#\n# *** DO NOT EDIT THIS FILE BY HAND ***\n"
      "# This file was automatically generated on " << std::ctime(&t);
   ofs << "#  by libs/config/tools/generate.cpp\n"
      "# Copyright John Maddock.\n"
      "# Use, modification and distribution are subject to the \n"
      "# Boost Software License, Version 1.0. (See accompanying file \n"
      "# LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)\n\n"
      "import modules ;\nimport path ; \n\n"
      "\n"
      ;
   ofs << build_config_jamfile.str() << std::endl;
}

void process_ipp_file(const fs::path& file, bool positive_test)
{
   std::cout << "Info: Scanning file: " << file.string() << std::endl;

   // our variables:
   std::string file_text;
   std::string macro_name;
   std::string namespace_name;
   fs::path positive_file;
   fs::path negative_file;

   // load the file into memory so we can scan it:
   fs::ifstream ifs(file);
   std::copy(std::istreambuf_iterator<char>(ifs), std::istreambuf_iterator<char>(), std::back_inserter(file_text));
   ifs.close();
   // scan for the macro name:
   boost::regex macro_regex("//\\s*MACRO\\s*:\\s*(\\w+)");
   boost::smatch macro_match;
   if(boost::regex_search(file_text, macro_match, macro_regex))
   {
      macro_name = macro_match[1];
      macro_list.insert(macro_name);
      namespace_name = boost::regex_replace(file_text, macro_regex, "\\L$1", boost::format_first_only | boost::format_no_copy);
   }
   if(macro_name.empty())
   {
      std::cout << "Error: no macro definition found in " << file.string();
   }
   else
   {
      std::cout << "Info: Macroname: " << macro_name << std::endl;
   }

   // get the output filesnames:
   boost::regex file_regex("boost_([^.]+)\\.ipp");
   positive_file = file.branch_path() / boost::regex_replace(file.leaf().string(), file_regex, "$1_pass.cpp");
   negative_file = file.branch_path() / boost::regex_replace(file.leaf().string(), file_regex, "$1_fail.cpp");
   write_test_file(positive_file, macro_name, namespace_name, file.leaf().string(), positive_test, true);
   write_test_file(negative_file, macro_name, namespace_name, file.leaf().string(), positive_test, false);
   
   // always create config_test data,
   // positive and negative tests go to separate streams, because for some
   // reason some compilers choke unless we put them in a particular order...
   std::ostream* pout = positive_test ? &config_test1a : &config_test1;
   *pout << "#if";
   if(!positive_test)
      *pout << "n";
   *pout << "def " << macro_name 
      << "\n#include \"" << file.leaf().string() << "\"\n#else\nnamespace "
      << namespace_name << " = empty_boost;\n#endif\n";

   config_test2 << "   if(0 != " << namespace_name << "::test())\n"
      "   {\n"
      "      std::cerr << \"Failed test for " << macro_name << " at: \" << __FILE__ << \":\" << __LINE__ << std::endl;\n"
      "      ++error_count;\n"
      "   }\n";

   // always generate the jamfile data:
   jamfile << "test-suite \"" << macro_name << "\" : \n"
      "[ run " << positive_file.leaf().string() << " <template>config_options ]\n"
      "[ compile-fail " << negative_file.leaf().string() << " <template>config_options ] ;\n";

   jamfile_v2 << "test-suite \"" << macro_name << "\" : \n"
      "[ run ../" << positive_file.leaf().string() << " ]\n"
      "[ compile-fail ../" << negative_file.leaf().string() << " ] ;\n";

   // Generate data for the Build-checks test file:
   build_config_test << "#ifdef TEST_" << macro_name << std::endl;
   if (positive_test)
   {
      build_config_test << "#  ifndef " << macro_name << "\n#     error \"Feature macro " << macro_name << " is not defined.\"\n#  endif\n";
   }
   else
   {
      build_config_test << "#  ifdef " << macro_name << "\n#     error \"Defect macro " << macro_name << " is defined.\"\n#  endif\n";
   }
   build_config_test << "#endif\n";

   // Generate data for the build-checks Jamfile:
   static const boost::regex feature_regex("boost_(?:no|has)_(.*)");
   std::string feature_name = boost::regex_replace(namespace_name, feature_regex, "\\1");
   if(feature_list.find(feature_name) == feature_list.end())
      build_config_jamfile << "obj " << feature_name << " : test_case.cpp : <define>TEST_" << macro_name << " ;\n";
   feature_list.insert(feature_name);
}

void write_std_check(std::string macroname, int min_value, std::string header, int std_version, bool primary = true)
{
   std::string test_name(macroname);
   while (test_name[0] == '_')
      test_name.erase(0, 1);
   std::string test_basename = test_name;
   test_name.append("_");
   test_name.append(1, std_version > 10 ? std_version / 10 + '0' : '0');
   test_name.append(1, std_version % 10 + '0');
   fs::ofstream ofs(config_path / ".." / "checks" / "std" / (test_name + ".cpp"));
   time_t t = std::time(0);
   ofs << "//  This file was automatically generated on " << std::ctime(&t);
   ofs << "//  by libs/config/tools/generate.cpp\n" << copyright << std::endl;
   ofs << "#ifdef __has_include\n#if __has_include(<version>)\n#include <version>\n#endif\n#endif\n\n";
   if (header.size())
   {
      ofs << "#include <" << header << ">\n\n";
   }
   ofs << "#ifndef " << macroname << "\n#error \"Macro << " << macroname << " is not set\"\n#endif\n\n";
   ofs << "#if " << macroname << " < " << min_value << "\n#error \"Macro " << macroname << " had too low a value\"\n#endif\n\n";
   ofs << "int main( int, char *[] )\n{\n" << "   return 0;\n}\n\n";

   build_config_jamfile << "obj " << test_name << " : std/" << test_name << ".cpp ;\n";
   if(primary)
      build_config_jamfile << "alias " << test_basename << " : " << test_name << " ;\n";
}

void write_std_config_checks()
{
   // C++20
   write_std_check("__cpp_impl_destroying_delete", 201806, "", 20);
   write_std_check("__cpp_lib_destroying_delete", 201806, "new", 20);
   write_std_check("__cpp_char8_t", 201811, "", 20);
   write_std_check("__cpp_impl_three_way_comparison", 201711, "", 20);
   write_std_check("__cpp_lib_three_way_comparison", 201711, "compare", 20);
   write_std_check("__cpp_conditional_explicit", 201806, "", 20);
   write_std_check("__cpp_nontype_template_parameter_class", 201806, "", 20);
   write_std_check("__cpp_lib_char8_t", 201811, "atomic", 20); 
   write_std_check("__cpp_lib_concepts", 201806, "concepts", 20);
   write_std_check("__cpp_lib_constexpr_swap_algorithms", 201806, "algorithm", 20);
   write_std_check("__cpp_lib_constexpr_misc", 201811, "array", 20);
   write_std_check("__cpp_lib_bind_front", 201811, "functional", 20);
   write_std_check("__cpp_lib_is_constant_evaluated", 201811, "type_traits", 20);
   write_std_check("__cpp_lib_erase_if", 201811, "string", 20);
   write_std_check("__cpp_lib_list_remove_return_type", 201806, "forward_list", 20);
   write_std_check("__cpp_lib_generic_unordered_lookup", 201811, "unordered_map", 20);
   write_std_check("__cpp_lib_ranges", 201811, "algorithm", 20);
   write_std_check("__cpp_lib_bit_cast", 201806, "bit", 20);
   write_std_check("__cpp_lib_atomic_ref", 201806, "atomic", 20);
   // C++17
   write_std_check("__cpp_hex_float", 201603, "", 17);
   write_std_check("__cpp_inline_variables", 201606, "", 17);
   write_std_check("__cpp_aligned_new", 201606, "", 17);
   write_std_check("__cpp_guaranteed_copy_elision", 201606, "", 17);
   write_std_check("__cpp_noexcept_function_type", 201510, "", 17);
   write_std_check("__cpp_fold_expressions", 201603, "", 17);
   write_std_check("__cpp_capture_star_this", 201603, "", 17);
   write_std_check("__cpp_constexpr", 201603, "", 17, false);
   write_std_check("__cpp_if_constexpr", 201606, "", 17);
   write_std_check("__cpp_range_based_for", 201603, "", 17, false);
   write_std_check("__cpp_static_assert", 201411, "", 17, false);
   write_std_check("__cpp_deduction_guides", 201703, "", 17);
   write_std_check("__cpp_nontype_template_parameter_auto", 201606, "", 17);
   write_std_check("__cpp_namespace_attributes", 201411, "", 17);
   write_std_check("__cpp_enumerator_attributes", 201411, "", 17);
   write_std_check("__cpp_inheriting_constructors", 201511, "", 17, false);
   write_std_check("__cpp_variadic_using", 201611, "", 17);
   write_std_check("__cpp_structured_bindings", 201606, "", 17);
   write_std_check("__cpp_aggregate_bases", 201603, "", 17);
   write_std_check("__cpp_nontype_template_args", 201411, "", 17);
   write_std_check("__cpp_template_template_args", 201611, "", 17);
   write_std_check("__cpp_lib_byte", 201603, "cstddef", 17);
   write_std_check("__cpp_lib_hardware_interference_size", 201703, "new", 17);
   write_std_check("__cpp_lib_launder", 201606, "new", 17);
   write_std_check("__cpp_lib_uncaught_exceptions", 201411, "exception", 17);
   write_std_check("__cpp_lib_as_const", 201510, "utility", 17);
   write_std_check("__cpp_lib_make_from_tuple", 201606, "tuple", 17);
   write_std_check("__cpp_lib_apply", 201603, "tuple", 17);
   write_std_check("__cpp_lib_optional", 201606, "optional", 17);
   write_std_check("__cpp_lib_variant", 201606, "variant", 17);
   write_std_check("__cpp_lib_any", 201606, "any", 17);
   write_std_check("__cpp_lib_addressof_constexpr", 201603, "memory", 17);
   write_std_check("__cpp_lib_raw_memory_algorithms", 201606, "memory", 17);
   write_std_check("__cpp_lib_transparent_operators", 201510, "memory", 17, false);
   write_std_check("__cpp_lib_enable_shared_from_this", 201603, "memory", 17);
   write_std_check("__cpp_lib_shared_ptr_weak_type", 201606, "memory", 17);
   write_std_check("__cpp_lib_shared_ptr_arrays", 201611, "memory", 17);
   write_std_check("__cpp_lib_memory_resource", 201603, "memory_resource", 17);
   write_std_check("__cpp_lib_boyer_moore_searcher", 201603, "functional", 17);
   write_std_check("__cpp_lib_invoke", 201411, "functional", 17);
   write_std_check("__cpp_lib_not_fn", 201603, "functional", 17);
   write_std_check("__cpp_lib_void_t", 201411, "type_traits", 17);
   write_std_check("__cpp_lib_bool_constant", 201505, "type_traits", 17);
   write_std_check("__cpp_lib_type_trait_variable_templates", 201510, "type_traits", 17);
   write_std_check("__cpp_lib_logical_traits", 201510, "type_traits", 17);
   write_std_check("__cpp_lib_is_swappable", 201603, "type_traits", 17);
   write_std_check("__cpp_lib_is_invocable", 201703, "type_traits", 17);
   write_std_check("__cpp_lib_has_unique_object_representations", 201606, "type_traits", 17);
   write_std_check("__cpp_lib_is_aggregate", 201703, "type_traits", 17);
   write_std_check("__cpp_lib_chrono", 201611, "chrono", 17);
   write_std_check("__cpp_lib_execution", 201603, "execution", 17);
   write_std_check("__cpp_lib_parallel_algorithm", 201603, "algorithm", 17);
   write_std_check("__cpp_lib_to_chars", 201611, "utility", 17);
   write_std_check("__cpp_lib_string_view", 201606, "string", 17);
   write_std_check("__cpp_lib_allocator_traits_is_always_equal", 201411, "memory", 17);
   write_std_check("__cpp_lib_incomplete_container_elements", 201505, "forward_list", 17);
   write_std_check("__cpp_lib_map_try_emplace", 201411, "map", 17);
   write_std_check("__cpp_lib_unordered_map_try_emplace", 201411, "unordered_map", 17);
   write_std_check("__cpp_lib_node_extract", 201606, "map", 17);
   write_std_check("__cpp_lib_array_constexpr", 201603, "iterator", 17);
   write_std_check("__cpp_lib_nonmember_container_access", 201411, "iterator", 17);
   write_std_check("__cpp_lib_sample", 201603, "algorithm", 17);
   write_std_check("__cpp_lib_clamp", 201603, "algorithm", 17);
   write_std_check("__cpp_lib_gcd_lcm", 201606, "numeric", 17);
   write_std_check("__cpp_lib_hypot", 201603, "cmath", 17);
   write_std_check("__cpp_lib_math_special_functions", 201603, "cmath", 17);
   write_std_check("__cpp_lib_filesystem", 201703, "filesystem", 17);
   write_std_check("__cpp_lib_atomic_is_always_lock_free", 201603, "atomic", 17);
   write_std_check("__cpp_lib_shared_mutex", 201505, "shared_mutex", 17);
   write_std_check("__cpp_lib_scoped_lock", 201703, "mutex", 17);
   // C++14
   write_std_check("__cpp_binary_literals", 201304, "", 14);
   write_std_check("__cpp_init_captures", 201304, "", 14);
   write_std_check("__cpp_generic_lambdas", 201304, "", 14);
   write_std_check("__cpp_sized_deallocation", 201309, "", 14);
   write_std_check("__cpp_constexpr", 201304, "", 14, false);
   write_std_check("__cpp_decltype_auto", 201304, "", 14);
   write_std_check("__cpp_return_type_deduction", 201304, "", 14);
   write_std_check("__cpp_aggregate_nsdmi", 201304, "", 14);
   write_std_check("__cpp_variable_templates", 201304, "", 14);
   write_std_check("__cpp_lib_integer_sequence", 201304, "utility", 14);
   write_std_check("__cpp_lib_exchange_function", 201304, "utility", 14);
   write_std_check("__cpp_lib_tuples_by_type", 201304, "utility", 14);
   write_std_check("__cpp_lib_tuple_element_t", 201402, "tuple", 14);
   write_std_check("__cpp_lib_make_unique", 201304, "memory", 14);
   write_std_check("__cpp_lib_transparent_operators", 201210, "functional", 14);
   write_std_check("__cpp_lib_integral_constant_callable", 201304, "type_traits", 14);
   write_std_check("__cpp_lib_transformation_trait_aliases", 201304, "type_traits", 14);
   write_std_check("__cpp_lib_result_of_sfinae", 201210, "functional", 14);
   write_std_check("__cpp_lib_is_final", 201402, "type_traits", 14);
   write_std_check("__cpp_lib_is_null_pointer", 201309, "type_traits", 14);
   write_std_check("__cpp_lib_chrono_udls", 201304, "chrono", 14);
   write_std_check("__cpp_lib_string_udls", 201304, "string", 14);
   write_std_check("__cpp_lib_generic_associative_lookup", 201304, "map", 14);
   write_std_check("__cpp_lib_null_iterators", 201304, "iterator", 14);
   write_std_check("__cpp_lib_make_reverse_iterator", 201402, "iterator", 14);
   write_std_check("__cpp_lib_robust_nonmodifying_seq_ops", 201304, "algorithm", 14);
   write_std_check("__cpp_lib_complex_udls", 201309, "complex", 14);
   write_std_check("__cpp_lib_quoted_string_io", 201304, "iomanip", 14);
   write_std_check("__cpp_lib_shared_timed_mutex", 201402, "shared_mutex", 14);
   // C++11
   write_std_check("__cpp_unicode_characters", 200704, "", 11);
   write_std_check("__cpp_raw_strings", 200710, "", 11);
   write_std_check("__cpp_unicode_literals", 200710, "", 11);
   write_std_check("__cpp_user_defined_literals", 200809, "", 11);
   write_std_check("__cpp_threadsafe_static_init", 200806, "", 11);
   write_std_check("__cpp_lambdas", 200907, "", 11);
   write_std_check("__cpp_constexpr", 200704, "", 11);
   write_std_check("__cpp_range_based_for", 200907, "", 11);
   write_std_check("__cpp_static_assert", 200410, "", 11);
   write_std_check("__cpp_decltype", 200707, "", 11);
   write_std_check("__cpp_attributes", 200809, "", 11);
   write_std_check("__cpp_rvalue_references", 200610, "", 11);
   write_std_check("__cpp_variadic_templates", 200704, "", 11);
   write_std_check("__cpp_initializer_lists", 200806, "", 11);
   write_std_check("__cpp_explicit_conversion", 200710, "", 11);
   write_std_check("__cpp_delegating_constructors", 200604, "", 11);
   write_std_check("__cpp_nsdmi", 200809, "", 11);
   write_std_check("__cpp_inheriting_constructors", 200802, "", 11);
   write_std_check("__cpp_ref_qualifiers", 200710, "", 11);
   write_std_check("__cpp_alias_templates", 200704, "", 11);
   // C++98
   write_std_check("__cpp_rtti", 199711, "", 03);
   write_std_check("__cpp_exceptions", 199711, "", 03);
}

int cpp_main(int argc, char* argv[])
{
   //
   // get the boost path to begin with:
   //
   if(argc > 1)
   {
      fs::path p(argv[1]);
      config_path = p / "libs" / "config" / "test" ;
   }
   else
   {
      // try __FILE__:
      fs::path p(__FILE__);
      config_path = p.branch_path().branch_path() / "test";
   }
   std::cout << "Info: Boost.Config test path set as: " << config_path.string() << std::endl;

   // enumerate *.ipp files and store them in a map for now:
   boost::regex ipp_mask("boost_(?:(has)|no).*\\.ipp");
   boost::smatch ipp_match;
   fs::directory_iterator i(config_path), j;
   std::map<fs::path, bool> files_to_process;
   while(i != j)
   {
      if(boost::regex_match(i->path().leaf().string(), ipp_match, ipp_mask))
      {
         files_to_process[*i] = ipp_match[1].matched;
      }
      ++i;
   }
   // Enumerate the files and process them, by defering this until now
   // the results are always alphabetized which reduces churn in the
   // generated files.
   for(std::map<fs::path, bool>::const_iterator pos = files_to_process.begin(); pos != files_to_process.end(); ++pos)
   {
      process_ipp_file(pos->first, pos->second);
   }
   write_config_test();
   write_jamfile_v2();
   write_config_info();
   write_std_config_checks();
   write_build_tests();
   write_build_check_jamfile();
   return 0;
}

