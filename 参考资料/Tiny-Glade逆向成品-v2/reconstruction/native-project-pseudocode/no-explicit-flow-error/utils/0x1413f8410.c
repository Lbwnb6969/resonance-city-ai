// VA 0x1413f8410, PDB extent 37 bytes
// utils::loop_range::impl$3::next_back
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::loop_range::impl$3::next_back
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
   Extent: 37 */

void pdb_1413f8410(uint *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_2[1];
  iVar2 = *param_2;
  if (iVar2 < iVar1) {
    param_2[1] = iVar1 - 1U;
    uVar3 = param_2[2];
    param_1[1] = iVar1 - 1U;
    param_1[2] = uVar3;
  }
  *param_1 = (uint)(iVar2 < iVar1);
  return;
}

