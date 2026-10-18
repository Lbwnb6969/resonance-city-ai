// VA 0x140b07570, PDB extent 5 bytes
// country_core::render::nani::trimesh::TrimeshChunk::index_count
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/trimesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::trimesh::TrimeshChunk::index_count
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/trimesh.rs
   Extent: 5 */

undefined2 pdb_140b07570(longlong param_1)

{
  return *(undefined2 *)(param_1 + 8);
}

