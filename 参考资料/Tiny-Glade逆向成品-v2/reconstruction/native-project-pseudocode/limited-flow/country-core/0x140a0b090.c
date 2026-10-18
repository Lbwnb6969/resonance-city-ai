// VA 0x140a0b090, PDB extent 39 bytes
// country_core::systems::brush_preview::impl$6::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/brush_preview.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::brush_preview::impl$6::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/brush_preview.rs
   Extent: 39 */

void pdb_140a0b090(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,&UNK_143035d80 + *(int *)(&UNK_143035d80 + (ulonglong)*param_1 * 4),
             *(undefined8 *)(&UNK_143035d08 + (ulonglong)*param_1 * 8),*(code **)(param_2[1] + 0x18)
            );
  return;
}

