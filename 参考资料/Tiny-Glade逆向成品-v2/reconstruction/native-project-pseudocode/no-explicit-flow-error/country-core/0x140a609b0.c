// VA 0x140a609b0, PDB extent 130 bytes
// country_core::resources::stairs::stairs_state::StairsState::contains_edge_or_stub_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::contains_edge_or_stub_impl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 130 */

bool pdb_140a609b0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uStack_18;
  uint uStack_14;
  
  if (param_2 == param_3) {
    uStack_18 = param_2;
    lVar1 = pdb_1409369e0(param_1,&uStack_18);
    if (lVar1 != 1) {
      return false;
    }
    uStack_18 = param_2;
    lVar1 = pdb_140936c10(param_1,&uStack_18);
    if (lVar1 == 0) {
      return true;
    }
    bVar2 = *(longlong *)(lVar1 + 0x10) == 0;
  }
  else {
    uStack_18 = param_3;
    if (param_2 < param_3) {
      uStack_18 = param_2;
    }
    uStack_14 = param_3;
    if (param_3 < param_2) {
      uStack_14 = param_2;
    }
    lVar1 = pdb_140936ae0(param_1 + 0x48,&uStack_18);
    bVar2 = lVar1 == 1;
  }
  return bVar2;
}

