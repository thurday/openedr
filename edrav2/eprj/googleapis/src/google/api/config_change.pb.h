// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/config_change.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fconfig_5fchange_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fconfig_5fchange_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fconfig_5fchange_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fconfig_5fchange_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fconfig_5fchange_2eproto;
namespace google {
namespace api {
class Advice;
class AdviceDefaultTypeInternal;
extern AdviceDefaultTypeInternal _Advice_default_instance_;
class ConfigChange;
class ConfigChangeDefaultTypeInternal;
extern ConfigChangeDefaultTypeInternal _ConfigChange_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::Advice* Arena::CreateMaybeMessage<::google::api::Advice>(Arena*);
template<> ::google::api::ConfigChange* Arena::CreateMaybeMessage<::google::api::ConfigChange>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

enum ChangeType : int {
  CHANGE_TYPE_UNSPECIFIED = 0,
  ADDED = 1,
  REMOVED = 2,
  MODIFIED = 3,
  ChangeType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ChangeType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ChangeType_IsValid(int value);
constexpr ChangeType ChangeType_MIN = CHANGE_TYPE_UNSPECIFIED;
constexpr ChangeType ChangeType_MAX = MODIFIED;
constexpr int ChangeType_ARRAYSIZE = ChangeType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChangeType_descriptor();
template<typename T>
inline const std::string& ChangeType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ChangeType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ChangeType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ChangeType_descriptor(), enum_t_value);
}
inline bool ChangeType_Parse(
    const std::string& name, ChangeType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ChangeType>(
    ChangeType_descriptor(), name, value);
}
// ===================================================================

class ConfigChange :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.ConfigChange) */ {
 public:
  ConfigChange();
  virtual ~ConfigChange();

  ConfigChange(const ConfigChange& from);
  ConfigChange(ConfigChange&& from) noexcept
    : ConfigChange() {
    *this = ::std::move(from);
  }

  inline ConfigChange& operator=(const ConfigChange& from) {
    CopyFrom(from);
    return *this;
  }
  inline ConfigChange& operator=(ConfigChange&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const ConfigChange& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ConfigChange* internal_default_instance() {
    return reinterpret_cast<const ConfigChange*>(
               &_ConfigChange_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ConfigChange& a, ConfigChange& b) {
    a.Swap(&b);
  }
  inline void Swap(ConfigChange* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ConfigChange* New() const final {
    return CreateMaybeMessage<ConfigChange>(nullptr);
  }

  ConfigChange* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ConfigChange>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ConfigChange& from);
  void MergeFrom(const ConfigChange& from);
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
  void InternalSwap(ConfigChange* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.ConfigChange";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fapi_2fconfig_5fchange_2eproto);
    return ::descriptor_table_google_2fapi_2fconfig_5fchange_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAdvicesFieldNumber = 5,
    kElementFieldNumber = 1,
    kOldValueFieldNumber = 2,
    kNewValueFieldNumber = 3,
    kChangeTypeFieldNumber = 4,
  };
  // repeated .google.api.Advice advices = 5;
  int advices_size() const;
  private:
  int _internal_advices_size() const;
  public:
  void clear_advices();
  ::google::api::Advice* mutable_advices(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Advice >*
      mutable_advices();
  private:
  const ::google::api::Advice& _internal_advices(int index) const;
  ::google::api::Advice* _internal_add_advices();
  public:
  const ::google::api::Advice& advices(int index) const;
  ::google::api::Advice* add_advices();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Advice >&
      advices() const;

  // string element = 1;
  void clear_element();
  const std::string& element() const;
  void set_element(const std::string& value);
  void set_element(std::string&& value);
  void set_element(const char* value);
  void set_element(const char* value, size_t size);
  std::string* mutable_element();
  std::string* release_element();
  void set_allocated_element(std::string* element);
  private:
  const std::string& _internal_element() const;
  void _internal_set_element(const std::string& value);
  std::string* _internal_mutable_element();
  public:

  // string old_value = 2;
  void clear_old_value();
  const std::string& old_value() const;
  void set_old_value(const std::string& value);
  void set_old_value(std::string&& value);
  void set_old_value(const char* value);
  void set_old_value(const char* value, size_t size);
  std::string* mutable_old_value();
  std::string* release_old_value();
  void set_allocated_old_value(std::string* old_value);
  private:
  const std::string& _internal_old_value() const;
  void _internal_set_old_value(const std::string& value);
  std::string* _internal_mutable_old_value();
  public:

  // string new_value = 3;
  void clear_new_value();
  const std::string& new_value() const;
  void set_new_value(const std::string& value);
  void set_new_value(std::string&& value);
  void set_new_value(const char* value);
  void set_new_value(const char* value, size_t size);
  std::string* mutable_new_value();
  std::string* release_new_value();
  void set_allocated_new_value(std::string* new_value);
  private:
  const std::string& _internal_new_value() const;
  void _internal_set_new_value(const std::string& value);
  std::string* _internal_mutable_new_value();
  public:

  // .google.api.ChangeType change_type = 4;
  void clear_change_type();
  ::google::api::ChangeType change_type() const;
  void set_change_type(::google::api::ChangeType value);
  private:
  ::google::api::ChangeType _internal_change_type() const;
  void _internal_set_change_type(::google::api::ChangeType value);
  public:

  // @@protoc_insertion_point(class_scope:google.api.ConfigChange)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Advice > advices_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr element_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr old_value_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr new_value_;
  int change_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fconfig_5fchange_2eproto;
};
// -------------------------------------------------------------------

class Advice :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.Advice) */ {
 public:
  Advice();
  virtual ~Advice();

  Advice(const Advice& from);
  Advice(Advice&& from) noexcept
    : Advice() {
    *this = ::std::move(from);
  }

  inline Advice& operator=(const Advice& from) {
    CopyFrom(from);
    return *this;
  }
  inline Advice& operator=(Advice&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Advice& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Advice* internal_default_instance() {
    return reinterpret_cast<const Advice*>(
               &_Advice_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Advice& a, Advice& b) {
    a.Swap(&b);
  }
  inline void Swap(Advice* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Advice* New() const final {
    return CreateMaybeMessage<Advice>(nullptr);
  }

  Advice* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Advice>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Advice& from);
  void MergeFrom(const Advice& from);
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
  void InternalSwap(Advice* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.Advice";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fapi_2fconfig_5fchange_2eproto);
    return ::descriptor_table_google_2fapi_2fconfig_5fchange_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDescriptionFieldNumber = 2,
  };
  // string description = 2;
  void clear_description();
  const std::string& description() const;
  void set_description(const std::string& value);
  void set_description(std::string&& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  std::string* mutable_description();
  std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // @@protoc_insertion_point(class_scope:google.api.Advice)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fconfig_5fchange_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ConfigChange

// string element = 1;
inline void ConfigChange::clear_element() {
  element_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ConfigChange::element() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.element)
  return _internal_element();
}
inline void ConfigChange::set_element(const std::string& value) {
  _internal_set_element(value);
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.element)
}
inline std::string* ConfigChange::mutable_element() {
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.element)
  return _internal_mutable_element();
}
inline const std::string& ConfigChange::_internal_element() const {
  return element_.GetNoArena();
}
inline void ConfigChange::_internal_set_element(const std::string& value) {
  
  element_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ConfigChange::set_element(std::string&& value) {
  
  element_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.ConfigChange.element)
}
inline void ConfigChange::set_element(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  element_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.ConfigChange.element)
}
inline void ConfigChange::set_element(const char* value, size_t size) {
  
  element_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.ConfigChange.element)
}
inline std::string* ConfigChange::_internal_mutable_element() {
  
  return element_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ConfigChange::release_element() {
  // @@protoc_insertion_point(field_release:google.api.ConfigChange.element)
  
  return element_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ConfigChange::set_allocated_element(std::string* element) {
  if (element != nullptr) {
    
  } else {
    
  }
  element_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), element);
  // @@protoc_insertion_point(field_set_allocated:google.api.ConfigChange.element)
}

// string old_value = 2;
inline void ConfigChange::clear_old_value() {
  old_value_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ConfigChange::old_value() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.old_value)
  return _internal_old_value();
}
inline void ConfigChange::set_old_value(const std::string& value) {
  _internal_set_old_value(value);
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.old_value)
}
inline std::string* ConfigChange::mutable_old_value() {
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.old_value)
  return _internal_mutable_old_value();
}
inline const std::string& ConfigChange::_internal_old_value() const {
  return old_value_.GetNoArena();
}
inline void ConfigChange::_internal_set_old_value(const std::string& value) {
  
  old_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ConfigChange::set_old_value(std::string&& value) {
  
  old_value_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.ConfigChange.old_value)
}
inline void ConfigChange::set_old_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  old_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.ConfigChange.old_value)
}
inline void ConfigChange::set_old_value(const char* value, size_t size) {
  
  old_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.ConfigChange.old_value)
}
inline std::string* ConfigChange::_internal_mutable_old_value() {
  
  return old_value_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ConfigChange::release_old_value() {
  // @@protoc_insertion_point(field_release:google.api.ConfigChange.old_value)
  
  return old_value_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ConfigChange::set_allocated_old_value(std::string* old_value) {
  if (old_value != nullptr) {
    
  } else {
    
  }
  old_value_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), old_value);
  // @@protoc_insertion_point(field_set_allocated:google.api.ConfigChange.old_value)
}

// string new_value = 3;
inline void ConfigChange::clear_new_value() {
  new_value_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ConfigChange::new_value() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.new_value)
  return _internal_new_value();
}
inline void ConfigChange::set_new_value(const std::string& value) {
  _internal_set_new_value(value);
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.new_value)
}
inline std::string* ConfigChange::mutable_new_value() {
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.new_value)
  return _internal_mutable_new_value();
}
inline const std::string& ConfigChange::_internal_new_value() const {
  return new_value_.GetNoArena();
}
inline void ConfigChange::_internal_set_new_value(const std::string& value) {
  
  new_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ConfigChange::set_new_value(std::string&& value) {
  
  new_value_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.ConfigChange.new_value)
}
inline void ConfigChange::set_new_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  new_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.ConfigChange.new_value)
}
inline void ConfigChange::set_new_value(const char* value, size_t size) {
  
  new_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.ConfigChange.new_value)
}
inline std::string* ConfigChange::_internal_mutable_new_value() {
  
  return new_value_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ConfigChange::release_new_value() {
  // @@protoc_insertion_point(field_release:google.api.ConfigChange.new_value)
  
  return new_value_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ConfigChange::set_allocated_new_value(std::string* new_value) {
  if (new_value != nullptr) {
    
  } else {
    
  }
  new_value_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), new_value);
  // @@protoc_insertion_point(field_set_allocated:google.api.ConfigChange.new_value)
}

// .google.api.ChangeType change_type = 4;
inline void ConfigChange::clear_change_type() {
  change_type_ = 0;
}
inline ::google::api::ChangeType ConfigChange::_internal_change_type() const {
  return static_cast< ::google::api::ChangeType >(change_type_);
}
inline ::google::api::ChangeType ConfigChange::change_type() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.change_type)
  return _internal_change_type();
}
inline void ConfigChange::_internal_set_change_type(::google::api::ChangeType value) {
  
  change_type_ = value;
}
inline void ConfigChange::set_change_type(::google::api::ChangeType value) {
  _internal_set_change_type(value);
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.change_type)
}

// repeated .google.api.Advice advices = 5;
inline int ConfigChange::_internal_advices_size() const {
  return advices_.size();
}
inline int ConfigChange::advices_size() const {
  return _internal_advices_size();
}
inline void ConfigChange::clear_advices() {
  advices_.Clear();
}
inline ::google::api::Advice* ConfigChange::mutable_advices(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.advices)
  return advices_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Advice >*
ConfigChange::mutable_advices() {
  // @@protoc_insertion_point(field_mutable_list:google.api.ConfigChange.advices)
  return &advices_;
}
inline const ::google::api::Advice& ConfigChange::_internal_advices(int index) const {
  return advices_.Get(index);
}
inline const ::google::api::Advice& ConfigChange::advices(int index) const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.advices)
  return _internal_advices(index);
}
inline ::google::api::Advice* ConfigChange::_internal_add_advices() {
  return advices_.Add();
}
inline ::google::api::Advice* ConfigChange::add_advices() {
  // @@protoc_insertion_point(field_add:google.api.ConfigChange.advices)
  return _internal_add_advices();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Advice >&
ConfigChange::advices() const {
  // @@protoc_insertion_point(field_list:google.api.ConfigChange.advices)
  return advices_;
}

// -------------------------------------------------------------------

// Advice

// string description = 2;
inline void Advice::clear_description() {
  description_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Advice::description() const {
  // @@protoc_insertion_point(field_get:google.api.Advice.description)
  return _internal_description();
}
inline void Advice::set_description(const std::string& value) {
  _internal_set_description(value);
  // @@protoc_insertion_point(field_set:google.api.Advice.description)
}
inline std::string* Advice::mutable_description() {
  // @@protoc_insertion_point(field_mutable:google.api.Advice.description)
  return _internal_mutable_description();
}
inline const std::string& Advice::_internal_description() const {
  return description_.GetNoArena();
}
inline void Advice::_internal_set_description(const std::string& value) {
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Advice::set_description(std::string&& value) {
  
  description_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Advice.description)
}
inline void Advice::set_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Advice.description)
}
inline void Advice::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Advice.description)
}
inline std::string* Advice::_internal_mutable_description() {
  
  return description_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Advice::release_description() {
  // @@protoc_insertion_point(field_release:google.api.Advice.description)
  
  return description_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Advice::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:google.api.Advice.description)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::google::api::ChangeType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::api::ChangeType>() {
  return ::google::api::ChangeType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fconfig_5fchange_2eproto
