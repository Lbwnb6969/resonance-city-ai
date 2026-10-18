// VA 0x1409f1340, PDB extent 23 bytes
// utils::geometry::ray::Ray::xz
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::ray::Ray::xz
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 23 */

undefined4 * pdb_1409f1340(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar1 = *(undefined8 *)(param_2 + 4);
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = (int)((ulonglong)uVar1 >> 0x20);
  return param_1;
}

