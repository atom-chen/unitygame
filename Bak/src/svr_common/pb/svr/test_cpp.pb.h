// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test_cpp.proto

#ifndef PROTOBUF_test_5fcpp_2eproto__INCLUDED
#define PROTOBUF_test_5fcpp_2eproto__INCLUDED

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
namespace test {
class TestRequest;
class TestRequestDefaultTypeInternal;
extern TestRequestDefaultTypeInternal _TestRequest_default_instance_;
class TestResponse;
class TestResponseDefaultTypeInternal;
extern TestResponseDefaultTypeInternal _TestResponse_default_instance_;
}  // namespace test
}  // namespace svr

namespace svr {
namespace test {

namespace protobuf_test_5fcpp_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_test_5fcpp_2eproto

// ===================================================================

class TestRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:svr.test.TestRequest) */ {
 public:
  TestRequest();
  virtual ~TestRequest();

  TestRequest(const TestRequest& from);

  inline TestRequest& operator=(const TestRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestRequest& default_instance();

  static inline const TestRequest* internal_default_instance() {
    return reinterpret_cast<const TestRequest*>(
               &_TestRequest_default_instance_);
  }

  void Swap(TestRequest* other);

  // implements Message ----------------------------------------------

  inline TestRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  TestRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TestRequest& from);
  void MergeFrom(const TestRequest& from);
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
  void InternalSwap(TestRequest* other);
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

  // string str = 1;
  void clear_str();
  static const int kStrFieldNumber = 1;
  const ::std::string& str() const;
  void set_str(const ::std::string& value);
  #if LANG_CXX11
  void set_str(::std::string&& value);
  #endif
  void set_str(const char* value);
  void set_str(const char* value, size_t size);
  ::std::string* mutable_str();
  ::std::string* release_str();
  void set_allocated_str(::std::string* str);

  // @@protoc_insertion_point(class_scope:svr.test.TestRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr str_;
  mutable int _cached_size_;
  friend struct  protobuf_test_5fcpp_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TestResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:svr.test.TestResponse) */ {
 public:
  TestResponse();
  virtual ~TestResponse();

  TestResponse(const TestResponse& from);

  inline TestResponse& operator=(const TestResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestResponse& default_instance();

  static inline const TestResponse* internal_default_instance() {
    return reinterpret_cast<const TestResponse*>(
               &_TestResponse_default_instance_);
  }

  void Swap(TestResponse* other);

  // implements Message ----------------------------------------------

  inline TestResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  TestResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TestResponse& from);
  void MergeFrom(const TestResponse& from);
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
  void InternalSwap(TestResponse* other);
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

  // string str = 1;
  void clear_str();
  static const int kStrFieldNumber = 1;
  const ::std::string& str() const;
  void set_str(const ::std::string& value);
  #if LANG_CXX11
  void set_str(::std::string&& value);
  #endif
  void set_str(const char* value);
  void set_str(const char* value, size_t size);
  ::std::string* mutable_str();
  ::std::string* release_str();
  void set_allocated_str(::std::string* str);

  // @@protoc_insertion_point(class_scope:svr.test.TestResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr str_;
  mutable int _cached_size_;
  friend struct  protobuf_test_5fcpp_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TestRequest

// string str = 1;
inline void TestRequest::clear_str() {
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TestRequest::str() const {
  // @@protoc_insertion_point(field_get:svr.test.TestRequest.str)
  return str_.GetNoArena();
}
inline void TestRequest::set_str(const ::std::string& value) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.test.TestRequest.str)
}
#if LANG_CXX11
inline void TestRequest::set_str(::std::string&& value) {
  
  str_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.test.TestRequest.str)
}
#endif
inline void TestRequest::set_str(const char* value) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.test.TestRequest.str)
}
inline void TestRequest::set_str(const char* value, size_t size) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.test.TestRequest.str)
}
inline ::std::string* TestRequest::mutable_str() {
  
  // @@protoc_insertion_point(field_mutable:svr.test.TestRequest.str)
  return str_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TestRequest::release_str() {
  // @@protoc_insertion_point(field_release:svr.test.TestRequest.str)
  
  return str_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TestRequest::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    
  } else {
    
  }
  str_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:svr.test.TestRequest.str)
}

// -------------------------------------------------------------------

// TestResponse

// string str = 1;
inline void TestResponse::clear_str() {
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TestResponse::str() const {
  // @@protoc_insertion_point(field_get:svr.test.TestResponse.str)
  return str_.GetNoArena();
}
inline void TestResponse::set_str(const ::std::string& value) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:svr.test.TestResponse.str)
}
#if LANG_CXX11
inline void TestResponse::set_str(::std::string&& value) {
  
  str_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:svr.test.TestResponse.str)
}
#endif
inline void TestResponse::set_str(const char* value) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:svr.test.TestResponse.str)
}
inline void TestResponse::set_str(const char* value, size_t size) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:svr.test.TestResponse.str)
}
inline ::std::string* TestResponse::mutable_str() {
  
  // @@protoc_insertion_point(field_mutable:svr.test.TestResponse.str)
  return str_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TestResponse::release_str() {
  // @@protoc_insertion_point(field_release:svr.test.TestResponse.str)
  
  return str_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TestResponse::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    
  } else {
    
  }
  str_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:svr.test.TestResponse.str)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace test
}  // namespace svr

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_5fcpp_2eproto__INCLUDED
