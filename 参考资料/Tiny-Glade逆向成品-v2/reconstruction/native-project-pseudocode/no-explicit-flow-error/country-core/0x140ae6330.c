// VA 0x140ae6330, PDB extent 37 bytes
// country_core::resources::history::impl$9::try_from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::impl$9::try_from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 37 */

void pdb_140ae6330(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = param_2[1];
  uVar1 = *(ulonglong *)(*param_2 + 0x10);
  if (uVar1 >= 2) {
    param_1[1] = uVar1;
    *(int *)(param_1 + 2) = (int)lVar2;
  }
  *param_1 = (ulonglong)(uVar1 < 2);
  return;
}

