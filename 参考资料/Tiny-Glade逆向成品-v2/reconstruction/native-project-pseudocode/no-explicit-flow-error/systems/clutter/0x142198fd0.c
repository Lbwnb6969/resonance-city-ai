// VA 0x142198fd0, PDB extent 436 bytes
// system_clutter::inter_shape_stitches::detect_intra_shape_corners::add_hole_at_shape_intersection
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::inter_shape_stitches::detect_intra_shape_corners::add_hole_at_shape_intersection
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
   Extent: 436 */

undefined4 * pdb_142198fd0(undefined4 *param_1,float param_2,longlong param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  longlong in_RDX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar6;
  float fVar7;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar6 = (fVar1 + fVar2) * _DAT_142e36f50;
  pdb_140df4540(&uStack_b4,param_3,fVar6);
  uVar4 = pdb_140dea520(&uStack_b4,in_RDX);
  fVar7 = param_2;
  pdb_140df4540(&uStack_b4,param_3 + 8,fVar6);
  uVar5 = pdb_140dea520(&uStack_b4,in_RDX);
  uStack_b4 = pdb_14092f860(in_RDX);
  uStack_b0 = extraout_XMM0_Da;
  fVar6 = (float)pdb_140dea7c0(&uStack_b4,uVar5,uVar4);
  fVar7 = fVar7 - param_2;
  if (fVar6 < 0.0) {
    fVar6 = fVar6 + *(float *)(in_RDX + 0x30);
    fVar7 = fVar7 + *(float *)(in_RDX + 0x30);
  }
  uStack_b4 = pdb_14092f860(in_RDX);
  uStack_b0 = extraout_XMM0_Da_00;
  uVar4 = pdb_140dea610(&uStack_b4);
  uVar3 = 5;
  if (0.0 < fVar6) {
    fVar7 = fVar7 * 0.0 * _DAT_142e36f50;
    *param_1 = uVar4;
    param_1[1] = param_2 + fVar7;
    param_1[2] = fVar6;
    param_1[3] = fVar2 - fVar1;
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 4) = uVar3;
  return param_1;
}

