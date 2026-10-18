// VA 0x140b44b50, PDB extent 9340 bytes
// country_core::systems::ui_move_wall_group::ui_move_wall_group
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140b48be3) overlaps instruction at (ram,0x000140b48be2)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui_move_wall_group::ui_move_wall_group
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
   Extent: 9340 */

void pdb_140b44b50(longlong *param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,longlong *param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
                  longlong param_13,undefined8 *param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [12];
  float fVar11;
  undefined8 uVar12;
  longlong *plVar13;
  float fVar14;
  undefined4 uVar15;
  float *pfVar16;
  byte bVar17;
  char cVar18;
  undefined4 uVar19;
  uint uVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  float fVar25;
  undefined4 *puVar26;
  byte bVar27;
  float **ppfVar28;
  longlong lVar29;
  undefined4 *puVar30;
  ulonglong *puVar31;
  undefined1 uVar32;
  bool bVar33;
  char cVar34;
  undefined8 *puVar35;
  char *pcVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  byte *pbVar39;
  ushort uVar40;
  longlong lVar41;
  longlong lVar42;
  undefined *puVar43;
  ulonglong *puVar44;
  ulonglong *puVar45;
  ulonglong *puVar46;
  ulonglong *puVar47;
  undefined8 uVar48;
  byte *pbVar49;
  float *pfVar50;
  undefined8 uVar51;
  bool bVar52;
  bool bVar53;
  byte bVar54;
  float fVar55;
  ulonglong extraout_XMM0_Qa;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float *pfVar62;
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  undefined8 *puStackX_8;
  longlong lStack_428;
  longlong lStack_420;
  longlong lStack_418;
  longlong lStack_410;
  longlong lStack_408;
  longlong lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  longlong lStack_358;
  longlong lStack_350;
  longlong lStack_348;
  longlong lStack_340;
  float *pfStack_338;
  float *pfStack_330;
  float *pfStack_328;
  float *pfStack_320;
  float *pfStack_318;
  float *pfStack_310;
  longlong lStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  longlong lStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  float fStack_2dc;
  ulonglong uStack_2d8;
  undefined4 *puStack_2d0;
  longlong *plStack_2c8;
  undefined8 uStack_2c0;
  float *pfStack_2b8;
  undefined8 uStack_2b0;
  float *pfStack_2a8;
  float *pfStack_2a0;
  float *pfStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  float fStack_278;
  float fStack_274;
  undefined8 uStack_270;
  float fStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  float fStack_25c;
  ulonglong uStack_258;
  undefined4 *puStack_250;
  byte *pbStack_248;
  undefined4 *puStack_240;
  float fStack_238;
  float *pfStack_230;
  longlong lStack_228;
  float *pfStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float *pfStack_178;
  float *pfStack_170;
  float *pfStack_168;
  float *pfStack_160;
  float *pfStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong uStack_138;
  float *pfStack_130;
  longlong lStack_128;
  float *pfStack_118;
  float *pfStack_110;
  float *pfStack_108;
  longlong lStack_100;
  float *pfStack_f8;
  float *pfStack_f0;
  float *pfStack_e8;
  float *pfStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_c9;
  longlong *plStack_c8;
  ulonglong uStack_c0;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  char cStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_3b8 = *param_5;
  uStack_3b0 = param_5[1];
  uStack_3a8 = param_5[2];
  uStack_3a0 = param_5[3];
  plStack_2c8 = (longlong *)param_5[4];
  uStack_2c0 = param_5[5];
  pfStack_2b8 = (float *)param_5[6];
  uStack_2b0 = (float *)param_5[7];
  uVar48 = *param_7;
  pfVar50 = (float *)param_7[4];
  lStack_358 = *param_8;
  lStack_350 = param_8[1];
  lStack_348 = param_8[2];
  lStack_340 = param_8[3];
  pfStack_178 = (float *)param_8[4];
  uStack_148 = (undefined4)param_8[6];
  fStack_144 = (float)((ulonglong)param_8[6] >> 0x20);
  uStack_140 = *(undefined4 *)((longlong)param_8 + 0x3c);
  pfStack_e0 = (float *)*param_10;
  uStack_3d8 = param_12[4];
  uStack_3d0 = param_12[5];
  uStack_3c8 = param_12[6];
  uStack_3c0 = param_12[7];
  uStack_3f8 = param_12[8];
  uStack_3f0 = param_12[9];
  uStack_3e8 = param_12[10];
  uStack_3e0 = param_12[0xb];
  uStack_378 = *(undefined8 *)(param_13 + 0x20);
  uStack_370 = *(undefined8 *)(param_13 + 0x28);
  uStack_368 = *(undefined8 *)(param_13 + 0x30);
  uStack_360 = *(undefined8 *)(param_13 + 0x38);
  uStack_398 = *(undefined8 *)(param_13 + 0x60);
  uStack_390 = *(undefined8 *)(param_13 + 0x68);
  uStack_388 = *(undefined8 *)(param_13 + 0x70);
  uStack_380 = *(undefined8 *)(param_13 + 0x78);
  pfStack_160 = (float *)param_10[4];
  pfStack_158 = (float *)param_11[4];
  uVar51 = param_11[8];
  pfVar22 = (float *)param_11[0xc];
  pfVar3 = *(float **)(param_13 + 0x40);
  puVar4 = *(undefined4 **)(param_13 + 0x50);
  uVar19 = *(undefined4 *)(param_13 + 0x5c);
  if ((*(char *)*param_3 != '\0') || (*(int *)((char *)*param_3 + 8) != 3)) goto LAB_140b44d23;
  lVar21 = *param_4;
  uStack_c0 = *(ulonglong *)(lVar21 + 0x10);
  uVar37 = uStack_c0 * 8;
  pfStack_2a8 = (float *)uVar48;
  pfStack_130 = pfVar22;
  plStack_c8 = param_1;
  if (0x7ffffffffffffff8 < uVar37 || uStack_c0 >> 0x3d != 0) {
    param_1 = (longlong *)0x0;
LAB_140b44d18:
    pdb_142dc7e2a(param_1,uVar37);
LAB_140b44d23:
    if (param_1[0xc] != 0) {
      pfStack_e0 = (float *)(param_1 + 0xc);
      plStack_c8 = param_1;
      pdb_1409a01b0();
      lVar21 = _UNK_1430593e8;
      plStack_c8[2] = _DAT_1430593e0;
      plStack_c8[3] = lVar21;
      lVar21 = _UNK_1430593d8;
      *plStack_c8 = _DAT_1430593d0;
      plStack_c8[1] = lVar21;
      plStack_c8[4] = 0;
      plStack_c8[10] = 0;
      plStack_c8[6] = 0;
      plStack_c8[7] = 0;
      *(undefined8 *)((longlong)plStack_c8 + 0x3c) = 0;
      *(undefined8 *)((longlong)plStack_c8 + 0x44) = 0;
      plStack_c8[0xb] = 8;
      pfStack_e0[0] = 0.0;
      pfStack_e0[1] = 0.0;
      *(longlong *)((longlong)pfStack_e0 + 8) = 0;
      plStack_c8[0xe] = 8;
      plStack_c8[0xf] = 0;
      *param_2 = 0;
      param_2[2] = 0;
      param_2[4] = 0;
      param_2[6] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      return;
    }
    return;
  }
  uVar48 = *(undefined8 *)(lVar21 + 8);
  puStack_2d0 = puVar4;
  uStack_17c = uVar19;
  pfStack_170 = pfVar50;
  pfStack_168 = pfVar3;
  lStack_128 = lVar21;
  if (uVar37 == 0) {
    uStack_d8 = (ulonglong *)0x8;
    uStack_138 = 0;
    uVar23 = uStack_c0;
    if (uStack_c0 == 0) goto LAB_140b44f89;
LAB_140b44eae:
    uVar38 = uStack_c0;
    puVar24 = uStack_d8;
    uStack_150 = uVar51;
    pub_142e32760(uStack_d8,uVar48);
    uVar23 = uStack_c0;
    uVar51 = uStack_150;
    if (uVar38 != 1) {
      if (uStack_c0 < 0x15) {
        if ((uStack_c0 & 1) == 0) {
          uVar38 = *uStack_d8;
          uVar5 = uStack_d8[1];
          if (uVar5 < uVar38) {
            lVar21 = 8;
            do {
              *(ulonglong *)((longlong)uStack_d8 + lVar21) = uVar38;
              puVar24 = uStack_d8;
              if (lVar21 == 8) goto LAB_140b44f63;
              uVar38 = *(ulonglong *)((longlong)uStack_d8 + lVar21 + -0x10);
              lVar21 = lVar21 + -8;
            } while (uVar5 < uVar38);
            puVar24 = (ulonglong *)(lVar21 + (longlong)uStack_d8);
LAB_140b44f63:
            *puVar24 = uVar5;
          }
          puVar24 = uStack_d8 + 2;
        }
        else {
          puVar24 = uStack_d8 + 1;
        }
        if (uVar37 != 0x10) {
          puVar31 = puVar24 + 1;
          do {
            uVar38 = puVar24[-1];
            uVar37 = *puVar24;
            puVar46 = puVar24;
            puVar47 = puVar31;
            if (uVar37 < uVar38) {
              do {
                puVar44 = puVar46 + -1;
                *puVar46 = uVar38;
                puVar45 = uStack_d8;
                if (puVar44 == uStack_d8) break;
                uVar38 = puVar46[-2];
                puVar45 = puVar44;
                puVar46 = puVar44;
              } while (uVar37 < uVar38);
              *puVar45 = uVar37;
              uVar38 = *puVar24;
              uVar37 = puVar24[1];
              if (uVar37 < uVar38) goto LAB_140b465fe;
            }
            else {
              uVar38 = *puVar24;
              uVar37 = puVar24[1];
              if (uVar37 < uVar38) {
LAB_140b465fe:
                do {
                  puVar46 = puVar47 + -1;
                  *puVar47 = uVar38;
                  puVar44 = uStack_d8;
                  if (puVar46 == uStack_d8) break;
                  uVar38 = puVar47[-2];
                  puVar44 = puVar46;
                  puVar47 = puVar46;
                } while (uVar37 < uVar38);
                *puVar44 = uVar37;
              }
            }
            puVar24 = puVar24 + 2;
            puVar31 = puVar31 + 2;
          } while (puVar24 != uStack_d8 + uStack_c0);
        }
      }
      else {
        cStack_b1 = 1;
        pdb_140a91360(uStack_d8,uStack_c0);
        uVar51 = uStack_150;
      }
      goto LAB_140b44f89;
    }
    pfStack_2a0 = (float *)(plStack_c8 + 10);
    if (plStack_c8[0xc] == 1) goto LAB_140b44fb8;
LAB_140b44fe4:
    lVar21 = lStack_128;
    pdb_1409a01b0();
    lVar29 = _UNK_1430593e8;
    plStack_c8[2] = _DAT_1430593e0;
    plStack_c8[3] = lVar29;
    lVar29 = _UNK_1430593d8;
    *plStack_c8 = _DAT_1430593d0;
    plStack_c8[1] = lVar29;
    plStack_c8[4] = 0;
    plStack_c8[6] = 0;
    plStack_c8[7] = 0;
    *(undefined8 *)((longlong)plStack_c8 + 0x3c) = 0;
    *(undefined8 *)((longlong)plStack_c8 + 0x44) = 0;
    plStack_c8[10] = uStack_138;
    plStack_c8[0xb] = (longlong)uStack_d8;
    plStack_c8[0xc] = uStack_c0;
    plStack_c8[0xd] = 0;
    plStack_c8[0xe] = 8;
    plStack_c8[0xf] = 0;
    *param_2 = 0;
    param_2[2] = 0;
    param_2[4] = 0;
    param_2[6] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    uVar19 = 0;
  }
  else {
    uStack_150 = uVar48;
    pdb_14007ee60();
    uStack_d8 = (ulonglong *)pub_1406abab0(uVar37,8);
    param_1 = (longlong *)0x8;
    if (uStack_d8 == (ulonglong *)0x0) goto LAB_140b44d18;
    uStack_138 = uStack_c0;
    uVar48 = uStack_150;
    uVar23 = uStack_c0;
    if (uStack_c0 != 0) goto LAB_140b44eae;
LAB_140b44f89:
    pfStack_2a0 = (float *)(plStack_c8 + 10);
    if (plStack_c8[0xc] != uVar23) goto LAB_140b44fe4;
    puVar24 = uStack_d8;
    if (uVar23 == 0) {
      uVar19 = (undefined4)CONCAT71((int7)((ulonglong)pfStack_2a0 >> 8),1);
      lVar21 = lStack_128;
    }
    else {
LAB_140b44fb8:
      uVar37 = 0;
      do {
        if (*(ulonglong *)(plStack_c8[0xb] + uVar37 * 8) != puVar24[uVar37]) goto LAB_140b44fe4;
        uVar37 = uVar37 + 1;
      } while (uStack_c0 != uVar37);
      uVar19 = (undefined4)CONCAT71((int7)((ulonglong)plStack_c8[0xb] >> 8),1);
      lVar21 = lStack_128;
    }
  }
  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar19);
  cStack_b1 = (char)uVar19;
  pdb_140b46fd0(&pfStack_298,*(undefined8 *)(lVar21 + 8),*(undefined8 *)(lVar21 + 0x10),uStack_3b8,
                pfStack_158);
  fVar14 = fStack_278;
  fVar65 = uStack_280._4_4_;
  fVar64 = (float)uStack_280;
  fVar25 = uStack_288._4_4_;
  fVar55 = (float)uStack_288;
  uStack_288 = (longlong **)CONCAT44(uStack_288._4_4_,(float)uStack_288);
  uStack_280 = (undefined8 *)CONCAT44(uStack_280._4_4_,(float)uStack_280);
  uStack_270 = (longlong *)CONCAT44(uStack_270._4_4_,(undefined4)uStack_270);
  if ((char)pfStack_298 == '\0') goto LAB_140b45ead;
  uVar19 = uStack_290._4_4_;
  pfVar50 = (float *)CONCAT44((float)uStack_280,uStack_288._4_4_);
  pfStack_298 = (float *)&UNK_143058ef8;
  uStack_290 = (float *)0x12;
  cStack_b1 = (char)uStack_c0;
  lVar21 = pdb_140bbbcb0(&pfStack_298);
  cVar18 = (char)uStack_c0;
  if (((*(byte *)(pfStack_e0 + 6) == 2) && (*(longlong *)(pfStack_e0 + 0xe) == lVar21)) &&
     (*(byte *)((longlong)pfStack_e0 + 0x19) != 2)) {
LAB_140b45eb3:
    if (uStack_138 == 0 || cVar18 != '\x01') {
      return;
    }
  }
  else {
    lVar21 = plStack_c8[6];
    cStack_b1 = cVar18;
    pdb_140e08fa0(&pfStack_298,uVar51);
    plVar13 = plStack_c8;
    fVar61 = _DAT_142e36f28 /
             SQRT((float)uStack_290 * (float)uStack_290 + pfStack_298._0_4_ * pfStack_298._0_4_);
    fVar11 = (float)((ulonglong)lVar21 >> 0x20);
    if ((int)fVar61 - 1U < 0x7fffff || (int)ABS(fVar61) - 0x800000U < 0x7f000000 && -1 < (int)fVar61
       ) {
      auVar58 = ZEXT416((uint)_DAT_142e36f28);
      lVar21 = CONCAT44(fVar61 * (float)((uint)(float)uStack_290 ^ _UNK_142e37824),
                        fVar61 * (float)((uint)pfStack_298._0_4_ ^ _DAT_142e37820));
    }
    else {
      fVar61 = (float)lVar21;
      auVar56._0_4_ = _DAT_142e36f28 / SQRT(fVar11 * fVar11 + fVar61 * fVar61);
      auVar58 = ZEXT416((uint)auVar56._0_4_);
      lVar21 = _DAT_1430151a0;
      if ((int)auVar56._0_4_ - 1U < 0x7fffff ||
          (int)ABS(auVar56._0_4_) - 0x800000U < 0x7f000000 && -1 < (int)auVar56._0_4_) {
        auVar56._4_4_ = auVar56._0_4_;
        auVar56._8_8_ = 0;
        auVar58 = auVar56;
        lVar21 = CONCAT44(fVar11 * auVar56._0_4_,fVar61 * auVar56._0_4_);
      }
    }
    uVar32 = (undefined1)uStack_c0;
    plStack_c8[6] = lVar21;
    fStack_2dc = fVar25;
    auVar10._4_8_ = auVar58._8_8_;
    auVar10._0_4_ = _UNK_143058d34;
    auVar58._0_8_ = auVar10._0_8_ << 0x20;
    auVar58._8_4_ = _UNK_143058d38;
    auVar58._12_4_ = _UNK_143058d3c;
    auVar57._4_12_ = auVar58._4_12_;
    auVar57._0_4_ = fVar65;
    uStack_2d8 = auVar57._0_8_;
    pdb_14007ee60();
    pfVar22 = (float *)pub_1406abab0(0x11,1);
    uVar48 = _UNK_143058f12;
    cStack_b1 = uVar32;
    if (pfVar22 == (float *)0x0) {
      pdb_142dc7e2a(1,0x11);
code_r0x000140b4662e:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    *(undefined8 *)pfVar22 = _DAT_143058f0a;
    *(undefined8 *)(pfVar22 + 2) = uVar48;
    *(byte *)(pfVar22 + 4) = 0x70;
    pfStack_118 = (float *)0x11;
    pfStack_108 = (float *)0x11;
    fStack_278 = fVar25;
    fStack_274 = fVar65;
    uStack_270._0_4_ = (undefined4)plVar13[6];
    uStack_270._4_4_ = (undefined4)((ulonglong)plVar13[6] >> 0x20);
    pfStack_298 = &fStack_2dc;
    uStack_290 = (float *)0x1;
    uStack_288._0_4_ = 1.12104e-44;
    uStack_288._4_4_ = 0.0;
    uStack_280._0_4_ = 0.0;
    uStack_280._4_4_ = 0.0;
    fStack_268 = fVar64;
    uStack_264 = 0;
    uStack_260 = uVar19;
    fStack_25c = 0.0;
    uStack_258 = uStack_258 & 0xffffffffffffff00;
    pfStack_110 = pfVar22;
    uVar20 = pdb_140c4a450(param_2,&pfStack_118,&pfStack_298,pfStack_170,pfStack_e0,pfStack_160,
                           pfStack_130);
    auVar63._8_4_ = (int)extraout_XMM0_Qb;
    auVar63._0_8_ = extraout_XMM0_Qa;
    auVar63._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    pbVar49 = (byte *)0x2;
    if ((byte)uVar20 < 3) {
      pfStack_298 = (float *)*param_11;
      uStack_290 = (float *)param_11[1];
      uStack_288._0_4_ = (float)param_11[2];
      uStack_288._4_4_ = (float)((ulonglong)param_11[2] >> 0x20);
      uStack_280._0_4_ = (float)param_11[3];
      uStack_280._4_4_ = (float)((ulonglong)param_11[3] >> 0x20);
      pfStack_f0 = (float *)CONCAT44(pfStack_f0._4_4_,fVar65);
      pfStack_118 = _DAT_142e4e650;
      pfStack_110 = _UNK_142e4e658;
      cStack_b1 = (char)uStack_c0;
      ppfVar28 = &pfStack_118;
      pfStack_f8 = pfVar50;
      lVar21 = pdb_140b50920(&pfStack_f8,ppfVar28,&pfStack_298,pfStack_e0,0,fVar55,fVar14 < fVar64,
                             fVar14,pfStack_160);
      if (((lVar21 != 0) && (*(char *)(lVar21 + 0x18) == '\x02')) &&
         (*(float ***)(lVar21 + 0x38) == ppfVar28)) {
        pbVar49 = (byte *)(ulonglong)*(byte *)(lVar21 + 0x19);
      }
    }
    plVar13 = plStack_c8;
    pfVar16 = pfStack_108;
    pfVar3 = _UNK_142f94738;
    pfVar22 = _DAT_142f94730;
    pcVar36 = (char *)((ulonglong)(uVar20 & 0xff) << 0x20);
    pbVar39 = (byte *)(extraout_XMM0_Qa & 0xffffffff);
    if ((byte)uVar20 == 2) {
      pcVar36 = (char *)0x500000000;
      pbVar39 = pbVar49;
    }
    bVar17 = (byte)pbVar39;
    bVar54 = (byte)((ulonglong)pcVar36 >> 0x20);
    if (pcVar36 == (char *)0x500000000) {
      bVar54 = bVar17;
    }
    bVar27 = 3;
    if (1 < bVar54) {
      bVar27 = bVar54 - 2;
    }
    iVar2 = *(int *)(&UNK_143059570 + (ulonglong)bVar27 * 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar27) {
    case 1:
      pfVar50 = (float *)(plStack_c8 + 0xd);
      pdb_140b4b590(pfVar50);
      pfStack_298 = *(float **)(lStack_128 + 8);
      uStack_290 = pfStack_298 + *(longlong *)(lStack_128 + 0x10) * 2;
      uStack_288 = &plStack_2c8;
      uStack_280 = &uStack_3b8;
      fStack_278 = (float)param_6;
      fStack_274 = (float)((ulonglong)param_6 >> 0x20);
      uStack_270 = &lStack_358;
      cStack_b1 = (char)uStack_c0;
      pdb_140af3660(&pfStack_118,&pfStack_298);
      lVar21 = lStack_128;
      if (SBORROW8(0,(longlong)pfStack_118)) {
LAB_140b45ead:
        cVar18 = (char)uStack_c0;
        goto LAB_140b45eb3;
      }
      pfStack_e8 = pfStack_108;
      pfStack_f8 = pfStack_118;
      pfStack_f0 = pfStack_110;
      uStack_c9 = 1;
      pfStack_e0 = pfVar50;
      pdb_1415f22b0(&pfStack_118,*(longlong *)(lStack_128 + 8),
                    *(longlong *)(lStack_128 + 8) + *(longlong *)(lStack_128 + 0x10) * 8);
      pfVar22 = pfStack_108;
      uVar19 = uStack_140;
      pfVar50 = pfStack_178;
      puVar4 = (undefined4 *)CONCAT44(fStack_144,uStack_148);
      if (pfStack_108 == pfStack_118) {
        uStack_b5 = 1;
        pdb_142d7e980(&pfStack_118);
      }
      pfStack_108 = (float *)((longlong)pfVar22 + 1);
      (pfStack_110 + (longlong)pfVar22 * 4)[0] = 1.4013e-45;
      (pfStack_110 + (longlong)pfVar22 * 4)[1] = 0.0;
      *puVar4 = uVar19;
      puVar43 = &DAT_143058f0a;
      if (pcVar36 == (char *)0x500000000) {
        puVar43 = &UNK_143058f1b;
      }
      uStack_b5 = 1;
      pdb_140aa3450(pfVar50,pfStack_110,pfStack_108,lStack_358,param_9,puVar43,
                    (pcVar36 != (char *)0x500000000) * '\x02' + '\x0f');
      puVar35 = *(undefined8 **)(lVar21 + 8);
      puVar1 = puVar35 + *(longlong *)(lVar21 + 0x10);
      for (; puVar35 != puVar1; puVar35 = puVar35 + 1) {
        uVar48 = *puVar35;
        *puVar4 = uVar19;
        uStack_b5 = 1;
        pdb_140c419b0(pfVar50,uVar48,lStack_358);
      }
      *puVar4 = uVar19;
      uStack_290 = (float *)(lStack_358 + 0x90);
      if (*(longlong *)(lStack_358 + 0x90) == 0) {
        uStack_290 = (float *)0x0;
      }
      pfStack_298 = (float *)0x1;
      uStack_288._0_4_ = 0.0;
      uStack_288._4_4_ = 0.0;
      uStack_260 = 0;
      fStack_25c = 0.0;
      uStack_b5 = 1;
      pdb_1414e0e70(&pfStack_298,pfVar50 + 0xc);
      pdb_140967ae0(pfStack_e0);
      plVar13 = plStack_c8;
      *(float **)(pfStack_e0 + 4) = pfStack_e8;
      *(float **)pfStack_e0 = pfStack_f8;
      *(float **)(pfStack_e0 + 2) = pfStack_f0;
      *(float *)(plStack_c8 + 8) = fVar25;
      *(float *)((longlong)plStack_c8 + 0x44) = fVar65;
      lVar21 = _UNK_14306e1c8;
      *plStack_c8 = _DAT_14306e1c0;
      plStack_c8[1] = lVar21;
      lVar21 = _UNK_14306e1d8;
      plStack_c8[2] = _DAT_14306e1d0;
      plStack_c8[3] = lVar21;
      *(float *)(plStack_c8 + 4) = fVar25;
      *(float *)((longlong)plStack_c8 + 0x24) = fVar65;
      if (pcVar36 == (char *)0x500000000) {
        *(uint *)(plStack_c8 + 9) = (uint)(fVar14 < fVar64);
        *(float *)((longlong)plStack_c8 + 0x4c) = fVar64;
        fVar55 = (float)pdb_140b47b70();
        plVar13[7] = CONCAT44(fVar64 - fVar65,fVar55 - fVar25);
      }
      else {
        *(undefined4 *)(plStack_c8 + 9) = 0;
      }
      if (pfStack_118 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_110,(longlong)pfStack_118 << 4,8);
      }
      break;
    case 2:
      lVar21 = plStack_c8[0xf];
      if (lVar21 == 0) goto LAB_140b45ead;
      if (pcVar36 == (char *)0x500000000) {
        fVar55 = *(float *)((longlong)plStack_c8 + 0x4c);
        fVar25 = (float)pdb_140b47b70((int)plStack_c8[9],&UNK_143059570,pfStack_2a8,pfStack_170);
        fVar64 = (float)plVar13[8];
        fVar65 = (float)((ulonglong)plVar13[8] >> 0x20);
        lStack_308 = CONCAT44((fVar55 - (float)((ulonglong)plVar13[7] >> 0x20)) - fVar65,
                              (fVar25 - (float)plVar13[7]) - fVar64);
        pfStack_318 = _DAT_142f94730;
        pfStack_310 = _UNK_142f94738;
      }
      else {
        fVar64 = (float)plStack_c8[8];
        fVar65 = (float)((ulonglong)plStack_c8[8] >> 0x20);
        fVar55 = (float)pub_142e32b30(pbVar39);
        fVar25 = (float)pub_142e329e0(pbVar39);
        pfStack_318 = (float *)CONCAT44(fVar55,fVar25);
        pfStack_310 = (float *)CONCAT44(fVar25,(uint)fVar55 ^ _DAT_142e37820);
        lStack_308 = CONCAT44(fVar65 - (fVar65 * fVar25 + fVar64 * fVar55),
                              fVar64 - (fVar65 * (float)((uint)fVar55 ^ _DAT_142e37820) +
                                       fVar64 * fVar25));
      }
      lStack_2f8 = CONCAT44(fVar65,fVar64);
      uStack_270._0_4_ = (undefined4)lStack_2f0;
      uStack_270._4_4_ = (undefined4)((ulonglong)lStack_2f0 >> 0x20);
      uStack_288._0_4_ = (float)lStack_308;
      uStack_288._4_4_ = (float)((ulonglong)lStack_308 >> 0x20);
      uStack_280._0_4_ = (float)lStack_300;
      uStack_280._4_4_ = (float)((ulonglong)lStack_300 >> 0x20);
      cStack_b1 = (char)uStack_c0;
      pfStack_298 = pfStack_318;
      uStack_290 = pfStack_310;
      fStack_278 = fVar64;
      fStack_274 = fVar65;
      pdb_140b476c0(&pfStack_f8,plVar13[0xe],lVar21,&pfStack_298,pfStack_158);
      pfVar22 = pfStack_e8;
      pfVar50 = pfStack_f0;
      lStack_428 = *plStack_c8;
      lStack_420 = plStack_c8[1];
      lStack_418 = plStack_c8[2];
      lStack_410 = plStack_c8[3];
      lStack_408 = plStack_c8[4];
      lStack_400 = plStack_c8[5];
      uStack_290 = pfStack_f0 + (longlong)pfStack_e8 * 0x1c;
      pfStack_298 = pfStack_f0;
      uStack_b4 = 1;
      cVar18 = pdb_140b4b6b0(&pfStack_298,*param_12);
      if (cVar18 == '\0') {
        uStack_b4 = 1;
        pdb_140314c70(&uStack_3d8,&UNK_143058f30);
        uStack_b4 = 1;
        pdb_140314c70(&uStack_3f8,&UNK_143058f48);
        uStack_b4 = 1;
        pdb_140b47bc0(plStack_c8,param_13,&uStack_378);
        pfStack_298 = (float *)plStack_c8[0xe];
        uStack_290 = pfStack_298 + plStack_c8[0xf] * 0x32;
        uStack_288 = &plStack_2c8;
        uStack_b4 = 1;
        pdb_1416054d0(&pfStack_338,&pfStack_298);
        uStack_288._0_4_ = SUB84(pfStack_328,0);
        uStack_288._4_4_ = (float)((ulonglong)pfStack_328 >> 0x20);
        pfStack_298 = pfStack_338;
        uStack_290 = pfStack_330;
        uStack_280._0_4_ = (float)((uint)(float)uStack_280 & 0xffffff00);
        uStack_b4 = 1;
        pdb_141b74f20(&uStack_398,&pfStack_298,&UNK_143058f60);
        cStack_b1 = (char)uStack_c0;
        pdb_140967ed0(&pfStack_f8);
      }
      else {
        plStack_c8[4] = lStack_2f8;
        plStack_c8[5] = lStack_2f0;
        plStack_c8[2] = lStack_308;
        plStack_c8[3] = lStack_300;
        *plStack_c8 = (longlong)pfStack_318;
        plStack_c8[1] = (longlong)pfStack_310;
        uStack_b4 = 1;
        pdb_140b475b0(&pfStack_118,plStack_c8[0xe],plStack_c8[0xf],pfVar50,pfVar22);
        uStack_288._0_4_ = SUB84(pfStack_e8,0);
        uStack_288._4_4_ = (float)((ulonglong)pfStack_e8 >> 0x20);
        pfStack_298 = pfStack_f8;
        uStack_290 = pfStack_f0;
        *pfStack_2b8 = uStack_2b0._4_4_;
        pdb_140b47f40(plStack_c8,&pfStack_298,plStack_2c8,param_13,&uStack_378);
        pfStack_338 = pfStack_118;
        pfStack_330 = pfStack_110;
        pfStack_328 = pfStack_108;
        uStack_288._0_4_ = SUB84(pfStack_108,0);
        uStack_288._4_4_ = (float)((ulonglong)pfStack_108 >> 0x20);
        pfStack_298 = pfStack_118;
        uStack_290 = pfStack_110;
        uStack_280._0_4_ = (float)((uint)(float)uStack_280 & 0xffffff00);
        uStack_b4 = 0;
        pdb_141b74f20(&uStack_398,&pfStack_298,&UNK_143058f60);
        if (0.0 < pfStack_130[10]) {
          fVar55 = (float)pdb_140b48640(plStack_c8[0xe],plStack_c8[0xf],&lStack_428,&pfStack_318);
          if (_DAT_143035f20 < fVar55) {
            uStack_b4 = 0;
            pdb_1415e7440(&pfStack_118,pfStack_2a0);
            uStack_280._0_4_ = fVar55 / pfStack_130[10];
            uStack_288._0_4_ = SUB84(pfStack_108,0);
            uStack_288._4_4_ = (float)((ulonglong)pfStack_108 >> 0x20);
            pfStack_298 = pfStack_118;
            uStack_290 = pfStack_110;
            uStack_280._4_4_ = (float)((uint)uStack_280._4_4_ & 0xffffff00);
            uStack_b4 = 0;
            pdb_141b750e0(param_15,&pfStack_298,&UNK_143058f78);
          }
        }
      }
      break;
    case 3:
      uStack_288 = (longlong **)CONCAT44(uStack_288._4_4_,(float)uStack_288);
      uStack_280 = (undefined8 *)CONCAT44(uStack_280._4_4_,(float)uStack_280);
      uStack_270 = (longlong *)CONCAT44(uStack_270._4_4_,(undefined4)uStack_270);
      if (plStack_c8[0xf] == 0) goto LAB_140b45ead;
      cStack_b1 = (char)uStack_c0;
      pdb_140b47bc0(plStack_c8,param_13,&uStack_378);
      pfStack_198 = (float *)0x0;
      uStack_190 = 8;
      uStack_188 = 0;
      uStack_b6 = 1;
      pdb_140a1a7f0(&pfStack_198);
      plVar13 = plStack_c8;
      uStack_b6 = 1;
      pdb_140b4b530(&pfStack_f8,plStack_c8[0xf]);
      pfVar50 = (float *)plVar13[0xe];
      pfStack_160 = pfVar50 + plVar13[0xf] * 0x32;
      pfStack_178 = pfStack_168 + 8;
      bVar33 = false;
code_r0x000140b4574f:
      plVar13 = plStack_2c8;
      if (pfVar50 != pfStack_160) {
        pfStack_298 = *(float **)(pfVar50 + 0x2a);
        pfStack_e0 = pfStack_298;
        if (plStack_2c8[3] != 0) {
          uStack_b2 = 1;
          uStack_b3 = 1;
          uVar23 = pdb_1400af0a0(plStack_2c8 + 4,&pfStack_298);
          pfVar22 = pfStack_e8;
          pfStack_158 = pfVar50 + 0x32;
          lVar21 = *plVar13;
          uVar37 = plVar13[1];
          bVar54 = (byte)(uVar23 >> 0x39);
          auVar58 = ZEXT216(CONCAT11(bVar54,bVar54));
          auVar58 = pshuflw(auVar58,auVar58,0);
          lVar29 = 0;
          while( true ) {
            uVar23 = uVar23 & uVar37;
            auVar56 = *(undefined1 (*) [16])(lVar21 + uVar23);
            auVar60[0] = -(auVar56[0] == auVar58[0]);
            auVar60[1] = -(auVar56[1] == auVar58[1]);
            auVar60[2] = -(auVar56[2] == auVar58[2]);
            auVar60[3] = -(auVar56[3] == auVar58[3]);
            auVar60[4] = -(auVar56[4] == auVar58[4]);
            auVar60[5] = -(auVar56[5] == auVar58[5]);
            auVar60[6] = -(auVar56[6] == auVar58[6]);
            auVar60[7] = -(auVar56[7] == auVar58[7]);
            auVar60[8] = -(auVar56[8] == auVar58[0]);
            auVar60[9] = -(auVar56[9] == auVar58[1]);
            auVar60[10] = -(auVar56[10] == auVar58[2]);
            auVar60[0xb] = -(auVar56[0xb] == auVar58[3]);
            auVar60[0xc] = -(auVar56[0xc] == auVar58[4]);
            auVar60[0xd] = -(auVar56[0xd] == auVar58[5]);
            auVar60[0xe] = -(auVar56[0xe] == auVar58[6]);
            auVar60[0xf] = -(auVar56[0xf] == auVar58[7]);
            uVar40 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar60[0xf] >> 7) << 0xf;
            uVar20 = (uint)uVar40;
            while (uVar40 != 0) {
              uVar8 = 0;
              for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              lVar41 = (uVar8 + uVar23 & uVar37) * -0x78;
              if (pfStack_e0 == *(float **)(lVar21 + -0x78 + lVar41)) {
                lVar21 = lVar21 + lVar41;
                fVar55 = *(float *)(lVar21 + -0x38);
                bVar52 = 1 < (uint)fVar55;
                if (bVar52) {
                  fVar25 = pfVar50[0x2a];
                  fVar55 = pfVar50[0x2b];
                }
                else {
                  uStack_288._0_4_ = (float)*(undefined8 *)(lVar21 + -0x24);
                  uStack_288._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar21 + -0x24) >> 0x20);
                  pfStack_298 = *(float **)(lVar21 + -0x34);
                  uStack_290 = *(float **)(lVar21 + -0x2c);
                  auVar63 = ZEXT416(*(uint *)(lVar21 + -0x18));
                  fVar25 = 1.5;
                }
                if (pfStack_e8 == pfStack_f8) {
                  uStack_b2 = 1;
                  uStack_b3 = 1;
                  pdb_142d7ede0(&pfStack_f8);
                }
                pfVar3 = (float *)(lVar21 + -0x38);
                pfStack_f0[(longlong)pfVar22 * 10] = (float)(uint)!bVar52;
                pfStack_f0[(longlong)pfVar22 * 10 + 1] = auVar63._0_4_;
                pfStack_f0[(longlong)pfVar22 * 10 + 2] = fVar25;
                pfStack_f0[(longlong)pfVar22 * 10 + 3] = fVar55;
                *(float **)(pfStack_f0 + (longlong)pfVar22 * 10 + 4) = pfStack_298;
                *(float **)(pfStack_f0 + (longlong)pfVar22 * 10 + 4 + 2) = uStack_290;
                *(ulonglong *)(pfStack_f0 + (longlong)pfVar22 * 10 + 8) =
                     CONCAT44(uStack_288._4_4_,(float)uStack_288);
                pfStack_e8 = (float *)((longlong)pfVar22 + 1);
                fVar55 = *pfVar3;
                if ((uint)fVar55 < 2) {
                  *puStack_2d0 = uStack_17c;
                  lVar29 = *(longlong *)(pfStack_168 + 0xc);
                  uVar48 = *(undefined8 *)(pfStack_168 + 0x10);
                  if (lVar29 == *(longlong *)(pfStack_168 + 8)) {
                    uStack_b2 = 1;
                    uStack_b3 = 1;
                    pdb_142d7e980(pfStack_178);
                  }
                  lVar41 = *(longlong *)(pfStack_168 + 10);
                  *(undefined8 *)(lVar41 + lVar29 * 0x10) = uVar48;
                  *(float **)(lVar41 + 8 + lVar29 * 0x10) = pfStack_e0;
                  *(longlong *)(pfStack_168 + 0xc) = lVar29 + 1;
                  *(longlong *)(pfStack_168 + 0x10) = *(longlong *)(pfStack_168 + 0x10) + 1;
                  fVar55 = *pfVar3;
                  if (((uint)pfVar50[0xe] < 2) && ((uint)fVar55 < 2)) {
                    if (pfVar50[0xe] != fVar55) goto code_r0x000140b45aed;
                    if (fVar55 == 1.4013e-45) {
                      fVar25 = 1.4013e-45;
                      fVar55 = fVar25;
                      if (((((pfVar50[0x13] != *(float *)(lVar21 + -0x24)) ||
                            (NAN(pfVar50[0x13]) || NAN(*(float *)(lVar21 + -0x24)))) ||
                           ((pfVar50[0x14] != *(float *)(lVar21 + -0x20) ||
                            ((NAN(pfVar50[0x14]) || NAN(*(float *)(lVar21 + -0x20)) ||
                             (pfVar50[0xf] != *(float *)(lVar21 + -0x34))))))) ||
                          (NAN(pfVar50[0xf]) || NAN(*(float *)(lVar21 + -0x34)))) ||
                         ((pfVar50[0x10] != *(float *)(lVar21 + -0x30) ||
                          (NAN(pfVar50[0x10]) || NAN(*(float *)(lVar21 + -0x30))))))
                      goto code_r0x000140b45aed;
                      bVar53 = NAN(pfVar50[0x11]) || NAN(*(float *)(lVar21 + -0x2c));
                      bVar52 = pfVar50[0x11] == *(float *)(lVar21 + -0x2c);
                    }
                    else {
                      fVar25 = 0.0;
                      fVar55 = fVar25;
                      if ((((pfVar50[0x11] != *(float *)(lVar21 + -0x2c)) ||
                           (NAN(pfVar50[0x11]) || NAN(*(float *)(lVar21 + -0x2c)))) ||
                          (fVar55 = 0.0, pfVar50[0xf] != *(float *)(lVar21 + -0x34))) ||
                         (NAN(pfVar50[0xf]) || NAN(*(float *)(lVar21 + -0x34))))
                      goto code_r0x000140b45aed;
                      bVar53 = NAN(pfVar50[0x10]) || NAN(*(float *)(lVar21 + -0x30));
                      bVar52 = pfVar50[0x10] == *(float *)(lVar21 + -0x30);
                    }
                    fVar55 = fVar25;
                    if ((!bVar52) || (bVar53)) goto code_r0x000140b45aed;
                    if ((pfVar50[0x12] != *(float *)(lVar21 + -0x28)) ||
                       (NAN(pfVar50[0x12]) || NAN(*(float *)(lVar21 + -0x28))))
                    goto code_r0x000140b45aed;
                    goto code_r0x000140b45b92;
                  }
                }
                if (((pfVar50[0xc] != *(float *)(lVar21 + -0x40)) ||
                    (NAN(pfVar50[0xc]) || NAN(*(float *)(lVar21 + -0x40)))) ||
                   (lVar29 = *(longlong *)(pfVar50 + 4), lVar29 != *(longlong *)(lVar21 + -0x60)))
                goto code_r0x000140b45aed;
                if (lVar29 == 0) goto code_r0x000140b45a75;
                lVar41 = 0;
                goto code_r0x000140b45a3d;
              }
              uVar40 = (ushort)(uVar20 - 1) & (ushort)uVar20;
              uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar40);
            }
            auVar59[0] = -(auVar56[0] == -1);
            auVar59[1] = -(auVar56[1] == -1);
            auVar59[2] = -(auVar56[2] == -1);
            auVar59[3] = -(auVar56[3] == -1);
            auVar59[4] = -(auVar56[4] == -1);
            auVar59[5] = -(auVar56[5] == -1);
            auVar59[6] = -(auVar56[6] == -1);
            auVar59[7] = -(auVar56[7] == -1);
            auVar59[8] = -(auVar56[8] == -1);
            auVar59[9] = -(auVar56[9] == -1);
            auVar59[10] = -(auVar56[10] == -1);
            auVar59[0xb] = -(auVar56[0xb] == -1);
            auVar59[0xc] = -(auVar56[0xc] == -1);
            auVar59[0xd] = -(auVar56[0xd] == -1);
            auVar59[0xe] = -(auVar56[0xe] == -1);
            auVar59[0xf] = -(auVar56[0xf] == -1);
            if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar59 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar59 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar59 >> 0x3f,0) & 1) != 0) || (SUB161(auVar59 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
            uVar23 = uVar23 + lVar29 + 0x10;
            lVar29 = lVar29 + 0x10;
          }
        }
        uStack_b2 = 1;
        uStack_b3 = 1;
        pdb_142dc8110(&UNK_143058fc0,0x20,&UNK_143058fe0);
        goto code_r0x000140b4662e;
      }
      bVar33 = !bVar33;
      if (!bVar33) {
        *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
        uVar48 = *param_14;
        uStack_288._0_4_ = (float)uStack_188;
        uStack_288._4_4_ = (float)((ulonglong)uStack_188 >> 0x20);
        pfStack_298 = pfStack_198;
        uStack_290 = (float *)uStack_190;
        uStack_b2 = 0;
        uStack_b3 = 1;
        uStack_290 = (float *)pdb_140a1ac80(&pfStack_298);
        uStack_288._0_4_ = SUB84(param_14,0);
        uStack_288._4_4_ = (float)((ulonglong)param_14 >> 0x20);
        pfStack_298 = (float *)0x7;
        uStack_b2 = 0;
        uStack_b3 = 1;
        pdb_140ae5180(uVar48,&pfStack_298,&UNK_143058f90);
      }
      uStack_288._0_4_ = SUB84(pfStack_e8,0);
      uStack_288._4_4_ = (float)((ulonglong)pfStack_e8 >> 0x20);
      pfStack_298 = pfStack_f8;
      uStack_290 = pfStack_f0;
      uStack_280._0_4_ = (float)CONCAT31(uStack_280._1_3_,1);
      uStack_b3 = 0;
      uStack_b2 = bVar33;
      pdb_141b74f20(&uStack_398,&pfStack_298,&UNK_143058fa8);
      if (bVar33) {
        cStack_b1 = (char)uStack_c0;
        pdb_1409a2a70(&pfStack_198);
      }
      break;
    case 4:
      *pbVar39 = (*pbVar39 - bVar17) - CARRY1((byte)(uVar20 >> 8),bVar17);
      *pbVar39 = *pbVar39 + bVar17;
      cVar18 = (char)(&UNK_143059570 + iVar2);
      pbVar39[-0x39] = pbVar39[-0x39] + cVar18;
      *pbVar39 = *pbVar39 & bVar17;
      *pbVar39 = *pbVar39 + bVar17;
      *pcVar36 = *pcVar36 + cVar18;
      return;
    case 5:
                    /* WARNING: Could not emulate address calculation at 0x000140b49315 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_143059580 + *(int *)(&UNK_143059580 + (longlong)(&UNK_143059570 + iVar2) * 4))
      )(&UNK_143059580 + *(int *)(&UNK_143059580 + (longlong)(&UNK_143059570 + iVar2) * 4));
      return;
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
      pfVar62 = (float *)CONCAT44((float)(extraout_XMM0_Qa >> 0x20) - fVar64,
                                  (float)extraout_XMM0_Qa - fVar25);
      pfStack_2b8 = _DAT_142f94730;
      uStack_2b0 = _UNK_142f94738;
      pfStack_2a8 = pfVar62;
      pfStack_298 = pfVar50;
      pdb_140c49bc0(&uStack_180,&pfStack_2b8,uVar20);
      uStack_d8 = (ulonglong *)CONCAT17(1,(undefined7)uStack_d8);
      cVar18 = pdb_140b407b0(pfVar16,&uStack_180);
      if (cVar18 == '\0') {
        uStack_d8 = (ulonglong *)CONCAT17(1,(undefined7)uStack_d8);
        pdb_140314c70(&uStack_3e8,&UNK_143059108);
        uStack_d8 = (ulonglong *)CONCAT17(1,(undefined7)uStack_d8);
        cVar34 = '\x01';
        pdb_140314c70(&lStack_408,&UNK_143059120);
      }
      else {
        uVar48 = *puStackX_8;
        uStack_d8 = (ulonglong *)CONCAT17(1,(undefined7)uStack_d8);
        lVar21 = pdb_140b0e4b0(uVar48,pfStack_e0);
        if (lVar21 == 0) {
          uStack_d8 = (ulonglong *)CONCAT17(1,(undefined7)uStack_d8);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143059138);
        }
        uStack_d8 = (ulonglong *)CONCAT17(1,(undefined7)uStack_d8);
        pdb_140a4f320(&pfStack_338,lVar21);
        uStack_288._0_4_ = (float)uStack_150;
        uStack_288._4_4_ = (float)((ulonglong)uStack_150 >> 0x20);
        pfStack_2b8 = (float *)CONCAT44(uStack_17c,uStack_180);
        pfStack_298 = pfStack_160;
        uStack_290 = pfStack_158;
        pfStack_2a8 = pfStack_170;
        pfStack_2a0 = pfStack_168;
        uStack_2b0 = pfStack_178;
        pdb_14049c2a0(&pfStack_338);
        lStack_308 = CONCAT44(uStack_288._4_4_,(float)uStack_288);
        pfStack_318 = pfStack_298;
        pfStack_310 = uStack_290;
        pfStack_328 = pfStack_2a8;
        pfStack_320 = pfStack_2a0;
        pfStack_338 = pfStack_2b8;
        pfStack_330 = uStack_2b0;
        *(undefined4 *)puStackX_8[2] = *(undefined4 *)((longlong)puStackX_8 + 0x1c);
        uStack_258 = uStack_2d8;
        puStack_250 = puStack_2d0;
        fStack_268 = (float)uStack_2e8;
        uStack_264 = (undefined4)((ulonglong)uStack_2e8 >> 0x20);
        uStack_260 = uStack_2e0;
        fStack_25c = fStack_2dc;
        fStack_278 = (float)lStack_2f8;
        fStack_274 = (float)((ulonglong)lStack_2f8 >> 0x20);
        uStack_270._0_4_ = (undefined4)lStack_2f0;
        uStack_270._4_4_ = (undefined4)((ulonglong)lStack_2f0 >> 0x20);
        uStack_280._0_4_ = (float)lStack_300;
        uStack_280._4_4_ = (float)((ulonglong)lStack_300 >> 0x20);
        uStack_d8._0_5_ = (uint5)(uint)uStack_d8;
        pdb_14092f410(uVar48,pfStack_e0,&pfStack_2b8);
        *(float **)(lStack_100 + 0x10) = pfVar22;
        *(float **)(lStack_100 + 0x18) = pfVar3;
        *(float **)(lStack_100 + 0x20) = pfVar62;
        *(float **)(lStack_100 + 0x30) = pfVar50;
        cVar34 = '\0';
      }
      uStack_d8 = (ulonglong *)CONCAT17(cVar34,(undefined7)uStack_d8);
      pdb_140b4a700(&pfStack_2b8,lStack_100,pfStack_e0);
      uStack_d8 = (ulonglong *)CONCAT17(cVar34,(undefined7)uStack_d8);
      pdb_141b74c10(pcVar36,&pfStack_2b8,&UNK_143059150);
      uStack_d8 = (ulonglong *)CONCAT17(cVar34,(undefined7)uStack_d8);
      pdb_141b74e20(&uStack_378,pfStack_e0,0,&UNK_143059168);
      uStack_2b0 = pfStack_e0;
      pfStack_2b8 = (float *)CONCAT71(pfStack_2b8._1_7_,2);
      uStack_d8 = (ulonglong *)CONCAT17(cVar34,(undefined7)uStack_d8);
      pdb_141b75220(&lStack_428,&pfStack_2b8,&UNK_143059180);
      if (cVar34 != '\0') {
        pdb_14049c2a0(&uStack_180);
      }
      if (cVar18 != '\0') {
        pdb_1414d1b30(&pfStack_2b8,&uStack_3a8);
        if ((pfStack_2a0 != pfStack_298 && pfStack_2a0 != (float *)0x0) ||
           (uStack_2b0 != (float *)0x0 && uStack_2b0 != pfStack_2a8)) {
          *(byte **)pfStack_2b8 = (byte *)((longlong)uStack_290 + *(longlong *)pfStack_2b8);
          pfStack_2b8 = pfStack_e0;
          pfStack_2a8 = (float *)CONCAT26(pfStack_2a8._6_2_,0x100000000);
          uStack_2b0 = (float *)CONCAT44(uStack_140,fStack_144);
          pfStack_2a8 = (float *)CONCAT44(pfStack_2a8._4_4_,uStack_13c);
          pdb_141b75330(param_6,&pfStack_2b8,&UNK_143059198);
        }
      }
      return;
    }
    if (((byte)uStack_c0 & uStack_138 != 0) == 0) {
      return;
    }
  }
  pub_1406abac0((byte *)uStack_d8,uStack_138 << 3,8);
  return;
  while (lVar41 = lVar41 + 1, lVar29 != lVar41) {
code_r0x000140b45a3d:
    fVar25 = *(float *)(*(longlong *)(pfVar50 + 2) + lVar41 * 8);
    pfVar22 = (float *)(*(longlong *)(lVar21 + -0x68) + lVar41 * 8);
    if (((fVar25 != *pfVar22) || (NAN(fVar25) || NAN(*pfVar22))) ||
       ((fVar25 = *(float *)(*(longlong *)(pfVar50 + 2) + 4 + lVar41 * 8),
        pfVar22 = (float *)(*(longlong *)(lVar21 + -0x68) + 4 + lVar41 * 8), fVar25 != *pfVar22 ||
        (NAN(fVar25) || NAN(*pfVar22))))) goto code_r0x000140b45aed;
  }
code_r0x000140b45a75:
  lVar29 = *(longlong *)(pfVar50 + 10);
  if (lVar29 == *(longlong *)(lVar21 + -0x48)) {
    if (lVar29 != 0) {
      lVar41 = 0;
      do {
        fVar25 = *(float *)(*(longlong *)(pfVar50 + 8) + lVar41 * 4);
        pfVar22 = (float *)(*(longlong *)(lVar21 + -0x50) + lVar41 * 4);
        if ((fVar25 != *pfVar22) || (NAN(fVar25) || NAN(*pfVar22))) goto code_r0x000140b45aed;
        lVar41 = lVar41 + 1;
      } while (lVar29 != lVar41);
    }
  }
  else {
code_r0x000140b45aed:
    pfStack_118 = (float *)*plStack_c8;
    pfStack_110 = (float *)plStack_c8[1];
    pfStack_108 = (float *)plStack_c8[2];
    lStack_100 = plStack_c8[3];
    lVar29 = plStack_c8[4];
    pfVar22 = *(float **)(pfVar50 + 0x2a);
    if (((uint)pfVar50[0xe] < 2) && ((uint)fVar55 < 2)) {
      uVar48 = *(undefined8 *)(pfVar50 + 0xe);
      fStack_278 = (float)((ulonglong)*(undefined8 *)(pfVar50 + 0x11) >> 0x20);
      fStack_274 = (float)*(undefined8 *)(pfVar50 + 0x13);
      uStack_270._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(pfVar50 + 0x13) >> 0x20);
      uStack_288._0_4_ = (float)uVar48;
      uStack_288._4_4_ = (float)((ulonglong)uVar48 >> 0x20);
      uStack_280._0_4_ = (float)*(undefined8 *)(pfVar50 + 0x10);
      uStack_280._4_4_ = (float)((ulonglong)*(undefined8 *)(pfVar50 + 0x10) >> 0x20);
      fStack_25c = (float)((ulonglong)*(undefined8 *)(lVar21 + -0x2c) >> 0x20);
      uStack_270._4_4_ = (undefined4)*(undefined8 *)pfVar3;
      fStack_268 = (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
      uStack_264 = (undefined4)*(undefined8 *)(lVar21 + -0x30);
      uStack_260 = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + -0x30) >> 0x20);
      pfStack_298 = (float *)0x8000000000000004;
      uStack_290 = pfVar22;
      uStack_258 = *(ulonglong *)(lVar21 + -0x24);
    }
    else {
      uVar23 = *(ulonglong *)(pfVar50 + 4);
      uVar37 = uVar23 * 8;
      if (0x7ffffffffffffffc < uVar37 || uVar23 >> 0x3d != 0) {
        uVar48 = 0;
code_r0x000140b46443:
        uStack_b2 = 1;
        uStack_b3 = 1;
        pdb_142dc7e2a(uVar48,uVar37);
        goto code_r0x000140b4662e;
      }
      uVar51 = *(undefined8 *)(pfVar50 + 2);
      if (uVar37 == 0) {
        uStack_148 = 4;
        fStack_144 = 0.0;
        uVar38 = 0;
      }
      else {
        pdb_14007ee60();
        uVar48 = 4;
        pbVar49 = pub_1406abab0(uVar37,4);
        uStack_148 = SUB84(pbVar49,0);
        fStack_144 = (float)((ulonglong)pbVar49 >> 0x20);
        uVar38 = uVar23;
        if (pbVar49 == (byte *)0x0) goto code_r0x000140b46443;
      }
      if (uVar23 != 0) {
        pub_142e32760(CONCAT44(fStack_144,uStack_148),uVar51,uVar37);
      }
      uVar15 = uStack_13c;
      uVar19 = uStack_140;
      puVar4 = *(undefined4 **)(pfVar50 + 10);
      uVar37 = (longlong)puVar4 * 4;
      uStack_140 = (undefined4)uVar38;
      uStack_13c = (undefined4)(uVar38 >> 0x20);
      if (0x7ffffffffffffffc < uVar37 || (ulonglong)puVar4 >> 0x3e != 0) {
        uVar48 = 0;
code_r0x000140b4646c:
        pdb_142dc7e2a(uVar48,uVar37);
        goto code_r0x000140b4662e;
      }
      if (uVar37 == 0) {
        pbVar49 = (byte *)0x4;
        uStack_140 = uVar19;
        uStack_13c = uVar15;
      }
      else {
        puVar6 = *(undefined4 **)(pfVar50 + 8);
        pfStack_130 = pfVar22;
        pdb_14007ee60();
        uVar48 = 4;
        pbVar49 = pub_1406abab0(uVar37,4);
        if (pbVar49 == (byte *)0x0) goto code_r0x000140b4646c;
        pfVar22 = pfStack_130;
        if (puVar4 == (undefined4 *)0x0) {
          uVar38 = CONCAT44(uStack_13c,uStack_140);
        }
        else {
          puVar26 = (undefined4 *)((longlong)puVar4 - 1U);
          if (puVar4 < (undefined4 *)((longlong)puVar4 - 1U)) {
            puVar26 = puVar4;
          }
          if (puVar26 < (undefined4 *)0x8) {
            lVar41 = 0;
            puVar26 = puVar4;
            puVar30 = puVar6;
          }
          else {
            uVar38 = (longlong)puVar26 + 1;
            uVar37 = (ulonglong)((uint)uVar38 & 7);
            if ((uVar38 & 7) == 0) {
              uVar37 = 8;
            }
            lVar41 = uVar38 - uVar37;
            puVar26 = (undefined4 *)((longlong)puVar4 - lVar41);
            puVar30 = puVar6 + lVar41;
            lVar42 = 0;
            do {
              uVar48 = *(undefined8 *)((longlong)(puVar6 + lVar42) + 8);
              uVar51 = *(undefined8 *)(puVar6 + lVar42 + 4);
              uVar12 = *(undefined8 *)((longlong)(puVar6 + lVar42 + 4) + 8);
              *(undefined8 *)(pbVar49 + lVar42 * 4) = *(undefined8 *)(puVar6 + lVar42);
              *(undefined8 *)(pbVar49 + lVar42 * 4 + 8) = uVar48;
              *(undefined8 *)(pbVar49 + lVar42 * 4 + 0x10) = uVar51;
              *(undefined8 *)(pbVar49 + lVar42 * 4 + 0x10 + 8) = uVar12;
              lVar42 = lVar42 + 8;
            } while (lVar41 != lVar42);
          }
          pbVar39 = pbVar49 + lVar41 * 4;
          uVar38 = CONCAT44(uStack_13c,uStack_140);
          do {
            if (puVar30 == puVar6 + (longlong)puVar4) break;
            uVar19 = *puVar30;
            puVar30 = puVar30 + 1;
            *(undefined4 *)pbVar39 = uVar19;
            pbVar39 = pbVar39 + 4;
            puVar26 = (undefined4 *)((longlong)puVar26 - 1);
          } while (puVar26 != (undefined4 *)0x0);
        }
      }
      fStack_238 = pfVar50[0xc];
      fStack_278 = SUB84(pfStack_108,0);
      fStack_274 = (float)((ulonglong)pfStack_108 >> 0x20);
      uStack_270._0_4_ = (undefined4)lStack_100;
      uStack_270._4_4_ = (undefined4)((ulonglong)lStack_100 >> 0x20);
      uStack_288._0_4_ = SUB84(pfStack_118,0);
      uStack_288._4_4_ = (float)((ulonglong)pfStack_118 >> 0x20);
      uStack_280._0_4_ = SUB84(pfStack_110,0);
      uStack_280._4_4_ = (float)((ulonglong)pfStack_110 >> 0x20);
      fStack_268 = (float)uVar38;
      uStack_264 = (undefined4)(uVar38 >> 0x20);
      uStack_260 = uStack_148;
      fStack_25c = fStack_144;
      pfStack_298 = (float *)0x8000000000000010;
      uStack_258 = uVar23;
      puStack_250 = puVar4;
      pbStack_248 = pbVar49;
      puStack_240 = puVar4;
      pfStack_230 = pfVar22;
      lStack_228 = lVar29;
    }
    uStack_b2 = 1;
    uStack_b3 = 1;
    pdb_140a1a8a0(&pfStack_198,&pfStack_298);
    bVar33 = true;
  }
code_r0x000140b45b92:
  fVar55 = pfVar50[0x16];
  fVar25 = *(float *)(lVar21 + -0x18);
  if ((fVar55 != fVar25) || (NAN(fVar55) || NAN(fVar25))) {
    uStack_290 = pfStack_e0;
    pfStack_298 = (float *)0x8000000000000005;
    uStack_b2 = 1;
    uStack_b3 = 1;
    uStack_288._0_4_ = fVar55;
    uStack_288._4_4_ = fVar25;
    pdb_140a1a8a0(&pfStack_198,&pfStack_298);
    bVar33 = true;
  }
  fVar55 = pfVar50[0x15];
  fVar25 = *(float *)(lVar21 + -0x1c);
  if ((fVar55 != fVar25) || (pfVar50 = pfStack_158, NAN(fVar55) || NAN(fVar25))) {
    uStack_290 = pfStack_e0;
    uStack_280._0_4_ = (float)CONCAT31(uStack_280._1_3_,1);
    pfStack_298 = (float *)0x8000000000000002;
    uStack_b2 = 1;
    uStack_b3 = 1;
    uStack_288._0_4_ = fVar55;
    uStack_288._4_4_ = fVar25;
    pdb_140a1a8a0(&pfStack_198,&pfStack_298);
    bVar33 = true;
    pfVar50 = pfStack_158;
  }
  goto code_r0x000140b4574f;
}

