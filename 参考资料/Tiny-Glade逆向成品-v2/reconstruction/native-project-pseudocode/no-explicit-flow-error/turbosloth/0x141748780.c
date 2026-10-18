// VA 0x141748780, PDB extent 50 bytes
// turbosloth::asset::impl$11::deref
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::asset::impl$11::deref
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 50 */

void pdb_141748780(longlong *param_1)

{
  if (*(longlong *)(*param_1 + 0x28) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14332f558,0xad,&UNK_14332f5b0);
}

