{ Parsed from AudioToolbox.framework (iPhoneOS8.2) AudioToolbox.h }
{ Created on Fri Mar 20 2:10:47 2015 }

{$ifdef TYPES}
const
  AUDIO_TOOLBOX_VERSION = 1060;
{$endif}

{$ifndef __AudioToolbox_H}

{$ifdef FUNCTIONS}
procedure CAShow(inObject: pointer); cdecl; external;
procedure CAShowFile(inObject: pointer; inFile: pointer); cdecl; external;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function GetNameFromSoundBank(inSoundBankRef: FSRefPtr; outName: CFStringRef): OSStatus; cdecl; external; deprecated 'in __MAC_10_2,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CopyNameFromSoundBank(inURL: CFURLRef; outName: CFStringRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_7_0 }
function CopyInstrumentInfoFromSoundBank(inURL: CFURLRef; outInstrumentInfo: pointer{CFArrayRefPtr}): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_7_0 }
{$endif}

{$ifdef TYPES}
const
  kInstrumentInfoKey_Name = 'name';
  kInstrumentInfoKey_MSB = 'MSB';
  kInstrumentInfoKey_LSB = 'LSB';
  kInstrumentInfoKey_Program = 'program';
{$endif}

{$endif}
