// VA 0x14297b540, PDB extent 1354 bytes
// toolbar::ui_interaction::ui_locked_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::ui_interaction::ui_locked_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 1354 */

void pdb_14297b540(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong *param_5)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined4 *puVar24;
  int *piVar25;
  uint uVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  float *pfVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  uint *puVar34;
  longlong lVar35;
  undefined8 *puVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_b8;
  
  puVar5 = (ulonglong *)*param_1;
  lVar6 = param_1[1];
  uVar19 = *puVar5;
  uVar32 = 0;
  uVar17 = uVar19 - *(ulonglong *)(lVar6 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar6 + 0x18)) {
    uVar17 = uVar32;
  }
  uVar21 = uVar19 - *(ulonglong *)(lVar6 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar6 + 0x38)) {
    uVar21 = uVar32;
  }
  puVar28 = (undefined8 *)(uVar17 * 0x10 + *(longlong *)(lVar6 + 8));
  uVar19 = *(ulonglong *)(lVar6 + 0x10) - uVar17;
  if (*(ulonglong *)(lVar6 + 0x10) < uVar17) {
    puVar28 = (undefined8 *)0x8;
    uVar19 = uVar32;
  }
  puVar18 = (undefined8 *)(uVar21 * 0x10 + *(longlong *)(lVar6 + 0x28));
  uVar17 = *(ulonglong *)(lVar6 + 0x30) - uVar21;
  if (*(ulonglong *)(lVar6 + 0x30) < uVar21) {
    puVar18 = (undefined8 *)0x8;
    uVar17 = uVar32;
  }
  *puVar5 = (*(longlong *)(lVar6 + 0x40) - uVar17) - uVar19;
  uVar11 = _DAT_143607210;
  plVar22 = *(longlong **)(param_4 + 8);
  if (plVar22 == (longlong *)0x0) {
    plVar22 = *(longlong **)(param_4 + 0x10);
  }
  puVar36 = puVar28 + uVar19 * 2;
  puVar33 = puVar18 + uVar17 * 2;
  lVar6 = *param_2;
  lVar7 = param_2[1];
  do {
    fVar15 = _DAT_142f94714;
    fVar14 = _DAT_142e37834;
    fVar13 = _DAT_142e36f34;
    fVar12 = _DAT_142e36f28;
    if ((puVar28 == (undefined8 *)0x0) || (puVar28 == puVar36)) {
      if ((puVar18 == (undefined8 *)0x0) || (puVar18 == puVar33)) break;
      puVar28 = (undefined8 *)0x0;
      puVar16 = puVar18 + 2;
      puVar29 = puVar18;
    }
    else {
      puVar16 = puVar18;
      puVar29 = puVar28;
      puVar28 = puVar28 + 2;
    }
    puVar18 = puVar16;
    *puVar5 = *puVar5 + 1;
    uVar8 = *puVar29;
    if ((((ulonglong)~(uint)uVar8 < *(ulonglong *)(lVar7 + 0x10)) &&
        (piVar25 = (int *)((ulonglong)~(uint)uVar8 * 0x18 + *(longlong *)(lVar7 + 8)),
        piVar25[4] == (int)((ulonglong)uVar8 >> 0x20))) && (*piVar25 != 0)) {
      uVar26 = piVar25[2];
      if (((ulonglong)uVar26 < *(ulonglong *)(lVar6 + 0x38)) &&
         ((*(ulonglong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar26 >> 6) * 8) >>
           ((ulonglong)uVar26 & 0x3f) & 1) != 0)) {
        lVar35 = plVar22[2];
        if ((ulonglong)(*plVar22 - lVar35) < 0x20) {
          pdb_142d7f1b0(plVar22,lVar35,0x20,1,1);
        }
        lVar9 = plVar22[1];
        *(code **)(lVar9 + lVar35) = pdb_1411af210;
        *(undefined8 *)(lVar9 + 8 + lVar35) = uVar8;
        *(undefined8 *)(lVar9 + 0x10 + lVar35) = uVar11;
        *(undefined4 *)(lVar9 + 0x18 + lVar35) = 0;
        *(undefined1 *)(lVar9 + 0x1c + lVar35) = 0;
        plVar22[2] = lVar35 + 0x20;
      }
    }
  } while( true );
  lVar6 = *param_3;
  lVar7 = param_3[1];
  if ((*(ulonglong *)(lVar6 + 0x110) < *(ulonglong *)(lVar7 + 400)) &&
     (uVar19 = *(ulonglong *)(*(longlong *)(lVar7 + 0x188) + *(ulonglong *)(lVar6 + 0x110) * 8),
     uVar19 != 0)) {
    lVar35 = ~uVar19 * 0x90 + *(longlong *)(lVar7 + 0x158);
    cVar2 = *(char *)(lVar6 + 0x108);
  }
  else {
    lVar35 = 0;
    cVar2 = *(char *)(lVar6 + 0x108);
  }
  if (cVar2 != '\0') {
    return;
  }
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
  puVar34 = *(uint **)(lVar6 + 0xf8);
  puVar1 = puVar34 + *(longlong *)(lVar6 + 0x100);
  lVar9 = *param_5;
  lStack_e0 = 8;
  lStack_e8 = 0;
  uVar26 = 0;
  lVar27 = 0;
  do {
    if (uVar26 == (uint)lVar27) {
      if (puVar34 == puVar1) {
        return;
      }
      while( true ) {
        lVar27 = *(longlong *)(*(longlong *)(lVar7 + 0x100) + 0x58 + (ulonglong)*puVar34 * 0xa0);
        if (lVar27 != 0) break;
        puVar34 = puVar34 + 1;
        if (puVar34 == puVar1) {
          return;
        }
      }
      lVar20 = *(longlong *)(lVar7 + 0x100) + (ulonglong)*puVar34 * 0xa0;
      uVar19 = (ulonglong)*(uint *)(lVar20 + 0x94);
      lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x18 + uVar19 * 0x48);
      lVar23 = ~*(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x38 + uVar19 * 0x48) +
                 *(longlong *)(lVar6 + 0x118) * 8) * 0x30;
      lStack_e8 = *(longlong *)(lVar10 + 0x10 + lVar23);
      lStack_b8 = *(longlong *)(lVar10 + 0x28 + lVar23);
      lStack_e0 = *(longlong *)(lVar20 + 0x50);
      puVar34 = puVar34 + 1;
      uVar26 = 1;
      uVar19 = 0;
    }
    else {
      uVar19 = (ulonglong)uVar26;
      uVar26 = uVar26 + 1;
    }
    uVar11 = *(undefined8 *)(lStack_e0 + uVar19 * 0x10);
    uVar31 = (uint)uVar11;
    puVar24 = (undefined4 *)(ulonglong)~uVar31;
    if (puVar24 < *(undefined4 **)(lVar35 + 0x88)) {
      uVar4 = *(uint *)(*(longlong *)(lVar35 + 0x80) + (longlong)puVar24 * 4);
      puVar24 = (undefined4 *)(ulonglong)uVar4;
      if (uVar4 == 0) goto LAB_14297b970;
      pfVar30 = (float *)(*(longlong *)(lVar35 + 8) * (ulonglong)~uVar4 +
                         *(longlong *)(lVar35 + 0x10));
      puVar24 = (undefined4 *)((ulonglong)~uVar4 * 4 + *(longlong *)(lVar35 + 0x50));
    }
    else {
LAB_14297b970:
      pfVar30 = (float *)0x0;
    }
    if (uVar31 == 0) {
      return;
    }
    uVar19 = (ulonglong)~*(uint *)(lStack_e0 + 8 + uVar19 * 0x10);
    fVar38 = *(float *)(lVar9 + 0x58);
    fVar37 = pfVar30[1];
    *puVar24 = uVar3;
    fVar37 = fVar38 / fVar37 + pfVar30[2];
    fVar38 = 0.0;
    if (0.0 <= fVar37) {
      fVar38 = fVar37;
    }
    fVar37 = fVar12;
    if (fVar38 <= fVar12) {
      fVar37 = fVar38;
    }
    pfVar30[2] = fVar37;
    fVar39 = (fVar37 * fVar14 + fVar13) * fVar15;
    fVar37 = (float)pub_142e32b30(fVar39);
    fVar38 = *pfVar30;
    *(undefined4 *)(lStack_b8 + uVar19 * 4) = uVar3;
    *(float *)(lStack_e8 + 0x10 + uVar19 * 0x14) =
         ((fVar37 / fVar39) * fVar38 + fVar12) * *(float *)(lStack_e8 + 0x10 + uVar19 * 0x14);
    if ((pfVar30[2] == fVar12) && (!NAN(pfVar30[2]) && !NAN(fVar12))) {
      lVar10 = plVar22[2];
      if ((ulonglong)(*plVar22 - lVar10) < 0x18) {
        pdb_142d7f1b0(plVar22,lVar10,0x18,1,1);
      }
      lVar20 = plVar22[1];
      *(code **)(lVar20 + lVar10) = pdb_1411aef60;
      *(undefined8 *)(lVar20 + 8 + lVar10) = uVar11;
      *(code **)(lVar20 + 0x10 + lVar10) = pdb_1411af610;
      plVar22[2] = lVar10 + 0x18;
    }
  } while( true );
}

