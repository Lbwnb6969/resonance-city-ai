// VA 0x140a5f490, PDB extent 312 bytes
// country_core::resources::stairs::stairs_state::StairsState::clear_backup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::clear_backup
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 312 */

void pdb_140a5f490(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  pdb_1417cbce0(param_1 + 0xb8,param_1 + 0x28,param_1 + 0x148);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0xd8);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0xd0),0xff,uVar1 + 0x11);
      uVar2 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar2 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(ulonglong *)(param_1 + 0xe0) = uVar2;
  }
  lVar3 = *(longlong *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xc0) + 8);
    do {
      if (puVar4[-1] != 0) {
        pub_1406abac0((byte *)*puVar4,puVar4[-1] << 3,4);
      }
      puVar4 = puVar4 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x120);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0x118),0xff,uVar1 + 0x11);
      uVar2 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar2 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(ulonglong *)(param_1 + 0x128) = uVar2;
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  return;
}

