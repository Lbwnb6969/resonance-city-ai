// RVA 0x2ff9e0 | Placemaker.Ui.SunButton$$OnEndDrag
// PDB: SunButton_OnEndDrag_m6AE846554F4DB85E738C7488A3210FB4E206B47C
// Body: [[102ff9e0, 102ffa3d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4

void __cdecl
SunButton_OnEndDrag_m6AE846554F4DB85E738C7488A3210FB4E206B47C
          (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,
          SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_3,MethodInfo *param_4)

{
  float fVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;

  fVar1 = (param_1->___current_17).___y_1;
  pUVar2 = param_1->___handle0scale_19;
  (param_1->___start_18).___x_0 = (param_1->___current_17).___x_0;
  (param_1->___start_18).___y_1 = fVar1;
  if (pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4(pUVar2,1.0,(MethodInfo *)0x0);
    if (param_1->___handle1scale_20 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    {
      UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                (param_1->___handle1scale_20,0.0,(MethodInfo *)0x0);
      param_1->___currentSlider_24 = (SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *)0x0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
