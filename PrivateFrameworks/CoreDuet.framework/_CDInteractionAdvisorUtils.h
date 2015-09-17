/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInteractionAdvisorUtils : NSObject

+ (void)adjustForConsumerSettings:(id)arg1 andRanker:(id)arg2;
+ (id)adviceBasedOnInteractions:(id)arg1 forContacts:(id)arg2 andRanker:(id)arg3 ignoringContacts:(id)arg4 withLimit:(unsigned int)arg5 aggregateByIdentifier:(BOOL)arg6 requireOneOutgoingInteraction:(BOOL)arg7;
+ (BOOL)contact:(id)arg1 mayRepresentTheSamePersonAsOneOf:(id)arg2;
+ (id)contactsForIdentifiers:(id)arg1;
+ (id)contactsInInteraction:(id)arg1;
+ (id)createTimePredicateForReferenceDate:(id)arg1 recentLookBackDays:(int)arg2 windowHours:(int)arg3 lookBackWeeks:(int)arg4 lookAheadWeeks:(int)arg5;
+ (id)hashForAdviceWithContact:(id)arg1 account:(id)arg2 bundleId:(id)arg3 mechanism:(int)arg4;
+ (id)inferConsumerIdentifierFromSettings:(id)arg1;
+ (id)rankContacts:(id)arg1 basedOnInteractions:(id)arg2 andRanker:(id)arg3;
+ (id)stringKeyForAdvice:(id)arg1;
+ (id)unionSet:(id)arg1 withSet:(id)arg2;

@end
