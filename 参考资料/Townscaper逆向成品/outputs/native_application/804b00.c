// RVA 0x804b00 | Placemaker.Props.PropPropeller$$Placemaker.Props.IPropModifier.Apply
// PDB: PropPropeller_Placemaker_Props_IPropModifier_Apply_mFB8990487E434967A9C29016A1821B8DC478A4CF
// Body: [[10804b00, 10804c6e]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a3ded0 GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34

void __cdecl
PropPropeller_Placemaker_Props_IPropModifier_Apply_mFB8990487E434967A9C29016A1821B8DC478A4CF
          (PropPropeller_t7EE18E92A76ECB9800732906E4117BDA2ACF49D5 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,
          Random_tAA667D9E4475C884ADEB5B16274B7D4C4E90CC12 *param_3,
          PropModifierStruct_tEA20DD1E5AC1C0D4BBC7D9B440411A7A5CE1CF53 param_4,MethodInfo *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar6;
  String_t *pSVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar9;
  undefined8 uVar10;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_1c;
  undefined4 local_10;
  float fStack_c;
  float local_8;

  if (DAT_1151f1ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151f1ee = '\x01';
  }
  pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_1c,pTVar5,
                        (MethodInfo *)0x0);
    uVar1 = pVVar6->___x_2;
    uVar2 = pVVar6->___y_3;
    local_8 = pVVar6->___z_4;
    pSVar7 = (String_t *)param_1->___waterSplashEffect_5;
    local_10 = uVar1;
    fStack_c = (float)uVar2;
    if ((float)uVar2 < __real_3fc00000) {
      if (pSVar7 != (String_t *)0x0) {
        pTVar5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                           ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)pSVar7,
                            (MethodInfo *)0x0);
        pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                            (MethodInfo *)0x0);
        if (pTVar8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pVVar6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                             ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_1c,pTVar8,
                              (MethodInfo *)0x0);
          uVar10._0_4_ = pVVar6->___x_2;
          uVar10._4_4_ = pVVar6->___y_3;
          fVar3 = pVVar6->___z_4;
          fStack_c = (float)(undefined4)uVar10;
          local_8 = (float)uVar10._4_4_;
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            uVar10 = CONCAT44(local_8,fStack_c);
          }
          fVar4.___z_2 = fVar3;
          fVar4.___x_0 = (float)(int)uVar10;
          fVar4.___y_1 = (float)(int)((ulonglong)uVar10 >> 0x20);
          pfVar9 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                             (&local_1c,fVar4,0.0,(MethodInfo *)0x0);
          if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                      (pTVar5,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar9,
                       (MethodInfo *)0x0);
            if ((String_t *)param_1->___waterSplashEffect_5 != (String_t *)0x0) {
              pSVar7 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                                 ((String_t *)param_1->___waterSplashEffect_5,(MethodInfo *)0x0);
              if (pSVar7 != (String_t *)0x0) {
                GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                          ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)pSVar7,true,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else if (pSVar7 != (String_t *)0x0) {
      pSVar7 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(pSVar7,(MethodInfo *)0x0);
      if (pSVar7 != (String_t *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)pSVar7,false,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
