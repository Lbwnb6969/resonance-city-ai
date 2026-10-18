// VA 0x14294f400, PDB extent 1806 bytes
// system_critters::duck::set_duck_velocities_towards_goals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::duck::set_duck_velocities_towards_goals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck.rs
   Extent: 1806 */

void pdb_14294f400(longlong *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong lStack_1b0;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  uint *puStack_118;
  uint *puStack_110;
  longlong lStack_f8;
  longlong lStack_e8;
  longlong lStack_d8;
  undefined4 uStack_cc;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_98;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  byte bStack_80;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  pdb_142948200(&puStack_118,lVar4,lVar3,(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14));
  fVar6 = _DAT_142e36f28;
  lStack_180 = lStack_e8;
  lStack_188 = lStack_d8;
  lStack_1b0 = lStack_c8;
  lStack_190 = lStack_98;
  uVar16 = (ulonglong)uStack_88;
  do {
    if ((bStack_80 & 1) == 0) {
      do {
        if (uStack_84 == (uint)uVar16) {
          if (puStack_118 == puStack_110) {
            return;
          }
          while( true ) {
            uVar16 = *(ulonglong *)
                      (*(longlong *)(lVar4 + 0x100) + 0x58 + (ulonglong)*puStack_118 * 0xa0);
            if (uVar16 != 0) break;
            puStack_118 = puStack_118 + 1;
            if (puStack_118 == puStack_110) {
              return;
            }
          }
          lVar10 = *(longlong *)(lVar4 + 0x100) + (ulonglong)*puStack_118 * 0xa0;
          uVar9 = (ulonglong)*(uint *)(lVar10 + 0x94);
          lVar12 = *(longlong *)(lVar4 + 0x1a0) + uVar9 * 0x48;
          uVar9 = *(ulonglong *)(*(longlong *)(lVar4 + 0x1a0) + 0x40 + uVar9 * 0x48);
          if ((*(ulonglong *)(lVar3 + 0x110) < uVar9) &&
             (uVar15 = *(ulonglong *)
                        (*(longlong *)(lVar12 + 0x38) + *(ulonglong *)(lVar3 + 0x110) * 8),
             uVar15 != 0)) {
            lStack_1b0 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar15 * 0x30);
            uVar15 = *(ulonglong *)(lVar3 + 0x118);
            if (uVar9 <= uVar15) goto LAB_14294f626;
LAB_14294f5f7:
            uVar15 = *(ulonglong *)(*(longlong *)(lVar12 + 0x38) + uVar15 * 8);
            if (uVar15 == 0) goto LAB_14294f626;
            lStack_c0 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar15 * 0x30);
            uVar15 = *(ulonglong *)(lVar3 + 0x120);
            if (uVar15 < uVar9) goto LAB_14294f635;
LAB_14294f66c:
            lStack_b8 = 0;
            uVar15 = *(ulonglong *)(lVar3 + 0x128);
            lVar14 = *(longlong *)(lVar12 + 0x38);
            if (uVar9 <= uVar15) goto LAB_14294f666;
LAB_14294f67e:
            uVar9 = *(ulonglong *)(lVar14 + uVar15 * 8);
            lVar12 = *(longlong *)(lVar12 + 0x18);
            if (uVar9 == 0) goto LAB_14294f69d;
            lStack_b0 = *(longlong *)(lVar12 + 0x10 + ~uVar9 * 0x30);
          }
          else {
            lStack_1b0 = 0;
            uVar15 = *(ulonglong *)(lVar3 + 0x118);
            if (uVar15 < uVar9) goto LAB_14294f5f7;
LAB_14294f626:
            lStack_c0 = 0;
            uVar15 = *(ulonglong *)(lVar3 + 0x120);
            if (uVar9 <= uVar15) goto LAB_14294f66c;
LAB_14294f635:
            uVar15 = *(ulonglong *)(*(longlong *)(lVar12 + 0x38) + uVar15 * 8);
            if (uVar15 == 0) goto LAB_14294f66c;
            lStack_b8 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar15 * 0x30);
            uVar15 = *(ulonglong *)(lVar3 + 0x128);
            lVar14 = *(longlong *)(lVar12 + 0x38);
            if (uVar15 < uVar9) goto LAB_14294f67e;
LAB_14294f666:
            lVar12 = *(longlong *)(lVar12 + 0x18);
LAB_14294f69d:
            lStack_b0 = 0;
          }
          puStack_118 = puStack_118 + 1;
          lVar13 = ~*(ulonglong *)(lVar14 + *(longlong *)(lVar3 + 0x130) * 8) * 0x30;
          lStack_180 = *(longlong *)(lVar12 + 0x10 + lVar13);
          lStack_188 = *(longlong *)(lVar12 + 0x28 + lVar13);
          lVar14 = ~*(ulonglong *)(lVar14 + *(longlong *)(lVar3 + 0x138) * 8) * 0x30;
          lStack_a8 = *(longlong *)(lVar12 + 0x10 + lVar14);
          lStack_190 = *(longlong *)(lVar12 + 0x28 + lVar14);
          lStack_f8 = *(longlong *)(lVar10 + 0x50);
          uStack_84 = 1;
          uVar9 = 0;
        }
        else {
          uVar9 = (ulonglong)uStack_84;
          uStack_84 = uStack_84 + 1;
        }
        uVar9 = (ulonglong)~*(uint *)(lStack_f8 + 8 + uVar9 * 0x10);
      } while (*(char *)(lStack_b8 + uVar9) != '\x02');
    }
    else {
      do {
        if (uStack_84 == (uint)uVar16) {
          if (puStack_118 == puStack_110) {
            return;
          }
          while( true ) {
            uVar16 = *(ulonglong *)
                      (*(longlong *)(lVar4 + 0x1a0) + 0x10 + (ulonglong)*puStack_118 * 0x48);
            if (uVar16 != 0) break;
            puStack_118 = puStack_118 + 1;
            if (puStack_118 == puStack_110) {
              return;
            }
          }
          lVar12 = *(longlong *)(lVar4 + 0x1a0) + (ulonglong)*puStack_118 * 0x48;
          uVar9 = *(ulonglong *)(lVar12 + 0x40);
          if ((*(ulonglong *)(lVar3 + 0x110) < uVar9) &&
             (uVar15 = *(ulonglong *)
                        (*(longlong *)(lVar12 + 0x38) + *(ulonglong *)(lVar3 + 0x110) * 8),
             uVar15 != 0)) {
            lStack_1b0 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar15 * 0x30);
            uVar15 = *(ulonglong *)(lVar3 + 0x118);
            if (uVar9 <= uVar15) goto LAB_14294f9bc;
LAB_14294f98d:
            uVar15 = *(ulonglong *)(*(longlong *)(lVar12 + 0x38) + uVar15 * 8);
            if (uVar15 == 0) goto LAB_14294f9bc;
            lStack_c0 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar15 * 0x30);
            uVar15 = *(ulonglong *)(lVar3 + 0x120);
            if (uVar15 < uVar9) goto LAB_14294f9cb;
LAB_14294fa02:
            lStack_b8 = 0;
            uVar15 = *(ulonglong *)(lVar3 + 0x128);
            lVar10 = *(longlong *)(lVar12 + 0x38);
            if (uVar15 < uVar9) goto LAB_14294fa18;
LAB_14294f883:
            lVar12 = *(longlong *)(lVar12 + 0x18);
LAB_14294f887:
            lStack_b0 = 0;
          }
          else {
            lStack_1b0 = 0;
            uVar15 = *(ulonglong *)(lVar3 + 0x118);
            if (uVar15 < uVar9) goto LAB_14294f98d;
LAB_14294f9bc:
            lStack_c0 = 0;
            uVar15 = *(ulonglong *)(lVar3 + 0x120);
            if (uVar9 <= uVar15) goto LAB_14294fa02;
LAB_14294f9cb:
            uVar15 = *(ulonglong *)(*(longlong *)(lVar12 + 0x38) + uVar15 * 8);
            if (uVar15 == 0) goto LAB_14294fa02;
            lStack_b8 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar15 * 0x30);
            uVar15 = *(ulonglong *)(lVar3 + 0x128);
            lVar10 = *(longlong *)(lVar12 + 0x38);
            if (uVar9 <= uVar15) goto LAB_14294f883;
LAB_14294fa18:
            uVar9 = *(ulonglong *)(lVar10 + uVar15 * 8);
            lVar12 = *(longlong *)(lVar12 + 0x18);
            if (uVar9 == 0) goto LAB_14294f887;
            lStack_b0 = *(longlong *)(lVar12 + 0x10 + ~uVar9 * 0x30);
          }
          puStack_118 = puStack_118 + 1;
          lVar14 = ~*(ulonglong *)(lVar10 + *(longlong *)(lVar3 + 0x130) * 8) * 0x30;
          lStack_180 = *(longlong *)(lVar12 + 0x10 + lVar14);
          lStack_188 = *(longlong *)(lVar12 + 0x28 + lVar14);
          lVar10 = ~*(ulonglong *)(lVar10 + *(longlong *)(lVar3 + 0x138) * 8) * 0x30;
          lStack_a8 = *(longlong *)(lVar12 + 0x10 + lVar10);
          lStack_190 = *(longlong *)(lVar12 + 0x28 + lVar10);
          uStack_84 = 0;
        }
        uVar9 = (ulonglong)uStack_84;
        uStack_84 = uStack_84 + 1;
      } while (*(char *)(lStack_b8 + uVar9) != '\x02');
    }
    lVar10 = uVar9 * 0x30 + lStack_1b0;
    lVar12 = lStack_c0 + uVar9 * 0x100;
    piVar1 = (int *)(lStack_b0 + uVar9 * 0x10);
    puVar11 = (ulonglong *)(lStack_180 + uVar9 * 0x10);
    puVar2 = (undefined4 *)(lStack_188 + uVar9 * 4);
    if ((*piVar1 == 1) && (*(char *)(lVar12 + 0xe0) == '\x01')) {
      fVar19 = (float)*(undefined8 *)(piVar1 + 1);
      fVar20 = (float)((ulonglong)*(undefined8 *)(piVar1 + 1) >> 0x20);
      fVar21 = (float)piVar1[3];
      cVar7 = pdb_14007fac0();
      if (cVar7 != '\0') goto LAB_14294f7f5;
      uVar18 = *(undefined8 *)(lVar10 + 0x10);
      fVar17 = *(float *)(lVar10 + 0x18);
    }
    else {
LAB_14294f7f5:
      uVar18 = *(undefined8 *)(lVar10 + 0x10);
      fVar19 = (float)uVar18;
      fVar20 = (float)((ulonglong)uVar18 >> 0x20);
      fVar21 = *(float *)(lVar10 + 0x18);
      fVar17 = fVar21;
    }
    fVar21 = fVar21 - fVar17;
    fVar19 = fVar19 - (float)uVar18;
    fVar20 = fVar20 - (float)((ulonglong)uVar18 >> 0x20);
    fVar17 = fVar6 / SQRT(fVar21 * fVar21 + fVar20 * fVar20 + fVar19 * fVar19);
    bVar5 = (int)fVar17 - 1U < 0x7fffff ||
            (int)ABS(fVar17) - 0x800000U < 0x7f000000 && -1 < (int)fVar17;
    if (bVar5) {
      fVar21 = fVar21 * fVar17;
    }
    else {
      fVar21 = 0.0;
    }
    *puVar2 = uStack_cc;
    uVar8 = (uint)bVar5;
    *puVar11 = CONCAT44((int)(uVar8 << 0x1f) >> 0x1f,(int)(uVar8 << 0x1f) >> 0x1f) &
               CONCAT44(fVar20 * fVar17,fVar19 * fVar17);
    *(float *)(puVar11 + 1) = fVar21;
    *(undefined4 *)(lStack_190 + uVar9 * 4) = uStack_8c;
    *(undefined4 *)(lStack_a8 + uVar9 * 4) = 0x3f800000;
    if (*(char *)(lVar12 + 0xfc) == '\x01') {
      *puVar2 = uStack_cc;
      *(undefined4 *)(puVar11 + 1) = 0;
      *puVar11 = 0;
    }
  } while( true );
}

