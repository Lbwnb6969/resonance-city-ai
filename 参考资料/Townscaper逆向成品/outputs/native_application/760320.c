// RVA 0x760320 | Placemaker.PropPlacer$$RemovePropsFromContainer
// PDB: PropPlacer_RemovePropsFromContainer_mCA47608E0EC4E9914BA0AEB51A64397E2AFA890B
// Body: [[10760320, 10760409]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1075abb0 PropPlacer_ChangeHideCount_mAF4419B7978D1C276CD4D9262B44E5D376C51283
// 1075ee30 PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
PropPlacer_RemovePropsFromContainer_mCA47608E0EC4E9914BA0AEB51A64397E2AFA890B
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *param_2,MethodInfo *param_3)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  int iVar2;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar3;

  if (DAT_1151ec4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m5366FDC59CA070CB7E2D1EF5B64B15453E414AC6_RuntimeMethod_var
              );
    DAT_1151ec4a = '\x01';
  }
  if (param_2 == (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *)0x0) {
LAB_10760405:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  if (param_2->___hasProps_5 != false) {
    param_2->___hasProps_5 = false;
    pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        (MethodInfo *)0x0);
    if (pTVar1 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10760405;
    iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (pTVar1,(MethodInfo *)0x0);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if ((pTVar1 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
         (pTVar1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                             (pTVar1,iVar2,(MethodInfo *)0x0),
         pTVar1 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10760405;
      pOVar3 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar1,true,
                          Component_TryGetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m5366FDC59CA070CB7E2D1EF5B64B15453E414AC6_RuntimeMethod_var
                         );
      if ((char)pOVar3 == '\0') {
        return;
      }
      PropPlacer_ChangeHideCount_mAF4419B7978D1C276CD4D9262B44E5D376C51283
                (param_1,(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0,true,
                 (MethodInfo *)0x0);
      PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
                (param_1,(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0,
                 (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0,(MethodInfo *)0x0);
      Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
                (pTVar1,param_1->___deconstructionContainer_9,true,(MethodInfo *)0x0);
    }
  }
  return;
}
