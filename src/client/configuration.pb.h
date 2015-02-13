// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client/configuration.proto

#ifndef PROTOBUF_client_2fconfiguration_2eproto__INCLUDED
#define PROTOBUF_client_2fconfiguration_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace dist_clang {
namespace client {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_client_2fconfiguration_2eproto();
void protobuf_AssignDesc_client_2fconfiguration_2eproto();
void protobuf_ShutdownFile_client_2fconfiguration_2eproto();

class Configuration;

// ===================================================================

class Configuration : public ::google::protobuf::Message {
 public:
  Configuration();
  virtual ~Configuration();

  Configuration(const Configuration& from);

  inline Configuration& operator=(const Configuration& from) {
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
  static const Configuration& default_instance();

  void Swap(Configuration* other);

  // implements Message ----------------------------------------------

  Configuration* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Configuration& from);
  void MergeFrom(const Configuration& from);
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

  // required string path = 1;
  inline bool has_path() const;
  inline void clear_path();
  static const int kPathFieldNumber = 1;
  inline const ::std::string& path() const;
  inline void set_path(const ::std::string& value);
  inline void set_path(const char* value);
  inline void set_path(const char* value, size_t size);
  inline ::std::string* mutable_path();
  inline ::std::string* release_path();
  inline void set_allocated_path(::std::string* path);

  // optional string version = 2;
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 2;
  inline const ::std::string& version() const;
  inline void set_version(const ::std::string& value);
  inline void set_version(const char* value);
  inline void set_version(const char* value, size_t size);
  inline ::std::string* mutable_version();
  inline ::std::string* release_version();
  inline void set_allocated_version(::std::string* version);

  // optional uint32 send_timeout = 3 [default = 60];
  inline bool has_send_timeout() const;
  inline void clear_send_timeout();
  static const int kSendTimeoutFieldNumber = 3;
  inline ::google::protobuf::uint32 send_timeout() const;
  inline void set_send_timeout(::google::protobuf::uint32 value);

  // optional uint32 read_timeout = 4 [default = 5];
  inline bool has_read_timeout() const;
  inline void clear_read_timeout();
  static const int kReadTimeoutFieldNumber = 4;
  inline ::google::protobuf::uint32 read_timeout() const;
  inline void set_read_timeout(::google::protobuf::uint32 value);

  // optional uint32 read_minimum = 5 [default = 32];
  inline bool has_read_minimum() const;
  inline void clear_read_minimum();
  static const int kReadMinimumFieldNumber = 5;
  inline ::google::protobuf::uint32 read_minimum() const;
  inline void set_read_minimum(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:dist_clang.client.proto.Configuration)
 private:
  inline void set_has_path();
  inline void clear_has_path();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_send_timeout();
  inline void clear_has_send_timeout();
  inline void set_has_read_timeout();
  inline void clear_has_read_timeout();
  inline void set_has_read_minimum();
  inline void clear_has_read_minimum();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* path_;
  ::std::string* version_;
  ::google::protobuf::uint32 send_timeout_;
  ::google::protobuf::uint32 read_timeout_;
  ::google::protobuf::uint32 read_minimum_;
  friend void  protobuf_AddDesc_client_2fconfiguration_2eproto();
  friend void protobuf_AssignDesc_client_2fconfiguration_2eproto();
  friend void protobuf_ShutdownFile_client_2fconfiguration_2eproto();

  void InitAsDefaultInstance();
  static Configuration* default_instance_;
};
// ===================================================================


// ===================================================================

// Configuration

// required string path = 1;
inline bool Configuration::has_path() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Configuration::set_has_path() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Configuration::clear_has_path() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Configuration::clear_path() {
  if (path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_->clear();
  }
  clear_has_path();
}
inline const ::std::string& Configuration::path() const {
  // @@protoc_insertion_point(field_get:dist_clang.client.proto.Configuration.path)
  return *path_;
}
inline void Configuration::set_path(const ::std::string& value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  path_->assign(value);
  // @@protoc_insertion_point(field_set:dist_clang.client.proto.Configuration.path)
}
inline void Configuration::set_path(const char* value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  path_->assign(value);
  // @@protoc_insertion_point(field_set_char:dist_clang.client.proto.Configuration.path)
}
inline void Configuration::set_path(const char* value, size_t size) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  path_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:dist_clang.client.proto.Configuration.path)
}
inline ::std::string* Configuration::mutable_path() {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:dist_clang.client.proto.Configuration.path)
  return path_;
}
inline ::std::string* Configuration::release_path() {
  clear_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = path_;
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Configuration::set_allocated_path(::std::string* path) {
  if (path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete path_;
  }
  if (path) {
    set_has_path();
    path_ = path;
  } else {
    clear_has_path();
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:dist_clang.client.proto.Configuration.path)
}

// optional string version = 2;
inline bool Configuration::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Configuration::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Configuration::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Configuration::clear_version() {
  if (version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_->clear();
  }
  clear_has_version();
}
inline const ::std::string& Configuration::version() const {
  // @@protoc_insertion_point(field_get:dist_clang.client.proto.Configuration.version)
  return *version_;
}
inline void Configuration::set_version(const ::std::string& value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  version_->assign(value);
  // @@protoc_insertion_point(field_set:dist_clang.client.proto.Configuration.version)
}
inline void Configuration::set_version(const char* value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  version_->assign(value);
  // @@protoc_insertion_point(field_set_char:dist_clang.client.proto.Configuration.version)
}
inline void Configuration::set_version(const char* value, size_t size) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  version_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:dist_clang.client.proto.Configuration.version)
}
inline ::std::string* Configuration::mutable_version() {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:dist_clang.client.proto.Configuration.version)
  return version_;
}
inline ::std::string* Configuration::release_version() {
  clear_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = version_;
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Configuration::set_allocated_version(::std::string* version) {
  if (version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete version_;
  }
  if (version) {
    set_has_version();
    version_ = version;
  } else {
    clear_has_version();
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:dist_clang.client.proto.Configuration.version)
}

// optional uint32 send_timeout = 3 [default = 60];
inline bool Configuration::has_send_timeout() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Configuration::set_has_send_timeout() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Configuration::clear_has_send_timeout() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Configuration::clear_send_timeout() {
  send_timeout_ = 60u;
  clear_has_send_timeout();
}
inline ::google::protobuf::uint32 Configuration::send_timeout() const {
  // @@protoc_insertion_point(field_get:dist_clang.client.proto.Configuration.send_timeout)
  return send_timeout_;
}
inline void Configuration::set_send_timeout(::google::protobuf::uint32 value) {
  set_has_send_timeout();
  send_timeout_ = value;
  // @@protoc_insertion_point(field_set:dist_clang.client.proto.Configuration.send_timeout)
}

// optional uint32 read_timeout = 4 [default = 5];
inline bool Configuration::has_read_timeout() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Configuration::set_has_read_timeout() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Configuration::clear_has_read_timeout() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Configuration::clear_read_timeout() {
  read_timeout_ = 5u;
  clear_has_read_timeout();
}
inline ::google::protobuf::uint32 Configuration::read_timeout() const {
  // @@protoc_insertion_point(field_get:dist_clang.client.proto.Configuration.read_timeout)
  return read_timeout_;
}
inline void Configuration::set_read_timeout(::google::protobuf::uint32 value) {
  set_has_read_timeout();
  read_timeout_ = value;
  // @@protoc_insertion_point(field_set:dist_clang.client.proto.Configuration.read_timeout)
}

// optional uint32 read_minimum = 5 [default = 32];
inline bool Configuration::has_read_minimum() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Configuration::set_has_read_minimum() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Configuration::clear_has_read_minimum() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Configuration::clear_read_minimum() {
  read_minimum_ = 32u;
  clear_has_read_minimum();
}
inline ::google::protobuf::uint32 Configuration::read_minimum() const {
  // @@protoc_insertion_point(field_get:dist_clang.client.proto.Configuration.read_minimum)
  return read_minimum_;
}
inline void Configuration::set_read_minimum(::google::protobuf::uint32 value) {
  set_has_read_minimum();
  read_minimum_ = value;
  // @@protoc_insertion_point(field_set:dist_clang.client.proto.Configuration.read_minimum)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace client
}  // namespace dist_clang

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_client_2fconfiguration_2eproto__INCLUDED
