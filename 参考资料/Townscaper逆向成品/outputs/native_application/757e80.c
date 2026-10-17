// RVA 0x757e80 | Placemaker.Props.PropMeshReference$$Placemaker.Props.IPropEnable.OnEnable
// PDB: PropMeshReference_Placemaker_Props_IPropEnable_OnEnable_mFEBF5FA033873DB5FC3A7D336C38D1158BC72249
// Body: [[10757e80, 10757ea5]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 107574b0 PropMeshAnimator_OnTurnedOn_m0663EFEE10A7225DF99F78282D5988024F0B4D7A

void __cdecl
PropMeshReference_Placemaker_Props_IPropEnable_OnEnable_mFEBF5FA033873DB5FC3A7D336C38D1158BC72249
          (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,MethodInfo *param_3)

{
  if ((param_2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (param_2->___propMeshAnimator_28 !=
      (PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *)0x0)) {
    PropMeshAnimator_OnTurnedOn_m0663EFEE10A7225DF99F78282D5988024F0B4D7A
              (param_2->___propMeshAnimator_28,param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
