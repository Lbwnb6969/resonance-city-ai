// VA 0x14094c710, PDB extent 36 bytes
// country_core::geometry::instanced_wall::InstancedWall::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::geometry::instanced_wall::InstancedWall::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
   Extent: 36 */

void pdb_14094c710(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  uVar1 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar1;
  param_1[3] = param_3[2];
  param_1[4] = param_4;
  param_1[5] = param_5;
  return;
}

