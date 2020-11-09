// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/experimental/authorization_config.proto

#include "google/api/experimental/authorization_config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace google {
namespace api {
class AuthorizationConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AuthorizationConfig> _instance;
} _AuthorizationConfig_default_instance_;
}  // namespace api
}  // namespace google
static void InitDefaultsAuthorizationConfig_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_AuthorizationConfig_default_instance_;
    new (ptr) ::google::api::AuthorizationConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::AuthorizationConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AuthorizationConfig_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAuthorizationConfig_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto}, {}};

void InitDefaults_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_AuthorizationConfig_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::AuthorizationConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::AuthorizationConfig, provider_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::AuthorizationConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::api::_AuthorizationConfig_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto = {
  {}, AddDescriptors_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto, "google/api/experimental/authorization_config.proto", schemas,
  file_default_instances, TableStruct_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto::offsets,
  file_level_metadata_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto, 1, file_level_enum_descriptors_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto, file_level_service_descriptors_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto,
};

const char descriptor_table_protodef_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto[] =
  "\n2google/api/experimental/authorization_"
  "config.proto\022\ngoogle.api\"\'\n\023Authorizatio"
  "nConfig\022\020\n\010provider\030\001 \001(\tBb\n\016com.google."
  "apiB\030AuthorizationConfigProtoP\001Z-google."
  "golang.org/genproto/googleapis/api;api\242\002"
  "\004GAPIb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto = {
  false, InitDefaults_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto, 
  descriptor_table_protodef_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto,
  "google/api/experimental/authorization_config.proto", &assign_descriptors_table_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto, 213,
};

void AddDescriptors_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto = []() { AddDescriptors_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto(); return true; }();
namespace google {
namespace api {

// ===================================================================

void AuthorizationConfig::InitAsDefaultInstance() {
}
class AuthorizationConfig::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AuthorizationConfig::kProviderFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AuthorizationConfig::AuthorizationConfig()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.AuthorizationConfig)
}
AuthorizationConfig::AuthorizationConfig(const AuthorizationConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  provider_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.provider().size() > 0) {
    provider_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.provider_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.AuthorizationConfig)
}

void AuthorizationConfig::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_AuthorizationConfig_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto.base);
  provider_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

AuthorizationConfig::~AuthorizationConfig() {
  // @@protoc_insertion_point(destructor:google.api.AuthorizationConfig)
  SharedDtor();
}

void AuthorizationConfig::SharedDtor() {
  provider_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AuthorizationConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AuthorizationConfig& AuthorizationConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_AuthorizationConfig_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void AuthorizationConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.AuthorizationConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  provider_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* AuthorizationConfig::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<AuthorizationConfig*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string provider = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("google.api.AuthorizationConfig.provider");
        object = msg->mutable_provider();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool AuthorizationConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.AuthorizationConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string provider = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_provider()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->provider().data(), static_cast<int>(this->provider().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.AuthorizationConfig.provider"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.api.AuthorizationConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.AuthorizationConfig)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void AuthorizationConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.AuthorizationConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string provider = 1;
  if (this->provider().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->provider().data(), static_cast<int>(this->provider().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.AuthorizationConfig.provider");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->provider(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.api.AuthorizationConfig)
}

::google::protobuf::uint8* AuthorizationConfig::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.AuthorizationConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string provider = 1;
  if (this->provider().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->provider().data(), static_cast<int>(this->provider().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.AuthorizationConfig.provider");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->provider(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.AuthorizationConfig)
  return target;
}

size_t AuthorizationConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.AuthorizationConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string provider = 1;
  if (this->provider().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->provider());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AuthorizationConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.AuthorizationConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const AuthorizationConfig* source =
      ::google::protobuf::DynamicCastToGenerated<AuthorizationConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.AuthorizationConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.AuthorizationConfig)
    MergeFrom(*source);
  }
}

void AuthorizationConfig::MergeFrom(const AuthorizationConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.AuthorizationConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.provider().size() > 0) {

    provider_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.provider_);
  }
}

void AuthorizationConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.AuthorizationConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthorizationConfig::CopyFrom(const AuthorizationConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.AuthorizationConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthorizationConfig::IsInitialized() const {
  return true;
}

void AuthorizationConfig::Swap(AuthorizationConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AuthorizationConfig::InternalSwap(AuthorizationConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  provider_.Swap(&other->provider_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata AuthorizationConfig::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto);
  return ::file_level_metadata_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::google::api::AuthorizationConfig* Arena::CreateMaybeMessage< ::google::api::AuthorizationConfig >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::AuthorizationConfig >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
