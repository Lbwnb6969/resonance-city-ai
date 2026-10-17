// RVA 0x420bf0 | Placemaker.Ui.KeyboardAndMouseControlRemap$$OnStopped
// PDB: KeyboardAndMouseControlRemap_OnStopped_mF7D3A3FC097FC99C5D54826D7E4AB290468B8048
// Body: [[10420bf0, 10420c39]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A

void __cdecl
KeyboardAndMouseControlRemap_OnStopped_mF7D3A3FC097FC99C5D54826D7E4AB290468B8048
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          StoppedEventData_t08C0D9758085966200B85266830CA61924BBBADA *param_2,MethodInfo *param_3)

{
  if (param_1->___buttonMapState_16 == false) {
    return;
  }
  param_1->___buttonMapState_16 = false;
  if (param_1->___inputMapper_11 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
    InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
              (param_1->___inputMapper_11,(MethodInfo *)0x0);
    if (param_1->___darkenState_10 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___darkenState_10,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
