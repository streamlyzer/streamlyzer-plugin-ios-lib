// Generated by Apple Swift version 4.0 effective-3.2 (swiftlang-900.0.65 clang-900.0.37)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
#endif

#import <StreamlyzerPlugin/StreamlyzerPlugin.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("StreamlyzerPlugin")
@class StreamlyzerPluginProperty;

/// @class This class is used to track referred page and current pages
/// It allows you to track page movements on your app.
SWIFT_CLASS("_TtC17StreamlyzerPlugin24STLZPageReferrerObserver")
@interface STLZPageReferrerObserver : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// @brief Setup properties as it needed
/// @param properties STLZPluginProperty containing propertiesplaybackObserver
- (void)setPropertiesWithProperties:(StreamlyzerPluginProperty * _Nonnull)properties;
/// @brief track where it content is being shared
/// @param eventGroup The group name of this event associated with this content
/// @param destination You can enter the name of sharing servie such as facebook, twitter, googleplus, pinterest, livejournal
- (void)postEventWithReferrerHostName:(NSString * _Nonnull)referrerHostName referrerPagePath:(NSString * _Nonnull)referrerPagePath currentPagePath:(NSString * _Nonnull)currentPagePath;
@end

@protocol StreamlyzerPluginDelegate;
@class AVPlayer;

SWIFT_CLASS("_TtC17StreamlyzerPlugin20STLZPlaybackObserver")
@interface STLZPlaybackObserver : NSObject <SZRPluginPlaybackEventDelegate>
@property (nonatomic, weak) id <StreamlyzerPluginDelegate> _Nullable delegate;
/// @brief Initialize Streamlyzer Plugin when media player starts to load
/// Streamlyzer plugin will start to measure media player loading time
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)setDebugModeWithFlag:(BOOL)flag;
- (void)setDevModeWithFlag:(BOOL)flag;
- (void)setUrlWithUrl:(NSString * _Nonnull)url;
/// @brief Initialize Streamlyzer Plugin with AVPlayer
/// If AVPlayer class is used for media player in the application, it will make you easier to integrate
/// @param player AVPlayer to be used for media playback
- (nonnull instancetype)initWithPlayer:(AVPlayer * _Nonnull)player OBJC_DESIGNATED_INITIALIZER;
/// @brief Setup properties as it needed
/// @param properties STLZPluginProperty containing propertiesplaybackObserver
- (void)setPropertiesWithProperties:(StreamlyzerPluginProperty * _Nonnull)properties;
/// @brief Set delegate functions
- (void)setDelegateWithDelegate:(id <StreamlyzerPluginDelegate> _Nonnull)delegate;
/// @brief Setup properties as it needed
/// @param properties properties as [String : Any] format
- (void)setPropertiesWithStringProperty:(NSDictionary<NSString *, id> * _Nullable)stringProperty;
/// @brief This method shall be called when media player starts to initialize
/// Streamlyzer plugin will start its task and to measure player loading or initialization time
- (void)onInitialization;
/// @brief This method shall  be called when it starts to load media player
- (void)onPlayerLoadStart;
/// @brief This method shall be called when media player is ready to play
- (void)onPlayerReady;
/// @brief This method shall be called when media player is started to play or play button is pressed
- (void)onPlayerPlay;
/// @brief This method is called when media player start to play or when the first frame is rendered
- (void)onPlayerPlaying;
/// @brief This method shall be called when media player is paused or pause button is pressed
- (void)onPlayerPause;
/// @brief This method shall be called when the seek is started or seek button is pressed
/// @param position The current postion of playing in millisecond unit
/// @param offset The offset from current position to seek position in milisecond unit
- (void)onPlayerSeekWithPosition:(NSInteger)position offset:(NSInteger)offset;
/// @brief This method shall be called when the seeking is done if media player has this event
/// Streamlyzer Plugin remembers previous status (pause or playing) and gets back to previous status. You may not need to call this function after seeking. Streamlyzer Plugin will change status intenally when other API such as playing or pause is called.
- (void)onPlayerSeeked;
/// @brief This method shall be called when bit rate of video is changed
/// @param bitRate It shall be “kpbs” unit. For example, bit rate is 512kbp. this parameter shall be 512
- (void)onPlayerBitrateChange;
/// @brief This method shall be called when video rendering resolution is changed
/// @param resolution
- (void)onPlayerResolutionChange;
/// @brief This method shall be called when buffering is started during playback.
/// In usual, this method is called when play button is pressed.
- (void)onBufferingStart;
/// @brief This method shall be called when buffering is done if media player has this event
/// It is not nessary to call it after onBufferingStart. The internal state will be changed when other API is called
- (void)onBufferingEnded;
/// @brief This method shall be called when any error in media player is occurred
/// @param errorMessage Error message to be sent
- (void)onPlayerErrorMessageWithErrorMessage:(NSString * _Nonnull)errorMessage;
/// @brief This method shall be called when playback is completed
- (void)onPlayerComplete;
/// @brief This method is called when media player is stopped
- (void)onPlayerStop;
/// @brief This methos is call when channel is changed or play next content in playlist
- (void)onPlayNext;
/// @brief Get current position of media player
/// @return The absolute position in millisecond
- (NSInteger)getPosition SWIFT_WARN_UNUSED_RESULT;
/// @brief Get the bitrate of current video being played
/// @return The bitrate in kbps unit
- (NSInteger)getBitrate SWIFT_WARN_UNUSED_RESULT;
/// @brief Get current rendering resoltion
/// @return The current resolution in string format. For example, “720x482”
- (NSString * _Nonnull)getResolution SWIFT_WARN_UNUSED_RESULT;
/// @Brief Get the total length of video
/// @return The total length of the video in millisecond
- (NSInteger)getDuration SWIFT_WARN_UNUSED_RESULT;
@end


/// @class This class is used to track where your contents are shared to
SWIFT_CLASS("_TtC17StreamlyzerPlugin25STLZSharedContentObserver")
@interface STLZSharedContentObserver : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// @brief Setup properties as it needed
/// @param properties STLZPluginProperty containing propertiesplaybackObserver
- (void)setPropertiesWithProperties:(StreamlyzerPluginProperty * _Nonnull)properties;
/// @brief track where it content is being shared
/// @param eventGroup The group name of this event associated with this content
/// @param destination You can enter the name of sharing servie such as facebook, twitter, googleplus, pinterest, livejournal
- (void)postEventWithEventGroup:(NSString * _Nonnull)eventGroup destination:(NSString * _Nonnull)destination;
@end


/// @class This class is used for user defined events
/// It allows you to define any events to be tracked.
SWIFT_CLASS("_TtC17StreamlyzerPlugin23STLZUserDefinedObserver")
@interface STLZUserDefinedObserver : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// @brief Setup properties as it needed
/// @param properties STLZPluginProperty containing propertiesplaybackObserver
- (void)setPropertiesWithProperties:(StreamlyzerPluginProperty * _Nonnull)properties;
/// @brief This method is used to post user defined events to be counted
/// @param eventGroup Group name of event
/// @param eventName Name of event
- (void)postCountEventWithEventGroup:(NSString * _Nonnull)eventGroup eventName:(NSString * _Nonnull)eventName;
/// @brief This method is used to post user defined events to be added
/// @param eventGroup Group name of event
/// @param eventName Name of event
- (void)postSumEventWithEventGroup:(NSString * _Nonnull)eventGroup eventName:(NSString * _Nonnull)eventName value:(NSInteger)value;
/// @brief This method is used to post user defined events to be added as the revenue
/// @param eventGroup Group name of event
/// @param eventName Name of event
- (void)postRevenueEventWithEventGroup:(NSString * _Nonnull)eventGroup eventName:(NSString * _Nonnull)eventName value:(float)value;
@end


/// Streamlyzer iOS/tvOS Plugin
SWIFT_CLASS("_TtC17StreamlyzerPlugin17StreamlyzerPlugin")
@interface StreamlyzerPlugin : NSObject
@property (nonatomic, strong) STLZPlaybackObserver * _Nonnull playbackObserver;
@property (nonatomic, strong) STLZUserDefinedObserver * _Nonnull userDefinedObserver;
@property (nonatomic, strong) STLZPageReferrerObserver * _Nonnull pageReferrerObserver;
@property (nonatomic, strong) STLZSharedContentObserver * _Nonnull sharedContentObserver;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)setDelegateWithDelegate:(id <StreamlyzerPluginDelegate> _Nonnull)delegate;
/// Get Playback observer from Streamlyzer Plugin
/// @return Playback Observer object
- (STLZPlaybackObserver * _Nonnull)getPlaybackObserver SWIFT_WARN_UNUSED_RESULT;
/// Get User defined event observer from Streamlyzer Plugin
/// @return User define observer object
- (STLZUserDefinedObserver * _Nonnull)getUserDefinedObserver SWIFT_WARN_UNUSED_RESULT;
/// Get page referrer observer from Streamlyzer Plugin
/// @return Page referrer observer object
- (STLZPageReferrerObserver * _Nonnull)getPageReferrerObserver SWIFT_WARN_UNUSED_RESULT;
/// Get shared content observer from Streamlyzder Plugin
/// @return shared content observer object
- (STLZSharedContentObserver * _Nonnull)getSharedContentObserver SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP17StreamlyzerPlugin25StreamlyzerPluginDelegate_")
@protocol StreamlyzerPluginDelegate
@optional
- (NSInteger)getPosition SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getBitrate SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getResolution SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getDuration SWIFT_WARN_UNUSED_RESULT;
@end


/// Define Streamlzyer Plugin properties
/// To avoid typo in key name, simply setter and getter of each properties are kindly provided
SWIFT_CLASS("_TtC17StreamlyzerPlugin25StreamlyzerPluginProperty")
@interface StreamlyzerPluginProperty : NSObject
/// Define properties array and assign default values to each properties
@property (nonatomic, copy) NSDictionary * _Nonnull properties;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Define setter and getter of each properties
@property (nonatomic, copy) NSString * _Nonnull customerKey;
@property (nonatomic, copy) NSString * _Nonnull userType;
@property (nonatomic, copy) NSString * _Nonnull userId;
@property (nonatomic, copy) NSString * _Nonnull userEmail;
@property (nonatomic, copy) NSString * _Nonnull gender;
@property (nonatomic, copy) NSString * _Nonnull yearOfBirth;
@property (nonatomic, copy) NSString * _Nonnull serviceType;
@property (nonatomic, copy) NSString * _Nonnull sessionId;
@property (nonatomic, copy) NSString * _Nonnull streamingServerName;
@property (nonatomic, copy) NSString * _Nonnull abTestMark;
@property (nonatomic) BOOL live;
@property (nonatomic, copy) NSString * _Nonnull thumbnailImage;
@property (nonatomic, copy) NSString * _Nonnull seriesId;
@property (nonatomic, copy) NSString * _Nonnull seriesName;
@property (nonatomic, copy) NSString * _Nonnull seasonId;
@property (nonatomic, copy) NSString * _Nonnull seasonName;
@property (nonatomic, copy) NSString * _Nonnull episodeId;
@property (nonatomic, copy) NSString * _Nonnull episodeName;
@property (nonatomic, copy) NSString * _Nonnull liveChannelId;
@property (nonatomic, copy) NSString * _Nonnull liveChannelName;
@property (nonatomic, copy) NSString * _Nonnull movieId;
@property (nonatomic, copy) NSString * _Nonnull movieName;
@property (nonatomic, copy) NSString * _Nonnull movieCategory;
@property (nonatomic, copy) NSString * _Nonnull movieSubcategory;
@property (nonatomic, copy) NSString * _Nonnull movieContentsProvider;
@property (nonatomic, copy) NSString * _Nonnull movieRate;
@property (nonatomic, copy) NSString * _Nonnull audioLanguage;
@property (nonatomic, copy) NSString * _Nonnull subtitileLanguage;
@property (nonatomic, copy) NSString * _Nonnull playerPlatformVersion;
@property (nonatomic, copy) NSString * _Nonnull mediaPlayerVersion;
@property (nonatomic, copy) NSString * _Nonnull platformName;
@property (nonatomic, copy) NSString * _Nonnull applicationName;
@property (nonatomic, copy) NSString * _Nonnull applicationVersion;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
