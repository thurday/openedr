// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/color.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fcolor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fcolor_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/wrappers.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2ftype_2fcolor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2ftype_2fcolor_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2fcolor_2eproto;
namespace google {
namespace type {
class Color;
class ColorDefaultTypeInternal;
extern ColorDefaultTypeInternal _Color_default_instance_;
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::type::Color* Arena::CreateMaybeMessage<::google::type::Color>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace type {

// ===================================================================

class Color :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.type.Color) */ {
 public:
  Color();
  virtual ~Color();

  Color(const Color& from);
  Color(Color&& from) noexcept
    : Color() {
    *this = ::std::move(from);
  }

  inline Color& operator=(const Color& from) {
    CopyFrom(from);
    return *this;
  }
  inline Color& operator=(Color&& from) noexcept {
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
  static const Color& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Color* internal_default_instance() {
    return reinterpret_cast<const Color*>(
               &_Color_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Color& a, Color& b) {
    a.Swap(&b);
  }
  inline void Swap(Color* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Color* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Color* New() const final {
    return CreateMaybeMessage<Color>(nullptr);
  }

  Color* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Color>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Color& from);
  void MergeFrom(const Color& from);
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
  void InternalSwap(Color* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.type.Color";
  }
  protected:
  explicit Color(::PROTOBUF_NAMESPACE_ID::Arena* arena);
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2ftype_2fcolor_2eproto);
    return ::descriptor_table_google_2ftype_2fcolor_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAlphaFieldNumber = 4,
    kRedFieldNumber = 1,
    kGreenFieldNumber = 2,
    kBlueFieldNumber = 3,
  };
  // .google.protobuf.FloatValue alpha = 4;
  bool has_alpha() const;
  private:
  bool _internal_has_alpha() const;
  public:
  void clear_alpha();
  const PROTOBUF_NAMESPACE_ID::FloatValue& alpha() const;
  PROTOBUF_NAMESPACE_ID::FloatValue* release_alpha();
  PROTOBUF_NAMESPACE_ID::FloatValue* mutable_alpha();
  void set_allocated_alpha(PROTOBUF_NAMESPACE_ID::FloatValue* alpha);
  private:
  const PROTOBUF_NAMESPACE_ID::FloatValue& _internal_alpha() const;
  PROTOBUF_NAMESPACE_ID::FloatValue* _internal_mutable_alpha();
  public:
  void unsafe_arena_set_allocated_alpha(
      PROTOBUF_NAMESPACE_ID::FloatValue* alpha);
  PROTOBUF_NAMESPACE_ID::FloatValue* unsafe_arena_release_alpha();

  // float red = 1;
  void clear_red();
  float red() const;
  void set_red(float value);
  private:
  float _internal_red() const;
  void _internal_set_red(float value);
  public:

  // float green = 2;
  void clear_green();
  float green() const;
  void set_green(float value);
  private:
  float _internal_green() const;
  void _internal_set_green(float value);
  public:

  // float blue = 3;
  void clear_blue();
  float blue() const;
  void set_blue(float value);
  private:
  float _internal_blue() const;
  void _internal_set_blue(float value);
  public:

  // @@protoc_insertion_point(class_scope:google.type.Color)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  PROTOBUF_NAMESPACE_ID::FloatValue* alpha_;
  float red_;
  float green_;
  float blue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2ftype_2fcolor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Color

// float red = 1;
inline void Color::clear_red() {
  red_ = 0;
}
inline float Color::_internal_red() const {
  return red_;
}
inline float Color::red() const {
  // @@protoc_insertion_point(field_get:google.type.Color.red)
  return _internal_red();
}
inline void Color::_internal_set_red(float value) {
  
  red_ = value;
}
inline void Color::set_red(float value) {
  _internal_set_red(value);
  // @@protoc_insertion_point(field_set:google.type.Color.red)
}

// float green = 2;
inline void Color::clear_green() {
  green_ = 0;
}
inline float Color::_internal_green() const {
  return green_;
}
inline float Color::green() const {
  // @@protoc_insertion_point(field_get:google.type.Color.green)
  return _internal_green();
}
inline void Color::_internal_set_green(float value) {
  
  green_ = value;
}
inline void Color::set_green(float value) {
  _internal_set_green(value);
  // @@protoc_insertion_point(field_set:google.type.Color.green)
}

// float blue = 3;
inline void Color::clear_blue() {
  blue_ = 0;
}
inline float Color::_internal_blue() const {
  return blue_;
}
inline float Color::blue() const {
  // @@protoc_insertion_point(field_get:google.type.Color.blue)
  return _internal_blue();
}
inline void Color::_internal_set_blue(float value) {
  
  blue_ = value;
}
inline void Color::set_blue(float value) {
  _internal_set_blue(value);
  // @@protoc_insertion_point(field_set:google.type.Color.blue)
}

// .google.protobuf.FloatValue alpha = 4;
inline bool Color::_internal_has_alpha() const {
  return this != internal_default_instance() && alpha_ != nullptr;
}
inline bool Color::has_alpha() const {
  return _internal_has_alpha();
}
inline const PROTOBUF_NAMESPACE_ID::FloatValue& Color::_internal_alpha() const {
  const PROTOBUF_NAMESPACE_ID::FloatValue* p = alpha_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::FloatValue*>(
      &PROTOBUF_NAMESPACE_ID::_FloatValue_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::FloatValue& Color::alpha() const {
  // @@protoc_insertion_point(field_get:google.type.Color.alpha)
  return _internal_alpha();
}
inline PROTOBUF_NAMESPACE_ID::FloatValue* Color::release_alpha() {
  auto temp = unsafe_arena_release_alpha();
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::FloatValue* Color::unsafe_arena_release_alpha() {
  // @@protoc_insertion_point(field_release:google.type.Color.alpha)
  
  PROTOBUF_NAMESPACE_ID::FloatValue* temp = alpha_;
  alpha_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::FloatValue* Color::_internal_mutable_alpha() {
  
  if (alpha_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::FloatValue>(GetArenaNoVirtual());
    alpha_ = p;
  }
  return alpha_;
}
inline PROTOBUF_NAMESPACE_ID::FloatValue* Color::mutable_alpha() {
  // @@protoc_insertion_point(field_mutable:google.type.Color.alpha)
  return _internal_mutable_alpha();
}
inline void Color::set_allocated_alpha(PROTOBUF_NAMESPACE_ID::FloatValue* alpha) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(alpha_);
  }
  if (alpha) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(alpha)->GetArena();
    if (message_arena != submessage_arena) {
      alpha = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, alpha, submessage_arena);
    }
    
  } else {
    
  }
  alpha_ = alpha;
  // @@protoc_insertion_point(field_set_allocated:google.type.Color.alpha)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fcolor_2eproto
