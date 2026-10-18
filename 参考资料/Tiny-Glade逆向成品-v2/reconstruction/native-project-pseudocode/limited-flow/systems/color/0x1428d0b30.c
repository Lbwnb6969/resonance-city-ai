// VA 0x1428d0b30, PDB extent 7486 bytes
// system_color::radial_menu::ColorRadialMenu::create
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/radial_menu/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001428d1761) overlaps instruction at (ram,0x0001428d175d)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::radial_menu::ColorRadialMenu::create
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/radial_menu/mod.rs
   Extent: 7486 */

undefined1 (*) [16]
pdb_1428d0b30(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
             undefined8 *param_6,undefined8 *param_7)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  byte bVar20;
  byte bVar21;
  longlong lVar22;
  byte *pbVar23;
  undefined1 (*pauVar24) [16];
  undefined8 uVar25;
  undefined1 (*pauVar26) [16];
  byte bVar27;
  char *pcVar28;
  float *pfVar29;
  ulonglong uVar30;
  code *pcVar31;
  undefined8 uVar32;
  longlong *plVar33;
  longlong *plVar34;
  float *pfVar35;
  ulonglong *puVar36;
  float *pfVar38;
  ulonglong uVar39;
  undefined1 (*pauVar40) [16];
  byte *pbVar41;
  byte *pbVar42;
  undefined4 *puVar43;
  longlong lVar44;
  undefined8 *puVar45;
  ulonglong uVar46;
  byte *arg0;
  ulonglong *puVar47;
  longlong unaff_GS_OFFSET;
  bool bVar48;
  undefined4 uVar49;
  float extraout_XMM0_Da;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar50 [16];
  undefined8 extraout_XMM0_Qb_00;
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
  undefined8 extraout_XMM0_Qb_14;
  float fVar51;
  longlong lVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  longlong lVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auStack_468 [48];
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  undefined8 *puStack_420;
  byte *pbStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  ulonglong **ppuStack_400;
  undefined8 uStack_3f8;
  float afStack_3e8 [6];
  float *pfStack_3d0;
  float *pfStack_3c8;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulonglong *puStack_330;
  ulonglong *puStack_328;
  undefined8 uStack_320;
  ulonglong *puStack_318;
  float *pfStack_310;
  float *pfStack_308;
  undefined8 uStack_300;
  float *pfStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined8 uStack_2e0;
  undefined8 auStack_2d8 [2];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  byte *pbStack_288;
  undefined8 *puStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined4 uStack_258;
  float fStack_254;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined8 uStack_244;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined1 uStack_22c;
  undefined1 uStack_22b;
  undefined2 uStack_22a;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 uStack_220;
  undefined1 uStack_21f;
  undefined1 uStack_21e;
  undefined4 uStack_21d;
  undefined1 uStack_219;
  undefined1 uStack_218;
  undefined1 uStack_217;
  undefined2 uStack_216;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined8 uStack_20c;
  undefined4 uStack_204;
  undefined8 uStack_200;
  float *pfStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulonglong *puStack_1d0;
  undefined8 uStack_1c8;
  ulonglong *puStack_1c0;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  ulonglong *puStack_198;
  longlong lStack_190;
  byte *pbStack_188;
  undefined8 uStack_180;
  byte *pbStack_178;
  float fStack_170;
  ulonglong uStack_168;
  float *pfStack_158;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined8 uStack_f0;
  float *pfVar37;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar67 [16];
  undefined1 auVar76 [16];
  undefined1 auVar68 [16];
  undefined1 auVar77 [16];
  undefined1 auVar69 [16];
  undefined1 auVar78 [16];
  undefined1 auVar70 [16];
  undefined1 auVar79 [16];
  undefined1 auVar71 [16];
  undefined1 auVar80 [16];
  undefined1 auVar72 [16];
  undefined1 auVar81 [16];
  undefined1 auVar73 [16];
  undefined1 auVar82 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  
  puVar36 = (ulonglong *)auStack_468;
  pfVar38 = afStack_3e8;
  uStack_f0 = 0xfffffffffffffffe;
  uVar39 = param_6[2];
  if (uVar39 == 0) {
    lVar44 = 0;
  }
  else {
    if (uVar39 < 4) {
      uVar30 = 0;
      lVar44 = 0;
    }
    else {
      uVar30 = uVar39 & 0xfffffffffffffffc;
      puVar43 = (undefined4 *)(param_6[1] + 0x90);
      lVar44 = 0;
      lVar22 = 0;
      lVar52 = 0;
      lVar64 = 0;
      uVar46 = uVar30;
      do {
        uVar49 = puVar43[-0x14];
        uVar3 = *puVar43;
        auVar53[0] = -(*(char *)(puVar43 + -0x1e) == DAT_1435ae840);
        auVar53[1] = -((char)uVar49 == UNK_1435ae841);
        auVar53[2] = -((char)((uint)uVar49 >> 8) == UNK_1435ae842);
        auVar53[3] = -((char)((uint)uVar49 >> 0x10) == UNK_1435ae843);
        auVar53[4] = -(UNK_1435ae844 == '\0');
        auVar53[5] = -(UNK_1435ae845 == '\0');
        auVar53[6] = -(UNK_1435ae846 == '\0');
        auVar53[7] = -(UNK_1435ae847 == '\0');
        auVar53[8] = -(UNK_1435ae848 == '\0');
        auVar53[9] = -(UNK_1435ae849 == '\0');
        auVar53[10] = -(UNK_1435ae84a == '\0');
        auVar53[0xb] = -(UNK_1435ae84b == '\0');
        auVar53[0xc] = -(UNK_1435ae84c == '\0');
        auVar53[0xd] = -(UNK_1435ae84d == '\0');
        auVar53[0xe] = -(UNK_1435ae84e == '\0');
        auVar53[0xf] = -(UNK_1435ae84f == '\0');
        auVar83._8_4_ = 0xffffffff;
        auVar83._0_8_ = 0xffffffffffffffff;
        auVar83._12_4_ = 0xffffffff;
        auVar53 = auVar53 ^ auVar83;
        auVar61._0_14_ = auVar53._0_14_;
        auVar61[0xe] = auVar53[7];
        auVar61[0xf] = auVar53[7];
        auVar60._14_2_ = auVar61._14_2_;
        auVar60._0_13_ = auVar53._0_13_;
        auVar60[0xd] = auVar53[6];
        auVar59._13_3_ = auVar60._13_3_;
        auVar59._0_12_ = auVar53._0_12_;
        auVar59[0xc] = auVar53[6];
        auVar58._12_4_ = auVar59._12_4_;
        auVar58._0_11_ = auVar53._0_11_;
        auVar58[0xb] = auVar53[5];
        auVar57._11_5_ = auVar58._11_5_;
        auVar57._0_10_ = auVar53._0_10_;
        auVar57[10] = auVar53[5];
        auVar56._10_6_ = auVar57._10_6_;
        auVar56._0_9_ = auVar53._0_9_;
        auVar56[9] = auVar53[4];
        auVar55._9_7_ = auVar56._9_7_;
        auVar55._0_8_ = auVar53._0_8_;
        auVar55[8] = auVar53[4];
        auVar54._8_8_ = auVar55._8_8_;
        auVar54[7] = auVar53[3];
        auVar54[6] = auVar53[3];
        auVar54[5] = auVar53[2];
        auVar54[4] = auVar53[2];
        auVar54[3] = auVar53[1];
        auVar54[2] = auVar53[1];
        auVar54[0] = auVar53[0];
        auVar54[1] = auVar54[0];
        auVar83 = pshuflw(auVar54,auVar54,0xd4);
        auVar62._12_4_ = auVar83._12_4_;
        auVar62._0_8_ = auVar83._0_8_;
        auVar62._8_4_ = auVar83._4_4_;
        auVar62 = auVar62 & _DAT_143065930;
        lVar52 = lVar52 + auVar62._0_8_;
        lVar64 = lVar64 + auVar62._8_8_;
        auVar65[0] = -(*(char *)(puVar43 + -10) == DAT_1435ae840);
        auVar65[1] = -((char)uVar3 == UNK_1435ae841);
        auVar65[2] = -((char)((uint)uVar3 >> 8) == UNK_1435ae842);
        auVar65[3] = -((char)((uint)uVar3 >> 0x10) == UNK_1435ae843);
        auVar65[4] = -(UNK_1435ae844 == '\0');
        auVar65[5] = -(UNK_1435ae845 == '\0');
        auVar65[6] = -(UNK_1435ae846 == '\0');
        auVar65[7] = -(UNK_1435ae847 == '\0');
        auVar65[8] = -(UNK_1435ae848 == '\0');
        auVar65[9] = -(UNK_1435ae849 == '\0');
        auVar65[10] = -(UNK_1435ae84a == '\0');
        auVar65[0xb] = -(UNK_1435ae84b == '\0');
        auVar65[0xc] = -(UNK_1435ae84c == '\0');
        auVar65[0xd] = -(UNK_1435ae84d == '\0');
        auVar65[0xe] = -(UNK_1435ae84e == '\0');
        auVar65[0xf] = -(UNK_1435ae84f == '\0');
        auVar12._8_4_ = 0xffffffff;
        auVar12._0_8_ = 0xffffffffffffffff;
        auVar12._12_4_ = 0xffffffff;
        auVar65 = auVar65 ^ auVar12;
        auVar73._0_14_ = auVar65._0_14_;
        auVar73[0xe] = auVar65[7];
        auVar73[0xf] = auVar65[7];
        auVar72._14_2_ = auVar73._14_2_;
        auVar72._0_13_ = auVar65._0_13_;
        auVar72[0xd] = auVar65[6];
        auVar71._13_3_ = auVar72._13_3_;
        auVar71._0_12_ = auVar65._0_12_;
        auVar71[0xc] = auVar65[6];
        auVar70._12_4_ = auVar71._12_4_;
        auVar70._0_11_ = auVar65._0_11_;
        auVar70[0xb] = auVar65[5];
        auVar69._11_5_ = auVar70._11_5_;
        auVar69._0_10_ = auVar65._0_10_;
        auVar69[10] = auVar65[5];
        auVar68._10_6_ = auVar69._10_6_;
        auVar68._0_9_ = auVar65._0_9_;
        auVar68[9] = auVar65[4];
        auVar67._9_7_ = auVar68._9_7_;
        auVar67._0_8_ = auVar65._0_8_;
        auVar67[8] = auVar65[4];
        auVar66._8_8_ = auVar67._8_8_;
        auVar66[7] = auVar65[3];
        auVar66[6] = auVar65[3];
        auVar66[5] = auVar65[2];
        auVar66[4] = auVar65[2];
        auVar66[3] = auVar65[1];
        auVar66[2] = auVar65[1];
        auVar66[0] = auVar65[0];
        auVar66[1] = auVar66[0];
        auVar83 = pshuflw(auVar62,auVar66,0xd4);
        auVar63._12_4_ = auVar83._12_4_;
        auVar63._0_8_ = auVar83._0_8_;
        auVar63._8_4_ = auVar83._4_4_;
        lVar44 = lVar44 + SUB168(auVar63 & _DAT_143065930,0);
        lVar22 = lVar22 + SUB168(auVar63 & _DAT_143065930,8);
        puVar43 = puVar43 + 0x28;
        uVar46 = uVar46 - 4;
      } while (uVar46 != 0);
      lVar44 = lVar22 + lVar64 + lVar44 + lVar52;
      if (uVar39 == uVar30) goto LAB_1428d0cf4;
    }
    lVar22 = uVar39 - uVar30;
    pcVar28 = (char *)(param_6[1] + uVar30 * 0x28 + 0x18);
    do {
      lVar44 = lVar44 + (ulonglong)(*pcVar28 != '\x06');
      pcVar28 = pcVar28 + 0x28;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
LAB_1428d0cf4:
  fVar51 = ((*(float *)((longlong)param_6 + 0x6c) + *(float *)(param_6 + 0xe)) *
           ((float)lVar44 + _DAT_142e36f34)) / *(float *)((longlong)param_6 + 100);
  uStack_f5 = 1;
  uVar49 = pdb_1428d70e0(_DAT_142e36f38 * fVar51 + _DAT_143033138 + *(float *)(param_6 + 0xd));
  fVar8 = *(float *)((longlong)param_6 + 100);
  puStack_330 = (ulonglong *)CONCAT44(puStack_330._4_4_,fVar8);
  puStack_420 = (undefined8 *)param_6[1];
  uVar39 = param_6[2];
  if (uVar39 == 0) {
    lVar44 = 0;
  }
  else {
    if (uVar39 < 4) {
      uVar30 = 0;
      lVar44 = 0;
    }
    else {
      uVar30 = uVar39 & 0xfffffffffffffffc;
      puVar45 = puStack_420 + 0x12;
      lVar44 = 0;
      lVar22 = 0;
      lVar52 = 0;
      lVar64 = 0;
      uVar46 = uVar30;
      do {
        uVar3 = *(undefined4 *)(puVar45 + -10);
        uVar4 = *(undefined4 *)puVar45;
        auVar74[0] = -(*(char *)(puVar45 + -0xf) == DAT_1435ae840);
        auVar74[1] = -((char)uVar3 == UNK_1435ae841);
        auVar74[2] = -((char)((uint)uVar3 >> 8) == UNK_1435ae842);
        auVar74[3] = -((char)((uint)uVar3 >> 0x10) == UNK_1435ae843);
        auVar74[4] = -(UNK_1435ae844 == '\0');
        auVar74[5] = -(UNK_1435ae845 == '\0');
        auVar74[6] = -(UNK_1435ae846 == '\0');
        auVar74[7] = -(UNK_1435ae847 == '\0');
        auVar74[8] = -(UNK_1435ae848 == '\0');
        auVar74[9] = -(UNK_1435ae849 == '\0');
        auVar74[10] = -(UNK_1435ae84a == '\0');
        auVar74[0xb] = -(UNK_1435ae84b == '\0');
        auVar74[0xc] = -(UNK_1435ae84c == '\0');
        auVar74[0xd] = -(UNK_1435ae84d == '\0');
        auVar74[0xe] = -(UNK_1435ae84e == '\0');
        auVar74[0xf] = -(UNK_1435ae84f == '\0');
        auVar10._8_4_ = 0xffffffff;
        auVar10._0_8_ = 0xffffffffffffffff;
        auVar10._12_4_ = 0xffffffff;
        auVar74 = auVar74 ^ auVar10;
        auVar82._0_14_ = auVar74._0_14_;
        auVar82[0xe] = auVar74[7];
        auVar82[0xf] = auVar74[7];
        auVar81._14_2_ = auVar82._14_2_;
        auVar81._0_13_ = auVar74._0_13_;
        auVar81[0xd] = auVar74[6];
        auVar80._13_3_ = auVar81._13_3_;
        auVar80._0_12_ = auVar74._0_12_;
        auVar80[0xc] = auVar74[6];
        auVar79._12_4_ = auVar80._12_4_;
        auVar79._0_11_ = auVar74._0_11_;
        auVar79[0xb] = auVar74[5];
        auVar78._11_5_ = auVar79._11_5_;
        auVar78._0_10_ = auVar74._0_10_;
        auVar78[10] = auVar74[5];
        auVar77._10_6_ = auVar78._10_6_;
        auVar77._0_9_ = auVar74._0_9_;
        auVar77[9] = auVar74[4];
        auVar76._9_7_ = auVar77._9_7_;
        auVar76._0_8_ = auVar74._0_8_;
        auVar76[8] = auVar74[4];
        auVar75._8_8_ = auVar76._8_8_;
        auVar75[7] = auVar74[3];
        auVar75[6] = auVar74[3];
        auVar75[5] = auVar74[2];
        auVar75[4] = auVar74[2];
        auVar75[3] = auVar74[1];
        auVar75[2] = auVar74[1];
        auVar75[0] = auVar74[0];
        auVar75[1] = auVar75[0];
        auVar83 = pshuflw(auVar75,auVar75,0xd4);
        auVar84._12_4_ = auVar83._12_4_;
        auVar84._0_8_ = auVar83._0_8_;
        auVar84._8_4_ = auVar83._4_4_;
        auVar84 = auVar84 & _DAT_143065930;
        lVar52 = lVar52 + auVar84._0_8_;
        lVar64 = lVar64 + auVar84._8_8_;
        auVar86[0] = -(*(char *)(puVar45 + -5) == DAT_1435ae840);
        auVar86[1] = -((char)uVar4 == UNK_1435ae841);
        auVar86[2] = -((char)((uint)uVar4 >> 8) == UNK_1435ae842);
        auVar86[3] = -((char)((uint)uVar4 >> 0x10) == UNK_1435ae843);
        auVar86[4] = -(UNK_1435ae844 == '\0');
        auVar86[5] = -(UNK_1435ae845 == '\0');
        auVar86[6] = -(UNK_1435ae846 == '\0');
        auVar86[7] = -(UNK_1435ae847 == '\0');
        auVar86[8] = -(UNK_1435ae848 == '\0');
        auVar86[9] = -(UNK_1435ae849 == '\0');
        auVar86[10] = -(UNK_1435ae84a == '\0');
        auVar86[0xb] = -(UNK_1435ae84b == '\0');
        auVar86[0xc] = -(UNK_1435ae84c == '\0');
        auVar86[0xd] = -(UNK_1435ae84d == '\0');
        auVar86[0xe] = -(UNK_1435ae84e == '\0');
        auVar86[0xf] = -(UNK_1435ae84f == '\0');
        auVar11._8_4_ = 0xffffffff;
        auVar11._0_8_ = 0xffffffffffffffff;
        auVar11._12_4_ = 0xffffffff;
        auVar86 = auVar86 ^ auVar11;
        auVar94._0_14_ = auVar86._0_14_;
        auVar94[0xe] = auVar86[7];
        auVar94[0xf] = auVar86[7];
        auVar93._14_2_ = auVar94._14_2_;
        auVar93._0_13_ = auVar86._0_13_;
        auVar93[0xd] = auVar86[6];
        auVar92._13_3_ = auVar93._13_3_;
        auVar92._0_12_ = auVar86._0_12_;
        auVar92[0xc] = auVar86[6];
        auVar91._12_4_ = auVar92._12_4_;
        auVar91._0_11_ = auVar86._0_11_;
        auVar91[0xb] = auVar86[5];
        auVar90._11_5_ = auVar91._11_5_;
        auVar90._0_10_ = auVar86._0_10_;
        auVar90[10] = auVar86[5];
        auVar89._10_6_ = auVar90._10_6_;
        auVar89._0_9_ = auVar86._0_9_;
        auVar89[9] = auVar86[4];
        auVar88._9_7_ = auVar89._9_7_;
        auVar88._0_8_ = auVar86._0_8_;
        auVar88[8] = auVar86[4];
        auVar87._8_8_ = auVar88._8_8_;
        auVar87[7] = auVar86[3];
        auVar87[6] = auVar86[3];
        auVar87[5] = auVar86[2];
        auVar87[4] = auVar86[2];
        auVar87[3] = auVar86[1];
        auVar87[2] = auVar86[1];
        auVar87[0] = auVar86[0];
        auVar87[1] = auVar87[0];
        auVar83 = pshuflw(auVar84,auVar87,0xd4);
        auVar85._12_4_ = auVar83._12_4_;
        auVar85._0_8_ = auVar83._0_8_;
        auVar85._8_4_ = auVar83._4_4_;
        lVar44 = lVar44 + SUB168(auVar85 & _DAT_143065930,0);
        lVar22 = lVar22 + SUB168(auVar85 & _DAT_143065930,8);
        puVar45 = puVar45 + 0x14;
        uVar46 = uVar46 - 4;
      } while (uVar46 != 0);
      lVar44 = lVar22 + lVar64 + lVar44 + lVar52;
      if (uVar39 == uVar30) goto LAB_1428d0e76;
    }
    lVar22 = uVar39 - uVar30;
    pcVar28 = (char *)(puStack_420 + uVar30 * 5 + 3);
    do {
      lVar44 = lVar44 + (ulonglong)(*pcVar28 != '\x06');
      pcVar28 = pcVar28 + 0x28;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
LAB_1428d0e76:
  auStack_2d8[0] =
       CONCAT44(auStack_2d8[0]._4_4_,
                ((((*(float *)((longlong)param_6 + 0x6c) + *(float *)(param_6 + 0xe)) *
                  ((float)lVar44 + _DAT_142e36f34)) / fVar8) * _DAT_142e36f38 + _DAT_143033138 +
                *(float *)(param_6 + 0xd)) * fVar8);
  pbStack_418 = (byte *)(puStack_420 + uVar39 * 5);
  puStack_410 = auStack_2d8;
  puStack_408 = param_6;
  ppuStack_400 = &puStack_330;
  uStack_f5 = 1;
  pdb_1420f3dc0(&uStack_200,&puStack_420);
  pbStack_178 = (byte *)(lStack_1f0 * 0x10);
  puStack_420 = (undefined8 *)0x0;
  uStack_3f8 = 0;
  pfStack_158 = pfStack_1f8;
  pfStack_3d0 = pfStack_1f8;
  uStack_f6 = 1;
  uStack_f7 = 1;
  pfStack_3c8 = pfStack_1f8 + lStack_1f0 * 4;
  pdb_142b3da00(&fStack_438,&puStack_420);
  uVar3 = *(undefined4 *)((longlong)param_6 + 100);
  uVar4 = *(undefined4 *)((longlong)param_6 + 0x6c);
  fStack_170 = *(float *)((longlong)param_6 + 0x74);
  lVar44 = param_6[2];
  uStack_1c8 = *param_6;
  puStack_1c0 = (ulonglong *)param_6[1];
  uStack_348 = param_6[3];
  uStack_340 = param_6[4];
  uStack_338 = param_6[5];
  uStack_148 = *(undefined4 *)(param_6 + 6);
  uStack_1b0 = *(undefined8 *)((longlong)param_6 + 0x34);
  uStack_1a8 = *(undefined4 *)((longlong)param_6 + 0x3c);
  uVar32 = param_6[8];
  uStack_144 = *(undefined4 *)(param_6 + 9);
  uStack_f4 = *(undefined1 *)((longlong)param_6 + 0x4c);
  uStack_f8 = *(undefined1 *)((longlong)param_6 + 0x4d);
  uVar6 = *(undefined2 *)((longlong)param_6 + 0x4e);
  uStack_140 = *(undefined4 *)(param_6 + 10);
  uStack_13c = *(undefined4 *)((longlong)param_6 + 0x54);
  uStack_fc = *(undefined1 *)(param_6 + 0xb);
  uStack_fb = *(undefined1 *)((longlong)param_6 + 0x59);
  uStack_fa = *(undefined1 *)((longlong)param_6 + 0x5a);
  uStack_134 = *(undefined1 *)((longlong)param_6 + 0x5f);
  uStack_138 = *(undefined4 *)((longlong)param_6 + 0x5b);
  uStack_fd = *(undefined1 *)(param_6 + 0xc);
  uStack_f9 = *(undefined1 *)((longlong)param_6 + 0x61);
  uVar7 = *(undefined2 *)((longlong)param_6 + 0x62);
  lStack_1b8 = lVar44;
  if (lVar44 == 0) {
    pbVar23 = (byte *)0x8;
  }
  else {
    pdb_14007ee60();
    pbVar23 = pub_1406abab0(lVar44 * 8,8);
    if (pbVar23 == (byte *)0x0) {
      uStack_fe = 1;
      pdb_142dc7e2a(8,lVar44 * 8);
      goto LAB_1428d1132;
    }
  }
  uStack_180 = 0;
  uStack_f3 = 1;
  lStack_190 = lVar44;
  pbStack_188 = pbVar23;
  pdb_1420f34f0(&puStack_420,&uStack_1c8);
  puVar45 = puStack_410;
  uStack_1e8 = param_1;
  pbStack_288 = pbStack_418;
  if (puStack_410 < puStack_420) {
    if (puStack_410 == (undefined8 *)0x0) {
      pub_1406abac0(pbStack_418,(longlong)puStack_420 * 0x28,8);
      pbStack_288 = (byte *)0x8;
    }
    else {
      uStack_168 = (longlong)puStack_410 * 0x28;
      pbStack_288 = pub_1406abad0(pbStack_418,(longlong)puStack_420 * 0x28,8,uStack_168);
      if (pbStack_288 == (byte *)0x0) {
        pdb_142dc7e2a(8,uStack_168);
LAB_1428d1132:
                    /* WARNING: Does not return */
        pcVar31 = (code *)invalidInstructionException();
        (*pcVar31)();
      }
    }
  }
  fVar19 = _DAT_142e42360;
  fVar8 = _DAT_142e37870;
  uVar18 = _DAT_142e377e0;
  uStack_214 = uVar3;
  fStack_278 = param_2;
  fStack_274 = param_3;
  fStack_270 = param_4;
  fStack_26c = param_5;
  fStack_268 = param_2 + fStack_438;
  fStack_264 = param_3 + fStack_434;
  fStack_260 = param_2 + fStack_430;
  fStack_25c = param_3 + fStack_42c;
  uStack_210 = uVar4;
  uStack_2c8 = 0;
  uStack_2c0 = 8;
  uStack_2b8 = 0;
  uStack_2a0 = uStack_348;
  uStack_298 = uStack_340;
  uStack_290 = uStack_338;
  uStack_248 = uStack_148;
  uStack_244 = uStack_1b0;
  uStack_23c = uStack_1a8;
  uStack_238 = uVar32;
  uStack_230 = uStack_144;
  uStack_22c = uStack_f4;
  uStack_22b = uStack_f8;
  uStack_22a = uVar6;
  uStack_228 = uStack_140;
  uStack_224 = uStack_13c;
  uStack_220 = uStack_fc;
  uStack_21f = uStack_fb;
  uStack_21e = uStack_fa;
  uStack_219 = uStack_134;
  uStack_21d = uStack_138;
  uStack_218 = uStack_fd;
  uStack_217 = uStack_f9;
  uStack_216 = uVar7;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_258 = uVar49;
  fStack_254 = fVar51;
  uStack_204 = *(undefined4 *)(param_7 + 1);
  uStack_20c = *param_7;
  auStack_2d8[0] = 0;
  uStack_250 = 0;
  puStack_280 = puVar45;
  lVar22 = lVar44 * 0x28;
  auVar50 = ZEXT816(0);
  auStack_2f0 = auVar50;
  puStack_330 = puStack_1c0;
  puStack_328 = puStack_1c0;
  uStack_1d8 = uStack_1c8;
  uStack_320 = uStack_1c8;
  puStack_1d0 = puStack_1c0 + lVar44 * 5;
  puStack_318 = puStack_1c0 + lVar44 * 5;
  pfStack_310 = pfStack_158;
  pfStack_308 = pfStack_158;
  uStack_1e0 = uStack_200;
  uStack_300 = uStack_200;
  pfStack_2f8 = pfStack_1f8 + lStack_1f0 * 4;
  uStack_2e0 = 0;
  puStack_198 = puStack_1c0;
  puVar47 = puStack_1c0;
  if (lVar44 != 0) {
    fVar51 = _DAT_142e36f28 / fStack_170;
    lVar44 = 1;
    uStack_14c = 0;
    pfVar29 = pfStack_158;
    puVar36 = (ulonglong *)auStack_468;
    pbVar23 = pbStack_178;
    puVar13 = puStack_1c0;
    while( true ) {
      puVar47 = puVar13 + 5;
      *(ulonglong **)(pfVar38 + 0x30) = puVar47;
      uVar39 = *puVar13;
      if (SBORROW8(0,uVar39)) break;
      arg0 = (byte *)puVar13[1];
      if (pbVar23 == (byte *)0x0) {
        if (uVar39 != 0) {
          puVar36[-1] = 0x1428d1ddc;
          pub_1406abac0(arg0,uVar39,1);
        }
        break;
      }
      *(longlong *)(pfVar38 + 0x9e) = lVar22;
      *(byte **)(pfVar38 + 0x9c) = pbVar23;
      pbVar42 = (byte *)(lVar44 - 1);
      *(float **)(pfVar38 + 0xa0) = pfVar29 + 4;
      *(float **)(pfVar38 + 0x38) = pfVar29 + 4;
      fVar14 = *pfVar29;
      fVar15 = pfVar29[1];
      fVar16 = pfVar29[2];
      fVar17 = pfVar29[3];
      pauVar26 = (undefined1 (*) [16])puVar13[2];
      bVar2 = (byte)puVar13[3];
      plVar33 = (longlong *)(ulonglong)bVar2;
      *(undefined1 *)((longlong)pfVar38 + 0x2f6) = *(undefined1 *)((longlong)puVar13 + 0x19);
      *(undefined2 *)((longlong)pfVar38 + 0x2b6) = *(undefined2 *)((longlong)puVar13 + 0x1a);
      pfVar38[0xb9] = *(float *)((longlong)puVar13 + 0x1c);
      pfVar38[0xa6] = *(float *)(puVar13 + 4);
      fVar9 = *(float *)((longlong)puVar13 + 0x24);
      plVar34 = (longlong *)(ulonglong)(uint)fVar9;
      *(longlong *)(pfVar38 + 0x42) = lVar44;
      bVar20 = bVar2 - 3;
      if (bVar2 < 3) {
        bVar20 = 10;
      }
      uVar46 = (ulonglong)bVar20;
      uVar30 = (ulonglong)*(int *)(&UNK_1435afce8 + uVar46 * 4);
      pcVar31 = (code *)(&UNK_1435afce8 + uVar30);
      bVar21 = *(byte *)((longlong)pfVar38 + 0x2eb);
      pauVar24 = (undefined1 (*) [16])(ulonglong)bVar21;
      *(ulonglong *)(pfVar38 + 0xa2) = uVar39;
      *(byte **)(pfVar38 + 0x92) = arg0;
      bVar27 = (byte)pcVar31;
      pbVar41 = pbVar42;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar20) {
      case 0:
        uVar30 = (ulonglong)(uint)pfVar38[0xb9];
        bVar48 = pfVar38[0xa8] == pfVar38[0xb9];
        break;
      case 1:
        uVar30 = 0;
        bVar48 = *(char *)((longlong)pfVar38 + 0x2ed) == *(char *)((longlong)pfVar38 + 0x2f6);
        break;
      case 2:
        uVar30 = 0;
        bVar48 = *(char *)((longlong)pfVar38 + 0x2ee) == *(char *)((longlong)pfVar38 + 0x2f6);
        break;
      default:
        pauVar24 = (undefined1 (*) [16])0x0;
        goto code_r0x0001428d1603;
      case 10:
        pauVar24 = (undefined1 (*) [16])(ulonglong)(*(byte *)(pfVar38 + 0xbd) == bVar2);
        if ((*(byte *)(pfVar38 + 0xbd) == 2) && (bVar2 == 2)) {
          pauVar24 = (undefined1 (*) [16])
                     (ulonglong)
                     (*(char *)(pfVar38 + 0xbc) == *(char *)((longlong)pfVar38 + 0x2f6) &&
                     (pfVar38[0xaa] == pfVar38[0xb9] && pfVar38[0xab] == pfVar38[0xa6]));
        }
        goto code_r0x0001428d15e3;
      case 0xb:
        pauVar24 = (undefined1 (*) [16])
                   (ulonglong)(-(uint)(pfVar38[0xb9] == (float)((ulonglong)uVar32 >> 0x20)) & 1);
        goto code_r0x0001428d15e3;
      case 0xc:
        uVar30 = 0;
        bVar48 = *(char *)(pfVar38 + 0xbb) == *(char *)((longlong)pfVar38 + 0x2f6);
        break;
      case 0xd:
        goto code_r0x0001428d15e3;
      case 0xe:
        uVar30 = 0;
        bVar48 = *(char *)((longlong)pfVar38 + 0x2ef) == *(char *)((longlong)pfVar38 + 0x2f6);
        break;
      case 0xf:
        uVar30 = (ulonglong)(uint)pfVar38[0xb9];
        bVar48 = pfVar38[0xa9] == pfVar38[0xb9];
        break;
      case 0x10:
        *(int *)(lVar22 + -0x39) =
             (*(int *)(lVar22 + -0x39) - (int)pbVar23) - (uint)(0xfffffffebca50317 < uVar30);
        *pbVar23 = *pbVar23 & (byte)lVar22;
        (*pauVar24)[0] = (*pauVar24)[0] + bVar21;
        bVar21 = bVar21 + (*pauVar24)[0];
        *(char *)(ulonglong)bVar21 = *(char *)(ulonglong)bVar21 + bVar21;
        goto code_r0x0001428d1648;
      case 0x11:
        (*pauVar24)[0] = (*pauVar24)[0] + bVar21;
        goto code_r0x0001428d17a1;
      case 0x12:
      case 0x1d:
      case 0x1e:
        goto code_r0x0001428d1a7a;
      case 0x13:
        (*pauVar24)[0] = (*pauVar24)[0] + bVar21;
        goto code_r0x0001428d1920;
      case 0x14:
        (*pauVar24)[0] = (*pauVar24)[0] + bVar21;
        goto code_r0x0001428d19e1;
      case 0x15:
        (*pauVar24)[0] = (*pauVar24)[0] + bVar21;
        goto code_r0x0001428d18e2;
      case 0x16:
        *(char *)(uVar39 - 0x77) = *(char *)(uVar39 - 0x77) + bVar27;
        uVar39 = (ulonglong)pauVar24 | 0x20;
        goto code_r0x0001428d1a97;
      case 0x17:
        (*pauVar24)[0] = (*pauVar24)[0] & (byte)uVar39;
        goto code_r0x0001428d1866;
      case 0x18:
        (*pauVar24)[0] = (*pauVar24)[0] + bVar21;
        goto code_r0x0001428d1a1f;
      case 0x19:
        piVar1 = (int *)((longlong)plVar33 + (longlong)pcVar31 * 4 + -0x53);
        *piVar1 = *piVar1 + -1;
        pfVar35 = (float *)(puVar36 + -1);
        puVar36[-1] = (ulonglong)pfVar38;
        puVar36 = (ulonglong *)((longlong)puVar36 + -10);
        pfVar38 = pfVar35;
        goto code_r0x0001428d1769;
      case 0x1a:
        pcVar28 = (char *)((longlong)plVar33 + (longlong)pcVar31 * 4 + -0x53);
        *pcVar28 = *pcVar28 + bVar27;
        pfVar37 = (float *)(puVar36 + -1);
        puVar36[-1] = (ulonglong)pfVar38;
        puVar36 = (ulonglong *)((longlong)puVar36 + -10);
        pfVar38 = pfVar37;
        goto code_r0x0001428d17e6;
      case 0x1b:
        LOCK();
        bVar20 = *(byte *)((longlong)plVar33 + (longlong)pauVar24);
        *(byte *)((longlong)plVar33 + (longlong)pauVar24) = bVar2;
        plVar34 = (longlong *)(ulonglong)bVar20;
        UNLOCK();
        pauVar24[-8][0xb] = pauVar24[-8][0xb] + bVar27;
        *(byte *)(lVar22 + -0x73) = *(byte *)(lVar22 + -0x73) | bVar27;
        uVar39 = (ulonglong)(bVar21 | 0x2329);
        goto code_r0x0001428d1997;
      case 0x1c:
        (*pauVar24)[0] = (*pauVar24)[0] + bVar21;
      case 8:
        *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 1;
        uVar5 = *(undefined1 *)((longlong)pfVar38 + 0x2f6);
        puVar36[-1] = 0x1428d173b;
        uVar25 = pdb_141641110(uVar5);
        pauVar24 = (undefined1 (*) [16])
                   CONCAT71((int7)((ulonglong)uVar25 >> 8),
                            (float)((uint)((float)uVar32 - extraout_XMM0_Da) & uVar18) < fVar8);
        uVar39 = *(ulonglong *)(pfVar38 + 0xa2);
        arg0 = *(byte **)(pfVar38 + 0x92);
        goto code_r0x0001428d15e3;
      case 0x1f:
        (*pauVar24)[0] = (*pauVar24)[0] + bVar21;
        goto code_r0x0001428d18a4;
      case 0x20:
        (&UNK_1435afcae)[(longlong)(*pauVar26 + uVar30)] =
             (&UNK_1435afcae)[(longlong)(*pauVar26 + uVar30)];
        *(undefined4 *)(ulonglong)(byte)(bVar21 + 0x65) = 0x74696877;
        *(undefined8 *)*pauVar26 = 5;
        *(undefined4 **)(*pauVar26 + 8) = (undefined4 *)(ulonglong)(byte)(bVar21 + 0x65);
        *(undefined8 *)pauVar26[1] = 5;
        *(undefined4 *)(pauVar26[2] + 4) = 0;
        pauVar26[1][8] = 6;
        return pauVar26;
      case 0x21:
        out((short)uVar39,(uint)bVar21);
        (*pauVar24)[0] = (*pauVar24)[0] + bVar21;
        bVar20 = *pbVar42;
        *pbVar42 = *pbVar42 + bVar27;
        UNK_1435afb6f = UNK_1435afb6f + bVar21 + CARRY1(bVar20,bVar27);
        goto code_r0x0001428d2932;
      case 0x22:
        return pauVar24;
      case 0x23:
        if ((POPCOUNT((ulonglong)pcVar31 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_r0x0001428d28fa;
      }
      pauVar24 = (undefined1 (*) [16])CONCAT71((int7)(uVar30 >> 8),bVar48);
code_r0x0001428d15e3:
      uVar30 = (ulonglong)pauVar24 & 0xffffffff;
      if (((~(byte)uVar30 | *(byte *)(pfVar38 + 0xa7)) & 1) == 0) {
        *(byte **)(pfVar38 + 0x66) = pbVar42;
        pauVar24 = (undefined1 (*) [16])0x1;
        pfVar38[0xa7] = (float)CONCAT71((int7)(uVar30 >> 8),1);
      }
code_r0x0001428d1603:
      bVar21 = (byte)pauVar24;
      *(ulonglong *)(pfVar38 + -0xe) = uVar39;
      *(byte **)(pfVar38 + -0xc) = arg0;
      *(undefined1 (**) [16])(pfVar38 + -10) = pauVar26;
      pcVar31 = (code *)0x0;
      pbVar23 = (byte *)(ulonglong)(bVar2 == 6);
      if ((longlong)pbVar42 < 0) {
        auVar50 = ZEXT416((uint)(float)pbVar42);
        pbVar41 = (byte *)((ulonglong)((uint)pbVar42 & 1) | (ulonglong)pbVar42 >> 1);
      }
      else {
        auVar50 = ZEXT416((uint)(float)(longlong)pbVar42);
      }
code_r0x0001428d1648:
      pfVar38[-6] = param_4;
      pfVar38[-5] = param_5;
      pfVar38[-4] = 0.0;
      pfVar38[-3] = 0.0;
      pfVar38[-8] = fVar9;
      fVar9 = *(float *)(&UNK_1435ae288 +
                        CONCAT71((int7)((ulonglong)pcVar31 >> 8),(char)pbVar23) * 4);
      pfVar38[-2] = fVar9 * fVar16;
      pfVar38[-1] = fVar9 * fVar17;
      *pfVar38 = fVar14 + param_2;
      pfVar38[1] = fVar15 + param_3;
      pfVar38[2] = param_4;
      pfVar38[3] = param_5;
      pfVar38[4] = auVar50._0_4_ * fVar19 * fVar51;
      pfVar38[5] = 0.0;
      *(undefined1 *)(pfVar38 + 6) = 0;
      *(byte *)((longlong)pfVar38 + 0x19) = bVar21 & 1;
      pfVar38[8] = 1.4013e-45;
      pfVar38[9] = 0.0;
      *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
      uVar25 = *(undefined8 *)(pfVar38 + 0x10a);
      puVar36[-1] = 0x1428d16d9;
      auVar50._0_8_ = pdb_1428d5230(pfVar38 + 0xae,uVar25,pfVar38 + -0xe,&UNK_1435afb20);
      auVar50._8_8_ = extraout_XMM0_Qb_00;
      pcVar31 = (code *)&UNK_1435afd28;
      pauVar24 = (undefined1 (*) [16])(&UNK_1435afd28 + *(int *)(&UNK_1435afd28 + uVar46 * 4));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar20) {
      case 0:
        plVar33 = *(longlong **)(pfVar38 + 0xb2);
        if (plVar33 == (longlong *)0x0) {
          plVar33 = *(longlong **)(pfVar38 + 0xb4);
        }
        pauVar26 = *(undefined1 (**) [16])(pfVar38 + 0xae);
        lVar22 = plVar33[2];
        if ((ulonglong)(*plVar33 - lVar22) < 0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          puVar36[4] = 1;
          puVar36[-1] = 0x1428d1cb5;
          auVar50._0_8_ = pdb_142d7f1b0(plVar33,lVar22,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_08;
        }
        lVar52 = plVar33[1];
        pcVar31 = pdb_1428d3330;
        goto code_r0x0001428d1a00;
      case 1:
        plVar34 = *(longlong **)(pfVar38 + 0xb2);
code_r0x0001428d17e6:
        if (plVar34 == (longlong *)0x0) {
          plVar34 = *(longlong **)(pfVar38 + 0xb4);
        }
        pauVar26 = *(undefined1 (**) [16])(pfVar38 + 0xae);
        uVar46 = plVar34[2];
        if (*plVar34 - uVar46 < 0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          *(undefined8 *)((longlong)puVar36 + 0x20) = 1;
          *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d1c01;
          auVar50._0_8_ = pdb_142d7f1b0(plVar34,uVar46,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_04;
        }
        uVar39 = plVar34[1];
        pcVar31 = pdb_1428d3f00;
        goto code_r0x0001428d1a97;
      default:
        goto code_r0x0001428d1aba;
      case 3:
        plVar34 = *(longlong **)(pfVar38 + 0xb2);
        if (plVar34 == (longlong *)0x0) {
          plVar34 = *(longlong **)(pfVar38 + 0xb4);
        }
        pauVar26 = *(undefined1 (**) [16])(pfVar38 + 0xae);
        uVar46 = plVar34[2];
        if (*plVar34 - uVar46 < 0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          puVar36[4] = 1;
          puVar36[-1] = 0x1428d1d0f;
          auVar50._0_8_ = pdb_142d7f1b0(plVar34,uVar46,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_10;
        }
        uVar39 = plVar34[1];
        pcVar31 = pdb_1428d3cc0;
code_r0x0001428d1997:
        *(code **)(uVar39 + uVar46) = pcVar31;
        *(undefined1 (**) [16])(uVar39 + 8 + uVar46) = pauVar26;
        *(undefined1 *)(uVar39 + 0x10 + uVar46) = 0;
        plVar34[2] = uVar46 + 0x18;
        lVar22 = *(longlong *)(pfVar38 + 0x4c);
        if (lVar22 == *(longlong *)(pfVar38 + 0x48)) goto code_r0x0001428d1400;
        goto code_r0x0001428d1414;
      case 4:
code_r0x0001428d1a1f:
        plVar33 = *(longlong **)(pfVar38 + 0xb2);
        if (plVar33 == (longlong *)0x0) {
          plVar33 = *(longlong **)(pfVar38 + 0xb4);
        }
        uVar25 = *(undefined8 *)(pfVar38 + 0xae);
        lVar22 = plVar33[2];
        if ((ulonglong)(*plVar33 - lVar22) < 0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          puVar36[4] = 1;
          puVar36[-1] = 0x1428d1d69;
          auVar50._0_8_ = pdb_142d7f1b0(plVar33,lVar22,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_12;
        }
        lVar52 = plVar33[1];
        pcVar31 = pdb_1428d3850;
        break;
      case 5:
code_r0x0001428d1920:
        plVar33 = *(longlong **)(pfVar38 + 0xb2);
        if (plVar33 == (longlong *)0x0) {
          plVar33 = *(longlong **)(pfVar38 + 0xb4);
        }
        uVar25 = *(undefined8 *)(pfVar38 + 0xae);
        lVar22 = plVar33[2];
        if ((ulonglong)(*plVar33 - lVar22) < 0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          puVar36[4] = 1;
          puVar36[-1] = 0x1428d1ce2;
          auVar50._0_8_ = pdb_142d7f1b0(plVar33,lVar22,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_09;
        }
        lVar52 = plVar33[1];
        pcVar31 = pdb_1428d33d0;
        break;
      case 6:
        plVar33 = *(longlong **)(pfVar38 + 0xb2);
        if (plVar33 == (longlong *)0x0) {
          plVar33 = *(longlong **)(pfVar38 + 0xb4);
        }
        uVar25 = *(undefined8 *)(pfVar38 + 0xae);
        lVar22 = plVar33[2];
        if ((ulonglong)(*plVar33 - lVar22) < 0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          puVar36[4] = 1;
          puVar36[-1] = 0x1428d1dc3;
          auVar50._0_8_ = pdb_142d7f1b0(plVar33,lVar22,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_14;
        }
        lVar52 = plVar33[1];
        pcVar31 = pdb_1428d3770;
        break;
      case 7:
code_r0x0001428d18a4:
        plVar33 = *(longlong **)(pfVar38 + 0xb2);
        if (plVar33 == (longlong *)0x0) {
          plVar33 = *(longlong **)(pfVar38 + 0xb4);
        }
        uVar25 = *(undefined8 *)(pfVar38 + 0xae);
        lVar22 = plVar33[2];
        if ((ulonglong)(*plVar33 - lVar22) < 0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          puVar36[4] = 1;
          puVar36[-1] = 0x1428d1c5b;
          auVar50._0_8_ = pdb_142d7f1b0(plVar33,lVar22,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_06;
        }
        lVar52 = plVar33[1];
        pcVar31 = pdb_1428d3b20;
        break;
      case 8:
        plVar34 = *(longlong **)(pfVar38 + 0xb2);
        if (plVar34 == (longlong *)0x0) {
          plVar34 = *(longlong **)(pfVar38 + 0xb4);
        }
        pauVar26 = *(undefined1 (**) [16])(pfVar38 + 0xae);
        uVar46 = plVar34[2];
        pauVar24 = (undefined1 (*) [16])(*plVar34 - uVar46);
code_r0x0001428d1a7a:
        pbVar23 = (byte *)((longlong)pfVar38 + -0x75);
        bVar2 = *pbVar23;
        bVar20 = (byte)pcVar31;
        *pbVar23 = *pbVar23 + bVar20;
        *(code *)((longlong)pfVar38 + (longlong)(pcVar31 + unaff_GS_OFFSET + -0x20)) =
             (code)((char)*(code *)((longlong)pfVar38 +
                                   (longlong)(pcVar31 + unaff_GS_OFFSET + -0x20)) + bVar20 +
                   CARRY1(bVar2,bVar20));
        if (pauVar24 < (undefined1 (*) [16])0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          puVar36[4] = 1;
          puVar36[-1] = 0x1428d1d96;
          auVar50._0_8_ = pdb_142d7f1b0(plVar34,uVar46,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_13;
        }
        uVar39 = plVar34[1];
        pcVar31 = pdb_1428d36d0;
        goto code_r0x0001428d1a97;
      case 9:
code_r0x0001428d17a1:
        plVar33 = *(longlong **)(pfVar38 + 0xb2);
        if (plVar33 == (longlong *)0x0) {
          plVar33 = *(longlong **)(pfVar38 + 0xb4);
        }
        uVar25 = *(undefined8 *)(pfVar38 + 0xae);
        lVar22 = plVar33[2];
        if ((ulonglong)(*plVar33 - lVar22) < 0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          puVar36[4] = 1;
          puVar36[-1] = 0x1428d1bd4;
          auVar50._0_8_ = pdb_142d7f1b0(plVar33,lVar22,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_03;
        }
        lVar52 = plVar33[1];
        pcVar31 = pdb_1428d39e0;
        break;
      case 10:
        plVar34 = *(longlong **)(pfVar38 + 0xb2);
        if (plVar34 == (longlong *)0x0) {
          plVar34 = *(longlong **)(pfVar38 + 0xb4);
        }
        uVar25 = *(undefined8 *)(pfVar38 + 0xae);
        uVar46 = plVar34[2];
        if (*plVar34 - uVar46 < 0x20) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          puVar36[4] = 1;
          puVar36[-1] = 0x1428d1c2e;
          auVar50._0_8_ = pdb_142d7f1b0(plVar34,uVar46,0x20,1);
          auVar50._8_8_ = extraout_XMM0_Qb_05;
        }
        pauVar24 = (undefined1 (*) [16])plVar34[1];
        *(code **)(*pauVar24 + uVar46) = pdb_1428d3b70;
        *(undefined8 *)(*pauVar24 + uVar46 + 8) = uVar25;
        pauVar24[1][uVar46] = bVar2;
code_r0x0001428d1866:
        pauVar24[1][uVar46 + 1] = *(byte *)((longlong)pfVar38 + 0x2f6);
        *(undefined2 *)(pauVar24[1] + uVar46 + 2) = *(undefined2 *)((longlong)pfVar38 + 0x2b6);
        *(float *)(pauVar24[1] + uVar46 + 4) = pfVar38[0xb9];
        *(float *)(pauVar24[1] + uVar46 + 8) = pfVar38[0xa6];
        pauVar24[1][uVar46 + 0xc] = 0;
        lVar22 = uVar46 + 0x20;
        goto code_r0x0001428d1ab6;
      case 0xb:
        plVar33 = *(longlong **)(pfVar38 + 0xb2);
        if (plVar33 == (longlong *)0x0) {
          plVar33 = *(longlong **)(pfVar38 + 0xb4);
        }
        pauVar26 = *(undefined1 (**) [16])(pfVar38 + 0xae);
code_r0x0001428d19e1:
        lVar22 = plVar33[2];
        if ((ulonglong)(*plVar33 - lVar22) < 0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          puVar36[4] = 1;
          puVar36[-1] = 0x1428d1d3c;
          auVar50._0_8_ = pdb_142d7f1b0(plVar33,lVar22,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_11;
        }
        lVar52 = plVar33[1];
        pcVar31 = pdb_1428d3a30;
        goto code_r0x0001428d1a00;
      case 0xc:
        plVar34 = *(longlong **)(pfVar38 + 0xb2);
code_r0x0001428d1769:
        if (plVar34 == (longlong *)0x0) {
          plVar34 = *(longlong **)(pfVar38 + 0xb4);
        }
        pauVar26 = *(undefined1 (**) [16])(pfVar38 + 0xae);
        uVar46 = plVar34[2];
        if (*plVar34 - uVar46 < 0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          *(undefined8 *)((longlong)puVar36 + 0x20) = 1;
          *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d1ba7;
          auVar50._0_8_ = pdb_142d7f1b0(plVar34,uVar46,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_02;
        }
        uVar39 = plVar34[1];
        pcVar31 = pdb_1428d32e0;
code_r0x0001428d1a97:
        *(code **)(uVar39 + uVar46) = pcVar31;
        *(undefined1 (**) [16])(uVar39 + 8 + uVar46) = pauVar26;
        *(undefined1 *)(uVar39 + 0x10 + uVar46) = 0;
        *(undefined1 *)(uVar39 + 0x11 + uVar46) = *(undefined1 *)((longlong)pfVar38 + 0x2f6);
        lVar22 = uVar46 + 0x18;
code_r0x0001428d1ab6:
        plVar34[2] = lVar22;
code_r0x0001428d1aba:
        pauVar26 = *(undefined1 (**) [16])(pfVar38 + 0xae);
        lVar22 = *(longlong *)(pfVar38 + 0x9a);
        if (lVar22 == *(longlong *)(pfVar38 + 0x96)) goto code_r0x0001428d1b3e;
        goto code_r0x0001428d1b52;
      case 0xf:
code_r0x0001428d18e2:
        plVar33 = *(longlong **)(pfVar38 + 0xb2);
        if (plVar33 == (longlong *)0x0) {
          plVar33 = *(longlong **)(pfVar38 + 0xb4);
        }
        pauVar26 = *(undefined1 (**) [16])(pfVar38 + 0xae);
        lVar22 = plVar33[2];
        if ((ulonglong)(*plVar33 - lVar22) < 0x18) {
          *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
          puVar36[4] = 1;
          puVar36[-1] = 0x1428d1c88;
          auVar50._0_8_ = pdb_142d7f1b0(plVar33,lVar22,0x18,1);
          auVar50._8_8_ = extraout_XMM0_Qb_07;
        }
        lVar52 = plVar33[1];
        pcVar31 = pdb_1428d38a0;
code_r0x0001428d1a00:
        *(code **)(lVar52 + lVar22) = pcVar31;
        *(undefined1 (**) [16])(lVar52 + 8 + lVar22) = pauVar26;
        *(float *)(lVar52 + 0x10 + lVar22) = pfVar38[0xb9];
        *(undefined1 *)(lVar52 + 0x14 + lVar22) = 0;
        goto code_r0x0001428d1b1f;
      case 0x10:
        puVar36[-1] = (ulonglong)pfVar38;
        pcVar31 = (code *)swi(3);
        pauVar26 = (undefined1 (*) [16])(*pcVar31)();
        return pauVar26;
      case 0x11:
        (&UNK_1435afce1)[*(int *)(&UNK_1435afd28 + uVar46 * 4)] =
             (&UNK_1435afce1)[*(int *)(&UNK_1435afd28 + uVar46 * 4)] + '(';
        pbVar42 = pbVar41 + 1;
        bVar20 = in((short)uVar25);
        *pbVar41 = bVar20;
        goto code_r0x0001428d295e;
      case 0x12:
        pcVar31 = (code *)swi(0);
        (*pcVar31)(&UNK_1435afd28,(ulonglong)puVar36 & 0xffffffff);
        puVar36 = puVar36 + 1;
code_r0x0001428d28fa:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((ulonglong)pbVar41 & 0xff) {
        case 0:
          pbVar42 = (byte *)0x14;
          *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d2922;
          pauVar24 = (undefined1 (*) [16])pub_1406abab0(0x14,1);
          if (pauVar24 == (undefined1 (*) [16])0x0) goto code_r0x0001428d2a1a;
          auVar50._1_15_ = _UNK_1435afb70;
          auVar50[0] = UNK_1435afb6f;
code_r0x0001428d2932:
          *pauVar24 = auVar50;
          *(byte *)((longlong)(pauVar24 + 1) + 0) = 0x6e;
          *(byte *)((longlong)(pauVar24 + 1) + 1) = 0x67;
          *(byte *)((longlong)(pauVar24 + 1) + 2) = 0x5f;
          *(byte *)((longlong)(pauVar24 + 1) + 3) = 0x31;
          goto code_r0x0001428d29d8;
        case 1:
          *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d29bb;
          pauVar24 = (undefined1 (*) [16])pub_1406abab0(0x17,1);
          uVar32 = _UNK_1435afc35;
          if (pauVar24 != (undefined1 (*) [16])0x0) {
            *(undefined8 *)*pauVar24 = _UNK_1435afc2d;
            *(undefined8 *)(*pauVar24 + 8) = uVar32;
            uVar32 = 0x726569705f676e69;
code_r0x0001428d29d4:
            pbVar42 = (byte *)0x17;
            *(undefined8 *)(*pauVar24 + 0xf) = uVar32;
            goto code_r0x0001428d29d8;
          }
          break;
        case 2:
          pbVar42 = (byte *)0x16;
          pauVar40 = pauVar26;
          goto code_r0x0001428d2946;
        case 3:
          *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d298c;
          pauVar24 = (undefined1 (*) [16])pub_1406abab0(0x17,1);
          uVar32 = _UNK_1435afc62;
          if (pauVar24 != (undefined1 (*) [16])0x0) {
            *(undefined8 *)*pauVar24 = _UNK_1435afc5a;
            *(undefined8 *)(*pauVar24 + 8) = uVar32;
            uVar32 = 0x686769685f676e69;
            goto code_r0x0001428d29d4;
          }
        }
        *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d2a0b;
        pdb_142dc7e2a(1,0x17);
code_r0x0001428d2a0b:
        *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d2a1a;
        pdb_142dc7e2a(1,0x16);
code_r0x0001428d2a1a:
        *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d2a29;
        pdb_142dc7e2a(1,0x14);
        pcVar31 = (code *)swi(3);
        pauVar26 = (undefined1 (*) [16])(*pcVar31)();
        return pauVar26;
      case 0x13:
        pauVar40 = (undefined1 (*) [16])(*pauVar26 + 1);
        out((*pauVar26)[0],(short)uVar25);
        uVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        pcVar28 = (char *)(uVar39 & 0xffffffff);
        pbVar42 = (byte *)((ulonglong)pauVar24 & 0xffffffff);
        *pcVar28 = *pcVar28 + (char)pcVar28;
        pbVar42[0x16] = pbVar42[0x16];
code_r0x0001428d2946:
        *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d2955;
        pauVar24 = (undefined1 (*) [16])pub_1406abab0(0x16,1);
        pauVar26 = pauVar40;
        if (pauVar24 == (undefined1 (*) [16])0x0) goto code_r0x0001428d2a0b;
code_r0x0001428d295e:
        uVar32 = _UNK_1435afc4c;
        *(undefined8 *)*pauVar24 = _UNK_1435afc44;
        *(undefined8 *)(*pauVar24 + 8) = uVar32;
        *(byte *)((longlong)pauVar24 + 0xe) = 0x6c;
        *(byte *)((longlong)pauVar24 + 0xf) = 0x69;
        *(byte *)((longlong)(pauVar24 + 1) + 0) = 0x6e;
        *(byte *)((longlong)(pauVar24 + 1) + 1) = 0x67;
        *(byte *)((longlong)(pauVar24 + 1) + 2) = 0x5f;
        *(byte *)((longlong)(pauVar24 + 1) + 3) = 0x6c;
        *(byte *)((longlong)(pauVar24 + 1) + 4) = 0x6f;
        *(byte *)((longlong)(pauVar24 + 1) + 5) = 0x77;
code_r0x0001428d29d8:
        *(byte **)*pauVar26 = pbVar42;
        *(undefined1 (**) [16])(*pauVar26 + 8) = pauVar24;
        *(byte **)pauVar26[1] = pbVar42;
        *(undefined4 *)(pauVar26[2] + 4) = 0;
        pauVar26[1][8] = 0xf;
        pauVar26[1][9] = bVar2;
        return pauVar26;
      }
      *(code **)(lVar52 + lVar22) = pcVar31;
      *(undefined8 *)(lVar52 + 8 + lVar22) = uVar25;
      *(undefined1 *)(lVar52 + 0x10 + lVar22) = 0;
code_r0x0001428d1b1f:
      plVar33[2] = lVar22 + 0x18;
      pauVar26 = *(undefined1 (**) [16])(pfVar38 + 0xae);
      lVar22 = *(longlong *)(pfVar38 + 0x9a);
      if (lVar22 == *(longlong *)(pfVar38 + 0x96)) {
code_r0x0001428d1b3e:
        *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
        *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d1b51;
        auVar50._0_8_ = pdb_142db0920(pfVar38 + 0x96);
        auVar50._8_8_ = extraout_XMM0_Qb_01;
      }
code_r0x0001428d1b52:
      *(undefined1 (**) [16])(*(longlong *)(pfVar38 + 0x98) + lVar22 * 8) = pauVar26;
      *(longlong *)(pfVar38 + 0x9a) = lVar22 + 1;
      lVar22 = *(longlong *)(pfVar38 + 0x4c);
      if (lVar22 == *(longlong *)(pfVar38 + 0x48)) {
code_r0x0001428d1400:
        *(undefined1 *)((longlong)pfVar38 + 0x2f7) = 0;
        *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d1413;
        auVar50._0_8_ = pdb_142db0920(pfVar38 + 0x48);
        auVar50._8_8_ = extraout_XMM0_Qb;
      }
code_r0x0001428d1414:
      *(undefined1 (**) [16])(*(longlong *)(pfVar38 + 0x4a) + lVar22 * 8) = pauVar26;
      *(longlong *)(pfVar38 + 0x4c) = lVar22 + 1;
      lVar44 = lVar44 + 1;
      pbVar23 = (byte *)(*(longlong *)(pfVar38 + 0x9c) + -0x10);
      pfVar29 = *(float **)(pfVar38 + 0xa0);
      lVar22 = *(longlong *)(pfVar38 + 0x9e) + -0x28;
      puVar13 = puVar47;
      if (lVar22 == 0) break;
    }
  }
  if (*(ulonglong **)(pfVar38 + 0x86) != puVar47) {
    uVar39 = (ulonglong)((longlong)*(ulonglong **)(pfVar38 + 0x86) - (longlong)puVar47) / 0x28;
    puVar47 = puVar47 + 1;
    do {
      uVar46 = puVar47[-1];
      if (uVar46 != 0) {
        pbVar23 = (byte *)*puVar47;
        *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d1e30;
        pub_1406abac0(pbVar23,uVar46,1);
      }
      puVar47 = puVar47 + 5;
      uVar39 = uVar39 - 1;
    } while (uVar39 != 0);
  }
  lVar44 = *(longlong *)(pfVar38 + 0x84);
  if (lVar44 != 0) {
    pbVar23 = *(byte **)(pfVar38 + 0x94);
    *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d1e58;
    pub_1406abac0(pbVar23,lVar44 * 0x28,8);
  }
  lVar44 = *(longlong *)(pfVar38 + 0x82);
  pauVar26 = *(undefined1 (**) [16])(pfVar38 + 0x80);
  if (lVar44 != 0) {
    pbVar23 = *(byte **)(pfVar38 + 0xa4);
    *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d1e81;
    pub_1406abac0(pbVar23,lVar44 << 4,4);
  }
  *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d1e9a;
  pub_142e32760(pfVar38 + -0xe,pfVar38 + 0x44,0xd8);
  *(undefined1 *)((longlong)pfVar38 + 0x2e9) = 0;
  uVar32 = *(undefined8 *)(pfVar38 + 0x10a);
  *(undefined8 *)((longlong)puVar36 + -8) = 0x1428d1ebe;
  pdb_1428d54f0(pfVar38 + 0x2e,uVar32,pfVar38 + -0xe,&UNK_1435afb08);
  uVar32 = *(undefined8 *)(pfVar38 + 0x2e);
  *(undefined8 *)pauVar26[1] = *(undefined8 *)(pfVar38 + 0x9a);
  uVar25 = *(undefined8 *)(pfVar38 + 0x98);
  *(undefined8 *)*pauVar26 = *(undefined8 *)(pfVar38 + 0x96);
  *(undefined8 *)(*pauVar26 + 8) = uVar25;
  *(undefined8 *)(pauVar26[1] + 8) = uVar32;
  return pauVar26;
}

