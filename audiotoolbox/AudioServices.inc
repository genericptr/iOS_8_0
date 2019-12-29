{ Parsed from AudioToolbox.framework (iPhoneOS8.2) AudioServices.h }
{ Created on Fri Mar 20 2:10:47 2015 }

{$if  not (defined(__AudioServices_h__))}

{$ifdef TYPES}
const
  kAudioServicesNoError = 0;
  kAudioServicesUnsupportedPropertyError = 'pty?';
  kAudioServicesBadPropertySizeError = '!siz';
  kAudioServicesBadSpecifierSizeError = '!spc';
  kAudioServicesSystemSoundUnspecifiedError = -1500;
  kAudioServicesSystemSoundClientTimedOutError = -1501;

type
  SystemSoundID = UInt32;
  SystemSoundIDPtr = ^SystemSoundID;
  AudioServicesPropertyID = UInt32;
  AudioServicesPropertyIDPtr = ^AudioServicesPropertyID;
  AudioServicesSystemSoundCompletionProc = procedure (ssID: SystemSoundID; clientData: pointer); cdecl;
AudioObjectPropertyAddressPtr = pointer;

const
  {$if defined(TARGET_OS_IPHONE)}
  kSystemSoundID_Vibrate = $00000FFF;
  {$else}
  kSystemSoundID_UserPreferredAlert = $00001000;
  kSystemSoundID_FlashScreen = $00000FFE;
  kUserPreferredAlert = kSystemSoundID_UserPreferredAlert;
  {$endif}
const
  kAudioServicesPropertyIsUISound = 'isui';
  kAudioServicesPropertyCompletePlaybackIfAppDies = 'ifdi';
{$endif}

{$ifdef FUNCTIONS}
procedure AudioServicesPlayAlertSound(inSystemSoundID: SystemSoundID); cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
procedure AudioServicesPlaySystemSound(inSystemSoundID: SystemSoundID); cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioServicesCreateSystemSoundID(inFileURL: CFURLRef; outSystemSoundID: SystemSoundIDPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioServicesDisposeSystemSoundID(inSystemSoundID: SystemSoundID): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioServicesAddSystemSoundCompletion(inSystemSoundID: SystemSoundID; inRunLoop: CFRunLoopRef; inRunLoopMode: CFStringRef; inCompletionRoutine: AudioServicesSystemSoundCompletionProc; inClientData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
procedure AudioServicesRemoveSystemSoundCompletion(inSystemSoundID: SystemSoundID); cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioServicesGetPropertyInfo(inPropertyID: AudioServicesPropertyID; inSpecifierSize: UInt32; inSpecifier: pointer; outPropertyDataSize: UInt32Ptr; outWritable: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioServicesGetProperty(inPropertyID: AudioServicesPropertyID; inSpecifierSize: UInt32; inSpecifier: pointer; ioPropertyDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioServicesSetProperty(inPropertyID: AudioServicesPropertyID; inSpecifierSize: UInt32; inSpecifier: pointer; inPropertyDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioHardwareServiceProperty_ServiceRestarted = 'srst';
  kAudioHardwareServiceDeviceProperty_VirtualMasterVolume = 'vmvc';
  kAudioHardwareServiceDeviceProperty_VirtualMasterBalance = 'vmbc';
{$endif}

{$ifdef FUNCTIONS}
function AudioHardwareServiceHasProperty(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr): Boolean; cdecl; external; { available starting in __MAC_10_5,__IPHONE_NA }
function AudioHardwareServiceIsPropertySettable(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; outIsSettable: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_NA }
function AudioHardwareServiceGetPropertyDataSize(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inQualifierDataSize: UInt32; inQualifierData: pointer; outDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_NA }
function AudioHardwareServiceGetPropertyData(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inQualifierDataSize: UInt32; inQualifierData: pointer; ioDataSize: UInt32Ptr; outData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_NA }
function AudioHardwareServiceSetPropertyData(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inQualifierDataSize: UInt32; inQualifierData: pointer; inDataSize: UInt32; inData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_NA }
function AudioHardwareServiceAddPropertyListener(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inListener: AudioObjectPropertyListenerProc; inClientData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_NA }
function AudioHardwareServiceRemovePropertyListener(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inListener: AudioObjectPropertyListenerProc; inClientData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_NA }
{$endif}

{$endif}

{$endif}
