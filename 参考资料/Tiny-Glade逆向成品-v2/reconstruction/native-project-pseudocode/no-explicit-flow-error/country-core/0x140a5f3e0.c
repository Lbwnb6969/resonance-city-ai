// VA 0x140a5f3e0, PDB extent 176 bytes
// country_core::resources::stairs::stairs_state::StairsState::remove_node
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::remove_node
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 176 */

void pdb_140a5f3e0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uStack_34;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  uStack_34 = param_2;
  lVar3 = pdb_140936c10(param_1 + 5,&uStack_34);
  if ((lVar3 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) {
    pdb_1403afce0(param_1 + 0x29,param_2,param_2);
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 8);
    lVar5 = 0;
    do {
      uVar4 = *(uint *)(lVar3 + lVar5);
      uVar2 = uVar4;
      if (param_2 >= uVar4 && param_2 != uVar4) {
        uVar2 = param_2;
      }
      if (param_2 < uVar4) {
        uVar4 = param_2;
      }
      pdb_1403afce0(param_1 + 0x29,uVar4,uVar2);
      lVar5 = lVar5 + 8;
    } while (lVar1 << 3 != lVar5);
  }
  pdb_140a61ea0(param_1 + 5,param_2);
  return;
}

