// RVA 0xa04890 | Os.Utils.SbyteFloat3$$op_Explicit
// PDB: SbyteFloat3_op_Explicit_mFD5BFC3BA7323F89F0743F2C4E85DEDB6901C6A6
// Body: [[10a04890, 10a04901]]
// Direct callees:
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 __cdecl
SbyteFloat3_op_Explicit_mFD5BFC3BA7323F89F0743F2C4E85DEDB6901C6A6
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,MethodInfo *param_2)

{
  int iVar1;
  float fVar2;

  fVar2 = param_1.___y_3 * __real_437e0000;
  *(undefined2 *)param_1.___x_2 = 0;
  *(undefined1 *)((int)param_1.___x_2 + 2) = 0;
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar2,(MethodInfo *)0x0);
  fVar2 = param_1.___z_4 * __real_437e0000;
  *(char *)param_1.___x_2 = (char)iVar1;
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar2,(MethodInfo *)0x0);
  fVar2 = (float)param_2 * __real_437e0000;
  *(char *)((int)param_1.___x_2 + 1) = (char)iVar1;
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar2,(MethodInfo *)0x0);
  *(char *)((int)param_1.___x_2 + 2) = (char)iVar1;
  return param_1.___x_2._0_3_;
}
