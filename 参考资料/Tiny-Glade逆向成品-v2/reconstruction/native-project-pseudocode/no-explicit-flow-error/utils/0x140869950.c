// VA 0x140869950, PDB extent 136 bytes
// utils::components::transform::Transform::forward
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/components/transform.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::components::transform::Transform::forward
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/components/transform.rs
   Extent: 136 */

void pdb_140869950(undefined8 *param_1,float *param_2)

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
  float fVar10;
  float fVar11;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar6 = fVar3 * fVar3;
  fVar9 = fVar4 * fVar4;
  fVar10 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar7 = (fVar9 - (fVar10 + fVar6)) * _UNK_142e37b08;
  fVar5 = _UNK_142e37b08 * fVar3 + _UNK_142e37b04 * fVar2 + _DAT_142e37b00 * fVar1;
  fVar5 = fVar5 + fVar5;
  fVar8 = fVar1 * _UNK_142f46978;
  fVar11 = fVar2 * _UNK_142f46988;
  fVar4 = fVar4 + fVar4;
  *param_1 = CONCAT44(fVar4 * (fVar3 * _UNK_142f46974 - fVar1 * _UNK_142f46984) +
                      fVar5 * fVar2 + (fVar9 - (fVar10 + fVar6)) * _UNK_142e37b04,
                      fVar4 * (fVar2 * _DAT_142f46970 - fVar3 * _DAT_142f46980) +
                      fVar5 * fVar1 + (fVar9 - (fVar10 + fVar6)) * _DAT_142e37b00);
  *(float *)(param_1 + 1) = fVar4 * (fVar8 - fVar11) + fVar5 * fVar3 + fVar7;
  return;
}

