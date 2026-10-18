// VA 0x14226f4e0, PDB extent 1802 bytes
// system_critters::butterfly::set_butterfly_velocities_towards_goals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/butterfly.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::butterfly::set_butterfly_velocities_towards_goals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/butterfly.rs
   Extent: 1802 */

void pdb_14226f4e0(longlong *param_1)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_168;
  uint *puStack_140;
  uint *puStack_138;
  longlong lStack_120;
  longlong lStack_110;
  longlong lStack_100;
  undefined4 uStack_f4;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_c8;
  undefined4 uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  byte bStack_b0;
  
  lVar10 = *param_1;
  lVar5 = param_1[1];
  pdb_142948180(&puStack_140,lVar5,lVar10,(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14))
  ;
  uVar3 = _DAT_142e36f50;
  fVar2 = _DAT_142e36f28;
  lStack_168 = lStack_120;
  lStack_180 = lStack_110;
  lStack_188 = lStack_100;
  lStack_198 = lStack_f0;
  lStack_1a0 = lStack_e8;
  lStack_1a8 = lStack_e0;
  if ((bStack_b0 & 1) == 0) {
    if (uStack_b4 != uStack_b8) {
      uVar4 = (ulonglong)uStack_b4;
LAB_14226f99b:
      uVar19 = ~*(uint *)(lStack_168 + 8 + uVar4 * 0x10);
      goto LAB_14226f9ab;
    }
    if (puStack_140 != puStack_138) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puStack_140 * 0xa0) != 0
           ) {
          lVar9 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puStack_140 * 0xa0;
          uVar4 = (ulonglong)*(uint *)(lVar9 + 0x94);
          lVar6 = *(longlong *)(lVar5 + 0x1a0) + uVar4 * 0x48;
          uVar4 = *(ulonglong *)(*(longlong *)(lVar5 + 0x1a0) + 0x40 + uVar4 * 0x48);
          if ((*(ulonglong *)(lVar10 + 0x110) < uVar4) &&
             (uVar8 = *(ulonglong *)
                       (*(longlong *)(lVar6 + 0x38) + *(ulonglong *)(lVar10 + 0x110) * 8),
             uVar8 != 0)) {
            lStack_198 = *(longlong *)(*(longlong *)(lVar6 + 0x18) + 0x10 + ~uVar8 * 0x30);
            uVar8 = *(ulonglong *)(lVar10 + 0x118);
            if (uVar4 <= uVar8) goto LAB_14226f89a;
LAB_14226f81e:
            uVar8 = *(ulonglong *)(*(longlong *)(lVar6 + 0x38) + uVar8 * 8);
            if (uVar8 == 0) goto LAB_14226f89a;
            lStack_1a0 = *(longlong *)(*(longlong *)(lVar6 + 0x18) + 0x10 + ~uVar8 * 0x30);
            uVar8 = *(ulonglong *)(lVar10 + 0x120);
            lVar5 = *(longlong *)(lVar6 + 0x38);
            if (uVar4 <= uVar8) goto LAB_14226f854;
LAB_14226f8b3:
            uVar4 = *(ulonglong *)(lVar5 + uVar8 * 8);
            lVar6 = *(longlong *)(lVar6 + 0x18);
            if (uVar4 == 0) goto LAB_14226f936;
            lStack_1a8 = *(longlong *)(lVar6 + 0x10 + ~uVar4 * 0x30);
          }
          else {
            lStack_198 = 0;
            uVar8 = *(ulonglong *)(lVar10 + 0x118);
            if (uVar8 < uVar4) goto LAB_14226f81e;
LAB_14226f89a:
            lStack_1a0 = 0;
            uVar8 = *(ulonglong *)(lVar10 + 0x120);
            lVar5 = *(longlong *)(lVar6 + 0x38);
            if (uVar8 < uVar4) goto LAB_14226f8b3;
LAB_14226f854:
            lVar6 = *(longlong *)(lVar6 + 0x18);
LAB_14226f936:
            lStack_1a8 = 0;
          }
          lVar11 = ~*(ulonglong *)(lVar5 + *(longlong *)(lVar10 + 0x128) * 8) * 0x30;
          lStack_180 = *(longlong *)(lVar6 + 0x10 + lVar11);
          lStack_188 = *(longlong *)(lVar6 + 0x28 + lVar11);
          lVar10 = ~*(ulonglong *)(lVar5 + *(longlong *)(lVar10 + 0x130) * 8) * 0x30;
          lStack_d8 = *(longlong *)(lVar6 + 0x10 + lVar10);
          lStack_c8 = *(longlong *)(lVar6 + 0x28 + lVar10);
          lStack_168 = *(longlong *)(lVar9 + 0x50);
          uStack_b4 = 0;
          uVar4 = 0;
          goto LAB_14226f99b;
        }
        puStack_140 = puStack_140 + 1;
      } while (puStack_140 != puStack_138);
    }
  }
  else {
    uVar19 = uStack_b4;
    if (uStack_b4 != uStack_b8) {
LAB_14226f9ab:
      uVar4 = (ulonglong)uVar19;
      puVar1 = (uint *)(lStack_1a0 + uVar4 * 0x18);
      lStack_198 = uVar4 * 0x30 + lStack_198;
      puVar12 = (uint *)(lStack_1a8 + uVar4 * 0x10);
      puVar7 = (ulonglong *)(uVar4 * 0x10 + lStack_180);
      uVar19 = *puVar12;
      fVar15 = *(float *)(lStack_198 + 0x18);
      if ((uVar19 & 1) != 0) {
        fVar15 = (float)puVar12[3];
      }
      fVar15 = fVar15 - *(float *)(lStack_198 + 0x18);
      uVar17 = (int)(uVar19 << 0x1f) >> 0x1f;
      uVar19 = (int)(uVar19 << 0x1f) >> 0x1f;
      fVar18 = (float)(~uVar17 & (uint)*(float *)(lStack_198 + 0x10) | puVar12[1] & uVar17) -
               *(float *)(lStack_198 + 0x10);
      fVar20 = (float)(~uVar19 & (uint)*(float *)(lStack_198 + 0x14) | puVar12[2] & uVar19) -
               *(float *)(lStack_198 + 0x14);
      fVar16 = _DAT_142e36f28 / SQRT(fVar20 * fVar20 + fVar18 * fVar18 + fVar15 * fVar15);
      bVar13 = (int)ABS(fVar16) - 0x800000U < 0x7f000000;
      bVar14 = (int)fVar16 - 1U < 0x7fffff;
      fVar18 = fVar16 * fVar18 * _DAT_1434c87f0;
      fVar20 = fVar16 * fVar20 * _UNK_1434c87f4;
      fVar15 = fVar16 * fVar15 * _DAT_1434c87e0;
      if (!bVar14 && (!bVar13 || -1 >= (int)fVar16)) {
        fVar15 = 0.0;
      }
      uVar19 = (uint)(bVar14 || bVar13 && -1 < (int)fVar16);
      *(undefined4 *)(lStack_188 + uVar4 * 4) = uStack_f4;
      *puVar7 = CONCAT44((int)(uVar19 << 0x1f) >> 0x1f,(int)(uVar19 << 0x1f) >> 0x1f) &
                CONCAT44(fVar20,fVar18);
      *(float *)(puVar7 + 1) = fVar15;
      fVar15 = (float)puVar1[4];
      *(undefined4 *)(lStack_c8 + uVar4 * 4) = uStack_bc;
      *(float *)(lStack_d8 + uVar4 * 4) = fVar15 + fVar2;
                    /* WARNING: Could not recover jumptable at 0x00014226fb22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1434c8aa0 + *(int *)(&UNK_1434c8aa0 + (ulonglong)*puVar1 * 4)))
                (puStack_138,&UNK_1434c8aa0 + *(int *)(&UNK_1434c8aa0 + (ulonglong)*puVar1 * 4),
                 uStack_b4 + 1,uVar3);
      return;
    }
    if (puStack_140 != puStack_138) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puStack_140 * 0x48) != 0
           ) {
          lVar5 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puStack_140 * 0x48;
          uVar4 = *(ulonglong *)(lVar5 + 0x40);
          if ((*(ulonglong *)(lVar10 + 0x110) < uVar4) &&
             (uVar8 = *(ulonglong *)
                       (*(longlong *)(lVar5 + 0x38) + *(ulonglong *)(lVar10 + 0x110) * 8),
             uVar8 != 0)) {
            lStack_198 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x10 + ~uVar8 * 0x30);
            uVar8 = *(ulonglong *)(lVar10 + 0x118);
            if (uVar4 <= uVar8) goto LAB_14226f85d;
LAB_14226f7c6:
            uVar8 = *(ulonglong *)(*(longlong *)(lVar5 + 0x38) + uVar8 * 8);
            if (uVar8 == 0) goto LAB_14226f85d;
            lStack_1a0 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x10 + ~uVar8 * 0x30);
            uVar8 = *(ulonglong *)(lVar10 + 0x120);
            lVar6 = *(longlong *)(lVar5 + 0x38);
            if (uVar4 <= uVar8) goto LAB_14226f800;
LAB_14226f876:
            uVar4 = *(ulonglong *)(lVar6 + uVar8 * 8);
            lVar5 = *(longlong *)(lVar5 + 0x18);
            if (uVar4 == 0) goto LAB_14226f8d7;
            lStack_1a8 = *(longlong *)(lVar5 + 0x10 + ~uVar4 * 0x30);
          }
          else {
            lStack_198 = 0;
            uVar8 = *(ulonglong *)(lVar10 + 0x118);
            if (uVar8 < uVar4) goto LAB_14226f7c6;
LAB_14226f85d:
            lStack_1a0 = 0;
            uVar8 = *(ulonglong *)(lVar10 + 0x120);
            lVar6 = *(longlong *)(lVar5 + 0x38);
            if (uVar8 < uVar4) goto LAB_14226f876;
LAB_14226f800:
            lVar5 = *(longlong *)(lVar5 + 0x18);
LAB_14226f8d7:
            lStack_1a8 = 0;
          }
          lVar9 = ~*(ulonglong *)(lVar6 + *(longlong *)(lVar10 + 0x128) * 8) * 0x30;
          lStack_180 = *(longlong *)(lVar5 + 0x10 + lVar9);
          lStack_188 = *(longlong *)(lVar5 + 0x28 + lVar9);
          lVar10 = ~*(ulonglong *)(lVar6 + *(longlong *)(lVar10 + 0x130) * 8) * 0x30;
          lStack_d8 = *(longlong *)(lVar5 + 0x10 + lVar10);
          lStack_c8 = *(longlong *)(lVar5 + 0x28 + lVar10);
          uStack_b4 = 0;
          uVar19 = uStack_b4;
          goto LAB_14226f9ab;
        }
        puStack_140 = puStack_140 + 1;
      } while (puStack_140 != puStack_138);
    }
  }
  return;
}

