// RVA 0x110b870 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$AreFeaturesSupported
// PDB: BasePlatformSDK_AreFeaturesSupported_mBCE70E58C7AE273A9547542B8A6D6157DC1880D1
// Body: [[1110b870, 1110b894]]
// Direct callees:

bool __cdecl
BasePlatformSDK_AreFeaturesSupported_mBCE70E58C7AE273A9547542B8A6D6157DC1880D1
          (BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,uint param_2,
          MethodInfo *param_3)

{
  uint uVar1;

  uVar1 = (**(code **)(param_1->_padding_ + 0x1fc))
                    (param_1,*(undefined4 *)(param_1->_padding_ + 0x200));
  return (uVar1 & param_2) == param_2;
}
