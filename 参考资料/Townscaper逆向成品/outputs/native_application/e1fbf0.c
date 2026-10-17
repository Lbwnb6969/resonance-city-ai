// RVA 0xe1fbf0 | Placemaker.GridGenerator$$UnmotivatePatch
// PDB: GridGenerator_UnmotivatePatch_m6BD5A9EE5049C6640E7C01A666B5D43B029F419A
// Body: [[10e1fbf0, 10e1fc4d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10227350 Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
// 103dcef0 MotivationCounter_RemoveMotivation_m3047334055B8ECC6F01CFAF8E94626B272E7D23D

void __cdecl
GridGenerator_UnmotivatePatch_m6BD5A9EE5049C6640E7C01A666B5D43B029F419A
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_3,MethodInfo *param_4)

{
  Il2CppObject *pIVar1;

  if (DAT_11522668 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
              );
    DAT_11522668 = '\x01';
  }
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 !=
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    pIVar1 = Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                       ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                        param_1->___patchDict_10,param_2,
                        Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                       );
    if (pIVar1 != (Il2CppObject *)0x0) {
      MotivationCounter_RemoveMotivation_m3047334055B8ECC6F01CFAF8E94626B272E7D23D
                ((MotivationCounter_t0A263E14534ECFAB9C180D71127E5C3713804F1E *)&pIVar1[3].monitor,
                 param_3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
