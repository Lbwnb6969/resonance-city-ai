// RVA 0x300080 | Placemaker.Ui.SunSlider$$UnityEngine.EventSystems.IEndDragHandler.OnEndDrag
// PDB: SunSlider_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_m937BB06CCE6195015A2DB11C0468100EF5A114F4
// Body: [[10300080, 103000e4]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4

void __cdecl
SunSlider_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_m937BB06CCE6195015A2DB11C0468100EF5A114F4
          (SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  float fVar1;
  SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *pSVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;

  pSVar2 = param_1->___sunButton_4;
  if (pSVar2 != (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *)0x0) {
    fVar1 = (pSVar2->___current_17).___y_1;
    pUVar3 = pSVar2->___handle0scale_19;
    (pSVar2->___start_18).___x_0 = (pSVar2->___current_17).___x_0;
    (pSVar2->___start_18).___y_1 = fVar1;
    if (pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4(pUVar3,1.0,(MethodInfo *)0x0)
      ;
      if (pSVar2->___handle1scale_20 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
         ) {
        UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                  (pSVar2->___handle1scale_20,0.0,(MethodInfo *)0x0);
        pSVar2->___currentSlider_24 = (SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *)0x0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
