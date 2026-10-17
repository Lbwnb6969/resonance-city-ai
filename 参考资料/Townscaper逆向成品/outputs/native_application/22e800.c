// RVA 0x22e800 | Os.Utils.ByteFloat3$$op_Explicit
// PDB: ByteFloat3_op_Explicit_m16E3967F6AD44FF2BBF4EC71D03737DB752DEE3B
// Body: [[1022e800, 1022e898]]
// Direct callees:
// 10a440d0 Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 __cdecl
ByteFloat3_op_Explicit_m16E3967F6AD44FF2BBF4EC71D03737DB752DEE3B
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,MethodInfo *param_2)

{
  int iVar1;
  float fVar2;

  fVar2 = param_1.___y_3 * ___real_43800000;
  *(undefined2 *)param_1.___x_2 = 0;
  *(undefined1 *)((int)param_1.___x_2 + 2) = 0;
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar2,(MethodInfo *)0x0);
  iVar1 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(iVar1,0xff,(MethodInfo *)0x0);
  fVar2 = param_1.___z_4 * ___real_43800000;
  *(char *)param_1.___x_2 = (char)iVar1;
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar2,(MethodInfo *)0x0);
  iVar1 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(iVar1,0xff,(MethodInfo *)0x0);
  fVar2 = (float)param_2 * ___real_43800000;
  *(char *)((int)param_1.___x_2 + 1) = (char)iVar1;
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar2,(MethodInfo *)0x0);
  iVar1 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(iVar1,0xff,(MethodInfo *)0x0);
  *(char *)((int)param_1.___x_2 + 2) = (char)iVar1;
  return param_1.___x_2._0_3_;
}
