// VA 0x140811d10, PDB extent 4190 bytes
// system_wall_constructor::construct_arches::profile::create_stone_arch_profile
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_arches::profile::create_stone_arch_profile
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/profile.rs
   Extent: 4190 */

float pdb_140811d10(longlong *param_1,float *param_2,int param_3,undefined8 param_4,int *param_5,
                   longlong param_6)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  bool bVar13;
  float extraout_XMM0_Da;
  float fVar14;
  undefined4 in_XMM1_Da;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  ulonglong uStack_1a8;
  longlong lStack_1a0;
  byte *pbStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  longlong lStack_178;
  undefined4 uStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  undefined1 uStack_164;
  undefined1 uStack_163;
  float fStack_160;
  uint uStack_15c;
  undefined8 uStack_158;
  float *pfStack_150;
  ulonglong uStack_148;
  float *pfStack_140;
  byte *pbStack_138;
  longlong *plStack_130;
  longlong *plStack_128;
  undefined4 *puStack_120;
  undefined1 *puStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  ulonglong uStack_e8;
  longlong lStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  uVar7 = *(uint *)(param_6 + 600);
  lVar12 = *(longlong *)(param_6 + 0xe0);
  uVar2 = *(ulonglong *)(param_6 + 0xe8);
  uStack_168 = in_XMM1_Da;
  if (*param_5 == 1) {
    auVar17 = ZEXT416((uint)param_5[2]);
    fStack_16c = (float)param_5[1];
  }
  else {
    uVar9 = param_1[2];
    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143008270);
    }
    uVar3 = param_1[5];
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143008288);
    }
    uVar10 = uVar9 - 1 & 0x3fffffffffffffff;
    if (uVar3 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar3,uVar3,&UNK_1430082a0);
    }
    pfVar8 = (float *)param_1[1];
    lVar4 = param_1[4];
    auVar17 = ZEXT416((uint)*(float *)(lVar4 + 4));
    fVar19 = *pfVar8 + *(float *)(lVar4 + 4);
    if ((uVar9 & 0x3fffffffffffffff) == 1) {
      uVar9 = 0;
    }
    else {
      param_2 = (float *)(uVar10 + 1);
      pfVar11 = (float *)(lVar4 + 0x10);
      uVar9 = 0;
      do {
        fVar20 = *pfVar8 + pfVar11[-3];
        fVar18 = fVar20;
        if (fVar20 <= fVar19) {
          fVar18 = fVar19;
        }
        uVar9 = uVar9 + 2;
        fVar14 = pfVar8[1] + *pfVar11;
        pfVar8 = pfVar8 + 2;
        auVar15._0_4_ =
             ~-(uint)(fVar18 < fVar14) &
             (~-(uint)(fVar19 < fVar20) & auVar17._0_4_ |
             (uint)pfVar11[-3] & -(uint)(fVar19 < fVar20));
        auVar15._4_4_ = 0;
        auVar15._8_4_ = auVar17._8_4_;
        auVar15._12_4_ = auVar17._12_4_;
        auVar17 = ZEXT416(-(uint)(fVar18 < fVar14) & (uint)*pfVar11) | auVar15;
        fVar19 = fVar14;
        if (fVar14 <= fVar18) {
          fVar19 = fVar18;
        }
        pfVar11 = pfVar11 + 6;
      } while (((ulonglong)param_2 & 0xfffffffffffffffe) != uVar9);
      fStack_16c = fVar19;
      if (((ulonglong)param_2 & 1) == 0) goto LAB_140811e9c;
    }
    param_2 = (float *)(uVar9 * 3);
    fVar18 = *(float *)(lVar4 + 4 + uVar9 * 0xc);
    fStack_16c = *pfVar8 + fVar18;
    auVar16._0_4_ = ~-(uint)(fVar19 < fStack_16c) & auVar17._0_4_;
    auVar16._4_4_ = 0;
    auVar16._8_4_ = auVar17._8_4_;
    auVar16._12_4_ = auVar17._12_4_;
    auVar17 = auVar16 | ZEXT416((uint)fVar18 & -(uint)(fVar19 < fStack_16c));
    if (fStack_16c <= fVar19) {
      fStack_16c = fVar19;
    }
  }
LAB_140811e9c:
  uStack_170 = auVar17._0_4_;
  uStack_164 = 0;
  if (uVar7 == 2) {
    uVar5 = pdb_1413f84c0(param_1 + 0xb);
    uStack_158 = (float *)CONCAT44((int)param_2,uVar5);
    iVar6 = pdb_14007e750(&uStack_158);
    bVar13 = iVar6 == 0;
    uVar5 = pdb_1413f84a0(param_1 + 0xb);
    uStack_158 = (float *)CONCAT44((int)param_2,uVar5);
    iVar6 = pdb_14007e750(&uStack_158);
    if (iVar6 == param_3 || bVar13) {
      uStack_158 = (float *)param_1[4];
      pfStack_150 = (float *)((longlong)uStack_158 + param_1[5] * 0xc);
      uStack_148 = 0;
      pfVar8 = (float *)pdb_141466f50(&uStack_158);
      fStack_160 = _DAT_142e377f0;
      if (pfVar8 != (float *)0x0) {
        do {
          fStack_160 = fStack_160 +
                       SQRT((pfVar8[2] - param_2[2]) * (pfVar8[2] - param_2[2]) +
                            (pfVar8[1] - param_2[1]) * (pfVar8[1] - param_2[1]) +
                            (*pfVar8 - *param_2) * (*pfVar8 - *param_2));
          pfVar8 = (float *)pdb_141466f50(&uStack_158);
        } while (pfVar8 != (float *)0x0);
      }
      uStack_163 = !bVar13;
      uStack_164 = 1;
      uVar9 = param_1[5];
      uVar3 = uVar9 * 0xc;
      if (uVar9 < 0xaaaaaaaaaaaaaab) goto LAB_140811fee;
      lVar12 = 0;
      do {
        pdb_142dc7e2a(lVar12,uVar3);
LAB_140811fee:
        lVar4 = param_1[4];
        lStack_178 = lVar12;
        uStack_15c = uVar7;
        if (uVar3 == 0) {
          pbStack_f0 = (byte *)0x4;
          uStack_f8 = (byte *)0;
          break;
        }
        pdb_14007ee60();
        lVar12 = 4;
        pbStack_f0 = pub_1406abab0(uVar3,4);
        uStack_f8 = (byte *)uVar9;
      } while (pbStack_f0 == (byte *)0x0);
      if (uVar9 != 0) {
        pub_142e32760(pbStack_f0,lVar4,uVar3);
      }
      uStack_e8 = uVar9;
      pdb_140080930(&uStack_158,&uStack_f8,0);
      pfVar8 = pfStack_150;
      if (SBORROW8(0,(longlong)uStack_158)) {
        uStack_f8 = (byte *)pfStack_150;
        pbStack_f0 = (byte *)uStack_148;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143306430,0x2b,&uStack_f8,&UNK_143306410,&UNK_1430082b8);
      }
      uStack_c8 = plStack_128;
      pbStack_d8 = pbStack_138;
      uStack_d0 = plStack_130;
      uStack_e8 = uStack_148;
      lStack_e0 = (longlong)pfStack_140;
      uStack_f8 = (byte *)uStack_158;
      pbStack_f0 = (byte *)pfStack_150;
      pdb_14017ede0(&uStack_c0,pfStack_150,(byte *)((longlong)pfStack_150 + uStack_148 * 0xc));
      uStack_1a8 = uStack_b0;
      pdb_140080c90(&uStack_158,&pbStack_1b8,0);
      lVar12 = lStack_178;
      if (SBORROW8(0,(longlong)uStack_158)) {
        pbStack_1b8 = (byte *)pfStack_150;
        pbStack_1b0 = (byte *)uStack_148;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143306430,0x2b,&pbStack_1b8,&UNK_143306410,&UNK_143306a30);
      }
      uStack_188 = plStack_128;
      pbStack_198 = pbStack_138;
      uStack_190 = plStack_130;
      uStack_1a8 = uStack_148;
      lStack_1a0 = (longlong)pfStack_140;
      pbStack_1b8 = (byte *)uStack_158;
      pbStack_1b0 = (byte *)pfStack_150;
      if (uStack_f8 != (byte *)0x0) {
        pub_1406abac0((byte *)pfVar8,(longlong)uStack_f8 * 0xc,4);
      }
      if (lStack_e0 != 0) {
        pub_1406abac0(pbStack_d8,lStack_e0 << 2,4);
      }
      if ((float)uStack_188 <= _DAT_143007398) {
        fVar19 = 0.0;
        uVar7 = uStack_15c;
      }
      else {
        fVar18 = _DAT_142e3c678;
        if (_DAT_143007398 / (float)uStack_188 <= _DAT_142e3c678) {
          fVar18 = _DAT_143007398 / (float)uStack_188;
        }
        if (iVar6 == param_3 && bVar13) {
          fVar19 = _DAT_143008214;
          if (fVar18 <= _DAT_143008214) {
            fVar19 = fVar18;
          }
          uStack_f8 = (byte *)CONCAT44(uStack_f8._4_4_,fVar19);
          if (_DAT_142e36f28 < fVar19) {
            pfStack_150 = (float *)pdb_140f70fc0;
            uStack_158 = (float *)&uStack_f8;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&uStack_158,&UNK_143008330);
          }
          fVar18 = _DAT_142e36f28 - fVar19;
          uStack_f8 = (byte *)CONCAT44(uStack_f8._4_4_,fVar18);
          if ((fVar18 < 0.0) || (_DAT_142e36f28 < fVar18)) {
            pfStack_150 = (float *)pdb_140f70fc0;
            uStack_158 = (float *)&uStack_f8;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&uStack_158,&UNK_143008348);
          }
          uStack_c0 = 0;
          uStack_b8 = 4;
          uStack_b0 = 0;
          uStack_a3 = 1;
          pdb_1413f8720(&pbStack_1b8);
          uStack_e8 = uStack_b0;
          uStack_f8 = (byte *)uStack_c0;
          pbStack_f0 = (byte *)uStack_b8;
          uStack_a3 = 0;
          pdb_140080c90(&uStack_158,&uStack_f8,0);
          if (SBORROW8(0,(longlong)uStack_158)) {
            uStack_f8 = (byte *)pfStack_150;
            pbStack_f0 = (byte *)uStack_148;
            uStack_a3 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143306430,0x2b,&uStack_f8,&UNK_143306410,&UNK_143008360);
          }
          lVar12 = param_1[5];
          uStack_c8 = plStack_128;
          pbStack_d8 = pbStack_138;
          uStack_d0 = plStack_130;
          lStack_e0 = (longlong)pfStack_140;
          fVar18 = _DAT_142e36f28;
        }
        else if (bVar13) {
          uStack_f8 = (byte *)CONCAT44(uStack_f8._4_4_,fVar18);
          if (_DAT_142e36f28 < fVar18) {
            pfStack_150 = (float *)pdb_140f70fc0;
            uStack_158 = (float *)&uStack_f8;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&uStack_158,&UNK_143008300);
          }
          uStack_c0 = 0;
          uStack_b8 = 4;
          uStack_b0 = 0;
          uStack_a2 = 1;
          pdb_1413f8720(&pbStack_1b8);
          uStack_e8 = uStack_b0;
          uStack_f8 = (byte *)uStack_c0;
          pbStack_f0 = (byte *)uStack_b8;
          uStack_a2 = 0;
          pdb_140080c90(&uStack_158,&uStack_f8,0);
          if (SBORROW8(0,(longlong)uStack_158)) {
            uStack_f8 = (byte *)pfStack_150;
            pbStack_f0 = (byte *)uStack_148;
            uStack_a2 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143306430,0x2b,&uStack_f8,&UNK_143306410,&UNK_143008318);
          }
          lVar12 = param_1[5];
          fVar19 = fVar18;
          uStack_c8 = plStack_128;
          pbStack_d8 = pbStack_138;
          uStack_d0 = plStack_130;
          lStack_e0 = (longlong)pfStack_140;
          fVar18 = _DAT_142e36f28;
        }
        else {
          fVar18 = _DAT_142e36f28 - fVar18;
          uStack_f8 = (byte *)CONCAT44(uStack_f8._4_4_,fVar18);
          if ((fVar18 < 0.0) || (_DAT_142e36f28 < fVar18)) {
            pfStack_150 = (float *)pdb_140f70fc0;
            uStack_158 = (float *)&uStack_f8;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&uStack_158,&UNK_1430082d0);
          }
          uStack_c0 = 0;
          uStack_b8 = 4;
          uStack_b0 = 0;
          uStack_a1 = 1;
          pdb_1413f8720(&pbStack_1b8);
          uStack_e8 = uStack_b0;
          uStack_f8 = (byte *)uStack_c0;
          pbStack_f0 = (byte *)uStack_b8;
          uStack_a1 = 0;
          pdb_140080c90(&uStack_158,&uStack_f8,0);
          if (SBORROW8(0,(longlong)uStack_158)) {
            uStack_f8 = (byte *)pfStack_150;
            pbStack_f0 = (byte *)uStack_148;
            uStack_a1 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143306430,0x2b,&uStack_f8,&UNK_143306410,&UNK_1430082e8);
          }
          fVar19 = 0.0;
          lVar12 = param_1[5];
          uStack_c8 = plStack_128;
          pbStack_d8 = pbStack_138;
          uStack_d0 = plStack_130;
          lStack_e0 = (longlong)pfStack_140;
          fVar18 = _DAT_142e36f28;
        }
        _DAT_142e36f28 = fVar18;
        uStack_f8 = (byte *)uStack_158;
        pbStack_f0 = (byte *)pfStack_150;
        uStack_e8 = uStack_148;
        if (lVar12 != 0) {
          pfVar11 = (float *)param_1[4];
          pfVar8 = pfVar11 + lVar12 * 3;
          fVar20 = (float)lVar12 + _DAT_142e36f34;
          lVar12 = 0;
          do {
            fVar14 = (float)lVar12 / fVar20;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,fVar14);
            if ((fVar14 < 0.0) || (fVar18 < fVar14)) {
              pfStack_150 = (float *)pdb_140f70fc0;
              uStack_158 = (float *)&uStack_c0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143307ab0,&uStack_158,&UNK_143008378);
            }
            uVar7 = pdb_1413f9030(&uStack_f8);
            uVar9 = (ulonglong)uVar7;
            if (uStack_e8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar9,uStack_e8,&UNK_143306608);
            }
            if (uStack_e8 <= uVar9 + 1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar9 + 1,uStack_e8,&UNK_143306620);
            }
            fVar14 = *(float *)(pbStack_f0 + uVar9 * 8 + 4);
            fVar1 = *(float *)(pbStack_f0 + uVar9 * 8 + 0xc);
            *pfVar11 = *(float *)(pbStack_f0 + uVar9 * 8 + 8) * extraout_XMM0_Da +
                       *(float *)(pbStack_f0 + uVar9 * 8) * (fVar18 - extraout_XMM0_Da);
            pfVar11[2] = fVar1 * extraout_XMM0_Da + (fVar18 - extraout_XMM0_Da) * fVar14;
            pfVar11 = pfVar11 + 3;
            lVar12 = lVar12 + 1;
          } while (pfVar11 != pfVar8);
        }
        if (uStack_f8 != (byte *)0x0) {
          pub_1406abac0(pbStack_f0,(longlong)uStack_f8 << 3,4);
        }
        uVar7 = uStack_15c;
        lVar12 = lStack_178;
        if (lStack_e0 != 0) {
          pub_1406abac0(pbStack_d8,lStack_e0 << 2,4);
        }
      }
      if (pbStack_1b8 != (byte *)0x0) {
        pub_1406abac0(pbStack_1b0,(longlong)pbStack_1b8 << 3,4);
      }
      if (lStack_1a0 != 0) {
        pub_1406abac0(pbStack_198,lStack_1a0 << 2,4);
      }
      goto LAB_14081260a;
    }
  }
  fVar19 = 0.0;
LAB_14081260a:
  plStack_128 = param_1 + 3;
  uStack_158 = (float *)param_1[4];
  pfStack_150 = (float *)((longlong)uStack_158 + param_1[5] * 0xc);
  uStack_148 = 0;
  pfStack_140 = &fStack_16c;
  pbStack_138 = (byte *)&uStack_170;
  puStack_120 = &uStack_168;
  puStack_118 = &uStack_164;
  plStack_130 = param_1;
  pdb_1413ea400(&uStack_f8,&uStack_158);
  if (*param_1 != 0) {
    pub_1406abac0((byte *)param_1[1],*param_1 << 2,4);
  }
  param_1[2] = uStack_e8;
  *param_1 = (longlong)uStack_f8;
  param_1[1] = (longlong)pbStack_f0;
  if (uVar7 < 2) {
    plStack_130 = (longlong *)CONCAT44(plStack_130._4_4_,(int)param_1[0xc]);
    pbStack_138 = (byte *)param_1[0xb];
    pfStack_150 = (float *)param_1[1] + param_1[2];
    plStack_128 = (longlong *)0x0;
    puStack_120 = (undefined4 *)0x0;
    lStack_110 = param_1[4] + param_1[5] * 0xc;
    uStack_108 = 0;
    uStack_100 = 0;
    if (param_1[2] != 0) {
      pfVar8 = (float *)param_1[1];
      uStack_148 = lVar12;
      pfStack_140 = (float *)uVar2;
      puStack_118 = (undefined1 *)param_1[4];
      do {
        uStack_158 = pfVar8 + 1;
        pdb_1413f86f0(&uStack_f8,&pbStack_138);
        pfVar11 = pfStack_140;
        uVar2 = uStack_148;
        if ((char)uStack_f8 == '\0') {
          return fVar19;
        }
        uVar9 = pdb_1413f8440(uStack_f8._4_4_,(ulonglong)pbStack_f0 & 0xffffffff);
        if (pfVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar9,pfVar11,&UNK_143008390);
        }
        if (puStack_118 == (undefined1 *)lStack_110) {
          return fVar19;
        }
        fVar14 = *(float *)(uVar2 + uVar9 * 4) - *(float *)((longlong)puStack_118 + 4);
        fVar18 = *pfVar8;
        fVar20 = fVar14;
        if (fVar18 <= fVar14) {
          fVar20 = fVar18;
        }
        *pfVar8 = (float)(~-(uint)NAN(fVar18) & (uint)fVar20 | -(uint)NAN(fVar18) & (uint)fVar14);
        pfVar8 = uStack_158;
        puStack_118 = (undefined1 *)((longlong)puStack_118 + 0xc);
      } while (uStack_158 != pfStack_150);
    }
  }
  return fVar19;
}

