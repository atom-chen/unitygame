// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: forward_to_clt.proto

#ifndef PROTOBUF_forward_5fto_5fclt_2eproto__INCLUDED
#define PROTOBUF_forward_5fto_5fclt_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)
namespace svr {
class ForwardToCltRequest;
class ForwardToCltRequestDefaultTypeInternal;
extern ForwardToCltRequestDefaultTypeInternal _ForwardToCltRequest_default_instance_;
class ForwardToCltResponse;
class ForwardToCltResponseDefaultTypeInternal;
extern ForwardToCltResponseDefaultTypeInternal _ForwardToCltResponse_default_instance_;
}  // namespace svr

namespace svr {

namespace protobuf_forward_5fto_5fclt_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_forward_5fto_5fclt_2eproto

// ===================================================================

class ForwardToCltRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:svr.ForwardToCltRequest) */ {
 public:
  ForwardToCltRequest();
  virtual ~ForwardToCltRequest();

  ForwardToCltRequest(const ForwardToCltRequest& from);

  inline ForwardToCltRequest& operator=(const ForwardToCltRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ForwardToCltRequest& default_instance();

  static inline const ForwardToCltRequest* internal_default_instance() {
    return reinterpret_cast<const ForwardToCltRequest*>(
               &_ForwardToCltRequest_default_instance_);
  }

  void Swap(ForwardToCltRequest* other);

  // implements Message ----------------------------------------------

  inline ForwardToCltRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  ForwardToCltRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ForwardToCltRequest& from);
  void MergeFrom(const ForwardToCltRequest& from);
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
  void InternalSwap(ForwardToCltRequest* other);
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

  // bytes content = 4;
  void clear_content();
  static const int kContentFieldNumber = 4;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  #if LANG_CXX11
  void set_content(::std::string&& value);
  #endif
  void set_content(const char* value);
  void set_content(const void* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // uint64 base_rpc_clt_id = 1;
  void clear_base_rpc_clt_id();
  static const int kBaseRpcCltIdFieldNumber = 1;
  ::google::protobuf::uint64 base_rpc_clt_id() const;
  void set_base_rpc_clt_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:svr.ForwardToCltRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr service_;
  ::google::protobuf::internal::ArenaStringPtr method_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::google::protobuf::uint64 base_rpc_clt_id_;
  mutable int _cached_size_;
  friend struct  protobuf_forward_5fto_5fclt_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ForwardToCltResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:svr.ForwardToCltResponse) */ {
 public:
  ForwardToCltResponse();
  virtual ~ForwardToCltResponse();

  ForwardToCltResponse(const ForwardToCltResponse& from);

  inline ForwardToCltResponse& operator=(const ForwardToCltResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ForwardToCltResponse& default_instance();

  static inline const ForwardToCltResponse* internal_default_instance() {
    return reinterpret_cast<const ForwardToCltResponse*>(
               &_ForwardToCltResponse_default_instance_);
  }

  void Swap(ForwardToCltResponse* other);

  // implements Message ----------------------------------------------

  inline ForwardToCltResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  ForwardToCltResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ForwardToCltResponse& from);
  void MergeFrom(const ForwardToCltResponse& from);
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
  void InternalSwap(ForwardToCltResponse* other);
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

  // bytes content = 1;
  void clear_content();
  static const int kContentFieldNumber = 1;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  #if LANG_CXX11
  void set_content(::std::string&& value);
  #endif
  void set_content(const char* value);
  void set_content(const void* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // @@protoc_insertion_point(class_scope:svr.ForwardToCltResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  mutable int _cached_size_;
  friend struct  protobuf_forward_5fto_5fclt_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ForwardToCltRequest

// uint64 base_rpc_clt_id = 1;
inline void ForwardToCltRequest::clear_base_rpc_clt_id() {
  base_rpc_clt_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ForwardToCltRequest::base_rpc_clt_id() const {
  // @@protoc_insertion_point(field_get:svr.ForwardToCltRequest.base_rpc_clt_id)
  return base_rpc_clt_id_;
}
inline void ForwardToCltRequest::set_base_rpc_clt_id(::google::protobuf::uint64 value) {
  
  base_rpc_clt_id_ = value;
  // @@protoc_insertion_point(field_set:svr.ForwardToCltRequest.base_rpc_clt_id)
}

// string service = 2;
inline void ForwardToCltRequest::clear_service() {
  service_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ForwardToCltRequest::service() const {
  // @@protoc_insertion_point(field_get:svr.ForwardToCltRequest.service)
  return service_.GetNoArena();
}
inline void ForwardToCltRequest::set_service(const ::std::string& value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.ForwardToCltRequest.service)
}
#if LANG_CXX11
inline void ForwardToCltRequest::set_service(::std::string&& value) {
  
  service_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.ForwardToCltRequest.service)
}
#endif
inline void ForwardToCltRequest::set_service(const char* value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.ForwardToCltRequest.service)
}
inline void ForwardToCltRequest::set_service(const char* value, size_t size) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.ForwardToCltRequest.service)
}
inline ::std::string* ForwardToCltRequest::mutable_service() {
  
  // @@protoc_insertion_point(field_mutable:svr.ForwardToCltRequest.service)
  return service_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ForwardToCltRequest::release_service() {
  // @@protoc_insertion_point(field_release:svr.ForwardToCltRequest.service)
  
  return service_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ForwardToCltRequest::set_allocated_service(::std::string* service) {
  if (service != NULL) {
    
  } else {
    
  }
  service_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service);
  // @@protoc_insertion_point(field_set_allocated:svr.ForwardToCltRequest.service)
}

// string method = 3;
inline void ForwardToCltRequest::clear_method() {
  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ForwardToCltRequest::method() const {
  // @@protoc_insertion_point(field_get:svr.ForwardToCltRequest.method)
  return method_.GetNoArena();
}
inline void ForwardToCltRequest::set_method(const ::std::string& value) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.ForwardToCltRequest.method)
}
#if LANG_CXX11
inline void ForwardToCltRequest::set_method(::std::string&& value) {
  
  method_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.ForwardToCltRequest.method)
}
#endif
inline void ForwardToCltRequest::set_method(const char* value) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.ForwardToCltRequest.method)
}
inline void ForwardToCltRequest::set_method(const char* value, size_t size) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.ForwardToCltRequest.method)
}
inline ::std::string* ForwardToCltRequest::mutable_method() {
  
  // @@protoc_insertion_point(field_mutable:svr.ForwardToCltRequest.method)
  return method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ForwardToCltRequest::release_method() {
  // @@protoc_insertion_point(field_release:svr.ForwardToCltRequest.method)
  
  return method_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ForwardToCltRequest::set_allocated_method(::std::string* method) {
  if (method != NULL) {
    
  } else {
    
  }
  method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method);
  // @@protoc_insertion_point(field_set_allocated:svr.ForwardToCltRequest.method)
}

// bytes content = 4;
inline void ForwardToCltRequest::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ForwardToCltRequest::content() const {
  // @@protoc_insertion_point(field_get:svr.ForwardToCltRequest.content)
  return content_.GetNoArena();
}
inline void ForwardToCltRequest::set_content(const ::std::string& value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.ForwardToCltRequest.content)
}
#if LANG_CXX11
inline void ForwardToCltRequest::set_content(::std::string&& value) {
  
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.ForwardToCltRequest.content)
}
#endif
inline void ForwardToCltRequest::set_content(const char* value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.ForwardToCltRequest.content)
}
inline void ForwardToCltRequest::set_content(const void* value, size_t size) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.ForwardToCltRequest.content)
}
inline ::std::string* ForwardToCltRequest::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:svr.ForwardToCltRequest.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ForwardToCltRequest::release_content() {
  // @@protoc_insertion_point(field_release:svr.ForwardToCltRequest.content)
  
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ForwardToCltRequest::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    
  } else {
    
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:svr.ForwardToCltRequest.content)
}

// -------------------------------------------------------------------

// ForwardToCltResponse

// bytes content = 1;
inline void ForwardToCltResponse::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ForwardToCltResponse::content() const {
  // @@protoc_insertion_point(field_get:svr.ForwardToCltResponse.content)
  return content_.GetNoArena();
}
inline void ForwardToCltResponse::set_content(const ::std::string& value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.ForwardToCltResponse.content)
}
#if LANG_CXX11
inline void ForwardToCltResponse::set_content(::std::string&& value) {
  
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.ForwardToCltResponse.content)
}
#endif
inline void ForwardToCltResponse::set_content(const char* value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.ForwardToCltResponse.content)
}
inline void ForwardToCltResponse::set_content(const void* value, size_t size) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.ForwardToCltResponse.content)
}
inline ::std::string* ForwardToCltResponse::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:svr.ForwardToCltResponse.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ForwardToCltResponse::release_content() {
  // @@protoc_insertion_point(field_release:svr.ForwardToCltResponse.content)
  
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ForwardToCltResponse::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    
  } else {
    
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:svr.ForwardToCltResponse.content)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace svr

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_forward_5fto_5fclt_2eproto__INCLUDED
