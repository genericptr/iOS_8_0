{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFURL.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREFOUNDATION_CFURL__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFURL__ = 1;

type
  CFURLPathStyle = CFIndex;
  CFURLPathStylePtr = ^CFURLPathStyle;

const
  kCFURLPOSIXPathStyle = 0;
  kCFURLHFSPathStyle = 1 deprecated 'in 10_0, 10_9, 2_0, 7_0';
  kCFURLWindowsPathStyle = 2;

type
  CFURLRef = OpaqueType;
  CFURLRefPtr = ^CFURLRef;
{$endif}

{$ifdef FUNCTIONS}
function CFURLGetTypeID: CFTypeID; cdecl; external;
function CFURLCreateWithBytes(allocator: CFAllocatorRef; URLBytes: pointer; length: CFIndex; encoding: CFStringEncoding; baseURL: CFURLRef): CFURLRef; cdecl; external;
function CFURLCreateData(allocator: CFAllocatorRef; url: CFURLRef; encoding: CFStringEncoding; escapeWhitespace: Boolean): CFDataRef; cdecl; external;
function CFURLCreateWithString(allocator: CFAllocatorRef; URLString: CFStringRef; baseURL: CFURLRef): CFURLRef; cdecl; external;
function CFURLCreateAbsoluteURLWithBytes(alloc: CFAllocatorRef; relativeURLBytes: pointer; length: CFIndex; encoding: CFStringEncoding; baseURL: CFURLRef; useCompatibilityMode: Boolean): CFURLRef; cdecl; external;
function CFURLCreateWithFileSystemPath(allocator: CFAllocatorRef; filePath: CFStringRef; pathStyle: CFURLPathStyle; isDirectory: Boolean): CFURLRef; cdecl; external;
function CFURLCreateFromFileSystemRepresentation(allocator: CFAllocatorRef; buffer: pointer; bufLen: CFIndex; isDirectory: Boolean): CFURLRef; cdecl; external;
function CFURLCreateWithFileSystemPathRelativeToBase(allocator: CFAllocatorRef; filePath: CFStringRef; pathStyle: CFURLPathStyle; isDirectory: Boolean; baseURL: CFURLRef): CFURLRef; cdecl; external;
function CFURLCreateFromFileSystemRepresentationRelativeToBase(allocator: CFAllocatorRef; buffer: pointer; bufLen: CFIndex; isDirectory: Boolean; baseURL: CFURLRef): CFURLRef; cdecl; external;
function CFURLGetFileSystemRepresentation(url: CFURLRef; resolveAgainstBase: Boolean; buffer: pointer; maxBufLen: CFIndex): Boolean; cdecl; external;
function CFURLCopyAbsoluteURL(relativeURL: CFURLRef): CFURLRef; cdecl; external;
function CFURLGetString(anURL: CFURLRef): CFStringRef; cdecl; external;
function CFURLGetBaseURL(anURL: CFURLRef): CFURLRef; cdecl; external;
function CFURLCanBeDecomposed(anURL: CFURLRef): Boolean; cdecl; external;
function CFURLCopyScheme(anURL: CFURLRef): CFStringRef; cdecl; external;
function CFURLCopyNetLocation(anURL: CFURLRef): CFStringRef; cdecl; external;
function CFURLCopyPath(anURL: CFURLRef): CFStringRef; cdecl; external;
function CFURLCopyStrictPath(anURL: CFURLRef; var isAbsolute: pboolean): CFStringRef; cdecl; external;
function CFURLCopyFileSystemPath(anURL: CFURLRef; pathStyle: CFURLPathStyle): CFStringRef; cdecl; external;
function CFURLHasDirectoryPath(anURL: CFURLRef): Boolean; cdecl; external;
function CFURLCopyResourceSpecifier(anURL: CFURLRef): CFStringRef; cdecl; external;
function CFURLCopyHostName(anURL: CFURLRef): CFStringRef; cdecl; external;
function CFURLGetPortNumber(anURL: CFURLRef): SInt32; cdecl; external;
function CFURLCopyUserName(anURL: CFURLRef): CFStringRef; cdecl; external;
function CFURLCopyPassword(anURL: CFURLRef): CFStringRef; cdecl; external;
function CFURLCopyParameterString(anURL: CFURLRef; charactersToLeaveEscaped: CFStringRef): CFStringRef; cdecl; external;
function CFURLCopyQueryString(anURL: CFURLRef; charactersToLeaveEscaped: CFStringRef): CFStringRef; cdecl; external;
function CFURLCopyFragment(anURL: CFURLRef; charactersToLeaveEscaped: CFStringRef): CFStringRef; cdecl; external;
function CFURLCopyLastPathComponent(url: CFURLRef): CFStringRef; cdecl; external;
function CFURLCopyPathExtension(url: CFURLRef): CFStringRef; cdecl; external;
function CFURLCreateCopyAppendingPathComponent(allocator: CFAllocatorRef; url: CFURLRef; pathComponent: CFStringRef; isDirectory: Boolean): CFURLRef; cdecl; external;
function CFURLCreateCopyDeletingLastPathComponent(allocator: CFAllocatorRef; url: CFURLRef): CFURLRef; cdecl; external;
function CFURLCreateCopyAppendingPathExtension(allocator: CFAllocatorRef; url: CFURLRef; extension: CFStringRef): CFURLRef; cdecl; external;
function CFURLCreateCopyDeletingPathExtension(allocator: CFAllocatorRef; url: CFURLRef): CFURLRef; cdecl; external;
function CFURLGetBytes(url: CFURLRef; buffer: pointer; bufferLength: CFIndex): CFIndex; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFURLComponentType = CFIndex;
  CFURLComponentTypePtr = ^CFURLComponentType;

const
  kCFURLComponentScheme = 1;
  kCFURLComponentNetLocation = 2;
  kCFURLComponentPath = 3;
  kCFURLComponentResourceSpecifier = 4;
  kCFURLComponentUser = 5;
  kCFURLComponentPassword = 6;
  kCFURLComponentUserInfo = 7;
  kCFURLComponentHost = 8;
  kCFURLComponentPort = 9;
  kCFURLComponentParameterString = 10;
  kCFURLComponentQuery = 11;
  kCFURLComponentFragment = 12;
{$endif}

{$ifdef FUNCTIONS}
function CFURLGetByteRangeForComponent(url: CFURLRef; component: CFURLComponentType; var rangeIncludingSeparators: CFRange): CFRange; cdecl; external;
function CFURLCreateStringByReplacingPercentEscapes(allocator: CFAllocatorRef; originalString: CFStringRef; charactersToLeaveEscaped: CFStringRef): CFStringRef; cdecl; external;
function CFURLCreateStringByReplacingPercentEscapesUsingEncoding(allocator: CFAllocatorRef; origString: CFStringRef; charsToLeaveEscaped: CFStringRef; encoding: CFStringEncoding): CFStringRef; cdecl; external;
function CFURLCreateStringByAddingPercentEscapes(allocator: CFAllocatorRef; originalString: CFStringRef; charactersToLeaveUnescaped: CFStringRef; legalURLCharactersToBeEscaped: CFStringRef; encoding: CFStringEncoding): CFStringRef; cdecl; external;
{$endif}

{$if (defined(TARGET_OS_MAC) or defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)) or defined(CF_BUILDING_CF) or defined(NSBUILDINGFOUNDATION)}
{$ifdef FUNCTIONS}
function CFURLIsFileReferenceURL(url: CFURLRef): Boolean; cdecl; external; { available in 10_9, 7_0 }
function CFURLCreateFileReferenceURL(allocator: CFAllocatorRef; url: CFURLRef; var error: CFErrorRef): CFURLRef; cdecl; external; { available in 10_6, 4_0 }
function CFURLCreateFilePathURL(allocator: CFAllocatorRef; url: CFURLRef; var error: CFErrorRef): CFURLRef; cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$endif}

{$ifndef CF_OPEN_SOURCE}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))}
{$ifdef FUNCTIONS}
function CFURLCreateFromFSRef(allocator: CFAllocatorRef; fsRef: FSRefPtr): CFURLRef; cdecl; external; deprecated 'in 10_0, 10_9, 2_0, 7_0';
function CFURLGetFSRef(url: CFURLRef; var fsRef: FSRef): Boolean; cdecl; external; deprecated 'in 10_0, 10_9, 2_0, 7_0';
{$endif}

{$endif}
{$endif}

{$if (defined(TARGET_OS_MAC) or defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)) or defined(CF_BUILDING_CF) or defined(NSBUILDINGFOUNDATION)}
{$ifdef FUNCTIONS}
function CFURLCopyResourcePropertyForKey(url: CFURLRef; key: CFStringRef; propertyValueTypeRefPtr: pointer; error: CFErrorRef): Boolean; cdecl; external; { available in 10_6, 4_0 }
function CFURLCopyResourcePropertiesForKeys(url: CFURLRef; keys: CFArrayRef; error: CFErrorRef): CFDictionaryRef; cdecl; external; { available in 10_6, 4_0 }
function CFURLSetResourcePropertyForKey(url: CFURLRef; key: CFStringRef; propertyValue: CFTypeRef; error: CFErrorRef): Boolean; cdecl; external; { available in 10_6, 4_0 }
function CFURLSetResourcePropertiesForKeys(url: CFURLRef; keyedPropertyValues: CFDictionaryRef; error: CFErrorRef): Boolean; cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFURLKeysOfUnsetValuesKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
procedure CFURLClearResourcePropertyCacheForKey(url: CFURLRef; key: CFStringRef); cdecl; external; { available in 10_6, 4_0 }
procedure CFURLClearResourcePropertyCache(url: CFURLRef); cdecl; external; { available in 10_6, 4_0 }
procedure CFURLSetTemporaryResourcePropertyForKey(url: CFURLRef; key: CFStringRef; propertyValue: CFTypeRef); cdecl; external; { available in 10_6, 4_0 }
function CFURLResourceIsReachable(url: CFURLRef; error: CFErrorRef): Boolean; cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFURLNameKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLLocalizedNameKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLIsRegularFileKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLIsDirectoryKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLIsSymbolicLinkKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLIsVolumeKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLIsPackageKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLIsSystemImmutableKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLIsUserImmutableKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLIsHiddenKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLHasHiddenExtensionKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLCreationDateKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLContentAccessDateKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLContentModificationDateKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLAttributeModificationDateKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLLinkCountKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLParentDirectoryURLKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeURLKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLTypeIdentifierKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLLocalizedTypeDescriptionKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLLabelNumberKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLLabelColorKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLLocalizedLabelKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLEffectiveIconKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLCustomIconKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLFileResourceIdentifierKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeIdentifierKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLPreferredIOBlockSizeKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLIsReadableKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLIsWritableKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLIsExecutableKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLFileSecurityKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLIsExcludedFromBackupKey: CFStringRef { available in 10_8, 5_1 }; cvar; external;
  kCFURLTagNamesKey: CFStringRef { available in 10_9, NA }; cvar; external;
  kCFURLPathKey: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCFURLIsMountTriggerKey: CFStringRef { available in 10_7, 4_0 }; cvar; external;
  kCFURLGenerationIdentifierKey: CFStringRef { available in 10_10, 8_0 }; cvar; external;
  kCFURLDocumentIdentifierKey: CFStringRef { available in 10_10, 8_0 }; cvar; external;
  kCFURLAddedToDirectoryDateKey: CFStringRef { available in 10_10, 8_0 }; cvar; external;
  kCFURLQuarantinePropertiesKey: CFStringRef { available in 10_10, NA }; cvar; external;
  kCFURLFileResourceTypeKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLFileResourceTypeNamedPipe: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLFileResourceTypeCharacterSpecial: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLFileResourceTypeDirectory: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLFileResourceTypeBlockSpecial: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLFileResourceTypeRegular: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLFileResourceTypeSymbolicLink: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLFileResourceTypeSocket: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLFileResourceTypeUnknown: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLFileSizeKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLFileAllocatedSizeKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLTotalFileSizeKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLTotalFileAllocatedSizeKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLIsAliasFileKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeLocalizedFormatDescriptionKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeTotalCapacityKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeAvailableCapacityKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeResourceCountKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeSupportsPersistentIDsKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeSupportsSymbolicLinksKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeSupportsHardLinksKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeSupportsJournalingKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeIsJournalingKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeSupportsSparseFilesKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeSupportsZeroRunsKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeSupportsCaseSensitiveNamesKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeSupportsCasePreservedNamesKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFURLVolumeSupportsRootDirectoryDatesKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeSupportsVolumeSizesKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeSupportsRenamingKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeSupportsAdvisoryFileLockingKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeSupportsExtendedSecurityKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeIsBrowsableKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeMaximumFileSizeKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeIsEjectableKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeIsRemovableKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeIsInternalKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeIsAutomountedKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeIsLocalKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeIsReadOnlyKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeCreationDateKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeURLForRemountingKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeUUIDStringKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeNameKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLVolumeLocalizedNameKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLIsUbiquitousItemKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLUbiquitousItemHasUnresolvedConflictsKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLUbiquitousItemIsDownloadedKey: CFStringRef deprecated 'in 10_7, 10_9, 5_0, 7_0, "Use kCFURLUbiquitousItemDownloadingStatusKey instead"'; cvar; external;
  kCFURLUbiquitousItemIsDownloadingKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLUbiquitousItemIsUploadedKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLUbiquitousItemIsUploadingKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFURLUbiquitousItemPercentDownloadedKey: CFStringRef deprecated 'in 10_7, 10_8, 5_0, 6_0, "Use NSMetadataQuery and NSMetadataUbiquitousItemPercentDownloadedKey on NSMetadataItem instead"'; cvar; external;
  kCFURLUbiquitousItemPercentUploadedKey: CFStringRef deprecated 'in 10_7, 10_8, 5_0, 6_0, "Use NSMetadataQuery and NSMetadataUbiquitousItemPercentUploadedKey on NSMetadataItem instead"'; cvar; external;
  kCFURLUbiquitousItemDownloadingStatusKey: CFStringRef { available in 10_9, 7_0 }; cvar; external;
  kCFURLUbiquitousItemDownloadingErrorKey: CFStringRef { available in 10_9, 7_0 }; cvar; external;
  kCFURLUbiquitousItemUploadingErrorKey: CFStringRef { available in 10_9, 7_0 }; cvar; external;
  kCFURLUbiquitousItemDownloadingStatusNotDownloaded: CFStringRef { available in 10_9, 7_0 }; cvar; external;
  kCFURLUbiquitousItemDownloadingStatusDownloaded: CFStringRef { available in 10_9, 7_0 }; cvar; external;
  kCFURLUbiquitousItemDownloadingStatusCurrent: CFStringRef { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFURLBookmarkCreationOptions = CFOptionFlags;
  CFURLBookmarkCreationOptionsPtr = ^CFURLBookmarkCreationOptions;

const
  kCFURLBookmarkCreationMinimalBookmarkMask = 1 shl 9;
  kCFURLBookmarkCreationSuitableForBookmarkFile = 1 shl 10;
  kCFURLBookmarkCreationWithSecurityScope = 1 shl 11 { available in 10_7, NA };
  kCFURLBookmarkCreationSecurityScopeAllowOnlyReadAccess = 1 shl 12 { available in 10_7, NA };
  kCFURLBookmarkCreationPreferFileIDResolutionMask = 1 shl 8 deprecated 'in 10_6, 10_9, 4_0, 7_0, "kCFURLBookmarkCreationPreferFileIDResolutionMask does nothing and has no effect on bookmark resolution" ';

type
  CFURLBookmarkResolutionOptions = CFOptionFlags;
  CFURLBookmarkResolutionOptionsPtr = ^CFURLBookmarkResolutionOptions;

const
  kCFURLBookmarkResolutionWithoutUIMask = 1 shl 8;
  kCFURLBookmarkResolutionWithoutMountingMask = 1 shl 9;
  kCFURLBookmarkResolutionWithSecurityScope = 1 shl 10 { available in 10_7, NA };
  kCFBookmarkResolutionWithoutUIMask = kCFURLBookmarkResolutionWithoutUIMask;
  kCFBookmarkResolutionWithoutMountingMask = kCFURLBookmarkResolutionWithoutMountingMask;

type
  CFURLBookmarkFileCreationOptions = CFOptionFlags;
  CFURLBookmarkFileCreationOptionsPtr = ^CFURLBookmarkFileCreationOptions;
{$endif}

{$ifdef FUNCTIONS}
function CFURLCreateBookmarkData(allocator: CFAllocatorRef; url: CFURLRef; options: CFURLBookmarkCreationOptions; resourcePropertiesToInclude: CFArrayRef; relativeToURL: CFURLRef; error: CFErrorRef): CFDataRef; cdecl; external; { available in 10_6, 4_0 }
function CFURLCreateByResolvingBookmarkData(allocator: CFAllocatorRef; bookmark: CFDataRef; options: CFURLBookmarkResolutionOptions; relativeToURL: CFURLRef; resourcePropertiesToInclude: CFArrayRef; isStale: pboolean; error: CFErrorRef): CFURLRef; cdecl; external; { available in 10_6, 4_0 }
function CFURLCreateResourcePropertiesForKeysFromBookmarkData(allocator: CFAllocatorRef; resourcePropertiesToReturn: CFArrayRef; bookmark: CFDataRef): CFDictionaryRef; cdecl; external; { available in 10_6, 4_0 }
function CFURLCreateResourcePropertyForKeyFromBookmarkData(allocator: CFAllocatorRef; resourcePropertyKey: CFStringRef; bookmark: CFDataRef): CFTypeRef; cdecl; external; { available in 10_6, 4_0 }
function CFURLCreateBookmarkDataFromFile(allocator: CFAllocatorRef; fileURL: CFURLRef; errorRef: CFErrorRef): CFDataRef; cdecl; external; { available in 10_6, 5_0 }
function CFURLWriteBookmarkDataToFile(bookmarkRef: CFDataRef; fileURL: CFURLRef; options: CFURLBookmarkFileCreationOptions; errorRef: CFErrorRef): Boolean; cdecl; external; { available in 10_6, 5_0 }
function CFURLCreateBookmarkDataFromAliasRecord(allocatorRef: CFAllocatorRef; aliasRecordDataRef: CFDataRef): CFDataRef; cdecl; external; { available in 10_6 }
function CFURLStartAccessingSecurityScopedResource(url: CFURLRef): Boolean; cdecl; external;
procedure CFURLStopAccessingSecurityScopedResource(url: CFURLRef); cdecl; external;
{$endif}

{$endif}
{$endif}
