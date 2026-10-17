// RVA 0x75b320 | Placemaker.PropPlacer$$OnDoneResetting
// PDB: PropPlacer_OnDoneResetting_mD3BB9F2C178E5AC4FBF9D74170350ECC05A7FE4C
// Body: [[1075b320, 1075b34f]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

void __cdecl
PropPlacer_OnDoneResetting_mD3BB9F2C178E5AC4FBF9D74170350ECC05A7FE4C
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,MethodInfo *param_2)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;

  if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___secondaryPropsContainer_8
      != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pGVar1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___secondaryPropsContainer_8,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar1,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
