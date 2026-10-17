// RVA 0x1d95e0 | Placemaker.Ui.LanguageButtons.S$$System.IComparable<Placemaker.Ui.LanguageButtons.S>.CompareTo
// PDB: S_System_IComparableU3CPlacemaker_Ui_LanguageButtons_SU3E_CompareTo_mD8C3F242DC48102AA65B2AAAD78BB6BDED7C0954
// Body: [[101d95e0, 101d9601]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10f01560 String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF

int __cdecl
S_System_IComparableU3CPlacemaker_Ui_LanguageButtons_SU3E_CompareTo_mD8C3F242DC48102AA65B2AAAD78BB6BDED7C0954
          (S_t4BD1D131D7F9FE80FCF04430DEEE139FBB41043E *param_1,
          S_t4BD1D131D7F9FE80FCF04430DEEE139FBB41043E param_2,MethodInfo *param_3)

{
  int iVar1;

  if (param_1->___nativeName_1 != (String_t *)0x0) {
    iVar1 = String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF
                      (param_1->___nativeName_1,param_2.___nativeName_1,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
