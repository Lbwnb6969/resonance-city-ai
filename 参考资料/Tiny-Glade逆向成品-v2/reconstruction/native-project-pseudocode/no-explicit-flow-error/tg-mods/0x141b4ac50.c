// VA 0x141b4ac50, PDB extent 75 bytes
// tg_mods::identity::ModId::recorded_entry
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::identity::ModId::recorded_entry
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 75 */

undefined8 pdb_141b4ac50(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_28;
  code *pcStack_20;
  undefined8 uStack_18;
  code *pcStack_10;
  
  puStack_28 = &UNK_143396570;
  pcStack_20 = pdb_1402ed400;
  pcStack_10 = pdb_140001020;
  uStack_18 = param_2;
  pdb_140f60760(param_1,&UNK_1433964d8,&puStack_28);
  return param_1;
}

