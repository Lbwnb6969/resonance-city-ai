// VA 0x140958e70, PDB extent 46 bytes
// country_core::render::nani::gpu_world::impl$14::rg_handle<country_core::render::nani::instance_data::WrenInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::rg_handle<country_core::render::nani::instance_data::WrenInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 46 */

char * pdb_140958e70(char *param_1)

{
  code *pcVar1;
  char *pcVar2;
  
  if (*param_1 != '\0') {
    return param_1 + 4;
  }
  pdb_142dc8110(&UNK_1430265e8,0x43,&UNK_143026630);
  pcVar1 = (code *)swi(3);
  pcVar2 = (char *)(*pcVar1)();
  return pcVar2;
}

