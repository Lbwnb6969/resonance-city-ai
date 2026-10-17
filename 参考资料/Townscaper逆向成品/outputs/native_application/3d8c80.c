// RVA 0x3d8c80 | Placemaker.ModuleBuilder$$MarkQubeForDeconstruction
// PDB: ModuleBuilder_MarkQubeForDeconstruction_m2C55EB76B1E330A9ABF458C728AF922B9BEAE61A
// Body: [[103d8c80, 103d8d51]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d8b80 ModuleBuilder_MarkModuleContainerForDeconstruction_m44155DFC0DF002CF8640FF8586D4367D34E927B6
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
ModuleBuilder_MarkQubeForDeconstruction_m2C55EB76B1E330A9ABF458C728AF922B9BEAE61A
          (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,MethodInfo *param_3)

{
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  int iVar4;
  ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *pMVar5;

  if (DAT_1151c878 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
              );
    DAT_1151c878 = '\x01';
  }
  if (param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        (MethodInfo *)0x0);
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        (MethodInfo *)0x0);
    if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                        (pTVar3,(MethodInfo *)0x0);
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        if ((pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
           (pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                               (pTVar2,iVar4,(MethodInfo *)0x0),
           pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_103d8d4d;
        pMVar5 = (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *)
                 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                            Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
                           );
        ModuleBuilder_MarkModuleContainerForDeconstruction_m44155DFC0DF002CF8640FF8586D4367D34E927B6
                  (param_1,pMVar5,(MethodInfo *)0x0);
      }
      param_2->___lastPropagation_11 = 0;
      pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
          (pGVar1 = param_1->___master_4->___graph_7,
          pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
         (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
                  (pTVar2,pGVar1->___qubePool_5,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_103d8d4d:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
