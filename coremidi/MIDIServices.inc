{ Parsed from CoreMIDI.framework (iPhoneOS8.2) MIDIServices.h }
{ Created on Fri Mar 20 2:10:34 2015 }

{$ifdef TYPES}
const
  kMIDIInvalidClient = -10830;
  kMIDIInvalidPort = -10831;
  kMIDIWrongEndpointType = -10832;
  kMIDINoConnection = -10833;
  kMIDIUnknownEndpoint = -10834;
  kMIDIUnknownProperty = -10835;
  kMIDIWrongPropertyType = -10836;
  kMIDINoCurrentSetup = -10837;
  kMIDIMessageSendErr = -10838;
  kMIDIServerStartErr = -10839;
  kMIDISetupFormatErr = -10840;
  kMIDIWrongThread = -10841;
  kMIDIObjectNotFound = -10842;
  kMIDIIDNotUnique = -10843;
  kMIDINotPermitted = -10844;
{$endif}

{$if defined(__LP64__)}
{$ifdef TYPES}
type
  MIDIObjectRef = UInt32;
  MIDIObjectRefPtr = ^MIDIObjectRef;
  MIDIClientRef = MIDIObjectRef;
  MIDIClientRefPtr = ^MIDIClientRef;
  MIDIPortRef = MIDIObjectRef;
  MIDIPortRefPtr = ^MIDIPortRef;
  MIDIDeviceRef = MIDIObjectRef;
  MIDIDeviceRefPtr = ^MIDIDeviceRef;
  MIDIEntityRef = MIDIObjectRef;
  MIDIEntityRefPtr = ^MIDIEntityRef;
  MIDIEndpointRef = MIDIObjectRef;
  MIDIEndpointRefPtr = ^MIDIEndpointRef;
{$endif}

{$else}
{$ifdef TYPES}
type
  MIDIObjectRef = pointer;
  MIDIClientRef = OpaqueType;
  MIDIPortRef = OpaqueType;
  MIDIDeviceRef = OpaqueType;
  MIDIEntityRef = OpaqueType;
  MIDIEndpointRef = OpaqueType;
{$endif}

{$endif}
{$ifdef TYPES}
type
  MIDITimeStamp = UInt64;
  MIDITimeStampPtr = ^MIDITimeStamp;

const
  kMIDIObjectType_Other = -1;
  kMIDIObjectType_Device = 0;
  kMIDIObjectType_Entity = 1;
  kMIDIObjectType_Source = 2;
  kMIDIObjectType_Destination = 3;
  kMIDIObjectType_ExternalMask = $10;
  kMIDIObjectType_ExternalDevice = kMIDIObjectType_ExternalMask + kMIDIObjectType_Device;
  kMIDIObjectType_ExternalEntity = kMIDIObjectType_ExternalMask + kMIDIObjectType_Entity;
  kMIDIObjectType_ExternalSource = kMIDIObjectType_ExternalMask + kMIDIObjectType_Source;
  kMIDIObjectType_ExternalDestination = kMIDIObjectType_ExternalMask + kMIDIObjectType_Destination;

type
  MIDIObjectType = SInt32;
  MIDIObjectTypePtr = ^MIDIObjectType;
  MIDIUniqueID = SInt32;
  MIDIUniqueIDPtr = ^MIDIUniqueID;

const
  kMIDIInvalidUniqueID = 0;

type
MIDINotifyProc = procedure (message_: pointer{MIDINotificationPtr}; refCon: pointer); cdecl;
MIDIReadProc = procedure (pktlist: pointer{MIDIPacketListPtr}; readProcRefCon: pointer; srcConnRefCon: pointer); cdecl;
MIDICompletionProc = procedure (request: pointer{MIDISysexSendRequestPtr}); cdecl;

type
  MIDIPacket = record
    timeStamp: MIDITimeStamp;
    length: UInt16;
    data:array[0..255] of Byte;
  end;
type
  MIDIPacketPtr = ^MIDIPacket;
type
  MIDIPacketList = record
    numPackets: UInt32;
    packet:array[0..0] of MIDIPacket;
  end;
type
  MIDIPacketListPtr = ^MIDIPacketList;
type
  MIDISysexSendRequest = record
    destination: MIDIEndpointRef;
    data: BytePtr;
    bytesToSend: UInt32;
    complete: Boolean;
    reserved:array[0..2] of Byte;
    completionProc: MIDICompletionProc;
    completionRefCon: pointer;
  end;
type
  MIDISysexSendRequestPtr = ^MIDISysexSendRequest;

const
  kMIDIMsgSetupChanged = 1;
  kMIDIMsgObjectAdded = 2;
  kMIDIMsgObjectRemoved = 3;
  kMIDIMsgPropertyChanged = 4;
  kMIDIMsgThruConnectionsChanged = 5;
  kMIDIMsgSerialPortOwnerChanged = 6;
  kMIDIMsgIOError = 7;

type
  MIDINotificationMessageID = SInt32;
  MIDINotificationMessageIDPtr = ^MIDINotificationMessageID;

type
  MIDINotification = record
    messageID: MIDINotificationMessageID;
    messageSize: UInt32;
  end;
type
  MIDINotificationPtr = ^MIDINotification;
type
  MIDIObjectAddRemoveNotification = record
    messageID: MIDINotificationMessageID;
    messageSize: UInt32;
    parent: MIDIObjectRef;
    parentType: MIDIObjectType;
    child: MIDIObjectRef;
    childType: MIDIObjectType;
  end;
type
  MIDIObjectAddRemoveNotificationPtr = ^MIDIObjectAddRemoveNotification;
type
  MIDIObjectPropertyChangeNotification = record
    messageID: MIDINotificationMessageID;
    messageSize: UInt32;
    object_: MIDIObjectRef;
    objectType: MIDIObjectType;
    propertyName: CFStringRef;
  end;
type
  MIDIObjectPropertyChangeNotificationPtr = ^MIDIObjectPropertyChangeNotification;
type
  MIDIIOErrorNotification = record
    messageID: MIDINotificationMessageID;
    messageSize: UInt32;
    driverDevice: MIDIDeviceRef;
    errorCode: OSStatus;
  end;
type
  MIDIIOErrorNotificationPtr = ^MIDIIOErrorNotification;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kMIDIPropertyName: CFStringRef { available starting in __MAC_10_0, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyManufacturer: CFStringRef { available starting in __MAC_10_0, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyModel: CFStringRef { available starting in __MAC_10_0, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyUniqueID: CFStringRef { available starting in __MAC_10_0, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyDeviceID: CFStringRef { available starting in __MAC_10_0, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyReceiveChannels: CFStringRef { available starting in __MAC_10_0, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyTransmitChannels: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyMaxSysExSpeed: CFStringRef { available starting in __MAC_10_0, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyAdvanceScheduleTimeMuSec: CFStringRef { available starting in __MAC_10_0, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyIsEmbeddedEntity: CFStringRef { available starting in __MAC_10_1, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyIsBroadcast: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertySingleRealtimeEntity: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyConnectionUniqueID: CFStringRef { available starting in __MAC_10_1, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyOffline: CFStringRef { available starting in __MAC_10_1, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyPrivate: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyDriverOwner: CFStringRef { available starting in __MAC_10_1, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyFactoryPatchNameFile: CFStringRef deprecated 'in __MAC_10_1, __MAC_10_2, __IPHONE_NA, __IPHONE_NA'; cvar; external;
  kMIDIPropertyUserPatchNameFile: CFStringRef deprecated 'in __MAC_10_1, __MAC_10_2, __IPHONE_NA, __IPHONE_NA'; cvar; external;
  kMIDIPropertyNameConfiguration: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyImage: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyDriverVersion: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertySupportsGeneralMIDI: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertySupportsMMC: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyCanRoute: CFStringRef { available starting in __MAC_10_0, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyReceivesClock: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyReceivesMTC: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyReceivesNotes: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyReceivesProgramChanges: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyReceivesBankSelectMSB: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyReceivesBankSelectLSB: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyTransmitsClock: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyTransmitsMTC: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyTransmitsNotes: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyTransmitsProgramChanges: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyTransmitsBankSelectMSB: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyTransmitsBankSelectLSB: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyPanDisruptsStereo: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyIsSampler: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyIsDrumMachine: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyIsMixer: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyIsEffectUnit: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyMaxReceiveChannels: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyMaxTransmitChannels: CFStringRef { available starting in __MAC_10_2, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyDriverDeviceEditorApp: CFStringRef { available starting in __MAC_10_3, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertySupportsShowControl: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_2 }; cvar; external;
  kMIDIPropertyDisplayName: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_2 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function MIDIClientCreate(name: CFStringRef; notifyProc: MIDINotifyProc; notifyRefCon: pointer; var outClient: MIDIClientRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIClientDispose(client: MIDIClientRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIInputPortCreate(client: MIDIClientRef; portName: CFStringRef; readProc: MIDIReadProc; refCon: pointer; var outPort: MIDIPortRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIOutputPortCreate(client: MIDIClientRef; portName: CFStringRef; var outPort: MIDIPortRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIPortDispose(port: MIDIPortRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIPortConnectSource(port: MIDIPortRef; source: MIDIEndpointRef; connRefCon: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIPortDisconnectSource(port: MIDIPortRef; source: MIDIEndpointRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIGetDevice(deviceIndex0: ItemCount): MIDIDeviceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIDeviceGetNumberOfEntities(device: MIDIDeviceRef): ItemCount; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIDeviceGetEntity(device: MIDIDeviceRef; entityIndex0: ItemCount): MIDIEntityRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIEntityGetNumberOfSources(entity: MIDIEntityRef): ItemCount; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIEntityGetSource(entity: MIDIEntityRef; sourceIndex0: ItemCount): MIDIEndpointRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIEntityGetNumberOfDestinations(entity: MIDIEntityRef): ItemCount; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIEntityGetDestination(entity: MIDIEntityRef; destIndex0: ItemCount): MIDIEndpointRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIEntityGetDevice(inEntity: MIDIEntityRef; var outDevice: MIDIDeviceRef): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDIGetSource(sourceIndex0: ItemCount): MIDIEndpointRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIGetDestination(destIndex0: ItemCount): MIDIEndpointRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIEndpointGetEntity(inEndpoint: MIDIEndpointRef; var outEntity: MIDIEntityRef): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDIDestinationCreate(client: MIDIClientRef; name: CFStringRef; readProc: MIDIReadProc; refCon: pointer; var outDest: MIDIEndpointRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDISourceCreate(client: MIDIClientRef; name: CFStringRef; var outSrc: MIDIEndpointRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIEndpointDispose(endpt: MIDIEndpointRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIGetExternalDevice(deviceIndex0: ItemCount): MIDIDeviceRef; cdecl; external; { available starting in __MAC_10_1, __IPHONE_4_2 }
function MIDIObjectGetIntegerProperty(obj: MIDIObjectRef; propertyID: CFStringRef; var outValue: SInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIObjectSetIntegerProperty(obj: MIDIObjectRef; propertyID: CFStringRef; value: SInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIObjectGetStringProperty(obj: MIDIObjectRef; propertyID: CFStringRef; var str: CFStringRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIObjectSetStringProperty(obj: MIDIObjectRef; propertyID: CFStringRef; str: CFStringRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIObjectGetDataProperty(obj: MIDIObjectRef; propertyID: CFStringRef; var outData: CFDataRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIObjectSetDataProperty(obj: MIDIObjectRef; propertyID: CFStringRef; data: CFDataRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIObjectGetDictionaryProperty(obj: MIDIObjectRef; propertyID: CFStringRef; var outDict: CFDictionaryRef): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDIObjectSetDictionaryProperty(obj: MIDIObjectRef; propertyID: CFStringRef; data: CFDictionaryRef): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDIObjectGetProperties(obj: MIDIObjectRef; var outProperties: CFPropertyListRef; deep: Boolean): OSStatus; cdecl; external; { available starting in __MAC_10_1, __IPHONE_4_2 }
function MIDIObjectRemoveProperty(obj: MIDIObjectRef; propertyID: CFStringRef): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDIObjectFindByUniqueID(inUniqueID: MIDIUniqueID; var outObject: MIDIObjectRef; var outObjectType: MIDIObjectType): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDISend(port: MIDIPortRef; dest: MIDIEndpointRef; pktlist: MIDIPacketListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDISendSysex(var request: MIDISysexSendRequest): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIReceived(src: MIDIEndpointRef; pktlist: MIDIPacketListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIFlushOutput(dest: MIDIEndpointRef): OSStatus; cdecl; external; { available starting in __MAC_10_1, __IPHONE_4_2 }
{$endif}

{$if defined(TRICK_HEADERDOC_INTO_THINKING_THIS_IS_A_FUNCTION_NOT_A_MACRO)}
{$ifdef FUNCTIONS}
function MIDIPacketNext(pkt: MIDIPacketPtr): MIDIPacketPtr; cdecl; external;
{$endif}

{$endif}

{$ifdef FUNCTIONS}
function MIDIPacketListInit(var pktlist: MIDIPacketList): MIDIPacketPtr; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIPacketListAdd(var pktlist: MIDIPacketList; listSize: ByteCount; var curPacket: MIDIPacket; time: MIDITimeStamp; nData: ByteCount; data: BytePtr): MIDIPacketPtr; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
{$endif}

