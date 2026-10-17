// RVA 0x234960 | Placemaker.Ui.ControlBinding$$OnInputMapped
// PDB: ControlBinding_OnInputMapped_m6984AB97DD99A3836ECF75B83EBD14751B481C46
// Body: [[10234960, 102349da]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10234cb0 ControlBinding_SetRowButtons_m053148B88D731A986175B287F6FC29C96C70EF5C
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A

void __cdecl
ControlBinding_OnInputMapped_m6984AB97DD99A3836ECF75B83EBD14751B481C46
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,
          InputMappedEventData_t40B67A839D90692520B8DFA7571EC98D9865DD61 *param_2,
          MethodInfo *param_3)

{
  ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *pCVar1;

  if ((param_1->___selectedControllerGroupType_20 == 0) &&
     (pCVar1 = (param_1->___replaceTargetMapping_22).___controllerMap_0,
     pCVar1 != (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0)) {
    if ((param_2 == (InputMappedEventData_t40B67A839D90692520B8DFA7571EC98D9865DD61 *)0x0) ||
       (param_2->___actionElementMap_1 ==
        (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)0x0)) goto LAB_102349d6;
    if (param_2->___actionElementMap_1->___eqICMNAeQqPWKbMtCpCcRRFJaxS_11 != pCVar1) {
      (**(code **)(pCVar1->_padding_ + 0xf4))
                (pCVar1,(param_1->___replaceTargetMapping_22).___actionElementMapId_1,
                 *(undefined4 *)(pCVar1->_padding_ + 0xf8));
    }
  }
  if (param_1->___conflictFound_14 == false) {
    if (param_1->___inputMapperJoystickKeyboard_18 !=
        (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
      InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
                (param_1->___inputMapperJoystickKeyboard_18,(MethodInfo *)0x0);
      if (param_1->___inputMapperMouse_19 !=
          (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
        InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
                  (param_1->___inputMapperMouse_19,(MethodInfo *)0x0);
        goto LAB_102349c8;
      }
    }
LAB_102349d6:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
LAB_102349c8:
  ControlBinding_SetRowButtons_m053148B88D731A986175B287F6FC29C96C70EF5C(param_1,(MethodInfo *)0x0);
  return;
}
