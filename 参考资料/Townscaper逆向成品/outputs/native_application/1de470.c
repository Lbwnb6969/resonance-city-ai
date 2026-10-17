// RVA 0x1de470 | Placemaker.Ui.ScreenshotSwitch.<>c__DisplayClass21_0$$<SubscribeButton>b__0
// PDB: U3CU3Ec__DisplayClass21_0_U3CSubscribeButtonU3Eb__0_m2468204084CF4E3E38453B51D1CBCFBF2A6584AA
// Body: [[101de470, 101de5f1]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10836f90 ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C

void __cdecl
U3CU3Ec__DisplayClass21_0_U3CSubscribeButtonU3Eb__0_m2468204084CF4E3E38453B51D1CBCFBF2A6584AA
          (U3CU3Ec__DisplayClass21_0_t4A00128D1E9729945A84BD9DB26EED9ED3248259 *param_1,
          float param_2,MethodInfo *param_3)

{
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar1;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  float *pfVar5;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar6;
  float fVar7;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_2c;
  undefined8 local_1c;
  float local_14;
  undefined8 local_10;
  float local_8;

  if (DAT_1151b007 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151b007 = '\x01';
  }
  if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___child_0 !=
      (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___child_0,
                        (MethodInfo *)0x0);
    local_10._0_4_ = (param_1->___maxScale_2).___x_2;
    local_10._4_4_ = (param_1->___maxScale_2).___y_3;
    local_8 = (param_1->___maxScale_2).___z_4;
    local_14 = (param_1->___minScale_1).___z_4;
    local_1c._0_4_ = (param_1->___minScale_1).___x_2;
    local_1c._4_4_ = (param_1->___minScale_1).___y_3;
    fVar7 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(param_2,(MethodInfo *)0x0);
    local_2c.___g_1 = ((float)local_10 - (float)local_1c) * fVar7 + (float)local_1c;
    local_2c.___b_2 = (local_10._4_4_ - local_1c._4_4_) * fVar7 + local_1c._4_4_;
    local_2c.___a_3 = (local_8 - local_14) * fVar7 + local_14;
    if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar3.___y_3 = local_2c.___b_2;
      VVar3.___x_2 = local_2c.___g_1;
      VVar3.___z_4 = local_2c.___a_3;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (pTVar4,VVar3,(MethodInfo *)0x0);
      pGVar1 = param_1->___graphic_3;
      if (pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
        pfVar5 = (float *)(**(code **)(pGVar1->_padding_ + 0x16c))
                                    (&local_2c,pGVar1,*(undefined4 *)(pGVar1->_padding_ + 0x170));
        local_2c.___r_0 = *pfVar5;
        local_2c.___g_1 = pfVar5[1];
        local_2c.___b_2 = pfVar5[2];
        local_2c.___a_3 = pfVar5[3];
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        CVar2.___g_1 = local_2c.___g_1;
        CVar2.___r_0 = local_2c.___r_0;
        CVar2.___b_2 = local_2c.___b_2;
        CVar2.___a_3 = local_2c.___a_3;
        pCVar6 = ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
                           (&local_2c,CVar2,param_2,(MethodInfo *)0x0);
        (**(code **)(pGVar1->_padding_ + 0x174))
                  (pGVar1,pCVar6->___r_0,pCVar6->___g_1,pCVar6->___b_2,pCVar6->___a_3,
                   *(undefined4 *)(pGVar1->_padding_ + 0x178));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
