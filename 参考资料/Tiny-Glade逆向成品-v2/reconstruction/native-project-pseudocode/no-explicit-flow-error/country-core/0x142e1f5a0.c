// VA 0x142e1f5a0, PDB extent 78 bytes
// country_core::startup::load_shaders::preload_shaders::closure$1::closure$4::closure$0<country_core::startup::load_shaders::LoadAllGameShaders>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::load_shaders::preload_shaders::closure$1::closure$4::closure$0<country_core::startup::load_shaders::LoadAllGameShaders>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
   Extent: 78 */

void pdb_142e1f5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  code *pcStack_18;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  pcStack_18 = pdb_140094770;
  puStack_10 = &uStack_30;
  pcStack_8 = pdb_1402ed420;
  uStack_30 = param_2;
  uStack_28 = param_3;
  uStack_20 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14354c388,&uStack_20,&UNK_14354c3c0);
}

