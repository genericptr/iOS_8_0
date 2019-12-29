{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVTimedMetadataGroup.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVTimedMetadataGroupPtr = ^AVTimedMetadataGroup;
  AVMutableTimedMetadataGroupPtr = ^AVMutableTimedMetadataGroup;
{$endif}

{$ifdef CLASSES}

type
  AVTimedMetadataGroup = objcclass external (NSObject, NSCopyingProtocol)
  private
    _priv: AVTimedMetadataGroupInternal;
  public
    function initWithItems_timeRange (items: NSArray; timeRange: CMTimeRange): instancetype; message 'initWithItems:timeRange:';
    function initWithSampleBuffer (sampleBuffer: CMSampleBufferRef): instancetype; message 'initWithSampleBuffer:'; { available in 10_10, 8_0 }
    function timeRange: CMTimeRange; message 'timeRange';
    function items: NSArray; message 'items';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  AVTimedMetadataGroupSerializationSupport = objccategory external (AVTimedMetadataGroup)
    function copyFormatDescription: CMMetadataFormatDescriptionRef; message 'copyFormatDescription'; { available in 10_10, 8_0 }
  end;


type
  AVMutableTimedMetadataGroup = objcclass external (AVTimedMetadataGroup)
  private
    _mutablePriv: AVMutableTimedMetadataGroupInternal;
  public
    procedure setTimeRange(newValue: CMTimeRange); message 'setTimeRange:';
    function timeRange: CMTimeRange; message 'timeRange';
    procedure setItems(newValue: NSArray); message 'setItems:';
    function items: NSArray; message 'items';
  end;
{$endif}

