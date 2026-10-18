// VA 0x14094c740, PDB extent 73 bytes
// country_core::geometry::instanced_wall::InstancedWall::update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::geometry::instanced_wall::InstancedWall::update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
   Extent: 73 */

void pdb_14094c740(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    pub_1406abac0(*(byte **)(param_1 + 0x10),lVar1 << 6,4);
  }
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  uVar2 = param_2[1];
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}

