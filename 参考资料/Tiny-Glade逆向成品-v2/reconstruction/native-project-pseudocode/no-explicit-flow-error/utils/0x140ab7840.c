// VA 0x140ab7840, PDB extent 217 bytes
// utils::geometry::rectangle::impl$9::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::rectangle::impl$9::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 217 */

void pdb_140ab7840(longlong param_1,undefined8 param_2)

{
  longlong lStack_8;
  
  lStack_8 = param_1 + 8;
  pdb_140f67100(param_2,&UNK_14304a920,0xb,&UNK_14304a92b,0xb,param_1,&UNK_14304a8c0,&UNK_14304a936,
                5,param_1 + 0x10,&UNK_14304a8e0,&UNK_14304a93b,6,param_1 + 0x14,&UNK_14304a8e0,
                &UNK_14304a941,6,&lStack_8,&UNK_14304a900);
  return;
}

