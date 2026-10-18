// VA 0x142d876a0, PDB extent 126 bytes
// tiny_glade::run_game::async_load_audio_assets::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::run_game::async_load_audio_assets::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
   Extent: 126 */

void pdb_142d876a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  code *pcStack_30;
  undefined8 *puStack_28;
  code *pcStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  pcStack_30 = pdb_1402ed420;
  puStack_28 = &uStack_18;
  pcStack_20 = pdb_140f56800;
  uStack_38 = param_1;
  uStack_18 = param_2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f8dfeb,&uStack_38,&UNK_142f8e010);
}

