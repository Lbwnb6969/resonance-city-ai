// VA 0x142d84940, PDB extent 112 bytes
// tiny_glade::panic_reporter::panic_report::on_game_crashed::closure$2::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_report.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::panic_reporter::panic_report::on_game_crashed::closure$2::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_report.rs
   Extent: 112 */

undefined8 pdb_142d84940(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_30 = &uStack_20;
  pcStack_28 = pdb_140f56800;
  uStack_20 = param_1;
  uVar1 = pdb_142d849b0(&puStack_30);
  pdb_1404b38e0(&uStack_20);
  return uVar1;
}

