// RVA 0x4c5540 | Placemaker.DrawPlane$$Awake
// PDB: DrawPlane_Awake_mA0F468784F8E8CDFD64B6A34DAFC701A4D03D536
// Body: [[104c5540, 104c5583]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4ba0 WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958

void __cdecl
DrawPlane_Awake_mA0F468784F8E8CDFD64B6A34DAFC701A4D03D536
          (DrawPlane_t25E93171CC5BAAB4443AC73B5628F14D1F786176 *param_1,MethodInfo *param_2)

{
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar1;
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar2;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar3;

  pMVar1 = param_1->___meshFilter_8;
  if ((param_1->___worldMaster_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pWVar2 = param_1->___worldMaster_4->___worldMeshes_9,
     pWVar2 != (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0)) {
    pMVar3 = WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E(pWVar2,(MethodInfo *)0x0)
    ;
    if (pMVar1 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
      MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                (pMVar1,pMVar3,(MethodInfo *)0x0);
      param_1->___mesh_9 = pMVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
