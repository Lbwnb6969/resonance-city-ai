// VA 0x140b86c90, PDB extent 44 bytes
// country_core::resources::walls::wall_attachment::WallCornerAttachment::from_rectangle_corner_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_attachment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_attachment::WallCornerAttachment::from_rectangle_corner_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_attachment.rs
   Extent: 44 */

ulonglong pdb_140b86c90(ulonglong param_1)

{
  if (param_1 < 4) {
    return CONCAT71((int7)(param_1 >> 8),(char)param_1 + '\x01') & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14305d246,0x18,&UNK_14305d2a0);
}

