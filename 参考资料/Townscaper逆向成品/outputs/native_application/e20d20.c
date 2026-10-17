// RVA 0xe20d20 | Placemaker.GroundClicker$$UnityEngine.EventSystems.IEndDragHandler.OnEndDrag
// PDB: GroundClicker_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_m007B3863C4B4F86DEA7743C0537ABDF9AE02307B
// Body: [[10e20d20, 10e20e8f]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 1074d0b0 OrbitalCamera_SetRotationSpeed_m4E9D701C0CA3721B1C92C22B5E2FE4274575E512
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GroundClicker_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_m007B3863C4B4F86DEA7743C0537ABDF9AE02307B
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *pVVar3;
  float fVar4;
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar5;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar6;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar7;
  Exception_t *pEVar8;
  uint uVar9;
  int iVar10;
  MethodInfo *unaff_ESI;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar11;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar12;
  float fVar13;
  float fVar14;
  MethodInfo *pMVar15;
  float local_20;
  float fStack_1c;
  float local_c;
  float local_8;

  if (param_1->___dragMode_15 == 2) {
    VVar11 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    iVar10 = 0;
    fVar14 = __real_bf800000;
    do {
      local_c = VVar11.___y_1;
      local_8 = VVar11.___x_0;
      pVVar3 = param_1->___drags_18;
      if (pVVar3 == (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *)0x0)
      goto LAB_10e20e80;
      uVar9 = ((param_1->___dragIndex_19 - iVar10) + 5) % 5;
      pMVar15 = (MethodInfo *)0x0;
      if ((uint)pVVar3->_padding_ <= uVar9) {
        pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar8,pMVar15);
      }
      uVar1 = pVVar3->m_Items[uVar9].___x_2;
      uVar2 = pVVar3->m_Items[uVar9].___y_3;
      fVar4 = pVVar3->m_Items[uVar9].___z_4;
      fVar13 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      fVar13 = fVar13 - fVar4;
      VVar7 = VVar11;
      if (__real_3e4ccccd <= fVar13) break;
      VVar7.___y_1 = (float)uVar2 + local_c;
      VVar7.___x_0 = (float)uVar1 + local_8;
      VVar11.___y_1 = (float)uVar2 + local_c;
      VVar11.___x_0 = (float)uVar1 + local_8;
      fVar14 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(fVar13,fVar14,(MethodInfo *)0x0);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 5);
    local_c = VVar7.___y_1;
    local_8 = VVar7.___x_0;
    if (___real_00000000 < fVar14) {
      if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        pOVar5 = param_1->___master_4->___orbitalCamera_15;
        iVar6.___y_1 = (int)(local_c / fVar14);
        iVar6.___x_0 = (int)(local_8 / fVar14);
        iVar6.___z_2 = 0;
        fVar12 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar6,unaff_ESI);
        if (pOVar5 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0) {
          OrbitalCamera_SetRotationSpeed_m4E9D701C0CA3721B1C92C22B5E2FE4274575E512
                    (pOVar5,fVar12,(MethodInfo *)0x0);
          goto LAB_10e20e74;
        }
      }
LAB_10e20e80:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
  }
LAB_10e20e74:
  param_1->___dragMode_15 = 0;
  return;
}
