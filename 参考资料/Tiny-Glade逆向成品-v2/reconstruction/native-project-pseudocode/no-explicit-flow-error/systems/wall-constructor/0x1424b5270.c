// VA 0x1424b5270, PDB extent 3667 bytes
// system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::emit_wooden_stair_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::emit_wooden_stair_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
   Extent: 3667 */

longlong pdb_1424b5270(int *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      int param_5,float *param_6,char param_7,longlong *param_8)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  int *piStack_1c0;
  int *piStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  undefined8 *puStack_190;
  float fStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int *piStack_140;
  undefined8 uStack_138;
  float fStack_130;
  
  fVar31 = param_6[1];
  fVar23 = param_6[2];
  lVar4 = *(longlong *)(param_2 + 8);
  piVar12 = *(int **)(param_2 + 0x10);
  uVar13 = (longlong)piVar12 * 0x10;
  uStack_1a8 = param_3;
  if (piVar12 == (int *)0x0) {
LAB_1424b57f3:
    lVar11 = param_8[2];
    piStack_1b8 = (int *)lVar11;
    fVar23 = _DAT_142e36f28;
  }
  else {
    fVar24 = *param_6;
    fVar14 = *(float *)(param_2 + 0x18);
    iVar3 = *param_1;
    fVar26 = (float)param_1[1];
    fVar27 = (float)param_1[2];
    fVar15 = (float)param_1[5];
    fVar28 = (float)param_1[6];
    fVar25 = (float)param_1[3];
    fVar30 = (float)param_1[4];
    fVar29 = _DAT_142e36f50 * fVar31;
    piStack_1c0 = piVar12;
    piStack_140 = param_1;
    if (iVar3 == 0) {
      if (param_7 == '\0') {
        uVar9 = 0;
        do {
          pdb_1424b6de0();
          uVar9 = uVar9 + 0x10;
        } while (uVar13 != uVar9);
      }
      else {
        if (piVar12 == (int *)0x1) goto LAB_1424b57f3;
        lVar11 = 0;
        do {
          pdb_1424b6de0();
          lVar11 = lVar11 + 0x10;
        } while (uVar13 - 0x10 != lVar11);
      }
    }
    else if (iVar3 == 1) {
      piStack_1b8 = param_1 + 3;
      uVar9 = 0;
      lVar11 = 0;
      do {
        while (param_7 == '\0') {
          if (lVar11 != 0) goto LAB_1424b5545;
          uVar16 = 0;
LAB_1424b554e:
          uStack_1d8 = *(undefined8 *)piStack_1b8;
          uStack_1d0 = *(undefined8 *)(piStack_1b8 + 2);
          pdb_141c40430((longlong)&uStack_1d0 + 4);
          pdb_141c40430((longlong)&uStack_1d0 + 4);
          pdb_140df4540(&uStack_138,&uStack_1d8);
          pdb_140aaa9f0(&puStack_190,&uStack_138);
          pdb_140aaac40(&uStack_138,&puStack_190,param_5 + (int)lVar11);
          pdb_140aaa7d0(&puStack_190,&uStack_138,uVar16);
          lVar10 = param_8[2];
          if (lVar10 == *param_8) {
            pdb_142d8db00(param_8);
          }
          lVar11 = lVar11 + 1;
          lVar5 = param_8[1];
          lVar8 = lVar10 * 0x50;
          puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar8);
          *puVar1 = uStack_150;
          puVar1[1] = uStack_148;
          auVar22._8_4_ = fStack_188;
          auVar22._0_8_ = puStack_190;
          auVar22._12_4_ = uStack_184;
          puVar2 = (undefined4 *)(lVar5 + 0x30 + lVar8);
          *puVar2 = uStack_160;
          puVar2[1] = uStack_15c;
          puVar2[2] = uStack_158;
          puVar2[3] = uStack_154;
          *(undefined1 (*) [16])(lVar5 + 0x20 + lVar8) = auStack_170;
          *(undefined1 (*) [16])(lVar5 + 0x10 + lVar8) = auStack_180;
          *(undefined1 (*) [16])(lVar5 + lVar8) = auVar22;
          param_8[2] = lVar10 + 1;
          uVar9 = uVar9 + 0x10;
          if (uVar13 == uVar9) goto LAB_1424b57bd;
        }
        if (lVar11 != 0) {
LAB_1424b5545:
          uVar16 = 1;
          goto LAB_1424b554e;
        }
        lVar11 = 1;
        uVar9 = uVar9 + 0x10;
      } while (uVar13 != uVar9);
    }
    else if (iVar3 == 2) {
      uVar9 = 0;
      lVar11 = 0;
      do {
        while (param_7 == '\0') {
          if (lVar11 != 0) goto LAB_1424b53a9;
          uVar16 = 0;
LAB_1424b53ae:
          fVar20 = *(float *)(lVar4 + 0xc + uVar9);
          fVar19 = fVar15 * fVar20;
          fVar20 = fVar20 * fVar28;
          pdb_1424b6730(fVar26 + fVar19,fVar27 + fVar20,fVar19 + fVar25,fVar20 + fVar30,fVar15,
                        fVar28,*(float *)(lVar4 + 4 + uVar9) - fVar29,fVar24 + fVar14,fVar31,fVar23,
                        (int)lVar11 + param_5,uVar16,param_8);
          uVar9 = uVar9 + 0x10;
          lVar11 = lVar11 + 1;
          if (uVar13 == uVar9) goto LAB_1424b57bd;
        }
        if (lVar11 != 0) {
LAB_1424b53a9:
          uVar16 = 1;
          goto LAB_1424b53ae;
        }
        uVar9 = uVar9 + 0x10;
        lVar11 = 1;
      } while (uVar13 != uVar9);
    }
LAB_1424b57bd:
    param_1 = piStack_140;
    piVar12 = piStack_1c0;
    if ((uVar13 & 0xffffffffffffffef) == 0) goto LAB_1424b57f3;
    pdb_1424b49e0(piStack_140);
    if (uVar13 != 0x20) {
      lVar11 = 0;
      do {
        pdb_1424b49e0(param_1);
        lVar11 = lVar11 + 0x10;
      } while (uVar13 - 0x20 != lVar11);
    }
    piVar12 = piStack_1c0;
    lVar11 = param_8[2];
    pdb_1424b49e0(param_1);
    piStack_1b8 = (int *)param_8[2];
    fVar23 = _DAT_142e36f28;
  }
  _DAT_142e36f28 = fVar23;
  if (((piVar12 != (int *)0x0) && (lVar10 = lVar4 + uVar13, lVar10 != 0x10)) && (*param_1 != 0)) {
    param_8 = param_8 + 3;
    if (*param_1 == 1) {
      if (!NAN((float)param_1[1])) {
        fVar24 = (float)param_1[5];
        pub_142e32a70();
        pub_142e32a70();
        fVar14 = (float)pub_142e32a70();
        if (!NAN((float)param_1[2])) {
          fVar26 = (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 |
                          (uint)(fVar14 + fVar23) & -(uint)(fVar14 < 0.0));
          pub_142e32a70();
          pub_142e32a70();
          fVar14 = (float)pub_142e32a70();
          fVar14 = (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 |
                          (uint)(fVar14 + fVar23) & -(uint)(fVar14 < 0.0));
          fVar27 = fVar14 + fVar23;
          if ((float)(~-(uint)(fVar14 < fVar26) & (uint)fVar14 |
                     -(uint)(fVar14 < fVar26) & (uint)fVar27) - fVar26 <= 0.0) {
            return lVar11;
          }
          fVar15 = fVar14;
          if (fVar14 < fVar26) {
            fVar15 = fVar27;
          }
          if (!NAN(fVar15 * 0.0 + fVar26)) {
            lStack_1b0 = lVar11;
            fVar15 = (float)pub_142e32a70();
            auVar17._0_4_ = (uint)(fVar15 + fVar23) & -(uint)(fVar15 < 0.0);
            auVar17._4_4_ = 0;
            auVar17._8_4_ = (int)extraout_XMM0_Qb;
            auVar17._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
            auVar17 = ZEXT416(~-(uint)(fVar15 < 0.0) & (uint)fVar15) | auVar17;
            fVar15 = auVar17._0_4_;
            uStack_1d8 = CONCAT44(uStack_1d8._4_4_,fVar15);
            if ((0.0 <= fVar15) && (fVar15 <= fVar23)) {
              param_1 = param_1 + 3;
              fVar31 = fVar31 * _DAT_142e36f50;
              uVar16 = pdb_140def5e0(param_1);
              uStack_138 = CONCAT44(auVar17._0_4_,uVar16);
              pdb_140df4520(&uStack_1a0,&uStack_138);
              fVar28 = *(float *)(lVar4 + 0xc) + fVar24;
              pdb_140df4540(&puStack_190,param_1,*(float *)(lVar4 + 4) - fVar31);
              fVar15 = fStack_198;
              fVar25 = (float)uStack_1a0;
              fVar30 = (float)((ulonglong)uStack_1a0 >> 0x20);
              uStack_1d8 = CONCAT44((float)((ulonglong)puStack_190 >> 0x20) + fVar28 * fVar30,
                                    SUB84(puStack_190,0) + fVar28 * fVar25);
              uStack_1d0 = CONCAT44(uStack_1d0._4_4_,fVar28 * fStack_198 + fStack_188);
              fVar28 = *(float *)(lVar10 + -4) + fVar24;
              pdb_140df4540(&puStack_190,param_1,*(float *)(lVar10 + -0xc) - fVar31);
              fStack_130 = fVar15 * fVar28 + fStack_188;
              uStack_138 = CONCAT44((float)((ulonglong)puStack_190 >> 0x20) + fVar28 * fVar30,
                                    SUB84(puStack_190,0) + fVar28 * fVar25);
              pdb_1424b61c0(uStack_1a8,param_4,0,&uStack_1d8,&uStack_138,&uStack_1a0,param_6,param_8
                           );
              if (fVar14 < fVar26) {
                fVar14 = fVar27;
              }
              if (NAN(fVar26 * 0.0 + fVar14)) goto LAB_1424b6069;
              fVar14 = (float)pub_142e32a70();
              auVar18._0_4_ = (uint)(fVar14 + fVar23) & -(uint)(fVar14 < 0.0);
              auVar18._4_4_ = 0;
              auVar18._8_4_ = (int)extraout_XMM0_Qb_00;
              auVar18._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
              auVar18 = ZEXT416(~-(uint)(fVar14 < 0.0) & (uint)fVar14) | auVar18;
              fVar14 = auVar18._0_4_;
              uStack_1d8 = CONCAT44(uStack_1d8._4_4_,fVar14);
              if ((0.0 <= fVar14) && (fVar14 <= fVar23)) {
                uVar16 = pdb_140def5e0(param_1);
                uStack_138 = CONCAT44(auVar18._0_4_,uVar16);
                pdb_140df4520(&uStack_1a0,&uStack_138);
                fVar23 = *(float *)(lVar4 + 0xc) + fVar24;
                pdb_140df4540(&puStack_190,param_1,*(float *)(lVar4 + 4) - fVar31);
                fVar14 = (float)((ulonglong)uStack_1a0 >> 0x20);
                uStack_1d8 = CONCAT44((float)((ulonglong)puStack_190 >> 0x20) + fVar23 * fVar14,
                                      SUB84(puStack_190,0) + fVar23 * (float)uStack_1a0);
                uStack_1d0 = CONCAT44(uStack_1d0._4_4_,fVar23 * fStack_198 + fStack_188);
                fVar24 = fVar24 + *(float *)(lVar10 + -4);
                pdb_140df4540(&puStack_190,param_1,*(float *)(lVar10 + -0xc) - fVar31);
                fStack_130 = fStack_198 * fVar24 + fStack_188;
                uStack_138 = CONCAT44((float)((ulonglong)puStack_190 >> 0x20) + fVar24 * fVar14,
                                      SUB84(puStack_190,0) + fVar24 * (float)uStack_1a0);
                pdb_1424b61c0(uStack_1a8,param_4,1,&uStack_1d8,&uStack_138,&uStack_1a0,param_6,
                              param_8);
                return lStack_1b0;
              }
            }
            puStack_190 = &uStack_1d8;
            fStack_188 = 7.7206726;
            uStack_184 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&puStack_190,&UNK_143307a98);
          }
        }
      }
LAB_1424b6069:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
    }
    piStack_1c0 = param_1 + 5;
    fVar31 = fVar31 * _DAT_142e36f50;
    fVar23 = (float)*(undefined8 *)(param_1 + 1);
    fVar24 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
    fVar15 = (float)*(undefined8 *)(param_1 + 5);
    fVar28 = (float)((ulonglong)*(undefined8 *)(param_1 + 5) >> 0x20);
    fVar27 = (float)*(undefined8 *)(param_1 + 3);
    auVar21._0_4_ = fVar27 - fVar23;
    fVar14 = (float)((ulonglong)*(undefined8 *)(param_1 + 3) >> 0x20);
    auVar21._4_4_ = fVar14 - fVar24;
    auVar21._8_8_ = 0;
    fVar26 = SQRT(auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_);
    auVar6._4_4_ = fVar26;
    auVar6._0_4_ = fVar26;
    auVar6._8_8_ = 0;
    auVar22 = divps(auVar21,auVar6);
    fVar26 = param_6[9] * auVar22._0_4_;
    fVar25 = param_6[9] * auVar22._4_4_;
    fVar27 = fVar27 - fVar26;
    fVar14 = fVar14 - fVar25;
    fVar26 = fVar26 + fVar23;
    fVar25 = fVar25 + fVar24;
    puStack_190 = (undefined8 *)
                  CONCAT44(*(float *)(lVar4 + 0xc) * fVar28 + fVar25,
                           *(float *)(lVar4 + 0xc) * fVar15 + fVar26);
    pdb_140df4540(&uStack_1d8,&puStack_190,*(float *)(lVar4 + 4) - fVar31);
    puStack_190 = (undefined8 *)
                  CONCAT44(*(float *)(lVar10 + -4) * fVar28 + fVar25,
                           *(float *)(lVar10 + -4) * fVar15 + fVar26);
    pdb_140df4540(&uStack_138,&puStack_190,*(float *)(lVar10 + -0xc) - fVar31);
    pdb_140df4520(&puStack_190,piStack_1c0);
    uVar7 = uStack_1a8;
    lStack_1b0 = lVar11;
    pdb_1424b61c0(uStack_1a8,param_4,0,&uStack_1d8,&uStack_138,&puStack_190,param_6,param_8);
    puStack_190 = (undefined8 *)
                  CONCAT44(*(float *)(lVar4 + 0xc) * fVar28 + fVar14,
                           *(float *)(lVar4 + 0xc) * fVar15 + fVar27);
    pdb_140df4540(&uStack_1d8,&puStack_190,*(float *)(lVar4 + 4) - fVar31);
    puStack_190 = (undefined8 *)
                  CONCAT44(*(float *)(lVar10 + -4) * fVar28 + fVar14,
                           *(float *)(lVar10 + -4) * fVar15 + fVar27);
    pdb_140df4540(&uStack_138,&puStack_190,*(float *)(lVar10 + -0xc) - fVar31);
    pdb_140df4520(&puStack_190,piStack_1c0);
    lVar11 = lStack_1b0;
    pdb_1424b61c0(uVar7,param_4,1,&uStack_1d8,&uStack_138,&puStack_190,param_6,param_8);
  }
  return lVar11;
}

