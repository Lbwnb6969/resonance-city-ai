// VA 0x1405fa3e0, PDB extent 120 bytes
// tiny_glade::create_crash_reporter_file_logger::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::create_crash_reporter_file_logger::closure$0
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 120 */

void pdb_1405fa3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  undefined4 *puStack_30;
  code *pcStack_28;
  undefined8 *puStack_20;
  code *pcStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_48 = *(undefined8 *)(param_4 + 0x30);
  uStack_10 = *(undefined4 *)(param_4 + 0x38);
  uStack_c = *(undefined4 *)(param_4 + 0x3c);
  uStack_8 = *(undefined4 *)(param_4 + 0x40);
  uStack_4 = *(undefined4 *)(param_4 + 0x44);
  puStack_40 = &uStack_48;
  pcStack_38 = pdb_140f332c0;
  puStack_30 = &uStack_10;
  pcStack_28 = pdb_1402ed400;
  puStack_20 = &uStack_50;
  pcStack_18 = pdb_1403d7720;
  uStack_50 = param_3;
  pdb_1407206c0(param_2,&UNK_142f75887,&puStack_40);
  return;
}

