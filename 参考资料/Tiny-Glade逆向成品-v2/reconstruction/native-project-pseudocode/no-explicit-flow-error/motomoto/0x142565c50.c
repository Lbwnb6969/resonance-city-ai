// VA 0x142565c50, PDB extent 65 bytes
// motomoto::tag_from_str_trunc
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: motomoto::tag_from_str_trunc
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
   Extent: 65 */

undefined8 pdb_142565c50(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  if (param_2 != 0) {
    uVar1 = 8;
    if (param_2 < 8) {
      uVar1 = param_2;
    }
    pub_142e32760(&uStack_8,param_1,uVar1);
    return uStack_8;
  }
  return 0;
}

