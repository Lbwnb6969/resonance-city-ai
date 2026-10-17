// RVA 0x8063b0 | Placemaker.Props.PropWireItalianMesh$$Setup
// PDB: PropWireItalianMesh_Setup_mE915F28C3126C4E6A319D124AC675B3B2A937D85
// Body: [[108063b0, 10806630]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 1065ff40 Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
// 1066f7a0 Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066ff60 Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10673960 Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A
// 1075ade0 PropPlacer_GetMeshWithVoxelType_mEDD56BB10BFA73CB2DFA79634A65C942FD60935E
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PropWireItalianMesh_Setup_mE915F28C3126C4E6A319D124AC675B3B2A937D85
          (PropWireItalianMesh_t9A007195A177A5A4B9EC5C183184B6A6D71EE693 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,
          PropWire_t2A3274AA576D94C89E0731D63E12F3FC4B112F5B *param_3,float param_4,
          MethodInfo *param_5)

{
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  uint uVar5;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar6;
  PropWireAnchor_tCB7650546235D6E4FD7E7A3A450C2D9B9491BF1A *pPVar7;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar8;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar9;
  Exception_t *pEVar10;
  uint uVar11;
  uint uVar12;
  MethodInfo *pMVar13;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_3c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_2c;
  undefined1 local_20 [8];
  float fStack_18;
  float fStack_14;
  uint local_10;
  MiscReferences_tDA4D7550E23358B93B9FC4B9AD0B2F634F148E6D *local_c;
  float local_8;

  if (DAT_1151f1f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    DAT_1151f1f6 = '\x01';
  }
  pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_20 + 4),pTVar3,
                        (MethodInfo *)0x0);
    local_2c.___x_2 = pVVar4->___x_2;
    local_2c.___y_3 = pVVar4->___y_3;
    local_2c.___z_4 = pVVar4->___z_4;
    uVar5 = Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A
                      (&local_2c,(MethodInfo *)0x0);
    uVar5 = uVar5 << 0xd ^ uVar5;
    uVar5 = uVar5 >> 0x11 ^ uVar5;
    if (param_3 != (PropWire_t2A3274AA576D94C89E0731D63E12F3FC4B112F5B *)0x0) {
      pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_3,
                          (MethodInfo *)0x0);
      local_20._4_4_ = 1.0;
      uVar5 = uVar5 << 5 ^ uVar5;
      uVar11 = uVar5 << 0xd ^ uVar5;
      local_8 = (float)(uVar5 >> 9 | 0x3f800000);
      uVar11 = uVar11 >> 0x11 ^ uVar11;
      fStack_18 = (local_8 - __real_3f800000) * ___real_3f199999 + __real_3f333333;
      fStack_14 = param_4;
      if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        VVar2.___y_3 = fStack_18;
        VVar2.___x_2 = 1.0;
        VVar2.___z_4 = param_4;
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar3,VVar2,(MethodInfo *)0x0);
        uVar11 = uVar11 << 5 ^ uVar11;
        uVar5 = uVar11 << 0xd ^ uVar11;
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        if ((uVar11 & 1) != 0) {
          pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_3,
                              (MethodInfo *)0x0);
          if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_1080661f;
          pQVar6 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5
                             ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)local_20,
                              pTVar3,(MethodInfo *)0x0);
          local_20._0_4_ = pQVar6->___x_0;
          local_20._4_4_ = pQVar6->___y_1;
          fStack_18 = pQVar6->___z_2;
          fStack_14 = pQVar6->___w_3;
          pQVar6 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                             (&local_3c,0.0,180.0,0.0,(MethodInfo *)0x0);
          QVar1.___y_1 = (float)local_20._4_4_;
          QVar1.___x_0 = (float)local_20._0_4_;
          QVar1.___z_2 = fStack_18;
          QVar1.___w_3 = fStack_14;
          pQVar6 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                             (&local_3c,QVar1,*pQVar6,(MethodInfo *)0x0);
          Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
                    (pTVar3,*pQVar6,(MethodInfo *)0x0);
        }
        if (param_2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
          local_c = param_2->___miscReferences_29;
          if ((local_c != (MiscReferences_tDA4D7550E23358B93B9FC4B9AD0B2F634F148E6D *)0x0) &&
             (local_c->___italianMeshes_4 !=
              (MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8 *)0x0)) {
            uVar11 = local_c->___italianMeshes_4->_padding_;
            local_10 = uVar5 << 0xd ^ uVar5;
            local_8 = (float)(((int)uVar11 >> 0x1f) * uVar5);
            uVar12 = (int)local_8 + (int)((ulonglong)uVar11 * (ulonglong)uVar5 >> 0x20);
            if (uVar11 <= uVar12) {
              pMVar13 = (MethodInfo *)0x0;
              pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar10,pMVar13);
            }
            pMVar9 = local_c->___italianMeshes_4->m_Items[uVar12];
            if ((((byte)(local_10 >> 0x11) ^ (byte)uVar5) & 1) == 0) {
              pPVar7 = param_3->___anchor1_5;
            }
            else {
              pPVar7 = param_3->___anchor0_4;
            }
            if (pPVar7 != (PropWireAnchor_tCB7650546235D6E4FD7E7A3A450C2D9B9491BF1A *)0x0) {
              uVar5 = local_10 >> 8;
              local_10 = CONCAT31((int3)uVar5,pPVar7->___voxelType_6);
              pMVar8 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                       Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                  Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                                 );
              if (param_2->___propPlacer_19 !=
                  (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0) {
                pMVar9 = PropPlacer_GetMeshWithVoxelType_mEDD56BB10BFA73CB2DFA79634A65C942FD60935E
                                   (param_2->___propPlacer_19,pMVar9,(uchar)local_10,
                                    (MethodInfo *)0x0);
                if (pMVar8 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
                  MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                            (pMVar8,pMVar9,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1080661f:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
