{ Parsed from OpenGLES.framework (iPhoneOS8.2) glext.h }
{ Created on Fri Mar 20 2:10:59 2015 }

{$ifndef ES1_GLEXT_H_GUARD}

{$ifdef TYPES}
{$define GL_APPLE_copy_texture_levels}
{$define GL_APPLE_framebuffer_multisample}
{$define GL_APPLE_texture_2D_limited_npot}
{$define GL_APPLE_texture_format_BGRA8888}
{$define GL_APPLE_texture_max_level}
{$define GL_EXT_blend_minmax}
{$define GL_EXT_debug_label}
{$define GL_EXT_debug_marker}
{$define GL_EXT_discard_framebuffer}
{$define GL_EXT_map_buffer_range}
{$define GL_EXT_read_format_bgra}
{$define GL_EXT_texture_filter_anisotropic}
{$define GL_EXT_texture_lod_bias}
{$define GL_EXT_texture_storage}
{$define GL_IMG_read_format}
{$define GL_IMG_texture_compression_pvrtc}
{$define GL_OES_blend_equation_separate}
{$define GL_OES_blend_func_separate}
{$define GL_OES_blend_subtract}
{$define GL_OES_depth24}
{$define GL_OES_element_index_uint}
{$define GL_OES_fbo_render_mipmap}
{$define GL_OES_framebuffer_object}
{$define GL_OES_mapbuffer}
{$define GL_OES_packed_depth_stencil}
{$define GL_OES_rgb8_rgba8}
{$define GL_OES_stencil_wrap}
{$define GL_OES_stencil8}
{$define GL_OES_texture_mirrored_repeat}
{$define GL_OES_vertex_array_object}
{$endif}

{$if defined(GL_APPLE_framebuffer_multisample)}
{$ifdef TYPES}
const
  GL_RENDERBUFFER_SAMPLES_APPLE = $8CAB;
  GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE = $8D56;
  GL_MAX_SAMPLES_APPLE = $8D57;
  GL_READ_FRAMEBUFFER_APPLE = $8CA8;
  GL_DRAW_FRAMEBUFFER_APPLE = $8CA9;
  GL_DRAW_FRAMEBUFFER_BINDING_APPLE = $8CA6;
  GL_READ_FRAMEBUFFER_BINDING_APPLE = $8CAA;
{$endif}

{$endif}

{$if defined(GL_APPLE_texture_format_BGRA8888)}
{$ifdef TYPES}
const
  GL_BGRA_EXT = $80E1;
{$endif}

{$endif}

{$if defined(GL_APPLE_texture_format_BGRA8888) or defined(GL_IMG_read_format)}
{$ifdef TYPES}
const
  GL_BGRA = $80E1;
{$endif}

{$endif}

{$if defined(GL_APPLE_texture_max_level)}
{$ifdef TYPES}
const
  GL_TEXTURE_MAX_LEVEL_APPLE = $813D;
{$endif}

{$endif}

{$if defined(GL_EXT_blend_minmax)}
{$ifdef TYPES}
const
  GL_MIN_EXT = $8007;
  GL_MAX_EXT = $8008;
{$endif}

{$endif}

{$if defined(GL_EXT_debug_label)}
{$ifdef TYPES}
const
  GL_BUFFER_OBJECT_EXT = $9151;
  GL_VERTEX_ARRAY_OBJECT_EXT = $9154;
{$endif}

{$endif}

{$if defined(GL_EXT_discard_framebuffer)}
{$ifdef TYPES}
const
  GL_COLOR_EXT = $1800;
  GL_DEPTH_EXT = $1801;
  GL_STENCIL_EXT = $1802;
{$endif}

{$endif}

{$if defined(GL_EXT_map_buffer_range)}
{$ifdef TYPES}
const
  GL_MAP_READ_BIT_EXT = $0001;
  GL_MAP_WRITE_BIT_EXT = $0002;
  GL_MAP_INVALIDATE_RANGE_BIT_EXT = $0004;
  GL_MAP_INVALIDATE_BUFFER_BIT_EXT = $0008;
  GL_MAP_FLUSH_EXPLICIT_BIT_EXT = $0010;
  GL_MAP_UNSYNCHRONIZED_BIT_EXT = $0020;
{$endif}

{$endif}

{$if defined(GL_EXT_read_format_bgra)}
{$ifdef TYPES}
const
  GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT = $8365;
  GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT = $8366;
  GL_UNSIGNED_SHORT_1_5_5_5_REV = $8366;
{$endif}

{$endif}

{$if defined(GL_EXT_read_format_bgra) or defined(GL_IMG_read_format)}
{$ifdef TYPES}
const
  GL_UNSIGNED_SHORT_4_4_4_4_REV = $8365;
{$endif}

{$endif}

{$if defined(GL_EXT_texture_filter_anisotropic)}
{$ifdef TYPES}
const
  GL_TEXTURE_MAX_ANISOTROPY_EXT = $84FE;
  GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT = $84FF;
{$endif}

{$endif}

{$if defined(GL_EXT_texture_lod_bias)}
{$ifdef TYPES}
const
  GL_MAX_TEXTURE_LOD_BIAS_EXT = $84FD;
  GL_TEXTURE_FILTER_CONTROL_EXT = $8500;
  GL_TEXTURE_LOD_BIAS_EXT = $8501;
{$endif}

{$endif}

{$if defined(GL_EXT_texture_storage)}
{$ifdef TYPES}
const
  GL_TEXTURE_IMMUTABLE_FORMAT_EXT = $912F;
  GL_ALPHA8_EXT = $803C;
  GL_LUMINANCE8_EXT = $8040;
  GL_LUMINANCE8_ALPHA8_EXT = $8045;
  GL_BGRA8_EXT = $93A1;
{$endif}

{$endif}

{$if defined(GL_IMG_read_format)}
{$ifdef TYPES}
const
  GL_BGRA_IMG = $80E1;
  GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG = $8365;
{$endif}

{$endif}

{$if defined(GL_IMG_texture_compression_pvrtc)}
{$ifdef TYPES}
const
  GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG = $8C00;
  GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG = $8C01;
  GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG = $8C02;
  GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG = $8C03;
{$endif}

{$endif}

{$if defined(GL_OES_blend_equation_separate)}
{$ifdef TYPES}
const
  GL_BLEND_EQUATION_RGB_OES = $8009;
  GL_BLEND_EQUATION_ALPHA_OES = $883D;
{$endif}

{$endif}

{$if defined(GL_OES_blend_func_separate)}
{$ifdef TYPES}
const
  GL_BLEND_DST_RGB_OES = $80C8;
  GL_BLEND_SRC_RGB_OES = $80C9;
  GL_BLEND_DST_ALPHA_OES = $80CA;
  GL_BLEND_SRC_ALPHA_OES = $80CB;
{$endif}

{$endif}

{$if defined(GL_OES_blend_subtract)}
{$ifdef TYPES}
const
  GL_BLEND_EQUATION_OES = $8009;
  GL_FUNC_ADD_OES = $8006;
  GL_FUNC_SUBTRACT_OES = $800A;
  GL_FUNC_REVERSE_SUBTRACT_OES = $800B;
{$endif}

{$endif}

{$if defined(GL_OES_depth24)}
{$ifdef TYPES}
const
  GL_DEPTH_COMPONENT24_OES = $81A6;
{$endif}

{$endif}

{$if defined(GL_OES_element_index_uint)}
{$ifdef TYPES}
const
  GL_UNSIGNED_INT_OES = $1405;
{$endif}

{$endif}

{$if defined(GL_OES_framebuffer_object)}
{$ifdef TYPES}
const
  GL_FRAMEBUFFER_OES = $8D40;
  GL_RENDERBUFFER_OES = $8D41;
  GL_RGBA4_OES = $8056;
  GL_RGB5_A1_OES = $8057;
  GL_RGB565_OES = $8D62;
  GL_DEPTH_COMPONENT16_OES = $81A5;
  GL_RENDERBUFFER_WIDTH_OES = $8D42;
  GL_RENDERBUFFER_HEIGHT_OES = $8D43;
  GL_RENDERBUFFER_INTERNAL_FORMAT_OES = $8D44;
  GL_RENDERBUFFER_RED_SIZE_OES = $8D50;
  GL_RENDERBUFFER_GREEN_SIZE_OES = $8D51;
  GL_RENDERBUFFER_BLUE_SIZE_OES = $8D52;
  GL_RENDERBUFFER_ALPHA_SIZE_OES = $8D53;
  GL_RENDERBUFFER_DEPTH_SIZE_OES = $8D54;
  GL_RENDERBUFFER_STENCIL_SIZE_OES = $8D55;
  GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES = $8CD0;
  GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES = $8CD1;
  GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES = $8CD2;
  GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES = $8CD3;
  GL_COLOR_ATTACHMENT0_OES = $8CE0;
  GL_DEPTH_ATTACHMENT_OES = $8D00;
  GL_STENCIL_ATTACHMENT_OES = $8D20;
  GL_FRAMEBUFFER_COMPLETE_OES = $8CD5;
  GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES = $8CD6;
  GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES = $8CD7;
  GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES = $8CD9;
  GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES = $8CDA;
  GL_FRAMEBUFFER_UNSUPPORTED_OES = $8CDD;
  GL_FRAMEBUFFER_BINDING_OES = $8CA6;
  GL_RENDERBUFFER_BINDING_OES = $8CA7;
  GL_MAX_RENDERBUFFER_SIZE_OES = $84E8;
  GL_INVALID_FRAMEBUFFER_OPERATION_OES = $0506;
{$endif}

{$endif}

{$if defined(GL_OES_mapbuffer)}
{$ifdef TYPES}
const
  GL_WRITE_ONLY_OES = $88B9;
  GL_BUFFER_ACCESS_OES = $88BB;
  GL_BUFFER_MAPPED_OES = $88BC;
  GL_BUFFER_MAP_POINTER_OES = $88BD;
{$endif}

{$endif}

{$if defined(GL_OES_packed_depth_stencil)}
{$ifdef TYPES}
const
  GL_DEPTH_STENCIL_OES = $84F9;
  GL_UNSIGNED_INT_24_8_OES = $84FA;
  GL_DEPTH24_STENCIL8_OES = $88F0;
{$endif}

{$endif}

{$if defined(GL_OES_rgb8_rgba8)}
{$ifdef TYPES}
const
  GL_RGB8_OES = $8051;
  GL_RGBA8_OES = $8058;
{$endif}

{$endif}

{$if defined(GL_OES_stencil_wrap)}
{$ifdef TYPES}
const
  GL_INCR_WRAP_OES = $8507;
  GL_DECR_WRAP_OES = $8508;
{$endif}

{$endif}

{$if defined(GL_OES_stencil8)}
{$ifdef TYPES}
const
  GL_STENCIL_INDEX8_OES = $8D48;
{$endif}

{$endif}

{$if defined(GL_OES_texture_mirrored_repeat)}
{$ifdef TYPES}
const
  GL_MIRRORED_REPEAT_OES = $8370;
{$endif}

{$endif}

{$if defined(GL_OES_vertex_array_object)}
{$ifdef TYPES}
const
  GL_VERTEX_ARRAY_BINDING_OES = $85B5;
{$endif}

{$endif}

{$if defined(GL_APPLE_copy_texture_levels)}
{$ifdef FUNCTIONS}
function glCopyTextureLevelsAPPLE(destinationTexture: GLuint; sourceTexture: GLuint; sourceBaseLevel: GLint; sourceLevelCount: GLsizei): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_6_0 }
{$endif}

{$endif}

{$if defined(GL_APPLE_framebuffer_multisample)}
{$ifdef FUNCTIONS}
function glRenderbufferStorageMultisampleAPPLE(target: GLenum; samples: GLsizei; internalformat: GLenum; width: GLsizei; height: GLsizei): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function glResolveMultisampleFramebufferAPPLE: GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
{$endif}

{$endif}

{$if defined(GL_EXT_debug_label)}
{$ifdef FUNCTIONS}
function glLabelObjectEXT(type_: GLenum; object_: GLuint; length: GLsizei; label_: PChar): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
function glGetObjectLabelEXT(type_: GLenum; object_: GLuint; bufSize: GLsizei; length: GLsizeiPtr; label_: PChar): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
{$endif}

{$endif}

{$if defined(GL_EXT_debug_marker)}
{$ifdef FUNCTIONS}
function glInsertEventMarkerEXT(length: GLsizei; marker: PChar): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
function glPushGroupMarkerEXT(length: GLsizei; marker: PChar): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
function glPopGroupMarkerEXT: GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
{$endif}

{$endif}

{$if defined(GL_EXT_discard_framebuffer)}
{$ifdef FUNCTIONS}
function glDiscardFramebufferEXT(target: GLenum; numAttachments: GLsizei; attachments: GLenumPtr): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
{$endif}

{$endif}

{$if defined(GL_EXT_map_buffer_range)}
{$ifdef FUNCTIONS}
function glMapBufferRangeEXT(target: GLenum; offset: GLintptr; length: GLsizeiptr; access: GLbitfield): GLvoidPtr; cdecl; external; { available starting in __MAC_NA,__IPHONE_6_0 }
function glFlushMappedBufferRangeEXT(target: GLenum; offset: GLintptr; length: GLsizeiptr): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_6_0 }
{$endif}

{$endif}

{$if defined(GL_EXT_texture_storage)}
{$ifdef FUNCTIONS}
function glTexStorage2DEXT(target: GLenum; levels: GLsizei; internalformat: GLenum; width: GLsizei; height: GLsizei): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_6_0 }
{$endif}

{$endif}

{$if defined(GL_OES_blend_equation_separate)}
{$ifdef FUNCTIONS}
function glBlendEquationSeparateOES(modeRGB: GLenum; modeAlpha: GLenum): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_3_1 }
{$endif}

{$endif}

{$if defined(GL_OES_blend_func_separate)}
{$ifdef FUNCTIONS}
function glBlendFuncSeparateOES(srcRGB: GLenum; dstRGB: GLenum; srcAlpha: GLenum; dstAlpha: GLenum): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_3_1 }
{$endif}

{$endif}

{$if defined(GL_OES_blend_subtract)}
{$ifdef FUNCTIONS}
function glBlendEquationOES(mode: GLenum): GLvoid; cdecl; external;
{$endif}

{$endif}

{$if defined(GL_OES_framebuffer_object)}
{$ifdef FUNCTIONS}
function glIsRenderbufferOES(renderbuffer: GLuint): GLboolean; cdecl; external;
function glBindRenderbufferOES(target: GLenum; renderbuffer: GLuint): GLvoid; cdecl; external;
function glDeleteRenderbuffersOES(n: GLsizei; renderbuffers: GLuintPtr): GLvoid; cdecl; external;
function glGenRenderbuffersOES(n: GLsizei; renderbuffers: GLuintPtr): GLvoid; cdecl; external;
function glRenderbufferStorageOES(target: GLenum; internalformat: GLenum; width: GLsizei; height: GLsizei): GLvoid; cdecl; external;
function glGetRenderbufferParameterivOES(target: GLenum; pname: GLenum; params: GLintPtr): GLvoid; cdecl; external;
function glIsFramebufferOES(framebuffer: GLuint): GLboolean; cdecl; external;
function glBindFramebufferOES(target: GLenum; framebuffer: GLuint): GLvoid; cdecl; external;
function glDeleteFramebuffersOES(n: GLsizei; framebuffers: GLuintPtr): GLvoid; cdecl; external;
function glGenFramebuffersOES(n: GLsizei; framebuffers: GLuintPtr): GLvoid; cdecl; external;
function glCheckFramebufferStatusOES(target: GLenum): GLenum; cdecl; external;
function glFramebufferRenderbufferOES(target: GLenum; attachment: GLenum; renderbuffertarget: GLenum; renderbuffer: GLuint): GLvoid; cdecl; external;
function glFramebufferTexture2DOES(target: GLenum; attachment: GLenum; textarget: GLenum; texture: GLuint; level: GLint): GLvoid; cdecl; external;
function glGetFramebufferAttachmentParameterivOES(target: GLenum; attachment: GLenum; pname: GLenum; params: GLintPtr): GLvoid; cdecl; external;
function glGenerateMipmapOES(target: GLenum): GLvoid; cdecl; external;
{$endif}

{$endif}

{$if defined(GL_OES_mapbuffer)}
{$ifdef FUNCTIONS}
function glGetBufferPointervOES(target: GLenum; pname: GLenum; params: GLvoidPtr): GLvoid; cdecl; external;
function glMapBufferOES(target: GLenum; access: GLenum): GLvoidPtr; cdecl; external;
function glUnmapBufferOES(target: GLenum): GLboolean; cdecl; external;
{$endif}

{$endif}

{$if defined(GL_OES_vertex_array_object)}
{$ifdef FUNCTIONS}
function glBindVertexArrayOES(array_: GLuint): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function glDeleteVertexArraysOES(n: GLsizei; arrays: GLuintPtr): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function glGenVertexArraysOES(n: GLsizei; arrays: GLuintPtr): GLvoid; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function glIsVertexArrayOES(array_: GLuint): GLboolean; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
{$endif}

{$endif}

{$endif}
