// RVA 0x3000f0 | Placemaker.Ui.SunSlider$$UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick
// PDB: SunSlider_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_mA7E4F197CD8349AFA83F2F09F424932A1E38823E
// Body: [[103000f0, 10300120]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102ff4c0 SunButton_OnClick_m1E8D51C97839506C044E7046A758A2D479328969

void __cdecl
SunSlider_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_mA7E4F197CD8349AFA83F2F09F424932A1E38823E
          (SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    if (param_2->___U3CdraggingU3Ek__BackingField_22 == false) {
      if (param_1->___sunButton_4 == (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *)0x0)
      goto LAB_1030011c;
      SunButton_OnClick_m1E8D51C97839506C044E7046A758A2D479328969
                (param_1->___sunButton_4,param_2,param_1,(MethodInfo *)0x0);
    }
    return;
  }
LAB_1030011c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
