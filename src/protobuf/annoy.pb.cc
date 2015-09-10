// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/annoy.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "protobuf/annoy.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* data_info_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  data_info_reflection_ = NULL;
const ::google::protobuf::Descriptor* tree_node_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  tree_node_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_protobuf_2fannoy_2eproto() {
  protobuf_AddDesc_protobuf_2fannoy_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "protobuf/annoy.proto");
  GOOGLE_CHECK(file != NULL);
  data_info_descriptor_ = file->message_type(0);
  static const int data_info_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(data_info, data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(data_info, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(data_info, category_),
  };
  data_info_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      data_info_descriptor_,
      data_info::default_instance_,
      data_info_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(data_info, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(data_info, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(data_info));
  tree_node_descriptor_ = file->message_type(1);
  static const int tree_node_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tree_node, index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tree_node, leaf_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tree_node, left_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tree_node, right_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tree_node, items_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tree_node, v_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tree_node, t_),
  };
  tree_node_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      tree_node_descriptor_,
      tree_node::default_instance_,
      tree_node_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tree_node, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tree_node, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(tree_node));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_protobuf_2fannoy_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    data_info_descriptor_, &data_info::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    tree_node_descriptor_, &tree_node::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_protobuf_2fannoy_2eproto() {
  delete data_info::default_instance_;
  delete data_info_reflection_;
  delete tree_node::default_instance_;
  delete tree_node_reflection_;
}

void protobuf_AddDesc_protobuf_2fannoy_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024protobuf/annoy.proto\";\n\tdata_info\022\020\n\004d"
    "ata\030\001 \003(\002B\002\020\001\022\n\n\002id\030\002 \001(\r\022\020\n\010category\030\003 "
    "\001(\r\"n\n\ttree_node\022\r\n\005index\030\001 \002(\r\022\014\n\004leaf\030"
    "\002 \002(\010\022\014\n\004left\030\003 \001(\r\022\r\n\005right\030\004 \001(\r\022\r\n\005it"
    "ems\030\005 \003(\r\022\r\n\001v\030\006 \003(\002B\002\020\001\022\t\n\001t\030\007 \001(\002", 195);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "protobuf/annoy.proto", &protobuf_RegisterTypes);
  data_info::default_instance_ = new data_info();
  tree_node::default_instance_ = new tree_node();
  data_info::default_instance_->InitAsDefaultInstance();
  tree_node::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_protobuf_2fannoy_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_protobuf_2fannoy_2eproto {
  StaticDescriptorInitializer_protobuf_2fannoy_2eproto() {
    protobuf_AddDesc_protobuf_2fannoy_2eproto();
  }
} static_descriptor_initializer_protobuf_2fannoy_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int data_info::kDataFieldNumber;
const int data_info::kIdFieldNumber;
const int data_info::kCategoryFieldNumber;
#endif  // !_MSC_VER

data_info::data_info()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:data_info)
}

void data_info::InitAsDefaultInstance() {
}

data_info::data_info(const data_info& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:data_info)
}

void data_info::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  category_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

data_info::~data_info() {
  // @@protoc_insertion_point(destructor:data_info)
  SharedDtor();
}

void data_info::SharedDtor() {
  if (this != default_instance_) {
  }
}

void data_info::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* data_info::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return data_info_descriptor_;
}

const data_info& data_info::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protobuf_2fannoy_2eproto();
  return *default_instance_;
}

data_info* data_info::default_instance_ = NULL;

data_info* data_info::New() const {
  return new data_info;
}

void data_info::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<data_info*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(id_, category_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool data_info::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:data_info)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated float data = 1 [packed = true];
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_data())));
        } else if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 10, input, this->mutable_data())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }

      // optional uint32 id = 2;
      case 2: {
        if (tag == 16) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_category;
        break;
      }

      // optional uint32 category = 3;
      case 3: {
        if (tag == 24) {
         parse_category:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &category_)));
          set_has_category();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:data_info)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:data_info)
  return false;
#undef DO_
}

void data_info::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:data_info)
  // repeated float data = 1 [packed = true];
  if (this->data_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_data_cached_byte_size_);
  }
  for (int i = 0; i < this->data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->data(i), output);
  }

  // optional uint32 id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->id(), output);
  }

  // optional uint32 category = 3;
  if (has_category()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->category(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:data_info)
}

::google::protobuf::uint8* data_info::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:data_info)
  // repeated float data = 1 [packed = true];
  if (this->data_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _data_cached_byte_size_, target);
  }
  for (int i = 0; i < this->data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->data(i), target);
  }

  // optional uint32 id = 2;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->id(), target);
  }

  // optional uint32 category = 3;
  if (has_category()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->category(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:data_info)
  return target;
}

int data_info::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // optional uint32 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // optional uint32 category = 3;
    if (has_category()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->category());
    }

  }
  // repeated float data = 1 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->data_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _data_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void data_info::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const data_info* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const data_info*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void data_info::MergeFrom(const data_info& from) {
  GOOGLE_CHECK_NE(&from, this);
  data_.MergeFrom(from.data_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_category()) {
      set_category(from.category());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void data_info::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void data_info::CopyFrom(const data_info& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool data_info::IsInitialized() const {

  return true;
}

void data_info::Swap(data_info* other) {
  if (other != this) {
    data_.Swap(&other->data_);
    std::swap(id_, other->id_);
    std::swap(category_, other->category_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata data_info::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = data_info_descriptor_;
  metadata.reflection = data_info_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int tree_node::kIndexFieldNumber;
const int tree_node::kLeafFieldNumber;
const int tree_node::kLeftFieldNumber;
const int tree_node::kRightFieldNumber;
const int tree_node::kItemsFieldNumber;
const int tree_node::kVFieldNumber;
const int tree_node::kTFieldNumber;
#endif  // !_MSC_VER

tree_node::tree_node()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tree_node)
}

void tree_node::InitAsDefaultInstance() {
}

tree_node::tree_node(const tree_node& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tree_node)
}

void tree_node::SharedCtor() {
  _cached_size_ = 0;
  index_ = 0u;
  leaf_ = false;
  left_ = 0u;
  right_ = 0u;
  t_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

tree_node::~tree_node() {
  // @@protoc_insertion_point(destructor:tree_node)
  SharedDtor();
}

void tree_node::SharedDtor() {
  if (this != default_instance_) {
  }
}

void tree_node::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* tree_node::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return tree_node_descriptor_;
}

const tree_node& tree_node::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protobuf_2fannoy_2eproto();
  return *default_instance_;
}

tree_node* tree_node::default_instance_ = NULL;

tree_node* tree_node::New() const {
  return new tree_node;
}

void tree_node::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<tree_node*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 79) {
    ZR_(index_, right_);
    t_ = 0;
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  items_.Clear();
  v_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool tree_node::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tree_node)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 index = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &index_)));
          set_has_index();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_leaf;
        break;
      }

      // required bool leaf = 2;
      case 2: {
        if (tag == 16) {
         parse_leaf:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &leaf_)));
          set_has_leaf();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_left;
        break;
      }

      // optional uint32 left = 3;
      case 3: {
        if (tag == 24) {
         parse_left:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &left_)));
          set_has_left();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_right;
        break;
      }

      // optional uint32 right = 4;
      case 4: {
        if (tag == 32) {
         parse_right:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &right_)));
          set_has_right();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_items;
        break;
      }

      // repeated uint32 items = 5;
      case 5: {
        if (tag == 40) {
         parse_items:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 40, input, this->mutable_items())));
        } else if (tag == 42) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_items())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_items;
        if (input->ExpectTag(50)) goto parse_v;
        break;
      }

      // repeated float v = 6 [packed = true];
      case 6: {
        if (tag == 50) {
         parse_v:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_v())));
        } else if (tag == 53) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 50, input, this->mutable_v())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(61)) goto parse_t;
        break;
      }

      // optional float t = 7;
      case 7: {
        if (tag == 61) {
         parse_t:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &t_)));
          set_has_t();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tree_node)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tree_node)
  return false;
#undef DO_
}

void tree_node::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tree_node)
  // required uint32 index = 1;
  if (has_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->index(), output);
  }

  // required bool leaf = 2;
  if (has_leaf()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->leaf(), output);
  }

  // optional uint32 left = 3;
  if (has_left()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->left(), output);
  }

  // optional uint32 right = 4;
  if (has_right()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->right(), output);
  }

  // repeated uint32 items = 5;
  for (int i = 0; i < this->items_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      5, this->items(i), output);
  }

  // repeated float v = 6 [packed = true];
  if (this->v_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(6, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_v_cached_byte_size_);
  }
  for (int i = 0; i < this->v_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->v(i), output);
  }

  // optional float t = 7;
  if (has_t()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->t(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tree_node)
}

::google::protobuf::uint8* tree_node::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tree_node)
  // required uint32 index = 1;
  if (has_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->index(), target);
  }

  // required bool leaf = 2;
  if (has_leaf()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->leaf(), target);
  }

  // optional uint32 left = 3;
  if (has_left()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->left(), target);
  }

  // optional uint32 right = 4;
  if (has_right()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->right(), target);
  }

  // repeated uint32 items = 5;
  for (int i = 0; i < this->items_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32ToArray(5, this->items(i), target);
  }

  // repeated float v = 6 [packed = true];
  if (this->v_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      6,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _v_cached_byte_size_, target);
  }
  for (int i = 0; i < this->v_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->v(i), target);
  }

  // optional float t = 7;
  if (has_t()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->t(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tree_node)
  return target;
}

int tree_node::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 index = 1;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->index());
    }

    // required bool leaf = 2;
    if (has_leaf()) {
      total_size += 1 + 1;
    }

    // optional uint32 left = 3;
    if (has_left()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->left());
    }

    // optional uint32 right = 4;
    if (has_right()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->right());
    }

    // optional float t = 7;
    if (has_t()) {
      total_size += 1 + 4;
    }

  }
  // repeated uint32 items = 5;
  {
    int data_size = 0;
    for (int i = 0; i < this->items_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->items(i));
    }
    total_size += 1 * this->items_size() + data_size;
  }

  // repeated float v = 6 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->v_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _v_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void tree_node::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const tree_node* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const tree_node*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void tree_node::MergeFrom(const tree_node& from) {
  GOOGLE_CHECK_NE(&from, this);
  items_.MergeFrom(from.items_);
  v_.MergeFrom(from.v_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_index()) {
      set_index(from.index());
    }
    if (from.has_leaf()) {
      set_leaf(from.leaf());
    }
    if (from.has_left()) {
      set_left(from.left());
    }
    if (from.has_right()) {
      set_right(from.right());
    }
    if (from.has_t()) {
      set_t(from.t());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void tree_node::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void tree_node::CopyFrom(const tree_node& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool tree_node::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void tree_node::Swap(tree_node* other) {
  if (other != this) {
    std::swap(index_, other->index_);
    std::swap(leaf_, other->leaf_);
    std::swap(left_, other->left_);
    std::swap(right_, other->right_);
    items_.Swap(&other->items_);
    v_.Swap(&other->v_);
    std::swap(t_, other->t_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata tree_node::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = tree_node_descriptor_;
  metadata.reflection = tree_node_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
