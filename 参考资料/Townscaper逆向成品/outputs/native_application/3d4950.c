// RVA 0x3d4950 | Placemaker.Ui.MasterClicker$$UnityEngine.EventSystems.IDragHandler.OnDrag
// PDB: MasterClicker_UnityEngine_EventSystems_IDragHandler_OnDrag_m037A3CAE7E56CC1D658CE8F35F1E022F31D8C153
// Body: [[103d4950, 103d4b36]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 1074b8a0 OrbitalCamera_PanCamera_m3404926FA753D2FB06235BAA04A5047C9007E6EE
// 1074cd50 OrbitalCamera_RotateCamera_m14BF8D0602D4FB258657AD6114A51CC1712E0B67

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
MasterClicker_UnityEngine_EventSystems_IDragHandler_OnDrag_m037A3CAE7E56CC1D658CE8F35F1E022F31D8C153
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar1;
  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *pVVar2;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar3;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar4;
  int iVar5;
  int iVar6;
  Exception_t *pEVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar11;
  float fVar12;
  MethodInfo *pMVar13;
  float fStack_14;
  float local_10;

  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    iVar6 = param_2->___U3CpointerIdU3Ek__BackingField_12;
    if (-1 < iVar6) {
      return;
    }
    if (iVar6 == -1) {
      iVar5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
      pMVar13 = (MethodInfo *)0x0;
      iVar6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
      if (iVar5 < iVar6) {
        iVar6 = iVar5;
      }
      iVar3.___z_2 = 0;
      iVar3.___x_0 = (int)(param_2->___U3CdeltaU3Ek__BackingField_14).___x_0;
      iVar3.___y_1 = (int)(param_2->___U3CdeltaU3Ek__BackingField_14).___y_1;
      iVar11 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar3,pMVar13);
      fStack_14 = (float)iVar11.___x_0;
      local_10 = (float)iVar11.___y_1;
      fVar10 = (fStack_14 / (float)iVar6) * ___real_43020000;
      fVar9 = (local_10 / (float)iVar6) * ___real_43020000 * __real_bf800000;
      (**(code **)(param_2->_padding_ + 0xe4))(param_2,*(undefined4 *)(param_2->_padding_ + 0xe8));
      if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pOVar1 = param_1->___master_7->___orbitalCamera_15,
         pOVar1 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
        fVar4.___y_1 = fVar9;
        fVar4.___x_0 = fVar10;
        OrbitalCamera_RotateCamera_m14BF8D0602D4FB258657AD6114A51CC1712E0B67
                  (pOVar1,fVar4,(MethodInfo *)0x0);
        pVVar2 = param_1->___drags_23;
        if (pVVar2 != (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *)0x0) {
          uVar8 = (param_1->___dragIndex_24 + 1) % pVVar2->_padding_;
          param_1->___dragIndex_24 = uVar8;
          fVar12 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                             ((MethodInfo *)0x0);
          if ((uint)pVVar2->_padding_ <= uVar8) {
            pMVar13 = (MethodInfo *)0x0;
            pEVar7 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar7,pMVar13);
          }
          pVVar2->m_Items[uVar8].___x_2 = fVar10;
          pVVar2->m_Items[uVar8].___y_3 = fVar9;
          pVVar2->m_Items[uVar8].___z_4 = fVar12;
          return;
        }
      }
    }
    else {
      if ((iVar6 != -2) && (iVar6 != -3)) {
        return;
      }
      (**(code **)(param_2->_padding_ + 0xe4))(param_2,*(undefined4 *)(param_2->_padding_ + 0xe8));
      if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        pOVar1 = param_1->___master_7->___orbitalCamera_15;
        if (pOVar1 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0) {
          OrbitalCamera_PanCamera_m3404926FA753D2FB06235BAA04A5047C9007E6EE
                    (pOVar1,param_2->___U3CpositionU3Ek__BackingField_13,
                     param_2->___U3CdeltaU3Ek__BackingField_14,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
