// RVA 0x3f0940 | Placemaker.VoxelBounceEffect$$VoxelPainted
// PDB: VoxelBounceEffect_VoxelAdded_mCFFE4DB8A1030D59FDAD617D794437B8D0F788BF
// Body: [[103f0940, 103f095f]]
// Direct callees:
// 103f0160 VoxelBounceEffect_AddVoxel_m4AB3A6CF2BDD5801A01C1485ACEAFA011507B25C

void __cdecl
VoxelBounceEffect_VoxelAdded_mCFFE4DB8A1030D59FDAD617D794437B8D0F788BF
          (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98 *param_1,
          Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *param_2,
          Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *param_3,MethodInfo *param_4)

{
  VoxelBounceEffect_AddVoxel_m4AB3A6CF2BDD5801A01C1485ACEAFA011507B25C
            (param_1,param_2,param_3,true,(MethodInfo *)0x0);
  param_1->___count_8 = param_1->___count_8 + 1;
  return;
}
