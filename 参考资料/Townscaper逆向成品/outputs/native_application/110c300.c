// RVA 0x110c300 | FuryStudios.FurySDK.Internal.DotNetDeleteStorageRequest$$OnStarted
// PDB: DotNetDeleteStorageRequest_OnStarted_mFFA56E32DFE87C40ED3E0E528DEF5EC572669714
// Body: [[1110c300, 1110c356]]
// Direct callees:
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10a70e50 File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77

void __cdecl
DotNetDeleteStorageRequest_OnStarted_mFFA56E32DFE87C40ED3E0E528DEF5EC572669714
          (DotNetDeleteStorageRequest_t177E13C24132C22EB2DE1C0632B8E0F095B5F93C *param_1,
          MethodInfo *param_2)

{
  File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77
            (*(String_t **)&param_1->field_0x20,(MethodInfo *)0x0);
  if ((*(int *)&param_1->field_0x8 != 2) && (*(int *)&param_1->field_0x8 != 4)) {
    *(undefined4 *)&param_1->field_0x8 = 2;
    (**(code **)(*(int *)param_1 + 0x13c))(param_1,*(undefined4 *)(*(int *)param_1 + 0x140));
    if (*(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)&param_1->field_0x10 !=
        (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                (*(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
                  &param_1->field_0x10,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}
