// VA 0x140a74610, PDB extent 6679 bytes
// country_core::systems::wall::merge_walls::merge_walls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/merge_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::merge_walls::merge_walls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/merge_walls.rs
   Extent: 6679 */

void pdb_140a74610(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,longlong *param_11,longlong *param_12,
                  longlong *param_13,undefined8 *param_14)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  char cVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  uint uVar25;
  undefined8 uVar26;
  ushort uVar27;
  longlong lVar28;
  longlong *plVar29;
  undefined4 *puVar30;
  longlong lVar31;
  byte bVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  undefined1 unaff_XMM8_Ba;
  char cVar43;
  undefined1 unaff_XMM8_Bb;
  char cVar44;
  undefined1 unaff_XMM8_Bc;
  char cVar45;
  undefined1 unaff_XMM8_Bd;
  char cVar46;
  undefined1 unaff_XMM8_Be;
  char cVar47;
  undefined1 unaff_XMM8_Bf;
  char cVar48;
  undefined1 unaff_XMM8_Bg;
  char cVar49;
  undefined1 unaff_XMM8_Bh;
  char cVar50;
  undefined1 unaff_XMM8_Bi;
  char cVar51;
  undefined1 unaff_XMM8_Bj;
  char cVar52;
  undefined1 unaff_XMM8_Bk;
  char cVar53;
  undefined1 unaff_XMM8_Bl;
  char cVar54;
  undefined1 unaff_XMM8_Bm;
  char cVar55;
  undefined1 unaff_XMM8_Bn;
  char cVar56;
  undefined1 unaff_XMM8_Bo;
  char cVar57;
  undefined1 unaff_XMM8_Bp;
  char cVar58;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar59;
  float fVar60;
  ulonglong uStack_4c0;
  ulonglong uStack_4b8;
  ulonglong uStack_4b0;
  ulonglong uStack_4a8;
  ulonglong uStack_4a0;
  ulonglong uStack_498;
  undefined8 uStack_490;
  ulonglong uStack_488;
  byte *pbStack_480;
  ulonglong uStack_478;
  ulonglong uStack_470;
  ulonglong uStack_468;
  ulonglong uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  ulonglong uStack_448;
  ulonglong uStack_440;
  undefined4 uStack_438;
  float fStack_434;
  ulonglong uStack_430;
  ulonglong uStack_428;
  undefined1 uStack_420;
  char cStack_41f;
  char cStack_41e;
  undefined2 uStack_41d;
  undefined1 uStack_41b;
  char cStack_41a;
  char cStack_419;
  ulonglong uStack_358;
  ulonglong uStack_350;
  ulonglong uStack_348;
  ulonglong uStack_340;
  ulonglong uStack_338;
  ulonglong uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  ulonglong uStack_318;
  ulonglong uStack_310;
  undefined8 uStack_308;
  ulonglong uStack_300;
  ulonglong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulonglong *puStack_2e0;
  longlong *plStack_2d8;
  longlong *plStack_2d0;
  longlong *plStack_2c8;
  longlong lStack_2c0;
  longlong *plStack_2b8;
  longlong lStack_2b0;
  longlong lStack_2a8;
  longlong *plStack_2a0;
  undefined4 *puStack_298;
  undefined8 *puStack_290;
  undefined4 *puStack_288;
  ulonglong *puStack_280;
  ulonglong *puStack_278;
  undefined8 uStack_270;
  undefined4 *puStack_268;
  longlong lStack_260;
  undefined4 *puStack_258;
  longlong lStack_250;
  undefined8 uStack_248;
  undefined4 *puStack_240;
  undefined4 *puStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  ulonglong uStack_208;
  ulonglong uStack_200;
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  ulonglong uStack_1b8;
  undefined8 uStack_1b0;
  longlong *plStack_1a0;
  longlong *plStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  undefined4 *puStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  byte *pbStack_128;
  longlong lStack_120;
  byte *pbStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  undefined4 uStack_d0;
  char cStack_c9;
  char cStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  puStack_2e0 = (ulonglong *)*param_7;
  lVar16 = param_7[1];
  uVar5 = *puStack_2e0;
  uVar17 = 0;
  uVar14 = uVar5 - *(ulonglong *)(lVar16 + 0x18);
  if (uVar5 < *(ulonglong *)(lVar16 + 0x18)) {
    uVar14 = uVar17;
  }
  uVar23 = uVar5 - *(ulonglong *)(lVar16 + 0x38);
  if (uVar5 < *(ulonglong *)(lVar16 + 0x38)) {
    uVar23 = uVar17;
  }
  lVar31 = uVar14 * 0x30 + *(longlong *)(lVar16 + 8);
  uVar5 = *(ulonglong *)(lVar16 + 0x10) - uVar14;
  if (*(ulonglong *)(lVar16 + 0x10) < uVar14) {
    lVar31 = 8;
    uVar5 = uVar17;
  }
  lVar15 = uVar23 * 0x30 + *(longlong *)(lVar16 + 0x28);
  uVar14 = *(ulonglong *)(lVar16 + 0x30) - uVar23;
  if (*(ulonglong *)(lVar16 + 0x30) < uVar23) {
    lVar15 = 8;
    uVar14 = uVar17;
  }
  *puStack_2e0 = (*(longlong *)(lVar16 + 0x40) - uVar14) - uVar5;
  lStack_2c0 = uVar5 * 0x30 + lVar31;
  lStack_260 = uVar14 * 0x30 + lVar15;
  uStack_110 = *(undefined4 *)((longlong)param_6 + 0x1c);
  uStack_190 = *param_6;
  puVar30 = (undefined4 *)param_6[2];
  plStack_2d8 = (longlong *)*param_10;
  plStack_2d0 = (longlong *)*param_12;
  plStack_2c8 = (longlong *)*param_14;
  uStack_d0 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_f8 = *param_3;
  puStack_f0 = (undefined4 *)param_3[2];
  uStack_e8 = *param_4;
  puStack_298 = (undefined4 *)param_4[2];
  uStack_158 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_154 = *(undefined4 *)((longlong)param_5 + 0x1c);
  puStack_290 = (undefined8 *)*param_5;
  puStack_288 = (undefined4 *)param_5[2];
  uStack_270 = *param_1;
  uStack_148 = *(undefined4 *)((longlong)param_9 + 0x1c);
  lStack_170 = *param_9;
  puStack_240 = (undefined4 *)param_9[2];
  uStack_144 = *(undefined4 *)((longlong)param_11 + 0x1c);
  lStack_168 = *param_11;
  puStack_238 = (undefined4 *)param_11[2];
  uStack_14c = *(undefined4 *)((longlong)param_13 + 0x1c);
  lStack_178 = *param_13;
  puStack_258 = (undefined4 *)param_13[2];
  uStack_150 = *(undefined4 *)((longlong)param_8 + 0x1c);
  lStack_188 = *param_8;
  puStack_268 = (undefined4 *)param_8[2];
  fVar42 = (float)_DAT_142e378e0;
  uVar5 = (ulonglong)_DAT_142e378e0 >> 0x20;
  iVar9 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                 CONCAT13(unaff_XMM8_Bd,
                          CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  cVar43 = (char)iVar9;
  cVar44 = (char)((uint)iVar9 >> 8);
  cVar45 = (char)((uint)iVar9 >> 0x10);
  cVar46 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                 CONCAT13(unaff_XMM8_Bh,
                          CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  cVar47 = (char)iVar9;
  cVar48 = (char)((uint)iVar9 >> 8);
  cVar49 = (char)((uint)iVar9 >> 0x10);
  cVar50 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                 CONCAT13(unaff_XMM8_Bl,
                          CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  cVar51 = (char)iVar9;
  cVar52 = (char)((uint)iVar9 >> 8);
  cVar53 = (char)((uint)iVar9 >> 0x10);
  cVar54 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                 CONCAT13(unaff_XMM8_Bp,
                          CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  cVar55 = (char)iVar9;
  cVar56 = (char)((uint)iVar9 >> 8);
  cVar57 = (char)((uint)iVar9 >> 0x10);
  cVar58 = (char)((uint)iVar9 >> 0x18);
  puStack_280 = puStack_290 + 3;
  puStack_278 = puStack_290 + 0x11;
  plStack_2a0 = plStack_2d8 + 4;
  plStack_198 = plStack_2d8 + 6;
  plStack_2b8 = plStack_2d0 + 4;
  plStack_1a0 = plStack_2d0 + 6;
  lStack_228 = lStack_170 + 0x20;
  lStack_220 = lStack_168 + 0x20;
  lStack_230 = lStack_178 + 0x20;
  lStack_250 = lStack_188 + 0x20;
  bVar10 = true;
  lVar16 = lVar15;
  puStack_180 = puVar30;
  uStack_140 = param_2;
  if (lVar31 == 0) goto LAB_140a74920;
LAB_140a748fc:
  lVar16 = lVar15;
  if (lVar31 == lStack_2c0) goto LAB_140a74920;
  lVar28 = lVar31 + 0x30;
  *puStack_2e0 = *puStack_2e0 + 1;
  lVar16 = lVar31;
  uVar26 = uStack_190;
  uVar4 = uStack_110;
  do {
    uStack_190 = uVar26;
    uStack_110 = uVar4;
    if (!bVar10) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1430414b2,0x1e,&UNK_143041508);
    }
    if (*(longlong *)(lVar16 + 8) == *(longlong *)(lVar16 + 0x10)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143041520,0x28,&UNK_143041548);
    }
    *puVar30 = uVar4;
    uStack_100 = *(undefined8 *)(lVar16 + 8);
    lStack_2b0 = lVar28;
    pdb_140b0e830(&uStack_488,uVar26);
    if (SBORROW8(0,uStack_488)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143041560);
    }
    uStack_2f8 = uStack_428;
    uStack_300 = uStack_430;
    uStack_318 = uStack_448;
    uStack_310 = uStack_440;
    uStack_328 = (undefined4)uStack_458;
    uStack_324 = uStack_458._4_4_;
    uStack_320 = uStack_450;
    uStack_31c = uStack_44c;
    uStack_338 = uStack_468;
    uStack_330 = uStack_460;
    uStack_348 = uStack_478;
    uStack_340 = uStack_470;
    uStack_358 = uStack_488;
    uStack_350 = (ulonglong)pbStack_480;
    fVar33 = *(float *)(lVar16 + 0x18);
    uStack_308 = CONCAT44(fVar33,uStack_438);
    uStack_2f0 = CONCAT62(CONCAT15(cStack_419,
                                   CONCAT14(cStack_41a,
                                            CONCAT13(uStack_41b,CONCAT21(uStack_41d,cStack_41e)))),
                          CONCAT11(*(undefined1 *)(lVar16 + 0x28),uStack_420));
    *puVar30 = uVar4;
    uVar14 = *(ulonglong *)(lVar16 + 0x10);
    uStack_c5 = 1;
    pdb_140b0e830(&uStack_488,uVar26,uVar14);
    plVar11 = plStack_2d0;
    plVar29 = plStack_2d8;
    if (SBORROW8(0,uStack_488)) {
      uStack_c5 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143041578);
    }
    uStack_1b0 = CONCAT17(cStack_419,
                          CONCAT16(cStack_41a,
                                   CONCAT15(uStack_41b,
                                            CONCAT23(uStack_41d,
                                                     CONCAT12(cStack_41e,
                                                              CONCAT11(cStack_41f,uStack_420))))));
    uStack_1b8 = uStack_428;
    uStack_1c8 = CONCAT44(fStack_434,uStack_438);
    uStack_1c0 = uStack_430;
    uStack_1d8 = uStack_448;
    uStack_1d0 = uStack_440;
    uStack_1e8 = (undefined4)uStack_458;
    uStack_1e4 = uStack_458._4_4_;
    uStack_1e0 = uStack_450;
    uStack_1dc = uStack_44c;
    uStack_1f8 = uStack_468;
    uStack_1f0 = uStack_460;
    uStack_208 = uStack_478;
    uStack_200 = uStack_470;
    uStack_218 = uStack_488;
    uStack_210 = (ulonglong)pbStack_480;
    plVar24 = plStack_2d8;
    if (cStack_41f != '\0') {
      plVar24 = plStack_2d0;
    }
    cStack_c8 = cStack_41e;
    if (cStack_41e != '\0') {
      plVar24 = plStack_2c8;
    }
    cStack_c9 = cStack_41a;
    if (plVar24[3] != 0) {
      uStack_c4 = 1;
      uStack_488 = uVar14;
      uVar17 = pdb_1400af0a0(plVar24 + 4,&uStack_488);
      bVar32 = (byte)(uVar17 >> 0x39);
      auVar34 = ZEXT216(CONCAT11(bVar32,bVar32));
      auVar34 = pshuflw(auVar34,auVar34,0);
      lVar31 = 0;
      while( true ) {
        uVar17 = uVar17 & plVar24[1];
        pcVar1 = (char *)(*plVar24 + uVar17);
        auVar38[0] = -(*pcVar1 == auVar34[0]);
        auVar38[1] = -(pcVar1[1] == auVar34[1]);
        auVar38[2] = -(pcVar1[2] == auVar34[2]);
        auVar38[3] = -(pcVar1[3] == auVar34[3]);
        auVar38[4] = -(pcVar1[4] == auVar34[4]);
        auVar38[5] = -(pcVar1[5] == auVar34[5]);
        auVar38[6] = -(pcVar1[6] == auVar34[6]);
        auVar38[7] = -(pcVar1[7] == auVar34[7]);
        auVar38[8] = -(pcVar1[8] == auVar34[0]);
        auVar38[9] = -(pcVar1[9] == auVar34[1]);
        auVar38[10] = -(pcVar1[10] == auVar34[2]);
        auVar38[0xb] = -(pcVar1[0xb] == auVar34[3]);
        auVar38[0xc] = -(pcVar1[0xc] == auVar34[4]);
        auVar38[0xd] = -(pcVar1[0xd] == auVar34[5]);
        auVar38[0xe] = -(pcVar1[0xe] == auVar34[6]);
        auVar38[0xf] = -(pcVar1[0xf] == auVar34[7]);
        uVar27 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf
        ;
        uVar25 = (uint)uVar27;
        while (uVar27 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar25; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar28 = *plVar24 + (uVar7 + uVar17 & plVar24[1]) * -0x10;
          if (uVar14 == *(ulonglong *)(lVar28 + -0x10)) {
            uStack_dc = *(undefined4 *)(lVar28 + -8);
            goto joined_r0x000140a74bb6;
          }
          uVar27 = (ushort)(uVar25 - 1) & (ushort)uVar25;
          uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar27);
        }
        auVar35[0] = -(*pcVar1 == cVar43);
        auVar35[1] = -(pcVar1[1] == cVar44);
        auVar35[2] = -(pcVar1[2] == cVar45);
        auVar35[3] = -(pcVar1[3] == cVar46);
        auVar35[4] = -(pcVar1[4] == cVar47);
        auVar35[5] = -(pcVar1[5] == cVar48);
        auVar35[6] = -(pcVar1[6] == cVar49);
        auVar35[7] = -(pcVar1[7] == cVar50);
        auVar35[8] = -(pcVar1[8] == cVar51);
        auVar35[9] = -(pcVar1[9] == cVar52);
        auVar35[10] = -(pcVar1[10] == cVar53);
        auVar35[0xb] = -(pcVar1[0xb] == cVar54);
        auVar35[0xc] = -(pcVar1[0xc] == cVar55);
        auVar35[0xd] = -(pcVar1[0xd] == cVar56);
        auVar35[0xe] = -(pcVar1[0xe] == cVar57);
        auVar35[0xf] = -(pcVar1[0xf] == cVar58);
        if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x1f,0) & 1) != 0) || (SUB161(auVar35 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') break;
        uVar17 = uVar17 + lVar31 + 0x10;
        lVar31 = lVar31 + 0x10;
      }
    }
    uStack_dc = (undefined4)plVar24[6];
joined_r0x000140a74bb6:
    if (cStack_c8 == '\0') {
      plVar24 = plStack_198;
      if (plVar29[3] != 0) {
        uStack_c4 = 1;
        uStack_488 = uVar14;
        uVar17 = pdb_1400af0a0(plStack_2a0,&uStack_488);
        bVar32 = (byte)(uVar17 >> 0x39);
        auVar34 = ZEXT216(CONCAT11(bVar32,bVar32));
        auVar34 = pshuflw(auVar34,auVar34,0);
        lVar31 = 0;
        while( true ) {
          uVar17 = uVar17 & plVar29[1];
          pcVar1 = (char *)(*plVar29 + uVar17);
          auVar39[0] = -(*pcVar1 == auVar34[0]);
          auVar39[1] = -(pcVar1[1] == auVar34[1]);
          auVar39[2] = -(pcVar1[2] == auVar34[2]);
          auVar39[3] = -(pcVar1[3] == auVar34[3]);
          auVar39[4] = -(pcVar1[4] == auVar34[4]);
          auVar39[5] = -(pcVar1[5] == auVar34[5]);
          auVar39[6] = -(pcVar1[6] == auVar34[6]);
          auVar39[7] = -(pcVar1[7] == auVar34[7]);
          auVar39[8] = -(pcVar1[8] == auVar34[0]);
          auVar39[9] = -(pcVar1[9] == auVar34[1]);
          auVar39[10] = -(pcVar1[10] == auVar34[2]);
          auVar39[0xb] = -(pcVar1[0xb] == auVar34[3]);
          auVar39[0xc] = -(pcVar1[0xc] == auVar34[4]);
          auVar39[0xd] = -(pcVar1[0xd] == auVar34[5]);
          auVar39[0xe] = -(pcVar1[0xe] == auVar34[6]);
          auVar39[0xf] = -(pcVar1[0xf] == auVar34[7]);
          uVar27 = (ushort)(SUB161(auVar39 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar39[0xf] >> 7) << 0xf;
          uVar25 = (uint)uVar27;
          while (uVar27 != 0) {
            uVar7 = 0;
            for (uVar8 = uVar25; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            lVar28 = *plVar29 + (uVar7 + uVar17 & plVar29[1]) * -0x10;
            if (uVar14 == *(ulonglong *)(lVar28 + -0x10)) {
              plVar24 = (longlong *)(lVar28 + -8);
              goto LAB_140a74c7d;
            }
            uVar27 = (ushort)(uVar25 - 1) & (ushort)uVar25;
            uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar27);
          }
          auVar36[0] = -(*pcVar1 == cVar43);
          auVar36[1] = -(pcVar1[1] == cVar44);
          auVar36[2] = -(pcVar1[2] == cVar45);
          auVar36[3] = -(pcVar1[3] == cVar46);
          auVar36[4] = -(pcVar1[4] == cVar47);
          auVar36[5] = -(pcVar1[5] == cVar48);
          auVar36[6] = -(pcVar1[6] == cVar49);
          auVar36[7] = -(pcVar1[7] == cVar50);
          auVar36[8] = -(pcVar1[8] == cVar51);
          auVar36[9] = -(pcVar1[9] == cVar52);
          auVar36[10] = -(pcVar1[10] == cVar53);
          auVar36[0xb] = -(pcVar1[0xb] == cVar54);
          auVar36[0xc] = -(pcVar1[0xc] == cVar55);
          auVar36[0xd] = -(pcVar1[0xd] == cVar56);
          auVar36[0xe] = -(pcVar1[0xe] == cVar57);
          auVar36[0xf] = -(pcVar1[0xf] == cVar58);
          plVar24 = plStack_198;
          if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x2f,0) & 1) != 0) || (SUB161(auVar36 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x47,0) & 1) != 0) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
          uVar17 = uVar17 + lVar31 + 0x10;
          lVar31 = lVar31 + 0x10;
        }
      }
LAB_140a74c7d:
      lVar31 = plVar11[3];
      uVar4 = (int)*plVar24;
    }
    else {
      lVar31 = plVar11[3];
      uVar4 = uStack_dc;
    }
    plVar29 = plStack_1a0;
    uStack_488 = uVar14;
    if (lVar31 != 0) {
      uStack_c4 = 1;
      uVar17 = pdb_1400af0a0(plStack_2b8,&uStack_488);
      bVar32 = (byte)(uVar17 >> 0x39);
      auVar34 = ZEXT216(CONCAT11(bVar32,bVar32));
      auVar34 = pshuflw(auVar34,auVar34,0);
      lVar31 = 0;
      while( true ) {
        uVar17 = uVar17 & plVar11[1];
        pcVar1 = (char *)(*plVar11 + uVar17);
        auVar40[0] = -(*pcVar1 == auVar34[0]);
        auVar40[1] = -(pcVar1[1] == auVar34[1]);
        auVar40[2] = -(pcVar1[2] == auVar34[2]);
        auVar40[3] = -(pcVar1[3] == auVar34[3]);
        auVar40[4] = -(pcVar1[4] == auVar34[4]);
        auVar40[5] = -(pcVar1[5] == auVar34[5]);
        auVar40[6] = -(pcVar1[6] == auVar34[6]);
        auVar40[7] = -(pcVar1[7] == auVar34[7]);
        auVar40[8] = -(pcVar1[8] == auVar34[0]);
        auVar40[9] = -(pcVar1[9] == auVar34[1]);
        auVar40[10] = -(pcVar1[10] == auVar34[2]);
        auVar40[0xb] = -(pcVar1[0xb] == auVar34[3]);
        auVar40[0xc] = -(pcVar1[0xc] == auVar34[4]);
        auVar40[0xd] = -(pcVar1[0xd] == auVar34[5]);
        auVar40[0xe] = -(pcVar1[0xe] == auVar34[6]);
        auVar40[0xf] = -(pcVar1[0xf] == auVar34[7]);
        uVar27 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf
        ;
        uVar25 = (uint)uVar27;
        while (uVar27 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar25; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar28 = *plVar11 + (uVar7 + uVar17 & plVar11[1]) * -0x10;
          if (uVar14 == *(ulonglong *)(lVar28 + -0x10)) {
            plVar29 = (longlong *)(lVar28 + -8);
            goto LAB_140a74d57;
          }
          uVar27 = (ushort)(uVar25 - 1) & (ushort)uVar25;
          uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar27);
        }
        auVar37[0] = -(*pcVar1 == cVar43);
        auVar37[1] = -(pcVar1[1] == cVar44);
        auVar37[2] = -(pcVar1[2] == cVar45);
        auVar37[3] = -(pcVar1[3] == cVar46);
        auVar37[4] = -(pcVar1[4] == cVar47);
        auVar37[5] = -(pcVar1[5] == cVar48);
        auVar37[6] = -(pcVar1[6] == cVar49);
        auVar37[7] = -(pcVar1[7] == cVar50);
        auVar37[8] = -(pcVar1[8] == cVar51);
        auVar37[9] = -(pcVar1[9] == cVar52);
        auVar37[10] = -(pcVar1[10] == cVar53);
        auVar37[0xb] = -(pcVar1[0xb] == cVar54);
        auVar37[0xc] = -(pcVar1[0xc] == cVar55);
        auVar37[0xd] = -(pcVar1[0xd] == cVar56);
        auVar37[0xe] = -(pcVar1[0xe] == cVar57);
        auVar37[0xf] = -(pcVar1[0xf] == cVar58);
        plVar29 = plStack_1a0;
        if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x1f,0) & 1) != 0) || (SUB161(auVar37 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
        uVar17 = uVar17 + lVar31 + 0x10;
        lVar31 = lVar31 + 0x10;
      }
    }
LAB_140a74d57:
    uVar23 = uStack_208;
    uVar17 = uStack_210;
    uVar2 = (undefined4)*plVar29;
    uVar3 = *(undefined4 *)(lVar16 + 0x1c + (ulonglong)(uStack_2f0._2_1_ ^ 1) * 4);
    if ((fVar33 != fStack_434) || (NAN(fVar33) || NAN(fStack_434))) {
      uStack_308 = CONCAT44(fStack_434,(undefined4)uStack_308);
      uVar26 = 1;
      uStack_248 = uStack_100;
      unaff_XMM9_Da = fStack_434;
      unaff_XMM10_Da = fVar33;
    }
    else {
      uVar26 = 0;
    }
    lStack_2a8 = lVar15;
    if (*(char *)(lVar16 + 0x2a) == '\x01') {
      uVar20 = uStack_208 * 8;
      if (0x7ffffffffffffffc < uVar20 || uStack_208 >> 0x3d != 0) {
        uVar26 = 0;
LAB_140a75955:
        uStack_c4 = 1;
        pdb_142dc7e2a(uVar26,uVar20);
        goto LAB_140a75b4a;
      }
      if (uVar20 == 0) {
        pbVar18 = (byte *)0x4;
        uStack_d8 = 0;
        uStack_108 = uVar2;
        uStack_104 = uVar3;
        uStack_160 = uVar26;
        uStack_10c = uVar4;
        uVar19 = uStack_d8;
      }
      else {
        uStack_160 = uVar26;
        uStack_10c = uVar4;
        uStack_108 = uVar2;
        uStack_104 = uVar3;
        pdb_14007ee60();
        uVar26 = 4;
        pbVar18 = pub_1406abab0(uVar20,4);
        uVar19 = uVar23;
        if (pbVar18 == (byte *)0x0) goto LAB_140a75955;
      }
      uStack_d8 = uVar19;
      if (uVar23 != 0) {
        pub_142e32760(pbVar18,uVar17,uVar20);
        goto LAB_140a74fe0;
      }
LAB_140a74f50:
      uVar23 = 0;
    }
    else {
      uVar20 = uStack_208 * 8;
      if (0x7ffffffffffffffc < uVar20 || uStack_208 >> 0x3d != 0) {
        uVar26 = 0;
LAB_140a7593a:
        uStack_c4 = 1;
        pdb_142dc7e2a(uVar26,uVar20);
        goto LAB_140a75b4a;
      }
      if (uVar20 == 0) {
        pbVar18 = (byte *)0x4;
        uStack_d8 = 0;
        uStack_108 = uVar2;
        uStack_104 = uVar3;
        uStack_160 = uVar26;
        uVar19 = uStack_d8;
        uStack_10c = uVar4;
      }
      else {
        uStack_160 = uVar26;
        uStack_10c = uVar4;
        uStack_108 = uVar2;
        uStack_104 = uVar3;
        pdb_14007ee60();
        uVar26 = 4;
        pbVar18 = pub_1406abab0(uVar20,4);
        uVar19 = uVar23;
        if (pbVar18 == (byte *)0x0) goto LAB_140a7593a;
      }
      uStack_d8 = uVar19;
      if (uVar23 == 0) goto LAB_140a74f50;
      pub_142e32760(pbVar18,uVar17,uVar20);
      uVar17 = uVar23 >> 1;
      if (uVar17 != 0) {
        if (uVar17 == 1) {
          uVar20 = 0;
        }
        else {
          lVar31 = uVar23 - 1;
          uVar20 = 0;
          do {
            uVar26 = *(undefined8 *)(pbVar18 + uVar20 * 8);
            *(undefined8 *)(pbVar18 + uVar20 * 8) = *(undefined8 *)(pbVar18 + lVar31 * 8);
            *(undefined8 *)(pbVar18 + lVar31 * 8) = uVar26;
            uVar26 = *(undefined8 *)(pbVar18 + uVar20 * 8 + 8);
            *(undefined8 *)(pbVar18 + uVar20 * 8 + 8) =
                 *(undefined8 *)(pbVar18 + (uVar20 ^ 0x1ffffffffffffffe) * 8 + uVar23 * 8);
            *(undefined8 *)(pbVar18 + (uVar20 ^ 0x1ffffffffffffffe) * 8 + uVar23 * 8) = uVar26;
            uVar20 = uVar20 + 2;
            lVar31 = lVar31 + -2;
          } while ((uVar17 & 0xffffffffffffffe) != uVar20);
          if ((uVar17 & 1) == 0) goto LAB_140a74fe0;
        }
        uVar26 = *(undefined8 *)(pbVar18 + uVar20 * 8);
        *(undefined8 *)(pbVar18 + uVar20 * 8) = *(undefined8 *)(pbVar18 + ~uVar20 * 8 + uVar23 * 8);
        *(undefined8 *)(pbVar18 + ~uVar20 * 8 + uVar23 * 8) = uVar26;
      }
    }
LAB_140a74fe0:
    uVar20 = uStack_348;
    uVar17 = uVar20;
    pbStack_118 = pbVar18;
    if (*(char *)(lVar16 + 0x29) == '\x01') {
      uVar19 = uStack_348 * 8;
      if (0x7ffffffffffffffc < uVar19 || uStack_348 >> 0x3d != 0) {
        uVar26 = 0;
LAB_140a7596f:
        uStack_c6 = 1;
        uStack_c7 = 1;
        pdb_142dc7e2a(uVar26,uVar19);
        goto LAB_140a75b4a;
      }
      if (uVar19 == 0) {
        pbVar18 = (byte *)0x4;
        uVar17 = 0;
        uVar21 = uStack_350;
      }
      else {
        uStack_138 = uStack_350;
        pdb_14007ee60();
        uVar26 = 4;
        pbVar18 = pub_1406abab0(uVar19,4);
        uVar21 = uStack_138;
        if (pbVar18 == (byte *)0x0) goto LAB_140a7596f;
      }
      if (uVar20 == 0) goto LAB_140a75b28;
      pub_142e32760(pbVar18,uVar21,uVar19);
      uVar19 = uVar20 >> 1;
      uStack_130 = uVar17;
      pbStack_128 = pbVar18;
      if (uVar19 != 0) {
        if (uVar19 == 1) {
          uVar21 = 0;
        }
        else {
          lVar31 = uVar20 - 1;
          uVar21 = 0;
          do {
            uVar26 = *(undefined8 *)(pbVar18 + uVar21 * 8);
            *(undefined8 *)(pbVar18 + uVar21 * 8) = *(undefined8 *)(pbVar18 + lVar31 * 8);
            *(undefined8 *)(pbVar18 + lVar31 * 8) = uVar26;
            uVar26 = *(undefined8 *)(pbVar18 + uVar21 * 8 + 8);
            *(undefined8 *)(pbVar18 + uVar21 * 8 + 8) =
                 *(undefined8 *)(pbVar18 + (uVar21 ^ 0x1ffffffffffffffe) * 8 + uVar20 * 8);
            *(undefined8 *)(pbVar18 + (uVar21 ^ 0x1ffffffffffffffe) * 8 + uVar20 * 8) = uVar26;
            uVar21 = uVar21 + 2;
            lVar31 = lVar31 + -2;
          } while ((uVar19 & 0xffffffffffffffe) != uVar21);
          if ((uVar19 & 1) == 0) goto LAB_140a75209;
        }
        uVar26 = *(undefined8 *)(pbVar18 + uVar21 * 8);
        *(undefined8 *)(pbVar18 + uVar21 * 8) = *(undefined8 *)(pbVar18 + ~uVar21 * 8 + uVar20 * 8);
        *(undefined8 *)(pbVar18 + ~uVar21 * 8 + uVar20 * 8) = uVar26;
      }
    }
    else {
      uVar19 = uStack_348 * 8;
      if (0x7ffffffffffffffc < uVar19 || uStack_348 >> 0x3d != 0) {
        uVar26 = 0;
LAB_140a75990:
        uStack_c6 = 1;
        uStack_c7 = 1;
        pdb_142dc7e2a(uVar26,uVar19);
        goto LAB_140a75b4a;
      }
      if (uVar19 == 0) {
        uStack_130 = 0;
        pbStack_128 = (byte *)0x4;
        uVar17 = uStack_130;
        pbVar18 = pbStack_128;
        uVar21 = uStack_350;
      }
      else {
        uStack_138 = uStack_350;
        pdb_14007ee60();
        uVar26 = 4;
        pbVar18 = pub_1406abab0(uVar19,4);
        uVar21 = uStack_138;
        if (pbVar18 == (byte *)0x0) goto LAB_140a75990;
      }
      if (uVar20 == 0) {
LAB_140a75b28:
        pbStack_128 = pbVar18;
        uStack_130 = uVar17;
        uStack_c1 = 1;
        uStack_c2 = 1;
        uStack_c3 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143041590);
      }
      uStack_130 = uVar17;
      pbStack_128 = pbVar18;
      pub_142e32760(pbVar18,uVar21,uVar19);
    }
LAB_140a75209:
    lVar31 = uVar20 - 1;
    uStack_2e8 = *(undefined8 *)(pbVar18 + uVar20 * 8 + -8);
    lStack_120 = lVar31;
    if (uVar17 - lVar31 < uVar23) {
      pdb_142d7f1b0(&uStack_130,lVar31,uVar23,4,8);
      pbVar18 = pbStack_128;
LAB_140a7523c:
      lVar31 = lStack_120;
      puVar30 = puStack_180;
      pub_142e32760(pbVar18 + lStack_120 * 8,pbStack_118,uVar23 * 8);
    }
    else {
      puVar30 = puStack_180;
      if (uVar23 != 0) goto LAB_140a7523c;
    }
    lStack_120 = lVar31 + uVar23;
    if (uStack_d8 != 0) {
      pub_1406abac0(pbStack_118,uStack_d8 * 8,4);
    }
    *puVar30 = uStack_110;
    uStack_478 = lStack_120;
    uStack_488 = uStack_130;
    pbStack_480 = pbStack_128;
    uStack_c1 = 0;
    uStack_c2 = 0;
    uStack_c3 = 1;
    pdb_140080c90(&uStack_4c0,&uStack_488,0);
    if (SBORROW8(0,uStack_4c0)) {
      uStack_488 = uStack_4b8;
      pbStack_480 = (byte *)uStack_4b0;
      uStack_c1 = 0;
      uStack_c2 = 0;
      uStack_c3 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_488,&UNK_14335e258,&UNK_1430415a8);
    }
    cStack_41a = cStack_c9 == '\x01';
    uStack_458 = uStack_490;
    uStack_468 = uStack_4a0;
    uStack_460 = uStack_498;
    uStack_478 = uStack_4b0;
    uStack_470 = uStack_4a8;
    uStack_488 = uStack_4c0;
    pbStack_480 = (byte *)uStack_4b8;
    cVar13 = uStack_1b0._1_1_;
    cStack_419 = (DAT_143cb2d0c == '\0') * '\x05';
    uStack_450 = 2;
    uStack_420 = (undefined1)uStack_1b0;
    cStack_41f = uStack_1b0._1_1_;
    cStack_41e = cStack_c8;
    uStack_41d = uStack_1b0._3_2_;
    uStack_41b = uStack_1b0._5_1_;
    uStack_430 = uStack_1c0;
    uStack_428 = uStack_1b8;
    uStack_c1 = 0;
    uStack_c2 = 0;
    uStack_c3 = 1;
    puVar22 = &uStack_488;
    uVar17 = pdb_140b0eb60(uStack_190);
    if ((uVar17 & 1) == 0) {
      uStack_c1 = 0;
      uStack_c2 = 0;
      uStack_c3 = 1;
      pdb_142dc8110(&UNK_1430415c0,0x2d,&UNK_1430415f0);
LAB_140a75b4a:
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (cStack_c8 == '\0') {
      if (cVar13 == '\0') {
        *puStack_240 = uStack_148;
        lVar31 = *(longlong *)(lStack_170 + 0x30);
        uVar26 = *(undefined8 *)(lStack_170 + 0x40);
        lVar15 = lStack_170;
        if (lVar31 == *(longlong *)(lStack_170 + 0x20)) {
          uStack_c1 = 0;
          uStack_c2 = 0;
          uStack_c3 = 1;
          pdb_142d7e830(lStack_228);
          lVar15 = lStack_170;
        }
      }
      else {
        *puStack_238 = uStack_144;
        lVar31 = *(longlong *)(lStack_168 + 0x30);
        uVar26 = *(undefined8 *)(lStack_168 + 0x40);
        lVar15 = lStack_168;
        if (lVar31 == *(longlong *)(lStack_168 + 0x20)) {
          uStack_c1 = 0;
          uStack_c2 = 0;
          uStack_c3 = 1;
          pdb_142d7e830(lStack_220);
          lVar15 = lStack_168;
        }
      }
    }
    else {
      *puStack_258 = uStack_14c;
      lVar31 = *(longlong *)(lStack_178 + 0x30);
      uVar26 = *(undefined8 *)(lStack_178 + 0x40);
      lVar15 = lStack_178;
      if (lVar31 == *(longlong *)(lStack_178 + 0x20)) {
        uStack_c1 = 0;
        uStack_c2 = 0;
        uStack_c3 = 1;
        pdb_142d7e830(lStack_230);
        lVar15 = lStack_178;
      }
    }
    lVar28 = *(longlong *)(lVar15 + 0x28);
    *(undefined8 *)(lVar28 + lVar31 * 0x18) = uVar26;
    *(ulonglong **)(lVar28 + 8 + lVar31 * 0x18) = puVar22;
    *(undefined4 *)(lVar28 + 0x10 + lVar31 * 0x18) = uStack_dc;
    *(undefined1 *)(lVar28 + 0x14 + lVar31 * 0x18) = 0;
    *(longlong *)(lVar15 + 0x30) = lVar31 + 1;
    *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
    *puStack_f0 = uStack_d0;
    uStack_c1 = 0;
    uStack_c2 = 0;
    uStack_c3 = 1;
    pdb_140aa2f60(uStack_f8,0,uStack_100,uStack_e8,uStack_140,&UNK_143041608,7);
    *puStack_f0 = uStack_d0;
    uStack_c1 = 0;
    uStack_c2 = 0;
    uStack_c3 = 1;
    pdb_140c419b0(uStack_f8,uStack_100,uStack_e8);
    *puStack_f0 = uStack_d0;
    uStack_c1 = 0;
    uStack_c2 = 0;
    uStack_c3 = 1;
    pdb_140aa2f60(uStack_f8,0,uVar14,uStack_e8,uStack_140,&UNK_14304160f,7);
    *puStack_f0 = uStack_d0;
    uStack_c1 = 0;
    uStack_c2 = 0;
    uStack_c3 = 1;
    pdb_140c419b0(uStack_f8,uVar14,uStack_e8);
    *puStack_f0 = uStack_d0;
    uStack_c1 = 0;
    uStack_c2 = 0;
    uStack_c3 = 1;
    pdb_140aa2f60(uStack_f8,0,puVar22,uStack_e8,uStack_140,&UNK_143041616,0xc);
    *puStack_298 = uStack_158;
    uStack_c1 = 0;
    uStack_c2 = 0;
    uStack_c3 = 1;
    pdb_140c3d980(uStack_e8,uStack_100,uVar14);
    puVar12 = puStack_290;
    *puStack_288 = uStack_154;
    uVar4 = *(undefined4 *)(lVar16 + 0x24);
    pub_142e32760(&uStack_488,puStack_290);
    *puVar12 = uStack_160;
    puVar12[1] = uStack_248;
    *(float *)(puVar12 + 2) = unaff_XMM10_Da;
    *(float *)((longlong)puVar12 + 0x14) = unaff_XMM9_Da;
    puStack_280[0xc] = uStack_2f8;
    puStack_280[0xd] = uStack_2f0;
    puStack_280[10] = uStack_308;
    puStack_280[0xb] = uStack_300;
    puStack_280[8] = uStack_318;
    puStack_280[9] = uStack_310;
    puStack_280[6] = CONCAT44(uStack_324,uStack_328);
    puStack_280[7] = CONCAT44(uStack_31c,uStack_320);
    puStack_280[4] = uStack_338;
    puStack_280[5] = uStack_330;
    puStack_280[2] = uStack_348;
    puStack_280[3] = uStack_340;
    *puStack_280 = uStack_358;
    puStack_280[1] = uStack_350;
    *puStack_278 = uStack_218;
    puStack_278[1] = uStack_210;
    puStack_278[2] = uStack_208;
    puStack_278[3] = uStack_200;
    puStack_278[4] = uStack_1f8;
    puStack_278[5] = uStack_1f0;
    *(undefined4 *)(puStack_278 + 6) = uStack_1e8;
    *(undefined4 *)((longlong)puStack_278 + 0x34) = uStack_1e4;
    *(undefined4 *)(puStack_278 + 7) = uStack_1e0;
    *(undefined4 *)((longlong)puStack_278 + 0x3c) = uStack_1dc;
    puStack_278[8] = uStack_1d8;
    puStack_278[9] = uStack_1d0;
    puStack_278[10] = uStack_1c8;
    puStack_278[0xb] = uStack_1c0;
    puStack_278[0xc] = uStack_1b8;
    puStack_278[0xd] = uStack_1b0;
    puVar12[0x1f] = uStack_100;
    puVar12[0x20] = uVar14;
    puVar12[0x21] = puVar22;
    *(undefined4 *)(puVar12 + 0x22) = uStack_104;
    *(undefined4 *)((longlong)puVar12 + 0x114) = uStack_10c;
    *(undefined4 *)(puVar12 + 0x23) = uVar4;
    *(undefined4 *)((longlong)puVar12 + 0x11c) = uStack_108;
    *(undefined4 *)(puVar12 + 0x24) = uStack_108;
    *(undefined4 *)((longlong)puVar12 + 0x124) = uStack_10c;
    if ((int)uStack_488 != 2) {
      uStack_c1 = 0;
      uStack_c2 = 0;
      uStack_c3 = 0;
      pdb_1409a1310(&uStack_488);
      uStack_c1 = 0;
      uStack_c2 = 0;
      uStack_c3 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143041622,0x1f1,&UNK_143041818);
    }
    uStack_c1 = 0;
    uStack_c2 = 0;
    uStack_c3 = 0;
    pdb_140df4520(&uStack_488,&uStack_2e8);
    uStack_c1 = 0;
    uStack_c2 = 0;
    uStack_c3 = 0;
    fVar33 = (float)pdb_1419c1ac0(uStack_270);
    fVar41 = fVar33 * fVar42;
    fVar60 = (float)uStack_488;
    uVar14 = uStack_488 >> 0x20;
    fVar59 = pbStack_480._0_4_ + fVar41;
    *puStack_268 = uStack_150;
    lVar16 = *(longlong *)(lStack_188 + 0x30);
    uVar26 = *(undefined8 *)(lStack_188 + 0x40);
    if (lVar16 == *(longlong *)(lStack_188 + 0x20)) {
      uStack_c1 = 0;
      uStack_c2 = 0;
      uStack_c3 = 0;
      pdb_142d7e6e0(lStack_250);
    }
    lVar31 = *(longlong *)(lStack_188 + 0x28);
    lVar15 = lVar16 * 0x20;
    *(undefined8 *)(lVar31 + lVar15) = uVar26;
    *(undefined1 *)(lVar31 + 8 + lVar15) = 4;
    *(ulonglong *)(lVar31 + 0x10 + lVar15) =
         CONCAT44(fVar33 * (float)uVar5 + (float)uVar14,fVar41 + fVar60);
    *(float *)(lVar31 + 0x18 + lVar15) = fVar59;
    *(longlong *)(lStack_188 + 0x30) = lVar16 + 1;
    *(longlong *)(lStack_188 + 0x40) = *(longlong *)(lStack_188 + 0x40) + 1;
    bVar10 = false;
    lVar15 = lStack_2a8;
    lVar16 = lStack_2a8;
    lVar31 = lStack_2b0;
    if (lStack_2b0 != 0) goto LAB_140a748fc;
LAB_140a74920:
    if ((lVar16 == 0) || (lVar16 == lStack_260)) {
      return;
    }
    lVar15 = lVar16 + 0x30;
    lVar28 = 0;
    *puStack_2e0 = *puStack_2e0 + 1;
    uVar26 = uStack_190;
    uVar4 = uStack_110;
  } while( true );
}

