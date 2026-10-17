// RVA 0x9c98e0 | Placemaker.Ui.UpdateState.<>c__DisplayClass37_0$$<SubscribeScale>b__0
// PDB: U3CU3Ec__DisplayClass37_0_U3CSubscribeScaleU3Eb__0_mAF851C6B0B1B7609071E0920640E2FBEBE2E37F9
// Body: [[109c98e0, 109c9997]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a43e60 Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E

void __cdecl
U3CU3Ec__DisplayClass37_0_U3CSubscribeScaleU3Eb__0_mAF851C6B0B1B7609071E0920640E2FBEBE2E37F9
          (U3CU3Ec__DisplayClass37_0_t424EF60B8E0D13E9B3717B606909EEA20A65F9A5 *param_1,
          float param_2,MethodInfo *param_3)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar2;
  float fVar3;
  float fVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined8 local_10;
  float local_8;

  if (param_1->___transform_0 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                       (&local_1c,param_1->___transform_0,(MethodInfo *)0x0);
    local_10._0_4_ = pVVar2->___x_2;
    local_10._4_4_ = pVVar2->___y_3;
    fVar3 = pVVar2->___z_4;
    fVar4 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                      (param_1->___scale0_1,param_1->___scale1_2,param_2,(MethodInfo *)0x0);
    if (param_1->___x_3 != false) {
      local_10 = CONCAT44(local_10._4_4_,fVar4);
    }
    if (param_1->___y_4 != false) {
      local_10 = CONCAT44(fVar4,(undefined4)local_10);
    }
    if (param_1->___z_5 != false) {
      fVar3 = fVar4;
      local_8 = fVar4;
    }
    if (param_1->___transform_0 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar1.___z_4 = fVar3;
      VVar1.___x_2 = (float)(undefined4)local_10;
      VVar1.___y_3 = (float)local_10._4_4_;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (param_1->___transform_0,VVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
