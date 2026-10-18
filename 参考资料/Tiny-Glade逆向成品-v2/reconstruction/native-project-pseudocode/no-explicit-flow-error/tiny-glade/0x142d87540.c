// VA 0x142d87540, PDB extent 150 bytes
// tiny_glade::panic_reporter::sentry_reporter::create_sentry_attachment::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::panic_reporter::sentry_reporter::create_sentry_attachment::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
   Extent: 150 */

undefined8 pdb_142d87540(ulonglong *param_1)

{
  undefined8 uVar1;
  ulonglong *puStack_30;
  code *pcStack_28;
  ulonglong *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pcStack_28 = pdb_140001020;
  puStack_30 = param_1;
  puStack_20 = param_1;
  uVar1 = pdb_142d7e3a0(&UNK_142f888c9,&puStack_30);
  if (*puStack_20 != 0) {
    pub_1406abac0((byte *)puStack_20[1],*puStack_20,1);
  }
  return uVar1;
}

