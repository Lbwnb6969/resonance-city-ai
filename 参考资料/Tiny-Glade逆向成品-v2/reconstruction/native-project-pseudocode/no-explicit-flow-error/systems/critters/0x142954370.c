// VA 0x142954370, PDB extent 657 bytes
// system_critters::fish::despawn_fish
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/fish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::fish::despawn_fish
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/fish.rs
   Extent: 657 */

void pdb_142954370(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  plVar1 = (longlong *)*param_1;
  if (*plVar1 != 0) {
    pub_1406abac0((byte *)plVar1[1],*plVar1 * 0x18,4);
  }
  if (plVar1[3] != 0) {
    pub_1406abac0((byte *)plVar1[4],plVar1[3] * 0x38,8);
  }
  *plVar1 = 0;
  plVar1[1] = 4;
  plVar1[2] = 0;
  plVar1[3] = 0;
  plVar1[4] = 8;
  plVar1[5] = 0;
  plVar1[6] = 0;
  fVar4 = _DAT_142f895e0;
  fVar3 = _DAT_142f57bc4;
  fVar2 = _DAT_142e36f28;
  lStack_a8 = 0;
  lStack_a0 = 4;
  lStack_98 = 0;
  lVar9 = 0;
  do {
    fVar11 = (float)lVar9;
    lVar9 = lVar9 + 1;
    fVar11 = fVar11 / fVar3;
    lVar10 = lStack_98 * 0xc;
    lVar8 = 0;
    do {
      lVar7 = lStack_98;
      fVar12 = (float)lVar8 / fVar3;
      if (lStack_98 == lStack_a8) {
        pdb_142d7f010(&lStack_a8);
      }
      lVar6 = lStack_a0;
      lVar5 = lStack_a8;
      lVar8 = lVar8 + 1;
      *(float *)(lStack_a0 + lVar10) = fVar11 * fVar4 - (fVar2 - fVar11) * fVar4;
      *(float *)(lStack_a0 + 4 + lVar10) = fVar12 * fVar4 - (fVar2 - fVar12) * fVar4;
      *(undefined1 *)(lStack_a0 + 8 + lVar10) = 0;
      lVar7 = lVar7 + 1;
      lVar10 = lVar10 + 0xc;
      lStack_98 = lVar7;
    } while (lVar8 != 0x19);
  } while (lVar9 != 0x19);
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2 = (longlong *)*param_2;
  if (*param_2 != 0) {
    pub_1406abac0((byte *)param_2[1],*param_2 * 0xc,4);
  }
  param_2[2] = lVar7;
  *param_2 = lVar5;
  param_2[1] = lVar6;
  return;
}

