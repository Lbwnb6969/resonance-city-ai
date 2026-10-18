// VA 0x1421a3960, PDB extent 3521 bytes
// system_clutter::inter_shape_stitches::stitch_bricks::spawn_stitches
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/stitch_bricks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::inter_shape_stitches::stitch_bricks::spawn_stitches
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/stitch_bricks.rs
   Extent: 3521 */

void pdb_1421a3960(longlong *param_1,float *param_2,longlong *param_3)

{
  byte *pbVar1;
  float *pfVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  longlong lVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  longlong *plVar21;
  float *unaff_R13;
  ulonglong unaff_R14;
  char *unaff_R15;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_190;
  char *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  longlong lStack_168;
  longlong *plStack_160;
  undefined8 uStack_158;
  float fStack_150;
  undefined4 uStack_14c;
  float *pfStack_148;
  byte *pbStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  ushort uStack_102;
  longlong *plStack_100;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cStack_f1 = pdb_140e94b40();
  if (cStack_f1 == '\0') {
    uStack_1b0 = 0;
    goto LAB_1421a3b88;
  }
  unaff_R15 = 
  "system_clutter::inter_shape_stitches::stitch_bricks::spawn_stitches::fsystem_clutter::inter_shape_stitches::stitch_bricks::spawn_stitch_beams::f"
  ;
  unaff_R14 = 0x43;
  uVar18 = 0x43;
  lVar14 = pdb_1421a5c90(&UNK_14346c9d3);
  if (lVar14 == 1) {
    if (0x43 < uVar18) {
LAB_1421a4367:
      pdb_142dc8070(&UNK_14346c9d3,0x43,0);
LAB_1421a4387:
      pdb_142dc8070(&UNK_14346c9d3,0x43);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    unaff_R15 = 
    "system_clutter::inter_shape_stitches::stitch_bricks::spawn_stitches::fsystem_clutter::inter_shape_stitches::stitch_bricks::spawn_stitch_beams::f"
    ;
    uVar15 = pdb_1421a5c90(&UNK_14346c9d3);
    if ((uVar15 & 1) != 0) {
      if (0x43 < uVar18 + 2) goto LAB_1421a4387;
      unaff_R14 = 0x41 - uVar18;
      unaff_R15 = &UNK_14346c9d5 + uVar18;
    }
  }
  puVar19 = &UNK_14346c8c1;
  plVar21 = (longlong *)0x14346c881;
  do {
    bVar3 = puVar19[-1];
    uVar13 = (uint)(char)bVar3;
    if ((char)bVar3 < '\0') {
      bVar4 = puVar19[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar19[-3];
        if ((char)bVar5 < -0x40) {
          pbVar1 = puVar19 + -4;
          puVar19 = puVar19 + -4;
          uVar13 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar19 = puVar19 + -3;
          uVar13 = bVar5 & 0xf;
        }
        uVar13 = bVar4 & 0x3f | uVar13 << 6;
      }
      else {
        puVar19 = puVar19 + -2;
        uVar13 = bVar4 & 0x1f;
      }
      uVar13 = (uint)(bVar3 & 0x3f) | uVar13 << 6;
      if (uVar13 != 0x5c) goto LAB_1421a3ae4;
LAB_1421a3afd:
      puVar20 = puVar19 + -0x14346c880;
      if (puVar20 < (undefined *)0x41) {
        unaff_R13 = (float *)(0x40 - (longlong)puVar20);
        plVar21 = (longlong *)(puVar19 + 1);
        goto LAB_1421a3b20;
      }
      pdb_142dc8070(&UNK_14346c881,0x40,puVar20,0x40,&UNK_14346cac8);
      goto LAB_1421a4367;
    }
    puVar19 = puVar19 + -1;
    if (uVar13 == 0x5c) goto LAB_1421a3afd;
LAB_1421a3ae4:
    if (uVar13 == 0x2f) goto LAB_1421a3afd;
  } while (puVar19 != &UNK_14346c881);
  unaff_R13 = (float *)0x40;
LAB_1421a3b20:
  plVar16 = (longlong *)pdb_140e97000();
  if ((char)plVar16[0xd] != '\x01') goto LAB_1421a4300;
  do {
    if (*plVar16 == 0) {
      *plVar16 = -1;
      plStack_100 = plVar16;
      uStack_1a8 = pdb_140e94f10(plVar16 + 1,unaff_R15,unaff_R14,plVar21,unaff_R13,1,0);
      *plStack_100 = *plStack_100 + 1;
      uStack_1b0 = 1;
      uStack_180 = uStack_1a8;
LAB_1421a3b88:
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      param_1 = (longlong *)*param_1;
      **(float **)(param_2 + 4) = param_2[7];
      fVar12 = _DAT_142e3b1d8;
      fVar11 = _DAT_142e36f50;
      fVar10 = _DAT_142e36f28;
      plStack_160 = *(longlong **)param_2;
      plVar16 = *(longlong **)(*param_3 + 8);
      pcStack_188 = (char *)((longlong)plVar16 + *(longlong *)(*param_3 + 0x10) * 0x40);
      while (plStack_100 = plVar16, plVar21 = plStack_100, plStack_100 != (longlong *)pcStack_188) {
        if (((char)*plStack_100 == '\0') ||
           (plVar16 = (longlong *)((longlong)plStack_100 + 0x40),
           _DAT_142e3787c < *(float *)((longlong)plStack_100 + 4) ||
           _DAT_142e3787c == *(float *)((longlong)plStack_100 + 4))) {
          fVar22 = *(float *)((longlong)plStack_100 + 0x10);
          fVar30 = *(float *)((longlong)plStack_100 + 0x14);
          fVar23 = (float)*(undefined8 *)((longlong)plStack_100 + 0x20) +
                   (float)*(undefined8 *)((longlong)plStack_100 + 0x18);
          fVar24 = (float)((ulonglong)*(undefined8 *)((longlong)plStack_100 + 0x20) >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)((longlong)plStack_100 + 0x18) >> 0x20);
          fVar25 = fVar10 / SQRT(fVar24 * fVar24 + fVar23 * fVar23);
          fVar23 = fVar25 * fVar23;
          fVar25 = fVar25 * fVar24;
          uStack_190 = CONCAT44(fVar25,fVar23);
          uStack_158 = CONCAT44(fVar23,(uint)fVar25 ^ _DAT_142e37820);
          plStack_100 = (longlong *)((longlong)plStack_100 + 0x40);
          pdb_140df4520(&fStack_130,&uStack_158);
          fVar24 = fStack_128;
          fVar25 = fStack_12c;
          fVar23 = fStack_130;
          pdb_140df4520(&fStack_130);
          if (fStack_128 <= 0.0) {
            fVar23 = fVar23 + fVar10;
            if (fVar23 <= 0.0) {
              fVar23 = (fVar10 - fStack_128) - fVar23;
              fVar26 = fVar11 / SQRT(fVar23);
              fVar27 = fVar26 * fVar23;
              fVar28 = (0.0 - fVar25) * fVar26;
              fVar29 = fVar26 * (fStack_130 - fVar24);
              fVar23 = (0.0 - fStack_12c) * fVar26;
              cVar6 = *(char *)((longlong)plVar21 + 0x3e);
            }
            else {
              fVar23 = fVar23 + (fVar10 - fStack_128);
              fVar26 = fVar11 / SQRT(fVar23);
              fVar27 = fVar26 * (0.0 - fVar25);
              fVar28 = fVar23 * fVar26;
              fVar29 = fVar26 * (fStack_12c + 0.0);
              fVar23 = fVar26 * (fVar24 + fStack_130);
              cVar6 = *(char *)((longlong)plVar21 + 0x3e);
            }
          }
          else {
            fVar23 = fVar10 - fVar23;
            if (fVar23 <= 0.0) {
              fVar23 = (fStack_128 + fVar10) - fVar23;
              fVar26 = fVar11 / SQRT(fVar23);
              fVar27 = (fStack_130 - fVar24) * fVar26;
              fVar28 = (fStack_12c + 0.0) * fVar26;
              fVar29 = fVar23 * fVar26;
              fVar23 = (float)((uint)fVar25 ^ _DAT_142e37820) * fVar26;
              cVar6 = *(char *)((longlong)plVar21 + 0x3e);
            }
            else {
              fVar23 = fVar23 + fStack_128 + fVar10;
              fVar26 = fVar11 / SQRT(fVar23);
              fVar27 = (0.0 - fStack_12c) * fVar26;
              fVar28 = (fVar24 + fStack_130) * fVar26;
              fVar29 = (float)((uint)fVar25 ^ _DAT_142e37820) * fVar26;
              fVar23 = fVar23 * fVar26;
              cVar6 = *(char *)((longlong)plVar21 + 0x3e);
            }
          }
          if (cVar6 == '\0') {
            fVar30 = fVar30 - fVar22;
            plVar16 = plStack_100;
            if (fVar12 < fVar30) {
              fVar22 = (float)pub_142e329c0(fVar30 + fVar30);
              uVar18 = 0;
              if (0.0 <= fVar22) {
                uVar18 = (longlong)(fVar22 - _DAT_142e36f2c) & (longlong)fVar22 >> 0x3f |
                         (longlong)fVar22;
              }
              if (_DAT_142e36f30 < fVar22) {
                uVar18 = 0xffffffffffffffff;
              }
              if (uVar18 < 4) {
                uVar18 = 3;
              }
              if (999 < uVar18) {
                uVar18 = 1000;
              }
              lVar14 = pdb_140315970((char *)((longlong)plVar21 + 0x28));
              lStack_168 = pdb_140315970((char *)((longlong)plVar21 + 0x30));
              lStack_168 = lStack_168 + lVar14;
              fVar22 = fVar30;
              if (fVar30 <= _DAT_142e37990) {
                fVar22 = _DAT_142e37990;
              }
              param_3 = (longlong *)(uVar18 - 1);
              pdb_140de8290(&uStack_158,param_3,_DAT_142e3787c / fVar22,&lStack_168,&UNK_14346c8c8);
              unaff_R13 = pfStack_148;
              pbStack_138 = (byte *)CONCAT44(uStack_14c,fStack_150);
              if ((float *)0x1 < pfStack_148) {
                unaff_R15 = (char *)((longlong)plVar21 + 8);
                fVar25 = *(float *)((longlong)plVar21 + 0x10) +
                         fVar30 * (float)*(undefined8 *)pbStack_138;
                fVar22 = *(float *)((longlong)plVar21 + 0x10) +
                         fVar30 * (float)((ulonglong)*(undefined8 *)pbStack_138 >> 0x20);
                fVar24 = (fVar22 - fVar25) + _DAT_142e42360;
                pdb_140df4540(&uStack_174,unaff_R15,(fVar25 + fVar22) * fVar11);
                fVar25 = (float)pdb_140e02880(&lStack_168);
                fVar25 = (fVar25 * fVar11 - (fVar10 - fVar25) * fVar11) * fVar12 + _DAT_142e3798c;
                uStack_110 = uStack_16c;
                uStack_118 = uStack_174;
                fStack_128 = *(float *)((longlong)plVar21 + 0x28);
                fStack_124 = *(float *)((longlong)plVar21 + 0x2c);
                uStack_120 = *(undefined4 *)((longlong)plVar21 + 0x30);
                uStack_11c = *(undefined4 *)((longlong)plVar21 + 0x34);
                uVar7 = *(ushort *)((longlong)plVar21 + 0x3c);
                param_2 = (float *)(ulonglong)uVar7;
                lVar14 = param_1[2];
                if (lVar14 == *param_1) {
                  pdb_142d7eb40(param_1);
                }
                lVar8 = param_1[1];
                lVar17 = lVar14 * 0x50;
                pfVar2 = (float *)(lVar8 + lVar17);
                *pfVar2 = fVar27;
                pfVar2[1] = fVar28;
                pfVar2[2] = fVar29;
                pfVar2[3] = fVar23;
                *(undefined8 *)(lVar8 + 0x10 + lVar17) = uStack_118;
                *(undefined4 *)(lVar8 + 0x18 + lVar17) = uStack_110;
                *(float *)(lVar8 + 0x1c + lVar17) = fVar25;
                *(float *)(lVar8 + 0x20 + lVar17) = fVar24;
                *(undefined4 *)(lVar8 + 0x24 + lVar17) = 0x3e99999a;
                pfVar2 = (float *)(lVar8 + 0x28 + lVar17);
                *pfVar2 = fStack_130;
                pfVar2[1] = fStack_12c;
                pfVar2[2] = fStack_128;
                pfVar2[3] = fStack_124;
                *(ulonglong *)(lVar8 + 0x38 + lVar17) = CONCAT44(uStack_11c,uStack_120);
                *(ushort *)(lVar8 + 0x40 + lVar17) = uVar7;
                param_3 = (longlong *)(lVar14 + 1);
                param_1[2] = (longlong)param_3;
                if (unaff_R13 != (float *)0x2) {
                  unaff_R13 = (float *)(pbStack_138 + (longlong)unaff_R13 * 4);
                  param_2 = (float *)(pbStack_138 + 8);
                  do {
                    fVar25 = *param_2 * fVar30 + *(float *)((longlong)plVar21 + 0x10);
                    fVar24 = (fVar25 - fVar22) + _DAT_142e42360;
                    pdb_140df4540(&uStack_174,unaff_R15,(fVar22 + fVar25) * fVar11);
                    fVar22 = (float)pdb_140e02880(&lStack_168);
                    fVar22 = (fVar22 * fVar11 - (fVar10 - fVar22) * fVar11) * fVar12 +
                             _DAT_142e3798c;
                    uStack_110 = uStack_16c;
                    uStack_118 = uStack_174;
                    fStack_128 = *(float *)((longlong)plVar21 + 0x28);
                    fStack_124 = *(float *)((longlong)plVar21 + 0x2c);
                    uStack_120 = *(undefined4 *)((longlong)plVar21 + 0x30);
                    uStack_11c = *(undefined4 *)((longlong)plVar21 + 0x34);
                    uVar7 = *(ushort *)((longlong)plVar21 + 0x3c);
                    param_3 = (longlong *)(ulonglong)uVar7;
                    lVar14 = param_1[2];
                    if (lVar14 == *param_1) {
                      pdb_142d7eb40(param_1);
                    }
                    param_2 = param_2 + 1;
                    lVar8 = param_1[1];
                    lVar17 = lVar14 * 0x50;
                    pfVar2 = (float *)(lVar8 + lVar17);
                    *pfVar2 = fVar27;
                    pfVar2[1] = fVar28;
                    pfVar2[2] = fVar29;
                    pfVar2[3] = fVar23;
                    *(undefined8 *)(lVar8 + 0x10 + lVar17) = uStack_118;
                    *(undefined4 *)(lVar8 + 0x18 + lVar17) = uStack_110;
                    *(float *)(lVar8 + 0x1c + lVar17) = fVar22;
                    *(float *)(lVar8 + 0x20 + lVar17) = fVar24;
                    *(undefined4 *)(lVar8 + 0x24 + lVar17) = 0x3e99999a;
                    pfVar2 = (float *)(lVar8 + 0x28 + lVar17);
                    *pfVar2 = fStack_130;
                    pfVar2[1] = fStack_12c;
                    pfVar2[2] = fStack_128;
                    pfVar2[3] = fStack_124;
                    *(ulonglong *)(lVar8 + 0x38 + lVar17) = CONCAT44(uStack_11c,uStack_120);
                    *(ushort *)(lVar8 + 0x40 + lVar17) = uVar7;
                    unaff_R14 = lVar14 + 1;
                    param_1[2] = unaff_R14;
                    fVar22 = fVar25;
                  } while (param_2 != unaff_R13);
                }
              }
              plVar16 = plStack_100;
              if (uStack_158 != 0) {
                pub_1406abac0(pbStack_138,uStack_158 << 2,4);
                plVar16 = plStack_100;
              }
            }
          }
          else {
            uStack_1c8 = *(undefined4 *)((longlong)plVar21 + 0x28);
            uStack_1c4 = *(undefined4 *)((longlong)plVar21 + 0x2c);
            uStack_1c0 = *(undefined4 *)((longlong)plVar21 + 0x30);
            uStack_1bc = *(undefined4 *)((longlong)plVar21 + 0x34);
            uStack_102 = *(ushort *)((longlong)plVar21 + 0x3c);
            if ((uStack_102 & 0xfe) == 0) {
              uVar18 = 1;
              if (uStack_102 < 0x200) goto LAB_1421a4335;
            }
            else if (uStack_102 < 0x200) {
              uVar18 = 0;
            }
            else {
              uVar18 = (ulonglong)
                       (*(ulonglong *)((longlong)plVar21 + 0x30) <
                       *(ulonglong *)((longlong)plVar21 + 0x28));
            }
            pdb_140df4540(&fStack_130,(char *)((longlong)plVar21 + 8),fVar22);
            fStack_150 = fStack_128;
            uStack_158 = CONCAT44(fStack_12c,fStack_130);
            param_2 = *(float **)(&uStack_1c8 + uVar18 * 2);
            bVar3 = *(byte *)((longlong)&uStack_102 + uVar18);
            unaff_R14 = (ulonglong)bVar3;
            lVar14 = plStack_160[2];
            if (lVar14 == *plStack_160) {
              pdb_142d8d860(plStack_160);
            }
            lVar8 = plStack_160[1];
            lVar17 = lVar14 * 0x40;
            pfVar2 = (float *)(lVar8 + lVar17);
            *pfVar2 = fVar27;
            pfVar2[1] = fVar28;
            pfVar2[2] = fVar29;
            pfVar2[3] = fVar23;
            *(longlong *)(lVar8 + 0x10 + lVar17) = uStack_158;
            *(float *)(lVar8 + 0x18 + lVar17) = fStack_150;
            *(undefined4 *)(lVar8 + 0x1c + lVar17) = 0x3e800000;
            *(float *)(lVar8 + 0x20 + lVar17) = fVar30 - fVar22;
            *(undefined4 *)(lVar8 + 0x24 + lVar17) = 0x3e99999a;
            *(float **)(lVar8 + 0x30 + lVar17) = param_2;
            *(byte *)(lVar8 + 0x38 + lVar17) = bVar3;
            param_3 = (longlong *)(lVar14 + 1);
            plStack_160[2] = (longlong)param_3;
            plVar16 = plStack_100;
          }
        }
      }
      if (cStack_f1 == '\0') {
        return;
      }
      plVar16 = (longlong *)pdb_140e97000();
      if (((char)plVar16[0xd] != '\x01') &&
         (plVar16 = (longlong *)pdb_142e16b00(plVar16,0), plVar16 == (longlong *)0x0)) break;
      if (*plVar16 == 0) {
        *plVar16 = -1;
        plStack_100 = plVar16;
        pdb_140e95370(plVar16 + 1,uStack_180);
        *plStack_100 = *plStack_100 + 1;
        return;
      }
    }
    plVar16 = (longlong *)pdb_142dc8090(&UNK_14328b468);
LAB_1421a4300:
    plVar16 = (longlong *)pdb_142e16b00(plVar16,0);
  } while (plVar16 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14328b3f8);
LAB_1421a4335:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14346c8e0);
}

