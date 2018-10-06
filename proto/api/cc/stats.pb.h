// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: stats.proto

#ifndef PROTOBUF_stats_2eproto__INCLUDED
#define PROTOBUF_stats_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include "types.pb.h"
// @@protoc_insertion_point(includes)

namespace zproto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_stats_2eproto();
void protobuf_InitDefaults_stats_2eproto();
void protobuf_AssignDesc_stats_2eproto();
void protobuf_ShutdownFile_stats_2eproto();

class AppVisibleChanged;
class ContentViewChanged;
class Event;
class EventRecord;
class StoreEventsReq;
class UntypedEvent;

// ===================================================================

class EventRecord : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.EventRecord) */ {
 public:
  EventRecord();
  virtual ~EventRecord();

  EventRecord(const EventRecord& from);

  inline EventRecord& operator=(const EventRecord& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EventRecord& default_instance();

  static const EventRecord* internal_default_instance();

  void Swap(EventRecord* other);

  // implements Message ----------------------------------------------

  inline EventRecord* New() const { return New(NULL); }

  EventRecord* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(EventRecord* other);
  void UnsafeMergeFrom(const EventRecord& from);
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

  // optional int64 date = 1;
  void clear_date();
  static const int kDateFieldNumber = 1;
  ::google::protobuf::int64 date() const;
  void set_date(::google::protobuf::int64 value);

  // optional .zproto.Event event = 2;
  bool has_event() const;
  void clear_event();
  static const int kEventFieldNumber = 2;
  const ::zproto::Event& event() const;
  ::zproto::Event* mutable_event();
  ::zproto::Event* release_event();
  void set_allocated_event(::zproto::Event* event);

  // @@protoc_insertion_point(class_scope:zproto.EventRecord)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::zproto::Event* event_;
  ::google::protobuf::int64 date_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_stats_2eproto_impl();
  friend void  protobuf_AddDesc_stats_2eproto_impl();
  friend void protobuf_AssignDesc_stats_2eproto();
  friend void protobuf_ShutdownFile_stats_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<EventRecord> EventRecord_default_instance_;

// -------------------------------------------------------------------

class Event : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.Event) */ {
 public:
  Event();
  virtual ~Event();

  Event(const Event& from);

  inline Event& operator=(const Event& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Event& default_instance();

  static const Event* internal_default_instance();

  void Swap(Event* other);

  // implements Message ----------------------------------------------

  inline Event* New() const { return New(NULL); }

  Event* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Event* other);
  void UnsafeMergeFrom(const Event& from);
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

  // @@protoc_insertion_point(class_scope:zproto.Event)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_stats_2eproto_impl();
  friend void  protobuf_AddDesc_stats_2eproto_impl();
  friend void protobuf_AssignDesc_stats_2eproto();
  friend void protobuf_ShutdownFile_stats_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Event> Event_default_instance_;

// -------------------------------------------------------------------

class UntypedEvent : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.UntypedEvent) */ {
 public:
  UntypedEvent();
  virtual ~UntypedEvent();

  UntypedEvent(const UntypedEvent& from);

  inline UntypedEvent& operator=(const UntypedEvent& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UntypedEvent& default_instance();

  static const UntypedEvent* internal_default_instance();

  void Swap(UntypedEvent* other);

  // implements Message ----------------------------------------------

  inline UntypedEvent* New() const { return New(NULL); }

  UntypedEvent* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(UntypedEvent* other);
  void UnsafeMergeFrom(const UntypedEvent& from);
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

  // optional string event_type = 1;
  void clear_event_type();
  static const int kEventTypeFieldNumber = 1;
  const ::std::string& event_type() const;
  void set_event_type(const ::std::string& value);
  void set_event_type(const char* value);
  void set_event_type(const char* value, size_t size);
  ::std::string* mutable_event_type();
  ::std::string* release_event_type();
  void set_allocated_event_type(::std::string* event_type);

  // optional .zproto.RawArrayValue params = 2;
  bool has_params() const;
  void clear_params();
  static const int kParamsFieldNumber = 2;
  const ::zproto::RawArrayValue& params() const;
  ::zproto::RawArrayValue* mutable_params();
  ::zproto::RawArrayValue* release_params();
  void set_allocated_params(::zproto::RawArrayValue* params);

  // @@protoc_insertion_point(class_scope:zproto.UntypedEvent)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr event_type_;
  ::zproto::RawArrayValue* params_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_stats_2eproto_impl();
  friend void  protobuf_AddDesc_stats_2eproto_impl();
  friend void protobuf_AssignDesc_stats_2eproto();
  friend void protobuf_ShutdownFile_stats_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<UntypedEvent> UntypedEvent_default_instance_;

// -------------------------------------------------------------------

class ContentViewChanged : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.ContentViewChanged) */ {
 public:
  ContentViewChanged();
  virtual ~ContentViewChanged();

  ContentViewChanged(const ContentViewChanged& from);

  inline ContentViewChanged& operator=(const ContentViewChanged& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ContentViewChanged& default_instance();

  static const ContentViewChanged* internal_default_instance();

  void Swap(ContentViewChanged* other);

  // implements Message ----------------------------------------------

  inline ContentViewChanged* New() const { return New(NULL); }

  ContentViewChanged* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ContentViewChanged* other);
  void UnsafeMergeFrom(const ContentViewChanged& from);
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

  // optional string content_type = 1;
  void clear_content_type();
  static const int kContentTypeFieldNumber = 1;
  const ::std::string& content_type() const;
  void set_content_type(const ::std::string& value);
  void set_content_type(const char* value);
  void set_content_type(const char* value, size_t size);
  ::std::string* mutable_content_type();
  ::std::string* release_content_type();
  void set_allocated_content_type(::std::string* content_type);

  // optional string content_id = 2;
  void clear_content_id();
  static const int kContentIdFieldNumber = 2;
  const ::std::string& content_id() const;
  void set_content_id(const ::std::string& value);
  void set_content_id(const char* value);
  void set_content_id(const char* value, size_t size);
  ::std::string* mutable_content_id();
  ::std::string* release_content_id();
  void set_allocated_content_id(::std::string* content_id);

  // optional bool visible = 3;
  void clear_visible();
  static const int kVisibleFieldNumber = 3;
  bool visible() const;
  void set_visible(bool value);

  // optional .zproto.RawArrayValue params = 4;
  bool has_params() const;
  void clear_params();
  static const int kParamsFieldNumber = 4;
  const ::zproto::RawArrayValue& params() const;
  ::zproto::RawArrayValue* mutable_params();
  ::zproto::RawArrayValue* release_params();
  void set_allocated_params(::zproto::RawArrayValue* params);

  // @@protoc_insertion_point(class_scope:zproto.ContentViewChanged)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr content_type_;
  ::google::protobuf::internal::ArenaStringPtr content_id_;
  ::zproto::RawArrayValue* params_;
  bool visible_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_stats_2eproto_impl();
  friend void  protobuf_AddDesc_stats_2eproto_impl();
  friend void protobuf_AssignDesc_stats_2eproto();
  friend void protobuf_ShutdownFile_stats_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ContentViewChanged> ContentViewChanged_default_instance_;

// -------------------------------------------------------------------

class AppVisibleChanged : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.AppVisibleChanged) */ {
 public:
  AppVisibleChanged();
  virtual ~AppVisibleChanged();

  AppVisibleChanged(const AppVisibleChanged& from);

  inline AppVisibleChanged& operator=(const AppVisibleChanged& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AppVisibleChanged& default_instance();

  static const AppVisibleChanged* internal_default_instance();

  void Swap(AppVisibleChanged* other);

  // implements Message ----------------------------------------------

  inline AppVisibleChanged* New() const { return New(NULL); }

  AppVisibleChanged* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(AppVisibleChanged* other);
  void UnsafeMergeFrom(const AppVisibleChanged& from);
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

  // optional bool visible = 1;
  void clear_visible();
  static const int kVisibleFieldNumber = 1;
  bool visible() const;
  void set_visible(bool value);

  // @@protoc_insertion_point(class_scope:zproto.AppVisibleChanged)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool visible_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_stats_2eproto_impl();
  friend void  protobuf_AddDesc_stats_2eproto_impl();
  friend void protobuf_AssignDesc_stats_2eproto();
  friend void protobuf_ShutdownFile_stats_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<AppVisibleChanged> AppVisibleChanged_default_instance_;

// -------------------------------------------------------------------

class StoreEventsReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.StoreEventsReq) */ {
 public:
  StoreEventsReq();
  virtual ~StoreEventsReq();

  StoreEventsReq(const StoreEventsReq& from);

  inline StoreEventsReq& operator=(const StoreEventsReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StoreEventsReq& default_instance();

  static const StoreEventsReq* internal_default_instance();

  void Swap(StoreEventsReq* other);

  // implements Message ----------------------------------------------

  inline StoreEventsReq* New() const { return New(NULL); }

  StoreEventsReq* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(StoreEventsReq* other);
  void UnsafeMergeFrom(const StoreEventsReq& from);
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

  // repeated .zproto.Event events = 1;
  int events_size() const;
  void clear_events();
  static const int kEventsFieldNumber = 1;
  const ::zproto::Event& events(int index) const;
  ::zproto::Event* mutable_events(int index);
  ::zproto::Event* add_events();
  ::google::protobuf::RepeatedPtrField< ::zproto::Event >*
      mutable_events();
  const ::google::protobuf::RepeatedPtrField< ::zproto::Event >&
      events() const;

  // @@protoc_insertion_point(class_scope:zproto.StoreEventsReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::zproto::Event > events_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_stats_2eproto_impl();
  friend void  protobuf_AddDesc_stats_2eproto_impl();
  friend void protobuf_AssignDesc_stats_2eproto();
  friend void protobuf_ShutdownFile_stats_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<StoreEventsReq> StoreEventsReq_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// EventRecord

// optional int64 date = 1;
inline void EventRecord::clear_date() {
  date_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 EventRecord::date() const {
  // @@protoc_insertion_point(field_get:zproto.EventRecord.date)
  return date_;
}
inline void EventRecord::set_date(::google::protobuf::int64 value) {
  
  date_ = value;
  // @@protoc_insertion_point(field_set:zproto.EventRecord.date)
}

// optional .zproto.Event event = 2;
inline bool EventRecord::has_event() const {
  return this != internal_default_instance() && event_ != NULL;
}
inline void EventRecord::clear_event() {
  if (GetArenaNoVirtual() == NULL && event_ != NULL) delete event_;
  event_ = NULL;
}
inline const ::zproto::Event& EventRecord::event() const {
  // @@protoc_insertion_point(field_get:zproto.EventRecord.event)
  return event_ != NULL ? *event_
                         : *::zproto::Event::internal_default_instance();
}
inline ::zproto::Event* EventRecord::mutable_event() {
  
  if (event_ == NULL) {
    event_ = new ::zproto::Event;
  }
  // @@protoc_insertion_point(field_mutable:zproto.EventRecord.event)
  return event_;
}
inline ::zproto::Event* EventRecord::release_event() {
  // @@protoc_insertion_point(field_release:zproto.EventRecord.event)
  
  ::zproto::Event* temp = event_;
  event_ = NULL;
  return temp;
}
inline void EventRecord::set_allocated_event(::zproto::Event* event) {
  delete event_;
  event_ = event;
  if (event) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:zproto.EventRecord.event)
}

inline const EventRecord* EventRecord::internal_default_instance() {
  return &EventRecord_default_instance_.get();
}
// -------------------------------------------------------------------

// Event

inline const Event* Event::internal_default_instance() {
  return &Event_default_instance_.get();
}
// -------------------------------------------------------------------

// UntypedEvent

// optional string event_type = 1;
inline void UntypedEvent::clear_event_type() {
  event_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UntypedEvent::event_type() const {
  // @@protoc_insertion_point(field_get:zproto.UntypedEvent.event_type)
  return event_type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UntypedEvent::set_event_type(const ::std::string& value) {
  
  event_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.UntypedEvent.event_type)
}
inline void UntypedEvent::set_event_type(const char* value) {
  
  event_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.UntypedEvent.event_type)
}
inline void UntypedEvent::set_event_type(const char* value, size_t size) {
  
  event_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.UntypedEvent.event_type)
}
inline ::std::string* UntypedEvent::mutable_event_type() {
  
  // @@protoc_insertion_point(field_mutable:zproto.UntypedEvent.event_type)
  return event_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UntypedEvent::release_event_type() {
  // @@protoc_insertion_point(field_release:zproto.UntypedEvent.event_type)
  
  return event_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UntypedEvent::set_allocated_event_type(::std::string* event_type) {
  if (event_type != NULL) {
    
  } else {
    
  }
  event_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), event_type);
  // @@protoc_insertion_point(field_set_allocated:zproto.UntypedEvent.event_type)
}

// optional .zproto.RawArrayValue params = 2;
inline bool UntypedEvent::has_params() const {
  return this != internal_default_instance() && params_ != NULL;
}
inline void UntypedEvent::clear_params() {
  if (GetArenaNoVirtual() == NULL && params_ != NULL) delete params_;
  params_ = NULL;
}
inline const ::zproto::RawArrayValue& UntypedEvent::params() const {
  // @@protoc_insertion_point(field_get:zproto.UntypedEvent.params)
  return params_ != NULL ? *params_
                         : *::zproto::RawArrayValue::internal_default_instance();
}
inline ::zproto::RawArrayValue* UntypedEvent::mutable_params() {
  
  if (params_ == NULL) {
    params_ = new ::zproto::RawArrayValue;
  }
  // @@protoc_insertion_point(field_mutable:zproto.UntypedEvent.params)
  return params_;
}
inline ::zproto::RawArrayValue* UntypedEvent::release_params() {
  // @@protoc_insertion_point(field_release:zproto.UntypedEvent.params)
  
  ::zproto::RawArrayValue* temp = params_;
  params_ = NULL;
  return temp;
}
inline void UntypedEvent::set_allocated_params(::zproto::RawArrayValue* params) {
  delete params_;
  params_ = params;
  if (params) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:zproto.UntypedEvent.params)
}

inline const UntypedEvent* UntypedEvent::internal_default_instance() {
  return &UntypedEvent_default_instance_.get();
}
// -------------------------------------------------------------------

// ContentViewChanged

// optional string content_type = 1;
inline void ContentViewChanged::clear_content_type() {
  content_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ContentViewChanged::content_type() const {
  // @@protoc_insertion_point(field_get:zproto.ContentViewChanged.content_type)
  return content_type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ContentViewChanged::set_content_type(const ::std::string& value) {
  
  content_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.ContentViewChanged.content_type)
}
inline void ContentViewChanged::set_content_type(const char* value) {
  
  content_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.ContentViewChanged.content_type)
}
inline void ContentViewChanged::set_content_type(const char* value, size_t size) {
  
  content_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.ContentViewChanged.content_type)
}
inline ::std::string* ContentViewChanged::mutable_content_type() {
  
  // @@protoc_insertion_point(field_mutable:zproto.ContentViewChanged.content_type)
  return content_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ContentViewChanged::release_content_type() {
  // @@protoc_insertion_point(field_release:zproto.ContentViewChanged.content_type)
  
  return content_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ContentViewChanged::set_allocated_content_type(::std::string* content_type) {
  if (content_type != NULL) {
    
  } else {
    
  }
  content_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content_type);
  // @@protoc_insertion_point(field_set_allocated:zproto.ContentViewChanged.content_type)
}

// optional string content_id = 2;
inline void ContentViewChanged::clear_content_id() {
  content_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ContentViewChanged::content_id() const {
  // @@protoc_insertion_point(field_get:zproto.ContentViewChanged.content_id)
  return content_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ContentViewChanged::set_content_id(const ::std::string& value) {
  
  content_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.ContentViewChanged.content_id)
}
inline void ContentViewChanged::set_content_id(const char* value) {
  
  content_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.ContentViewChanged.content_id)
}
inline void ContentViewChanged::set_content_id(const char* value, size_t size) {
  
  content_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.ContentViewChanged.content_id)
}
inline ::std::string* ContentViewChanged::mutable_content_id() {
  
  // @@protoc_insertion_point(field_mutable:zproto.ContentViewChanged.content_id)
  return content_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ContentViewChanged::release_content_id() {
  // @@protoc_insertion_point(field_release:zproto.ContentViewChanged.content_id)
  
  return content_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ContentViewChanged::set_allocated_content_id(::std::string* content_id) {
  if (content_id != NULL) {
    
  } else {
    
  }
  content_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content_id);
  // @@protoc_insertion_point(field_set_allocated:zproto.ContentViewChanged.content_id)
}

// optional bool visible = 3;
inline void ContentViewChanged::clear_visible() {
  visible_ = false;
}
inline bool ContentViewChanged::visible() const {
  // @@protoc_insertion_point(field_get:zproto.ContentViewChanged.visible)
  return visible_;
}
inline void ContentViewChanged::set_visible(bool value) {
  
  visible_ = value;
  // @@protoc_insertion_point(field_set:zproto.ContentViewChanged.visible)
}

// optional .zproto.RawArrayValue params = 4;
inline bool ContentViewChanged::has_params() const {
  return this != internal_default_instance() && params_ != NULL;
}
inline void ContentViewChanged::clear_params() {
  if (GetArenaNoVirtual() == NULL && params_ != NULL) delete params_;
  params_ = NULL;
}
inline const ::zproto::RawArrayValue& ContentViewChanged::params() const {
  // @@protoc_insertion_point(field_get:zproto.ContentViewChanged.params)
  return params_ != NULL ? *params_
                         : *::zproto::RawArrayValue::internal_default_instance();
}
inline ::zproto::RawArrayValue* ContentViewChanged::mutable_params() {
  
  if (params_ == NULL) {
    params_ = new ::zproto::RawArrayValue;
  }
  // @@protoc_insertion_point(field_mutable:zproto.ContentViewChanged.params)
  return params_;
}
inline ::zproto::RawArrayValue* ContentViewChanged::release_params() {
  // @@protoc_insertion_point(field_release:zproto.ContentViewChanged.params)
  
  ::zproto::RawArrayValue* temp = params_;
  params_ = NULL;
  return temp;
}
inline void ContentViewChanged::set_allocated_params(::zproto::RawArrayValue* params) {
  delete params_;
  params_ = params;
  if (params) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:zproto.ContentViewChanged.params)
}

inline const ContentViewChanged* ContentViewChanged::internal_default_instance() {
  return &ContentViewChanged_default_instance_.get();
}
// -------------------------------------------------------------------

// AppVisibleChanged

// optional bool visible = 1;
inline void AppVisibleChanged::clear_visible() {
  visible_ = false;
}
inline bool AppVisibleChanged::visible() const {
  // @@protoc_insertion_point(field_get:zproto.AppVisibleChanged.visible)
  return visible_;
}
inline void AppVisibleChanged::set_visible(bool value) {
  
  visible_ = value;
  // @@protoc_insertion_point(field_set:zproto.AppVisibleChanged.visible)
}

inline const AppVisibleChanged* AppVisibleChanged::internal_default_instance() {
  return &AppVisibleChanged_default_instance_.get();
}
// -------------------------------------------------------------------

// StoreEventsReq

// repeated .zproto.Event events = 1;
inline int StoreEventsReq::events_size() const {
  return events_.size();
}
inline void StoreEventsReq::clear_events() {
  events_.Clear();
}
inline const ::zproto::Event& StoreEventsReq::events(int index) const {
  // @@protoc_insertion_point(field_get:zproto.StoreEventsReq.events)
  return events_.Get(index);
}
inline ::zproto::Event* StoreEventsReq::mutable_events(int index) {
  // @@protoc_insertion_point(field_mutable:zproto.StoreEventsReq.events)
  return events_.Mutable(index);
}
inline ::zproto::Event* StoreEventsReq::add_events() {
  // @@protoc_insertion_point(field_add:zproto.StoreEventsReq.events)
  return events_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::zproto::Event >*
StoreEventsReq::mutable_events() {
  // @@protoc_insertion_point(field_mutable_list:zproto.StoreEventsReq.events)
  return &events_;
}
inline const ::google::protobuf::RepeatedPtrField< ::zproto::Event >&
StoreEventsReq::events() const {
  // @@protoc_insertion_point(field_list:zproto.StoreEventsReq.events)
  return events_;
}

inline const StoreEventsReq* StoreEventsReq::internal_default_instance() {
  return &StoreEventsReq_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_stats_2eproto__INCLUDED
