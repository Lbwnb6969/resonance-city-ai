// VA 0x140a92670, PDB extent 41 bytes
// country_core::resources::session::SessionMeta::is_halloween2024
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::SessionMeta::is_halloween2024
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 41 */

undefined8 pdb_140a92670(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    if (lVar1 == lVar3) break;
    lVar2 = lVar3 + 1;
  } while (*(char *)(*(longlong *)(param_1 + 8) + lVar3) != '\0');
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != lVar3);
}

