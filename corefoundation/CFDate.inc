{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFDate.h }
{ Created on Fri Mar 20 2:11:35 2015 }

{$if  not (defined(__COREFOUNDATION_CFDATE__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFDATE__ = 1;

type
  CFTimeInterval = double;
  CFTimeIntervalPtr = ^CFTimeInterval;
  CFAbsoluteTime = CFTimeInterval;
  CFAbsoluteTimePtr = ^CFAbsoluteTime;
{$endif}

{$ifdef FUNCTIONS}
function CFAbsoluteTimeGetCurrent: CFAbsoluteTime; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFAbsoluteTimeIntervalSince1970: CFTimeInterval; cvar; external;
  kCFAbsoluteTimeIntervalSince1904: CFTimeInterval; cvar; external;
{$endif}

{$ifdef TYPES}
 type
  CFDateRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFDateGetTypeID: CFTypeID; cdecl; external;
function CFDateCreate(allocator: CFAllocatorRef; at: CFAbsoluteTime): CFDateRef; cdecl; external;
function CFDateGetAbsoluteTime(theDate: CFDateRef): CFAbsoluteTime; cdecl; external;
function CFDateGetTimeIntervalSinceDate(theDate: CFDateRef; otherDate: CFDateRef): CFTimeInterval; cdecl; external;
function CFDateCompare(theDate: CFDateRef; otherDate: CFDateRef; context: pointer): CFComparisonResult; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFTimeZoneRef = OpaqueType;
{$endif}

{$ifdef TYPES}
type
  CFGregorianDate = record
    year: SInt32;
    month: SInt8;
    day: SInt8;
    hour: SInt8;
    minute: SInt8;
    second: double;
  end;
type
  CFGregorianDatePtr = ^CFGregorianDate;
type
  CFGregorianUnits = record
    years: SInt32;
    months: SInt32;
    days: SInt32;
    hours: SInt32;
    minutes: SInt32;
    seconds: double;
  end;
type
  CFGregorianUnitsPtr = ^CFGregorianUnits;

type
  CFGregorianUnitFlags = CFOptionFlags;
  CFGregorianUnitFlagsPtr = ^CFGregorianUnitFlags;

const
  kCFGregorianUnitsYears = 1 shl 0 deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
  kCFGregorianUnitsMonths = 1 shl 1 deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
  kCFGregorianUnitsDays = 1 shl 2 deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
  kCFGregorianUnitsHours = 1 shl 3 deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
  kCFGregorianUnitsMinutes = 1 shl 4 deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
  kCFGregorianUnitsSeconds = 1 shl 5 deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
  kCFGregorianAllUnits = $00FFFFFF deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
{$endif}

{$ifdef FUNCTIONS}
function CFGregorianDateIsValid(gdate: CFGregorianDate; unitFlags: CFOptionFlags): Boolean; cdecl; external; deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
function CFGregorianDateGetAbsoluteTime(gdate: CFGregorianDate; tz: CFTimeZoneRef): CFAbsoluteTime; cdecl; external; deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
function CFAbsoluteTimeGetGregorianDate(at: CFAbsoluteTime; tz: CFTimeZoneRef): CFGregorianDate; cdecl; external; deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
function CFAbsoluteTimeAddGregorianUnits(at: CFAbsoluteTime; tz: CFTimeZoneRef; units: CFGregorianUnits): CFAbsoluteTime; cdecl; external; deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
function CFAbsoluteTimeGetDifferenceAsGregorianUnits(at1: CFAbsoluteTime; at2: CFAbsoluteTime; tz: CFTimeZoneRef; unitFlags: CFOptionFlags): CFGregorianUnits; cdecl; external; deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
function CFAbsoluteTimeGetDayOfWeek(at: CFAbsoluteTime; tz: CFTimeZoneRef): SInt32; cdecl; external; deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
function CFAbsoluteTimeGetDayOfYear(at: CFAbsoluteTime; tz: CFTimeZoneRef): SInt32; cdecl; external; deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
function CFAbsoluteTimeGetWeekOfYear(at: CFAbsoluteTime; tz: CFTimeZoneRef): SInt32; cdecl; external; deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use CFCalendar or NSCalendar API instead"';
{$endif}

{$endif}
