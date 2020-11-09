// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/system_parameter.proto

#include "google/api/system_parameter.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fsystem_5fparameter_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SystemParameter_google_2fapi_2fsystem_5fparameter_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fsystem_5fparameter_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SystemParameterRule_google_2fapi_2fsystem_5fparameter_2eproto;
namespace google {
namespace api {
class SystemParametersDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SystemParameters> _instance;
} _SystemParameters_default_instance_;
class SystemParameterRuleDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SystemParameterRule> _instance;
} _SystemParameterRule_default_instance_;
class SystemParameterDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SystemParameter> _instance;
} _SystemParameter_default_instance_;
}  // namespace api
}  // namespace google
static void InitDefaultsscc_info_SystemParameter_google_2fapi_2fsystem_5fparameter_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_SystemParameter_default_instance_;
    new (ptr) ::google::api::SystemParameter();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::SystemParameter::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SystemParameter_google_2fapi_2fsystem_5fparameter_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SystemParameter_google_2fapi_2fsystem_5fparameter_2eproto}, {}};

static void InitDefaultsscc_info_SystemParameterRule_google_2fapi_2fsystem_5fparameter_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_SystemParameterRule_default_instance_;
    new (ptr) ::google::api::SystemParameterRule();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::SystemParameterRule::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SystemParameterRule_google_2fapi_2fsystem_5fparameter_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_SystemParameterRule_google_2fapi_2fsystem_5fparameter_2eproto}, {
      &scc_info_SystemParameter_google_2fapi_2fsystem_5fparameter_2eproto.base,}};

static void InitDefaultsscc_info_SystemParameters_google_2fapi_2fsystem_5fparameter_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_SystemParameters_default_instance_;
    new (ptr) ::google::api::SystemParameters();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::SystemParameters::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SystemParameters_google_2fapi_2fsystem_5fparameter_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_SystemParameters_google_2fapi_2fsystem_5fparameter_2eproto}, {
      &scc_info_SystemParameterRule_google_2fapi_2fsystem_5fparameter_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fsystem_5fparameter_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fsystem_5fparameter_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fsystem_5fparameter_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fsystem_5fparameter_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameters, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameters, rules_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameterRule, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameterRule, selector_),
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameterRule, parameters_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameter, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameter, name_),
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameter, http_header_),
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameter, url_query_parameter_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::SystemParameters)},
  { 6, -1, sizeof(::google::api::SystemParameterRule)},
  { 13, -1, sizeof(::google::api::SystemParameter)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_SystemParameters_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_SystemParameterRule_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_SystemParameter_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fsystem_5fparameter_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!google/api/system_parameter.proto\022\ngoo"
  "gle.api\"B\n\020SystemParameters\022.\n\005rules\030\001 \003"
  "(\0132\037.google.api.SystemParameterRule\"X\n\023S"
  "ystemParameterRule\022\020\n\010selector\030\001 \001(\t\022/\n\n"
  "parameters\030\002 \003(\0132\033.google.api.SystemPara"
  "meter\"Q\n\017SystemParameter\022\014\n\004name\030\001 \001(\t\022\023"
  "\n\013http_header\030\002 \001(\t\022\033\n\023url_query_paramet"
  "er\030\003 \001(\tBv\n\016com.google.apiB\024SystemParame"
  "terProtoP\001ZEgoogle.golang.org/genproto/g"
  "oogleapis/api/serviceconfig;serviceconfi"
  "g\242\002\004GAPIb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_sccs[3] = {
  &scc_info_SystemParameter_google_2fapi_2fsystem_5fparameter_2eproto.base,
  &scc_info_SystemParameterRule_google_2fapi_2fsystem_5fparameter_2eproto.base,
  &scc_info_SystemParameters_google_2fapi_2fsystem_5fparameter_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_once;
static bool descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto = {
  &descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_initialized, descriptor_table_protodef_google_2fapi_2fsystem_5fparameter_2eproto, "google/api/system_parameter.proto", 416,
  &descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_once, descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_sccs, descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_google_2fapi_2fsystem_5fparameter_2eproto::offsets,
  file_level_metadata_google_2fapi_2fsystem_5fparameter_2eproto, 3, file_level_enum_descriptors_google_2fapi_2fsystem_5fparameter_2eproto, file_level_service_descriptors_google_2fapi_2fsystem_5fparameter_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fsystem_5fparameter_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto), true);
namespace google {
namespace api {

// ===================================================================

void SystemParameters::InitAsDefaultInstance() {
}
class SystemParameters::_Internal {
 public:
};

SystemParameters::SystemParameters()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.SystemParameters)
}
SystemParameters::SystemParameters(const SystemParameters& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      rules_(from.rules_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.SystemParameters)
}

void SystemParameters::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SystemParameters_google_2fapi_2fsystem_5fparameter_2eproto.base);
}

SystemParameters::~SystemParameters() {
  // @@protoc_insertion_point(destructor:google.api.SystemParameters)
  SharedDtor();
}

void SystemParameters::SharedDtor() {
}

void SystemParameters::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SystemParameters& SystemParameters::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SystemParameters_google_2fapi_2fsystem_5fparameter_2eproto.base);
  return *internal_default_instance();
}


void SystemParameters::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.SystemParameters)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rules_.Clear();
  _internal_metadata_.Clear();
}

const char* SystemParameters::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .google.api.SystemParameterRule rules = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_rules(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SystemParameters::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.SystemParameters)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.SystemParameterRule rules = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_rules_size()); i < n; i++) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(1, this->_internal_rules(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.SystemParameters)
  return target;
}

size_t SystemParameters::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.SystemParameters)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.api.SystemParameterRule rules = 1;
  total_size += 1UL * this->_internal_rules_size();
  for (const auto& msg : this->rules_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SystemParameters::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.SystemParameters)
  GOOGLE_DCHECK_NE(&from, this);
  const SystemParameters* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SystemParameters>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.SystemParameters)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.SystemParameters)
    MergeFrom(*source);
  }
}

void SystemParameters::MergeFrom(const SystemParameters& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.SystemParameters)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  rules_.MergeFrom(from.rules_);
}

void SystemParameters::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.SystemParameters)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SystemParameters::CopyFrom(const SystemParameters& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.SystemParameters)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemParameters::IsInitialized() const {
  return true;
}

void SystemParameters::InternalSwap(SystemParameters* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  rules_.InternalSwap(&other->rules_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SystemParameters::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void SystemParameterRule::InitAsDefaultInstance() {
}
class SystemParameterRule::_Internal {
 public:
};

SystemParameterRule::SystemParameterRule()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.SystemParameterRule)
}
SystemParameterRule::SystemParameterRule(const SystemParameterRule& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      parameters_(from.parameters_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  selector_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_selector().empty()) {
    selector_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.selector_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.SystemParameterRule)
}

void SystemParameterRule::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SystemParameterRule_google_2fapi_2fsystem_5fparameter_2eproto.base);
  selector_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

SystemParameterRule::~SystemParameterRule() {
  // @@protoc_insertion_point(destructor:google.api.SystemParameterRule)
  SharedDtor();
}

void SystemParameterRule::SharedDtor() {
  selector_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SystemParameterRule::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SystemParameterRule& SystemParameterRule::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SystemParameterRule_google_2fapi_2fsystem_5fparameter_2eproto.base);
  return *internal_default_instance();
}


void SystemParameterRule::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.SystemParameterRule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  parameters_.Clear();
  selector_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* SystemParameterRule::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string selector = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_selector(), ptr, ctx, "google.api.SystemParameterRule.selector");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .google.api.SystemParameter parameters = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_parameters(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SystemParameterRule::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.SystemParameterRule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string selector = 1;
  if (this->selector().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_selector().data(), static_cast<int>(this->_internal_selector().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.SystemParameterRule.selector");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_selector(), target);
  }

  // repeated .google.api.SystemParameter parameters = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_parameters_size()); i < n; i++) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(2, this->_internal_parameters(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.SystemParameterRule)
  return target;
}

size_t SystemParameterRule::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.SystemParameterRule)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.api.SystemParameter parameters = 2;
  total_size += 1UL * this->_internal_parameters_size();
  for (const auto& msg : this->parameters_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string selector = 1;
  if (this->selector().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_selector());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SystemParameterRule::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.SystemParameterRule)
  GOOGLE_DCHECK_NE(&from, this);
  const SystemParameterRule* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SystemParameterRule>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.SystemParameterRule)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.SystemParameterRule)
    MergeFrom(*source);
  }
}

void SystemParameterRule::MergeFrom(const SystemParameterRule& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.SystemParameterRule)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  parameters_.MergeFrom(from.parameters_);
  if (from.selector().size() > 0) {

    selector_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.selector_);
  }
}

void SystemParameterRule::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.SystemParameterRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SystemParameterRule::CopyFrom(const SystemParameterRule& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.SystemParameterRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemParameterRule::IsInitialized() const {
  return true;
}

void SystemParameterRule::InternalSwap(SystemParameterRule* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  parameters_.InternalSwap(&other->parameters_);
  selector_.Swap(&other->selector_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata SystemParameterRule::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void SystemParameter::InitAsDefaultInstance() {
}
class SystemParameter::_Internal {
 public:
};

SystemParameter::SystemParameter()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.SystemParameter)
}
SystemParameter::SystemParameter(const SystemParameter& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  http_header_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_http_header().empty()) {
    http_header_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.http_header_);
  }
  url_query_parameter_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_url_query_parameter().empty()) {
    url_query_parameter_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.url_query_parameter_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.SystemParameter)
}

void SystemParameter::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SystemParameter_google_2fapi_2fsystem_5fparameter_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  http_header_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  url_query_parameter_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

SystemParameter::~SystemParameter() {
  // @@protoc_insertion_point(destructor:google.api.SystemParameter)
  SharedDtor();
}

void SystemParameter::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  http_header_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  url_query_parameter_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SystemParameter::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SystemParameter& SystemParameter::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SystemParameter_google_2fapi_2fsystem_5fparameter_2eproto.base);
  return *internal_default_instance();
}


void SystemParameter::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.SystemParameter)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  http_header_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  url_query_parameter_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* SystemParameter::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_name(), ptr, ctx, "google.api.SystemParameter.name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string http_header = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_http_header(), ptr, ctx, "google.api.SystemParameter.http_header");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string url_query_parameter = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_url_query_parameter(), ptr, ctx, "google.api.SystemParameter.url_query_parameter");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SystemParameter::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.SystemParameter)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.SystemParameter.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // string http_header = 2;
  if (this->http_header().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_http_header().data(), static_cast<int>(this->_internal_http_header().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.SystemParameter.http_header");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_http_header(), target);
  }

  // string url_query_parameter = 3;
  if (this->url_query_parameter().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_url_query_parameter().data(), static_cast<int>(this->_internal_url_query_parameter().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.SystemParameter.url_query_parameter");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_url_query_parameter(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.SystemParameter)
  return target;
}

size_t SystemParameter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.SystemParameter)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string http_header = 2;
  if (this->http_header().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_http_header());
  }

  // string url_query_parameter = 3;
  if (this->url_query_parameter().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_url_query_parameter());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SystemParameter::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.SystemParameter)
  GOOGLE_DCHECK_NE(&from, this);
  const SystemParameter* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SystemParameter>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.SystemParameter)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.SystemParameter)
    MergeFrom(*source);
  }
}

void SystemParameter::MergeFrom(const SystemParameter& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.SystemParameter)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.http_header().size() > 0) {

    http_header_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.http_header_);
  }
  if (from.url_query_parameter().size() > 0) {

    url_query_parameter_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.url_query_parameter_);
  }
}

void SystemParameter::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.SystemParameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SystemParameter::CopyFrom(const SystemParameter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.SystemParameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemParameter::IsInitialized() const {
  return true;
}

void SystemParameter::InternalSwap(SystemParameter* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  http_header_.Swap(&other->http_header_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  url_query_parameter_.Swap(&other->url_query_parameter_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata SystemParameter::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::SystemParameters* Arena::CreateMaybeMessage< ::google::api::SystemParameters >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::SystemParameters >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::SystemParameterRule* Arena::CreateMaybeMessage< ::google::api::SystemParameterRule >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::SystemParameterRule >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::SystemParameter* Arena::CreateMaybeMessage< ::google::api::SystemParameter >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::SystemParameter >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
