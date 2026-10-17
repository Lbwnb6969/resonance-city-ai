// RVA 0x1e4ba0 | Placemaker.WorldMeshes$$GetMesh
// PDB: WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E
// Body: [[101e4ba0, 101e4c06] [101e4c0d, 101e4c33]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4cc0 WorldMeshes_GetNewMesh_mECCFBA7609DEAEC513334F1AA99A9DA49B9B6B60
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11036bc0 List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared

Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __cdecl
WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E
          (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *param_1,MethodInfo *param_2)

{
  List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *pLVar1;
  uint uVar2;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar3;

  if (DAT_1151af2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m24F4C8B3355007BC24EA5AC2BDBBAA97DEAB5F2B_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m5CE3970E0F3AC573EEB484A6AEA4F62BA9218499_RuntimeMethod_var)
    ;
    DAT_1151af2d = '\x01';
  }
  pLVar1 = param_1->___meshStack_6;
  if (pLVar1 != (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *)0x0) {
    uVar2 = pLVar1->____size_2;
    if ((int)uVar2 < 1) {
      pMVar3 = WorldMeshes_GetNewMesh_mECCFBA7609DEAEC513334F1AA99A9DA49B9B6B60
                         (param_1,(MethodInfo *)0x0);
      return pMVar3;
    }
    if (uVar2 <= uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pMVar3 = pLVar1->____items_1->m_Items[uVar2 - 1];
    if (pLVar1 != (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *)0x0) {
      List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pLVar1,uVar2 - 1,
                 List_1_RemoveAt_m24F4C8B3355007BC24EA5AC2BDBBAA97DEAB5F2B_RuntimeMethod_var);
      return pMVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
