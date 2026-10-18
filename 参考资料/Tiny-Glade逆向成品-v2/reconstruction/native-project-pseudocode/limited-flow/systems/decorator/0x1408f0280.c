// VA 0x1408f0280, PDB extent 1220 bytes
// system_decorator::audio::op_preview_audio::move_sound
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_preview_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::audio::op_preview_audio::move_sound
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_preview_audio.rs
   Extent: 1220 */

void pdb_1408f0280(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x0001408f02d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14301cc28 + *(int *)(&UNK_14301cc28 + param_2 * 4)))
              (param_1,&UNK_14301cc28 + *(int *)(&UNK_14301cc28 + param_2 * 4));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001408f02fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14301cc08 + *(int *)(&UNK_14301cc08 + param_2 * 4)))
            (param_1,&UNK_14301cc08 + *(int *)(&UNK_14301cc08 + param_2 * 4));
  return;
}

