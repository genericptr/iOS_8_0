{ Parsed from CoreData.framework (iPhoneOS8.2) NSMappingModel.h }
{ Created on Fri Mar 20 2:10:51 2015 }


{$ifdef TYPES}
type
  NSMappingModelPtr = ^NSMappingModel;
{$endif}

{$ifdef CLASSES}

type
  NSMappingModel = objcclass external (NSObject)
  private
    _reserved: pointer;
    _reserved1: pointer;
    _reserved2: pointer;
    _entityMappings: NSMutableArray;
    _entityMappingsByName: NSMutableDictionary;
    __modelMappingFlags: bitpacked record
      case byte of
        0: (_anonBitField___modelMappingFlags0: cuint);
        1: (
          _isInUse: 0..1;
          _reservedModelMapping: 0..((1 shl 31)-1);
        );
      end;
  public
    class function mappingModelFromBundles_forSourceModel_destinationModel (bundles: NSArray; sourceModel: NSManagedObjectModel; destinationModel: NSManagedObjectModel): NSMappingModel; message 'mappingModelFromBundles:forSourceModel:destinationModel:';
    class function inferredMappingModelForSourceModel_destinationModel_error (sourceModel: NSManagedObjectModel; destinationModel: NSManagedObjectModel; error: NSErrorPtr): NSMappingModel; message 'inferredMappingModelForSourceModel:destinationModel:error:'; { available in 10_6,3_0 }
    function initWithContentsOfURL (url: NSURL): instancetype; message 'initWithContentsOfURL:';
    procedure setEntityMappings(newValue: NSArray); message 'setEntityMappings:';
    function entityMappings: NSArray; message 'entityMappings';
    function entityMappingsByName: NSDictionary; message 'entityMappingsByName';
  end;
{$endif}

