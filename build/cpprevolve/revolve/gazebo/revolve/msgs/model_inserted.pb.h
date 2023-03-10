// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model_inserted.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_5finserted_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_model_5finserted_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "model.pb.h"
#include "time.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_model_5finserted_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_model_5finserted_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_model_5finserted_2eproto;
namespace revolve {
namespace msgs {
class ModelInserted;
struct ModelInsertedDefaultTypeInternal;
extern ModelInsertedDefaultTypeInternal _ModelInserted_default_instance_;
}  // namespace msgs
}  // namespace revolve
PROTOBUF_NAMESPACE_OPEN
template<> ::revolve::msgs::ModelInserted* Arena::CreateMaybeMessage<::revolve::msgs::ModelInserted>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace revolve {
namespace msgs {

// ===================================================================

class ModelInserted final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:revolve.msgs.ModelInserted) */ {
 public:
  inline ModelInserted() : ModelInserted(nullptr) {}
  ~ModelInserted() override;
  explicit constexpr ModelInserted(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ModelInserted(const ModelInserted& from);
  ModelInserted(ModelInserted&& from) noexcept
    : ModelInserted() {
    *this = ::std::move(from);
  }

  inline ModelInserted& operator=(const ModelInserted& from) {
    CopyFrom(from);
    return *this;
  }
  inline ModelInserted& operator=(ModelInserted&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ModelInserted& default_instance() {
    return *internal_default_instance();
  }
  static inline const ModelInserted* internal_default_instance() {
    return reinterpret_cast<const ModelInserted*>(
               &_ModelInserted_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ModelInserted& a, ModelInserted& b) {
    a.Swap(&b);
  }
  inline void Swap(ModelInserted* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ModelInserted* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ModelInserted* New() const final {
    return new ModelInserted();
  }

  ModelInserted* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ModelInserted>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ModelInserted& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ModelInserted& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ModelInserted* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "revolve.msgs.ModelInserted";
  }
  protected:
  explicit ModelInserted(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimeFieldNumber = 1,
    kModelFieldNumber = 2,
  };
  // required .gazebo.msgs.Time time = 1;
  bool has_time() const;
  private:
  bool _internal_has_time() const;
  public:
  void clear_time();
  const ::gazebo::msgs::Time& time() const;
  PROTOBUF_MUST_USE_RESULT ::gazebo::msgs::Time* release_time();
  ::gazebo::msgs::Time* mutable_time();
  void set_allocated_time(::gazebo::msgs::Time* time);
  private:
  const ::gazebo::msgs::Time& _internal_time() const;
  ::gazebo::msgs::Time* _internal_mutable_time();
  public:
  void unsafe_arena_set_allocated_time(
      ::gazebo::msgs::Time* time);
  ::gazebo::msgs::Time* unsafe_arena_release_time();

  // required .gazebo.msgs.Model model = 2;
  bool has_model() const;
  private:
  bool _internal_has_model() const;
  public:
  void clear_model();
  const ::gazebo::msgs::Model& model() const;
  PROTOBUF_MUST_USE_RESULT ::gazebo::msgs::Model* release_model();
  ::gazebo::msgs::Model* mutable_model();
  void set_allocated_model(::gazebo::msgs::Model* model);
  private:
  const ::gazebo::msgs::Model& _internal_model() const;
  ::gazebo::msgs::Model* _internal_mutable_model();
  public:
  void unsafe_arena_set_allocated_model(
      ::gazebo::msgs::Model* model);
  ::gazebo::msgs::Model* unsafe_arena_release_model();

  // @@protoc_insertion_point(class_scope:revolve.msgs.ModelInserted)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Time* time_;
  ::gazebo::msgs::Model* model_;
  friend struct ::TableStruct_model_5finserted_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ModelInserted

// required .gazebo.msgs.Time time = 1;
inline bool ModelInserted::_internal_has_time() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || time_ != nullptr);
  return value;
}
inline bool ModelInserted::has_time() const {
  return _internal_has_time();
}
inline const ::gazebo::msgs::Time& ModelInserted::_internal_time() const {
  const ::gazebo::msgs::Time* p = time_;
  return p != nullptr ? *p : reinterpret_cast<const ::gazebo::msgs::Time&>(
      ::gazebo::msgs::_Time_default_instance_);
}
inline const ::gazebo::msgs::Time& ModelInserted::time() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.ModelInserted.time)
  return _internal_time();
}
inline void ModelInserted::unsafe_arena_set_allocated_time(
    ::gazebo::msgs::Time* time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(time_);
  }
  time_ = time;
  if (time) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:revolve.msgs.ModelInserted.time)
}
inline ::gazebo::msgs::Time* ModelInserted::release_time() {
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Time* temp = time_;
  time_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::gazebo::msgs::Time* ModelInserted::unsafe_arena_release_time() {
  // @@protoc_insertion_point(field_release:revolve.msgs.ModelInserted.time)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Time* temp = time_;
  time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* ModelInserted::_internal_mutable_time() {
  _has_bits_[0] |= 0x00000001u;
  if (time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaForAllocation());
    time_ = p;
  }
  return time_;
}
inline ::gazebo::msgs::Time* ModelInserted::mutable_time() {
  ::gazebo::msgs::Time* _msg = _internal_mutable_time();
  // @@protoc_insertion_point(field_mutable:revolve.msgs.ModelInserted.time)
  return _msg;
}
inline void ModelInserted::set_allocated_time(::gazebo::msgs::Time* time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(time_);
  }
  if (time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(time));
    if (message_arena != submessage_arena) {
      time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  time_ = time;
  // @@protoc_insertion_point(field_set_allocated:revolve.msgs.ModelInserted.time)
}

// required .gazebo.msgs.Model model = 2;
inline bool ModelInserted::_internal_has_model() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || model_ != nullptr);
  return value;
}
inline bool ModelInserted::has_model() const {
  return _internal_has_model();
}
inline const ::gazebo::msgs::Model& ModelInserted::_internal_model() const {
  const ::gazebo::msgs::Model* p = model_;
  return p != nullptr ? *p : reinterpret_cast<const ::gazebo::msgs::Model&>(
      ::gazebo::msgs::_Model_default_instance_);
}
inline const ::gazebo::msgs::Model& ModelInserted::model() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.ModelInserted.model)
  return _internal_model();
}
inline void ModelInserted::unsafe_arena_set_allocated_model(
    ::gazebo::msgs::Model* model) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(model_);
  }
  model_ = model;
  if (model) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:revolve.msgs.ModelInserted.model)
}
inline ::gazebo::msgs::Model* ModelInserted::release_model() {
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Model* temp = model_;
  model_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::gazebo::msgs::Model* ModelInserted::unsafe_arena_release_model() {
  // @@protoc_insertion_point(field_release:revolve.msgs.ModelInserted.model)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Model* temp = model_;
  model_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Model* ModelInserted::_internal_mutable_model() {
  _has_bits_[0] |= 0x00000002u;
  if (model_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Model>(GetArenaForAllocation());
    model_ = p;
  }
  return model_;
}
inline ::gazebo::msgs::Model* ModelInserted::mutable_model() {
  ::gazebo::msgs::Model* _msg = _internal_mutable_model();
  // @@protoc_insertion_point(field_mutable:revolve.msgs.ModelInserted.model)
  return _msg;
}
inline void ModelInserted::set_allocated_model(::gazebo::msgs::Model* model) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(model_);
  }
  if (model) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(model));
    if (message_arena != submessage_arena) {
      model = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, model, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  model_ = model;
  // @@protoc_insertion_point(field_set_allocated:revolve.msgs.ModelInserted.model)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace revolve

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_model_5finserted_2eproto
