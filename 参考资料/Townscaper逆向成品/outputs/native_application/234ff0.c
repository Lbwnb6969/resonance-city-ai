// RVA 0x234ff0 | Placemaker.Ui.ControlBinding$$SetStatusText
// PDB: ControlBinding_SetStatusText_mD4A9787B103A7002E9D282D2704230F192ECC2CF
// Body: [[10234ff0, 1023501a]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
ControlBinding_SetStatusText_mD4A9787B103A7002E9D282D2704230F192ECC2CF
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *pTVar1;

  pTVar1 = param_1->___statusText_7;
  if (pTVar1 != (TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *)0x0) {
    (**(code **)(pTVar1->_padding_ + 0x2cc))
              (pTVar1,param_2,*(undefined4 *)(pTVar1->_padding_ + 0x2d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
