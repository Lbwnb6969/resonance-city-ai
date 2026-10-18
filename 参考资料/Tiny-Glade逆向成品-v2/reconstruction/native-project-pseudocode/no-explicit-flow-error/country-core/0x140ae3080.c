// VA 0x140ae3080, PDB extent 103 bytes
// country_core::resources::history::History::debug_display
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::History::debug_display
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 103 */

undefined8 pdb_140ae3080(undefined8 param_1,longlong param_2)

{
  int iStack_3c;
  longlong lStack_38;
  code *pcStack_30;
  int *piStack_28;
  code *pcStack_20;
  longlong lStack_18;
  code *pcStack_10;
  
  lStack_38 = param_2 + 0x68;
  iStack_3c = *(int *)(param_2 + 0x10) + -1;
  lStack_18 = param_2 + 0x6c;
  pcStack_30 = pdb_140bbbec0;
  piStack_28 = &iStack_3c;
  pcStack_20 = pdb_140f71c50;
  pcStack_10 = pdb_140bbbec0;
  pdb_140f60760(param_1,&UNK_14304f2b6,&lStack_38);
  return param_1;
}

