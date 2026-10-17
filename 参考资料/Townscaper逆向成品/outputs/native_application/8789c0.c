// RVA 0x8789c0 | BindingRow$$SetAction
// PDB: BindingRow_SetAction_mC8E5A2502E3232EA9347BAA336B50316B01B664B
// Body: [[108789c0, 108789fc]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
BindingRow_SetAction_mC8E5A2502E3232EA9347BAA336B50316B01B664B
          (BindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7 *param_1,
          InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *param_2,int param_3,
          String_t *param_4,int param_5,MethodInfo *param_6)

{
  TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *pTVar1;

  param_1->___action_7 = param_2;
  param_1->___actionRange_8 = param_3;
  param_1->___visibility_9 = param_5;
  pTVar1 = param_1->___actionText_4;
  if (pTVar1 != (TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *)0x0) {
    (**(code **)(pTVar1->_padding_ + 0x2cc))
              (pTVar1,param_4,*(undefined4 *)(pTVar1->_padding_ + 0x2d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
