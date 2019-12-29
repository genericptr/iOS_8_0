{ Parsed from AudioToolbox.framework (iPhoneOS8.2) AudioQueue.h }
{ Created on Fri Mar 20 2:10:47 2015 }

{$ifndef __AudioQueue_h__}

{$ifdef TYPES}
const
  kAudioQueueErr_InvalidBuffer = -66687;
  kAudioQueueErr_BufferEmpty = -66686;
  kAudioQueueErr_DisposalPending = -66685;
  kAudioQueueErr_InvalidProperty = -66684;
  kAudioQueueErr_InvalidPropertySize = -66683;
  kAudioQueueErr_InvalidParameter = -66682;
  kAudioQueueErr_CannotStart = -66681;
  kAudioQueueErr_InvalidDevice = -66680;
  kAudioQueueErr_BufferInQueue = -66679;
  kAudioQueueErr_InvalidRunState = -66678;
  kAudioQueueErr_InvalidQueueType = -66677;
  kAudioQueueErr_Permissions = -66676;
  kAudioQueueErr_InvalidPropertyValue = -66675;
  kAudioQueueErr_PrimeTimedOut = -66674;
  kAudioQueueErr_CodecNotFound = -66673;
  kAudioQueueErr_InvalidCodecAccess = -66672;
  kAudioQueueErr_QueueInvalidated = -66671;
  kAudioQueueErr_TooManyTaps = -66670;
  kAudioQueueErr_InvalidTapContext = -66669;
  kAudioQueueErr_RecordUnderrun = -66668;
  kAudioQueueErr_InvalidTapType = -66667;
  kAudioQueueErr_BufferEnqueuedTwice = -66666;
  kAudioQueueErr_EnqueueDuringReset = -66632;
  kAudioQueueErr_InvalidOfflineMode = -66626;
const
  kAudioQueueProperty_IsRunning = 'aqrn';
  kAudioQueueDeviceProperty_SampleRate = 'aqsr';
  kAudioQueueDeviceProperty_NumberChannels = 'aqdc';
  kAudioQueueProperty_CurrentDevice = 'aqcd';
  kAudioQueueProperty_MagicCookie = 'aqmc';
  kAudioQueueProperty_MaximumOutputPacketSize = 'xops';
  kAudioQueueProperty_StreamDescription = 'aqft';
  kAudioQueueProperty_ChannelLayout = 'aqcl';
  kAudioQueueProperty_EnableLevelMetering = 'aqme';
  kAudioQueueProperty_CurrentLevelMeter = 'aqmv';
  kAudioQueueProperty_CurrentLevelMeterDB = 'aqmd';
  kAudioQueueProperty_DecodeBufferSizeFrames = 'dcbf';
  kAudioQueueProperty_ConverterError = 'qcve';
  kAudioQueueProperty_EnableTimePitch = 'q_tp';
  kAudioQueueProperty_TimePitchAlgorithm = 'qtpa';
  kAudioQueueProperty_TimePitchBypass = 'qtpb';
const
  kAudioQueueTimePitchAlgorithm_Spectral = 'spec';
  kAudioQueueTimePitchAlgorithm_TimeDomain = 'tido';
  {$if defined(TARGET_OS_IPHONE)}
  kAudioQueueTimePitchAlgorithm_LowQualityZeroLatency = 'lqzl';
  {$endif}
  kAudioQueueTimePitchAlgorithm_Varispeed = 'vspd';
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioQueueProperty_HardwareCodecPolicy = 'aqcp';
const
  kAudioQueueHardwareCodecPolicy_Default = 0;
  kAudioQueueHardwareCodecPolicy_UseSoftwareOnly = 1;
  kAudioQueueHardwareCodecPolicy_UseHardwareOnly = 2;
  kAudioQueueHardwareCodecPolicy_PreferSoftware = 3;
  kAudioQueueHardwareCodecPolicy_PreferHardware = 4;
const
  kAudioQueueProperty_ChannelAssignments = 'aqca';
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAudioQueueParam_Volume = 1;
  kAudioQueueParam_PlayRate = 2;
  kAudioQueueParam_Pitch = 3;
  kAudioQueueParam_VolumeRampTime = 4;
  kAudioQueueParam_Pan = 13;
const
  kAudioQueueProcessingTap_PreEffects = 1 shl 0;
  kAudioQueueProcessingTap_PostEffects = 1 shl 1;
  kAudioQueueProcessingTap_Siphon = 1 shl 2;
  kAudioQueueProcessingTap_StartOfStream = 1 shl 8;
  kAudioQueueProcessingTap_EndOfStream = 1 shl 9;

type
  AudioQueuePropertyID = UInt32;
  AudioQueuePropertyIDPtr = ^AudioQueuePropertyID;
  AudioQueueParameterID = UInt32;
  AudioQueueParameterIDPtr = ^AudioQueueParameterID;
  AudioQueueParameterValue = Float32;
  AudioQueueParameterValuePtr = ^AudioQueueParameterValue;
  AudioQueueRef = OpaqueType;
  AudioQueueTimelineRef = OpaqueType;

type
  AudioQueueBuffer = record
    mAudioDataBytesCapacity: UInt32;
    mAudioData: pointer;
    mAudioDataByteSize: UInt32;
    mUserData: pointer;
    mPacketDescriptionCapacity: UInt32;
    mPacketDescriptions: AudioStreamPacketDescriptionPtr;
    mPacketDescriptionCount: UInt32;
    {$ifdef __cplusplus}
    {$endif}
  end;
type
  AudioQueueBufferRef = ^AudioQueueBuffer;

type
  AudioQueueParameterEvent = record
    mID: AudioQueueParameterID;
    mValue: AudioQueueParameterValue;
  end;
type
  AudioQueueParameterEventPtr = ^AudioQueueParameterEvent;
type
  AudioQueueLevelMeterState = record
    mAveragePower: Float32;
    mPeakPower: Float32;
  end;
type
  AudioQueueLevelMeterStatePtr = ^AudioQueueLevelMeterState;

type
  AudioQueueProcessingTapRef = OpaqueType;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AudioQueueChannelAssignment = record
    mDeviceUID: CFStringRef;
    mChannelNumber: UInt32;
  end;
type
  AudioQueueChannelAssignmentPtr = ^AudioQueueChannelAssignment;
{$endif}

{$endif}

{$if (defined(__BLOCKS__)) and not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AudioQueueOutputCallbackBlock = OpaqueCBlock;
  AudioQueueInputCallbackBlock = OpaqueCBlock;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AudioQueueOutputCallback = procedure (inUserData: pointer; inAQ: AudioQueueRef; inBuffer: AudioQueueBufferRef); cdecl;
  AudioQueueInputCallback = procedure (inUserData: pointer; inAQ: AudioQueueRef; inBuffer: AudioQueueBufferRef; inStartTime: AudioTimeStampPtr; inNumberPacketDescriptions: UInt32; inPacketDescs: AudioStreamPacketDescriptionPtr); cdecl;
  AudioQueuePropertyListenerProc = procedure (inUserData: pointer; inAQ: AudioQueueRef; inID: AudioQueuePropertyID); cdecl;
  AudioQueueProcessingTapCallback = procedure (inClientData: pointer; inAQTap: AudioQueueProcessingTapRef; inNumberFrames: UInt32; ioTimeStamp: AudioTimeStampPtr; ioFlags: UInt32Ptr; outNumberFrames: UInt32Ptr; ioData: AudioBufferListPtr); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioQueueNewOutput(inFormat: AudioStreamBasicDescriptionPtr; inCallbackProc: AudioQueueOutputCallback; inUserData: pointer; inCallbackRunLoop: CFRunLoopRef; inCallbackRunLoopMode: CFStringRef; inFlags: UInt32; outAQ: AudioQueueRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueNewInput(inFormat: AudioStreamBasicDescriptionPtr; inCallbackProc: AudioQueueInputCallback; inUserData: pointer; inCallbackRunLoop: CFRunLoopRef; inCallbackRunLoopMode: CFStringRef; inFlags: UInt32; outAQ: AudioQueueRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
{$endif}

{$if (defined(__BLOCKS__)) and not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AudioQueueNewOutputWithDispatchQueue(outAQ: AudioQueueRef; inFormat: AudioStreamBasicDescriptionPtr; inFlags: UInt32; inCallbackDispatchQueue: dispatch_queue_t; inCallbackBlock: AudioQueueOutputCallbackBlock): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_NA }
function AudioQueueNewInputWithDispatchQueue(outAQ: AudioQueueRef; inFormat: AudioStreamBasicDescriptionPtr; inFlags: UInt32; inCallbackDispatchQueue: dispatch_queue_t; inCallbackBlock: AudioQueueInputCallbackBlock): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_NA }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function AudioQueueDispose(inAQ: AudioQueueRef; inImmediate: Boolean): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueAllocateBuffer(inAQ: AudioQueueRef; inBufferByteSize: UInt32; outBuffer: AudioQueueBufferRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueAllocateBufferWithPacketDescriptions(inAQ: AudioQueueRef; inBufferByteSize: UInt32; inNumberPacketDescriptions: UInt32; outBuffer: AudioQueueBufferRef): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioQueueFreeBuffer(inAQ: AudioQueueRef; inBuffer: AudioQueueBufferRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueEnqueueBuffer(inAQ: AudioQueueRef; inBuffer: AudioQueueBufferRef; inNumPacketDescs: UInt32; inPacketDescs: AudioStreamPacketDescriptionPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueEnqueueBufferWithParameters(inAQ: AudioQueueRef; inBuffer: AudioQueueBufferRef; inNumPacketDescs: UInt32; inPacketDescs: AudioStreamPacketDescriptionPtr; inTrimFramesAtStart: UInt32; inTrimFramesAtEnd: UInt32; inNumParamValues: UInt32; inParamValues: AudioQueueParameterEventPtr; inStartTime: AudioTimeStampPtr; outActualStartTime: AudioTimeStampPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueStart(inAQ: AudioQueueRef; inStartTime: AudioTimeStampPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueuePrime(inAQ: AudioQueueRef; inNumberOfFramesToPrepare: UInt32; outNumberOfFramesPrepared: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueStop(inAQ: AudioQueueRef; inImmediate: Boolean): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueuePause(inAQ: AudioQueueRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueFlush(inAQ: AudioQueueRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueReset(inAQ: AudioQueueRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueGetParameter(inAQ: AudioQueueRef; inParamID: AudioQueueParameterID; outValue: AudioQueueParameterValuePtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueSetParameter(inAQ: AudioQueueRef; inParamID: AudioQueueParameterID; inValue: AudioQueueParameterValue): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueGetProperty(inAQ: AudioQueueRef; inID: AudioQueuePropertyID; outData: pointer; ioDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueSetProperty(inAQ: AudioQueueRef; inID: AudioQueuePropertyID; inData: pointer; inDataSize: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueGetPropertySize(inAQ: AudioQueueRef; inID: AudioQueuePropertyID; outDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueAddPropertyListener(inAQ: AudioQueueRef; inID: AudioQueuePropertyID; inProc: AudioQueuePropertyListenerProc; inUserData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueRemovePropertyListener(inAQ: AudioQueueRef; inID: AudioQueuePropertyID; inProc: AudioQueuePropertyListenerProc; inUserData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueCreateTimeline(inAQ: AudioQueueRef; outTimeline: AudioQueueTimelineRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueDisposeTimeline(inAQ: AudioQueueRef; inTimeline: AudioQueueTimelineRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueGetCurrentTime(inAQ: AudioQueueRef; inTimeline: AudioQueueTimelineRef; outTimeStamp: AudioTimeStampPtr; outTimelineDiscontinuity: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueDeviceGetCurrentTime(inAQ: AudioQueueRef; outTimeStamp: AudioTimeStampPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueDeviceTranslateTime(inAQ: AudioQueueRef; inTime: AudioTimeStampPtr; outTime: AudioTimeStampPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueDeviceGetNearestStartTime(inAQ: AudioQueueRef; ioRequestedStartTime: AudioTimeStampPtr; inFlags: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueSetOfflineRenderFormat(inAQ: AudioQueueRef; inFormat: AudioStreamBasicDescriptionPtr; inLayout: AudioChannelLayoutPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueOfflineRender(inAQ: AudioQueueRef; inTimestamp: AudioTimeStampPtr; ioBuffer: AudioQueueBufferRef; inNumberFrames: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueProcessingTapNew(inAQ: AudioQueueRef; inCallback: AudioQueueProcessingTapCallback; inClientData: pointer; inFlags: UInt32; outMaxFrames: UInt32Ptr; outProcessingFormat: AudioStreamBasicDescriptionPtr; outAQTap: AudioQueueProcessingTapRef): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_6_0 }
function AudioQueueProcessingTapDispose(inAQTap: AudioQueueProcessingTapRef): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_6_0 }
function AudioQueueProcessingTapGetSourceAudio(inAQTap: AudioQueueProcessingTapRef; inNumberFrames: UInt32; ioTimeStamp: AudioTimeStampPtr; outFlags: UInt32Ptr; outNumberFrames: UInt32Ptr; ioData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_6_0 }
function AudioQueueProcessingTapGetQueueTime(inAQTap: AudioQueueProcessingTapRef; outQueueSampleTime: Float64Ptr; outQueueFrameCount: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_6_0 }
{$endif}

{$endif}
