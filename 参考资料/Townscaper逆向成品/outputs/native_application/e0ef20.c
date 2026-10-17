// RVA 0xe0ef20 | Placemaker.Ui.GridButtons$$Placemaker.Ui.ButtonAudio.IButtonAudioModifier.ModifyAudioData
// PDB: GridButtons_Placemaker_Ui_ButtonAudio_IButtonAudioModifier_ModifyAudioData_m2BCB93CFC9CCF59C591D3A0E84480F1511821E0C
// Body: [[10e0ef20, 10e0ef5d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F

void __cdecl
GridButtons_Placemaker_Ui_ButtonAudio_IButtonAudioModifier_ModifyAudioData_m2BCB93CFC9CCF59C591D3A0E84480F1511821E0C
          (GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2 *param_1,
          AudioData_t6FB0A6033B2BFE5AED3F85B685C9EE7EDCF89373 *param_2,int param_3,
          MethodInfo *param_4)

{
  bool bVar1;

  if (param_3 == 2) {
    if (param_1->___gridState0_6 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    bVar1 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (param_1->___gridState0_6,(MethodInfo *)0x0);
    if (bVar1) {
      param_2->___clip_0 = param_1->___offClip_9;
      return;
    }
    param_2->___clip_0 = param_1->___onClip_8;
  }
  return;
}
