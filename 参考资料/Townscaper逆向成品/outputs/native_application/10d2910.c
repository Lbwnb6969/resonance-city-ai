// RVA 0x10d2910 | FuryStudios.FurySDK.Utils.SafeArea$$Update
// PDB: SafeArea_Update_mA6A68474F809046840C4752D7B8640F0C98726EB
// Body: [[110d2910, 110d2a6c]]
// Direct callees:
// 10069600 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 1066d8e0 Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B
// 110d2090 SafeArea_GetDebugSafeArea_m3F28E699C92AFAD1E2E3DF03E51C63D2BE632055
// 110d2690 SafeArea_RefreshSafeArea_m81C253DC642D727DCA829FB30232F859156D60E2
// 1113eef0 Input_GetKeyDownInt_mEAC027107792507CA7F0B1DFBEA4E6289CDCCCBA

void __cdecl
SafeArea_Update_mA6A68474F809046840C4752D7B8640F0C98726EB
          (SafeArea_t2A5ADA7E8D8C5CF656B470D65FC75AB0603DBB58 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  Guid_t *pGVar2;
  int iVar3;
  int iVar4;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar5;
  undefined1 auVar6 [4];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_14 [4];
  float fStack_10;
  float fStack_c;
  float fStack_8;

  if (DAT_11523aab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    DAT_11523aab = '\x01';
  }
  if (param_1->___useDebugSafeArea_15 == false) {
    fVar9 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B
                      ((MethodInfo *)0x0);
    if (__real_3f800000 < fVar9 - param_1->___lastRefreshTime_11) {
      fVar9 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B
                        ((MethodInfo *)0x0);
      param_1->___lastRefreshTime_11 = fVar9;
      if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
          ::__l2::s_Il2CppMethodInitialized == false) {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
        `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized = true;
      }
      if (*(Il2CppObject **)
           Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields ==
          (Il2CppObject *)0x0) {
        iVar3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
        iVar4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
        local_14 = (undefined1  [4])0x0;
        fStack_10 = 0.0;
        fStack_c = 0.0;
        fStack_8 = 0.0;
        TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                  ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_14,0.0,0.0,
                   (float)iVar3,(float)iVar4,(MethodInfo *)0x0);
        auVar6 = local_14;
        fVar9 = fStack_10;
        fVar7 = fStack_c;
        fVar8 = fStack_8;
      }
      else {
        pGVar2 = InterfaceFuncInvoker0<Guid_t>::Invoke
                           ((Guid_t *)local_14,6,
                            IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var
                            ,*(Il2CppObject **)
                              Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var
                              ->static_fields);
        auVar6 = (undefined1  [4])pGVar2->____a_1;
        fVar9 = *(float *)&pGVar2->____b_2;
        fVar7 = *(float *)&pGVar2->____d_4;
        fVar8 = *(float *)&pGVar2->____h_8;
      }
      (param_1->___currentSafeArea_12).___m_XMin_0 = (float)auVar6;
      (param_1->___currentSafeArea_12).___m_YMin_1 = fVar9;
      (param_1->___currentSafeArea_12).___m_Width_2 = fVar7;
      (param_1->___currentSafeArea_12).___m_Height_3 = fVar8;
      SafeArea_RefreshSafeArea_m81C253DC642D727DCA829FB30232F859156D60E2(param_1,(MethodInfo *)0x0);
    }
  }
  if (param_1->___testing_6 != false) {
    bVar1 = Input_GetKeyDownInt_mEAC027107792507CA7F0B1DFBEA4E6289CDCCCBA
                      (param_1->___testKey_7,(MethodInfo *)0x0);
    if (bVar1) {
      param_1->___useDebugSafeArea_15 = true;
      param_1->___debugAreaIndex_16 = (param_1->___debugAreaIndex_16 + 1) % 5;
      pRVar5 = SafeArea_GetDebugSafeArea_m3F28E699C92AFAD1E2E3DF03E51C63D2BE632055
                         ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_14,param_1,
                          (MethodInfo *)0x0);
      fVar9 = pRVar5->___m_YMin_1;
      fVar7 = pRVar5->___m_Width_2;
      fVar8 = pRVar5->___m_Height_3;
      (param_1->___currentSafeArea_12).___m_XMin_0 = pRVar5->___m_XMin_0;
      (param_1->___currentSafeArea_12).___m_YMin_1 = fVar9;
      (param_1->___currentSafeArea_12).___m_Width_2 = fVar7;
      (param_1->___currentSafeArea_12).___m_Height_3 = fVar8;
      SafeArea_RefreshSafeArea_m81C253DC642D727DCA829FB30232F859156D60E2(param_1,(MethodInfo *)0x0);
    }
  }
  return;
}
