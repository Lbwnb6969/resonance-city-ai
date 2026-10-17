// RVA 0x10cdac0 | FuryStudios.FurySDK.Utils.ConditionalGameObjectActivation$$Start
// PDB: ConditionalGameObjectActivation_Start_mC65395FD6A80104323AB3F832434CD25265E4255
// Body: [[110cdac0, 110cdadd]]
// Direct callees:
// 110cdae0 ConditionalGameObjectActivation_Trigger_m5C5D7FB8EF5567FF2A0B5CACD5AA3EA1562400D7

void __cdecl
ConditionalGameObjectActivation_Start_mC65395FD6A80104323AB3F832434CD25265E4255
          (ConditionalGameObjectActivation_t4D291951E240E6F4C65D3D7805D5800E92112FE9 *param_1,
          MethodInfo *param_2)

{
  if (param_1->___triggerOnStart_5 != false) {
    ConditionalGameObjectActivation_Trigger_m5C5D7FB8EF5567FF2A0B5CACD5AA3EA1562400D7
              (param_1,(MethodInfo *)0x0);
    return;
  }
  return;
}
