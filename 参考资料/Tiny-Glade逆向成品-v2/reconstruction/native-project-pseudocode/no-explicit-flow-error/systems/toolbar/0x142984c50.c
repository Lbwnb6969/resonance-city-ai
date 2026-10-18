// VA 0x142984c50, PDB extent 1896 bytes
// toolbar::toolbar_button::switch_app_mode_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_button.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::toolbar_button::switch_app_mode_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_button.rs
   Extent: 1896 */

void pdb_142984c50(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  char cVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong lVar27;
  int iVar28;
  int *piVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  uint *puVar32;
  undefined8 *puVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  undefined8 *puVar39;
  uint *puVar40;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 *puStack_c0;
  longlong lStack_a0;
  longlong lStack_88;
  
  puVar3 = (ulonglong *)*param_2;
  lVar4 = param_2[1];
  uVar21 = *puVar3;
  uVar25 = 0;
  uVar30 = uVar21 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar21 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar30 = uVar25;
  }
  uVar35 = uVar21 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar21 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar35 = uVar25;
  }
  puVar19 = (undefined8 *)(uVar30 * 0x10 + *(longlong *)(lVar4 + 8));
  uVar21 = *(ulonglong *)(lVar4 + 0x10) - uVar30;
  if (*(ulonglong *)(lVar4 + 0x10) < uVar30) {
    puVar19 = (undefined8 *)0x8;
    uVar21 = uVar25;
  }
  puVar33 = (undefined8 *)(uVar35 * 0x10 + *(longlong *)(lVar4 + 0x28));
  uVar30 = *(ulonglong *)(lVar4 + 0x30) - uVar35;
  if (*(ulonglong *)(lVar4 + 0x30) < uVar35) {
    puVar33 = (undefined8 *)0x8;
    uVar30 = uVar25;
  }
  *puVar3 = (*(longlong *)(lVar4 + 0x40) - uVar30) - uVar21;
  puVar39 = puVar19 + uVar21 * 2;
  puVar31 = puVar33 + uVar30 * 2;
  lVar4 = *param_1;
  lVar5 = param_1[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar34 = *param_3;
  puVar6 = (undefined4 *)param_3[2];
  do {
    if ((puVar19 == (undefined8 *)0x0) || (puVar19 == puVar39)) {
      if ((puVar33 == (undefined8 *)0x0) || (puVar33 == puVar31)) break;
      puVar19 = (undefined8 *)0x0;
      puVar20 = puVar33;
      puVar33 = puVar33 + 2;
    }
    else {
      puVar20 = puVar19;
      puVar19 = puVar19 + 2;
    }
    *puVar3 = *puVar3 + 1;
    uVar21 = (ulonglong)~(uint)*puVar20;
    if ((((uVar21 < *(ulonglong *)(lVar5 + 0x10)) &&
         (piVar29 = (int *)(uVar21 * 0x18 + *(longlong *)(lVar5 + 8)),
         piVar29[4] == (int)((ulonglong)*puVar20 >> 0x20))) && (*piVar29 != 0)) &&
       ((uVar21 = *(ulonglong *)(piVar29 + 2), (uVar21 & 0xffffffff) < *(ulonglong *)(lVar4 + 0x38)
        && ((*(ulonglong *)(*(longlong *)(lVar4 + 0x28) + (uVar21 >> 6 & 0x3ffffff) * 8) >>
             (uVar21 & 0x3f) & 1) != 0)))) {
      lVar37 = *(longlong *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x18 + (uVar21 >> 0x20) * 0x48) + 0x10
                + ~*(ulonglong *)
                    (*(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x38 + (uVar21 >> 0x20) * 0x48) +
                    *(longlong *)(lVar4 + 0x110) * 8) * 0x30);
      uVar7 = *(undefined8 *)(lVar37 + 0x10 + (ulonglong)(uint)~piVar29[1] * 0x18);
      puVar1 = (undefined4 *)(lVar37 + (ulonglong)(uint)~piVar29[1] * 0x18);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      *puVar6 = uVar2;
      lVar37 = *(longlong *)(lVar34 + 0x30);
      uVar8 = *(undefined8 *)(lVar34 + 0x40);
      if (lVar37 == *(longlong *)(lVar34 + 0x20)) {
        pdb_142d7e6e0(lVar34 + 0x20);
      }
      lVar27 = *(longlong *)(lVar34 + 0x28);
      lVar24 = lVar37 * 0x20;
      *(undefined8 *)(lVar27 + 0x10 + lVar24) = uVar7;
      puVar1 = (undefined4 *)(lVar27 + lVar24);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      puVar1[2] = uVar15;
      puVar1[3] = uVar16;
      *(undefined8 *)(lVar27 + 0x18 + lVar24) = uVar8;
      *(longlong *)(lVar34 + 0x30) = lVar37 + 1;
      *(longlong *)(lVar34 + 0x40) = *(longlong *)(lVar34 + 0x40) + 1;
    }
  } while( true );
  lVar34 = param_5[1];
  uVar21 = *(ulonglong *)*param_5;
  uVar25 = 0;
  uVar30 = uVar21 - *(ulonglong *)(lVar34 + 0x18);
  if (uVar21 < *(ulonglong *)(lVar34 + 0x18)) {
    uVar30 = uVar25;
  }
  lVar37 = uVar30 * 0x38 + *(longlong *)(lVar34 + 8);
  uVar35 = *(ulonglong *)(lVar34 + 0x10);
  uVar36 = uVar35 - uVar30;
  if (uVar35 < uVar30) {
    uVar36 = uVar25;
  }
  uVar9 = *(ulonglong *)(lVar34 + 0x30);
  if (uVar35 < uVar30) {
    lVar37 = 8;
  }
  bVar11 = uVar30 < uVar35;
  uVar38 = lVar37 + -0x38 + uVar36 * 0x38;
  if (uVar35 <= uVar30) {
    uVar38 = uVar25;
  }
  uVar30 = uVar21 - *(ulonglong *)(lVar34 + 0x38);
  if (uVar21 < *(ulonglong *)(lVar34 + 0x38)) {
    uVar30 = uVar25;
  }
  lVar37 = uVar30 * 0x38 + *(longlong *)(lVar34 + 0x28);
  uVar21 = uVar9 - uVar30;
  if (uVar9 < uVar30) {
    uVar21 = uVar25;
  }
  if (uVar9 < uVar30) {
    lVar37 = 8;
  }
  uVar35 = lVar37 + -0x38 + uVar21 * 0x38;
  if (uVar9 <= uVar30) {
    uVar35 = uVar38;
  }
  bVar12 = uVar30 < uVar9;
  uVar21 = uVar21 + uVar36;
  if (bVar12 || bVar11) {
    uVar21 = uVar25;
  }
  *(ulonglong *)*param_5 = *(longlong *)(lVar34 + 0x40) - uVar21;
  uVar7 = _DAT_1430151c0;
  puVar40 = *(uint **)(lVar4 + 0xf8);
  plVar26 = *(longlong **)(param_6 + 8);
  if (plVar26 == (longlong *)0x0) {
    plVar26 = *(longlong **)(param_6 + 0x10);
  }
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar32 = puVar40 + *(longlong *)(lVar4 + 0x100);
  uVar8 = *param_4;
  if (*(char *)(lVar4 + 0x108) == '\0') {
    lVar34 = 0;
    puStack_c0 = (undefined8 *)0x8;
    lStack_d0 = 0;
    lStack_c8 = 0;
    uVar23 = 0;
    do {
      if (uVar23 == (uint)lVar34) {
        if (puVar40 == puVar32) {
          return;
        }
        while( true ) {
          lVar34 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puVar40 * 0xa0);
          if (lVar34 != 0) break;
          puVar40 = puVar40 + 1;
          if (puVar40 == puVar32) {
            return;
          }
        }
        lVar22 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puVar40 * 0xa0;
        uVar21 = (ulonglong)*(uint *)(lVar22 + 0x94);
        lVar27 = *(longlong *)(lVar5 + 0x1a0);
        lVar37 = lVar27 + uVar21 * 0x48;
        lVar24 = *(longlong *)(lVar27 + 0x38 + uVar21 * 0x48);
        if (*(ulonglong *)(lVar4 + 0x110) < *(ulonglong *)(lVar27 + 0x40 + uVar21 * 0x48)) {
          uVar21 = *(ulonglong *)(lVar24 + *(ulonglong *)(lVar4 + 0x110) * 8);
          lVar37 = *(longlong *)(lVar37 + 0x18);
          if (uVar21 == 0) goto LAB_142985269;
          lStack_c8 = *(longlong *)(lVar37 + 0x10 + ~uVar21 * 0x30);
        }
        else {
          lVar37 = *(longlong *)(lVar37 + 0x18);
LAB_142985269:
          lStack_c8 = 0;
        }
        puVar40 = puVar40 + 1;
        lVar27 = ~*(ulonglong *)(lVar24 + *(longlong *)(lVar4 + 0x118) * 8) * 0x30;
        lStack_d0 = *(longlong *)(lVar37 + 0x10 + lVar27);
        lStack_a0 = *(longlong *)(lVar37 + 0x28 + lVar27);
        puStack_c0 = *(undefined8 **)(lVar22 + 0x50);
        uVar23 = 1;
        lVar37 = 0;
        uVar10 = *puStack_c0;
        iVar28 = (int)uVar10;
      }
      else {
        uVar21 = (ulonglong)uVar23;
        uVar23 = uVar23 + 1;
        lVar37 = uVar21 * 0x10;
        uVar10 = puStack_c0[uVar21 * 2];
        iVar28 = (int)uVar10;
      }
      if (iVar28 == 0) {
        return;
      }
      uVar21 = (ulonglong)~*(uint *)((longlong)puStack_c0 + lVar37 + 8);
      lVar37 = lStack_c8 + uVar21 * 0x18;
      uVar17 = pdb_142986f30(lVar37,uVar8);
      *(undefined4 *)(lStack_a0 + uVar21 * 4) = uVar2;
      *(undefined1 *)(lStack_d0 + 2 + uVar21 * 3) = uVar17;
      if ((bVar12 || bVar11) && (cVar18 = pdb_142986f30(lVar37,uVar35), cVar18 != '\0')) {
        lVar37 = plVar26[2];
        if ((ulonglong)(*plVar26 - lVar37) < 0x20) {
          pdb_142d7f1b0(plVar26,lVar37,0x20,1,1);
        }
        lVar27 = plVar26[1];
        *(code **)(lVar27 + lVar37) = pdb_1411ae9e0;
        *(undefined8 *)(lVar27 + 8 + lVar37) = uVar10;
        *(undefined8 *)(lVar27 + 0x10 + lVar37) = uVar7;
        *(undefined4 *)(lVar27 + 0x18 + lVar37) = 0;
        *(undefined1 *)(lVar27 + 0x1c + lVar37) = 0;
        plVar26[2] = lVar37 + 0x20;
      }
    } while( true );
  }
  lVar34 = 0;
  lStack_c8 = 8;
  lStack_a0 = 0;
  lStack_d0 = 0;
  uVar23 = 0;
  do {
    if (uVar23 == (uint)lVar34) {
      if (puVar40 == puVar32) {
        return;
      }
      while( true ) {
        lVar34 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puVar40 * 0x48);
        if (lVar34 != 0) break;
        puVar40 = puVar40 + 1;
        if (puVar40 == puVar32) {
          return;
        }
      }
      lVar37 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puVar40 * 0x48;
      if (*(ulonglong *)(lVar4 + 0x110) < *(ulonglong *)(lVar37 + 0x40)) {
        uVar21 = *(ulonglong *)(*(longlong *)(lVar37 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8);
        lVar27 = *(longlong *)(lVar37 + 0x18);
        if (uVar21 == 0) goto LAB_142985052;
        lStack_d0 = *(longlong *)(lVar27 + 0x10 + ~uVar21 * 0x30);
      }
      else {
        lVar27 = *(longlong *)(lVar37 + 0x18);
LAB_142985052:
        lStack_d0 = 0;
      }
      puVar40 = puVar40 + 1;
      lVar24 = ~*(ulonglong *)(*(longlong *)(lVar37 + 0x38) + *(longlong *)(lVar4 + 0x118) * 8) *
               0x30;
      lStack_a0 = *(longlong *)(lVar27 + 0x10 + lVar24);
      lStack_88 = *(longlong *)(lVar27 + 0x28 + lVar24);
      lStack_c8 = *(longlong *)(lVar37 + 8);
      uVar23 = 0;
    }
    uVar21 = (ulonglong)uVar23;
    uVar10 = *(undefined8 *)(lStack_c8 + uVar21 * 8);
    if ((int)uVar10 == 0) {
      return;
    }
    lVar37 = lStack_d0 + uVar21 * 0x18;
    uVar23 = uVar23 + 1;
    uVar17 = pdb_142986f30(lVar37,uVar8);
    *(undefined4 *)(lStack_88 + uVar21 * 4) = uVar2;
    *(undefined1 *)(lStack_a0 + 2 + uVar21 * 3) = uVar17;
    if ((bVar12 || bVar11) && (cVar18 = pdb_142986f30(lVar37,uVar35), cVar18 != '\0')) {
      lVar37 = plVar26[2];
      if ((ulonglong)(*plVar26 - lVar37) < 0x20) {
        pdb_142d7f1b0(plVar26,lVar37,0x20,1,1);
      }
      lVar27 = plVar26[1];
      *(code **)(lVar27 + lVar37) = pdb_1411ae9e0;
      *(undefined8 *)(lVar27 + 8 + lVar37) = uVar10;
      *(undefined8 *)(lVar27 + 0x10 + lVar37) = uVar7;
      *(undefined4 *)(lVar27 + 0x18 + lVar37) = 0;
      *(undefined1 *)(lVar27 + 0x1c + lVar37) = 0;
      plVar26[2] = lVar37 + 0x20;
    }
  } while( true );
}

