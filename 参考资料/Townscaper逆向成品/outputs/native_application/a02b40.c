// RVA 0xa02b40 | Placemaker.SaveSystem$$MaybeSaveCurrent
// PDB: SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3
// Body: [[10a02b40, 10a02bf6]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103f89b0 WorldMaster_PopulateSaveData_m2141761F55390AC6602D99FE8478CB86D8831F3E
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a01420 SaveSystem_GetAndMaybeCreateCurrent_m74D085ECCF07221F62EE5ED9BF741F12EDE4ECC2
// 10a03390 SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4
// 11149190 ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477

bool __cdecl
SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar1;
  float fVar2;

  if (param_1->___worldMaster_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    if (param_1->___worldMaster_4->___anyChange_59 == false) {
      return false;
    }
    SaveSystem_GetAndMaybeCreateCurrent_m74D085ECCF07221F62EE5ED9BF741F12EDE4ECC2
              (param_1,(MethodInfo *)0x0);
    pMVar1 = param_1->___currentMetaSave_14;
    if ((pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) &&
       (param_1->___worldMaster_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0))
    {
      WorldMaster_PopulateSaveData_m2141761F55390AC6602D99FE8478CB86D8831F3E
                (param_1->___worldMaster_4,pMVar1->___saveData_9,
                 (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0,(MethodInfo *)0x0);
      fVar2 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      pMVar1->___lastSaveDataTime_12 = fVar2;
      SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4
                (param_1,param_1->___currentMetaSave_14,true,(MethodInfo *)0x0);
      pMVar1 = param_1->___currentMetaSave_14;
      if (pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
        if (pMVar1->___lastTextureLoadTime_11 <= pMVar1->___lastSaveDataTime_12) {
          if (pMVar1->___saveData_9 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)
          goto LAB_10a02bf2;
          ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477
                    (pMVar1->___texture_7,pMVar1->___saveData_9->___bigJpg_6,(MethodInfo *)0x0);
          fVar2 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0)
          ;
          pMVar1->___lastTextureLoadTime_11 = fVar2;
        }
        if (param_1->___worldMaster_4 !=
            (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
          param_1->___worldMaster_4->___anyChange_59 = false;
          return true;
        }
      }
    }
  }
LAB_10a02bf2:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
