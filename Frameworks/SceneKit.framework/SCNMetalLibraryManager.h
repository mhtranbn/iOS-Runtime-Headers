/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalLibraryManager : NSObject {
    struct __CFDictionary { } *_availableCompiledLibraries;
    NSMapTable *_availableLibraries;
    <MTLLibrary> *_defaultLibrary;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; } *_defaultProgram;
    <MTLDevice> *_device;
    <MTLLibrary> *_frameworkLibrary;
}

- (void)dealloc;
- (struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; }*)defaultProgram;
- (id)frameworkLibrary;
- (id)initWithDevice:(id)arg1;
- (id)libraryForFile:(id)arg1;
- (id)libraryForSourceCode:(id)arg1 preprocessorsMacros:(id)arg2 programDelegate:(struct __C3DFXProgramDelegate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); } x2; void *x3; }*)arg3;

@end
