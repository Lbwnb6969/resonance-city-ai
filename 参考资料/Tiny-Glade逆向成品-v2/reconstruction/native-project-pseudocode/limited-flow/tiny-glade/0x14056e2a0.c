// VA 0x14056e2a0, PDB extent 307 bytes
// tiny_glade::winit_bevy_glue::winit_to_bevy_logical_key
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_bevy_glue.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::winit_bevy_glue::winit_to_bevy_logical_key
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_bevy_glue.rs
   Extent: 307 */

void pdb_14056e2a0(undefined8 param_1,ushort *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014056e2b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f6a604 + *(int *)(&UNK_142f6a604 + (ulonglong)*param_2 * 4)))();
  return;
}

