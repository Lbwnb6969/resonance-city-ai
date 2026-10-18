// VA 0x142b53f70, PDB extent 942 bytes
// toolbar::resouces_and_components::toolbar_layout::ToolbarLayout::link_up_nav
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/toolbar_layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   toolbar::resouces_and_components::toolbar_layout::ToolbarLayout::link_up_nav
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/toolbar_layout.rs
   Extent: 942 */

void pdb_142b53f70(longlong param_1,char param_2,longlong param_3)

{
  ulonglong arg0;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 8);
  arg0 = uVar1 * 8;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(arg0,8);
  if (pbVar7 == (byte *)0x0) {
    pdb_142dc7e2a(8,arg0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar1 < 4) {
    uVar13 = 0;
  }
  else {
    puVar10 = (undefined8 *)(lVar8 + 0x60);
    uVar13 = 0;
    do {
      *(undefined8 *)(pbVar7 + uVar13 * 8) = puVar10[-0xc];
      *(undefined8 *)(pbVar7 + uVar13 * 8 + 8) = puVar10[-8];
      *(undefined8 *)(pbVar7 + uVar13 * 8 + 0x10) = puVar10[-4];
      *(undefined8 *)(pbVar7 + uVar13 * 8 + 0x18) = *puVar10;
      uVar13 = uVar13 + 4;
      puVar10 = puVar10 + 0x10;
    } while ((uVar1 & 0xfffffffffffffffc) != uVar13);
    if ((uVar1 & 3) == 0) goto LAB_142b54061;
  }
  uVar11 = 0;
  do {
    *(undefined8 *)(pbVar7 + uVar11 + uVar13 * 8) =
         *(undefined8 *)(lVar8 + uVar13 * 0x20 + uVar11 * 4);
    uVar11 = uVar11 + 8;
  } while (((uint)uVar1 & 3) << 3 != uVar11);
LAB_142b54061:
  plVar9 = *(longlong **)(param_3 + 8);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = *(longlong **)(param_3 + 0x10);
  }
  lVar8 = plVar9[2];
  if (param_2 == '\0') {
    uVar13 = 0;
    pbVar12 = pbVar7;
    do {
      uVar6 = *(undefined8 *)pbVar12;
      uVar11 = (uVar1 - 1) + uVar13;
      if ((uVar11 | uVar1) >> 0x20 == 0) {
        uVar11 = (uVar11 & 0xffffffff) % (uVar1 & 0xffffffff);
      }
      else {
        uVar11 = uVar11 % uVar1;
      }
      uVar13 = uVar13 + 1;
      uVar2 = *(undefined8 *)(pbVar7 + uVar11 * 8);
      if ((uVar13 | uVar1) >> 0x20 == 0) {
        uVar11 = (uVar13 & 0xffffffff) % (uVar1 & 0xffffffff);
      }
      else {
        uVar11 = uVar13 % uVar1;
      }
      uVar3 = *(undefined8 *)(pbVar7 + uVar11 * 8);
      if ((ulonglong)(*plVar9 - lVar8) < 0x58) {
        pdb_142d7f1b0(plVar9,lVar8,0x58,1,1);
      }
      lVar4 = plVar9[1];
      *(code **)(lVar4 + lVar8) = pdb_1411aedc0;
      *(undefined8 *)(lVar4 + 8 + lVar8) = 0;
      *(undefined8 *)(lVar4 + 0x18 + lVar8) = 0;
      *(undefined8 *)(lVar4 + 0x28 + lVar8) = 3;
      *(undefined8 *)(lVar4 + 0x30 + lVar8) = uVar3;
      *(undefined8 *)(lVar4 + 0x38 + lVar8) = 3;
      *(undefined8 *)(lVar4 + 0x40 + lVar8) = uVar2;
      *(undefined1 *)(lVar4 + 0x48 + lVar8) = 0;
      *(undefined8 *)(lVar4 + 0x50 + lVar8) = uVar6;
      lVar8 = lVar8 + 0x58;
      plVar9[2] = lVar8;
      pbVar12 = pbVar12 + 8;
    } while (pbVar12 != pbVar7 + arg0);
  }
  else {
    uVar13 = 0;
    pbVar12 = pbVar7;
    do {
      uVar6 = *(undefined8 *)pbVar12;
      uVar11 = (uVar1 - 1) + uVar13;
      if ((uVar11 | uVar1) >> 0x20 == 0) {
        uVar11 = (uVar11 & 0xffffffff) % (uVar1 & 0xffffffff);
      }
      else {
        uVar11 = uVar11 % uVar1;
      }
      uVar13 = uVar13 + 1;
      uVar2 = *(undefined8 *)(pbVar7 + uVar11 * 8);
      if ((uVar13 | uVar1) >> 0x20 == 0) {
        uVar11 = (uVar13 & 0xffffffff) % (uVar1 & 0xffffffff);
      }
      else {
        uVar11 = uVar13 % uVar1;
      }
      uVar3 = *(undefined8 *)(pbVar7 + uVar11 * 8);
      if ((ulonglong)(*plVar9 - lVar8) < 0x58) {
        pdb_142d7f1b0(plVar9,lVar8,0x58,1,1);
      }
      lVar4 = plVar9[1];
      *(code **)(lVar4 + lVar8) = pdb_1411aedc0;
      *(undefined8 *)(lVar4 + 8 + lVar8) = 3;
      *(undefined8 *)(lVar4 + 0x10 + lVar8) = uVar2;
      *(undefined8 *)(lVar4 + 0x18 + lVar8) = 3;
      *(undefined8 *)(lVar4 + 0x20 + lVar8) = uVar3;
      *(undefined8 *)(lVar4 + 0x28 + lVar8) = 0;
      *(undefined8 *)(lVar4 + 0x38 + lVar8) = 0;
      *(undefined1 *)(lVar4 + 0x48 + lVar8) = 0;
      *(undefined8 *)(lVar4 + 0x50 + lVar8) = uVar6;
      lVar8 = lVar8 + 0x58;
      plVar9[2] = lVar8;
      pbVar12 = pbVar12 + 8;
    } while (pbVar12 != pbVar7 + arg0);
  }
  uVar6 = GetProcessHeap(pbVar7,arg0);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar6,0,pbVar7);
  return;
}

