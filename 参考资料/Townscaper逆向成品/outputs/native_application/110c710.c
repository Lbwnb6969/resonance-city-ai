// RVA 0x110c710 | FuryStudios.FurySDK.Internal.DotNetLoadStorageRequest$$OnTaskFinish
// PDB: DotNetLoadStorageRequest_OnTaskFinish_m84171E2825FF6C2FA41FD135EAE2F795DC2BA736
// Body: [[1110c710, 1110c75f]]
// Direct callees:
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906

void __cdecl
DotNetLoadStorageRequest_OnTaskFinish_m84171E2825FF6C2FA41FD135EAE2F795DC2BA736
          (DotNetLoadStorageRequest_tB242851C4F15B5DC4FB16BDE5068F452B3927568 *param_1,
          MethodInfo *param_2)

{
  param_1->_padding_ = (int)param_1->___data_11;
  if ((param_1->_padding_ != 2) && (param_1->_padding_ != 4)) {
    param_1->_padding_ = 2;
    (**(code **)(param_1->_padding_ + 0x13c))(param_1,*(undefined4 *)(param_1->_padding_ + 0x140));
    if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->_padding_ !=
        (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->_padding_,
                 (MethodInfo *)0x0);
      return;
    }
  }
  return;
}
