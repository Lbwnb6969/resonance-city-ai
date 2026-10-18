// VA 0x140c67340, PDB extent 56 bytes
// country_core::systems::collision::world::impl$15::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::impl$15::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 56 */

undefined8 pdb_140c67340(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_20 = param_2[6];
  uStack_28 = *(undefined8 *)(param_2 + 4);
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  pdb_140de8100(uStack_18,&uStack_28,&uStack_18);
  return param_1;
}

