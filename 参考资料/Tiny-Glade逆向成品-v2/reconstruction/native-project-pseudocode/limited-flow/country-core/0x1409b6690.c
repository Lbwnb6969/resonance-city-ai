// VA 0x1409b6690, PDB extent 9096 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::gpu_generate_draw_lists
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001409bba6d) overlaps instruction at (ram,0x0001409bba6a)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::gpu_generate_draw_lists
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 9096 */

code *******
pdb_1409b6690(code *******param_1,longlong param_2,ulonglong *param_3,int param_4,int param_5,
             byte param_6,undefined1 param_7)

{
  char *pcVar1;
  longlong *plVar2;
  code *******pppppppcVar3;
  code *******pppppppcVar4;
  undefined2 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulonglong uVar14;
  int *piVar15;
  code ******ppppppcVar16;
  undefined8 *puVar17;
  code *******pppppppcVar18;
  code ******ppppppcVar19;
  char cVar20;
  uint uVar21;
  code *******pppppppcVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  uint uVar25;
  char cVar27;
  code *******pppppppcVar26;
  code *******pppppppcVar28;
  ulonglong *puVar29;
  code *******pppppppcVar30;
  int iVar31;
  code *******pppppppcVar32;
  code *******pppppppcVar33;
  ulonglong uVar34;
  code ******ppppppcVar35;
  undefined *puVar36;
  longlong lVar37;
  undefined7 uVar38;
  ushort uVar39;
  ulonglong uVar40;
  code *******pppppppcVar41;
  code ******ppppppcVar42;
  code *pcVar43;
  code *******in_MM2;
  code *******pppppppcVar44;
  code *******extraout_XMM0_Qb;
  code *******extraout_XMM0_Qb_00;
  code *******pppppppcVar45;
  code *******extraout_XMM0_Qb_01;
  code *******extraout_XMM0_Qb_02;
  code *******extraout_XMM0_Qb_03;
  code *******extraout_XMM0_Qb_04;
  code *******extraout_XMM0_Qb_05;
  code *******extraout_XMM0_Qb_06;
  code *******pppppppcVar46;
  code *******pppppppcVar47;
  code *******pppppppcVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  char acStack_5d3 [27];
  code ******ppppppcStack_5b8;
  code ******ppppppcStack_5b0;
  code ******ppppppcStack_5a8;
  code ******ppppppcStack_5a0;
  code ******ppppppcStack_598;
  code ******ppppppcStack_590;
  undefined4 uStack_588;
  undefined4 uStack_584;
  code ******ppppppcStack_580;
  undefined1 auStack_578 [8];
  undefined4 *puStack_570;
  undefined8 uStack_568;
  code *****pppppcStack_560;
  undefined8 uStack_558;
  undefined1 auStack_550 [8];
  undefined8 uStack_548;
  code ******ppppppcStack_540;
  code ******ppppppcStack_538;
  code *****pppppcStack_530;
  undefined1 auStack_528 [8];
  code ******ppppppcStack_520;
  code ******ppppppcStack_518;
  code ******ppppppcStack_510;
  code ******ppppppcStack_508;
  undefined8 uStack_500;
  code ******ppppppcStack_4f8;
  undefined4 *puStack_4f0;
  undefined8 auStack_4e8 [2];
  undefined1 auStack_4d4 [20];
  code *****apppppcStack_4c0 [2];
  undefined4 uStack_4ac;
  undefined1 uStack_4a8;
  code ******ppppppcStack_4a4;
  uint uStack_49c;
  undefined8 uStack_498;
  code ******ppppppcStack_490;
  code ******ppppppcStack_488;
  code ******ppppppcStack_480;
  code ******ppppppcStack_478;
  code ******ppppppcStack_470;
  code ******ppppppcStack_468;
  code ******ppppppcStack_460;
  undefined4 *puStack_458;
  undefined8 uStack_450;
  code *****pppppcStack_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  ulonglong uStack_438;
  int iStack_430;
  int iStack_42c;
  undefined8 uStack_428;
  code ******ppppppcStack_420;
  uint uStack_418;
  undefined4 uStack_414;
  code ******ppppppcStack_410;
  code ******ppppppcStack_408;
  code ******ppppppcStack_400;
  code ******ppppppcStack_3f8;
  code ******ppppppcStack_3f0;
  code ******ppppppcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  code *****pppppcStack_3c8;
  undefined8 uStack_3c0;
  ulonglong uStack_3b8;
  undefined8 uStack_3b0;
  code ******ppppppcStack_3a8;
  code ******ppppppcStack_3a0;
  code *****pppppcStack_398;
  code ******ppppppcStack_390;
  code ******ppppppcStack_388;
  code ******ppppppcStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 *puStack_368;
  code ******ppppppcStack_360;
  undefined1 *puStack_358;
  code ******ppppppcStack_350;
  code ******ppppppcStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined8 uStack_334;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  uint uStack_324;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 uStack_308;
  undefined8 uStack_304;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  code ******ppppppcStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined6 uStack_2d0;
  undefined2 uStack_2ca;
  undefined6 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  code ******ppppppcStack_2ac;
  code ******ppppppcStack_2a4;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  code ******ppppppcStack_290;
  uint uStack_288;
  code ****ppppcStack_284;
  undefined8 uStack_27c;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined8 uStack_238;
  code ******ppppppcStack_230;
  undefined8 uStack_228;
  code ******ppppppcStack_220;
  code ******ppppppcStack_218;
  code ******ppppppcStack_210;
  code ******ppppppcStack_208;
  undefined4 *puStack_200;
  undefined4 *puStack_1f8;
  uint *puStack_1f0;
  undefined8 *puStack_1e8;
  longlong lStack_1e0;
  ulonglong uStack_1d8;
  undefined8 uStack_1d0;
  code ******ppppppcStack_1c0;
  code ******ppppppcStack_1b8;
  ulonglong uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined4 uStack_19e;
  undefined1 uStack_19a;
  undefined1 uStack_199;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  code ******ppppppcStack_180;
  code ******ppppppcStack_178;
  code ******ppppppcStack_170;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  uint uStack_154;
  undefined4 uStack_150;
  ulonglong uStack_148;
  int iStack_140;
  int iStack_13c;
  code ******ppppppcStack_120;
  code ******ppppppcStack_118;
  code ******ppppppcStack_110;
  code ******ppppppcStack_108;
  code ******ppppppcStack_100;
  code ******ppppppcStack_f8;
  code ******ppppppcStack_f0;
  undefined4 *puStack_e8;
  undefined4 *puStack_e0;
  uint *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  int iStack_b8;
  int iStack_b4;
  code *****pppppcStack_b0;
  code ******ppppppcStack_a8;
  code ******ppppppcStack_a0;
  code ******ppppppcStack_98;
  ulonglong *puStack_90;
  int iStack_84;
  code ******ppppppcStack_80;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  iStack_84 = param_4;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    pppppppcVar18 = (code *******)(ulonglong)param_6;
    lVar11 = *(longlong *)(param_2 + 0x70);
    uVar34 = 0x10a3366b2ce2bcb7;
    lVar37 = 0;
    while( true ) {
      uVar34 = uVar34 & *(ulonglong *)(param_2 + 0x78);
      pcVar13 = (char *)(lVar11 + uVar34);
      auVar51[0] = -(*pcVar13 == DAT_142e33df0);
      auVar51[1] = -(pcVar13[1] == DAT_142e33df0._1_1_);
      auVar51[2] = -(pcVar13[2] == DAT_142e33df0._2_1_);
      auVar51[3] = -(pcVar13[3] == DAT_142e33df0._3_1_);
      auVar51[4] = -(pcVar13[4] == DAT_142e33df0._4_1_);
      auVar51[5] = -(pcVar13[5] == DAT_142e33df0._5_1_);
      auVar51[6] = -(pcVar13[6] == DAT_142e33df0._6_1_);
      auVar51[7] = -(pcVar13[7] == DAT_142e33df0._7_1_);
      auVar51[8] = -(pcVar13[8] == DAT_142e33df0._8_1_);
      auVar51[9] = -(pcVar13[9] == DAT_142e33df0._9_1_);
      auVar51[10] = -(pcVar13[10] == DAT_142e33df0._10_1_);
      auVar51[0xb] = -(pcVar13[0xb] == DAT_142e33df0._11_1_);
      auVar51[0xc] = -(pcVar13[0xc] == DAT_142e33df0._12_1_);
      auVar51[0xd] = -(pcVar13[0xd] == DAT_142e33df0._13_1_);
      auVar51[0xe] = -(pcVar13[0xe] == DAT_142e33df0._14_1_);
      auVar51[0xf] = -(pcVar13[0xf] == DAT_142e33df0._15_1_);
      uVar39 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf;
      uVar21 = (uint)uVar39;
      while (uVar39 != 0) {
        uVar10 = 0;
        for (uVar25 = uVar21; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar40 = uVar10 + uVar34 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar11 + -0x18 + uVar40 * -0x18);
        auVar52[0] = -(*pcVar1 == DAT_142e34190);
        auVar52[1] = -(pcVar1[1] == DAT_142e34190._1_1_);
        auVar52[2] = -(pcVar1[2] == DAT_142e34190._2_1_);
        auVar52[3] = -(pcVar1[3] == DAT_142e34190._3_1_);
        auVar52[4] = -(pcVar1[4] == DAT_142e34190._4_1_);
        auVar52[5] = -(pcVar1[5] == DAT_142e34190._5_1_);
        auVar52[6] = -(pcVar1[6] == DAT_142e34190._6_1_);
        auVar52[7] = -(pcVar1[7] == DAT_142e34190._7_1_);
        auVar52[8] = -(pcVar1[8] == DAT_142e34190._8_1_);
        auVar52[9] = -(pcVar1[9] == DAT_142e34190._9_1_);
        auVar52[10] = -(pcVar1[10] == DAT_142e34190._10_1_);
        auVar52[0xb] = -(pcVar1[0xb] == DAT_142e34190._11_1_);
        auVar52[0xc] = -(pcVar1[0xc] == DAT_142e34190._12_1_);
        auVar52[0xd] = -(pcVar1[0xd] == DAT_142e34190._13_1_);
        auVar52[0xe] = -(pcVar1[0xe] == DAT_142e34190._14_1_);
        auVar52[0xf] = -(pcVar1[0xf] == DAT_142e34190._15_1_);
        if ((ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
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
                    (ushort)(auVar52[0xf] >> 7) << 0xf) == 0xffff) {
          uVar34 = *(ulonglong *)(lVar11 + uVar40 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar34) ||
             (uVar34 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar34 * 8), uVar34 == 0))
          goto LAB_1409b6c35;
          lVar11 = ~uVar34 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar11) == 0)
          goto LAB_1409b6c35;
          lVar11 = *(longlong *)(param_2 + 0x1d8) + lVar11;
          ppppppcStack_98 = *(code *******)(lVar11 + 0x10);
          *(undefined4 *)(lVar11 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409b6c41;
          lVar11 = *(longlong *)(param_2 + 0x70);
          uVar34 = 0x1d6a82b468dfb8a2;
          lVar37 = 0;
          goto LAB_1409b6820;
        }
        uVar39 = (ushort)(uVar21 - 1) & (ushort)uVar21;
        uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar39);
      }
      auVar49[0] = -(*pcVar13 == -1);
      auVar49[1] = -(pcVar13[1] == -1);
      auVar49[2] = -(pcVar13[2] == -1);
      auVar49[3] = -(pcVar13[3] == -1);
      auVar49[4] = -(pcVar13[4] == -1);
      auVar49[5] = -(pcVar13[5] == -1);
      auVar49[6] = -(pcVar13[6] == -1);
      auVar49[7] = -(pcVar13[7] == -1);
      auVar49[8] = -(pcVar13[8] == -1);
      auVar49[9] = -(pcVar13[9] == -1);
      auVar49[10] = -(pcVar13[10] == -1);
      auVar49[0xb] = -(pcVar13[0xb] == -1);
      auVar49[0xc] = -(pcVar13[0xc] == -1);
      auVar49[0xd] = -(pcVar13[0xd] == -1);
      auVar49[0xe] = -(pcVar13[0xe] == -1);
      auVar49[0xf] = -(pcVar13[0xf] == -1);
      if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 || (SUB161(auVar49 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar49 >> 0x17,0) & 1) != 0) || (SUB161(auVar49 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar49 >> 0x27,0) & 1) != 0) || (SUB161(auVar49 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar49 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar49 >> 0x3f,0) & 1) != 0) || (SUB161(auVar49 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar49 >> 0x4f,0) & 1) != 0) || (SUB161(auVar49 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar49 >> 0x5f,0) & 1) != 0) || (SUB161(auVar49 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar49 >> 0x6f,0) & 1) != 0) || (SUB161(auVar49 >> 0x77,0) & 1) != 0) ||
          auVar49[0xf] < '\0') break;
      uVar34 = uVar34 + lVar37 + 0x10;
      lVar37 = lVar37 + 0x10;
    }
  }
LAB_1409b6c35:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14302ac88);
LAB_1409b6820:
  uVar34 = uVar34 & *(ulonglong *)(param_2 + 0x78);
  auVar51 = *(undefined1 (*) [16])(lVar11 + uVar34);
  auVar53[0] = -(auVar51[0] == DAT_142e34ec0);
  auVar53[1] = -(auVar51[1] == DAT_142e34ec0._1_1_);
  auVar53[2] = -(auVar51[2] == DAT_142e34ec0._2_1_);
  auVar53[3] = -(auVar51[3] == DAT_142e34ec0._3_1_);
  auVar53[4] = -(auVar51[4] == DAT_142e34ec0._4_1_);
  auVar53[5] = -(auVar51[5] == DAT_142e34ec0._5_1_);
  auVar53[6] = -(auVar51[6] == DAT_142e34ec0._6_1_);
  auVar53[7] = -(auVar51[7] == DAT_142e34ec0._7_1_);
  auVar53[8] = -(auVar51[8] == DAT_142e34ec0._8_1_);
  auVar53[9] = -(auVar51[9] == DAT_142e34ec0._9_1_);
  auVar53[10] = -(auVar51[10] == DAT_142e34ec0._10_1_);
  auVar53[0xb] = -(auVar51[0xb] == DAT_142e34ec0._11_1_);
  auVar53[0xc] = -(auVar51[0xc] == DAT_142e34ec0._12_1_);
  auVar53[0xd] = -(auVar51[0xd] == DAT_142e34ec0._13_1_);
  auVar53[0xe] = -(auVar51[0xe] == DAT_142e34ec0._14_1_);
  auVar53[0xf] = -(auVar51[0xf] == DAT_142e34ec0._15_1_);
  uVar39 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe | (ushort)(auVar53[0xf] >> 7) << 0xf;
  uVar21 = (uint)uVar39;
  if (uVar39 != 0) {
    while( true ) {
      uVar10 = 0;
      for (uVar25 = uVar21; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      uVar40 = uVar10 + uVar34 & *(ulonglong *)(param_2 + 0x78);
      pcVar13 = (char *)(lVar11 + -0x18 + uVar40 * -0x18);
      auVar54[0] = -(*pcVar13 == DAT_142e60e60);
      auVar54[1] = -(pcVar13[1] == DAT_142e60e60._1_1_);
      auVar54[2] = -(pcVar13[2] == DAT_142e60e60._2_1_);
      auVar54[3] = -(pcVar13[3] == DAT_142e60e60._3_1_);
      auVar54[4] = -(pcVar13[4] == DAT_142e60e60._4_1_);
      auVar54[5] = -(pcVar13[5] == DAT_142e60e60._5_1_);
      auVar54[6] = -(pcVar13[6] == DAT_142e60e60._6_1_);
      auVar54[7] = -(pcVar13[7] == DAT_142e60e60._7_1_);
      auVar54[8] = -(pcVar13[8] == DAT_142e60e60._8_1_);
      auVar54[9] = -(pcVar13[9] == DAT_142e60e60._9_1_);
      auVar54[10] = -(pcVar13[10] == DAT_142e60e60._10_1_);
      auVar54[0xb] = -(pcVar13[0xb] == DAT_142e60e60._11_1_);
      auVar54[0xc] = -(pcVar13[0xc] == DAT_142e60e60._12_1_);
      auVar54[0xd] = -(pcVar13[0xd] == DAT_142e60e60._13_1_);
      auVar54[0xe] = -(pcVar13[0xe] == DAT_142e60e60._14_1_);
      auVar54[0xf] = -(pcVar13[0xf] == DAT_142e60e60._15_1_);
      if ((ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar54[0xf] >> 7) << 0xf) == 0xffff) break;
      uVar39 = (ushort)(uVar21 - 1) & (ushort)uVar21;
      uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar39);
      if (uVar39 == 0) goto LAB_1409b6880;
    }
    uVar34 = *(ulonglong *)(lVar11 + uVar40 * -0x18 + -8);
    if ((*(ulonglong *)(param_2 + 0x210) <= uVar34) ||
       (uVar34 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar34 * 8), uVar34 == 0))
    goto LAB_1409b6c41;
    lVar11 = ~uVar34 * 0x40;
    if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar11) == 0) goto LAB_1409b6c41;
    ppppppcStack_a8 = *(code *******)(*(longlong *)(param_2 + 0x1d8) + lVar11 + 0x10);
    pdb_140a92070(auStack_578 + 4,param_1);
    ppppppcVar35 = ppppppcStack_98;
    ppppppcStack_5b8 = (code ******)&UNK_143330ab0;
    ppppppcStack_80 = (code ******)param_1;
    pdb_140e1e500(&ppppppcStack_348,ppppppcStack_98[3],param_1,0x36);
    ppppppcVar16 = (code ******)ppppppcVar35[4];
    ppppppcStack_5b8 = (code ******)&UNK_143330ab0;
    pdb_140e1e500(&uStack_428,ppppppcVar16,ppppppcStack_80,0x36);
    uVar23 = SUB81(ppppppcVar16,0);
    uVar7 = pdb_140e25e40(0x88000);
    uStack_1a8._0_2_ = 1;
    uStack_198._0_4_ = 0x4302acb8;
    uStack_198._4_4_ = 1;
    uStack_190._0_4_ = 0x1b;
    uStack_190._4_4_ = 0;
    uVar24 = SUB81(&uStack_1a8,0);
    uStack_1a8._4_4_ = uVar7;
    uStack_1a0 = uVar23;
    uVar8 = pdb_140e2b4e0(ppppppcStack_80);
    uVar9 = pdb_140e25e40((ulonglong)*(uint *)(ppppppcVar35[6] + 0xe) << 2);
    uStack_1a8._0_2_ = 1;
    uStack_198._0_4_ = 0x4302acd3;
    uStack_198._4_4_ = 1;
    uStack_190._0_4_ = 0x1b;
    uStack_190._4_4_ = 0;
    uStack_1a8._4_4_ = uVar9;
    uStack_1a0 = uVar24;
    puStack_90 = param_3;
    uStack_2fc = pdb_140e2b4e0(ppppppcStack_80,&uStack_1a8);
    uStack_324 = uStack_418;
    uStack_334._0_4_ = SUB84(uStack_428,0);
    uStack_334._4_4_ = (undefined4)((ulonglong)uStack_428 >> 0x20);
    uStack_32c = SUB84(ppppppcStack_420,0);
    uStack_328 = (undefined4)((ulonglong)ppppppcStack_420 >> 0x20);
    uStack_320._0_5_ = CONCAT14(uVar23,uVar7);
    uStack_318 = 0xffffffff00000000;
    uStack_304 = 0xffffffff00000000;
    pppppcStack_398 = (code *****)(auStack_578 + 4);
    ppppppcStack_390 = &pppppcStack_560;
    ppppppcStack_388 = (code ******)(auStack_550 + 4);
    ppppppcStack_380 = (code ******)&ppppppcStack_538;
    uStack_378 = (code *******)(auStack_528 + 4);
    uStack_370 = &ppppppcStack_510;
    puStack_368 = (undefined8 *)((longlong)&uStack_500 + 4);
    ppppppcStack_360 = (code ******)auStack_4e8;
    puStack_358 = auStack_4d4;
    ppppppcStack_350 = apppppcStack_4c0;
    uStack_310 = uVar8;
    uStack_30c = uVar9;
    uStack_308 = uVar24;
    pdb_1418c2590(ppppppcStack_80,&pppppcStack_398,pppppppcVar18,param_7);
    uStack_238 = (code *******)0x0;
    ppppppcStack_230 = (code ******)0x8;
    uStack_228 = (code *******)0x0;
    uVar12 = pdb_14177be60(ppppppcStack_80[0x41],&UNK_143331979,0x26,&uStack_238);
    ppppppcStack_5b8 = ppppppcStack_80;
    pdb_140e291c0(&uStack_1a8,&UNK_143331979,0x26,uVar12);
    pdb_141787bc0(&uStack_428,&uStack_1a8,&uStack_320);
    pppppppcVar32 = (code *******)ppppppcStack_80;
    pub_142e32760(&uStack_1a8,&uStack_428,0x88);
    uStack_238 = (code *******)_DAT_14302a770;
    ppppppcStack_230 = (code ******)_UNK_14302a778;
    pdb_140e28810(&uStack_1a8,&uStack_238);
    iVar31 = iStack_84;
    pppppppcVar28 = &ppppppcStack_388;
    if (iStack_84 == 0) {
      pppppppcVar28 = &ppppppcStack_390;
    }
    pdb_140e29980(pppppppcVar32,*pppppppcVar28);
    ppppppcStack_5b8 = (code ******)CONCAT71(ppppppcStack_5b8._1_7_,param_7);
    pdb_1418c3cb0(pppppppcVar32,ppppppcVar35,&pppppcStack_398,param_6);
    ppppppcStack_1c0 = ppppppcStack_388;
    ppppppcStack_1b8 = ppppppcStack_390;
    if (iVar31 == 0) {
      ppppppcStack_1c0 = ppppppcStack_390;
      ppppppcStack_1b8 = ppppppcStack_388;
    }
    if (puStack_90 == (ulonglong *)0x0) {
      uStack_1a8._0_2_ = 0;
      uStack_1a8._2_2_ = 1;
      uStack_1a8._4_4_ = 0x10001;
      uStack_1a0 = 1;
      uStack_19f = 0;
      uStack_19e = 0x2012501;
      uStack_19a = 0;
      uStack_198._0_4_ = 0x4302abc8;
      uStack_198._4_4_ = 1;
      uStack_190._0_4_ = 0xb;
      uStack_190._4_4_ = 0;
      uStack_1a8._4_4_ = pdb_140e2b4e0(pppppppcVar32,&uStack_1a8);
      uStack_1a0 = 1;
      uStack_19f = 0;
      uStack_19e = 0x10001;
      uStack_19a = 1;
      uStack_199 = 0;
      uStack_198._0_4_ = 0x2012501;
      uStack_198._4_4_ = uStack_198._4_4_ & 0xffffff00;
      uStack_1a8._0_2_ = 0;
      uStack_1a8._2_2_ = 0;
      if (*(char *)((longlong)pppppppcVar32 + 0x24c) == '\x01') {
        pdb_140e19620(&uStack_1a8,pppppppcVar32);
      }
      uStack_2e8 = CONCAT44(uStack_198._4_4_,(uint)uStack_198);
      uStack_2f8 = (code *******)
                   CONCAT44(uStack_1a8._4_4_,CONCAT22(uStack_1a8._2_2_,(undefined2)uStack_1a8));
      ppppppcStack_2f0 =
           (code ******)
           CONCAT17(uStack_199,
                    CONCAT16(uStack_19a,CONCAT42(uStack_19e,CONCAT11(uStack_19f,uStack_1a0))));
      puVar29 = &uStack_2f8;
      uVar34 = 0x100000001;
    }
    else {
      uVar34 = *puStack_90;
      puVar29 = puStack_90 + 1;
    }
    uStack_2d8 = pdb_140e26030(0,3);
    uStack_2d4 = *(undefined4 *)((longlong)puVar29 + 4);
    uStack_2d0 = (undefined6)puVar29[1];
    uStack_2ca = (undefined2)(puVar29[1] >> 0x30);
    uStack_2ca = (undefined2)*(undefined8 *)((longlong)puVar29 + 0xe);
    uStack_2c8 = (undefined6)((ulonglong)*(undefined8 *)((longlong)puVar29 + 0xe) >> 0x10);
    ppppppcStack_420 = pppppppcVar32[0x3d];
    uStack_418 = uStack_418 & 0xffffff00;
    uStack_428 = (code *******)ppppppcStack_98;
    pdb_140afe430(&uStack_1a8,&uStack_428);
    pppppppcVar3 = (code *******)CONCAT44(uStack_198._4_4_,(uint)uStack_198);
    ppppppcStack_a0 =
         (code ******)CONCAT44(uStack_1a8._4_4_,CONCAT22(uStack_1a8._2_2_,(undefined2)uStack_1a8));
    uStack_1b0 = CONCAT17(uStack_199,
                          CONCAT16(uStack_19a,CONCAT42(uStack_19e,CONCAT11(uStack_19f,uStack_1a0))))
    ;
    pppppppcVar22 = (code *******)CONCAT44(uStack_190._4_4_,(undefined4)uStack_190);
    pppppcStack_b0 = (code *****)CONCAT44(uStack_188._4_4_,(undefined4)uStack_188);
    puStack_d8 = (uint *)0x0;
    puStack_d0 = (undefined8 *)0x0;
    uStack_c8 = (ulonglong)uStack_c8._4_4_ << 0x20;
    iStack_b8 = iStack_84;
    iStack_b4 = param_5;
    ppppppcStack_120 = (code ******)&ppppppcStack_348;
    ppppppcStack_110 = (code ******)uStack_378;
    ppppppcStack_118 = ppppppcStack_380;
    ppppppcStack_108 = (code ******)&uStack_30c;
    ppppppcStack_100 = (code ******)&uStack_320;
    ppppppcStack_f8 = ppppppcStack_1b8;
    ppppppcStack_f0 = ppppppcStack_1c0;
    puStack_e8 = (undefined4 *)&uStack_334;
    puStack_e0 = &uStack_2d8;
    uStack_71 = 1;
    ppppppcStack_3a0 = (code ******)pppppppcVar22;
    uStack_c0 = uVar34;
    puStack_90 = (ulonglong *)uVar34;
    pdb_14090d600(&uStack_498,&ppppppcStack_120);
    uStack_71 = 1;
    uVar12 = pdb_14177be60(pppppppcVar32[0x41],&UNK_143330cf9,0x26,&uStack_498);
    uStack_71 = 1;
    ppppppcStack_5b8 = (code ******)pppppppcVar32;
    pdb_140e291c0(&uStack_1a8,&UNK_143330cf9,0x26,uVar12);
    uStack_1d0 = CONCAT44(iStack_b4,iStack_b8);
    uStack_1d8 = uStack_c0;
    puStack_1e8 = puStack_d0;
    lStack_1e0 = uStack_c8;
    puStack_1f8 = puStack_e0;
    puStack_1f0 = puStack_d8;
    ppppppcStack_208 = ppppppcStack_f0;
    puStack_200 = puStack_e8;
    ppppppcStack_218 = ppppppcStack_100;
    ppppppcStack_210 = ppppppcStack_f8;
    uStack_228 = (code *******)ppppppcStack_110;
    ppppppcStack_220 = ppppppcStack_108;
    uStack_238 = (code *******)ppppppcStack_120;
    ppppppcStack_230 = ppppppcStack_118;
    uStack_71 = 1;
    pppppppcVar46 = (code *******)ppppppcStack_110;
    pppppppcVar28 = (code *******)ppppppcStack_108;
    pppppppcVar47 = (code *******)ppppppcStack_100;
    pppppppcVar48 = (code *******)ppppppcStack_f8;
    pdb_141794b40(&uStack_428,&uStack_1a8,&uStack_238);
    uStack_1a8._0_2_ = SUB82(ppppppcStack_a0,0);
    uStack_1a8._2_2_ = (undefined2)((ulonglong)ppppppcStack_a0 >> 0x10);
    uStack_1a8._4_4_ = (uint)((ulonglong)ppppppcStack_a0 >> 0x20);
    uStack_1a0 = (undefined1)uStack_1b0;
    uStack_19f = (undefined1)(uStack_1b0 >> 8);
    uStack_19e = (undefined4)(uStack_1b0 >> 0x10);
    uStack_19a = (undefined1)(uStack_1b0 >> 0x30);
    uStack_199 = (undefined1)(uStack_1b0 >> 0x38);
    ppppppcVar16 = (code ******)pppppcStack_b0;
    pppppppcVar30 = (code *******)ppppppcStack_180;
    uStack_190 = pppppppcVar22;
    uStack_198 = pppppppcVar3;
code_r0x0001409b6f9d:
    uStack_188._0_4_ = SUB84(ppppppcVar16,0);
    uStack_188._4_4_ = (undefined4)((ulonglong)ppppppcVar16 >> 0x20);
    uStack_71 = 0;
    pppppppcVar22 = (code *******)&uStack_428;
    ppppppcStack_180 = (code ******)pppppppcVar30;
    pppppppcVar44 = (code *******)pdb_141782c80(pppppppcVar22,&uStack_1a8);
    pppppppcVar4 = _UNK_142f5c818;
    pppppppcVar3 = _DAT_142f5c810;
    uStack_1b0 = (ulonglong)puStack_90 >> 0x20;
    uVar40 = 0;
    pppppppcVar41 = (code *******)0x0;
    uVar34 = 0;
    pppppppcVar26 = (code *******)ppppppcStack_98;
    puVar29 = puStack_90;
    pppppppcVar45 = extraout_XMM0_Qb;
    pppppppcVar30 = uStack_378;
LAB_1409b74cd:
    pppppppcVar33 = (code *******)ppppppcStack_380;
    pcVar13 = *(char **)((longlong)(pppppppcVar26 + 8) + (longlong)pppppppcVar41);
    if (pcVar13 != (char *)0x8000000000000001) {
code_r0x0001409b74d7:
      uStack_450 = 0;
      pppppcStack_448 = (code *****)0x0;
      uStack_440 = 0;
      iStack_430 = iStack_84;
      iStack_42c = param_5;
      uStack_498 = &ppppppcStack_348;
      ppppppcStack_490 = ppppppcStack_380;
      ppppppcStack_488 = (code ******)pppppppcVar30;
      ppppppcStack_480 = (code ******)&uStack_30c;
      ppppppcStack_478 = (code ******)&uStack_320;
      ppppppcStack_470 = ppppppcStack_1b8;
      ppppppcStack_468 = ppppppcStack_1c0;
      ppppppcStack_460 = (code ******)&uStack_334;
      puStack_458 = &uStack_2d8;
      uStack_438 = (ulonglong)puVar29;
      pcVar43 = (code *)ppppppcStack_380;
      uStack_378 = pppppppcVar30;
      if (!SBORROW8(0,(longlong)pcVar13)) {
        iVar31 = *(int *)(&UNK_14302b6dc + (uVar40 & 0xff) * 4);
        ppppppcVar16 = (code ******)(&UNK_14302b6dc + iVar31);
        pcVar43 = pdb_140b86f10;
        cVar6 = (char)ppppppcVar16;
        cVar20 = (char)pppppppcVar22;
        cVar27 = (char)((ulonglong)pppppppcVar26 >> 8);
        pppppppcVar32 = (code *******)ppppppcStack_380;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar40 & 0xff) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
        case 8:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x11:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x17:
          goto LAB_1409b74b6;
        case 6:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0x1c:
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14302ac29,0x28,&UNK_14302ac58);
        case 0x12:
          pcVar43 = pdb_140b86db0;
          uVar21 = *(uint *)((longlong)(pppppppcVar26 + 0x18) + (longlong)pppppppcVar41);
          break;
        case 0x16:
          pcVar43 = pdb_140b87490;
        case 0x10:
          uVar21 = *(uint *)((longlong)(pppppppcVar26 + 0x18) + (longlong)pppppppcVar41);
          break;
        case 0x18:
          pcVar43 = pdb_140b871d0;
          uVar21 = *(uint *)((longlong)(pppppppcVar26 + 0x18) + (longlong)pppppppcVar41);
          break;
        case 0x19:
          pcVar43 = pdb_140b875f0;
          uVar21 = *(uint *)((longlong)(pppppppcVar26 + 0x18) + (longlong)pppppppcVar41);
          break;
        case 0x1a:
          pcVar43 = pdb_140b87330;
          uVar21 = *(uint *)((longlong)(pppppppcVar26 + 0x18) + (longlong)pppppppcVar41);
          break;
        case 0x1b:
          pcVar43 = pdb_140b87070;
          uVar21 = *(uint *)((longlong)(pppppppcVar26 + 0x18) + (longlong)pppppppcVar41);
          break;
        default:
          goto code_r0x0001409b8838;
        case 0x23:
          goto code_r0x0001409b752a;
        case 0x26:
          ppppppcStack_218 = (code ******)in_MM2;
          goto code_r0x0001409b761d;
        case 0x27:
          acStack_5d3[(longlong)pppppppcVar22 * 4] =
               acStack_5d3[(longlong)pppppppcVar22 * 4] + cVar20;
          *(char *)ppppppcVar16 = *(char *)ppppppcVar16;
          *(char *)((longlong)pppppppcVar22 + -0x4f) =
               *(char *)((longlong)pppppppcVar22 + -0x4f) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x28:
          *(char *)((longlong)pppppppcVar22 + 0x36) =
               *(char *)((longlong)pppppppcVar22 + 0x36) + cVar27;
          pppppppcVar32 = pppppppcVar33;
          goto code_r0x0001409b758a;
        case 0x29:
          uVar34 = CONCAT71((int7)(uVar34 >> 8),(char)uVar34 + cVar27);
          goto code_r0x0001409b761d;
        case 0x39:
          goto code_r0x0001409b6f9d;
        case 0x3a:
          *(char *)(pppppppcVar22 + -9) = *(char *)(pppppppcVar22 + -9) + cVar6;
          *(char *)ppppppcVar16 = *(char *)ppppppcVar16 + cVar6;
          pdb_142d7f1b0(pppppppcVar44,pppppppcVar33,&uStack_498,1);
          ppppppcVar35 = pppppppcVar30[8];
          ppppppcVar16 = pppppppcVar30[7];
          *(int *)((longlong)ppppppcVar16 + (longlong)ppppppcVar35) = (int)&uStack_558;
          *(undefined4 *)((longlong)ppppppcVar16 + 4 + (longlong)ppppppcVar35) = 0;
          *(int *)((longlong)(ppppppcVar16 + 1) + (longlong)ppppppcVar35) = (int)pppppppcVar44;
          pppppppcVar30[8] = (code ******)((longlong)ppppppcVar35 + 0xc);
          *(byte *)((longlong)pppppppcVar30 + 0x28a) =
               *(byte *)((longlong)pppppppcVar30 + 0x28a) | 0x20;
          *(int *)(pppppppcVar30 + 0x1e) = (int)pppppppcVar33;
          pcVar13 = (char *)((longlong)pppppppcVar30 + 0xf4);
          pcVar13[0] = '\0';
          pcVar13[1] = '\0';
          pcVar13[2] = '\0';
          pcVar13[3] = '\0';
          pppppppcVar18 =
               (code *******)pdb_140e25490(pppppppcVar30,(ulonglong)&uStack_558 & 0xffffffff,0,1);
          return pppppppcVar18;
        case 0x3b:
          ppppppcStack_5b8 = (code ******)&uStack_2c0;
          ppppppcStack_5b0 = ppppppcVar16;
          ppppppcStack_5a8 = (code ******)pppppppcVar22;
          ppppppcStack_3f8 = (code ******)&uStack_2c0;
          ppppppcStack_3f0 = ppppppcVar16;
          ppppppcStack_350 = (code ******)&uStack_2c0;
          pdb_1409bd5e0(&ppppppcStack_5a0,pppppppcVar26,&uStack_498,0x19);
          pppppcStack_398 = pppppcStack_530;
          ppppppcStack_390 = (code ******)auStack_528;
          ppppppcStack_3a8 = ppppppcStack_540;
          ppppppcStack_3a0 = ppppppcStack_538;
          uStack_3b8 = (ulonglong)auStack_550;
          uStack_3b0 = uStack_548;
          pppppcStack_3c8 = pppppcStack_560;
          uStack_3c0 = uStack_558;
          pppppppcVar28 = (code *******)CONCAT44(uStack_584,uStack_588);
          uStack_3d8 = puStack_570;
          uStack_3d0 = uStack_568;
          ppppppcStack_3e8 = ppppppcStack_580;
          uStack_3e0 = (code *******)auStack_578;
          goto code_r0x0001409bbeb1;
        case 0x3c:
          pub_1406abac0((byte *)ppppppcStack_360,(ulonglong)(uint)((int)ppppppcVar16 << 2) * 3,4);
          pppppcStack_398 = (code *****)CONCAT44(uStack_414,uStack_418);
          ppppppcStack_390 = ppppppcStack_410;
          ppppppcStack_3a8 = (code ******)uStack_428;
          ppppppcStack_3a0 = ppppppcStack_420;
          uStack_3b0 = CONCAT44(iStack_42c,iStack_430);
          uStack_3b8 = uStack_438;
          uStack_3c0 = CONCAT44(uStack_43c,uStack_440);
          pppppcStack_3c8 = pppppcStack_448;
          uStack_3d8 = puStack_458;
          uStack_3d0 = uStack_450;
          pppppppcVar46 = (code *******)ppppppcStack_478;
          pppppppcVar28 = (code *******)ppppppcStack_470;
          pppppppcVar47 = (code *******)ppppppcStack_468;
          pppppppcVar48 = (code *******)ppppppcStack_460;
          pppppppcVar44 = (code *******)ppppppcStack_488;
          pppppppcVar45 = (code *******)ppppppcStack_480;
          goto code_r0x0001409bbc69;
        case 0x3d:
          *(char *)ppppppcVar16 = *(char *)ppppppcVar16 + cVar6;
          pcVar13 = (char *)((longlong)pppppppcVar22 * 5 + -0x73);
          *pcVar13 = *pcVar13 + cVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x3e:
          uStack_318 = CONCAT44(uStack_318._4_4_,(int)uStack_318 - (int)ppppppcVar16);
          goto code_r0x0001409bba73;
        case 0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pppppppcVar18 = (code *******)(ulonglong)uVar21;
        if (uVar21 != 0) {
          ppppppcStack_a0 = (code ******)ppppppcStack_80[0x3d][0xa4];
          pppppcStack_b0 = (code *****)ppppppcStack_80[0x3d][0xcb];
          puVar17 = (undefined8 *)
                    pdb_140e17330((char *)((longlong)pppppppcVar26 + (longlong)pppppppcVar41) + 0x88
                                 );
          uStack_1a8._0_2_ = 0x8321;
          uStack_1a8._2_2_ = 0x3b9e;
          uStack_1a0 = 0;
          uStack_19f = 0;
          uStack_19e = 0;
          uStack_19a = 0;
          uStack_199 = 0;
          uStack_198._0_4_ = (uint)*puVar17;
          uStack_198._4_4_ = (uint)((ulonglong)*puVar17 >> 0x20);
          uStack_160 = (*(code *)ppppppcStack_a0)(pppppcStack_b0,&uStack_1a8);
          iStack_140 = iStack_84;
          iStack_13c = param_5;
          uStack_158 = (undefined4)uVar40;
          uStack_1a8._0_2_ = SUB82(&ppppppcStack_348,0);
          uStack_1a8._2_2_ = (undefined2)((ulonglong)&ppppppcStack_348 >> 0x10);
          uStack_1a8._4_4_ = (uint)((ulonglong)&ppppppcStack_348 >> 0x20);
          uStack_1a0 = SUB81(pppppppcVar33,0);
          uStack_19f = (undefined1)((ulonglong)pppppppcVar33 >> 8);
          uStack_19e = (undefined4)((ulonglong)pppppppcVar33 >> 0x10);
          uStack_19a = (undefined1)((ulonglong)pppppppcVar33 >> 0x30);
          uStack_199 = (undefined1)((ulonglong)pppppppcVar33 >> 0x38);
          uStack_190 = (code *******)&uStack_30c;
          uStack_188 = &uStack_320;
          ppppppcStack_180 = ppppppcStack_1b8;
          ppppppcStack_178 = ppppppcStack_1c0;
          ppppppcStack_170 = (code ******)&uStack_334;
          puStack_168 = &uStack_2d8;
          uStack_148 = (ulonglong)puStack_90;
          uStack_154 = uVar21;
          uStack_150 = (int)uVar34;
          uStack_198 = pppppppcVar30;
          uVar12 = (**(code **)(*(longlong *)
                                 ((longlong)(ppppppcStack_98 + 0x17) + (longlong)pppppppcVar41) +
                               0x48))(*(undefined8 *)
                                       ((longlong)(ppppppcStack_98 + 0x16) + (longlong)pppppppcVar41
                                       ));
          pppppppcVar32 = (code *******)&uStack_1a8;
          (*pcVar43)(&uStack_428,ppppppcStack_80,pppppppcVar32,uVar12);
          pub_142e32760(pppppppcVar32,&uStack_428,0x88);
          ppppppcStack_230 = (code ******)0x100000001;
          uStack_238 = (code *******)CONCAT44(uVar21,1);
          pppppppcVar22 = pppppppcVar32;
          pppppppcVar44 = (code *******)pdb_140e28810(pppppppcVar32,&uStack_238);
          pppppppcVar26 = (code *******)ppppppcStack_98;
          puVar29 = puStack_90;
          pppppppcVar45 = extraout_XMM0_Qb_06;
          pppppppcVar30 = uStack_378;
        }
        goto LAB_1409b74b6;
      }
      goto code_r0x0001409b758a;
    }
    goto LAB_1409b74b6;
  }
  goto LAB_1409b6880;
code_r0x0001409b752a:
  *(char *)ppppppcVar16 = *(char *)ppppppcVar16 + cVar6;
  (&UNK_14302b669)[iVar31] = (&UNK_14302b669)[iVar31] + cVar20;
  (&UNK_14302b665)[iVar31] = (&UNK_14302b665)[iVar31] + cVar20;
  *(char *)ppppppcVar16 = *(char *)ppppppcVar16 + cVar6;
  (&UNK_14302b669)[iVar31] = (&UNK_14302b669)[iVar31] + cVar20;
  cVar27 = *(char *)ppppppcVar16;
  pcVar13 = (char *)CONCAT71((int7)((ulonglong)ppppppcVar16 >> 8),cVar6 + cVar27);
  pcVar13[-0x77] = pcVar13[-0x77] + cVar20;
  *pcVar13 = *pcVar13 + cVar6 + cVar27;
  pcVar13[-0x75] = pcVar13[-0x75] + cVar20;
  goto code_r0x0001409b74d7;
code_r0x0001409b758a:
  ppppppcVar35 = ppppppcStack_80;
  ppppppcVar16 = ppppppcStack_a8;
  uVar14 = (ulonglong)*(int *)(&UNK_14302b750 + (uVar40 & 0xff) * 4);
  piVar15 = (int *)(&UNK_14302b750 + uVar14);
  uVar38 = (undefined7)((ulonglong)&uStack_2c0 >> 8);
  iVar31 = (int)piVar15;
  pppppppcVar33 = pppppppcVar32;
  pppppppcVar22 = (code *******)ppppppcStack_80;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar40 & 0xff) {
  default:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14302ac29,0x28,&UNK_14302ac70);
  case 6:
    pppppppcVar44 =
         (code *******)pdb_1418c3650(ppppppcStack_80,ppppppcStack_a8,&uStack_498,CONCAT71(uVar38,6))
    ;
    pppppppcVar26 = (code *******)ppppppcStack_98;
    puVar29 = puStack_90;
    pppppppcVar45 = extraout_XMM0_Qb_01;
    pppppppcVar30 = uStack_378;
    break;
  case 9:
    pppppcStack_b0 = pppppcStack_398;
    uVar21 = pdb_140e25e40(0x10);
    uStack_1a8._0_2_ = 1;
    uStack_198._0_4_ = 0x4302af74;
    uStack_198._4_4_ = 1;
    uStack_190._0_4_ = 0xd;
    uStack_190._4_4_ = 0;
    uStack_1a8._4_4_ = uVar21;
    uStack_1a0 = (char)pppppppcVar26;
    ppppppcStack_a0 = (code ******)pcVar43;
    uStack_2b0 = pdb_140e2b4e0(ppppppcStack_80,&uStack_1a8);
    pppppppcVar32 = (code *******)ppppppcStack_80;
    uStack_2c0._4_4_ = CONCAT31(uStack_2c0._5_3_,(char)pppppppcVar26);
    uStack_2b8 = 0xffffffff00000000;
    ppppppcStack_120 = (code ******)0x0;
    ppppppcStack_118 = (code ******)0x8;
    ppppppcStack_110 = (code ******)0x0;
    uStack_2c0._0_4_ = uVar21;
    uVar12 = pdb_14177be60(ppppppcStack_80[0x41],&UNK_143330e0b,0x38,&ppppppcStack_120);
    ppppppcStack_5b8 = (code ******)pppppppcVar32;
    pdb_140e291c0(&uStack_1a8,&UNK_143330e0b,0x38,uVar12);
    uStack_238 = (code *******)pppppcStack_b0;
    ppppppcStack_230 = (code ******)&uStack_2c0;
    uStack_228 = (code *******)0x400000000a;
    pdb_141796f90(&uStack_428,&uStack_1a8,&uStack_238);
    pub_142e32760(&uStack_1a8,&uStack_428,0x88);
    uStack_238 = pppppppcVar3;
    ppppppcStack_230 = (code ******)pppppppcVar4;
    pdb_140e28810(&uStack_1a8,&uStack_238);
    pppppppcVar22 = (code *******)ppppppcStack_a8;
    uStack_258 = CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0);
    uStack_250 = uStack_2b8;
    uStack_248 = uStack_2b0;
    pdb_1415265d0(&uStack_270,ppppppcStack_a8,pppppppcVar32);
    iStack_b8 = iStack_84;
    iStack_b4 = param_5;
    uStack_c8 = CONCAT44((int)uVar34,9);
    ppppppcStack_120 = (code ******)&ppppppcStack_348;
    ppppppcStack_118 = ppppppcStack_a0;
    ppppppcStack_108 = (code ******)&uStack_30c;
    ppppppcStack_100 = (code ******)&uStack_320;
    ppppppcStack_f8 = ppppppcStack_1b8;
    ppppppcStack_f0 = ppppppcStack_1c0;
    puStack_e8 = (undefined4 *)&uStack_334;
    puStack_e0 = &uStack_2d8;
    uStack_c0 = CONCAT44((int)uStack_1b0,(int)puStack_90);
    puStack_d0 = &uStack_258;
    ppppppcStack_110 = (code ******)pppppppcVar30;
    puStack_d8 = (uint *)&uStack_270;
    pdb_14090d600(&uStack_2c0,&ppppppcStack_120);
    uVar12 = pdb_14177be60(pppppppcVar32[0x41],&UNK_143331f96,0x2e,&uStack_2c0);
    ppppppcStack_5b8 = (code ******)pppppppcVar32;
    pppppppcVar18 = (code *******)&uStack_1a8;
    pdb_140e291c0(pppppppcVar18,&UNK_143331f96,0x2e,uVar12);
    uStack_1d0 = CONCAT44(iStack_b4,iStack_b8);
    uStack_1d8 = uStack_c0;
    puStack_1e8 = puStack_d0;
    lStack_1e0 = uStack_c8;
    puStack_1f8 = puStack_e0;
    puStack_1f0 = puStack_d8;
    ppppppcStack_208 = ppppppcStack_f0;
    puStack_200 = puStack_e8;
    ppppppcStack_218 = ppppppcStack_100;
    ppppppcStack_210 = ppppppcStack_f8;
    uStack_228 = (code *******)ppppppcStack_110;
    ppppppcStack_220 = ppppppcStack_108;
    uStack_238 = (code *******)ppppppcStack_120;
    ppppppcStack_230 = ppppppcStack_118;
    pppppppcVar46 = (code *******)ppppppcStack_110;
    pppppppcVar28 = (code *******)ppppppcStack_108;
    pppppppcVar47 = (code *******)ppppppcStack_100;
    pppppppcVar48 = (code *******)ppppppcStack_f8;
    pdb_1417992e0(&uStack_428,pppppppcVar18,&uStack_238);
    pdb_140e29040(&uStack_428,&uStack_258,0);
    pppppppcVar44 = (code *******)pdb_141536110(pppppppcVar22,pppppppcVar32);
    pppppppcVar26 = (code *******)ppppppcStack_98;
    puVar29 = puStack_90;
    pppppppcVar45 = extraout_XMM0_Qb_05;
    pppppppcVar30 = uStack_378;
    break;
  case 10:
code_r0x0001409b761d:
    pppppcStack_b0 = pppppcStack_398;
    uVar21 = pdb_140e25e40(0x10);
    uStack_1a8._0_2_ = 1;
    uStack_198._0_4_ = 0x4302af74;
    uStack_198._4_4_ = 1;
    uStack_190._0_4_ = 0xd;
    uStack_190._4_4_ = 0;
    uStack_1a8._4_4_ = uVar21;
    uStack_1a0 = (char)pppppppcVar26;
    ppppppcStack_a0 = (code ******)pcVar43;
    uStack_2b0 = pdb_140e2b4e0(ppppppcStack_80,&uStack_1a8);
    pppppppcVar32 = (code *******)ppppppcStack_80;
    uStack_2c0._4_4_ = CONCAT31(uStack_2c0._5_3_,(char)pppppppcVar26);
    uStack_2b8 = 0xffffffff00000000;
    ppppppcStack_120 = (code ******)0x0;
    ppppppcStack_118 = (code ******)0x8;
    ppppppcStack_110 = (code ******)0x0;
    uStack_2c0._0_4_ = uVar21;
    uVar12 = pdb_14177be60(ppppppcStack_80[0x41],&UNK_143330e0b,0x38,&ppppppcStack_120);
    ppppppcStack_5b8 = (code ******)pppppppcVar32;
    pdb_140e291c0(&uStack_1a8,&UNK_143330e0b,0x38,uVar12);
    uStack_238 = (code *******)pppppcStack_b0;
    ppppppcStack_230 = (code ******)&uStack_2c0;
    uStack_228 = (code *******)0x4000000009;
    pdb_141796f90(&uStack_428,&uStack_1a8,&uStack_238);
    pub_142e32760(&uStack_1a8,&uStack_428,0x88);
    uStack_238 = pppppppcVar3;
    ppppppcStack_230 = (code ******)pppppppcVar4;
    pdb_140e28810(&uStack_1a8,&uStack_238);
    pppppppcVar22 = (code *******)ppppppcStack_a8;
    uStack_258 = CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0);
    uStack_250 = uStack_2b8;
    uStack_248 = uStack_2b0;
    pdb_141525ee0(&uStack_270,ppppppcStack_a8,pppppppcVar32);
    iStack_b8 = iStack_84;
    iStack_b4 = param_5;
    uStack_c8 = CONCAT44((int)uVar34,10);
    ppppppcStack_120 = (code ******)&ppppppcStack_348;
    ppppppcStack_118 = ppppppcStack_a0;
    ppppppcStack_108 = (code ******)&uStack_30c;
    ppppppcStack_100 = (code ******)&uStack_320;
    ppppppcStack_f8 = ppppppcStack_1b8;
    ppppppcStack_f0 = ppppppcStack_1c0;
    puStack_e8 = (undefined4 *)&uStack_334;
    puStack_e0 = &uStack_2d8;
    uStack_c0 = CONCAT44((int)uStack_1b0,(int)puStack_90);
    puStack_d0 = &uStack_258;
    ppppppcStack_110 = (code ******)pppppppcVar30;
    puStack_d8 = (uint *)&uStack_270;
    pdb_14090d600(&uStack_2c0,&ppppppcStack_120);
    uVar12 = pdb_14177be60(pppppppcVar32[0x41],&UNK_143331200,0x2b,&uStack_2c0);
    ppppppcStack_5b8 = (code ******)pppppppcVar32;
    pppppppcVar18 = (code *******)&uStack_1a8;
    pdb_140e291c0(pppppppcVar18,&UNK_143331200,0x2b,uVar12);
    uStack_1d0 = CONCAT44(iStack_b4,iStack_b8);
    uStack_1d8 = uStack_c0;
    puStack_1e8 = puStack_d0;
    lStack_1e0 = uStack_c8;
    puStack_1f8 = puStack_e0;
    puStack_1f0 = puStack_d8;
    ppppppcStack_208 = ppppppcStack_f0;
    puStack_200 = puStack_e8;
    ppppppcStack_218 = ppppppcStack_100;
    ppppppcStack_210 = ppppppcStack_f8;
    uStack_228 = (code *******)ppppppcStack_110;
    ppppppcStack_220 = ppppppcStack_108;
    uStack_238 = (code *******)ppppppcStack_120;
    ppppppcStack_230 = ppppppcStack_118;
    pppppppcVar46 = (code *******)ppppppcStack_110;
    pppppppcVar28 = (code *******)ppppppcStack_108;
    pppppppcVar47 = (code *******)ppppppcStack_100;
    pppppppcVar48 = (code *******)ppppppcStack_f8;
    pdb_1417992e0(&uStack_428,pppppppcVar18,&uStack_238);
    pdb_140e29040(&uStack_428,&uStack_258,0);
    pppppppcVar44 = (code *******)pdb_141536260(pppppppcVar22,pppppppcVar32);
    pppppppcVar26 = (code *******)ppppppcStack_98;
    puVar29 = puStack_90;
    pppppppcVar45 = extraout_XMM0_Qb_03;
    pppppppcVar30 = uStack_378;
    break;
  case 0xb:
    pppppppcVar44 =
         (code *******)
         pdb_1418c3320(ppppppcStack_80,ppppppcStack_a8,&uStack_498,CONCAT71(uVar38,0xb));
    pppppppcVar26 = (code *******)ppppppcStack_98;
    puVar29 = puStack_90;
    pppppppcVar45 = extraout_XMM0_Qb_02;
    pppppppcVar30 = uStack_378;
    break;
  case 0xc:
    pppppppcVar44 =
         (code *******)
         pdb_1418c2ff0(ppppppcStack_80,ppppppcStack_a8,&uStack_498,CONCAT71(uVar38,0xc));
    pppppppcVar26 = (code *******)ppppppcStack_98;
    puVar29 = puStack_90;
    pppppppcVar45 = extraout_XMM0_Qb_04;
    pppppppcVar30 = uStack_378;
    break;
  case 0x1c:
    pdb_141525100(&uStack_2c0,ppppppcStack_a8,ppppppcStack_80);
    pdb_141527600(&uStack_238,ppppppcVar16,ppppppcVar35);
    pdb_141526f10(&uStack_428,ppppppcVar16,ppppppcVar35);
    pdb_141527850(&uStack_1a8,ppppppcVar16,ppppppcVar35);
    uStack_29c = (undefined4)uStack_228;
    ppppppcStack_2ac = (code ******)uStack_238;
    ppppppcStack_2a4 = ppppppcStack_230;
    uStack_288 = uStack_418;
    uStack_298 = uStack_428;
    pppppppcVar18 = uStack_298;
    ppppppcStack_290 = ppppppcStack_420;
    uStack_274 = (uint)uStack_198;
    ppppcStack_284 =
         (code ****)CONCAT44(uStack_1a8._4_4_,CONCAT22(uStack_1a8._2_2_,(undefined2)uStack_1a8));
    uStack_27c = CONCAT17(uStack_199,
                          CONCAT16(uStack_19a,CONCAT42(uStack_19e,CONCAT11(uStack_19f,uStack_1a0))))
    ;
    uStack_298._0_4_ = SUB84(uStack_428,0);
    uStack_298._4_1_ = (undefined1)((ulonglong)uStack_428 >> 0x20);
    uStack_49c = uStack_418;
    uStack_4ac = (undefined4)uStack_298;
    uStack_4a8 = uStack_298._4_1_;
    ppppppcStack_4a4 = ppppppcStack_420;
    uVar24 = uStack_298._4_1_;
    uStack_298 = pppppppcVar18;
    uVar21 = pdb_140e25e40(0x10);
    uStack_1a8._0_2_ = 1;
    uStack_198._0_4_ = 0x43056170;
    uStack_198._4_4_ = 1;
    uStack_190._0_4_ = 0x20;
    uStack_190._4_4_ = 0;
    uStack_1a8._4_4_ = uVar21;
    uStack_1a0 = uVar24;
    ppppppcStack_a0 = (code ******)pcVar43;
    uStack_260 = pdb_140e2b4e0(ppppppcStack_80,&uStack_1a8);
    pppppppcVar32 = (code *******)ppppppcStack_80;
    uStack_270._4_4_ = CONCAT31(uStack_270._5_3_,uVar24);
    uStack_268 = 0xffffffff00000000;
    ppppppcStack_120 = (code ******)0x0;
    ppppppcStack_118 = (code ******)0x8;
    ppppppcStack_110 = (code ******)0x0;
    uStack_270._0_4_ = uVar21;
    uVar12 = pdb_14177be60(ppppppcStack_80[0x41],&UNK_143331dc0,0x32,&ppppppcStack_120);
    ppppppcStack_5b8 = (code ******)pppppppcVar32;
    pdb_140e291c0(&uStack_428,&UNK_143331dc0,0x32,uVar12);
    uStack_238 = (code *******)&uStack_270;
    ppppppcStack_230 = (code ******)&uStack_4ac;
    uStack_228 = (code *******)CONCAT44(uStack_228._4_4_,0x40);
    pppppppcVar18 = (code *******)&uStack_428;
    pdb_1417830f0(&uStack_1a8,pppppppcVar18,&uStack_238);
    uStack_428 = pppppppcVar3;
    ppppppcStack_420 = (code ******)pppppppcVar4;
    pdb_140e28810(&uStack_1a8,pppppppcVar18);
    uStack_258 = CONCAT44(uStack_270._4_4_,(uint)uStack_270);
    uStack_250 = uStack_268;
    uStack_248 = uStack_260;
    ppppppcStack_5a8 = (code ******)&uStack_298;
    ppppppcStack_5b0 = (code ******)&ppppppcStack_2ac;
    ppppppcStack_5b8 = (code ******)0x40;
    pdb_141765e50(pppppppcVar32,&UNK_14302ae69,0x17,&UNK_14302ae80);
    ppppppcStack_5b0 = (code ******)&ppppcStack_284;
    ppppppcStack_5b8 = (code ******)0x40;
    pdb_141765440(pppppppcVar32,&UNK_14302aec0,0x16,&UNK_14302aed6);
    puStack_d0 = (undefined8 *)0x0;
    uStack_c8 = 0;
    iStack_b8 = iStack_84;
    iStack_b4 = param_5;
    ppppppcStack_120 = (code ******)&ppppppcStack_348;
    ppppppcStack_118 = ppppppcStack_a0;
    ppppppcStack_108 = (code ******)&uStack_30c;
    ppppppcStack_100 = (code ******)&uStack_320;
    ppppppcStack_f8 = ppppppcStack_1b8;
    ppppppcStack_f0 = ppppppcStack_1c0;
    puStack_e8 = (undefined4 *)&uStack_334;
    puStack_e0 = &uStack_2d8;
    uStack_c0 = CONCAT44((int)uStack_1b0,(int)puStack_90);
    puStack_d8 = (uint *)&uStack_2c0;
    ppppppcStack_110 = (code ******)pppppppcVar30;
    pdb_14090d600(&uStack_270,&ppppppcStack_120);
    uVar12 = pdb_14177be60(pppppppcVar32[0x41],&UNK_143331058,0x32,&uStack_270);
    ppppppcStack_5b8 = (code ******)pppppppcVar32;
    pdb_140e291c0(&uStack_1a8,&UNK_143331058,0x32,uVar12);
    uStack_1d0 = CONCAT44(iStack_b4,iStack_b8);
    uStack_1d8 = uStack_c0;
    puStack_1e8 = puStack_d0;
    lStack_1e0 = uStack_c8;
    puStack_1f8 = puStack_e0;
    puStack_1f0 = puStack_d8;
    ppppppcStack_208 = ppppppcStack_f0;
    puStack_200 = puStack_e8;
    ppppppcStack_218 = ppppppcStack_100;
    ppppppcStack_210 = ppppppcStack_f8;
    uStack_228 = (code *******)ppppppcStack_110;
    ppppppcStack_220 = ppppppcStack_108;
    uStack_238 = (code *******)ppppppcStack_120;
    ppppppcStack_230 = ppppppcStack_118;
    pppppppcVar46 = (code *******)ppppppcStack_110;
    pppppppcVar28 = (code *******)ppppppcStack_108;
    pppppppcVar47 = (code *******)ppppppcStack_100;
    pppppppcVar48 = (code *******)ppppppcStack_f8;
    pdb_14178dd80(pppppppcVar18,&uStack_1a8,&uStack_238);
    pdb_1417a5080(pppppppcVar18,&uStack_258,0x70,0x1c);
    pppppppcVar22 = (code *******)ppppppcStack_a8;
    pdb_141534ac0(ppppppcStack_a8,pppppppcVar32);
    pdb_141534820(pppppppcVar22,pppppppcVar32);
    pdb_1415363b0(pppppppcVar22,pppppppcVar32);
    pppppppcVar44 = (code *******)pdb_1415367a0(pppppppcVar22,pppppppcVar32);
    pppppppcVar26 = (code *******)ppppppcStack_98;
    puVar29 = puStack_90;
    pppppppcVar45 = extraout_XMM0_Qb_00;
    pppppppcVar30 = uStack_378;
    break;
  case 0x1d:
    cVar6 = (char)piVar15;
    *(char *)piVar15 = (char)*piVar15 + cVar6;
    *(char *)((longlong)pppppppcVar32 + 0x14302b779) =
         *(char *)((longlong)pppppppcVar32 + 0x14302b779) + cVar6;
    *(char *)piVar15 = (char)*piVar15 + cVar6;
    pppppppcVar30 = uStack_378;
code_r0x0001409bba73:
    uStack_328 = SUB84(pppppppcVar3,0);
    uStack_324 = (uint)((ulonglong)pppppppcVar3 >> 0x20);
    uStack_320 = pppppppcVar4;
    uStack_338 = 0;
    uStack_334._0_4_ = 0;
    uStack_334._4_4_ = 0;
    uStack_32c = 0;
    uStack_340 = 0xfffffffffffffffe;
    ppppppcVar16 = (code ******)0x3;
    if ((longlong)*pppppppcVar26 < 0) {
      ppppppcVar16 = *pppppppcVar26;
    }
    puStack_368 = &uStack_498;
    uStack_378 = pppppppcVar30;
                    /* WARNING: Could not recover jumptable at 0x0001409bbada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppcVar18 =
         (code *******)
         (*(code *)(&UNK_14302b7c4 + *(int *)(&UNK_14302b7c4 + (longlong)ppppppcVar16 * 4)))
                   (&UNK_14302b7c4 + *(int *)(&UNK_14302b7c4 + (longlong)ppppppcVar16 * 4),
                    *(int *)(pppppppcVar26 + 0xb) == 1);
    return pppppppcVar18;
  case 0x1e:
    *piVar15 = *piVar15 + iVar31;
    *(char *)pppppppcVar32 = *(char *)pppppppcVar32 + 'P';
    ppppppcStack_3e8 =
         (code ******)CONCAT44(ppppppcStack_3e8._4_4_,(int)ppppppcStack_3e8 - (int)pppppppcVar26);
    ppppppcStack_590 = (code ******)pppppppcVar46;
    ppppppcStack_5a0 = (code ******)pppppppcVar44;
    ppppppcStack_598 = (code ******)pppppppcVar45;
code_r0x0001409bbeb1:
    ppppppcStack_408 = ppppppcStack_5a0;
    ppppppcStack_400 = ppppppcStack_598;
    ppppppcStack_3f8 = ppppppcStack_590;
    ppppppcStack_3f0 = (code ******)pppppppcVar28;
    ppppppcStack_388 = (code ******)pppppppcVar18;
    ppppppcStack_360 = (code ******)pdb_140a2ca40(puStack_368,&ppppppcStack_408);
    puStack_358 = (undefined1 *)
                  CONCAT44(puStack_358._4_4_,
                           (int)CONCAT71((int7)((ulonglong)ppppppcStack_360 >> 8),1));
    pppppppcVar41 = (code *******)ppppppcStack_348;
    if ((code *******)ppppppcStack_348 != (code *******)0x0) {
      lVar11 = (longlong)ppppppcStack_348 * 4;
code_r0x0001409bbf00:
      ppppppcVar16 = (code ******)(lVar11 * 3);
      ppppppcVar35 = (code ******)0x4;
code_r0x0001409bbf0a:
      pub_1406abac0((byte *)ppppppcStack_350,(ulonglong)ppppppcVar16,(ulonglong)ppppppcVar35);
    }
    goto code_r0x0001409bc006;
  case 0x1f:
code_r0x0001409bbc69:
    ppppppcStack_408 = (code ******)pppppppcVar44;
    ppppppcStack_400 = (code ******)pppppppcVar45;
    ppppppcStack_3f8 = (code ******)pppppppcVar46;
    ppppppcStack_3f0 = (code ******)pppppppcVar28;
    ppppppcStack_3e8 = (code ******)pppppppcVar47;
    uStack_3e0 = pppppppcVar48;
    ppppppcStack_388 = (code ******)pppppppcVar18;
    ppppppcStack_360 = (code ******)pdb_140a2ca40(puStack_368,&ppppppcStack_408);
    uVar12 = 0;
    if ((code ******)*ppppppcStack_348 != (code ******)0x0) {
      uVar12 = (*(code *)*ppppppcStack_348)(ppppppcStack_350);
    }
    ppppppcVar16 = (code ******)ppppppcStack_348[1];
    puStack_358 = (undefined1 *)
                  CONCAT44(puStack_358._4_4_,(int)CONCAT71((int7)((ulonglong)uVar12 >> 8),1));
    if (ppppppcVar16 != (code ******)0x0) {
      ppppppcVar35 = (code ******)ppppppcStack_348[2];
      goto code_r0x0001409bbf0a;
    }
    goto code_r0x0001409bc006;
  case 0x20:
    pppppcStack_3c8 = (code *****)CONCAT44(pppppcStack_3c8._4_4_,(int)pppppcStack_3c8 - iVar31);
    uStack_3d8 = puStack_4f0;
    uStack_3d0 = auStack_4e8[0];
    ppppppcStack_3e8 = (code ******)uStack_500;
    uStack_3e0 = (code *******)ppppppcStack_4f8;
    ppppppcStack_3f8 = ppppppcStack_510;
    ppppppcStack_3f0 = ppppppcStack_508;
    ppppppcStack_408 = ppppppcStack_520;
    ppppppcStack_400 = ppppppcStack_518;
    ppppppcStack_388 = (code ******)pppppppcVar18;
    ppppppcStack_360 = (code ******)pdb_140a2ca40(puStack_368,&ppppppcStack_408);
    puStack_358 = (undefined1 *)
                  CONCAT44(puStack_358._4_4_,
                           (int)CONCAT71((int7)((ulonglong)ppppppcStack_360 >> 8),1));
    if ((code *******)ppppppcStack_348 != (code *******)0x0) {
      lVar11 = (longlong)ppppppcStack_348 << 2;
      goto code_r0x0001409bbf00;
    }
    goto code_r0x0001409bc006;
  case 0x21:
    puStack_358 = (undefined1 *)CONCAT44(puStack_358._4_4_,iVar31);
    pppppppcVar18 = *(code ********)(uVar34 + 0x10);
    ppppppcStack_348 = (code ******)pppppppcVar18;
    if ((int)pppppppcVar32 == 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14302b128,0x49,&UNK_14302b150);
    }
    ppppppcStack_400 = *(code *******)(uVar34 + 0x18);
    ppppppcStack_408 = (code ******)pppppppcVar18;
    uVar40 = pdb_140a2c860(puStack_368);
    ppppppcStack_360 = (code ******)pppppppcVar18;
    if ((uVar40 & 1) == 0) {
      pdb_142d8e410(&ppppppcStack_408);
      goto code_r0x0001409bc9a7;
    }
    if (puStack_358 != (undefined1 *)0x0) {
      pub_1406abac0((byte *)ppppppcStack_348,(ulonglong)puStack_358,1);
    }
    puStack_358 = (undefined1 *)((ulonglong)puStack_358 & 0xffffffff00000000);
code_r0x0001409bc006:
    pdb_140f04c70(&ppppppcStack_488,uStack_298,&UNK_14302b1d0);
    ppppppcVar16 = ppppppcStack_488;
    if (*(char *)(uVar34 + 0x40) == '\0') {
      cVar6 = *(char *)(uVar34 + 0x68);
      uVar7 = _DAT_142e36f28;
    }
    else {
      cVar6 = *(char *)(uVar34 + 0x68);
      uVar7 = *(undefined4 *)(uVar34 + 0x44);
    }
    if (cVar6 == '\0') {
      *(undefined1 *)(uVar34 + 0x68) = 0;
      *(undefined4 *)(uVar34 + 0x6c) = uVar7;
      uVar7 = 0;
    }
    if (SBORROW8(0,(longlong)pppppppcVar41)) {
      pppppppcVar18 = (code *******)ppppppcStack_478;
      if ((code *******)ppppppcStack_478 == (code *******)0x0) {
        pppppppcVar18 = (code *******)ppppppcStack_470;
      }
      ppppppcVar35 = pppppppcVar18[2];
      if ((ulonglong)((longlong)*pppppppcVar18 - (longlong)ppppppcVar35) < 0x18) {
        ppppppcStack_5b8 = (code ******)0x1;
        pdb_142d7f1b0(pppppppcVar18,ppppppcVar35,0x18,1);
      }
      ppppppcVar42 = pppppppcVar18[1];
      *(code **)((longlong)ppppppcVar42 + (longlong)ppppppcVar35) = pdb_14160c140;
      *(code *******)((longlong)(ppppppcVar42 + 1) + (longlong)ppppppcVar35) = ppppppcVar16;
      *(undefined1 *)((longlong)(ppppppcVar42 + 2) + (longlong)ppppppcVar35) = 0;
      pppppppcVar18[2] = ppppppcVar35 + 3;
    }
    ppppppcVar16 = ppppppcStack_488;
    iVar31 = (int)pppppppcVar33;
    if (iVar31 != 2 && ((ulonglong)pppppppcVar33 & 1) == 0) {
      pppppppcVar18 = (code *******)ppppppcStack_478;
      if ((code *******)ppppppcStack_478 == (code *******)0x0) {
        pppppppcVar18 = (code *******)ppppppcStack_470;
      }
      uVar8 = *(undefined4 *)(uVar34 + 0x5c);
      ppppppcVar35 = pppppppcVar18[2];
      if ((ulonglong)((longlong)*pppppppcVar18 - (longlong)ppppppcVar35) < 0x18) {
        ppppppcStack_5b8 = (code ******)0x1;
        pdb_142d7f1b0(pppppppcVar18,ppppppcVar35,0x18,1);
      }
      ppppppcVar42 = pppppppcVar18[1];
      *(code **)((longlong)ppppppcVar42 + (longlong)ppppppcVar35) = pdb_14160d920;
      *(code *******)((longlong)(ppppppcVar42 + 1) + (longlong)ppppppcVar35) = ppppppcVar16;
      *(undefined4 *)((longlong)(ppppppcVar42 + 2) + (longlong)ppppppcVar35) = uVar8;
      *(undefined1 *)((longlong)ppppppcVar42 + 0x14 + (longlong)ppppppcVar35) = 0;
      pppppppcVar18[2] = ppppppcVar35 + 3;
    }
    if (iVar31 == 1) {
      cVar6 = '\x17';
      puVar36 = &UNK_14302b270;
    }
    else if (*(char *)(uVar34 + 0x50) == '\0') {
      puVar36 = &UNK_14302b1e8;
      if (iVar31 == 0) {
        puVar36 = &UNK_14302b201;
      }
      cVar6 = (iVar31 == 0) * '\x05' + '\x19';
    }
    else {
      if (iVar31 != 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14302b21f,0x35,&UNK_14302b240);
      }
      cVar6 = '\x18';
      puVar36 = &UNK_14302b258;
    }
    ppppppcStack_400 = ppppppcStack_360;
    ppppppcStack_408 = (code ******)((ulonglong)ppppppcStack_408 & 0xffffffff00000000);
    ppppppcStack_5b8 = (code ******)&UNK_14302b288;
    pdb_140a596f0(&pppppcStack_3c8,pcVar43,puVar36,cVar6);
    ppppppcStack_3e8 = *(code *******)(uVar34 + 0x74);
    ppppppcStack_3f8 = *(code *******)(uVar34 + 0x30);
    ppppppcStack_3f0 = *(code *******)(uVar34 + 0x38);
    uStack_378._0_4_ = *(undefined4 *)(uVar34 + 0x70);
    ppppppcStack_388 = *(code *******)(uVar34 + 0x60);
    ppppppcStack_380 = *(code *******)(uVar34 + 0x68);
    uStack_3e0 = (code *******)CONCAT44(uVar7,*(undefined4 *)(uVar34 + 0x7c));
    uStack_3d8 = (undefined4 *)CONCAT44(uVar7,uVar7);
    ppppppcStack_390 = (code ******)0x0;
    uStack_378._4_4_ = 0;
    uStack_370._0_4_ = 0;
    pdb_141617300(&ppppppcStack_488,&ppppppcStack_408,&UNK_14302b2a0);
    pppppppcVar28 = (code *******)ppppppcStack_470;
    pppppppcVar32 = (code *******)ppppppcStack_478;
    pppppppcVar18 = (code *******)ppppppcStack_488;
    if (((ulonglong)pppppppcVar33 & 1) == 0) {
      if (*(char *)(uVar34 + 0x50) != '\0') {
        if ((code *******)ppppppcStack_478 == (code *******)0x0) {
          pppppppcVar32 = (code *******)ppppppcStack_470;
        }
        uVar7 = *(undefined4 *)(uVar34 + 0x54);
        ppppppcVar16 = pppppppcVar32[2];
        if ((ulonglong)((longlong)*pppppppcVar32 - (longlong)ppppppcVar16) < 0x18) {
          ppppppcStack_5b8 = (code ******)0x1;
          pdb_142d7f1b0(pppppppcVar32,ppppppcVar16,0x18,1);
        }
        ppppppcVar35 = pppppppcVar32[1];
        *(code **)((longlong)ppppppcVar35 + (longlong)ppppppcVar16) = pdb_14160cd10;
        *(code ********)((longlong)(ppppppcVar35 + 1) + (longlong)ppppppcVar16) = pppppppcVar18;
        *(undefined4 *)((longlong)(ppppppcVar35 + 2) + (longlong)ppppppcVar16) = uVar7;
        *(undefined1 *)((longlong)ppppppcVar35 + 0x14 + (longlong)ppppppcVar16) = 0;
        ppppppcVar35 = ppppppcVar16 + 3;
        pppppppcVar32[2] = ppppppcVar35;
        pppppppcVar28 = uStack_190;
        puVar17 = uStack_188;
        pppppppcVar22 = uStack_198;
        if ((ulonglong)((longlong)*pppppppcVar32 - (longlong)ppppppcVar35) < 0x28) {
          ppppppcStack_5b8 = (code ******)0x1;
          pdb_142d7f1b0(pppppppcVar32,ppppppcVar35,0x28,1);
          pppppppcVar28 = uStack_190;
          puVar17 = uStack_188;
          pppppppcVar22 = uStack_198;
        }
        ppppppcVar35 = pppppppcVar32[1];
        *(code **)((longlong)(ppppppcVar35 + 3) + (longlong)ppppppcVar16) = pdb_14160c930;
        *(code ********)((longlong)(ppppppcVar35 + 4) + (longlong)ppppppcVar16) = pppppppcVar18;
        *(code **)((longlong)(ppppppcVar35 + 5) + (longlong)ppppppcVar16) = pdb_1409bb560;
        *(code ********)((longlong)(ppppppcVar35 + 6) + (longlong)ppppppcVar16) = pppppppcVar18;
        *(undefined1 *)((longlong)(ppppppcVar35 + 7) + (longlong)ppppppcVar16) = 0;
        pppppppcVar32[2] = ppppppcVar16 + 8;
        uStack_190 = pppppppcVar28;
        uStack_188 = puVar17;
        uStack_198 = pppppppcVar22;
        goto code_r0x0001409bc3da;
      }
      if (iVar31 != 0) goto code_r0x0001409bc3da;
      pppppppcVar22 = (code *******)ppppppcStack_478;
      if ((code *******)ppppppcStack_478 == (code *******)0x0) {
        pppppppcVar22 = (code *******)ppppppcStack_470;
      }
      ppppppcVar16 = pppppppcVar22[2];
      if ((ulonglong)((longlong)*pppppppcVar22 - (longlong)ppppppcVar16) < 0x28) {
        ppppppcStack_5b8 = (code ******)0x1;
        pdb_142d7f1b0(pppppppcVar22,ppppppcVar16,0x28,1);
      }
      ppppppcVar35 = pppppppcVar22[1];
      *(code **)((longlong)ppppppcVar35 + (longlong)ppppppcVar16) = pdb_14160c930;
      *(code ********)((longlong)(ppppppcVar35 + 1) + (longlong)ppppppcVar16) = pppppppcVar18;
      *(code **)((longlong)(ppppppcVar35 + 2) + (longlong)ppppppcVar16) = pdb_1409bb190;
      *(code ********)((longlong)(ppppppcVar35 + 3) + (longlong)ppppppcVar16) = pppppppcVar18;
      *(undefined1 *)((longlong)(ppppppcVar35 + 4) + (longlong)ppppppcVar16) = 0;
      pppppppcVar22[2] = ppppppcVar16 + 5;
code_r0x0001409bc3f4:
      if (pppppppcVar32 != (code *******)0x0) {
        pppppppcVar28 = pppppppcVar32;
      }
      ppppppcVar16 = pppppppcVar28[2];
      if ((ulonglong)((longlong)*pppppppcVar28 - (longlong)ppppppcVar16) < 0x18) {
        ppppppcStack_5b8 = (code ******)0x1;
        pdb_142d7f1b0(pppppppcVar28,ppppppcVar16,0x18,1);
      }
      ppppppcVar35 = pppppppcVar28[1];
      *(code **)((longlong)ppppppcVar35 + (longlong)ppppppcVar16) = pdb_14160a190;
      *(code ********)((longlong)(ppppppcVar35 + 1) + (longlong)ppppppcVar16) = pppppppcVar18;
      *(undefined4 *)((longlong)(ppppppcVar35 + 2) + (longlong)ppppppcVar16) = 0;
      *(undefined1 *)((longlong)ppppppcVar35 + 0x14 + (longlong)ppppppcVar16) = 0;
      pppppppcVar28[2] = ppppppcVar16 + 3;
    }
    else {
      if ((code *******)ppppppcStack_478 == (code *******)0x0) {
        pppppppcVar32 = (code *******)ppppppcStack_470;
      }
      uVar7 = *(undefined4 *)(uVar34 + 0x5c);
      ppppppcVar16 = pppppppcVar32[2];
      if ((ulonglong)((longlong)*pppppppcVar32 - (longlong)ppppppcVar16) < 0x18) {
        ppppppcStack_5b8 = (code ******)0x1;
        pdb_142d7f1b0(pppppppcVar32,ppppppcVar16,0x18,1);
      }
      ppppppcVar35 = pppppppcVar32[1];
      *(code **)((longlong)ppppppcVar35 + (longlong)ppppppcVar16) = pdb_14160b760;
      *(code ********)((longlong)(ppppppcVar35 + 1) + (longlong)ppppppcVar16) = pppppppcVar18;
      *(undefined4 *)((longlong)(ppppppcVar35 + 2) + (longlong)ppppppcVar16) = uVar7;
      *(undefined1 *)((longlong)ppppppcVar35 + 0x14 + (longlong)ppppppcVar16) = 0;
      ppppppcVar35 = ppppppcVar16 + 3;
      pppppppcVar32[2] = ppppppcVar35;
      if (*(int *)(uVar34 + 0x50) == 1) {
        uVar7 = *(undefined4 *)(uVar34 + 0x54);
        if ((ulonglong)((longlong)*pppppppcVar32 - (longlong)ppppppcVar35) < 0x18) {
          ppppppcStack_5b8 = (code ******)0x1;
          pdb_142d7f1b0(pppppppcVar32,ppppppcVar35,0x18,1);
        }
        ppppppcVar35 = pppppppcVar32[1];
        *(code **)((longlong)(ppppppcVar35 + 3) + (longlong)ppppppcVar16) = pdb_14160cd10;
        *(code ********)((longlong)(ppppppcVar35 + 4) + (longlong)ppppppcVar16) = pppppppcVar18;
        *(undefined4 *)((longlong)(ppppppcVar35 + 5) + (longlong)ppppppcVar16) = uVar7;
        *(undefined1 *)((longlong)ppppppcVar35 + 0x2c + (longlong)ppppppcVar16) = 0;
        ppppppcVar35 = ppppppcVar16 + 6;
        pppppppcVar32[2] = ppppppcVar35;
      }
      if ((ulonglong)((longlong)*pppppppcVar32 - (longlong)ppppppcVar35) < 0x28) {
        ppppppcStack_5b8 = (code ******)0x1;
        pdb_142d7f1b0(pppppppcVar32,ppppppcVar35,0x28,1);
      }
      ppppppcVar16 = pppppppcVar32[1];
      *(code **)((longlong)ppppppcVar16 + (longlong)ppppppcVar35) = pdb_14160c930;
      *(code ********)((longlong)(ppppppcVar16 + 1) + (longlong)ppppppcVar35) = pppppppcVar18;
      *(code **)((longlong)(ppppppcVar16 + 2) + (longlong)ppppppcVar35) = pdb_1409bcc90;
      *(code ********)((longlong)(ppppppcVar16 + 3) + (longlong)ppppppcVar35) = pppppppcVar18;
      *(undefined1 *)((longlong)(ppppppcVar16 + 4) + (longlong)ppppppcVar35) = 0;
      pppppppcVar32[2] = ppppppcVar35 + 5;
code_r0x0001409bc3da:
      pppppppcVar18 = (code *******)ppppppcStack_488;
      pppppppcVar32 = (code *******)ppppppcStack_478;
      pppppppcVar28 = (code *******)ppppppcStack_470;
      if (iVar31 != 2) goto code_r0x0001409bc3f4;
    }
    pppppppcVar18 = (code *******)ppppppcStack_470;
    ppppppcVar35 = ppppppcStack_478;
    ppppppcVar16 = ppppppcStack_488;
    pppppppcVar32 = (code *******)ppppppcStack_478;
    if (*(char *)(uVar34 + 0x85) == '\0') {
      if (*(char *)(uVar34 + 0x86) == '\0') {
        if ((code *******)ppppppcStack_478 == (code *******)0x0) {
          pppppppcVar32 = (code *******)ppppppcStack_470;
        }
        ppppppcVar42 = pppppppcVar32[2];
        if ((ulonglong)((longlong)*pppppppcVar32 - (longlong)ppppppcVar42) < 0x18) {
          ppppppcStack_5b8 = (code ******)0x1;
          pdb_142d7f1b0(pppppppcVar32,ppppppcVar42,0x18,1);
        }
        ppppppcVar19 = pppppppcVar32[1];
        pcVar43 = pdb_14160bbd0;
        pppppppcVar28 = uStack_190;
        puVar17 = uStack_188;
        pppppppcVar22 = uStack_198;
        goto code_r0x0001409bc539;
      }
      if ((code *******)ppppppcStack_478 == (code *******)0x0) {
        pppppppcVar32 = (code *******)ppppppcStack_470;
      }
      ppppppcVar42 = pppppppcVar32[2];
      if ((ulonglong)((longlong)*pppppppcVar32 - (longlong)ppppppcVar42) < 0x18) {
        ppppppcStack_5b8 = (code ******)0x1;
        pdb_142d7f1b0(pppppppcVar32,ppppppcVar42,0x18,1);
      }
      ppppppcVar19 = pppppppcVar32[1];
      *(code **)((longlong)ppppppcVar19 + (longlong)ppppppcVar42) = pdb_141609fc0;
      *(code *******)((longlong)(ppppppcVar19 + 1) + (longlong)ppppppcVar42) = ppppppcVar16;
      *(undefined1 *)((longlong)(ppppppcVar19 + 2) + (longlong)ppppppcVar42) = 0;
      pppppppcVar32[2] = ppppppcVar42 + 3;
      iVar31 = *(int *)(uVar34 + 0x48);
    }
    else {
      if ((code *******)ppppppcStack_478 == (code *******)0x0) {
        pppppppcVar32 = (code *******)ppppppcStack_470;
      }
      ppppppcVar42 = pppppppcVar32[2];
      if ((ulonglong)((longlong)*pppppppcVar32 - (longlong)ppppppcVar42) < 0x18) {
        ppppppcStack_5b8 = (code ******)0x1;
        pdb_142d7f1b0(pppppppcVar32,ppppppcVar42,0x18,1);
      }
      ppppppcVar19 = pppppppcVar32[1];
      pcVar43 = pdb_141608e20;
      pppppppcVar28 = uStack_190;
      puVar17 = uStack_188;
      pppppppcVar22 = uStack_198;
code_r0x0001409bc539:
      *(code **)((longlong)ppppppcVar19 + (longlong)ppppppcVar42) = pcVar43;
      *(code *******)((longlong)(ppppppcVar19 + 1) + (longlong)ppppppcVar42) = ppppppcVar16;
      *(undefined1 *)((longlong)(ppppppcVar19 + 2) + (longlong)ppppppcVar42) = 0;
      ppppppcVar19 = ppppppcVar42 + 3;
      pppppppcVar32[2] = ppppppcVar19;
      if ((ulonglong)((longlong)*pppppppcVar32 - (longlong)ppppppcVar19) < 0x18) {
        ppppppcStack_5b8 = (code ******)0x1;
        uStack_190 = pppppppcVar28;
        uStack_188 = puVar17;
        uStack_198 = pppppppcVar22;
        pdb_142d7f1b0(pppppppcVar32,ppppppcVar19,0x18,1);
        pppppppcVar28 = uStack_190;
        puVar17 = uStack_188;
        pppppppcVar22 = uStack_198;
      }
      ppppppcVar19 = pppppppcVar32[1];
      *(code **)((longlong)(ppppppcVar19 + 3) + (longlong)ppppppcVar42) = pdb_141609fc0;
      *(code *******)((longlong)(ppppppcVar19 + 4) + (longlong)ppppppcVar42) = ppppppcVar16;
      *(undefined1 *)((longlong)(ppppppcVar19 + 5) + (longlong)ppppppcVar42) = 0;
      pppppppcVar32[2] = ppppppcVar42 + 6;
      iVar31 = *(int *)(uVar34 + 0x48);
      uStack_190 = pppppppcVar28;
      uStack_188 = puVar17;
      uStack_198 = pppppppcVar22;
    }
    if (iVar31 == 1) {
      uVar7 = *(undefined4 *)(uVar34 + 0x4c);
      pppppppcVar32 = (code *******)ppppppcVar35;
      if ((code *******)ppppppcVar35 == (code *******)0x0) {
        pppppppcVar32 = pppppppcVar18;
      }
      ppppppcVar42 = pppppppcVar32[2];
      if ((ulonglong)((longlong)*pppppppcVar32 - (longlong)ppppppcVar42) < 0x20) {
        ppppppcStack_5b8 = (code ******)0x1;
        pdb_142d7f1b0(pppppppcVar32,ppppppcVar42,0x20,1);
      }
      ppppppcVar19 = pppppppcVar32[1];
      *(code **)((longlong)ppppppcVar19 + (longlong)ppppppcVar42) = pdb_14160bf70;
      *(code *******)((longlong)(ppppppcVar19 + 1) + (longlong)ppppppcVar42) = ppppppcVar16;
      *(undefined4 *)((longlong)(ppppppcVar19 + 2) + (longlong)ppppppcVar42) = 0;
      *(undefined4 *)((longlong)ppppppcVar19 + 0x14 + (longlong)ppppppcVar42) = uVar7;
      *(undefined1 *)((longlong)(ppppppcVar19 + 3) + (longlong)ppppppcVar42) = 0;
      pppppppcVar32[2] = ppppppcVar42 + 4;
    }
    if (*(char *)(uVar34 + 0x84) == '\0') {
    }
    else {
      if ((code *******)ppppppcVar35 != (code *******)0x0) {
        pppppppcVar18 = (code *******)ppppppcVar35;
      }
      ppppppcVar35 = pppppppcVar18[2];
      if ((ulonglong)((longlong)*pppppppcVar18 - (longlong)ppppppcVar35) < 0x18) {
        ppppppcStack_5b8 = (code ******)0x1;
        pdb_142d7f1b0(pppppppcVar18,ppppppcVar35,0x18,1);
      }
      ppppppcVar42 = pppppppcVar18[1];
      *(code **)((longlong)ppppppcVar42 + (longlong)ppppppcVar35) = pdb_14160c280;
      *(code *******)((longlong)(ppppppcVar42 + 1) + (longlong)ppppppcVar35) = ppppppcVar16;
      *(undefined1 *)((longlong)(ppppppcVar42 + 2) + (longlong)ppppppcVar35) = 0;
      pppppppcVar18[2] = ppppppcVar35 + 3;
    }
    if ((char)puStack_358 != '\0') {
      plVar2 = *(longlong **)((longlong)puStack_368 + 0x18);
      LOCK();
      lVar11 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 == 0 || SCARRY8(lVar11,1) != *plVar2 < 0) {
code_r0x0001409bc9a7:
                    /* WARNING: Does not return */
        pcVar43 = (code *)invalidInstructionException();
        (*pcVar43)();
      }
      pdb_1416177f0(&ppppppcStack_488,plVar2,ppppppcStack_360,&UNK_14302b2b8);
    }
    pppppppcVar30[4] = ppppppcStack_468;
    pppppppcVar30[2] = ppppppcStack_478;
    pppppppcVar30[3] = ppppppcStack_470;
    *pppppppcVar30 = ppppppcStack_488;
    pppppppcVar30[1] = ppppppcStack_480;
    return pppppppcVar30;
  case 0x22:
    uVar21 = *(uint *)(uVar14 + 0xdbd4144d);
    *(uint *)(uVar14 + 0xdbd4144d) = (uint)(CONCAT14(0xfffffffebcfd48af < uVar14,uVar21) >> 1);
    uVar10 = *(uint *)(uVar14 + 0xdbd4144d);
    *(uint *)(uVar14 + 0xdbd4144d) = (uint)(CONCAT14((uVar21 & 1) != 0,uVar10) >> 1);
    *(undefined4 *)(uVar14 + 0xdbd4144d) =
         (int)(CONCAT14((uVar10 & 1) != 0,*(undefined4 *)(uVar14 + 0xdbd4144d)) >> 1);
    return (code *******)(ulonglong)(uint)(int)(short)piVar15;
  }
LAB_1409b74b6:
  ppppppcVar16 = ppppppcStack_80;
  uVar40 = uVar40 + 1;
  uVar34 = (ulonglong)((int)uVar34 + 4);
  pppppppcVar41 = pppppppcVar41 + 0x14;
  if (uVar40 == 0x1d) {
    uStack_238 = (code *******)0x0;
    ppppppcStack_230 = (code ******)0x8;
    uStack_228 = (code *******)0x0;
    uStack_378 = pppppppcVar30;
    uVar12 = pdb_14177be60(ppppppcStack_80[0x41],&UNK_143331a85,0x2b,&uStack_238);
    ppppppcStack_5b8 = ppppppcVar16;
    pdb_140e291c0(&uStack_428,&UNK_143331a85,0x2b,uVar12);
    pdb_141787bc0(&uStack_1a8,&uStack_428,&uStack_320);
    uStack_428 = (code *******)_DAT_14302a780;
    ppppppcStack_420 = (code ******)_UNK_14302a788;
    uVar24 = SUB81(&uStack_428,0);
    pdb_140e28810(&uStack_1a8);
    uVar7 = pdb_140e25e40(0x2200);
    uStack_1a8._0_2_ = 1;
    uStack_198._0_4_ = 0x4302af48;
    uStack_198._4_4_ = 1;
    uStack_190._0_4_ = 0x12;
    uStack_190._4_4_ = 0;
    uVar23 = SUB81(&uStack_1a8,0);
    uStack_1a8._4_4_ = uVar7;
    uStack_1a0 = uVar24;
    uStack_2b0 = pdb_140e2b4e0(ppppppcVar16);
    uStack_2c0._4_4_ = CONCAT31(uStack_2c0._5_3_,uVar24);
    uStack_2b8 = 0xffffffff00000000;
    uStack_2c0._0_4_ = uVar7;
    uVar7 = pdb_140e25e40(0x220);
    uStack_1a8._0_2_ = 1;
    uStack_198._0_4_ = 0x4302af5a;
    uStack_198._4_4_ = 1;
    uStack_190._0_4_ = 0x1a;
    uStack_190._4_4_ = 0;
    uStack_1a8._4_4_ = uVar7;
    uStack_1a0 = uVar23;
    uVar8 = pdb_140e2b4e0(ppppppcVar16,&uStack_1a8);
    uStack_498._0_5_ = CONCAT14(uVar23,uVar7);
    ppppppcStack_490 = (code ******)0xffffffff00000000;
    ppppppcStack_488 = (code ******)CONCAT44(ppppppcStack_488._4_4_,uVar8);
    pppppppcVar18 = uStack_378;
    ppppppcStack_120 = (code ******)0x0;
    ppppppcStack_118 = (code ******)0x8;
    ppppppcStack_110 = (code ******)0x0;
    uVar12 = pdb_14177be60(ppppppcVar16[0x41],&UNK_143332019,0x2d,&ppppppcStack_120);
    ppppppcStack_5b8 = ppppppcVar16;
    pdb_140e291c0(&uStack_428,&UNK_143332019,0x2d,uVar12);
    uStack_238 = uStack_370;
    ppppppcStack_230 = (code ******)puStack_368;
    uStack_228 = pppppppcVar18;
    ppppppcStack_220 = (code ******)&uStack_2c0;
    ppppppcStack_218 = (code ******)&uStack_498;
    pdb_141797b60(&uStack_1a8,&uStack_428,&uStack_238);
    uStack_428 = _DAT_14302a790;
    ppppppcStack_420 = (code ******)_UNK_14302a798;
    pdb_140e28810(&uStack_1a8,&uStack_428);
    ppppppcVar35 = ppppppcStack_98;
    uStack_198._0_4_ = uStack_2b0;
    uStack_258 = CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0);
    uStack_1a8._0_2_ = (undefined2)(uint)uStack_2c0;
    uStack_1a8._2_2_ = (undefined2)((uint)uStack_2c0 >> 0x10);
    uStack_1a8._4_4_ = uStack_2c0._4_4_;
    uStack_1a0 = (undefined1)uStack_2b8;
    uStack_19f = (undefined1)((ulonglong)uStack_2b8 >> 8);
    uStack_19e = (undefined4)((ulonglong)uStack_2b8 >> 0x10);
    uStack_19a = (undefined1)((ulonglong)uStack_2b8 >> 0x30);
    uStack_199 = (undefined1)((ulonglong)uStack_2b8 >> 0x38);
    uStack_198._4_4_ = (uint)uStack_498;
    uStack_190._0_4_ = (undefined4)((ulonglong)uStack_498 >> 0x20);
    uStack_190._4_4_ = SUB84(ppppppcStack_490,0);
    uStack_188._0_4_ = (undefined4)((ulonglong)ppppppcStack_490 >> 0x20);
    uStack_188._4_4_ = ppppppcStack_488._0_4_;
    uStack_248 = uStack_2b0;
    uStack_250 = uStack_2b8;
    uStack_2e8 = CONCAT44(uStack_2e8._4_4_,ppppppcStack_488._0_4_);
    uStack_2f8 = uStack_498;
    ppppppcStack_2f0 = ppppppcStack_490;
    ppppppcStack_5a8 = (code ******)&uStack_2f8;
    ppppppcStack_5b0 = (code ******)&uStack_258;
    ppppppcStack_5b8 = (code ******)CONCAT71(ppppppcStack_5b8._1_7_,param_7);
    ppppppcStack_5a0 = &pppppcStack_398;
    pdb_1418c2960(&uStack_2d8,ppppppcVar16,ppppppcStack_98,param_6);
    pdb_1418c2590(ppppppcVar16,&pppppcStack_398,param_6,param_7);
    uVar10 = *(int *)(ppppppcVar35[6] + 0xf) + (uint)(*(int *)(ppppppcVar35[6] + 0xf) == 0);
    uVar25 = uVar10 & 0x3f;
    uVar21 = 0x40 - uVar25;
    if (uVar25 == 0) {
      uVar21 = 0;
    }
    uVar21 = pdb_140e25e40(((ulonglong)uVar21 + (ulonglong)uVar10) * 4);
    uStack_1a8._0_2_ = 1;
    uStack_198._0_4_ = 0x4302acee;
    uStack_198._4_4_ = 1;
    uStack_190._0_4_ = 0x20;
    uStack_190._4_4_ = 0;
    uVar24 = SUB81(&uStack_1a8,0);
    uStack_1a8._4_4_ = uVar21;
    uStack_1a0 = (char)uVar25;
    uStack_260 = pdb_140e2b4e0(ppppppcVar16);
    uStack_270._4_4_ = CONCAT31(uStack_270._5_3_,(char)uVar25);
    uStack_268 = 0xffffffff00000000;
    uStack_270._0_4_ = uVar21;
    uVar10 = pdb_140e25e40((ulonglong)
                           (*(int *)((longlong)ppppppcVar35[6] + 0x7c) +
                           (uint)(*(int *)((longlong)ppppppcVar35[6] + 0x7c) == 0)) << 2);
    uStack_1a8._0_2_ = 1;
    uStack_198._0_4_ = 0x4302ad0e;
    uStack_198._4_4_ = 1;
    uStack_190._0_4_ = 0x20;
    uStack_190._4_4_ = 0;
    uStack_1a8._4_4_ = uVar10;
    uStack_1a0 = uVar24;
    uStack_2b0 = pdb_140e2b4e0(ppppppcVar16,&uStack_1a8);
    uStack_2c0._4_4_ = CONCAT31(uStack_2c0._5_3_,uVar24);
    uStack_2b8 = 0xffffffff00000000;
    uVar25 = uVar21 >> 2 & 0x3f;
    ppppppcStack_120 = (code ******)(ulonglong)uVar25;
    uStack_2c0._0_4_ = uVar10;
    if (uVar25 == 0) {
      uStack_238 = (code *******)0x0;
      ppppppcStack_230 = (code ******)0x8;
      uStack_228 = (code *******)0x0;
      uVar12 = pdb_14177be60(ppppppcVar16[0x41],&UNK_143331979,0x26,&uStack_238);
      ppppppcStack_5b8 = ppppppcVar16;
      pdb_140e291c0(&uStack_428,&UNK_143331979,0x26,uVar12);
      pdb_141787bc0(&uStack_1a8,&uStack_428,&uStack_270);
      ppppppcStack_420 = (code ******)0x100000001;
      uStack_428 = (code *******)CONCAT44(uVar21 >> 2,1);
      pdb_140e28810(&uStack_1a8,&uStack_428);
      uStack_238 = (code *******)0x0;
      ppppppcStack_230 = (code ******)0x8;
      uStack_228 = (code *******)0x0;
      uVar12 = pdb_14177be60(ppppppcVar16[0x41],&UNK_143331b9a,0x26,&uStack_238);
      ppppppcStack_5b8 = ppppppcVar16;
      pdb_140e291c0(&uStack_428,&UNK_143331b9a,0x26,uVar12);
      pdb_14178bb80(&uStack_1a8,&uStack_428,&uStack_2c0,uVar10 >> 2);
      ppppppcStack_420 = (code ******)0x100000001;
      uStack_428 = (code *******)CONCAT44(uVar10 >> 2,1);
      pdb_140e28810(&uStack_1a8,&uStack_428);
      ppppppcStack_5b0 = (code ******)CONCAT71(ppppppcStack_5b0._1_7_,param_7);
      ppppppcStack_5b8 = (code ******)CONCAT71(ppppppcStack_5b8._1_7_,param_6);
      pdb_1418c3e30(&uStack_498,ppppppcVar16,ppppppcVar35,&pppppcStack_398);
      ppppppcStack_5a8 = (code ******)&uStack_2f8;
      ppppppcStack_5b8 = (code ******)&uStack_2d8;
      ppppppcStack_5b0 = (code ******)&uStack_258;
      ppppppcStack_5a0 = (code ******)&uStack_270;
      ppppppcStack_598 = &pppppcStack_398;
      pdb_1418c27b0(ppppppcVar16,ppppppcVar35,param_6,param_7);
      ppppppcStack_5a0 = &pppppcStack_398;
      ppppppcStack_5b8 = (code ******)&uStack_258;
      ppppppcStack_5b0 = (code ******)&uStack_270;
      ppppppcStack_5a8 = (code ******)&uStack_2c0;
      pdb_1418c3980(ppppppcVar16,ppppppcVar35,param_6,param_7);
      ppppppcStack_590 = &pppppcStack_398;
      ppppppcStack_5a8 = (code ******)&uStack_2f8;
      ppppppcStack_5b8 = (code ******)&uStack_2d8;
      ppppppcStack_5b0 = (code ******)&uStack_258;
      ppppppcStack_5a0 = (code ******)&uStack_270;
      ppppppcStack_598 = (code ******)&uStack_2c0;
      pdb_1418c2dd0(ppppppcVar16,ppppppcVar35,param_6,param_7);
      ppppppcVar35 = ppppppcStack_380;
      pppppppcVar18 = uStack_370;
      ppppppcStack_120 = (code ******)0x0;
      ppppppcStack_118 = (code ******)0x8;
      ppppppcStack_110 = (code ******)0x0;
      uVar12 = pdb_14177be60(ppppppcVar16[0x41],&UNK_143331cd0,0x39,&ppppppcStack_120);
      ppppppcStack_5b8 = ppppppcVar16;
      pdb_140e291c0(&uStack_1a8,&UNK_143331cd0,0x39,uVar12);
      ppppppcStack_230 = (code ******)&uStack_2d8;
      uStack_228 = (code *******)&uStack_2f8;
      ppppppcStack_220 = (code ******)&uStack_498;
      ppppppcStack_218 = ppppppcVar35;
      ppppppcStack_210 = (code ******)((ulonglong)ppppppcStack_210 & 0xffffffff00000000);
      uStack_238 = pppppppcVar18;
      pdb_1417a20a0(&uStack_428,&uStack_1a8,&uStack_238);
      pdb_1417a56f0(&uStack_428,&uStack_258,param_6,param_7);
      ppppppcVar35 = ppppppcStack_360;
      pdb_14152e500(&ppppppcStack_120,ppppppcStack_a8,ppppppcVar16);
      pdb_140e29900(&uStack_428,ppppppcVar16,&UNK_14302ae4b,0x1e);
      ppppppcVar16 = ppppppcStack_420;
      pppppppcVar18 = uStack_428;
      if ((code *******)ppppppcStack_420 != (code *******)0x0) {
        uVar7 = *(undefined4 *)((longlong)ppppppcVar35 + 0x10);
        uVar5 = ppppppcStack_3f0._0_2_;
        pppppppcVar28 = (code *******)CONCAT44(uStack_414,uStack_418);
        ppppppcStack_5b8 = uStack_428[0x11];
        pppppppcVar32 = uStack_428 + 0x1b;
        uStack_72 = 1;
        ppppppcStack_5a8 = ppppppcStack_420;
        ppppppcStack_5b0._0_2_ = ppppppcStack_3f0._0_2_;
        uStack_588 = 1;
        ppppppcStack_590._0_1_ = 0x26;
        ppppppcStack_5a0 = (code ******)pppppppcVar28;
        ppppppcStack_598._0_4_ = uVar7;
        pdb_141764080(uStack_428[0x19],uStack_428[0x1a],pppppppcVar32,uStack_428[0x10]);
        uVar8 = ppppppcStack_110._0_4_;
        uStack_588 = *(undefined4 *)(pppppppcVar18 + 0x49);
        ppppppcStack_5b8 = pppppppcVar18[0x11];
        uStack_72 = 1;
        ppppppcStack_598 = (code ******)CONCAT44(ppppppcStack_598._4_4_,ppppppcStack_110._0_4_);
        ppppppcStack_5a8 = ppppppcVar16;
        ppppppcStack_5b0 = (code ******)CONCAT62(ppppppcStack_5b0._2_6_,uVar5);
        ppppppcStack_590 = (code ******)CONCAT71(ppppppcStack_590._1_7_,0x35);
        ppppppcStack_5a0 = (code ******)pppppppcVar28;
        pdb_141764080(pppppppcVar18[0x19],pppppppcVar18[0x1a],pppppppcVar32,pppppppcVar18[0x10]);
        pppppppcVar18 = (code *******)0x220;
        if (iStack_84 == 0) {
          pppppppcVar18 = (code *******)0x0;
        }
        uStack_238 = (code *******)0x440;
        if (param_5 == 0) {
          uStack_238 = pppppppcVar18;
        }
        ppppppcStack_178 = ppppppcStack_3f8;
        ppppppcStack_170 = ppppppcStack_3f0;
        uStack_188._0_4_ = SUB84(ppppppcStack_408,0);
        uStack_188._4_4_ = (undefined4)((ulonglong)ppppppcStack_408 >> 0x20);
        ppppppcStack_180 = ppppppcStack_400;
        uStack_198._0_4_ = uStack_418;
        uStack_198._4_4_ = uStack_414;
        uStack_190._0_4_ = SUB84(ppppppcStack_410,0);
        uStack_190._4_4_ = (undefined4)((ulonglong)ppppppcStack_410 >> 0x20);
        uStack_1a8._0_2_ = SUB82(uStack_428,0);
        uStack_1a8._2_2_ = (undefined2)((ulonglong)uStack_428 >> 0x10);
        uStack_1a8._4_4_ = (uint)((ulonglong)uStack_428 >> 0x20);
        uStack_1a0 = SUB81(ppppppcStack_420,0);
        uStack_19f = (undefined1)((ulonglong)ppppppcStack_420 >> 8);
        uStack_19e = (undefined4)((ulonglong)ppppppcStack_420 >> 0x10);
        uStack_19a = (undefined1)((ulonglong)ppppppcStack_420 >> 0x30);
        uStack_199 = (undefined1)((ulonglong)ppppppcStack_420 >> 0x38);
        uStack_228 = (code *******)CONCAT44(uVar8,uVar7);
        ppppppcStack_230 = (code ******)0x220;
        uStack_72 = 0;
        pdb_14177af50(&uStack_1a8,&uStack_238);
        pppppppcVar26 = (code *******)ppppppcStack_80;
        pppppppcVar32 = (code *******)ppppppcStack_a8;
        pdb_141538d80(ppppppcStack_a8,ppppppcStack_80);
        pdb_141539c80(pppppppcVar32,pppppppcVar26);
        pppppppcVar44 = (code *******)pdb_1415375c0(pppppppcVar32,pppppppcVar26);
        pppppppcVar30 = pppppppcVar26;
code_r0x0001409b8838:
        pdb_14153a680(pppppppcVar44,pppppppcVar26);
        pdb_141538b00(pppppppcVar32,pppppppcVar30);
        pdb_141538c40(pppppppcVar32,pppppppcVar30);
        pdb_1415352a0(pppppppcVar32,pppppppcVar30);
        pdb_1415368f0(pppppppcVar32,pppppppcVar30);
        pdb_1415370c0(pppppppcVar32,pppppppcVar30);
        pdb_141537fc0(pppppppcVar32,pppppppcVar30);
        pppppppcVar18 = (code *******)pdb_141537e80(pppppppcVar32,pppppppcVar30);
        return pppppppcVar18;
      }
    }
    else {
      ppppppcStack_5b0 = (code ******)&UNK_14302ad30;
      pdb_142dc7fb4(0,&ppppppcStack_120,&UNK_14302ab98,0);
    }
    uStack_72 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143332e78);
  }
  goto LAB_1409b74cd;
LAB_1409b6880:
  auVar50[0] = -(auVar51[0] == -1);
  auVar50[1] = -(auVar51[1] == -1);
  auVar50[2] = -(auVar51[2] == -1);
  auVar50[3] = -(auVar51[3] == -1);
  auVar50[4] = -(auVar51[4] == -1);
  auVar50[5] = -(auVar51[5] == -1);
  auVar50[6] = -(auVar51[6] == -1);
  auVar50[7] = -(auVar51[7] == -1);
  auVar50[8] = -(auVar51[8] == -1);
  auVar50[9] = -(auVar51[9] == -1);
  auVar50[10] = -(auVar51[10] == -1);
  auVar50[0xb] = -(auVar51[0xb] == -1);
  auVar50[0xc] = -(auVar51[0xc] == -1);
  auVar50[0xd] = -(auVar51[0xd] == -1);
  auVar50[0xe] = -(auVar51[0xe] == -1);
  auVar50[0xf] = -(auVar51[0xf] == -1);
  if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 || (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar50 >> 0x17,0) & 1) != 0) || (SUB161(auVar50 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar50 >> 0x27,0) & 1) != 0) || (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar50 >> 0x37,0) & 1) != 0) || (SUB161(auVar50 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar50 >> 0x47,0) & 1) != 0) || (SUB161(auVar50 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar50 >> 0x57,0) & 1) != 0) || (SUB161(auVar50 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar50 >> 0x67,0) & 1) != 0) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar50 >> 0x77,0) & 1) != 0) || auVar50[0xf] < '\0') {
LAB_1409b6c41:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302aca0);
  }
  uVar34 = uVar34 + lVar37 + 0x10;
  lVar37 = lVar37 + 0x10;
  goto LAB_1409b6820;
}

