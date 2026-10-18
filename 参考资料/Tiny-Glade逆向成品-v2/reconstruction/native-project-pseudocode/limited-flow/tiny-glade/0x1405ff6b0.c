// VA 0x1405ff6b0, PDB extent 240 bytes
// tiny_glade::crash_pickup::impl$8::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::crash_pickup::impl$8::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/mod.rs
   Extent: 240 */

void pdb_1405ff6b0(ulonglong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 2;
  if (5 < *param_1) {
    lVar1 = *param_1 - 6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405ff6d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f76534 + *(int *)(&UNK_142f76534 + lVar1 * 4)))
            (param_2,&UNK_142f76534,&UNK_142f76534 + *(int *)(&UNK_142f76534 + lVar1 * 4));
  return;
}

