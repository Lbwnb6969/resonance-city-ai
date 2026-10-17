// RVA 0x87ff10 | Placemaker.Life.BirdLanding$$get_pos
// PDB: BirdLanding_get_pos_mFEAFD0CE24293167DABA18669B4F4AC98A0D8FF2
// Body: [[1087ff10, 1087ff51]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
BirdLanding_get_pos_mFEAFD0CE24293167DABA18669B4F4AC98A0D8FF2
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       (&local_10,pTVar3,(MethodInfo *)0x0);
    fVar2 = pVVar4->___y_3;
    fVar1 = pVVar4->___z_4;
    __return_storage_ptr__->___x_2 = pVVar4->___x_2;
    __return_storage_ptr__->___y_3 = fVar2;
    __return_storage_ptr__->___z_4 = fVar1;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
