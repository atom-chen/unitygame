// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: plane/signin.proto

#ifndef PROTOBUF_plane_2fsignin_2eproto__INCLUDED
#define PROTOBUF_plane_2fsignin_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "empty_msg.pb.h"
// @@protoc_insertion_point(includes)
namespace plane {
class DaySigninResultMsg;
class DaySigninResultMsgDefaultTypeInternal;
extern DaySigninResultMsgDefaultTypeInternal _DaySigninResultMsg_default_instance_;
class MonthSigninInfoMsg;
class MonthSigninInfoMsgDefaultTypeInternal;
extern MonthSigninInfoMsgDefaultTypeInternal _MonthSigninInfoMsg_default_instance_;
class ReceiveCumulaRewardIdMsg;
class ReceiveCumulaRewardIdMsgDefaultTypeInternal;
extern ReceiveCumulaRewardIdMsgDefaultTypeInternal _ReceiveCumulaRewardIdMsg_default_instance_;
class ReceiveCumulaRewardResultMsg;
class ReceiveCumulaRewardResultMsgDefaultTypeInternal;
extern ReceiveCumulaRewardResultMsgDefaultTypeInternal _ReceiveCumulaRewardResultMsg_default_instance_;
}  // namespace plane
namespace rpc {
class EmptyMsg;
class EmptyMsgDefaultTypeInternal;
extern EmptyMsgDefaultTypeInternal _EmptyMsg_default_instance_;
}  // namespace rpc

namespace plane {

namespace protobuf_plane_2fsignin_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_plane_2fsignin_2eproto

// ===================================================================

class MonthSigninInfoMsg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:plane.MonthSigninInfoMsg) */ {
 public:
  MonthSigninInfoMsg();
  virtual ~MonthSigninInfoMsg();

  MonthSigninInfoMsg(const MonthSigninInfoMsg& from);

  inline MonthSigninInfoMsg& operator=(const MonthSigninInfoMsg& from) {
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
  static const MonthSigninInfoMsg& default_instance();

  static inline const MonthSigninInfoMsg* internal_default_instance() {
    return reinterpret_cast<const MonthSigninInfoMsg*>(
               &_MonthSigninInfoMsg_default_instance_);
  }

  void Swap(MonthSigninInfoMsg* other);

  // implements Message ----------------------------------------------

  inline MonthSigninInfoMsg* New() const PROTOBUF_FINAL { return New(NULL); }

  MonthSigninInfoMsg* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MonthSigninInfoMsg& from);
  void MergeFrom(const MonthSigninInfoMsg& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MonthSigninInfoMsg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated uint32 signinlist = 2;
  int signinlist_size() const;
  void clear_signinlist();
  static const int kSigninlistFieldNumber = 2;
  ::google::protobuf::uint32 signinlist(int index) const;
  void set_signinlist(int index, ::google::protobuf::uint32 value);
  void add_signinlist(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      signinlist() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_signinlist();

  // repeated uint32 cumularewardlist = 4;
  int cumularewardlist_size() const;
  void clear_cumularewardlist();
  static const int kCumularewardlistFieldNumber = 4;
  ::google::protobuf::uint32 cumularewardlist(int index) const;
  void set_cumularewardlist(int index, ::google::protobuf::uint32 value);
  void add_cumularewardlist(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      cumularewardlist() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_cumularewardlist();

  // optional uint32 signincount = 1;
  bool has_signincount() const;
  void clear_signincount();
  static const int kSignincountFieldNumber = 1;
  ::google::protobuf::uint32 signincount() const;
  void set_signincount(::google::protobuf::uint32 value);

  // optional uint32 receivecount = 3;
  bool has_receivecount() const;
  void clear_receivecount();
  static const int kReceivecountFieldNumber = 3;
  ::google::protobuf::uint32 receivecount() const;
  void set_receivecount(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:plane.MonthSigninInfoMsg)
 private:
  void set_has_signincount();
  void clear_has_signincount();
  void set_has_receivecount();
  void clear_has_receivecount();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > signinlist_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > cumularewardlist_;
  ::google::protobuf::uint32 signincount_;
  ::google::protobuf::uint32 receivecount_;
  friend struct  protobuf_plane_2fsignin_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DaySigninResultMsg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:plane.DaySigninResultMsg) */ {
 public:
  DaySigninResultMsg();
  virtual ~DaySigninResultMsg();

  DaySigninResultMsg(const DaySigninResultMsg& from);

  inline DaySigninResultMsg& operator=(const DaySigninResultMsg& from) {
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
  static const DaySigninResultMsg& default_instance();

  static inline const DaySigninResultMsg* internal_default_instance() {
    return reinterpret_cast<const DaySigninResultMsg*>(
               &_DaySigninResultMsg_default_instance_);
  }

  void Swap(DaySigninResultMsg* other);

  // implements Message ----------------------------------------------

  inline DaySigninResultMsg* New() const PROTOBUF_FINAL { return New(NULL); }

  DaySigninResultMsg* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DaySigninResultMsg& from);
  void MergeFrom(const DaySigninResultMsg& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(DaySigninResultMsg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 ret = 1;
  bool has_ret() const;
  void clear_ret();
  static const int kRetFieldNumber = 1;
  ::google::protobuf::uint32 ret() const;
  void set_ret(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:plane.DaySigninResultMsg)
 private:
  void set_has_ret();
  void clear_has_ret();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 ret_;
  friend struct  protobuf_plane_2fsignin_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ReceiveCumulaRewardIdMsg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:plane.ReceiveCumulaRewardIdMsg) */ {
 public:
  ReceiveCumulaRewardIdMsg();
  virtual ~ReceiveCumulaRewardIdMsg();

  ReceiveCumulaRewardIdMsg(const ReceiveCumulaRewardIdMsg& from);

  inline ReceiveCumulaRewardIdMsg& operator=(const ReceiveCumulaRewardIdMsg& from) {
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
  static const ReceiveCumulaRewardIdMsg& default_instance();

  static inline const ReceiveCumulaRewardIdMsg* internal_default_instance() {
    return reinterpret_cast<const ReceiveCumulaRewardIdMsg*>(
               &_ReceiveCumulaRewardIdMsg_default_instance_);
  }

  void Swap(ReceiveCumulaRewardIdMsg* other);

  // implements Message ----------------------------------------------

  inline ReceiveCumulaRewardIdMsg* New() const PROTOBUF_FINAL { return New(NULL); }

  ReceiveCumulaRewardIdMsg* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ReceiveCumulaRewardIdMsg& from);
  void MergeFrom(const ReceiveCumulaRewardIdMsg& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ReceiveCumulaRewardIdMsg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:plane.ReceiveCumulaRewardIdMsg)
 private:
  void set_has_id();
  void clear_has_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 id_;
  friend struct  protobuf_plane_2fsignin_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ReceiveCumulaRewardResultMsg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:plane.ReceiveCumulaRewardResultMsg) */ {
 public:
  ReceiveCumulaRewardResultMsg();
  virtual ~ReceiveCumulaRewardResultMsg();

  ReceiveCumulaRewardResultMsg(const ReceiveCumulaRewardResultMsg& from);

  inline ReceiveCumulaRewardResultMsg& operator=(const ReceiveCumulaRewardResultMsg& from) {
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
  static const ReceiveCumulaRewardResultMsg& default_instance();

  static inline const ReceiveCumulaRewardResultMsg* internal_default_instance() {
    return reinterpret_cast<const ReceiveCumulaRewardResultMsg*>(
               &_ReceiveCumulaRewardResultMsg_default_instance_);
  }

  void Swap(ReceiveCumulaRewardResultMsg* other);

  // implements Message ----------------------------------------------

  inline ReceiveCumulaRewardResultMsg* New() const PROTOBUF_FINAL { return New(NULL); }

  ReceiveCumulaRewardResultMsg* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ReceiveCumulaRewardResultMsg& from);
  void MergeFrom(const ReceiveCumulaRewardResultMsg& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ReceiveCumulaRewardResultMsg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // optional uint32 ret = 2;
  bool has_ret() const;
  void clear_ret();
  static const int kRetFieldNumber = 2;
  ::google::protobuf::uint32 ret() const;
  void set_ret(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:plane.ReceiveCumulaRewardResultMsg)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_ret();
  void clear_has_ret();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 ret_;
  friend struct  protobuf_plane_2fsignin_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MonthSigninInfoMsg

// optional uint32 signincount = 1;
inline bool MonthSigninInfoMsg::has_signincount() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MonthSigninInfoMsg::set_has_signincount() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MonthSigninInfoMsg::clear_has_signincount() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MonthSigninInfoMsg::clear_signincount() {
  signincount_ = 0u;
  clear_has_signincount();
}
inline ::google::protobuf::uint32 MonthSigninInfoMsg::signincount() const {
  // @@protoc_insertion_point(field_get:plane.MonthSigninInfoMsg.signincount)
  return signincount_;
}
inline void MonthSigninInfoMsg::set_signincount(::google::protobuf::uint32 value) {
  set_has_signincount();
  signincount_ = value;
  // @@protoc_insertion_point(field_set:plane.MonthSigninInfoMsg.signincount)
}

// repeated uint32 signinlist = 2;
inline int MonthSigninInfoMsg::signinlist_size() const {
  return signinlist_.size();
}
inline void MonthSigninInfoMsg::clear_signinlist() {
  signinlist_.Clear();
}
inline ::google::protobuf::uint32 MonthSigninInfoMsg::signinlist(int index) const {
  // @@protoc_insertion_point(field_get:plane.MonthSigninInfoMsg.signinlist)
  return signinlist_.Get(index);
}
inline void MonthSigninInfoMsg::set_signinlist(int index, ::google::protobuf::uint32 value) {
  signinlist_.Set(index, value);
  // @@protoc_insertion_point(field_set:plane.MonthSigninInfoMsg.signinlist)
}
inline void MonthSigninInfoMsg::add_signinlist(::google::protobuf::uint32 value) {
  signinlist_.Add(value);
  // @@protoc_insertion_point(field_add:plane.MonthSigninInfoMsg.signinlist)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
MonthSigninInfoMsg::signinlist() const {
  // @@protoc_insertion_point(field_list:plane.MonthSigninInfoMsg.signinlist)
  return signinlist_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
MonthSigninInfoMsg::mutable_signinlist() {
  // @@protoc_insertion_point(field_mutable_list:plane.MonthSigninInfoMsg.signinlist)
  return &signinlist_;
}

// optional uint32 receivecount = 3;
inline bool MonthSigninInfoMsg::has_receivecount() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MonthSigninInfoMsg::set_has_receivecount() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MonthSigninInfoMsg::clear_has_receivecount() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MonthSigninInfoMsg::clear_receivecount() {
  receivecount_ = 0u;
  clear_has_receivecount();
}
inline ::google::protobuf::uint32 MonthSigninInfoMsg::receivecount() const {
  // @@protoc_insertion_point(field_get:plane.MonthSigninInfoMsg.receivecount)
  return receivecount_;
}
inline void MonthSigninInfoMsg::set_receivecount(::google::protobuf::uint32 value) {
  set_has_receivecount();
  receivecount_ = value;
  // @@protoc_insertion_point(field_set:plane.MonthSigninInfoMsg.receivecount)
}

// repeated uint32 cumularewardlist = 4;
inline int MonthSigninInfoMsg::cumularewardlist_size() const {
  return cumularewardlist_.size();
}
inline void MonthSigninInfoMsg::clear_cumularewardlist() {
  cumularewardlist_.Clear();
}
inline ::google::protobuf::uint32 MonthSigninInfoMsg::cumularewardlist(int index) const {
  // @@protoc_insertion_point(field_get:plane.MonthSigninInfoMsg.cumularewardlist)
  return cumularewardlist_.Get(index);
}
inline void MonthSigninInfoMsg::set_cumularewardlist(int index, ::google::protobuf::uint32 value) {
  cumularewardlist_.Set(index, value);
  // @@protoc_insertion_point(field_set:plane.MonthSigninInfoMsg.cumularewardlist)
}
inline void MonthSigninInfoMsg::add_cumularewardlist(::google::protobuf::uint32 value) {
  cumularewardlist_.Add(value);
  // @@protoc_insertion_point(field_add:plane.MonthSigninInfoMsg.cumularewardlist)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
MonthSigninInfoMsg::cumularewardlist() const {
  // @@protoc_insertion_point(field_list:plane.MonthSigninInfoMsg.cumularewardlist)
  return cumularewardlist_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
MonthSigninInfoMsg::mutable_cumularewardlist() {
  // @@protoc_insertion_point(field_mutable_list:plane.MonthSigninInfoMsg.cumularewardlist)
  return &cumularewardlist_;
}

// -------------------------------------------------------------------

// DaySigninResultMsg

// optional uint32 ret = 1;
inline bool DaySigninResultMsg::has_ret() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DaySigninResultMsg::set_has_ret() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DaySigninResultMsg::clear_has_ret() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DaySigninResultMsg::clear_ret() {
  ret_ = 0u;
  clear_has_ret();
}
inline ::google::protobuf::uint32 DaySigninResultMsg::ret() const {
  // @@protoc_insertion_point(field_get:plane.DaySigninResultMsg.ret)
  return ret_;
}
inline void DaySigninResultMsg::set_ret(::google::protobuf::uint32 value) {
  set_has_ret();
  ret_ = value;
  // @@protoc_insertion_point(field_set:plane.DaySigninResultMsg.ret)
}

// -------------------------------------------------------------------

// ReceiveCumulaRewardIdMsg

// optional uint32 id = 1;
inline bool ReceiveCumulaRewardIdMsg::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ReceiveCumulaRewardIdMsg::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ReceiveCumulaRewardIdMsg::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ReceiveCumulaRewardIdMsg::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 ReceiveCumulaRewardIdMsg::id() const {
  // @@protoc_insertion_point(field_get:plane.ReceiveCumulaRewardIdMsg.id)
  return id_;
}
inline void ReceiveCumulaRewardIdMsg::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:plane.ReceiveCumulaRewardIdMsg.id)
}

// -------------------------------------------------------------------

// ReceiveCumulaRewardResultMsg

// optional uint32 id = 1;
inline bool ReceiveCumulaRewardResultMsg::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ReceiveCumulaRewardResultMsg::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ReceiveCumulaRewardResultMsg::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ReceiveCumulaRewardResultMsg::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 ReceiveCumulaRewardResultMsg::id() const {
  // @@protoc_insertion_point(field_get:plane.ReceiveCumulaRewardResultMsg.id)
  return id_;
}
inline void ReceiveCumulaRewardResultMsg::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:plane.ReceiveCumulaRewardResultMsg.id)
}

// optional uint32 ret = 2;
inline bool ReceiveCumulaRewardResultMsg::has_ret() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ReceiveCumulaRewardResultMsg::set_has_ret() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ReceiveCumulaRewardResultMsg::clear_has_ret() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ReceiveCumulaRewardResultMsg::clear_ret() {
  ret_ = 0u;
  clear_has_ret();
}
inline ::google::protobuf::uint32 ReceiveCumulaRewardResultMsg::ret() const {
  // @@protoc_insertion_point(field_get:plane.ReceiveCumulaRewardResultMsg.ret)
  return ret_;
}
inline void ReceiveCumulaRewardResultMsg::set_ret(::google::protobuf::uint32 value) {
  set_has_ret();
  ret_ = value;
  // @@protoc_insertion_point(field_set:plane.ReceiveCumulaRewardResultMsg.ret)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace plane

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_plane_2fsignin_2eproto__INCLUDED
