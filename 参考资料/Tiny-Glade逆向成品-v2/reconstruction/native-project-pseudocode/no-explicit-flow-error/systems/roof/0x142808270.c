// VA 0x142808270, PDB extent 1119 bytes
// system_roof::visual::roof_animation::roof_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/roof_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::visual::roof_animation::roof_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/roof_animation.rs
   Extent: 1119 */

void pdb_142808270(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  char cVar16;
  int *piVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint *puVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong lStack_108;
  longlong lStack_f0;
  longlong lStack_e0;
  longlong lStack_d8;
  
  fVar15 = _DAT_14359bfb8;
  fVar14 = _DAT_14359bfb4;
  fVar13 = _DAT_143020f30;
  fVar12 = _DAT_142fa5b20;
  fVar11 = _DAT_142f69450;
  fVar10 = _DAT_142e37830;
  fVar9 = _DAT_142e36f28;
  lVar6 = *param_1;
  lVar7 = param_1[1];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar25 = *(uint **)(lVar6 + 0xf8);
  puVar1 = puVar25 + *(longlong *)(lVar6 + 0x100);
  cVar4 = *(char *)(lVar6 + 0x108);
  lVar8 = *param_2;
  lVar24 = 0;
  lStack_d8 = 8;
  bVar26 = false;
  lVar23 = 0;
  lStack_108 = 0;
  lStack_e0 = 8;
  uVar22 = 0;
  do {
    if (cVar4 == '\0') {
      if (uVar22 == (uint)lVar24) {
        if (puVar25 == puVar1) {
          return;
        }
        while( true ) {
          lVar24 = *(longlong *)(*(longlong *)(lVar7 + 0x100) + 0x58 + (ulonglong)*puVar25 * 0xa0);
          if (lVar24 != 0) break;
          puVar25 = puVar25 + 1;
          if (puVar25 == puVar1) {
            return;
          }
        }
        lVar19 = *(longlong *)(lVar7 + 0x100) + (ulonglong)*puVar25 * 0xa0;
        uVar18 = (ulonglong)*(uint *)(lVar19 + 0x94);
        lVar21 = *(longlong *)(lVar7 + 0x1a0);
        lVar23 = lVar21 + uVar18 * 0x48;
        lVar20 = *(longlong *)(lVar21 + 0x38 + uVar18 * 0x48);
        if (*(ulonglong *)(lVar6 + 0x110) < *(ulonglong *)(lVar21 + 0x40 + uVar18 * 0x48)) {
          uVar18 = *(ulonglong *)(lVar20 + *(ulonglong *)(lVar6 + 0x110) * 8);
          lVar21 = *(longlong *)(lVar23 + 0x18);
          if (uVar18 == 0) goto LAB_142808519;
          lStack_108 = *(longlong *)(lVar21 + 0x10 + ~uVar18 * 0x30);
        }
        else {
          lVar21 = *(longlong *)(lVar23 + 0x18);
LAB_142808519:
          lStack_108 = 0;
        }
        uVar22 = 0;
        bVar26 = false;
        if (*(ulonglong *)(lVar6 + 0x120) < *(ulonglong *)(lVar19 + 0x88)) {
          bVar26 = *(longlong *)(*(longlong *)(lVar19 + 0x80) + *(ulonglong *)(lVar6 + 0x120) * 8)
                   != 0;
        }
        puVar25 = puVar25 + 1;
        lVar20 = ~*(ulonglong *)(lVar20 + *(longlong *)(lVar6 + 0x118) * 8) * 0x30;
        lVar23 = *(longlong *)(lVar21 + 0x10 + lVar20);
        lStack_f0 = *(longlong *)(lVar21 + 0x28 + lVar20);
        lStack_e0 = *(longlong *)(lVar19 + 0x50);
        uVar18 = 0;
      }
      else {
        uVar18 = (ulonglong)uVar22;
      }
      piVar17 = (int *)(lStack_e0 + uVar18 * 0x10);
      uVar18 = (ulonglong)~*(uint *)(lStack_e0 + 8 + uVar18 * 0x10);
    }
    else {
      if (uVar22 == (uint)lVar24) {
        if (puVar25 == puVar1) {
          return;
        }
        while( true ) {
          lVar24 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x10 + (ulonglong)*puVar25 * 0x48);
          if (lVar24 != 0) break;
          puVar25 = puVar25 + 1;
          if (puVar25 == puVar1) {
            return;
          }
        }
        lVar21 = *(longlong *)(lVar7 + 0x1a0) + (ulonglong)*puVar25 * 0x48;
        lVar23 = *(longlong *)(lVar21 + 0x38);
        if (*(ulonglong *)(lVar6 + 0x110) < *(ulonglong *)(lVar21 + 0x40)) {
          uVar18 = *(ulonglong *)(lVar23 + *(ulonglong *)(lVar6 + 0x110) * 8);
          lVar20 = *(longlong *)(lVar21 + 0x18);
          if (uVar18 == 0) goto LAB_1428084b1;
          lStack_108 = *(longlong *)(lVar20 + 0x10 + ~uVar18 * 0x30);
        }
        else {
          lVar20 = *(longlong *)(lVar21 + 0x18);
LAB_1428084b1:
          lStack_108 = 0;
        }
        uVar22 = 0;
        bVar26 = false;
        if (*(ulonglong *)(lVar6 + 0x120) < *(ulonglong *)(lVar21 + 0x40)) {
          bVar26 = *(longlong *)(lVar23 + *(ulonglong *)(lVar6 + 0x120) * 8) != 0;
        }
        puVar25 = puVar25 + 1;
        lVar19 = ~*(ulonglong *)(lVar23 + *(longlong *)(lVar6 + 0x118) * 8) * 0x30;
        lVar23 = *(longlong *)(lVar20 + 0x10 + lVar19);
        lStack_f0 = *(longlong *)(lVar20 + 0x28 + lVar19);
        lStack_d8 = *(longlong *)(lVar21 + 8);
      }
      uVar18 = (ulonglong)uVar22;
      piVar17 = (int *)(lStack_d8 + uVar18 * 8);
    }
    pfVar2 = (float *)(lVar23 + uVar18 * 8);
    puVar3 = (undefined4 *)(lStack_f0 + uVar18 * 4);
    if (*piVar17 == 0) {
      return;
    }
    cVar16 = pdb_140b77b50(uVar18 * 0x58 + lStack_108);
    if (bVar26) {
      fVar27 = *(float *)(lVar8 + 0x28);
      fVar28 = fVar27 * fVar11;
      fVar27 = fVar27 * fVar12;
      if (fVar28 != 0.0) goto LAB_142808621;
joined_r0x00014280861f:
      if (NAN(fVar28)) goto LAB_142808621;
    }
    else {
      fVar28 = fVar10;
      if (cVar16 == '\0') {
        fVar28 = fVar9;
      }
      fVar29 = *(float *)(lVar8 + 0x28);
      fVar27 = (float)(-(uint)(fVar13 < *pfVar2) & (uint)(fVar29 * fVar15 * fVar28));
      fVar28 = fVar29 * fVar14 * fVar28;
      if (fVar28 == 0.0) goto joined_r0x00014280861f;
LAB_142808621:
      *puVar3 = uVar5;
      fVar29 = 0.0;
      if (0.0 <= fVar28 + *pfVar2) {
        fVar29 = fVar28 + *pfVar2;
      }
      fVar28 = fVar9;
      if (fVar29 <= fVar9) {
        fVar28 = fVar29;
      }
      *pfVar2 = fVar28;
    }
    uVar22 = uVar22 + 1;
    if ((fVar27 != 0.0) || (NAN(fVar27))) {
      *puVar3 = uVar5;
      fVar28 = 0.0;
      if (0.0 <= fVar27 + pfVar2[1]) {
        fVar28 = fVar27 + pfVar2[1];
      }
      fVar27 = fVar9;
      if (fVar28 <= fVar9) {
        fVar27 = fVar28;
      }
      pfVar2[1] = fVar27;
    }
  } while( true );
}

