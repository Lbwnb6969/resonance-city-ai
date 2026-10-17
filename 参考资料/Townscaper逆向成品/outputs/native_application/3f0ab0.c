// RVA 0x3f0ab0 | Placemaker.Voxel$$System.IComparable<Placemaker.Voxel>.CompareTo
// PDB: Voxel_System_IComparableU3CPlacemaker_VoxelU3E_CompareTo_m7F701449B5F3E4358A7F1E728F77584CEA28774B
// Body: [[103f0ab0, 103f0ad4]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10905ba0 Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3

int __cdecl
Voxel_System_IComparableU3CPlacemaker_VoxelU3E_CompareTo_m7F701449B5F3E4358A7F1E728F77584CEA28774B
          (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *param_1,
          Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *param_2,MethodInfo *param_3)

{
  int iVar1;

  if (param_2 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
    iVar1 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3
                      (&param_1->___cost_6,param_2->___cost_6,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
