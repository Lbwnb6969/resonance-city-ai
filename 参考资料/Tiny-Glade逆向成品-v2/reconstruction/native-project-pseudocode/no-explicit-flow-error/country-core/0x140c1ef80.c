// VA 0x140c1ef80, PDB extent 186 bytes
// country_core::resources::time_of_day::TodSequence::from_json
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time_of_day.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::time_of_day::TodSequence::from_json
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time_of_day.rs
   Extent: 186 */

longlong * pdb_140c1ef80(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  longlong lStack_20;
  uint *puStack_18;
  longlong lStack_10;
  
  pdb_14164f9b0(&lStack_20);
  fVar10 = _UNK_14301d4a4;
  fVar9 = _DAT_14301d4a0;
  fVar8 = _UNK_14301d49c;
  fVar7 = _UNK_14301d498;
  fVar6 = _UNK_14301d494;
  fVar5 = _DAT_14301d490;
  uVar4 = _UNK_142e377ec;
  uVar3 = _UNK_142e377e8;
  uVar2 = _UNK_142e377e4;
  uVar1 = _DAT_142e377e0;
  if (SBORROW8(0,lStack_20)) {
    param_1[1] = (longlong)puStack_18;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  if (lStack_10 != 0) {
    puVar11 = puStack_18;
    do {
      *puVar11 = -(uint)(fVar5 < (float)(*puVar11 & uVar1)) & *puVar11;
      puVar11[1] = -(uint)(fVar6 < (float)(puVar11[1] & uVar2)) & puVar11[1];
      puVar11[2] = -(uint)(fVar7 < (float)(puVar11[2] & uVar3)) & puVar11[2];
      puVar11[3] = -(uint)(fVar8 < (float)(puVar11[3] & uVar4)) & puVar11[3];
      uVar12 = (uint)*(undefined8 *)(puVar11 + 4);
      uVar13 = (uint)((ulonglong)*(undefined8 *)(puVar11 + 4) >> 0x20);
      *(ulonglong *)(puVar11 + 4) =
           CONCAT44(-(uint)(fVar10 < (float)(uVar13 & uVar2)) & uVar13,
                    -(uint)(fVar9 < (float)(uVar12 & uVar1)) & uVar12);
      puVar11 = puVar11 + 0x18;
    } while (puVar11 != puStack_18 + lStack_10 * 0x18);
  }
  *param_1 = lStack_20;
  param_1[1] = (longlong)puStack_18;
  param_1[2] = lStack_10;
  return param_1;
}

