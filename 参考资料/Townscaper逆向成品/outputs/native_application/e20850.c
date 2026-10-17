// RVA 0xe20850 | Placemaker.GroundClicker$$UnityEngine.EventSystems.IDragHandler.OnDrag
// PDB: GroundClicker_UnityEngine_EventSystems_IDragHandler_OnDrag_m05C93F28194F56E3D0FB5A36795B11C4C8BAECD7
// Body: [[10e20850, 10e20d1b]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10672b80 Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85
// 1074b8a0 OrbitalCamera_PanCamera_m3404926FA753D2FB06235BAA04A5047C9007E6EE
// 1074cd50 OrbitalCamera_RotateCamera_m14BF8D0602D4FB258657AD6114A51CC1712E0B67
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 1113f040 Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F
// 1113f300 Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6
// 111405a0 Touch_get_deltaPosition_mF9D60C253E41DC4E4F832F88A1041BE8A9E7C0FB
// 111405c0 Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE

void __cdecl
GroundClicker_UnityEngine_EventSystems_IDragHandler_OnDrag_m05C93F28194F56E3D0FB5A36795B11C4C8BAECD7
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *pVVar1;
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar2;
  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *pVVar3;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar4;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar5;
  int iVar6;
  int iVar7;
  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *pTVar8;
  Exception_t *pEVar9;
  uint uVar10;
  MethodInfo *unaff_EBX;
  float fVar11;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar12;
  MethodInfo *pMVar13;
  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C local_104;
  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C local_c0;
  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C local_7c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_38;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_30;
  float local_28;
  float fStack_24;
  float local_20;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_1c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_14;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_c;

  iVar6 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6((MethodInfo *)0x0);
  if (iVar6 == 2) {
    if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
      if (param_2->___U3CpointerIdU3Ek__BackingField_12 != 0) {
        return;
      }
      pTVar8 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F
                         (&local_104,0,(MethodInfo *)0x0);
      local_7c.___m_FingerId_0 = pTVar8->___m_FingerId_0;
      local_7c.___m_Position_1.___x_0 = (pTVar8->___m_Position_1).___x_0;
      local_7c.___m_Position_1.___y_1 = (pTVar8->___m_Position_1).___y_1;
      local_7c.___m_RawPosition_2.___x_0 = (pTVar8->___m_RawPosition_2).___x_0;
      local_7c.___m_RawPosition_2.___y_1 = (pTVar8->___m_RawPosition_2).___y_1;
      local_7c.___m_PositionDelta_3.___x_0 = (pTVar8->___m_PositionDelta_3).___x_0;
      local_7c.___m_PositionDelta_3.___y_1 = (pTVar8->___m_PositionDelta_3).___y_1;
      local_7c.___m_TimeDelta_4 = pTVar8->___m_TimeDelta_4;
      local_7c.___m_TapCount_5 = pTVar8->___m_TapCount_5;
      local_7c.___m_Phase_6 = pTVar8->___m_Phase_6;
      local_7c.___m_Type_7 = pTVar8->___m_Type_7;
      local_7c.___m_Pressure_8 = pTVar8->___m_Pressure_8;
      local_7c.___m_maximumPossiblePressure_9 = pTVar8->___m_maximumPossiblePressure_9;
      local_7c.___m_Radius_10 = pTVar8->___m_Radius_10;
      local_7c.___m_RadiusVariance_11 = pTVar8->___m_RadiusVariance_11;
      local_7c.___m_AltitudeAngle_12 = pTVar8->___m_AltitudeAngle_12;
      local_7c.___m_AzimuthAngle_13 = pTVar8->___m_AzimuthAngle_13;
      pTVar8 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F
                         (&local_104,1,(MethodInfo *)0x0);
      local_c0.___m_FingerId_0 = pTVar8->___m_FingerId_0;
      local_c0.___m_Position_1.___x_0 = (pTVar8->___m_Position_1).___x_0;
      local_c0.___m_Position_1.___y_1 = (pTVar8->___m_Position_1).___y_1;
      local_c0.___m_RawPosition_2.___x_0 = (pTVar8->___m_RawPosition_2).___x_0;
      local_c0.___m_RawPosition_2.___y_1 = (pTVar8->___m_RawPosition_2).___y_1;
      local_c0.___m_PositionDelta_3.___x_0 = (pTVar8->___m_PositionDelta_3).___x_0;
      local_c0.___m_PositionDelta_3.___y_1 = (pTVar8->___m_PositionDelta_3).___y_1;
      local_c0.___m_TimeDelta_4 = pTVar8->___m_TimeDelta_4;
      local_c0.___m_TapCount_5 = pTVar8->___m_TapCount_5;
      local_c0.___m_Phase_6 = pTVar8->___m_Phase_6;
      local_c0.___m_Type_7 = pTVar8->___m_Type_7;
      local_c0.___m_Pressure_8 = pTVar8->___m_Pressure_8;
      local_c0.___m_maximumPossiblePressure_9 = pTVar8->___m_maximumPossiblePressure_9;
      local_c0.___m_Radius_10 = pTVar8->___m_Radius_10;
      local_c0.___m_RadiusVariance_11 = pTVar8->___m_RadiusVariance_11;
      local_c0.___m_AltitudeAngle_12 = pTVar8->___m_AltitudeAngle_12;
      local_c0.___m_AzimuthAngle_13 = pTVar8->___m_AzimuthAngle_13;
      VVar12 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE
                         (&local_7c,(MethodInfo *)0x0);
      local_c.___y_1 = VVar12.___y_1;
      local_c.___x_0 = VVar12.___x_0;
      VVar12 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE
                         (&local_c0,(MethodInfo *)0x0);
      local_38.___x_0 = local_c.___x_0 - local_1c.___x_0;
      local_1c.___y_1 = VVar12.___y_1;
      local_38.___y_1 = local_c.___y_1 - local_1c.___y_1;
      local_1c = VVar12;
      local_c.___y_1 =
           Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85
                     (&local_38,(MethodInfo *)0x0);
      local_30 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE
                           (&local_7c,(MethodInfo *)0x0);
      VVar12 = Touch_get_deltaPosition_mF9D60C253E41DC4E4F832F88A1041BE8A9E7C0FB
                         (&local_7c,(MethodInfo *)0x0);
      fVar11 = local_30.___x_0 - local_14.___x_0;
      local_14.___y_1 = VVar12.___y_1;
      local_30.___y_1 = local_30.___y_1 - local_14.___y_1;
      local_14 = VVar12;
      local_1c.___y_1 = fVar11;
      local_14 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE
                           (&local_c0,(MethodInfo *)0x0);
      VVar12 = Touch_get_deltaPosition_mF9D60C253E41DC4E4F832F88A1041BE8A9E7C0FB
                         (&local_c0,(MethodInfo *)0x0);
      local_38.___x_0 = local_14.___x_0 - fStack_24;
      fStack_24 = VVar12.___x_0;
      local_20 = VVar12.___y_1;
      local_38.___x_0 = local_1c.___y_1 - local_38.___x_0;
      local_38.___y_1 = local_30.___y_1 - (local_14.___y_1 - local_20);
      local_1c.___y_1 =
           Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85
                     (&local_38,(MethodInfo *)0x0);
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pOVar2 = param_1->___master_4->___orbitalCamera_15,
         pOVar2 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
        fVar11 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                           ((local_1c.___y_1 / local_c.___y_1) * pOVar2->___zoomCurrent_9,
                            (MethodInfo *)0x0);
        local_c.___y_1 = fVar11;
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pOVar2 = param_1->___master_4->___orbitalCamera_15,
           pOVar2 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
          pOVar2->___zoomTarget_8 = fVar11;
          pOVar2->___zoomCurrent_9 = fVar11;
          if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
            pOVar2 = param_1->___master_4->___orbitalCamera_15;
            VVar12 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE
                               (&local_7c,(MethodInfo *)0x0);
            local_14.___y_1 = VVar12.___y_1;
            local_14.___x_0 = VVar12.___x_0;
            VVar12 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE
                               (&local_c0,(MethodInfo *)0x0);
            fVar11 = fStack_24 + local_14.___x_0;
            fStack_24 = VVar12.___x_0;
            local_20 = VVar12.___y_1;
            local_c.___y_1 = (local_20 + local_14.___y_1) * __real_3f000000;
            local_c.___x_0 = fVar11 * __real_3f000000;
            local_14 = Touch_get_deltaPosition_mF9D60C253E41DC4E4F832F88A1041BE8A9E7C0FB
                                 (&local_7c,(MethodInfo *)0x0);
            VVar12 = Touch_get_deltaPosition_mF9D60C253E41DC4E4F832F88A1041BE8A9E7C0FB
                               (&local_c0,(MethodInfo *)0x0);
            local_20 = VVar12.___y_1;
            fStack_24 = (fStack_24 + local_14.___x_0) * __real_3f000000;
            local_20 = (local_20 + local_14.___y_1) * __real_3f000000;
            if (pOVar2 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0) {
              VVar12.___y_1 = local_20;
              VVar12.___x_0 = fStack_24;
              OrbitalCamera_PanCamera_m3404926FA753D2FB06235BAA04A5047C9007E6EE
                        (pOVar2,local_c,VVar12,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else if (param_1->___dragMode_15 == 2) {
    iVar7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    iVar6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
    }
    if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
      pVVar1 = &param_2->___U3CdeltaU3Ek__BackingField_14;
      local_c = *pVVar1;
      iVar4.___z_2 = 0;
      iVar4.___x_0 = (int)pVVar1->___x_0;
      iVar4.___y_1 = (int)pVVar1->___y_1;
      local_c = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar4,unaff_EBX);
      local_30.___y_1 = (local_c.___x_0 / (float)iVar6) * __real_43340000;
      local_1c.___y_1 = (local_c.___y_1 / (float)iVar6) * __real_43340000 * __real_bf800000;
      (**(code **)(param_2->_padding_ + 0xe4))(param_2,*(undefined4 *)(param_2->_padding_ + 0xe8));
      if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        pOVar2 = param_1->___master_4->___orbitalCamera_15;
        local_c.___y_1 = local_1c.___y_1;
        local_c.___x_0 = local_30.___y_1;
        if (pOVar2 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0) {
          fVar5.___y_1 = local_1c.___y_1;
          fVar5.___x_0 = local_30.___y_1;
          OrbitalCamera_RotateCamera_m14BF8D0602D4FB258657AD6114A51CC1712E0B67
                    (pOVar2,fVar5,(MethodInfo *)0x0);
          pVVar3 = param_1->___drags_18;
          if (pVVar3 != (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *)0x0) {
            uVar10 = (param_1->___dragIndex_19 + 1) % pVVar3->_padding_;
            local_28 = local_30.___y_1;
            param_1->___dragIndex_19 = uVar10;
            fStack_24 = local_1c.___y_1;
            local_20 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                                 ((MethodInfo *)0x0);
            if ((uint)pVVar3->_padding_ <= uVar10) {
              pMVar13 = (MethodInfo *)0x0;
              pEVar9 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar9,pMVar13);
            }
            pVVar3->m_Items[uVar10].___x_2 = local_28;
            pVVar3->m_Items[uVar10].___y_3 = fStack_24;
            pVVar3->m_Items[uVar10].___z_4 = local_20;
            return;
          }
        }
      }
    }
  }
  else {
    if (param_1->___dragMode_15 != 3) {
      return;
    }
    if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
      (**(code **)(param_2->_padding_ + 0xe4))(param_2,*(undefined4 *)(param_2->_padding_ + 0xe8));
      if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        pOVar2 = param_1->___master_4->___orbitalCamera_15;
        local_1c = param_2->___U3CpositionU3Ek__BackingField_13;
        local_c = param_2->___U3CdeltaU3Ek__BackingField_14;
        if (pOVar2 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0) {
          OrbitalCamera_PanCamera_m3404926FA753D2FB06235BAA04A5047C9007E6EE
                    (pOVar2,param_2->___U3CpositionU3Ek__BackingField_13,
                     param_2->___U3CdeltaU3Ek__BackingField_14,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
