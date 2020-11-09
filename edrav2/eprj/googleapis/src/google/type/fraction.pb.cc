// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/fraction.proto

#include "google/type/fraction.pb.h"

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
namespace google {
namespace type {
class FractionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Fraction> _instance;
} _Fraction_default_instance_;
}  // namespace type
}  // namespace google
static void InitDefaultsscc_info_Fraction_google_2ftype_2ffraction_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::type::_Fraction_default_instance_;
    new (ptr) ::google::type::Fraction();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::type::Fraction::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Fraction_google_2ftype_2ffraction_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Fraction_google_2ftype_2ffraction_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2ftype_2ffraction_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2ftype_2ffraction_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2ftype_2ffraction_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2ftype_2ffraction_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::type::Fraction, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::type::Fraction, numerator_),
  PROTOBUF_FIELD_OFFSET(::google::type::Fraction, denominator_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::type::Fraction)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::type::_Fraction_default_instance_),
};

const char descriptor_table_protodef_google_2ftype_2ffraction_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032google/type/fraction.proto\022\013google.typ"
  "e\"2\n\010Fraction\022\021\n\tnumerator\030\001 \001(\003\022\023\n\013deno"
  "minator\030\002 \001(\003Bf\n\017com.google.typeB\rFracti"
  "onProtoP\001Z<google.golang.org/genproto/go"
  "ogleapis/type/fraction;fraction\242\002\003GTPb\006p"
  "roto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2ftype_2ffraction_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2ftype_2ffraction_2eproto_sccs[1] = {
  &scc_info_Fraction_google_2ftype_2ffraction_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2ftype_2ffraction_2eproto_once;
static bool descriptor_table_google_2ftype_2ffraction_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2ffraction_2eproto = {
  &descriptor_table_google_2ftype_2ffraction_2eproto_initialized, descriptor_table_protodef_google_2ftype_2ffraction_2eproto, "google/type/fraction.proto", 205,
  &descriptor_table_google_2ftype_2ffraction_2eproto_once, descriptor_table_google_2ftype_2ffraction_2eproto_sccs, descriptor_table_google_2ftype_2ffraction_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_google_2ftype_2ffraction_2eproto::offsets,
  file_level_metadata_google_2ftype_2ffraction_2eproto, 1, file_level_enum_descriptors_google_2ftype_2ffraction_2eproto, file_level_service_descriptors_google_2ftype_2ffraction_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2ftype_2ffraction_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2ftype_2ffraction_2eproto), true);
namespace google {
namespace type {

// ===================================================================

void Fraction::InitAsDefaultInstance() {
}
class Fraction::_Internal {
 public:
};

Fraction::Fraction()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.type.Fraction)
}
Fraction::Fraction(const Fraction& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&numerator_, &from.numerator_,
    static_cast<size_t>(reinterpret_cast<char*>(&denominator_) -
    reinterpret_cast<char*>(&numerator_)) + sizeof(denominator_));
  // @@protoc_insertion_point(copy_constructor:google.type.Fraction)
}

void Fraction::SharedCtor() {
  ::memset(&numerator_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&denominator_) -
      reinterpret_cast<char*>(&numerator_)) + sizeof(denominator_));
}

Fraction::~Fraction() {
  // @@protoc_insertion_point(destructor:google.type.Fraction)
  SharedDtor();
}

void Fraction::SharedDtor() {
}

void Fraction::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Fraction& Fraction::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Fraction_google_2ftype_2ffraction_2eproto.base);
  return *internal_default_instance();
}


void Fraction::Clear() {
// @@protoc_insertion_point(message_clear_start:google.type.Fraction)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&numerator_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&denominator_) -
      reinterpret_cast<char*>(&numerator_)) + sizeof(denominator_));
  _internal_metadata_.Clear();
}

const char* Fraction::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int64 numerator = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          numerator_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 denominator = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          denominator_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Fraction::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.type.Fraction)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 numerator = 1;
  if (this->numerator() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_numerator(), target);
  }

  // int64 denominator = 2;
  if (this->denominator() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_denominator(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.type.Fraction)
  return target;
}

size_t Fraction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.type.Fraction)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 numerator = 1;
  if (this->numerator() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_numerator());
  }

  // int64 denominator = 2;
  if (this->denominator() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_denominator());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Fraction::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.type.Fraction)
  GOOGLE_DCHECK_NE(&from, this);
  const Fraction* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Fraction>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.type.Fraction)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.type.Fraction)
    MergeFrom(*source);
  }
}

void Fraction::MergeFrom(const Fraction& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.type.Fraction)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.numerator() != 0) {
    _internal_set_numerator(from._internal_numerator());
  }
  if (from.denominator() != 0) {
    _internal_set_denominator(from._internal_denominator());
  }
}

void Fraction::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.type.Fraction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Fraction::CopyFrom(const Fraction& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.type.Fraction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Fraction::IsInitialized() const {
  return true;
}

void Fraction::InternalSwap(Fraction* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(numerator_, other->numerator_);
  swap(denominator_, other->denominator_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Fraction::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::type::Fraction* Arena::CreateMaybeMessage< ::google::type::Fraction >(Arena* arena) {
  return Arena::CreateInternal< ::google::type::Fraction >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
