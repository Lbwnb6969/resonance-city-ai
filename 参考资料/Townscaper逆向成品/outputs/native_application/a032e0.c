// RVA 0xa032e0 | Placemaker.SaveSystem$$PopulateSaveData
// PDB: SaveSystem_PopulateSaveData_m8EFD4FF7D4C37DEE57FE39B0A495377AD3AA763A
// Body: [[10a032e0, 10a03320]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103f89b0 WorldMaster_PopulateSaveData_m2141761F55390AC6602D99FE8478CB86D8831F3E
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258

void __cdecl
SaveSystem_PopulateSaveData_m8EFD4FF7D4C37DEE57FE39B0A495377AD3AA763A
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,MethodInfo *param_3)

{
  float fVar1;

  if ((param_2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) &&
     (param_1->___worldMaster_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
    WorldMaster_PopulateSaveData_m2141761F55390AC6602D99FE8478CB86D8831F3E
              (param_1->___worldMaster_4,param_2->___saveData_9,
               (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0,(MethodInfo *)0x0);
    fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    param_2->___lastSaveDataTime_12 = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
