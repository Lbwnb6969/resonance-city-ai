// VA 0x140a61440, PDB extent 185 bytes
// country_core::resources::stairs::stairs_state::StairsState::add_node
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::add_node
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 185 */

void pdb_140a61440(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int aiStack_38 [2];
  longlong lStack_30;
  ulonglong uStack_28;
  undefined4 uStack_20;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,param_2);
  uVar1 = pdb_1400aede0(param_1 + 0xc,&uStack_50);
  pdb_1417c9a50(aiStack_38,param_1 + 5,uVar1,param_2);
  if (aiStack_38[0] == 1) {
    uStack_50 = 0;
    uStack_48 = 4;
    uStack_40 = 0;
    pdb_1417c7df0(lStack_30,uStack_28,uStack_20,&uStack_50);
  }
  else if (*(ulonglong *)(lStack_30 + 0x10) <= uStack_28) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uStack_28,*(ulonglong *)(lStack_30 + 0x10),&UNK_143337a68);
  }
  pdb_1403afce0(param_1 + 0x29,param_2,param_2);
  return;
}

