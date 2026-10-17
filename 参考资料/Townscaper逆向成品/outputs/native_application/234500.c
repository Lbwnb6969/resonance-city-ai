// RVA 0x234500 | Placemaker.Ui.ControlBinding$$OnControllerSelected
// PDB: ControlBinding_OnControllerSelected_m2616715B63681B2DE41C8DFB2196EB4123C70AD2
// Body: [[10234500, 102345dc]]
// Direct callees:
// 1003e330 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10d68080 ControllerHelper_get_Joysticks_m32CF666C3C2D8D76EAC5E57B73E872FA14E581B9
// 10d68580 ControllerHelper_get_joystickCount_mB89C4AF30E14599E4F093F6FC5FEE9D99697AC13
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A

void __cdecl
ControlBinding_OnControllerSelected_m2616715B63681B2DE41C8DFB2196EB4123C70AD2
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,int param_2,
          MethodInfo *param_3)

{
  int iVar1;
  int iVar2;
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar3;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar4;
  int iVar5;
  Il2CppObject *pIVar6;
  int extraout_EAX;

  if (DAT_1151b59f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var);
    DAT_1151b59f = '\x01';
  }
  iVar1 = param_1->___selectedControllerGroupType_20;
  iVar5 = iVar1;
  if (param_2 != iVar1) {
    param_1->___selectedControllerGroupType_20 = param_2;
    iVar5 = param_2;
  }
  iVar2 = param_1->___selectedControllerGroupId_21;
  if (iVar5 == 1) {
    if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
        (pPVar3 = param_1->___master_4->___player_43,
        pPVar3 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) ||
       (pCVar4 = pPVar3->___controllers_7,
       pCVar4 == (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0))
    goto LAB_102345d8;
    iVar5 = ControllerHelper_get_joystickCount_mB89C4AF30E14599E4F093F6FC5FEE9D99697AC13
                      (pCVar4,(MethodInfo *)0x0);
    if (iVar5 < 1) {
      iVar5 = -1;
    }
    else {
      if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
          (pPVar3 = param_1->___master_4->___player_43,
          pPVar3 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) ||
         (pCVar4 = pPVar3->___controllers_7,
         pCVar4 == (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0))
      goto LAB_102345d8;
      pIVar6 = ControllerHelper_get_Joysticks_m32CF666C3C2D8D76EAC5E57B73E872FA14E581B9
                         (pCVar4,(MethodInfo *)0x0);
      if (pIVar6 == (Il2CppObject *)0x0) goto LAB_102345d8;
      InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                (0,IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var,pIVar6,
                 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0);
      if (extraout_EAX == 0) goto LAB_102345d8;
      iVar5 = *(int *)(extraout_EAX + 8);
    }
  }
  else {
    iVar5 = 0;
  }
  param_1->___selectedControllerGroupId_21 = iVar5;
  if ((iVar5 != iVar2) || (param_2 != iVar1)) {
    if (param_1->___inputMapperJoystickKeyboard_18 ==
        (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
LAB_102345d8:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
              (param_1->___inputMapperJoystickKeyboard_18,(MethodInfo *)0x0);
  }
  return;
}
