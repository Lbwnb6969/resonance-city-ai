// RVA 0x8792c0 | Placemaker.Life.BirdFlock$$GetLandingPos
// PDB: BirdFlock_GetLandingPos_m29D97BDB3990AC0642EBC4BFD12590E0DEFD3D97
// Body: [[108792c0, 10879370]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f120 Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
BirdFlock_GetLandingPos_m29D97BDB3990AC0642EBC4BFD12590E0DEFD3D97
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,
          Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *param_2,MethodInfo *param_3)

{
  float fVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  float fVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if ((param_2 != (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) &&
     (param_2->___landing_20 != (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)) {
    pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_2->___landing_20,(MethodInfo *)0x0);
    pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        (MethodInfo *)0x0);
    if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                         (&local_10,pTVar5,(MethodInfo *)0x0);
      local_10.___x_2 =
           (float)((uint)pVVar6->___x_2 ^ __xmm_80000000800000008000000080000000) * __real_3d23d70a;
      local_10.___y_3 = 0.0;
      local_10.___z_4 = 0.0;
      if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        VVar2.___y_3 = 0.0;
        VVar2.___z_4 = 0.0;
        VVar2.___x_2 = local_10.___x_2;
        pVVar6 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                           (&local_10,pTVar4,VVar2,(MethodInfo *)0x0);
        fVar3 = pVVar6->___y_3;
        fVar1 = pVVar6->___z_4;
        __return_storage_ptr__->___x_2 = pVVar6->___x_2;
        __return_storage_ptr__->___y_3 = fVar3;
        __return_storage_ptr__->___z_4 = fVar1;
        return __return_storage_ptr__;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
