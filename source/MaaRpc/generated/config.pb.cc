// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#include "config.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace maarpc {
}  // namespace maarpc
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_config_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_config_2eproto = nullptr;
const uint32_t TableStruct_config_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_config_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014config.proto\022\006maarpc\032\013types.proto2t\n\006C"
  "onfig\0223\n\004init\022\024.maarpc.EmptyRequest\032\025.ma"
  "arpc.EmptyResponse\0225\n\006uninit\022\024.maarpc.Em"
  "ptyRequest\032\025.maarpc.EmptyResponseb\006proto"
  "3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_config_2eproto_deps[1] = {
  &::descriptor_table_types_2eproto,
};
static ::_pbi::once_flag descriptor_table_config_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_config_2eproto = {
    false, false, 161, descriptor_table_protodef_config_2eproto,
    "config.proto",
    &descriptor_table_config_2eproto_once, descriptor_table_config_2eproto_deps, 1, 0,
    schemas, file_default_instances, TableStruct_config_2eproto::offsets,
    nullptr, file_level_enum_descriptors_config_2eproto,
    file_level_service_descriptors_config_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_config_2eproto_getter() {
  return &descriptor_table_config_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_config_2eproto(&descriptor_table_config_2eproto);
namespace maarpc {

// @@protoc_insertion_point(namespace_scope)
}  // namespace maarpc
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
