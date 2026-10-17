// RVA 0x750af0 | Placemaker.Ui.PinnedUi$$UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter
// PDB: PinnedUi_UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter_m0D353B91E2E3BD3F2ECE1BD45091FDD4C194D31A
// Body: [[10750af0, 10750b1c]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
PinnedUi_UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter_m0D353B91E2E3BD3F2ECE1BD45091FDD4C194D31A
          (PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  param_1->___hovered_6 = true;
  if (param_1->___state_4 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___state_4,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
