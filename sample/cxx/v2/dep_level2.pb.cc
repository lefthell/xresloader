// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dep_level2.proto

#include "dep_level2.pb.h"

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

class dep2_cfgDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<dep2_cfg> _instance;
} _dep2_cfg_default_instance_;
static void InitDefaultsdep2_cfg_dep_5flevel2_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_dep2_cfg_default_instance_;
    new (ptr) ::dep2_cfg();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::dep2_cfg::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_dep2_cfg_dep_5flevel2_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsdep2_cfg_dep_5flevel2_2eproto}, {}};

void InitDefaults_dep_5flevel2_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_dep2_cfg_dep_5flevel2_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_dep_5flevel2_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_dep_5flevel2_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_dep_5flevel2_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_dep_5flevel2_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::dep2_cfg, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::dep2_cfg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::dep2_cfg, id_),
  PROTOBUF_FIELD_OFFSET(::dep2_cfg, level_),
  1,
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::dep2_cfg)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_dep2_cfg_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_dep_5flevel2_2eproto = {
  {}, AddDescriptors_dep_5flevel2_2eproto, "dep_level2.proto", schemas,
  file_default_instances, TableStruct_dep_5flevel2_2eproto::offsets,
  file_level_metadata_dep_5flevel2_2eproto, 1, file_level_enum_descriptors_dep_5flevel2_2eproto, file_level_service_descriptors_dep_5flevel2_2eproto,
};

const char descriptor_table_protodef_dep_5flevel2_2eproto[] =
  "\n\020dep_level2.proto\"%\n\010dep2_cfg\022\n\n\002id\030\001 \001"
  "(\r\022\r\n\005level\030\002 \001(\t"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_dep_5flevel2_2eproto = {
  false, InitDefaults_dep_5flevel2_2eproto, 
  descriptor_table_protodef_dep_5flevel2_2eproto,
  "dep_level2.proto", &assign_descriptors_table_dep_5flevel2_2eproto, 57,
};

void AddDescriptors_dep_5flevel2_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_dep_5flevel2_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_dep_5flevel2_2eproto = []() { AddDescriptors_dep_5flevel2_2eproto(); return true; }();

// ===================================================================

void dep2_cfg::InitAsDefaultInstance() {
}
class dep2_cfg::HasBitSetters {
 public:
  static void set_has_id(dep2_cfg* msg) {
    msg->_has_bits_[0] |= 0x00000002u;
  }
  static void set_has_level(dep2_cfg* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int dep2_cfg::kIdFieldNumber;
const int dep2_cfg::kLevelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

dep2_cfg::dep2_cfg()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dep2_cfg)
}
dep2_cfg::dep2_cfg(const dep2_cfg& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  level_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_level()) {
    level_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.level_);
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:dep2_cfg)
}

void dep2_cfg::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_dep2_cfg_dep_5flevel2_2eproto.base);
  level_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0u;
}

dep2_cfg::~dep2_cfg() {
  // @@protoc_insertion_point(destructor:dep2_cfg)
  SharedDtor();
}

void dep2_cfg::SharedDtor() {
  level_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void dep2_cfg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const dep2_cfg& dep2_cfg::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_dep2_cfg_dep_5flevel2_2eproto.base);
  return *internal_default_instance();
}


void dep2_cfg::Clear() {
// @@protoc_insertion_point(message_clear_start:dep2_cfg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    level_.ClearNonDefaultToEmptyNoArena();
  }
  id_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* dep2_cfg::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<dep2_cfg*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // optional uint32 id = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_id(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // optional string level = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("dep2_cfg.level");
        object = msg->mutable_level();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8Verify;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8Verify(ptr, size, ctx));
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
bool dep2_cfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dep2_cfg)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {
          HasBitSetters::set_has_id(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string level = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_level()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->level().data(), static_cast<int>(this->level().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dep2_cfg.level");
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
  // @@protoc_insertion_point(parse_success:dep2_cfg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dep2_cfg)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void dep2_cfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dep2_cfg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 id = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // optional string level = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->level().data(), static_cast<int>(this->level().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dep2_cfg.level");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->level(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:dep2_cfg)
}

::google::protobuf::uint8* dep2_cfg::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:dep2_cfg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // optional string level = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->level().data(), static_cast<int>(this->level().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dep2_cfg.level");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->level(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dep2_cfg)
  return target;
}

size_t dep2_cfg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dep2_cfg)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string level = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->level());
    }

    // optional uint32 id = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void dep2_cfg::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dep2_cfg)
  GOOGLE_DCHECK_NE(&from, this);
  const dep2_cfg* source =
      ::google::protobuf::DynamicCastToGenerated<dep2_cfg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dep2_cfg)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dep2_cfg)
    MergeFrom(*source);
  }
}

void dep2_cfg::MergeFrom(const dep2_cfg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dep2_cfg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      level_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.level_);
    }
    if (cached_has_bits & 0x00000002u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void dep2_cfg::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dep2_cfg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void dep2_cfg::CopyFrom(const dep2_cfg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dep2_cfg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool dep2_cfg::IsInitialized() const {
  return true;
}

void dep2_cfg::Swap(dep2_cfg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void dep2_cfg::InternalSwap(dep2_cfg* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  level_.Swap(&other->level_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
}

::google::protobuf::Metadata dep2_cfg::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_dep_5flevel2_2eproto);
  return ::file_level_metadata_dep_5flevel2_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::dep2_cfg* Arena::CreateMaybeMessage< ::dep2_cfg >(Arena* arena) {
  return Arena::CreateInternal< ::dep2_cfg >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
