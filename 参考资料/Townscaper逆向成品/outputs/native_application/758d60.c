// RVA 0x758d60 | Placemaker.PropPlacement$$set_rotation
// PDB: PropPlacement_set_rotation_mBE4AC0CD8DD1F01908D5AEE6BED3492F9A911EED
// Body: [[10758d60, 10758e40]]
// Direct callees:
// 10195ff0 _CIfmod

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PropPlacement_set_rotation_mBE4AC0CD8DD1F01908D5AEE6BED3492F9A911EED
          (PropPlacement_tD41690F5D140D9B0C43BB94609E32451E0846546 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;

  _CIfmod();
  (param_1->___rotationByte_2).___x_0 =
       (uchar)(int)((float)extraout_ST0 * ___real_3f360b61 + __real_3f000000);
  _CIfmod();
  (param_1->___rotationByte_2).___y_1 =
       (uchar)(int)((float)extraout_ST0_00 * ___real_3f360b61 + __real_3f000000);
  _CIfmod();
  (param_1->___rotationByte_2).___z_2 =
       (uchar)(int)((float)extraout_ST0_01 * ___real_3f360b61 + __real_3f000000);
  return;
}
