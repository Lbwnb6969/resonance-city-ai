// RVA 0x3f7a90 | Placemaker.WorldMaster$$GetSaveString
// PDB: WorldMaster_GetSaveString_mFFA10380F14E182DBD8BCD5E871B1F6EB441BD45
// Body: [[103f7a90, 103f7b2b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10302ad0 TextSaveSystem_SaveToString_m33876E3566CFFAC799F4F59B483E6A9E96373D5A
// 109fdb90 SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
// 10e77c40 Graph_Save_m07C6707CB3FA81485C1705D028ABA557CE1711EA

String_t * __cdecl
WorldMaster_GetSaveString_mFFA10380F14E182DBD8BCD5E871B1F6EB441BD45
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar1;
  List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *pLVar2;
  List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *pLVar3;
  String_t *pSVar4;

  if (DAT_1151c947 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    DAT_1151c947 = '\x01';
  }
  if (param_1->___saveData_42 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
              (param_1->___saveData_42,(MethodInfo *)0x0);
    if (param_1->___graph_7 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
      Graph_Save_m07C6707CB3FA81485C1705D028ABA557CE1711EA
                (param_1->___graph_7,param_1->___saveData_42,(MethodInfo *)0x0);
      pSVar1 = param_1->___saveData_42;
      if (pSVar1 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
        pLVar2 = pSVar1->___corners_4;
        pLVar3 = pSVar1->___voxels_5;
        if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
        }
        pSVar4 = TextSaveSystem_SaveToString_m33876E3566CFFAC799F4F59B483E6A9E96373D5A
                           (pLVar2,pLVar3,(MethodInfo *)0x0);
        param_1->___lastSaveString_38 = pSVar4;
        return pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
