{ Parsed from AudioUnit.framework (iPhoneOS8.2) AudioUnitProperties.h }
{ Created on Fri Mar 20 2:10:49 2015 }

{$ifndef __AudioUnitProperties}

{$ifdef TYPES}
const
  kAudioUnitScope_Global = 0;
  kAudioUnitScope_Input = 1;
  kAudioUnitScope_Output = 2;
  kAudioUnitScope_Group = 3;
  kAudioUnitScope_Part = 4;
  kAudioUnitScope_Note = 5;
  kAudioUnitScope_Layer = 6;
  kAudioUnitScope_LayerItem = 7;
const
  kAudioUnitProperty_ClassInfo = 0;
  kAudioUnitProperty_MakeConnection = 1;
  kAudioUnitProperty_SampleRate = 2;
  kAudioUnitProperty_ParameterList = 3;
  kAudioUnitProperty_ParameterInfo = 4;
  kAudioUnitProperty_CPULoad = 6;
  kAudioUnitProperty_StreamFormat = 8;
  kAudioUnitProperty_ElementCount = 11;
  kAudioUnitProperty_Latency = 12;
  kAudioUnitProperty_SupportedNumChannels = 13;
  kAudioUnitProperty_MaximumFramesPerSlice = 14;
  kAudioUnitProperty_ParameterValueStrings = 16;
  kAudioUnitProperty_AudioChannelLayout = 19;
  kAudioUnitProperty_TailTime = 20;
  kAudioUnitProperty_BypassEffect = 21;
  kAudioUnitProperty_LastRenderError = 22;
  kAudioUnitProperty_SetRenderCallback = 23;
  kAudioUnitProperty_FactoryPresets = 24;
  kAudioUnitProperty_RenderQuality = 26;
  kAudioUnitProperty_HostCallbacks = 27;
  kAudioUnitProperty_InPlaceProcessing = 29;
  kAudioUnitProperty_ElementName = 30;
  kAudioUnitProperty_SupportedChannelLayoutTags = 32;
  kAudioUnitProperty_PresentPreset = 36;
  kAudioUnitProperty_DependentParameters = 45;
  kAudioUnitProperty_InputSamplesInOutput = 49;
  kAudioUnitProperty_ShouldAllocateBuffer = 51;
  kAudioUnitProperty_FrequencyResponse = 52;
  kAudioUnitProperty_ParameterHistoryInfo = 53;
  kAudioUnitProperty_NickName = 54;
  kAudioUnitProperty_OfflineRender = 37;
  kAudioUnitProperty_ParameterIDName = 34;
  kAudioUnitProperty_ParameterStringFromValue = 33;
  kAudioUnitProperty_ParameterValueFromString = 38;
  {$if  not defined(TARGET_OS_IPHONE)}
  kAudioUnitProperty_FastDispatch = 5;
  kAudioUnitProperty_SetExternalBuffer = 15;
  kAudioUnitProperty_GetUIComponentList = 18;
  kAudioUnitProperty_ContextName = 25;
  kAudioUnitProperty_CocoaUI = 31;
  kAudioUnitProperty_ParameterClumpName = 35;
  kAudioUnitProperty_IconLocation = 39;
  kAudioUnitProperty_PresentationLatency = 40;
  kAudioUnitProperty_AUHostIdentifier = 46;
  kAudioUnitProperty_MIDIOutputCallbackInfo = 47;
  kAudioUnitProperty_MIDIOutputCallback = 48;
  kAudioUnitProperty_ClassInfoFromDocument = 50;
  {$endif}
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioUnitProperty_RemoteControlEventListener = 100;
  kAudioUnitProperty_IsInterAppConnected = 101;
  kAudioUnitProperty_PeerURL = 102;
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAUPresetVersionKey = 'version';
  kAUPresetSubtypeKey = 'subtype';
  kAUPresetManufacturerKey = 'manufacturer';
  kAUPresetDataKey = 'data';
  kAUPresetNameKey = 'name';
  kAUPresetRenderQualityKey = 'render-quality';
  kAUPresetCPULoadKey = 'cpu-load';
  kAUPresetElementNameKey = 'element-name';
  kAUPresetExternalFileRefs = 'file-references';
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAUPresetVSTDataKey = 'vstdata';
  kAUPresetVSTPresetKey = 'vstpreset';
  kAUPresetMASDataKey = 'masdata';
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAUPresetPartKey = 'part';

type
  AudioUnitConnection = record
    sourceAudioUnit: AudioUnit;
    sourceOutputNumber: UInt32;
    destInputNumber: UInt32;
  end;
type
  AudioUnitConnectionPtr = ^AudioUnitConnection;
type
  AUChannelInfo = record
    inChannels: SInt16;
    outChannels: SInt16;
  end;
type
  AUChannelInfoPtr = ^AUChannelInfo;
type
  AudioUnitExternalBuffer = record
    buffer: BytePtr;
    size: UInt32;
  end;
type
  AudioUnitExternalBufferPtr = ^AudioUnitExternalBuffer;
type
  AURenderCallbackStruct = record
    inputProc: AURenderCallback;
    inputProcRefCon: pointer;
  end;
type
  AURenderCallbackStructPtr = ^AURenderCallbackStruct;
type
  AUPreset = record
    presetNumber: SInt32;
    presetName: CFStringRef;
  end;
type
  AUPresetPtr = ^AUPreset;

const
  kRenderQuality_Max = $7F;
  kRenderQuality_High = $60;
  kRenderQuality_Medium = $40;
  kRenderQuality_Low = $20;
  kRenderQuality_Min = 0;
const
  kNumberOfResponseFrequencies = 1024;

type
  AudioUnitFrequencyResponseBin = record
    mFrequency: Float64;
    mMagnitude: Float64;
  end;
type
  AudioUnitFrequencyResponseBinPtr = ^AudioUnitFrequencyResponseBin;

type
  HostCallback_GetBeatAndTempo = function (inHostUserData: pointer; var outCurrentBeat: Float64; var outCurrentTempo: Float64): OSStatus; cdecl;
  HostCallback_GetMusicalTimeLocation = function (inHostUserData: pointer; var outDeltaSampleOffsetToNextBeat: UInt32; var outTimeSig_Numerator: Float32; var outTimeSig_Denominator: UInt32; var outCurrentMeasureDownBeat: Float64): OSStatus; cdecl;
  HostCallback_GetTransportState = function (inHostUserData: pointer; var outIsPlaying: pboolean; var outTransportStateChanged: pboolean; var outCurrentSampleInTimeLine: Float64; var outIsCycling: pboolean; var outCycleStartBeat: Float64; var outCycleEndBeat: Float64): OSStatus; cdecl;
  HostCallback_GetTransportState2 = function (inHostUserData: pointer; outIsPlaying: pboolean; outIsRecording: pboolean; outTransportStateChanged: pboolean; outCurrentSampleInTimeLine: Float64Ptr; outIsCycling: pboolean; outCycleStartBeat: Float64Ptr; outCycleEndBeat: Float64Ptr): OSStatus; cdecl;

type
  HostCallbackInfo = record
    hostUserData: pointer;
    beatAndTempoProc: HostCallback_GetBeatAndTempo;
    musicalTimeLocationProc: HostCallback_GetMusicalTimeLocation;
    transportStateProc: HostCallback_GetTransportState;
    transportStateProc2: HostCallback_GetTransportState2;
  end;
type
  HostCallbackInfoPtr = ^HostCallbackInfo;
type
  AUDependentParameter = record
    mScope: AudioUnitScope;
    mParameterID: AudioUnitParameterID;
  end;
type
  AUDependentParameterPtr = ^AUDependentParameter;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AudioUnitCocoaViewInfo = record
    mCocoaAUViewBundleLocation: CFURLRef;
    mCocoaAUViewClass:array[0..0] of CFStringRef;
  end;
type
  AudioUnitCocoaViewInfoPtr = ^AudioUnitCocoaViewInfo;
type
  AUHostVersionIdentifier = record
    hostName: CFStringRef;
    hostVersion: UInt32;
  end;
type
  AUHostVersionIdentifierPtr = ^AUHostVersionIdentifier;

type
  AUMIDIOutputCallback = function (userData: pointer; timeStamp: AudioTimeStampPtr; midiOutNum: UInt32; pktlist: MIDIPacketListPtr): OSStatus; cdecl;

type
  AUMIDIOutputCallbackStruct = record
    midiOutputCallback: AUMIDIOutputCallback;
    userData: pointer;
  end;
type
  AUMIDIOutputCallbackStructPtr = ^AUMIDIOutputCallbackStruct;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AUInputSamplesInOutputCallbackStruct = record
    inputToOutputCallback: AUInputSamplesInOutputCallback;
    userData: pointer;
  end;
type
  AUInputSamplesInOutputCallbackStructPtr = ^AUInputSamplesInOutputCallbackStruct;
type
  AudioUnitParameterHistoryInfo = record
    updatesPerSecond: Float32;
    historyDurationInSeconds: Float32;
  end;
type
  AudioUnitParameterHistoryInfoPtr = ^AudioUnitParameterHistoryInfo;

const
  kAudioUnitParameterUnit_Generic = 0;
  kAudioUnitParameterUnit_Indexed = 1;
  kAudioUnitParameterUnit_Boolean = 2;
  kAudioUnitParameterUnit_Percent = 3;
  kAudioUnitParameterUnit_Seconds = 4;
  kAudioUnitParameterUnit_SampleFrames = 5;
  kAudioUnitParameterUnit_Phase = 6;
  kAudioUnitParameterUnit_Rate = 7;
  kAudioUnitParameterUnit_Hertz = 8;
  kAudioUnitParameterUnit_Cents = 9;
  kAudioUnitParameterUnit_RelativeSemiTones = 10;
  kAudioUnitParameterUnit_MIDINoteNumber = 11;
  kAudioUnitParameterUnit_MIDIController = 12;
  kAudioUnitParameterUnit_Decibels = 13;
  kAudioUnitParameterUnit_LinearGain = 14;
  kAudioUnitParameterUnit_Degrees = 15;
  kAudioUnitParameterUnit_EqualPowerCrossfade = 16;
  kAudioUnitParameterUnit_MixerFaderCurve1 = 17;
  kAudioUnitParameterUnit_Pan = 18;
  kAudioUnitParameterUnit_Meters = 19;
  kAudioUnitParameterUnit_AbsoluteCents = 20;
  kAudioUnitParameterUnit_Octaves = 21;
  kAudioUnitParameterUnit_BPM = 22;
  kAudioUnitParameterUnit_Beats = 23;
  kAudioUnitParameterUnit_Milliseconds = 24;
  kAudioUnitParameterUnit_Ratio = 25;
  kAudioUnitParameterUnit_CustomUnit = 26;

type
  AudioUnitParameterUnit = UInt32;
  AudioUnitParameterUnitPtr = ^AudioUnitParameterUnit;

type
  AudioUnitParameterInfo = record
    name:array[0..51] of char;
    unitName: CFStringRef;
    clumpID: UInt32;
    cfNameString: CFStringRef;
    unit_: AudioUnitParameterUnit;
    minValue: AudioUnitParameterValue;
    maxValue: AudioUnitParameterValue;
    defaultValue: AudioUnitParameterValue;
    flags: UInt32;
  end;
type
  AudioUnitParameterInfoPtr = ^AudioUnitParameterInfo;

const
  kAudioUnitParameterFlag_CFNameRelease = 1 shl 4;
  kAudioUnitParameterFlag_OmitFromPresets = 1 shl 13;
  kAudioUnitParameterFlag_PlotHistory = 1 shl 14;
  kAudioUnitParameterFlag_MeterReadOnly = 1 shl 15;
  kAudioUnitParameterFlag_DisplayMask = (7 shl 16) + (1 shl 22);
  kAudioUnitParameterFlag_DisplaySquareRoot = 1 shl 16;
  kAudioUnitParameterFlag_DisplaySquared = 2 shl 16;
  kAudioUnitParameterFlag_DisplayCubed = 3 shl 16;
  kAudioUnitParameterFlag_DisplayCubeRoot = 4 shl 16;
  kAudioUnitParameterFlag_DisplayExponential = 5 shl 16;
  kAudioUnitParameterFlag_HasClump = 1 shl 20;
  kAudioUnitParameterFlag_ValuesHaveStrings = 1 shl 21;
  kAudioUnitParameterFlag_DisplayLogarithmic = 1 shl 22;
  kAudioUnitParameterFlag_IsHighResolution = 1 shl 23;
  kAudioUnitParameterFlag_NonRealTime = 1 shl 24;
  kAudioUnitParameterFlag_CanRamp = 1 shl 25;
  kAudioUnitParameterFlag_ExpertMode = 1 shl 26;
  kAudioUnitParameterFlag_HasCFNameString = 1 shl 27;
  kAudioUnitParameterFlag_IsGlobalMeta = 1 shl 28;
  kAudioUnitParameterFlag_IsElementMeta = 1 shl 29;
  kAudioUnitParameterFlag_IsReadable = 1 shl 30;
  kAudioUnitParameterFlag_IsWritable = 1 shl 31;
const
  kAudioUnitClumpID_System = 0;
const
  kAudioUnitParameterName_Full = -1;

type
  AudioUnitParameterNameInfo = record
    inID: AudioUnitParameterID;
    inDesiredLength: SInt32;
    outName: CFStringRef;
  end;
type
  AudioUnitParameterIDName = AudioUnitParameterNameInfo;
type
  AudioUnitParameterIDNamePtr = ^AudioUnitParameterNameInfo;
type
  AudioUnitParameterNameInfoPtr = ^AudioUnitParameterNameInfo;
type
  AudioUnitParameterStringFromValue = record
    inParamID: AudioUnitParameterID;
    inValue: AudioUnitParameterValuePtr;
    outString: CFStringRef;
  end;
type
  AudioUnitParameterStringFromValuePtr = ^AudioUnitParameterStringFromValue;
type
  AudioUnitParameterValueFromString = record
    inParamID: AudioUnitParameterID;
    inString: CFStringRef;
    outValue: AudioUnitParameterValue;
  end;
type
  AudioUnitParameterValueFromStringPtr = ^AudioUnitParameterValueFromString;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioUnitRemoteControlEvent_TogglePlayPause = 1;
  kAudioUnitRemoteControlEvent_ToggleRecord = 2;
  kAudioUnitRemoteControlEvent_Rewind = 3;

type
  AudioUnitRemoteControlEvent = UInt32;
  AudioUnitRemoteControlEventPtr = ^AudioUnitRemoteControlEvent;
  AudioUnitRemoteControlEventListener = OpaqueCBlock;
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAudioUnitConfigurationInfo_HasCustomView = 'HasCustomView';
  kAudioUnitConfigurationInfo_ChannelConfigurations = 'ChannelConfigurations';
  kAudioUnitConfigurationInfo_InitialInputs = 'InitialInputs';
  kAudioUnitConfigurationInfo_InitialOutputs = 'InitialOutputs';
  kAudioUnitConfigurationInfo_IconURL = 'IconURL';

const
  kAudioOutputUnitProperty_IsRunning = 2001;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioUnitProperty_AllParameterMIDIMappings = 41;
  kAudioUnitProperty_AddParameterMIDIMapping = 42;
  kAudioUnitProperty_RemoveParameterMIDIMapping = 43;
  kAudioUnitProperty_HotMapParameterMIDIMapping = 44;
const
  kAUParameterMIDIMapping_AnyChannelFlag = 1 shl 0;
  kAUParameterMIDIMapping_AnyNoteFlag = 1 shl 1;
  kAUParameterMIDIMapping_SubRange = 1 shl 2;
  kAUParameterMIDIMapping_Toggle = 1 shl 3;
  kAUParameterMIDIMapping_Bipolar = 1 shl 4;
  kAUParameterMIDIMapping_Bipolar_On = 1 shl 5;

type
  AUParameterMIDIMapping = record
    mScope: AudioUnitScope;
    mElement: AudioUnitElement;
    mParameterID: AudioUnitParameterID;
    mFlags: UInt32;
    mSubRangeMin: AudioUnitParameterValue;
    mSubRangeMax: AudioUnitParameterValue;
    mStatus: UInt8;
    mData1: UInt8;
    reserved1: UInt8;
    reserved2: UInt8;
    reserved3: UInt32;
  end;
type
  AUParameterMIDIMappingPtr = ^AUParameterMIDIMapping;

const
  kMusicDeviceProperty_MIDIXMLNames = 1006;
  kMusicDeviceProperty_PartGroup = 1010;
  kMusicDeviceProperty_DualSchedulingMode = 1013;
  kMusicDeviceProperty_SupportsStartStopNote = 1014;
const
  kMusicDeviceSampleFrameMask_SampleOffset = $FFFFFF;
  kMusicDeviceSampleFrameMask_IsScheduled = $01000000;
const
  kAudioUnitOfflineProperty_InputSize = 3020;
  kAudioUnitOfflineProperty_OutputSize = 3021;
  kAudioUnitOfflineProperty_StartOffset = 3022;
  kAudioUnitOfflineProperty_PreflightRequirements = 3023;
  kAudioUnitOfflineProperty_PreflightName = 3024;
const
  kOfflinePreflight_NotRequired = 0;
  kOfflinePreflight_Optional = 1;
  kOfflinePreflight_Required = 2;
const
  kAudioUnitProperty_DistanceAttenuationData = 3600;

type
  AUDistanceAttenuationData = record
    inNumberOfPairs: UInt32;
    pairs: array[0..0] of record
      inDistance: Float32;
      outGain: Float32;
    end;
  end;
type
  AUDistanceAttenuationDataPtr = ^AUDistanceAttenuationData;

const
  kAudioUnitMigrateProperty_FromPlugin = 4000;
  kAudioUnitMigrateProperty_OldAutomation = 4001;
const
  kOtherPluginFormat_Undefined = 0;
  kOtherPluginFormat_kMAS = 1;
  kOtherPluginFormat_kVST = 2;
  kOtherPluginFormat_AU = 3;

type
  AudioUnitOtherPluginDesc = record
    format: UInt32;
    plugin: AudioClassDescription;
  end;
type
  AudioUnitOtherPluginDescPtr = ^AudioUnitOtherPluginDesc;
type
  AudioUnitParameterValueTranslation = record
    otherDesc: AudioUnitOtherPluginDesc;
    otherParamID: UInt32;
    otherValue: Float32;
    auParamID: AudioUnitParameterID;
    auValue: AudioUnitParameterValue;
  end;
type
  AudioUnitParameterValueTranslationPtr = ^AudioUnitParameterValueTranslation;
type
  AudioUnitPresetMAS_SettingData = record
    isStockSetting: UInt32;
    settingID: UInt32;
    dataLen: UInt32;
    data:array[0..0] of UInt8;
  end;
type
  AudioUnitPresetMAS_SettingDataPtr = ^AudioUnitPresetMAS_SettingData;
type
  AudioUnitPresetMAS_Settings = record
    manufacturerID: UInt32;
    effectID: UInt32;
    variantID: UInt32;
    settingsVersion: UInt32;
    numberOfSettings: UInt32;
    settings:array[0..0] of AudioUnitPresetMAS_SettingData;
  end;
type
  AudioUnitPresetMAS_SettingsPtr = ^AudioUnitPresetMAS_Settings;
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAudioUnitProperty_SampleRateConverterComplexity = 3014;
const
  kAudioUnitSampleRateConverterComplexity_Linear = 'line';
  kAudioUnitSampleRateConverterComplexity_Normal = 'norm';
  kAudioUnitSampleRateConverterComplexity_Mastering = 'bats';
const
  kAudioOutputUnitProperty_CurrentDevice = 2000;
  kAudioOutputUnitProperty_ChannelMap = 2002;
  kAudioOutputUnitProperty_EnableIO = 2003;
  kAudioOutputUnitProperty_StartTime = 2004;
  kAudioOutputUnitProperty_SetInputCallback = 2005;
  kAudioOutputUnitProperty_HasIO = 2006;
  kAudioOutputUnitProperty_StartTimestampsAtZero = 2007;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioOutputUnitProperty_MIDICallbacks = 2010;
  kAudioOutputUnitProperty_HostReceivesRemoteControlEvents = 2011;
  kAudioOutputUnitProperty_RemoteControlToHost = 2012;
  kAudioOutputUnitProperty_HostTransportState = 2013;
  kAudioOutputUnitProperty_NodeComponentDescription = 2014;

type
  AudioOutputUnitMIDICallbacks = record
    userData: pointer;
    MIDIEventProc: procedure (userData: pointer; inStatus: UInt32; inData1: UInt32; inData2: UInt32; inOffsetSampleFrame: UInt32); cdecl;
    MIDISysExProc: procedure (userData: pointer; inData: UInt8Ptr; inLength: UInt32); cdecl;
  end;
type
  AudioOutputUnitMIDICallbacksPtr = ^AudioOutputUnitMIDICallbacks;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AudioOutputUnitStartAtTimeParams = record
    mTimestamp: AudioTimeStamp;
    mFlags: UInt32;
  end;
type
  AudioOutputUnitStartAtTimeParamsPtr = ^AudioOutputUnitStartAtTimeParams;

const
  kAUVoiceIOProperty_BypassVoiceProcessing = 2100;
  kAUVoiceIOProperty_VoiceProcessingEnableAGC = 2101;
  kAUVoiceIOProperty_MuteOutput = 2104;
const
  {$if defined(TARGET_OS_IPHONE)}
  kAUVoiceIOProperty_DuckNonVoiceAudio = 2102;
  {$endif}
  kAUVoiceIOProperty_VoiceProcessingQuality = 2103;
const
  kAUNBandEQProperty_NumberOfBands = 2200;
  kAUNBandEQProperty_MaxNumberOfBands = 2201;
  kAUNBandEQProperty_BiquadCoefficients = 2203;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAUVoiceIOErr_UnexpectedNumberOfInputChannels = -66784;
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAudioUnitProperty_MeteringMode = 3007;
  kAudioUnitProperty_MatrixLevels = 3006;
  kAudioUnitProperty_MatrixDimensions = 3009;
  kAudioUnitProperty_MeterClipping = 3011;

type
  AudioUnitMeterClipping = record
    peakValueSinceLastCall: Float32;
    sawInfinity: Boolean;
    sawNotANumber: Boolean;
  end;
type
  AudioUnitMeterClippingPtr = ^AudioUnitMeterClipping;

const
  kAudioUnitProperty_ReverbRoomType = 10;
  kAudioUnitProperty_UsesInternalReverb = 1005;
  kAudioUnitProperty_SpatializationAlgorithm = 3000;
  kAudioUnitProperty_SpatialMixerDistanceParams = 3010;
  kAudioUnitProperty_SpatialMixerAttenuationCurve = 3013;
  kAudioUnitProperty_SpatialMixerRenderingFlags = 3003;
const
  kSpatializationAlgorithm_EqualPowerPanning = 0;
  kSpatializationAlgorithm_SphericalHead = 1;
  kSpatializationAlgorithm_HRTF = 2;
  kSpatializationAlgorithm_SoundField = 3;
  kSpatializationAlgorithm_VectorBasedPanning = 4;
  kSpatializationAlgorithm_StereoPassThrough = 5;
const
  kReverbRoomType_SmallRoom = 0;
  kReverbRoomType_MediumRoom = 1;
  kReverbRoomType_LargeRoom = 2;
  kReverbRoomType_MediumHall = 3;
  kReverbRoomType_LargeHall = 4;
  kReverbRoomType_Plate = 5;
  kReverbRoomType_MediumChamber = 6;
  kReverbRoomType_LargeChamber = 7;
  kReverbRoomType_Cathedral = 8;
  kReverbRoomType_LargeRoom2 = 9;
  kReverbRoomType_MediumHall2 = 10;
  kReverbRoomType_MediumHall3 = 11;
  kReverbRoomType_LargeHall2 = 12;
const
  kSpatialMixerAttenuationCurve_Power = 0;
  kSpatialMixerAttenuationCurve_Exponential = 1;
  kSpatialMixerAttenuationCurve_Inverse = 2;
  kSpatialMixerAttenuationCurve_Linear = 3;

type
  MixerDistanceParams = record
    mReferenceDistance: Float32;
    mMaxDistance: Float32;
    mMaxAttenuation: Float32;
  end;
type
  MixerDistanceParamsPtr = ^MixerDistanceParams;

const
  kSpatialMixerRenderingFlags_InterAuralDelay = 1 shl 0;
  kSpatialMixerRenderingFlags_DistanceAttenuation = 1 shl 2;
const
  kAudioUnitProperty_3DMixerDistanceParams = 3010;
  kAudioUnitProperty_3DMixerAttenuationCurve = 3013;
  kAudioUnitProperty_DopplerShift = 3002;
  kAudioUnitProperty_3DMixerRenderingFlags = 3003;
  kAudioUnitProperty_3DMixerDistanceAtten = 3004;
  kAudioUnitProperty_ReverbPreset = 3012;
const
  k3DMixerRenderingFlags_InterAuralDelay = 1 shl 0;
  k3DMixerRenderingFlags_DopplerShift = 1 shl 1;
  k3DMixerRenderingFlags_DistanceAttenuation = 1 shl 2;
  k3DMixerRenderingFlags_DistanceFilter = 1 shl 3;
  k3DMixerRenderingFlags_DistanceDiffusion = 1 shl 4;
  k3DMixerRenderingFlags_LinearDistanceAttenuation = 1 shl 5;
  k3DMixerRenderingFlags_ConstantReverbBlend = 1 shl 6;
const
  k3DMixerAttenuationCurve_Power = 0;
  k3DMixerAttenuationCurve_Exponential = 1;
  k3DMixerAttenuationCurve_Inverse = 2;
  k3DMixerAttenuationCurve_Linear = 3;
const
  kAudioUnitProperty_ScheduleAudioSlice = 3300;
  kAudioUnitProperty_ScheduleStartTimeStamp = 3301;
  kAudioUnitProperty_CurrentPlayTime = 3302;
const
  kScheduledAudioSliceFlag_Complete = $01;
  kScheduledAudioSliceFlag_BeganToRender = $02;
  kScheduledAudioSliceFlag_BeganToRenderLate = $04;
  kScheduledAudioSliceFlag_Loop = $08;
  kScheduledAudioSliceFlag_Interrupt = $10;
  kScheduledAudioSliceFlag_InterruptAtLoop = $20;

type
ScheduledAudioSliceCompletionProc = procedure (userData: pointer; bufferList: pointer{ScheduledAudioSlicePtr}); cdecl;

type
  ScheduledAudioSlice = record
    mTimeStamp: AudioTimeStamp;
    mCompletionProc: ScheduledAudioSliceCompletionProc;
    mCompletionProcUserData: pointer;
    mFlags: UInt32;
    mReserved: UInt32;
    mReserved2: pointer;
    mNumberFrames: UInt32;
    mBufferList: AudioBufferListPtr;
  end;
type
  ScheduledAudioSlicePtr = ^ScheduledAudioSlice;

const
  kAudioUnitProperty_ScheduledFileIDs = 3310;
  kAudioUnitProperty_ScheduledFileRegion = 3311;
  kAudioUnitProperty_ScheduledFilePrime = 3312;
  kAudioUnitProperty_ScheduledFileBufferSizeFrames = 3313;
  kAudioUnitProperty_ScheduledFileNumberBuffers = 3314;

type
ScheduledAudioFileRegionCompletionProc = procedure (userData: pointer; fileRegion: pointer{ScheduledAudioFileRegionPtr}; result_: OSStatus); cdecl;

type
  ScheduledAudioFileRegion = record
    mTimeStamp: AudioTimeStamp;
    mCompletionProc: ScheduledAudioFileRegionCompletionProc;
    mCompletionProcUserData: pointer;
    mAudioFile: OpaqueAudioFileIDPtr;
    mLoopCount: UInt32;
    mStartFrame: SInt64;
    mFramesToPlay: UInt32;
  end;
type
  ScheduledAudioFileRegionPtr = ^ScheduledAudioFileRegion;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kMusicDeviceProperty_UsesInternalReverb = kAudioUnitProperty_UsesInternalReverb;
  kMusicDeviceProperty_SoundBankData = 1008;
  kMusicDeviceProperty_StreamFromDisk = 1011;
  kMusicDeviceProperty_SoundBankFSRef = 1012;
{$endif}

{$endif}
{$ifdef TYPES}
const
  kMusicDeviceProperty_InstrumentName = 1001;
  kMusicDeviceProperty_InstrumentNumber = 1004;
const
  kMusicDeviceProperty_InstrumentCount = 1000;
  kMusicDeviceProperty_BankName = 1007;
  kMusicDeviceProperty_SoundBankURL = 1100;
const
  kAUMIDISynthProperty_EnablePreload = 4119;
const
  kAUSamplerProperty_LoadInstrument = 4102;
  kAUSamplerProperty_LoadAudioFiles = 4101;

type
  AUSamplerInstrumentData = record
    fileURL: CFURLRef;
    instrumentType: UInt8;
    bankMSB: UInt8;
    bankLSB: UInt8;
    presetID: UInt8;
  end;
type
  AUSamplerInstrumentDataPtr = ^AUSamplerInstrumentData;

const
  kInstrumentType_DLSPreset = 1;
  kInstrumentType_SF2Preset = kInstrumentType_DLSPreset;
  kInstrumentType_AUPreset = 2;
  kInstrumentType_Audiofile = 3;
  kInstrumentType_EXS24 = 4;
const
  kAUSampler_DefaultPercussionBankMSB = $78;
  kAUSampler_DefaultMelodicBankMSB = $79;
  kAUSampler_DefaultBankLSB = $00;
const
  kAudioUnitProperty_DeferredRendererPullSize = 3320;
  kAudioUnitProperty_DeferredRendererExtraLatency = 3321;
  kAudioUnitProperty_DeferredRendererWaitFrames = 3322;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAUNetReceiveProperty_Hostname = 3511;
  kAUNetReceiveProperty_Password = 3512;
const
  kAUNetSendProperty_PortNum = 3513;
  kAUNetSendProperty_TransmissionFormat = 3514;
  kAUNetSendProperty_TransmissionFormatIndex = 3515;
  kAUNetSendProperty_ServiceName = 3516;
  kAUNetSendProperty_Disconnect = 3517;
  kAUNetSendProperty_Password = 3518;
const
  kAUNetSendPresetFormat_PCMFloat32 = 0;
  kAUNetSendPresetFormat_PCMInt24 = 1;
  kAUNetSendPresetFormat_PCMInt16 = 2;
  kAUNetSendPresetFormat_Lossless24 = 3;
  kAUNetSendPresetFormat_Lossless16 = 4;
  kAUNetSendPresetFormat_ULaw = 5;
  kAUNetSendPresetFormat_IMA4 = 6;
  kAUNetSendPresetFormat_AAC_128kbpspc = 7;
  kAUNetSendPresetFormat_AAC_96kbpspc = 8;
  kAUNetSendPresetFormat_AAC_80kbpspc = 9;
  kAUNetSendPresetFormat_AAC_64kbpspc = 10;
  kAUNetSendPresetFormat_AAC_48kbpspc = 11;
  kAUNetSendPresetFormat_AAC_40kbpspc = 12;
  kAUNetSendPresetFormat_AAC_32kbpspc = 13;
  kAUNetSendPresetFormat_AAC_LD_64kbpspc = 14;
  kAUNetSendPresetFormat_AAC_LD_48kbpspc = 15;
  kAUNetSendPresetFormat_AAC_LD_40kbpspc = 16;
  kAUNetSendPresetFormat_AAC_LD_32kbpspc = 17;
  kAUNetSendNumPresetFormats = 18;
{$endif}

{$endif}

{$if  not defined(TARGET_OS_IPHONE)}

{$if defined(TARGET_RT_BIG_ENDIAN)}
{$ifdef TYPES}
type
  AUNumVersion = record
    majorRev: UInt8;
    minorAndBugRev: UInt8;
    stage: UInt8;
    nonRelRev: UInt8;
  end;
type
  AUNumVersionPtr = ^AUNumVersion;
{$endif}

{$else}
{$ifdef TYPES}
type
  AUNumVersion = record
    nonRelRev: UInt8;
    stage: UInt8;
    minorAndBugRev: UInt8;
    majorRev: UInt8;
  end;
type
  AUNumVersionPtr = ^AUNumVersion;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AUHostIdentifier = record
    hostName: CFStringRef;
    hostVersion: AUNumVersion;
  end;
type
  AUHostIdentifierPtr = ^AUHostIdentifier;

const
  kAudioUnitParameterFlag_Global = 1 shl 0;
  kAudioUnitParameterFlag_Input = 1 shl 1;
  kAudioUnitParameterFlag_Output = 1 shl 2;
  kAudioUnitParameterFlag_Group = 1 shl 3;
const
  kAudioUnitParameterFlag_HasName = kAudioUnitParameterFlag_ValuesHaveStrings;
const
  kAudioUnitProperty_SRCAlgorithm = 9;
  kAudioUnitProperty_MIDIControlMapping = 17;
  kAudioUnitProperty_CurrentPreset = 28;
  kAudioUnitProperty_ParameterValueName = kAudioUnitProperty_ParameterStringFromValue;
  kAudioUnitProperty_BusCount = kAudioUnitProperty_ElementCount;
  kAudioOfflineUnitProperty_InputSize = kAudioUnitOfflineProperty_InputSize;
  kAudioOfflineUnitProperty_OutputSize = kAudioUnitOfflineProperty_OutputSize;
const
  kAudioUnitSRCAlgorithm_Polyphase = 'poly';
  kAudioUnitSRCAlgorithm_MediumQuality = 'csrc';

type
  AudioUnitMIDIControlMapping = record
    midiNRPN: UInt16;
    midiControl: UInt8;
    scope: UInt8;
    element: AudioUnitElement;
    parameter: AudioUnitParameterID;
  end;
type
  AudioUnitMIDIControlMappingPtr = ^AudioUnitMIDIControlMapping;
type
  AudioUnitParameterValueName = record
    inParamID: AudioUnitParameterID;
    inValue: Float32Ptr;
    outName: CFStringRef;
  end;
type
  AudioUnitParameterValueNamePtr = ^AudioUnitParameterValueName;

const
  kMusicDeviceProperty_GroupOutputBus = 1002;
  kMusicDeviceProperty_SoundBankFSSpec = 1003;
  kAudioUnitProperty_PannerMode = 3008;
const
  kAudioUnitProperty_SpeakerConfiguration = 3001;
const
  kSpeakerConfiguration_HeadPhones = 0;
  kSpeakerConfiguration_Stereo = 1;
  kSpeakerConfiguration_Quad = 2;
  kSpeakerConfiguration_5_0 = 3;
  kSpeakerConfiguration_5_1 = kSpeakerConfiguration_5_0;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AUSamplerBankPresetData = record
    bankURL: CFURLRef;
    bankMSB: UInt8;
    bankLSB: UInt8;
    presetID: UInt8;
    reserved: UInt8;
  end;
type
  AUSamplerBankPresetDataPtr = ^AUSamplerBankPresetData;

const
  kAUSamplerProperty_LoadPresetFromBank = 4100;
  kAUSamplerProperty_BankAndPreset = kAUSamplerProperty_LoadPresetFromBank;
{$endif}

{$endif}
