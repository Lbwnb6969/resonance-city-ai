// VA 0x142984650, PDB extent 1533 bytes
// toolbar::toolbar_button::tod_v2_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_button.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::toolbar_button::tod_v2_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_button.rs
   Extent: 1533 */

void pdb_142984650(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,longlong param_8)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  int *piVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  byte *pbVar31;
  longlong lVar32;
  byte *pbVar33;
  byte *pbVar34;
  longlong lVar35;
  uint uVar36;
  byte *pbVar37;
  longlong lVar38;
  byte *pbVar39;
  undefined8 *puVar40;
  ulonglong uVar41;
  byte *pbVar42;
  ulonglong uVar43;
  longlong *plStack_a8;
  
  puVar8 = (ulonglong *)*param_2;
  lVar9 = param_2[1];
  uVar29 = *puVar8;
  uVar41 = 0;
  uVar26 = uVar29 - *(ulonglong *)(lVar9 + 0x18);
  if (uVar29 < *(ulonglong *)(lVar9 + 0x18)) {
    uVar26 = uVar41;
  }
  uVar43 = uVar29 - *(ulonglong *)(lVar9 + 0x38);
  if (uVar29 < *(ulonglong *)(lVar9 + 0x38)) {
    uVar43 = uVar41;
  }
  puVar21 = (undefined8 *)(uVar26 * 0x10 + *(longlong *)(lVar9 + 8));
  uVar29 = *(ulonglong *)(lVar9 + 0x10) - uVar26;
  if (*(ulonglong *)(lVar9 + 0x10) < uVar26) {
    puVar21 = (undefined8 *)0x8;
    uVar29 = uVar41;
  }
  puVar27 = (undefined8 *)(uVar43 * 0x10 + *(longlong *)(lVar9 + 0x28));
  uVar26 = *(ulonglong *)(lVar9 + 0x30) - uVar43;
  if (*(ulonglong *)(lVar9 + 0x30) < uVar43) {
    puVar27 = (undefined8 *)0x8;
    uVar26 = uVar41;
  }
  *puVar8 = (*(longlong *)(lVar9 + 0x40) - uVar26) - uVar29;
  uVar20 = _DAT_143607fc0;
  plStack_a8 = *(longlong **)(param_8 + 8);
  if (plStack_a8 == (longlong *)0x0) {
    plStack_a8 = *(longlong **)(param_8 + 0x10);
  }
  puVar40 = puVar21 + uVar29 * 2;
  puVar30 = puVar27 + uVar26 * 2;
  lVar9 = *param_1;
  lVar10 = param_1[1];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
  lVar11 = *param_3;
  puVar12 = (undefined4 *)param_3[2];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar35 = *param_4;
  puVar13 = (undefined4 *)param_4[2];
  pcVar14 = (char *)*param_5;
  uVar7 = *(undefined4 *)((longlong)param_6 + 0x1c);
  lVar38 = *param_6;
  puVar15 = (undefined4 *)param_6[2];
  do {
    if ((puVar21 == (undefined8 *)0x0) || (puVar21 == puVar40)) {
      if ((puVar27 == (undefined8 *)0x0) || (puVar27 == puVar30)) {
        lVar35 = param_7[1];
        uVar29 = *(ulonglong *)*param_7;
        pbVar28 = (byte *)0x0;
        pbVar37 = (byte *)(uVar29 - *(ulonglong *)(lVar35 + 0x18));
        if (uVar29 < *(ulonglong *)(lVar35 + 0x18)) {
          pbVar37 = pbVar28;
        }
        lVar38 = (longlong)pbVar37 * 0x38 + *(longlong *)(lVar35 + 8);
        pbVar18 = *(byte **)(lVar35 + 0x10);
        pbVar34 = pbVar18 + -(longlong)pbVar37;
        if (pbVar18 < pbVar37) {
          pbVar34 = pbVar28;
        }
        if (pbVar18 < pbVar37) {
          lVar38 = 8;
        }
        pbVar39 = (byte *)(lVar38 + -0x38 + (longlong)pbVar34 * 0x38);
        if (pbVar18 <= pbVar37) {
          pbVar39 = pbVar28;
        }
        pbVar19 = *(byte **)(lVar35 + 0x30);
        pbVar31 = (byte *)(uVar29 - *(ulonglong *)(lVar35 + 0x38));
        if (uVar29 < *(ulonglong *)(lVar35 + 0x38)) {
          pbVar31 = pbVar28;
        }
        lVar38 = (longlong)pbVar31 * 0x38 + *(longlong *)(lVar35 + 0x28);
        pbVar42 = pbVar19 + -(longlong)pbVar31;
        if (pbVar19 < pbVar31) {
          pbVar42 = pbVar28;
        }
        if (pbVar19 < pbVar31) {
          lVar38 = 8;
        }
        pbVar33 = (byte *)(lVar38 + -0x38 + (longlong)pbVar42 * 0x38);
        if (pbVar19 <= pbVar31) {
          pbVar33 = pbVar39;
        }
        pbVar34 = pbVar42 + (longlong)pbVar34;
        if (pbVar37 < pbVar18 || pbVar31 < pbVar19) {
          pbVar34 = pbVar28;
        }
        *(ulonglong *)*param_7 = *(longlong *)(lVar35 + 0x40) - (longlong)pbVar34;
        if ((pbVar37 < pbVar18 || pbVar31 < pbVar19) &&
           ((((0x3fdfeU >> (*pbVar33 & 0x1f) & 1) != 0 ||
             ((*pbVar33 == 0 && (*(int *)(pbVar33 + 8) != 0)))) &&
            (*(char *)(lVar11 + 10) == '\x01')))) {
          *puVar12 = uVar5;
          *(undefined1 *)(lVar11 + 10) = 0;
        }
        puVar23 = *(uint **)(lVar9 + 0xf8);
        puVar1 = puVar23 + *(longlong *)(lVar9 + 0x100);
        if (*(char *)(lVar9 + 0x108) == '\0') {
          do {
            if (puVar23 == puVar1) {
              return;
            }
            while( true ) {
              lVar35 = *(longlong *)
                        (*(longlong *)(lVar10 + 0x100) + 0x58 + (ulonglong)*puVar23 * 0xa0);
              if (lVar35 != 0) break;
              puVar23 = puVar23 + 1;
              if (puVar23 == puVar1) {
                return;
              }
            }
            lVar32 = *(longlong *)(lVar10 + 0x100) + (ulonglong)*puVar23 * 0xa0;
            uVar29 = (ulonglong)*(uint *)(lVar32 + 0x94);
            lVar38 = *(longlong *)(*(longlong *)(lVar10 + 0x1a0) + 0x18 + uVar29 * 0x48);
            lVar25 = ~*(ulonglong *)
                       (*(longlong *)(*(longlong *)(lVar10 + 0x1a0) + 0x38 + uVar29 * 0x48) +
                       *(longlong *)(lVar9 + 0x118) * 8) * 0x30;
            lVar17 = *(longlong *)(lVar38 + 0x10 + lVar25);
            lVar38 = *(longlong *)(lVar38 + 0x28 + lVar25);
            lVar32 = *(longlong *)(lVar32 + 0x50);
            puVar23 = puVar23 + 1;
            uVar36 = 1;
            uVar29 = 0;
            while( true ) {
              uVar29 = (ulonglong)~*(uint *)(lVar32 + 8 + uVar29 * 0x10);
              uVar3 = *(undefined1 *)(lVar11 + 10);
              *(undefined4 *)(lVar38 + uVar29 * 4) = uVar4;
              *(undefined1 *)(lVar17 + 2 + uVar29 * 3) = uVar3;
              if (uVar36 == (uint)lVar35) break;
              uVar29 = (ulonglong)uVar36;
              uVar36 = uVar36 + 1;
            }
          } while( true );
        }
        lVar38 = 0;
        lVar35 = 0;
        uVar36 = 0;
        do {
          if (uVar36 == (uint)lVar38) {
            if (puVar23 == puVar1) {
              return;
            }
            while( true ) {
              lVar38 = *(longlong *)
                        (*(longlong *)(lVar10 + 0x1a0) + 0x10 + (ulonglong)*puVar23 * 0x48);
              if (lVar38 != 0) break;
              puVar23 = puVar23 + 1;
              if (puVar23 == puVar1) {
                return;
              }
            }
            lVar35 = *(longlong *)(lVar10 + 0x1a0) + (ulonglong)*puVar23 * 0x48;
            lVar17 = *(longlong *)(lVar35 + 0x18);
            lVar32 = ~*(ulonglong *)
                       (*(longlong *)(lVar35 + 0x38) + *(longlong *)(lVar9 + 0x118) * 8) * 0x30;
            lVar35 = *(longlong *)(lVar17 + 0x10 + lVar32);
            pbVar33 = *(byte **)(lVar17 + 0x28 + lVar32);
            puVar23 = puVar23 + 1;
            uVar36 = 0;
          }
          uVar29 = (ulonglong)uVar36;
          uVar36 = uVar36 + 1;
          uVar3 = *(undefined1 *)(lVar11 + 10);
          *(undefined4 *)(pbVar33 + uVar29 * 4) = uVar4;
          *(undefined1 *)(lVar35 + 2 + uVar29 * 3) = uVar3;
        } while( true );
      }
      puVar21 = (undefined8 *)0x0;
      puVar22 = puVar27;
      puVar27 = puVar27 + 2;
    }
    else {
      puVar22 = puVar21;
      puVar21 = puVar21 + 2;
    }
    *puVar8 = *puVar8 + 1;
    uVar16 = *puVar22;
    if ((((ulonglong)~(uint)uVar16 < *(ulonglong *)(lVar10 + 0x10)) &&
        (piVar24 = (int *)((ulonglong)~(uint)uVar16 * 0x18 + *(longlong *)(lVar10 + 8)),
        piVar24[4] == (int)((ulonglong)uVar16 >> 0x20))) && (*piVar24 != 0)) {
      uVar36 = piVar24[2];
      if (((ulonglong)uVar36 < *(ulonglong *)(lVar9 + 0x38)) &&
         ((*(ulonglong *)(*(longlong *)(lVar9 + 0x28) + (ulonglong)(uVar36 >> 6) * 8) >>
           ((ulonglong)uVar36 & 0x3f) & 1) != 0)) {
        bVar2 = *(byte *)(lVar11 + 10);
        *puVar12 = uVar5;
        *(byte *)(lVar11 + 10) = bVar2 ^ 1;
        lVar17 = plStack_a8[2];
        if ((ulonglong)(*plStack_a8 - lVar17) < 0x20) {
          pdb_142d7f1b0(plStack_a8,lVar17,0x20,1,1);
        }
        lVar32 = plStack_a8[1];
        *(code **)(lVar32 + lVar17) = pdb_1411ae9e0;
        *(undefined8 *)(lVar32 + 8 + lVar17) = uVar16;
        *(undefined8 *)(lVar32 + 0x10 + lVar17) = uVar20;
        *(undefined4 *)(lVar32 + 0x18 + lVar17) = 0;
        *(undefined1 *)(lVar32 + 0x1c + lVar17) = 0;
        plStack_a8[2] = lVar17 + 0x20;
        if (*(char *)(lVar11 + 10) == '\x01') {
          *puVar13 = uVar6;
          *(undefined8 *)(lVar35 + 0x10) = 0;
          if ((*pcVar14 == '\0') && (*(int *)(pcVar14 + 8) != 0)) {
            *puVar15 = uVar7;
            lVar17 = *(longlong *)(lVar38 + 0x30);
            uVar16 = *(undefined8 *)(lVar38 + 0x40);
            if (lVar17 == *(longlong *)(lVar38 + 0x20)) {
              pdb_142d7e6e0(lVar38 + 0x20);
            }
            lVar32 = *(longlong *)(lVar38 + 0x28);
            lVar25 = lVar17 * 0x20;
            *(undefined1 *)(lVar32 + lVar25) = 0;
            *(undefined4 *)(lVar32 + 8 + lVar25) = 0;
            *(undefined8 *)(lVar32 + 0x18 + lVar25) = uVar16;
            *(longlong *)(lVar38 + 0x30) = lVar17 + 1;
            *(longlong *)(lVar38 + 0x40) = *(longlong *)(lVar38 + 0x40) + 1;
          }
        }
      }
    }
  } while( true );
}

