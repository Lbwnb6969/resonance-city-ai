// RVA 0x4fa800 | Placemaker.Ui.LoadingUi$$OnRectTransformDimensionsChange
// PDB: LoadingUi_OnRectTransformDimensionsChange_m29212071AA473D770C0DBB5B365B72EB07600FC8
// Body: [[104fa800, 104fa9b6]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1490 AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10661ea0 RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
// 106625b0 RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10837060 ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
// 10a44170 Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14

void __cdecl
LoadingUi_OnRectTransformDimensionsChange_m29212071AA473D770C0DBB5B365B72EB07600FC8
          (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar4;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar5;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar6;
  float fVar7;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_1c;
  float local_c;
  float local_8;

  if (DAT_1151d27d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_1151d27d = '\x01';
  }
  if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___logoContainer_6 !=
      (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___logoContainer_6,(MethodInfo *)0x0);
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pRVar5 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
      if (*(Il2CppClass **)pTVar3 ==
          RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
        pRVar5 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar3;
      }
      if (pRVar5 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
        pRVar4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                           (&local_1c,pRVar5,(MethodInfo *)0x0);
        local_2c = pRVar4->___m_XMin_0;
        fStack_28 = pRVar4->___m_YMin_1;
        fStack_24 = pRVar4->___m_Width_2;
        fStack_20 = pRVar4->___m_Height_3;
        local_c = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                            ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&local_2c,
                             (MethodInfo *)0x0);
        if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pRVar5 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
          if (*(Il2CppClass **)pTVar2 ==
              RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
            pRVar5 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar2;
          }
          if (pRVar5 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
            VVar6 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                              (pRVar5,(MethodInfo *)0x0);
            local_8 = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                                ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&local_2c,
                                 (MethodInfo *)0x0);
            local_8 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                                (local_8,param_1->___minWidth_18,(MethodInfo *)0x0);
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            VVar6 = ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
                              (VVar6,local_8,(MethodInfo *)0x0);
            RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
                      (pRVar5,VVar6,(MethodInfo *)0x0);
            fVar7 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
                              (1.0,local_c / param_1->___minWidth_18,(MethodInfo *)0x0);
            if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___logoContainer_6
                != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
              pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                  param_1->___logoContainer_6,(MethodInfo *)0x0);
              local_1c.___m_Height_3 = 1.0;
              local_1c.___m_YMin_1 = fVar7;
              local_1c.___m_Width_2 = fVar7;
              if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                VVar1.___y_3 = fVar7;
                VVar1.___x_2 = fVar7;
                VVar1.___z_4 = 1.0;
                Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                          (pTVar2,VVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
