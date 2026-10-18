// VA 0x1409f8a10, PDB extent 1393 bytes
// country_core::systems::collision::world::rapier_hit_to_raycast_world_result
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::rapier_hit_to_raycast_world_result
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 1393 */

undefined8 *
pdb_1409f8a10(undefined8 *param_1,undefined8 *param_2,int *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uStack_130;
  float fStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  float afStack_f4 [45];
  
  fVar1 = (float)param_3[2];
  fVar24 = *(float *)((longlong)param_2 + 0x14) * fVar1 + *(float *)(param_2 + 1);
  fVar22 = fVar1 * (float)*(undefined8 *)((longlong)param_2 + 0xc) + (float)*param_2;
  fVar23 = fVar1 * (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20) +
           (float)((ulonglong)*param_2 >> 0x20);
  lVar7 = param_5[3];
  uVar8 = *(ulonglong *)(lVar7 + 0x28);
  if (uVar8 == 0) {
    iVar2 = param_3[5];
    *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)(param_3 + 3);
    *(int *)((longlong)param_1 + 0x2c) = iVar2;
    uVar3 = param_5[1];
    *param_1 = *param_5;
    param_1[1] = uVar3;
    param_1[2] = param_5[2];
    param_1[3] = CONCAT44(fVar23,fVar22);
    *(float *)(param_1 + 4) = fVar24;
    *(float *)(param_1 + 6) = fVar1;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    return param_1;
  }
  if (*param_3 != 2) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 2;
    return param_1;
  }
  uVar11 = 0;
  if (uVar8 <= (uint)param_3[1]) {
    uVar11 = uVar8;
  }
  uVar11 = (uint)param_3[1] - uVar11;
  if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar11,uVar8,&UNK_1430337a8);
  }
  lVar9 = *(longlong *)(lVar7 + 0x20);
  uVar12 = (ulonglong)*(uint *)(lVar9 + uVar11 * 0xc);
  uVar13 = (ulonglong)*(uint *)(lVar9 + 4 + uVar11 * 0xc);
  uVar11 = (ulonglong)*(uint *)(lVar9 + 8 + uVar11 * 0xc);
  fVar16 = *(float *)((longlong)param_4 + 0xc);
  uVar3 = *param_4;
  fVar27 = (float)uVar3;
  fVar25 = (float)*(undefined8 *)((longlong)param_4 + 4);
  fVar26 = (float)((ulonglong)*(undefined8 *)((longlong)param_4 + 4) >> 0x20);
  fVar14 = fVar22 - (float)param_4[2];
  fVar15 = fVar23 - (float)((ulonglong)param_4[2] >> 0x20);
  fStack_128 = fVar24 - *(float *)(param_4 + 3);
  fVar17 = fVar15 * fVar26 - fVar25 * fStack_128;
  fVar18 = fStack_128 * fVar27 - fVar26 * fVar14;
  fVar19 = fVar27 * fStack_128 - fVar26 * fVar14;
  fVar20 = fVar25 * fVar14 - fVar27 * fVar15;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  fVar20 = fVar20 + fVar20;
  fStack_128 = fVar20 * fVar16 + (fVar25 * fVar17 - fVar18 * fVar27) + fStack_128;
  uStack_130 = CONCAT44(fVar18 * fVar16 + (fVar27 * fVar20 - fVar17 * fVar26) + fVar15,
                        fVar17 * fVar16 + (fVar26 * (fVar19 + fVar19) - fVar20 * fVar25) + fVar14);
  uVar8 = *(ulonglong *)(lVar7 + 0x18);
  if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar12,uVar8,&UNK_1430337c0);
  }
  lVar9 = *(longlong *)(lVar7 + 0x10);
  uStack_118 = *(undefined4 *)(lVar9 + 8 + uVar12 * 0xc);
  uStack_120 = *(undefined8 *)(lVar9 + uVar12 * 0xc);
  if (uVar13 < uVar8) {
    uStack_108 = *(undefined4 *)(lVar9 + 8 + uVar13 * 0xc);
    uStack_110 = *(undefined8 *)(lVar9 + uVar13 * 0xc);
    if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar11,uVar8,&UNK_1430337f0);
    }
    uStack_f8 = *(undefined4 *)(lVar9 + 8 + uVar11 * 0xc);
    uStack_100 = *(undefined8 *)(lVar9 + uVar11 * 0xc);
    pdb_141b3ebf0(afStack_f4,&uStack_130,&uStack_120,&uStack_110,&uStack_100);
    lVar9 = *(longlong *)(lVar7 + 0x40);
    fVar15 = (float)afStack_f4._4_8_;
    fVar14 = SUB84(afStack_f4._4_8_,4);
    if (lVar9 == 0) {
      fVar18 = (float)*(undefined8 *)(param_3 + 3);
      fVar19 = (float)((ulonglong)*(undefined8 *)(param_3 + 3) >> 0x20);
      fVar17 = (float)param_3[5];
      lVar9 = *(longlong *)(lVar7 + 0x50);
    }
    else {
      uVar8 = *(ulonglong *)(lVar7 + 0x48);
      if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,uVar8,&UNK_143033808);
      }
      if (uVar8 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar13,uVar8,&UNK_143033820);
      }
      if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar11,uVar8,&UNK_143033838);
      }
      uVar4 = *(undefined8 *)(lVar9 + uVar12 * 0xc);
      uVar5 = *(undefined8 *)(lVar9 + uVar13 * 0xc);
      uVar6 = *(undefined8 *)(lVar9 + uVar11 * 0xc);
      fVar18 = (float)uVar6 * fVar14 + (float)uVar5 * fVar15 + afStack_f4[0] * (float)uVar4;
      fVar19 = (float)((ulonglong)uVar6 >> 0x20) * fVar14 +
               (float)((ulonglong)uVar5 >> 0x20) * fVar15 +
               afStack_f4[0] * (float)((ulonglong)uVar4 >> 0x20);
      fVar17 = fVar14 * *(float *)(lVar9 + 8 + uVar11 * 0xc) +
               *(float *)(lVar9 + 8 + uVar12 * 0xc) * afStack_f4[0] +
               fVar15 * *(float *)(lVar9 + 8 + uVar13 * 0xc);
      fVar28 = fVar17 * fVar25 - fVar26 * fVar19;
      fVar29 = fVar18 * fVar26 - fVar27 * fVar17;
      fVar20 = fVar19 * fVar27 - fVar25 * fVar18;
      fVar21 = fVar17 * (float)((ulonglong)uVar3 >> 0x20) - fVar26 * fVar19;
      fVar28 = fVar28 + fVar28;
      fVar29 = fVar29 + fVar29;
      fVar20 = fVar20 + fVar20;
      fVar18 = fVar16 * fVar28 + (fVar25 * fVar20 - fVar29 * fVar26) + fVar18;
      fVar19 = fVar16 * fVar29 + (fVar26 * (fVar21 + fVar21) - fVar20 * fVar27) + fVar19;
      fVar17 = (fVar29 * fVar27 - fVar25 * fVar28) + fVar16 * fVar20 + fVar17;
      lVar9 = *(longlong *)(lVar7 + 0x50);
    }
    if (lVar9 == 0) {
      uVar10 = 0;
      fVar16 = fVar14;
    }
    else {
      uVar8 = *(ulonglong *)(lVar7 + 0x58);
      if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,uVar8,&UNK_143033850);
      }
      if (uVar8 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar13,uVar8,&UNK_143033868);
      }
      if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar11,uVar8,&UNK_143033880);
      }
      uVar3 = *(undefined8 *)(lVar9 + uVar12 * 8);
      uVar4 = *(undefined8 *)(lVar9 + uVar13 * 8);
      uVar5 = *(undefined8 *)(lVar9 + uVar11 * 8);
      fVar16 = fVar14 * (float)((ulonglong)uVar5 >> 0x20);
      fVar14 = fVar14 * (float)uVar5 + fVar15 * (float)uVar4 + afStack_f4[0] * (float)uVar3;
      uVar10 = 1;
      fVar16 = fVar16 + fVar15 * (float)((ulonglong)uVar4 >> 0x20) +
                        afStack_f4[0] * (float)((ulonglong)uVar3 >> 0x20);
    }
    *(ulonglong *)((longlong)param_1 + 0x24) = CONCAT44(fVar19,fVar18);
    *(float *)((longlong)param_1 + 0x2c) = fVar17;
    uVar3 = param_5[1];
    *param_1 = *param_5;
    param_1[1] = uVar3;
    param_1[2] = param_5[2];
    param_1[3] = CONCAT44(fVar23,fVar22);
    *(float *)(param_1 + 4) = fVar24;
    *(float *)(param_1 + 6) = fVar1;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar10;
    param_1[7] = CONCAT44(fVar16,fVar14);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar13,uVar8,&UNK_1430337d8);
}

