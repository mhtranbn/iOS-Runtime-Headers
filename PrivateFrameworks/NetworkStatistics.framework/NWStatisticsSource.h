/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWStatisticsSource : NSObject {
    NSDictionary *_counts;
    <NWStatisticsSourceDelegate> *_delegate;
    unsigned int _filter;
    BOOL _hasCounts;
    BOOL _hasDescriptor;
    BOOL _hasNewKernelInfo;
    struct nstat_counts { 
        unsigned long long nstat_rxpackets; 
        unsigned long long nstat_rxbytes; 
        unsigned long long nstat_txpackets; 
        unsigned long long nstat_txbytes; 
        unsigned int nstat_rxduplicatebytes; 
        unsigned int nstat_rxoutoforderbytes; 
        unsigned int nstat_txretransmit; 
        unsigned int nstat_connectattempts; 
        unsigned int nstat_connectsuccesses; 
        unsigned int nstat_min_rtt; 
        unsigned int nstat_avg_rtt; 
        unsigned int nstat_var_rtt; 
        unsigned long long nstat_cell_rxbytes; 
        unsigned long long nstat_cell_txbytes; 
        unsigned long long nstat_wifi_rxbytes; 
        unsigned long long nstat_wifi_txbytes; 
        unsigned long long nstat_wired_rxbytes; 
        unsigned long long nstat_wired_txbytes; 
    } _last_counts;
    NWStatisticsManager *_manager;
    unsigned int _reference;
    BOOL _removed;
    BOOL _removing;
    unsigned long long _rxWiFiBytes;
    unsigned long long _txWiFiBytes;
}

@property (readonly) const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; }*_nstat_counts;
@property (readonly) int connectAttempts;
@property (readonly) int connectSuccesses;
@property (nonatomic, readonly, copy) NSDictionary *counts;
@property (retain) <NWStatisticsSourceDelegate> *delegate;
@property BOOL hasCounts;
@property BOOL hasDescriptor;
@property BOOL hasNewKernelInfo;
@property (readonly) NWStatisticsManager *manager;
@property unsigned int reference;
@property (getter=isRemoved) BOOL removed;
@property BOOL removing;
@property (readonly) double rttAverage;
@property (readonly) double rttMinimum;
@property (readonly) double rttVariation;
@property (readonly) unsigned long long rxBytes;
@property (readonly) unsigned long long rxCellularBytes;
@property (readonly) int rxDuplicateBytes;
@property (readonly) int rxOutOfOrderBytes;
@property (readonly) unsigned long long rxPackets;
@property (readonly) unsigned long long rxWiFiBytes;
@property (readonly) unsigned long long rxWiredBytes;
@property (readonly) unsigned long long txBytes;
@property (readonly) unsigned long long txCellularBytes;
@property (readonly) unsigned long long txPackets;
@property (readonly) int txRetransmittedBytes;
@property (readonly) unsigned long long txWiFiBytes;
@property (readonly) unsigned long long txWiredBytes;

+ (id)createSourceForProvider:(unsigned int)arg1 srcRef:(unsigned int)arg2 manager:(id)arg3;

- (void).cxx_destruct;
- (BOOL)_handleDescriptor:(void*)arg1 length:(unsigned long)arg2;
- (const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; }*)_nstat_counts;
- (int)connectAttempts;
- (int)connectSuccesses;
- (id)counts;
- (id)createCounts;
- (id)delegate;
- (void)discardCountsDir;
- (BOOL)handleCounts:(const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; }*)arg1;
- (BOOL)handleDescriptor:(void*)arg1 length:(unsigned long)arg2;
- (BOOL)handleMessage:(struct nstat_msg_hdr { unsigned long long x1; unsigned int x2; unsigned short x3; unsigned short x4; }*)arg1 length:(long)arg2;
- (BOOL)hasCounts;
- (BOOL)hasDescriptor;
- (BOOL)hasNewKernelInfo;
- (id)init;
- (id)initWithManager:(id)arg1 source:(unsigned int)arg2;
- (BOOL)isRemoved;
- (id)manager;
- (void)queryCounts;
- (void)queryDescription;
- (unsigned int)reference;
- (BOOL)removing;
- (double)rttAverage;
- (double)rttMinimum;
- (double)rttVariation;
- (unsigned long long)rxBytes;
- (unsigned long long)rxCellularBytes;
- (int)rxDuplicateBytes;
- (int)rxOutOfOrderBytes;
- (unsigned long long)rxPackets;
- (unsigned long long)rxWiFiBytes;
- (unsigned long long)rxWifiBytes;
- (unsigned long long)rxWiredBytes;
- (void)setDelegate:(id)arg1;
- (void)setHasCounts:(BOOL)arg1;
- (void)setHasDescriptor:(BOOL)arg1;
- (void)setHasNewKernelInfo:(BOOL)arg1;
- (void)setReference:(unsigned int)arg1;
- (void)setRemoved:(BOOL)arg1;
- (void)setRemoving:(BOOL)arg1;
- (unsigned long long)txBytes;
- (unsigned long long)txCellularBytes;
- (unsigned long long)txPackets;
- (int)txRetransmittedBytes;
- (unsigned long long)txWiFiBytes;
- (unsigned long long)txWifiBytes;
- (unsigned long long)txWiredBytes;

@end
