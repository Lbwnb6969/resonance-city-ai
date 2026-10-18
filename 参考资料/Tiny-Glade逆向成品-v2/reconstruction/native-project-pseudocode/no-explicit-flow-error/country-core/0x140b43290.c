// VA 0x140b43290, PDB extent 140 bytes
// country_core::systems::mode_manager::WallGroupSelection::toggle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::WallGroupSelection::toggle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 140 */

void pdb_140b43290(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar3 = lVar1 * 8 + -8;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) == param_2) {
        pub_142e32770(lVar2 + lVar4 * 8,lVar2 + lVar4 * 8 + 8);
        lVar2 = -1;
        goto LAB_140b4330d;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != -8);
  }
  if (lVar1 == *param_1) {
    pdb_142d7e8a0(param_1);
    lVar2 = param_1[1];
  }
  *(longlong *)(lVar2 + lVar1 * 8) = param_2;
  lVar2 = 1;
LAB_140b4330d:
  param_1[2] = lVar1 + lVar2;
  return;
}

