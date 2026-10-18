// VA 0x1413f8440, PDB extent 82 bytes
// utils::loop_range::LoopIdx::index
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::loop_range::LoopIdx::index
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
   Extent: 82 */

longlong pdb_1413f8440(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8510(&UNK_143306140);
  }
  if (param_1 != -0x80000000 || param_2 != 0xffffffff) {
    uVar1 = -param_2;
    if ((int)-param_2 < 0) {
      uVar1 = param_2;
    }
    return (longlong)(int)((param_1 % (int)param_2 >> 0x1f & uVar1) + param_1 % (int)param_2);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8550(&UNK_143306140);
}

