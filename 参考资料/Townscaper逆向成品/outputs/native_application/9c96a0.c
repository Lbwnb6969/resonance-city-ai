// RVA 0x9c96a0 | Placemaker.Ui.UpdateState.<>c__DisplayClass33_0$$<Subscribe>b__0
// PDB: U3CU3Ec__DisplayClass33_0_U3CSubscribeU3Eb__0_m833274C5C7FC6DE676259AE00F9B6557A103DB3A
// Body: [[109c96a0, 109c9704]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 11134b60 CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass33_0_U3CSubscribeU3Eb__0_m833274C5C7FC6DE676259AE00F9B6557A103DB3A
          (U3CU3Ec__DisplayClass33_0_tFBF011B4E72A4951EF31CDB1C4EFC13AE2AD5CAD *param_1,
          float param_2,MethodInfo *param_3)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;

  if (param_1->___canvasGroup_0 != (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)0x0) {
    CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53
              (param_1->___canvasGroup_0,param_2,(MethodInfo *)0x0);
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___canvasGroup_0 !=
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
      pGVar1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                          param_1->___canvasGroup_0,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar1,___real_00000000 < param_2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
