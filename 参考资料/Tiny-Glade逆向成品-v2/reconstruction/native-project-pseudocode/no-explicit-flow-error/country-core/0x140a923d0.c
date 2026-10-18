// VA 0x140a923d0, PDB extent 75 bytes
// country_core::resources::session::SessionMeta::assets_root
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::SessionMeta::assets_root
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 75 */

undefined8 pdb_140a923d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)*(byte *)(param_2 + 0x98) * 8;
  pdb_140f3e9e0(param_1,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_1430456f0 + lVar1),
                *(undefined8 *)(&UNK_1430456c8 + lVar1));
  return param_1;
}

