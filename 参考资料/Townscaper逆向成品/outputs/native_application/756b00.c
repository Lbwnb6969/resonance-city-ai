// RVA 0x756b00 | Placemaker.Props.PropMeshAnimator$$OnLateUpdate
// PDB: PropMeshAnimator_OnLateUpdate_m7E80777E311404696B4145AD189622386A280623
// Body: [[10756b00, 10756d37]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4e60 WorldMeshes_ReturnMeshFilterOnly_mF2896FF09A4BE09BE69761705C812B2B8FE839F3
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1065fe60 Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 1066ff60 Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958

void __cdecl
PropMeshAnimator_OnLateUpdate_m7E80777E311404696B4145AD189622386A280623
          (PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *param_1,MethodInfo *param_2)

{
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  int iVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar6;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar7;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar8;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_54;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_44;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_38;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_2c;
  float local_20;
  float fStack_1c;
  float local_18;
  undefined8 local_14;
  float local_c;
  float local_8;

  if (DAT_1151ec2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_1151ec2c = '\x01';
  }
  pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (pTVar3,(MethodInfo *)0x0);
    while( true ) {
      while( true ) {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) {
          return;
        }
        pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                            (MethodInfo *)0x0);
        if (((pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
            (pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                (pTVar3,iVar4,(MethodInfo *)0x0),
            pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
           (pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                                (MethodInfo *)0x0),
           pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10756d33;
        pVVar6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                           (&local_2c,pTVar5,(MethodInfo *)0x0);
        local_14._0_4_ = pVVar6->___x_2;
        local_14._4_4_ = pVVar6->___y_3;
        local_c = pVVar6->___z_4;
        local_8 = (float)(undefined4)local_14;
        if ((float)(undefined4)local_14 < __real_3c23d70a) break;
        pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                            (MethodInfo *)0x0);
        local_18 = *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                   ->static_fields + 0xc);
        local_20 = local_8 * local_18;
        fStack_1c = local_14._4_4_ * local_18;
        local_18 = local_c * local_18;
        if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10756d33;
        VVar2.___y_3 = fStack_1c;
        VVar2.___x_2 = local_20;
        VVar2.___z_4 = local_18;
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar3,VVar2,(MethodInfo *)0x0);
      }
      pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                          (MethodInfo *)0x0);
      pVVar6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                         (&local_38,(MethodInfo *)0x0);
      if (pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                (pTVar5,*pVVar6,(MethodInfo *)0x0);
      pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                          (MethodInfo *)0x0);
      pVVar6 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                         (&local_44,(MethodInfo *)0x0);
      if (pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (pTVar5,*pVVar6,(MethodInfo *)0x0);
      pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                          (MethodInfo *)0x0);
      pQVar7 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                         (&local_54,(MethodInfo *)0x0);
      if (pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
                (pTVar5,*pQVar7,(MethodInfo *)0x0);
      pMVar8 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                          Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                         );
      if (pMVar8 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) break;
      MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                (pMVar8,(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0,(MethodInfo *)0x0);
      if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
         (pWVar1 = param_1->___master_4->___worldMeshes_9,
         pWVar1 == (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0)) break;
      WorldMeshes_ReturnMeshFilterOnly_mF2896FF09A4BE09BE69761705C812B2B8FE839F3
                (pWVar1,pMVar8,(MethodInfo *)0x0);
    }
  }
LAB_10756d33:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
