// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/servicecontrol/v1/log_entry.proto

#include "google/api/servicecontrol/v1/log_entry.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LogEntry_LabelsEntry_DoNotUse_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fany_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Any_google_2fprotobuf_2fany_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fstruct_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ListValue_google_2fprotobuf_2fstruct_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto;
namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {
class LogEntry_LabelsEntry_DoNotUseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LogEntry_LabelsEntry_DoNotUse> _instance;
} _LogEntry_LabelsEntry_DoNotUse_default_instance_;
class LogEntryDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LogEntry> _instance;
  const PROTOBUF_NAMESPACE_ID::Any* proto_payload_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_payload_;
  const PROTOBUF_NAMESPACE_ID::Struct* struct_payload_;
} _LogEntry_default_instance_;
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google
static void InitDefaultsscc_info_LogEntry_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::servicecontrol::v1::_LogEntry_default_instance_;
    new (ptr) ::google::api::servicecontrol::v1::LogEntry();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::servicecontrol::v1::LogEntry::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_LogEntry_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 4, 0, InitDefaultsscc_info_LogEntry_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto}, {
      &scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto.base,
      &scc_info_LogEntry_LabelsEntry_DoNotUse_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto.base,
      &scc_info_Any_google_2fprotobuf_2fany_2eproto.base,
      &scc_info_ListValue_google_2fprotobuf_2fstruct_2eproto.base,}};

static void InitDefaultsscc_info_LogEntry_LabelsEntry_DoNotUse_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::servicecontrol::v1::_LogEntry_LabelsEntry_DoNotUse_default_instance_;
    new (ptr) ::google::api::servicecontrol::v1::LogEntry_LabelsEntry_DoNotUse();
  }
  ::google::api::servicecontrol::v1::LogEntry_LabelsEntry_DoNotUse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LogEntry_LabelsEntry_DoNotUse_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LogEntry_LabelsEntry_DoNotUse_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry_LabelsEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry_LabelsEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry_LabelsEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry_LabelsEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry, name_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry, timestamp_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry, severity_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry, insert_id_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry, labels_),
  offsetof(::google::api::servicecontrol::v1::LogEntryDefaultTypeInternal, proto_payload_),
  offsetof(::google::api::servicecontrol::v1::LogEntryDefaultTypeInternal, text_payload_),
  offsetof(::google::api::servicecontrol::v1::LogEntryDefaultTypeInternal, struct_payload_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::LogEntry, payload_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::google::api::servicecontrol::v1::LogEntry_LabelsEntry_DoNotUse)},
  { 9, -1, sizeof(::google::api::servicecontrol::v1::LogEntry)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::servicecontrol::v1::_LogEntry_LabelsEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::servicecontrol::v1::_LogEntry_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n,google/api/servicecontrol/v1/log_entry"
  ".proto\022\034google.api.servicecontrol.v1\032\034go"
  "ogle/api/annotations.proto\032&google/loggi"
  "ng/type/log_severity.proto\032\031google/proto"
  "buf/any.proto\032\034google/protobuf/struct.pr"
  "oto\032\037google/protobuf/timestamp.proto\"\206\003\n"
  "\010LogEntry\022\014\n\004name\030\n \001(\t\022-\n\ttimestamp\030\013 \001"
  "(\0132\032.google.protobuf.Timestamp\0222\n\010severi"
  "ty\030\014 \001(\0162 .google.logging.type.LogSeveri"
  "ty\022\021\n\tinsert_id\030\004 \001(\t\022B\n\006labels\030\r \003(\01322."
  "google.api.servicecontrol.v1.LogEntry.La"
  "belsEntry\022-\n\rproto_payload\030\002 \001(\0132\024.googl"
  "e.protobuf.AnyH\000\022\026\n\014text_payload\030\003 \001(\tH\000"
  "\0221\n\016struct_payload\030\006 \001(\0132\027.google.protob"
  "uf.StructH\000\032-\n\013LabelsEntry\022\013\n\003key\030\001 \001(\t\022"
  "\r\n\005value\030\002 \001(\t:\0028\001B\t\n\007payloadB\177\n com.goo"
  "gle.api.servicecontrol.v1B\rLogEntryProto"
  "P\001ZJgoogle.golang.org/genproto/googleapi"
  "s/api/servicecontrol/v1;servicecontrolb\006"
  "proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto_deps[5] = {
  &::descriptor_table_google_2fapi_2fannotations_2eproto,
  &::descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto,
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
  &::descriptor_table_google_2fprotobuf_2fstruct_2eproto,
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto_sccs[2] = {
  &scc_info_LogEntry_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto.base,
  &scc_info_LogEntry_LabelsEntry_DoNotUse_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto_once;
static bool descriptor_table_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto = {
  &descriptor_table_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto_initialized, descriptor_table_protodef_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto, "google/api/servicecontrol/v1/log_entry.proto", 766,
  &descriptor_table_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto_once, descriptor_table_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto_sccs, descriptor_table_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto_deps, 2, 5,
  schemas, file_default_instances, TableStruct_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto::offsets,
  file_level_metadata_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto, 2, file_level_enum_descriptors_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto, file_level_service_descriptors_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto), true);
namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {

// ===================================================================

LogEntry_LabelsEntry_DoNotUse::LogEntry_LabelsEntry_DoNotUse() {}
LogEntry_LabelsEntry_DoNotUse::LogEntry_LabelsEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void LogEntry_LabelsEntry_DoNotUse::MergeFrom(const LogEntry_LabelsEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata LogEntry_LabelsEntry_DoNotUse::GetMetadata() const {
  return GetMetadataStatic();
}
void LogEntry_LabelsEntry_DoNotUse::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& other) {
  ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom(other);
}


// ===================================================================

void LogEntry::InitAsDefaultInstance() {
  ::google::api::servicecontrol::v1::_LogEntry_default_instance_._instance.get_mutable()->timestamp_ = const_cast< PROTOBUF_NAMESPACE_ID::Timestamp*>(
      PROTOBUF_NAMESPACE_ID::Timestamp::internal_default_instance());
  ::google::api::servicecontrol::v1::_LogEntry_default_instance_.proto_payload_ = const_cast< PROTOBUF_NAMESPACE_ID::Any*>(
      PROTOBUF_NAMESPACE_ID::Any::internal_default_instance());
  ::google::api::servicecontrol::v1::_LogEntry_default_instance_.text_payload_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::google::api::servicecontrol::v1::_LogEntry_default_instance_.struct_payload_ = const_cast< PROTOBUF_NAMESPACE_ID::Struct*>(
      PROTOBUF_NAMESPACE_ID::Struct::internal_default_instance());
}
class LogEntry::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Timestamp& timestamp(const LogEntry* msg);
  static const PROTOBUF_NAMESPACE_ID::Any& proto_payload(const LogEntry* msg);
  static const PROTOBUF_NAMESPACE_ID::Struct& struct_payload(const LogEntry* msg);
};

const PROTOBUF_NAMESPACE_ID::Timestamp&
LogEntry::_Internal::timestamp(const LogEntry* msg) {
  return *msg->timestamp_;
}
const PROTOBUF_NAMESPACE_ID::Any&
LogEntry::_Internal::proto_payload(const LogEntry* msg) {
  return *msg->payload_.proto_payload_;
}
const PROTOBUF_NAMESPACE_ID::Struct&
LogEntry::_Internal::struct_payload(const LogEntry* msg) {
  return *msg->payload_.struct_payload_;
}
void LogEntry::clear_timestamp() {
  if (GetArenaNoVirtual() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
}
void LogEntry::set_allocated_proto_payload(PROTOBUF_NAMESPACE_ID::Any* proto_payload) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_payload();
  if (proto_payload) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      proto_payload = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, proto_payload, submessage_arena);
    }
    set_has_proto_payload();
    payload_.proto_payload_ = proto_payload;
  }
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.LogEntry.proto_payload)
}
void LogEntry::clear_proto_payload() {
  if (_internal_has_proto_payload()) {
    delete payload_.proto_payload_;
    clear_has_payload();
  }
}
void LogEntry::set_allocated_struct_payload(PROTOBUF_NAMESPACE_ID::Struct* struct_payload) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_payload();
  if (struct_payload) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(struct_payload)->GetArena();
    if (message_arena != submessage_arena) {
      struct_payload = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, struct_payload, submessage_arena);
    }
    set_has_struct_payload();
    payload_.struct_payload_ = struct_payload;
  }
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.LogEntry.struct_payload)
}
void LogEntry::clear_struct_payload() {
  if (_internal_has_struct_payload()) {
    delete payload_.struct_payload_;
    clear_has_payload();
  }
}
LogEntry::LogEntry()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.servicecontrol.v1.LogEntry)
}
LogEntry::LogEntry(const LogEntry& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  labels_.MergeFrom(from.labels_);
  insert_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_insert_id().empty()) {
    insert_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.insert_id_);
  }
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from._internal_has_timestamp()) {
    timestamp_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.timestamp_);
  } else {
    timestamp_ = nullptr;
  }
  severity_ = from.severity_;
  clear_has_payload();
  switch (from.payload_case()) {
    case kProtoPayload: {
      _internal_mutable_proto_payload()->PROTOBUF_NAMESPACE_ID::Any::MergeFrom(from._internal_proto_payload());
      break;
    }
    case kTextPayload: {
      _internal_set_text_payload(from._internal_text_payload());
      break;
    }
    case kStructPayload: {
      _internal_mutable_struct_payload()->PROTOBUF_NAMESPACE_ID::Struct::MergeFrom(from._internal_struct_payload());
      break;
    }
    case PAYLOAD_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:google.api.servicecontrol.v1.LogEntry)
}

void LogEntry::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LogEntry_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto.base);
  insert_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&severity_) -
      reinterpret_cast<char*>(&timestamp_)) + sizeof(severity_));
  clear_has_payload();
}

LogEntry::~LogEntry() {
  // @@protoc_insertion_point(destructor:google.api.servicecontrol.v1.LogEntry)
  SharedDtor();
}

void LogEntry::SharedDtor() {
  insert_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete timestamp_;
  if (has_payload()) {
    clear_payload();
  }
}

void LogEntry::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LogEntry& LogEntry::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LogEntry_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto.base);
  return *internal_default_instance();
}


void LogEntry::clear_payload() {
// @@protoc_insertion_point(one_of_clear_start:google.api.servicecontrol.v1.LogEntry)
  switch (payload_case()) {
    case kProtoPayload: {
      delete payload_.proto_payload_;
      break;
    }
    case kTextPayload: {
      payload_.text_payload_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case kStructPayload: {
      delete payload_.struct_payload_;
      break;
    }
    case PAYLOAD_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = PAYLOAD_NOT_SET;
}


void LogEntry::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.servicecontrol.v1.LogEntry)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  labels_.Clear();
  insert_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
  severity_ = 0;
  clear_payload();
  _internal_metadata_.Clear();
}

const char* LogEntry::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .google.protobuf.Any proto_payload = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_proto_payload(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string text_payload = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_text_payload(), ptr, ctx, "google.api.servicecontrol.v1.LogEntry.text_payload");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string insert_id = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_insert_id(), ptr, ctx, "google.api.servicecontrol.v1.LogEntry.insert_id");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Struct struct_payload = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_struct_payload(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string name = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_name(), ptr, ctx, "google.api.servicecontrol.v1.LogEntry.name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp timestamp = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.logging.type.LogSeverity severity = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 96)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_severity(static_cast<::google::logging::type::LogSeverity>(val));
        } else goto handle_unusual;
        continue;
      // map<string, string> labels = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 106)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&labels_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<106>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* LogEntry::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.servicecontrol.v1.LogEntry)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Any proto_payload = 2;
  if (_internal_has_proto_payload()) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, _Internal::proto_payload(this), target, stream);
  }

  // string text_payload = 3;
  if (_internal_has_text_payload()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_text_payload().data(), static_cast<int>(this->_internal_text_payload().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.LogEntry.text_payload");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_text_payload(), target);
  }

  // string insert_id = 4;
  if (this->insert_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_insert_id().data(), static_cast<int>(this->_internal_insert_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.LogEntry.insert_id");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_insert_id(), target);
  }

  // .google.protobuf.Struct struct_payload = 6;
  if (_internal_has_struct_payload()) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, _Internal::struct_payload(this), target, stream);
  }

  // string name = 10;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.LogEntry.name");
    target = stream->WriteStringMaybeAliased(
        10, this->_internal_name(), target);
  }

  // .google.protobuf.Timestamp timestamp = 11;
  if (this->has_timestamp()) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        11, _Internal::timestamp(this), target, stream);
  }

  // .google.logging.type.LogSeverity severity = 12;
  if (this->severity() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      12, this->_internal_severity(), target);
  }

  // map<string, string> labels = 13;
  if (!this->_internal_labels().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "google.api.servicecontrol.v1.LogEntry.LabelsEntry.key");
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "google.api.servicecontrol.v1.LogEntry.LabelsEntry.value");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_labels().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_labels().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_labels().begin();
          it != this->_internal_labels().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = LogEntry_LabelsEntry_DoNotUse::Funcs::InternalSerialize(13, items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_labels().begin();
          it != this->_internal_labels().end(); ++it) {
        target = LogEntry_LabelsEntry_DoNotUse::Funcs::InternalSerialize(13, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.servicecontrol.v1.LogEntry)
  return target;
}

size_t LogEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.servicecontrol.v1.LogEntry)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> labels = 13;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_labels_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
      it = this->_internal_labels().begin();
      it != this->_internal_labels().end(); ++it) {
    total_size += LogEntry_LabelsEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // string insert_id = 4;
  if (this->insert_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_insert_id());
  }

  // string name = 10;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .google.protobuf.Timestamp timestamp = 11;
  if (this->has_timestamp()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *timestamp_);
  }

  // .google.logging.type.LogSeverity severity = 12;
  if (this->severity() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_severity());
  }

  switch (payload_case()) {
    // .google.protobuf.Any proto_payload = 2;
    case kProtoPayload: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *payload_.proto_payload_);
      break;
    }
    // string text_payload = 3;
    case kTextPayload: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_text_payload());
      break;
    }
    // .google.protobuf.Struct struct_payload = 6;
    case kStructPayload: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *payload_.struct_payload_);
      break;
    }
    case PAYLOAD_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LogEntry::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.servicecontrol.v1.LogEntry)
  GOOGLE_DCHECK_NE(&from, this);
  const LogEntry* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LogEntry>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.servicecontrol.v1.LogEntry)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.servicecontrol.v1.LogEntry)
    MergeFrom(*source);
  }
}

void LogEntry::MergeFrom(const LogEntry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.servicecontrol.v1.LogEntry)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  labels_.MergeFrom(from.labels_);
  if (from.insert_id().size() > 0) {

    insert_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.insert_id_);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_timestamp()) {
    _internal_mutable_timestamp()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_timestamp());
  }
  if (from.severity() != 0) {
    _internal_set_severity(from._internal_severity());
  }
  switch (from.payload_case()) {
    case kProtoPayload: {
      _internal_mutable_proto_payload()->PROTOBUF_NAMESPACE_ID::Any::MergeFrom(from._internal_proto_payload());
      break;
    }
    case kTextPayload: {
      _internal_set_text_payload(from._internal_text_payload());
      break;
    }
    case kStructPayload: {
      _internal_mutable_struct_payload()->PROTOBUF_NAMESPACE_ID::Struct::MergeFrom(from._internal_struct_payload());
      break;
    }
    case PAYLOAD_NOT_SET: {
      break;
    }
  }
}

void LogEntry::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.servicecontrol.v1.LogEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogEntry::CopyFrom(const LogEntry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.servicecontrol.v1.LogEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogEntry::IsInitialized() const {
  return true;
}

void LogEntry::InternalSwap(LogEntry* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  labels_.Swap(&other->labels_);
  insert_id_.Swap(&other->insert_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(timestamp_, other->timestamp_);
  swap(severity_, other->severity_);
  swap(payload_, other->payload_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata LogEntry::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::servicecontrol::v1::LogEntry_LabelsEntry_DoNotUse* Arena::CreateMaybeMessage< ::google::api::servicecontrol::v1::LogEntry_LabelsEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::servicecontrol::v1::LogEntry_LabelsEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::servicecontrol::v1::LogEntry* Arena::CreateMaybeMessage< ::google::api::servicecontrol::v1::LogEntry >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::servicecontrol::v1::LogEntry >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
