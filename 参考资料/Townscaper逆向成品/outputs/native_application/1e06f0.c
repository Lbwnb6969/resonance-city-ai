// RVA 0x1e06f0 | Placemaker.Ui.GridButtons.<>c__DisplayClass8_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mB5E3AA34C3490D87C0CD5F143CA5381831E1A954
// Body: [[101e06f0, 101e082d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 10675010 Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200
// 10a384a0 Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236
// 10a387b0 Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mB5E3AA34C3490D87C0CD5F143CA5381831E1A954
          (U3CU3Ec__DisplayClass8_0_t07DBD567F332C685C9F3A3ECDD562E0219E1A667 *param_1,float param_2
          ,MethodInfo *param_3)

{
  GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2 *pGVar1;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *pCVar2;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar3;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar4;
  uint uVar5;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_14;

  if (DAT_1151afba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2_il2cpp_TypeInfo_var);
    DAT_1151afba = '\x01';
  }
  pVVar4 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200(&local_14,(MethodInfo *)0x0);
  local_14.___x_1 = pVVar4->___x_1;
  local_14.___y_2 = pVVar4->___y_2;
  local_14.___z_3 = pVVar4->___z_3;
  local_14.___w_4 = pVVar4->___w_4;
  pGVar1 = param_1->___U3CU3E4__this_0;
  if ((pGVar1 != (GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2 *)0x0) &&
     (pGVar1->___gridState0_6 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
    local_14.___x_1 = pGVar1->___gridState0_6->____current_0;
    if (pGVar1->___gridState1_7 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      local_14.___y_2 = pGVar1->___gridState1_7->____current_0;
      local_14.___z_3 =
           Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                     (local_14.___x_1,local_14.___y_2,(MethodInfo *)0x0);
      if ((GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2_il2cpp_TypeInfo_var);
      }
      VVar3.___y_2 = local_14.___y_2;
      VVar3.___x_1 = local_14.___x_1;
      VVar3.___z_3 = local_14.___z_3;
      VVar3.___w_4 = local_14.___w_4;
      Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                (*(int *)GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2_il2cpp_TypeInfo_var->
                         static_fields,VVar3,(MethodInfo *)0x0);
      pGVar1 = param_1->___U3CU3E4__this_0;
      pCVar2 = param_1->___camera_1;
      if (((pGVar1 != (GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2 *)0x0) &&
          (pGVar1->___gridState0_6 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0))
         && (pGVar1->___gridState1_7 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
            )) {
        if (pGVar1->___gridState1_7->____current_0 + pGVar1->___gridState0_6->____current_0 <=
            ___real_00000000) {
          if (pCVar2 == (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) goto LAB_101e0829;
          uVar5 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236
                            (pCVar2,(MethodInfo *)0x0);
          uVar5 = ~param_1->___mask_2 & uVar5;
        }
        else {
          if (pCVar2 == (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) goto LAB_101e0829;
          uVar5 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236
                            (pCVar2,(MethodInfo *)0x0);
          uVar5 = param_1->___mask_2 | uVar5;
        }
        if (pCVar2 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
          Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC
                    (pCVar2,uVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_101e0829:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
