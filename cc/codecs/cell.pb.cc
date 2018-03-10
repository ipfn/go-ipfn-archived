// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cell.proto

#include "cell.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace ipfn {
class CellDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Cell>
      _instance;
} _Cell_default_instance_;
class BondDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Bond>
      _instance;
} _Bond_default_instance_;
}  // namespace ipfn
namespace protobuf_cell_2eproto {
void InitDefaultsCellImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_cell_2eproto::InitDefaultsBond();
  {
    void* ptr = &::ipfn::_Cell_default_instance_;
    new (ptr) ::ipfn::Cell();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ipfn::Cell::InitAsDefaultInstance();
}

void InitDefaultsCell() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsCellImpl);
}

void InitDefaultsBondImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::ipfn::_Bond_default_instance_;
    new (ptr) ::ipfn::Bond();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ipfn::Bond::InitAsDefaultInstance();
}

void InitDefaultsBond() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsBondImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ipfn::Cell, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ipfn::Cell, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ipfn::Cell, soul_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ipfn::Cell, value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ipfn::Cell, bonds_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ipfn::Cell, body_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ipfn::Bond, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ipfn::Bond, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ipfn::Bond, kind_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ipfn::Bond, from_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ipfn::Bond, to_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ipfn::Cell)},
  { 10, -1, sizeof(::ipfn::Bond)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ipfn::_Cell_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::ipfn::_Bond_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cell.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\ncell.proto\022\004ipfn\"f\n\004Cell\022\014\n\004name\030\001 \001(\t"
      "\022\014\n\004soul\030\002 \001(\t\022\r\n\005value\030\003 \001(\014\022\031\n\005bonds\030\004"
      " \003(\0132\n.ipfn.Bond\022\030\n\004body\030\005 \003(\0132\n.ipfn.Ce"
      "ll\"<\n\004Bond\022\014\n\004name\030\001 \001(\t\022\014\n\004kind\030\002 \001(\t\022\014"
      "\n\004from\030\003 \001(\t\022\n\n\002to\030\004 \001(\tB4Z2github.com/i"
      "pfn/go-ipfn/cells/codecs/cellpb;cellpbb\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 246);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cell.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_cell_2eproto
namespace ipfn {

// ===================================================================

void Cell::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cell::kNameFieldNumber;
const int Cell::kSoulFieldNumber;
const int Cell::kValueFieldNumber;
const int Cell::kBondsFieldNumber;
const int Cell::kBodyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cell::Cell()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_cell_2eproto::InitDefaultsCell();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:ipfn.Cell)
}
Cell::Cell(const Cell& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      bonds_(from.bonds_),
      body_(from.body_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  soul_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.soul().size() > 0) {
    soul_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.soul_);
  }
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.value().size() > 0) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:ipfn.Cell)
}

void Cell::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  soul_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Cell::~Cell() {
  // @@protoc_insertion_point(destructor:ipfn.Cell)
  SharedDtor();
}

void Cell::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  soul_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Cell::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cell::descriptor() {
  ::protobuf_cell_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cell_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Cell& Cell::default_instance() {
  ::protobuf_cell_2eproto::InitDefaultsCell();
  return *internal_default_instance();
}

Cell* Cell::New(::google::protobuf::Arena* arena) const {
  Cell* n = new Cell;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cell::Clear() {
// @@protoc_insertion_point(message_clear_start:ipfn.Cell)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  bonds_.Clear();
  body_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  soul_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Cell::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ipfn.Cell)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ipfn.Cell.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string soul = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_soul()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->soul().data(), static_cast<int>(this->soul().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ipfn.Cell.soul"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes value = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .ipfn.Bond bonds = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_bonds()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .ipfn.Cell body = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_body()));
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
  // @@protoc_insertion_point(parse_success:ipfn.Cell)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ipfn.Cell)
  return false;
#undef DO_
}

void Cell::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ipfn.Cell)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Cell.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string soul = 2;
  if (this->soul().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->soul().data(), static_cast<int>(this->soul().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Cell.soul");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->soul(), output);
  }

  // bytes value = 3;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->value(), output);
  }

  // repeated .ipfn.Bond bonds = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->bonds_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->bonds(static_cast<int>(i)), output);
  }

  // repeated .ipfn.Cell body = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->body_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->body(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ipfn.Cell)
}

::google::protobuf::uint8* Cell::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ipfn.Cell)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Cell.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // string soul = 2;
  if (this->soul().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->soul().data(), static_cast<int>(this->soul().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Cell.soul");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->soul(), target);
  }

  // bytes value = 3;
  if (this->value().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->value(), target);
  }

  // repeated .ipfn.Bond bonds = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->bonds_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->bonds(static_cast<int>(i)), deterministic, target);
  }

  // repeated .ipfn.Cell body = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->body_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->body(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ipfn.Cell)
  return target;
}

size_t Cell::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ipfn.Cell)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .ipfn.Bond bonds = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->bonds_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->bonds(static_cast<int>(i)));
    }
  }

  // repeated .ipfn.Cell body = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->body_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->body(static_cast<int>(i)));
    }
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string soul = 2;
  if (this->soul().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->soul());
  }

  // bytes value = 3;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Cell::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ipfn.Cell)
  GOOGLE_DCHECK_NE(&from, this);
  const Cell* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Cell>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ipfn.Cell)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ipfn.Cell)
    MergeFrom(*source);
  }
}

void Cell::MergeFrom(const Cell& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ipfn.Cell)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  bonds_.MergeFrom(from.bonds_);
  body_.MergeFrom(from.body_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.soul().size() > 0) {

    soul_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.soul_);
  }
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
}

void Cell::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ipfn.Cell)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Cell::CopyFrom(const Cell& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ipfn.Cell)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Cell::IsInitialized() const {
  return true;
}

void Cell::Swap(Cell* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cell::InternalSwap(Cell* other) {
  using std::swap;
  bonds_.InternalSwap(&other->bonds_);
  body_.InternalSwap(&other->body_);
  name_.Swap(&other->name_);
  soul_.Swap(&other->soul_);
  value_.Swap(&other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Cell::GetMetadata() const {
  protobuf_cell_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cell_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Bond::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Bond::kNameFieldNumber;
const int Bond::kKindFieldNumber;
const int Bond::kFromFieldNumber;
const int Bond::kToFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Bond::Bond()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_cell_2eproto::InitDefaultsBond();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:ipfn.Bond)
}
Bond::Bond(const Bond& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  kind_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.kind().size() > 0) {
    kind_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.kind_);
  }
  from_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.from().size() > 0) {
    from_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.from_);
  }
  to_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.to().size() > 0) {
    to_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.to_);
  }
  // @@protoc_insertion_point(copy_constructor:ipfn.Bond)
}

void Bond::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  kind_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  from_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  to_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Bond::~Bond() {
  // @@protoc_insertion_point(destructor:ipfn.Bond)
  SharedDtor();
}

void Bond::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  kind_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  from_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  to_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Bond::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Bond::descriptor() {
  ::protobuf_cell_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cell_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Bond& Bond::default_instance() {
  ::protobuf_cell_2eproto::InitDefaultsBond();
  return *internal_default_instance();
}

Bond* Bond::New(::google::protobuf::Arena* arena) const {
  Bond* n = new Bond;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Bond::Clear() {
// @@protoc_insertion_point(message_clear_start:ipfn.Bond)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  kind_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  from_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  to_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Bond::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ipfn.Bond)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ipfn.Bond.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string kind = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_kind()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->kind().data(), static_cast<int>(this->kind().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ipfn.Bond.kind"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string from = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_from()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->from().data(), static_cast<int>(this->from().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ipfn.Bond.from"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string to = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_to()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->to().data(), static_cast<int>(this->to().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ipfn.Bond.to"));
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
  // @@protoc_insertion_point(parse_success:ipfn.Bond)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ipfn.Bond)
  return false;
#undef DO_
}

void Bond::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ipfn.Bond)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Bond.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string kind = 2;
  if (this->kind().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->kind().data(), static_cast<int>(this->kind().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Bond.kind");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->kind(), output);
  }

  // string from = 3;
  if (this->from().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->from().data(), static_cast<int>(this->from().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Bond.from");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->from(), output);
  }

  // string to = 4;
  if (this->to().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->to().data(), static_cast<int>(this->to().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Bond.to");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->to(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ipfn.Bond)
}

::google::protobuf::uint8* Bond::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ipfn.Bond)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Bond.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // string kind = 2;
  if (this->kind().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->kind().data(), static_cast<int>(this->kind().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Bond.kind");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->kind(), target);
  }

  // string from = 3;
  if (this->from().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->from().data(), static_cast<int>(this->from().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Bond.from");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->from(), target);
  }

  // string to = 4;
  if (this->to().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->to().data(), static_cast<int>(this->to().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ipfn.Bond.to");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->to(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ipfn.Bond)
  return target;
}

size_t Bond::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ipfn.Bond)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string kind = 2;
  if (this->kind().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->kind());
  }

  // string from = 3;
  if (this->from().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->from());
  }

  // string to = 4;
  if (this->to().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->to());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Bond::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ipfn.Bond)
  GOOGLE_DCHECK_NE(&from, this);
  const Bond* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Bond>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ipfn.Bond)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ipfn.Bond)
    MergeFrom(*source);
  }
}

void Bond::MergeFrom(const Bond& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ipfn.Bond)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.kind().size() > 0) {

    kind_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.kind_);
  }
  if (from.from().size() > 0) {

    from_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.from_);
  }
  if (from.to().size() > 0) {

    to_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.to_);
  }
}

void Bond::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ipfn.Bond)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Bond::CopyFrom(const Bond& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ipfn.Bond)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Bond::IsInitialized() const {
  return true;
}

void Bond::Swap(Bond* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Bond::InternalSwap(Bond* other) {
  using std::swap;
  name_.Swap(&other->name_);
  kind_.Swap(&other->kind_);
  from_.Swap(&other->from_);
  to_.Swap(&other->to_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Bond::GetMetadata() const {
  protobuf_cell_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cell_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ipfn

// @@protoc_insertion_point(global_scope)