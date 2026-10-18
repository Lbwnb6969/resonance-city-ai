// VA 0x1409fb1a0, PDB extent 39 bytes
// country_core::systems::collision::world::impl$105::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::impl$105::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 39 */

void pdb_1409fb1a0(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,&UNK_1430341f0 + *(int *)(&UNK_1430341f0 + (ulonglong)*param_1 * 4),
             *(undefined8 *)(&UNK_143034168 + (ulonglong)*param_1 * 8),*(code **)(param_2[1] + 0x18)
            );
  return;
}

