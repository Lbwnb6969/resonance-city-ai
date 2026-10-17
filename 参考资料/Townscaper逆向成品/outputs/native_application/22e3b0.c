// RVA 0x22e3b0 | Os.Utils.ByteFloat2$$op_Explicit
// PDB: ByteFloat2_op_Explicit_m29762B9041FB6DC4759EB74BCBE1EDCAD021293A
// Body: [[1022e3b0, 1022e415]]
// Direct callees:
// 10a440d0 Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581 __cdecl
ByteFloat2_op_Explicit_m29762B9041FB6DC4759EB74BCBE1EDCAD021293A
          (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_1,MethodInfo *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 local_8;

  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_1.___x_0 * ___real_43800000,(MethodInfo *)0x0);
  iVar1 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(iVar1,0xff,(MethodInfo *)0x0);
  iVar2 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_1.___y_1 * ___real_43800000,(MethodInfo *)0x0);
  iVar2 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(iVar2,0xff,(MethodInfo *)0x0);
  local_8._1_1_ = (uchar)iVar2;
  local_8._0_1_ = (uchar)iVar1;
  return local_8;
}
