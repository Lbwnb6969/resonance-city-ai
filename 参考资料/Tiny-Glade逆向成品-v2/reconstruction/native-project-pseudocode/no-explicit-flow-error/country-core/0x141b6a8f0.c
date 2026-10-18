// VA 0x141b6a8f0, PDB extent 90 bytes
// country_core::systems::mode_manager::WallGroupSelection::replace<array$<country_core::resources::walls::WallId,1> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mode_manager::WallGroupSelection::replace<array$<country_core::resources::walls::WallId,1>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 90 */

void pdb_141b6a8f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  param_1[2] = 0;
  if (*param_1 == 0) {
    pdb_142d7f1b0(param_1,0,1,8,8);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = 0;
  }
  *(undefined8 *)(param_1[1] + lVar1 * 8) = param_2;
  param_1[2] = lVar1 + 1;
  return;
}

