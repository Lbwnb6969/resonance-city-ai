// VA 0x140958550, PDB extent 98 bytes
// country_core::render::nani::gpu_world::impl$14::import_to_rg<country_core::render::nani::instance_data::GothicWindowBricksInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::import_to_rg<country_core::render::nani::instance_data::GothicWindowBricksInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 98 */

void pdb_140958550(int *param_1,undefined8 param_2)

{
  undefined8 uStack_1c;
  undefined8 uStack_14;
  int iStack_c;
  
  if (*param_1 == 0) {
    pdb_140e1e500(&uStack_1c,*(undefined8 *)(param_1 + 6),param_2,0x23,&UNK_143330ab0);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 1) = uStack_1c;
    *(undefined8 *)(param_1 + 3) = uStack_14;
    param_1[5] = iStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1430265a0,0x2a,&UNK_1430265d0);
}

