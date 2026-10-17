// RVA 0x10cdd00 | FuryStudios.FurySDK.Utils.ConditionalGameObjectActivation$$Update
// PDB: ConditionalGameObjectActivation_Update_m87CFE3928C3777A9AE78AD7D27F17846132C60E1
// Body: [[110cdd00, 110cdd1d]]
// Direct callees:
// 110cdae0 ConditionalGameObjectActivation_Trigger_m5C5D7FB8EF5567FF2A0B5CACD5AA3EA1562400D7

void __cdecl
ConditionalGameObjectActivation_Update_m87CFE3928C3777A9AE78AD7D27F17846132C60E1
          (ConditionalGameObjectActivation_t4D291951E240E6F4C65D3D7805D5800E92112FE9 *param_1,
          MethodInfo *param_2)

{
  if (param_1->___triggerEveryUpdate_6 != false) {
    ConditionalGameObjectActivation_Trigger_m5C5D7FB8EF5567FF2A0B5CACD5AA3EA1562400D7
              (param_1,(MethodInfo *)0x0);
    return;
  }
  return;
}
