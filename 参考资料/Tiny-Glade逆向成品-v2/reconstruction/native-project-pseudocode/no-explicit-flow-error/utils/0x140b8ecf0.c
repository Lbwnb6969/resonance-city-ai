// VA 0x140b8ecf0, PDB extent 173 bytes
// utils::geometry::circle::impl$4::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::circle::impl$4::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 173 */

void pdb_140b8ecf0(longlong param_1,undefined8 param_2)

{
  longlong lStack_8;
  
  lStack_8 = param_1 + 0xc;
  pdb_140f66ff0(param_2,&UNK_14305e0b8,8,&UNK_14305e0c0,6,param_1,&UNK_14305e058,&UNK_14305e0c6,6,
                param_1 + 8,&UNK_14305e078,&UNK_14305e0cc,8,&lStack_8,&UNK_14305e098);
  return;
}

