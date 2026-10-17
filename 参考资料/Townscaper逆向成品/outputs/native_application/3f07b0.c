// RVA 0x3f07b0 | Placemaker.VoxelBounceEffect$$MaybeExecute
// PDB: VoxelBounceEffect_MaybeExecute_mC5D2C03A32A8451A8275A3E9EF9333B6A8116A4A
// Body: [[103f07b0, 103f081e]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a46da0 Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
// 10a47b00 Mesh_SetColors_m3A1D5B4986EC06E3930617D45A88BA768072FA2F
// 10a482b0 Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
// 10a48620 Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD

void __cdecl
VoxelBounceEffect_MaybeExecute_mC5D2C03A32A8451A8275A3E9EF9333B6A8116A4A
          (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98 *param_1,MethodInfo *param_2)

{
  if (param_1->___count_8 < 1) {
    return;
  }
  param_1->___count_8 = 0;
  if (param_1->___voxelBounceMesh_14 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
    Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
              (param_1->___voxelBounceMesh_14,(MethodInfo *)0x0);
    if (param_1->___voxelBounceMesh_14 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
      Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
                (param_1->___voxelBounceMesh_14,param_1->___verts_11,(MethodInfo *)0x0);
      if (param_1->___voxelBounceMesh_14 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
        Mesh_SetColors_m3A1D5B4986EC06E3930617D45A88BA768072FA2F
                  (param_1->___voxelBounceMesh_14,param_1->___colors_12,(MethodInfo *)0x0);
        if (param_1->___voxelBounceMesh_14 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0)
        {
          Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
                    (param_1->___voxelBounceMesh_14,param_1->___tris_13,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
