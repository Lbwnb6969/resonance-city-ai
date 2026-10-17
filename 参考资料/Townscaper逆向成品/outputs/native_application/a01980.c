// RVA 0xa01980 | Placemaker.SaveSystem$$IsMetaSaveLoading
// PDB: SaveSystem_IsMetaSaveLoading_m45FDB3F00A4469483AE1F290D0FC616E050CC4FC
// Body: [[10a01980, 10a019c8]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17b0 AxisCalibrator_get_isValid_m25146C1631F789BB711CB06CFDC49656185F63FD
// 10a02660 SaveSystem_LoadMetaSaveFromDisk_m9D1FB26841AFEDA11640A9795C42A080E374EB53

bool __cdecl
SaveSystem_IsMetaSaveLoading_m45FDB3F00A4469483AE1F290D0FC616E050CC4FC
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,MethodInfo *param_3)

{
  bool bVar1;

  if (param_2 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  bVar1 = AxisCalibrator_get_isValid_m25146C1631F789BB711CB06CFDC49656185F63FD
                    ((AxisCalibrator_t12B3A7D897E39A8D6B763A9485C82D37762A0E2D *)param_2,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    if ((5 < param_1->___state_7) ||
       (param_1->___startRefreshTime_25 < param_2->___lastDiskSyncTime_10 ||
        param_1->___startRefreshTime_25 == param_2->___lastDiskSyncTime_10)) {
      return false;
    }
    SaveSystem_LoadMetaSaveFromDisk_m9D1FB26841AFEDA11640A9795C42A080E374EB53
              (param_1,param_2,(MethodInfo *)0x0);
  }
  return true;
}
