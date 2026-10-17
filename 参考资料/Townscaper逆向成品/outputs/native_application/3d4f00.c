// RVA 0x3d4f00 | Placemaker.Ui.MasterClicker$$UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter
// PDB: MasterClicker_UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter_m615195D662AEBF56BA031AF79FF64627EA7E6E03
// Body: [[103d4f00, 103d4f2e]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1113f230 Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5

void __cdecl
MasterClicker_UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter_m615195D662AEBF56BA031AF79FF64627EA7E6E03
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  bool bVar1;

  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    if (param_2->___U3CpointerIdU3Ek__BackingField_12 == -1) {
      bVar1 = Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5((MethodInfo *)0x0);
      if (bVar1) {
        param_1->___hovered_9 = true;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
