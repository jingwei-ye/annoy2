// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/annoy.proto

#ifndef PROTOBUF_protobuf_2fannoy_2eproto__INCLUDED
#define PROTOBUF_protobuf_2fannoy_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_protobuf_2fannoy_2eproto();
void protobuf_AssignDesc_protobuf_2fannoy_2eproto();
void protobuf_ShutdownFile_protobuf_2fannoy_2eproto();

class data_info;
class tree_node;

// ===================================================================

class data_info : public ::google::protobuf::Message {
 public:
  data_info();
  virtual ~data_info();

  data_info(const data_info& from);

  inline data_info& operator=(const data_info& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const data_info& default_instance();

  void Swap(data_info* other);

  // implements Message ----------------------------------------------

  inline data_info* New() const { return New(NULL); }

  data_info* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const data_info& from);
  void MergeFrom(const data_info& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(data_info* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated float data = 1 [packed = true];
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  float data(int index) const;
  void set_data(int index, float value);
  void add_data(float value);
  const ::google::protobuf::RepeatedField< float >&
      data() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_data();

  // optional uint32 id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // optional uint32 category = 3;
  bool has_category() const;
  void clear_category();
  static const int kCategoryFieldNumber = 3;
  ::google::protobuf::uint32 category() const;
  void set_category(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:data_info)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_category();
  inline void clear_has_category();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< float > data_;
  mutable int _data_cached_byte_size_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 category_;
  friend void  protobuf_AddDesc_protobuf_2fannoy_2eproto();
  friend void protobuf_AssignDesc_protobuf_2fannoy_2eproto();
  friend void protobuf_ShutdownFile_protobuf_2fannoy_2eproto();

  void InitAsDefaultInstance();
  static data_info* default_instance_;
};
// -------------------------------------------------------------------

class tree_node : public ::google::protobuf::Message {
 public:
  tree_node();
  virtual ~tree_node();

  tree_node(const tree_node& from);

  inline tree_node& operator=(const tree_node& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const tree_node& default_instance();

  void Swap(tree_node* other);

  // implements Message ----------------------------------------------

  inline tree_node* New() const { return New(NULL); }

  tree_node* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const tree_node& from);
  void MergeFrom(const tree_node& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(tree_node* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 index = 1;
  bool has_index() const;
  void clear_index();
  static const int kIndexFieldNumber = 1;
  ::google::protobuf::uint32 index() const;
  void set_index(::google::protobuf::uint32 value);

  // required bool leaf = 2;
  bool has_leaf() const;
  void clear_leaf();
  static const int kLeafFieldNumber = 2;
  bool leaf() const;
  void set_leaf(bool value);

  // optional uint32 left = 3;
  bool has_left() const;
  void clear_left();
  static const int kLeftFieldNumber = 3;
  ::google::protobuf::uint32 left() const;
  void set_left(::google::protobuf::uint32 value);

  // optional uint32 right = 4;
  bool has_right() const;
  void clear_right();
  static const int kRightFieldNumber = 4;
  ::google::protobuf::uint32 right() const;
  void set_right(::google::protobuf::uint32 value);

  // repeated uint32 items = 5;
  int items_size() const;
  void clear_items();
  static const int kItemsFieldNumber = 5;
  ::google::protobuf::uint32 items(int index) const;
  void set_items(int index, ::google::protobuf::uint32 value);
  void add_items(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      items() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_items();

  // repeated float v = 6 [packed = true];
  int v_size() const;
  void clear_v();
  static const int kVFieldNumber = 6;
  float v(int index) const;
  void set_v(int index, float value);
  void add_v(float value);
  const ::google::protobuf::RepeatedField< float >&
      v() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_v();

  // optional float t = 7;
  bool has_t() const;
  void clear_t();
  static const int kTFieldNumber = 7;
  float t() const;
  void set_t(float value);

  // @@protoc_insertion_point(class_scope:tree_node)
 private:
  inline void set_has_index();
  inline void clear_has_index();
  inline void set_has_leaf();
  inline void clear_has_leaf();
  inline void set_has_left();
  inline void clear_has_left();
  inline void set_has_right();
  inline void clear_has_right();
  inline void set_has_t();
  inline void clear_has_t();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 index_;
  bool leaf_;
  ::google::protobuf::uint32 left_;
  ::google::protobuf::uint32 right_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > items_;
  ::google::protobuf::RepeatedField< float > v_;
  mutable int _v_cached_byte_size_;
  float t_;
  friend void  protobuf_AddDesc_protobuf_2fannoy_2eproto();
  friend void protobuf_AssignDesc_protobuf_2fannoy_2eproto();
  friend void protobuf_ShutdownFile_protobuf_2fannoy_2eproto();

  void InitAsDefaultInstance();
  static tree_node* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// data_info

// repeated float data = 1 [packed = true];
inline int data_info::data_size() const {
  return data_.size();
}
inline void data_info::clear_data() {
  data_.Clear();
}
inline float data_info::data(int index) const {
  // @@protoc_insertion_point(field_get:data_info.data)
  return data_.Get(index);
}
inline void data_info::set_data(int index, float value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:data_info.data)
}
inline void data_info::add_data(float value) {
  data_.Add(value);
  // @@protoc_insertion_point(field_add:data_info.data)
}
inline const ::google::protobuf::RepeatedField< float >&
data_info::data() const {
  // @@protoc_insertion_point(field_list:data_info.data)
  return data_;
}
inline ::google::protobuf::RepeatedField< float >*
data_info::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:data_info.data)
  return &data_;
}

// optional uint32 id = 2;
inline bool data_info::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void data_info::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void data_info::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void data_info::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 data_info::id() const {
  // @@protoc_insertion_point(field_get:data_info.id)
  return id_;
}
inline void data_info::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:data_info.id)
}

// optional uint32 category = 3;
inline bool data_info::has_category() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void data_info::set_has_category() {
  _has_bits_[0] |= 0x00000004u;
}
inline void data_info::clear_has_category() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void data_info::clear_category() {
  category_ = 0u;
  clear_has_category();
}
inline ::google::protobuf::uint32 data_info::category() const {
  // @@protoc_insertion_point(field_get:data_info.category)
  return category_;
}
inline void data_info::set_category(::google::protobuf::uint32 value) {
  set_has_category();
  category_ = value;
  // @@protoc_insertion_point(field_set:data_info.category)
}

// -------------------------------------------------------------------

// tree_node

// required uint32 index = 1;
inline bool tree_node::has_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void tree_node::set_has_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void tree_node::clear_has_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void tree_node::clear_index() {
  index_ = 0u;
  clear_has_index();
}
inline ::google::protobuf::uint32 tree_node::index() const {
  // @@protoc_insertion_point(field_get:tree_node.index)
  return index_;
}
inline void tree_node::set_index(::google::protobuf::uint32 value) {
  set_has_index();
  index_ = value;
  // @@protoc_insertion_point(field_set:tree_node.index)
}

// required bool leaf = 2;
inline bool tree_node::has_leaf() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void tree_node::set_has_leaf() {
  _has_bits_[0] |= 0x00000002u;
}
inline void tree_node::clear_has_leaf() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void tree_node::clear_leaf() {
  leaf_ = false;
  clear_has_leaf();
}
inline bool tree_node::leaf() const {
  // @@protoc_insertion_point(field_get:tree_node.leaf)
  return leaf_;
}
inline void tree_node::set_leaf(bool value) {
  set_has_leaf();
  leaf_ = value;
  // @@protoc_insertion_point(field_set:tree_node.leaf)
}

// optional uint32 left = 3;
inline bool tree_node::has_left() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void tree_node::set_has_left() {
  _has_bits_[0] |= 0x00000004u;
}
inline void tree_node::clear_has_left() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void tree_node::clear_left() {
  left_ = 0u;
  clear_has_left();
}
inline ::google::protobuf::uint32 tree_node::left() const {
  // @@protoc_insertion_point(field_get:tree_node.left)
  return left_;
}
inline void tree_node::set_left(::google::protobuf::uint32 value) {
  set_has_left();
  left_ = value;
  // @@protoc_insertion_point(field_set:tree_node.left)
}

// optional uint32 right = 4;
inline bool tree_node::has_right() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void tree_node::set_has_right() {
  _has_bits_[0] |= 0x00000008u;
}
inline void tree_node::clear_has_right() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void tree_node::clear_right() {
  right_ = 0u;
  clear_has_right();
}
inline ::google::protobuf::uint32 tree_node::right() const {
  // @@protoc_insertion_point(field_get:tree_node.right)
  return right_;
}
inline void tree_node::set_right(::google::protobuf::uint32 value) {
  set_has_right();
  right_ = value;
  // @@protoc_insertion_point(field_set:tree_node.right)
}

// repeated uint32 items = 5;
inline int tree_node::items_size() const {
  return items_.size();
}
inline void tree_node::clear_items() {
  items_.Clear();
}
inline ::google::protobuf::uint32 tree_node::items(int index) const {
  // @@protoc_insertion_point(field_get:tree_node.items)
  return items_.Get(index);
}
inline void tree_node::set_items(int index, ::google::protobuf::uint32 value) {
  items_.Set(index, value);
  // @@protoc_insertion_point(field_set:tree_node.items)
}
inline void tree_node::add_items(::google::protobuf::uint32 value) {
  items_.Add(value);
  // @@protoc_insertion_point(field_add:tree_node.items)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
tree_node::items() const {
  // @@protoc_insertion_point(field_list:tree_node.items)
  return items_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
tree_node::mutable_items() {
  // @@protoc_insertion_point(field_mutable_list:tree_node.items)
  return &items_;
}

// repeated float v = 6 [packed = true];
inline int tree_node::v_size() const {
  return v_.size();
}
inline void tree_node::clear_v() {
  v_.Clear();
}
inline float tree_node::v(int index) const {
  // @@protoc_insertion_point(field_get:tree_node.v)
  return v_.Get(index);
}
inline void tree_node::set_v(int index, float value) {
  v_.Set(index, value);
  // @@protoc_insertion_point(field_set:tree_node.v)
}
inline void tree_node::add_v(float value) {
  v_.Add(value);
  // @@protoc_insertion_point(field_add:tree_node.v)
}
inline const ::google::protobuf::RepeatedField< float >&
tree_node::v() const {
  // @@protoc_insertion_point(field_list:tree_node.v)
  return v_;
}
inline ::google::protobuf::RepeatedField< float >*
tree_node::mutable_v() {
  // @@protoc_insertion_point(field_mutable_list:tree_node.v)
  return &v_;
}

// optional float t = 7;
inline bool tree_node::has_t() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void tree_node::set_has_t() {
  _has_bits_[0] |= 0x00000040u;
}
inline void tree_node::clear_has_t() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void tree_node::clear_t() {
  t_ = 0;
  clear_has_t();
}
inline float tree_node::t() const {
  // @@protoc_insertion_point(field_get:tree_node.t)
  return t_;
}
inline void tree_node::set_t(float value) {
  set_has_t();
  t_ = value;
  // @@protoc_insertion_point(field_set:tree_node.t)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protobuf_2fannoy_2eproto__INCLUDED
