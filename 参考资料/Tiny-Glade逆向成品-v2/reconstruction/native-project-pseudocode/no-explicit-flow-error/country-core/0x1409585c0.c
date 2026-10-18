// VA 0x1409585c0, PDB extent 52 bytes
// country_core::render::nani::gpu_world::impl$14::export_from_rg<country_core::render::nani::instance_data::CurvedHalfTimberInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::export_from_rg<country_core::render::nani::instance_data::CurvedHalfTimberInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 52 */

void pdb_1409585c0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 == 1) {
    iStack_8 = param_1[5];
    iStack_18 = param_1[1];
    iStack_14 = param_1[2];
    iStack_10 = param_1[3];
    iStack_c = param_1[4];
    pdb_140e1e2e0(&iStack_18,param_2,0x23);
  }
  return;
}

