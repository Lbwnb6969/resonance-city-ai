// VA 0x140c428e0, PDB extent 45 bytes
// country_core::resources::walls::stone_foundation_cutouts::StoneFoundationCutoutKind::gothic_rank
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/stone_foundation_cutouts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::stone_foundation_cutouts::StoneFoundationCutoutKind::gothic_rank
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/stone_foundation_cutouts.rs
   Extent: 45 */

ulonglong pdb_140c428e0(longlong param_1)

{
  if (param_1 - 1U < 3) {
    return param_1 - 1U & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14306cb88,0x28,&UNK_14306d308);
}

