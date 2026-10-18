// VA 0x140a31a40, PDB extent 39 bytes
// country_core::resources::texture_presets::impl$19::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/texture_presets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::texture_presets::impl$19::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/texture_presets.rs
   Extent: 39 */

void pdb_140a31a40(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,&UNK_14303a7d8 + *(int *)(&UNK_14303a7d8 + (ulonglong)*param_1 * 4),
             *(undefined8 *)(&UNK_14303a708 + (ulonglong)*param_1 * 8),*(code **)(param_2[1] + 0x18)
            );
  return;
}

