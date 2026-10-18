// VA 0x1406beb80, PDB extent 8 bytes
// crash_reporter_gui::impl$0::program_outcome
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: crash_reporter_gui::impl$0::program_outcome
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 8 */

undefined1 pdb_1406beb80(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xd0);
}

