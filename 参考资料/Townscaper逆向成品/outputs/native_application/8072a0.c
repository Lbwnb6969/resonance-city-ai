// RVA 0x8072a0 | Placemaker.Graphs.Qube$$GetNormal
// PDB: Qube_GetNormal_m1BC6DDE7FCB9C14D4892E9F7211F21427CC6BC2D
// Body: [[108072a0, 108072ef]]
// Direct callees:
// 10808710 Qube_SampleNormalCoverage_m484FBAC5DA1586BAB9451351CE3E58E71407465F

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
Qube_GetNormal_m1BC6DDE7FCB9C14D4892E9F7211F21427CC6BC2D
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *pVVar4;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 local_14;

  VVar3.___y_3 = (float)__real_3f000000;
  VVar3.___x_2 = (float)__real_3f000000;
  local_14.___Item2_1 = 0.5;
  VVar3.___z_4 = 0.5;
  pVVar4 = Qube_SampleNormalCoverage_m484FBAC5DA1586BAB9451351CE3E58E71407465F
                     (&local_14,param_1,VVar3,(MethodInfo *)0x0);
  fVar1 = (pVVar4->___Item1_0).___y_3;
  fVar2 = (pVVar4->___Item1_0).___z_4;
  __return_storage_ptr__->___x_2 = (pVVar4->___Item1_0).___x_2;
  __return_storage_ptr__->___y_3 = fVar1;
  __return_storage_ptr__->___z_4 = fVar2;
  return __return_storage_ptr__;
}
