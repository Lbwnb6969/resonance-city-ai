// VA 0x140cb5e10, PDB extent 170 bytes
// tg_text::TextFragment::replace_editor
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::replace_editor
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 170 */

void pdb_140cb5e10(longlong param_1,undefined8 param_2)

{
  ulonglong arg1;
  
  pdb_141cbd000();
  pub_142e32760(param_1,param_2,0x1a0);
  *(undefined4 *)(param_1 + 0x24c) = 0;
  arg1 = *(ulonglong *)(param_1 + 0x1e8);
  if ((!SBORROW8(0,arg1)) && (arg1 != 0)) {
    pub_1406abac0(*(byte **)(param_1 + 0x1f0),arg1,1);
  }
  *(undefined8 *)(param_1 + 0x1e8) = 0x8000000000000000;
  return;
}

