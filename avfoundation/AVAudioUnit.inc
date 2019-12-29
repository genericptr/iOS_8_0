{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVAudioUnit.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVAudioUnitPtr = ^AVAudioUnit;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnit = objcclass external (AVAudioNode)
  public
    function loadAudioUnitPresetAtURL_error (url: NSURL; error: NSErrorPtr): boolean; message 'loadAudioUnitPresetAtURL:error:';
    function audioComponentDescription: AudioComponentDescription; message 'audioComponentDescription';
    function audioUnit: pointer{AudioUnit}; message 'audioUnit';
    function name: NSString; message 'name';
    function manufacturerName: NSString; message 'manufacturerName';
    function version: NSUInteger; message 'version';
  end;
{$endif}

