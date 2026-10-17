// RVA 0x234bd0 | Placemaker.Ui.ControlBinding$$OnStart
// PDB: ControlBinding_OnStart_mDE196A03B926777D4F28292EE21142FF7E65B0D7
// Body: [[10234bd0, 10234c07]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

void __cdecl
ControlBinding_OnStart_mDE196A03B926777D4F28292EE21142FF7E65B0D7
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;

  if (param_1->___srcBindingRow_5 != (BindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7 *)0x0) {
    pGVar1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___srcBindingRow_5,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar1,false,(MethodInfo *)0x0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
