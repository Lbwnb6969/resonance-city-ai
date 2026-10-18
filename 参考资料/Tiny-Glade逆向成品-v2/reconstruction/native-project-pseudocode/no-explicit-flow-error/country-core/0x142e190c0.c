// VA 0x142e190c0, PDB extent 93 bytes
// country_core::systems::save::save_file_identity::try_approx_parse_save_file_identity::closure$0<std::fs::File>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_file_identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_file_identity::try_approx_parse_save_file_identity::closure$0<std::fs::File>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_file_identity.rs
   Extent: 93 */

void pdb_142e190c0(void)

{
  undefined *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  code *pcStack_28;
  undefined1 auStack_20 [24];
  
  puStack_40 = &UNK_1434da098;
  pcStack_38 = pdb_1402ed400;
  puStack_30 = &UNK_1434da090;
  pcStack_28 = pdb_140f72a40;
  pdb_140f60760(auStack_20,&UNK_1434da0a8,&puStack_40);
  pdb_142dce910(auStack_20);
  return;
}

