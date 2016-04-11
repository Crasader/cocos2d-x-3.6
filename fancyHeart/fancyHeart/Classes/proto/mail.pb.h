// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mail.proto

#ifndef PROTOBUF_mail_2eproto__INCLUDED
#define PROTOBUF_mail_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_mail_2eproto();
void protobuf_AssignDesc_mail_2eproto();
void protobuf_ShutdownFile_mail_2eproto();

class PMailItem;
class PReward;
class PReadMail;
class PMailItemList;
class PMailList;
class PReadAllMail;

// ===================================================================

class PMailItem : public ::google::protobuf::Message {
 public:
  PMailItem();
  virtual ~PMailItem();

  PMailItem(const PMailItem& from);

  inline PMailItem& operator=(const PMailItem& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PMailItem& default_instance();

  void Swap(PMailItem* other);

  // implements Message ----------------------------------------------

  PMailItem* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PMailItem& from);
  void MergeFrom(const PMailItem& from);
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
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 itemId = 1;
  inline bool has_itemid() const;
  inline void clear_itemid();
  static const int kItemIdFieldNumber = 1;
  inline ::google::protobuf::int64 itemid() const;
  inline void set_itemid(::google::protobuf::int64 value);

  // required int32 type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // required string title = 3;
  inline bool has_title() const;
  inline void clear_title();
  static const int kTitleFieldNumber = 3;
  inline const ::std::string& title() const;
  inline void set_title(const ::std::string& value);
  inline void set_title(const char* value);
  inline void set_title(const char* value, size_t size);
  inline ::std::string* mutable_title();
  inline ::std::string* release_title();
  inline void set_allocated_title(::std::string* title);

  // required string msg = 4;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 4;
  inline const ::std::string& msg() const;
  inline void set_msg(const ::std::string& value);
  inline void set_msg(const char* value);
  inline void set_msg(const char* value, size_t size);
  inline ::std::string* mutable_msg();
  inline ::std::string* release_msg();
  inline void set_allocated_msg(::std::string* msg);

  // repeated .PReward itemList = 5;
  inline int itemlist_size() const;
  inline void clear_itemlist();
  static const int kItemListFieldNumber = 5;
  inline const ::PReward& itemlist(int index) const;
  inline ::PReward* mutable_itemlist(int index);
  inline ::PReward* add_itemlist();
  inline const ::google::protobuf::RepeatedPtrField< ::PReward >&
      itemlist() const;
  inline ::google::protobuf::RepeatedPtrField< ::PReward >*
      mutable_itemlist();

  // required int64 date = 6;
  inline bool has_date() const;
  inline void clear_date();
  static const int kDateFieldNumber = 6;
  inline ::google::protobuf::int64 date() const;
  inline void set_date(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:PMailItem)
 private:
  inline void set_has_itemid();
  inline void clear_has_itemid();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_title();
  inline void clear_has_title();
  inline void set_has_msg();
  inline void clear_has_msg();
  inline void set_has_date();
  inline void clear_has_date();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 itemid_;
  ::std::string* title_;
  ::std::string* msg_;
  ::google::protobuf::RepeatedPtrField< ::PReward > itemlist_;
  ::google::protobuf::int64 date_;
  ::google::protobuf::int32 type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_mail_2eproto();
  friend void protobuf_AssignDesc_mail_2eproto();
  friend void protobuf_ShutdownFile_mail_2eproto();

  void InitAsDefaultInstance();
  static PMailItem* default_instance_;
};
// -------------------------------------------------------------------

class PReward : public ::google::protobuf::Message {
 public:
  PReward();
  virtual ~PReward();

  PReward(const PReward& from);

  inline PReward& operator=(const PReward& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PReward& default_instance();

  void Swap(PReward* other);

  // implements Message ----------------------------------------------

  PReward* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PReward& from);
  void MergeFrom(const PReward& from);
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
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int64 id() const;
  inline void set_id(::google::protobuf::int64 value);

  // required int32 type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // required int32 number = 3;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 3;
  inline ::google::protobuf::int32 number() const;
  inline void set_number(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PReward)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_number();
  inline void clear_has_number();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 number_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_mail_2eproto();
  friend void protobuf_AssignDesc_mail_2eproto();
  friend void protobuf_ShutdownFile_mail_2eproto();

  void InitAsDefaultInstance();
  static PReward* default_instance_;
};
// -------------------------------------------------------------------

class PReadMail : public ::google::protobuf::Message {
 public:
  PReadMail();
  virtual ~PReadMail();

  PReadMail(const PReadMail& from);

  inline PReadMail& operator=(const PReadMail& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PReadMail& default_instance();

  void Swap(PReadMail* other);

  // implements Message ----------------------------------------------

  PReadMail* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PReadMail& from);
  void MergeFrom(const PReadMail& from);
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
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 itemId = 1;
  inline bool has_itemid() const;
  inline void clear_itemid();
  static const int kItemIdFieldNumber = 1;
  inline ::google::protobuf::int64 itemid() const;
  inline void set_itemid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:PReadMail)
 private:
  inline void set_has_itemid();
  inline void clear_has_itemid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 itemid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_mail_2eproto();
  friend void protobuf_AssignDesc_mail_2eproto();
  friend void protobuf_ShutdownFile_mail_2eproto();

  void InitAsDefaultInstance();
  static PReadMail* default_instance_;
};
// -------------------------------------------------------------------

class PMailItemList : public ::google::protobuf::Message {
 public:
  PMailItemList();
  virtual ~PMailItemList();

  PMailItemList(const PMailItemList& from);

  inline PMailItemList& operator=(const PMailItemList& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PMailItemList& default_instance();

  void Swap(PMailItemList* other);

  // implements Message ----------------------------------------------

  PMailItemList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PMailItemList& from);
  void MergeFrom(const PMailItemList& from);
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
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PMailItem list = 1;
  inline int list_size() const;
  inline void clear_list();
  static const int kListFieldNumber = 1;
  inline const ::PMailItem& list(int index) const;
  inline ::PMailItem* mutable_list(int index);
  inline ::PMailItem* add_list();
  inline const ::google::protobuf::RepeatedPtrField< ::PMailItem >&
      list() const;
  inline ::google::protobuf::RepeatedPtrField< ::PMailItem >*
      mutable_list();

  // @@protoc_insertion_point(class_scope:PMailItemList)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::PMailItem > list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_mail_2eproto();
  friend void protobuf_AssignDesc_mail_2eproto();
  friend void protobuf_ShutdownFile_mail_2eproto();

  void InitAsDefaultInstance();
  static PMailItemList* default_instance_;
};
// -------------------------------------------------------------------

class PMailList : public ::google::protobuf::Message {
 public:
  PMailList();
  virtual ~PMailList();

  PMailList(const PMailList& from);

  inline PMailList& operator=(const PMailList& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PMailList& default_instance();

  void Swap(PMailList* other);

  // implements Message ----------------------------------------------

  PMailList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PMailList& from);
  void MergeFrom(const PMailList& from);
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
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:PMailList)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_mail_2eproto();
  friend void protobuf_AssignDesc_mail_2eproto();
  friend void protobuf_ShutdownFile_mail_2eproto();

  void InitAsDefaultInstance();
  static PMailList* default_instance_;
};
// -------------------------------------------------------------------

class PReadAllMail : public ::google::protobuf::Message {
 public:
  PReadAllMail();
  virtual ~PReadAllMail();

  PReadAllMail(const PReadAllMail& from);

  inline PReadAllMail& operator=(const PReadAllMail& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PReadAllMail& default_instance();

  void Swap(PReadAllMail* other);

  // implements Message ----------------------------------------------

  PReadAllMail* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PReadAllMail& from);
  void MergeFrom(const PReadAllMail& from);
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
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:PReadAllMail)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_mail_2eproto();
  friend void protobuf_AssignDesc_mail_2eproto();
  friend void protobuf_ShutdownFile_mail_2eproto();

  void InitAsDefaultInstance();
  static PReadAllMail* default_instance_;
};
// ===================================================================


// ===================================================================

// PMailItem

// required int64 itemId = 1;
inline bool PMailItem::has_itemid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PMailItem::set_has_itemid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PMailItem::clear_has_itemid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PMailItem::clear_itemid() {
  itemid_ = GOOGLE_LONGLONG(0);
  clear_has_itemid();
}
inline ::google::protobuf::int64 PMailItem::itemid() const {
  return itemid_;
}
inline void PMailItem::set_itemid(::google::protobuf::int64 value) {
  set_has_itemid();
  itemid_ = value;
}

// required int32 type = 2;
inline bool PMailItem::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PMailItem::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PMailItem::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PMailItem::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 PMailItem::type() const {
  return type_;
}
inline void PMailItem::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// required string title = 3;
inline bool PMailItem::has_title() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PMailItem::set_has_title() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PMailItem::clear_has_title() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PMailItem::clear_title() {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    title_->clear();
  }
  clear_has_title();
}
inline const ::std::string& PMailItem::title() const {
  return *title_;
}
inline void PMailItem::set_title(const ::std::string& value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void PMailItem::set_title(const char* value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void PMailItem::set_title(const char* value, size_t size) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PMailItem::mutable_title() {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  return title_;
}
inline ::std::string* PMailItem::release_title() {
  clear_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = title_;
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PMailItem::set_allocated_title(::std::string* title) {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    delete title_;
  }
  if (title) {
    set_has_title();
    title_ = title;
  } else {
    clear_has_title();
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string msg = 4;
inline bool PMailItem::has_msg() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PMailItem::set_has_msg() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PMailItem::clear_has_msg() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PMailItem::clear_msg() {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    msg_->clear();
  }
  clear_has_msg();
}
inline const ::std::string& PMailItem::msg() const {
  return *msg_;
}
inline void PMailItem::set_msg(const ::std::string& value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
}
inline void PMailItem::set_msg(const char* value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
}
inline void PMailItem::set_msg(const char* value, size_t size) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PMailItem::mutable_msg() {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  return msg_;
}
inline ::std::string* PMailItem::release_msg() {
  clear_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_;
    msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PMailItem::set_allocated_msg(::std::string* msg) {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (msg) {
    set_has_msg();
    msg_ = msg;
  } else {
    clear_has_msg();
    msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .PReward itemList = 5;
inline int PMailItem::itemlist_size() const {
  return itemlist_.size();
}
inline void PMailItem::clear_itemlist() {
  itemlist_.Clear();
}
inline const ::PReward& PMailItem::itemlist(int index) const {
  return itemlist_.Get(index);
}
inline ::PReward* PMailItem::mutable_itemlist(int index) {
  return itemlist_.Mutable(index);
}
inline ::PReward* PMailItem::add_itemlist() {
  return itemlist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PReward >&
PMailItem::itemlist() const {
  return itemlist_;
}
inline ::google::protobuf::RepeatedPtrField< ::PReward >*
PMailItem::mutable_itemlist() {
  return &itemlist_;
}

// required int64 date = 6;
inline bool PMailItem::has_date() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PMailItem::set_has_date() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PMailItem::clear_has_date() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PMailItem::clear_date() {
  date_ = GOOGLE_LONGLONG(0);
  clear_has_date();
}
inline ::google::protobuf::int64 PMailItem::date() const {
  return date_;
}
inline void PMailItem::set_date(::google::protobuf::int64 value) {
  set_has_date();
  date_ = value;
}

// -------------------------------------------------------------------

// PReward

// required int64 id = 1;
inline bool PReward::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PReward::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PReward::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PReward::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 PReward::id() const {
  return id_;
}
inline void PReward::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// required int32 type = 2;
inline bool PReward::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PReward::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PReward::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PReward::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 PReward::type() const {
  return type_;
}
inline void PReward::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// required int32 number = 3;
inline bool PReward::has_number() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PReward::set_has_number() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PReward::clear_has_number() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PReward::clear_number() {
  number_ = 0;
  clear_has_number();
}
inline ::google::protobuf::int32 PReward::number() const {
  return number_;
}
inline void PReward::set_number(::google::protobuf::int32 value) {
  set_has_number();
  number_ = value;
}

// -------------------------------------------------------------------

// PReadMail

// required int64 itemId = 1;
inline bool PReadMail::has_itemid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PReadMail::set_has_itemid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PReadMail::clear_has_itemid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PReadMail::clear_itemid() {
  itemid_ = GOOGLE_LONGLONG(0);
  clear_has_itemid();
}
inline ::google::protobuf::int64 PReadMail::itemid() const {
  return itemid_;
}
inline void PReadMail::set_itemid(::google::protobuf::int64 value) {
  set_has_itemid();
  itemid_ = value;
}

// -------------------------------------------------------------------

// PMailItemList

// repeated .PMailItem list = 1;
inline int PMailItemList::list_size() const {
  return list_.size();
}
inline void PMailItemList::clear_list() {
  list_.Clear();
}
inline const ::PMailItem& PMailItemList::list(int index) const {
  return list_.Get(index);
}
inline ::PMailItem* PMailItemList::mutable_list(int index) {
  return list_.Mutable(index);
}
inline ::PMailItem* PMailItemList::add_list() {
  return list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PMailItem >&
PMailItemList::list() const {
  return list_;
}
inline ::google::protobuf::RepeatedPtrField< ::PMailItem >*
PMailItemList::mutable_list() {
  return &list_;
}

// -------------------------------------------------------------------

// PMailList

// -------------------------------------------------------------------

// PReadAllMail


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mail_2eproto__INCLUDED
