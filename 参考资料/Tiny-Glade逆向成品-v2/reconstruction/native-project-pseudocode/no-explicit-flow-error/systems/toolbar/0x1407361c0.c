// VA 0x1407361c0, PDB extent 29 bytes
// toolbar::mei::core::impl$1::as_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::impl$1::as_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 29 */

void pdb_1407361c0(longlong param_1)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = *(undefined4 *)(param_1 + 8);
  uStack_c = *(undefined4 *)(param_1 + 0xc);
  uStack_8 = *(undefined4 *)(param_1 + 0x10);
  uStack_4 = *(undefined4 *)(param_1 + 0x14);
  pdb_140bbbcb0(&uStack_10);
  return;
}

