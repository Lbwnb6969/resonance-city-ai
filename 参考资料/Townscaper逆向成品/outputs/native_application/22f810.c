// RVA 0x22f810 | Placemaker.ByteQube$$op_Equality
// PDB: ByteQube_op_Equality_m0312D2B1297CE58CA873966C66937C60A76541DC
// Body: [[1022f810, 1022f89d]]
// Direct callees:

bool __cdecl
ByteQube_op_Equality_m0312D2B1297CE58CA873966C66937C60A76541DC
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 param_1,
          ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 param_2,MethodInfo *param_3)

{
  uchar uVar1;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 BVar2;

  BVar2 = param_1;
  if (param_1.___v0_0 == param_2.___v0_0) {
    if ((((param_1.___v1_1 == param_2.___v1_1) && (param_1.___v2_2 == param_2.___v2_2)) &&
        (uVar1 = param_1.___v3_3, param_1.___v4_4 = param_2.___v3_3, uVar1 == param_1.___v4_4)) &&
       (((BVar2.___v4_4 == param_2.___v4_4 && (BVar2.___v5_5 == param_2.___v5_5)) &&
        (BVar2.___v6_6 == param_2.___v6_6)))) {
      return BVar2.___v7_7 == param_2.___v7_7;
    }
  }
  return false;
}
