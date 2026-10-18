// VA 0x140c46f50, PDB extent 767 bytes
// country_core::resources::stairs::structural_graph::StairsStructuralGraph::clear
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::structural_graph::StairsStructuralGraph::clear
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
   Extent: 767 */

void pdb_140c46f50(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x20);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0x18),0xff,uVar1 + 0x11);
      uVar2 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar2 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(ulonglong *)(param_1 + 0x28) = uVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 8) + 8);
    do {
      if (puVar4[-1] != 0) {
        pub_1406abac0((byte *)*puVar4,puVar4[-1] << 4,4);
      }
      puVar4 = puVar4 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x68);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0x60),0xff,uVar1 + 0x11);
      uVar2 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar2 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(ulonglong *)(param_1 + 0x70) = uVar2;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x98);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0x90),0xff,uVar1 + 0x11);
      uVar2 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar2 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(ulonglong *)(param_1 + 0xa0) = uVar2;
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 200);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0xc0),0xff,uVar1 + 0x11);
      uVar2 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar2 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(ulonglong *)(param_1 + 0xd0) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0xf8);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0xf0),0xff,uVar1 + 0x11);
      uVar2 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar2 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(ulonglong *)(param_1 + 0x100) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x128);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0x120),0xff,uVar1 + 0x11);
      uVar2 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar2 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(ulonglong *)(param_1 + 0x130) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x158);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0x150),0xff,uVar1 + 0x11);
      uVar2 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar2 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(ulonglong *)(param_1 + 0x160) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x188);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0x180),0xff,uVar1 + 0x11);
      uVar2 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar2 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(ulonglong *)(param_1 + 400) = uVar2;
  }
  return;
}

