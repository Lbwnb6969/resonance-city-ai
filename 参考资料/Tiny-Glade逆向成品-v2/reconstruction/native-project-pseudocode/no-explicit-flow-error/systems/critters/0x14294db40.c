// VA 0x14294db40, PDB extent 6335 bytes
// system_critters::duck::move_ducks_along_trajectories
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::duck::move_ducks_along_trajectories
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck.rs
   Extent: 6335 */

void pdb_14294db40(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  byte bVar7;
  byte bVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float fVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong *puVar18;
  undefined8 uVar19;
  byte bVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  float *pfVar26;
  undefined *puVar27;
  undefined *puVar28;
  longlong lVar29;
  uint *puVar30;
  undefined *puVar31;
  undefined4 *puVar32;
  float fVar33;
  float extraout_XMM0_Da;
  float fVar34;
  float fVar35;
  undefined4 *puVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float unaff_XMM8_Db;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 in_stack_fffffffffffffc28;
  undefined4 uVar53;
  undefined4 *puStack_3b8;
  code *pcStack_3b0;
  undefined8 *puStack_3a8;
  code *pcStack_3a0;
  uint *puStack_398;
  uint *puStack_390;
  longlong lStack_388;
  longlong lStack_378;
  longlong lStack_368;
  longlong lStack_358;
  undefined4 uStack_34c;
  longlong lStack_348;
  longlong lStack_338;
  undefined4 uStack_32c;
  longlong lStack_328;
  longlong lStack_318;
  undefined4 uStack_30c;
  longlong lStack_308;
  longlong lStack_2f8;
  undefined4 uStack_2ec;
  longlong lStack_2e8;
  longlong lStack_2d8;
  undefined4 uStack_2cc;
  longlong lStack_2c8;
  longlong lStack_2b8;
  undefined4 uStack_2ac;
  longlong lStack_2a8;
  longlong lStack_298;
  undefined4 uStack_28c;
  uint uStack_288;
  uint uStack_284;
  undefined1 uStack_280;
  undefined8 *puStack_268;
  undefined4 *puStack_260;
  longlong lStack_258;
  undefined4 *puStack_250;
  float *pfStack_248;
  undefined4 *puStack_240;
  longlong lStack_238;
  undefined8 uStack_230;
  longlong lStack_228;
  longlong lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  uint *puStack_208;
  undefined8 uStack_200;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  longlong lStack_1e8;
  undefined4 *puStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 *puStack_1c0;
  longlong lStack_1b8;
  longlong *plStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 *puStack_130;
  undefined4 *puStack_128;
  undefined8 uStack_120;
  undefined4 *puStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  longlong *plStack_100;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  
  uVar53 = (undefined4)((ulonglong)in_stack_fffffffffffffc28 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  cVar12 = pdb_140e94b40();
  if (cVar12 == '\0') {
    lStack_238 = 0;
  }
  else {
    puVar27 = &UNK_143600d00;
    lVar24 = 0x34;
    uVar22 = 0x34;
    lVar14 = pdb_14294fbb0(&UNK_143600d00);
    if (lVar14 == 1) {
      if (0x34 < uVar22) {
LAB_14294f0f2:
        pdb_142dc8070(&UNK_143600d00,0x34,0);
LAB_14294f112:
        pdb_142dc8070(&UNK_143600d00,0x34);
LAB_14294f136:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2();
      }
      puVar27 = &UNK_143600d00;
      uVar15 = pdb_14294fbb0(&UNK_143600d00);
      if ((uVar15 & 1) != 0) {
        if (0x34 < uVar22 + 2) goto LAB_14294f112;
        lVar24 = 0x32 - uVar22;
        puVar27 = &UNK_143600d02 + uVar22;
      }
    }
    puVar28 = &UNK_143600a6b;
    puVar31 = &UNK_143600a48;
    do {
      bVar20 = puVar28[-1];
      uVar13 = (uint)(char)bVar20;
      plStack_100 = param_3;
      if ((char)bVar20 < '\0') {
        bVar7 = puVar28[-2];
        if ((char)bVar7 < -0x40) {
          bVar8 = puVar28[-3];
          if ((char)bVar8 < -0x40) {
            pbVar1 = puVar28 + -4;
            puVar28 = puVar28 + -4;
            uVar13 = bVar8 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar28 = puVar28 + -3;
            uVar13 = bVar8 & 0xf;
          }
          uVar13 = bVar7 & 0x3f | uVar13 << 6;
        }
        else {
          puVar28 = puVar28 + -2;
          uVar13 = bVar7 & 0x1f;
        }
        uVar13 = (uint)(bVar20 & 0x3f) | uVar13 << 6;
        if (uVar13 != 0x5c) goto LAB_14294dcc4;
LAB_14294dcdc:
        puVar31 = puVar28 + -0x143600a47;
        if ((undefined *)0x23 < puVar31) {
          pdb_142dc8070(&UNK_143600a48,0x23,puVar31,0x23,&UNK_143600d98);
          goto LAB_14294f0f2;
        }
        lVar14 = 0x23 - (longlong)puVar31;
        puVar31 = puVar28 + 1;
        goto LAB_14294dcfe;
      }
      puVar28 = puVar28 + -1;
      if (uVar13 == 0x5c) goto LAB_14294dcdc;
LAB_14294dcc4:
      if (uVar13 == 0x2f) goto LAB_14294dcdc;
    } while (puVar28 != &UNK_143600a48);
    lVar14 = 0x23;
LAB_14294dcfe:
    plVar16 = (longlong *)pdb_140e97000();
    if (((char)plVar16[0xd] != '\x01') &&
       (plVar16 = (longlong *)pdb_142e2d6a0(plVar16,0), plVar16 == (longlong *)0x0))
    goto LAB_14294f001;
    if (*plVar16 != 0) goto LAB_14294efcd;
    *plVar16 = -1;
    plStack_1b0 = plVar16;
    uStack_230 = pdb_140e94f10(plVar16 + 1,puVar27,lVar24,puVar31,lVar14,1,0);
    uVar53 = (undefined4)((ulonglong)lVar14 >> 0x20);
    *plStack_1b0 = *plStack_1b0 + 1;
    lStack_238 = 1;
    param_3 = plStack_100;
  }
  lStack_1f8 = *param_2;
  lVar14 = param_2[1];
  pdb_1429483a0(&puStack_398,lVar14,lStack_1f8,(int)param_2[2],
                CONCAT44(uVar53,*(undefined4 *)((longlong)param_2 + 0x14)));
  fVar11 = _DAT_142e36f28;
  lStack_228 = lStack_388;
  lStack_220 = lStack_378;
  lStack_1b8 = *param_1;
  uStack_1f0 = *param_3;
  uStack_218 = *param_4;
  uStack_210 = param_4[1];
  puStack_208 = (uint *)param_4[3];
  uStack_200 = param_4[2];
  uStack_1c4 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lStack_1e8 = *param_5;
  puStack_260 = (undefined4 *)param_5[2];
  plStack_1b0 = (longlong *)CONCAT71(plStack_1b0._1_7_,uStack_280);
  lStack_1a8 = lStack_368;
  lStack_1a0 = lStack_358;
  uStack_f4 = uStack_34c;
  lStack_198 = lStack_348;
  lStack_190 = lStack_338;
  uStack_134 = uStack_32c;
  lStack_188 = lStack_328;
  lStack_180 = lStack_318;
  uStack_1d0 = uStack_30c;
  lStack_178 = lStack_308;
  lStack_170 = lStack_2f8;
  uStack_1cc = uStack_2ec;
  lStack_168 = lStack_2e8;
  lStack_160 = lStack_2d8;
  uStack_138 = uStack_2cc;
  lStack_158 = lStack_2c8;
  lStack_150 = lStack_2b8;
  uStack_1d4 = uStack_2ac;
  lStack_148 = lStack_2a8;
  lStack_140 = lStack_298;
  uStack_1c8 = uStack_28c;
  uVar22 = (ulonglong)uStack_288;
  plStack_100 = (longlong *)(ulonglong)uStack_284;
  lStack_258 = lStack_1e8 + 0x20;
  puVar30 = puStack_398;
  fVar46 = _DAT_142e36f50;
  while( true ) {
    if (((ulonglong)plStack_1b0 & 1) == 0) {
      if ((int)plStack_100 == (int)uVar22) {
        do {
          if (puVar30 == puStack_390) goto LAB_14294ef1f;
          uVar13 = *puVar30;
          puVar30 = puVar30 + 1;
          uVar22 = *(ulonglong *)(*(longlong *)(lVar14 + 0x100) + 0x58 + (ulonglong)uVar13 * 0xa0);
        } while (uVar22 == 0);
        lVar17 = *(longlong *)(lVar14 + 0x100) + (ulonglong)uVar13 * 0xa0;
        uVar15 = (ulonglong)*(uint *)(lVar17 + 0x94);
        lVar24 = *(longlong *)(*(longlong *)(lVar14 + 0x1a0) + 0x18 + uVar15 * 0x48);
        lVar23 = *(longlong *)(*(longlong *)(lVar14 + 0x1a0) + 0x38 + uVar15 * 0x48);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x110) * 8) * 0x30;
        lStack_1a8 = *(longlong *)(lVar24 + 0x10 + lVar29);
        lStack_1a0 = *(longlong *)(lVar24 + 0x28 + lVar29);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x118) * 8) * 0x30;
        lStack_198 = *(longlong *)(lVar24 + 0x10 + lVar29);
        lStack_190 = *(longlong *)(lVar24 + 0x28 + lVar29);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x120) * 8) * 0x30;
        lStack_188 = *(longlong *)(lVar24 + 0x10 + lVar29);
        lStack_180 = *(longlong *)(lVar24 + 0x28 + lVar29);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x128) * 8) * 0x30;
        lStack_178 = *(longlong *)(lVar24 + 0x10 + lVar29);
        lStack_170 = *(longlong *)(lVar24 + 0x28 + lVar29);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x130) * 8) * 0x30;
        lStack_168 = *(longlong *)(lVar24 + 0x10 + lVar29);
        lStack_160 = *(longlong *)(lVar24 + 0x28 + lVar29);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x138) * 8) * 0x30;
        lStack_158 = *(longlong *)(lVar24 + 0x10 + lVar29);
        lStack_150 = *(longlong *)(lVar24 + 0x28 + lVar29);
        lVar23 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x140) * 8) * 0x30;
        lStack_148 = *(longlong *)(lVar24 + 0x10 + lVar23);
        lStack_140 = *(longlong *)(lVar24 + 0x28 + lVar23);
        lStack_220 = *(longlong *)(lVar17 + 0x50);
        plStack_100 = (undefined8 *)0x0;
        uVar15 = 0;
      }
      else {
        uVar15 = (ulonglong)plStack_100 & 0xffffffff;
      }
      puVar18 = (ulonglong *)(lStack_220 + uVar15 * 0x10);
      uVar15 = (ulonglong)~*(uint *)(lStack_220 + 8 + uVar15 * 0x10);
    }
    else {
      if ((int)plStack_100 == (int)uVar22) {
        do {
          if (puVar30 == puStack_390) goto LAB_14294ef1f;
          uVar13 = *puVar30;
          puVar30 = puVar30 + 1;
          uVar22 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a0) + 0x10 + (ulonglong)uVar13 * 0x48);
        } while (uVar22 == 0);
        lVar24 = *(longlong *)(lVar14 + 0x1a0) + (ulonglong)uVar13 * 0x48;
        lVar23 = *(longlong *)(lVar24 + 0x38);
        lVar17 = *(longlong *)(lVar24 + 0x18);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x110) * 8) * 0x30;
        lStack_1a8 = *(longlong *)(lVar17 + 0x10 + lVar29);
        lStack_1a0 = *(longlong *)(lVar17 + 0x28 + lVar29);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x118) * 8) * 0x30;
        lStack_198 = *(longlong *)(lVar17 + 0x10 + lVar29);
        lStack_190 = *(longlong *)(lVar17 + 0x28 + lVar29);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x120) * 8) * 0x30;
        lStack_188 = *(longlong *)(lVar17 + 0x10 + lVar29);
        lStack_180 = *(longlong *)(lVar17 + 0x28 + lVar29);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x128) * 8) * 0x30;
        lStack_178 = *(longlong *)(lVar17 + 0x10 + lVar29);
        lStack_170 = *(longlong *)(lVar17 + 0x28 + lVar29);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x130) * 8) * 0x30;
        lStack_168 = *(longlong *)(lVar17 + 0x10 + lVar29);
        lStack_160 = *(longlong *)(lVar17 + 0x28 + lVar29);
        lVar29 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x138) * 8) * 0x30;
        lStack_158 = *(longlong *)(lVar17 + 0x10 + lVar29);
        lStack_150 = *(longlong *)(lVar17 + 0x28 + lVar29);
        lVar23 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_1f8 + 0x140) * 8) * 0x30;
        lStack_148 = *(longlong *)(lVar17 + 0x10 + lVar23);
        lStack_140 = *(longlong *)(lVar17 + 0x28 + lVar23);
        lStack_228 = *(longlong *)(lVar24 + 8);
        plStack_100 = (undefined8 *)0x0;
      }
      uVar15 = (ulonglong)plStack_100 & 0xffffffff;
      puVar18 = (ulonglong *)(lStack_228 + uVar15 * 8);
    }
    puStack_118 = (undefined4 *)(lStack_1a0 + uVar15 * 4);
    pbStack_108 = (byte *)(lStack_198 + uVar15);
    puStack_1c0 = (undefined4 *)(lStack_190 + uVar15 * 4);
    puVar36 = (undefined4 *)(lStack_180 + uVar15 * 4);
    puVar3 = (undefined4 *)(lStack_170 + uVar15 * 4);
    uStack_120 = (undefined4 *)(lStack_168 + uVar15 * 4);
    puStack_130 = (undefined4 *)(lStack_160 + uVar15 * 4);
    puStack_128 = (undefined4 *)(lStack_150 + uVar15 * 4);
    pfVar26 = (float *)(lStack_148 + uVar15 * 4);
    puVar4 = (undefined4 *)(lStack_140 + uVar15 * 4);
    lVar24 = uVar15 * 0x100 + lStack_1a8;
    puVar5 = (undefined8 *)(lStack_178 + uVar15 * 0xc);
    pfVar25 = (float *)(uVar15 * 0x30 + lStack_188);
    puVar32 = (undefined4 *)(uVar15 * 0x10 + lStack_158);
    puVar9 = (undefined4 *)*puVar18;
    if ((int)puVar9 == 0) break;
    plStack_100 = (longlong *)(ulonglong)((int)plStack_100 + 1);
    if (*_DAT_143ca4500 == '\0') {
      lVar23 = (ulonglong)*pbStack_108 - 1;
      if ((ulonglong)*pbStack_108 < 2) {
        lVar23 = 0;
      }
      puStack_268 = puVar5;
      if ((lVar23 != 1) && (lVar17 = *(longlong *)(lVar24 + 0xa0), lVar17 != 0)) {
        if (lVar17 == 1) goto LAB_14294f00e;
        pfVar10 = *(float **)(lVar24 + 0x98);
        pfVar6 = pfVar10 + lVar17 * 3;
        puStack_1e0 = puVar9;
        if (pfVar6 == (float *)0xc) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143600b88);
        }
        fVar34 = fVar11;
        if ((lVar23 != 0) && (fVar34 = _DAT_142e36f34, (int)lVar23 != 2)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143600ba0,0x28,&UNK_143600bc8);
        }
        fVar40 = fVar34 * fVar46 + fVar46;
        fVar33 = 0.0;
        if (0.0 <= *(float *)(lVar24 + 0xec)) {
          fVar33 = *(float *)(lVar24 + 0xec);
        }
        fVar35 = fVar11;
        if (fVar33 <= fVar11) {
          fVar35 = fVar33;
        }
        if ((fVar35 != fVar40) || (NAN(fVar35) || NAN(fVar40))) {
          fVar40 = SQRT((pfVar6[-1] - pfVar10[2]) * (pfVar6[-1] - pfVar10[2]) +
                        (pfVar6[-3] - *pfVar10) * (pfVar6[-3] - *pfVar10));
          *puStack_130 = uStack_138;
          *uStack_120 = 0;
          fVar33 = fVar34 * _DAT_142e37ad8;
          fVar46 = *(float *)(lStack_1b8 + 0x28);
          *puStack_118 = uStack_f4;
          uVar15 = (ulonglong)uStack_120 >> 0x20;
          uStack_120 = (undefined4 *)CONCAT44((int)uVar15,fVar40);
          fVar33 = (fVar33 * fVar46) / fVar40 + *(float *)(lVar24 + 0xec);
          *(float *)(lVar24 + 0xec) = fVar33;
          puStack_130 = *(undefined4 **)(lVar24 + 0xa0);
          fVar46 = (float)(longlong)puStack_130 + _DAT_142e36f34;
          puStack_250 = puVar3;
          pfStack_248 = pfVar26;
          puStack_240 = puVar4;
          puStack_128 = puVar36;
          if (fVar46 < 0.0) {
            uStack_1d8 = 0;
            uStack_110 = CONCAT44(uStack_110._4_4_,fVar46);
            puStack_3b8 = &uStack_1d8;
            pcStack_3b0 = pdb_140f705d0;
            puStack_3a8 = &uStack_110;
            pcStack_3a0 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_1436008b0,&puStack_3b8,&UNK_143600950);
          }
          fVar40 = (float)(~-(uint)(0.0 < fVar34) & (uint)(fVar33 * fVar33) |
                          -(uint)(0.0 < fVar34) & (uint)fVar33) * fVar46;
          fVar33 = 0.0;
          if (0.0 <= fVar40) {
            fVar33 = fVar40;
          }
          if (fVar33 <= fVar46) {
            fVar46 = fVar33;
          }
          uVar15 = 0;
          if (0.0 <= fVar46) {
            uVar15 = (longlong)(fVar46 - _DAT_142e36f2c) & (longlong)fVar46 >> 0x3f |
                     (longlong)fVar46;
          }
          if (_DAT_142e36f30 < fVar46) {
            uVar15 = 0xffffffffffffffff;
          }
          pub_142e32bc0(CONCAT44(unaff_XMM8_Db,fVar46));
          uVar13 = pdb_142b4d110(uVar15);
          uVar21 = (ulonglong)uVar13;
          uVar15 = *(ulonglong *)(lVar24 + 0xa0);
          if (uVar15 <= uVar21) goto LAB_14294f136;
          uVar2 = uVar21 + 1;
          if (uVar15 <= uVar2) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar2,uVar15,&UNK_143600bf8);
          }
          lVar23 = *(longlong *)(lVar24 + 0x98);
          uVar19 = *(undefined8 *)(lVar23 + uVar21 * 0xc);
          fVar45 = (float)uVar19;
          fVar37 = (float)((ulonglong)uVar19 >> 0x20);
          fVar46 = *(float *)(lVar23 + 8 + uVar21 * 0xc);
          uVar19 = *(undefined8 *)(lVar23 + uVar2 * 0xc);
          fVar40 = (float)uVar19;
          fVar35 = (float)((ulonglong)uVar19 >> 0x20);
          fVar33 = *(float *)(lVar23 + 8 + uVar2 * 0xc);
          unaff_XMM8_Db = 0.0;
          if (fVar34 <= 0.0) {
            puVar36 = (undefined4 *)CONCAT44(fVar37 - fVar35,fVar45 - fVar40);
            fVar34 = fVar46 - fVar33;
          }
          else {
            uStack_110 = CONCAT44(fVar33 - fVar46,fVar40 - fVar45);
            pdb_140df4520(&puStack_3b8,&uStack_110);
            puVar36 = puStack_3b8;
            fVar34 = pcStack_3b0._0_4_;
          }
          fVar42 = SUB84(puVar36,0);
          fVar49 = (float)((ulonglong)puVar36 >> 0x20);
          fVar50 = fVar11 / SQRT(fVar34 * fVar34 + fVar49 * fVar49 + fVar42 * fVar42);
          fVar42 = fVar50 * fVar42;
          fVar49 = fVar50 * fVar49;
          fVar50 = fVar50 * fVar34;
          fVar34 = fVar11 - extraout_XMM0_Da;
          fVar47 = fVar33 * extraout_XMM0_Da + fVar46 * fVar34;
          fVar48 = fVar34 * fVar45 + extraout_XMM0_Da * fVar40;
          uStack_110 = CONCAT44(fVar47 - pfVar25[6],fVar48 - pfVar25[4]);
          pdb_140df4520(&puStack_3b8);
          fVar38 = fVar42 - fVar49 * 0.0;
          fVar43 = fVar49 * 0.0 - fVar50;
          fVar33 = fVar50 * 0.0 - fVar42 * 0.0;
          fVar46 = fVar11 / SQRT(fVar38 * fVar38 + fVar33 * fVar33 + fVar43 * fVar43);
          fVar43 = fVar43 * fVar46;
          fVar33 = fVar33 * fVar46;
          fVar38 = fVar38 * fVar46;
          fVar39 = fVar49 * fVar43 - fVar42 * fVar33;
          fVar41 = fVar50 * fVar33 - fVar49 * fVar38;
          fVar40 = fVar42 * fVar38 - fVar50 * fVar43;
          fVar45 = (float)((uint)fVar42 ^ _DAT_142e37820);
          fVar46 = *(float *)(lStack_1b8 + 0x28) + *(float *)(lStack_1b8 + 0x28);
          auVar51._8_8_ = 0;
          auVar51._0_8_ = puStack_3b8;
          auVar52._4_4_ = fVar46;
          auVar52._0_4_ = fVar46;
          auVar52._8_8_ = 0;
          auVar52 = divps(auVar51,auVar52);
          *puStack_250 = uStack_1cc;
          *puStack_268 = auVar52._0_8_;
          *(float *)(puStack_268 + 1) = pcStack_3b0._0_4_ / fVar46;
          fVar46 = _DAT_142e36f50;
          if (0.0 <= fVar50) {
            fVar40 = fVar40 - fVar43;
            if (fVar40 <= 0.0) {
              fVar44 = (fVar50 + fVar11) - fVar40;
              fVar42 = fVar38 - fVar42;
              fVar40 = fVar41 + fVar33;
              fVar45 = fVar49 + fVar39;
              fVar33 = fVar44;
            }
            else {
              fVar44 = fVar33 + fVar41;
              fVar40 = fVar50 + fVar11 + fVar40;
              fVar42 = fVar39 - fVar49;
              fVar45 = fVar45 - fVar38;
              fVar33 = fVar40;
            }
            fVar43 = _DAT_142e36f50 / SQRT(fVar33);
            fVar44 = fVar43 * fVar44;
            fVar40 = fVar43 * fVar40;
            fVar42 = fVar43 * fVar42;
            fVar43 = fVar43 * fVar45;
          }
          else {
            fVar43 = fVar43 + fVar40;
            if (fVar43 <= 0.0) {
              fVar43 = (fVar11 - fVar50) - fVar43;
              fVar45 = _DAT_142e36f50 / SQRT(fVar43);
              fVar44 = fVar45 * (fVar38 - fVar42);
              fVar40 = fVar45 * (fVar39 - fVar49);
              fVar42 = fVar45 * fVar43;
              fVar43 = fVar45 * (fVar33 - fVar41);
            }
            else {
              fVar43 = (fVar11 - fVar50) + fVar43;
              fVar50 = _DAT_142e36f50 / SQRT(fVar43);
              fVar44 = fVar50 * (fVar49 + fVar39);
              fVar40 = fVar50 * (fVar45 - fVar38);
              fVar42 = fVar50 * (fVar33 - fVar41);
              fVar43 = fVar43 * fVar50;
            }
          }
          *puStack_128 = uStack_1d0;
          *pfVar25 = fVar44;
          pfVar25[1] = fVar40;
          pfVar25[2] = fVar42;
          pfVar25[3] = fVar43;
          *(ulonglong *)(pfVar25 + 4) = CONCAT44(fVar34 * fVar37 + extraout_XMM0_Da * fVar35,fVar48)
          ;
          pfVar25[6] = fVar47;
          pfVar25[7] = 1.0;
          pfVar25[8] = 1.0;
          pfVar25[9] = 1.0;
          fVar40 = _DAT_142f6d800 / (float)uStack_120 + fVar11;
          fVar33 = (float)pdb_140de8220(fVar40);
          pfVar26 = pfVar25 + 4;
          fVar34 = 0.0;
          if (0.0 <= fVar33) {
            fVar34 = fVar33;
          }
          fVar33 = fVar11;
          if (fVar34 <= fVar11) {
            fVar33 = fVar34;
          }
          *puStack_118 = uStack_f4;
          *(float *)(lVar24 + 0xf4) = fVar33;
          fVar35 = fVar33 + _DAT_142e36f38 + fVar33 + _DAT_142e36f38;
          fVar34 = 0.0;
          if (0.0 <= fVar35) {
            fVar34 = fVar35;
          }
          fVar35 = fVar11;
          if (fVar34 <= fVar11) {
            fVar35 = fVar34;
          }
          fVar34 = (_DAT_142e3788c - (fVar35 + fVar35)) * fVar35 * fVar35;
          *puStack_240 = uStack_1c8;
          *pfStack_248 = fVar34 + fVar34;
          if ((fVar33 <= _DAT_142e37988) || (1 < *pbStack_108)) {
            if ((fVar46 < fVar33) && (*pbStack_108 == 3)) {
              lVar23 = lVar24 + 0x30;
              pdb_140a8a6f0(lVar23);
              pcStack_3b0 = (code *)CONCAT44(pcStack_3b0._4_4_,pfVar25[6]);
              puStack_3b8 = *(undefined4 **)pfVar26;
              pdb_140a8e190(lVar23);
              fVar34 = (float)pdb_142b4d1f0(uStack_1f0);
              if (fVar34 <= 0.0) {
                fVar34 = 0.0;
              }
              pdb_140a8e0c0(lVar23,SQRT(fVar34));
            }
          }
          else {
            lVar23 = lVar24 + 0x60;
            pdb_140a8a6f0(lVar23);
            pcStack_3b0 = (code *)CONCAT44(pcStack_3b0._4_4_,pfVar25[6]);
            puStack_3b8 = *(undefined4 **)pfVar26;
            pdb_140a8e190(lVar23);
            fVar34 = (float)pdb_142b4d1f0(uStack_1f0);
            if (fVar34 <= 0.0) {
              fVar34 = 0.0;
            }
            pdb_140a8e0c0(lVar23,SQRT(fVar34));
          }
          if (((*(float *)(lVar24 + 0xec) < _DAT_142e37848) ||
              (_DAT_143020f30 <= *(float *)(lVar24 + 0xec))) || (*pbStack_108 == 2)) {
            *puStack_118 = uStack_f4;
            pdb_140a87f70(lVar24 + 0xa8);
          }
          else {
            *puStack_118 = uStack_f4;
            lVar23 = lVar24 + 0xa8;
            pdb_140a87e10(lVar23);
            uVar19 = pdb_140a881f0(lVar23);
            pcStack_3b0 = (code *)CONCAT44(pcStack_3b0._4_4_,pfVar25[6]);
            puStack_3b8 = *(undefined4 **)pfVar26;
            pdb_140a8e190(uVar19,&puStack_3b8);
            uVar19 = pdb_140a881f0(lVar23);
            pdb_140a8e730(uVar19,&UNK_143600c10,9,fVar33);
            uVar19 = pdb_140a881f0(lVar23);
            pdb_140a8e730(uVar19,&UNK_143600c19,0xd);
          }
          if ((_DAT_142e37ae4 < fVar33) && (*pbStack_108 == 0)) {
            *puStack_1c0 = uStack_134;
            *pbStack_108 = 1;
            *puStack_260 = uStack_1c4;
            lVar23 = *(longlong *)(lStack_1e8 + 0x30);
            uVar19 = *(undefined8 *)(lStack_1e8 + 0x40);
            if (lVar23 == *(longlong *)(lStack_1e8 + 0x20)) {
              pdb_142d7e980(lStack_258);
            }
            lVar17 = *(longlong *)(lStack_1e8 + 0x28);
            *(undefined4 **)(lVar17 + lVar23 * 0x10) = puStack_1e0;
            *(undefined8 *)(lVar17 + 8 + lVar23 * 0x10) = uVar19;
            *(longlong *)(lStack_1e8 + 0x30) = lVar23 + 1;
            *(longlong *)(lStack_1e8 + 0x40) = *(longlong *)(lStack_1e8 + 0x40) + 1;
          }
          fVar34 = fVar11 - _DAT_142e37884 / (float)uStack_120;
          fVar33 = (*(float *)(lVar24 + 0xec) - fVar34) / (fVar40 - fVar34);
          fVar34 = 0.0;
          if (0.0 <= fVar33) {
            fVar34 = fVar33;
          }
          fVar33 = fVar11;
          if (fVar34 <= fVar11) {
            fVar33 = fVar34;
          }
          fVar33 = (_DAT_142e3788c - (fVar33 + fVar33)) * fVar33 * fVar33;
          fVar40 = fVar33 * _DAT_142e37adc;
          fVar34 = *(float *)(lStack_1b8 + 0x28);
          *puStack_118 = uStack_f4;
          *(float *)(lVar24 + 0xf0) =
               (fVar40 + (fVar11 - fVar33)) * fVar34 + *(float *)(lVar24 + 0xf0);
        }
        else {
          bVar20 = 2;
          if (lVar23 != 0) {
            if ((int)lVar23 != 2) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143600ba0,0x28,&UNK_143600c28);
            }
            pcStack_3b0 = (code *)uStack_218;
            puStack_3a8 = (undefined8 *)uStack_210;
            pcStack_3a0 = (code *)uStack_200;
            puStack_398 = puStack_208;
            puStack_3b8 = puVar9;
            pdb_140f04aa0(&puStack_3b8,&UNK_143600c40);
            bVar20 = 3;
          }
          *puStack_1c0 = uStack_134;
          *pbStack_108 = bVar20;
          uVar19 = *(undefined8 *)(pfVar25 + 4);
          fVar34 = pfVar25[6];
          fVar33 = *pfVar25;
          fVar40 = pfVar25[1];
          fVar35 = pfVar25[2];
          fVar45 = pfVar25[3];
          fVar42 = fVar40 * fVar40 + fVar33 * fVar33;
          fVar37 = fVar35 * _UNK_142e37b08 + fVar40 * _UNK_142e37b04 + fVar33 * _DAT_142e37b00;
          fVar37 = fVar37 + fVar37;
          uStack_110 = CONCAT44((fVar45 + fVar45) *
                                (fVar33 * _UNK_142e37b18 - fVar40 * _UNK_142e377a8) +
                                fVar37 * fVar35 +
                                (fVar45 * fVar45 - (fVar42 + fVar35 * fVar35)) * _UNK_142e37af8,
                                (fVar45 + fVar45) *
                                (fVar40 * _DAT_142e37b10 - fVar35 * _DAT_142e377a0) +
                                fVar37 * fVar33 +
                                (fVar45 * fVar45 - (fVar42 + fVar35 * fVar35)) * _DAT_142e37af0);
          pdb_140df4520(&puStack_3b8);
          unaff_XMM8_Db =
               (float)((ulonglong)uVar19 >> 0x20) + (float)((ulonglong)puStack_3b8 >> 0x20);
          *puStack_128 = uStack_1d4;
          *puVar32 = 1;
          *(ulonglong *)(puVar32 + 1) = CONCAT44(unaff_XMM8_Db,(float)uVar19 + SUB84(puStack_3b8,0))
          ;
          puVar32[3] = fVar34 + pcStack_3b0._0_4_;
          *puStack_118 = uStack_f4;
          *(undefined2 *)(lVar24 + 0xe0) = 1;
          *(undefined8 *)(lVar24 + 0xe4) = _DAT_1435b2b50;
          *puStack_130 = uStack_138;
          *uStack_120 = 0x3f800000;
        }
      }
    }
    else {
      pcStack_3b0 = (code *)uStack_218;
      puStack_3a8 = (undefined8 *)uStack_210;
      pcStack_3a0 = (code *)uStack_200;
      puStack_398 = puStack_208;
      puStack_3b8 = puVar9;
      pdb_140f04aa0(&puStack_3b8);
    }
  }
LAB_14294ef1f:
  if (lStack_238 == 0) {
    return;
  }
  plVar16 = (longlong *)pdb_140e97000();
  if ((char)plVar16[0xd] != '\x01') goto LAB_14294efd9;
  do {
    if (*plVar16 == 0) {
      *plVar16 = -1;
      plStack_100 = plVar16;
      pdb_140e95370(plVar16 + 1,uStack_230);
      *plStack_100 = *plStack_100 + 1;
      return;
    }
LAB_14294efcd:
    plVar16 = (longlong *)pdb_142dc8090(&UNK_1436007f8);
LAB_14294efd9:
    plVar16 = (longlong *)pdb_142e2d6a0(plVar16,0);
  } while (plVar16 != (longlong *)0x0);
LAB_14294f001:
  pdb_142dc7890(&UNK_143600788);
LAB_14294f00e:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143600b40,0x2c,&UNK_143600b70);
}

