// RVA 0x110b700 | FuryStudios.FurySDK.Internal.AsyncRequest$$Success
// PDB: AsyncRequest_Success_mD7A9F46B76A84F8251EF08BEDC0780C9D6F4BEF1
// Body: [[1110b700, 1110b749]]
// Direct callees:
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906

void __cdecl
AsyncRequest_Success_mD7A9F46B76A84F8251EF08BEDC0780C9D6F4BEF1
          (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *param_1,MethodInfo *param_2)

{
  if ((param_1->___U3CStateU3Ek__BackingField_0 != 2) &&
     (param_1->___U3CStateU3Ek__BackingField_0 != 4)) {
    param_1->___U3CStateU3Ek__BackingField_0 = 2;
    (**(code **)(param_1->_padding_ + 0x13c))(param_1,*(undefined4 *)(param_1->_padding_ + 0x140));
    if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___OnComplete_2 !=
        (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 param_1->___OnComplete_2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}
