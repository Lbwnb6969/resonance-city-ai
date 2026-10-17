// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::BoardWallSpace::rectangle_side_wallspace_ranges
// VA 0x141483c00, PDB extent 388 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::BoardWallSpace::rectangle_side_wallspace_ranges
   Extent: 388 bytes. No whole-program auto-analysis. */

undefined4 * pdb_141483c00(undefined4 *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  
  if ((*(uint *)(param_2 + 0x1c) == 2) || ((*(uint *)(param_2 + 0x1c) & 1) == 0)) {
    *param_1 = 0;
  }
  else {
    uStack_a8 = *(undefined8 *)(param_2 + 0x30);
    uStack_b8 = *(undefined4 *)(param_2 + 0x20);
    uStack_b4 = *(undefined4 *)(param_2 + 0x24);
    uStack_b0 = *(undefined4 *)(param_2 + 0x28);
    uStack_ac = *(undefined4 *)(param_2 + 0x2c);
    fVar2 = (float)pdb_140df0700(&uStack_b8,0);
    fVar1 = *(float *)(param_2 + 0x3c);
    fVar3 = (float)pdb_140df0700(&uStack_b8,1);
    fVar4 = (float)pdb_140df0700(&uStack_b8,1);
    fVar5 = (float)pdb_140df0700(&uStack_b8,2);
    fVar6 = (float)pdb_140df0700(&uStack_b8,2);
    fVar7 = (float)pdb_140df0700(&uStack_b8,3);
    fVar8 = (float)pdb_140df0700(&uStack_b8,3);
    fVar9 = (float)pdb_140df0700(&uStack_b8,4);
    param_1[1] = fVar2 * fVar1;
    param_1[2] = fVar3 * fVar1;
    param_1[3] = fVar4 * fVar1;
    param_1[4] = fVar5 * fVar1;
    param_1[5] = fVar6 * fVar1;
    param_1[6] = fVar7 * fVar1;
    param_1[7] = fVar8 * fVar1;
    param_1[8] = fVar9 * fVar1;
    *param_1 = 1;
  }
  return param_1;
}

