// VA 0x1429594f0, PDB extent 1534 bytes
// system_critters::sheep::sheep_walk_animation::sheep_walk_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_walk_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::sheep::sheep_walk_animation::sheep_walk_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_walk_animation.rs
   Extent: 1534 */

void pdb_1429594f0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  char cVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  uint uVar19;
  uint *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  longlong lStack_110;
  longlong lStack_100;
  longlong lStack_f0;
  longlong lStack_e0;
  
  fVar10 = _DAT_142e3787c;
  lVar6 = *param_1;
  lVar7 = param_1[1];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar20 = *(uint **)(lVar6 + 0xf8);
  puVar1 = puVar20 + *(longlong *)(lVar6 + 0x100);
  cVar3 = *(char *)(lVar6 + 0x108);
  lVar8 = *param_2;
  lVar16 = 0;
  lStack_e0 = 8;
  lStack_100 = 0;
  lStack_110 = 0;
  bVar18 = false;
  uVar19 = 0;
  do {
    if (cVar3 == '\0') {
      if (uVar19 == (uint)lVar16) {
        if (puVar20 == puVar1) {
          return;
        }
        while( true ) {
          lVar16 = *(longlong *)(*(longlong *)(lVar7 + 0x100) + 0x58 + (ulonglong)*puVar20 * 0xa0);
          if (lVar16 != 0) break;
          puVar20 = puVar20 + 1;
          if (puVar20 == puVar1) {
            return;
          }
        }
        lVar17 = *(longlong *)(lVar7 + 0x100) + (ulonglong)*puVar20 * 0xa0;
        lVar14 = (ulonglong)*(uint *)(lVar17 + 0x94) * 0x48 + *(longlong *)(lVar7 + 0x1a0);
        uVar12 = *(ulonglong *)(lVar6 + 0x110);
        if ((uVar12 < *(ulonglong *)(lVar17 + 0x88)) &&
           (*(longlong *)(*(longlong *)(lVar17 + 0x80) + uVar12 * 8) != 0)) {
          lVar15 = *(longlong *)(lVar14 + 0x18);
          lVar14 = *(longlong *)(lVar14 + 0x38);
          lStack_110 = *(longlong *)(lVar15 + 0x10 + ~*(ulonglong *)(lVar14 + uVar12 * 8) * 0x30);
          bVar18 = true;
        }
        else {
          lVar15 = *(longlong *)(lVar14 + 0x18);
          lVar14 = *(longlong *)(lVar14 + 0x38);
          bVar18 = false;
        }
        puVar20 = puVar20 + 1;
        lVar14 = ~*(ulonglong *)(lVar14 + *(longlong *)(lVar6 + 0x118) * 8) * 0x30;
        lStack_100 = *(longlong *)(lVar15 + 0x10 + lVar14);
        lStack_f0 = *(longlong *)(lVar15 + 0x28 + lVar14);
        lStack_e0 = *(longlong *)(lVar17 + 0x50);
        uVar19 = 0;
        uVar12 = 0;
      }
      else {
        uVar12 = (ulonglong)uVar19;
      }
      uVar9 = ~*(uint *)(lStack_e0 + 8 + uVar12 * 0x10);
    }
    else {
      uVar9 = uVar19;
      if (uVar19 == (uint)lVar16) {
        if (puVar20 == puVar1) {
          return;
        }
        while( true ) {
          lVar16 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x10 + (ulonglong)*puVar20 * 0x48);
          if (lVar16 != 0) break;
          puVar20 = puVar20 + 1;
          if (puVar20 == puVar1) {
            return;
          }
        }
        lVar17 = *(longlong *)(lVar7 + 0x1a0) + (ulonglong)*puVar20 * 0x48;
        uVar19 = 0;
        if ((*(ulonglong *)(lVar6 + 0x110) < *(ulonglong *)(lVar17 + 0x40)) &&
           (uVar12 = *(ulonglong *)
                      (*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lVar6 + 0x110) * 8),
           uVar12 != 0)) {
          lStack_110 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar12 * 0x30);
          bVar18 = true;
        }
        else {
          bVar18 = false;
        }
        puVar20 = puVar20 + 1;
        lVar14 = ~*(ulonglong *)(*(longlong *)(lVar17 + 0x38) + *(longlong *)(lVar6 + 0x118) * 8) *
                 0x30;
        lStack_100 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + lVar14);
        lStack_f0 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x28 + lVar14);
        uVar9 = uVar19;
      }
    }
    uVar12 = (ulonglong)uVar9;
    lVar17 = uVar12 * 0x68 + lStack_100;
    puVar2 = (undefined4 *)(lStack_f0 + uVar12 * 4);
    if (bVar18) {
      lVar14 = uVar12 * 0x30 + lStack_110;
      fVar22 = *(float *)(lVar17 + 0x4c);
      uVar26 = *(undefined8 *)(lVar17 + 0x50);
      bVar18 = true;
      uVar24 = uVar26;
      fVar27 = fVar22;
      if (lVar14 != 0) {
        uVar24 = *(undefined8 *)(lVar14 + 0x14);
        fVar27 = *(float *)(lVar14 + 0x10);
      }
    }
    else {
      fVar22 = *(float *)(lVar17 + 0x4c);
      uVar26 = *(undefined8 *)(lVar17 + 0x50);
      bVar18 = false;
      uVar24 = uVar26;
      fVar27 = fVar22;
    }
    fVar25 = (float)((ulonglong)uVar24 >> 0x20);
    fVar21 = (float)uVar24 - (float)uVar26;
    fVar23 = fVar25 - (float)((ulonglong)uVar26 >> 0x20);
    *(float *)(lVar17 + 0x48) =
         SQRT(fVar23 * fVar23 + (fVar27 - fVar22) * (fVar27 - fVar22) + fVar21 * fVar21) /
         *(float *)(lVar8 + 0x28);
    *puVar2 = uVar4;
    *(float *)(lVar17 + 0x4c) = fVar27;
    *(float *)(lVar17 + 0x50) = (float)uVar24;
    *(float *)(lVar17 + 0x54) = fVar25;
    iVar5 = *(int *)(lVar17 + 0x10);
    fVar22 = *(float *)(lVar17 + 0x48);
    if (fVar22 <= fVar10) {
      if (iVar5 != 1) goto LAB_1429598c0;
      iVar13 = 2;
      fVar22 = 0.0;
    }
    else {
      iVar13 = 1;
      if (iVar5 == 1) {
LAB_1429598c0:
        fVar22 = *(float *)(lVar17 + 0x14);
        iVar13 = iVar5;
      }
    }
    uVar19 = uVar19 + 1;
    *puVar2 = uVar4;
    *(int *)(lVar17 + 0x10) = iVar13;
    *(float *)(lVar17 + 0x14) = fVar22;
    cVar11 = pdb_140934cc0(lVar17);
    if (cVar11 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001429598f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1436048e8 + *(int *)(&UNK_1436048e8 + (ulonglong)*(uint *)(lVar17 + 0x10) * 4)
                ))();
      return;
    }
  } while( true );
}

