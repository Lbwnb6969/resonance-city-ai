// VA 0x1413f86f0, PDB extent 38 bytes
// utils::loop_range::impl$2::next
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::loop_range::impl$2::next
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
   Extent: 38 */

void pdb_1413f86f0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  if ((int)uVar2 < (int)uVar1) {
    uVar3 = param_2[2];
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    *param_2 = uVar2 + 1;
  }
  *param_1 = (uint)((int)uVar2 < (int)uVar1);
  return;
}

