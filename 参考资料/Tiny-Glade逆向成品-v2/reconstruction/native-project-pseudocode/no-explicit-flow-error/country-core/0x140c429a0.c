// VA 0x140c429a0, PDB extent 48 bytes
// country_core::resources::walls::stone_foundation_cutouts::StoneFoundationCutoutKind::cottage_balcony_door_rank
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/stone_foundation_cutouts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::stone_foundation_cutouts::StoneFoundationCutoutKind::cottage_balcony_door_rank
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/stone_foundation_cutouts.rs
   Extent: 48 */

ulonglong pdb_140c429a0(longlong param_1)

{
  if (param_1 - 1U < 3) {
    return param_1 - 1U & 0xffffffff | 0xc;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14306cb88,0x28,&UNK_14306d368);
}

