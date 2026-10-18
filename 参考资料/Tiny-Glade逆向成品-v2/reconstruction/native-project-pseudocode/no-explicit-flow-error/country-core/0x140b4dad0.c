// VA 0x140b4dad0, PDB extent 11847 bytes
// country_core::systems::ui_move_shapes::ui_move_shapes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_shapes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui_move_shapes::ui_move_shapes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_shapes.rs
   Extent: 11847 */

void pdb_140b4dad0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 param_8,
                  longlong *param_9,longlong *param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,
                  undefined8 *param_16)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined4 *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  char cVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 (*pauVar18) [16];
  ulonglong uVar19;
  undefined8 uVar20;
  float *pfVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  code *pcVar26;
  float *pfVar27;
  undefined1 (*pauVar28) [16];
  int *piVar29;
  longlong lVar30;
  undefined8 uVar31;
  undefined1 uVar32;
  ushort uVar33;
  longlong lVar34;
  ulonglong uVar35;
  uint uVar36;
  undefined4 uVar37;
  ulonglong uVar38;
  undefined4 *puVar39;
  longlong *plVar40;
  undefined4 uVar41;
  bool bVar42;
  bool bVar43;
  byte bVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar49 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar50 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 in_stack_fffffffffffffb30;
  undefined8 in_stack_fffffffffffffb38;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 auStack_460 [48];
  ulonglong uStack_430;
  longlong lStack_428;
  longlong lStack_420;
  undefined4 *puStack_418;
  undefined8 uStack_410;
  longlong lStack_408;
  longlong lStack_400;
  undefined4 *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined4 *puStack_3e0;
  longlong lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined8 uStack_3bc;
  undefined4 uStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  undefined4 uStack_3a8;
  float fStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  float fStack_394;
  undefined4 uStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  undefined4 *puStack_380;
  longlong lStack_378;
  longlong lStack_370;
  ulonglong *puStack_368;
  undefined4 *puStack_360;
  longlong lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_33c;
  undefined4 uStack_334;
  undefined4 *puStack_330;
  char *pcStack_328;
  longlong *plStack_320;
  int *piStack_318;
  undefined8 uStack_30c;
  undefined4 uStack_304;
  undefined8 uStack_300;
  longlong lStack_2f8;
  longlong lStack_2f0;
  float fStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  longlong *plStack_2d0;
  float fStack_2c8;
  undefined4 uStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  undefined2 uStack_2b8;
  undefined1 uStack_2b6;
  undefined1 uStack_2b5;
  float fStack_2b4;
  undefined8 uStack_2b0;
  float fStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulonglong uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  float fStack_274;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined1 uStack_25c;
  undefined1 uStack_25b;
  undefined1 uStack_25a;
  char cStack_259;
  undefined1 uStack_250;
  undefined1 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined2 uStack_220;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 uStack_1a1;
  ulonglong uStack_1a0;
  byte *pbStack_198;
  ulonglong uStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  ulonglong uStack_178;
  undefined4 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  uint uStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_148;
  code *pcStack_140;
  float *pfStack_138;
  float *pfStack_130;
  float fStack_128;
  float fStack_124;
  longlong lStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 *puStack_108;
  float *pfStack_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined1 auVar51 [16];
  
  uVar41 = (undefined4)((ulonglong)in_stack_fffffffffffffb30 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  plVar15 = (longlong *)*param_2;
  plStack_320 = (longlong *)param_2[4];
  puStack_360 = (undefined4 *)param_2[6];
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,*(undefined4 *)((longlong)param_2 + 0x3c));
  lStack_378 = param_2[8];
  lStack_370 = param_2[9];
  pfStack_130 = (float *)*param_3;
  pcStack_328 = (char *)param_3[4];
  puStack_368 = (ulonglong *)param_3[8];
  lStack_3d8 = param_3[9];
  uStack_3e8 = param_3[0xd];
  plStack_2d0 = (longlong *)*param_4;
  lStack_2f0 = param_4[4];
  puStack_330 = (undefined4 *)param_4[6];
  uVar37 = *(undefined4 *)((longlong)param_4 + 0x3c);
  lStack_408 = param_9[4];
  lStack_400 = param_9[5];
  puStack_3f8 = (undefined4 *)param_9[6];
  uStack_3f0 = param_9[7];
  lStack_428 = param_9[8];
  lStack_420 = param_9[9];
  puStack_418 = (undefined4 *)param_9[10];
  uStack_410 = param_9[0xb];
  uStack_488 = param_14[4];
  uStack_480 = param_14[5];
  uStack_478 = param_14[6];
  uStack_470 = param_14[7];
  uStack_4a8 = param_14[8];
  uStack_4a0 = param_14[9];
  uStack_498 = param_14[10];
  uStack_490 = param_14[0xb];
  pcVar2 = (char *)*param_1;
  uVar20 = *param_5;
  pfStack_100 = (float *)param_5[4];
  puStack_108 = (undefined8 *)param_10[4];
  pfStack_138 = (float *)param_10[6];
  fStack_10c = *(float *)((longlong)param_10 + 0x3c);
  lStack_2f8 = param_10[8];
  pbStack_198 = (byte *)param_10[10];
  uStack_190 = CONCAT44(uStack_190._4_4_,*(undefined4 *)((longlong)param_10 + 0x5c));
  lStack_358 = param_10[0xc];
  puStack_3e0 = (undefined4 *)param_10[0xe];
  uStack_2dc = *(undefined4 *)((longlong)param_10 + 0x7c);
  piStack_318 = (int *)*param_14;
  if (*pcVar2 != '\0') {
    return;
  }
  if (1 < *(int *)(pcVar2 + 8) - 1U) {
    return;
  }
  uStack_350 = param_14[0xc];
  puStack_380 = *(undefined4 **)(pcVar2 + 0x10);
  fStack_2c8 = SUB84(puStack_380,0);
  uStack_2c4 = (float)((ulonglong)puStack_380 >> 0x20);
  puStack_170 = puStack_380;
  if (plVar15[3] != 0) {
    uVar13 = pdb_1400af0a0(plVar15 + 4,&fStack_2c8);
    lVar30 = *plVar15;
    uVar16 = plVar15[1];
    bVar44 = (byte)(uVar13 >> 0x39);
    auVar49 = ZEXT216(CONCAT11(bVar44,bVar44));
    auVar49 = pshuflw(auVar49,auVar49,0);
    lVar22 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar16;
      auVar64 = *(undefined1 (*) [16])(lVar30 + uVar13);
      auVar50[0] = -(auVar64[0] == auVar49[0]);
      auVar50[1] = -(auVar64[1] == auVar49[1]);
      auVar50[2] = -(auVar64[2] == auVar49[2]);
      auVar50[3] = -(auVar64[3] == auVar49[3]);
      auVar50[4] = -(auVar64[4] == auVar49[4]);
      auVar50[5] = -(auVar64[5] == auVar49[5]);
      auVar50[6] = -(auVar64[6] == auVar49[6]);
      auVar50[7] = -(auVar64[7] == auVar49[7]);
      auVar50[8] = -(auVar64[8] == auVar49[0]);
      auVar50[9] = -(auVar64[9] == auVar49[1]);
      auVar50[10] = -(auVar64[10] == auVar49[2]);
      auVar50[0xb] = -(auVar64[0xb] == auVar49[3]);
      auVar50[0xc] = -(auVar64[0xc] == auVar49[4]);
      auVar50[0xd] = -(auVar64[0xd] == auVar49[5]);
      auVar50[0xe] = -(auVar64[0xe] == auVar49[6]);
      auVar50[0xf] = -(auVar64[0xf] == auVar49[7]);
      uVar33 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
      uVar25 = (uint)uVar33;
      while (uVar33 != 0) {
        uVar36 = 0;
        for (uVar4 = uVar25; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar36 = uVar36 + 1;
        }
        lStack_120 = (uVar36 + uVar13 & uVar16) * -0x2b0;
        if (puStack_170 == *(undefined4 **)(lVar30 + -0x2b0 + lStack_120)) {
          lStack_120 = lStack_120 + lVar30;
          if ((*(ulonglong *)(lStack_120 + -0x298) < 2) || (*(float *)(lStack_120 + -0x278) <= 0.0))
          {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143059898);
          }
          fStack_2c8 = SUB84(puStack_170,0);
          uStack_2c4 = (float)((ulonglong)puStack_170 >> 0x20);
          uVar13 = pdb_1400af0a0(plVar15 + 4,&fStack_2c8);
          lVar22 = lStack_120;
          bVar44 = (byte)(uVar13 >> 0x39);
          auVar49 = ZEXT216(CONCAT11(bVar44,bVar44));
          auVar49 = pshuflw(auVar49,auVar49,0);
          lVar23 = 0;
          goto LAB_140b4de08;
        }
        uVar33 = (ushort)(uVar25 - 1) & (ushort)uVar25;
        uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar33);
      }
      auVar56[0] = -(auVar64[0] == -1);
      auVar56[1] = -(auVar64[1] == -1);
      auVar56[2] = -(auVar64[2] == -1);
      auVar56[3] = -(auVar64[3] == -1);
      auVar56[4] = -(auVar64[4] == -1);
      auVar56[5] = -(auVar64[5] == -1);
      auVar56[6] = -(auVar64[6] == -1);
      auVar56[7] = -(auVar64[7] == -1);
      auVar56[8] = -(auVar64[8] == -1);
      auVar56[9] = -(auVar64[9] == -1);
      auVar56[10] = -(auVar64[10] == -1);
      auVar56[0xb] = -(auVar64[0xb] == -1);
      auVar56[0xc] = -(auVar64[0xc] == -1);
      auVar56[0xd] = -(auVar64[0xd] == -1);
      auVar56[0xe] = -(auVar64[0xe] == -1);
      auVar56[0xf] = -(auVar64[0xf] == -1);
      if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar56 >> 0x17,0) & 1) != 0) || (SUB161(auVar56 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar56 >> 0x27,0) & 1) != 0) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar56 >> 0x3f,0) & 1) != 0) || (SUB161(auVar56 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar56 >> 0x4f,0) & 1) != 0) || (SUB161(auVar56 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar56 >> 0x5f,0) & 1) != 0) || (SUB161(auVar56 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar56 >> 0x6f,0) & 1) != 0) || (SUB161(auVar56 >> 0x77,0) & 1) != 0) ||
          auVar56[0xf] < '\0') break;
      uVar13 = uVar13 + lVar22 + 0x10;
      lVar22 = lVar22 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430598b0);
LAB_140b4de08:
  uVar13 = uVar13 & uVar16;
  auVar64 = *(undefined1 (*) [16])(lVar30 + uVar13);
  auVar61[0] = -(auVar64[0] == auVar49[0]);
  auVar61[1] = -(auVar64[1] == auVar49[1]);
  auVar61[2] = -(auVar64[2] == auVar49[2]);
  auVar61[3] = -(auVar64[3] == auVar49[3]);
  auVar61[4] = -(auVar64[4] == auVar49[4]);
  auVar61[5] = -(auVar64[5] == auVar49[5]);
  auVar61[6] = -(auVar64[6] == auVar49[6]);
  auVar61[7] = -(auVar64[7] == auVar49[7]);
  auVar61[8] = -(auVar64[8] == auVar49[0]);
  auVar61[9] = -(auVar64[9] == auVar49[1]);
  auVar61[10] = -(auVar64[10] == auVar49[2]);
  auVar61[0xb] = -(auVar64[0xb] == auVar49[3]);
  auVar61[0xc] = -(auVar64[0xc] == auVar49[4]);
  auVar61[0xd] = -(auVar64[0xd] == auVar49[5]);
  auVar61[0xe] = -(auVar64[0xe] == auVar49[6]);
  auVar61[0xf] = -(auVar64[0xf] == auVar49[7]);
  uVar33 = (ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf;
  uVar25 = (uint)uVar33;
  while (uVar33 != 0) {
    uVar36 = 0;
    for (uVar4 = uVar25; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar36 = uVar36 + 1;
    }
    lVar34 = (uVar36 + uVar13 & uVar16) * -0x2b0;
    if (puStack_170 == *(undefined4 **)(lVar30 + -0x2b0 + lVar34)) {
      lVar30 = lVar30 + lVar34;
      if ((*(ulonglong *)(lVar30 + -0x298) < 2) || (*(float *)(lVar30 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430598c8);
      }
      uVar25 = *(uint *)(lVar30 + -0x50);
      if (1 < uVar25) {
        return;
      }
      fStack_110 = *(float *)(lVar30 + -0x4c);
      fStack_114 = *(float *)(lVar30 + -0x48);
      fStack_124 = *(float *)(lVar30 + -0x44);
      fStack_128 = *(float *)(lVar30 + -0x40);
      uStack_178 = *(ulonglong *)(lVar30 + -0x3c);
      uStack_348 = *param_13;
      pfVar21 = pfStack_100;
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(float)uStack_2b0);
      if (*(char *)(lStack_120 + -6) != '\0') {
        fVar47 = fStack_114;
        fVar48 = fStack_110;
        if ((uVar25 & 1) != 0) {
          fVar47 = fStack_128;
          fVar48 = fStack_124;
        }
        uStack_3c8 = CONCAT44(fVar47,fVar48);
        fVar45 = (float)pdb_1419c1ac0(uStack_348,fVar48,fVar47);
        fVar47 = *(float *)(lVar22 + -0x24);
        fVar48 = fVar47;
        if (fVar47 <= fVar45) {
          fVar48 = fVar45;
        }
        pdb_140df4540(&uStack_30c,&uStack_3c8,
                      (float)((uint)fVar47 & -(uint)NAN(fVar45) | ~-(uint)NAN(fVar45) & (uint)fVar48
                             ) + _DAT_142e37890);
        uStack_168 = &puStack_380;
        uStack_160 = pdb_140b55410;
        pdb_140f60760(&fStack_2c8,&UNK_1430598f8,&uStack_168);
        uStack_168 = (undefined4 **)CONCAT44(uStack_2c4,fStack_2c8);
        uStack_158 = CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,uStack_2b8));
        fStack_154 = fStack_2b4;
        uStack_230 = uStack_304;
        uStack_238 = uStack_30c;
        fStack_2c8 = 0.0;
        uStack_2c4 = 0.0;
        fStack_2c0 = 1.12104e-44;
        uStack_2bc = 0.0;
        uStack_2b8 = 0;
        uStack_2b6 = 0;
        uStack_2b5 = 0;
        fStack_2b4 = 0.0;
        uStack_2b0._0_4_ = 1.4013e-45;
        fStack_2a8 = 0.0;
        uStack_2a4 = 0;
        uStack_298 = (ulonglong)uStack_298._4_4_ << 0x20;
        uStack_280 = 0;
        uStack_268 = (float *)((ulonglong)uStack_268._4_4_ << 0x20);
        uStack_250 = 0;
        uStack_240 = 0;
        uStack_23c = 0x3ecccccd;
        uStack_220 = 0x100;
        pcVar26 = (code *)&uStack_168;
        lVar30 = pdb_1409008d0(uVar20,pcVar26,&fStack_2c8);
        pfVar21 = pfStack_100;
        uVar12 = _DAT_142e37988;
        if (((*(char *)(lVar30 + 0x18) != '\0') && (*(code **)(lVar30 + 0x38) == pcVar26)) &&
           (*(int *)(lVar30 + 0x28) != 2)) {
          uVar12 = _DAT_142e3798c;
        }
        fStack_2c8 = 0.0;
        uStack_2b8 = (undefined2)uVar12;
        uStack_2b6 = (undefined1)((uint)uVar12 >> 0x10);
        uStack_2b5 = (undefined1)((uint)uVar12 >> 0x18);
        fStack_2b4 = (float)uStack_30c;
        uStack_2b0._0_4_ = (float)((ulonglong)uStack_30c >> 0x20);
        uStack_2b0._4_4_ = (float)uStack_304;
        fStack_2a8 = 1.0;
        uStack_2a4 = CONCAT31(uStack_2a4._1_3_,1);
        uStack_168 = (undefined4 **)pfStack_100;
        uStack_158 = uStack_158 & 0xffffff00;
        uStack_160 = pcVar26;
        pcStack_140 = pcVar26;
        pdb_140ab0a40(&fStack_2c8,&uStack_168);
        puVar39 = puStack_170;
        plVar40 = plStack_320;
        uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(float)uStack_2b0);
        if (((*(char *)(lVar30 + 0x18) == '\x02') &&
            (uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(float)uStack_2b0),
            *(char *)(lVar30 + 0x19) == '\x01')) &&
           (uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(float)uStack_2b0),
           *(code **)(lVar30 + 0x38) == pcStack_140)) {
          pcStack_140 = (code *)CONCAT44(pcStack_140._4_4_,uVar25);
          *puStack_360 = (undefined4)uStack_1a0;
          fStack_1c8 = SUB84(puStack_170,0);
          fVar47 = fStack_1c8;
          fStack_1c4 = (float)((ulonglong)puStack_170 >> 0x20);
          fVar48 = fStack_1c4;
          lVar30 = pdb_1417bd890(plStack_320,&fStack_1c8);
          if (lVar30 == 0) {
            if (1 < *_DAT_143ca8e90) {
              uStack_160 = pdb_140c04ef0;
              fStack_2c8 = 0.0;
              uStack_2c4 = 0.0;
              fStack_2c0 = 130.11667;
              uStack_2bc = 1.4013e-45;
              uStack_2b8 = 0x2b;
              uStack_2b6 = 0;
              uStack_2b5 = 0;
              fStack_2b4 = 0.0;
              uStack_2b0._0_4_ = 0.0;
              uStack_2b0._4_4_ = 0.0;
              fStack_2a8 = 130.11583;
              uStack_2a4 = 1;
              uStack_2a0 = 0x36;
              uStack_29c = 0;
              uStack_298 = 2;
              uStack_290 = &UNK_143021dde;
              uStack_288 = 0x2b;
              uStack_280 = 1;
              uStack_27c = 0xfd;
              uStack_278 = 0x43021d78;
              fStack_274 = 1.4013e-45;
              puStack_270 = &uStack_168;
              uStack_168 = (undefined4 **)&fStack_1c8;
              pdb_140f332f0(&uStack_1a1,&fStack_2c8);
            }
          }
          else {
            pdb_1403b05d0(plVar40 + 0xc,puVar39);
            *(undefined1 *)(lVar30 + 0x6d) = 0;
          }
          fStack_1c8 = 0.0;
          fStack_1c4 = 0.0;
          fStack_1c0 = 1.12104e-44;
          fStack_1bc = 0.0;
          fStack_1b8 = 0.0;
          fStack_1b4 = 0.0;
          uStack_2b8 = 1;
          fStack_2c8 = 1.96182e-44;
          uStack_2c4 = -0.0;
          uStack_f1 = 1;
          fStack_2c0 = fVar47;
          uStack_2bc = fVar48;
          pdb_140a1aa80(&fStack_1c8,&fStack_2c8);
          *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
          uVar31 = *param_7;
          lVar30 = CONCAT44(fStack_1bc,fStack_1c0);
          uStack_168 = (undefined4 **)0x0;
          uStack_160 = (code *)0x8;
          uStack_158 = 0;
          fStack_154 = 0.0;
          uStack_2b0 = lVar30 + CONCAT44(fStack_1b4,fStack_1b8) * 0x18;
          fStack_2c8 = fStack_1c0;
          uStack_2c4 = fStack_1bc;
          fStack_2c0 = fStack_1c0;
          uStack_2bc = fStack_1bc;
          uStack_2b8 = SUB42(fStack_1c8,0);
          uStack_2b6 = (undefined1)((uint)fStack_1c8 >> 0x10);
          uStack_2b5 = (undefined1)((uint)fStack_1c8 >> 0x18);
          fStack_2b4 = fStack_1c4;
          uVar14 = pdb_140c69b60(&fStack_2c8);
          fStack_2c0 = (float)uVar14;
          uStack_2bc = (float)((ulonglong)uVar14 >> 0x20);
          uStack_2b8 = (undefined2)lVar30;
          uStack_2b6 = (undefined1)((ulonglong)lVar30 >> 0x10);
          uStack_2b5 = (undefined1)((ulonglong)lVar30 >> 0x18);
          fStack_2b4 = (float)((ulonglong)lVar30 >> 0x20);
          fStack_2c8 = 9.80909e-45;
          uStack_2c4 = 0.0;
          uStack_f1 = 0;
          pdb_140ae5180(uVar31,&fStack_2c8,&UNK_143059908);
          lVar22 = lStack_428;
          cVar11 = *(char *)(lStack_120 + -5);
          uStack_2b8 = (undefined2)((uint)uStack_304 >> 8);
          uStack_2b6 = (undefined1)((uint)uStack_304 >> 0x18);
          uStack_2c4._3_1_ = (undefined1)uStack_30c;
          fStack_2c0 = (float)((ulonglong)uStack_30c >> 8);
          uStack_2bc._0_3_ = (undefined3)((ulonglong)uStack_30c >> 0x28);
          uStack_2bc = (float)CONCAT13((char)uStack_304,(undefined3)uStack_2bc);
          *puStack_418 = uStack_410._4_4_;
          lVar30 = *(longlong *)(lStack_428 + 0x30);
          uVar31 = *(undefined8 *)(lStack_428 + 0x40);
          if (lVar30 == *(longlong *)(lStack_428 + 0x20)) {
            uStack_f1 = 0;
            uStack_3d0 = *(undefined8 *)(lStack_428 + 0x40);
            pdb_142d7e6e0(lStack_428 + 0x20);
            uVar31 = uStack_3d0;
          }
          lVar23 = *(longlong *)(lVar22 + 0x28);
          lVar34 = lVar30 * 0x20;
          *(undefined8 *)(lVar23 + lVar34) = uVar31;
          *(byte *)(lVar23 + 8 + lVar34) = (cVar11 == '\x02') * '\x02' | 0x11;
          *(uint *)(lVar23 + 0x18 + lVar34) =
               CONCAT13(uStack_2b6,CONCAT21(uStack_2b8,uStack_2bc._3_1_));
          puVar1 = (undefined8 *)(lVar23 + 9 + lVar34);
          *puVar1 = CONCAT44(uStack_2c4,fStack_2c8);
          puVar1[1] = CONCAT44(uStack_2bc,fStack_2c0);
          *(longlong *)(lVar22 + 0x30) = lVar30 + 1;
          *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
          pfVar21 = pfStack_100;
          uVar25 = (uint)pcStack_140._0_4_;
        }
      }
      fVar48 = fStack_110;
      fVar47 = fStack_124;
      bVar42 = (uVar25 & 1) == 0;
      fVar45 = fStack_124;
      if (bVar42) {
        fVar45 = fStack_110;
      }
      auVar64 = ZEXT416((uint)fStack_128);
      auVar49 = ZEXT416((uint)fStack_114);
      fVar65 = fStack_128;
      if (bVar42) {
        fVar65 = fStack_114;
      }
      fStack_388 = fVar45;
      fStack_384 = fVar65;
      fVar46 = (float)pdb_1419c1ac0(uStack_348,fVar45,fVar65);
      pdb_140df4540(&fStack_188,&fStack_388);
      puVar39 = puStack_170;
      fVar60 = _DAT_142e4e650;
      fVar66 = _UNK_142e4e654;
      fVar67 = _UNK_142e4e658;
      fVar55 = _UNK_142e4e65c;
      if ((uVar25 & 1) != 0) {
        uStack_168 = (undefined4 **)CONCAT44(fStack_114,fStack_110);
        uStack_160 = (code *)CONCAT44(fStack_128,fStack_124);
        uStack_158 = (uint)uStack_178;
        fStack_154 = (float)(uStack_178 >> 0x20);
        pdb_140df1c30(&fStack_2c8,&uStack_168);
        fVar66 = (float)CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,uStack_2b8));
        if (fStack_2a8 <= 0.0) {
          fVar66 = fVar66 - fStack_2c8;
          if (fVar66 <= 0.0) {
            fVar66 = (_DAT_142e36f28 - fStack_2a8) - fVar66;
            fVar55 = _DAT_142e36f50 / SQRT(fVar66);
            fVar60 = fVar66 * fVar55;
            fVar66 = fVar55 * (uStack_2c4 + uStack_2bc);
            fVar67 = fVar55 * (fStack_2c0 + (float)uStack_2b0);
            fVar55 = (fStack_2b4 - uStack_2b0._4_4_) * fVar55;
          }
          else {
            fVar66 = (_DAT_142e36f28 - fStack_2a8) + fVar66;
            fVar55 = _DAT_142e36f50 / SQRT(fVar66);
            fVar60 = (uStack_2bc + uStack_2c4) * fVar55;
            fVar66 = fVar55 * fVar66;
            fVar67 = fVar55 * (uStack_2b0._4_4_ + fStack_2b4);
            fVar55 = ((float)uStack_2b0 - fStack_2c0) * fVar55;
          }
        }
        else {
          fStack_2c8 = fStack_2c8 + fVar66;
          if (fStack_2c8 <= 0.0) {
            fStack_2c8 = (fStack_2a8 + _DAT_142e36f28) - fStack_2c8;
            fVar55 = _DAT_142e36f50 / SQRT(fStack_2c8);
            fVar60 = (fStack_2c0 + (float)uStack_2b0) * fVar55;
            fVar66 = fVar55 * (fStack_2b4 + uStack_2b0._4_4_);
            fVar67 = fVar55 * fStack_2c8;
            fVar55 = (uStack_2c4 - uStack_2bc) * fVar55;
          }
          else {
            fStack_2c8 = fStack_2c8 + fStack_2a8 + _DAT_142e36f28;
            fVar55 = _DAT_142e36f50 / SQRT(fStack_2c8);
            fVar60 = (fStack_2b4 - uStack_2b0._4_4_) * fVar55;
            fVar66 = fVar55 * ((float)uStack_2b0 - fStack_2c0);
            fVar67 = fVar55 * (uStack_2c4 - uStack_2bc);
            fVar55 = fVar55 * fStack_2c8;
          }
        }
      }
      uStack_160 = (code *)CONCAT44(uStack_160._4_4_,fStack_180);
      uStack_168 = (undefined4 **)CONCAT44(fStack_184,fStack_188);
      uVar14 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffb38 >> 8),
                        0.0 < *(float *)(lStack_120 + -0x24));
      uVar31 = CONCAT44(uVar41,*(undefined4 *)(lStack_120 + -0x278));
      pfVar27 = &fStack_2c8;
      fStack_2c8 = fVar60;
      uStack_2c4 = fVar66;
      fStack_2c0 = fVar67;
      uStack_2bc = fVar55;
      lVar22 = pdb_140b50920(&uStack_168,pfVar27,param_8,uVar20,puVar39,uVar31,uVar14,fVar46,pfVar21
                            );
      fVar60 = uStack_2bc;
      fVar66 = fStack_2c0;
      plVar9 = plStack_2d0;
      lVar30 = lStack_2f0;
      plVar40 = plStack_320;
      puVar8 = puStack_330;
      uVar41 = (undefined4)((ulonglong)uVar31 >> 0x20);
      uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
      if (*(char *)(lVar22 + 0x18) != '\x02') {
        return;
      }
      if (*(float **)(lVar22 + 0x38) != pfVar27) {
        return;
      }
      bVar44 = *(byte *)(lVar22 + 0x19);
      if (bVar44 < 2) {
        uVar16 = param_6[2];
        uVar13 = uVar16 * 0xc;
        uVar20 = extraout_XMM0_Qb;
        if (uVar16 < 0xaaaaaaaaaaaaaab) goto LAB_140b4e97f;
        uVar31 = 0;
        goto LAB_140b4e974;
      }
      if (bVar44 == 2) {
        return;
      }
      fStack_2c0 = SUB84(puVar39,0);
      fVar67 = fStack_2c0;
      uStack_2bc = (float)((ulonglong)puVar39 >> 0x20);
      uVar10 = uStack_2bc;
      if (bVar44 != 3) {
        fStack_2c8 = fStack_2c0;
        uStack_2c4 = uStack_2bc;
        if (plStack_320[3] == 0) goto LAB_140b4edd4;
        fStack_2c0 = fVar66;
        uStack_2bc = fVar60;
        uVar17 = pdb_1400af0a0(plStack_320 + 4,&fStack_2c8);
        uVar13 = uStack_178;
        lVar30 = *plVar40;
        uVar16 = plVar40[1];
        bVar44 = (byte)(uVar17 >> 0x39);
        auVar50 = ZEXT216(CONCAT11(bVar44,bVar44));
        auVar50 = pshuflw(auVar50,auVar50,0);
        lVar22 = 0;
        goto LAB_140b4ea19;
      }
      *puStack_330 = uVar37;
      fStack_2c8 = 0.0;
      uStack_2c4 = 0.0;
      uStack_2b8 = 1;
      uStack_2b6 = 0;
      uStack_2b5 = 0;
      fStack_2b4 = 0.0;
      pdb_140aa3450(lStack_2f0,&fStack_2c8,2,plStack_2d0,param_12,&UNK_143059920,10);
      *puVar8 = uVar37;
      pdb_140c419b0(lVar30,puVar39,plVar9);
      *puVar8 = uVar37;
      plVar15 = plVar9 + 0x12;
      if (plVar9[0x12] == 0) {
        plVar15 = (longlong *)0x0;
      }
      fStack_2c8 = 1.4013e-45;
      uStack_2c4 = 0.0;
      fStack_2c0 = SUB84(plVar15,0);
      uStack_2bc = (float)((ulonglong)plVar15 >> 0x20);
      uStack_2b8 = 0;
      uStack_2b6 = 0;
      uStack_2b5 = 0;
      fStack_2b4 = 0.0;
      uStack_290 = (undefined *)0x0;
      pdb_1414e0e70(&fStack_2c8,lVar30 + 0x30);
      fStack_1c8 = fVar45;
      fStack_1c4 = fVar65;
      if (plVar9[3] == 0) {
        lVar22 = 0;
        goto LAB_140b4f297;
      }
      fStack_2c8 = fVar67;
      uStack_2c4 = (float)uVar10;
      uVar16 = pdb_1400af0a0(plVar9 + 4,&fStack_2c8);
      lVar30 = *plVar9;
      bVar44 = (byte)(uVar16 >> 0x39);
      auVar49 = ZEXT216(CONCAT11(bVar44,bVar44));
      auVar49 = pshuflw(auVar49,auVar49,0);
      lVar22 = 0;
      goto LAB_140b4e8df;
    }
    uVar33 = (ushort)(uVar25 - 1) & (ushort)uVar25;
    uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar33);
  }
  auVar57[0] = -(auVar64[0] == -1);
  auVar57[1] = -(auVar64[1] == -1);
  auVar57[2] = -(auVar64[2] == -1);
  auVar57[3] = -(auVar64[3] == -1);
  auVar57[4] = -(auVar64[4] == -1);
  auVar57[5] = -(auVar64[5] == -1);
  auVar57[6] = -(auVar64[6] == -1);
  auVar57[7] = -(auVar64[7] == -1);
  auVar57[8] = -(auVar64[8] == -1);
  auVar57[9] = -(auVar64[9] == -1);
  auVar57[10] = -(auVar64[10] == -1);
  auVar57[0xb] = -(auVar64[0xb] == -1);
  auVar57[0xc] = -(auVar64[0xc] == -1);
  auVar57[0xd] = -(auVar64[0xd] == -1);
  auVar57[0xe] = -(auVar64[0xe] == -1);
  auVar57[0xf] = -(auVar64[0xf] == -1);
  if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430598e0);
  }
  uVar13 = uVar13 + lVar23 + 0x10;
  lVar23 = lVar23 + 0x10;
  goto LAB_140b4de08;
LAB_140b4ea19:
  uVar17 = uVar17 & uVar16;
  auVar61 = *(undefined1 (*) [16])(lVar30 + uVar17);
  auVar63[0] = -(auVar61[0] == auVar50[0]);
  auVar63[1] = -(auVar61[1] == auVar50[1]);
  auVar63[2] = -(auVar61[2] == auVar50[2]);
  auVar63[3] = -(auVar61[3] == auVar50[3]);
  auVar63[4] = -(auVar61[4] == auVar50[4]);
  auVar63[5] = -(auVar61[5] == auVar50[5]);
  auVar63[6] = -(auVar61[6] == auVar50[6]);
  auVar63[7] = -(auVar61[7] == auVar50[7]);
  auVar63[8] = -(auVar61[8] == auVar50[0]);
  auVar63[9] = -(auVar61[9] == auVar50[1]);
  auVar63[10] = -(auVar61[10] == auVar50[2]);
  auVar63[0xb] = -(auVar61[0xb] == auVar50[3]);
  auVar63[0xc] = -(auVar61[0xc] == auVar50[4]);
  auVar63[0xd] = -(auVar61[0xd] == auVar50[5]);
  auVar63[0xe] = -(auVar61[0xe] == auVar50[6]);
  auVar63[0xf] = -(auVar61[0xf] == auVar50[7]);
  uVar33 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
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
  uVar36 = (uint)uVar33;
  while (uVar33 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar36; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar23 = (uVar4 + uVar17 & uVar16) * -0x78;
    if (puVar39 == *(undefined4 **)(lVar30 + -0x78 + lVar23)) {
      lStack_2f0 = lVar30 + lVar23;
      plVar40 = (longlong *)(uStack_178 >> 0x20);
      if ((*(float *)(lStack_120 + -0x24) != 0.0) || (NAN(*(float *)(lStack_120 + -0x24)))) {
        fVar65 = (*(float *)((longlong)param_6 + 0x3c) - pfStack_130[1]) / pfStack_130[4];
        fVar45 = *pfStack_130 +
                 fVar65 * (float)((ulonglong)*(undefined8 *)(pfStack_130 + 2) >> 0x20);
        fVar65 = (float)*(undefined8 *)(pfStack_130 + 2) + fVar65 * pfStack_130[5];
      }
      else {
        pfVar21 = (float *)&UNK_143044340;
        if (*pcStack_328 != '\0') {
          pfVar21 = (float *)(pcStack_328 + 4);
        }
        fVar45 = *pfVar21;
        fVar65 = pfVar21[2];
      }
      fVar66 = *(float *)(lStack_2f0 + -0x1c);
      fVar45 = fVar45 - (float)param_6[3];
      fVar65 = fVar65 - (float)((ulonglong)param_6[3] >> 0x20);
      uStack_2d8 = CONCAT44(fVar65,fVar45);
      pauVar18 = *(undefined1 (**) [16])*param_16;
      lVar30 = ((undefined8 *)*param_16)[3];
      auVar51 = *pauVar18;
      pauVar28 = pauVar18 + 1;
      uVar36 = ~(uint)(ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar51[0xf] >> 7) << 0xf);
      goto LAB_140b4ee78;
    }
    uVar33 = (ushort)(uVar36 - 1) & (ushort)uVar36;
    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar33);
  }
  auVar59[0] = -(auVar61[0] == -1);
  auVar59[1] = -(auVar61[1] == -1);
  auVar59[2] = -(auVar61[2] == -1);
  auVar59[3] = -(auVar61[3] == -1);
  auVar59[4] = -(auVar61[4] == -1);
  auVar59[5] = -(auVar61[5] == -1);
  auVar59[6] = -(auVar61[6] == -1);
  auVar59[7] = -(auVar61[7] == -1);
  auVar59[8] = -(auVar61[8] == -1);
  auVar59[9] = -(auVar61[9] == -1);
  auVar59[10] = -(auVar61[10] == -1);
  auVar59[0xb] = -(auVar61[0xb] == -1);
  auVar59[0xc] = -(auVar61[0xc] == -1);
  auVar59[0xd] = -(auVar61[0xd] == -1);
  auVar59[0xe] = -(auVar61[0xe] == -1);
  auVar59[0xf] = -(auVar61[0xf] == -1);
  fVar66 = fStack_2c0;
  fVar60 = uStack_2bc;
  if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar59 >> 0x17,0) & 1) != 0) || (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar59 >> 0x27,0) & 1) != 0) || (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar59 >> 0x37,0) & 1) != 0) || (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar59 >> 0x47,0) & 1) != 0) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') {
LAB_140b4edd4:
    uStack_2bc = fVar60;
    fStack_2c0 = fVar66;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143059930);
  }
  uVar17 = uVar17 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_140b4ea19;
LAB_140b4ee78:
  bVar42 = lVar30 != 0;
  lVar30 = lVar30 + -1;
  if (!bVar42) goto LAB_140b4eece;
  if ((short)uVar36 == 0) {
    do {
      auVar51 = *pauVar28;
      pauVar18 = pauVar18 + -0x28;
      pauVar28 = pauVar28 + 1;
      uVar36 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar51[0xf] >> 7) << 0xf) ^ 0xffff;
    } while (uVar36 == 0);
  }
  uVar4 = 0;
  for (uVar5 = uVar36; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
    uVar4 = uVar4 + 1;
  }
  if ((*(undefined4 **)((longlong)pauVar18 + (ulonglong)uVar4 * -0x28 + -0x28) == puStack_380) ||
     (uVar36 = uVar36 - 1 & uVar36,
     *(undefined4 **)((longlong)pauVar18 + (ulonglong)uVar4 * -0x28 + -0x20) == puStack_380))
  goto LAB_140b4eece;
  goto LAB_140b4ee78;
LAB_140b4eece:
  if (*(char *)*param_15 == '\0') {
    uVar20 = pdb_140b54b40(plVar15,puVar39);
    lVar30 = pdb_140b55350(uVar20,lStack_378,lStack_370);
    auVar51._8_8_ = extraout_XMM0_Qb_06;
    auVar51._0_8_ = extraout_XMM0_Qa;
    if (lVar30 != 0) {
      fVar46 = (float)pdb_1419c1ac0(uStack_348);
      fVar46 = fVar46 + fVar66;
      if (_DAT_142e3b1d8 < *(float *)(lVar30 + 0x30)) {
        fVar60 = (float)pdb_140b77a00(lVar30);
        fVar46 = fVar46 + fVar60;
      }
      pdb_140df4540(&fStack_3b0,&uStack_2d8);
      uStack_3c8 = CONCAT44(fStack_3ac + _UNK_14304ab74,fStack_3b0 + _DAT_14304ab70);
      uStack_3c0 = uStack_3a8;
      uStack_3bc = _DAT_142f61040;
      uStack_3b4 = 0x80000000;
      auVar51._0_8_ =
           pdb_1409f9030(&uStack_168,uStack_3e8,&uStack_3c8,1,puVar39,CONCAT44(uVar41,0x7f7fffff),
                         CONCAT44(uVar12,0x202));
      fVar60 = fStack_150;
      lVar30 = (longlong)uStack_160;
      auVar51._8_8_ = extraout_XMM0_Qb_07;
      if ((uStack_168._0_1_ != (code)0x11) && ((byte)((char)uStack_168._0_1_ - 1U) < 2)) {
        puStack_108 = (undefined8 *)CONCAT44(puStack_108._4_4_,uStack_148);
        lVar22 = pdb_140b54f80(plVar15,uStack_160,&UNK_143059948);
        uVar20 = pdb_140b54b40(plVar15,lVar30);
        lVar30 = pdb_140b55350(uVar20,lStack_378,lStack_370);
        auVar51._8_8_ = extraout_XMM0_Qb_08;
        auVar51._0_8_ = extraout_XMM0_Qa_00;
        if ((lVar22 != 0) && (lVar30 != 0)) {
          pfStack_130 = (float *)CONCAT44(pfStack_130._4_4_,fVar66);
          fVar46 = *(float *)(lVar30 + 0x4c);
          fVar66 = (float)pdb_140b77a00(lVar30);
          fVar66 = fVar66 + fVar46;
          uStack_390 = *(undefined4 *)(lVar22 + 0x284);
          uStack_398 = *(undefined4 *)(lStack_2f0 + -0x18);
          fStack_394 = fStack_3ac;
          fStack_38c = fVar66;
          cVar11 = pdb_1419ba130(&uStack_390,&uStack_398);
          auVar51._8_8_ = extraout_XMM0_Qb_09;
          auVar51._0_8_ = extraout_XMM0_Qa_01;
          if (cVar11 != '\0') {
            fStack_3a0 = fVar60;
            uStack_39c = puStack_108._0_4_;
            pdb_140df4540(&fStack_2c8,&fStack_3a0);
            fVar66 = _DAT_142e36f28;
            auVar51._0_8_ = pdb_140b51610(&fStack_1c8,lVar30,&fStack_2c8);
            fVar67 = fStack_1bc;
            fVar46 = fStack_1c0;
            fVar60 = fStack_1c4;
            auVar51._8_8_ = extraout_XMM0_Qb_10;
            if (fStack_1c8 != 0.0) {
              if (fStack_1c8 == 1.4013e-45) {
                uStack_2d8 = CONCAT44(fStack_1bc,fStack_1c4);
                puStack_108 = (undefined8 *)pdb_140b4b7e0();
                fStack_2e4 = fVar60;
                fStack_2e0 = fVar67;
                fVar45 = fStack_3ac;
                if (fStack_3ac <= fVar46) {
                  fVar45 = fVar46;
                }
                pdb_140df4540(&uStack_33c,&fStack_2e4,
                              ~-(uint)NAN(fVar46) & (uint)fVar45 |
                              -(uint)NAN(fVar46) & (uint)fStack_3ac);
                uStack_300 = CONCAT44(fVar67,fVar60);
                pdb_140df4540(&fStack_2c8,&uStack_300);
                *(undefined4 *)(puStack_108 + 1) = uStack_334;
                *puStack_108 = uStack_33c;
                *(float *)((longlong)puStack_108 + 0x14) = fStack_2c0;
                *(ulonglong *)((longlong)puStack_108 + 0xc) = CONCAT44(uStack_2c4,fStack_2c8);
                fStack_2c8 = 2.8026e-45;
                uStack_2c4 = 0.0;
                fStack_2c0 = SUB84(puStack_108,0);
                uStack_2bc = (float)((ulonglong)puStack_108 >> 0x20);
                uStack_2b8 = 2;
                uStack_2b6 = 0;
                uStack_2b5 = 0;
                fStack_2b4 = 0.0;
                uStack_2b0._0_4_ = 0.0;
                uStack_2b0._4_4_ = -0.0;
                uStack_298 = uStack_298 & 0xffffffff00000000;
                uStack_288 = CONCAT26(uStack_288._6_2_,0x10140400000);
                auVar51._0_8_ = pdb_140ab2da0(&fStack_2c8,pfStack_100);
                auVar51._8_8_ = extraout_XMM0_Qb_11;
                fVar65 = fVar67;
                fVar45 = fVar60;
              }
              else {
                pfVar21 = (float *)pdb_140b4b7e0();
                fVar60 = fStack_1b4;
                fVar65 = fStack_1b8;
                fVar46 = fStack_1c0;
                fVar45 = fStack_1c4;
                *(ulonglong *)(pfVar21 + 4) = CONCAT44(fStack_1ac + 0.0,_DAT_142e3787c + fStack_1b0)
                ;
                fStack_2c8 = 2.8026e-45;
                uStack_2c4 = 0.0;
                fStack_2c0 = SUB84(pfVar21,0);
                uStack_2bc = (float)((ulonglong)pfVar21 >> 0x20);
                uStack_2b8 = 2;
                uStack_2b6 = 0;
                uStack_2b5 = 0;
                fStack_2b4 = 0.0;
                uStack_2b0._0_4_ = 0.0;
                uStack_2b0._4_4_ = -0.0;
                uStack_298 = uStack_298 & 0xffffffff00000000;
                uStack_288._0_6_ = 0x10140400000;
                fVar67 = fVar67 + _UNK_142f6a634;
                fVar55 = fStack_1b8 + _UNK_142f6a638;
                fVar54 = fStack_1b4 + _UNK_142f6a63c;
                *pfVar21 = fStack_1c0 + _DAT_142f6a630;
                pfVar21[1] = fVar67;
                pfVar21[2] = fVar55;
                pfVar21[3] = fVar54;
                pdb_140ab2da0(&fStack_2c8,pfStack_100);
                fVar66 = fVar66 - fVar45;
                fVar65 = fStack_1ac * fVar45 + fVar66 * fVar65;
                fVar46 = fVar66 * fVar46 + fVar45 * fVar60;
                uStack_2d8 = CONCAT44(fVar65,fVar46);
                puStack_108 = (undefined8 *)pdb_140b4b7e0();
                fStack_2e4 = fVar46;
                fStack_2e0 = fVar65;
                pdb_140df4540(&uStack_33c,&fStack_2e4);
                uStack_300 = CONCAT44(fVar65,fVar46);
                pdb_140df4540(&fStack_2c8,&uStack_300);
                *(undefined4 *)(puStack_108 + 1) = uStack_334;
                *puStack_108 = uStack_33c;
                *(float *)((longlong)puStack_108 + 0x14) = fStack_2c0;
                *(ulonglong *)((longlong)puStack_108 + 0xc) = CONCAT44(uStack_2c4,fStack_2c8);
                fStack_2c8 = 2.8026e-45;
                uStack_2c4 = 0.0;
                fStack_2c0 = SUB84(puStack_108,0);
                uStack_2bc = (float)((ulonglong)puStack_108 >> 0x20);
                uStack_2b8 = 2;
                uStack_2b6 = 0;
                uStack_2b5 = 0;
                fStack_2b4 = 0.0;
                uStack_2b0._0_4_ = 0.0;
                uStack_2b0._4_4_ = -0.0;
                uStack_298 = uStack_298 & 0xffffffff00000000;
                uStack_288 = CONCAT26(uStack_288._6_2_,0x10140400000);
                auVar51._0_8_ = pdb_140ab2da0(&fStack_2c8,pfStack_100);
                auVar51._8_8_ = extraout_XMM0_Qb_14;
                fVar45 = fVar46;
              }
              uVar32 = 1;
              if ((char)param_6[8] == '\0') {
                fStack_2c8 = (float)CONCAT31(fStack_2c8._1_3_,3);
                fStack_2c0 = fStack_188;
                uStack_2bc = fStack_184;
                uStack_2b8 = SUB42(fStack_180,0);
                uStack_2b6 = (undefined1)((uint)fStack_180 >> 0x10);
                uStack_2b5 = (undefined1)((uint)fStack_180 >> 0x18);
                auVar51._0_8_ = pdb_1414af100(&lStack_428,&fStack_2c8,&UNK_143059960);
                auVar51._8_8_ = extraout_XMM0_Qb_15;
              }
              fVar66 = pfStack_130._0_4_;
              goto LAB_140b4f63d;
            }
          }
          fVar46 = fVar66;
          fVar66 = pfStack_130._0_4_;
        }
      }
    }
    uVar32 = 0;
  }
  else {
    uVar32 = 0;
  }
LAB_140b4f63d:
  *(undefined1 *)(param_6 + 8) = uVar32;
  pcStack_140 = (code *)CONCAT44(pcStack_140._4_4_,uVar25);
  plStack_2d0 = plVar40;
  if ((uVar25 & 1) == 0) {
    if (*(char *)(lStack_120 + -0x1a0) == '\0') goto LAB_140b5025b;
    uVar41 = *(undefined4 *)(lStack_120 + -0x19c);
    uVar12 = *(undefined4 *)(lStack_120 + -0x24);
    uVar37 = 1;
    uVar32 = 0;
    puVar39 = puStack_170;
    fStack_10c = fVar45;
    fVar60 = fVar65;
    fVar65 = fStack_128;
    fVar45 = fStack_124;
  }
  else {
    if (*(char *)(lStack_120 + -0x1a0) == '\0') {
LAB_140b5025b:
      pdb_142d8e040();
      pcVar26 = (code *)swi(3);
      (*pcVar26)();
      return;
    }
    fVar46 = *(float *)(lStack_120 + -0x24);
    uVar37 = *(undefined4 *)(lStack_120 + -0x19c);
    uVar32 = 1;
    fStack_10c = fStack_110;
    uVar12 = (undefined4)uStack_178;
    uVar41 = (undefined4)(uVar13 >> 0x20);
    puVar39 = (undefined4 *)0x1;
    fVar60 = fStack_114;
  }
  pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,fVar45);
  puStack_108 = (undefined8 *)CONCAT44(puStack_108._4_4_,fVar65);
  pfStack_130 = (float *)CONCAT44(pfStack_130._4_4_,uVar12);
  pfStack_138 = (float *)CONCAT44(pfStack_138._4_4_,fVar60);
  *puStack_3e0 = uStack_2dc;
  lVar30 = *(longlong *)(lStack_358 + 0x30);
  uVar20 = *(undefined8 *)(lStack_358 + 0x40);
  lVar22 = uStack_2b0;
  if (lVar30 == *(longlong *)(lStack_358 + 0x20)) {
    puStack_330 = puVar39;
    auVar51._0_8_ = pdb_142d7ee50(lStack_358 + 0x20);
    auVar51._8_8_ = extraout_XMM0_Qb_12;
    puVar39 = puStack_330;
    lVar22 = uStack_2b0;
  }
  fVar45 = fStack_10c;
  lVar34 = lStack_2f8;
  uStack_2b0._4_4_ = (float)((ulonglong)lVar22 >> 0x20);
  lVar23 = *(longlong *)(lStack_358 + 0x28);
  lVar24 = lVar30 * 0x40;
  *(undefined1 *)(lVar23 + lVar24) = uVar32;
  *(undefined1 *)(lVar23 + 1 + lVar24) = 0;
  *(float *)(lVar23 + 4 + lVar24) = fStack_10c;
  *(float *)(lVar23 + 8 + lVar24) = pfStack_138._0_4_;
  *(float *)(lVar23 + 0xc + lVar24) = pfStack_100._0_4_;
  *(float *)(lVar23 + 0x10 + lVar24) = puStack_108._0_4_;
  *(float *)(lVar23 + 0x14 + lVar24) = pfStack_130._0_4_;
  *(undefined4 *)(lVar23 + 0x18 + lVar24) = uVar41;
  *(float *)(lVar23 + 0x1c + lVar24) = fVar46;
  *(undefined4 *)(lVar23 + 0x20 + lVar24) = uVar37;
  *(undefined4 *)(lVar23 + 0x24 + lVar24) = 0;
  *(undefined4 **)(lVar23 + 0x28 + lVar24) = puVar39;
  *(undefined4 **)(lVar23 + 0x30 + lVar24) = puStack_170;
  *(undefined8 *)(lVar23 + 0x38 + lVar24) = uVar20;
  *(longlong *)(lStack_358 + 0x30) = lVar30 + 1;
  *(longlong *)(lStack_358 + 0x40) = *(longlong *)(lStack_358 + 0x40) + 1;
  uVar37 = *(undefined4 *)(lStack_120 + -0x24);
  *(undefined4 *)pbStack_198 = (undefined4)uStack_190;
  lVar30 = *(longlong *)(lStack_2f8 + 0x30);
  uVar20 = *(undefined8 *)(lStack_2f8 + 0x40);
  if (lVar30 == *(longlong *)(lStack_2f8 + 0x20)) {
    uStack_2b0 = lVar22;
    auVar51._0_8_ = pdb_142d7e7c0(lStack_2f8 + 0x20);
    auVar51._8_8_ = extraout_XMM0_Qb_13;
  }
  uVar16 = uStack_178;
  piVar29 = piStack_318;
  lVar22 = *(longlong *)(lVar34 + 0x28);
  lVar23 = lVar30 * 0x30;
  *(float *)(lVar22 + lVar23) = pcStack_140._0_4_;
  *(float *)(lVar22 + 4 + lVar23) = fVar45;
  *(float *)(lVar22 + 8 + lVar23) = pfStack_138._0_4_;
  *(float *)(lVar22 + 0xc + lVar23) = pfStack_100._0_4_;
  *(float *)(lVar22 + 0x10 + lVar23) = puStack_108._0_4_;
  *(ulonglong *)(lVar22 + 0x14 + lVar23) = uStack_178;
  auVar7._4_8_ = auVar51._8_8_;
  auVar7._0_4_ = _UNK_14303a934;
  auVar52._0_8_ = auVar7._0_8_ << 0x20;
  auVar52._8_4_ = _UNK_14303a938;
  auVar52._12_4_ = _UNK_14303a93c;
  auVar53._4_12_ = auVar52._4_12_;
  auVar53._0_4_ = uVar37;
  *(longlong *)(lVar22 + 0x1c + lVar23) = auVar53._0_8_;
  *(undefined1 *)(lVar22 + 0x24 + lVar23) = 0;
  *(undefined8 *)(lVar22 + 0x28 + lVar23) = uVar20;
  *(longlong *)(lVar34 + 0x30) = lVar30 + 1;
  *(longlong *)(lVar34 + 0x40) = *(longlong *)(lVar34 + 0x40) + 1;
  fStack_2c8 = pcStack_140._0_4_;
  uStack_2c4 = fVar45;
  fStack_2c0 = pfStack_138._0_4_;
  uStack_2bc = pfStack_100._0_4_;
  uStack_2b8 = SUB82(puStack_108,0);
  uStack_2b6 = (undefined1)((ulonglong)puStack_108 >> 0x10);
  uStack_2b5 = (undefined1)((ulonglong)puStack_108 >> 0x18);
  fStack_2b4 = (float)uStack_178;
  fVar45 = fStack_2b4;
  uStack_2b0._0_4_ = (float)(uStack_178 >> 0x20);
  fVar65 = (float)uStack_2b0;
  cVar11 = pdb_140b404c0(piStack_318,&fStack_2c8);
  fVar60 = fStack_124;
  fVar46 = fStack_128;
  lStack_2f8 = CONCAT71(lStack_2f8._1_7_,cVar11);
  if (cVar11 == '\0') {
    pdb_140314c70(&uStack_488,&UNK_143059978);
    pdb_140314c70(&uStack_4a8,&UNK_143059990);
    if (*piVar29 == 1) {
      uStack_168 = (undefined4 **)CONCAT44(fStack_10c,pcStack_140._0_4_);
      uStack_160 = (code *)CONCAT44(pfStack_100._0_4_,(int)pfStack_138);
      uStack_158 = (uint)puStack_108._0_4_;
      fStack_2c8 = pcStack_140._0_4_;
      uStack_2c4 = fStack_110;
      fStack_2c0 = fStack_114;
      uStack_2bc = fVar60;
      uStack_2b8 = SUB42(fVar46,0);
      uStack_2b6 = (undefined1)((uint)fVar46 >> 0x10);
      uStack_2b5 = (undefined1)((uint)fVar46 >> 0x18);
      fStack_2b4 = fVar45;
      uStack_2b0._0_4_ = fVar65;
      fStack_154 = fVar45;
      fStack_150 = fVar65;
      pdb_140b40890(&fStack_1c8,piVar29,&fStack_2c8,&uStack_168);
      pcStack_140 = (code *)CONCAT44(pcStack_140._4_4_,fStack_1c8);
      fStack_10c = fStack_1c4;
      puStack_108 = (undefined8 *)CONCAT44(puStack_108._4_4_,fStack_1b8);
      uVar16 = CONCAT44(fStack_1b0,fStack_1b4);
      plStack_2d0 = (longlong *)(ulonglong)(uint)fStack_1b0;
      fVar47 = fStack_1c0;
      fVar48 = fStack_1bc;
    }
    else {
      if (((ulonglong)pcStack_140 & 1) == 0) {
        fStack_10c = (float)pdb_140de99b0(fVar48);
        fVar47 = auVar49._0_4_;
        pcStack_140 = (code *)((ulonglong)pcStack_140 & 0xffffffff00000000);
        goto LAB_140b4f909;
      }
      pfStack_130 = (float *)CONCAT44(pfStack_130._4_4_,fVar66);
      piVar29 = piVar29 + 1;
      fStack_2c8 = fStack_110;
      uStack_2c4 = fStack_114;
      uStack_2b8 = (undefined2)uVar16;
      uStack_2b6 = (undefined1)(uVar16 >> 0x10);
      uStack_2b5 = (undefined1)(uVar16 >> 0x18);
      fStack_2c0 = (float)*(undefined8 *)piVar29;
      uStack_2bc = (float)((ulonglong)*(undefined8 *)piVar29 >> 0x20);
      fStack_2b4 = fVar65;
      uVar20 = pdb_140df2280(&fStack_2c8);
      pdb_140df07e0(&uStack_168,&fStack_2c8,uVar20);
      pdb_140def380(&uStack_168,piVar29);
      pdb_140def380(&uStack_168,piVar29);
      fVar48 = (float)pdb_140de99b0(fVar47);
      puStack_108 = (undefined8 *)CONCAT44(puStack_108._4_4_,auVar64._0_4_);
      pcStack_140 = (code *)CONCAT44(pcStack_140._4_4_,1);
      fVar66 = pfStack_130._0_4_;
      fVar47 = pfStack_138._0_4_;
    }
  }
  else {
    fVar47 = pfStack_138._0_4_;
LAB_140b4f909:
    fVar48 = pfStack_100._0_4_;
  }
  uVar13 = param_6[2];
  uVar17 = uVar13 * 0xc;
  if (uVar13 < 0xaaaaaaaaaaaaaab) goto LAB_140b4fce0;
  param_6 = (longlong *)0x0;
  do {
    plVar15 = param_6;
    pdb_142dc7e2a(param_6,uVar17);
    fVar48 = SUB84(plVar15,0);
LAB_140b4fce0:
    pfVar21 = (float *)param_6[1];
    pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,fVar48);
    if (uVar17 == 0) {
      pbStack_198 = (byte *)0x4;
      uStack_190 = 0;
      goto LAB_140b4fd53;
    }
    pfStack_138 = pfVar21;
    pdb_14007ee60();
    param_6 = (longlong *)0x4;
    pbStack_198 = pub_1406abab0(uVar17,4);
  } while (pbStack_198 == (byte *)0x0);
  pfVar21 = pfStack_138;
  fVar48 = pfStack_100._0_4_;
  uStack_190 = uVar13;
LAB_140b4fd53:
  fVar45 = puStack_108._0_4_;
  uStack_178 = uVar16;
  if (uVar13 != 0) {
    pub_142e32760(pbStack_198,pfVar21,uVar17);
    fVar45 = puStack_108._0_4_;
    fVar48 = pfStack_100._0_4_;
  }
  bVar43 = ((ulonglong)pcStack_140 & 1) != 0;
  fVar65 = fStack_10c;
  if (bVar43) {
    fVar65 = fVar48;
  }
  pfStack_138 = (float *)CONCAT44(pfStack_138._4_4_,fVar47);
  if (bVar43) {
    fVar47 = fVar45;
  }
  *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
  lVar30 = *param_10;
  lVar22 = *(longlong *)(lVar30 + 0x30);
  uVar20 = *(undefined8 *)(lVar30 + 0x40);
  if (lVar22 == *(longlong *)(lVar30 + 0x20)) {
    pdb_142d7e7c0(lVar30 + 0x20);
  }
  fVar48 = fStack_10c;
  pcVar26 = pcStack_140;
  lVar23 = *(longlong *)(lVar30 + 0x28);
  lVar34 = lVar22 * 0x30;
  *(ulonglong *)(lVar23 + lVar34) = uStack_190;
  *(byte **)(lVar23 + 8 + lVar34) = pbStack_198;
  *(ulonglong *)(lVar23 + 0x10 + lVar34) = uVar13;
  *(undefined4 **)(lVar23 + 0x18 + lVar34) = puStack_170;
  *(float *)(lVar23 + 0x20 + lVar34) = fVar65;
  *(float *)(lVar23 + 0x24 + lVar34) = fVar47;
  *(undefined8 *)(lVar23 + 0x28 + lVar34) = uVar20;
  *(longlong *)(lVar30 + 0x30) = lVar22 + 1;
  *(longlong *)(lVar30 + 0x40) = *(longlong *)(lVar30 + 0x40) + 1;
  pbStack_198 = (byte *)CONCAT71(pbStack_198._1_7_,*(undefined1 *)(lStack_2f0 + -2));
  uVar20 = *(undefined8 *)(lStack_2f0 + -8);
  puVar1 = *(undefined8 **)(lStack_2f0 + -0x18);
  pfVar21 = *(float **)(lStack_2f0 + -0x10);
  uStack_190 = CONCAT71(uStack_190._1_7_,*(undefined1 *)(lStack_2f0 + -4));
  pfStack_130 = (float *)CONCAT71(pfStack_130._1_7_,*(undefined1 *)(lStack_2f0 + -3));
  *puStack_360 = (undefined4)uStack_1a0;
  uVar37 = pfStack_138._0_4_;
  uVar12 = pfStack_100._0_4_;
  uVar41 = puStack_108._0_4_;
  if (((ulonglong)pcStack_140 & 1) == 0) {
    fStack_2c8 = fStack_10c;
    uStack_2c4 = pfStack_138._0_4_;
    fStack_2c0 = pfStack_100._0_4_;
    uStack_2bc = puStack_108._0_4_;
    pdb_140defcd0(auStack_460,&fStack_2c8,_DAT_142e36f50);
    uVar16 = uStack_178 & 0xffffffff | (longlong)plStack_2d0 << 0x20;
  }
  else {
    fStack_2c8 = fStack_10c;
    uStack_2c4 = pfStack_138._0_4_;
    fStack_2c0 = pfStack_100._0_4_;
    uStack_2bc = puStack_108._0_4_;
    uVar13 = uStack_178 & 0xffffffff;
    uVar16 = uVar13 | (longlong)plStack_2d0 << 0x20;
    uStack_2b8 = (undefined2)uVar13;
    uStack_2b6 = (undefined1)(uVar13 >> 0x10);
    uStack_2b5 = (undefined1)(uVar13 >> 0x18);
    fStack_2b4 = SUB84(plStack_2d0,0);
    pdb_140df37e0(auStack_460,&fStack_2c8);
  }
  puVar39 = puStack_170;
  cStack_259 = (DAT_143cb2d0c == '\0') * '\x05';
  uStack_298 = uStack_430;
  fStack_2a8 = (float)auStack_460._32_8_;
  uStack_2a4 = SUB84(auStack_460._32_8_,4);
  uStack_2a0 = (undefined4)auStack_460._40_8_;
  uStack_29c = SUB84(auStack_460._40_8_,4);
  uStack_2b8 = (undefined2)auStack_460._16_8_;
  uStack_2b6 = SUB81(auStack_460._16_8_,2);
  uStack_2b5 = SUB81(auStack_460._16_8_,3);
  fStack_2b4 = SUB84(auStack_460._16_8_,4);
  uStack_2b0._0_4_ = (float)auStack_460._24_8_;
  uStack_2b0._4_4_ = SUB84(auStack_460._24_8_,4);
  fStack_2c8 = (float)auStack_460._0_8_;
  uStack_2c4 = SUB84(auStack_460._0_8_,4);
  fStack_2c0 = (float)auStack_460._8_8_;
  uStack_2bc = SUB84(auStack_460._8_8_,4);
  uStack_290 = (undefined *)CONCAT44(fVar48,(int)pcVar26);
  uStack_288 = CONCAT44(uVar12,uVar37);
  uStack_280 = uVar41;
  uStack_27c = (undefined4)uVar16;
  uStack_278 = (undefined4)(uVar16 >> 0x20);
  uStack_260 = (undefined4)uVar20;
  uStack_25c = (undefined1)uStack_190;
  uStack_25b = pfStack_130._0_1_;
  uStack_25a = pbStack_198._0_1_;
  fStack_274 = fVar66;
  puStack_270 = puVar1;
  uStack_268 = pfVar21;
  pdb_14092f410(plStack_320,puStack_170,&fStack_2c8);
  if ((char)lStack_2f8 == '\0') {
    return;
  }
  goto LAB_140b4f3a4;
LAB_140b4e8df:
  uVar16 = uVar16 & plVar9[1];
  pcVar2 = (char *)(lVar30 + uVar16);
  auVar62[0] = -(*pcVar2 == auVar49[0]);
  auVar62[1] = -(pcVar2[1] == auVar49[1]);
  auVar62[2] = -(pcVar2[2] == auVar49[2]);
  auVar62[3] = -(pcVar2[3] == auVar49[3]);
  auVar62[4] = -(pcVar2[4] == auVar49[4]);
  auVar62[5] = -(pcVar2[5] == auVar49[5]);
  auVar62[6] = -(pcVar2[6] == auVar49[6]);
  auVar62[7] = -(pcVar2[7] == auVar49[7]);
  auVar62[8] = -(pcVar2[8] == auVar49[0]);
  auVar62[9] = -(pcVar2[9] == auVar49[1]);
  auVar62[10] = -(pcVar2[10] == auVar49[2]);
  auVar62[0xb] = -(pcVar2[0xb] == auVar49[3]);
  auVar62[0xc] = -(pcVar2[0xc] == auVar49[4]);
  auVar62[0xd] = -(pcVar2[0xd] == auVar49[5]);
  auVar62[0xe] = -(pcVar2[0xe] == auVar49[6]);
  auVar62[0xf] = -(pcVar2[0xf] == auVar49[7]);
  uVar33 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf;
  uVar36 = (uint)uVar33;
  while (uVar33 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar36; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar23 = (uVar4 + uVar16 & plVar9[1]) * -0x98;
    if (puVar39 == *(undefined4 **)(lVar30 + -0x98 + lVar23)) {
      lVar30 = lVar30 + lVar23;
      goto LAB_140b4f289;
    }
    uVar33 = (ushort)(uVar36 - 1) & (ushort)uVar36;
    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar33);
  }
  auVar58[0] = -(*pcVar2 == -1);
  auVar58[1] = -(pcVar2[1] == -1);
  auVar58[2] = -(pcVar2[2] == -1);
  auVar58[3] = -(pcVar2[3] == -1);
  auVar58[4] = -(pcVar2[4] == -1);
  auVar58[5] = -(pcVar2[5] == -1);
  auVar58[6] = -(pcVar2[6] == -1);
  auVar58[7] = -(pcVar2[7] == -1);
  auVar58[8] = -(pcVar2[8] == -1);
  auVar58[9] = -(pcVar2[9] == -1);
  auVar58[10] = -(pcVar2[10] == -1);
  auVar58[0xb] = -(pcVar2[0xb] == -1);
  auVar58[0xc] = -(pcVar2[0xc] == -1);
  auVar58[0xd] = -(pcVar2[0xd] == -1);
  auVar58[0xe] = -(pcVar2[0xe] == -1);
  auVar58[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar58 >> 0x17,0) & 1) != 0) || (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar58 >> 0x27,0) & 1) != 0) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') goto LAB_140b4f287;
  uVar16 = uVar16 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_140b4e8df;
LAB_140b4f287:
  lVar30 = 0;
LAB_140b4f289:
  lVar22 = lVar30 + -0x90;
  if (lVar30 == 0) {
    lVar22 = 0;
  }
LAB_140b4f297:
  fStack_2c8 = 1.4013e-45;
  uStack_2c4 = 0.0;
  fStack_2c0 = (float)lVar22;
  uStack_2bc = (float)((ulonglong)lVar22 >> 0x20);
  uStack_2b8 = 0;
  uStack_2b6 = 0;
  uStack_2b5 = 0;
  fStack_2b4 = 0.0;
  uStack_290 = (undefined *)0x0;
  uStack_268 = &fStack_1c8;
  pdb_1415fcaf0(&uStack_168,&fStack_2c8);
  if (*param_6 != 0) {
    pub_1406abac0((byte *)param_6[1],*param_6 * 0xc,4);
  }
  param_6[2] = CONCAT44(fStack_154,uStack_158);
  *param_6 = (longlong)uStack_168;
  param_6[1] = (longlong)uStack_160;
  *(uint *)(param_6 + 4) = uVar25;
  *(float *)((longlong)param_6 + 0x24) = fStack_110;
  *(float *)(param_6 + 5) = fStack_114;
  *(float *)((longlong)param_6 + 0x2c) = fStack_124;
  *(float *)(param_6 + 6) = fStack_128;
  *(ulonglong *)((longlong)param_6 + 0x34) = uStack_178;
  *(float *)((longlong)param_6 + 0x3c) = fStack_184;
  fVar47 = (fStack_184 - pfStack_130[1]) / pfStack_130[4];
  param_6[3] = CONCAT44(((float)*(undefined8 *)(pfStack_130 + 2) + fVar47 * pfStack_130[5]) -
                        fStack_180,
                        (*pfStack_130 +
                        fVar47 * (float)((ulonglong)*(undefined8 *)(pfStack_130 + 2) >> 0x20)) -
                        fStack_188);
  goto LAB_140b4f3a2;
  while( true ) {
    pdb_14007ee60();
    uVar31 = 4;
    pfStack_100 = (float *)pub_1406abab0(uVar13,4);
    uVar20 = extraout_XMM0._8_8_;
    uVar17 = uVar16;
    if (pfStack_100 != (float *)0x0) break;
LAB_140b4e974:
    pdb_142dc7e2a(uVar31,uVar13);
    uVar20 = extraout_XMM0_Qb_00;
LAB_140b4e97f:
    lVar30 = param_6[1];
    if (uVar13 == 0) {
      pfStack_100 = (float *)0x4;
      uStack_1a0 = 0;
      uVar17 = uStack_1a0;
      break;
    }
  }
  uStack_1a0 = uVar17;
  if (uVar16 != 0) {
    pub_142e32760(pfStack_100,lVar30,uVar13);
    uVar20 = extraout_XMM0_Qb_01;
  }
  *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
  lVar30 = *param_10;
  lVar22 = *(longlong *)(lVar30 + 0x30);
  uVar31 = *(undefined8 *)(lVar30 + 0x40);
  if (lVar22 == *(longlong *)(lVar30 + 0x20)) {
    pdb_142d7e7c0(lVar30 + 0x20);
    uVar20 = extraout_XMM0_Qb_02;
  }
  puVar1 = puStack_108;
  puVar39 = puStack_170;
  lVar23 = *(longlong *)(lVar30 + 0x28);
  lVar34 = lVar22 * 0x30;
  *(ulonglong *)(lVar23 + lVar34) = uStack_1a0;
  *(float **)(lVar23 + 8 + lVar34) = pfStack_100;
  *(ulonglong *)(lVar23 + 0x10 + lVar34) = uVar16;
  *(undefined4 **)(lVar23 + 0x18 + lVar34) = puStack_170;
  *(float *)(lVar23 + 0x20 + lVar34) = fVar45;
  *(float *)(lVar23 + 0x24 + lVar34) = fVar65;
  *(undefined8 *)(lVar23 + 0x28 + lVar34) = uVar31;
  *(longlong *)(lVar30 + 0x30) = lVar22 + 1;
  *(longlong *)(lVar30 + 0x40) = *(longlong *)(lVar30 + 0x40) + 1;
  *pfStack_138 = fStack_10c;
  lVar30 = puStack_108[6];
  uVar31 = puStack_108[8];
  if (lVar30 == puStack_108[4]) {
    pdb_142d7e980(puStack_108 + 4);
    uVar20 = extraout_XMM0_Qb_03;
  }
  lVar22 = puVar1[5];
  *(undefined8 *)(lVar22 + lVar30 * 0x10) = uVar31;
  *(undefined4 **)(lVar22 + 8 + lVar30 * 0x10) = puVar39;
  puVar1[6] = lVar30 + 1;
  puVar1[8] = puVar1[8] + 1;
  if ((int)param_6[4] != 2) {
    lVar30 = param_6[4];
    fStack_2a8 = (float)((ulonglong)*(undefined8 *)((longlong)param_6 + 0x2c) >> 0x20);
    uStack_2a4 = (undefined4)*(undefined8 *)((longlong)param_6 + 0x34);
    uStack_2a0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_6 + 0x34) >> 0x20);
    uStack_2b8 = (undefined2)lVar30;
    uStack_2b6 = (undefined1)((ulonglong)lVar30 >> 0x10);
    uStack_2b5 = (undefined1)((ulonglong)lVar30 >> 0x18);
    fStack_2b4 = (float)((ulonglong)lVar30 >> 0x20);
    uStack_2b0._0_4_ = (float)param_6[5];
    uStack_2b0._4_4_ = (float)((ulonglong)param_6[5] >> 0x20);
    uStack_168 = (undefined4 **)0x0;
    uStack_160 = (code *)0x8;
    uStack_158 = 0;
    fStack_154 = 0.0;
    fStack_2c0 = SUB84(puVar39,0);
    uStack_2bc = (float)((ulonglong)puVar39 >> 0x20);
    uStack_298 = CONCAT44(fStack_114,fStack_110);
    uStack_290 = (undefined *)CONCAT44(fStack_128,fStack_124);
    uStack_288 = uStack_178;
    fStack_2c8 = 5.60519e-45;
    uStack_2c4 = -0.0;
    uStack_f2 = 1;
    uStack_29c = uVar25;
    pdb_140a1aa80(&uStack_168,&fStack_2c8);
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    uVar20 = *param_7;
    uStack_2b8 = (undefined2)uStack_158;
    uStack_2b6 = (undefined1)(uStack_158 >> 0x10);
    uStack_2b5 = (undefined1)(uStack_158 >> 0x18);
    fStack_2b4 = fStack_154;
    fStack_2c8 = SUB84(uStack_168,0);
    uStack_2c4 = (float)((ulonglong)uStack_168 >> 0x20);
    fStack_2c0 = SUB84(uStack_160,0);
    uStack_2bc = (float)((ulonglong)uStack_160 >> 0x20);
    uStack_f2 = 0;
    uVar31 = pdb_140a1ac80(&fStack_2c8);
    fStack_2c0 = (float)uVar31;
    uStack_2bc = (float)((ulonglong)uVar31 >> 0x20);
    uStack_2b8 = SUB82(param_7,0);
    uStack_2b6 = (undefined1)((ulonglong)param_7 >> 0x10);
    uStack_2b5 = (undefined1)((ulonglong)param_7 >> 0x18);
    fStack_2b4 = (float)((ulonglong)param_7 >> 0x20);
    fStack_2c8 = 9.80909e-45;
    uStack_2c4 = 0.0;
    uStack_f2 = 0;
    pdb_140ae5180(uVar20,&fStack_2c8,&UNK_1430599a8);
    uStack_f2 = 0;
    pdb_140314c70(param_11,&UNK_1430599c0);
    uVar20 = extraout_XMM0_Qb_04;
  }
  lVar22 = lStack_2f8;
  uVar37 = *(undefined4 *)(lStack_120 + -0x24);
  *(undefined4 *)pbStack_198 = (undefined4)uStack_190;
  lVar30 = *(longlong *)(lStack_2f8 + 0x30);
  uVar31 = *(undefined8 *)(lStack_2f8 + 0x40);
  if (lVar30 == *(longlong *)(lStack_2f8 + 0x20)) {
    pdb_142d7e7c0(lStack_2f8 + 0x20);
    uVar20 = extraout_XMM0_Qb_05;
  }
  lVar23 = *(longlong *)(lVar22 + 0x28);
  lVar34 = lVar30 * 0x30;
  *(uint *)(lVar23 + lVar34) = uVar25;
  *(float *)(lVar23 + 4 + lVar34) = fStack_110;
  *(float *)(lVar23 + 8 + lVar34) = fStack_114;
  *(float *)(lVar23 + 0xc + lVar34) = fStack_124;
  *(float *)(lVar23 + 0x10 + lVar34) = fStack_128;
  *(ulonglong *)(lVar23 + 0x14 + lVar34) = uStack_178;
  auVar6._4_8_ = uVar20;
  auVar6._0_4_ = _UNK_14303a934;
  auVar49._0_8_ = auVar6._0_8_ << 0x20;
  auVar49._8_4_ = _UNK_14303a938;
  auVar49._12_4_ = _UNK_14303a93c;
  auVar64._4_12_ = auVar49._4_12_;
  auVar64._0_4_ = uVar37;
  *(longlong *)(lVar23 + 0x1c + lVar34) = auVar64._0_8_;
  *(undefined1 *)(lVar23 + 0x24 + lVar34) = 1;
  *(undefined8 *)(lVar23 + 0x28 + lVar34) = uVar31;
  *(longlong *)(lVar22 + 0x30) = lVar30 + 1;
  *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
LAB_140b4f3a2:
  bVar42 = false;
LAB_140b4f3a4:
  uVar16 = *puStack_368;
  uVar17 = 0;
  uVar13 = uVar16 - *(ulonglong *)(lStack_3d8 + 0x18);
  if (uVar16 < *(ulonglong *)(lStack_3d8 + 0x18)) {
    uVar13 = uVar17;
  }
  uVar19 = uVar16 - *(ulonglong *)(lStack_3d8 + 0x38);
  if (uVar16 < *(ulonglong *)(lStack_3d8 + 0x38)) {
    uVar19 = uVar17;
  }
  uVar16 = *(ulonglong *)(lStack_3d8 + 0x30);
  uVar35 = uVar16 - uVar19;
  if (uVar16 < uVar19) {
    uVar35 = uVar17;
  }
  uVar3 = *(ulonglong *)(lStack_3d8 + 0x10);
  uVar38 = uVar3 - uVar13;
  if (uVar3 < uVar13) {
    uVar38 = uVar17;
  }
  uVar17 = *(ulonglong *)(lStack_3d8 + 0x40);
  *puStack_368 = uVar17 - (uVar38 + uVar35);
  if (uVar3 >= uVar13 && uVar3 - uVar13 != 0 || uVar16 >= uVar19 && uVar16 - uVar19 != 0) {
    *puStack_368 = uVar17;
    *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
    lVar30 = *param_9;
    lVar22 = *(longlong *)(lVar30 + 0x30);
    uVar20 = *(undefined8 *)(lVar30 + 0x40);
    if (lVar22 == *(longlong *)(lVar30 + 0x20)) {
      pdb_142d7e6e0(lVar30 + 0x20);
    }
    lVar23 = *(longlong *)(lVar30 + 0x28);
    lVar34 = lVar22 * 0x20;
    *(undefined8 *)(lVar23 + lVar34) = uVar20;
    *(undefined4 **)(lVar23 + 8 + lVar34) = puVar39;
    *(ulonglong *)(lVar23 + 0x10 + lVar34) = CONCAT44(fStack_184,fStack_188);
    *(float *)(lVar23 + 0x18 + lVar34) = fStack_180;
    *(undefined2 *)(lVar23 + 0x1c + lVar34) = 4;
    *(longlong *)(lVar30 + 0x30) = lVar22 + 1;
    *(longlong *)(lVar30 + 0x40) = *(longlong *)(lVar30 + 0x40) + 1;
    uVar32 = *(undefined1 *)(lStack_120 + -9);
    fVar45 = (float)pdb_140de8220(lVar34,_DAT_143059590,*(undefined4 *)(pcStack_328 + 0x1c));
    lVar30 = lStack_408;
    fVar47 = _DAT_142e36f28;
    fVar48 = 0.0;
    if (0.0 <= fVar45) {
      fVar48 = fVar45;
    }
    fVar45 = _DAT_142e36f28;
    if (fVar48 <= _DAT_142e36f28) {
      fVar45 = fVar48;
    }
    *puStack_3f8 = uStack_3f0._4_4_;
    lVar22 = *(longlong *)(lStack_408 + 0x30);
    uVar20 = *(undefined8 *)(lStack_408 + 0x40);
    if (lVar22 == *(longlong *)(lStack_408 + 0x20)) {
      pdb_142d7ede0(lStack_408 + 0x20);
    }
    puVar39 = puStack_170;
    lVar23 = *(longlong *)(lVar30 + 0x28);
    *(undefined8 *)(lVar23 + lVar22 * 0x28) = uVar20;
    *(undefined4 **)(lVar23 + 8 + lVar22 * 0x28) = puStack_170;
    *(ulonglong *)(lVar23 + 0x10 + lVar22 * 0x28) = CONCAT44(fStack_184,fStack_188);
    *(float *)(lVar23 + 0x18 + lVar22 * 0x28) = fStack_180;
    *(float *)(lVar23 + 0x1c + lVar22 * 0x28) = fVar45;
    *(undefined1 *)(lVar23 + 0x20 + lVar22 * 0x28) = 4;
    *(undefined1 *)(lVar23 + 0x21 + lVar22 * 0x28) = uVar32;
    *(longlong *)(lVar30 + 0x30) = lVar22 + 1;
    *(longlong *)(lVar30 + 0x40) = *(longlong *)(lVar30 + 0x40) + 1;
    if (bVar42) {
      fVar45 = (float)pdb_140de8220(lVar22 * 5,_DAT_143059590,*(undefined4 *)(pcStack_328 + 0x1c));
      fVar48 = 0.0;
      if (0.0 <= fVar45) {
        fVar48 = fVar45;
      }
      fStack_2b4 = fVar47;
      if (fVar48 <= fVar47) {
        fStack_2b4 = fVar48;
      }
      uStack_2b0._0_4_ = (float)CONCAT31(uStack_2b0._1_3_,5);
      uStack_2b8 = SUB42(fStack_180,0);
      uStack_2b6 = (undefined1)((uint)fStack_180 >> 0x10);
      uStack_2b5 = (undefined1)((uint)fStack_180 >> 0x18);
      fStack_2c8 = SUB84(puVar39,0);
      uStack_2c4 = (float)((ulonglong)puVar39 >> 0x20);
      pdb_141b75070(&lStack_408,&fStack_2c8,&UNK_1430599d8);
    }
  }
  return;
}

