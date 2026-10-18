// VA 0x140c01290, PDB extent 79 bytes
// country_core::resources::walls::HighlightColor::to_rgb
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::walls::HighlightColor::to_rgb
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/mod.rs
   Extent: 79 */

void pdb_140c01290(ulonglong *param_1,char *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*param_2 != '\x01') {
    uVar2 = _DAT_142e3c650;
  }
  uVar1 = (uint)(*param_2 == '\x01');
  uVar3 = CONCAT44((int)(uVar1 << 0x1f) >> 0x1f,(int)(uVar1 << 0x1f) >> 0x1f);
  *param_1 = uVar3 & (ulonglong)DAT_143020eb0 | ~uVar3 & (ulonglong)DAT_143062190;
  *(undefined4 *)(param_1 + 1) = uVar2;
  return;
}

