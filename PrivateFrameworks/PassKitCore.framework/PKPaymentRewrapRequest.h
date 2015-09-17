/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRewrapRequest : PKPaymentWebServiceRequest {
    NSData *_applicationData;
    NSString *_merchantIdentifier;
    PKPaymentPass *_pass;
    NSData *_paymentData;
}

@property (nonatomic, copy) NSData *applicationData;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, copy) NSData *paymentData;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceData:(id)arg2 account:(id)arg3;
- (id)applicationData;
- (void)dealloc;
- (id)initWithPaymentData:(id)arg1 paymentPass:(id)arg2 merchantIdentifier:(id)arg3;
- (id)merchantIdentifier;
- (id)pass;
- (id)paymentData;
- (void)setApplicationData:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setPaymentData:(id)arg1;

@end
