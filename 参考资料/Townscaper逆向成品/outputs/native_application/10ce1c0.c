// RVA 0x10ce1c0 | FuryStudios.FurySDK.Utils.DebugMenu$$Add
// PDB: DebugMenu_Add_m31C21E7592546A49829C003BD21405E25B2E230B
// Body: [[110ce1c0, 110ce3cd]]
// Direct callees:
// 1003e1c0 GetAt
// 1003e6d0 IsInstClass
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11031e30 List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared
// 110d02e0 MenuNavigationEntry__ctor_m4522ED770D078AC60D05AD1D459756C0E24C1A0E

void __cdecl
DebugMenu_Add_m31C21E7592546A49829C003BD21405E25B2E230B
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,
          MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *param_2,
          StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *param_3,MethodInfo *param_4)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar2;
  Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *pPVar3;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar4;
  CustomEntry_t52178788B948781461C5F6B5655F409DA823DF21 *pCVar5;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar6;
  String_t *pSVar7;
  Il2CppObject *pIVar8;

  if (DAT_11523a7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Find_m231A6777A64C9548931762C886499EA5680C77D3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Predicate_1__ctor_m9B8A8AB1CD2064AE60EB58EDCACB348385C393B7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Predicate_1_tB3BED61BBA2F763E8085F6DDE9083B14FAFF30FE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass22_0_U3CAddU3Eb__0_m5AEE0FC1B2A337CCB535A3DEEF447E6D8990CAF8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass22_0_tBE5F67D8DE18AB155B37AA29A0D67B52148A8728_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2313CDC41D9B6EB9353C485D48E29DDA23762E77);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE40984C76684170A807883EAB1D9B884707628DC);
    DAT_11523a7c = '\x01';
  }
  pUVar2 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass22_0_tBE5F67D8DE18AB155B37AA29A0D67B52148A8728_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar2->___U3CU3E1__state_0 = (int)param_3;
    pIVar8 = (Il2CppObject *)0x0;
    pMVar6 = param_1->___root_2;
    pUVar2->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
    while( true ) {
      if ((pUVar2->___U3CU3E1__state_0 == 0) ||
         (pMVar6 == (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0))
      goto LAB_110ce3c9;
      if (*(int *)(pUVar2->___U3CU3E1__state_0 + 0xc) + -1 <= (int)pIVar8) break;
      pPVar3 = (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *)pUVar2->___U3CU3E4__this_2;
      pLVar1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
               pMVar6->___U3CChildEntriesU3Ek__BackingField_3;
      if (pPVar3 == (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *)0x0) {
        pPVar3 = (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *)
                 il2cpp_codegen_object_new
                           (
                           Predicate_1_tB3BED61BBA2F763E8085F6DDE9083B14FAFF30FE_il2cpp_TypeInfo_var
                           );
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pPVar3,
                   (Il2CppObject *)pUVar2,
                   (int)
                   U3CU3Ec__DisplayClass22_0_U3CAddU3Eb__0_m5AEE0FC1B2A337CCB535A3DEEF447E6D8990CAF8_RuntimeMethod_var
                   ,Predicate_1__ctor_m9B8A8AB1CD2064AE60EB58EDCACB348385C393B7_RuntimeMethod_var);
        pUVar2->___U3CU3E4__this_2 =
             (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)pPVar3;
      }
      if (pLVar1 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_110ce3c9;
      pMVar4 = (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)
               List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared
                         (pLVar1,pPVar3,
                          List_1_Find_m231A6777A64C9548931762C886499EA5680C77D3_RuntimeMethod_var);
      if (pMVar4 == (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) {
        if ((CustomEntryU5BU5D_t371EC688E6A81C1A4C46C5AEF2FBE0694D488EFA *)
            pUVar2->___U3CU3E1__state_0 ==
            (CustomEntryU5BU5D_t371EC688E6A81C1A4C46C5AEF2FBE0694D488EFA *)0x0) goto LAB_110ce3c9;
        pCVar5 = CustomEntryU5BU5D_t371EC688E6A81C1A4C46C5AEF2FBE0694D488EFA::GetAt
                           ((CustomEntryU5BU5D_t371EC688E6A81C1A4C46C5AEF2FBE0694D488EFA *)
                            pUVar2->___U3CU3E1__state_0,(uint)pUVar2->___U3CU3E2__current_1);
        pMVar4 = (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)
                 il2cpp_codegen_object_new
                           (
                           MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                           );
        MenuNavigationEntry__ctor_m4522ED770D078AC60D05AD1D459756C0E24C1A0E
                  (pMVar4,(String_t *)pCVar5,pMVar6,(MethodInfo *)0x0);
      }
      pMVar6 = (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)
               IsInstClass((Il2CppObject *)pMVar4,
                           MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                          );
      if (pMVar6 == (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) {
        if ((CustomEntryU5BU5D_t371EC688E6A81C1A4C46C5AEF2FBE0694D488EFA *)
            pUVar2->___U3CU3E1__state_0 !=
            (CustomEntryU5BU5D_t371EC688E6A81C1A4C46C5AEF2FBE0694D488EFA *)0x0) {
          pCVar5 = CustomEntryU5BU5D_t371EC688E6A81C1A4C46C5AEF2FBE0694D488EFA::GetAt
                             ((CustomEntryU5BU5D_t371EC688E6A81C1A4C46C5AEF2FBE0694D488EFA *)
                              pUVar2->___U3CU3E1__state_0,(uint)pUVar2->___U3CU3E2__current_1);
          pSVar7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                             (_stringLiteral2313CDC41D9B6EB9353C485D48E29DDA23762E77,
                              (String_t *)pCVar5,
                              _stringLiteralE40984C76684170A807883EAB1D9B884707628DC,
                              (MethodInfo *)0x0);
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                    ((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
          return;
        }
        goto LAB_110ce3c9;
      }
      pUVar2->___U3CU3E2__current_1 =
           (Il2CppObject *)((int)&pUVar2->___U3CU3E2__current_1->field0_0x0 + 1);
      pIVar8 = pUVar2->___U3CU3E2__current_1;
    }
    if (DAT_11523abc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&List_1_Add_m1C5DEF20131414F0F8B6DD8BDC12DFC23A2E50A8_RuntimeMethod_var);
      DAT_11523abc = '\x01';
    }
    if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
        pMVar6->___U3CChildEntriesU3Ek__BackingField_3 !=
        (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                 pMVar6->___U3CChildEntriesU3Ek__BackingField_3,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
                 List_1_Add_m1C5DEF20131414F0F8B6DD8BDC12DFC23A2E50A8_RuntimeMethod_var);
      return;
    }
  }
LAB_110ce3c9:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
