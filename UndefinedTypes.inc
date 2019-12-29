{ Private types }
type
	_NSZone = OpaqueRecord;

type
	size_tPtr = ^size_t;
	
{ Cocoa types }
const
	UINT_MAX = high(culong);
	// 7.18.2.4 Limits of integer types capable of holding object pointers
	INTPTR_MIN = low(ptrint);
	INTPTR_MAX = high(ptrint);
	UINTPTR_MAX = high(ptruint);
	// 7.18.2.5 Limits of greatest-width integer types
	INTMAX_MIN = low(int64);
	INTMAX_MAX = high(int64);
	UINTMAX_MAX = high(qword);
	// 7.18.3 "Other"
	PTRDIFF_MIN = INTPTR_MIN;
	PTRDIFF_MAX = INTPTR_MAX;

	LONG_MAX = high(clong);
	LONG_MIN = low(clong);
	ULONG_MAX = high(culong);
	SHRT_MAX = high(cshort);
	INT_MAX = high(cint);
	
// ??? what is this value in FPC?
const	
	DBL_MAX = high(clong);


{$if FPC_FULLVERSION <= 30004}
type
  objcbool = bool;
{$endif}