// VA 0x1413fd280, PDB extent 166 bytes
// utils::loop_range::impl$18::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::loop_range::impl$18::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
   Extent: 166 */

void pdb_1413fd280(longlong param_1,undefined8 param_2)

{
  longlong lStack_8;
  
  lStack_8 = param_1 + 8;
  pdb_140f66ff0(param_2,&UNK_143306d30,9,&UNK_143306d39,5,param_1,&UNK_143306cf0,&UNK_143306d3e,3,
                param_1 + 4,&UNK_143306cf0,&UNK_143306d41,0xc,&lStack_8,&UNK_143306d10);
  return;
}

