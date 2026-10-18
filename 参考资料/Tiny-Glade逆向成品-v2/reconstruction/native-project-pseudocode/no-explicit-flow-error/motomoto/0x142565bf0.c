// VA 0x142565bf0, PDB extent 82 bytes
// motomoto::tag_from_str
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: motomoto::tag_from_str
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
   Extent: 82 */

undefined8 pdb_142565bf0(undefined8 param_1,ulonglong param_2)

{
  undefined8 uStack_8;
  
  if (8 < param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143516348,0x33,&UNK_143516398);
  }
  uStack_8 = 0;
  if (param_2 != 0) {
    pub_142e32760(&uStack_8,param_1);
    return uStack_8;
  }
  return 0;
}

