// RVA 0x10ce580 | FuryStudios.FurySDK.Utils.DebugMenu$$Draw
// PDB: DebugMenu_Draw_m836C68C45D6A313101A6ECE9B079C566CCE38E35
// Body: [[110ce580, 110ce8b7]]
// Direct callees:
// 1003e130 Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
// 1003e660 Invoke
// 1003e6d0 IsInstClass
// 1003e770 SetAt
// 1003f250 CastclassClass
// 1003fa10 List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e500 IsInst
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d1df0 ControllerSelection_get_type_m6AC6176846B43F7E596DA48E8780F05DCFD3740A
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 110243d0 GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0
// 110246e0 GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661
// 11024c70 GUILayout_BeginScrollView_m605976F974526E1D17F6555A35B6CCBBE7ADB492
// 11024f50 GUILayout_BeginVertical_m4609A5F918583C9D6AA571FABAADDC0F0A54EEF3
// 11026380 GUILayout_Height_m6705C2917595CCEA6D934DBB5DD8399DF6F5E464
// 110263f0 GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502
// 11026540 GUILayout_MaxWidth_mE6C754AB0A4366AB7E0BECE6D85A254CA7E553FB
// 1102fb70 GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F
// 110ce8d2 FUN_110ce8d2

void __cdecl
DebugMenu_Draw_m836C68C45D6A313101A6ECE9B079C566CCE38E35
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,MethodInfo *param_2)

{
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar1;
  String_t *pSVar2;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar3;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 RVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B *pGVar9;
  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *pGVar10;
  Il2CppObject *pIVar11;
  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *pEVar12;
  Il2CppObject *pIVar13;
  Exception_t *pEVar14;
  MethodInfo *pMVar15;
  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B local_74;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_64;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_54;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_44;
  float local_3c;
  float local_38;
  int aiStack_34 [3];
  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *local_28;
  GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *local_24;
  undefined4 local_20;
  Il2CppObject *local_1c;
  int local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__DebugMenu_Draw_m836C68C45D6A313101A6ECE9B079C566CCE38E35;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff80;
  ExceptionList = &pvStack_10;
  puVar5 = &stack0xffffff80;
  if (DAT_11523a76 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_mB8C8A27C6EE4CE2A7FEACFCC6C285A12C5249F1D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m95FF5A5648AA0531AB6C64FA97B2404010F58B83_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m60DFEA5F90B1A4A67702E53ABC1B1CBD77AF0749_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_m7682428CEA645E683C24036BC18A210063AF19D2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
              );
    DAT_11523a76 = '\x01';
    puVar5 = local_14;
  }
  local_14 = puVar5;
  local_20 = 0;
  local_54.___list_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0;
  local_54.___index_1 = 0;
  local_54.___version_2 = 0;
  local_54.___current_3 = (Il2CppObject *)0x0;
  local_18 = 0;
  aiStack_34[1] = 0;
  if (param_1->___U3CActiveU3Ek__BackingField_0 != false) {
    pMVar1 = param_1->___root_2;
    iVar7 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    iVar8 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    local_64.___m_Left_0 = 0.0;
    local_64.___m_Right_1 = 0.0;
    local_64.___m_Top_2 = 0.0;
    local_64.___m_Bottom_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_64,0.0,0.0,(float)iVar7,(float)iVar8,(MethodInfo *)0x0);
    RVar4.___m_YMin_1 = local_64.___m_Right_1;
    RVar4.___m_XMin_0 = local_64.___m_Left_0;
    RVar4.___m_Width_2 = local_64.___m_Top_2;
    RVar4.___m_Height_3._0_2_ = SUB42(local_64.___m_Bottom_3,0);
    RVar4.___m_Height_3._2_2_ = (short)((uint)local_64.___m_Bottom_3 >> 0x10);
    GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(RVar4,(MethodInfo *)0x0);
    pGVar9 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                       (
                       Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
                       );
    GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(pGVar9,(MethodInfo *)0x0);
    if (pMVar1 != (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) {
      local_1c = (Il2CppObject *)0x0;
      if ((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->has_cctor != '\0') &&
         (GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->cctor_finished == 0)) {
        il2cpp_runtime_class_init(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var)
        ;
      }
      pGVar10 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F((MethodInfo *)0x0);
      if (pGVar10 != (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *)0x0) {
        local_28 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)
                   ControllerSelection_get_type_m6AC6176846B43F7E596DA48E8780F05DCFD3740A
                             ((ControllerSelection_t9870C49D5444501858F864E31B530269D961307C *)
                              pGVar10,(MethodInfo *)0x0);
        pGVar9 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B *)
                 il2cpp_array_new_specific
                           (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var
                            ,2);
        iVar7 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
        local_24 = GUILayout_MaxWidth_mE6C754AB0A4366AB7E0BECE6D85A254CA7E553FB
                             ((float)iVar7 * __real_3e800000,(MethodInfo *)0x0);
        if (pGVar9 != (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B *)0x0) {
          if ((local_24 != (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)0x0) &&
             (pIVar11 = IsInst((Il2CppObject *)local_24,*(Il2CppClass **)(pGVar9->_padding_ + 0x20))
             , pIVar11 == (Il2CppObject *)0x0)) {
            pMVar15 = (MethodInfo *)0x0;
            pEVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar14,pMVar15);
          }
          ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                    ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)pGVar9,0,
                     (Il2CppObject *)local_24);
          iVar7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
          local_24 = GUILayout_Height_m6705C2917595CCEA6D934DBB5DD8399DF6F5E464
                               ((float)iVar7,(MethodInfo *)0x0);
          if ((local_24 != (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)0x0) &&
             (pIVar11 = IsInst((Il2CppObject *)local_24,*(Il2CppClass **)(pGVar9->_padding_ + 0x20))
             , pIVar11 == (Il2CppObject *)0x0)) {
            pMVar15 = (MethodInfo *)0x0;
            pEVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar14,pMVar15);
          }
          ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                    ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)pGVar9,1,
                     (Il2CppObject *)local_24);
          GUILayout_BeginVertical_m4609A5F918583C9D6AA571FABAADDC0F0A54EEF3
                    (local_28,pGVar9,(MethodInfo *)0x0);
          local_3c = (pMVar1->___U3CScrollU3Ek__BackingField_5).___x_0;
          local_38 = (pMVar1->___U3CScrollU3Ek__BackingField_5).___y_1;
          pGVar9 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                             (
                             Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
                             );
          VVar3.___y_1 = local_38;
          VVar3.___x_0 = local_3c;
          local_44 = GUILayout_BeginScrollView_m605976F974526E1D17F6555A35B6CCBBE7ADB492
                               (VVar3,false,true,pGVar9,(MethodInfo *)0x0);
          pMVar1->___U3CScrollU3Ek__BackingField_5 = local_44;
          pSVar2 = (String_t *)pMVar1->_padding_;
          pGVar9 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                             (
                             Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
                             );
          GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(pSVar2,pGVar9,(MethodInfo *)0x0)
          ;
          if ((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)
              pMVar1->___U3CChildEntriesU3Ek__BackingField_3 !=
              (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
            pEVar12 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
                                (&local_74,
                                 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)
                                 pMVar1->___U3CChildEntriesU3Ek__BackingField_3,
                                 List_1_GetEnumerator_m7682428CEA645E683C24036BC18A210063AF19D2_RuntimeMethod_var
                                );
            local_54.___list_0 =
                 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pEVar12->___list_0;
            local_54.___index_1 = pEVar12->___index_1;
            local_54.___version_2 = pEVar12->___version_2;
            local_54.___current_3 = (Il2CppObject *)pEVar12->___current_3;
            local_8 = 0;
            while( true ) {
              do {
                bVar6 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                                  (&local_54,
                                   Enumerator_MoveNext_m95FF5A5648AA0531AB6C64FA97B2404010F58B83_RuntimeMethod_var
                                  );
                pIVar11 = local_54.___current_3;
                if (!bVar6) {
                  aiStack_34[local_18] = 0xf3;
                  aiStack_34[1] = aiStack_34[1] + 1;
                  FUN_110ce8d2();
                  return;
                }
                if ((String_t *)local_54.___current_3 == (String_t *)0x0) goto LAB_110ce95c;
                VirtFuncInvoker0<int>::Invoke(5,local_54.___current_3);
                pIVar13 = IsInstClass(pIVar11,
                                      MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                                     );
              } while (pIVar13 == (Il2CppObject *)0x0);
              pIVar11 = CastclassClass(pIVar11,
                                       MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                                      );
              if (pIVar11 == (Il2CppObject *)0x0) break;
              if (*(char *)&pIVar11[3].field0_0x0 != '\0') {
                local_1c = pIVar11;
              }
            }
          }
        }
      }
LAB_110ce95c:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946((MethodInfo *)0x0);
    GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151((MethodInfo *)0x0);
  }
  ExceptionList = pvStack_10;
  return;
}
