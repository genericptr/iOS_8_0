{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVCaptureInput.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVCaptureInputPtr = ^AVCaptureInput;
  AVCaptureInputPortPtr = ^AVCaptureInputPort;
  AVCaptureDeviceInputPtr = ^AVCaptureDeviceInput;
  AVCaptureScreenInputPtr = ^AVCaptureScreenInput;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureInput = objcclass external (NSObject)
  private
    _inputInternal: AVCaptureInputInternal;
  public
    function ports: NSArray; message 'ports';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVCaptureInputPortFormatDescriptionDidChangeNotification: NSString { available in 10_7, 4_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureInputPort = objcclass external (NSObject)
  private
    _internal: AVCaptureInputPortInternal;
  public
    function input: AVCaptureInput; message 'input';
    function mediaType: NSString; message 'mediaType';
    function formatDescription: CMFormatDescriptionRef; message 'formatDescription';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    function clock: CMClockRef; message 'clock';
  end;

type
  AVCaptureDeviceInput = objcclass external (AVCaptureInput)
  private
    _internal: AVCaptureDeviceInputInternal;
  public
    class function deviceInputWithDevice_error (device: AVCaptureDevice; outError: NSErrorPtr): id; message 'deviceInputWithDevice:error:';
    function initWithDevice_error (device: AVCaptureDevice; outError: NSErrorPtr): id; message 'initWithDevice:error:';
    function device: AVCaptureDevice; message 'device';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef CLASSES}

type
  AVCaptureScreenInput = objcclass external (AVCaptureInput)
  private
    _internal: AVCaptureScreenInputInternal;
  public
function initWithDisplayID (displayID: pointer{CGDirectDisplayID}): id; message 'initWithDisplayID:';
    procedure setMinFrameDuration(newValue: CMTime); message 'setMinFrameDuration:';
    function minFrameDuration: CMTime; message 'minFrameDuration';
    procedure setCropRect(newValue: CGRect); message 'setCropRect:';
    function cropRect: CGRect; message 'cropRect';
    procedure setScaleFactor(newValue: CGFloat); message 'setScaleFactor:';
    function scaleFactor: CGFloat; message 'scaleFactor';
    procedure setCapturesMouseClicks(newValue: boolean); message 'setCapturesMouseClicks:';
    function capturesMouseClicks: boolean; message 'capturesMouseClicks';
    procedure setCapturesCursor(newValue: boolean); message 'setCapturesCursor:';
    function capturesCursor: boolean; message 'capturesCursor';
    procedure setRemovesDuplicateFrames(newValue: boolean); message 'setRemovesDuplicateFrames:';
    function removesDuplicateFrames: boolean; message 'removesDuplicateFrames';
  end;
{$endif}

{$endif}
