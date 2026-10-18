// VA 0x141b45e90, PDB extent 407 bytes
// utils::geometry::position_from_mesh_uvs::get_position_from_mesh_uv
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/position_from_mesh_uvs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::position_from_mesh_uvs::get_position_from_mesh_uv
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/position_from_mesh_uvs.rs
   Extent: 407 */

undefined4 *
pdb_141b45e90(undefined4 *param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
             longlong param_5,float param_6,float param_7)

{
  undefined4 uVar1;
  ulonglong uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  param_5 = param_5 * 0x18;
  uVar2 = 0xffffffffffffffff;
  pfVar4 = (float *)(param_2 + -4);
  do {
    pfVar3 = pfVar4;
    if (param_5 == 0) {
      uVar1 = 0;
      goto LAB_141b45ff9;
    }
    fVar9 = (float)*param_4;
    fVar6 = (float)param_4[1] - fVar9;
    fVar5 = (float)((ulonglong)*param_4 >> 0x20);
    fVar7 = (float)((ulonglong)param_4[1] >> 0x20) - fVar5;
    fVar8 = (float)param_4[2] - fVar9;
    fVar10 = (float)((ulonglong)param_4[2] >> 0x20) - fVar5;
    fVar11 = _DAT_142e36f28 / (fVar6 * fVar10 - fVar7 * fVar8);
    fVar8 = fVar11 * (fVar10 * (param_6 - fVar9) - fVar8 * (param_7 - fVar5));
    fVar11 = fVar11 * ((param_7 - fVar5) * fVar6 - (param_6 - fVar9) * fVar7);
    fVar9 = (_DAT_142e36f28 - fVar8) - fVar11;
    param_4 = param_4 + 3;
    param_5 = param_5 + -0x18;
    uVar2 = uVar2 + 1;
    pfVar4 = pfVar3 + 9;
  } while ((fVar11 < 0.0) || (CONCAT11(0.0 <= fVar8,0.0 <= fVar9) != 0x101));
  if (param_3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar2,param_3,&UNK_143395e78);
  }
  fVar5 = pfVar3[3];
  fVar6 = pfVar3[6];
  fVar7 = *pfVar4;
  *(ulonglong *)(param_1 + 1) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar3 + 7) >> 0x20) * fVar11 +
                fVar8 * (float)((ulonglong)*(undefined8 *)(pfVar3 + 4) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(pfVar3 + 1) >> 0x20) * fVar9,
                (float)*(undefined8 *)(pfVar3 + 7) * fVar11 +
                fVar8 * (float)*(undefined8 *)(pfVar3 + 4) +
                (float)*(undefined8 *)(pfVar3 + 1) * fVar9);
  param_1[3] = fVar7 * fVar11 + fVar6 * fVar8 + fVar9 * fVar5;
  uVar1 = 1;
LAB_141b45ff9:
  *param_1 = uVar1;
  return param_1;
}

