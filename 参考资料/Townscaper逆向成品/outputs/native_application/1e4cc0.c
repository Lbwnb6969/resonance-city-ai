// RVA 0x1e4cc0 | Placemaker.WorldMeshes$$GetNewMesh
// PDB: WorldMeshes_GetNewMesh_mECCFBA7609DEAEC513334F1AA99A9DA49B9B6B60
// Body: [[101e4cc0, 101e4d0d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a477b0 Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999
// 10a486e0 Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6

Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __cdecl
WorldMeshes_GetNewMesh_mECCFBA7609DEAEC513334F1AA99A9DA49B9B6B60
          (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *param_1,MethodInfo *param_2)

{
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar1;

  if (DAT_1151af2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
    DAT_1151af2c = '\x01';
  }
  pMVar1 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)
           il2cpp_codegen_object_new
                     (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
  Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(pMVar1,(MethodInfo *)0x0);
  if (pMVar1 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
    Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999(pMVar1,(MethodInfo *)0x0);
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
