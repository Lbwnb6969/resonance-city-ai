// RVA 0x3d4cd0 | Placemaker.Ui.MasterClicker$$UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick
// PDB: MasterClicker_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_m3F00FC8875F54F06F16428BF4C2F0C29FDED8804
// Body: [[103d4cd0, 103d4db3]]
// Direct callees:
// 1003e660 Invoke
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d36a0 MasterClicker_AddClick_m1D3961B08F73F3D7485F435A010A1D6E2FC5A588
// 103d3ee0 MasterClicker_ColorPick_m7075CE2A175732B0648136D88827210882A2373D
// 103d4480 MasterClicker_RemoveClick_mA593CB9066569DCB72B58C9B4E292EB71AF83DEA
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258

void __cdecl
MasterClicker_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_m3F00FC8875F54F06F16428BF4C2F0C29FDED8804
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  int iVar1;
  float fVar2;

  if (param_2 == (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
LAB_103d4daf:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  if ((((param_2->___U3CpointerIdU3Ek__BackingField_12 < 0) && (param_1->___dragging_12 == false))
      && (iVar1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0),
         param_1->___clickFrame_21 != iVar1)) &&
     (param_1->___clickFrame_21 = iVar1, param_1->___pointerPressUsed_14 == false)) {
    if (param_1->___master_7 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
    goto LAB_103d4daf;
    iVar1 = param_2->___U3CpointerIdU3Ek__BackingField_12;
    if (iVar1 == -1) {
      fVar2 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      if (param_2->___U3CclickTimeU3Ek__BackingField_18 + __real_3e800000 < fVar2) {
        MasterClicker_RemoveClick_mA593CB9066569DCB72B58C9B4E292EB71AF83DEA
                  (param_1,(MethodInfo *)0x0);
        VirtFuncInvoker0<int>::Invoke(5,(Il2CppObject *)param_2);
        return;
      }
      MasterClicker_AddClick_m1D3961B08F73F3D7485F435A010A1D6E2FC5A588(param_1,(MethodInfo *)0x0);
      VirtFuncInvoker0<int>::Invoke(5,(Il2CppObject *)param_2);
      return;
    }
    if (iVar1 == -2) {
      MasterClicker_RemoveClick_mA593CB9066569DCB72B58C9B4E292EB71AF83DEA(param_1,(MethodInfo *)0x0)
      ;
      VirtFuncInvoker0<int>::Invoke(5,(Il2CppObject *)param_2);
      return;
    }
    if (iVar1 == -3) {
      MasterClicker_ColorPick_m7075CE2A175732B0648136D88827210882A2373D(param_1,(MethodInfo *)0x0);
      VirtFuncInvoker0<int>::Invoke(5,(Il2CppObject *)param_2);
    }
  }
  return;
}
