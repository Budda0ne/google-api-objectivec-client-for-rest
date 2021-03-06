// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Chrome Verified Access API (verifiedaccess/v1)
// Description:
//   API for Verified Access chrome extension to provide credential verification
//   for chrome devices connecting to an enterprise network
// Documentation:
//   https://developers.google.com/chrome/verified-access

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRVerifiedaccess_Empty;
@class GTLRVerifiedaccess_VerifyChallengeResponseRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other verifiedaccess query classes.
 */
@interface GTLRVerifiedaccessQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  CreateChallenge API
 *
 *  Method: verifiedaccess.challenge.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeVerifiedaccess
 */
@interface GTLRVerifiedaccessQuery_ChallengeCreate : GTLRVerifiedaccessQuery

/**
 *  Fetches a @c GTLRVerifiedaccess_Challenge.
 *
 *  CreateChallenge API
 *
 *  @param object The @c GTLRVerifiedaccess_Empty to include in the query.
 *
 *  @return GTLRVerifiedaccessQuery_ChallengeCreate
 */
+ (instancetype)queryWithObject:(GTLRVerifiedaccess_Empty *)object;

@end

/**
 *  VerifyChallengeResponse API
 *
 *  Method: verifiedaccess.challenge.verify
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeVerifiedaccess
 */
@interface GTLRVerifiedaccessQuery_ChallengeVerify : GTLRVerifiedaccessQuery

/**
 *  Fetches a @c GTLRVerifiedaccess_VerifyChallengeResponseResult.
 *
 *  VerifyChallengeResponse API
 *
 *  @param object The @c GTLRVerifiedaccess_VerifyChallengeResponseRequest to
 *    include in the query.
 *
 *  @return GTLRVerifiedaccessQuery_ChallengeVerify
 */
+ (instancetype)queryWithObject:(GTLRVerifiedaccess_VerifyChallengeResponseRequest *)object;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
