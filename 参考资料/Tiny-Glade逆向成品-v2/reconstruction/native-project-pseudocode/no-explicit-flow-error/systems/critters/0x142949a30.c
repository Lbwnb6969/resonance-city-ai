// VA 0x142949a30, PDB extent 1641 bytes
// system_critters::sheep::sheep_behavior::set_sheep_velocities_towards_goals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_behavior.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_critters::sheep::sheep_behavior::set_sheep_velocities_towards_goals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_behavior.rs
   Extent: 1641 */

void pdb_142949a30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  ulonglong uStack_168;
  uint *puStack_110;
  uint *puStack_108;
  longlong lStack_f0;
  longlong lStack_e0;
  longlong lStack_d0;
  undefined4 uStack_c4;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_98;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  byte bStack_80;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  pdb_142948180(&puStack_110,lVar2,lVar1,(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14));
  fVar3 = _DAT_142e36f28;
  lStack_170 = lStack_e0;
  lStack_178 = lStack_d0;
  lStack_190 = lStack_b8;
  lStack_198 = lStack_b0;
  lStack_180 = lStack_a8;
  lStack_188 = lStack_98;
  uVar13 = (ulonglong)uStack_88;
  do {
    uVar6 = (ulonglong)uStack_84;
    uStack_168 = uVar6;
    if ((bStack_80 & 1) == 0) {
      if (uStack_84 == (uint)uVar13) {
        if (puStack_110 == puStack_108) {
          return;
        }
        while( true ) {
          uVar13 = *(ulonglong *)
                    (*(longlong *)(lVar2 + 0x100) + 0x58 + (ulonglong)*puStack_110 * 0xa0);
          if (uVar13 != 0) break;
          puStack_110 = puStack_110 + 1;
          if (puStack_110 == puStack_108) {
            return;
          }
        }
        lVar8 = *(longlong *)(lVar2 + 0x100) + (ulonglong)*puStack_110 * 0xa0;
        uVar6 = (ulonglong)*(uint *)(lVar8 + 0x94);
        lVar11 = *(longlong *)(lVar2 + 0x1a0) + uVar6 * 0x48;
        uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x1a0) + 0x40 + uVar6 * 0x48);
        if ((*(ulonglong *)(lVar1 + 0x110) < uVar6) &&
           (uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x38) + *(ulonglong *)(lVar1 + 0x110) * 8)
           , uVar9 != 0)) {
          lStack_c0 = *(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x10 + ~uVar9 * 0x30);
          uVar9 = *(ulonglong *)(lVar1 + 0x118);
          if (uVar6 <= uVar9) goto LAB_142949de8;
LAB_142949d6c:
          uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x38) + uVar9 * 8);
          if (uVar9 == 0) goto LAB_142949de8;
          lStack_190 = *(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x10 + ~uVar9 * 0x30);
          uVar9 = *(ulonglong *)(lVar1 + 0x120);
          lVar7 = *(longlong *)(lVar11 + 0x38);
          if (uVar6 <= uVar9) goto LAB_142949da2;
LAB_142949e01:
          uVar6 = *(ulonglong *)(lVar7 + uVar9 * 8);
          lVar11 = *(longlong *)(lVar11 + 0x18);
          if (uVar6 == 0) goto LAB_142949e98;
          lStack_198 = *(longlong *)(lVar11 + 0x10 + ~uVar6 * 0x30);
        }
        else {
          lStack_c0 = 0;
          uVar9 = *(ulonglong *)(lVar1 + 0x118);
          if (uVar9 < uVar6) goto LAB_142949d6c;
LAB_142949de8:
          lStack_190 = 0;
          uVar9 = *(ulonglong *)(lVar1 + 0x120);
          lVar7 = *(longlong *)(lVar11 + 0x38);
          if (uVar9 < uVar6) goto LAB_142949e01;
LAB_142949da2:
          lVar11 = *(longlong *)(lVar11 + 0x18);
LAB_142949e98:
          lStack_198 = 0;
        }
        puStack_110 = puStack_110 + 1;
        lVar10 = ~*(ulonglong *)(lVar7 + *(longlong *)(lVar1 + 0x128) * 8) * 0x30;
        lStack_170 = *(longlong *)(lVar11 + 0x10 + lVar10);
        lStack_178 = *(longlong *)(lVar11 + 0x28 + lVar10);
        lVar7 = ~*(ulonglong *)(lVar7 + *(longlong *)(lVar1 + 0x130) * 8) * 0x30;
        lStack_180 = *(longlong *)(lVar11 + 0x10 + lVar7);
        lStack_188 = *(longlong *)(lVar11 + 0x28 + lVar7);
        lStack_f0 = *(longlong *)(lVar8 + 0x50);
        uStack_168 = 0;
      }
      uVar6 = (ulonglong)~*(uint *)(lStack_f0 + 8 + uStack_168 * 0x10);
    }
    else if (uStack_84 == (uint)uVar13) {
      if (puStack_110 == puStack_108) {
        return;
      }
      while( true ) {
        uVar13 = *(ulonglong *)
                  (*(longlong *)(lVar2 + 0x1a0) + 0x10 + (ulonglong)*puStack_110 * 0x48);
        if (uVar13 != 0) break;
        puStack_110 = puStack_110 + 1;
        if (puStack_110 == puStack_108) {
          return;
        }
      }
      lVar11 = *(longlong *)(lVar2 + 0x1a0) + (ulonglong)*puStack_110 * 0x48;
      uVar6 = *(ulonglong *)(lVar11 + 0x40);
      if ((*(ulonglong *)(lVar1 + 0x110) < uVar6) &&
         (uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x38) + *(ulonglong *)(lVar1 + 0x110) * 8),
         uVar9 != 0)) {
        lStack_c0 = *(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x10 + ~uVar9 * 0x30);
        uVar9 = *(ulonglong *)(lVar1 + 0x118);
        if (uVar6 <= uVar9) goto LAB_142949dab;
LAB_142949d1f:
        uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x38) + uVar9 * 8);
        if (uVar9 == 0) goto LAB_142949dab;
        lStack_190 = *(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x10 + ~uVar9 * 0x30);
        uVar9 = *(ulonglong *)(lVar1 + 0x120);
        lVar8 = *(longlong *)(lVar11 + 0x38);
        if (uVar6 <= uVar9) goto LAB_142949d55;
LAB_142949dc4:
        uVar6 = *(ulonglong *)(lVar8 + uVar9 * 8);
        lVar11 = *(longlong *)(lVar11 + 0x18);
        if (uVar6 == 0) goto LAB_142949e29;
        lStack_198 = *(longlong *)(lVar11 + 0x10 + ~uVar6 * 0x30);
      }
      else {
        lStack_c0 = 0;
        uVar9 = *(ulonglong *)(lVar1 + 0x118);
        if (uVar9 < uVar6) goto LAB_142949d1f;
LAB_142949dab:
        lStack_190 = 0;
        uVar9 = *(ulonglong *)(lVar1 + 0x120);
        lVar8 = *(longlong *)(lVar11 + 0x38);
        if (uVar9 < uVar6) goto LAB_142949dc4;
LAB_142949d55:
        lVar11 = *(longlong *)(lVar11 + 0x18);
LAB_142949e29:
        lStack_198 = 0;
      }
      puStack_110 = puStack_110 + 1;
      lVar7 = ~*(ulonglong *)(lVar8 + *(longlong *)(lVar1 + 0x128) * 8) * 0x30;
      lStack_170 = *(longlong *)(lVar11 + 0x10 + lVar7);
      lStack_178 = *(longlong *)(lVar11 + 0x28 + lVar7);
      lVar8 = ~*(ulonglong *)(lVar8 + *(longlong *)(lVar1 + 0x130) * 8) * 0x30;
      lStack_180 = *(longlong *)(lVar11 + 0x10 + lVar8);
      lStack_188 = *(longlong *)(lVar11 + 0x28 + lVar8);
      uVar6 = 0;
      uStack_168 = uVar6;
    }
    lVar11 = uVar6 * 0x30 + lStack_c0;
    piVar5 = (int *)(lStack_198 + uVar6 * 0x10);
    puVar12 = (ulonglong *)(uVar6 * 0x10 + lStack_170);
    if ((*piVar5 == 1) && (*(char *)(uVar6 * 0x68 + lStack_190 + 0x30) == '\x01')) {
      fVar19 = (float)*(undefined8 *)(piVar5 + 1);
      fVar20 = (float)((ulonglong)*(undefined8 *)(piVar5 + 1) >> 0x20);
      fVar21 = (float)piVar5[3];
      cVar4 = pdb_140934cc0();
      if (cVar4 != '\0') goto LAB_142949fe0;
      uVar18 = *(undefined8 *)(lVar11 + 0x10);
      fVar17 = *(float *)(lVar11 + 0x18);
    }
    else {
LAB_142949fe0:
      uVar18 = *(undefined8 *)(lVar11 + 0x10);
      fVar19 = (float)uVar18;
      fVar20 = (float)((ulonglong)uVar18 >> 0x20);
      fVar21 = *(float *)(lVar11 + 0x18);
      fVar17 = fVar21;
    }
    fVar21 = fVar21 - fVar17;
    fVar19 = fVar19 - (float)uVar18;
    fVar20 = fVar20 - (float)((ulonglong)uVar18 >> 0x20);
    fVar17 = fVar3 / SQRT(fVar21 * fVar21 + fVar20 * fVar20 + fVar19 * fVar19);
    bVar16 = -1 < (int)fVar17;
    bVar14 = (int)ABS(fVar17) - 0x800000U < 0x7f000000;
    bVar15 = (int)fVar17 - 1U < 0x7fffff;
    if (bVar15 || bVar14 && bVar16) {
      fVar21 = fVar21 * fVar17;
    }
    else {
      fVar21 = 0.0;
    }
    uStack_84 = (int)uStack_168 + 1;
    *(undefined4 *)(lStack_178 + uVar6 * 4) = uStack_c4;
    *puVar12 = CONCAT44((int)((uint)(bVar15 || bVar14 && bVar16) << 0x1f) >> 0x1f,
                        (int)((uint)(bVar15 || bVar14 && bVar16) << 0x1f) >> 0x1f) &
               CONCAT44(fVar20 * fVar17,fVar19 * fVar17);
    *(float *)(puVar12 + 1) = fVar21;
    *(undefined4 *)(lStack_188 + uVar6 * 4) = uStack_8c;
    *(undefined4 *)(lStack_180 + uVar6 * 4) = 0x3f800000;
  } while( true );
}

