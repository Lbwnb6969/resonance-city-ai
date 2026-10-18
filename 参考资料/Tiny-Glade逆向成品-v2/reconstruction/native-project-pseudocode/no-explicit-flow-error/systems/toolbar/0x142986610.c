// VA 0x142986610, PDB extent 2336 bytes
// toolbar::toolbar_button::toggle_building_material_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_button.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::toolbar_button::toggle_building_material_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_button.rs
   Extent: 2336 */

void pdb_142986610(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint *puVar19;
  byte *pbVar20;
  longlong lVar21;
  longlong lVar22;
  undefined *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  longlong lVar28;
  uint *puVar29;
  uint *arg0;
  ulonglong uVar30;
  undefined *puVar31;
  uint uVar32;
  int *piVar33;
  ulonglong uVar34;
  longlong *plVar35;
  uint *puVar36;
  undefined8 *puVar37;
  ulonglong *puVar38;
  undefined8 *puVar39;
  int *piStack_b0;
  undefined *puStack_a8;
  longlong lStack_a0;
  longlong lStack_90;
  longlong lStack_80;
  
  puVar38 = (ulonglong *)*param_3;
  lVar5 = param_3[1];
  uVar17 = *puVar38;
  uVar34 = 0;
  uVar15 = uVar17 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar17 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar15 = uVar34;
  }
  uVar30 = uVar17 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar17 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar30 = uVar34;
  }
  puVar25 = (undefined8 *)(uVar15 * 0x10 + *(longlong *)(lVar5 + 8));
  uVar17 = *(ulonglong *)(lVar5 + 0x10) - uVar15;
  if (*(ulonglong *)(lVar5 + 0x10) < uVar15) {
    puVar25 = (undefined8 *)0x8;
    uVar17 = uVar34;
  }
  puVar14 = (undefined8 *)(uVar30 * 0x10 + *(longlong *)(lVar5 + 0x28));
  uVar15 = *(ulonglong *)(lVar5 + 0x30) - uVar30;
  if (*(ulonglong *)(lVar5 + 0x30) < uVar30) {
    puVar14 = (undefined8 *)0x8;
    uVar15 = uVar34;
  }
  *puVar38 = (*(longlong *)(lVar5 + 0x40) - uVar15) - uVar17;
  uVar11 = _DAT_1430151c0;
  plVar35 = *(longlong **)(param_5 + 8);
  if (plVar35 == (longlong *)0x0) {
    plVar35 = *(longlong **)(param_5 + 0x10);
  }
  puVar37 = puVar25 + uVar17 * 2;
  puVar39 = puVar14 + uVar15 * 2;
  lVar5 = *param_1;
  lVar6 = param_1[1];
  pbVar7 = (byte *)*param_4;
  puVar8 = (undefined4 *)param_4[2];
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x1c);
  do {
    if ((puVar25 == (undefined8 *)0x0) || (puVar25 == puVar37)) {
      if ((puVar14 == (undefined8 *)0x0) || (puVar14 == puVar39)) break;
      puVar25 = (undefined8 *)0x0;
      puVar12 = puVar14 + 2;
      puVar26 = puVar14;
    }
    else {
      puVar12 = puVar14;
      puVar26 = puVar25;
      puVar25 = puVar25 + 2;
    }
    puVar14 = puVar12;
    *puVar38 = *puVar38 + 1;
    uVar9 = *puVar26;
    if ((((ulonglong)~(uint)uVar9 < *(ulonglong *)(lVar6 + 0x10)) &&
        (piVar33 = (int *)((ulonglong)~(uint)uVar9 * 0x18 + *(longlong *)(lVar6 + 8)),
        piVar33[4] == (int)((ulonglong)uVar9 >> 0x20))) && (*piVar33 != 0)) {
      uVar32 = piVar33[2];
      if (((ulonglong)uVar32 < *(ulonglong *)(lVar5 + 0x38)) &&
         ((*(ulonglong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar32 >> 6) * 8) >>
           ((ulonglong)uVar32 & 0x3f) & 1) != 0)) {
        bVar2 = *pbVar7;
        *puVar8 = uVar4;
        *pbVar7 = bVar2 ^ 1;
        lVar28 = plVar35[2];
        if ((ulonglong)(*plVar35 - lVar28) < 0x20) {
          pdb_142d7f1b0(plVar35,lVar28,0x20,1,1);
        }
        lVar16 = plVar35[1];
        *(code **)(lVar16 + lVar28) = pdb_1411ae9e0;
        *(undefined8 *)(lVar16 + 8 + lVar28) = uVar9;
        *(undefined8 *)(lVar16 + 0x10 + lVar28) = uVar11;
        *(undefined4 *)(lVar16 + 0x18 + lVar28) = 0;
        *(undefined1 *)(lVar16 + 0x1c + lVar28) = 0;
        plVar35[2] = lVar28 + 0x20;
      }
    }
  } while( true );
  uVar17 = (ulonglong)*pbVar7 + 0x15;
  puStack_a8 = &UNK_1436081c4;
  if ((ulonglong)*pbVar7 != 0) {
    puStack_a8 = &UNK_1436081d9;
  }
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar36 = *(uint **)(lVar5 + 0xf8);
  arg0 = puVar36 + *(longlong *)(lVar5 + 0x100);
  if (*(char *)(lVar5 + 0x108) == '\0') {
    lVar28 = 0;
    piStack_b0 = (int *)0x8;
    lStack_a0 = 0;
    uVar32 = 0;
LAB_1429869f4:
    if (uVar32 == (uint)lVar28) {
      if (puVar36 == arg0) goto LAB_142986b75;
      while( true ) {
        lVar28 = *(longlong *)(*(longlong *)(lVar6 + 0x100) + 0x58 + (ulonglong)*puVar36 * 0xa0);
        if (lVar28 != 0) break;
        puVar36 = puVar36 + 1;
        if (puVar36 == arg0) goto LAB_142986b75;
      }
      lVar21 = *(longlong *)(lVar6 + 0x100) + (ulonglong)*puVar36 * 0xa0;
      uVar15 = (ulonglong)*(uint *)(lVar21 + 0x94);
      lVar16 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x18 + uVar15 * 0x48);
      lVar22 = ~*(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x38 + uVar15 * 0x48) +
                 *(longlong *)(lVar5 + 0x118) * 8) * 0x30;
      lStack_a0 = *(longlong *)(lVar16 + 0x10 + lVar22);
      lStack_80 = *(longlong *)(lVar16 + 0x28 + lVar22);
      piStack_b0 = *(int **)(lVar21 + 0x50);
      puVar36 = puVar36 + 1;
      uVar32 = 1;
      lVar16 = 0;
      iVar13 = *piStack_b0;
    }
    else {
      uVar15 = (ulonglong)uVar32;
      uVar32 = uVar32 + 1;
      lVar16 = uVar15 * 0x10;
      iVar13 = piStack_b0[uVar15 * 4];
    }
    if (iVar13 == 0) goto LAB_142986b75;
    uVar15 = (ulonglong)~*(uint *)((longlong)piStack_b0 + lVar16 + 8);
    puVar38 = (ulonglong *)(uVar15 * 0x20 + lStack_a0);
    if ((puVar38[2] != uVar17) || (iVar13 = pub_142e32750(puVar38[1],puStack_a8), iVar13 != 0)) {
      pdb_14007ee60();
      pbVar20 = pub_1406abab0(uVar17,1);
      if (pbVar20 == (byte *)0x0) goto LAB_142986f15;
      pub_142e32760(pbVar20,puStack_a8);
      *(undefined4 *)(lStack_80 + uVar15 * 4) = uVar4;
      if (*puVar38 != 0) {
        pub_1406abac0((byte *)puVar38[1],*puVar38,1);
      }
      *puVar38 = uVar17;
      puVar38[1] = (ulonglong)pbVar20;
      puVar38[2] = uVar17;
    }
    goto LAB_1429869f4;
  }
  lVar28 = 0;
  piStack_b0 = (int *)0x8;
  lStack_a0 = 0;
  uVar32 = 0;
LAB_1429868a8:
  if (uVar32 == (uint)lVar28) {
    if (puVar36 == arg0) goto LAB_142986b75;
    while( true ) {
      lVar28 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x10 + (ulonglong)*puVar36 * 0x48);
      if (lVar28 != 0) break;
      puVar36 = puVar36 + 1;
      if (puVar36 == arg0) goto LAB_142986b75;
    }
    lVar16 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)*puVar36 * 0x48;
    piStack_b0 = *(int **)(lVar16 + 8);
    lVar21 = ~*(ulonglong *)(*(longlong *)(lVar16 + 0x38) + *(longlong *)(lVar5 + 0x118) * 8) * 0x30
    ;
    lStack_a0 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + lVar21);
    lStack_80 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x28 + lVar21);
    puVar36 = puVar36 + 1;
    uVar32 = 0;
  }
  uVar15 = (ulonglong)uVar32;
  if (*(int *)((longlong)piStack_b0 + uVar15 * 8) == 0) goto LAB_142986b75;
  puVar38 = (ulonglong *)(uVar15 * 0x20 + lStack_a0);
  uVar32 = uVar32 + 1;
  if ((puVar38[2] != uVar17) || (iVar13 = pub_142e32750(puVar38[1],puStack_a8), iVar13 != 0)) {
    pdb_14007ee60();
    pbVar20 = pub_1406abab0(uVar17,1);
    if (pbVar20 == (byte *)0x0) goto LAB_142986f15;
    pub_142e32760(pbVar20,puStack_a8);
    *(undefined4 *)(lStack_80 + uVar15 * 4) = uVar4;
    if (*puVar38 != 0) {
      pub_1406abac0((byte *)puVar38[1],*puVar38,1);
    }
    *puVar38 = uVar17;
    puVar38[1] = (ulonglong)pbVar20;
    puVar38[2] = uVar17;
  }
  goto LAB_1429868a8;
LAB_142986b75:
  lVar5 = *param_2;
  lVar6 = param_2[1];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  puVar36 = *(uint **)(lVar5 + 0xf8);
  puVar29 = puVar36 + *(longlong *)(lVar5 + 0x100);
  cVar3 = *(char *)(lVar5 + 0x108);
  lVar28 = 0;
  lStack_90 = 8;
  lVar21 = 0;
  lVar16 = 0;
  uVar32 = 0;
LAB_142986bc9:
  if (cVar3 == '\0') {
    if (uVar32 == (uint)lVar28) {
      if (puVar36 == puVar29) {
        return;
      }
      while( true ) {
        lVar28 = *(longlong *)(*(longlong *)(lVar6 + 0x100) + 0x58 + (ulonglong)*puVar36 * 0xa0);
        if (lVar28 != 0) break;
        puVar36 = puVar36 + 1;
        if (puVar36 == puVar29) {
          return;
        }
      }
      lVar18 = *(longlong *)(lVar6 + 0x100) + (ulonglong)*puVar36 * 0xa0;
      uVar17 = (ulonglong)*(uint *)(lVar18 + 0x94);
      lVar21 = *(longlong *)(lVar6 + 0x1a0);
      lVar16 = lVar21 + uVar17 * 0x48;
      lVar22 = *(longlong *)(lVar21 + 0x38 + uVar17 * 0x48);
      if (*(ulonglong *)(lVar5 + 0x110) < *(ulonglong *)(lVar21 + 0x40 + uVar17 * 0x48)) {
        uVar17 = *(ulonglong *)(lVar22 + *(ulonglong *)(lVar5 + 0x110) * 8);
        lVar27 = *(longlong *)(lVar16 + 0x18);
        if (uVar17 == 0) goto LAB_142986d23;
        lVar16 = *(longlong *)(lVar27 + 0x10 + ~uVar17 * 0x30);
      }
      else {
        lVar27 = *(longlong *)(lVar16 + 0x18);
LAB_142986d23:
        lVar16 = 0;
      }
      puVar36 = puVar36 + 1;
      lVar22 = ~*(ulonglong *)(lVar22 + *(longlong *)(lVar5 + 0x118) * 8) * 0x30;
      lVar21 = *(longlong *)(lVar27 + 0x10 + lVar22);
      puStack_a8 = *(undefined **)(lVar27 + 0x28 + lVar22);
      lStack_90 = *(longlong *)(lVar18 + 0x50);
      uVar32 = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = (ulonglong)uVar32;
    }
    uVar24 = ~*(uint *)(lStack_90 + 8 + uVar17 * 0x10);
  }
  else {
    uVar24 = uVar32;
    if (uVar32 == (uint)lVar28) {
      if (puVar36 == puVar29) {
        return;
      }
      while( true ) {
        lVar28 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x10 + (ulonglong)*puVar36 * 0x48);
        if (lVar28 != 0) break;
        puVar36 = puVar36 + 1;
        if (puVar36 == puVar29) {
          return;
        }
      }
      lVar21 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)*puVar36 * 0x48;
      if (*(ulonglong *)(lVar5 + 0x110) < *(ulonglong *)(lVar21 + 0x40)) {
        uVar17 = *(ulonglong *)(*(longlong *)(lVar21 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8);
        lVar22 = *(longlong *)(lVar21 + 0x18);
        if (uVar17 == 0) goto LAB_142986ceb;
        lVar16 = *(longlong *)(lVar22 + 0x10 + ~uVar17 * 0x30);
      }
      else {
        lVar22 = *(longlong *)(lVar21 + 0x18);
LAB_142986ceb:
        lVar16 = 0;
      }
      puVar36 = puVar36 + 1;
      lVar18 = ~*(ulonglong *)(*(longlong *)(lVar21 + 0x38) + *(longlong *)(lVar5 + 0x118) * 8) *
               0x30;
      lVar21 = *(longlong *)(lVar22 + 0x10 + lVar18);
      puStack_a8 = *(undefined **)(lVar22 + 0x28 + lVar18);
      uVar32 = 0;
      uVar24 = uVar32;
    }
  }
  uVar17 = (ulonglong)uVar24;
  pcVar1 = (char *)(lVar16 + uVar17 * 0x18);
  puVar38 = (ulonglong *)(uVar17 * 0x20 + lVar21);
  uVar32 = uVar32 + 1;
  if (*pcVar1 != '\x01') goto code_r0x000142986d96;
  uVar24 = (uint)(byte)pcVar1[1] * 8;
  arg0 = *(uint **)(&UNK_143608278 + uVar24);
  lVar22 = (ulonglong)(byte)pcVar1[1] * 4;
  puVar31 = &UNK_143608290 + *(int *)(&UNK_143608290 + lVar22);
  puVar23 = &UNK_14360829c + *(int *)(&UNK_14360829c + lVar22);
  puVar19 = *(uint **)(&UNK_1436082a8 + uVar24);
  goto LAB_142986e19;
code_r0x000142986d96:
  if ((*pcVar1 != '\x06') || (*(int *)(pcVar1 + 8) != 7)) goto LAB_142986bc9;
  puVar19 = (uint *)0x13;
  arg0 = (uint *)0xe;
  puVar31 = &UNK_143608254;
  puVar23 = &UNK_143608262;
LAB_142986e19:
  if (*pbVar7 != 0) {
    arg0 = puVar19;
    puVar31 = puVar23;
  }
  if (((uint *)puVar38[2] == arg0) && (iVar13 = pub_142e32750(puVar38[1],puVar31,arg0), iVar13 == 0)
     ) goto LAB_142986bc9;
  pdb_14007ee60();
  pbVar20 = pub_1406abab0((ulonglong)arg0,1);
  if (pbVar20 != (byte *)0x0) {
    pub_142e32760(pbVar20,puVar31,arg0);
    *(undefined4 *)(puStack_a8 + uVar17 * 4) = uVar4;
    if (*puVar38 != 0) {
      pub_1406abac0((byte *)puVar38[1],*puVar38,1);
    }
    *puVar38 = (ulonglong)arg0;
    puVar38[1] = (ulonglong)pbVar20;
    puVar38[2] = (ulonglong)arg0;
    goto LAB_142986bc9;
  }
  goto LAB_142986f22;
LAB_142986f15:
  pdb_142dc7e2a(1,uVar17);
LAB_142986f22:
  pdb_142dc7e2a(1,arg0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

