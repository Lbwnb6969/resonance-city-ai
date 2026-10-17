// RVA 0x1e5260 | Placemaker.WorldMeshes$$ReturnMesh
// PDB: WorldMeshes_ReturnMesh_m0156414885AF96ED8141576B7C61F779BE4D25C7
// Body: [[101e5260, 101e52b4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a46da0 Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
WorldMeshes_ReturnMesh_m0156414885AF96ED8141576B7C61F779BE4D25C7
          (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *param_1,
          Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *param_2,MethodInfo *param_3)

{
  if (DAT_1151af30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
    DAT_1151af30 = '\x01';
  }
  if (param_2 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
    Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(param_2,(MethodInfo *)0x0);
    if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___meshStack_6 !=
        (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___meshStack_6,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
                 List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
