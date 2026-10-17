// RVA 0x876130 | Placemaker.Ui.BetterScrollRect$$UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag
// PDB: BetterScrollRect_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag_mC999317243E5FA19D4170ED1B8904F5999ADD57E
// Body: [[10876130, 108761bf]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared

void __cdecl
BetterScrollRect_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag_mC999317243E5FA19D4170ED1B8904F5999ADD57E
          (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar1;

  if (DAT_1151f5a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
    DAT_1151f5a7 = '\x01';
  }
  if (param_1->___dragging_11 != false) {
    return;
  }
  if ((ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
  }
  pLVar1 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
           ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                     (ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var);
  param_1->___drags_10 = pLVar1;
  param_1->___dragging_11 = true;
  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    param_1->___dragPointerId_13 = param_2->___U3CpointerIdU3Ek__BackingField_12;
    if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___onBeginDrag_14
        != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 param_1->___onBeginDrag_14,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
