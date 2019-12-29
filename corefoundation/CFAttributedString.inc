{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFAttributedString.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREFOUNDATION_CFATTRIBUTEDSTRING__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFATTRIBUTEDSTRING__ = 1;

type
  CFAttributedStringRef = OpaqueType;
  CFMutableAttributedStringRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFAttributedStringGetTypeID: CFTypeID; cdecl; external;
function CFAttributedStringCreate(alloc: CFAllocatorRef; str: CFStringRef; attributes: CFDictionaryRef): CFAttributedStringRef; cdecl; external;
function CFAttributedStringCreateWithSubstring(alloc: CFAllocatorRef; aStr: CFAttributedStringRef; range: CFRange): CFAttributedStringRef; cdecl; external;
function CFAttributedStringCreateCopy(alloc: CFAllocatorRef; aStr: CFAttributedStringRef): CFAttributedStringRef; cdecl; external;
function CFAttributedStringGetString(aStr: CFAttributedStringRef): CFStringRef; cdecl; external;
function CFAttributedStringGetLength(aStr: CFAttributedStringRef): CFIndex; cdecl; external;
function CFAttributedStringGetAttributes(aStr: CFAttributedStringRef; loc: CFIndex; effectiveRange: CFRangePtr): CFDictionaryRef; cdecl; external;
function CFAttributedStringGetAttribute(aStr: CFAttributedStringRef; loc: CFIndex; attrName: CFStringRef; effectiveRange: CFRangePtr): CFTypeRef; cdecl; external;
function CFAttributedStringGetAttributesAndLongestEffectiveRange(aStr: CFAttributedStringRef; loc: CFIndex; inRange: CFRange; longestEffectiveRange: CFRangePtr): CFDictionaryRef; cdecl; external;
function CFAttributedStringGetAttributeAndLongestEffectiveRange(aStr: CFAttributedStringRef; loc: CFIndex; attrName: CFStringRef; inRange: CFRange; longestEffectiveRange: CFRangePtr): CFTypeRef; cdecl; external;
function CFAttributedStringCreateMutableCopy(alloc: CFAllocatorRef; maxLength: CFIndex; aStr: CFAttributedStringRef): CFMutableAttributedStringRef; cdecl; external;
function CFAttributedStringCreateMutable(alloc: CFAllocatorRef; maxLength: CFIndex): CFMutableAttributedStringRef; cdecl; external;
procedure CFAttributedStringReplaceString(aStr: CFMutableAttributedStringRef; range: CFRange; replacement: CFStringRef); cdecl; external;
function CFAttributedStringGetMutableString(aStr: CFMutableAttributedStringRef): CFMutableStringRef; cdecl; external;
procedure CFAttributedStringSetAttributes(aStr: CFMutableAttributedStringRef; range: CFRange; replacement: CFDictionaryRef; clearOtherAttributes: Boolean); cdecl; external;
procedure CFAttributedStringSetAttribute(aStr: CFMutableAttributedStringRef; range: CFRange; attrName: CFStringRef; value: CFTypeRef); cdecl; external;
procedure CFAttributedStringRemoveAttribute(aStr: CFMutableAttributedStringRef; range: CFRange; attrName: CFStringRef); cdecl; external;
procedure CFAttributedStringReplaceAttributedString(aStr: CFMutableAttributedStringRef; range: CFRange; replacement: CFAttributedStringRef); cdecl; external;
procedure CFAttributedStringBeginEditing(aStr: CFMutableAttributedStringRef); cdecl; external;
procedure CFAttributedStringEndEditing(aStr: CFMutableAttributedStringRef); cdecl; external;
{$endif}

{$endif}
