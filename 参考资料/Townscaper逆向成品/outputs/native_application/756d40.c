// RVA 0x756d40 | Placemaker.Props.PropMeshAnimator$$OnReset
// PDB: PropMeshAnimator_OnReset_mBF40F8779B80E2AEB170D4E9CEE8F6EBAD663146
// Body: [[10756d40, 10756ebe]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4e60 WorldMeshes_ReturnMeshFilterOnly_mF2896FF09A4BE09BE69761705C812B2B8FE839F3
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1065fe60 Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 1066ff60 Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958

void __cdecl
PropMeshAnimator_OnReset_mBF40F8779B80E2AEB170D4E9CEE8F6EBAD663146
          (PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *param_1,MethodInfo *param_2)

{
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  int iVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar5;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar6;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_14;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_8;

  if (DAT_1151ec2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    DAT_1151ec2d = '\x01';
  }
  pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (pTVar2,(MethodInfo *)0x0);
    while( true ) {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return;
      }
      pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if ((pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
         (pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                             (pTVar2,iVar3,(MethodInfo *)0x0),
         pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) break;
      local_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                           (MethodInfo *)0x0);
      pVVar4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                         (&local_14,(MethodInfo *)0x0);
      if (local_8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                (local_8,*pVVar4,(MethodInfo *)0x0);
      local_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                           (MethodInfo *)0x0);
      pVVar4 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                         (&local_20,(MethodInfo *)0x0);
      if (local_8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (local_8,*pVVar4,(MethodInfo *)0x0);
      local_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                           (MethodInfo *)0x0);
      pQVar5 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                         (&local_30,(MethodInfo *)0x0);
      if (local_8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
                (local_8,*pQVar5,(MethodInfo *)0x0);
      pMVar6 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                          Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                         );
      if (pMVar6 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) break;
      MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                (pMVar6,(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0,(MethodInfo *)0x0);
      if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
         (pWVar1 = param_1->___master_4->___worldMeshes_9,
         pWVar1 == (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0)) break;
      WorldMeshes_ReturnMeshFilterOnly_mF2896FF09A4BE09BE69761705C812B2B8FE839F3
                (pWVar1,pMVar6,(MethodInfo *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
