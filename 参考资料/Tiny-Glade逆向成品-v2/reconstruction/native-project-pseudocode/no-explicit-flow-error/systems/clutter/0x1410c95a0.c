// VA 0x1410c95a0, PDB extent 2818 bytes
// system_clutter::inter_shape_stitches::detect_intra_shape_corners::detect_intra_shape_corners::closure$4
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::inter_shape_stitches::detect_intra_shape_corners::detect_intra_shape_corners::closure$4
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
   Extent: 2818 */

void pdb_1410c95a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined4 uVar23;
  longlong lVar24;
  ushort uVar25;
  ulonglong uVar26;
  float *pfVar27;
  float *pfVar28;
  undefined4 uVar29;
  byte bVar30;
  float fVar31;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined1 in_XMM1_Ba;
  undefined1 uVar33;
  undefined1 in_XMM1_Bb;
  undefined1 uVar34;
  undefined1 in_XMM1_Bc;
  undefined1 uVar35;
  undefined1 in_XMM1_Bd;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  longlong lStack_1c0;
  byte *pbStack_1b8;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_190;
  ulonglong uStack_188;
  undefined8 *puStack_180;
  longlong lStack_178;
  undefined8 *puStack_170;
  undefined1 *puStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  float afStack_14c [5];
  undefined4 uStack_138;
  ulonglong *puStack_130;
  ulonglong *puStack_128;
  float *pfStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  float *pfStack_108;
  ulonglong uStack_100;
  undefined1 uStack_f1;
  longlong lStack_f0;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  uVar9 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
  puStack_180 = param_4;
  auVar32._0_8_ = pdb_14140ce00(*(undefined8 *)*param_1);
  fVar31 = (float)auVar32._0_8_;
  auVar32._8_4_ = (undefined4)extraout_XMM0_Qb;
  auVar32._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  lVar4 = param_1[1];
  uVar17 = pdb_14219a5a0(lVar4 + 0x88);
  uVar21 = *(ulonglong *)(lVar4 + 0x100);
  uVar18 = (ulonglong)uVar17;
  if (uVar21 <= uVar18) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar18,uVar21,&UNK_143288ea8);
  }
  if (uVar21 <= uVar18 + 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar18 + 1,uVar21,&UNK_143288ea8);
  }
  fVar53 = *(float *)(*(longlong *)(lVar4 + 0xf8) + uVar18 * 4);
  fVar56 = *(float *)(*(longlong *)(lVar4 + 0xf8) + 4 + uVar18 * 4);
  uVar17 = pdb_14219a5a0(lVar4 + 0x88);
  uVar21 = *(ulonglong *)(lVar4 + 0xe8);
  uVar18 = (ulonglong)uVar17;
  if (uVar18 < uVar21) {
    uVar20 = uVar18 + 1;
    if (uVar20 < uVar21) {
      fVar55 = *(float *)(*(longlong *)(lVar4 + 0xe0) + uVar18 * 4);
      fVar3 = *(float *)(*(longlong *)(lVar4 + 0xe0) + 4 + uVar18 * 4);
      lVar24 = param_1[3];
      cVar16 = *(char *)param_1[2];
      uVar17 = pdb_14219a5a0(lVar24 + 0x88);
      uVar21 = *(ulonglong *)(lVar24 + 0xe8);
      uVar18 = (ulonglong)uVar17;
      if (uVar21 <= uVar18) goto LAB_1410c9e99;
      uVar20 = uVar18 + 1;
      if (uVar20 < uVar21) {
        fVar53 = extraout_XMM0_Da * (fVar56 - fVar53) + fVar53;
        uVar40 = 0;
        uVar44 = 0;
        uVar48 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar39 = 0;
        uVar41 = 0;
        uVar42 = 0;
        uVar43 = 0;
        uVar45 = 0;
        uVar46 = 0;
        uVar47 = 0;
        fVar55 = (float)(int)cVar16 * _DAT_143288b1c +
                 extraout_XMM0_Da_00 * (fVar3 - fVar55) + fVar55;
        uVar33 = SUB41(fVar55,0);
        uVar34 = (undefined1)((uint)fVar55 >> 8);
        uVar35 = (undefined1)((uint)fVar55 >> 0x10);
        uVar36 = (undefined1)((uint)fVar55 >> 0x18);
        fVar56 = *(float *)(*(longlong *)(lVar24 + 0xe0) + uVar18 * 4);
        fVar49 = (float)(int)*(char *)param_1[4] * _DAT_143288b1c +
                 extraout_XMM0_Da_01 *
                 (*(float *)(*(longlong *)(lVar24 + 0xe0) + 4 + uVar18 * 4) - fVar56) + fVar56;
        fVar54 = (float)(~-(uint)(0.0 < fVar53) & (uint)fVar53 |
                        (uint)(_DAT_142e3c620 + fVar53) & -(uint)(0.0 < fVar53)) +
                 *(float *)param_1[5];
        fVar56 = *(float *)param_1[6];
        fVar3 = fVar56;
        if (fVar56 <= fVar54) {
          fVar3 = fVar54;
        }
        fVar56 = (float)(-(uint)NAN(fVar54) & (uint)fVar56 | ~-(uint)NAN(fVar54) & (uint)fVar3);
        if (fVar31 <= fVar56) {
          auVar32._0_4_ = fVar56;
        }
        auVar57._0_4_ = ~-(uint)NAN(fVar56) & auVar32._0_4_;
        auVar57._4_4_ = 0;
        auVar57._8_4_ = auVar32._8_4_;
        auVar57._12_4_ = auVar32._12_4_;
        auVar57 = ZEXT416(-(uint)NAN(fVar56) & (uint)fVar31) | auVar57;
        fVar56 = fVar49;
        if (fVar55 <= fVar49) {
          fVar56 = fVar55;
        }
        fVar56 = (float)(~-(uint)NAN(fVar55) & (uint)fVar56 | -(uint)NAN(fVar55) & (uint)fVar49);
        fVar55 = auVar57._0_4_;
        if (fVar55 < fVar56) {
          pdb_14007ee60();
          pfStack_108 = (float *)pub_1406abab0(8,4);
          if (pfStack_108 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,8);
          }
          *pfStack_108 = fVar55;
          pfStack_108[1] = fVar56;
          uStack_110 = 2;
          uStack_100 = 2;
          uStack_e1 = 1;
          lStack_f0 = lVar24;
          cVar16 = pdb_1408ff980(lVar4 + 0x29f);
          uVar29 = 0;
          if ((cVar16 != '\0') && (uVar29 = 0, *(uint *)(lVar4 + 600) < 2)) {
            fVar3 = (float)(CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) ^
                           CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))));
            uVar33 = SUB41(fVar3,0);
            uVar34 = (undefined1)((uint)fVar3 >> 8);
            uVar35 = (undefined1)((uint)fVar3 >> 0x10);
            uVar36 = (undefined1)((uint)fVar3 >> 0x18);
            uVar17 = CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) ^
                     CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)));
            uVar37 = (undefined1)uVar17;
            uVar38 = (undefined1)(uVar17 >> 8);
            uVar39 = (undefined1)(uVar17 >> 0x10);
            uVar40 = (undefined1)(uVar17 >> 0x18);
            uVar17 = CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) ^
                     CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
            uVar41 = (undefined1)uVar17;
            uVar42 = (undefined1)(uVar17 >> 8);
            uVar43 = (undefined1)(uVar17 >> 0x10);
            uVar44 = (undefined1)(uVar17 >> 0x18);
            uVar17 = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) ^
                     CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
            uVar45 = (undefined1)uVar17;
            uVar46 = (undefined1)(uVar17 >> 8);
            uVar47 = (undefined1)(uVar17 >> 0x10);
            uVar48 = (undefined1)(uVar17 >> 0x18);
            uVar29 = 0;
            if (fVar3 < *(float *)(lVar4 + 0x294)) {
              uStack_e1 = 1;
              fVar53 = (float)pdb_14092f940(lVar4);
              uVar29 = 1;
            }
          }
          uStack_e1 = 1;
          cVar16 = pdb_1408ff980(lStack_f0 + 0x29f);
          uVar23 = 0;
          afStack_14c[2] = extraout_XMM0_Da_02;
          if ((cVar16 != '\0') && (*(uint *)(lStack_f0 + 600) < 2)) {
            afStack_14c[2] = *(float *)(lStack_f0 + 0x294);
            fVar3 = (float)(CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) ^
                           CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))));
            uVar33 = SUB41(fVar3,0);
            uVar34 = (undefined1)((uint)fVar3 >> 8);
            uVar35 = (undefined1)((uint)fVar3 >> 0x10);
            uVar36 = (undefined1)((uint)fVar3 >> 0x18);
            uVar17 = CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) ^
                     CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)));
            uVar37 = (undefined1)uVar17;
            uVar38 = (undefined1)(uVar17 >> 8);
            uVar39 = (undefined1)(uVar17 >> 0x10);
            uVar40 = (undefined1)(uVar17 >> 0x18);
            uVar17 = CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) ^
                     CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
            uVar41 = (undefined1)uVar17;
            uVar42 = (undefined1)(uVar17 >> 8);
            uVar43 = (undefined1)(uVar17 >> 0x10);
            uVar44 = (undefined1)(uVar17 >> 0x18);
            uVar17 = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) ^
                     CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
            uVar45 = (undefined1)uVar17;
            uVar46 = (undefined1)(uVar17 >> 8);
            uVar47 = (undefined1)(uVar17 >> 0x10);
            uVar48 = (undefined1)(uVar17 >> 0x18);
            if (fVar3 < afStack_14c[2]) {
              uStack_e1 = 1;
              afStack_14c[2] = (float)pdb_14092f940(lStack_f0);
              uVar23 = 1;
            }
          }
          puStack_168 = (undefined1 *)0x1;
          uStack_158 = 2;
          uStack_150 = uVar29;
          afStack_14c[0] = fVar53;
          afStack_14c[1] = (float)uVar23;
          afStack_14c[3] = 2.8026e-45;
          uStack_138 = 2;
          lVar24 = 0;
          while (uVar21 = uStack_100, lVar24 != 2) {
            if (*(char *)(&uStack_150 + lVar24 * 2) == '\0') {
              if ((lVar24 + 1 == 2) || ((char)uVar23 != '\x01')) break;
              lVar24 = 2;
              fVar53 = afStack_14c[2];
            }
            else {
              fVar53 = afStack_14c[lVar24 * 2];
              lVar24 = lVar24 + 1;
            }
            if ((fVar55 < fVar53) && (fVar53 < fVar56)) {
              pbStack_160 = (byte *)lVar24;
              if (uStack_100 == uStack_110) {
                uStack_e1 = 1;
                pdb_142d89720(&uStack_110);
              }
              pfStack_108[uVar21] = fVar53;
              uStack_100 = uVar21 + 1;
            }
          }
          puStack_168 = &uStack_f1;
          if (1 < uStack_100) {
            if (uStack_100 < 0x15) {
              uStack_e1 = 1;
              pdb_14145fee0();
            }
            else {
              uStack_e1 = 1;
              pdb_14219fd00(pfStack_108);
            }
          }
          fVar53 = _DAT_143035f20;
          uVar17 = _DAT_142e377e0;
          uVar21 = uStack_100;
          if (1 < uStack_100) {
            lVar24 = 0;
            uVar33 = SUB41(_DAT_143035f20,0);
            uVar34 = (undefined1)((uint)_DAT_143035f20 >> 8);
            uVar35 = (undefined1)((uint)_DAT_143035f20 >> 0x10);
            uVar36 = (undefined1)((uint)_DAT_143035f20 >> 0x18);
            uVar37 = 0;
            uVar38 = 0;
            uVar39 = 0;
            uVar40 = 0;
            uVar41 = 0;
            uVar42 = 0;
            uVar43 = 0;
            uVar44 = 0;
            uVar45 = 0;
            uVar46 = 0;
            uVar47 = 0;
            uVar48 = 0;
            do {
              if ((float)((uint)(pfStack_108[lVar24 + 1] - pfStack_108[lVar24]) & _DAT_142e377e0) <=
                  _DAT_143035f20) {
                uVar18 = lVar24 + 2;
                uVar21 = lVar24 + 1;
                if (uVar18 < uStack_100) {
                  if (((int)uStack_100 - (int)lVar24 & 1U) != 0) {
                    if (_DAT_143035f20 <
                        (float)((uint)(pfStack_108[lVar24 + 2] - pfStack_108[lVar24]) &
                               _DAT_142e377e0)) {
                      pfStack_108[lVar24 + 1] = pfStack_108[lVar24 + 2];
                      uVar21 = lVar24 + 2;
                    }
                    uVar18 = lVar24 + 3;
                  }
                  if (uStack_100 - 3 != lVar24) {
                    do {
                      if (fVar53 < (float)((uint)(pfStack_108[uVar18] - pfStack_108[uVar21 - 1]) &
                                          uVar17)) {
                        pfStack_108[uVar21] = pfStack_108[uVar18];
                        uVar21 = uVar21 + 1;
                      }
                      if (fVar53 < (float)((uint)(pfStack_108[uVar18 + 1] - pfStack_108[uVar21 - 1])
                                          & uVar17)) {
                        pfStack_108[uVar21] = pfStack_108[uVar18 + 1];
                        uVar21 = uVar21 + 1;
                      }
                      uVar18 = uVar18 + 2;
                    } while (uStack_100 != uVar18);
                  }
                }
                break;
              }
              lVar24 = lVar24 + 1;
            } while (uStack_100 - 1 != lVar24);
          }
          uStack_100 = uVar21;
          fVar53 = _DAT_142e36f50;
          uStack_118 = uStack_110;
          puStack_130 = (ulonglong *)param_1[8];
          puStack_128 = (ulonglong *)param_1[9];
          pfStack_120 = pfStack_108;
          puStack_170 = param_1;
          if (uStack_100 == 0) {
LAB_1410c9c3e:
            bVar15 = false;
          }
          else {
            pfVar1 = pfStack_108 + uStack_100;
            plVar5 = (longlong *)param_1[7];
            bVar15 = false;
            pfVar27 = pfStack_108;
            lStack_178 = lVar4;
            do {
              fVar55 = auVar57._0_4_;
              pfVar28 = pfVar27 + 1;
              fVar56 = *pfVar27;
              if (bVar15) {
                auVar57 = ZEXT416((uint)fVar56);
                bVar6 = fVar56 <= fVar55;
                fVar56 = fVar55;
                if (bVar6) {
LAB_1410c9c20:
                  do {
                    fVar56 = auVar57._0_4_;
                    if (pfVar28 == pfVar1) goto LAB_1410c9c41;
                    fVar55 = *pfVar28;
                    auVar57 = ZEXT416((uint)fVar55);
                    pfVar28 = pfVar28 + 1;
                  } while (fVar55 <= fVar56);
                }
              }
              else {
                if (pfVar28 == pfVar1) goto LAB_1410c9c3e;
                pfVar28 = pfVar27 + 2;
                auVar57 = ZEXT416((uint)pfVar27[1]);
                if (pfVar27[1] <= fVar56) goto LAB_1410c9c20;
              }
              auVar50._4_12_ = auVar57._4_12_;
              auVar50._0_4_ = (auVar57._0_4_ + fVar56) * fVar53;
              uVar17 = pdb_142198e80(lStack_178,lStack_f0,auVar50._0_8_);
              uVar21 = *puStack_130;
              uVar18 = *puStack_128;
              lVar4 = plVar5[2];
              if (lVar4 == *plVar5) {
                pdb_142d7ee50(plVar5);
              }
              lVar24 = plVar5[1];
              lVar22 = lVar4 * 0x40;
              *(undefined4 *)(lVar24 + lVar22) = param_5;
              *(undefined4 *)(lVar24 + 4 + lVar22) = param_6;
              *(undefined4 *)(lVar24 + 8 + lVar22) = uVar9;
              *(undefined4 *)(lVar24 + 0xc + lVar22) = param_3;
              *(float *)(lVar24 + 0x10 + lVar22) = fVar56;
              *(float *)(lVar24 + 0x14 + lVar22) = auVar57._0_4_;
              uVar14 = puStack_180[1];
              puVar2 = (undefined8 *)(lVar24 + 0x18 + lVar22);
              *puVar2 = *puStack_180;
              puVar2[1] = uVar14;
              *(ulonglong *)(lVar24 + 0x28 + lVar22) = uVar21;
              *(ulonglong *)(lVar24 + 0x30 + lVar22) = uVar18;
              *(float *)(lVar24 + 0x38 + lVar22) = fVar31;
              *(short *)(lVar24 + 0x3c + lVar22) = (short)((uVar17 & 0xffffff) >> 8);
              *(byte *)(lVar24 + 0x3e + lVar22) = (byte)(uVar17 & 0xffffff) & 1;
              plVar5[2] = lVar4 + 1;
              bVar15 = true;
              pfVar27 = pfVar28;
            } while (pfVar28 != pfVar1);
          }
LAB_1410c9c41:
          if (uStack_118 != 0) {
            pub_1406abac0((byte *)pfStack_120,uStack_118 << 2,4);
          }
          if (bVar15) {
            uVar21 = *puStack_130;
            uVar18 = *puStack_128;
            uVar20 = uVar21;
            if (uVar18 < uVar21) {
              uVar20 = uVar18;
            }
            if (uVar21 < uVar18) {
              uVar21 = uVar18;
            }
            plVar5 = (longlong *)puStack_170[10];
            uStack_190 = uVar20;
            uStack_188 = uVar21;
            if (plVar5[3] != 0) {
              uStack_e1 = 0;
              uVar18 = pdb_14216e170(plVar5 + 4,&uStack_190);
              lVar4 = *plVar5;
              bVar30 = (byte)(uVar18 >> 0x39);
              auVar32 = ZEXT216(CONCAT11(bVar30,bVar30));
              auVar32 = pshuflw(auVar32,auVar32,0);
              lVar24 = 0;
              iVar10 = -(uint)(CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) ==
                              CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))));
              iVar11 = -(uint)(CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) ==
                              CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))));
              iVar12 = -(uint)(CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) ==
                              CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))));
              iVar13 = -(uint)(CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) ==
                              CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))));
              while( true ) {
                uVar18 = uVar18 & plVar5[1];
                auVar57 = *(undefined1 (*) [16])(lVar4 + uVar18);
                auVar52[0] = -(auVar57[0] == auVar32[0]);
                auVar52[1] = -(auVar57[1] == auVar32[1]);
                auVar52[2] = -(auVar57[2] == auVar32[2]);
                auVar52[3] = -(auVar57[3] == auVar32[3]);
                auVar52[4] = -(auVar57[4] == auVar32[4]);
                auVar52[5] = -(auVar57[5] == auVar32[5]);
                auVar52[6] = -(auVar57[6] == auVar32[6]);
                auVar52[7] = -(auVar57[7] == auVar32[7]);
                auVar52[8] = -(auVar57[8] == auVar32[0]);
                auVar52[9] = -(auVar57[9] == auVar32[1]);
                auVar52[10] = -(auVar57[10] == auVar32[2]);
                auVar52[0xb] = -(auVar57[0xb] == auVar32[3]);
                auVar52[0xc] = -(auVar57[0xc] == auVar32[4]);
                auVar52[0xd] = -(auVar57[0xd] == auVar32[5]);
                auVar52[0xe] = -(auVar57[0xe] == auVar32[6]);
                auVar52[0xf] = -(auVar57[0xf] == auVar32[7]);
                uVar25 = (ushort)(SUB161(auVar52 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar52[0xf] >> 7) << 0xf;
                uVar17 = (uint)uVar25;
                while (uVar25 != 0) {
                  uVar7 = 0;
                  for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                    uVar7 = uVar7 + 1;
                  }
                  uVar26 = uVar7 + uVar18 & plVar5[1];
                  if ((uVar20 == *(ulonglong *)(lVar4 + -0x28 + uVar26 * -0x28)) &&
                     (uVar21 == *(ulonglong *)(lVar4 + -0x20 + uVar26 * -0x28))) {
                    lVar4 = lVar4 + uVar26 * -0x28;
                    lVar24 = *(longlong *)(lVar4 + -8);
                    if (lVar24 == *(longlong *)(lVar4 + -0x18)) {
                      uStack_e1 = 0;
                      pdb_142db07d0(lVar4 + -0x18);
                    }
                    lVar22 = *(longlong *)(lVar4 + -0x10);
                    *(undefined4 *)(lVar22 + lVar24 * 8) = uVar9;
                    *(undefined4 *)(lVar22 + 4 + lVar24 * 8) = param_3;
                    *(longlong *)(lVar4 + -8) = lVar24 + 1;
                    return;
                  }
                  uVar25 = (ushort)(uVar17 - 1) & (ushort)uVar17;
                  uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar25);
                }
                auVar51[0] = -(auVar57[0] == (char)iVar10);
                auVar51[1] = -(auVar57[1] == (char)((uint)iVar10 >> 8));
                auVar51[2] = -(auVar57[2] == (char)((uint)iVar10 >> 0x10));
                auVar51[3] = -(auVar57[3] == (char)((uint)iVar10 >> 0x18));
                auVar51[4] = -(auVar57[4] == (char)iVar11);
                auVar51[5] = -(auVar57[5] == (char)((uint)iVar11 >> 8));
                auVar51[6] = -(auVar57[6] == (char)((uint)iVar11 >> 0x10));
                auVar51[7] = -(auVar57[7] == (char)((uint)iVar11 >> 0x18));
                auVar51[8] = -(auVar57[8] == (char)iVar12);
                auVar51[9] = -(auVar57[9] == (char)((uint)iVar12 >> 8));
                auVar51[10] = -(auVar57[10] == (char)((uint)iVar12 >> 0x10));
                auVar51[0xb] = -(auVar57[0xb] == (char)((uint)iVar12 >> 0x18));
                auVar51[0xc] = -(auVar57[0xc] == (char)iVar13);
                auVar51[0xd] = -(auVar57[0xd] == (char)((uint)iVar13 >> 8));
                auVar51[0xe] = -(auVar57[0xe] == (char)((uint)iVar13 >> 0x10));
                auVar51[0xf] = -(auVar57[0xf] == (char)((uint)iVar13 >> 0x18));
                if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar51 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar51 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar51 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar51 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar51 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar51 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar51 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || (SUB161(auVar51 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') break;
                uVar18 = uVar18 + lVar24 + 0x10;
                lVar24 = lVar24 + 0x10;
              }
            }
            pdb_14007ee60();
            pbVar19 = pub_1406abab0(8,4);
            if (pbVar19 == (byte *)0x0) {
              uStack_e1 = 0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(4,8);
            }
            *(undefined4 *)pbVar19 = uVar9;
            *(undefined4 *)(pbVar19 + 4) = param_3;
            puStack_168 = (undefined1 *)0x1;
            uStack_158 = 1;
            uStack_1a8 = uStack_190;
            uStack_1a0 = uStack_188;
            uStack_e1 = 0;
            pbStack_160 = pbVar19;
            pdb_14219bf80(&lStack_1c0,plVar5,&uStack_1a8,&puStack_168);
            if ((!SBORROW8(0,lStack_1c0)) && (lStack_1c0 != 0)) {
              pub_1406abac0(pbStack_1b8,lStack_1c0 << 3,4);
            }
          }
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar20,uVar21,&UNK_14346b770);
  }
LAB_1410c9e99:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar18,uVar21,&UNK_14346b770);
}

