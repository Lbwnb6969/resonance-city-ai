// RVA 0x10d0d60 | FuryStudios.FurySDK.Utils.PlatformSystemMessengerBase$$OnSecondaryButtonClick
// PDB: PlatformSystemMessengerBase_OnSecondaryButtonClick_m715108D29D0ED4CF65C41FC946BE73E04DBE37E7
// Body: [[110d0d60, 110d0d89]]
// Direct callees:
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906

void __cdecl
PlatformSystemMessengerBase_OnSecondaryButtonClick_m715108D29D0ED4CF65C41FC946BE73E04DBE37E7
          (PlatformSystemMessengerBase_t0DAC2C6021ACFA4428ACF4A1231D2CE0521A5F84 *param_1,
          MethodInfo *param_2)

{
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar1;

  if (param_1->___activeMessage_4 != (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *)0x0) {
    pOVar1 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             param_1->___activeMessage_4->___btnSecondaryCallback_6;
    if (pOVar1 != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906(pOVar1,(MethodInfo *)0x0);
    }
    param_1->___activeMessage_4 = (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *)0x0;
  }
  return;
}
