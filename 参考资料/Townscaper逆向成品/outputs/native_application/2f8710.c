// RVA 0x2f8710 | Placemaker.Ui.SimpleMessage$$SetParam
// PDB: SimpleMessage_SetParam_m87A6997A70EFE92E19A9B93ACA80A0F2402D152A
// Body: [[102f8710, 102f87b1]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 10448940 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
// 10501a90 LocalizationParamsManager_SetParameterValue_m845F9E2F2AEC81F9C21A4B11A1ABAD810DA1B520
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B

void __cdecl
SimpleMessage_SetParam_m87A6997A70EFE92E19A9B93ACA80A0F2402D152A
          (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *param_1,String_t *param_2,
          String_t *param_3,MethodInfo *param_4)

{
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;
  LocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2 *local_8;

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
  local_8 = (LocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2 *)0x0;
  if (param_1->___text_4 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
    pOVar1 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___text_4,
                        true,
                        Component_TryGetComponent_TisLocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2_m6EE1700B7C814A862C87643C6EEA3FC550A13A48_RuntimeMethod_var
                       );
    if ((char)pOVar1 == '\0') {
      if ((param_1->___text_4 == (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) ||
         (pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              param_1->___text_4,(MethodInfo *)0x0),
         pGVar2 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_102f87ad;
      local_8 = (LocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2 *)
                GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                          (pGVar2,
                           GameObject_AddComponent_TisLocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2_m417F9C882CCE1DEF36527B52DF33BE93910AB623_RuntimeMethod_var
                          );
    }
    if (local_8 != (LocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2 *)0x0) {
      LocalizationParamsManager_SetParameterValue_m845F9E2F2AEC81F9C21A4B11A1ABAD810DA1B520
                (local_8,param_2,param_3,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_102f87ad:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
