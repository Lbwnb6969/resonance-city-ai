// RVA 0x4182d0 | Placemaker.Ui.InputModeManager$$Update
// PDB: InputModeManager_Update_m82CD5FEE6C227B2987BE6B57DE0F5283458574E6
// Body: [[104182d0, 1041854d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10417d40 InputModeManager_U3CUpdateU3Eg__ShouldChangeU7C8_0_m3ECCC6FD3710A7990609646E2019CB22605B2080
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 10a35ce0 Application_get_isFocused_m89D48E3D4C9F2880F4CE05EE70CA0A3689C676F8
// 1113ee10 Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326
// 1113efb0 Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022
// 1113f1f0 Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E
// 1113f300 Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
InputModeManager_Update_m82CD5FEE6C227B2987BE6B57DE0F5283458574E6
          (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *param_1,MethodInfo *param_2)

{
  InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *pIVar1;
  bool bVar2;
  int iVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_28;
  undefined8 local_1c;
  undefined8 local_10;

  if (DAT_1151cab9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    DAT_1151cab9 = '\x01';
  }
  pIVar1 = param_1;
  if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    param_1 = (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)
              param_1->___master_4->___player_43;
    if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    }
    if (`bool___cdecl_ReInput_get_isReady_mB524470981623D3BBF529259E252979E1E3408CF_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
      `bool___cdecl_ReInput_get_isReady_mB524470981623D3BBF529259E252979E1E3408CF_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    }
    if (*(char *)((int)ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->
                       static_fields + 0x1c) == '\0') {
      return;
    }
    if ((pIVar1->___mode_8 == 1) ||
       (bVar2 = InputModeManager_U3CUpdateU3Eg__ShouldChangeU7C8_0_m3ECCC6FD3710A7990609646E2019CB22605B2080
                          ((U3CU3Ec__DisplayClass8_0_tF19414188969407E93BC82375E2D8499569CC645 *)
                           &param_1,(MethodInfo *)0x0), !bVar2)) {
      if (pIVar1->___mode_8 != 2) {
        if (DAT_1151cabb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
          DAT_1151cabb = '\x01';
        }
        bVar2 = Application_get_isFocused_m89D48E3D4C9F2880F4CE05EE70CA0A3689C676F8
                          ((MethodInfo *)0x0);
        if (bVar2) {
          iVar3 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6((MethodInfo *)0x0);
          if (iVar3 < 1) {
            pVVar4 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E
                               (&local_28,(MethodInfo *)0x0);
            local_1c._0_4_ = pVVar4->___x_2;
            local_1c._4_4_ = pVVar4->___y_3;
            if ((float)(undefined4)local_1c < 0.0) {
              return;
            }
            if ((float)local_1c._4_4_ < 0.0) {
              return;
            }
            local_10 = local_1c;
            iVar3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
            if ((float)iVar3 < (float)local_10) {
              return;
            }
            iVar3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
            if ((float)iVar3 < local_10._4_4_) {
              return;
            }
            param_1 = (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)
                      Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326
                                (_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7,
                                 (MethodInfo *)0x0);
            if (((((float)param_1 == ___real_00000000) &&
                 (param_1 = (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)
                            Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326
                                      (_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0,
                                       (MethodInfo *)0x0), (float)param_1 == ___real_00000000)) &&
                (bVar2 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022
                                   (0,(MethodInfo *)0x0), !bVar2)) &&
               ((bVar2 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022
                                   (1,(MethodInfo *)0x0), !bVar2 &&
                (bVar2 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022
                                   (2,(MethodInfo *)0x0), !bVar2)))) {
              return;
            }
          }
          if (pIVar1->___mode_8 != 2) {
            pIVar1->___mode_8 = 2;
            if (pIVar1->___gamepadState_6 !=
                (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
              UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                        (pIVar1->___gamepadState_6,false,(MethodInfo *)0x0);
              if (pIVar1->___touchAndMouseState_7 !=
                  (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                          (pIVar1->___touchAndMouseState_7,true,(MethodInfo *)0x0);
                return;
              }
            }
            goto LAB_10418549;
          }
        }
      }
      return;
    }
    if (pIVar1->___mode_8 == 1) {
      return;
    }
    pIVar1->___mode_8 = 1;
    if (pIVar1->___gamepadState_6 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (pIVar1->___gamepadState_6,true,(MethodInfo *)0x0);
      if (pIVar1->___touchAndMouseState_7 !=
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                  (pIVar1->___touchAndMouseState_7,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_10418549:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
