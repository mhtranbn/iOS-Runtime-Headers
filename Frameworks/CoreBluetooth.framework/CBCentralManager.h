/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBCentralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    CBXpcConnection *_connection;
    <CBCentralManagerDelegate> *_delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didDiscoverPeripheral : 1; 
        unsigned int didConnectPeripheral : 1; 
        unsigned int didFailToConnectPeripheral : 1; 
        unsigned int didDisconnectPeripheral : 1; 
        unsigned int didUpdatePeripheralConnectionState : 1; 
        unsigned int didLoseZone : 1; 
        unsigned int didUpdateConnectionParameters : 1; 
    } _delegateFlags;
    BOOL _isScanning;
    CBPairingAgent *_pairingAgent;
    NSMapTable *_peripherals;
    int _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CBCentralManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL isScanning;
@property (nonatomic, readonly) CBPairingAgent *sharedPairingAgent;
@property int state;
@property (readonly) Class superclass;

- (void)cancelPeripheralConnection:(id)arg1;
- (void)cancelPeripheralConnection:(id)arg1 force:(BOOL)arg2;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)forEachPeripheral:(id /* block */)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handlePeripheralMsg:(int)arg1 args:(id)arg2;
- (void)handleRestoringState:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (BOOL)isMsgAllowedAlways:(int)arg1;
- (BOOL)isMsgAllowedWhenOff:(int)arg1;
- (BOOL)isScanning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)orphanPeripherals;
- (id)peerWithInfo:(id)arg1;
- (id)peripheralWithIdentifier:(id)arg1;
- (id)peripheralWithInfo:(id)arg1;
- (oneway void)release;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(BOOL)arg2;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (BOOL)sendMsg:(int)arg1 args:(id)arg2;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (void)setConnectionTargetQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(int)arg1 forPeripheral:(id)arg2;
- (void)setIsScanning:(BOOL)arg1;
- (void)setState:(int)arg1;
- (id)sharedPairingAgent;
- (int)state;
- (void)stopScan;
- (void)xpcConnectionDidFinalize;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 reply:(id /* block */)arg3;
- (void)xpcConnectionDidReset;
- (void)xpcConnectionIsInvalid;

@end
