// RVA 0x10d0130 | FuryStudios.FurySDK.Utils.DebugMenu.MenuNavigationEntry$$FindFirstSelectable
// PDB: MenuNavigationEntry_FindFirstSelectable_mF91EBB39BA26F8B5472304F5994CF327A8951FDD
// Body: [[110d0130, 110d021d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 11031e30 List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared

MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 * __cdecl
MenuNavigationEntry_FindFirstSelectable_mF91EBB39BA26F8B5472304F5994CF327A8951FDD
          (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *param_1,
          MethodInfo *param_2)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  Il2CppObject *pIVar2;
  Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *pPVar3;
  MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *pMVar4;

  if (DAT_11523abd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Find_m231A6777A64C9548931762C886499EA5680C77D3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Predicate_1__ctor_m9B8A8AB1CD2064AE60EB58EDCACB348385C393B7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Predicate_1_tB3BED61BBA2F763E8085F6DDE9083B14FAFF30FE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3CFindFirstSelectableU3Eb__23_0_m63D52FF81284BB470790E5CC08AE940D9CF8CE35_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t2FB63575A6C494AFCE7F8866603A8059B1D36D15_il2cpp_TypeInfo_var);
    DAT_11523abd = '\x01';
  }
  pLVar1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
           param_1->___U3CChildEntriesU3Ek__BackingField_3;
  if ((U3CU3Ec_t2FB63575A6C494AFCE7F8866603A8059B1D36D15_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t2FB63575A6C494AFCE7F8866603A8059B1D36D15_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t2FB63575A6C494AFCE7F8866603A8059B1D36D15_il2cpp_TypeInfo_var)
    ;
  }
  pPVar3 = *(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB **)
            ((int)U3CU3Ec_t2FB63575A6C494AFCE7F8866603A8059B1D36D15_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pPVar3 == (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *)0x0) {
    if ((U3CU3Ec_t2FB63575A6C494AFCE7F8866603A8059B1D36D15_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t2FB63575A6C494AFCE7F8866603A8059B1D36D15_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t2FB63575A6C494AFCE7F8866603A8059B1D36D15_il2cpp_TypeInfo_var);
    }
    pIVar2 = *(Il2CppObject **)
              U3CU3Ec_t2FB63575A6C494AFCE7F8866603A8059B1D36D15_il2cpp_TypeInfo_var->static_fields;
    pPVar3 = (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *)
             il2cpp_codegen_object_new
                       (Predicate_1_tB3BED61BBA2F763E8085F6DDE9083B14FAFF30FE_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pPVar3,pIVar2,
               (int)
               U3CU3Ec_U3CFindFirstSelectableU3Eb__23_0_m63D52FF81284BB470790E5CC08AE940D9CF8CE35_RuntimeMethod_var
               ,Predicate_1__ctor_m9B8A8AB1CD2064AE60EB58EDCACB348385C393B7_RuntimeMethod_var);
    *(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB **)
     ((int)U3CU3Ec_t2FB63575A6C494AFCE7F8866603A8059B1D36D15_il2cpp_TypeInfo_var->static_fields + 4)
         = pPVar3;
  }
  if (pLVar1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pMVar4 = (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)
             List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared
                       (pLVar1,pPVar3,
                        List_1_Find_m231A6777A64C9548931762C886499EA5680C77D3_RuntimeMethod_var);
    return pMVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
