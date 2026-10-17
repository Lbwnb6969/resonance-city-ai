// RVA 0x3f0960 | Placemaker.VoxelBounceEffect$$VoxelRemoved
// PDB: VoxelBounceEffect_VoxelRemoved_m24A3BD534089029C707D613E16D74C2569A36703
// Body: [[103f0960, 103f097f]]
// Direct callees:
// 103f0160 VoxelBounceEffect_AddVoxel_m4AB3A6CF2BDD5801A01C1485ACEAFA011507B25C

void __cdecl
VoxelBounceEffect_VoxelRemoved_m24A3BD534089029C707D613E16D74C2569A36703
          (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98 *param_1,
          Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *param_2,
          Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *param_3,MethodInfo *param_4)

{
  VoxelBounceEffect_AddVoxel_m4AB3A6CF2BDD5801A01C1485ACEAFA011507B25C
            (param_1,param_2,param_3,false,(MethodInfo *)0x0);
  param_1->___count_8 = param_1->___count_8 + 1;
  return;
}
