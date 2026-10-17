// RVA 0xa004e0 | Placemaker.Ui.SaveMenu$$SetGridRect
// PDB: SaveMenu_SetGridRect_m782135A6A01925CDF23EB6F7DC5B96C5634E6D50
// Body: [[10a004e0, 10a0065b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1490 AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 106625b0 RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 107c3040 GridLayoutGroup_set_constraintCount_mDA9246D502A94EAADE8554BEE7535649BC6995A6
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E

void __cdecl
SaveMenu_SetGridRect_m782135A6A01925CDF23EB6F7DC5B96C5634E6D50
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  GridLayoutGroup_tE25FFEE93AF1291734B4EB8DA986D23A500E7C28 *pGVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar5;
  int iVar6;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar7;
  float fVar8;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_14;

  if (DAT_11520198 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_11520198 = '\x01';
  }
  if (param_1->___grid_26 != (GridLayoutGroup_tE25FFEE93AF1291734B4EB8DA986D23A500E7C28 *)0x0) {
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___grid_26,
                        (MethodInfo *)0x0);
    if (param_1->___grid_26 != (GridLayoutGroup_tE25FFEE93AF1291734B4EB8DA986D23A500E7C28 *)0x0) {
      pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___grid_26
                          ,(MethodInfo *)0x0);
      if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pTVar4 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                           (pTVar4,(MethodInfo *)0x0);
        if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar4,
                              (MethodInfo *)0x0);
          if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
            if (*(Il2CppClass **)pTVar4 ==
                RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
              pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar4;
            }
            if (pRVar7 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
              pRVar5 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                                 (&local_14,pRVar7,(MethodInfo *)0x0);
              local_24 = pRVar5->___m_XMin_0;
              fStack_20 = pRVar5->___m_YMin_1;
              fStack_1c = pRVar5->___m_Width_2;
              fStack_18 = pRVar5->___m_Height_3;
              local_14.___m_Width_2 =
                   AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                             ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&local_24,
                              (MethodInfo *)0x0);
              local_14.___m_Height_3 = 0.0;
              if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
                if (*(Il2CppClass **)pTVar3 ==
                    RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
                  pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar3;
                }
                if (pRVar7 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                  VVar2.___y_1 = 0.0;
                  VVar2.___x_0 = local_14.___m_Width_2;
                  RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
                            (pRVar7,VVar2,(MethodInfo *)0x0);
                  if (param_1->___grid_26 !=
                      (GridLayoutGroup_tE25FFEE93AF1291734B4EB8DA986D23A500E7C28 *)0x0) {
                    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                        param_1->___grid_26,(MethodInfo *)0x0);
                    if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                      pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
                      if (*(Il2CppClass **)pTVar3 ==
                          RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var
                         ) {
                        pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar3;
                      }
                      if (pRVar7 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)
                      {
                        pRVar5 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                                           (&local_14,pRVar7,(MethodInfo *)0x0);
                        pGVar1 = param_1->___grid_26;
                        local_34 = pRVar5->___m_XMin_0;
                        fStack_30 = pRVar5->___m_YMin_1;
                        fStack_2c = pRVar5->___m_Width_2;
                        fStack_28 = pRVar5->___m_Height_3;
                        fVar8 = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                                          ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)
                                           &local_34,(MethodInfo *)0x0);
                        if (param_1->___grid_26 !=
                            (GridLayoutGroup_tE25FFEE93AF1291734B4EB8DA986D23A500E7C28 *)0x0) {
                          iVar6 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                                            (fVar8 / (param_1->___grid_26->___m_CellSize_14).___x_0,
                                             (MethodInfo *)0x0);
                          if (pGVar1 != (GridLayoutGroup_tE25FFEE93AF1291734B4EB8DA986D23A500E7C28 *
                                        )0x0) {
                            GridLayoutGroup_set_constraintCount_mDA9246D502A94EAADE8554BEE7535649BC6995A6
                                      (pGVar1,iVar6,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
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
