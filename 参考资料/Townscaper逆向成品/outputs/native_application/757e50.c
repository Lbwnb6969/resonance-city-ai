// RVA 0x757e50 | Placemaker.Props.PropMeshReference$$Placemaker.Props.IPropEnable.OnDisable
// PDB: PropMeshReference_Placemaker_Props_IPropEnable_OnDisable_m2FD767713A1D7D043EE495104AED802F4E46C654
// Body: [[10757e50, 10757e75]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10756ec0 PropMeshAnimator_OnTurnedOff_mE098F53DD6B1ADE73CA0EF051CE15CCE0A793A4E

void __cdecl
PropMeshReference_Placemaker_Props_IPropEnable_OnDisable_m2FD767713A1D7D043EE495104AED802F4E46C654
          (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,MethodInfo *param_3)

{
  if ((param_2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (param_2->___propMeshAnimator_28 !=
      (PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *)0x0)) {
    PropMeshAnimator_OnTurnedOff_mE098F53DD6B1ADE73CA0EF051CE15CCE0A793A4E
              (param_2->___propMeshAnimator_28,param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
