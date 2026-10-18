// VA 0x142d8e1d0, PDB extent 89 bytes
// country_core::render::nani::gpu_world::impl$12::extend::closure$0<country_core::resources::placement_data::PlacementDataSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$12::extend::closure$0<country_core::resources::placement_data::PlacementDataSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 89 */

void pdb_142d8e1d0(undefined8 param_1)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  code *pcStack_18;
  undefined **ppuStack_10;
  code *pcStack_8;
  
  puStack_30 = &UNK_1430268f2;
  uStack_28 = 0x3a;
  pcStack_18 = pdb_140960640;
  ppuStack_10 = &puStack_30;
  pcStack_8 = pdb_1402ed420;
  uStack_20 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143025ea7,&uStack_20,&UNK_143025ed0);
}

