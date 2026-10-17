// RVA 0x3f84d0 | Placemaker.WorldMaster$$New
// PDB: WorldMaster_New_m285406F3466084E0F9D01707DBE9ED07DF2F0416
// Body: [[103f84d0, 103f85ac]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10660370 Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 109fdb90 SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
// 10e12470 GridGenerator_GetStartingHex_m0CA5A5091AEA04B9CBCAD4612446E536EA9D1A8D

void __cdecl
WorldMaster_New_m285406F3466084E0F9D01707DBE9ED07DF2F0416
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar1;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar2;
  int iVar3;
  int iVar4;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar5;

  pSVar1 = param_1->___saveData_42;
  if (DAT_1151c94a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
    DAT_1151c94a = '\x01';
  }
  if (pSVar1 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52(pSVar1,(MethodInfo *)0x0);
    iVar3 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                      (0,0x28,(MethodInfo *)0x0);
    if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
    }
    iVar5 = GridGenerator_GetStartingHex_m0CA5A5091AEA04B9CBCAD4612446E536EA9D1A8D
                      (iVar3,(MethodInfo *)0x0);
    iVar3 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                      (-0xc,0xc,(MethodInfo *)0x0);
    iVar4 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                      (-0xc,0xc,(MethodInfo *)0x0);
    if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar1->___corners_4 !=
        (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) {
      lVar2.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = iVar4 + iVar5.___y_1;
      lVar2.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = iVar3 + iVar5.___x_0;
      lVar2.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = 0.0;
      List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar1->___corners_4,lVar2,
                 List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
