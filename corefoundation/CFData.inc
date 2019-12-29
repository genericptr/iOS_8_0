{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFData.h }
{ Created on Fri Mar 20 2:11:35 2015 }

{$if  not (defined(__COREFOUNDATION_CFDATA__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFDATA__ = 1;

type
  CFDataRef = OpaqueType;
  CFMutableDataRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFDataGetTypeID: CFTypeID; cdecl; external;
function CFDataCreate(allocator: CFAllocatorRef; bytes: pointer; length: CFIndex): CFDataRef; cdecl; external;
function CFDataCreateWithBytesNoCopy(allocator: CFAllocatorRef; bytes: pointer; length: CFIndex; bytesDeallocator: CFAllocatorRef): CFDataRef; cdecl; external;
function CFDataCreateCopy(allocator: CFAllocatorRef; theData: CFDataRef): CFDataRef; cdecl; external;
function CFDataCreateMutable(allocator: CFAllocatorRef; capacity: CFIndex): CFMutableDataRef; cdecl; external;
function CFDataCreateMutableCopy(allocator: CFAllocatorRef; capacity: CFIndex; theData: CFDataRef): CFMutableDataRef; cdecl; external;
function CFDataGetLength(theData: CFDataRef): CFIndex; cdecl; external;
function CFDataGetBytePtr(theData: CFDataRef): pointer; cdecl; external;
function CFDataGetMutableBytePtr(theData: CFMutableDataRef): pointer; cdecl; external;
procedure CFDataGetBytes(theData: CFDataRef; range: CFRange; buffer: pointer); cdecl; external;
procedure CFDataSetLength(theData: CFMutableDataRef; length: CFIndex); cdecl; external;
procedure CFDataIncreaseLength(theData: CFMutableDataRef; extraLength: CFIndex); cdecl; external;
procedure CFDataAppendBytes(theData: CFMutableDataRef; bytes: pointer; length: CFIndex); cdecl; external;
procedure CFDataReplaceBytes(theData: CFMutableDataRef; range: CFRange; newBytes: pointer; newLength: CFIndex); cdecl; external;
procedure CFDataDeleteBytes(theData: CFMutableDataRef; range: CFRange); cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFDataSearchFlags = CFOptionFlags;
  CFDataSearchFlagsPtr = ^CFDataSearchFlags;

const
  kCFDataSearchBackwards = 1 shl 0;
  kCFDataSearchAnchored = 1 shl 1;
{$endif}

{$ifdef FUNCTIONS}
function CFDataFind(theData: CFDataRef; dataToFind: CFDataRef; searchRange: CFRange; compareOptions: CFDataSearchFlags): CFRange; cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$endif}
