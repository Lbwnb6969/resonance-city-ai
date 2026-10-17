// RVA 0x41fe90 | Placemaker.Ui.KeyboardAndMouseControlRemap$$DarkenerClicked
// PDB: KeyboardAndMouseControlRemap_DarkenerClicked_mE7F6D2F67805B2F0343EBE8C0322410D4C0EA261
// Body: [[1041fe90, 1041fee2]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A

void __cdecl
KeyboardAndMouseControlRemap_DarkenerClicked_mE7F6D2F67805B2F0343EBE8C0322410D4C0EA261
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          MethodInfo *param_2)

{
  if (param_1->___buttonMapState_16 != false) {
    param_1->___buttonMapState_16 = false;
    if (param_1->___inputMapper_11 == (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0)
    goto LAB_1041fede;
    InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
              (param_1->___inputMapper_11,(MethodInfo *)0x0);
    if (param_1->___darkenState_10 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_1041fede;
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___darkenState_10,false,(MethodInfo *)0x0);
  }
  if (param_1->___darkenState_10 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___darkenState_10,false,(MethodInfo *)0x0);
    return;
  }
LAB_1041fede:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
