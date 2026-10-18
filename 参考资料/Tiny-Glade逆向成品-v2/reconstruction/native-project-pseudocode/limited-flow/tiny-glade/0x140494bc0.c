// VA 0x140494bc0, PDB extent 134 bytes
// tiny_glade::crash_pickup::impl$4::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::crash_pickup::impl$4::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/mod.rs
   Extent: 134 */

void pdb_140494bc0(ulonglong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 2;
  if (5 < *param_1) {
    lVar1 = *param_1 - 6;
  }
                    /* WARNING: Could not recover jumptable at 0x000140494be3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f5fc64 + *(int *)(&UNK_142f5fc64 + lVar1 * 4)))
            (param_1,param_2,&UNK_142f5fc64 + *(int *)(&UNK_142f5fc64 + lVar1 * 4));
  return;
}

