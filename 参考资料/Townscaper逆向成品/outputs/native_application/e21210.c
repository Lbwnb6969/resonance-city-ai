// RVA 0xe21210 | Placemaker.GroundClicker$$Update
// PDB: GroundClicker_Update_m8D6861FC666CCE9F59F1281CAA2C82562984E4BF
// Body: [[10e21210, 10e213b7]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e76a0 UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
// 103eff50 VoxelBobEffect_UpdateShader_m2C355F9825155740D677B34CBA00994C438817BC
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10e20380 GroundClicker_ColorPick_m8E3C1A57CE319C7BFBCAD7C8ADF75AB9A6FD5264
// 11143d40 AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GroundClicker_Update_m8D6861FC666CCE9F59F1281CAA2C82562984E4BF
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,MethodInfo *param_2)

{
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar1;
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar2;
  float fVar3;

  if (DAT_1152267f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_1152267f = '\x01';
  }
  if (param_1->___bobbing_9 == false) {
    return;
  }
  fVar3 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  fVar3 = fVar3 - param_1->___pressTime_11;
  if (__real_40000000 <= fVar3) {
    GroundClicker_ColorPick_m8E3C1A57CE319C7BFBCAD7C8ADF75AB9A6FD5264(param_1,(MethodInfo *)0x0);
    param_1->___bobbing_9 = false;
    return;
  }
  if (fVar3 <= ___real_3ea3d70a) {
    return;
  }
  if (param_1->___aboutToRemove_10 == false) {
    param_1->___aboutToRemove_10 = true;
    if (param_1->___pressSource_14 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
    goto LAB_10e213b3;
    AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
              (param_1->___pressSource_14,(MethodInfo *)0x0);
  }
  fVar3 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                    (0.29,2.0,fVar3,(MethodInfo *)0x0);
  fVar3 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                    (-0.2,-0.4,__real_3f800000 - (1.0 - fVar3) * (1.0 - fVar3),(MethodInfo *)0x0);
  if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pVVar1 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                       (param_1->___master_4,(MethodInfo *)0x0);
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pVVar2 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                            (param_1->___master_4,(MethodInfo *)0x0),
        pVVar2 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)) &&
       (fVar3 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                          (fVar3,pVVar2->___bobCurrent_5,
                           *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                           ->static_fields + 0x10),(MethodInfo *)0x0),
       pVVar1 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)) {
      pVVar1->___bobCurrent_5 = fVar3;
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pVVar1 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                             (param_1->___master_4,(MethodInfo *)0x0),
         pVVar1 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)) {
        VoxelBobEffect_UpdateShader_m2C355F9825155740D677B34CBA00994C438817BC
                  (pVVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_10e213b3:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
