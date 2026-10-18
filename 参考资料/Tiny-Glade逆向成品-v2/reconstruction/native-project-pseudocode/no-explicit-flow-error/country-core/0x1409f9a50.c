// VA 0x1409f9a50, PDB extent 43 bytes
// country_core::systems::collision::world::impl$1::index
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::impl$1::index
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 43 */

longlong pdb_1409f9a50(longlong param_1,ulonglong param_2,byte param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (uVar1 < param_2) {
    return param_1 + uVar1 * 0x390;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar1,param_2,param_4);
}

