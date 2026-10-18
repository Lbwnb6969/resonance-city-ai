// VA 0x142e19160, PDB extent 112 bytes
// country_core::systems::save::save_game::impl$4::create_backup_of::closure$0<std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::impl$4::create_backup_of::closure$0<std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 112 */

undefined8 pdb_142e19160(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pcStack_28 = pdb_1429b41c0;
  uStack_30 = param_1;
  uStack_20 = param_1;
  uVar1 = pdb_142e191d0(&uStack_30);
  pdb_1411808a0(uStack_20);
  return uVar1;
}

