// RVA 0x815be0 | Placemaker.Sandbanker$$Clear
// PDB: Sandbanker_Clear_m034351E7DFF724A163F228D277C5BD7F48D63BDF
// Body: [[10815be0, 10815c34]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a46900 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
// 10a46da0 Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE

void __cdecl
Sandbanker_Clear_m034351E7DFF724A163F228D277C5BD7F48D63BDF
          (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *param_1,MethodInfo *param_2)

{
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar1;

  if (param_1->___sandMf_9 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
    pMVar1 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                       (param_1->___sandMf_9,(MethodInfo *)0x0);
    if (pMVar1 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
      Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(pMVar1,(MethodInfo *)0x0);
      if (param_1->___waterMf_10 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
        pMVar1 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                           (param_1->___waterMf_10,(MethodInfo *)0x0);
        if (pMVar1 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
          Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(pMVar1,(MethodInfo *)0x0);
          param_1->___state_8 = '\0';
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
