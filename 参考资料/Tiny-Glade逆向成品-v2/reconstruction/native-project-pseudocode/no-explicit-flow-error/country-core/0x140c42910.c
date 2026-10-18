// VA 0x140c42910, PDB extent 48 bytes
// country_core::resources::walls::stone_foundation_cutouts::StoneFoundationCutoutKind::cottage_rank
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/stone_foundation_cutouts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::stone_foundation_cutouts::StoneFoundationCutoutKind::cottage_rank
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/stone_foundation_cutouts.rs
   Extent: 48 */

ulonglong pdb_140c42910(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 < 3) {
    return CONCAT71((int7)(uVar1 >> 8),(char)uVar1 + '\x03') & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14306cb88,0x28,&UNK_14306d320);
}

