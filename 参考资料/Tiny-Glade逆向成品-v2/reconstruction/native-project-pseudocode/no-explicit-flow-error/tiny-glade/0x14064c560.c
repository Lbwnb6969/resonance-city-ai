// VA 0x14064c560, PDB extent 46 bytes
// tiny_glade::run_game::impl$5::display_handle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::run_game::impl$5::display_handle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
   Extent: 46 */

undefined4 * pdb_14064c560(undefined4 *param_1,int *param_2)

{
  if (*param_2 == 1) {
    *param_1 = 8;
    return param_1;
  }
  pdb_1406d1720(param_1,param_2 + 2);
  return param_1;
}

