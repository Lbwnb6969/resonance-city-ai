// RVA 0x3057b0 | Placemaker.Ui.ToolsButton$$UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp
// PDB: ToolsButton_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m3B1AF04F49BB6FA144AA963C364604E88C7600A6
// Body: [[103057b0, 103057e2]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906

void __cdecl
ToolsButton_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m3B1AF04F49BB6FA144AA963C364604E88C7600A6
          (ToolsButton_t82FD1730196D131A12C4C86C08ACDAA30952BF26 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  if ((param_1->___hovered_4 != false) && (param_1->___disabled_7 == false)) {
    if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___onClicked_14 ==
        (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               param_1->___onClicked_14,(MethodInfo *)0x0);
  }
  param_1->___hovered_4 = true;
  param_1->___down_5 = false;
  return;
}
