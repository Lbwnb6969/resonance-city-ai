// RVA 0x10cda50 | FuryStudios.FurySDK.Utils.ConditionalGameObjectActivation$$AddListener
// PDB: ConditionalGameObjectActivation_AddListener_mCA9D322A4250D73BE0E8B1A63BF17EC8000B1947
// Body: [[110cda50, 110cda92]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10327f30 UnityEvent_1_AddListener_m142F8EC4F0B95BE4817D1B8BAB5311BF82761B7B_gshared

void __cdecl
ConditionalGameObjectActivation_AddListener_mCA9D322A4250D73BE0E8B1A63BF17EC8000B1947
          (ConditionalGameObjectActivation_t4D291951E240E6F4C65D3D7805D5800E92112FE9 *param_1,
          UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *param_2,MethodInfo *param_3)

{
  if (DAT_11523a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_RuntimeMethod_var
              );
    DAT_11523a6d = '\x01';
  }
  if ((UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 *)param_1->___satisfiedEvent_12 !=
      (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 *)0x0) {
    UnityEvent_1_AddListener_m142F8EC4F0B95BE4817D1B8BAB5311BF82761B7B_gshared
              ((UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 *)
               param_1->___satisfiedEvent_12,
               (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE *)param_2,
               UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_RuntimeMethod_var)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
