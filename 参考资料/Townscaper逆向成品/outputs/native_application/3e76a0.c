// RVA 0x3e76a0 | Placemaker.Ui.UiMaster$$get_voxelBobEffect
// PDB: UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
// Body: [[103e76a0, 103e76b6]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 * __cdecl
UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  if (param_1->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    return param_1->___worldMaster_5->___voxelBobEffect_15;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
