// VA 0x142d929f0, PDB extent 128 bytes
// country_core::resources::clutter_packs::discover_mod_clutter::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_packs::discover_mod_clutter::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 128 */

undefined8 pdb_142d929f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pcStack_38 = pdb_140f58250;
  puStack_30 = &uStack_20;
  pcStack_28 = pdb_140f59780;
  uStack_40 = param_1;
  uStack_20 = param_2;
  uVar1 = pdb_142d8fe70(&UNK_1430760a6,&uStack_40);
  pdb_1404b38e0(&uStack_20);
  return uVar1;
}

