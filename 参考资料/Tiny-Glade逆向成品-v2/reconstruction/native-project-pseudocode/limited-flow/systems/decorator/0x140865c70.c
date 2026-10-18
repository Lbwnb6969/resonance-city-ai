// VA 0x140865c70, PDB extent 12210 bytes
// system_decorator::ui_systems::ui_move_decorator::ui_move_decorator
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::ui_systems::ui_move_decorator::ui_move_decorator
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
   Extent: 12210 */

void pdb_140865c70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,longlong *param_11,longlong *param_12,
                  undefined8 *param_13,longlong *param_14,undefined8 *param_15,longlong *param_16)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  float *pfVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  uint **ppuVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  int *piVar29;
  uint uVar30;
  ushort uVar31;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  longlong *plVar35;
  char *pcVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar43;
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  float fVar46;
  float fVar49;
  float fVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar51;
  undefined1 auVar53 [16];
  float fVar52;
  float fVar55;
  undefined1 auVar54 [16];
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float unaff_XMM7_Da;
  undefined *in_stack_fffffffffffff728;
  undefined4 uVar64;
  undefined8 uVar62;
  undefined8 *puVar63;
  undefined8 uVar65;
  undefined8 in_stack_fffffffffffff740;
  undefined4 uVar68;
  undefined1 *puVar66;
  undefined **ppuVar67;
  undefined8 in_stack_fffffffffffff748;
  undefined4 uVar71;
  undefined8 uVar69;
  longlong *plVar70;
  longlong in_stack_fffffffffffff770;
  undefined1 auStack_868 [24];
  undefined1 auStack_850 [24];
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined *apuStack_7f8 [4];
  longlong lStack_7d8;
  longlong lStack_758;
  longlong lStack_750;
  longlong lStack_748;
  longlong lStack_740;
  longlong lStack_738;
  longlong lStack_730;
  longlong lStack_728;
  longlong lStack_720;
  longlong lStack_718;
  longlong lStack_710;
  longlong lStack_708;
  longlong lStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  uint *puStack_618;
  float fStack_610;
  float fStack_60c;
  float fStack_608;
  float fStack_604;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 *puStack_5e8;
  char *pcStack_5e0;
  longlong *plStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  longlong lStack_5a0;
  longlong lStack_598;
  longlong lStack_590;
  longlong lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  longlong lStack_570;
  longlong lStack_568;
  longlong lStack_560;
  undefined8 uStack_558;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  int iStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 auStack_4b8 [2];
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 auStack_4a0 [2];
  undefined1 auStack_498 [2];
  undefined1 auStack_496 [2];
  undefined1 auStack_494 [12];
  longlong lStack_488;
  longlong lStack_480;
  undefined8 uStack_478;
  uint uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_43c;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  char *pcStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  char *pcStack_3c0;
  longlong *plStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  char *pcStack_3a0;
  undefined1 *puStack_398;
  undefined1 *puStack_390;
  undefined4 *puStack_388;
  undefined1 *puStack_380;
  undefined4 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  longlong *plStack_360;
  uint *puStack_358;
  undefined8 uStack_350;
  undefined8 *puStack_348;
  char *pcStack_340;
  longlong *plStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  char *pcStack_320;
  uint *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  float fStack_300;
  undefined4 uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 *puStack_2d8;
  undefined8 uStack_2d0;
  float fStack_2c4;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  float *pfStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  undefined4 uStack_27c;
  uint uStack_278;
  uint uStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  char *pcStack_230;
  undefined8 *puStack_228;
  float *pfStack_220;
  undefined1 auStack_218 [8];
  float fStack_210;
  float fStack_20c;
  undefined1 uStack_208;
  undefined1 uStack_207;
  undefined1 uStack_206;
  undefined1 uStack_205;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 *puStack_1e8;
  char *pcStack_1e0;
  longlong *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b0;
  undefined1 uStack_1a8;
  undefined2 uStack_1a6;
  undefined1 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  float fStack_190;
  float fStack_16c;
  undefined4 *puStack_168;
  undefined4 *puStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  undefined8 uStack_148;
  float fStack_140;
  undefined1 uStack_13c;
  undefined4 uStack_134;
  byte *pbStack_130;
  byte *pbStack_128;
  undefined8 uStack_120;
  ulonglong uStack_118;
  undefined8 *puStack_110;
  uint *puStack_108;
  longlong *plStack_100;
  char cStack_f6;
  undefined1 uStack_f5;
  float fStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar35 = (longlong *)*param_2;
  uStack_238 = param_2[1];
  uStack_698 = param_2[5];
  uStack_690 = param_2[6];
  uStack_688 = param_2[7];
  uStack_680 = param_2[8];
  puStack_518 = (undefined8 *)*param_3;
  puVar23 = param_3 + 4;
  uStack_510 = param_1;
  pub_142e32760(apuStack_7f8,puVar23,0xa0);
  puStack_168 = (undefined4 *)param_3[0x18];
  pcVar36 = (char *)*param_4;
  pcVar1 = (char *)param_4[4];
  uStack_258 = param_4[8];
  uStack_250 = param_4[9];
  puStack_248 = (undefined4 *)param_4[10];
  uStack_240 = param_4[0xb];
  uStack_2e8 = param_4[0xc];
  uStack_2e0 = param_4[0xd];
  puStack_2d8 = (undefined4 *)param_4[0xe];
  uStack_2d0 = param_4[0xf];
  uStack_548 = param_4[0x10];
  uStack_540 = param_4[0x11];
  uStack_538 = param_4[0x12];
  uStack_530 = param_4[0x13];
  uStack_838 = param_4[0x14];
  uStack_830 = param_4[0x15];
  uStack_828 = param_4[0x16];
  uStack_820 = param_4[0x17];
  uStack_818 = param_4[0x18];
  uStack_810 = param_4[0x19];
  uStack_808 = param_4[0x1a];
  uStack_800 = param_4[0x1b];
  pbStack_128 = (byte *)param_4[0x1c];
  uStack_678 = param_4[0x20];
  uStack_670 = param_4[0x21];
  uStack_668 = param_4[0x22];
  uStack_660 = param_4[0x23];
  uStack_658 = param_4[0x24];
  uStack_650 = param_4[0x25];
  uStack_648 = param_4[0x26];
  uStack_640 = param_4[0x27];
  pfStack_220 = (float *)param_4[0x28];
  uStack_158 = (char *)param_4[0x29];
  pfStack_2b0 = (float *)param_4[0x2b];
  fStack_16c = *(float *)((longlong)param_4 + 0x164);
  uStack_6b8 = param_4[0x2d];
  uStack_6b0 = param_4[0x2e];
  uStack_6a8 = param_4[0x2f];
  uStack_6a0 = param_4[0x30];
  uStack_418 = *param_5;
  uStack_410 = param_5[1];
  uStack_408 = param_5[2];
  uStack_400 = param_5[3];
  puStack_228 = (undefined8 *)param_5[4];
  uStack_478 = param_5[10];
  lStack_488 = param_5[8];
  lStack_480 = param_5[9];
  uStack_558 = param_5[0xd];
  lStack_568 = param_5[0xb];
  lStack_560 = param_5[0xc];
  uStack_5a8 = param_5[0x10];
  uStack_5b8 = param_5[0xe];
  uStack_5b0 = param_5[0xf];
  uStack_260 = param_5[0x11];
  uStack_520 = param_5[0x15];
  uVar22 = *param_10;
  uStack_120 = param_10[4];
  puStack_108 = (uint *)param_10[8];
  puStack_160 = (undefined4 *)param_10[10];
  uVar15 = *(undefined4 *)((longlong)param_10 + 0x5c);
  uStack_6d8 = param_13[4];
  uStack_6d0 = param_13[5];
  uStack_6c8 = param_13[6];
  uStack_6c0 = param_13[7];
  uStack_6f8 = param_13[8];
  uStack_6f0 = param_13[9];
  uStack_6e8 = param_13[10];
  uStack_6e0 = param_13[0xb];
  uStack_508 = *param_13;
  lStack_718 = param_16[4];
  lStack_710 = param_16[5];
  lStack_708 = param_16[6];
  lStack_700 = param_16[7];
  lStack_738 = param_16[8];
  lStack_730 = param_16[9];
  lStack_728 = param_16[10];
  lStack_720 = param_16[0xb];
  lStack_758 = param_16[0xc];
  lStack_750 = param_16[0xd];
  lStack_748 = param_16[0xe];
  lStack_740 = param_16[0xf];
  uStack_3f8 = pdb_140c47770(&uStack_838);
  auVar42[0] = -(*pcVar1 == DAT_14300c7d0);
  auVar42[1] = -(pcVar1[1] == UNK_14300c7d1);
  auVar42[2] = -(pcVar1[2] == UNK_14300c7d2);
  auVar42[3] = -(pcVar1[3] == UNK_14300c7d3);
  auVar42[4] = -(pcVar1[4] == UNK_14300c7d4);
  auVar42[5] = -(pcVar1[5] == UNK_14300c7d5);
  auVar42[6] = -(pcVar1[6] == UNK_14300c7d6);
  auVar42[7] = -(pcVar1[7] == UNK_14300c7d7);
  auVar42[8] = -(pcVar1[8] == UNK_14300c7d8);
  auVar42[9] = -(pcVar1[9] == UNK_14300c7d9);
  auVar42[10] = -(pcVar1[10] == UNK_14300c7da);
  auVar42[0xb] = -(pcVar1[0xb] == UNK_14300c7db);
  auVar42[0xc] = -(pcVar1[0xc] == UNK_14300c7dc);
  auVar42[0xd] = -(pcVar1[0xd] == UNK_14300c7dd);
  auVar42[0xe] = -(pcVar1[0xe] == UNK_14300c7de);
  auVar42[0xf] = -(pcVar1[0xf] == UNK_14300c7df);
  if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf)
      != 0xffff) {
    return;
  }
  uVar21 = *(undefined8 *)(pcVar1 + 0x60);
  puStack_3f0 = puVar23;
  pcStack_230 = pcVar36;
  uStack_2a8 = pdb_1406d0830(uVar22);
  uStack_2a0 = uVar21;
  cVar9 = pdb_1408ffaf0(&uStack_2a8);
  if (cVar9 == '\0') {
    return;
  }
  fStack_f4 = *(float *)(pcVar1 + 0x68);
  uStack_3e8 = *param_9;
  pdb_140c45ec0(&fStack_298,uStack_3e8,fStack_f4,&UNK_14300d2a0);
  cVar9 = pdb_1408ffab0(&uStack_2a8);
  uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffff728 >> 0x20);
  uVar68 = (undefined4)((ulonglong)in_stack_fffffffffffff740 >> 0x20);
  uVar71 = (undefined4)((ulonglong)in_stack_fffffffffffff748 >> 0x20);
  puStack_500 = puVar23;
  pcStack_150 = pcVar1;
  plStack_100 = plVar35;
  if (cVar9 == '\x02') {
    param_14 = (longlong *)*param_14;
    uStack_148 = CONCAT44(uStack_148._4_4_,fStack_f4);
    uStack_134 = uVar15;
    if (param_14[3] != 0) {
      uVar16 = pdb_1400aede0(param_14 + 4,&uStack_148);
      fVar44 = _UNK_14300d23c;
      fVar43 = _UNK_14300d238;
      fVar61 = _UNK_14300d234;
      fVar40 = _DAT_14300d230;
      fVar41 = _DAT_142f684a8;
      fVar52 = _DAT_142e3b1d8;
      fVar46 = _DAT_142e36f50;
      fVar60 = _DAT_142e36f28;
      uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffff728 >> 0x20);
      uVar68 = (undefined4)((ulonglong)in_stack_fffffffffffff740 >> 0x20);
      uVar71 = (undefined4)((ulonglong)in_stack_fffffffffffff748 >> 0x20);
      bVar10 = (byte)(uVar16 >> 0x39);
      auVar42 = ZEXT216(CONCAT11(bVar10,bVar10));
      auVar42 = pshuflw(auVar42,auVar42,0);
      lVar28 = 0;
      do {
        uVar16 = uVar16 & param_14[1];
        pcVar36 = (char *)(*param_14 + uVar16);
        auVar57[0] = -(*pcVar36 == auVar42[0]);
        auVar57[1] = -(pcVar36[1] == auVar42[1]);
        auVar57[2] = -(pcVar36[2] == auVar42[2]);
        auVar57[3] = -(pcVar36[3] == auVar42[3]);
        auVar57[4] = -(pcVar36[4] == auVar42[4]);
        auVar57[5] = -(pcVar36[5] == auVar42[5]);
        auVar57[6] = -(pcVar36[6] == auVar42[6]);
        auVar57[7] = -(pcVar36[7] == auVar42[7]);
        auVar57[8] = -(pcVar36[8] == auVar42[0]);
        auVar57[9] = -(pcVar36[9] == auVar42[1]);
        auVar57[10] = -(pcVar36[10] == auVar42[2]);
        auVar57[0xb] = -(pcVar36[0xb] == auVar42[3]);
        auVar57[0xc] = -(pcVar36[0xc] == auVar42[4]);
        auVar57[0xd] = -(pcVar36[0xd] == auVar42[5]);
        auVar57[0xe] = -(pcVar36[0xe] == auVar42[6]);
        auVar57[0xf] = -(pcVar36[0xf] == auVar42[7]);
        uVar31 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf
        ;
        uVar30 = (uint)uVar31;
        if (uVar31 != 0) {
LAB_1408660f1:
          uVar3 = 0;
          for (uVar4 = uVar30; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          lVar32 = *param_14 + (uVar3 + uVar16 & param_14[1]) * -0x20;
          if (fStack_f4 != *(float *)(lVar32 + -0x20)) goto code_r0x00014086610c;
          puVar23 = *(undefined8 **)(lVar32 + -0x10);
          puStack_110 = puVar23 + *(longlong *)(lVar32 + -8) * 0xc;
          while( true ) {
            uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffff728 >> 0x20);
            uVar68 = (undefined4)((ulonglong)in_stack_fffffffffffff740 >> 0x20);
            uVar71 = (undefined4)((ulonglong)in_stack_fffffffffffff748 >> 0x20);
            unaff_XMM7_Da = fVar52;
            uVar15 = uStack_134;
            if (puVar23 == puStack_110) break;
            uStack_4e8 = puVar23[2];
            uStack_4e0 = puVar23[3];
            iStack_4f8 = (int)*puVar23;
            uStack_4f4 = (undefined4)((ulonglong)*puVar23 >> 0x20);
            uStack_4f0 = (undefined4)puVar23[1];
            uStack_4ec = (undefined4)((ulonglong)puVar23[1] >> 0x20);
            fVar51 = *(float *)(puVar23 + 4);
            fVar39 = *(float *)((longlong)puVar23 + 0x24);
            fVar45 = *(float *)(puVar23 + 5);
            fVar49 = *(float *)((longlong)puVar23 + 0x2c);
            fVar55 = fVar49 * fVar49;
            fVar56 = fVar39 * fVar39 + fVar51 * fVar51;
            fVar38 = fVar45 * 0.0 + fVar39 * 0.0 + fVar51 * fVar60;
            fVar38 = fVar38 + fVar38;
            fVar50 = fVar49 + fVar49;
            auVar47._0_4_ =
                 fVar50 * (fVar39 * 0.0 - fVar45 * fVar40) +
                 fVar38 * fVar51 + (fVar55 - (fVar56 + fVar45 * fVar45)) * fVar60;
            auVar47._4_4_ =
                 fVar50 * (fVar39 * 0.0 - fVar39 * fVar61) +
                 fVar38 * fVar39 + (fVar55 - (fVar56 + fVar55)) * 0.0;
            auVar47._8_4_ =
                 fVar50 * (fVar51 * 0.0 - fVar39 * fVar43) +
                 fVar38 * fVar45 + (fVar55 - (fVar56 + fVar45 * fVar45)) * 0.0;
            auVar47._12_4_ =
                 fVar50 * (fVar49 * 0.0 - fVar49 * fVar44) +
                 fVar38 * fVar49 + (fVar55 - (fVar56 + fVar55)) * 0.0;
            fVar51 = fVar60 / SQRT(auVar47._8_4_ * auVar47._8_4_ + auVar47._0_4_ * auVar47._0_4_);
            auVar48._4_12_ = auVar47._4_12_;
            auVar48._0_4_ = auVar47._0_4_ * fVar51;
            pdb_140df3f70(&iStack_4f8,auVar48._0_8_,fVar51 * auVar47._8_4_);
            uVar30 = (uint)puVar23[6];
            uVar15 = *(undefined4 *)((longlong)puVar23 + 0x34);
            auStack_218 = (undefined1  [8])puVar23[6];
            uVar64 = *(undefined4 *)(puVar23 + 7);
            fStack_210 = (float)uVar64;
            pdb_140df43c0(&iStack_4f8,auStack_218);
            fVar39 = (float)pdb_140dedcd0(&UNK_14300d5a8);
            fVar51 = (float)uStack_4e8 + uStack_4e8._4_4_;
            pdb_140df4540(auStack_218,&uStack_4f0,((float)uStack_4e0 + uStack_4e0._4_4_) * fVar46);
            pdb_140defa80(&uStack_3d8,(ulonglong)auStack_218 & 0xffffffff);
            pdb_140def200(auStack_218,&uStack_3d8);
            pdb_14149a480(&puStack_358,auStack_218);
            pdb_140a89130(auStack_218,&puStack_358);
            pdb_140a89100(&uStack_3d8,auStack_218);
            pdb_140a891b0(auStack_218,&uStack_3d8);
            pdb_140a89170(auStack_218,uStack_120);
            fVar51 = (fVar51 * fVar46 * fVar46 + fVar52) * fVar39 + fVar41;
            if (fVar46 <= fVar51) {
              fVar51 = fVar46;
            }
            lStack_5a0 = CONCAT44(lStack_5a0._4_4_,fVar51 * fVar39);
            auStack_218 = (undefined1  [8])&uStack_468;
            fStack_210 = 7.6013107;
            fStack_20c = 1.4013e-45;
            uStack_208 = SUB81(&lStack_5a0,0);
            uStack_207 = (undefined1)((ulonglong)&lStack_5a0 >> 8);
            uStack_206 = (undefined1)((ulonglong)&lStack_5a0 >> 0x10);
            uStack_205 = (undefined1)((ulonglong)&lStack_5a0 >> 0x18);
            fStack_204 = (float)((ulonglong)&lStack_5a0 >> 0x20);
            fStack_200 = 7.7206726;
            uStack_1fc = 1;
            uStack_468 = uVar30;
            uStack_464 = uVar15;
            uStack_460 = uVar64;
            pdb_140f60760(&uStack_3d8,&UNK_14300d5b0,auStack_218);
            puVar27 = puStack_3c8;
            uStack_118 = CONCAT44(uStack_3d8._4_4_,(uint)uStack_3d8);
            pbVar5 = (byte *)CONCAT44(uStack_3d0._4_4_,(float)uStack_3d0);
            pdb_14007ee60();
            pbVar17 = pub_1406abab0(0x20,8);
            pbStack_130 = pbVar5;
            if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x20);
            }
            pbVar17[0] = 1;
            pbVar17[1] = 0;
            pbVar17[2] = 0;
            pbVar17[3] = 0;
            pbVar17[4] = 0;
            pbVar17[5] = 0;
            pbVar17[6] = 0;
            pbVar17[7] = 0;
            pbVar17[8] = 1;
            pbVar17[9] = 0;
            pbVar17[10] = 0;
            pbVar17[0xb] = 0;
            pbVar17[0xc] = 0;
            pbVar17[0xd] = 0;
            pbVar17[0xe] = 0;
            pbVar17[0xf] = 0;
            *(uint *)(pbVar17 + 0x10) = uVar30;
            *(undefined4 *)(pbVar17 + 0x14) = uVar15;
            *(undefined4 *)(pbVar17 + 0x18) = uVar64;
            *(float *)(pbVar17 + 0x1c) = fVar51 * fVar39;
            in_stack_fffffffffffff728 = &UNK_14300d5c8;
            pdb_1409baea0(auStack_218,pbVar5,puVar27,pbVar17,&UNK_14300d5c8);
            plStack_3b8 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
            puStack_3c8 = (undefined8 *)
                          CONCAT44(fStack_204,
                                   CONCAT13(uStack_205,
                                            CONCAT12(uStack_206,CONCAT11(uStack_207,uStack_208))));
            pcStack_3c0 = (char *)CONCAT44(uStack_1fc,fStack_200);
            uStack_3d8._0_4_ = auStack_218._0_4_;
            uStack_3d8._4_4_ = auStack_218._4_4_;
            uStack_3d0._0_4_ = fStack_210;
            uStack_3d0._4_4_ = fStack_20c;
            pdb_140b133a0(uStack_120,&uStack_3d8);
            plVar35 = plStack_100;
            if (uStack_118 != 0) {
              pub_1406abac0(pbStack_130,uStack_118,1);
            }
            puVar23 = puVar23 + 0xc;
          }
          break;
        }
LAB_14086611f:
        auVar53[0] = -(*pcVar36 == -1);
        auVar53[1] = -(pcVar36[1] == -1);
        auVar53[2] = -(pcVar36[2] == -1);
        auVar53[3] = -(pcVar36[3] == -1);
        auVar53[4] = -(pcVar36[4] == -1);
        auVar53[5] = -(pcVar36[5] == -1);
        auVar53[6] = -(pcVar36[6] == -1);
        auVar53[7] = -(pcVar36[7] == -1);
        auVar53[8] = -(pcVar36[8] == -1);
        auVar53[9] = -(pcVar36[9] == -1);
        auVar53[10] = -(pcVar36[10] == -1);
        auVar53[0xb] = -(pcVar36[0xb] == -1);
        auVar53[0xc] = -(pcVar36[0xc] == -1);
        auVar53[0xd] = -(pcVar36[0xd] == -1);
        auVar53[0xe] = -(pcVar36[0xe] == -1);
        auVar53[0xf] = -(pcVar36[0xf] == -1);
        uVar15 = uStack_134;
        if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x1f,0) & 1) != 0) || (SUB161(auVar53 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar53 >> 0x37,0) & 1) != 0) || (SUB161(auVar53 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar53 >> 0x47,0) & 1) != 0) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') break;
        uVar16 = uVar16 + lVar28 + 0x10;
        lVar28 = lVar28 + 0x10;
      } while( true );
    }
  }
  pcVar36 = pcStack_150;
  bVar10 = pdb_1408ffab0(&uStack_2a8);
  uStack_134 = CONCAT31(uStack_134._1_3_,bVar10);
  uStack_f5 = 1 < bVar10;
  if (!(bool)uStack_f5) {
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    *(undefined1 *)(*param_6 + 0x48) = 1;
  }
  cVar9 = pdb_1408ffab0(&uStack_2a8);
  fVar60 = fStack_f4;
  if ((cVar9 == '\x02') || ((*plVar35 != 2 && (*(float *)(plVar35 + 4) != fStack_f4)))) {
    *plVar35 = 2;
  }
  puVar23 = (undefined8 *)(ulonglong)(uint)fStack_f4;
  uStack_2c0 = pdb_140c3d2c0(uStack_258);
  puStack_2b8 = puVar23;
  uStack_118 = uStack_2c0;
  uVar16 = pdb_140c3d060(uStack_258,uStack_2c0,puVar23,fVar60);
  if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300d2b8);
  }
  pbStack_130 = *(byte **)(pcVar36 + 0x10);
  fVar60 = fStack_284;
  if (pbStack_130 == (byte *)0x7) {
    lVar28 = 0;
    if (1 < (ulonglong)*(byte *)(uVar16 + 0x32)) {
      lVar28 = (ulonglong)*(byte *)(uVar16 + 0x32) - 1;
    }
    if ((int)lVar28 - 1U < 2) {
      pfVar18 = (float *)pdb_140901490(uVar16 + 0x38,&UNK_14300d2d0);
      if (_DAT_142e37848 <= *pfVar18) {
        fVar60 = fStack_284 - *pfVar18;
        fVar46 = fStack_284;
        if (*(float *)(pcVar36 + 0x3c) <= (fStack_284 + fVar60) * _DAT_142e36f50)
        goto LAB_140866629;
      }
      else {
        fVar46 = fStack_284 + _DAT_14300d240;
      }
      fVar60 = fVar46;
    }
    else if (lVar28 != 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14300d2e8,0x28,&UNK_14300d310);
    }
  }
LAB_140866629:
  if ((int)*plVar35 == 2) {
    *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
    pdb_1408f1060(*param_12);
    fVar46 = fStack_284;
    auStack_218 = (undefined1  [8])CONCAT44(fStack_294,fStack_298);
    fStack_210 = fStack_290;
    fStack_20c = fStack_28c;
    uStack_1fc = uStack_27c;
    uStack_1f8 = uStack_278;
    uStack_1f4 = uStack_274;
    fStack_1f0 = fStack_270;
    fStack_1ec = fStack_26c;
    unaff_XMM7_Da = fVar60 - fStack_284;
    fVar52 = unaff_XMM7_Da * 0.0 + fStack_288;
    fStack_204 = unaff_XMM7_Da + fStack_284;
    fStack_200 = unaff_XMM7_Da * 0.0 + fStack_280;
    uStack_208 = SUB41(fVar52,0);
    uStack_207 = (undefined1)((uint)fVar52 >> 8);
    uStack_206 = (undefined1)((uint)fVar52 >> 0x10);
    uStack_205 = (undefined1)((uint)fVar52 >> 0x18);
    uVar21 = CONCAT44(uVar71,puStack_168[1]);
    uVar22 = CONCAT44(uVar68,*puStack_168);
    puVar27 = puStack_228;
    pdb_1414c4fb0(&iStack_4f8,auStack_218,uVar16,uStack_418,puStack_228,&uStack_2c0,&uStack_5b8,
                  uVar22,uVar21,apuStack_7f8,uStack_260,uStack_120);
    pcVar36 = pcStack_150;
    uVar64 = (undefined4)((ulonglong)puVar27 >> 0x20);
    uVar68 = (undefined4)((ulonglong)uVar22 >> 0x20);
    uVar71 = (undefined4)((ulonglong)uVar21 >> 0x20);
    if (iStack_4f8 == 1) {
      *plVar35 = 0;
      *(int *)(plVar35 + 2) = 0;
      plVar35[3] = CONCAT44(uStack_4f0,uStack_4f4);
      *(float *)(plVar35 + 4) = fStack_f4;
      *(undefined1 (*) [16])((longlong)plVar35 + 0x24) = (undefined1  [16])0x0;
      *(float *)((longlong)plVar35 + 0x34) = fVar46;
      cStack_f6 = *(char *)(uVar16 + 0x59);
      puStack_110 = puVar23;
      if (cStack_f6 != '\x01') {
        *puStack_160 = uVar15;
        lVar28 = *(longlong *)(puStack_108 + 0xc);
        uVar22 = *(undefined8 *)(puStack_108 + 0x10);
        if (lVar28 == *(longlong *)(puStack_108 + 8)) {
          pdb_142d7e980(puStack_108 + 8);
        }
        lVar32 = *(longlong *)(puStack_108 + 10);
        *(undefined8 *)(lVar32 + lVar28 * 0x10) = uVar22;
        *(undefined1 *)(lVar32 + 8 + lVar28 * 0x10) = 0;
        *(longlong *)(puStack_108 + 0xc) = lVar28 + 1;
        *(longlong *)(puStack_108 + 0x10) = *(longlong *)(puStack_108 + 0x10) + 1;
      }
      fVar46 = fStack_f4;
      puVar63 = &uStack_3f8;
      uVar14 = pdb_140c45920(puVar63,fStack_f4);
      pbVar5 = pbStack_128;
      uVar64 = (undefined4)((ulonglong)puVar27 >> 0x20);
      auStack_218._0_4_ = fVar46;
      puVar23 = puStack_110;
      plVar35 = plStack_100;
      if (*(longlong *)(pbStack_128 + 0x18) != 0) {
        pcStack_3e0 = pcVar36 + 0x20;
        uVar19 = pdb_1400aede0(pbStack_128 + 0x20,auStack_218);
        plVar35 = plStack_100;
        uVar64 = (undefined4)((ulonglong)puVar27 >> 0x20);
        lVar28 = *(longlong *)pbVar5;
        uVar20 = *(ulonglong *)(pbVar5 + 8);
        bVar10 = (byte)(uVar19 >> 0x39);
        auVar42 = ZEXT216(CONCAT11(bVar10,bVar10));
        auVar42 = pshuflw(auVar42,auVar42,0);
        lVar32 = 0;
        do {
          uVar19 = uVar19 & uVar20;
          auVar57 = *(undefined1 (*) [16])(lVar28 + uVar19);
          auVar58[0] = -(auVar57[0] == auVar42[0]);
          auVar58[1] = -(auVar57[1] == auVar42[1]);
          auVar58[2] = -(auVar57[2] == auVar42[2]);
          auVar58[3] = -(auVar57[3] == auVar42[3]);
          auVar58[4] = -(auVar57[4] == auVar42[4]);
          auVar58[5] = -(auVar57[5] == auVar42[5]);
          auVar58[6] = -(auVar57[6] == auVar42[6]);
          auVar58[7] = -(auVar57[7] == auVar42[7]);
          auVar58[8] = -(auVar57[8] == auVar42[0]);
          auVar58[9] = -(auVar57[9] == auVar42[1]);
          auVar58[10] = -(auVar57[10] == auVar42[2]);
          auVar58[0xb] = -(auVar57[0xb] == auVar42[3]);
          auVar58[0xc] = -(auVar57[0xc] == auVar42[4]);
          auVar58[0xd] = -(auVar57[0xd] == auVar42[5]);
          auVar58[0xe] = -(auVar57[0xe] == auVar42[6]);
          auVar58[0xf] = -(auVar57[0xf] == auVar42[7]);
          uVar31 = (ushort)(SUB161(auVar58 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar58[0xf] >> 7) << 0xf;
          uVar30 = (uint)uVar31;
          while (uVar31 != 0) {
            uVar3 = 0;
            for (uVar4 = uVar30; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            lVar33 = lVar28 + (uVar3 + uVar19 & uVar20) * -0x10;
            if (fStack_f4 == *(float *)(lVar33 + -0x10)) {
              lVar28 = *(longlong *)(lVar33 + -8);
              if ((*(byte *)(lVar28 + 0x10) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_14301cee0);
              }
              if ((cStack_f6 == '\x01') ||
                 (cVar9 = pdb_1408ff980(uStack_238), uVar8 = uStack_205, uVar7 = uStack_206,
                 uVar6 = uStack_207, uVar13 = uStack_208, cVar9 == '\0')) {
                puVar63 = puVar27;
                lVar32 = 0;
              }
              else {
                lVar32 = 0;
                if (1 < (ulonglong)*(byte *)(uVar16 + 0x32)) {
                  lVar32 = (ulonglong)*(byte *)(uVar16 + 0x32) - 1;
                }
                uStack_208 = SUB41(fStack_288,0);
                uStack_207 = (undefined1)((uint)fStack_288 >> 8);
                uStack_206 = (undefined1)((uint)fStack_288 >> 0x10);
                uStack_205 = (undefined1)((uint)fStack_288 >> 0x18);
                if (lVar32 == 0) {
                  auStack_218 = (undefined1  [8])CONCAT44(fStack_294,fStack_298);
                  uStack_1f8 = uStack_278;
                  uStack_1f4 = uStack_274;
                  fStack_1f0 = fStack_270;
                  fStack_1ec = fStack_26c;
                  fStack_204 = fStack_284;
                  fStack_200 = fStack_280;
                  uStack_1fc = uStack_27c;
                  fStack_210 = fStack_290;
                  fStack_20c = fStack_28c;
                  uVar20 = pdb_1414c6700(auStack_218,pcStack_3e0,uVar16,lVar28 + 0x20,puVar63,
                                         fStack_f4,uStack_120);
                  lVar32 = 1;
                }
                else {
                  if ((int)lVar32 != 1) {
                    uStack_208 = uVar13;
                    uStack_207 = uVar6;
                    uStack_206 = uVar7;
                    uStack_205 = uVar8;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14300d340,0xaf,&UNK_14300d398);
                  }
                  auStack_218 = (undefined1  [8])CONCAT44(fStack_294,fStack_298);
                  uStack_1f8 = uStack_278;
                  uStack_1f4 = uStack_274;
                  fStack_1f0 = fStack_270;
                  fStack_1ec = fStack_26c;
                  fStack_204 = fStack_284;
                  fStack_200 = fStack_280;
                  uStack_1fc = uStack_27c;
                  fStack_210 = fStack_290;
                  fStack_20c = fStack_28c;
                  plVar70 = &lStack_488;
                  puVar63 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar27 >> 8),(char)uVar14);
                  uVar20 = uVar16;
                  uVar22 = uStack_418;
                  lVar32 = pdb_1414c8680(pcStack_3e0,uVar16,auStack_218,fStack_f4,puVar63,
                                         &uStack_2c0,uStack_120,uStack_418,plVar70,&lStack_568);
                  uVar68 = (undefined4)((ulonglong)uVar22 >> 0x20);
                  uVar71 = (undefined4)((ulonglong)plVar70 >> 0x20);
                }
              }
              puVar23 = puStack_110;
              uVar64 = (undefined4)((ulonglong)puVar63 >> 0x20);
              *plVar35 = lVar32;
              plVar35[1] = uVar20;
              *(float *)((longlong)plVar35 + 0x24) = unaff_XMM7_Da;
              if (pcStack_150[0x6c] != '\0') {
                uVar21 = pdb_140c44e40(puStack_500,cStack_f6,uVar14);
                auStack_218 = *(undefined1 (*) [8])(lVar28 + 0x20);
                uVar22 = *(undefined8 *)(lVar28 + 0x30);
                uStack_1f8 = (uint)*(undefined8 *)(lVar28 + 0x40);
                uStack_1f4 = (uint)((ulonglong)*(undefined8 *)(lVar28 + 0x40) >> 0x20);
                fStack_1f0 = (float)*(undefined8 *)(lVar28 + 0x48);
                fStack_1ec = (float)((ulonglong)*(undefined8 *)(lVar28 + 0x48) >> 0x20);
                uStack_208 = (undefined1)uVar22;
                uStack_207 = (undefined1)((ulonglong)uVar22 >> 8);
                uStack_206 = (undefined1)((ulonglong)uVar22 >> 0x10);
                uStack_205 = (undefined1)((ulonglong)uVar22 >> 0x18);
                fStack_204 = (float)((ulonglong)uVar22 >> 0x20);
                fStack_200 = (float)*(undefined8 *)(lVar28 + 0x38);
                uStack_1fc = (undefined4)((ulonglong)*(undefined8 *)(lVar28 + 0x38) >> 0x20);
                fStack_210 = (float)*(undefined8 *)(lVar28 + 0x28);
                fStack_20c = (float)((ulonglong)*(undefined8 *)(lVar28 + 0x28) >> 0x20);
                pdb_140df45e0(&uStack_208,lVar28 + 0x30);
                puStack_3c8 = (undefined8 *)
                              CONCAT44(fStack_204,
                                       CONCAT13(uStack_205,
                                                CONCAT12(uStack_206,CONCAT11(uStack_207,uStack_208))
                                               ));
                pcStack_3c0 = (char *)CONCAT44(uStack_1fc,fStack_200);
                plStack_3b8 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
                uStack_3b0 = (undefined8 *)CONCAT44(fStack_1ec,fStack_1f0);
                uStack_3d8._0_4_ = auStack_218._0_4_;
                uStack_3d8._4_4_ = auStack_218._4_4_;
                uStack_3d0._0_4_ = fStack_210;
                uStack_3d0._4_4_ = fStack_20c;
                if (*(byte *)(uVar16 + 0x32) < 2) {
                  uVar22 = pdb_140c413f0(&uStack_2c0);
                  lVar28 = pdb_140b54f80(uStack_418,uVar22,&UNK_14300d328);
                  if (lVar28 == 0) goto LAB_140866a7c;
                  bVar37 = *(uint *)(lVar28 + 600) < 2;
                }
                else {
LAB_140866a7c:
                  bVar37 = false;
                }
                fVar46 = fStack_f4;
                uVar64 = (undefined4)((ulonglong)puVar63 >> 0x20);
                if ((int)pbStack_130 != 7) {
                  pdb_1408697c0(auStack_218,&uStack_3d8);
                  puVar23 = puStack_110;
                  uVar22 = CONCAT71((int7)((ulonglong)puVar63 >> 8),cStack_f6);
                  pdb_140c68730(uVar21,auStack_218,uStack_120,fVar46,uVar22,bVar37,1);
                  uVar64 = (undefined4)((ulonglong)uVar22 >> 0x20);
                }
              }
              goto LAB_140866ad4;
            }
            uVar31 = (ushort)(uVar30 - 1) & (ushort)uVar30;
            uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar31);
          }
          auVar54[0] = -(auVar57[0] == -1);
          auVar54[1] = -(auVar57[1] == -1);
          auVar54[2] = -(auVar57[2] == -1);
          auVar54[3] = -(auVar57[3] == -1);
          auVar54[4] = -(auVar57[4] == -1);
          auVar54[5] = -(auVar57[5] == -1);
          auVar54[6] = -(auVar57[6] == -1);
          auVar54[7] = -(auVar57[7] == -1);
          auVar54[8] = -(auVar57[8] == -1);
          auVar54[9] = -(auVar57[9] == -1);
          auVar54[10] = -(auVar57[10] == -1);
          auVar54[0xb] = -(auVar57[0xb] == -1);
          auVar54[0xc] = -(auVar57[0xc] == -1);
          auVar54[0xd] = -(auVar57[0xd] == -1);
          auVar54[0xe] = -(auVar57[0xe] == -1);
          auVar54[0xf] = -(auVar57[0xf] == -1);
          puVar23 = puStack_110;
          if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar54 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar54 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar54 >> 0x2f,0) & 1) != 0) || (SUB161(auVar54 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') break;
          uVar19 = uVar19 + lVar32 + 0x10;
          lVar32 = lVar32 + 0x10;
        } while( true );
      }
    }
LAB_140866ad4:
    pcVar36 = pcStack_150;
    if (*plVar35 == 2) {
      return;
    }
  }
  iStack_4f8 = 3;
  uStack_4f4 = 0;
  auStack_498[0] = 0;
  auStack_496[0] = 0;
  uStack_4a8 = 0;
  auStack_494[0] = 2;
  auStack_4a0[0] = 0;
  auStack_4b8[0] = 8;
  bVar11 = pdb_1408ffab0(&uStack_2a8);
  fVar40 = fStack_28c;
  fVar41 = fStack_290;
  fVar52 = fStack_294;
  fVar46 = fStack_298;
  bVar10 = 3;
  if (1 < bVar11) {
    bVar10 = bVar11 - 2;
  }
  pfVar18 = (float *)(&UNK_14300d784 + *(int *)(&UNK_14300d784 + (ulonglong)bVar10 * 4));
  puVar27 = puVar23;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar10) {
  case 0:
    goto LAB_14086862b;
  case 1:
    if ((int)*plVar35 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300d3b0);
    }
    lVar28 = *(longlong *)(pcVar36 + 0x38);
    *(int *)(plVar35 + 6) = *(int *)(pcVar36 + 0x40);
    plVar35[5] = lVar28;
    pdb_140a34d20(auStack_218,apuStack_7f8[0]);
    fVar60 = (float)(auStack_218._0_4_ ^ _DAT_142e377a0);
    fVar61 = (float)(auStack_218._4_4_ ^ _UNK_142e377a4);
    fVar44 = (float)((uint)fStack_210 ^ _UNK_142e377a8);
    fVar39 = (float)((uint)fStack_20c ^ _UNK_142e377ac);
    fVar55 = fVar44 * fVar46 * _UNK_142e377b4;
    fVar56 = fVar61 * fVar46 * _UNK_142e377b8;
    fVar59 = fVar60 * fVar46 * _UNK_142e377bc;
    fVar49 = fVar39 * fVar52 * _UNK_142e377c4;
    fVar38 = fVar60 * fVar52 * _UNK_142e377c8;
    fVar50 = fVar61 * fVar52 * _UNK_142e377cc;
    fVar43 = fVar60 * fVar41 * _UNK_142e377d4;
    fVar51 = fVar39 * fVar41 * _UNK_142e377d8;
    fVar45 = fVar44 * fVar41 * _UNK_142e377dc;
    *pfStack_220 = fVar61 * fVar41 * _DAT_142e377d0 + fVar44 * fVar52 * _DAT_142e377c0 +
                   fVar39 * fVar46 * _DAT_142e377b0 + fVar40 * fVar60;
    pfStack_220[1] = fVar43 + fVar49 + fVar55 + fVar40 * fVar61;
    pfStack_220[2] = fVar51 + fVar38 + fVar56 + fVar40 * fVar44;
    pfStack_220[3] = fVar45 + fVar50 + fVar59 + fVar40 * fVar39;
    if (*plVar35 != 0) {
      *puStack_160 = uVar15;
      lVar28 = *(longlong *)(puStack_108 + 0xc);
      uVar22 = *(undefined8 *)(puStack_108 + 0x10);
      if (lVar28 == *(longlong *)(puStack_108 + 8)) {
        pdb_142d7e980(puStack_108 + 8);
      }
      lVar32 = *(longlong *)(puStack_108 + 10);
      *(undefined8 *)(lVar32 + lVar28 * 0x10) = uVar22;
      *(undefined1 *)(lVar32 + 8 + lVar28 * 0x10) = 1;
      *(longlong *)(puStack_108 + 0xc) = lVar28 + 1;
      *(longlong *)(puStack_108 + 0x10) = *(longlong *)(puStack_108 + 0x10) + 1;
    }
    if ((int)pbStack_130 == 6) {
      fStack_200 = *(float *)(plVar35 + 6);
      lVar28 = plVar35[5];
      uStack_208 = (undefined1)lVar28;
      uStack_207 = (undefined1)((ulonglong)lVar28 >> 8);
      uStack_206 = (undefined1)((ulonglong)lVar28 >> 0x10);
      uStack_205 = (undefined1)((ulonglong)lVar28 >> 0x18);
      fStack_204 = (float)((ulonglong)lVar28 >> 0x20);
      *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
      lVar28 = *param_11;
      lVar32 = *(longlong *)(lVar28 + 0x30);
      uVar22 = *(undefined8 *)(lVar28 + 0x40);
      if (lVar32 == *(longlong *)(lVar28 + 0x20)) {
        pdb_142d7e7c0(lVar28 + 0x20);
      }
      lVar33 = *(longlong *)(lVar28 + 0x28);
      lVar24 = lVar32 * 0x30;
      *(undefined8 *)(lVar33 + lVar24) = 0x2b;
      plVar70 = (longlong *)(lVar33 + 8 + lVar24);
      *plVar70 = (longlong)auStack_218;
      plVar70[1] = CONCAT44(fStack_20c,fStack_210);
      puVar27 = (undefined8 *)(lVar33 + 0x14 + lVar24);
      *puVar27 = CONCAT17(uStack_205,
                          CONCAT16(uStack_206,CONCAT15(uStack_207,CONCAT14(uStack_208,fStack_20c))))
      ;
      puVar27[1] = CONCAT44(fStack_200,fStack_204);
      *(undefined1 *)(lVar33 + 0x24 + lVar24) = 0;
      *(undefined8 *)(lVar33 + 0x28 + lVar24) = uVar22;
      *(longlong *)(lVar28 + 0x30) = lVar32 + 1;
      *(longlong *)(lVar28 + 0x40) = *(longlong *)(lVar28 + 0x40) + 1;
    }
    lVar28 = *param_12;
    if (*(char *)(lVar28 + 0x281) == '\0') {
      *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
      *(undefined1 *)(lVar28 + 0x282) = 1;
      return;
    }
    break;
  case 2:
    if ((int)*plVar35 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300d3c8);
    }
    break;
  case 3:
    if ((int)pbStack_130 == 6) {
      *(undefined4 *)param_16[2] = *(undefined4 *)((longlong)param_16 + 0x1c);
      lVar28 = *param_16;
      lVar32 = *(longlong *)(lVar28 + 0x30);
      uVar22 = *(undefined8 *)(lVar28 + 0x40);
      if (lVar32 == *(longlong *)(lVar28 + 0x20)) {
        pdb_142d7e8a0(lVar28 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar28 + 0x28) + lVar32 * 8) = uVar22;
      *(longlong *)(lVar28 + 0x30) = lVar32 + 1;
      *(longlong *)(lVar28 + 0x40) = *(longlong *)(lVar28 + 0x40) + 1;
    }
    lVar28 = *plVar35;
    *plVar35 = 2;
    if (lVar28 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300d3e0);
    }
    lStack_598 = plVar35[1];
    lStack_590 = plVar35[2];
    lStack_588 = plVar35[3];
    uStack_580 = plVar35[4];
    lVar32 = plVar35[5];
    lStack_570 = plVar35[6];
    puVar2 = (undefined4 *)param_12[2];
    *puVar2 = *(undefined4 *)((longlong)param_12 + 0x1c);
    *(undefined1 *)(*param_12 + 0x280) = 1;
    uStack_578._4_4_ = (float)((ulonglong)lVar32 >> 0x20);
    fVar61 = uStack_578._4_4_ - *(float *)(pcVar36 + 0x3c);
    uStack_578._0_4_ = (float)lVar32;
    fVar52 = (float)uStack_578;
    fVar41 = (float)lStack_570;
    fVar60 = *(float *)(pcVar36 + 0x38);
    fVar46 = *(float *)(pcVar36 + 0x40);
    lStack_5a0 = lVar28;
    uStack_578 = lVar32;
    fVar40 = (float)pdb_1414c7800(puVar2,apuStack_7f8[0],(float)*(uint *)(lStack_7d8 + 4));
    plVar35 = &lStack_5a0;
    if ((lVar28 == 0) &&
       (SQRT((fVar41 - fVar46) * (fVar41 - fVar46) +
             fVar61 * fVar61 + (fVar52 - fVar60) * (fVar52 - fVar60)) * fVar40 < _DAT_142e37830)) {
      uVar22 = *(undefined8 *)(pcVar36 + 0x10);
      uVar21 = *(undefined8 *)(pcVar36 + 0x18);
      cVar9 = pdb_1409012e0(uVar22,uVar21);
      fVar46 = fStack_f4;
      uVar16 = uStack_118;
      if (cVar9 != '\0') {
        auStack_218 = (undefined1  [8])uStack_118;
        fStack_210 = SUB84(puVar23,0);
        fStack_20c = (float)((ulonglong)puVar23 >> 0x20);
        uStack_208 = 3;
        uStack_207 = 0;
        uStack_206 = 0;
        uStack_205 = 0;
        fStack_204 = 0.0;
        uStack_1c8 = 8;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        uStack_1a6 = 0x101;
        uStack_1a4 = 2;
        fStack_190 = fStack_f4;
        uStack_3d0._0_4_ = fStack_280;
        uStack_3d0._4_4_ = (float)((uint)uStack_3d0._4_4_ & 0xffffff00);
        *puStack_248 = uStack_240._4_4_;
        *puStack_2d8 = uStack_2d0._4_4_;
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        uStack_1a0 = uVar22;
        uStack_198 = uVar21;
        pdb_1414c40f0(auStack_218,uStack_f5,&uStack_3d8,uStack_258,uStack_2e8,*param_6,&uStack_678,
                      uStack_548);
        return;
      }
      if ((int)pbStack_130 != 7) {
        return;
      }
      *pfStack_2b0 = fStack_16c;
      puVar27 = (undefined8 *)(ulonglong)(uint)fStack_f4;
      pdb_140901390(auStack_218,uStack_118,puVar23,fStack_f4);
      pcVar36 = uStack_158;
      pdb_140a60230(uStack_158,auStack_218);
      fVar60 = uStack_580._4_4_;
      if (((uStack_580._4_4_ == 0.0) && (!NAN(uStack_580._4_4_))) &&
         (lVar28 = pdb_140c3d060(uStack_258,uVar16,puVar23,fVar46), lVar28 != 0)) {
        pfVar18 = (float *)pdb_140901490(lVar28 + 0x38,&UNK_14300d590);
        unaff_XMM7_Da = fStack_284;
        goto code_r0x000140867870;
      }
      uStack_207 = false;
      goto code_r0x0001408678ec;
    }
    break;
  case 4:
    goto code_r0x000140867787;
  case 5:
code_r0x000140867870:
    uStack_207 = _DAT_142e37838 <= *pfVar18;
    fStack_284 = unaff_XMM7_Da;
code_r0x0001408678ec:
    auStack_218._4_4_ = fStack_284;
    auStack_218._0_4_ = 1;
    uStack_208 = 0;
    uStack_206 = 0;
    fStack_210 = fVar60;
    fStack_20c = fStack_284;
    pdb_1414af100(&uStack_698,auStack_218,&UNK_14300d548);
    uVar22 = pdb_140a61160(pcVar36);
    uVar20 = (ulonglong)puVar27 & 0xffffffff;
    uVar16 = pdb_1414aef60(uVar22);
    if (uVar16 == uVar20) {
      if (*pcStack_230 != '\x06') goto code_r0x000140867b3c;
      bVar37 = false;
    }
    else {
      uVar16 = (uVar20 - uVar16) - 8;
      bVar37 = 7 < uVar16;
      if (*pcStack_230 != '\x06') {
        if (7 < uVar16) {
          return;
        }
        goto code_r0x000140867b3c;
      }
    }
    if (bVar37) {
      return;
    }
    if ((int)*(undefined8 *)(pcStack_230 + 8) == 7) {
      return;
    }
code_r0x000140867b3c:
    auStack_218[0] = 6;
    fStack_210 = 9.80909e-45;
    fStack_20c = 0.0;
    pdb_1414af090(&uStack_6b8,auStack_218,&UNK_14300d560);
    pdb_140314c70(&lStack_718,&UNK_14300d578);
    return;
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  fVar60 = fStack_f4;
  lVar28 = pdb_140c3d060(uStack_258,uStack_118,puVar23,fStack_f4);
  if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300d3f8);
  }
  *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
  puVar66 = auStack_850;
  puStack_110 = puVar23;
  pdb_140901700(puVar66,*param_8,(byte)uStack_134 < 2);
  uVar21 = uStack_3e8;
  uVar22 = uStack_418;
  plStack_100 = plVar35;
  if ((char)*plVar35 == '\0') {
    puStack_318 = (uint *)CONCAT44(fStack_294,fStack_298);
    uStack_310 = CONCAT44(fStack_28c,fStack_290);
    uStack_308 = (uint *)CONCAT44(fStack_284,fStack_288);
    uStack_2f0 = CONCAT44(fStack_26c,fStack_270);
    uStack_2f8 = uStack_278;
    uStack_2f4 = uStack_274;
    fStack_300 = fStack_280;
    uStack_2fc = uStack_27c;
    pbStack_128 = (byte *)0x4;
    puStack_108 = (uint *)0x0;
    puStack_160 = (undefined4 *)0x0;
  }
  else {
    lVar32 = plVar35[1];
    lVar33 = 0;
    if (1 < (ulonglong)*(byte *)(lVar28 + 0x32)) {
      lVar33 = (ulonglong)*(byte *)(lVar28 + 0x32) - 1;
    }
    if (lVar33 == 0) {
      *puStack_248 = uStack_240._4_4_;
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      *puStack_2d8 = uStack_2d0._4_4_;
      *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
      in_stack_fffffffffffff770 =
           CONCAT71((int7)((ulonglong)in_stack_fffffffffffff770 >> 8),uStack_f5);
      puVar23 = &uStack_3f8;
      uVar22 = CONCAT44(uVar64,fVar60);
      pdb_1414c5500(auStack_218,lVar32,uStack_258,&uStack_2c0,uVar22,uStack_418,uStack_3e8,puVar23,
                    puVar66,uStack_2e8,*param_6,uStack_548,&uStack_678,in_stack_fffffffffffff770);
      uVar64 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar68 = (undefined4)((ulonglong)puVar23 >> 0x20);
      uVar71 = (undefined4)((ulonglong)puVar66 >> 0x20);
      fVar60 = (float)auStack_218._0_4_;
      puStack_108 = (uint *)CONCAT44(fStack_20c,fStack_210);
      pbStack_128 = (byte *)CONCAT44(fStack_204,
                                     CONCAT13(uStack_205,
                                              CONCAT12(uStack_206,CONCAT11(uStack_207,uStack_208))))
      ;
      puStack_160 = (undefined4 *)CONCAT44(uStack_1fc,fStack_200);
      pdb_140c45ec0(&puStack_318,uVar21,(ulonglong)auStack_218 & 0xffffffff,&UNK_14300d410);
    }
    else {
      if ((int)lVar33 != 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14300d2e8,0x28,&UNK_14300d470);
      }
      uVar16 = pdb_140c413f0(&uStack_2c0);
      uVar20 = pdb_140b54b40(uVar22);
      fVar60 = fStack_210;
      if ((uVar20 & 0xffffffff) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14300d428);
      }
      uVar19 = uVar20 & 0xffffffff ^ 0xffffffff;
      uVar15 = 1;
      fStack_210 = (float)uVar20;
      fVar46 = fStack_210;
      iVar34 = (int)(uVar20 >> 0x20);
      if (*(ulonglong *)(lStack_480 + 0x10) <= uVar19) {
code_r0x000140868764:
        auStack_218._4_4_ = (int)uVar16;
        auStack_218._0_4_ = uVar15;
        fStack_20c = (float)iVar34;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14300d690,0x2b,auStack_218,&UNK_14300d670,&UNK_14300d440);
      }
      piVar29 = (int *)(*(longlong *)(lStack_480 + 8) + uVar19 * 0x18);
      if ((piVar29[4] != iVar34) || (*piVar29 == 0)) goto code_r0x000140868764;
      uVar16 = *(ulonglong *)(piVar29 + 2);
      uVar15 = 0;
      if ((*(ulonglong *)(lStack_488 + 0x38) <= (uVar16 & 0xffffffff)) ||
         ((*(ulonglong *)(*(longlong *)(lStack_488 + 0x28) + (uVar16 >> 6 & 0x3ffffff) * 8) >>
           (uVar16 & 0x3f) & 1) == 0)) goto code_r0x000140868764;
      if (*(ulonglong *)(lStack_488 + 0x110) <
          *(ulonglong *)(*(longlong *)(lStack_480 + 0x1a0) + 0x40 + (uVar16 >> 0x20) * 0x48)) {
        lVar28 = *(longlong *)(lStack_480 + 0x1a0) + (uVar16 >> 0x20) * 0x48;
        uVar16 = *(ulonglong *)
                  (*(longlong *)(lVar28 + 0x38) + *(ulonglong *)(lStack_488 + 0x110) * 8);
        if (uVar16 == 0) goto code_r0x000140867291;
        in_stack_fffffffffffff770 =
             *(longlong *)(*(longlong *)(lVar28 + 0x18) + 0x10 + ~uVar16 * 0x30);
      }
      else {
code_r0x000140867291:
        in_stack_fffffffffffff770 = 0;
      }
      in_stack_fffffffffffff770 = (ulonglong)(uint)~piVar29[1] * 0x58 + in_stack_fffffffffffff770;
      *puStack_248 = uStack_240._4_4_;
      *puStack_2d8 = uStack_2d0._4_4_;
      *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
      uVar21 = CONCAT44(uVar64,fStack_f4);
      uVar22 = uStack_2e8;
      fStack_210 = fVar60;
      pdb_1414c7820(auStack_218,lVar32,uStack_258,&uStack_2c0,uVar21,&fStack_298,&uStack_3f8,puVar66
                    ,uStack_2e8,*param_6,uStack_548,&uStack_678,uStack_f5,in_stack_fffffffffffff770)
      ;
      fVar60 = fStack_200;
      uVar68 = (undefined4)((ulonglong)puVar66 >> 0x20);
      uVar71 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar64 = (undefined4)((ulonglong)uVar21 >> 0x20);
      uVar16 = (ulonglong)(uint)fStack_200;
      pbStack_128 = (byte *)CONCAT44(fStack_20c,fStack_210);
      puStack_160 = (undefined4 *)
                    CONCAT44(fStack_204,
                             CONCAT13(uStack_205,
                                      CONCAT12(uStack_206,CONCAT11(uStack_207,uStack_208))));
      plStack_3b8 = plStack_1d8;
      puStack_3c8 = puStack_1e8;
      pcStack_3c0 = pcStack_1e0;
      uStack_3d8._0_4_ = uStack_1f8;
      uStack_3d8._4_4_ = uStack_1f4;
      uStack_3d0._0_4_ = fStack_1f0;
      uStack_3d0._4_4_ = fStack_1ec;
      uVar15 = 1;
      puStack_108 = (uint *)auStack_218;
      if (((*(ulonglong *)(lStack_560 + 0x10) <= uVar19) ||
          (piVar29 = (int *)(uVar19 * 0x18 + *(longlong *)(lStack_560 + 8)), piVar29[4] != iVar34))
         || (*piVar29 == 0)) {
code_r0x0001408687a2:
        auStack_218._4_4_ = (int)uVar16;
        auStack_218._0_4_ = uVar15;
        fStack_210 = fVar46;
        fStack_20c = (float)iVar34;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14300d690,0x2b,auStack_218,&UNK_14300d670,&UNK_14300d458);
      }
      uVar16 = *(ulonglong *)(piVar29 + 2);
      uVar15 = 0;
      if ((*(ulonglong *)(lStack_568 + 0x38) <= (uVar16 & 0xffffffff)) ||
         ((*(ulonglong *)(*(longlong *)(lStack_568 + 0x28) + (uVar16 >> 6 & 0x3ffffff) * 8) >>
           (uVar16 & 0x3f) & 1) == 0)) goto code_r0x0001408687a2;
      if (*(ulonglong *)(lStack_568 + 0x110) <
          *(ulonglong *)(*(longlong *)(lStack_560 + 0x1a0) + 0x40 + (uVar16 >> 0x20) * 0x48)) {
        lVar28 = *(longlong *)(lStack_560 + 0x1a0) + (uVar16 >> 0x20) * 0x48;
        uVar16 = *(ulonglong *)
                  (*(longlong *)(lVar28 + 0x38) + *(ulonglong *)(lStack_568 + 0x110) * 8);
        if (uVar16 == 0) goto code_r0x000140867455;
        lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x18) + 0x10 + ~uVar16 * 0x30);
      }
      else {
code_r0x000140867455:
        lVar28 = 0;
      }
      uVar30 = piVar29[1];
      pdb_140901080(&uStack_3d8);
      pdb_140a0a130(auStack_218,lVar28 + (ulonglong)~uVar30 * 0x48);
      uStack_350 = CONCAT44(uStack_350._4_4_,fStack_280);
      puStack_358 = (uint *)CONCAT44(fStack_284,fStack_288);
      ppuVar25 = &puStack_358;
      if (auStack_218[0] != '\0') {
        ppuVar25 = (uint **)(auStack_218 + 4);
      }
      uStack_308 = *ppuVar25;
      fStack_300 = *(float *)(ppuVar25 + 1);
      puStack_318 = (uint *)CONCAT44(fStack_294,fStack_298);
      uStack_310 = CONCAT44(fStack_28c,fStack_290);
      uStack_2fc = 0x3f800000;
      uStack_2f8 = 0x3f800000;
      uStack_2f4 = 0x3f800000;
    }
  }
  *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
  fStack_2c4 = fVar60;
  fStack_f4 = fVar60;
  cVar9 = pdb_1408ffab0(&uStack_2a8);
  if ((cVar9 == '\x03') && (puStack_160 != (undefined4 *)0x0)) {
    lVar28 = pdb_140c3d060(uStack_258,uStack_118,puStack_110,fStack_f4);
    if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300d488);
    }
    fVar60 = *(float *)((longlong)plStack_100 + 0x24) * _DAT_142e378e0;
    fVar46 = SUB84(uStack_308,0) + fVar60;
    fStack_204 = (float)((ulonglong)uStack_308 >> 0x20) +
                 *(float *)((longlong)plStack_100 + 0x24) * _UNK_142e378e4;
    uStack_308 = (uint *)CONCAT44(fStack_204,fVar46);
    fStack_300 = fVar60 + fStack_300;
    auStack_218 = (undefined1  [8])puStack_318;
    fStack_210 = (float)uStack_310;
    fStack_20c = (float)((ulonglong)uStack_310 >> 0x20);
    uStack_1f8 = uStack_2f8;
    uStack_1f4 = uStack_2f4;
    fStack_1f0 = (float)uStack_2f0;
    fStack_1ec = (float)((ulonglong)uStack_2f0 >> 0x20);
    uStack_208 = SUB41(fVar46,0);
    uStack_207 = (undefined1)((uint)fVar46 >> 8);
    uStack_206 = (undefined1)((uint)fVar46 >> 0x10);
    uStack_205 = (undefined1)((uint)fVar46 >> 0x18);
    uStack_1fc = uStack_2fc;
    fStack_200 = fStack_300;
    pdb_1414c4fb0(&uStack_3d8,auStack_218,lVar28,uStack_418,puStack_228,&uStack_2c0,&uStack_5b8,
                  CONCAT44(uVar68,*puStack_168),CONCAT44(uVar71,puStack_168[1]),apuStack_7f8,
                  uStack_260,uStack_120);
    plVar35 = plStack_100;
    if ((uint)uStack_3d8 == 1) {
      plStack_100[3] = CONCAT44((float)uStack_3d0,uStack_3d8._4_4_);
      uStack_1f8 = *(uint *)(plVar35 + 6);
      lVar28 = plVar35[5];
      fStack_200 = (float)lVar28;
      uStack_1fc = (undefined4)((ulonglong)lVar28 >> 0x20);
      auStack_218 = (undefined1  [8])0x13;
      uStack_1f4 = uStack_1f4 & 0xffffff00;
      pdb_1414af010(param_11,auStack_218,&UNK_14300d4a0);
    }
  }
  else {
    puVar23 = (undefined8 *)pdb_140c3d060(uStack_258,uStack_118,puStack_110,fStack_f4);
    if (puVar23 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300d4b8);
    }
    puStack_228 = (undefined8 *)
                  CONCAT71(puStack_228._1_7_,*(undefined1 *)((longlong)puVar23 + 0x32));
    uVar22 = *puVar23;
    uVar21 = puVar23[1];
    ppuVar67 = apuStack_7f8;
    uVar62 = CONCAT44(uVar64,puStack_168[1]);
    uVar65 = uVar22;
    uVar69 = uStack_260;
    pdb_1414c4db0(&uStack_468);
    pdb_1414c9360(&uStack_3d8,&fStack_2c4,puVar23,&uStack_468,uVar62,uVar65,uVar21,ppuVar67,uVar69);
    uVar68 = (undefined4)((ulonglong)uVar69 >> 0x20);
    uVar64 = (undefined4)((ulonglong)uVar65 >> 0x20);
    uVar15 = (undefined4)((ulonglong)uVar62 >> 0x20);
    if (((uint)uStack_3d8 & 0xff) != 4) {
      pfVar18 = (float *)(ulonglong)((uint)uStack_3d8 & 0xff);
code_r0x000140867787:
                    /* WARNING: Could not recover jumptable at 0x000140867795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14300d794 + *(int *)(&UNK_14300d794 + (longlong)pfVar18 * 4)))();
      return;
    }
    uStack_330 = (undefined8 *)CONCAT44(2,(undefined4)uStack_330);
    uVar21 = pdb_140a34500(auStack_218,apuStack_7f8[0]);
    plVar35 = plStack_100;
    fVar46 = (float)auStack_218._0_4_ - fStack_450;
    fVar60 = fStack_210 - fStack_448;
    fVar52 = _DAT_142e36f28 / SQRT(fVar60 * fVar60 + fVar46 * fVar46);
    pfStack_220 = (float *)CONCAT44(pfStack_220._4_4_,
                                    (int)CONCAT71((int7)((ulonglong)uVar21 >> 8),
                                                  fVar52 * fVar60 * fStack_43c +
                                                  fVar46 * fVar52 * fStack_444 <= 0.0));
    fStack_424 = fStack_450;
    fStack_420 = fStack_44c;
    fStack_41c = fStack_448;
    if ((char)plStack_100[2] == '\0') {
      fVar60 = uStack_308._4_4_ + *(float *)((longlong)plStack_100 + 0x24);
      *(int *)(plStack_100 + 2) = 1;
      *(float *)((longlong)plVar35 + 0x14) = fVar60;
    }
    fVar60 = *(float *)(plVar35 + 5);
    fVar46 = *(float *)((longlong)plVar35 + 0x2c);
    fVar52 = *(float *)(plVar35 + 6);
    pcStack_230 = (char *)CONCAT44(pcStack_230._4_4_,*(undefined4 *)(pcStack_150 + 0x38));
    fStack_16c = *(float *)(pcStack_150 + 0x3c);
    pfStack_2b0 = (float *)CONCAT44(pfStack_2b0._4_4_,*(undefined4 *)(pcStack_150 + 0x40));
    fVar41 = (float)pdb_1414c7800();
    if ((*(float *)((longlong)plStack_100 + 0x24) != 0.0) ||
       (puVar26 = apuStack_7f8[0], NAN(*(float *)((longlong)plStack_100 + 0x24)))) {
      puVar26 = &UNK_14300d4d0;
      pfVar18 = (float *)pdb_140901490(puVar23 + 7,&UNK_14300d4d0);
      if (*pfVar18 < _DAT_142e37838) goto code_r0x000140867d8e;
      cVar9 = '\x01';
      uVar21 = uStack_238;
    }
    else {
code_r0x000140867d8e:
      cVar9 = '\0';
      uVar21 = uStack_238;
    }
    uStack_238 = uVar21;
    if ((int)uVar22 == 7) {
      if ((byte)puStack_228 < 2) {
        cVar12 = pdb_1408ff980(uVar21);
code_r0x000140867dbf:
        plVar35 = plStack_100;
        uStack_158 = (char *)CONCAT44(uStack_158._4_4_,
                                      (int)CONCAT71((int7)((ulonglong)puVar26 >> 8),1));
        if ((cVar12 != '\0') || ((char)uStack_468 == '\x02' && (uStack_468 & 0x100) == 0))
        goto code_r0x000140867e30;
        if ((uStack_330._4_4_ != 2.8026e-45) && ((byte)((char)puStack_348 - 1U) < 2)) {
          uStack_158 = (char *)((ulonglong)uStack_158._4_4_ << 0x20);
          goto code_r0x000140867e30;
        }
        *(int *)(plStack_100 + 2) = 1;
        *(float *)((longlong)plVar35 + 0x14) = fStack_44c;
        uStack_158 = (char *)((ulonglong)uStack_158._4_4_ << 0x20);
      }
      else {
        cVar12 = pdb_1408ff980(uVar21);
        uStack_158 = (char *)CONCAT44(uStack_158._4_4_,
                                      (int)CONCAT71((int7)((ulonglong)uVar21 >> 8),1));
        if ((cVar12 == '\0') &&
           (cVar12 = cVar9, *(float *)((longlong)plStack_100 + 0x34) <= fStack_44c))
        goto code_r0x000140867dbf;
code_r0x000140867e30:
        *(int *)(plStack_100 + 2) = 0;
      }
      cVar12 = pdb_1408ff980(uStack_238);
      if (cVar12 == '\0') {
        cVar12 = (char)plStack_100[2];
        fVar40 = *(float *)((longlong)plStack_100 + 0x14);
      }
      else {
        fVar40 = *(float *)((longlong)plStack_100 + 0x34) + *(float *)((longlong)plStack_100 + 0x24)
        ;
        cVar12 = '\x01';
      }
      if ((cVar9 != '\0' || (char)uStack_158 != '\0') ||
         ((uStack_330._4_4_ != 2.8026e-45 && ((byte)((char)puStack_348 - 1U) < 2)))) {
        pdb_140a6ad50(lStack_7d8);
        pdb_1414c9450(auStack_868);
        uVar22 = uStack_418;
        fVar61 = *(float *)((longlong)plStack_100 + 0x24);
        if (cVar12 == '\0') {
          fVar40 = uStack_308._4_4_ + fVar61;
        }
        ppuVar25 = &puStack_358;
        if (uStack_330._4_4_ == 2.8026e-45) {
          ppuVar25 = (uint **)0x0;
        }
        pub_142e32760(auStack_218,apuStack_7f8,0xa0);
        pdb_140869360(&uStack_3d8,auStack_218,uVar22,uStack_260,CONCAT44(uVar15,fVar61),ppuVar25,
                      (ulonglong)uStack_158 & 0xff,auStack_868,CONCAT44(uVar68,fVar40),&fStack_424);
        uVar64 = (undefined4)((ulonglong)ppuVar25 >> 0x20);
        if (uStack_3b0._4_4_ != 2) {
          puStack_358 = (uint *)CONCAT44(uStack_3d8._4_4_,(uint)uStack_3d8);
          uStack_350 = CONCAT44(uStack_3d0._4_4_,(float)uStack_3d0);
          puStack_328 = puStack_3a8;
          pcStack_320 = pcStack_3a0;
          plStack_338 = plStack_3b8;
          uStack_330 = uStack_3b0;
          puStack_348 = puStack_3c8;
          pcStack_340 = pcStack_3c0;
          uStack_4a8 = 1;
          uStack_4a4 = puStack_398._0_4_;
          pfStack_220 = (float *)((ulonglong)pfStack_220 & 0xffffffff00000000);
        }
      }
    }
    uVar21 = uStack_258;
    uVar22 = uStack_418;
    if (uStack_330._4_4_ == 2.8026e-45) {
      fStack_610 = fStack_450;
      fStack_60c = fStack_44c;
      fStack_608 = fStack_448;
      puStack_618 = (uint *)0x3;
    }
    else {
      puStack_1e8 = puStack_328;
      pcStack_1e0 = pcStack_320;
      uStack_1f8 = (uint)plStack_338;
      uStack_1f4 = (uint)((ulonglong)plStack_338 >> 0x20);
      fStack_1f0 = SUB84(uStack_330,0);
      uStack_208 = SUB81(puStack_348,0);
      uStack_207 = (undefined1)((ulonglong)puStack_348 >> 8);
      uStack_206 = (undefined1)((ulonglong)puStack_348 >> 0x10);
      uStack_205 = (undefined1)((ulonglong)puStack_348 >> 0x18);
      fStack_204 = (float)((ulonglong)puStack_348 >> 0x20);
      fStack_200 = SUB84(pcStack_340,0);
      uStack_1fc = (undefined4)((ulonglong)pcStack_340 >> 0x20);
      auStack_218 = (undefined1  [8])puStack_358;
      fStack_210 = (float)uStack_350;
      fStack_20c = (float)((ulonglong)uStack_350 >> 0x20);
      fStack_1ec = uStack_330._4_4_;
      uVar13 = pdb_1408ff980(uStack_238);
      pdb_1414ca550(&puStack_618,uVar22,&lStack_488,uStack_520,auStack_218,
                    CONCAT44(uVar64,fStack_f4),puVar23,pbStack_128,puStack_160,uVar21,&uStack_3f8,
                    uStack_118,puStack_110,
                    CONCAT71((int7)((ulonglong)in_stack_fffffffffffff770 >> 8),uVar13) ^ 1,
                    uStack_3e8,(char)pfStack_220,uStack_120,*param_15);
    }
    uStack_3d8 = &uStack_418;
    uStack_3d0 = &uStack_f5;
    puStack_3c8 = &uStack_258;
    pcStack_3c0 = (char *)&uStack_2e8;
    plStack_3b8 = param_6;
    puStack_3a8 = &uStack_548;
    pcStack_3a0 = pcStack_150 + 0x10;
    puStack_398 = auStack_498;
    puStack_390 = auStack_496;
    puStack_388 = &uStack_4a8;
    puStack_380 = auStack_494;
    puStack_378 = auStack_4a0;
    puStack_370 = auStack_4b8;
    puStack_368 = &uStack_2a8;
    plStack_360 = param_11;
    lVar28 = *param_12;
    uStack_3b0 = &uStack_678;
    if (*(char *)(lVar28 + 0x281) == '\x01') {
      lVar32 = 0;
      if ((uint *)0x1 < puStack_618) {
        lVar32 = (longlong)puStack_618 + -2;
      }
      if (lVar32 == 0) {
        fVar60 = fVar60 - pcStack_230._0_4_;
        fVar46 = fVar46 - fStack_16c;
        fVar52 = fVar52 - pfStack_2b0._0_4_;
        uStack_1c8 = uStack_5c8;
        uStack_1c0 = uStack_5c0;
        plStack_1d8 = plStack_5d8;
        uStack_1d0 = uStack_5d0;
        puStack_1e8 = puStack_5e8;
        pcStack_1e0 = pcStack_5e0;
        uStack_1f8 = (uint)uStack_5f8;
        uVar30 = uStack_1f8;
        uStack_1f4 = (uint)((ulonglong)uStack_5f8 >> 0x20);
        fStack_1f0 = (float)uStack_5f0;
        fStack_1ec = (float)((ulonglong)uStack_5f0 >> 0x20);
        uStack_208 = SUB41(fStack_608,0);
        uStack_207 = (undefined1)((uint)fStack_608 >> 8);
        uStack_206 = (undefined1)((uint)fStack_608 >> 0x10);
        uStack_205 = (undefined1)((uint)fStack_608 >> 0x18);
        fStack_204 = fStack_604;
        fStack_200 = (float)uStack_600;
        uStack_1fc = (undefined4)((ulonglong)uStack_600 >> 0x20);
        auStack_218 = (undefined1  [8])puStack_618;
        fStack_210 = fStack_610;
        fStack_20c = fStack_60c;
        if ((int)pbStack_130 == 7) {
          if (uStack_1f8 != 1 || 1 < (byte)puStack_228) {
            if (uStack_1f8 != 1 && (byte)puStack_228 < 2) {
              pdb_140314c70(&lStack_738,&UNK_14300d500);
            }
            goto code_r0x0001408684c7;
          }
          pdb_140314c70(&lStack_758,&UNK_14300d4e8);
        }
        else {
code_r0x0001408684c7:
          if (uVar30 == 2) {
            cVar9 = pdb_140a84de0(uStack_508);
            if (cVar9 == '\0') {
              pdb_140314c70(&uStack_6d8,&UNK_14300d518);
              pdb_140314c70(&uStack_6f8,&UNK_14300d530);
              *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
              *(undefined1 *)(lVar28 + 0x282) = 2;
              pdb_14086ebd0(*(undefined8 *)(pcStack_150 + 0x10),*(undefined8 *)(pcStack_150 + 0x18))
              ;
              goto code_r0x000140868609;
            }
          }
        }
        if (_DAT_142e37830 <= SQRT(fVar52 * fVar52 + fVar46 * fVar46 + fVar60 * fVar60) * fVar41) {
          *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
          *(undefined1 *)(lVar28 + 0x282) = 1;
          pdb_140868c30(&uStack_3d8,auStack_218);
          *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
          fStack_140 = (float)uStack_1c0;
          uStack_148 = uStack_1c8;
          pdb_140869120(*param_7,&uStack_148);
        }
      }
      else if (lVar32 == 1) {
        if (1 < (byte)uStack_134) {
          uVar22 = puStack_518[2];
          uStack_208 = (undefined1)uVar22;
          uStack_207 = (undefined1)((ulonglong)uVar22 >> 8);
          uStack_206 = (undefined1)((ulonglong)uVar22 >> 0x10);
          uStack_205 = (undefined1)((ulonglong)uVar22 >> 0x18);
          fStack_204 = (float)((ulonglong)uVar22 >> 0x20);
          auStack_218 = (undefined1  [8])*puStack_518;
          fStack_210 = (float)puStack_518[1];
          fStack_20c = (float)((ulonglong)puStack_518[1] >> 0x20);
          pdb_1414ccd40(fStack_f4,auStack_218,&fStack_610,uStack_120);
        }
        fStack_210 = (float)uStack_118;
        fStack_20c = (float)(uStack_118 >> 0x20);
        uStack_208 = SUB81(puStack_110,0);
        uStack_207 = (undefined1)((ulonglong)puStack_110 >> 8);
        uStack_206 = (undefined1)((ulonglong)puStack_110 >> 0x10);
        uStack_205 = (undefined1)((ulonglong)puStack_110 >> 0x18);
        fStack_204 = (float)((ulonglong)puStack_110 >> 0x20);
        fStack_200 = fStack_f4;
        auStack_218 = (undefined1  [8])0x4;
        fStack_140 = fStack_608;
        uStack_148 = CONCAT44(fStack_60c,fStack_610);
        uStack_13c = 0;
        *puStack_248 = uStack_240._4_4_;
        *puStack_2d8 = uStack_2d0._4_4_;
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        pdb_1414c40f0(auStack_218,uStack_f5,&uStack_148,uStack_258,uStack_2e8,*param_6,&uStack_678,
                      uStack_548);
      }
      else {
        *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
        *(undefined1 *)(lVar28 + 0x282) = 2;
        pdb_14086ebd0(*(undefined8 *)(pcStack_150 + 0x10),*(undefined8 *)(pcStack_150 + 0x18),
                      puStack_168,puStack_168[1],uStack_120);
      }
    }
  }
code_r0x000140868609:
  if (puStack_108 != (uint *)0x0) {
    pub_1406abac0(pbStack_128,(longlong)puStack_108 << 2,4);
  }
LAB_14086862b:
  return;
code_r0x00014086610c:
  uVar31 = (ushort)(uVar30 - 1) & (ushort)uVar30;
  uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar31);
  if (uVar31 == 0) goto LAB_14086611f;
  goto LAB_1408660f1;
}

