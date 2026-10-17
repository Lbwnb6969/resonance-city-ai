// RVA 0x234150 | Placemaker.Ui.ControlBinding$$CanKeyBeMapped
// PDB: ControlBinding_CanKeyBeMapped_m6E62C35AE08E2FBE675C5BEE5A827F1A955ACB74
// Body: [[10234150, 1023423a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 11031e30 List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared

bool __cdecl
ControlBinding_CanKeyBeMapped_m6E62C35AE08E2FBE675C5BEE5A827F1A955ACB74
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar2;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar3;
  Il2CppObject *pIVar4;

  if (DAT_1151b5a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Find_m76949A7B2F486F40D736C25F73896E5483279FC1_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Predicate_1__ctor_m6B6D8E35C0E83BBC784E881CCFA837ED78F48F14_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_U3CCanKeyBeMappedU3Eb__0_m797E1427AB4D6299CF4619B071AD0D2CC355A637_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_t175BF95AC59B63B1F0A0BAED77AADF7FAD56E15A_il2cpp_TypeInfo_var
              );
    DAT_1151b5a0 = '\x01';
  }
  pBVar2 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass44_0_t175BF95AC59B63B1F0A0BAED77AADF7FAD56E15A_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar2,(MethodInfo *)0x0);
  if (pBVar2 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar2->___name_0 = param_2;
    if ((ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var);
    }
    pLVar1 = *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)
              ((int)ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var->
                    static_fields + 4);
    pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar3,(Il2CppObject *)pBVar2,
               (int)
               U3CU3Ec__DisplayClass44_0_U3CCanKeyBeMappedU3Eb__0_m797E1427AB4D6299CF4619B071AD0D2CC355A637_RuntimeMethod_var
               ,Predicate_1__ctor_m6B6D8E35C0E83BBC784E881CCFA837ED78F48F14_RuntimeMethod_var);
    if (pLVar1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
      pIVar4 = List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared
                         (pLVar1,(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *)pOVar3,
                          List_1_Find_m76949A7B2F486F40D736C25F73896E5483279FC1_RuntimeMethod_var);
      return (bool)(-(pIVar4 != (Il2CppObject *)0x0) & 1);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
