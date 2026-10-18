// VA 0x141bf9bf0, PDB extent 100 bytes
// country_core::systems::save::snapshot::try_chunk
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::save::snapshot::try_chunk
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot.rs
   Extent: 100 */

longlong * pdb_141bf9bf0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 1) {
    lVar2 = *(longlong *)(param_2 + 4);
    if (*(longlong *)(param_2 + 2) != 0) {
      lVar1 = *(longlong *)(param_2 + 6);
      *param_1 = *(longlong *)(param_2 + 2);
      param_1[1] = lVar2;
      param_1[2] = lVar1;
      return param_1;
    }
    lVar2 = pdb_142deaf00();
  }
  else {
    lVar2 = pdb_142de9270(&UNK_14339b9b1,0x1a);
  }
  param_1[1] = lVar2;
  *param_1 = 0;
  return param_1;
}

