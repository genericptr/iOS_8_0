{ Parsed from SceneKit.framework (iPhoneOS8.2) SceneKitTypes.h }
{ Created on Fri Mar 20 2:11:17 2015 }

{$ifdef TYPES}
type
  SCNVector3 = record
    x, y, z: single;
  end;
type
  SCNVector3Ptr = ^SCNVector3;
type
  SCNVector4 = record
    x, y, z, w: single;
  end;
type
  SCNVector4Ptr = ^SCNVector4;
type
  SCNMatrix4 = record
    m11, m12, m13, m14: single;
    m21, m22, m23, m24: single;
    m31, m32, m33, m34: single;
    m41, m42, m43, m44: single;
  end;
type
  SCNMatrix4Ptr = ^SCNMatrix4;

type
  SCNQuaternion = SCNVector4;
  SCNQuaternionPtr = ^SCNQuaternion;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNMatrix4Identity: SCNMatrix4 { available in 10_10, 8_0 }; cvar; external;
  SCNVector3Zero: SCNVector3 { available in 10_10, 8_0 }; cvar; external;
  SCNVector4Zero: SCNVector4 { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function SCNVector3EqualToVector3(a: SCNVector3; b: SCNVector3): cbool; cdecl; external;
function SCNVector4EqualToVector4(a: SCNVector4; b: SCNVector4): cbool; cdecl; external;
function SCNMatrix4MakeRotation(angle: single; x: single; y: single; z: single): SCNMatrix4; cdecl; external; { available in 10_10, 8_0 }
function SCNMatrix4Scale(mat: SCNMatrix4; x: single; y: single; z: single): SCNMatrix4; cdecl; external; { available in 10_10, 8_0 }
function SCNMatrix4Rotate(mat: SCNMatrix4; angle: single; x: single; y: single; z: single): SCNMatrix4; cdecl; external; { available in 10_10, 8_0 }
function SCNMatrix4Invert(mat: SCNMatrix4): SCNMatrix4; cdecl; external; { available in 10_10, 8_0 }
function SCNMatrix4Mult(matA: SCNMatrix4; matB: SCNMatrix4): SCNMatrix4; cdecl; external; { available in 10_10, 8_0 }
function SCNMatrix4IsIdentity(mat: SCNMatrix4): cbool; cdecl; external; { available in 10_10, 8_0 }
function SCNMatrix4EqualToMatrix4(matA: SCNMatrix4; matB: SCNMatrix4): cbool; cdecl; external; { available in 10_10, 8_0 }
function SCNMatrix4ToGLKMatrix4(mat: SCNMatrix4): GLKMatrix4; cdecl; external; { available in 10_10, 8_0 }
function SCNMatrix4FromGLKMatrix4(mat: GLKMatrix4): SCNMatrix4; cdecl; external; { available in 10_10, 8_0 }
{$endif}

{$ifdef __OBJC__}
{$ifdef CLASSES}

type
  NSValue_SceneKitAdditions = objccategory external name 'SceneKitAdditions' (NSValue)
    class function valueWithSCNVector3 (v: SCNVector3): NSValue; message 'valueWithSCNVector3:';
    class function valueWithSCNVector4 (v: SCNVector4): NSValue; message 'valueWithSCNVector4:';
    class function valueWithSCNMatrix4 (v: SCNMatrix4): NSValue; message 'valueWithSCNMatrix4:'; { available in 10_10, 8_0 }
    function SCNVector3Value: SCNVector3; message 'SCNVector3Value';
    function SCNVector4Value: SCNVector4; message 'SCNVector4Value';
    function SCNMatrix4Value: SCNMatrix4; message 'SCNMatrix4Value';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
const
  SCNProgramCompilationError = 1;
{$endif}

{$endif}
