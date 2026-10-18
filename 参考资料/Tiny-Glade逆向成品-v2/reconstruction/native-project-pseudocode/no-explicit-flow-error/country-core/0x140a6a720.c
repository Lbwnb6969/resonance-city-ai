// VA 0x140a6a720, PDB extent 46 bytes
// country_core::resources::walls::wall_render_slots::WallRenderSlots::set_gpu_capacity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_render_slots::WallRenderSlots::set_gpu_capacity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
   Extent: 46 */

void pdb_140a6a720(longlong param_1,ulonglong param_2)

{
  if (param_2 < 0x20001) {
    *(int *)(param_1 + 100) = (int)param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143040bb0,0x2d,&UNK_143040c20);
}

