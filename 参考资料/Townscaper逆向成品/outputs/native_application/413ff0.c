// RVA 0x413ff0 | Placemaker.HoverHightlight$$OnStart
// PDB: HoverHightlight_OnStart_m0E46F7EED63E03DC8D4D4DE076C9DECA4B35694C
// Body: [[10413ff0, 1041401a]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4ba0 WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E

void __cdecl
HoverHightlight_OnStart_m0E46F7EED63E03DC8D4D4DE076C9DECA4B35694C
          (HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A *param_1,MethodInfo *param_2)

{
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar1;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar2;

  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pWVar1 = param_1->___master_4->___worldMeshes_9,
     pWVar1 != (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0)) {
    pMVar2 = WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E(pWVar1,(MethodInfo *)0x0)
    ;
    param_1->___mesh_5 = pMVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
