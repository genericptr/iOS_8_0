{$define FRAMEWORK_LOADED_OPENGLES}
{$include EAGL.inc}
{$include EAGLDrawable.inc}

// glext is required for *OES suffixed functions
{$include glext.inc}

// define IPHONEALL_GLFUNC to opt into iPhoneAll OpenGL functions
// otherwise use the RTL provided gles**.pp units
{$ifdef IPHONEALL_GLFUNC}
{$include gl.inc}
{$endif}