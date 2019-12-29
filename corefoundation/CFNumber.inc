{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFNumber.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREFOUNDATION_CFNUMBER__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFNUMBER__ = 1;

type
  CFBooleanRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFBooleanTrue: CFBooleanRef; cvar; external;
  kCFBooleanFalse: CFBooleanRef; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CFBooleanGetTypeID: CFTypeID; cdecl; external;
function CFBooleanGetValue(boolean: CFBooleanRef): Boolean; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFNumberType = CFIndex;
  CFNumberTypePtr = ^CFNumberType;

const
  kCFNumberSInt8Type = 1;
  kCFNumberSInt16Type = 2;
  kCFNumberSInt32Type = 3;
  kCFNumberSInt64Type = 4;
  kCFNumberFloat32Type = 5;
  kCFNumberFloat64Type = 6;
  kCFNumberCharType = 7;
  kCFNumberShortType = 8;
  kCFNumberIntType = 9;
  kCFNumberLongType = 10;
  kCFNumberLongLongType = 11;
  kCFNumberFloatType = 12;
  kCFNumberDoubleType = 13;
  kCFNumberCFIndexType = 14;
  kCFNumberNSIntegerType = 15 { available in 10_5, 2_0 };
  kCFNumberCGFloatType = 16 { available in 10_5, 2_0 };
  kCFNumberMaxType = 16;

type
  CFNumberRef = OpaqueType; 
{$endif}

{$ifdef FUNCTIONS}
function CFNumberGetTypeID: CFTypeID; cdecl; external;
function CFNumberCreate(allocator: CFAllocatorRef; theType: CFNumberType; valuePtr: pointer): CFNumberRef; cdecl; external;
function CFNumberGetType(number: CFNumberRef): CFNumberType; cdecl; external;
function CFNumberGetByteSize(number: CFNumberRef): CFIndex; cdecl; external;
function CFNumberIsFloatType(number: CFNumberRef): Boolean; cdecl; external;
function CFNumberGetValue(number: CFNumberRef; theType: CFNumberType; valuePtr: pointer): Boolean; cdecl; external;
function CFNumberCompare(number: CFNumberRef; otherNumber: CFNumberRef; context: pointer): CFComparisonResult; cdecl; external;
{$endif}

{$endif}
