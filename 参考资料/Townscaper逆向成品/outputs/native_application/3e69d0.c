// RVA 0x3e69d0 | Placemaker.Ui.UiMaster$$SubscribeToSafeArea
// PDB: UiMaster_SubscribeToSafeArea_m5FC0F32B402B4921AAF28AA0A800584733F167C7
// Body: [[103e69d0, 103e6c24]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10662090 RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
// 106622e0 RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
// 10662cd0 Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78
// 10662d00 Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667850 Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 1066e470 Transform_GetRoot_mAB553501306732D17B508521058BD5D22A759CF0
// 1066e660 Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
UiMaster_SubscribeToSafeArea_m5FC0F32B402B4921AAF28AA0A800584733F167C7
          (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar5;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar6;
  Delegate_t *pDVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar10;
  int iVar11;
  int iVar12;
  Delegate_t *pDVar13;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar14;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_3c;
  undefined1 local_2c [8];
  float fStack_24;
  float local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined1 local_10 [8];
  float local_8;

  if (DAT_1151c8ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass61_0_U3CSubscribeToSafeAreaU3Eb__0_mD403455773B97AADAEEAE4C4D3A7AE13D1328378_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass61_0_t0C8845F2DAAED1195D4AE2E854D231D03387AAF3_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c8ae = '\x01';
  }
  pBVar5 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass61_0_t0C8845F2DAAED1195D4AE2E854D231D03387AAF3_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar5,(MethodInfo *)0x0);
  VVar14 = stack0xfffffff4;
  if (pBVar5 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar5->___name_0 = (String_t *)param_1;
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    pDVar13 = *(Delegate_t **)
               ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                     static_fields + 0xc);
    pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar6,(Il2CppObject *)pBVar5,
               (int)
               U3CU3Ec__DisplayClass61_0_U3CSubscribeToSafeAreaU3Eb__0_mD403455773B97AADAEEAE4C4D3A7AE13D1328378_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    pDVar7 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       (pDVar13,(Delegate_t *)pOVar6,(MethodInfo *)0x0);
    pDVar13 = (Delegate_t *)0x0;
    if (pDVar7 != (Delegate_t *)0x0) {
      if ((Il2CppClass *)pDVar7->_padding_ ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pDVar13 = pDVar7;
      }
      if (pDVar13 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        RaiseInvalidCastException
                  ((Il2CppObject *)pDVar7,
                   Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      }
    }
    *(Delegate_t **)
     ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->static_fields +
     0xc) = pDVar13;
    pSVar1 = pBVar5->___name_0;
    VVar14 = stack0xfffffff4;
    if (pSVar1 != (String_t *)0x0) {
      pTVar8 = Transform_GetRoot_mAB553501306732D17B508521058BD5D22A759CF0
                         ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pSVar1,
                          (MethodInfo *)0x0);
      pRVar9 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
                         ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_2c,
                          (MethodInfo *)0x0);
      local_3c.___m_XMin_0 = pRVar9->___m_XMin_0;
      local_3c.___m_YMin_1 = pRVar9->___m_YMin_1;
      local_3c.___m_Width_2 = pRVar9->___m_Width_2;
      local_3c.___m_Height_3 = pRVar9->___m_Height_3;
      VVar14 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_3c,(MethodInfo *)0x0);
      local_8 = VVar14.___y_1;
      local_1c = CONCAT44(local_8,local_10._4_4_);
      local_14 = 0;
      if (pTVar8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        VVar3.___y_3 = local_8;
        VVar3.___x_2 = (float)local_10._4_4_;
        VVar3.___z_4 = 0.0;
        unique0x100003ef = VVar14;
        pVVar10 = Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_2c + 4),
                             pTVar8,VVar3,(MethodInfo *)0x0);
        local_1c._0_4_ = pVVar10->___x_2;
        local_1c._4_4_ = pVVar10->___y_3;
        join_0x00000008_0x00000000_ =
             Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_3c,(MethodInfo *)0x0);
        iVar11 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
        iVar12 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
        local_20 = 0.0;
        VVar4.___y_3 = local_8 - (float)iVar12;
        VVar4.___x_2 = (float)local_10._4_4_ - (float)iVar11;
        VVar4.___z_4 = 0.0;
        pVVar10 = Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)local_10,pTVar8,
                             VVar4,(MethodInfo *)0x0);
        local_2c._4_4_ = pVVar10->___x_2;
        fStack_24 = pVVar10->___y_3;
        local_8 = local_1c._4_4_ * __real_3e99999a;
        local_10._4_4_ = (float)local_1c * __real_3e99999a;
        VVar2.___y_1 = local_1c._4_4_ * __real_3e99999a;
        VVar2.___x_0 = (float)local_1c * __real_3e99999a;
        RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
                  ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pSVar1,VVar2,
                   (MethodInfo *)0x0);
        local_8 = fStack_24 * __real_3e99999a;
        local_10._4_4_ = (float)local_2c._4_4_ * __real_3e99999a;
        VVar14.___y_1 = fStack_24 * __real_3e99999a;
        VVar14.___x_0 = (float)local_2c._4_4_ * __real_3e99999a;
        RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
                  ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pSVar1,VVar14,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  stack0xfffffff4 = VVar14;
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
