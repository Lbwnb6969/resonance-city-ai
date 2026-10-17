// RVA 0x3f8420 | Placemaker.WorldMaster$$Load
// PDB: WorldMaster_Load_mBC50875EF50A204BF126136BC784BFDF7E35469D
// Body: [[103f8420, 103f84c1]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10301d60 TextSaveSystem_LoadFromString_mCADEA552BBD342F6290459E31BB3F0CC6C4857E3
// 109fdb90 SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52

bool __cdecl
WorldMaster_Load_mBC50875EF50A204BF126136BC784BFDF7E35469D
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar1;
  List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *pLVar2;
  List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *pLVar3;
  bool bVar4;

  if (DAT_1151c949 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    DAT_1151c949 = '\x01';
  }
  if (param_1->___saveData_42 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
              (param_1->___saveData_42,(MethodInfo *)0x0);
    pSVar1 = param_1->___saveData_42;
    if (pSVar1 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
      pLVar2 = pSVar1->___voxels_5;
      pLVar3 = pSVar1->___corners_4;
      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      }
      bVar4 = TextSaveSystem_LoadFromString_mCADEA552BBD342F6290459E31BB3F0CC6C4857E3
                        (param_2,pLVar3,pLVar2,(MethodInfo *)0x0);
      if (!bVar4) {
        return false;
      }
      param_1->___state_57 = '\x01';
      param_1->___anyChange_59 = false;
      param_1->___lastChangeTime_60 = -1.0;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
