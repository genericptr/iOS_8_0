{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFSet.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREFOUNDATION_CFSET__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFSET__ = 1;

type
  CFSetRetainCallBack = function (allocator: CFAllocatorRef; value: pointer): pointer; cdecl;
  CFSetReleaseCallBack = procedure (allocator: CFAllocatorRef; value: pointer); cdecl;
  CFSetCopyDescriptionCallBack = function (value: pointer): CFStringRef; cdecl;
  CFSetEqualCallBack = function (value1: pointer; value2: pointer): Boolean; cdecl;
  CFSetHashCallBack = function (value: pointer): CFHashCode; cdecl;

type
  CFSetCallBacks = record
    version: CFIndex;
    retain: CFSetRetainCallBack;
    release: CFSetReleaseCallBack;
    copyDescription: CFSetCopyDescriptionCallBack;
    equal: CFSetEqualCallBack;
    hash: CFSetHashCallBack;
  end;
type
  CFSetCallBacksPtr = ^CFSetCallBacks;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFTypeSetCallBacks: CFSetCallBacks; cvar; external;
  kCFCopyStringSetCallBacks: CFSetCallBacks; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFSetApplierFunction = procedure (value: pointer; context: pointer); cdecl;
  CFSetRef = OpaqueType;
  CFMutableSetRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFSetGetTypeID: CFTypeID; cdecl; external;
function CFSetCreate(allocator: CFAllocatorRef; values: pointer; numValues: CFIndex; callBacks: CFSetCallBacksPtr): CFSetRef; cdecl; external;
function CFSetCreateCopy(allocator: CFAllocatorRef; theSet: CFSetRef): CFSetRef; cdecl; external;
function CFSetCreateMutable(allocator: CFAllocatorRef; capacity: CFIndex; callBacks: CFSetCallBacksPtr): CFMutableSetRef; cdecl; external;
function CFSetCreateMutableCopy(allocator: CFAllocatorRef; capacity: CFIndex; theSet: CFSetRef): CFMutableSetRef; cdecl; external;
function CFSetGetCount(theSet: CFSetRef): CFIndex; cdecl; external;
function CFSetGetCountOfValue(theSet: CFSetRef; value: pointer): CFIndex; cdecl; external;
function CFSetContainsValue(theSet: CFSetRef; value: pointer): Boolean; cdecl; external;
function CFSetGetValue(theSet: CFSetRef; value: pointer): pointer; cdecl; external;
function CFSetGetValueIfPresent(theSet: CFSetRef; candidate: pointer; value: pointer): Boolean; cdecl; external;
procedure CFSetGetValues(theSet: CFSetRef; values: pointer); cdecl; external;
procedure CFSetApplyFunction(theSet: CFSetRef; applier: CFSetApplierFunction; context: pointer); cdecl; external;
procedure CFSetAddValue(theSet: CFMutableSetRef; value: pointer); cdecl; external;
procedure CFSetReplaceValue(theSet: CFMutableSetRef; value: pointer); cdecl; external;
procedure CFSetSetValue(theSet: CFMutableSetRef; value: pointer); cdecl; external;
procedure CFSetRemoveValue(theSet: CFMutableSetRef; value: pointer); cdecl; external;
procedure CFSetRemoveAllValues(theSet: CFMutableSetRef); cdecl; external;
{$endif}

{$endif}
