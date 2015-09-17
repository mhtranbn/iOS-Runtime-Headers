/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataDBWriter : GEODBWriter {
    BOOL _canCreateDebugTable;
    struct sqlite3_stmt { } *_sqlDeleteAllPhoneNumbers;
    struct sqlite3_stmt { } *_sqlDeleteKeyStringForMUID;
    struct sqlite3_stmt { } *_sqlDeletePlaceDataForMUID;
    struct sqlite3_stmt { } *_sqlInsertKeyString;
    struct sqlite3_stmt { } *_sqlInsertPhoneNumber;
}

- (void)_createKeyStringTable;
- (void)_createPhoneNumberTable;
- (void)_openIfNecessary;
- (void)_populateDBKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forMUID:(unsigned long long)arg2;
- (void)_setMUID:(id)arg1 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg2;
- (void)_setMUID:(unsigned long long)arg1 forPhoneNumber:(long long)arg2;
- (void)clear;
- (void)dealloc;
- (void)deleteComponentForKey:(union _GEOPlaceDataComponentKey { struct { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; })arg1;
- (void)deletePhoneNumberMapping;
- (void)deletePlaceDataForMUID:(unsigned long long)arg1;
- (id)initWithPath:(id)arg1;
- (void)performStatementPreparationTasks;
- (void)performTableCreationTasks;
- (void)setComponent:(id)arg1 forKey:(union _GEOPlaceDataComponentKey { struct { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; })arg2;
- (void)setComponentsFromPlaceData:(id)arg1;

@end
