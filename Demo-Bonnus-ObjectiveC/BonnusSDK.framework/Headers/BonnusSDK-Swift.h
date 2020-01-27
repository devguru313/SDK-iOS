// Generated by Apple Swift version 4.2.1 effective-4.1.50 (swiftlang-1000.11.42 clang-1000.11.45.1)
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
# elif !defined(__cplusplus)
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
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
@import CoreData;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BonnusSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class UIImage;
@class NSCoder;

SWIFT_CLASS("_TtC9BonnusSDK13BaseImageView")
@interface BaseImageView : UIImageView
@property (nonatomic, getter=isHidden) BOOL hidden;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9BonnusSDK9BaseLabel")
@interface BaseLabel : UILabel
@property (nonatomic, getter=isHidden) BOOL hidden;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIApplication;
@class UIViewController;

SWIFT_CLASS("_TtC9BonnusSDK6Bonnus")
@interface Bonnus : NSObject
- (void)setupBonnusWithUIApplication:(UIApplication * _Nonnull)UIApplication;
- (void)initWithCredentialsWithPartnerID:(NSString * _Nonnull)partnerID token:(NSString * _Nonnull)token sdkId:(NSString * _Nonnull)sdkId userID:(NSString * _Nullable)userID SWIFT_METHOD_FAMILY(none);
- (void)tryToRedeemPriceWithMomento:(NSString * _Nonnull)momento;
- (void)showRewardsViewControllerWithCurrentViewController:(UIViewController * _Nonnull)currentViewController;
- (NSString * _Nonnull)getMainColor SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getSecondColor SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getButtonBkgColor SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getButtonTitleColor SWIFT_WARN_UNUSED_RESULT;
- (void)resetSDK;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC9BonnusSDK12CFNotifyView")
@interface CFNotifyView : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end





@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("Campaign")
@interface Campaign : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Campaign (SWIFT_EXTENSION(BonnusSDK))
@property (nonatomic) int16_t channel;
@property (nonatomic, copy) NSString * _Nullable clientId;
@property (nonatomic, copy) NSString * _Nullable conditions;
@property (nonatomic, copy) NSString * _Nullable dateEnd;
@property (nonatomic, copy) NSString * _Nullable dateStart;
@property (nonatomic, copy) NSString * _Nullable descriptionTxt;
@property (nonatomic, copy) NSString * _Nullable documentation;
@property (nonatomic) int16_t formType;
@property (nonatomic) int16_t gender;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable imageLarge;
@property (nonatomic, copy) NSString * _Nullable imgPrefix;
@property (nonatomic, copy) NSString * _Nullable instructions;
@property (nonatomic, copy) NSString * _Nullable iphoneLink;
@property (nonatomic, copy) NSString * _Nullable landingMsg;
@property (nonatomic, copy) NSString * _Nullable logo;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) int16_t recurringUsers;
@property (nonatomic, copy) NSString * _Nullable redeemLink;
@property (nonatomic, copy) NSString * _Nullable redeemLinkText;
@property (nonatomic, copy) NSString * _Nullable restrictions;
@property (nonatomic, copy) NSString * _Nullable roundImage;
@property (nonatomic) int16_t type;
@property (nonatomic, copy) NSString * _Nullable vigenciaTxt;
@end


SWIFT_CLASS("_TtC9BonnusSDK11ClassicView")
@interface ClassicView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BonnusSDK9CyberView")
@interface CyberView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BonnusSDK13IndicatorView")
@interface IndicatorView : UIView
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



@class UIColor;

@interface IndicatorView (SWIFT_EXTENSION(BonnusSDK))
@property (nonatomic, strong) UIColor * _Null_unspecified tintColor;
- (void)layoutSubviews;
@end


SWIFT_CLASS_NAMED("Moment")
@interface Moment : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Moment (SWIFT_EXTENSION(BonnusSDK))
@property (nonatomic) int16_t channel;
@property (nonatomic, copy) NSString * _Nullable descriptionTxt;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable landingMsg;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable partnerId;
@property (nonatomic) int16_t recurringUsers;
@end




SWIFT_CLASS_NAMED("PromoCodes")
@interface PromoCodes : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface PromoCodes (SWIFT_EXTENSION(BonnusSDK))
@property (nonatomic, copy) NSString * _Nullable botLink;
@property (nonatomic, copy) NSString * _Nullable campaignId;
@property (nonatomic, copy) NSString * _Nullable codeBonnus;
@property (nonatomic, copy) NSString * _Nullable codeClient;
@property (nonatomic, copy) NSString * _Nullable dateChange;
@property (nonatomic, copy) NSString * _Nullable dateRedeem;
@property (nonatomic, copy) NSString * _Nullable dateSent;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable landingPage;
@property (nonatomic, copy) NSString * _Nullable nextAction;
@property (nonatomic, copy) NSString * _Nullable nextCallback;
@property (nonatomic, copy) NSString * _Nullable nextMethod;
@property (nonatomic, copy) NSString * _Nullable partnerMomentsId;
@property (nonatomic, copy) NSString * _Nullable redeemLink;
@property (nonatomic, copy) NSString * _Nullable redeemLinkText;
@property (nonatomic, copy) NSString * _Nullable shortLink;
@property (nonatomic) int16_t status;
@property (nonatomic, copy) NSString * _Nullable userid;
@end


SWIFT_CLASS_NAMED("Recipts")
@interface Recipts : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS_NAMED("SDKConfig")
@interface SDKConfig : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSDecimalNumber;

@interface SDKConfig (SWIFT_EXTENSION(BonnusSDK))
@property (nonatomic) BOOL active;
@property (nonatomic, copy) NSString * _Nullable brands;
@property (nonatomic, copy) NSString * _Nullable buttonColor;
@property (nonatomic, strong) NSObject * _Nullable carriers;
@property (nonatomic, copy) NSString * _Nullable leavingMsg;
@property (nonatomic, copy) NSString * _Nullable listColor;
@property (nonatomic, copy) NSString * _Nullable mainColor;
@property (nonatomic) int16_t notificationTimer;
@property (nonatomic, copy) NSString * _Nullable partnerId;
@property (nonatomic, strong) NSObject * _Nullable promoCodes;
@property (nonatomic, copy) NSString * _Nullable sdkId;
@property (nonatomic, strong) NSObject * _Nullable sdkmoments;
@property (nonatomic, copy) NSString * _Nullable secColor;
@property (nonatomic) int16_t style;
@property (nonatomic, copy) NSString * _Nullable support;
@property (nonatomic, copy) NSString * _Nullable supportTxt;
@property (nonatomic, copy) NSString * _Nullable textAccept;
@property (nonatomic, copy) NSString * _Nullable textClose;
@property (nonatomic, copy) NSString * _Nullable textColor;
@property (nonatomic) int16_t tracking;
@property (nonatomic) int64_t usersLimit;
@property (nonatomic, strong) NSDecimalNumber * _Nullable version;
@end


SWIFT_CLASS_NAMED("SDKMoments")
@interface SDKMoments : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface SDKMoments (SWIFT_EXTENSION(BonnusSDK))
@property (nonatomic, copy) NSString * _Nullable appMoments;
@property (nonatomic) int16_t count;
@property (nonatomic) BOOL isUsed;
@property (nonatomic, copy) NSString * _Nullable logic;
@property (nonatomic) BOOL onNextLogin;
@property (nonatomic, copy) NSString * _Nullable partnerMomentId;
@property (nonatomic) BOOL reusable;
@property (nonatomic, copy) NSString * _Nullable sdkId;
@property (nonatomic) BOOL showNotification;
@property (nonatomic, copy) NSString * _Nullable trigger;
@end


SWIFT_CLASS_NAMED("Settings")
@interface Settings : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Settings (SWIFT_EXTENSION(BonnusSDK))
@property (nonatomic, copy) NSString * _Nullable partnerID;
@property (nonatomic, copy) NSString * _Nullable sdkID;
@property (nonatomic) BOOL sdkReady;
@property (nonatomic, copy) NSString * _Nullable token;
@property (nonatomic, copy) NSString * _Nullable userID;
@end


SWIFT_CLASS("_TtC9BonnusSDK9ToastView")
@interface ToastView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end










SWIFT_CLASS("_TtC9BonnusSDK23ZVActivityIndicatorView")
@interface ZVActivityIndicatorView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end




@interface ZVActivityIndicatorView (SWIFT_EXTENSION(BonnusSDK))
@property (nonatomic, strong) UIColor * _Null_unspecified tintColor;
@end




SWIFT_CLASS("_TtC9BonnusSDK13ZVProgressHUD")
@interface ZVProgressHUD : UIControl
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end













#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
