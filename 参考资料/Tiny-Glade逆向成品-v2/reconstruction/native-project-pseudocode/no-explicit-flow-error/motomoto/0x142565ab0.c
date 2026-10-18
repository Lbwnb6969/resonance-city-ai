// VA 0x142565ab0, PDB extent 83 bytes
// motomoto::impl$1::as_tag
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: motomoto::impl$1::as_tag
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
   Extent: 83 */

undefined8 pdb_142565ab0(undefined8 *param_1)

{
  undefined8 uStack_8;
  
  if (8 < (ulonglong)param_1[1]) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143516348,0x33,&UNK_143516398);
  }
  uStack_8 = 0;
  if (param_1[1] != 0) {
    pub_142e32760(&uStack_8,*param_1);
    return uStack_8;
  }
  return 0;
}

