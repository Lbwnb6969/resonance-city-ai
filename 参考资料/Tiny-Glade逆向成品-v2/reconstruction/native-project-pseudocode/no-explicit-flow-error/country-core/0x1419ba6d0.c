// VA 0x1419ba6d0, PDB extent 7457 bytes
// country_core::startup::startup_window_cut_sdf::bake_layer
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_window_cut_sdf.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_window_cut_sdf::bake_layer
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_window_cut_sdf.rs
   Extent: 7457 */

undefined8 * pdb_1419ba6d0(undefined8 *param_1,byte param_2)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  float *pfVar20;
  byte *pbVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  byte bVar27;
  int iVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  float fVar46;
  undefined8 uVar53;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar58 [16];
  undefined4 uVar59;
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  byte *pbStack_328;
  byte *pbStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 auStack_2f8 [16];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  longlong lStack_290;
  byte *pbStack_288;
  ulonglong uStack_280;
  longlong lStack_278;
  ulonglong uStack_270;
  ulonglong uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 auStack_1e8 [16];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  undefined8 *puStack_188;
  longlong lStack_180;
  float *pfStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  byte *pbStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  ulonglong uStack_140;
  ulonglong uStack_138;
  float *pfStack_130;
  byte *pbStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte bStack_f5;
  float fStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  lStack_180 = 0;
  pfStack_178 = (float *)0x4;
  uStack_170 = 0;
  lVar30 = *(longlong *)(&UNK_1433614b8 + (ulonglong)param_2 * 8);
  uStack_118 = *(longlong *)(&UNK_143361428 + (ulonglong)param_2 * 8) * 0x10 + lVar30;
  uStack_108 = (float *)0x4;
  uVar25 = 0;
  puStack_188 = param_1;
  bStack_f5 = param_2;
  if (lVar30 != uStack_118) {
    do {
      pdb_141b25740(auStack_218,lVar30);
      if (SBORROW8(0,auStack_218._0_8_)) {
        pbStack_328 = (byte *)auStack_218._8_8_;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143360f20,0x2b,&pbStack_328,&UNK_143360f50,&UNK_143360018);
      }
      uStack_2b8 = uStack_1a8;
      uStack_2b0 = uStack_1a0;
      uStack_2c8 = uStack_1b8;
      uStack_2c0 = uStack_1b0;
      uStack_2d8 = uStack_1c8;
      uStack_2d0 = uStack_1c0;
      uStack_2e8 = uStack_1d8;
      uStack_2e0 = uStack_1d0;
      auStack_2f8 = auStack_1e8;
      uStack_308 = uStack_1f8;
      uStack_304 = uStack_1f4;
      uStack_300 = uStack_1f0;
      uStack_2fc = uStack_1ec;
      uStack_318 = (undefined4)uStack_208;
      uStack_314 = uStack_208._4_4_;
      uStack_310 = uStack_200;
      uStack_30c = uStack_1fc;
      pbStack_328 = (byte *)auStack_218._0_8_;
      pbStack_320 = (byte *)auStack_218._8_8_;
      pdb_140a97aa0(auStack_218,&pbStack_328);
      lVar16 = uStack_208;
      uVar53 = auStack_218._0_8_;
      uVar15 = auStack_218._8_8_;
      uVar23 = CONCAT44(uStack_1fc,uStack_200);
      uVar29 = (ulonglong)(auStack_218._8_8_ - auStack_218._0_8_) >> 2;
      if (lStack_180 - uVar25 < uVar29) {
        pdb_142d7f1b0(&lStack_180,uVar25,uVar29,4,8);
        uStack_108 = pfStack_178;
        uVar25 = uStack_170;
      }
      if (uVar53 != uVar15) {
        uVar19 = 0;
        do {
          uVar38 = (ulonglong)*(uint *)(uVar53 + uVar19 * 4);
          if (uVar23 <= uVar38) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar38,uVar23,&UNK_143356df8);
          }
          *(undefined8 *)(uStack_108 + uVar25 * 2 + uVar19 * 2) =
               *(undefined8 *)(lVar16 + uVar38 * 0xc);
          uVar19 = uVar19 + 1;
        } while (uVar29 != uVar19);
        uVar25 = uVar25 + uVar19;
      }
      uStack_170 = uVar25;
      pdb_14098a960(&pbStack_328);
      lVar30 = lVar30 + 0x10;
    } while (lVar30 != uStack_118);
  }
  pfStack_130 = pfStack_178;
  if (uVar25 == 0) {
    auStack_218._4_4_ = _UNK_143021a74;
    auStack_218._0_4_ = _DAT_143021a70;
    auStack_218._8_4_ = _UNK_143021a78;
    auStack_218._12_4_ = _UNK_143021a7c;
  }
  else {
    uVar23 = uVar25 * 8 - 8;
    if ((uVar23 & 8) == 0) {
      pfVar20 = pfStack_178 + 2;
      uVar42 = -(uint)(_DAT_143021a70 < *pfStack_178);
      uVar43 = -(uint)(_UNK_143021a74 < pfStack_178[1]);
      uVar44 = -(uint)(*pfStack_178 < _UNK_143021a78);
      uVar45 = -(uint)(pfStack_178[1] < _UNK_143021a7c);
      auVar56._0_4_ = ~uVar42 & (uint)*pfStack_178;
      auVar56._4_4_ = ~uVar43 & (uint)pfStack_178[1];
      auVar56._8_4_ = ~uVar44 & (uint)*pfStack_178;
      auVar56._12_4_ = ~uVar45 & (uint)pfStack_178[1];
      auVar5._4_4_ = (uint)_UNK_143021a74 & uVar43;
      auVar5._0_4_ = (uint)_DAT_143021a70 & uVar42;
      auVar5._8_4_ = (uint)_UNK_143021a78 & uVar44;
      auVar5._12_4_ = (uint)_UNK_143021a7c & uVar45;
      auStack_218 = auVar56 | auVar5;
    }
    else {
      auStack_218._4_4_ = _UNK_143021a74;
      auStack_218._0_4_ = _DAT_143021a70;
      auStack_218._8_4_ = _UNK_143021a78;
      auStack_218._12_4_ = _UNK_143021a7c;
      pfVar20 = pfStack_178;
    }
    if (uVar23 != 0) {
      do {
        fVar46 = (float)*(ulonglong *)pfVar20;
        fVar47 = (float)(*(ulonglong *)pfVar20 >> 0x20);
        uVar42 = -(uint)(auStack_218._0_4_ < fVar46);
        uVar43 = -(uint)(auStack_218._4_4_ < fVar47);
        fVar48 = (float)*(ulonglong *)pfVar20;
        fVar49 = (float)(*(ulonglong *)pfVar20 >> 0x20);
        uVar44 = -(uint)(fVar48 < auStack_218._8_4_);
        uVar45 = -(uint)(fVar49 < auStack_218._12_4_);
        fVar50 = (float)(~uVar42 & (uint)fVar46 | (uint)auStack_218._0_4_ & uVar42);
        fVar51 = (float)(~uVar43 & (uint)fVar47 | (uint)auStack_218._4_4_ & uVar43);
        fVar48 = (float)(~uVar44 & (uint)fVar48 | (uint)auStack_218._8_4_ & uVar44);
        fVar49 = (float)(~uVar45 & (uint)fVar49 | (uint)auStack_218._12_4_ & uVar45);
        fVar46 = pfVar20[2];
        fVar47 = pfVar20[2];
        uVar42 = -(uint)(fVar50 < fVar46);
        uVar43 = -(uint)(fVar51 < pfVar20[3]);
        uVar44 = -(uint)(fVar47 < fVar48);
        uVar45 = -(uint)(pfVar20[3] < fVar49);
        auVar63._0_4_ = (uint)fVar50 & uVar42;
        auVar63._4_4_ = (uint)fVar51 & uVar43;
        auVar63._8_4_ = (uint)fVar48 & uVar44;
        auVar63._12_4_ = (uint)fVar49 & uVar45;
        auVar57._0_4_ = ~uVar42 & (uint)fVar46;
        auVar57._4_4_ = ~uVar43 & (uint)pfVar20[3];
        auVar57._8_4_ = ~uVar44 & (uint)fVar47;
        auVar57._12_4_ = ~uVar45 & (uint)pfVar20[3];
        auStack_218 = auVar57 | auVar63;
        pfVar20 = pfVar20 + 4;
      } while (pfVar20 != pfStack_178 + uVar25 * 2);
    }
  }
  uVar53 = pdb_140deec20(auStack_218);
  pdb_140deebf0(auStack_218);
  auVar60._8_4_ = (int)extraout_XMM0_Qb;
  auVar60._0_8_ = uVar53;
  auVar60._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  pdb_140deead0(&uStack_2a0);
  fStack_f4 = (float)pdb_140deebf0(&uStack_2a0);
  uVar59 = auVar60._0_4_;
  auStack_218._8_8_ = uStack_298;
  auStack_218._0_8_ = uStack_2a0;
  fVar46 = (float)pdb_140deebf0(auStack_218);
  auStack_248._0_4_ = uVar59;
  pdb_14007ee60();
  pbStack_128 = pub_1406abae0(0x40000,1);
  if (pbStack_128 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x40000);
  }
  else {
    uVar25 = (uVar25 / 3) * 3;
    if (2 < uVar25) {
      fVar46 = fVar46 * _DAT_14335fd9c;
      fVar47 = auVar60._0_4_ * _DAT_14335fd9c;
      auStack_238._0_4_ = fVar46 * _DAT_142e36f50;
      uStack_138 = CONCAT44(uStack_138._4_4_,fVar47);
      auStack_228._0_4_ = fVar47 * _DAT_142e36f50;
      uStack_140 = CONCAT44(uStack_140._4_4_,auStack_218._4_4_);
      uVar23 = 0;
      pfVar20 = pfStack_130;
      do {
        uVar29 = *(ulonglong *)pfVar20;
        fVar51 = (float)uVar29;
        fVar52 = (float)(uVar29 >> 0x20);
        pfVar3 = *(float **)(pfVar20 + 2);
        fVar49 = (float)((ulonglong)pfVar3 >> 0x20);
        fVar47 = (float)*(ulonglong *)(pfVar20 + 4);
        fVar48 = (float)(*(ulonglong *)(pfVar20 + 4) >> 0x20);
        fVar50 = (fVar48 - fVar52) * (SUB84(pfVar3,0) - fVar51) -
                 (fVar47 - fVar51) * (fVar49 - fVar52);
        if ((fVar50 != 0.0) || (NAN(fVar50))) {
          fVar61 = fVar48;
          if (fVar50 <= 0.0) {
            fVar61 = fVar49;
          }
          uStack_120 = CONCAT44(uStack_120._4_4_,fVar61);
          uStack_100 = 0;
          fVar62 = SUB84(pfVar3,0);
          lStack_158 = CONCAT44(fVar49,fVar49);
          if (fVar50 <= 0.0) {
            fVar62 = fVar47;
            lStack_158 = CONCAT44(fVar48,fVar48);
          }
          uStack_150 = 0;
          fVar48 = fVar52;
          if ((float)lStack_158 <= fVar52) {
            fVar48 = (float)lStack_158;
          }
          fVar49 = fVar52;
          if (fVar61 <= fVar52) {
            fVar49 = fVar61;
          }
          uStack_108 = pfVar3;
          fVar48 = (float)pub_142e32a40(CONCAT44(fVar48,(fVar49 - (float)uStack_140) /
                                                        (float)uStack_138 + _DAT_142e36f38));
          if (fVar48 <= 0.0) {
            fVar48 = 0.0;
          }
          uStack_118 = CONCAT44(fVar52,fVar52);
          uStack_110 = 0;
          auVar58._0_8_ = pub_142e329c0();
          uVar53 = uStack_100;
          fVar49 = _DAT_142e36f38;
          auVar58._8_8_ = extraout_XMM0_Qb_00;
          uVar19 = (longlong)(fVar48 - _DAT_142e36f2c) & (longlong)fVar48 >> 0x3f | (longlong)fVar48
          ;
          if (fVar48 < 0.0) {
            uVar19 = uVar23;
          }
          if (_DAT_1432176fc <= (float)auVar58._0_8_) {
            auVar58._0_4_ = _DAT_1432176fc;
          }
          if (_DAT_142e36f30 < fVar48) {
            uVar19 = 0xffffffffffffffff;
          }
          fVar48 = auVar58._0_4_;
          uVar38 = (longlong)(fVar48 - _DAT_142e36f2c) & (longlong)fVar48 >> 0x3f | (longlong)fVar48
          ;
          if (fVar48 < 0.0) {
            uVar38 = uVar23;
          }
          if (_DAT_142e36f30 < fVar48) {
            uVar38 = 0xffffffffffffffff;
          }
          uVar59 = uStack_108._4_4_;
          uVar17 = (undefined4)uStack_100;
          uVar18 = uStack_100._4_4_;
          uStack_100 = uVar53;
          if (uVar19 <= uVar38) {
            fVar47 = (float)(~-(uint)(0.0 < fVar50) & (uint)uStack_108 |
                            (uint)fVar47 & -(uint)(0.0 < fVar50));
            auVar54._8_4_ = 0;
            auVar54._0_8_ = uVar29;
            if (fVar51 <= fVar62) {
              auVar54._4_8_ = uVar29 >> 0x20;
              auVar54._0_4_ = fVar62;
            }
            if (auVar54._0_4_ <= fVar47) {
              auVar54._4_8_ = auVar54._4_8_;
              auVar54._0_4_ = fVar47;
            }
            auVar6._4_8_ = auVar54._4_8_;
            auVar6._0_4_ = (auVar54._0_4_ - (float)auStack_218._0_4_) / fVar46 + _DAT_142e36f38;
            fVar48 = (float)pub_142e329c0(auVar6._0_8_);
            if (_DAT_1432176fc <= fVar48) {
              fVar48 = _DAT_1432176fc;
            }
            auVar55._8_4_ = 0;
            auVar55._0_8_ = uVar29;
            if (fVar62 <= fVar51) {
              auVar55._4_8_ = uVar29 >> 0x20;
              auVar55._0_4_ = fVar62;
            }
            if (fVar47 <= auVar55._0_4_) {
              auVar55._4_8_ = auVar55._4_8_;
              auVar55._0_4_ = fVar47;
            }
            auVar7._4_8_ = auVar55._4_8_;
            auVar7._0_4_ = (auVar55._0_4_ - (float)auStack_218._0_4_) / fVar46 + fVar49;
            fVar49 = (float)pub_142e32a40(auVar7._0_8_);
            if (fVar49 <= 0.0) {
              fVar49 = 0.0;
            }
            uVar29 = (longlong)(fVar49 - _DAT_142e36f2c) & (longlong)fVar49 >> 0x3f |
                     (longlong)fVar49;
            if (fVar49 < 0.0) {
              uVar29 = uVar23;
            }
            if (_DAT_142e36f30 < fVar49) {
              uVar29 = 0xffffffffffffffff;
            }
            uVar32 = (longlong)(fVar48 - _DAT_142e36f2c) & (longlong)fVar48 >> 0x3f |
                     (longlong)fVar48;
            if (fVar48 < 0.0) {
              uVar32 = uVar23;
            }
            if (_DAT_142e36f30 < fVar48) {
              uVar32 = 0xffffffffffffffff;
            }
            if (uVar32 < uVar29) {
              do {
                uVar29 = uVar19 + (uVar19 < uVar38);
                if (uVar38 <= uVar19) break;
                uVar19 = uVar29;
              } while (uVar29 <= uVar38);
            }
            else {
              fVar48 = (float)uStack_118;
              uStack_168 = CONCAT44(uStack_168._4_4_,(float)uStack_118);
              fVar50 = (float)lStack_158 - (float)uStack_118;
              fVar61 = fVar51 - fVar47;
              uStack_108 = (float *)CONCAT44(uVar59,fVar47);
              auStack_258._0_4_ = fVar47 - fVar62;
              uStack_118._0_4_ = (float)uStack_118 - (float)uStack_120;
              uStack_268 = CONCAT44(fVar52,fVar61);
              uStack_260 = 0;
              auStack_258._4_4_ = uVar59;
              auStack_258._8_4_ = uVar17;
              auStack_258._12_4_ = uVar18;
              fVar49 = (float)((uint)((float)((uint)(fVar62 - fVar51) & _DAT_142e377e0) *
                                      (float)auStack_228._0_4_ +
                                     (float)((uint)fVar50 & _DAT_142e377e0) *
                                     (float)auStack_238._0_4_) ^ _DAT_142e37820);
              fVar52 = (float)((uint)((float)(auStack_258._0_4_ & _DAT_142e377e0) *
                                      (float)auStack_228._0_4_ +
                                     (float)((uint)((float)uStack_120 - (float)lStack_158) &
                                            _DAT_142e377e0) * (float)auStack_238._0_4_) ^
                              _DAT_142e37820);
              fVar64 = (float)((uint)((float)((uint)fVar61 & _DAT_142e377e0) *
                                      (float)auStack_228._0_4_ +
                                     (float)((uint)(float)uStack_118 & _DAT_142e377e0) *
                                     (float)auStack_238._0_4_) ^ _DAT_142e37820);
              do {
                uVar37 = uVar19 + (uVar19 < uVar38);
                fVar65 = ((float)uVar19 + _DAT_142e36f50) * (float)uStack_138 + (float)uStack_140;
                uVar22 = uVar29;
                do {
                  uVar41 = uVar22 + (uVar22 < uVar32);
                  fVar66 = ((float)uVar22 + _DAT_142e36f50) * fVar46 + (float)auStack_218._0_4_;
                  if (((fVar49 <= (fVar65 - fVar48) * (fVar62 - fVar51) - (fVar66 - fVar51) * fVar50
                       ) && (fVar52 <= (fVar65 - (float)lStack_158) * (float)auStack_258._0_4_ -
                                       (fVar66 - fVar62) * ((float)uStack_120 - (float)lStack_158)))
                     && (fVar64 <= (fVar65 - (float)uStack_120) * fVar61 -
                                   (fVar66 - fVar47) * (float)uStack_118)) {
                    uVar40 = uVar22 + uVar19 * 0x200;
                    if (0x3ffff < uVar40) {
                      uStack_100 = uVar53;
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(uVar40,0x40000,&UNK_143360ae0);
                    }
                    pbStack_128[uVar40] = 1;
                  }
                } while ((uVar22 < uVar32) && (uVar22 = uVar41, uVar41 <= uVar32));
                uStack_100 = uVar53;
              } while ((uVar19 < uVar38) && (uVar19 = uVar37, uVar37 <= uVar38));
            }
          }
        }
        pfVar20 = pfVar20 + 6;
        uVar25 = uVar25 - 3;
      } while (2 < uVar25);
    }
    fStack_f4 = fStack_f4 * _DAT_14335fd9c;
    fVar46 = (float)auStack_248._0_4_ * _DAT_14335fd9c;
    lVar30 = 4;
    do {
      if (((pbStack_128[lVar30 + -4] != 0) || (pbStack_128[lVar30 + -3] != 0)) ||
         ((pbStack_128[lVar30 + -2] != 0 || (pbStack_128[lVar30 + -1] != 0)))) break;
      if (lVar30 == 0x40000) {
        auStack_218._8_8_ = pdb_1419c2680;
        auStack_218._0_8_ = &bStack_f5;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14335ff78,auStack_218,&UNK_14335ffd0);
      }
      pbVar21 = pbStack_128 + lVar30;
      lVar30 = lVar30 + 5;
    } while (*pbVar21 == 0);
    pdb_14007ee60();
    pbVar21 = pub_1406abab0(0x40000,1);
    uVar45 = _UNK_142e347fc;
    uVar44 = _UNK_142e347f8;
    uVar43 = _UNK_142e347f4;
    uVar42 = _DAT_142e347f0;
    if (pbVar21 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x40000);
    }
    else {
      lVar30 = 0x30;
      do {
        puVar1 = (uint *)(pbStack_128 + lVar30 + -0x30);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar2 = (uint *)(pbStack_128 + lVar30 + -0x20);
        uVar11 = *puVar2;
        uVar12 = puVar2[1];
        uVar13 = puVar2[2];
        uVar14 = puVar2[3];
        puVar2 = (uint *)(pbVar21 + lVar30 + -0x30);
        *puVar2 = *puVar1 ^ uVar42;
        puVar2[1] = uVar8 ^ uVar43;
        puVar2[2] = uVar9 ^ uVar44;
        puVar2[3] = uVar10 ^ uVar45;
        puVar1 = (uint *)(pbVar21 + lVar30 + -0x20);
        *puVar1 = uVar11 ^ uVar42;
        puVar1[1] = uVar12 ^ uVar43;
        puVar1[2] = uVar13 ^ uVar44;
        puVar1[3] = uVar14 ^ uVar45;
        puVar2 = (uint *)(pbStack_128 + lVar30 + -0x10);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar1 = (uint *)(pbStack_128 + lVar30);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        uVar14 = puVar1[3];
        puVar1 = (uint *)(pbVar21 + lVar30 + -0x10);
        *puVar1 = *puVar2 ^ uVar42;
        puVar1[1] = uVar8 ^ uVar43;
        puVar1[2] = uVar9 ^ uVar44;
        puVar1[3] = uVar10 ^ uVar45;
        puVar1 = (uint *)(pbVar21 + lVar30);
        *puVar1 = uVar11 ^ uVar42;
        puVar1[1] = uVar12 ^ uVar43;
        puVar1[2] = uVar13 ^ uVar44;
        puVar1[3] = uVar14 ^ uVar45;
        lVar30 = lVar30 + 0x40;
      } while (lVar30 != 0x40030);
      pbStack_160 = pbVar21;
      pdb_1419bc990(&lStack_290,pbStack_128,0x40000);
      pdb_1419bc990(&pbStack_328,pbStack_160,0x40000);
      pdb_14007ee60();
      auStack_218._8_8_ = pub_1406abab0(0x4000,1);
      if ((byte *)auStack_218._8_8_ != (byte *)0x0) {
        fStack_f4 = (fStack_f4 + fVar46) * _DAT_142e37ae4;
        auStack_218._0_8_ = 0x4000;
        uStack_208 = 0;
        pbStack_198 = pbStack_288;
        pbStack_190 = pbStack_320;
        uVar25 = CONCAT44(uStack_314,uStack_318);
        lVar30 = 0;
        uStack_108 = (float *)uStack_280;
        uVar23 = 0;
        uStack_118 = uVar25;
        do {
          pbVar21 = pbStack_160;
          if (0x7f < uVar23) {
            puStack_188[4] = uStack_208;
            puStack_188[2] = auStack_218._0_8_;
            puStack_188[3] = auStack_218._8_8_;
            *puStack_188 = uStack_2a0;
            puStack_188[1] = uStack_298;
            if (pbStack_328 != (byte *)0x0) {
              pub_1406abac0(pbStack_190,(longlong)pbStack_328 << 2,4);
            }
            if (lStack_290 != 0) {
              pub_1406abac0(pbStack_198,lStack_290 << 2,4);
            }
            pub_1406abac0(pbVar21,0x40000,1);
            pub_1406abac0(pbStack_128,0x40000,1);
            if (lStack_180 != 0) {
              pub_1406abac0((byte *)pfStack_130,lStack_180 << 3,4);
            }
            return puStack_188;
          }
          uStack_270 = uVar23 + 1;
          lStack_278 = uVar23 << 0xb;
          uVar29 = 0;
          while (uVar23 = uStack_270, uVar29 < 0x80) {
            uVar23 = lStack_278 + uVar29 * 4;
            uVar19 = uVar23;
            uVar38 = uStack_280;
            if (uStack_280 <= uVar23) {
LAB_1419bbb7e:
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar19,uVar38,&UNK_14335ffe8);
            }
            if (uVar25 <= uVar23) {
LAB_1419bbb55:
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar19,uVar25,&UNK_143360000);
            }
            uVar32 = uVar23 | 1;
            uVar19 = uVar32;
            if (uStack_280 <= uVar32) goto LAB_1419bbb7e;
            if (uVar25 <= uVar32) goto LAB_1419bbb55;
            uVar22 = uVar23 | 2;
            uVar19 = uVar22;
            if (uStack_280 <= uVar22) goto LAB_1419bbb7e;
            if (uVar25 <= uVar22) goto LAB_1419bbb55;
            uVar37 = uVar23 | 3;
            uVar19 = uVar37;
            if (uStack_280 <= uVar37) goto LAB_1419bbb7e;
            if (uVar25 <= uVar37) goto LAB_1419bbb55;
            uVar41 = uVar23 | 0x200;
            uVar19 = uVar41;
            if (uStack_280 <= uVar41) goto LAB_1419bbb7e;
            if (uVar25 <= uVar41) goto LAB_1419bbb55;
            uVar40 = uVar23 | 0x201;
            uVar19 = uVar40;
            if (uStack_280 <= uVar40) goto LAB_1419bbb7e;
            if (uVar25 <= uVar40) goto LAB_1419bbb55;
            uVar26 = uVar23 | 0x202;
            uVar19 = uVar26;
            if (uStack_280 <= uVar26) goto LAB_1419bbb7e;
            if (uVar25 <= uVar26) goto LAB_1419bbb55;
            uVar31 = uVar23 | 0x203;
            uVar19 = uVar31;
            uStack_120 = uVar29;
            if (uStack_280 <= uVar31) goto LAB_1419bbb7e;
            if (uVar25 <= uVar31) goto LAB_1419bbb55;
            uVar29 = uVar23 | 0x400;
            uVar19 = uVar29;
            if (uStack_280 <= uVar29) goto LAB_1419bbb7e;
            if (uVar25 <= uVar29) goto LAB_1419bbb55;
            uVar39 = uVar23 | 0x401;
            uVar19 = uVar39;
            uVar38 = (ulonglong)uStack_108;
            lStack_158 = lVar30;
            if (uStack_280 <= uVar39) goto LAB_1419bbb7e;
            uVar25 = uStack_118;
            if (uStack_118 <= uVar39) goto LAB_1419bbb55;
            uVar36 = uVar23 | 0x402;
            uVar19 = uVar36;
            if (uStack_108 <= uVar36) goto LAB_1419bbb7e;
            if (uStack_118 <= uVar36) goto LAB_1419bbb55;
            uVar35 = uVar23 | 0x403;
            uVar19 = uVar35;
            if (uStack_108 <= uVar35) goto LAB_1419bbb7e;
            if (uStack_118 <= uVar35) goto LAB_1419bbb55;
            uVar33 = uVar23 | 0x600;
            uVar19 = uVar33;
            if (uStack_108 <= uVar33) goto LAB_1419bbb7e;
            if (uStack_118 <= uVar33) goto LAB_1419bbb55;
            uVar24 = uVar23 | 0x601;
            uVar19 = uVar24;
            if (uStack_108 <= uVar24) goto LAB_1419bbb7e;
            if (uStack_118 <= uVar24) goto LAB_1419bbb55;
            uVar34 = uVar23 | 0x602;
            uVar19 = uVar34;
            uStack_138 = uVar33;
            if (uStack_108 <= uVar34) goto LAB_1419bbb7e;
            if (uStack_118 <= uVar34) goto LAB_1419bbb55;
            uVar19 = uVar23 | 0x603;
            uStack_140 = uVar24;
            if (uStack_108 <= uVar19) goto LAB_1419bbb7e;
            if (uStack_118 <= uVar19) goto LAB_1419bbb55;
            fVar65 = *(float *)(pbStack_198 + uVar23 * 4) - *(float *)(pbStack_190 + uVar23 * 4);
            fVar61 = *(float *)(pbStack_198 + uVar32 * 4) - *(float *)(pbStack_190 + uVar32 * 4);
            fVar46 = *(float *)(pbStack_198 + uVar22 * 4) - *(float *)(pbStack_190 + uVar22 * 4);
            fVar47 = *(float *)(pbStack_198 + uVar37 * 4) - *(float *)(pbStack_190 + uVar37 * 4);
            auStack_238 = ZEXT416((uint)fVar47);
            fVar48 = *(float *)(pbStack_198 + uVar41 * 4) - *(float *)(pbStack_190 + uVar41 * 4);
            auStack_258 = ZEXT416((uint)fVar48);
            fVar49 = *(float *)(pbStack_198 + uVar40 * 4) - *(float *)(pbStack_190 + uVar40 * 4);
            auStack_248 = ZEXT416((uint)fVar49);
            fVar50 = *(float *)(pbStack_198 + uVar26 * 4) - *(float *)(pbStack_190 + uVar26 * 4);
            fVar51 = *(float *)(pbStack_198 + uVar31 * 4) - *(float *)(pbStack_190 + uVar31 * 4);
            auStack_228 = ZEXT416((uint)fVar51);
            fVar52 = *(float *)(pbStack_198 + uVar29 * 4) - *(float *)(pbStack_190 + uVar29 * 4);
            fVar68 = *(float *)(pbStack_198 + uVar39 * 4) - *(float *)(pbStack_190 + uVar39 * 4);
            fVar69 = *(float *)(pbStack_198 + uVar36 * 4) - *(float *)(pbStack_190 + uVar36 * 4);
            fVar70 = *(float *)(pbStack_198 + uVar35 * 4) - *(float *)(pbStack_190 + uVar35 * 4);
            fVar67 = *(float *)(pbStack_198 + uVar33 * 4) - *(float *)(pbStack_190 + uVar33 * 4);
            fVar66 = *(float *)(pbStack_198 + uVar24 * 4) - *(float *)(pbStack_190 + uVar24 * 4);
            fVar64 = *(float *)(pbStack_198 + uVar34 * 4) - *(float *)(pbStack_190 + uVar34 * 4);
            fVar62 = *(float *)(pbStack_198 + uVar19 * 4) - *(float *)(pbStack_190 + uVar19 * 4);
            fVar47 = (((fVar62 - (float)(-(uint)NAN(fVar62) & _DAT_143009de0 |
                                        ~-(uint)NAN(fVar62) &
                                        ((uint)fVar62 & _DAT_142e37820 | _DAT_142e3c640)) *
                                 fStack_f4) +
                      (fVar64 - (float)(-(uint)NAN(fVar64) & _DAT_143009de0 |
                                       ~-(uint)NAN(fVar64) &
                                       ((uint)fVar64 & _DAT_142e37820 | _DAT_142e3c640)) * fStack_f4
                      ) + (fVar66 - (float)(-(uint)NAN(fVar66) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar66) &
                                           ((uint)fVar66 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar67 - (float)(-(uint)NAN(fVar67) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar67) &
                                           ((uint)fVar67 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar70 - (float)(-(uint)NAN(fVar70) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar70) &
                                           ((uint)fVar70 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar69 - (float)(-(uint)NAN(fVar69) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar69) &
                                           ((uint)fVar69 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar68 - (float)(-(uint)NAN(fVar68) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar68) &
                                           ((uint)fVar68 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar52 - (float)(-(uint)NAN(fVar52) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar52) &
                                           ((uint)fVar52 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar51 - (float)(-(uint)NAN(fVar51) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar51) &
                                           ((uint)fVar51 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar50 - (float)(-(uint)NAN(fVar50) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar50) &
                                           ((uint)fVar50 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar49 - (float)(-(uint)NAN(fVar49) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar49) &
                                           ((uint)fVar49 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar48 - (float)(-(uint)NAN(fVar48) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar48) &
                                           ((uint)fVar48 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar47 - (float)(-(uint)NAN(fVar47) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar47) &
                                           ((uint)fVar47 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar46 - (float)(-(uint)NAN(fVar46) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar46) &
                                           ((uint)fVar46 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar61 - (float)(-(uint)NAN(fVar61) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar61) &
                                           ((uint)fVar61 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) +
                          (fVar65 - (float)(-(uint)NAN(fVar65) & _DAT_143009de0 |
                                           ~-(uint)NAN(fVar65) &
                                           ((uint)fVar65 & _DAT_142e37820 | _DAT_142e3c640)) *
                                    fStack_f4) + 0.0) * _DAT_14335fda0 + _DAT_14335fda4) *
                     _DAT_142e37adc;
            fVar46 = _DAT_142e36f34;
            if (_DAT_142e36f34 <= fVar47) {
              fVar46 = fVar47;
            }
            fVar47 = _DAT_142e36f28;
            if (fVar46 <= _DAT_142e36f28) {
              fVar47 = fVar46;
            }
            uStack_268 = uVar34;
            uStack_168 = uVar19;
            fVar46 = (float)pub_142e32b00(fVar47 * _DAT_14305f0f0);
            lVar30 = lStack_158;
            iVar28 = (int)fVar46;
            if (_DAT_142e382cc < fVar46) {
              iVar28 = 0x7fffffff;
            }
            if (NAN(fVar46)) {
              iVar28 = 0;
            }
            if (iVar28 < -0x7e) {
              iVar28 = -0x7f;
            }
            bVar27 = (byte)iVar28;
            if (0x7e < iVar28) {
              bVar27 = 0x7f;
            }
            if (lStack_158 == auStack_218._0_8_) {
              pdb_142d7e910(auStack_218);
            }
            uVar29 = uStack_120 + 1;
            *(byte *)(auStack_218._8_8_ + lVar30) = bVar27;
            lVar30 = lVar30 + 1;
            uStack_280 = (ulonglong)uStack_108;
            uVar25 = uStack_118;
            uStack_208 = lVar30;
          }
        } while( true );
      }
      pdb_142dc7e2a(1,0x4000);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

