// VA 0x141c81540, PDB extent 165 bytes
// utils::rgb9e5::pack_rgb9e5
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rgb9e5.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::rgb9e5::pack_rgb9e5
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rgb9e5.rs
   Extent: 165 */

uint pdb_141c81540(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  fVar1 = 0.0;
  if (0.0 <= *param_1) {
    fVar1 = *param_1;
  }
  fVar2 = _DAT_1433a3fe0;
  if (fVar1 <= _DAT_1433a3fe0) {
    fVar2 = fVar1;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulonglong *)(param_1 + 1);
  auVar6 = maxps(ZEXT816(0),auVar6);
  auVar6 = minps(_DAT_1433a3ff0,auVar6);
  fVar3 = auVar6._0_4_;
  fVar4 = auVar6._4_4_;
  fVar1 = fVar3;
  if (fVar3 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar5 = (float)(~-(uint)NAN(fVar2) & (uint)fVar1 | -(uint)NAN(fVar2) & (uint)fVar3);
  fVar1 = fVar4;
  if (fVar4 <= _DAT_1433a4000) {
    fVar1 = _DAT_1433a4000;
  }
  if (fVar5 <= fVar1) {
    fVar5 = fVar1;
  }
  fVar1 = (float)((int)fVar5 + 0x7804000U & 0x7f800000);
  return (uint)(fVar2 + fVar1) & 0x1ff |
         (int)(fVar1 + fVar3) << 9 | (int)fVar1 * 0x10 + 0x10000000U | (int)(fVar1 + fVar4) << 0x12;
}

