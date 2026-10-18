// VA 0x142985ef0, PDB extent 1824 bytes
// toolbar::toolbar_button::switch_toolbar_category_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_button.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::toolbar_button::switch_toolbar_category_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_button.rs
   Extent: 1824 */

void pdb_142985ef0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong param_6)

{
  uint *puVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint *puVar28;
  undefined8 *puVar29;
  int iVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  longlong *plStack_a0;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  
  puVar6 = (ulonglong *)*param_2;
  lVar7 = param_2[1];
  uVar15 = *puVar6;
  uVar25 = 0;
  uVar26 = uVar15 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar15 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar26 = uVar25;
  }
  uVar27 = uVar15 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar15 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar27 = uVar25;
  }
  puVar13 = (undefined8 *)(uVar26 * 0x10 + *(longlong *)(lVar7 + 8));
  uVar15 = *(ulonglong *)(lVar7 + 0x10) - uVar26;
  if (*(ulonglong *)(lVar7 + 0x10) < uVar26) {
    puVar13 = (undefined8 *)0x8;
    uVar15 = uVar25;
  }
  puVar22 = (undefined8 *)(uVar27 * 0x10 + *(longlong *)(lVar7 + 0x28));
  uVar26 = *(ulonglong *)(lVar7 + 0x30) - uVar27;
  if (*(ulonglong *)(lVar7 + 0x30) < uVar27) {
    puVar22 = (undefined8 *)0x8;
    uVar26 = uVar25;
  }
  *puVar6 = (*(longlong *)(lVar7 + 0x40) - uVar26) - uVar15;
  puVar21 = puVar13 + uVar15 * 2;
  puVar29 = puVar22 + uVar26 * 2;
  lVar7 = *param_1;
  lVar8 = param_1[1];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar9 = *param_3;
  puVar10 = (undefined4 *)param_3[2];
  lStack_70 = CONCAT44(lStack_70._4_4_,uVar5);
  do {
    if ((puVar13 == (undefined8 *)0x0) || (puVar13 == puVar21)) {
      if ((puVar22 == (undefined8 *)0x0) || (puVar22 == puVar29)) break;
      puVar13 = (undefined8 *)0x0;
      puVar14 = puVar22;
      puVar22 = puVar22 + 2;
    }
    else {
      puVar14 = puVar13;
      puVar13 = puVar13 + 2;
    }
    *puVar6 = *puVar6 + 1;
    uVar15 = (ulonglong)~(uint)*puVar14;
    if (((uVar15 < *(ulonglong *)(lVar8 + 0x10)) &&
        (piVar19 = (int *)(uVar15 * 0x18 + *(longlong *)(lVar8 + 8)),
        piVar19[4] == (int)((ulonglong)*puVar14 >> 0x20))) &&
       ((*piVar19 != 0 &&
        ((uVar15 = *(ulonglong *)(piVar19 + 2), (uVar15 & 0xffffffff) < *(ulonglong *)(lVar7 + 0x38)
         && ((*(ulonglong *)(*(longlong *)(lVar7 + 0x28) + (uVar15 >> 6 & 0x3ffffff) * 8) >>
              (uVar15 & 0x3f) & 1) != 0)))))) {
      uVar2 = *(undefined1 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x18 + (uVar15 >> 0x20) * 0x48) +
                  0x10 + ~*(ulonglong *)
                           (*(longlong *)
                             (*(longlong *)(lVar8 + 0x1a0) + 0x38 + (uVar15 >> 0x20) * 0x48) +
                           *(longlong *)(lVar7 + 0x110) * 8) * 0x30) + (ulonglong)(uint)~piVar19[1])
      ;
      *puVar10 = uVar5;
      lVar23 = *(longlong *)(lVar9 + 0x30);
      uVar11 = *(undefined8 *)(lVar9 + 0x40);
      if (lVar23 == *(longlong *)(lVar9 + 0x20)) {
        pdb_142d7e980(lVar9 + 0x20);
      }
      lVar16 = *(longlong *)(lVar9 + 0x28);
      *(undefined8 *)(lVar16 + lVar23 * 0x10) = uVar11;
      *(undefined1 *)(lVar16 + 8 + lVar23 * 0x10) = uVar2;
      *(longlong *)(lVar9 + 0x30) = lVar23 + 1;
      *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
    }
  } while( true );
  lVar9 = param_4[1];
  uVar15 = *(ulonglong *)*param_4;
  uVar25 = 0;
  uVar26 = uVar15 - *(ulonglong *)(lVar9 + 0x18);
  if (uVar15 < *(ulonglong *)(lVar9 + 0x18)) {
    uVar26 = uVar25;
  }
  uVar27 = uVar15 - *(ulonglong *)(lVar9 + 0x38);
  if (uVar15 < *(ulonglong *)(lVar9 + 0x38)) {
    uVar27 = uVar25;
  }
  bVar31 = *(ulonglong *)(lVar9 + 0x30) < uVar27;
  uVar27 = *(ulonglong *)(lVar9 + 0x30) - uVar27;
  bVar33 = uVar27 != 0;
  if (bVar31) {
    uVar27 = uVar25;
  }
  bVar32 = *(ulonglong *)(lVar9 + 0x10) < uVar26;
  uVar26 = *(ulonglong *)(lVar9 + 0x10) - uVar26;
  bVar34 = uVar26 != 0;
  if (bVar32) {
    uVar26 = uVar25;
  }
  uVar15 = uVar26 + uVar27;
  if (!bVar32 && bVar34 || !bVar31 && bVar33) {
    uVar15 = uVar25;
  }
  *(ulonglong *)*param_4 = *(longlong *)(lVar9 + 0x40) - uVar15;
  uVar11 = _DAT_143607fc0;
  puVar28 = *(uint **)(lVar7 + 0xf8);
  plStack_a0 = *(longlong **)(param_6 + 8);
  if (plStack_a0 == (longlong *)0x0) {
    plStack_a0 = *(longlong **)(param_6 + 0x10);
  }
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar1 = puVar28 + *(longlong *)(lVar7 + 0x100);
  lVar9 = *param_5;
  if (*(char *)(lVar7 + 0x108) == '\0') {
    lVar23 = 0;
    puVar13 = (undefined8 *)0x8;
    lStack_80 = 0;
    lVar16 = 0;
    uVar20 = 0;
    do {
      if (uVar20 == (uint)lVar23) {
        if (puVar28 == puVar1) {
          return;
        }
        while( true ) {
          lVar23 = *(longlong *)(*(longlong *)(lVar8 + 0x100) + 0x58 + (ulonglong)*puVar28 * 0xa0);
          if (lVar23 != 0) break;
          puVar28 = puVar28 + 1;
          if (puVar28 == puVar1) {
            return;
          }
        }
        lVar17 = *(longlong *)(lVar8 + 0x100) + (ulonglong)*puVar28 * 0xa0;
        uVar15 = (ulonglong)*(uint *)(lVar17 + 0x94);
        lVar24 = *(longlong *)(lVar8 + 0x1a0);
        lVar16 = lVar24 + uVar15 * 0x48;
        lVar18 = *(longlong *)(lVar24 + 0x38 + uVar15 * 0x48);
        if (*(ulonglong *)(lVar7 + 0x110) < *(ulonglong *)(lVar24 + 0x40 + uVar15 * 0x48)) {
          uVar15 = *(ulonglong *)(lVar18 + *(ulonglong *)(lVar7 + 0x110) * 8);
          lVar24 = *(longlong *)(lVar16 + 0x18);
          if (uVar15 == 0) goto LAB_1429864fa;
          lVar16 = *(longlong *)(lVar24 + 0x10 + ~uVar15 * 0x30);
        }
        else {
          lVar24 = *(longlong *)(lVar16 + 0x18);
LAB_1429864fa:
          lVar16 = 0;
        }
        puVar28 = puVar28 + 1;
        lVar18 = ~*(ulonglong *)(lVar18 + *(longlong *)(lVar7 + 0x118) * 8) * 0x30;
        lStack_80 = *(longlong *)(lVar24 + 0x10 + lVar18);
        lStack_70 = *(longlong *)(lVar24 + 0x28 + lVar18);
        puVar13 = *(undefined8 **)(lVar17 + 0x50);
        uVar20 = 1;
        lVar24 = 0;
        uVar12 = *puVar13;
        iVar30 = (int)uVar12;
      }
      else {
        uVar15 = (ulonglong)uVar20;
        uVar20 = uVar20 + 1;
        lVar24 = uVar15 * 0x10;
        uVar12 = puVar13[uVar15 * 2];
        iVar30 = (int)uVar12;
      }
      if (iVar30 == 0) {
        return;
      }
      uVar15 = (ulonglong)~*(uint *)((longlong)puVar13 + lVar24 + 8);
      lVar24 = uVar15 * 3 + lStack_80;
      if (((!bVar32 && bVar34 || !bVar31 && bVar33) && (*(char *)(lVar24 + 2) != '\x01')) &&
         (*(char *)(lVar9 + 0x18) == *(char *)(lVar16 + uVar15))) {
        lVar18 = plStack_a0[2];
        if ((ulonglong)(*plStack_a0 - lVar18) < 0x20) {
          pdb_142d7f1b0(plStack_a0,lVar18,0x20,1,1);
        }
        lVar17 = plStack_a0[1];
        *(code **)(lVar17 + lVar18) = pdb_1411ae9e0;
        *(undefined8 *)(lVar17 + 8 + lVar18) = uVar12;
        *(undefined8 *)(lVar17 + 0x10 + lVar18) = uVar11;
        *(undefined4 *)(lVar17 + 0x18 + lVar18) = 0;
        *(undefined1 *)(lVar17 + 0x1c + lVar18) = 0;
        plStack_a0[2] = lVar18 + 0x20;
      }
      cVar3 = *(char *)(lVar9 + 0x18);
      cVar4 = *(char *)(lVar16 + uVar15);
      *(undefined4 *)(lStack_70 + uVar15 * 4) = uVar5;
      *(bool *)(lVar24 + 2) = cVar3 == cVar4;
    } while( true );
  }
  lVar23 = 0;
  lStack_78 = 8;
  lStack_80 = 0;
  lVar16 = 0;
  uVar20 = 0;
  do {
    if (uVar20 == (uint)lVar23) {
      if (puVar28 == puVar1) {
        return;
      }
      while( true ) {
        lVar23 = *(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x10 + (ulonglong)*puVar28 * 0x48);
        if (lVar23 != 0) break;
        puVar28 = puVar28 + 1;
        if (puVar28 == puVar1) {
          return;
        }
      }
      lVar24 = *(longlong *)(lVar8 + 0x1a0) + (ulonglong)*puVar28 * 0x48;
      if (*(ulonglong *)(lVar7 + 0x110) < *(ulonglong *)(lVar24 + 0x40)) {
        uVar15 = *(ulonglong *)(*(longlong *)(lVar24 + 0x38) + *(ulonglong *)(lVar7 + 0x110) * 8);
        lVar18 = *(longlong *)(lVar24 + 0x18);
        if (uVar15 == 0) goto LAB_1429862ed;
        lVar16 = *(longlong *)(lVar18 + 0x10 + ~uVar15 * 0x30);
      }
      else {
        lVar18 = *(longlong *)(lVar24 + 0x18);
LAB_1429862ed:
        lVar16 = 0;
      }
      puVar28 = puVar28 + 1;
      lVar17 = ~*(ulonglong *)(*(longlong *)(lVar24 + 0x38) + *(longlong *)(lVar7 + 0x118) * 8) *
               0x30;
      lStack_80 = *(longlong *)(lVar18 + 0x10 + lVar17);
      lStack_70 = *(longlong *)(lVar18 + 0x28 + lVar17);
      lStack_78 = *(longlong *)(lVar24 + 8);
      uVar20 = 0;
    }
    uVar15 = (ulonglong)uVar20;
    uVar12 = *(undefined8 *)(lStack_78 + uVar15 * 8);
    if ((int)uVar12 == 0) {
      return;
    }
    lVar24 = uVar15 * 3 + lStack_80;
    if (((!bVar32 && bVar34 || !bVar31 && bVar33) && (*(char *)(lVar24 + 2) == '\0')) &&
       (*(char *)(lVar9 + 0x18) == *(char *)(lVar16 + uVar15))) {
      lVar18 = plStack_a0[2];
      if ((ulonglong)(*plStack_a0 - lVar18) < 0x20) {
        pdb_142d7f1b0(plStack_a0,lVar18,0x20,1,1);
      }
      lVar17 = plStack_a0[1];
      *(code **)(lVar17 + lVar18) = pdb_1411ae9e0;
      *(undefined8 *)(lVar17 + 8 + lVar18) = uVar12;
      *(undefined8 *)(lVar17 + 0x10 + lVar18) = uVar11;
      *(undefined4 *)(lVar17 + 0x18 + lVar18) = 0;
      *(undefined1 *)(lVar17 + 0x1c + lVar18) = 0;
      plStack_a0[2] = lVar18 + 0x20;
    }
    uVar20 = uVar20 + 1;
    cVar3 = *(char *)(lVar9 + 0x18);
    cVar4 = *(char *)(lVar16 + uVar15);
    *(undefined4 *)(lStack_70 + uVar15 * 4) = uVar5;
    *(bool *)(lVar24 + 2) = cVar3 == cVar4;
  } while( true );
}

