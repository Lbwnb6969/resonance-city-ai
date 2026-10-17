// RVA 0x3d5000 | Placemaker.Ui.MasterClicker$$Update
// PDB: MasterClicker_Update_m9B60935DD49E1858EBC576CCC0E132F346AE8E58
// Body: [[103d5000, 103d5224]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d3ee0 MasterClicker_ColorPick_m7075CE2A175732B0648136D88827210882A2373D
// 103e76a0 UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
// 103eff20 VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
// 103eff50 VoxelBobEffect_UpdateShader_m2C355F9825155740D677B34CBA00994C438817BC
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 1113f1f0 Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E
// 1113f230 Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5
// 11143d40 AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
MasterClicker_Update_m9B60935DD49E1858EBC576CCC0E132F346AE8E58
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  bool bVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar2;
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar3;
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar4;
  float fVar5;
  float fVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_28;
  undefined8 local_1c;
  undefined8 local_10;

  if (DAT_1151c85b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_1151c85b = '\x01';
  }
  bVar1 = Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5((MethodInfo *)0x0);
  if (bVar1) {
    pVVar2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E
                       (&local_28,(MethodInfo *)0x0);
    local_1c._0_4_ = pVVar2->___x_2;
    local_1c._4_4_ = pVVar2->___y_3;
    (param_1->___pointerPosition_16).___x_0 = (float)(undefined4)local_1c;
    (param_1->___pointerPosition_16).___y_1 = (float)local_1c._4_4_;
    local_10 = local_1c;
  }
  if (param_1->___bobbing_10 != false) {
    fVar6 = param_1->___pointerPressTime_15;
    fVar5 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    fVar5 = fVar5 - fVar6;
    if (__real_3fc00000 <= fVar5) {
      bVar1 = MasterClicker_ColorPick_m7075CE2A175732B0648136D88827210882A2373D
                        (param_1,(MethodInfo *)0x0);
      param_1->___bobbing_10 = false;
      if (!bVar1) {
        if (param_1->___master_7 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
LAB_103d5220:
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_null_reference_exception();
        }
        pVVar3 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                           (param_1->___master_7,(MethodInfo *)0x0);
        if (pVVar3 == (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)
        goto LAB_103d5220;
        VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
                  (pVVar3,0.0,(MethodInfo *)0x0);
      }
      param_1->___pointerPressUsed_14 = true;
    }
    else if (___real_3eb33333 < fVar5) {
      if (param_1->___aboutToRemove_11 == false) {
        param_1->___aboutToRemove_11 = true;
        if (param_1->___pressSource_20 ==
            (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) goto LAB_103d5220;
        AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
                  (param_1->___pressSource_20,(MethodInfo *)0x0);
      }
      fVar6 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                        (0.32,1.5,fVar5,(MethodInfo *)0x0);
      fVar6 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                        (-0.2,-0.4,__real_3f800000 - (1.0 - fVar6) * (1.0 - fVar6),(MethodInfo *)0x0
                        );
      if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        pVVar3 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                           (param_1->___master_7,(MethodInfo *)0x0);
        if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
          pVVar4 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                             (param_1->___master_7,(MethodInfo *)0x0);
          if (pVVar4 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0) {
            fVar6 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                              (fVar6,pVVar4->___bobCurrent_5,
                               *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                               ->static_fields + 0x10),(MethodInfo *)0x0);
            if (pVVar3 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0) {
              pVVar3->___bobCurrent_5 = fVar6;
              if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              {
                pVVar3 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                                   (param_1->___master_7,(MethodInfo *)0x0);
                if (pVVar3 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0) {
                  VoxelBobEffect_UpdateShader_m2C355F9825155740D677B34CBA00994C438817BC
                            (pVVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_103d5220;
    }
  }
  return;
}
