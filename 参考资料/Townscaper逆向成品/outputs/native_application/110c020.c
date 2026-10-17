// RVA 0x110c020 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$set_IsSuspended
// PDB: BasePlatformSDK_set_IsSuspended_m545A4B5C3A03D483152C53BCB98BE8AF8DD93092
// Body: [[1110c020, 1110c04f]]
// Direct callees:
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906

void __cdecl
BasePlatformSDK_set_IsSuspended_m545A4B5C3A03D483152C53BCB98BE8AF8DD93092
          (BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,bool param_2,
          MethodInfo *param_3)

{
  bool bVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;

  bVar1 = param_1->___isSuspended_11;
  param_1->___isSuspended_11 = param_2;
  if (bVar1 != param_2) {
    if (param_2) {
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               param_1->___OnSuspended_7;
    }
    else {
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               param_1->___OnResumed_8;
    }
    if (pOVar2 != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906(pOVar2,(MethodInfo *)0x0);
    }
  }
  return;
}
