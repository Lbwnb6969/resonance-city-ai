// RVA 0x110b7d0 | FuryStudios.FurySDK.Internal.AsyncRequest$$get_IsCompleted
// PDB: AsyncRequest_get_IsCompleted_mFB83A227251A8B46D6D8AA68ED6921D427E9498F
// Body: [[1110b7d0, 1110b7e9]]
// Direct callees:

bool __cdecl
AsyncRequest_get_IsCompleted_mFB83A227251A8B46D6D8AA68ED6921D427E9498F
          (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *param_1,MethodInfo *param_2)

{
  if (param_1->___U3CStateU3Ek__BackingField_0 == 2) {
    return true;
  }
  return param_1->___U3CStateU3Ek__BackingField_0 == 4;
}
