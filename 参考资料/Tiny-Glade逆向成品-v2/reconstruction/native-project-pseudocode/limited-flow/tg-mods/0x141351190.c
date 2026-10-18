// VA 0x141351190, PDB extent 19 bytes
// tg_mods::identity::impl$0::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::identity::impl$0::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 19 */

void pdb_141351190(longlong param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
             *(code **)(param_2[1] + 0x18));
  return;
}

