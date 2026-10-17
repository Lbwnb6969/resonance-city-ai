// RVA 0xa04220 | Placemaker.Ui.SavingIndicator$$Update
// PDB: SavingIndicator_Update_m8A605C8DA77ADD9A79CA3D1E9102ED11A043B905
// Body: [[10a04220, 10a0448a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10836f90 ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a44190 Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321
// 10a445f0 Mathf_SmoothStep_m42903D75966D0858460ACDF8CB825B874725FFF6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SavingIndicator_Update_m8A605C8DA77ADD9A79CA3D1E9102ED11A043B905
          (SavingIndicator_t9457FAD85DE82B04815367EDBC5F215E699471B7 *param_1,MethodInfo *param_2)

{
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar1;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar4;
  int iVar5;
  float *pfVar6;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar8;
  undefined1 local_20 [8];
  float fStack_18;
  float fStack_14;
  float local_10;
  float local_c;
  char local_5;

  if (DAT_115201bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_115201bf = '\x01';
  }
  pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  local_c = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  pQVar4 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                     ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)local_20,0.0,0.0,
                      (float)((uint)local_c ^ __xmm_80000000800000008000000080000000) *
                      __real_43340000,(MethodInfo *)0x0);
  if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
              (pTVar3,*pQVar4,(MethodInfo *)0x0);
    local_5 = param_1->___on_7;
    local_10 = param_1->___alpha_4;
    local_c = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
                        ((MethodInfo *)0x0);
    iVar5 = 3;
    if (local_5 == '\0') {
      iVar5 = -2;
    }
    local_10 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321
                         (local_10,(float)iVar5,local_c * __real_40400000,(MethodInfo *)0x0);
    param_1->___alpha_4 = local_10;
    if (param_1->___graphic_6 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___graphic_6,
                 0.0 < local_10,(MethodInfo *)0x0);
      pGVar1 = param_1->___graphic_6;
      if (pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
        pfVar6 = (float *)(**(code **)(pGVar1->_padding_ + 0x16c))
                                    (local_20,pGVar1,*(undefined4 *)(pGVar1->_padding_ + 0x170));
        local_20._0_4_ = *pfVar6;
        local_20._4_4_ = pfVar6[1];
        fStack_18 = pfVar6[2];
        fStack_14 = pfVar6[3];
        local_10 = Mathf_SmoothStep_m42903D75966D0858460ACDF8CB825B874725FFF6
                             (0.0,1.0,param_1->___alpha_4,(MethodInfo *)0x0);
        local_10 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                             (local_10,(MethodInfo *)0x0);
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        CVar2.___g_1 = (float)local_20._4_4_;
        CVar2.___r_0 = (float)local_20._0_4_;
        CVar2.___b_2 = fStack_18;
        CVar2.___a_3 = fStack_14;
        pCVar7 = ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
                           ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)local_20,CVar2,
                            local_10,(MethodInfo *)0x0);
        (**(code **)(pGVar1->_padding_ + 0x174))
                  (pGVar1,pCVar7->___r_0,pCVar7->___g_1,pCVar7->___b_2,pCVar7->___a_3,
                   *(undefined4 *)(pGVar1->_padding_ + 0x178));
        if ((param_1->___on_7 == false) && (param_1->___alpha_4 == ___real_c0000000)) {
          Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                    ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,false,
                     (MethodInfo *)0x0);
        }
        pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                            (MethodInfo *)0x0);
        if (param_1->___anchor_5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pVVar8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                             ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_20 + 4),
                              param_1->___anchor_5,(MethodInfo *)0x0);
          if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                      (pTVar3,*pVVar8,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
