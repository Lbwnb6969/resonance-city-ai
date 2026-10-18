// VA 0x1408ef660, PDB extent 561 bytes
// system_decorator::audio::op_confirm_audio::place_sound
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_confirm_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::audio::op_confirm_audio::place_sound
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_confirm_audio.rs
   Extent: 561 */

void pdb_1408ef660(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001408ef6aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14301cab0 + *(int *)(&UNK_14301cab0 + param_2 * 4)))();
  return;
}

