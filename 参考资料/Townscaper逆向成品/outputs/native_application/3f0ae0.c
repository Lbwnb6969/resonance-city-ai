// RVA 0x3f0ae0 | Placemaker.WaterSound$$Update
// PDB: WaterSound_Update_m839E55C37CFD37080E435A839D40E6E366BCDD0A
// Body: [[103f0ae0, 103f0bfc] [103f0c00, 103f0cc7]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a385b0 Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
WaterSound_Update_m839E55C37CFD37080E435A839D40E6E366BCDD0A
          (WaterSound_tDB23CE4D3833C6FE919B7258D5DCA815BA28891D *param_1,MethodInfo *param_2)

{
  Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *pSVar1;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *pCVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_44;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_1151c915 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var)
    ;
    DAT_1151c915 = '\x01';
  }
  local_44.___z_4 = 0.0;
  local_44.___x_2 = 0.0;
  local_44.___y_3 = 0.0;
  pVVar4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(&local_50,(MethodInfo *)0x0);
  local_2c._0_4_ = pVVar4->___x_2;
  local_2c._4_4_ = pVVar4->___y_3;
  fVar9 = pVVar4->___z_4;
  local_8 = __real_7f7fffff;
  local_24 = fVar9;
  local_18 = local_2c;
  local_c = fVar9;
  pCVar5 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
  if ((pCVar5 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) &&
     (pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pCVar5,
                          (MethodInfo *)0x0),
     pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pVVar4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       (&local_50,pTVar6,(MethodInfo *)0x0);
    local_38._0_4_ = pVVar4->___x_2;
    local_38._4_4_ = pVVar4->___y_3;
    local_30 = pVVar4->___z_4;
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       ((pSVar1 = param_1->___master_4->___sandbanker_22,
        pSVar1 != (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0 &&
        (pLVar2 = pSVar1->___verts_6,
        pLVar2 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0)))) {
      uVar8 = pLVar2->____size_2 - 1;
      if (-1 < (int)uVar8) {
        iVar7 = uVar8 * 0xc;
        do {
          if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) || (pSVar1 = param_1->___master_4->___sandbanker_22,
                    pSVar1 == (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)) ||
             (pLVar2 = pSVar1->___verts_6,
             pLVar2 == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0)) goto LAB_103f0cc3;
          if ((uint)pLVar2->____size_2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          local_20 = *(undefined8 *)((int)&pLVar2->____items_1->m_Items[0].___x_2 + iVar7);
          fVar9 = *(float *)((int)&pLVar2->____items_1->m_Items[0].___z_4 + iVar7);
          local_50.___z_4 = local_30 - local_24;
          local_44.___y_3 = local_38._4_4_ - local_2c._4_4_;
          local_44.___x_2 = (float)local_38 - (float)local_2c;
          local_44.___z_4 = local_50.___z_4;
          local_10 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                               (&local_44,(MethodInfo *)0x0);
          if (local_10 < local_8) {
            local_18 = local_20;
            local_2c = local_20;
            local_24 = fVar9;
            local_c = fVar9;
            local_8 = local_10;
          }
          iVar7 = iVar7 + -0xc;
          uVar8 = uVar8 - 1;
          fVar9 = local_c;
        } while (-1 < (int)uVar8);
      }
      pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        VVar3.___z_4 = fVar9;
        VVar3.___x_2 = (float)(undefined4)local_18;
        VVar3.___y_3 = (float)local_18._4_4_;
        Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                  (pTVar6,VVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_103f0cc3:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
