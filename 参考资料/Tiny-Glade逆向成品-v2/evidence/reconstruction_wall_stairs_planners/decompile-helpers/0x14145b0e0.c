// Matched PDB: core::slice::sort::shared::smallsort::insert_tail<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceRegion,alloc::slice::impl$0::sort_by::closure_env$0<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceRegion,system_wall_constructor::construct_wooden_walls::construct_wall_boards::merge_adjacent_same_y_regions::closure_env$0> >
// VA 0x14145b0e0, PDB extent 254 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   core::slice::sort::shared::smallsort::insert_tail<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceRegion,alloc::slice::impl$0::sort_by::closure_env$0<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceRegion,system_wall_constructor::construct_wooden_walls::construct_wall_boards::merge_adjacent_same_y_regions::closure_env$0>
   >
   Extent: 254 bytes. No whole-program auto-analysis. */

void pdb_14145b0e0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar1 = *(uint *)(param_2 + 2);
  uVar2 = *(uint *)((longlong)param_2 + 0x14);
  uVar10 = (uint)((int)uVar1 >> 0x1f) >> 1 ^ uVar1;
  uVar9 = (uint)((int)*(uint *)(param_2 + -3) >> 0x1f) >> 1 ^ *(uint *)(param_2 + -3);
  uVar11 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  bVar7 = (int)uVar10 < (int)uVar9;
  if (uVar10 == uVar9) {
    bVar7 = (int)uVar11 <
            (int)((uint)((int)*(uint *)((longlong)param_2 + -0x14) >> 0x1f) >> 1 ^
                 *(uint *)((longlong)param_2 + -0x14));
  }
  if (bVar7) {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    do {
      puVar8 = param_2;
      puVar8[4] = puVar8[-1];
      puVar8[2] = puVar8[-3];
      puVar8[3] = puVar8[-2];
      *puVar8 = puVar8[-5];
      puVar8[1] = puVar8[-4];
      if (puVar8 + -5 == param_1) break;
      uVar9 = (uint)((int)*(uint *)(puVar8 + -8) >> 0x1f) >> 1 ^ *(uint *)(puVar8 + -8);
      bVar7 = (int)uVar10 < (int)uVar9;
      if (uVar10 == uVar9) {
        bVar7 = (int)uVar11 <
                (int)((uint)((int)*(uint *)((longlong)puVar8 + -0x3c) >> 0x1f) >> 1 ^
                     *(uint *)((longlong)puVar8 + -0x3c));
      }
      param_2 = puVar8 + -5;
    } while (bVar7);
    puVar8[-5] = uVar3;
    puVar8[-4] = uVar4;
    *(uint *)(puVar8 + -3) = uVar1;
    *(uint *)((longlong)puVar8 + -0x14) = uVar2;
    puVar8[-2] = uVar5;
    puVar8[-1] = uVar6;
  }
  return;
}

