/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardNameComponents : NSObject <CNVCardNameDataSource> {
    NSString *_companyName;
    NSString *_firstName;
    BOOL _isCompany;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_suffix;
    NSString *_title;
}

@property (readonly) NSString *companyName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *firstName;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isCompany;
@property (readonly) NSString *lastName;
@property (readonly) NSString *middleName;
@property (readonly) NSString *suffix;
@property (readonly) Class superclass;
@property (readonly) NSString *title;

+ (id)components;
+ (id)componentsWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 title:(id)arg4 suffix:(id)arg5 companyName:(id)arg6 isCompany:(BOOL)arg7;

- (id)companyName;
- (id)firstName;
- (BOOL)isCompany;
- (id)lastName;
- (id)middleName;
- (id)suffix;
- (id)title;

@end
