// VA 0x1406186e0, PDB extent 107 bytes
// tiny_glade::panic_reporter::sentry_reporter::init_sentry_client::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::panic_reporter::sentry_reporter::init_sentry_client::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
   Extent: 107 */

undefined8 pdb_1406186e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong arg1;
  
  arg1 = *(ulonglong *)(param_3 + 0x228);
  if ((-0x7fffffffffffffff < (longlong)arg1) && (arg1 != 0)) {
    pub_1406abac0(*(byte **)(param_3 + 0x230),arg1,1);
  }
  *(undefined8 *)(param_3 + 0x228) = 0x8000000000000001;
  pub_142e32760(param_1,param_3,0x4c8);
  return param_1;
}

