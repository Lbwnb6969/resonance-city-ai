// VA 0x142d929a0, PDB extent 79 bytes
// country_core::resources::clutter_packs::discover_mod_clutter::closure$4
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_packs::discover_mod_clutter::closure$4
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 79 */

void pdb_142d929a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined1 auStack_20 [24];
  
  pcStack_38 = pdb_140f58250;
  pcStack_28 = pdb_140094770;
  uStack_40 = param_2;
  uStack_30 = param_1;
  pdb_140f60760(auStack_20,&UNK_1430761fa,&uStack_40);
  pdb_142de92b0(auStack_20);
  return;
}

