// RVA 0x81c160 | Placemaker.Sandbanker$$OnStart
// PDB: Sandbanker_OnStart_m22318071CB23E077DFD4248F64B2CA8FDE275B70
// Body: [[1081c160, 1081c1c8]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4ba0 WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958

void __cdecl
Sandbanker_OnStart_m22318071CB23E077DFD4248F64B2CA8FDE275B70
          (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *param_1,MethodInfo *param_2)

{
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar1;
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar2;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar3;

  pMVar1 = param_1->___sandMf_9;
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pWVar2 = param_1->___master_4->___worldMeshes_9,
     pWVar2 != (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0)) {
    pMVar3 = WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E(pWVar2,(MethodInfo *)0x0)
    ;
    if (pMVar1 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
      MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                (pMVar1,pMVar3,(MethodInfo *)0x0);
      pMVar1 = param_1->___waterMf_10;
      if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (pWVar2 = param_1->___master_4->___worldMeshes_9,
         pWVar2 != (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0)) {
        pMVar3 = WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E
                           (pWVar2,(MethodInfo *)0x0);
        if (pMVar1 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
          MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                    (pMVar1,pMVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
