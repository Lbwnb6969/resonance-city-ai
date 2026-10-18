// VA 0x1429508e0, PDB extent 1354 bytes
// system_critters::firefly::set_firefly_velocities_towards_goals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/firefly.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::firefly::set_firefly_velocities_towards_goals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/firefly.rs
   Extent: 1354 */

void pdb_1429508e0(longlong *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  float fVar3;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_118;
  uint *puStack_f0;
  uint *puStack_e8;
  longlong lStack_d0;
  longlong lStack_c0;
  longlong lStack_b0;
  undefined4 uStack_a4;
  longlong lStack_a0;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_78;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  byte bStack_60;
  float fVar4;
  
  lVar5 = *param_1;
  lVar6 = param_1[1];
  pdb_142948180(&puStack_f0,lVar6,lVar5,(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14));
  fVar10 = _DAT_142e37ae4;
  fVar9 = _DAT_142e36f28;
  lStack_118 = lStack_d0;
  lStack_130 = lStack_c0;
  lStack_138 = lStack_b0;
  lStack_150 = lStack_a0;
  lStack_158 = lStack_90;
  uVar16 = (ulonglong)uStack_68;
  do {
    if ((bStack_60 & 1) == 0) {
      if (uStack_64 == (uint)uVar16) {
        if (puStack_f0 == puStack_e8) {
          return;
        }
        while( true ) {
          uVar16 = *(ulonglong *)
                    (*(longlong *)(lVar6 + 0x100) + 0x58 + (ulonglong)*puStack_f0 * 0xa0);
          if (uVar16 != 0) break;
          puStack_f0 = puStack_f0 + 1;
          if (puStack_f0 == puStack_e8) {
            return;
          }
        }
        lVar12 = *(longlong *)(lVar6 + 0x100) + (ulonglong)*puStack_f0 * 0xa0;
        uVar11 = (ulonglong)*(uint *)(lVar12 + 0x94);
        lVar15 = *(longlong *)(lVar6 + 0x1a0) + uVar11 * 0x48;
        uVar11 = *(ulonglong *)(*(longlong *)(lVar6 + 0x1a0) + 0x40 + uVar11 * 0x48);
        if ((*(ulonglong *)(lVar5 + 0x110) < uVar11) &&
           (uVar7 = *(ulonglong *)(*(longlong *)(lVar15 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8)
           , uVar7 != 0)) {
          lStack_150 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar7 * 0x30);
        }
        else {
          lStack_150 = 0;
        }
        lVar14 = *(longlong *)(lVar15 + 0x38);
        if (*(ulonglong *)(lVar5 + 0x120) < uVar11) {
          uVar11 = *(ulonglong *)(lVar14 + *(ulonglong *)(lVar5 + 0x120) * 8);
          lVar15 = *(longlong *)(lVar15 + 0x18);
          if (uVar11 == 0) goto LAB_142950c2e;
          lStack_158 = *(longlong *)(lVar15 + 0x10 + ~uVar11 * 0x30);
        }
        else {
          lVar15 = *(longlong *)(lVar15 + 0x18);
LAB_142950c2e:
          lStack_158 = 0;
        }
        puStack_f0 = puStack_f0 + 1;
        lVar17 = ~*(ulonglong *)(lVar14 + *(longlong *)(lVar5 + 0x128) * 8) * 0x30;
        lStack_130 = *(longlong *)(lVar15 + 0x10 + lVar17);
        lStack_138 = *(longlong *)(lVar15 + 0x28 + lVar17);
        lVar14 = ~*(ulonglong *)(lVar14 + *(longlong *)(lVar5 + 0x130) * 8) * 0x30;
        lStack_88 = *(longlong *)(lVar15 + 0x10 + lVar14);
        lStack_78 = *(longlong *)(lVar15 + 0x28 + lVar14);
        lStack_118 = *(longlong *)(lVar12 + 0x50);
        uStack_64 = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = (ulonglong)uStack_64;
      }
      uVar21 = ~*(uint *)(lStack_118 + 8 + uVar11 * 0x10);
    }
    else {
      uVar21 = uStack_64;
      if (uStack_64 == (uint)uVar16) {
        if (puStack_f0 == puStack_e8) {
          return;
        }
        while( true ) {
          uVar16 = *(ulonglong *)
                    (*(longlong *)(lVar6 + 0x1a0) + 0x10 + (ulonglong)*puStack_f0 * 0x48);
          if (uVar16 != 0) break;
          puStack_f0 = puStack_f0 + 1;
          if (puStack_f0 == puStack_e8) {
            return;
          }
        }
        lVar15 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)*puStack_f0 * 0x48;
        if ((*(ulonglong *)(lVar5 + 0x110) < *(ulonglong *)(lVar15 + 0x40)) &&
           (uVar11 = *(ulonglong *)
                      (*(longlong *)(lVar15 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
           uVar11 != 0)) {
          lStack_150 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar11 * 0x30);
        }
        else {
          lStack_150 = 0;
        }
        lVar12 = *(longlong *)(lVar15 + 0x38);
        if (*(ulonglong *)(lVar5 + 0x120) < *(ulonglong *)(lVar15 + 0x40)) {
          uVar11 = *(ulonglong *)(lVar12 + *(ulonglong *)(lVar5 + 0x120) * 8);
          lVar15 = *(longlong *)(lVar15 + 0x18);
          if (uVar11 == 0) goto LAB_142950bc8;
          lStack_158 = *(longlong *)(lVar15 + 0x10 + ~uVar11 * 0x30);
        }
        else {
          lVar15 = *(longlong *)(lVar15 + 0x18);
LAB_142950bc8:
          lStack_158 = 0;
        }
        puStack_f0 = puStack_f0 + 1;
        lVar14 = ~*(ulonglong *)(lVar12 + *(longlong *)(lVar5 + 0x128) * 8) * 0x30;
        lStack_130 = *(longlong *)(lVar15 + 0x10 + lVar14);
        lStack_138 = *(longlong *)(lVar15 + 0x28 + lVar14);
        lVar12 = ~*(ulonglong *)(lVar12 + *(longlong *)(lVar5 + 0x130) * 8) * 0x30;
        lStack_88 = *(longlong *)(lVar15 + 0x10 + lVar12);
        lStack_78 = *(longlong *)(lVar15 + 0x28 + lVar12);
        uStack_64 = 0;
        uVar21 = uStack_64;
      }
    }
    uVar11 = (ulonglong)uVar21;
    lVar15 = uVar11 * 0x30 + lStack_150;
    puVar1 = (undefined4 *)(lStack_138 + uVar11 * 4);
    puVar2 = (uint *)(lStack_158 + uVar11 * 0x10);
    puVar13 = (ulonglong *)(uVar11 * 0x10 + lStack_130);
    uVar21 = *puVar2;
    fVar18 = *(float *)(lVar15 + 0x18);
    if ((uVar21 & 1) != 0) {
      fVar18 = (float)puVar2[3];
    }
    fVar18 = fVar18 - *(float *)(lVar15 + 0x18);
    uVar19 = (int)(uVar21 << 0x1f) >> 0x1f;
    uVar21 = (int)(uVar21 << 0x1f) >> 0x1f;
    fVar20 = (float)(~uVar19 & (uint)*(float *)(lVar15 + 0x10) | puVar2[1] & uVar19) -
             *(float *)(lVar15 + 0x10);
    fVar22 = (float)(~uVar21 & (uint)*(float *)(lVar15 + 0x14) | puVar2[2] & uVar21) -
             *(float *)(lVar15 + 0x14);
    fVar23 = fVar9 / SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar18 * fVar18);
    bVar8 = (int)fVar23 - 1U < 0x7fffff ||
            (int)ABS(fVar23) - 0x800000U < 0x7f000000 && -1 < (int)fVar23;
    if (bVar8) {
      fVar18 = fVar18 * fVar23;
    }
    else {
      fVar18 = 0.0;
    }
    uStack_64 = uStack_64 + 1;
    uVar21 = (uint)bVar8;
    fVar3 = *(float *)(lVar15 + 0x14);
    fVar4 = *(float *)(lVar15 + 0x14);
    *puVar1 = uStack_a4;
    *puVar13 = CONCAT44((int)(uVar21 << 0x1f) >> 0x1f,(int)(uVar21 << 0x1f) >> 0x1f) &
               CONCAT44(fVar22 * fVar23,fVar20 * fVar23);
    *(float *)(puVar13 + 1) = fVar18;
    *(undefined4 *)(uVar11 * 4 + lStack_78) = uStack_6c;
    *(undefined4 *)(uVar11 * 4 + lStack_88) = 0x3f800000;
    if (fVar4 <= fVar9 && fVar9 != fVar3) {
      fVar18 = *(float *)((longlong)puVar13 + 4);
      if (*(float *)((longlong)puVar13 + 4) <= fVar10) {
        fVar18 = fVar10;
      }
      *puVar1 = uStack_a4;
      *(float *)((longlong)puVar13 + 4) = fVar18;
    }
  } while( true );
}

