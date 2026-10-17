// RVA 0x750b20 | Placemaker.Ui.PinnedUi$$UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit
// PDB: PinnedUi_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit_m1E9043A639E7C2E135F90AF09144EF4F4DEAA2BC
// Body: [[10750b20, 10750b53]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
PinnedUi_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit_m1E9043A639E7C2E135F90AF09144EF4F4DEAA2BC
          (PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  param_1->___hovered_6 = false;
  if (param_1->___state_4 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___state_4,param_1->___pinned_5 != false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
