// VA 0x140bd6600, PDB extent 52 bytes
// country_core::resources::active_raster_stroke::InProgressRasterStroke::last
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/active_raster_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::active_raster_stroke::InProgressRasterStroke::last
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/active_raster_stroke.rs
   Extent: 52 */

void pdb_140bd6600(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (*(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x38) * 0xc != 0xc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143064978);
}

