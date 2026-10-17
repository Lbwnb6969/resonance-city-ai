// RVA 0x10ceb30 | FuryStudios.FurySDK.Utils.DebugMenu$$Right
// PDB: DebugMenu_Right_m420EF290D9774FE96FA2CAE534B791C66334C064
// Body: [[110ceb30, 110cecaf] [110cecb3, 110cecf5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11031e30 List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared
// 110ce970 DebugMenu_GetCurrentSelection_m18CD902980B3A28682F126C863D84256CD8C7452
// 110d0130 MenuNavigationEntry_FindFirstSelectable_mF91EBB39BA26F8B5472304F5994CF327A8951FDD

void __cdecl
DebugMenu_Right_m420EF290D9774FE96FA2CAE534B791C66334C064
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,MethodInfo *param_2)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  Il2CppObject *pIVar2;
  List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *pLVar3;
  int *piVar4;
  bool bVar5;
  Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *pPVar6;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar7;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar8;
  MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *pMVar9;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar10;
  ValueTuple_2_t0D3347680BCC1C04168F1A2D22519C3F3BE86CE8 VVar11;

  if (DAT_11523a79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Find_m231A6777A64C9548931762C886499EA5680C77D3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE36D014C7DAFC906316B346C2306A180434E993A_RuntimeMethod_var)
    ;
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
                       U3CU3Ec_U3CRightU3Eb__18_0_m1898BB2FA09C8C8AE3A0B6601203DF800A2DF05D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t3BC101054690BE9EE6163638A3AAAD996F5589F3_il2cpp_TypeInfo_var);
    DAT_11523a79 = '\x01';
  }
  VVar11 = DebugMenu_GetCurrentSelection_m18CD902980B3A28682F126C863D84256CD8C7452
                     (param_1,(MethodInfo *)0x0);
  pMVar10 = VVar11.___Item2_1;
  if (pMVar10 != (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) {
    pLVar1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
             pMVar10->___U3CChildEntriesU3Ek__BackingField_3;
    if ((U3CU3Ec_t3BC101054690BE9EE6163638A3AAAD996F5589F3_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t3BC101054690BE9EE6163638A3AAAD996F5589F3_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t3BC101054690BE9EE6163638A3AAAD996F5589F3_il2cpp_TypeInfo_var);
    }
    pPVar6 = *(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB **)
              ((int)U3CU3Ec_t3BC101054690BE9EE6163638A3AAAD996F5589F3_il2cpp_TypeInfo_var->
                    static_fields + 4);
    if (pPVar6 == (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *)0x0) {
      if ((U3CU3Ec_t3BC101054690BE9EE6163638A3AAAD996F5589F3_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (U3CU3Ec_t3BC101054690BE9EE6163638A3AAAD996F5589F3_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (U3CU3Ec_t3BC101054690BE9EE6163638A3AAAD996F5589F3_il2cpp_TypeInfo_var);
      }
      pIVar2 = *(Il2CppObject **)
                U3CU3Ec_t3BC101054690BE9EE6163638A3AAAD996F5589F3_il2cpp_TypeInfo_var->static_fields
      ;
      pPVar6 = (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *)
               il2cpp_codegen_object_new
                         (Predicate_1_tB3BED61BBA2F763E8085F6DDE9083B14FAFF30FE_il2cpp_TypeInfo_var)
      ;
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pPVar6,pIVar2,
                 (int)
                 U3CU3Ec_U3CRightU3Eb__18_0_m1898BB2FA09C8C8AE3A0B6601203DF800A2DF05D_RuntimeMethod_var
                 ,Predicate_1__ctor_m9B8A8AB1CD2064AE60EB58EDCACB348385C393B7_RuntimeMethod_var);
      *(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB **)
       ((int)U3CU3Ec_t3BC101054690BE9EE6163638A3AAAD996F5589F3_il2cpp_TypeInfo_var->static_fields +
       4) = pPVar6;
    }
    if (pLVar1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
      pMVar7 = (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)
               List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared
                         (pLVar1,pPVar6,
                          List_1_Find_m231A6777A64C9548931762C886499EA5680C77D3_RuntimeMethod_var);
      if (pMVar7 != (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) {
        if ((((Il2CppObject_u_0 *)&pMVar7->_padding_)->klass->typeHierarchyDepth <
             MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var->
             typeHierarchyDepth) ||
           (((Il2CppObject_u_0 *)&pMVar7->_padding_)->klass->typeHierarchy
            [MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var->
             typeHierarchyDepth - 1] !=
            MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pMVar8 = (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0;
        if (bVar5) {
          pMVar8 = pMVar7;
        }
        if (pMVar8 == (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) {
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    ((Il2CppObject *)pMVar7,
                     MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                    );
        }
        pMVar9 = MenuNavigationEntry_FindFirstSelectable_mF91EBB39BA26F8B5472304F5994CF327A8951FDD
                           (pMVar8,(MethodInfo *)0x0);
        if (pMVar9 != (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0) {
          pLVar3 = pMVar10->___U3CChildEntriesU3Ek__BackingField_3;
          if (pLVar3 != (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *)0x0) {
            if ((uint)pLVar3->____size_2 <= (uint)VVar11.___Item1_0) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            piVar4 = *(int **)(pLVar3->____items_1 + VVar11.___Item1_0 * 4 + 0x10);
            if (piVar4 != (int *)0x0) {
              (**(code **)(*piVar4 + 0xfc))(piVar4,*(undefined4 *)(*piVar4 + 0x100));
              (**(code **)(pMVar9->_padding_ + 0xf4))
                        (pMVar9,*(undefined4 *)(pMVar9->_padding_ + 0xf8));
              return;
            }
          }
          goto LAB_110cecea;
        }
      }
      return;
    }
  }
LAB_110cecea:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
