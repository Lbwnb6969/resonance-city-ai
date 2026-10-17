// RVA 0x4eed20 | Placemaker.Ui.KeyboardControlsMenu$$OnControllerSelected
// PDB: KeyboardControlsMenu_OnControllerSelected_m56F8E09BB6C5029D8C8A1EC8CCDFE1DFDFA3DB93
// Body: [[104eed20, 104eee76]]
// Direct callees:
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10d68080 ControllerHelper_get_Joysticks_m32CF666C3C2D8D76EAC5E57B73E872FA14E581B9
// 10d68580 ControllerHelper_get_joystickCount_mB89C4AF30E14599E4F093F6FC5FEE9D99697AC13
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A

void __cdecl
KeyboardControlsMenu_OnControllerSelected_m56F8E09BB6C5029D8C8A1EC8CCDFE1DFDFA3DB93
          (KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *param_1,int param_2,
          MethodInfo *param_3)

{
  int iVar1;
  int iVar2;
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar3;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar4;
  Il2CppClass *pIVar5;
  int iVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  ushort uVar9;

  if (DAT_1151d216 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var);
    DAT_1151d216 = '\x01';
  }
  iVar1 = param_1->___selectedControllerGroupType_17;
  iVar6 = iVar1;
  if (param_2 != iVar1) {
    param_1->___selectedControllerGroupType_17 = param_2;
    iVar6 = param_2;
  }
  iVar2 = param_1->___selectedControllerGroupId_18;
  if (iVar6 == 1) {
    if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
        (pPVar3 = param_1->___master_4->___player_43,
        pPVar3 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) ||
       (pCVar4 = pPVar3->___controllers_7,
       pCVar4 == (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0))
    goto LAB_104eee72;
    iVar6 = ControllerHelper_get_joystickCount_mB89C4AF30E14599E4F093F6FC5FEE9D99697AC13
                      (pCVar4,(MethodInfo *)0x0);
    if (iVar6 < 1) {
      iVar6 = -1;
    }
    else {
      if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
          (pPVar3 = param_1->___master_4->___player_43,
          pPVar3 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) ||
         ((pCVar4 = pPVar3->___controllers_7,
          pCVar4 == (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0 ||
          (pIVar7 = ControllerHelper_get_Joysticks_m32CF666C3C2D8D76EAC5E57B73E872FA14E581B9
                              (pCVar4,(MethodInfo *)0x0), pIVar7 == (Il2CppObject *)0x0))))
      goto LAB_104eee72;
      pIVar5 = (pIVar7->field0_0x0).klass;
      uVar9 = 0;
      if (pIVar5->interface_offsets_count != 0) {
        do {
          if (pIVar5->interfaceOffsets[uVar9].interfaceType ==
              IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var) {
            pVVar8 = (VirtualInvokeData *)
                     (&pIVar5->field_0xbc + pIVar5->interfaceOffsets[uVar9].offset * 8);
            goto LAB_104eee23;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < pIVar5->interface_offsets_count);
      }
      pVVar8 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,
                          IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var,0);
LAB_104eee23:
      iVar6 = (*pVVar8->methodPtr)(pIVar7,0,pVVar8->method);
      if (iVar6 == 0) goto LAB_104eee72;
      iVar6 = *(int *)(iVar6 + 8);
    }
  }
  else {
    iVar6 = 0;
  }
  param_1->___selectedControllerGroupId_18 = iVar6;
  if ((iVar6 != iVar2) || (param_2 != iVar1)) {
    if (param_1->___inputMapperJoystickKeyboard_15 ==
        (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
LAB_104eee72:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
              (param_1->___inputMapperJoystickKeyboard_15,(MethodInfo *)0x0);
  }
  return;
}
