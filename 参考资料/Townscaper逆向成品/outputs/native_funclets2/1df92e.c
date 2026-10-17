// RVA 0x1df92e | Recovered.function.called_by_1df76a
// PDB: FUN_101df92e
// Body: [[101df92e, 101df991] [101df9a5, 101df9a9]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5e90 MetaSave_get_shouldBeVisible_mFE7309D4ADC82785D27EB14CDFCE33C9589B350B
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

void FUN_101df92e(void)

{
  bool bVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;
  int unaff_EBP;
  int *unaff_ESI;

  if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)*unaff_ESI !=
      (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)*unaff_ESI,
                        (MethodInfo *)0x0);
    if ((MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)*unaff_ESI !=
        (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
      bVar1 = MetaSave_get_shouldBeVisible_mFE7309D4ADC82785D27EB14CDFCE33C9589B350B
                        ((MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)*unaff_ESI,
                         (MethodInfo *)0x0);
      *(bool *)(unaff_EBP + 8) = bVar1;
      if (pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar2,SUB41(*(undefined4 *)(unaff_EBP + 8),0),(MethodInfo *)0x0);
        if (*unaff_ESI != 0) {
          *(undefined1 *)(*unaff_ESI + 0x38) = 1;
          if (*unaff_ESI != 0) {
            ExceptionList = *(void **)(unaff_EBP + -0xc);
            *(undefined4 *)(*unaff_ESI + 0x3c) = 0;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
