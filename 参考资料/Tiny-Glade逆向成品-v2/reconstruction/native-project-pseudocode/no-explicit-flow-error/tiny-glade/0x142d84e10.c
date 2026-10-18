// VA 0x142d84e10, PDB extent 128 bytes
// tiny_glade::panic_reporter::panic_dump::dump_inputs::closure$1::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::panic_reporter::panic_dump::dump_inputs::closure$1::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
   Extent: 128 */

undefined8 pdb_142d84e10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_30 = &uStack_20;
  pcStack_28 = pdb_140f59780;
  uStack_20 = param_1;
  uVar1 = pdb_142d7e3a0(&UNK_142f4eefe,&puStack_30);
  pdb_1404b38e0(&uStack_20);
  return uVar1;
}

