// RVA 0x40f470 | Os.Hex.HexOnionIterator$$get_dualPos2
// PDB: HexOnionIterator_get_dualPos2_mAF7340B572CC5A19444A88CE4590A9726C63686F
// Body: [[1040f470, 1040f484]]
// Direct callees:

int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 __cdecl
HexOnionIterator_get_dualPos2_mAF7340B572CC5A19444A88CE4590A9726C63686F
          (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *param_1,MethodInfo *param_2)

{
  int iVar1;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar2;

  iVar1 = (param_1->____hexPos_5).___x_0;
  iVar2.___x_0 = iVar1 - (param_1->____hexPos_5).___z_2;
  iVar2.___y_1 = (param_1->____hexPos_5).___y_1 - iVar1;
  return iVar2;
}
