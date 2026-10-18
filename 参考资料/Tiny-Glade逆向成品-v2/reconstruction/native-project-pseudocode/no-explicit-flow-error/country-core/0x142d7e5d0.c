// VA 0x142d7e5d0, PDB extent 72 bytes
// country_core::utils::get_last_event::closure$0<country_core::resources::mouse_capture::CustomCursorSsboCreatedCmd>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::get_last_event::closure$0<country_core::resources::mouse_capture::CustomCursorSsboCreatedCmd>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
   Extent: 72 */

void pdb_142d7e5d0(void)

{
  undefined *puStack_20;
  undefined8 uStack_18;
  undefined **ppuStack_10;
  code *pcStack_8;
  
  puStack_20 = &UNK_142e61018;
  uStack_18 = 0x42;
  ppuStack_10 = &puStack_20;
  pcStack_8 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142e60fb0,&ppuStack_10,&UNK_142e60fd0);
}

