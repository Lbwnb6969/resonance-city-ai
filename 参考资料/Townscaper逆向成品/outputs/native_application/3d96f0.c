// RVA 0x3d96f0 | Placemaker.Modules.ModuleLibrary$$OnEnable
// PDB: ModuleLibrary_OnEnable_m77D431567D52743B0896B88BC87FBBD9458AFD45
// Body: [[103d96f0, 103d97a8] [103d97af, 103d97ed]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1021c6c0 Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
// 10225cb0 Dictionary_2__ctor_m12FE70A54A1FBD146CB345A06031AB8A5DB02BBA_gshared
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
ModuleLibrary_OnEnable_m77D431567D52743B0896B88BC87FBBD9458AFD45
          (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *param_1,MethodInfo *param_2)

{
  int iVar1;
  List_1_tDF39F0070295AEA28704D5911074570BAA2FA4F3 *pLVar2;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar3;
  ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *pMVar4;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *pDVar5;
  Il2CppObject *pIVar6;

  pMVar4 = param_1;
  if (DAT_1151c882 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_mD2B80540107DEEE063D15B728C1386DC8D471FCB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mCFD4742ABB56B754629A6D195B2CBEBA6BCEC149_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_t330793D7BF7C71808F7A4AEC08A1EF7516C7CB96_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m55D55C36A9F4DCEAA7B2D4489CFEB9FF235A6617_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mD334E70A7DCC51237ACD9BB569BDD4B10D2F36A0_RuntimeMethod_var)
    ;
    DAT_1151c882 = '\x01';
  }
  if (param_1->___cornerLookups_7 != (List_1_tDF39F0070295AEA28704D5911074570BAA2FA4F3 *)0x0) {
    iVar1 = param_1->___cornerLookups_7->____size_2;
    pDVar5 = (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
             il2cpp_codegen_object_new
                       (Dictionary_2_t330793D7BF7C71808F7A4AEC08A1EF7516C7CB96_il2cpp_TypeInfo_var);
    Dictionary_2__ctor_m12FE70A54A1FBD146CB345A06031AB8A5DB02BBA_gshared
              (pDVar5,iVar1,
               Dictionary_2__ctor_mCFD4742ABB56B754629A6D195B2CBEBA6BCEC149_RuntimeMethod_var);
    param_1->___cornerDict_13 = (Dictionary_2_t330793D7BF7C71808F7A4AEC08A1EF7516C7CB96 *)pDVar5;
    pIVar6 = (Il2CppObject *)0x0;
    if (param_1->___cornerLookups_7 != (List_1_tDF39F0070295AEA28704D5911074570BAA2FA4F3 *)0x0) {
      iVar1 = param_1->___cornerLookups_7->____size_2;
      if (0 < iVar1) {
        param_1 = (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x10;
        do {
          pLVar2 = pMVar4->___cornerLookups_7;
          pDVar3 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                   pMVar4->___cornerDict_13;
          if (pLVar2 == (List_1_tDF39F0070295AEA28704D5911074570BAA2FA4F3 *)0x0) goto LAB_103d97e9;
          if ((Il2CppObject *)pLVar2->____size_2 <= pIVar6) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          if ((*(int *)(pLVar2->____items_1 + (int)&param_1->_padding_) == 0) ||
             (pDVar3 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0))
          goto LAB_103d97e9;
          Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                    (pDVar3,*(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)
                             (*(int *)(pLVar2->____items_1 + (int)&param_1->_padding_) + 8),pIVar6,
                     Dictionary_2_Add_mD2B80540107DEEE063D15B728C1386DC8D471FCB_RuntimeMethod_var);
          pIVar6 = (Il2CppObject *)((int)&pIVar6->field0_0x0 + 1);
          param_1 = (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)&param_1->_padding_;
        } while ((int)pIVar6 < iVar1);
      }
      return;
    }
  }
LAB_103d97e9:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
