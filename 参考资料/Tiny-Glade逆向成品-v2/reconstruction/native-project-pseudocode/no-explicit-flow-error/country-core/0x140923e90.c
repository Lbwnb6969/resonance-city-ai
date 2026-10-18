// VA 0x140923e90, PDB extent 4562 bytes
// country_core::systems::wall::snapping::telegraph_walls_are_merged::telegraph_walls_are_merged
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/telegraph_walls_are_merged.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::snapping::telegraph_walls_are_merged::telegraph_walls_are_merged
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/telegraph_walls_are_merged.rs
   Extent: 4562 */

void pdb_140923e90(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  code *pcVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined7 uVar26;
  float *pfVar27;
  byte *pbVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong *plVar36;
  undefined4 *puVar37;
  longlong lVar38;
  longlong lVar39;
  float *pfVar40;
  undefined8 uVar41;
  longlong *plVar42;
  uint *puVar43;
  uint uVar44;
  ushort uVar45;
  ulonglong *puVar46;
  ulonglong uVar47;
  uint uVar48;
  longlong lVar49;
  byte bVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar57;
  undefined1 auVar53 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  float fVar65;
  ulonglong uStack_270;
  undefined8 *puStack_268;
  ulonglong uStack_260;
  undefined8 uStack_248;
  byte *pbStack_240;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  int iStack_229;
  undefined5 uStack_225;
  ulonglong uStack_220;
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  longlong lStack_200;
  undefined4 uStack_1f8;
  undefined1 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined2 uStack_1d0;
  ulonglong uStack_1cc;
  undefined8 uStack_1c4;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined2 uStack_1b4;
  undefined1 uStack_1b2;
  ulonglong uStack_1a8;
  float *pfStack_1a0;
  ulonglong uStack_198;
  longlong lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_16c;
  undefined4 *puStack_168;
  undefined8 *puStack_160;
  longlong lStack_158;
  undefined4 *puStack_150;
  longlong *plStack_148;
  longlong lStack_140;
  ulonglong *puStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  undefined1 auVar56 [16];
  
  uStack_e0 = 0xfffffffffffffffe;
  puStack_138 = (ulonglong *)*param_1;
  lVar39 = param_1[1];
  uVar33 = *puStack_138;
  uVar47 = 0;
  uVar29 = uVar33 - *(ulonglong *)(lVar39 + 0x18);
  if (uVar33 < *(ulonglong *)(lVar39 + 0x18)) {
    uVar29 = uVar47;
  }
  uVar32 = uVar33 - *(ulonglong *)(lVar39 + 0x38);
  if (uVar33 < *(ulonglong *)(lVar39 + 0x38)) {
    uVar32 = uVar47;
  }
  lVar49 = uVar29 * 0x18 + *(longlong *)(lVar39 + 8);
  uVar33 = *(ulonglong *)(lVar39 + 0x10) - uVar29;
  if (*(ulonglong *)(lVar39 + 0x10) < uVar29) {
    lVar49 = 8;
    uVar33 = uVar47;
  }
  lStack_f0 = uVar32 * 0x18 + *(longlong *)(lVar39 + 0x28);
  uVar29 = *(ulonglong *)(lVar39 + 0x30) - uVar32;
  if (*(ulonglong *)(lVar39 + 0x30) < uVar32) {
    lStack_f0 = 8;
    uVar29 = uVar47;
  }
  *puStack_138 = (*(longlong *)(lVar39 + 0x40) - uVar29) - uVar33;
  uVar25 = _UNK_142e4e658;
  uVar62 = _DAT_142e4e650;
  fVar24 = _UNK_142e36f64;
  fVar23 = _DAT_142e36f60;
  fVar59 = _DAT_142e36f50;
  fVar52 = _DAT_142e36f28;
  lVar39 = lVar49 + uVar33 * 0x18;
  puStack_150 = (undefined4 *)(lStack_f0 + uVar29 * 0x18);
  plStack_148 = (longlong *)*param_2;
  lStack_140 = *param_5;
  lStack_120 = CONCAT44(lStack_120._4_4_,*(undefined4 *)((longlong)param_7 + 0x1c));
  lStack_110 = *param_7;
  puStack_168 = (undefined4 *)param_7[2];
  iVar19 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                  CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar20 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar21 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar22 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  fVar65 = (float)_DAT_142e378e0;
  uVar33 = (ulonglong)_DAT_142e378e0 >> 0x20;
  uStack_248 = *param_4;
  plStack_108 = plStack_148 + 4;
  lStack_118 = lStack_110 + 0x20;
  plVar36 = plStack_148;
  puVar37 = puStack_150;
  plVar42 = plStack_108;
  puVar46 = puStack_138;
  puStack_160 = param_4;
  plStack_100 = param_3;
  lStack_f8 = lVar39;
LAB_1409245b0:
  do {
    do {
      fVar5 = _DAT_142f95160;
      auVar53 = _DAT_142e37950;
      fVar58 = _DAT_142e37938;
      uVar44 = _DAT_142e377e0;
      fVar51 = _DAT_142e36f28;
      if ((lVar49 == 0) || (lVar49 == lVar39)) {
        if ((lStack_f0 == 0) || ((undefined4 *)lStack_f0 == puVar37)) {
          lVar39 = *plStack_100;
          lStack_120 = plStack_100[1];
          lStack_128 = CONCAT44(lStack_128._4_4_,*(undefined4 *)((longlong)plStack_100 + 0x14));
          puVar43 = *(uint **)(lVar39 + 0xf8);
          puVar2 = puVar43 + *(longlong *)(lVar39 + 0x100);
          lStack_130 = CONCAT71(lStack_130._1_7_,*(undefined1 *)(lVar39 + 0x108));
          puStack_168 = (undefined4 *)*param_8;
          uStack_16c = *(undefined4 *)((longlong)puStack_160 + 0x1c);
          puStack_160 = (undefined8 *)puStack_160[2];
          lStack_f0 = 0;
          lStack_140 = 8;
          lStack_f8 = 0;
          puStack_138 = (ulonglong *)0x8;
          lStack_110 = 0;
          lVar49 = 0;
          uVar48 = 0;
          plStack_100 = (longlong *)lVar39;
          while( true ) {
            while( true ) {
              if ((char)lStack_130 == '\0') {
                if (uVar48 == (uint)lVar49) {
                  if (puVar43 == puVar2) {
                    return;
                  }
                  while( true ) {
                    lVar49 = *(longlong *)
                              (*(longlong *)(lStack_120 + 0x100) + 0x58 + (ulonglong)*puVar43 * 0xa0
                              );
                    if (lVar49 != 0) break;
                    puVar43 = puVar43 + 1;
                    if (puVar43 == puVar2) {
                      return;
                    }
                  }
                  lVar34 = *(longlong *)(lStack_120 + 0x100) + (ulonglong)*puVar43 * 0xa0;
                  uVar33 = (ulonglong)*(uint *)(lVar34 + 0x94);
                  lVar39 = *(longlong *)(lStack_120 + 0x1a0);
                  lVar38 = *(longlong *)(lVar39 + 0x18 + uVar33 * 0x48);
                  lVar35 = *(longlong *)(lVar39 + 0x38 + uVar33 * 0x48);
                  if ((*(ulonglong *)((longlong)plStack_100 + 0x118) <
                       *(ulonglong *)(lVar39 + 0x40 + uVar33 * 0x48)) &&
                     (uVar33 = *(ulonglong *)
                                (lVar35 + *(ulonglong *)((longlong)plStack_100 + 0x118) * 8),
                     uVar33 != 0)) {
                    lStack_f0 = *(longlong *)(lVar38 + 0x10 + ~uVar33 * 0x30);
                  }
                  else {
                    lStack_f0 = 0;
                  }
                  lVar39 = ~*(ulonglong *)
                             (lVar35 + *(longlong *)((longlong)plStack_100 + 0x110) * 8) * 0x30;
                  lStack_f8 = *(longlong *)(lVar38 + 0x10 + lVar39);
                  plStack_108 = *(longlong **)(lVar38 + 0x28 + lVar39);
                  puVar43 = puVar43 + 1;
                  lVar39 = ~*(ulonglong *)
                             (lVar35 + *(longlong *)((longlong)plStack_100 + 0x120) * 8) * 0x30;
                  lStack_110 = *(longlong *)(lVar38 + 0x10 + lVar39);
                  lStack_118 = *(longlong *)(lVar38 + 0x28 + lVar39);
                  lStack_140 = *(longlong *)(lVar34 + 0x50);
                  uVar48 = 0;
                  uVar33 = 0;
                }
                else {
                  uVar33 = (ulonglong)uVar48;
                }
                puVar30 = (undefined8 *)(lStack_140 + uVar33 * 0x10);
                uVar33 = (ulonglong)~*(uint *)(lStack_140 + 8 + uVar33 * 0x10);
              }
              else {
                if (uVar48 == (uint)lVar49) {
                  do {
                    if (puVar43 == puVar2) {
                      return;
                    }
                    uVar48 = *puVar43;
                    puVar43 = puVar43 + 1;
                    lVar49 = *(longlong *)
                              (*(longlong *)(lStack_120 + 0x1a0) + 0x10 + (ulonglong)uVar48 * 0x48);
                  } while (lVar49 == 0);
                  lVar39 = *(longlong *)(lStack_120 + 0x1a0) + (ulonglong)uVar48 * 0x48;
                  lVar38 = *(longlong *)(lVar39 + 0x18);
                  lVar35 = *(longlong *)(lVar39 + 0x38);
                  if ((*(ulonglong *)((longlong)plStack_100 + 0x118) < *(ulonglong *)(lVar39 + 0x40)
                      ) && (uVar33 = *(ulonglong *)
                                      (lVar35 + *(ulonglong *)((longlong)plStack_100 + 0x118) * 8),
                           uVar33 != 0)) {
                    lStack_f0 = *(longlong *)(lVar38 + 0x10 + ~uVar33 * 0x30);
                  }
                  else {
                    lStack_f0 = 0;
                  }
                  lVar34 = ~*(ulonglong *)
                             (lVar35 + *(longlong *)((longlong)plStack_100 + 0x110) * 8) * 0x30;
                  lStack_f8 = *(longlong *)(lVar38 + 0x10 + lVar34);
                  plStack_108 = *(longlong **)(lVar38 + 0x28 + lVar34);
                  lVar35 = ~*(ulonglong *)
                             (lVar35 + *(longlong *)((longlong)plStack_100 + 0x120) * 8) * 0x30;
                  lStack_110 = *(longlong *)(lVar38 + 0x10 + lVar35);
                  lStack_118 = *(longlong *)(lVar38 + 0x28 + lVar35);
                  puStack_138 = *(ulonglong **)(lVar39 + 8);
                  uVar48 = 0;
                }
                uVar33 = (ulonglong)uVar48;
                puVar30 = (undefined8 *)((longlong)puStack_138 + uVar33 * 8);
              }
              lVar39 = lStack_f8 + uVar33 * 0x48;
              puStack_150 = (undefined4 *)(lStack_110 + uVar33 * 4);
              plStack_148 = (longlong *)(lStack_118 + uVar33 * 4);
              lVar38 = uVar33 * 0x10 + lStack_f0;
              uVar62 = *puVar30;
              if ((int)uVar62 == 0) {
                return;
              }
              fVar52 = *(float *)((longlong)puStack_168 + 0x28);
              *(undefined4 *)((longlong)plStack_108 + uVar33 * 4) = (undefined4)lStack_128;
              fVar52 = fVar52 + *(float *)(lVar39 + 0x40);
              *(float *)(lVar39 + 0x40) = fVar52;
              fVar52 = fVar52 / fVar5;
              fVar59 = 0.0;
              if (0.0 <= fVar52) {
                fVar59 = fVar52;
              }
              fVar52 = fVar51;
              if (fVar59 <= fVar51) {
                fVar52 = fVar59;
              }
              uVar48 = uVar48 + 1;
              auVar61._0_8_ = pdb_140dedcd0(&UNK_1430210a0);
              auVar61._8_8_ = extraout_XMM0_Qb;
              if ((fVar52 != fVar51) || (NAN(fVar52) || NAN(fVar51))) break;
              uStack_220 = param_6[2];
              uStack_238 = (undefined7)uVar62;
              uStack_231 = (undefined1)((ulonglong)uVar62 >> 0x38);
              uStack_230 = (undefined7)*param_6;
              iStack_229._0_1_ = (undefined1)((ulonglong)*param_6 >> 0x38);
              iStack_229._1_3_ = (uint3)param_6[1];
              uStack_225 = (undefined5)((ulonglong)param_6[1] >> 0x18);
              auStack_218._0_8_ = param_6[3];
              pdb_140f04aa0(&uStack_238,&UNK_1430212e0);
            }
            fVar52 = (float)auVar61._0_8_;
            uVar57 = (undefined4)((ulonglong)auVar61._0_8_ >> 0x20);
            auVar54._4_12_ = auVar61._4_12_;
            auVar54._0_4_ = fVar52 + fVar52 + (fVar51 - fVar52) * 0.0;
            auVar56._0_8_ = auVar54._0_8_;
            auVar56._8_4_ = uVar57;
            auVar56._12_4_ = uVar57;
            auVar55._8_8_ = auVar56._8_8_;
            auVar55._4_4_ = fVar52 - (fVar51 - fVar52);
            auVar55._0_4_ = auVar54._0_4_;
            auVar61 = maxps(ZEXT816(0),auVar55);
            auVar61 = minps(auVar53,auVar61);
            uVar62 = auVar61._0_8_;
            fVar52 = *(float *)(lVar39 + 0x30);
            fVar59 = fVar58 / fVar52;
            if ((float)((uint)(auVar61._0_4_ - auVar61._4_4_) & uVar44) < fVar59 + fVar59) {
              auVar64._4_4_ = auVar61._4_4_ - fVar59;
              auVar64._0_4_ = fVar59 + auVar61._0_4_;
              auVar64._8_4_ = auVar61._8_4_ + 0.0;
              auVar64._12_4_ = auVar61._12_4_ + 0.0;
              auVar61 = maxps(ZEXT816(0),auVar64);
              auVar61 = minps(auVar53,auVar61);
              uVar62 = auVar61._0_8_;
            }
            if ((fVar52 == 0.0) && (!NAN(fVar52))) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143021234,0x45,&UNK_143021280);
            }
            fVar52 = (float)((ulonglong)uVar62 >> 0x20);
            uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar52);
            if ((fVar52 < 0.0) || (fVar51 < fVar52)) {
              uStack_238 = SUB87(&uStack_1a8,0);
              uStack_231 = (undefined1)((ulonglong)&uStack_1a8 >> 0x38);
              uStack_230 = 0x140f70fc0;
              iStack_229 = (uint)iStack_229._1_3_ << 8;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14335ec38,&uStack_238,&UNK_143021298);
            }
            fVar52 = (float)uVar62;
            uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar52);
            if ((fVar52 < 0.0) || (fVar51 < fVar52)) break;
            uStack_270 = 0;
            puStack_268 = (undefined8 *)0x4;
            uStack_260 = 0;
            uStack_e2 = 1;
            pdb_1419a6a90(lVar39);
            uStack_198 = uStack_260;
            uStack_1a8 = uStack_270;
            pfStack_1a0 = (float *)puStack_268;
            uStack_e2 = 0;
            pdb_1419aa3f0(&uStack_238,&uStack_1a8);
            uVar26 = uStack_238;
            lVar39 = CONCAT17(uStack_231,uStack_238);
            if (SBORROW8(0,lVar39)) {
              uStack_1a8 = CONCAT17((undefined1)iStack_229,uStack_230);
              pfStack_1a0 = (float *)CONCAT53(uStack_225,iStack_229._1_3_);
              uStack_e2 = 0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_1a8,&UNK_14335e258,&UNK_1430212c8);
            }
            lStack_158 = uStack_220;
            pbStack_240 = (byte *)auStack_218._0_8_;
            *(undefined4 *)plStack_148 = (undefined4)lStack_128;
            *puStack_150 = (undefined4)uStack_208;
            uStack_220 = CONCAT17((undefined1)iStack_229,uStack_230) +
                         CONCAT53(uStack_225,iStack_229._1_3_) * 0xc;
            uStack_238 = uStack_230;
            uStack_231 = (undefined1)iStack_229;
            iStack_229._1_3_ = (uint3)uVar26;
            uStack_225 = (undefined5)((ulonglong)lVar39 >> 0x18);
            *(undefined4 *)puStack_160 = uStack_16c;
            pdb_1417410c0(&uStack_238,lVar38,uStack_248);
            if (lStack_158 != 0) {
              pub_1406abac0(pbStack_240,lStack_158 << 2,4);
            }
          }
          uStack_238 = SUB87(&uStack_1a8,0);
          uStack_231 = (undefined1)((ulonglong)&uStack_1a8 >> 0x38);
          uStack_230 = 0x140f70fc0;
          iStack_229 = (uint)iStack_229._1_3_ << 8;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14335ec38,&uStack_238,&UNK_1430212b0);
        }
        lStack_130 = 0;
        lVar38 = lStack_f0 + 0x18;
        lVar35 = lStack_f0;
      }
      else {
        lStack_130 = lVar49 + 0x18;
        lVar38 = lStack_f0;
        lVar35 = lVar49;
      }
      lStack_f0 = lVar38;
      *puVar46 = *puVar46 + 1;
      lStack_128 = *(longlong *)(lVar35 + 8);
      uStack_238 = (undefined7)lStack_128;
      uStack_231 = (undefined1)((ulonglong)lStack_128 >> 0x38);
      lVar49 = lStack_130;
    } while (plVar36[3] == 0);
    uVar29 = pdb_1400af0a0(plVar42,&uStack_238);
    lVar38 = *plVar36;
    puVar1 = (ulonglong *)(plVar36 + 1);
    bVar50 = (byte)(uVar29 >> 0x39);
    auVar53 = ZEXT216(CONCAT11(bVar50,bVar50));
    auVar53 = pshuflw(auVar53,auVar53,0);
    lVar34 = 0;
    while( true ) {
      uVar29 = uVar29 & *puVar1;
      auVar61 = *(undefined1 (*) [16])(lVar38 + uVar29);
      auVar63[0] = -(auVar61[0] == auVar53[0]);
      auVar63[1] = -(auVar61[1] == auVar53[1]);
      auVar63[2] = -(auVar61[2] == auVar53[2]);
      auVar63[3] = -(auVar61[3] == auVar53[3]);
      auVar63[4] = -(auVar61[4] == auVar53[4]);
      auVar63[5] = -(auVar61[5] == auVar53[5]);
      auVar63[6] = -(auVar61[6] == auVar53[6]);
      auVar63[7] = -(auVar61[7] == auVar53[7]);
      auVar63[8] = -(auVar61[8] == auVar53[0]);
      auVar63[9] = -(auVar61[9] == auVar53[1]);
      auVar63[10] = -(auVar61[10] == auVar53[2]);
      auVar63[0xb] = -(auVar61[0xb] == auVar53[3]);
      auVar63[0xc] = -(auVar61[0xc] == auVar53[4]);
      auVar63[0xd] = -(auVar61[0xd] == auVar53[5]);
      auVar63[0xe] = -(auVar61[0xe] == auVar53[6]);
      auVar63[0xf] = -(auVar61[0xf] == auVar53[7]);
      uVar45 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(auVar63[0xf] >> 7) << 0xf;
      uVar44 = (uint)uVar45;
      if (uVar45 != 0) break;
LAB_1409240a0:
      auVar60[0] = -(auVar61[0] == (char)iVar19);
      auVar60[1] = -(auVar61[1] == (char)((uint)iVar19 >> 8));
      auVar60[2] = -(auVar61[2] == (char)((uint)iVar19 >> 0x10));
      auVar60[3] = -(auVar61[3] == (char)((uint)iVar19 >> 0x18));
      auVar60[4] = -(auVar61[4] == (char)iVar20);
      auVar60[5] = -(auVar61[5] == (char)((uint)iVar20 >> 8));
      auVar60[6] = -(auVar61[6] == (char)((uint)iVar20 >> 0x10));
      auVar60[7] = -(auVar61[7] == (char)((uint)iVar20 >> 0x18));
      auVar60[8] = -(auVar61[8] == (char)iVar21);
      auVar60[9] = -(auVar61[9] == (char)((uint)iVar21 >> 8));
      auVar60[10] = -(auVar61[10] == (char)((uint)iVar21 >> 0x10));
      auVar60[0xb] = -(auVar61[0xb] == (char)((uint)iVar21 >> 0x18));
      auVar60[0xc] = -(auVar61[0xc] == (char)iVar22);
      auVar60[0xd] = -(auVar61[0xd] == (char)((uint)iVar22 >> 8));
      auVar60[0xe] = -(auVar61[0xe] == (char)((uint)iVar22 >> 0x10));
      auVar60[0xf] = -(auVar61[0xf] == (char)((uint)iVar22 >> 0x18));
      lVar49 = lStack_130;
      if ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 || (SUB161(auVar60 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar60 >> 0x17,0) & 1) != 0) || (SUB161(auVar60 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar60 >> 0x27,0) & 1) != 0) || (SUB161(auVar60 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar60 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar60 >> 0x3f,0) & 1) != 0) || (SUB161(auVar60 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar60 >> 0x4f,0) & 1) != 0) || (SUB161(auVar60 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar60 >> 0x5f,0) & 1) != 0) || (SUB161(auVar60 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar60 >> 0x6f,0) & 1) != 0) || (SUB161(auVar60 >> 0x77,0) & 1) != 0) ||
          auVar60[0xf] < '\0') goto LAB_1409245b0;
      uVar29 = uVar29 + lVar34 + 0x10;
      lVar34 = lVar34 + 0x10;
    }
    while( true ) {
      uVar48 = 0;
      for (uVar18 = uVar44; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
        uVar48 = uVar48 + 1;
      }
      uVar47 = uVar48 + uVar29 & *puVar1;
      lVar39 = uVar47 * -0x2b0;
      if (lStack_128 == *(longlong *)(lVar38 + -0x2b0 + lVar39)) break;
      uVar45 = (ushort)(uVar44 - 1) & (ushort)uVar44;
      uVar44 = CONCAT22((short)(uVar44 - 1 >> 0x10),uVar45);
      plVar36 = plStack_148;
      puVar37 = puStack_150;
      plVar42 = plStack_108;
      lVar39 = lStack_f8;
      if (uVar45 == 0) goto LAB_1409240a0;
    }
    lVar39 = lVar39 + lVar38;
    if ((*(ulonglong *)(lVar39 + -0x298) < 2) || (*(float *)(lVar39 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430212f8);
    }
    uVar29 = *(ulonglong *)(lVar39 + -0x260);
    if (uVar29 == 0) {
      pfVar27 = (float *)0x4;
      goto LAB_1409241b1;
    }
    pfVar16 = *(float **)(lVar39 + -0x268);
    pdb_14007ee60();
    pfVar27 = (float *)pub_1406abab0(uVar29 * 0xc,4);
    if (pfVar27 == (float *)0x0) {
      pdb_142dc7e2a(4,uVar29 * 0xc);
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pfVar40 = (float *)(lVar39 + -0x20);
    if (uVar29 < 4) {
      uVar32 = 0;
      goto LAB_140924153;
    }
    if (pfVar27 < pfVar16 + uVar29 * 3 && pfVar16 < pfVar27 + uVar29 * 3) {
      uVar32 = 0;
      goto LAB_140924153;
    }
    uVar32 = 0;
    if (pfVar27 < (float *)(uVar47 * -0x2b0 + lVar38 + -0x1c) && pfVar40 < pfVar27 + uVar29 * 3)
    goto LAB_140924153;
    uVar32 = uVar29 & 0xfffffffffffffffc;
    fVar58 = *pfVar40 * 0.0 * fVar59;
    fVar51 = *pfVar40 * fVar59;
    lVar39 = 0;
    uVar47 = uVar32;
    do {
      fVar5 = *(float *)((longlong)pfVar16 + lVar39 + 0x24);
      fVar6 = *(float *)((longlong)pfVar16 + lVar39 + 0x18);
      fVar7 = *(float *)((longlong)pfVar16 + lVar39);
      fVar8 = *(float *)((longlong)pfVar16 + lVar39 + 4);
      fVar9 = *(float *)((longlong)pfVar16 + lVar39 + 8);
      fVar10 = *(float *)((longlong)pfVar16 + lVar39 + 0xc);
      fVar11 = *(float *)((longlong)pfVar16 + lVar39 + 0x28);
      fVar12 = *(float *)((longlong)pfVar16 + lVar39 + 0x1c);
      fVar13 = *(float *)((longlong)pfVar16 + lVar39 + 0x2c);
      fVar14 = *(float *)((longlong)pfVar16 + lVar39 + 0x20);
      fVar15 = *(float *)((longlong)pfVar16 + lVar39 + 0x14);
      pfVar4 = (float *)((longlong)pfVar27 + lVar39 + 0x10);
      *pfVar4 = *(float *)((longlong)pfVar16 + lVar39 + 0x10) + fVar51;
      pfVar4[1] = fVar15 + fVar58;
      pfVar4[2] = fVar6 + fVar58;
      pfVar4[3] = fVar12 + fVar51;
      pfVar4 = (float *)((longlong)pfVar27 + lVar39);
      *pfVar4 = fVar7 + fVar58;
      pfVar4[1] = fVar8 + fVar51;
      pfVar4[2] = fVar9 + fVar58;
      pfVar4[3] = fVar10 + fVar58;
      pfVar4 = (float *)((longlong)pfVar27 + lVar39 + 0x20);
      *pfVar4 = fVar14 + fVar58;
      pfVar4[1] = fVar5 + fVar58;
      pfVar4[2] = fVar11 + fVar51;
      pfVar4[3] = fVar13 + fVar58;
      lVar39 = lVar39 + 0x30;
      uVar47 = uVar47 - 4;
    } while (uVar47 != 0);
    if (uVar29 != uVar32) {
LAB_140924153:
      lVar49 = uVar29 - uVar32;
      lVar39 = uVar32 * 0xc + 8;
      do {
        uVar41 = *(undefined8 *)((longlong)pfVar16 + lVar39 + -8);
        fVar58 = *pfVar40 * fVar65 * fVar23;
        fVar51 = *(float *)((longlong)pfVar16 + lVar39);
        *(ulonglong *)((longlong)pfVar27 + lVar39 + -8) =
             CONCAT44((float)((ulonglong)uVar41 >> 0x20) + *pfVar40 * (float)uVar33 * fVar24,
                      (float)uVar41 + fVar58);
        *(float *)((longlong)pfVar27 + lVar39) = fVar58 + fVar51;
        lVar39 = lVar39 + 0xc;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
    }
LAB_1409241b1:
    lVar39 = lStack_f8;
    uStack_1a8 = uVar29;
    pfStack_1a0 = pfVar27;
    uStack_198 = uVar29;
    pdb_1419aa3f0(&uStack_238,&uStack_1a8);
    lVar49 = lStack_110;
    if (SBORROW8(0,CONCAT17(uStack_231,uStack_238))) {
      uStack_1a8 = CONCAT17((undefined1)iStack_229,uStack_230);
      pfStack_1a0 = (float *)CONCAT53(uStack_225,iStack_229._1_3_);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_1a8,&UNK_14335e258,&UNK_143021310);
    }
    uStack_178 = uStack_208;
    uStack_1a8 = CONCAT17(uStack_231,uStack_238);
    puVar30 = (undefined8 *)CONCAT17((undefined1)iStack_229,uStack_230);
    uVar29 = CONCAT53(uStack_225,iStack_229._1_3_);
    uStack_188 = auStack_218._0_8_;
    uStack_180 = auStack_218._8_8_;
    lStack_190 = uStack_220;
    pfStack_1a0 = (float *)puVar30;
    uStack_198 = uVar29;
    if (uVar29 == 0) {
      uStack_e1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143021328);
    }
    iStack_229 = *(int *)(puVar30 + 1);
    uStack_231 = (undefined1)*puVar30;
    uStack_230 = (undefined7)((ulonglong)*puVar30 >> 8);
    *puStack_168 = (undefined4)lStack_120;
    lVar38 = *(longlong *)(lStack_110 + 0x30);
    uVar41 = *(undefined8 *)(lStack_110 + 0x40);
    if (lVar38 == *(longlong *)(lStack_110 + 0x20)) {
      uStack_e1 = 1;
      pdb_142d7e6e0(lStack_118);
    }
    lVar34 = *(longlong *)(lVar49 + 0x28);
    lVar31 = lVar38 * 0x20;
    *(undefined8 *)(lVar34 + lVar31) = uVar41;
    *(undefined1 *)(lVar34 + 8 + lVar31) = 5;
    *(int *)(lVar34 + 0x18 + lVar31) = iStack_229;
    puVar3 = (undefined8 *)(lVar34 + 9 + lVar31);
    *puVar3 = CONCAT17(uStack_231,uStack_238);
    puVar3[1] = CONCAT17((undefined1)iStack_229,uStack_230);
    *(longlong *)(lVar49 + 0x30) = lVar38 + 1;
    *(longlong *)(lVar49 + 0x40) = *(longlong *)(lVar49 + 0x40) + 1;
    uVar47 = uVar29 * 0xc;
    if (0xaaaaaaaaaaaaaaa < uVar29) {
      uVar41 = 0;
LAB_140924661:
      uStack_e1 = 1;
      pdb_142dc7e2a(uVar41,uVar47);
                    /* WARNING: Does not return */
      pcVar17 = (code *)invalidInstructionException();
      (*pcVar17)();
    }
    if (uVar47 == 0) {
      pbVar28 = (byte *)0x4;
      uVar32 = 0;
    }
    else {
      pdb_14007ee60();
      uVar41 = 4;
      pbVar28 = pub_1406abab0(uVar47,4);
      uVar32 = uVar29;
      if (pbVar28 == (byte *)0x0) goto LAB_140924661;
    }
    pub_142e32760(pbVar28,puVar30,uVar47);
    uStack_1c4 = 0;
    uStack_1bc = 0;
    uStack_238 = 2;
    uStack_231 = 0x80;
    uStack_230 = (undefined7)uVar32;
    iStack_229._0_1_ = (undefined1)(uVar32 >> 0x38);
    iStack_229._1_3_ = (uint3)pbVar28;
    uStack_225 = (undefined5)((ulonglong)pbVar28 >> 0x18);
    uStack_208 = uVar62;
    lStack_200 = uVar25;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 1;
    uStack_1e4 = (undefined4)uStack_178;
    uStack_1e0 = 0x4040000000000000;
    uStack_1d8 = 1;
    uStack_1d0 = 0x100;
    uStack_1cc = (ulonglong)(uint)fVar52;
    uStack_1b8 = 0x3f800000;
    uStack_1b4 = 0;
    uStack_1b2 = 0;
    uStack_e1 = 1;
    uStack_220 = uVar29;
    pdb_1409bba50(&uStack_270,&uStack_238,uStack_248,lStack_140,param_6);
    uStack_208 = uStack_178;
    auStack_218._8_8_ = uStack_180;
    auStack_218._0_8_ = uStack_188;
    iStack_229._1_3_ = (uint3)uStack_198;
    uStack_225 = (undefined5)(uStack_198 >> 0x18);
    uStack_220 = lStack_190;
    uStack_238 = (undefined7)uStack_1a8;
    uStack_231 = (undefined1)(uStack_1a8 >> 0x38);
    uStack_230 = SUB87(pfStack_1a0,0);
    iStack_229._0_1_ = (undefined1)((ulonglong)pfStack_1a0 >> 0x38);
    uStack_1f4 = *(undefined1 *)(lVar35 + 0x10);
    uStack_1f8 = 0;
    lStack_200 = lStack_128;
    uStack_e1 = 0;
    pdb_141616de0(&uStack_270,&uStack_238,&UNK_143021340);
    plVar36 = plStack_148;
    puVar37 = puStack_150;
    plVar42 = plStack_108;
    puVar46 = puStack_138;
    lVar49 = lStack_130;
  } while( true );
}

