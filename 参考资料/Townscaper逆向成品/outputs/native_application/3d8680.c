// RVA 0x3d8680 | Placemaker.ModuleBuilder$$DeconstructModuleContainer
// PDB: ModuleBuilder_DeconstructModuleContainer_m7C9EE176D44F72F490E4EF15C61CE1B1BA11EE08
// Body: [[103d8680, 103d8862]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4e60 WorldMeshes_ReturnMeshFilterOnly_mF2896FF09A4BE09BE69761705C812B2B8FE839F3
// 101e4fa0 WorldMeshes_ReturnMeshFilter_m6F4BBA8DEC2C496B7DB111215DCE0F5B1F2D534F
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10665c10 Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54

void __cdecl
ModuleBuilder_DeconstructModuleContainer_m7C9EE176D44F72F490E4EF15C61CE1B1BA11EE08
          (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *param_1,
          ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *param_2,MethodInfo *param_3)

{
  MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *pMVar1;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar2;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar3;
  bool bVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  int iVar6;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar7;
  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *pRVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_18;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_c;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_8;

  if (DAT_1151c87a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var
              );
    DAT_1151c87a = '\x01';
  }
  if ((param_2 != (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *)0x0) &&
     (pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0), local_c = pTVar5,
     pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    iVar6 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (pTVar5,(MethodInfo *)0x0);
    while( true ) {
      if (iVar6 < 1) {
        if ((OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var);
        }
        param_2->___orientedModule_4 =
             *OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var->
              static_fields;
        Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
                  (pTVar5,param_1->___moduleContainerPool_5,false,(MethodInfo *)0x0);
        pVVar9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                           (&local_18,(MethodInfo *)0x0);
        Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                  (pTVar5,*pVVar9,(MethodInfo *)0x0);
        return;
      }
      iVar6 = iVar6 + -1;
      pTVar5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (pTVar5,iVar6,(MethodInfo *)0x0);
      if (((pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
          (pCVar7 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                    Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar5,
                               Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                              ),
          pCVar7 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) ||
         (pRVar8 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
                   Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             (pCVar7,
                              Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
                             ), pRVar8 == (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0)
         ) break;
      local_8 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
                          (pRVar8,(MethodInfo *)0x0);
      if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
         (pMVar1 = param_1->___master_4->___materialMaster_13,
         pMVar1 == (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *)0x0)) break;
      pOVar2 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar1->___mirrorHouseMaterial_12
      ;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                        (local_8,pOVar2,(MethodInfo *)0x0);
      pWVar3 = param_1->___master_4;
      if (bVar4) {
        if ((pWVar3 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
           (pWVar3->___worldMeshes_9 == (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0
           )) break;
        WorldMeshes_ReturnMeshFilterOnly_mF2896FF09A4BE09BE69761705C812B2B8FE839F3
                  (pWVar3->___worldMeshes_9,
                   (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)pCVar7,(MethodInfo *)0x0)
        ;
        pTVar5 = local_c;
      }
      else {
        if ((pWVar3 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
           (pWVar3->___worldMeshes_9 == (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0
           )) break;
        WorldMeshes_ReturnMeshFilter_m6F4BBA8DEC2C496B7DB111215DCE0F5B1F2D534F
                  (pWVar3->___worldMeshes_9,
                   (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)pCVar7,(MethodInfo *)0x0)
        ;
        pTVar5 = local_c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
