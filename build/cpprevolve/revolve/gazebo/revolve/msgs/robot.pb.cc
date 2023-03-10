// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: robot.proto

#include "robot.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace revolve {
namespace msgs {
constexpr Robot::Robot(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : body_(nullptr)
  , brain_(nullptr)
  , id_(0){}
struct RobotDefaultTypeInternal {
  constexpr RobotDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RobotDefaultTypeInternal() {}
  union {
    Robot _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RobotDefaultTypeInternal _Robot_default_instance_;
}  // namespace msgs
}  // namespace revolve
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_robot_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_robot_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_robot_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_robot_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::revolve::msgs::Robot, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::revolve::msgs::Robot, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::revolve::msgs::Robot, id_),
  PROTOBUF_FIELD_OFFSET(::revolve::msgs::Robot, body_),
  PROTOBUF_FIELD_OFFSET(::revolve::msgs::Robot, brain_),
  2,
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::revolve::msgs::Robot)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::revolve::msgs::_Robot_default_instance_),
};

const char descriptor_table_protodef_robot_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013robot.proto\022\014revolve.msgs\032\nbody.proto\032"
  "\020neural_net.proto\"a\n\005Robot\022\n\n\002id\030\001 \002(\005\022 "
  "\n\004body\030\002 \002(\0132\022.revolve.msgs.Body\022*\n\005brai"
  "n\030\003 \002(\0132\033.revolve.msgs.NeuralNetwork"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_robot_2eproto_deps[2] = {
  &::descriptor_table_body_2eproto,
  &::descriptor_table_neural_5fnet_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_robot_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_robot_2eproto = {
  false, false, 156, descriptor_table_protodef_robot_2eproto, "robot.proto", 
  &descriptor_table_robot_2eproto_once, descriptor_table_robot_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_robot_2eproto::offsets,
  file_level_metadata_robot_2eproto, file_level_enum_descriptors_robot_2eproto, file_level_service_descriptors_robot_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_robot_2eproto_getter() {
  return &descriptor_table_robot_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_robot_2eproto(&descriptor_table_robot_2eproto);
namespace revolve {
namespace msgs {

// ===================================================================

class Robot::_Internal {
 public:
  using HasBits = decltype(std::declval<Robot>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::revolve::msgs::Body& body(const Robot* msg);
  static void set_has_body(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::revolve::msgs::NeuralNetwork& brain(const Robot* msg);
  static void set_has_brain(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

const ::revolve::msgs::Body&
Robot::_Internal::body(const Robot* msg) {
  return *msg->body_;
}
const ::revolve::msgs::NeuralNetwork&
Robot::_Internal::brain(const Robot* msg) {
  return *msg->brain_;
}
void Robot::clear_body() {
  if (body_ != nullptr) body_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void Robot::clear_brain() {
  if (brain_ != nullptr) brain_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
Robot::Robot(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:revolve.msgs.Robot)
}
Robot::Robot(const Robot& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_body()) {
    body_ = new ::revolve::msgs::Body(*from.body_);
  } else {
    body_ = nullptr;
  }
  if (from._internal_has_brain()) {
    brain_ = new ::revolve::msgs::NeuralNetwork(*from.brain_);
  } else {
    brain_ = nullptr;
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:revolve.msgs.Robot)
}

void Robot::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&body_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&body_)) + sizeof(id_));
}

Robot::~Robot() {
  // @@protoc_insertion_point(destructor:revolve.msgs.Robot)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Robot::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete body_;
  if (this != internal_default_instance()) delete brain_;
}

void Robot::ArenaDtor(void* object) {
  Robot* _this = reinterpret_cast< Robot* >(object);
  (void)_this;
}
void Robot::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Robot::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Robot::Clear() {
// @@protoc_insertion_point(message_clear_start:revolve.msgs.Robot)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(body_ != nullptr);
      body_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(brain_ != nullptr);
      brain_->Clear();
    }
  }
  id_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Robot::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .revolve.msgs.Body body = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_body(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .revolve.msgs.NeuralNetwork brain = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_brain(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Robot::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:revolve.msgs.Robot)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 id = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // required .revolve.msgs.Body body = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::body(this), target, stream);
  }

  // required .revolve.msgs.NeuralNetwork brain = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::brain(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:revolve.msgs.Robot)
  return target;
}

size_t Robot::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:revolve.msgs.Robot)
  size_t total_size = 0;

  if (_internal_has_body()) {
    // required .revolve.msgs.Body body = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *body_);
  }

  if (_internal_has_brain()) {
    // required .revolve.msgs.NeuralNetwork brain = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *brain_);
  }

  if (_internal_has_id()) {
    // required int32 id = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_id());
  }

  return total_size;
}
size_t Robot::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:revolve.msgs.Robot)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required .revolve.msgs.Body body = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *body_);

    // required .revolve.msgs.NeuralNetwork brain = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *brain_);

    // required int32 id = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Robot::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Robot::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Robot::GetClassData() const { return &_class_data_; }

void Robot::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<Robot *>(to)->MergeFrom(
      static_cast<const Robot &>(from));
}


void Robot::MergeFrom(const Robot& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:revolve.msgs.Robot)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_body()->::revolve::msgs::Body::MergeFrom(from._internal_body());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_brain()->::revolve::msgs::NeuralNetwork::MergeFrom(from._internal_brain());
    }
    if (cached_has_bits & 0x00000004u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Robot::CopyFrom(const Robot& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:revolve.msgs.Robot)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Robot::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_body()) {
    if (!body_->IsInitialized()) return false;
  }
  if (_internal_has_brain()) {
    if (!brain_->IsInitialized()) return false;
  }
  return true;
}

void Robot::InternalSwap(Robot* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Robot, id_)
      + sizeof(Robot::id_)
      - PROTOBUF_FIELD_OFFSET(Robot, body_)>(
          reinterpret_cast<char*>(&body_),
          reinterpret_cast<char*>(&other->body_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Robot::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_robot_2eproto_getter, &descriptor_table_robot_2eproto_once,
      file_level_metadata_robot_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace revolve
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::revolve::msgs::Robot* Arena::CreateMaybeMessage< ::revolve::msgs::Robot >(Arena* arena) {
  return Arena::CreateMessageInternal< ::revolve::msgs::Robot >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
