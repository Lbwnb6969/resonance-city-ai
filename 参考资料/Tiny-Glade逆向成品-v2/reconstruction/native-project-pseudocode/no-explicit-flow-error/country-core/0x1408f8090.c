// VA 0x1408f8090, PDB extent 46 bytes
// country_core::components::drawable::RenderPipelinesInner::binding_set_layout_item_name_static
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::components::drawable::RenderPipelinesInner::binding_set_layout_item_name_static
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 46 */

void pdb_1408f8090(longlong param_1)

{
  if (!SBORROW8(0,*(longlong *)(param_1 + 8))) {
    pdb_140e940b0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  return;
}

