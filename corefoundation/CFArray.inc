{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFArray.h }
{ Created on Fri Mar 20 2:11:35 2015 }

{$if  not (defined(__COREFOUNDATION_CFARRAY__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFARRAY__ = 1;

type
  CFArrayRetainCallBack = function (allocator: CFAllocatorRef; value: pointer): pointer; cdecl;
  CFArrayReleaseCallBack = procedure (allocator: CFAllocatorRef; value: pointer); cdecl;
  CFArrayCopyDescriptionCallBack = function (value: pointer): CFStringRef; cdecl;
  CFArrayEqualCallBack = function (value1: pointer; value2: pointer): Boolean; cdecl;

type
  CFArrayCallBacks = record
    version: CFIndex;
    retain: CFArrayRetainCallBack;
    release: CFArrayReleaseCallBack;
    copyDescription: CFArrayCopyDescriptionCallBack;
    equal: CFArrayEqualCallBack;
  end;
type
  CFArrayCallBacksPtr = ^CFArrayCallBacks;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFTypeArrayCallBacks: CFArrayCallBacks; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFArrayApplierFunction = procedure (value: pointer; context: pointer); cdecl;
  CFArrayRef = OpaqueType;
  CFmutableArrayRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFArrayGetTypeID: CFTypeID; cdecl; external;
function CFArrayCreate(allocator: CFAllocatorRef; values: pointer; numValues: CFIndex; callBacks: CFArrayCallBacksPtr): CFArrayRef; cdecl; external;
function CFArrayCreateCopy(allocator: CFAllocatorRef; theArray: CFArrayRef): CFArrayRef; cdecl; external;
function CFArrayCreateMutable(allocator: CFAllocatorRef; capacity: CFIndex; callBacks: CFArrayCallBacksPtr): CFMutableArrayRef; cdecl; external;
function CFArrayCreateMutableCopy(allocator: CFAllocatorRef; capacity: CFIndex; theArray: CFArrayRef): CFMutableArrayRef; cdecl; external;
function CFArrayGetCount(theArray: CFArrayRef): CFIndex; cdecl; external;
function CFArrayGetCountOfValue(theArray: CFArrayRef; range: CFRange; value: pointer): CFIndex; cdecl; external;
function CFArrayContainsValue(theArray: CFArrayRef; range: CFRange; value: pointer): Boolean; cdecl; external;
function CFArrayGetValueAtIndex(theArray: CFArrayRef; idx: CFIndex): pointer; cdecl; external;
procedure CFArrayGetValues(theArray: CFArrayRef; range: CFRange; values: pointer); cdecl; external;
procedure CFArrayApplyFunction(theArray: CFArrayRef; range: CFRange; applier: CFArrayApplierFunction; context: pointer); cdecl; external;
function CFArrayGetFirstIndexOfValue(theArray: CFArrayRef; range: CFRange; value: pointer): CFIndex; cdecl; external;
function CFArrayGetLastIndexOfValue(theArray: CFArrayRef; range: CFRange; value: pointer): CFIndex; cdecl; external;
function CFArrayBSearchValues(theArray: CFArrayRef; range: CFRange; value: pointer; comparator: CFComparatorFunction; context: pointer): CFIndex; cdecl; external;
procedure CFArrayAppendValue(theArray: CFMutableArrayRef; value: pointer); cdecl; external;
procedure CFArrayInsertValueAtIndex(theArray: CFMutableArrayRef; idx: CFIndex; value: pointer); cdecl; external;
procedure CFArraySetValueAtIndex(theArray: CFMutableArrayRef; idx: CFIndex; value: pointer); cdecl; external;
procedure CFArrayRemoveValueAtIndex(theArray: CFMutableArrayRef; idx: CFIndex); cdecl; external;
procedure CFArrayRemoveAllValues(theArray: CFMutableArrayRef); cdecl; external;
procedure CFArrayReplaceValues(theArray: CFMutableArrayRef; range: CFRange; newValues: pointer; newCount: CFIndex); cdecl; external;
procedure CFArrayExchangeValuesAtIndices(theArray: CFMutableArrayRef; idx1: CFIndex; idx2: CFIndex); cdecl; external;
procedure CFArraySortValues(theArray: CFMutableArrayRef; range: CFRange; comparator: CFComparatorFunction; context: pointer); cdecl; external;
procedure CFArrayAppendArray(theArray: CFMutableArrayRef; otherArray: CFArrayRef; otherRange: CFRange); cdecl; external;
{$endif}

{$endif}
