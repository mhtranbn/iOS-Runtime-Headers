/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPSimpleModel : NSObject <_CDPModel> {
    unsigned long _NEmail;
    unsigned long _NPeople;
    unsigned int **_email;
    float *_email2LogScore;
    unsigned int *_emailLength;
    <_CDPDataHarvester> *_harvester;
    float _lambda;
    BOOL _loaded;
    NSArray *_people;
    unsigned int **_people2Email;
    unsigned int *_people2EmailLength;
    BOOL _requireOutgoingInteraction;
    BOOL _scoresAreDirty;
    unsigned long _size;
    NSIndexSet *_testingIndices;
    double *_timestamp;
    bool *_userIsSender;
    bool *_userIsThreadInitiator;
    float _w0;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <_CDPDataHarvester> *harvester;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float lambda;
@property (nonatomic, readonly) unsigned long nEmail;
@property (nonatomic, readonly) unsigned long nPeople;
@property (nonatomic, readonly) NSArray *people;
@property (nonatomic) BOOL requireOutgoingInteraction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float w0;

+ (int)maxNumberOfEmailsSupported;

- (void).cxx_destruct;
- (unsigned int*)_newIdsForPeople:(id)arg1 length:(unsigned int*)arg2;
- (struct _cdp_prediction_result { int x1; float x2; int x3; int x4; }*)_newPredictionResultWithSeed:(unsigned int*)arg1 seedLength:(unsigned long)arg2 realSeedLength:(unsigned long)arg3 maxTrainingEmailID:(unsigned int)arg4;
- (void)_printEmailWithID:(unsigned int)arg1;
- (void)_printPrediction:(struct _cdp_prediction_result { int x1; float x2; int x3; int x4; }*)arg1;
- (void)_printUserWithID:(unsigned int)arg1;
- (void)_printUsers:(unsigned int*)arg1 length:(unsigned long)arg2;
- (void)_reallocModel;
- (id)_testingIndices;
- (void)dealloc;
- (void)getEmail:(unsigned int**)arg1 emailLength:(unsigned int*)arg2 atIndex:(unsigned long)arg3;
- (id)harvester;
- (float)lambda;
- (void)loadModel:(id /* block */)arg1;
- (void)makePredictionForGroup:(id)arg1 clientType:(int)arg2 limit:(int)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long)nEmail;
- (unsigned long)nPeople;
- (id)people;
- (id)peopleWithID:(unsigned int)arg1;
- (BOOL)requireOutgoingInteraction;
- (void)setHarvester:(id)arg1;
- (void)setLambda:(float)arg1 w0:(float)arg2;
- (void)setRequireOutgoingInteraction:(BOOL)arg1;
- (float)w0;

@end
