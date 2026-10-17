// RVA 0x805a60 | Placemaker.Props.PropWireFlagMesh$$Placemaker.Props.IPropModifier.Reset
// PDB: PropWireFlagMesh_Placemaker_Props_IPropModifier_Reset_m85FD542D67A06042797E905BB0BF419DBD36A958
// Body: [[10805a60, 10805ad0]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e5260 WorldMeshes_ReturnMesh_m0156414885AF96ED8141576B7C61F779BE4D25C7
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10a46900 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958

void __cdecl
PropWireFlagMesh_Placemaker_Props_IPropModifier_Reset_m85FD542D67A06042797E905BB0BF419DBD36A958
          (PropWireFlagMesh_tF947C4B731B76D44E46A94372A9502CB5F4822C5 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_3,MethodInfo *param_4)

{
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar1;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar2;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar3;

  if (DAT_1151f1f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    DAT_1151f1f5 = '\x01';
  }
  pMVar2 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
           Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                     );
  if ((param_2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pWVar1 = param_2->___worldMeshes_9,
     pMVar2 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)) {
    pMVar3 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                       (pMVar2,(MethodInfo *)0x0);
    if (pWVar1 != (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0) {
      WorldMeshes_ReturnMesh_m0156414885AF96ED8141576B7C61F779BE4D25C7
                (pWVar1,pMVar3,(MethodInfo *)0x0);
      MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                (pMVar2,(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
