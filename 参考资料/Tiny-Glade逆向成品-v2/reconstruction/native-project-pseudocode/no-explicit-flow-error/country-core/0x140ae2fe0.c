// VA 0x140ae2fe0, PDB extent 85 bytes
// country_core::resources::history::HistorySnapshotId::file_name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::HistorySnapshotId::file_name
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 85 */

undefined8 pdb_140ae2fe0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 *puStack_28;
  code *pcStack_20;
  undefined *puStack_18;
  code *pcStack_10;
  
  puStack_28 = &uStack_30;
  pcStack_20 = pdb_140f72a40;
  puStack_18 = &UNK_14304f270;
  pcStack_10 = pdb_1402ed400;
  uStack_30 = param_2;
  pdb_140f60760(param_1,&UNK_14304f280,&puStack_28);
  return param_1;
}

