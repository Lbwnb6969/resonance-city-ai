// VA 0x140cb8d70, PDB extent 32 bytes
// tg_text::font_table::FontTableEntry::scaled
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/font_table.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::font_table::FontTableEntry::scaled
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/font_table.rs
   Extent: 32 */

undefined8 * pdb_140cb8d70(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x18);
  *param_1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = uVar2;
  param_1[2] = CONCAT44(fVar1 * (float)((ulonglong)*param_3 >> 0x20),fVar1 * (float)*param_3);
  return param_1;
}

