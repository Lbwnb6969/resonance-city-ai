// VA 0x140a96f90, PDB extent 97 bytes
// country_core::render::mesh::Mesh::arrayed_indices
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::mesh::Mesh::arrayed_indices
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 97 */

undefined8 pdb_140a96f90(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  lStack_30 = *(longlong *)(param_2 + 8);
  uVar1 = *(ulonglong *)(param_2 + 0x10) / 3;
  lStack_28 = uVar1 * 3;
  uStack_18 = *(ulonglong *)(param_2 + 0x10) % 3;
  lStack_20 = lStack_30 + uVar1 * 0xc;
  uStack_10 = 3;
  pdb_1415f7ae0(param_1,&lStack_30);
  return param_1;
}

