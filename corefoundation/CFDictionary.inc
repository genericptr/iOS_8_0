{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFDictionary.h }
{ Created on Fri Mar 20 2:11:35 2015 }

{$if  not (defined(__COREFOUNDATION_CFDICTIONARY__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFDICTIONARY__ = 1;

type
  CFDictionaryRetainCallBack = function (allocator: CFAllocatorRef; value: pointer): pointer; cdecl;
  CFDictionaryReleaseCallBack = procedure (allocator: CFAllocatorRef; value: pointer); cdecl;
  CFDictionaryCopyDescriptionCallBack = function (value: pointer): CFStringRef; cdecl;
  CFDictionaryEqualCallBack = function (value1: pointer; value2: pointer): Boolean; cdecl;
  CFDictionaryHashCallBack = function (value: pointer): CFHashCode; cdecl;

type
  CFDictionaryKeyCallBacks = record
    version: CFIndex;
    retain: CFDictionaryRetainCallBack;
    release: CFDictionaryReleaseCallBack;
    copyDescription: CFDictionaryCopyDescriptionCallBack;
    equal: CFDictionaryEqualCallBack;
    hash: CFDictionaryHashCallBack;
  end;
type
  CFDictionaryKeyCallBacksPtr = ^CFDictionaryKeyCallBacks;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFTypeDictionaryKeyCallBacks: CFDictionaryKeyCallBacks; cvar; external;
  kCFCopyStringDictionaryKeyCallBacks: CFDictionaryKeyCallBacks; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFDictionaryValueCallBacks = record
    version: CFIndex;
    retain: CFDictionaryRetainCallBack;
    release: CFDictionaryReleaseCallBack;
    copyDescription: CFDictionaryCopyDescriptionCallBack;
    equal: CFDictionaryEqualCallBack;
  end;
type
  CFDictionaryValueCallBacksPtr = ^CFDictionaryValueCallBacks;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFTypeDictionaryValueCallBacks: CFDictionaryValueCallBacks; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFDictionaryApplierFunction = procedure (key: pointer; value: pointer; context: pointer); cdecl;
  CFDictionaryRef = OpaqueType;
  CFDictionaryRefPtr = ^CFDictionaryRef;
  CFMutableDictionaryRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFDictionaryGetTypeID: CFTypeID; cdecl; external;
function CFDictionaryCreate(allocator: CFAllocatorRef; keys: pointer; values: pointer; numValues: CFIndex; keyCallBacks: CFDictionaryKeyCallBacksPtr; valueCallBacks: CFDictionaryValueCallBacksPtr): CFDictionaryRef; cdecl; external;
function CFDictionaryCreateCopy(allocator: CFAllocatorRef; theDict: CFDictionaryRef): CFDictionaryRef; cdecl; external;
function CFDictionaryCreateMutable(allocator: CFAllocatorRef; capacity: CFIndex; keyCallBacks: CFDictionaryKeyCallBacksPtr; valueCallBacks: CFDictionaryValueCallBacksPtr): CFMutableDictionaryRef; cdecl; external;
function CFDictionaryCreateMutableCopy(allocator: CFAllocatorRef; capacity: CFIndex; theDict: CFDictionaryRef): CFMutableDictionaryRef; cdecl; external;
function CFDictionaryGetCount(theDict: CFDictionaryRef): CFIndex; cdecl; external;
function CFDictionaryGetCountOfKey(theDict: CFDictionaryRef; key: pointer): CFIndex; cdecl; external;
function CFDictionaryGetCountOfValue(theDict: CFDictionaryRef; value: pointer): CFIndex; cdecl; external;
function CFDictionaryContainsKey(theDict: CFDictionaryRef; key: pointer): Boolean; cdecl; external;
function CFDictionaryContainsValue(theDict: CFDictionaryRef; value: pointer): Boolean; cdecl; external;
function CFDictionaryGetValue(theDict: CFDictionaryRef; key: pointer): pointer; cdecl; external;
function CFDictionaryGetValueIfPresent(theDict: CFDictionaryRef; key: pointer; value: pointer): Boolean; cdecl; external;
procedure CFDictionaryGetKeysAndValues(theDict: CFDictionaryRef; keys: pointer; values: pointer); cdecl; external;
procedure CFDictionaryApplyFunction(theDict: CFDictionaryRef; applier: CFDictionaryApplierFunction; context: pointer); cdecl; external;
procedure CFDictionaryAddValue(theDict: CFMutableDictionaryRef; key: pointer; value: pointer); cdecl; external;
procedure CFDictionarySetValue(theDict: CFMutableDictionaryRef; key: pointer; value: pointer); cdecl; external;
procedure CFDictionaryReplaceValue(theDict: CFMutableDictionaryRef; key: pointer; value: pointer); cdecl; external;
procedure CFDictionaryRemoveValue(theDict: CFMutableDictionaryRef; key: pointer); cdecl; external;
procedure CFDictionaryRemoveAllValues(theDict: CFMutableDictionaryRef); cdecl; external;
{$endif}

{$endif}
