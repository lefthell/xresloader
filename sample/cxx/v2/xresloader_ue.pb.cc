// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: xresloader_ue.proto

#include "xresloader_ue.pb.h"

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

namespace org {
namespace xresloader {
namespace ue {
}  // namespace ue
}  // namespace xresloader
}  // namespace org
void InitDefaults_xresloader_5fue_2eproto() {
}

constexpr ::google::protobuf::Metadata* file_level_metadata_xresloader_5fue_2eproto = nullptr;
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_xresloader_5fue_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_xresloader_5fue_2eproto = nullptr;
const ::google::protobuf::uint32 TableStruct_xresloader_5fue_2eproto::offsets[1] = {};
static constexpr ::google::protobuf::internal::MigrationSchema* schemas = nullptr;
static constexpr ::google::protobuf::Message* const* file_default_instances = nullptr;

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_xresloader_5fue_2eproto = {
  {}, AddDescriptors_xresloader_5fue_2eproto, "xresloader_ue.proto", schemas,
  file_default_instances, TableStruct_xresloader_5fue_2eproto::offsets,
  file_level_metadata_xresloader_5fue_2eproto, 0, file_level_enum_descriptors_xresloader_5fue_2eproto, file_level_service_descriptors_xresloader_5fue_2eproto,
};

const char descriptor_table_protodef_xresloader_5fue_2eproto[] =
  "\n\023xresloader_ue.proto\022\021org.xresloader.ue"
  "\032 google/protobuf/descriptor.proto:/\n\007ke"
  "y_tag\022\035.google.protobuf.FieldOptions\030\315\010 "
  "\001(\003:2\n\nueTypeName\022\035.google.protobuf.Fiel"
  "dOptions\030\316\010 \001(\t:0\n\006helper\022\037.google.proto"
  "buf.MessageOptions\030\315\010 \001(\tB\002H\001"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_xresloader_5fue_2eproto = {
  false, InitDefaults_xresloader_5fue_2eproto, 
  descriptor_table_protodef_xresloader_5fue_2eproto,
  "xresloader_ue.proto", &assign_descriptors_table_xresloader_5fue_2eproto, 229,
};

void AddDescriptors_xresloader_5fue_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_google_2fprotobuf_2fdescriptor_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_xresloader_5fue_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_xresloader_5fue_2eproto = []() { AddDescriptors_xresloader_5fue_2eproto(); return true; }();
namespace org {
namespace xresloader {
namespace ue {
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int64 >, 3, false >
  key_tag(kKeyTagFieldNumber, PROTOBUF_LONGLONG(0));
const ::std::string ueTypeName_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  ueTypeName(kUeTypeNameFieldNumber, ueTypeName_default);
const ::std::string helper_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  helper(kHelperFieldNumber, helper_default);

// @@protoc_insertion_point(namespace_scope)
}  // namespace ue
}  // namespace xresloader
}  // namespace org
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
