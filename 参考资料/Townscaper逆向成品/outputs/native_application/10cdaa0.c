// RVA 0x10cdaa0 | FuryStudios.FurySDK.Utils.ConditionalGameObjectActivation$$Awake
// PDB: ConditionalGameObjectActivation_Awake_mE46C9037762784D5CFF3FEC0840942E8C52C4C82
// Body: [[110cdaa0, 110cdabd]]
// Direct callees:
// 110cdae0 ConditionalGameObjectActivation_Trigger_m5C5D7FB8EF5567FF2A0B5CACD5AA3EA1562400D7

void __cdecl
ConditionalGameObjectActivation_Awake_mE46C9037762784D5CFF3FEC0840942E8C52C4C82
          (ConditionalGameObjectActivation_t4D291951E240E6F4C65D3D7805D5800E92112FE9 *param_1,
          MethodInfo *param_2)

{
  if (param_1->___triggerOnAwake_4 != false) {
    ConditionalGameObjectActivation_Trigger_m5C5D7FB8EF5567FF2A0B5CACD5AA3EA1562400D7
              (param_1,(MethodInfo *)0x0);
    return;
  }
  return;
}
