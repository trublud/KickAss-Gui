// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test-protobuf.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test-protobuf.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Success_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Success_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_test_2dprotobuf_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_test_2dprotobuf_2eproto() {
  protobuf_AddDesc_test_2dprotobuf_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "test-protobuf.proto");
  GOOGLE_CHECK(file != NULL);
  Success_descriptor_ = file->message_type(0);
  static const int Success_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Success, message_),
  };
  Success_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Success_descriptor_,
      Success::default_instance_,
      Success_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Success, _has_bits_[0]),
      -1,
      -1,
      sizeof(Success),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Success, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_test_2dprotobuf_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Success_descriptor_, &Success::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_test_2dprotobuf_2eproto() {
  delete Success::default_instance_;
  delete Success_reflection_;
}

void protobuf_AddDesc_test_2dprotobuf_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_test_2dprotobuf_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023test-protobuf.proto\032 google/protobuf/d"
    "escriptor.proto\"\032\n\007Success\022\017\n\007message\030\001 "
    "\001(\t", 83);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test-protobuf.proto", &protobuf_RegisterTypes);
  Success::default_instance_ = new Success();
  Success::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_test_2dprotobuf_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_test_2dprotobuf_2eproto {
  StaticDescriptorInitializer_test_2dprotobuf_2eproto() {
    protobuf_AddDesc_test_2dprotobuf_2eproto();
  }
} static_descriptor_initializer_test_2dprotobuf_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Success::kMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Success::Success()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Success)
}

void Success::InitAsDefaultInstance() {
}

Success::Success(const Success& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Success)
}

void Success::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Success::~Success() {
  // @@protoc_insertion_point(destructor:Success)
  SharedDtor();
}

void Success::SharedDtor() {
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Success::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Success::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Success_descriptor_;
}

const Success& Success::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_2dprotobuf_2eproto();
  return *default_instance_;
}

Success* Success::default_instance_ = NULL;

Success* Success::New(::google::protobuf::Arena* arena) const {
  Success* n = new Success;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Success::Clear() {
// @@protoc_insertion_point(message_clear_start:Success)
  if (has_message()) {
    message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Success::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Success)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string message = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "Success.message");
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
  // @@protoc_insertion_point(parse_success:Success)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Success)
  return false;
#undef DO_
}

void Success::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Success)
  // optional string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Success.message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->message(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Success)
}

::google::protobuf::uint8* Success::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Success)
  // optional string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Success.message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Success)
  return target;
}

int Success::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:Success)
  int total_size = 0;

  // optional string message = 1;
  if (has_message()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->message());
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Success::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Success)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Success* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Success>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Success)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Success)
    MergeFrom(*source);
  }
}

void Success::MergeFrom(const Success& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Success)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_message()) {
      set_has_message();
      message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Success::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Success)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Success::CopyFrom(const Success& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Success)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Success::IsInitialized() const {

  return true;
}

void Success::Swap(Success* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Success::InternalSwap(Success* other) {
  message_.Swap(&other->message_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Success::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Success_descriptor_;
  metadata.reflection = Success_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Success

// optional string message = 1;
bool Success::has_message() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Success::set_has_message() {
  _has_bits_[0] |= 0x00000001u;
}
void Success::clear_has_message() {
  _has_bits_[0] &= ~0x00000001u;
}
void Success::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_message();
}
 const ::std::string& Success::message() const {
  // @@protoc_insertion_point(field_get:Success.message)
  return message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Success::set_message(const ::std::string& value) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Success.message)
}
 void Success::set_message(const char* value) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Success.message)
}
 void Success::set_message(const char* value, size_t size) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Success.message)
}
 ::std::string* Success::mutable_message() {
  set_has_message();
  // @@protoc_insertion_point(field_mutable:Success.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Success::release_message() {
  // @@protoc_insertion_point(field_release:Success.message)
  clear_has_message();
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Success::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    set_has_message();
  } else {
    clear_has_message();
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:Success.message)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)