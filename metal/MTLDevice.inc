{ Parsed from Metal.framework (iPhoneOS8.2) MTLDevice.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLDeviceProtocolPtr = ^MTLDeviceProtocol;
{$endif}

{$ifdef FUNCTIONS}
function MTLCreateSystemDefaultDevice: MTLDeviceProtocol; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  MTLFeatureSet = NSUInteger;
  MTLFeatureSetPtr = ^MTLFeatureSet;

const
  MTLFeatureSet_iOS_GPUFamily1_v1 = 0;
  MTLFeatureSet_iOS_GPUFamily2_v1 = 1;

type
  MTLPipelineOption = NSUInteger;
  MTLPipelineOptionPtr = ^MTLPipelineOption;

const
  MTLPipelineOptionNone = 0;
  MTLPipelineOptionArgumentInfo = 1 shl 0;
  MTLPipelineOptionBufferTypeInfo = 1 shl 1;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLDeviceProtocol = objcprotocol external name 'MTLDevice' (NSObjectProtocol)
    function name: NSString; message 'name';
    function newCommandQueue: MTLCommandQueueProtocol; message 'newCommandQueue';
    function newCommandQueueWithMaxCommandBufferCount (maxCommandBufferCount: NSUInteger): MTLCommandQueueProtocol; message 'newCommandQueueWithMaxCommandBufferCount:';
    function newBufferWithLength_options (length: NSUInteger; options: MTLResourceOptions): MTLBufferProtocol; message 'newBufferWithLength:options:';
    function newBufferWithBytes_length_options (pointer_: pointer; length: NSUInteger; options: MTLResourceOptions): MTLBufferProtocol; message 'newBufferWithBytes:length:options:';
    function newBufferWithBytesNoCopy_length_options_deallocator (pointer_: pointer; length: NSUInteger; options: MTLResourceOptions; deallocator: OpaqueCBlock): MTLBufferProtocol; message 'newBufferWithBytesNoCopy:length:options:deallocator:';
    function newDepthStencilStateWithDescriptor (descriptor: MTLDepthStencilDescriptor): MTLDepthStencilStateProtocol; message 'newDepthStencilStateWithDescriptor:';
    function newTextureWithDescriptor (descriptor: MTLTextureDescriptor): MTLTextureProtocol; message 'newTextureWithDescriptor:';
    function newSamplerStateWithDescriptor (descriptor: MTLSamplerDescriptor): MTLSamplerStateProtocol; message 'newSamplerStateWithDescriptor:';
    function newDefaultLibrary: MTLLibraryProtocol; message 'newDefaultLibrary';
    function newLibraryWithFile_error (filepath: NSString; error: NSErrorPtr): MTLLibraryProtocol; message 'newLibraryWithFile:error:';
function newLibraryWithData_error (data: pointer{dispatch_data_t}; error: NSErrorPtr): MTLLibraryProtocol; message 'newLibraryWithData:error:';
    function newLibraryWithSource_options_error (source: NSString; options: MTLCompileOptions; error: NSErrorPtr): MTLLibraryProtocol; message 'newLibraryWithSource:options:error:';
    procedure newLibraryWithSource_options_completionHandler (source: NSString; options: MTLCompileOptions; completionHandler: OpaqueCBlock); message 'newLibraryWithSource:options:completionHandler:';
    function newRenderPipelineStateWithDescriptor_error (descriptor: MTLRenderPipelineDescriptor; error: NSErrorPtr): MTLRenderPipelineStateProtocol; message 'newRenderPipelineStateWithDescriptor:error:';
    function newRenderPipelineStateWithDescriptor_options_reflection_error (descriptor: MTLRenderPipelineDescriptor; options: MTLPipelineOption; reflection: MTLRenderPipelineReflectionPtr; error: NSErrorPtr): MTLRenderPipelineStateProtocol; message 'newRenderPipelineStateWithDescriptor:options:reflection:error:';
    procedure newRenderPipelineStateWithDescriptor_completionHandler (descriptor: MTLRenderPipelineDescriptor; completionHandler: OpaqueCBlock); message 'newRenderPipelineStateWithDescriptor:completionHandler:';
    procedure newRenderPipelineStateWithDescriptor_options_completionHandler (descriptor: MTLRenderPipelineDescriptor; options: MTLPipelineOption; completionHandler: OpaqueCBlock); message 'newRenderPipelineStateWithDescriptor:options:completionHandler:';
    function newComputePipelineStateWithFunction_error (computeFunction: MTLFunctionProtocol; error: NSErrorPtr): MTLComputePipelineStateProtocol; message 'newComputePipelineStateWithFunction:error:';
    function newComputePipelineStateWithFunction_options_reflection_error (computeFunction: MTLFunctionProtocol; options: MTLPipelineOption; reflection:  MTLComputePipelineReflectionPtr; error: NSErrorPtr): MTLComputePipelineStateProtocol; message 'newComputePipelineStateWithFunction:options:reflection:error:';
    procedure newComputePipelineStateWithFunction_completionHandler (computeFunction: MTLFunctionProtocol; completionHandler: OpaqueCBlock); message 'newComputePipelineStateWithFunction:completionHandler:';
    procedure newComputePipelineStateWithFunction_options_completionHandler (computeFunction: MTLFunctionProtocol; options: MTLPipelineOption; completionHandler: OpaqueCBlock); message 'newComputePipelineStateWithFunction:options:completionHandler:';
    function supportsFeatureSet (featureSet: MTLFeatureSet): boolean; message 'supportsFeatureSet:';
  end;
{$endif}

