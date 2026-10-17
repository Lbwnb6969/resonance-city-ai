// RVA 0x7568c0 | Placemaker.Props.PropMeshAnimator$$OnDone
// PDB: PropMeshAnimator_OnDone_mA5E995429D8B50040CBB2917552DD5B78DDC2697
// Body: [[107568c0, 10756976] [1075697a, 10756af1]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4e60 WorldMeshes_ReturnMeshFilterOnly_mF2896FF09A4BE09BE69761705C812B2B8FE839F3
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10665c10 Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
// 10665d70 Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10876ae0 BigMeshList_Get_mB56201B36D8A4B03909471604B8EBBAD81FF023B
// 10876c30 BigMeshList_Populate_mBABED717F6A55BD2EF86CDF3F9B4FE49DF708CB4
// 10877000 BigMeshList_ReturnToPool_m342F3135129099F56482FA2DCC436D4AC1C07D7F
// 10877090 BigMeshMaster_AddMesh_m72BD2001AB44344AF7473725CE91F6D4E5468772
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
PropMeshAnimator_OnDone_mA5E995429D8B50040CBB2917552DD5B78DDC2697
          (PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *param_1,
          PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *param_2,MethodInfo *param_3)

{
  int iVar1;
  List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *pLVar2;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar3;
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar4;
  BigMeshList_t3F987CA1D1189C06B52252DF8E11DDDEFC5F7336 BVar5;
  BigMeshList_t3F987CA1D1189C06B52252DF8E11DDDEFC5F7336 *pBVar6;
  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *pRVar7;
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar10;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar11;
  BigMeshList_t3F987CA1D1189C06B52252DF8E11DDDEFC5F7336 local_3c;
  undefined1 local_28 [20];
  BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *local_14;
  BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *local_10;
  int local_c;
  uint local_8;

  if (DAT_1151ec31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF39A77403BBF8E0E7ACC6D7E961BD5BFF9318D79_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m56ACEB16EA36A08BAEE3A72FDEC0CFB35DBECBCE_RuntimeMethod_var)
    ;
    DAT_1151ec31 = '\x01';
  }
  if (param_2 != (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)0x0) {
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_2,false,
               (MethodInfo *)0x0);
    if (param_2->___items_4 != (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0) {
      iVar1 = param_2->___items_4->____size_2;
      pBVar6 = BigMeshList_Get_mB56201B36D8A4B03909471604B8EBBAD81FF023B
                         ((BigMeshList_t3F987CA1D1189C06B52252DF8E11DDDEFC5F7336 *)local_28,
                          (MethodInfo *)0x0);
      local_3c.___verts_0 = pBVar6->___verts_0;
      local_3c.___normals_1 = pBVar6->___normals_1;
      local_3c.___tangents_2 = pBVar6->___tangents_2;
      local_3c.___uvs_3 = pBVar6->___uvs_3;
      local_3c.___tris_4 = pBVar6->___tris_4;
      local_8 = iVar1 - 1;
      if (-1 < (int)local_8) {
        local_c = local_8 * 4 + 0x10;
        do {
          pLVar2 = param_2->___items_4;
          if (pLVar2 == (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0) goto LAB_10756aed;
          if ((uint)pLVar2->____size_2 <= local_8) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          iVar1 = *(int *)(pLVar2->____items_1 + local_c);
          if ((iVar1 == 0) ||
             (pCVar3 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar1 + 8),
             pCVar3 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0))
          goto LAB_10756aed;
          pRVar7 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
                   Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             (pCVar3,
                              Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
                             );
          if (*(char *)(iVar1 + 0x10) == '\0') {
            if (pRVar7 == (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0)
            goto LAB_10756aed;
            Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B
                      (pRVar7,true,(MethodInfo *)0x0);
          }
          else {
            BigMeshList_Populate_mBABED717F6A55BD2EF86CDF3F9B4FE49DF708CB4
                      (&local_3c,(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)pCVar3,
                       (MethodInfo *)0x0);
            if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) goto LAB_10756aed;
            local_10 = param_1->___master_4->___bigMeshMaster_36;
            local_14 = *(BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 **)(iVar1 + 0xc);
            if (pRVar7 == (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0)
            goto LAB_10756aed;
            pMVar8 = Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
                               (pRVar7,(MethodInfo *)0x0);
            if (local_10 == (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)0x0)
            goto LAB_10756aed;
            BVar5.___normals_1 = local_3c.___normals_1;
            BVar5.___verts_0 = local_3c.___verts_0;
            BVar5.___tangents_2 = local_3c.___tangents_2;
            BVar5.___uvs_3 = local_3c.___uvs_3;
            BVar5.___tris_4 = local_3c.___tris_4;
            BigMeshMaster_AddMesh_m72BD2001AB44344AF7473725CE91F6D4E5468772
                      (local_10,local_14,pMVar8,BVar5,(MethodInfo *)0x0);
          }
          pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             (pCVar3,(MethodInfo *)0x0);
          if (pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_10756aed;
          pTVar9 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                             (pTVar9,0,(MethodInfo *)0x0);
          pVVar10 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_28 + 8),
                               (MethodInfo *)0x0);
          if (pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_10756aed;
          Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                    (pTVar9,*pVVar10,(MethodInfo *)0x0);
          pMVar11 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                    Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar9,
                               Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                              );
          if (pMVar11 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
          goto LAB_10756aed;
          MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                    (pMVar11,(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0,(MethodInfo *)0x0
                    );
          if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             || (pWVar4 = param_1->___master_4->___worldMeshes_9,
                pWVar4 == (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0))
          goto LAB_10756aed;
          WorldMeshes_ReturnMeshFilterOnly_mF2896FF09A4BE09BE69761705C812B2B8FE839F3
                    (pWVar4,pMVar11,(MethodInfo *)0x0);
          local_8 = local_8 - 1;
          local_c = local_c + -4;
        } while (-1 < (int)local_8);
      }
      BigMeshList_ReturnToPool_m342F3135129099F56482FA2DCC436D4AC1C07D7F
                (&local_3c,(MethodInfo *)0x0);
      return;
    }
  }
LAB_10756aed:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
