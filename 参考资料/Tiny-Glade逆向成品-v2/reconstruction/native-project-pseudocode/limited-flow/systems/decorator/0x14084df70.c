// VA 0x14084df70, PDB extent 2030 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_rope_bridge::pull_rope_tips_to_posts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_rope_bridge.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_rope_bridge::pull_rope_tips_to_posts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_rope_bridge.rs
   Extent: 2030 */

void pdb_14084df70(undefined8 *param_1,ulonglong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong arg0;
  byte *pbVar4;
  byte *arg0_00;
  undefined8 uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
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
  
  arg0 = param_2 * 0xc;
  if (param_2 == 0) {
    pbVar4 = (byte *)0x4;
    uVar13 = 0;
    arg0_00 = (byte *)0x4;
    uVar11 = 0;
  }
  else {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(arg0,4);
    if (pbVar4 == (byte *)0x0) {
      pdb_142dc7e2a(4,arg0);
LAB_14084e576:
      pdb_142dc7e2a(4,arg0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pub_142e32760(pbVar4,param_1);
    pdb_14007ee60();
    arg0_00 = pub_1406abab0(arg0,4);
    if (arg0_00 == (byte *)0x0) goto LAB_14084e576;
    pbVar6 = arg0_00;
    if (param_2 != 1) {
      uVar13 = (ulonglong)((uint)(param_2 - 1) & 7);
      if (6 < param_2 - 2) {
        uVar11 = param_2 - 1 & 0xfffffffffffffff8;
        do {
          pbVar6[8] = 0;
          pbVar6[9] = 0;
          pbVar6[10] = 0;
          pbVar6[0xb] = 0;
          pbVar6[0] = 0;
          pbVar6[1] = 0;
          pbVar6[2] = 0;
          pbVar6[3] = 0;
          pbVar6[4] = 0;
          pbVar6[5] = 0;
          pbVar6[6] = 0;
          pbVar6[7] = 0;
          pbVar6[0xc] = 0;
          pbVar6[0xd] = 0;
          pbVar6[0xe] = 0;
          pbVar6[0xf] = 0;
          pbVar6[0x10] = 0;
          pbVar6[0x11] = 0;
          pbVar6[0x12] = 0;
          pbVar6[0x13] = 0;
          pbVar6[0x14] = 0;
          pbVar6[0x15] = 0;
          pbVar6[0x16] = 0;
          pbVar6[0x17] = 0;
          pbVar6[0x18] = 0;
          pbVar6[0x19] = 0;
          pbVar6[0x1a] = 0;
          pbVar6[0x1b] = 0;
          pbVar6[0x1c] = 0;
          pbVar6[0x1d] = 0;
          pbVar6[0x1e] = 0;
          pbVar6[0x1f] = 0;
          pbVar6[0x20] = 0;
          pbVar6[0x21] = 0;
          pbVar6[0x22] = 0;
          pbVar6[0x23] = 0;
          pbVar6[0x24] = 0;
          pbVar6[0x25] = 0;
          pbVar6[0x26] = 0;
          pbVar6[0x27] = 0;
          pbVar6[0x28] = 0;
          pbVar6[0x29] = 0;
          pbVar6[0x2a] = 0;
          pbVar6[0x2b] = 0;
          pbVar6[0x2c] = 0;
          pbVar6[0x2d] = 0;
          pbVar6[0x2e] = 0;
          pbVar6[0x2f] = 0;
          pbVar6[0x30] = 0;
          pbVar6[0x31] = 0;
          pbVar6[0x32] = 0;
          pbVar6[0x33] = 0;
          pbVar6[0x34] = 0;
          pbVar6[0x35] = 0;
          pbVar6[0x36] = 0;
          pbVar6[0x37] = 0;
          pbVar6[0x38] = 0;
          pbVar6[0x39] = 0;
          pbVar6[0x3a] = 0;
          pbVar6[0x3b] = 0;
          pbVar6[0x3c] = 0;
          pbVar6[0x3d] = 0;
          pbVar6[0x3e] = 0;
          pbVar6[0x3f] = 0;
          pbVar6[0x40] = 0;
          pbVar6[0x41] = 0;
          pbVar6[0x42] = 0;
          pbVar6[0x43] = 0;
          pbVar6[0x44] = 0;
          pbVar6[0x45] = 0;
          pbVar6[0x46] = 0;
          pbVar6[0x47] = 0;
          pbVar6[0x48] = 0;
          pbVar6[0x49] = 0;
          pbVar6[0x4a] = 0;
          pbVar6[0x4b] = 0;
          pbVar6[0x4c] = 0;
          pbVar6[0x4d] = 0;
          pbVar6[0x4e] = 0;
          pbVar6[0x4f] = 0;
          pbVar6[0x50] = 0;
          pbVar6[0x51] = 0;
          pbVar6[0x52] = 0;
          pbVar6[0x53] = 0;
          pbVar6[0x5c] = 0;
          pbVar6[0x5d] = 0;
          pbVar6[0x5e] = 0;
          pbVar6[0x5f] = 0;
          pbVar6[0x54] = 0;
          pbVar6[0x55] = 0;
          pbVar6[0x56] = 0;
          pbVar6[0x57] = 0;
          pbVar6[0x58] = 0;
          pbVar6[0x59] = 0;
          pbVar6[0x5a] = 0;
          pbVar6[0x5b] = 0;
          pbVar6 = pbVar6 + 0x60;
          uVar11 = uVar11 - 8;
        } while (uVar11 != 0);
        if (uVar13 == 0) goto LAB_14084e0f7;
      }
      do {
        pbVar6[8] = 0;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar6[0] = 0;
        pbVar6[1] = 0;
        pbVar6[2] = 0;
        pbVar6[3] = 0;
        pbVar6[4] = 0;
        pbVar6[5] = 0;
        pbVar6[6] = 0;
        pbVar6[7] = 0;
        pbVar6 = pbVar6 + 0xc;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
LAB_14084e0f7:
    pbVar6[8] = 0;
    pbVar6[9] = 0;
    pbVar6[10] = 0;
    pbVar6[0xb] = 0;
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6[4] = 0;
    pbVar6[5] = 0;
    pbVar6[6] = 0;
    pbVar6[7] = 0;
    uVar13 = param_2;
    uVar11 = arg0;
  }
  uVar1 = *param_3;
  fVar18 = (float)param_3[3];
  uVar2 = param_3[4];
  uVar5 = *(undefined8 *)(param_3 + 5);
  fVar15 = (float)param_3[7];
  uVar7 = uVar13 - 1;
  fVar19 = (float)*(undefined8 *)(param_3 + 1);
  fVar20 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar17 = (float)((ulonglong)uVar5 >> 0x20);
  if (uVar7 == 0) {
    if (uVar1 == 2) goto LAB_14084e3ed;
    if ((uVar1 & 1) == 0) {
LAB_14084e182:
      if ((uVar2 & 1) == 0) goto LAB_14084e3ed;
      if (param_2 != 0) {
        fVar18 = *(float *)(pbVar4 + 8);
        *(ulonglong *)arg0_00 =
             CONCAT44((float)((ulonglong)*(undefined8 *)arg0_00 >> 0x20) +
                      (fVar17 - (float)((ulonglong)*(undefined8 *)pbVar4 >> 0x20)),
                      (float)*(undefined8 *)arg0_00 + ((float)uVar5 - (float)*(undefined8 *)pbVar4))
        ;
        *(float *)(arg0_00 + 8) = (fVar15 - fVar18) + *(float *)(arg0_00 + 8);
        goto LAB_14084e3f5;
      }
    }
    else if (param_2 != 0) {
      fVar16 = *(float *)(pbVar4 + 8);
      *(ulonglong *)arg0_00 =
           CONCAT44((float)((ulonglong)*(undefined8 *)arg0_00 >> 0x20) +
                    (fVar20 - (float)((ulonglong)*(undefined8 *)pbVar4 >> 0x20)),
                    (float)*(undefined8 *)arg0_00 + (fVar19 - (float)*(undefined8 *)pbVar4));
      *(float *)(arg0_00 + 8) = (fVar18 - fVar16) + *(float *)(arg0_00 + 8);
      goto LAB_14084e182;
    }
LAB_14084e5ad:
    uVar9 = 0;
LAB_14084e552:
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar9,param_2,&UNK_14300c660);
  }
  if (uVar1 == 2) {
LAB_14084e3ed:
    if (param_2 == 0) goto LAB_14084e437;
  }
  else {
    if ((uVar1 & 1) != 0) {
      if (uVar13 == 0) {
        uVar10 = 0;
        goto LAB_14084e5d4;
      }
      if (param_2 == 0) goto LAB_14084e5ad;
      fVar18 = fVar18 - *(float *)(pbVar4 + 8);
      fVar19 = fVar19 - (float)*(undefined8 *)pbVar4;
      fVar20 = fVar20 - (float)((ulonglong)*(undefined8 *)pbVar4 >> 0x20);
      *(ulonglong *)arg0_00 =
           CONCAT44((float)((ulonglong)*(undefined8 *)arg0_00 >> 0x20) + fVar20,
                    (float)*(undefined8 *)arg0_00 + fVar19);
      *(float *)(arg0_00 + 8) = *(float *)(arg0_00 + 8) + fVar18;
      fVar23 = _DAT_14300c284;
      fVar21 = _DAT_14300a334;
      fVar16 = _DAT_142e36f28;
      fVar22 = 0.0;
      uVar12 = 0xc;
      do {
        fVar24 = (float)*(undefined8 *)(pbVar4 + uVar12) -
                 (float)*(undefined8 *)(pbVar4 + (uVar12 - 0xc));
        fVar25 = (float)((ulonglong)*(undefined8 *)(pbVar4 + uVar12) >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)(pbVar4 + (uVar12 - 0xc)) >> 0x20);
        fVar22 = SQRT((*(float *)(pbVar4 + uVar12 + 8) - *(float *)(pbVar4 + (uVar12 - 4))) *
                      (*(float *)(pbVar4 + uVar12 + 8) - *(float *)(pbVar4 + (uVar12 - 4))) +
                      fVar25 * fVar25 + fVar24 * fVar24) + fVar22;
        if (fVar21 <= fVar22) break;
        uVar9 = param_2;
        if (arg0 == uVar12) goto LAB_14084e552;
        fVar24 = fVar22 / fVar23 + fVar16;
        *(ulonglong *)(arg0_00 + uVar12) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(arg0_00 + uVar12) >> 0x20) +
                      fVar24 * fVar20,(float)*(undefined8 *)(arg0_00 + uVar12) + fVar24 * fVar19);
        *(float *)(arg0_00 + uVar12 + 8) = fVar18 * fVar24 + *(float *)(arg0_00 + uVar12 + 8);
        uVar12 = uVar12 + 0xc;
      } while (arg0 != uVar12);
    }
    if ((uVar2 & 1) == 0) goto LAB_14084e3ed;
    if (uVar13 == 0) {
      uVar10 = 0xffffffffffffffff;
LAB_14084e5d4:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar10,uVar5,&UNK_14300c648);
    }
    uVar9 = uVar7;
    if (param_2 <= uVar7) goto LAB_14084e552;
    fVar16 = (float)uVar5 - (float)*(undefined8 *)(pbVar4 + uVar7 * 0xc);
    fVar17 = fVar17 - (float)((ulonglong)*(undefined8 *)(pbVar4 + uVar7 * 0xc) >> 0x20);
    fVar15 = fVar15 - *(float *)(pbVar4 + uVar7 * 0xc + 8);
    *(ulonglong *)(arg0_00 + uVar7 * 0xc) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(arg0_00 + uVar7 * 0xc) >> 0x20) + fVar17,
                  (float)*(undefined8 *)(arg0_00 + uVar7 * 0xc) + fVar16);
    *(float *)(arg0_00 + uVar7 * 0xc + 8) = *(float *)(arg0_00 + uVar7 * 0xc + 8) + fVar15;
    fVar20 = _DAT_14300c284;
    fVar19 = _DAT_14300a334;
    fVar18 = _DAT_142e36f28;
    lVar8 = 2 - param_2;
    fVar21 = 0.0;
    uVar7 = arg0;
    do {
      fVar23 = (float)*(undefined8 *)(pbVar4 + (uVar7 - 0x18)) -
               (float)*(undefined8 *)(pbVar4 + (uVar7 - 0xc));
      fVar22 = (float)((ulonglong)*(undefined8 *)(pbVar4 + (uVar7 - 0x18)) >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(pbVar4 + (uVar7 - 0xc)) >> 0x20);
      fVar21 = SQRT((*(float *)(pbVar4 + (uVar7 - 0x10)) - *(float *)(pbVar4 + (uVar7 - 4))) *
                    (*(float *)(pbVar4 + (uVar7 - 0x10)) - *(float *)(pbVar4 + (uVar7 - 4))) +
                    fVar22 * fVar22 + fVar23 * fVar23) + fVar21;
      if (fVar19 <= fVar21) goto LAB_14084e3ed;
      if (param_2 <= uVar13 - 2) {
        uVar9 = -lVar8;
        goto LAB_14084e552;
      }
      fVar23 = fVar21 / fVar20 + fVar18;
      *(ulonglong *)(arg0_00 + (uVar7 - 0x18)) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(arg0_00 + (uVar7 - 0x18)) >> 0x20) +
                    fVar23 * fVar17,
                    (float)*(undefined8 *)(arg0_00 + (uVar7 - 0x18)) + fVar23 * fVar16);
      *(float *)(arg0_00 + (uVar7 - 0x10)) = fVar15 * fVar23 + *(float *)(arg0_00 + (uVar7 - 0x10));
      uVar7 = uVar7 - 0xc;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 1);
  }
LAB_14084e3f5:
  uVar13 = 0;
  pbVar6 = arg0_00;
  do {
    if (arg0 == uVar13) break;
    puVar14 = (undefined8 *)((longlong)param_1 + uVar13);
    fVar18 = *(float *)(pbVar6 + 8);
    uVar5 = *(undefined8 *)pbVar6;
    pbVar6 = pbVar6 + 0xc;
    *puVar14 = CONCAT44((float)((ulonglong)*puVar14 >> 0x20) + (float)((ulonglong)uVar5 >> 0x20),
                        (float)*puVar14 + (float)uVar5);
    *(float *)(puVar14 + 1) = fVar18 + *(float *)(puVar14 + 1);
    uVar13 = uVar13 + 0xc;
  } while ((longlong)puVar14 + 0xc != uVar11 + (longlong)param_1);
LAB_14084e437:
  if (param_2 != 0) {
    pub_1406abac0(arg0_00,param_2 * 0xc,4);
  }
  if (uVar1 == 1) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_14300c618);
    }
    *(uint *)(param_1 + 1) = param_3[3];
    *param_1 = *(undefined8 *)(param_3 + 1);
  }
  if ((uVar2 & 1) != 0) {
    if ((param_2 == 0) ||
       (puVar14 = (undefined8 *)((longlong)param_1 + (uVar11 - 0xc)), puVar14 == (undefined8 *)0x0))
    {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300c630);
    }
    *(uint *)((longlong)param_1 + (uVar11 - 4)) = param_3[7];
    *puVar14 = *(undefined8 *)(param_3 + 5);
  }
  if (param_2 != 0) {
    uVar5 = GetProcessHeap(pbVar4,param_2 * 0xc);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(uVar5,0,pbVar4);
    return;
  }
  return;
}

