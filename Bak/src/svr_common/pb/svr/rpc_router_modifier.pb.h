// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc_router_modifier.proto

#ifndef PROTOBUF_rpc_5frouter_5fmodifier_2eproto__INCLUDED
#define PROTOBUF_rpc_5frouter_5fmodifier_2eproto__INCLUDED

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
#include "server_empty_msg.pb.h"
// @@protoc_insertion_point(includes)
namespace svr {
class EmptyMsg;
class EmptyMsgDefaultTypeInternal;
extern EmptyMsgDefaultTypeInternal _EmptyMsg_default_instance_;
class ResetMthdDstSvrIdRequest;
class ResetMthdDstSvrIdRequestDefaultTypeInternal;
extern ResetMthdDstSvrIdRequestDefaultTypeInternal _ResetMthdDstSvrIdRequest_default_instance_;
class ResetSvcDstSvrIdRequest;
class ResetSvcDstSvrIdRequestDefaultTypeInternal;
extern ResetSvcDstSvrIdRequestDefaultTypeInternal _ResetSvcDstSvrIdRequest_default_instance_;
class SetMthdDstSvrIdRequest;
class SetMthdDstSvrIdRequestDefaultTypeInternal;
extern SetMthdDstSvrIdRequestDefaultTypeInternal _SetMthdDstSvrIdRequest_default_instance_;
class SetSvcDstSvrIdRequest;
class SetSvcDstSvrIdRequestDefaultTypeInternal;
extern SetSvcDstSvrIdRequestDefaultTypeInternal _SetSvcDstSvrIdRequest_default_instance_;
}  // namespace svr

namespace svr {

namespace protobuf_rpc_5frouter_5fmodifier_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_rpc_5frouter_5fmodifier_2eproto

// ===================================================================

class SetMthdDstSvrIdRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:svr.SetMthdDstSvrIdRequest) */ {
 public:
  SetMthdDstSvrIdRequest();
  virtual ~SetMthdDstSvrIdRequest();

  SetMthdDstSvrIdRequest(const SetMthdDstSvrIdRequest& from);

  inline SetMthdDstSvrIdRequest& operator=(const SetMthdDstSvrIdRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetMthdDstSvrIdRequest& default_instance();

  static inline const SetMthdDstSvrIdRequest* internal_default_instance() {
    return reinterpret_cast<const SetMthdDstSvrIdRequest*>(
               &_SetMthdDstSvrIdRequest_default_instance_);
  }

  void Swap(SetMthdDstSvrIdRequest* other);

  // implements Message ----------------------------------------------

  inline SetMthdDstSvrIdRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  SetMthdDstSvrIdRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SetMthdDstSvrIdRequest& from);
  void MergeFrom(const SetMthdDstSvrIdRequest& from);
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
  void InternalSwap(SetMthdDstSvrIdRequest* other);
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

  // string service = 2;
  void clear_service();
  static const int kServiceFieldNumber = 2;
  const ::std::string& service() const;
  void set_service(const ::std::string& value);
  #if LANG_CXX11
  void set_service(::std::string&& value);
  #endif
  void set_service(const char* value);
  void set_service(const char* value, size_t size);
  ::std::string* mutable_service();
  ::std::string* release_service();
  void set_allocated_service(::std::string* service);

  // string method = 3;
  void clear_method();
  static const int kMethodFieldNumber = 3;
  const ::std::string& method() const;
  void set_method(const ::std::string& value);
  #if LANG_CXX11
  void set_method(::std::string&& value);
  #endif
  void set_method(const char* value);
  void set_method(const char* value, size_t size);
  ::std::string* mutable_method();
  ::std::string* release_method();
  void set_allocated_method(::std::string* method);

  // uint32 session_id = 1;
  void clear_session_id();
  static const int kSessionIdFieldNumber = 1;
  ::google::protobuf::uint32 session_id() const;
  void set_session_id(::google::protobuf::uint32 value);

  // uint32 dst_svr_id = 4;
  void clear_dst_svr_id();
  static const int kDstSvrIdFieldNumber = 4;
  ::google::protobuf::uint32 dst_svr_id() const;
  void set_dst_svr_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:svr.SetMthdDstSvrIdRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr service_;
  ::google::protobuf::internal::ArenaStringPtr method_;
  ::google::protobuf::uint32 session_id_;
  ::google::protobuf::uint32 dst_svr_id_;
  mutable int _cached_size_;
  friend struct  protobuf_rpc_5frouter_5fmodifier_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ResetMthdDstSvrIdRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:svr.ResetMthdDstSvrIdRequest) */ {
 public:
  ResetMthdDstSvrIdRequest();
  virtual ~ResetMthdDstSvrIdRequest();

  ResetMthdDstSvrIdRequest(const ResetMthdDstSvrIdRequest& from);

  inline ResetMthdDstSvrIdRequest& operator=(const ResetMthdDstSvrIdRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResetMthdDstSvrIdRequest& default_instance();

  static inline const ResetMthdDstSvrIdRequest* internal_default_instance() {
    return reinterpret_cast<const ResetMthdDstSvrIdRequest*>(
               &_ResetMthdDstSvrIdRequest_default_instance_);
  }

  void Swap(ResetMthdDstSvrIdRequest* other);

  // implements Message ----------------------------------------------

  inline ResetMthdDstSvrIdRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  ResetMthdDstSvrIdRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResetMthdDstSvrIdRequest& from);
  void MergeFrom(const ResetMthdDstSvrIdRequest& from);
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
  void InternalSwap(ResetMthdDstSvrIdRequest* other);
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

  // string service = 2;
  void clear_service();
  static const int kServiceFieldNumber = 2;
  const ::std::string& service() const;
  void set_service(const ::std::string& value);
  #if LANG_CXX11
  void set_service(::std::string&& value);
  #endif
  void set_service(const char* value);
  void set_service(const char* value, size_t size);
  ::std::string* mutable_service();
  ::std::string* release_service();
  void set_allocated_service(::std::string* service);

  // string method = 3;
  void clear_method();
  static const int kMethodFieldNumber = 3;
  const ::std::string& method() const;
  void set_method(const ::std::string& value);
  #if LANG_CXX11
  void set_method(::std::string&& value);
  #endif
  void set_method(const char* value);
  void set_method(const char* value, size_t size);
  ::std::string* mutable_method();
  ::std::string* release_method();
  void set_allocated_method(::std::string* method);

  // uint32 session_id = 1;
  void clear_session_id();
  static const int kSessionIdFieldNumber = 1;
  ::google::protobuf::uint32 session_id() const;
  void set_session_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:svr.ResetMthdDstSvrIdRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr service_;
  ::google::protobuf::internal::ArenaStringPtr method_;
  ::google::protobuf::uint32 session_id_;
  mutable int _cached_size_;
  friend struct  protobuf_rpc_5frouter_5fmodifier_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SetSvcDstSvrIdRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:svr.SetSvcDstSvrIdRequest) */ {
 public:
  SetSvcDstSvrIdRequest();
  virtual ~SetSvcDstSvrIdRequest();

  SetSvcDstSvrIdRequest(const SetSvcDstSvrIdRequest& from);

  inline SetSvcDstSvrIdRequest& operator=(const SetSvcDstSvrIdRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetSvcDstSvrIdRequest& default_instance();

  static inline const SetSvcDstSvrIdRequest* internal_default_instance() {
    return reinterpret_cast<const SetSvcDstSvrIdRequest*>(
               &_SetSvcDstSvrIdRequest_default_instance_);
  }

  void Swap(SetSvcDstSvrIdRequest* other);

  // implements Message ----------------------------------------------

  inline SetSvcDstSvrIdRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  SetSvcDstSvrIdRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SetSvcDstSvrIdRequest& from);
  void MergeFrom(const SetSvcDstSvrIdRequest& from);
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
  void InternalSwap(SetSvcDstSvrIdRequest* other);
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

  // string service = 2;
  void clear_service();
  static const int kServiceFieldNumber = 2;
  const ::std::string& service() const;
  void set_service(const ::std::string& value);
  #if LANG_CXX11
  void set_service(::std::string&& value);
  #endif
  void set_service(const char* value);
  void set_service(const char* value, size_t size);
  ::std::string* mutable_service();
  ::std::string* release_service();
  void set_allocated_service(::std::string* service);

  // uint32 session_id = 1;
  void clear_session_id();
  static const int kSessionIdFieldNumber = 1;
  ::google::protobuf::uint32 session_id() const;
  void set_session_id(::google::protobuf::uint32 value);

  // uint32 dst_svr_id = 3;
  void clear_dst_svr_id();
  static const int kDstSvrIdFieldNumber = 3;
  ::google::protobuf::uint32 dst_svr_id() const;
  void set_dst_svr_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:svr.SetSvcDstSvrIdRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr service_;
  ::google::protobuf::uint32 session_id_;
  ::google::protobuf::uint32 dst_svr_id_;
  mutable int _cached_size_;
  friend struct  protobuf_rpc_5frouter_5fmodifier_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ResetSvcDstSvrIdRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:svr.ResetSvcDstSvrIdRequest) */ {
 public:
  ResetSvcDstSvrIdRequest();
  virtual ~ResetSvcDstSvrIdRequest();

  ResetSvcDstSvrIdRequest(const ResetSvcDstSvrIdRequest& from);

  inline ResetSvcDstSvrIdRequest& operator=(const ResetSvcDstSvrIdRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResetSvcDstSvrIdRequest& default_instance();

  static inline const ResetSvcDstSvrIdRequest* internal_default_instance() {
    return reinterpret_cast<const ResetSvcDstSvrIdRequest*>(
               &_ResetSvcDstSvrIdRequest_default_instance_);
  }

  void Swap(ResetSvcDstSvrIdRequest* other);

  // implements Message ----------------------------------------------

  inline ResetSvcDstSvrIdRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  ResetSvcDstSvrIdRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResetSvcDstSvrIdRequest& from);
  void MergeFrom(const ResetSvcDstSvrIdRequest& from);
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
  void InternalSwap(ResetSvcDstSvrIdRequest* other);
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

  // string service = 2;
  void clear_service();
  static const int kServiceFieldNumber = 2;
  const ::std::string& service() const;
  void set_service(const ::std::string& value);
  #if LANG_CXX11
  void set_service(::std::string&& value);
  #endif
  void set_service(const char* value);
  void set_service(const char* value, size_t size);
  ::std::string* mutable_service();
  ::std::string* release_service();
  void set_allocated_service(::std::string* service);

  // uint32 session_id = 1;
  void clear_session_id();
  static const int kSessionIdFieldNumber = 1;
  ::google::protobuf::uint32 session_id() const;
  void set_session_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:svr.ResetSvcDstSvrIdRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr service_;
  ::google::protobuf::uint32 session_id_;
  mutable int _cached_size_;
  friend struct  protobuf_rpc_5frouter_5fmodifier_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SetMthdDstSvrIdRequest

// uint32 session_id = 1;
inline void SetMthdDstSvrIdRequest::clear_session_id() {
  session_id_ = 0u;
}
inline ::google::protobuf::uint32 SetMthdDstSvrIdRequest::session_id() const {
  // @@protoc_insertion_point(field_get:svr.SetMthdDstSvrIdRequest.session_id)
  return session_id_;
}
inline void SetMthdDstSvrIdRequest::set_session_id(::google::protobuf::uint32 value) {
  
  session_id_ = value;
  // @@protoc_insertion_point(field_set:svr.SetMthdDstSvrIdRequest.session_id)
}

// string service = 2;
inline void SetMthdDstSvrIdRequest::clear_service() {
  service_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SetMthdDstSvrIdRequest::service() const {
  // @@protoc_insertion_point(field_get:svr.SetMthdDstSvrIdRequest.service)
  return service_.GetNoArena();
}
inline void SetMthdDstSvrIdRequest::set_service(const ::std::string& value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.SetMthdDstSvrIdRequest.service)
}
#if LANG_CXX11
inline void SetMthdDstSvrIdRequest::set_service(::std::string&& value) {
  
  service_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.SetMthdDstSvrIdRequest.service)
}
#endif
inline void SetMthdDstSvrIdRequest::set_service(const char* value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.SetMthdDstSvrIdRequest.service)
}
inline void SetMthdDstSvrIdRequest::set_service(const char* value, size_t size) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.SetMthdDstSvrIdRequest.service)
}
inline ::std::string* SetMthdDstSvrIdRequest::mutable_service() {
  
  // @@protoc_insertion_point(field_mutable:svr.SetMthdDstSvrIdRequest.service)
  return service_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SetMthdDstSvrIdRequest::release_service() {
  // @@protoc_insertion_point(field_release:svr.SetMthdDstSvrIdRequest.service)
  
  return service_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SetMthdDstSvrIdRequest::set_allocated_service(::std::string* service) {
  if (service != NULL) {
    
  } else {
    
  }
  service_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service);
  // @@protoc_insertion_point(field_set_allocated:svr.SetMthdDstSvrIdRequest.service)
}

// string method = 3;
inline void SetMthdDstSvrIdRequest::clear_method() {
  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SetMthdDstSvrIdRequest::method() const {
  // @@protoc_insertion_point(field_get:svr.SetMthdDstSvrIdRequest.method)
  return method_.GetNoArena();
}
inline void SetMthdDstSvrIdRequest::set_method(const ::std::string& value) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.SetMthdDstSvrIdRequest.method)
}
#if LANG_CXX11
inline void SetMthdDstSvrIdRequest::set_method(::std::string&& value) {
  
  method_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.SetMthdDstSvrIdRequest.method)
}
#endif
inline void SetMthdDstSvrIdRequest::set_method(const char* value) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.SetMthdDstSvrIdRequest.method)
}
inline void SetMthdDstSvrIdRequest::set_method(const char* value, size_t size) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.SetMthdDstSvrIdRequest.method)
}
inline ::std::string* SetMthdDstSvrIdRequest::mutable_method() {
  
  // @@protoc_insertion_point(field_mutable:svr.SetMthdDstSvrIdRequest.method)
  return method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SetMthdDstSvrIdRequest::release_method() {
  // @@protoc_insertion_point(field_release:svr.SetMthdDstSvrIdRequest.method)
  
  return method_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SetMthdDstSvrIdRequest::set_allocated_method(::std::string* method) {
  if (method != NULL) {
    
  } else {
    
  }
  method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method);
  // @@protoc_insertion_point(field_set_allocated:svr.SetMthdDstSvrIdRequest.method)
}

// uint32 dst_svr_id = 4;
inline void SetMthdDstSvrIdRequest::clear_dst_svr_id() {
  dst_svr_id_ = 0u;
}
inline ::google::protobuf::uint32 SetMthdDstSvrIdRequest::dst_svr_id() const {
  // @@protoc_insertion_point(field_get:svr.SetMthdDstSvrIdRequest.dst_svr_id)
  return dst_svr_id_;
}
inline void SetMthdDstSvrIdRequest::set_dst_svr_id(::google::protobuf::uint32 value) {
  
  dst_svr_id_ = value;
  // @@protoc_insertion_point(field_set:svr.SetMthdDstSvrIdRequest.dst_svr_id)
}

// -------------------------------------------------------------------

// ResetMthdDstSvrIdRequest

// uint32 session_id = 1;
inline void ResetMthdDstSvrIdRequest::clear_session_id() {
  session_id_ = 0u;
}
inline ::google::protobuf::uint32 ResetMthdDstSvrIdRequest::session_id() const {
  // @@protoc_insertion_point(field_get:svr.ResetMthdDstSvrIdRequest.session_id)
  return session_id_;
}
inline void ResetMthdDstSvrIdRequest::set_session_id(::google::protobuf::uint32 value) {
  
  session_id_ = value;
  // @@protoc_insertion_point(field_set:svr.ResetMthdDstSvrIdRequest.session_id)
}

// string service = 2;
inline void ResetMthdDstSvrIdRequest::clear_service() {
  service_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResetMthdDstSvrIdRequest::service() const {
  // @@protoc_insertion_point(field_get:svr.ResetMthdDstSvrIdRequest.service)
  return service_.GetNoArena();
}
inline void ResetMthdDstSvrIdRequest::set_service(const ::std::string& value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.ResetMthdDstSvrIdRequest.service)
}
#if LANG_CXX11
inline void ResetMthdDstSvrIdRequest::set_service(::std::string&& value) {
  
  service_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.ResetMthdDstSvrIdRequest.service)
}
#endif
inline void ResetMthdDstSvrIdRequest::set_service(const char* value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.ResetMthdDstSvrIdRequest.service)
}
inline void ResetMthdDstSvrIdRequest::set_service(const char* value, size_t size) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.ResetMthdDstSvrIdRequest.service)
}
inline ::std::string* ResetMthdDstSvrIdRequest::mutable_service() {
  
  // @@protoc_insertion_point(field_mutable:svr.ResetMthdDstSvrIdRequest.service)
  return service_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResetMthdDstSvrIdRequest::release_service() {
  // @@protoc_insertion_point(field_release:svr.ResetMthdDstSvrIdRequest.service)
  
  return service_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResetMthdDstSvrIdRequest::set_allocated_service(::std::string* service) {
  if (service != NULL) {
    
  } else {
    
  }
  service_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service);
  // @@protoc_insertion_point(field_set_allocated:svr.ResetMthdDstSvrIdRequest.service)
}

// string method = 3;
inline void ResetMthdDstSvrIdRequest::clear_method() {
  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResetMthdDstSvrIdRequest::method() const {
  // @@protoc_insertion_point(field_get:svr.ResetMthdDstSvrIdRequest.method)
  return method_.GetNoArena();
}
inline void ResetMthdDstSvrIdRequest::set_method(const ::std::string& value) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.ResetMthdDstSvrIdRequest.method)
}
#if LANG_CXX11
inline void ResetMthdDstSvrIdRequest::set_method(::std::string&& value) {
  
  method_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.ResetMthdDstSvrIdRequest.method)
}
#endif
inline void ResetMthdDstSvrIdRequest::set_method(const char* value) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.ResetMthdDstSvrIdRequest.method)
}
inline void ResetMthdDstSvrIdRequest::set_method(const char* value, size_t size) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.ResetMthdDstSvrIdRequest.method)
}
inline ::std::string* ResetMthdDstSvrIdRequest::mutable_method() {
  
  // @@protoc_insertion_point(field_mutable:svr.ResetMthdDstSvrIdRequest.method)
  return method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResetMthdDstSvrIdRequest::release_method() {
  // @@protoc_insertion_point(field_release:svr.ResetMthdDstSvrIdRequest.method)
  
  return method_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResetMthdDstSvrIdRequest::set_allocated_method(::std::string* method) {
  if (method != NULL) {
    
  } else {
    
  }
  method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method);
  // @@protoc_insertion_point(field_set_allocated:svr.ResetMthdDstSvrIdRequest.method)
}

// -------------------------------------------------------------------

// SetSvcDstSvrIdRequest

// uint32 session_id = 1;
inline void SetSvcDstSvrIdRequest::clear_session_id() {
  session_id_ = 0u;
}
inline ::google::protobuf::uint32 SetSvcDstSvrIdRequest::session_id() const {
  // @@protoc_insertion_point(field_get:svr.SetSvcDstSvrIdRequest.session_id)
  return session_id_;
}
inline void SetSvcDstSvrIdRequest::set_session_id(::google::protobuf::uint32 value) {
  
  session_id_ = value;
  // @@protoc_insertion_point(field_set:svr.SetSvcDstSvrIdRequest.session_id)
}

// string service = 2;
inline void SetSvcDstSvrIdRequest::clear_service() {
  service_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SetSvcDstSvrIdRequest::service() const {
  // @@protoc_insertion_point(field_get:svr.SetSvcDstSvrIdRequest.service)
  return service_.GetNoArena();
}
inline void SetSvcDstSvrIdRequest::set_service(const ::std::string& value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.SetSvcDstSvrIdRequest.service)
}
#if LANG_CXX11
inline void SetSvcDstSvrIdRequest::set_service(::std::string&& value) {
  
  service_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.SetSvcDstSvrIdRequest.service)
}
#endif
inline void SetSvcDstSvrIdRequest::set_service(const char* value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.SetSvcDstSvrIdRequest.service)
}
inline void SetSvcDstSvrIdRequest::set_service(const char* value, size_t size) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.SetSvcDstSvrIdRequest.service)
}
inline ::std::string* SetSvcDstSvrIdRequest::mutable_service() {
  
  // @@protoc_insertion_point(field_mutable:svr.SetSvcDstSvrIdRequest.service)
  return service_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SetSvcDstSvrIdRequest::release_service() {
  // @@protoc_insertion_point(field_release:svr.SetSvcDstSvrIdRequest.service)
  
  return service_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SetSvcDstSvrIdRequest::set_allocated_service(::std::string* service) {
  if (service != NULL) {
    
  } else {
    
  }
  service_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service);
  // @@protoc_insertion_point(field_set_allocated:svr.SetSvcDstSvrIdRequest.service)
}

// uint32 dst_svr_id = 3;
inline void SetSvcDstSvrIdRequest::clear_dst_svr_id() {
  dst_svr_id_ = 0u;
}
inline ::google::protobuf::uint32 SetSvcDstSvrIdRequest::dst_svr_id() const {
  // @@protoc_insertion_point(field_get:svr.SetSvcDstSvrIdRequest.dst_svr_id)
  return dst_svr_id_;
}
inline void SetSvcDstSvrIdRequest::set_dst_svr_id(::google::protobuf::uint32 value) {
  
  dst_svr_id_ = value;
  // @@protoc_insertion_point(field_set:svr.SetSvcDstSvrIdRequest.dst_svr_id)
}

// -------------------------------------------------------------------

// ResetSvcDstSvrIdRequest

// uint32 session_id = 1;
inline void ResetSvcDstSvrIdRequest::clear_session_id() {
  session_id_ = 0u;
}
inline ::google::protobuf::uint32 ResetSvcDstSvrIdRequest::session_id() const {
  // @@protoc_insertion_point(field_get:svr.ResetSvcDstSvrIdRequest.session_id)
  return session_id_;
}
inline void ResetSvcDstSvrIdRequest::set_session_id(::google::protobuf::uint32 value) {
  
  session_id_ = value;
  // @@protoc_insertion_point(field_set:svr.ResetSvcDstSvrIdRequest.session_id)
}

// string service = 2;
inline void ResetSvcDstSvrIdRequest::clear_service() {
  service_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResetSvcDstSvrIdRequest::service() const {
  // @@protoc_insertion_point(field_get:svr.ResetSvcDstSvrIdRequest.service)
  return service_.GetNoArena();
}
inline void ResetSvcDstSvrIdRequest::set_service(const ::std::string& value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.ResetSvcDstSvrIdRequest.service)
}
#if LANG_CXX11
inline void ResetSvcDstSvrIdRequest::set_service(::std::string&& value) {
  
  service_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.ResetSvcDstSvrIdRequest.service)
}
#endif
inline void ResetSvcDstSvrIdRequest::set_service(const char* value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.ResetSvcDstSvrIdRequest.service)
}
inline void ResetSvcDstSvrIdRequest::set_service(const char* value, size_t size) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.ResetSvcDstSvrIdRequest.service)
}
inline ::std::string* ResetSvcDstSvrIdRequest::mutable_service() {
  
  // @@protoc_insertion_point(field_mutable:svr.ResetSvcDstSvrIdRequest.service)
  return service_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResetSvcDstSvrIdRequest::release_service() {
  // @@protoc_insertion_point(field_release:svr.ResetSvcDstSvrIdRequest.service)
  
  return service_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResetSvcDstSvrIdRequest::set_allocated_service(::std::string* service) {
  if (service != NULL) {
    
  } else {
    
  }
  service_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service);
  // @@protoc_insertion_point(field_set_allocated:svr.ResetSvcDstSvrIdRequest.service)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace svr

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rpc_5frouter_5fmodifier_2eproto__INCLUDED
