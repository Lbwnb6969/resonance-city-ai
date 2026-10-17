// RVA 0x234c10 | Placemaker.Ui.ControlBinding$$OnStopped
// PDB: ControlBinding_OnStopped_m8404F5F41D95F5D582B879089CA4F5B12A5D0998
// Body: [[10234c10, 10234c4c]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A

void __cdecl
ControlBinding_OnStopped_m8404F5F41D95F5D582B879089CA4F5B12A5D0998
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,
          StoppedEventData_t08C0D9758085966200B85266830CA61924BBBADA *param_2,MethodInfo *param_3)

{
  if (param_1->___buttonMapState_15 == false) {
    return;
  }
  param_1->___buttonMapState_15 = false;
  if (param_1->___inputMapperJoystickKeyboard_18 !=
      (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
    InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
              (param_1->___inputMapperJoystickKeyboard_18,(MethodInfo *)0x0);
    if (param_1->___inputMapperMouse_19 !=
        (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
      InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
                (param_1->___inputMapperMouse_19,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
