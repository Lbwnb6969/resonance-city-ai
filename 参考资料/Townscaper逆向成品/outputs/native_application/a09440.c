// RVA 0xa09440 | Placemaker.Ui.ShadingButtons$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__15_1
// PDB: ShadingButtons_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__15_1_mB4FB624C281A05B5D44B13782FECF1AAE486F6B0
// Body: [[10a09440, 10a094c1]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10a09120 ShadingButtons_SetShadingTarget_m9CA092D44C29598795ED6452DDC71520C9B6E8E7

void __cdecl
ShadingButtons_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__15_1_mB4FB624C281A05B5D44B13782FECF1AAE486F6B0
          (ShadingButtons_t2ED81F76F9E0A03D3A7A629AC27B30AF05EE4DB0 *param_1,float param_2,
          MethodInfo *param_3)

{
  if (param_2 != __real_3f800000) {
    return;
  }
  if (param_1->___texState_10 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___texState_10,false,(MethodInfo *)0x0);
    if (param_1->___lightState_12 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___lightState_12,false,(MethodInfo *)0x0);
      if (param_1->___stackState_13 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      {
        UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                  (param_1->___stackState_13,false,(MethodInfo *)0x0);
        ShadingButtons_SetShadingTarget_m9CA092D44C29598795ED6452DDC71520C9B6E8E7
                  (param_1,1.0,1.0,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
