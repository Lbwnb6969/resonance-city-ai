// RVA 0x3f89b0 | Placemaker.WorldMaster$$PopulateSaveData
// PDB: WorldMaster_PopulateSaveData_m2141761F55390AC6602D99FE8478CB86D8831F3E
// Body: [[103f89b0, 103f8add]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10302ad0 TextSaveSystem_SaveToString_m33876E3566CFFAC799F4F59B483E6A9E96373D5A
// 103261e0 UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared
// 106ebae0 DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
// 106ebde0 DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090
// 109fbd50 SaveCamera_Save_m239BE90E37FC7B9E928E24888920EA8AC32C13BD
// 10a0af90 ShadowBaker_Save_m4859C55C673AB732B58F5B90BDC5A3E38A26A5AD
// 10e77c40 Graph_Save_m07C6707CB3FA81485C1705D028ABA557CE1711EA

void __cdecl
WorldMaster_PopulateSaveData_m2141761F55390AC6602D99FE8478CB86D8831F3E
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_3,MethodInfo *param_4)

{
  List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *pLVar1;
  List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *pLVar2;
  String_t *pSVar3;
  long64 lVar4;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 local_c;

  if (DAT_1151c946 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_m9EE9B35D93184158C0634B10A576D643D967B25A_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    DAT_1151c946 = '\x01';
  }
  if ((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)param_1->___onCameraSave_53 !=
      (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)0x0) {
    UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared
              ((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)
               param_1->___onCameraSave_53,(Il2CppObject *)param_2,
               Action_1_Invoke_m9EE9B35D93184158C0634B10A576D643D967B25A_RuntimeMethod_var);
    if (param_1->___shadowBaker_31 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0)
    {
      ShadowBaker_Save_m4859C55C673AB732B58F5B90BDC5A3E38A26A5AD
                (param_1->___shadowBaker_31,param_2,(MethodInfo *)0x0);
      if (param_1->___saveCamera_25 != (SaveCamera_t7E86B5A1216D55E6BA708D6AA32DDA610977BD0E *)0x0)
      {
        SaveCamera_Save_m239BE90E37FC7B9E928E24888920EA8AC32C13BD
                  (param_1->___saveCamera_25,param_2,(MethodInfo *)0x0);
        if (param_1->___graph_7 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
          Graph_Save_m07C6707CB3FA81485C1705D028ABA557CE1711EA
                    (param_1->___graph_7,param_2,(MethodInfo *)0x0);
          if ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
          }
          local_c = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090((MethodInfo *)0x0)
          ;
          lVar4 = DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
                            (&local_c,(MethodInfo *)0x0);
          if (param_2 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
            pLVar1 = param_2->___corners_4;
            pLVar2 = param_2->___voxels_5;
            param_2->___lastWriteTime_1 = lVar4;
            if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 has_cctor != '\0') &&
               (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        );
            }
            pSVar3 = TextSaveSystem_SaveToString_m33876E3566CFFAC799F4F59B483E6A9E96373D5A
                               (pLVar1,pLVar2,(MethodInfo *)0x0);
            param_2->___saveString_0 = pSVar3;
            param_1->___lastSaveString_38 = pSVar3;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
