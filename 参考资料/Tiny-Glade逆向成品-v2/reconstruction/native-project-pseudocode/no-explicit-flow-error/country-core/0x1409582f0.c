// VA 0x1409582f0, PDB extent 124 bytes
// country_core::resources::mouse_capture::CursorVisibilityState::apply
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::mouse_capture::CursorVisibilityState::apply
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
   Extent: 124 */

void pdb_1409582f0(ulonglong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 2;
  if (1 < (uint)param_2) {
    iVar2 = (uint)param_2 - 2;
  }
  uVar1 = (uint)(param_2 >> 0x20);
  if (iVar2 == 0) {
    if (param_2 >> 0x20 != 0) {
      *(uint *)(param_1 + 1) = (uint)param_1[1] | uVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143026278,0x24,&UNK_1430262a0);
  }
  if (iVar2 != 1) {
    *param_1 = param_2;
    return;
  }
  if (param_2 >> 0x20 != 0) {
    *(uint *)(param_1 + 1) = (uint)param_1[1] & ~uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143026278,0x24,&UNK_1430262b8);
}

