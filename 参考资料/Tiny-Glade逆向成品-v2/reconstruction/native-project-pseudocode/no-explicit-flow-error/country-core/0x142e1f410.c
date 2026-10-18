// VA 0x142e1f410, PDB extent 393 bytes
// country_core::startup::load_shaders::preload_shaders::closure$1::closure$0<country_core::startup::load_shaders::LoadAllGameShaders>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::load_shaders::preload_shaders::closure$1::closure$0<country_core::startup::load_shaders::LoadAllGameShaders>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
   Extent: 393 */

void pdb_142e1f410(undefined8 param_1)

{
  undefined8 uStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pcStack_40 = pdb_140e418e0;
  uStack_48 = param_1;
  uStack_38 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14354c308,&uStack_48,&UNK_14354c370);
}

