// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/servicecontrol/v1/check_error.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto;
namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {
class CheckError;
class CheckErrorDefaultTypeInternal;
extern CheckErrorDefaultTypeInternal _CheckError_default_instance_;
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::servicecontrol::v1::CheckError* Arena::CreateMaybeMessage<::google::api::servicecontrol::v1::CheckError>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {

enum CheckError_Code : int {
  CheckError_Code_ERROR_CODE_UNSPECIFIED = 0,
  CheckError_Code_NOT_FOUND = 5,
  CheckError_Code_PERMISSION_DENIED = 7,
  CheckError_Code_RESOURCE_EXHAUSTED = 8,
  CheckError_Code_SERVICE_NOT_ACTIVATED = 104,
  CheckError_Code_BILLING_DISABLED = 107,
  CheckError_Code_PROJECT_DELETED = 108,
  CheckError_Code_PROJECT_INVALID = 114,
  CheckError_Code_IP_ADDRESS_BLOCKED = 109,
  CheckError_Code_REFERER_BLOCKED = 110,
  CheckError_Code_CLIENT_APP_BLOCKED = 111,
  CheckError_Code_API_TARGET_BLOCKED = 122,
  CheckError_Code_API_KEY_INVALID = 105,
  CheckError_Code_API_KEY_EXPIRED = 112,
  CheckError_Code_API_KEY_NOT_FOUND = 113,
  CheckError_Code_NAMESPACE_LOOKUP_UNAVAILABLE = 300,
  CheckError_Code_SERVICE_STATUS_UNAVAILABLE = 301,
  CheckError_Code_BILLING_STATUS_UNAVAILABLE = 302,
  CheckError_Code_CheckError_Code_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  CheckError_Code_CheckError_Code_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool CheckError_Code_IsValid(int value);
constexpr CheckError_Code CheckError_Code_Code_MIN = CheckError_Code_ERROR_CODE_UNSPECIFIED;
constexpr CheckError_Code CheckError_Code_Code_MAX = CheckError_Code_BILLING_STATUS_UNAVAILABLE;
constexpr int CheckError_Code_Code_ARRAYSIZE = CheckError_Code_Code_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CheckError_Code_descriptor();
template<typename T>
inline const std::string& CheckError_Code_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CheckError_Code>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CheckError_Code_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CheckError_Code_descriptor(), enum_t_value);
}
inline bool CheckError_Code_Parse(
    const std::string& name, CheckError_Code* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CheckError_Code>(
    CheckError_Code_descriptor(), name, value);
}
// ===================================================================

class CheckError :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.servicecontrol.v1.CheckError) */ {
 public:
  CheckError();
  virtual ~CheckError();

  CheckError(const CheckError& from);
  CheckError(CheckError&& from) noexcept
    : CheckError() {
    *this = ::std::move(from);
  }

  inline CheckError& operator=(const CheckError& from) {
    CopyFrom(from);
    return *this;
  }
  inline CheckError& operator=(CheckError&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CheckError& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CheckError* internal_default_instance() {
    return reinterpret_cast<const CheckError*>(
               &_CheckError_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CheckError& a, CheckError& b) {
    a.Swap(&b);
  }
  inline void Swap(CheckError* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CheckError* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CheckError* New() const final {
    return CreateMaybeMessage<CheckError>(nullptr);
  }

  CheckError* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CheckError>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CheckError& from);
  void MergeFrom(const CheckError& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CheckError* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.servicecontrol.v1.CheckError";
  }
  protected:
  explicit CheckError(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto);
    return ::descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef CheckError_Code Code;
  static constexpr Code ERROR_CODE_UNSPECIFIED =
    CheckError_Code_ERROR_CODE_UNSPECIFIED;
  static constexpr Code NOT_FOUND =
    CheckError_Code_NOT_FOUND;
  static constexpr Code PERMISSION_DENIED =
    CheckError_Code_PERMISSION_DENIED;
  static constexpr Code RESOURCE_EXHAUSTED =
    CheckError_Code_RESOURCE_EXHAUSTED;
  static constexpr Code SERVICE_NOT_ACTIVATED =
    CheckError_Code_SERVICE_NOT_ACTIVATED;
  static constexpr Code BILLING_DISABLED =
    CheckError_Code_BILLING_DISABLED;
  static constexpr Code PROJECT_DELETED =
    CheckError_Code_PROJECT_DELETED;
  static constexpr Code PROJECT_INVALID =
    CheckError_Code_PROJECT_INVALID;
  static constexpr Code IP_ADDRESS_BLOCKED =
    CheckError_Code_IP_ADDRESS_BLOCKED;
  static constexpr Code REFERER_BLOCKED =
    CheckError_Code_REFERER_BLOCKED;
  static constexpr Code CLIENT_APP_BLOCKED =
    CheckError_Code_CLIENT_APP_BLOCKED;
  static constexpr Code API_TARGET_BLOCKED =
    CheckError_Code_API_TARGET_BLOCKED;
  static constexpr Code API_KEY_INVALID =
    CheckError_Code_API_KEY_INVALID;
  static constexpr Code API_KEY_EXPIRED =
    CheckError_Code_API_KEY_EXPIRED;
  static constexpr Code API_KEY_NOT_FOUND =
    CheckError_Code_API_KEY_NOT_FOUND;
  static constexpr Code NAMESPACE_LOOKUP_UNAVAILABLE =
    CheckError_Code_NAMESPACE_LOOKUP_UNAVAILABLE;
  static constexpr Code SERVICE_STATUS_UNAVAILABLE =
    CheckError_Code_SERVICE_STATUS_UNAVAILABLE;
  static constexpr Code BILLING_STATUS_UNAVAILABLE =
    CheckError_Code_BILLING_STATUS_UNAVAILABLE;
  static inline bool Code_IsValid(int value) {
    return CheckError_Code_IsValid(value);
  }
  static constexpr Code Code_MIN =
    CheckError_Code_Code_MIN;
  static constexpr Code Code_MAX =
    CheckError_Code_Code_MAX;
  static constexpr int Code_ARRAYSIZE =
    CheckError_Code_Code_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Code_descriptor() {
    return CheckError_Code_descriptor();
  }
  template<typename T>
  static inline const std::string& Code_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Code>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Code_Name.");
    return CheckError_Code_Name(enum_t_value);
  }
  static inline bool Code_Parse(const std::string& name,
      Code* value) {
    return CheckError_Code_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kDetailFieldNumber = 2,
    kCodeFieldNumber = 1,
  };
  // string detail = 2;
  void clear_detail();
  const std::string& detail() const;
  void set_detail(const std::string& value);
  void set_detail(std::string&& value);
  void set_detail(const char* value);
  void set_detail(const char* value, size_t size);
  std::string* mutable_detail();
  std::string* release_detail();
  void set_allocated_detail(std::string* detail);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_detail();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_detail(
      std::string* detail);
  private:
  const std::string& _internal_detail() const;
  void _internal_set_detail(const std::string& value);
  std::string* _internal_mutable_detail();
  public:

  // .google.api.servicecontrol.v1.CheckError.Code code = 1;
  void clear_code();
  ::google::api::servicecontrol::v1::CheckError_Code code() const;
  void set_code(::google::api::servicecontrol::v1::CheckError_Code value);
  private:
  ::google::api::servicecontrol::v1::CheckError_Code _internal_code() const;
  void _internal_set_code(::google::api::servicecontrol::v1::CheckError_Code value);
  public:

  // @@protoc_insertion_point(class_scope:google.api.servicecontrol.v1.CheckError)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr detail_;
  int code_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CheckError

// .google.api.servicecontrol.v1.CheckError.Code code = 1;
inline void CheckError::clear_code() {
  code_ = 0;
}
inline ::google::api::servicecontrol::v1::CheckError_Code CheckError::_internal_code() const {
  return static_cast< ::google::api::servicecontrol::v1::CheckError_Code >(code_);
}
inline ::google::api::servicecontrol::v1::CheckError_Code CheckError::code() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.CheckError.code)
  return _internal_code();
}
inline void CheckError::_internal_set_code(::google::api::servicecontrol::v1::CheckError_Code value) {
  
  code_ = value;
}
inline void CheckError::set_code(::google::api::servicecontrol::v1::CheckError_Code value) {
  _internal_set_code(value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.CheckError.code)
}

// string detail = 2;
inline void CheckError::clear_detail() {
  detail_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const std::string& CheckError::detail() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.CheckError.detail)
  return _internal_detail();
}
inline void CheckError::set_detail(const std::string& value) {
  _internal_set_detail(value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.CheckError.detail)
}
inline std::string* CheckError::mutable_detail() {
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.CheckError.detail)
  return _internal_mutable_detail();
}
inline const std::string& CheckError::_internal_detail() const {
  return detail_.Get();
}
inline void CheckError::_internal_set_detail(const std::string& value) {
  
  detail_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
}
inline void CheckError::set_detail(std::string&& value) {
  
  detail_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.api.servicecontrol.v1.CheckError.detail)
}
inline void CheckError::set_detail(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  detail_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.servicecontrol.v1.CheckError.detail)
}
inline void CheckError::set_detail(const char* value,
    size_t size) {
  
  detail_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.servicecontrol.v1.CheckError.detail)
}
inline std::string* CheckError::_internal_mutable_detail() {
  
  return detail_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline std::string* CheckError::release_detail() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.CheckError.detail)
  
  return detail_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void CheckError::set_allocated_detail(std::string* detail) {
  if (detail != nullptr) {
    
  } else {
    
  }
  detail_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), detail,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.CheckError.detail)
}
inline std::string* CheckError::unsafe_arena_release_detail() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.servicecontrol.v1.CheckError.detail)
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  
  return detail_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void CheckError::unsafe_arena_set_allocated_detail(
    std::string* detail) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (detail != nullptr) {
    
  } else {
    
  }
  detail_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      detail, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.servicecontrol.v1.CheckError.detail)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::google::api::servicecontrol::v1::CheckError_Code> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::api::servicecontrol::v1::CheckError_Code>() {
  return ::google::api::servicecontrol::v1::CheckError_Code_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto
