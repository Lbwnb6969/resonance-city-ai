// VA 0x141e3c420, PDB extent 333 bytes
// utils::halver::impl$0::to_f16
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/halver.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::halver::impl$0::to_f16
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/halver.rs
   Extent: 333 */

uint pdb_141e3c420(void)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 in_XMM0 [16];
  
  uVar2 = *_DAT_143cad8c0;
  if (uVar2 == 0) {
    uVar2 = pdb_142dec140();
  }
  if ((uVar2 >> 0x37 & 1) != 0) {
    auVar6 = vcvtps2ph_f16c(in_XMM0,0);
    return auVar6._0_4_;
  }
  uVar1 = in_XMM0._0_4_;
  uVar5 = uVar1 & 0x7f800000;
  uVar4 = uVar1 & 0x7fffff;
  if (uVar5 == 0x7f800000) {
    return uVar4 >> 0xd | (uVar1 & 0x80000000) >> 0x10 | (uint)(uVar4 != 0) << 9 | 0x7c00;
  }
  uVar3 = (uVar1 & 0x80000000) >> 0x10;
  if (uVar5 < 0x47000001) {
    if (0x387fffff < uVar5) {
      return (uint)((uVar1 & 0x2fff) != 0 & (byte)(uVar1 >> 0xc)) +
             ((uVar5 >> 0xd) + (uVar4 >> 0xd) + 0x4000 | uVar3);
    }
    if (0x32ffffff < uVar5) {
      uVar4 = uVar4 | 0x800000;
      uVar1 = uVar4 >> (0x7eU - (char)(uVar5 >> 0x17) & 0x1f);
      uVar5 = 0x1d - (uVar5 >> 0x17) & 0x1f;
      if ((uVar4 >> uVar5 & 1) != 0) {
        uVar1 = (uVar1 + 1) - (uint)(((3 << (sbyte)uVar5) - 1U & uVar4) == 0);
      }
      return uVar1 | uVar3;
    }
  }
  else {
    uVar3 = uVar3 | 0x7c00;
  }
  return uVar3;
}

