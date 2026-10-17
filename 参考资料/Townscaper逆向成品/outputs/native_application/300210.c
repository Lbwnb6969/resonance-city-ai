// RVA 0x300210 | Placemaker.Ui.SunSlider$$UpdateAnim
// PDB: SunSlider_UpdateAnim_mE2F9AE707417E88B93EF9DC1FE6F6F710B5C9330
// Body: [[10300210, 103002ca]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4

void __cdecl
SunSlider_UpdateAnim_mE2F9AE707417E88B93EF9DC1FE6F6F710B5C9330
          (SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  pUVar1 = param_1->___scaleXY_9;
  if (param_1->___pressed_11 == false) {
    if (param_1->___hover_10 == false) {
      if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                  (pUVar1,1.0,(MethodInfo *)0x0);
        if (param_1->___scaleZ_8 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                    (param_1->___scaleZ_8,1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                (pUVar1,1.02,(MethodInfo *)0x0);
      if (param_1->___scaleZ_8 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                  (param_1->___scaleZ_8,1.2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4(pUVar1,0.98,(MethodInfo *)0x0);
    if (param_1->___scaleZ_8 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                (param_1->___scaleZ_8,0.95,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
