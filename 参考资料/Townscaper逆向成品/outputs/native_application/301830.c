// RVA 0x301830 | Placemaker.Ui.TextSaveButtons$$Button_LoadFromClipboard
// PDB: TextSaveButtons_Button_LoadFromClipboard_mBD7B8133B786F02650EF7922BBD6EAEFF5F5CCBA
// Body: [[10301830, 10301a8e]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102f8aa0 SimpleMessage_ShowTerm_m4A0E7F3B6B6068C801F050318E29C4EDBFD84790
// 103e5d90 UiMaster_LoadString_m23F7DC6FD3E4C490B155F325C23738343F2E8FF7
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 10448940 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
// 10501a90 LocalizationParamsManager_SetParameterValue_m845F9E2F2AEC81F9C21A4B11A1ABAD810DA1B520
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 10f04d40 String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
// 10f08b90 String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B
// 110e29c0 GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E

void __cdecl
TextSaveButtons_Button_LoadFromClipboard_mBD7B8133B786F02650EF7922BBD6EAEFF5F5CCBA
          (TextSaveButtons_t9FE31FB1A9C1B1AF839ACDABD89B0FDCC449A463 *param_1,
          BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_2,MethodInfo *param_3)

{
  List_1_t2DE248F6EC5B30FE6F150B99D0229C4072C3F4CF *pLVar1;
  SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *pSVar2;
  TextSaveButtons_t9FE31FB1A9C1B1AF839ACDABD89B0FDCC449A463 *pTVar3;
  bool bVar4;
  String_t *pSVar5;
  String_t *pSVar6;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar7;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar8;

  pTVar3 = param_1;
  if (DAT_1151c21d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1D950316B29DFB6F670BBCE36E4637E215C52B31_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralC9604595C464A68E4A2636E15A9093EA2C4B71B7);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCE471B7E5D3BB0D33B505C799CA153F0F46CF00D);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF627EBD9767813D3224F6541385547FDF7814E94);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
    DAT_1151c21d = '\x01';
  }
  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pLVar1 = param_1->___master_4->___lockedButtons_42,
     pLVar1 != (List_1_t2DE248F6EC5B30FE6F150B99D0229C4072C3F4CF *)0x0)) {
    if (0 < pLVar1->____size_2) {
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                ((Il2CppObject *)_stringLiteralC9604595C464A68E4A2636E15A9093EA2C4B71B7,
                 (MethodInfo *)0x0);
      return;
    }
    pSVar5 = GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E
                       ((MethodInfo *)0x0);
    if (pSVar5 == (String_t *)0x0) {
      if (param_1->___loadMessage_7 !=
          (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *)0x0) {
        SimpleMessage_ShowTerm_m4A0E7F3B6B6068C801F050318E29C4EDBFD84790
                  (param_1->___loadMessage_7,_stringLiteralCE471B7E5D3BB0D33B505C799CA153F0F46CF00D,
                   2.0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar5 = GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E
                         ((MethodInfo *)0x0);
      if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        bVar4 = UiMaster_LoadString_m23F7DC6FD3E4C490B155F325C23738343F2E8FF7
                          (param_1->___master_4,pSVar5,(MethodInfo *)0x0);
        if (bVar4) {
          return;
        }
        if (pSVar5 != (String_t *)0x0) {
          if (0x14 < pSVar5->___m_stringLength_0) {
            pSVar5 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B
                               (pSVar5,0,0x14,(MethodInfo *)0x0);
            pSVar5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                               (pSVar5,_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A,
                                (MethodInfo *)0x0);
          }
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                    ((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
          pSVar6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
                             (_stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189,
                              (Il2CppObject *)pSVar5,(MethodInfo *)0x0);
          pSVar5 = _stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A;
          pSVar2 = param_1->___loadMessage_7;
          if (pSVar2 != (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *)0x0) {
            if (DAT_1151c18c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        ((uint *)&
                                 Component_TryGetComponent_TisLocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2_m6EE1700B7C814A862C87643C6EEA3FC550A13A48_RuntimeMethod_var
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        ((uint *)&
                                 GameObject_AddComponent_TisLocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2_m417F9C882CCE1DEF36527B52DF33BE93910AB623_RuntimeMethod_var
                        );
              DAT_1151c18c = '\x01';
            }
            param_1 = (TextSaveButtons_t9FE31FB1A9C1B1AF839ACDABD89B0FDCC449A463 *)0x0;
            if (pSVar2->___text_4 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
              pOVar7 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                  pSVar2->___text_4,true,
                                  Component_TryGetComponent_TisLocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2_m6EE1700B7C814A862C87643C6EEA3FC550A13A48_RuntimeMethod_var
                                 );
              if ((char)pOVar7 == '\0') {
                if ((pSVar2->___text_4 == (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0)
                   || (pGVar8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           pSVar2->___text_4,(MethodInfo *)0x0),
                      pGVar8 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0))
                goto LAB_10301a8a;
                param_1 = (TextSaveButtons_t9FE31FB1A9C1B1AF839ACDABD89B0FDCC449A463 *)
                          GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                                    (pGVar8,
                                     GameObject_AddComponent_TisLocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2_m417F9C882CCE1DEF36527B52DF33BE93910AB623_RuntimeMethod_var
                                    );
              }
              if (param_1 != (TextSaveButtons_t9FE31FB1A9C1B1AF839ACDABD89B0FDCC449A463 *)0x0) {
                LocalizationParamsManager_SetParameterValue_m845F9E2F2AEC81F9C21A4B11A1ABAD810DA1B520
                          ((LocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2 *)
                           param_1,pSVar5,pSVar6,true,(MethodInfo *)0x0);
                if (pTVar3->___loadMessage_7 !=
                    (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *)0x0) {
                  SimpleMessage_ShowTerm_m4A0E7F3B6B6068C801F050318E29C4EDBFD84790
                            (pTVar3->___loadMessage_7,
                             _stringLiteralF627EBD9767813D3224F6541385547FDF7814E94,2.0,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10301a8a:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
