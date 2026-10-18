// VA 0x140b07580, PDB extent 2729 bytes
// country_core::render::nani::trimesh::TrimeshBuilder::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/trimesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::trimesh::TrimeshBuilder::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/trimesh.rs
   Extent: 2729 */

longlong *
pdb_140b07580(longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte *pbVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  char *pcVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong lStack_148;
  float fStack_140;
  float fStack_13c;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  longlong *plStack_c8;
  longlong lStack_c0;
  byte *pbStack_b8;
  longlong lStack_b0;
  ulonglong uStack_a8;
  char *pcStack_a0;
  ulonglong uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_d0 = param_3;
  pcStack_a0 = param_2;
  if (*param_2 == '\0') {
    pdb_142dc8110(&UNK_143053ee0,0x20,&UNK_143053f30);
    goto LAB_140b07e84;
  }
  uStack_88 = *(ulonglong *)(param_2 + 8);
  lVar17 = *(longlong *)(param_2 + 0x20);
  uStack_e0 = param_4;
  plStack_c8 = param_1;
  if (lVar17 == 0) {
    pbVar9 = (byte *)0x8;
    lVar11 = 0;
  }
  else {
    pdb_14007ee60();
    pbVar9 = pub_1406abab0(lVar17 << 5,8);
    if (pbVar9 == (byte *)0x0) {
      pdb_142dc7e2a(8,lVar17 << 5);
      goto LAB_140b07e84;
    }
    lVar11 = *(longlong *)(param_2 + 0x20);
  }
  fVar8 = _UNK_143013274;
  fVar7 = _DAT_143013270;
  fVar6 = _DAT_143009de0;
  fVar5 = _DAT_142e36f28;
  lStack_b0 = 0;
  lVar24 = *(longlong *)(param_2 + 0x18);
  pbStack_90 = (byte *)(uStack_88 * 3);
  lVar21 = lVar24;
  uVar18 = 0;
  lStack_c0 = lVar17;
  pbStack_b8 = pbVar9;
  while (lVar17 = lVar21, lVar17 != lVar11 * 0x30 + lVar24) {
    lVar21 = uVar18 + *(longlong *)(lVar17 + 0x10) * 4;
    uVar15 = (ulonglong)((uint)lVar21 & 0xf);
    lVar14 = 0x10 - uVar15;
    if (uVar15 == 0) {
      lVar14 = 0;
    }
    uVar15 = lVar14 + lVar21;
    uStack_98 = uVar15;
    if (*(ulonglong *)(param_2 + 0x38) <= uStack_88) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uStack_88,*(ulonglong *)(param_2 + 0x38),&UNK_143053fc0);
    }
    uVar23 = *(ulonglong *)(*(longlong *)(param_2 + 0x30) + (longlong)pbStack_90 * 8);
    if ((uVar23 & 3) != 0) {
      uVar16 = 0;
LAB_140b07e53:
      pdb_142ded1a0(&UNK_14305491b,10,uVar16);
      goto LAB_140b07e84;
    }
    uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x30) + 8 + (longlong)pbStack_90 * 8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12;
    uVar10 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
    if (0x1555555555555555 < (uVar10 >> 2 | uVar10 << 0x3e)) {
      uVar16 = CONCAT71((int7)(uVar23 >> 8),1);
      goto LAB_140b07e53;
    }
    lVar21 = *(longlong *)(lVar17 + 0x28);
    if (lVar21 == 0) {
      fStack_13c = 0.0;
      fStack_140 = fVar6;
      fVar26 = fVar7;
      fVar28 = fVar8;
    }
    else {
      uVar12 = uVar12 / 0xc;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar26 = 0.0;
      lVar14 = 0;
      do {
        uVar10 = (ulonglong)*(uint *)(*(longlong *)(lVar17 + 0x20) + lVar14);
        if (uVar12 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar10,uVar12,&UNK_143054008);
        }
        uVar16 = *(undefined8 *)(uVar23 + uVar10 * 0xc);
        fVar28 = fVar28 + (float)uVar16;
        fVar29 = fVar29 + (float)((ulonglong)uVar16 >> 0x20);
        fVar26 = fVar26 + *(float *)(uVar23 + 8 + uVar10 * 0xc);
        lVar14 = lVar14 + 4;
      } while (lVar21 * 4 - lVar14 != 0);
      fVar25 = fVar5 / (float)lVar21;
      fVar27 = 0.0;
      lVar14 = 0;
      do {
        uVar10 = (ulonglong)*(uint *)(*(longlong *)(lVar17 + 0x20) + lVar14);
        if (uVar12 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar10,uVar12,&UNK_143053ff0);
        }
        fVar30 = fVar25 * fVar26 - *(float *)(uVar23 + 8 + uVar10 * 0xc);
        uVar16 = *(undefined8 *)(uVar23 + uVar10 * 0xc);
        fVar31 = fVar25 * fVar28 - (float)uVar16;
        fVar32 = fVar25 * fVar29 - (float)((ulonglong)uVar16 >> 0x20);
        fVar31 = fVar30 * fVar30 + fVar32 * fVar32 + fVar31 * fVar31;
        fVar30 = fVar31;
        if (fVar31 <= fVar27) {
          fVar30 = fVar27;
        }
        fVar27 = (float)(~-(uint)NAN(fVar27) & (uint)fVar30 | -(uint)NAN(fVar27) & (uint)fVar31);
        lVar14 = lVar14 + 4;
      } while (lVar21 * 4 - lVar14 != 0);
      fStack_13c = SQRT(fVar27);
      fStack_140 = fVar25 * fVar26;
      fVar26 = fVar25 * fVar28;
      fVar28 = fVar25 * fVar29;
    }
    lStack_148 = CONCAT44(fVar28,fVar26);
    pdb_140fb49c0(&uStack_158,&lStack_148);
    lVar21 = lStack_b0;
    iVar1 = *(int *)(lVar17 + 0x10);
    iVar2 = *(int *)(lVar17 + 0x28);
    if (lStack_b0 == lStack_c0) {
      pdb_142d7e6e0(&lStack_c0);
    }
    lVar14 = lVar21 * 0x20;
    *(ulonglong *)(pbStack_b8 + lVar14) = uVar18;
    *(int *)(pbStack_b8 + lVar14 + 8) = iVar2 << 0x10 | iVar1 * 3;
    *(uint *)(pbStack_b8 + lVar14 + 0xc) = (int)uVar15 - (uint)uVar18;
    pbVar9 = pbStack_b8 + lVar14 + 0x10;
    *(undefined4 *)pbVar9 = uStack_158;
    *(undefined4 *)(pbVar9 + 4) = uStack_154;
    *(undefined4 *)(pbVar9 + 8) = uStack_150;
    *(undefined4 *)(pbVar9 + 0xc) = uStack_14c;
    lStack_b0 = lVar21 + 1;
    lVar21 = lVar17 + 0x30;
    uVar18 = uVar15;
    param_2 = pcStack_a0;
    if (*(longlong *)(pcStack_a0 + 0x38) != 0) {
      lVar14 = 0;
      do {
        uVar18 = (ulonglong)*(byte *)(*(longlong *)(pcStack_a0 + 0x30) + 0x12 + lVar14);
        if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8510(&UNK_143053d48);
        }
        uVar23 = uVar15;
        if (uVar15 >> 0x20 == 0) {
          uVar23 = uVar15 & 0xffffffff;
        }
        lVar22 = uVar18 - uVar23 % uVar18;
        if (uVar23 % uVar18 == 0) {
          lVar22 = 0;
        }
        lStack_e8 = lVar22 + uVar15;
        if (lVar22 != 0) {
          pdb_142dc7fb4(0,&uStack_98,&lStack_e8,0);
          goto LAB_140b07e84;
        }
        uVar15 = uVar15 + (ulonglong)*(ushort *)(*(longlong *)(pcStack_a0 + 0x30) + 0x10 + lVar14) *
                          *(longlong *)(lVar17 + 0x28);
        lVar14 = lVar14 + 0x18;
        uVar18 = uVar15;
        uStack_98 = uVar15;
      } while (*(longlong *)(pcStack_a0 + 0x38) * 0x18 != lVar14);
    }
  }
  uVar15 = (ulonglong)((uint)uVar18 & 0xf);
  lVar17 = 0x10 - uVar15;
  if (uVar15 == 0) {
    lVar17 = 0;
  }
  uVar18 = lVar17 + uVar18;
  if ((longlong)uVar18 < 0) {
    uVar16 = 0;
LAB_140b07920:
    pdb_142dc7e2a(uVar16,uVar18);
LAB_140b07e84:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar18 == 0) {
    pbStack_90 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar16 = 1;
    pbStack_90 = pub_1406abae0(uVar18,1);
    if (pbStack_90 == (byte *)0x0) goto LAB_140b07920;
  }
  uStack_a8 = 0;
  uStack_88 = uVar18;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    uVar18 = 0;
  }
  else {
    lVar17 = *(longlong *)(param_2 + 0x18);
    lStack_d8 = *(longlong *)(param_2 + 0x20) * 0x30 + lVar17;
    uVar18 = 0;
    do {
      uVar15 = *(longlong *)(lVar17 + 0x10) * 4;
      uVar23 = uVar15 + uVar18;
      if ((CARRY8(uVar15,uVar18)) || (uStack_88 < uVar23)) {
        pdb_142dc8420(uVar18,uVar23,uStack_88,&UNK_143053f60);
        goto LAB_140b07e84;
      }
      pub_142e32760(pbStack_90 + uVar18);
      uVar18 = (ulonglong)((uint)uVar23 & 0xf);
      lVar11 = 0x10 - uVar18;
      if (uVar18 == 0) {
        lVar11 = 0;
      }
      uVar18 = lVar11 + uVar23;
      uStack_a8 = uVar18;
      if (*(longlong *)(param_2 + 0x38) != 0) {
        lVar24 = *(longlong *)(param_2 + 0x30);
        lVar11 = lVar24 + *(longlong *)(param_2 + 0x38) * 0x18;
        do {
          uVar15 = (ulonglong)*(byte *)(lVar24 + 0x12);
          if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8510(&UNK_143053d48);
          }
          uVar23 = uVar18;
          if (uVar18 >> 0x20 == 0) {
            uVar23 = uVar18 & 0xffffffff;
          }
          lVar21 = uVar15 - uVar23 % uVar15;
          if (uVar23 % uVar15 == 0) {
            lVar21 = 0;
          }
          lStack_f0 = lVar21 + uVar18;
          if (lVar21 != 0) {
            pdb_142dc7fb4(0,&uStack_a8,&lStack_f0,0);
            goto LAB_140b07e84;
          }
          lVar21 = *(longlong *)(lVar17 + 0x28);
          if (lVar21 != 0) {
            lVar14 = *(longlong *)(lVar17 + 0x20);
            lVar22 = 0;
            uVar15 = uVar18;
            do {
              uVar23 = (ulonglong)*(ushort *)(lVar24 + 0x10);
              uVar18 = uVar15 + uVar23;
              if (uStack_88 < uVar18) {
                pdb_142dc8420(uVar15,uVar18,uStack_88,&UNK_143053f90);
                goto LAB_140b07e84;
              }
              lVar13 = *(uint *)(lVar14 + lVar22) * uVar23;
              uVar23 = lVar13 + uVar23;
              if (*(ulonglong *)(lVar24 + 8) < uVar23) {
                pdb_142dc8420(lVar13,uVar23,*(ulonglong *)(lVar24 + 8),&UNK_143053fa8);
                goto LAB_140b07e84;
              }
              pub_142e32760(pbStack_90 + uVar15);
              lVar22 = lVar22 + 4;
              uVar15 = uVar18;
              uStack_a8 = uVar18;
            } while (lVar21 << 2 != lVar22);
          }
          lVar24 = lVar24 + 0x18;
        } while (lVar24 != lVar11);
      }
      lVar17 = lVar17 + 0x30;
      param_2 = pcStack_a0;
    } while (lVar17 != lStack_d8);
  }
  uVar15 = (ulonglong)((uint)uVar18 & 0xf);
  lVar17 = 0x10 - uVar15;
  if (uVar15 == 0) {
    lVar17 = 0;
  }
  uStack_a8 = lVar17 + uVar18;
  uStack_f8 = uStack_88;
  if (uStack_88 != uStack_a8) {
    pdb_142dc7fb4(0,&uStack_f8,&uStack_a8,0);
    goto LAB_140b07e84;
  }
  uVar16 = pdb_140e1cff0(uStack_88,0x210);
  pdb_1415d22e0(&lStack_148,uStack_d0,uStack_e0,param_5,uVar16,pbStack_90,uStack_88);
  plVar19 = plStack_c8;
  uVar18 = CONCAT44(fStack_13c,fStack_140);
  if (lStack_148 == 0xb) {
    uStack_98 = uVar18;
    lVar17 = pdb_140c18630(&uStack_98,uStack_d0);
    if (lStack_b0 != 0) {
      uVar15 = lStack_b0 * 0x20 - 0x20;
      pbVar9 = pbStack_b8;
      if ((~(uint)uVar15 & 0xe0) != 0) {
        lVar11 = -(ulonglong)(((uint)(uVar15 >> 5) & 0x7ffffff) + 1 & 7);
        do {
          *(longlong *)pbVar9 = *(longlong *)pbVar9 + lVar17;
          pbVar9 = pbVar9 + 0x20;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0);
      }
      uVar18 = uStack_98;
      if (0xdf < uVar15) {
        do {
          *(longlong *)pbVar9 = *(longlong *)pbVar9 + lVar17;
          *(longlong *)(pbVar9 + 0x20) = *(longlong *)(pbVar9 + 0x20) + lVar17;
          *(longlong *)(pbVar9 + 0x40) = *(longlong *)(pbVar9 + 0x40) + lVar17;
          *(longlong *)(pbVar9 + 0x60) = *(longlong *)(pbVar9 + 0x60) + lVar17;
          *(longlong *)(pbVar9 + 0x80) = *(longlong *)(pbVar9 + 0x80) + lVar17;
          *(longlong *)(pbVar9 + 0xa0) = *(longlong *)(pbVar9 + 0xa0) + lVar17;
          *(longlong *)(pbVar9 + 0xc0) = *(longlong *)(pbVar9 + 0xc0) + lVar17;
          *(longlong *)(pbVar9 + 0xe0) = *(longlong *)(pbVar9 + 0xe0) + lVar17;
          pbVar9 = pbVar9 + 0x100;
        } while (pbVar9 != pbStack_b8 + lStack_b0 * 0x20);
      }
    }
    plStack_c8[3] = lStack_b0;
    plStack_c8[1] = lStack_c0;
    plStack_c8[2] = (longlong)pbStack_b8;
    plStack_c8[4] = uVar18;
    *plStack_c8 = 0xb;
    plVar19 = plStack_c8;
    pcVar20 = pcStack_a0;
    if (uStack_88 == 0) goto LAB_140b07d4e;
    uVar15 = 1;
    pbVar9 = pbStack_90;
    uVar18 = uStack_88;
  }
  else {
    plStack_c8[8] = lStack_108;
    plStack_c8[9] = lStack_100;
    plStack_c8[6] = lStack_118;
    plStack_c8[7] = lStack_110;
    plStack_c8[4] = lStack_128;
    plStack_c8[5] = lStack_120;
    plStack_c8[2] = lStack_138;
    plStack_c8[3] = lStack_130;
    *plStack_c8 = lStack_148;
    plStack_c8[1] = uVar18;
    if (uStack_88 != 0) {
      pub_1406abac0(pbStack_90,uStack_88,1);
    }
    pcVar20 = pcStack_a0;
    if (lStack_c0 == 0) goto LAB_140b07d4e;
    uVar18 = lStack_c0 << 5;
    uVar15 = 8;
    pbVar9 = pbStack_b8;
  }
  pcVar20 = pcStack_a0;
  pub_1406abac0(pbVar9,uVar18,uVar15);
LAB_140b07d4e:
  pdb_140994200(pcVar20);
  return plVar19;
}

