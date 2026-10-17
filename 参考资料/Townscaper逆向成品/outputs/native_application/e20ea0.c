// RVA 0xe20ea0 | Placemaker.GroundClicker$$UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick
// PDB: GroundClicker_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_m9FF7FDBE27BD5919874D1B925B3B6C8EEFD254E2
// Body: [[10e20ea0, 10e21091]]
// Direct callees:
// 1003e660 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10e1fe70 GroundClicker_AddClick_m5212BA6470B73DF33089FC6C1A48DFD7092A3BFF
// 10e20380 GroundClicker_ColorPick_m8E3C1A57CE319C7BFBCAD7C8ADF75AB9A6FD5264
// 10e206f0 GroundClicker_RemoveClick_m323F18D479BAE6EE48EFC60203610133CE694AC1
// 10f1f2e0 Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GroundClicker_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_m9FF7FDBE27BD5919874D1B925B3B6C8EEFD254E2
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  bool bVar2;
  int iVar3;
  float fVar4;

  if (DAT_1152267b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral8F787AD6ACF9E7184EC2E46C37DC1C0A98AA8EC0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral977D10F575E863C8CE12C51544CE7C0AC4CE37AC);
    DAT_1152267b = '\x01';
  }
  if (((param_1->___dragMode_15 == 0) &&
      (iVar3 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0),
      param_1->___clickFrame_16 != iVar3)) &&
     (param_1->___clickFrame_16 = iVar3, param_1->___pressUsed_8 == false)) {
    if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (pPVar1 = param_1->___master_4->___player_43,
       param_2 == (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0)) {
LAB_10e2108d:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    iVar3 = param_2->___U3CpointerIdU3Ek__BackingField_12;
    if (-1 < iVar3) {
      fVar4 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      if (param_2->___U3CclickTimeU3Ek__BackingField_18 + ___real_3ea3d70a < fVar4) {
        GroundClicker_RemoveClick_m323F18D479BAE6EE48EFC60203610133CE694AC1
                  (param_1,(MethodInfo *)0x0);
      }
      else {
        GroundClicker_AddClick_m5212BA6470B73DF33089FC6C1A48DFD7092A3BFF(param_1,(MethodInfo *)0x0);
      }
      (**(code **)(param_2->_padding_ + 0xe4))(param_2,*(undefined4 *)(param_2->_padding_ + 0xe8));
      return;
    }
    if (iVar3 == -1) {
      if (pPVar1 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0) goto LAB_10e2108d;
      bVar2 = Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976
                        (pPVar1,_stringLiteral977D10F575E863C8CE12C51544CE7C0AC4CE37AC,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        if (((param_1->___currentVoxelType_5 != '\x12') &&
            (bVar2 = Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976
                               (pPVar1,_stringLiteral8F787AD6ACF9E7184EC2E46C37DC1C0A98AA8EC0,
                                (MethodInfo *)0x0), !bVar2)) &&
           (fVar4 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                              ((MethodInfo *)0x0),
           fVar4 <= param_2->___U3CclickTimeU3Ek__BackingField_18 + ___real_3ea3d70a)) {
          GroundClicker_AddClick_m5212BA6470B73DF33089FC6C1A48DFD7092A3BFF
                    (param_1,(MethodInfo *)0x0);
          VirtFuncInvoker0<int>::Invoke(5,(Il2CppObject *)param_2);
          return;
        }
        GroundClicker_RemoveClick_m323F18D479BAE6EE48EFC60203610133CE694AC1
                  (param_1,(MethodInfo *)0x0);
        VirtFuncInvoker0<int>::Invoke(5,(Il2CppObject *)param_2);
        return;
      }
    }
    else {
      if (iVar3 != -2) {
        if (iVar3 != -3) {
          return;
        }
        GroundClicker_ColorPick_m8E3C1A57CE319C7BFBCAD7C8ADF75AB9A6FD5264(param_1,(MethodInfo *)0x0)
        ;
        VirtFuncInvoker0<int>::Invoke(5,(Il2CppObject *)param_2);
        return;
      }
      if (pPVar1 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0) goto LAB_10e2108d;
      bVar2 = Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976
                        (pPVar1,_stringLiteral977D10F575E863C8CE12C51544CE7C0AC4CE37AC,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        GroundClicker_RemoveClick_m323F18D479BAE6EE48EFC60203610133CE694AC1
                  (param_1,(MethodInfo *)0x0);
        VirtFuncInvoker0<int>::Invoke(5,(Il2CppObject *)param_2);
        return;
      }
    }
    GroundClicker_ColorPick_m8E3C1A57CE319C7BFBCAD7C8ADF75AB9A6FD5264(param_1,(MethodInfo *)0x0);
    VirtFuncInvoker0<int>::Invoke(5,(Il2CppObject *)param_2);
  }
  return;
}
