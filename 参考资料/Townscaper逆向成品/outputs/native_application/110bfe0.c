// RVA 0x110bfe0 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$set_IsConstrained
// PDB: BasePlatformSDK_set_IsConstrained_mC62898A7568AC4051252190153969B73C74365A8
// Body: [[1110bfe0, 1110c011]]
// Direct callees:
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906

void __cdecl
BasePlatformSDK_set_IsConstrained_mC62898A7568AC4051252190153969B73C74365A8
          (BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,bool param_2,
          MethodInfo *param_3)

{
  bool bVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;

  bVar1 = param_1->___isConstrained_12;
  param_1->___isConstrained_12 = param_2;
  if (bVar1 != param_2) {
    if (param_1->___isSuspended_11 == false) {
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               param_1->___OnUnconstrained_10;
    }
    else {
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               param_1->___OnConstrained_9;
    }
    if (pOVar2 != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906(pOVar2,(MethodInfo *)0x0);
    }
  }
  return;
}
