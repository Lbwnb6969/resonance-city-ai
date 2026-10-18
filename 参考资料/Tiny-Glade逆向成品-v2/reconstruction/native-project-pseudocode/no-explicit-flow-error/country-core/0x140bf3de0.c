// VA 0x140bf3de0, PDB extent 69 bytes
// country_core::resources::ivy::ivy_storage::Ivy::last_point
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::ivy::ivy_storage::Ivy::last_point
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_storage.rs
   Extent: 69 */

longlong pdb_140bf3de0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1[3] != 0) {
    uVar1 = (param_1[3] + param_1[2]) - 1;
    uVar2 = 0;
    if (*param_1 <= uVar1) {
      uVar2 = *param_1;
    }
    return (uVar1 - uVar2) * 0x28 + param_1[1];
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143066180);
}

