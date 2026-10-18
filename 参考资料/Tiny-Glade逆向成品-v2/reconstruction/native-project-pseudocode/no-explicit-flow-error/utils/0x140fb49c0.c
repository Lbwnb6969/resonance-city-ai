// VA 0x140fb49c0, PDB extent 10 bytes
// gltf::mesh::util::weights::impl$5::cast_f32
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: gltf::mesh::util::weights::impl$5::cast_f32
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
   Extent: 10 */

undefined8 * pdb_140fb49c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return param_1;
}

