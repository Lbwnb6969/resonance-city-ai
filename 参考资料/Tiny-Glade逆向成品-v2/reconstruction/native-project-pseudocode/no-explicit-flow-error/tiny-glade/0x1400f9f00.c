// VA 0x1400f9f00, PDB extent 13437 bytes
// tiny_glade::render_loop::render_world
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/render_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::render_loop::render_world
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/render_loop.rs
   Extent: 13437 */

longlong *
pdb_1400f9f00(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,uint param_5,
             longlong param_6,longlong *param_7,undefined8 *param_8)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [12];
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  undefined2 uVar76;
  longlong *plVar77;
  undefined1 uVar78;
  undefined2 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  longlong lVar82;
  undefined8 uVar83;
  undefined8 *puVar84;
  undefined1 uVar85;
  ushort uVar86;
  ulonglong uVar87;
  ulonglong uVar88;
  uint uVar89;
  ulonglong uVar90;
  longlong lVar91;
  uint uVar92;
  int iVar93;
  longlong lVar94;
  code *pcVar95;
  ulonglong uVar96;
  longlong *plVar97;
  bool bVar98;
  ushort uVar99;
  short sVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined2 *puVar137;
  undefined8 in_stack_fffffffffffff550;
  undefined4 *puVar138;
  undefined1 *puVar139;
  undefined1 auStack_a78 [24];
  undefined1 auStack_a60 [24];
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined1 auStack_a10 [32];
  longlong lStack_9f0;
  longlong lStack_9e8;
  longlong lStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  longlong lStack_9c0;
  byte *pbStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  ulonglong uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined2 uStack_938;
  undefined2 uStack_936;
  undefined2 uStack_934;
  undefined2 uStack_932;
  undefined2 uStack_930;
  undefined2 uStack_92e;
  undefined2 uStack_92c;
  undefined1 uStack_92a;
  undefined1 uStack_929;
  undefined8 uStack_928;
  ulonglong *puStack_920;
  undefined8 *puStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  longlong *plStack_900;
  undefined1 *puStack_8f8;
  ulonglong uStack_8f0;
  undefined2 *puStack_8e8;
  longlong lStack_8e0;
  undefined1 *puStack_8d8;
  undefined4 *puStack_8d0;
  char *pcStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  longlong lStack_8a8;
  longlong lStack_8a0;
  longlong lStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  ulonglong uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 auStack_4f8 [32];
  undefined1 auStack_4d8 [20];
  char cStack_4c4;
  undefined1 auStack_4c0 [24];
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  longlong lStack_488;
  longlong lStack_480;
  longlong lStack_478;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  longlong lStack_450;
  longlong lStack_448;
  longlong lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  longlong lStack_3f8;
  longlong lStack_3f0;
  longlong lStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulonglong uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulonglong *puStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulonglong *puStack_330;
  undefined8 *puStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined2 uStack_314;
  undefined2 uStack_312;
  ulonglong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined6 uStack_2c0;
  undefined2 uStack_2ba;
  undefined6 uStack_2b8;
  undefined2 uStack_2b2;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  longlong lStack_290;
  undefined8 uStack_288;
  longlong lStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  ulonglong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulonglong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  longlong *plStack_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined2 uStack_1ec;
  undefined2 uStack_1ea;
  undefined4 uStack_1e8;
  undefined2 uStack_1e4;
  undefined2 uStack_1e2;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  ulonglong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulonglong uStack_160;
  longlong lStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined1 auStack_110 [24];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined2 uStack_b2;
  longlong *plStack_b0;
  char cStack_a3;
  undefined2 uStack_a2;
  longlong lStack_a0;
  undefined2 uStack_94;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uVar89 = (uint)((ulonglong)in_stack_fffffffffffff550 >> 0x20);
  uStack_90 = 0xfffffffffffffffe;
  lStack_a0 = param_3;
  if ((param_5 < 0x10000) || ((param_5 & 0xffff) == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_142e424c8,0x46,&UNK_142e42538);
  }
  if (*(longlong *)(param_3 + 0x88) != 0) {
    lVar82 = *(longlong *)(param_3 + 0x70);
    uVar90 = 0x6d79c7fc2d5f98ee;
    lVar94 = 0;
    while( true ) {
      uVar90 = uVar90 & *(ulonglong *)(param_3 + 0x78);
      auVar131 = *(undefined1 (*) [16])(lVar82 + uVar90);
      auVar127[0] = -(auVar131[0] == DAT_142e34500);
      auVar127[1] = -(auVar131[1] == DAT_142e34500._1_1_);
      auVar127[2] = -(auVar131[2] == DAT_142e34500._2_1_);
      auVar127[3] = -(auVar131[3] == DAT_142e34500._3_1_);
      auVar127[4] = -(auVar131[4] == DAT_142e34500._4_1_);
      auVar127[5] = -(auVar131[5] == DAT_142e34500._5_1_);
      auVar127[6] = -(auVar131[6] == DAT_142e34500._6_1_);
      auVar127[7] = -(auVar131[7] == DAT_142e34500._7_1_);
      auVar127[8] = -(auVar131[8] == DAT_142e34500._8_1_);
      auVar127[9] = -(auVar131[9] == DAT_142e34500._9_1_);
      auVar127[10] = -(auVar131[10] == DAT_142e34500._10_1_);
      auVar127[0xb] = -(auVar131[0xb] == DAT_142e34500._11_1_);
      auVar127[0xc] = -(auVar131[0xc] == DAT_142e34500._12_1_);
      auVar127[0xd] = -(auVar131[0xd] == DAT_142e34500._13_1_);
      auVar127[0xe] = -(auVar131[0xe] == DAT_142e34500._14_1_);
      auVar127[0xf] = -(auVar131[0xf] == DAT_142e34500._15_1_);
      uVar86 = (ushort)(SUB161(auVar127 >> 7,0) & 1) | (ushort)(SUB161(auVar127 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar127 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar127 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar127 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar127 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar127 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar127 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar127 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar127 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar127 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar127 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar127 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar127 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar127 >> 0x77,0) & 1) << 0xe | (ushort)(auVar127[0xf] >> 7) << 0xf
      ;
      uVar92 = (uint)uVar86;
      while (uVar86 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar92; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar87 = uVar6 + uVar90 & *(ulonglong *)(param_3 + 0x78);
        pcVar1 = (char *)(lVar82 + -0x18 + uVar87 * -0x18);
        auVar128[0] = -(*pcVar1 == DAT_142e34510);
        auVar128[1] = -(pcVar1[1] == DAT_142e34510._1_1_);
        auVar128[2] = -(pcVar1[2] == DAT_142e34510._2_1_);
        auVar128[3] = -(pcVar1[3] == DAT_142e34510._3_1_);
        auVar128[4] = -(pcVar1[4] == DAT_142e34510._4_1_);
        auVar128[5] = -(pcVar1[5] == DAT_142e34510._5_1_);
        auVar128[6] = -(pcVar1[6] == DAT_142e34510._6_1_);
        auVar128[7] = -(pcVar1[7] == DAT_142e34510._7_1_);
        auVar128[8] = -(pcVar1[8] == DAT_142e34510._8_1_);
        auVar128[9] = -(pcVar1[9] == DAT_142e34510._9_1_);
        auVar128[10] = -(pcVar1[10] == DAT_142e34510._10_1_);
        auVar128[0xb] = -(pcVar1[0xb] == DAT_142e34510._11_1_);
        auVar128[0xc] = -(pcVar1[0xc] == DAT_142e34510._12_1_);
        auVar128[0xd] = -(pcVar1[0xd] == DAT_142e34510._13_1_);
        auVar128[0xe] = -(pcVar1[0xe] == DAT_142e34510._14_1_);
        auVar128[0xf] = -(pcVar1[0xf] == DAT_142e34510._15_1_);
        if ((ushort)((ushort)(SUB161(auVar128 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar128 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar128 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar128 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar128 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar128 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar128 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar128 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar128 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar128 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar128 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar128 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar128 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar128 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar128 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar128[0xf] >> 7) << 0xf) == 0xffff) {
          uVar90 = *(ulonglong *)(lVar82 + uVar87 * -0x18 + -8);
          if ((*(ulonglong *)(param_3 + 0x210) <= uVar90) ||
             (uVar90 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar90 * 8), uVar90 == 0))
          goto LAB_1400fa563;
          lVar82 = ~uVar90 * 0x40;
          if (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + lVar82) == 0)
          goto LAB_1400fa563;
          plStack_220 = param_1;
          cStack_a3 = pdb_140a3d910(*(longlong *)(*(longlong *)(param_3 + 0x1d8) + lVar82 + 0x10) +
                                    0x98);
          lVar82 = param_2 + 0x120;
          lVar94 = *(longlong *)(param_2 + 0x130);
          if (lVar94 == *(longlong *)(param_2 + 0x120)) {
            pdb_142d8afd0(lVar82);
          }
          lVar4 = lStack_a0;
          lVar91 = *(longlong *)(param_2 + 0x128);
          *(undefined **)(lVar91 + lVar94 * 0x10) = &UNK_142e42568;
          *(undefined8 *)(lVar91 + 8 + lVar94 * 0x10) = 0x15;
          *(longlong *)(param_2 + 0x130) = lVar94 + 1;
          pdb_1405e3b30(param_2,lStack_a0,1);
          pdb_1405e4650(param_2,lVar4,2);
          pdb_1405e5170(param_2,lVar4,3);
          pdb_1405e40c0(param_2,lVar4,4);
          pdb_1405e5700(param_2,lVar4,0x12);
          pdb_1405e4be0(param_2,lVar4,0x13);
          pdb_1405e35a0(param_2,lVar4,0x14);
          pdb_1409eb010(param_2,lVar4);
          pdb_140b31c80(param_2,lVar4);
          pdb_1409b16b0(param_2,lVar4);
          pdb_1409afff0(param_2,lVar4);
          pdb_140b39070(param_2,lVar4);
          pdb_1409aede0(param_2,lVar4);
          pdb_1409eb6e0(param_2,lVar4);
          pdb_1409ab690(param_2,lVar4);
          pdb_1408ff100(param_2,lVar4);
          pdb_140b10400(param_2,lVar4);
          pdb_140a65270(param_2,lVar4);
          pdb_1409ae7c0(param_2,lVar4);
          pdb_140b22b40(param_2,lVar4);
          lVar94 = *(longlong *)(param_2 + 0x130);
          if (lVar94 == *(longlong *)(param_2 + 0x120)) {
            pdb_142d8afd0(lVar82);
          }
          *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar94 * 0x10) = 0;
          lVar91 = lVar94 + 1;
          *(longlong *)(param_2 + 0x130) = lVar91;
          if (lVar91 == *(longlong *)(param_2 + 0x120)) {
            pdb_142d8afd0(lVar82);
          }
          lVar5 = lStack_a0;
          lVar4 = *(longlong *)(param_2 + 0x128);
          *(undefined **)(lVar4 + lVar91 * 0x10) = &UNK_142e4257d;
          *(undefined8 *)(lVar4 + 8 + lVar91 * 0x10) = 0xc;
          *(longlong *)(param_2 + 0x130) = lVar94 + 2;
          pdb_140b31710(param_2,lStack_a0);
          pdb_140b32850(param_2,lVar5);
          pdb_140b325d0(param_2,lVar5);
          pdb_1409ae210(param_2,lVar5);
          pdb_1409adfd0(param_2,lVar5);
          pdb_140b38c30(param_2,lVar5);
          pdb_140b04130(param_2,lVar5);
          pdb_1409b3790(param_2,lVar5);
          lVar94 = *(longlong *)(param_2 + 0x130);
          if (lVar94 == *(longlong *)(param_2 + 0x120)) {
            pdb_142d8afd0(lVar82);
          }
          *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar94 * 0x10) = 0;
          *(longlong *)(param_2 + 0x130) = lVar94 + 1;
          uVar83 = pdb_14009d500(*(undefined8 *)(param_2 + 0x1e8),&UNK_142e42589,0xc,&UNK_142e42595,
                                 0x1f);
          uStack_1f8 = (int)uVar83;
          uStack_1f4 = (undefined4)((ulonglong)uVar83 >> 0x20);
          uVar80 = pdb_140e2a740(param_2,&uStack_1f8);
          cVar75 = UNK_142e34cdf;
          cVar74 = UNK_142e34cde;
          cVar73 = UNK_142e34cdd;
          cVar72 = UNK_142e34cdc;
          cVar71 = UNK_142e34cdb;
          cVar70 = UNK_142e34cda;
          cVar69 = UNK_142e34cd9;
          cVar68 = UNK_142e34cd8;
          cVar67 = UNK_142e34cd7;
          cVar66 = UNK_142e34cd6;
          cVar65 = UNK_142e34cd5;
          cVar64 = UNK_142e34cd4;
          cVar63 = UNK_142e34cd3;
          cVar62 = UNK_142e34cd2;
          cVar61 = UNK_142e34cd1;
          cVar60 = DAT_142e34cd0;
          cVar27 = UNK_142e3407f;
          cVar26 = UNK_142e3407e;
          cVar25 = UNK_142e3407d;
          cVar24 = UNK_142e3407c;
          cVar23 = UNK_142e3407b;
          cVar22 = UNK_142e3407a;
          cVar21 = UNK_142e34079;
          cVar20 = UNK_142e34078;
          cVar19 = UNK_142e34077;
          cVar18 = UNK_142e34076;
          cVar17 = UNK_142e34075;
          cVar16 = UNK_142e34074;
          cVar15 = UNK_142e34073;
          cVar14 = UNK_142e34072;
          cVar13 = UNK_142e34071;
          cVar12 = DAT_142e34070;
          uVar79 = (undefined2)uVar80;
          uStack_b2 = uVar79;
          if (*(longlong *)(lStack_a0 + 0x88) == 0) goto LAB_1400faa9d;
          lVar82 = *(longlong *)(lStack_a0 + 0x70);
          uVar90 = 0xf005b54a1c526f96;
          lVar94 = 0;
          goto LAB_1400fa356;
        }
        uVar86 = (ushort)(uVar92 - 1) & (ushort)uVar92;
        uVar92 = CONCAT22((short)(uVar92 - 1 >> 0x10),uVar86);
      }
      auVar122[0] = -(auVar131[0] == -1);
      auVar122[1] = -(auVar131[1] == -1);
      auVar122[2] = -(auVar131[2] == -1);
      auVar122[3] = -(auVar131[3] == -1);
      auVar122[4] = -(auVar131[4] == -1);
      auVar122[5] = -(auVar131[5] == -1);
      auVar122[6] = -(auVar131[6] == -1);
      auVar122[7] = -(auVar131[7] == -1);
      auVar122[8] = -(auVar131[8] == -1);
      auVar122[9] = -(auVar131[9] == -1);
      auVar122[10] = -(auVar131[10] == -1);
      auVar122[0xb] = -(auVar131[0xb] == -1);
      auVar122[0xc] = -(auVar131[0xc] == -1);
      auVar122[0xd] = -(auVar131[0xd] == -1);
      auVar122[0xe] = -(auVar131[0xe] == -1);
      auVar122[0xf] = -(auVar131[0xf] == -1);
      if ((((((((((((((((SUB161(auVar122 >> 7,0) & 1) != 0 || (SUB161(auVar122 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar122 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar122 >> 0x1f,0) & 1) != 0) || (SUB161(auVar122 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar122 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar122 >> 0x37,0) & 1) != 0) || (SUB161(auVar122 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar122 >> 0x47,0) & 1) != 0) || (SUB161(auVar122 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar122 >> 0x57,0) & 1) != 0) || (SUB161(auVar122 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar122 >> 0x67,0) & 1) != 0) || (SUB161(auVar122 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar122 >> 0x77,0) & 1) != 0) || auVar122[0xf] < '\0') break;
      uVar90 = uVar90 + lVar94 + 0x10;
      lVar94 = lVar94 + 0x10;
    }
  }
LAB_1400fa563:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142e42550);
LAB_1400fa356:
  uVar90 = uVar90 & *(ulonglong *)(lStack_a0 + 0x78);
  auVar131 = *(undefined1 (*) [16])(lVar82 + uVar90);
  auVar108[0] = -(auVar131[0] == DAT_142e34070);
  auVar108[1] = -(auVar131[1] == UNK_142e34071);
  auVar108[2] = -(auVar131[2] == UNK_142e34072);
  auVar108[3] = -(auVar131[3] == UNK_142e34073);
  auVar108[4] = -(auVar131[4] == UNK_142e34074);
  auVar108[5] = -(auVar131[5] == UNK_142e34075);
  auVar108[6] = -(auVar131[6] == UNK_142e34076);
  auVar108[7] = -(auVar131[7] == UNK_142e34077);
  auVar108[8] = -(auVar131[8] == UNK_142e34078);
  auVar108[9] = -(auVar131[9] == UNK_142e34079);
  auVar108[10] = -(auVar131[10] == UNK_142e3407a);
  auVar108[0xb] = -(auVar131[0xb] == UNK_142e3407b);
  auVar108[0xc] = -(auVar131[0xc] == UNK_142e3407c);
  auVar108[0xd] = -(auVar131[0xd] == UNK_142e3407d);
  auVar108[0xe] = -(auVar131[0xe] == UNK_142e3407e);
  auVar108[0xf] = -(auVar131[0xf] == UNK_142e3407f);
  uVar86 = (ushort)(SUB161(auVar108 >> 7,0) & 1) | (ushort)(SUB161(auVar108 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar108 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar108 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar108 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar108 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar108 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar108 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar108 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar108 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar108 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar108 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar108 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar108 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar108 >> 0x77,0) & 1) << 0xe | (ushort)(auVar108[0xf] >> 7) << 0xf;
  uVar92 = (uint)uVar86;
  while (uVar86 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar92; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar87 = uVar6 + uVar90 & *(ulonglong *)(lStack_a0 + 0x78);
    pcVar1 = (char *)(lVar82 + -0x18 + uVar87 * -0x18);
    auVar109[0] = -(*pcVar1 == DAT_142e34cd0);
    auVar109[1] = -(pcVar1[1] == UNK_142e34cd1);
    auVar109[2] = -(pcVar1[2] == UNK_142e34cd2);
    auVar109[3] = -(pcVar1[3] == UNK_142e34cd3);
    auVar109[4] = -(pcVar1[4] == UNK_142e34cd4);
    auVar109[5] = -(pcVar1[5] == UNK_142e34cd5);
    auVar109[6] = -(pcVar1[6] == UNK_142e34cd6);
    auVar109[7] = -(pcVar1[7] == UNK_142e34cd7);
    auVar109[8] = -(pcVar1[8] == UNK_142e34cd8);
    auVar109[9] = -(pcVar1[9] == UNK_142e34cd9);
    auVar109[10] = -(pcVar1[10] == UNK_142e34cda);
    auVar109[0xb] = -(pcVar1[0xb] == UNK_142e34cdb);
    auVar109[0xc] = -(pcVar1[0xc] == UNK_142e34cdc);
    auVar109[0xd] = -(pcVar1[0xd] == UNK_142e34cdd);
    auVar109[0xe] = -(pcVar1[0xe] == UNK_142e34cde);
    auVar109[0xf] = -(pcVar1[0xf] == UNK_142e34cdf);
    if ((ushort)((ushort)(SUB161(auVar109 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar109 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar109 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar109 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar109 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar109 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar109 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar109 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar109 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar109 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar109 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar109 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar109 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar109 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar109 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar109[0xf] >> 7) << 0xf) == 0xffff) {
      uVar90 = *(ulonglong *)(lVar82 + uVar87 * -0x18 + -8);
      if ((*(ulonglong *)(lStack_a0 + 0x210) <= uVar90) ||
         (uVar90 = *(ulonglong *)(*(longlong *)(lStack_a0 + 0x208) + uVar90 * 8), uVar90 == 0))
      goto LAB_1400faa9d;
      lVar82 = ~uVar90 * 0x40;
      if (*(longlong *)(*(longlong *)(lStack_a0 + 0x1d8) + 0x20 + lVar82) == 0) goto LAB_1400faa9d;
      pub_142e32760(&uStack_938,*(undefined8 *)(*(longlong *)(lStack_a0 + 0x1d8) + lVar82 + 0x10),
                    0x400);
      pdb_1405d5490(param_2,uVar80,&UNK_142e42595,0x1f,&uStack_938);
      pdb_1404cb460(&uStack_1f8);
      lVar82 = (ulonglong)uVar89 << 0x20;
      uVar87 = 0;
      pdb_1405d7670(param_2,&UNK_142e425d0,10,&UNK_142e425da,0x30,lVar82);
      uVar90 = *(ulonglong *)(param_2 + 0x1c8);
      if (uVar90 == *(ulonglong *)(param_2 + 0x1b8)) {
        uVar87 = 0;
        pdb_142d7f1b0(param_2 + 0x1b8,uVar90,1,2,2);
      }
      *(undefined2 *)(*(longlong *)(param_2 + 0x1c0) + uVar90 * 2) = uVar79;
      *(ulonglong *)(param_2 + 0x1c8) = uVar90 + 1;
      cVar59 = UNK_142e3434f;
      cVar58 = UNK_142e3434e;
      cVar57 = UNK_142e3434d;
      cVar56 = UNK_142e3434c;
      cVar55 = UNK_142e3434b;
      cVar54 = UNK_142e3434a;
      cVar53 = UNK_142e34349;
      cVar52 = UNK_142e34348;
      cVar51 = UNK_142e34347;
      cVar50 = UNK_142e34346;
      cVar49 = UNK_142e34345;
      cVar48 = UNK_142e34344;
      cVar47 = UNK_142e34343;
      cVar46 = UNK_142e34342;
      cVar45 = UNK_142e34341;
      cVar44 = DAT_142e34340;
      cVar43 = UNK_142e3433f;
      cVar42 = UNK_142e3433e;
      cVar41 = UNK_142e3433d;
      cVar40 = UNK_142e3433c;
      cVar39 = UNK_142e3433b;
      cVar38 = UNK_142e3433a;
      cVar37 = UNK_142e34339;
      cVar36 = UNK_142e34338;
      cVar35 = UNK_142e34337;
      cVar34 = UNK_142e34336;
      cVar33 = UNK_142e34335;
      cVar32 = UNK_142e34334;
      cVar31 = UNK_142e34333;
      cVar30 = UNK_142e34332;
      cVar29 = UNK_142e34331;
      cVar28 = DAT_142e34330;
      if (*(longlong *)(lStack_a0 + 0x88) == 0) goto LAB_1400faf01;
      lVar94 = *(longlong *)(lStack_a0 + 0x70);
      uVar88 = 0xbc86f891ccb8bc37;
      lVar91 = 0;
      goto LAB_1400fa4f1;
    }
    uVar86 = (ushort)(uVar92 - 1) & (ushort)uVar92;
    uVar92 = CONCAT22((short)(uVar92 - 1 >> 0x10),uVar86);
  }
  goto LAB_1400fa3b0;
LAB_1400fa4f1:
  uVar88 = uVar88 & *(ulonglong *)(lStack_a0 + 0x78);
  auVar131 = *(undefined1 (*) [16])(lVar94 + uVar88);
  auVar110[0] = -(auVar131[0] == DAT_142e34330);
  auVar110[1] = -(auVar131[1] == UNK_142e34331);
  auVar110[2] = -(auVar131[2] == UNK_142e34332);
  auVar110[3] = -(auVar131[3] == UNK_142e34333);
  auVar110[4] = -(auVar131[4] == UNK_142e34334);
  auVar110[5] = -(auVar131[5] == UNK_142e34335);
  auVar110[6] = -(auVar131[6] == UNK_142e34336);
  auVar110[7] = -(auVar131[7] == UNK_142e34337);
  auVar110[8] = -(auVar131[8] == UNK_142e34338);
  auVar110[9] = -(auVar131[9] == UNK_142e34339);
  auVar110[10] = -(auVar131[10] == UNK_142e3433a);
  auVar110[0xb] = -(auVar131[0xb] == UNK_142e3433b);
  auVar110[0xc] = -(auVar131[0xc] == UNK_142e3433c);
  auVar110[0xd] = -(auVar131[0xd] == UNK_142e3433d);
  auVar110[0xe] = -(auVar131[0xe] == UNK_142e3433e);
  auVar110[0xf] = -(auVar131[0xf] == UNK_142e3433f);
  uVar86 = (ushort)(SUB161(auVar110 >> 7,0) & 1) | (ushort)(SUB161(auVar110 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar110 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar110 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar110 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar110 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar110 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar110 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar110 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar110 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar110 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar110 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar110 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar110 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar110 >> 0x77,0) & 1) << 0xe | (ushort)(auVar110[0xf] >> 7) << 0xf;
  uVar89 = (uint)uVar86;
  while (uVar86 != 0) {
    uVar92 = 0;
    for (uVar6 = uVar89; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar92 = uVar92 + 1;
    }
    uVar96 = uVar92 + uVar88 & *(ulonglong *)(lStack_a0 + 0x78);
    pcVar1 = (char *)(lVar94 + -0x18 + uVar96 * -0x18);
    auVar111[0] = -(*pcVar1 == DAT_142e34340);
    auVar111[1] = -(pcVar1[1] == UNK_142e34341);
    auVar111[2] = -(pcVar1[2] == UNK_142e34342);
    auVar111[3] = -(pcVar1[3] == UNK_142e34343);
    auVar111[4] = -(pcVar1[4] == UNK_142e34344);
    auVar111[5] = -(pcVar1[5] == UNK_142e34345);
    auVar111[6] = -(pcVar1[6] == UNK_142e34346);
    auVar111[7] = -(pcVar1[7] == UNK_142e34347);
    auVar111[8] = -(pcVar1[8] == UNK_142e34348);
    auVar111[9] = -(pcVar1[9] == UNK_142e34349);
    auVar111[10] = -(pcVar1[10] == UNK_142e3434a);
    auVar111[0xb] = -(pcVar1[0xb] == UNK_142e3434b);
    auVar111[0xc] = -(pcVar1[0xc] == UNK_142e3434c);
    auVar111[0xd] = -(pcVar1[0xd] == UNK_142e3434d);
    auVar111[0xe] = -(pcVar1[0xe] == UNK_142e3434e);
    auVar111[0xf] = -(pcVar1[0xf] == UNK_142e3434f);
    if ((ushort)((ushort)(SUB161(auVar111 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar111 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar111 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar111 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar111 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar111 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar111 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar111 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar111 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar111 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar111 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar111 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar111 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar111 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar111 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar111[0xf] >> 7) << 0xf) == 0xffff) {
      uVar88 = *(ulonglong *)(lVar94 + uVar96 * -0x18 + -8);
      if ((*(ulonglong *)(lStack_a0 + 0x210) <= uVar88) ||
         (uVar88 = *(ulonglong *)(*(longlong *)(lStack_a0 + 0x208) + uVar88 * 8), uVar88 == 0))
      goto LAB_1400faf01;
      lVar94 = ~uVar88 * 0x40;
      if (*(longlong *)(*(longlong *)(lStack_a0 + 0x1d8) + 0x20 + lVar94) == 0) goto LAB_1400faf01;
      uStack_c8 = param_4;
      uStack_a2 = uVar79;
      uStack_94 = pdb_140e2c370(param_2,*(longlong *)
                                         (*(longlong *)(lStack_a0 + 0x1d8) + lVar94 + 0x10) + 0x18);
      if (uVar90 <= *(ulonglong *)(param_2 + 0x1c8)) {
        *(ulonglong *)(param_2 + 0x1c8) = uVar90;
      }
      plStack_b0 = (longlong *)pdb_1409b8a20(lStack_a0);
      uVar90 = *(ulonglong *)(param_2 + 0x1c8);
      if (uVar90 == *(ulonglong *)(param_2 + 0x1b8)) {
        uVar87 = 0;
        pdb_142d7f1b0(param_2 + 0x1b8,uVar90,1,2,2);
      }
      lVar91 = lStack_a0;
      plVar77 = plStack_b0;
      *(undefined2 *)(*(longlong *)(param_2 + 0x1c0) + uVar90 * 2) = uStack_a2;
      *(ulonglong *)(param_2 + 0x1c8) = uVar90 + 1;
      lVar94 = *(longlong *)(param_2 + 0x130);
      if (lVar94 == *(longlong *)(param_2 + 0x120)) {
        pdb_142d8afd0(param_2 + 0x120);
      }
      lVar4 = *(longlong *)(param_2 + 0x128);
      *(undefined **)(lVar4 + lVar94 * 0x10) = &UNK_142e427ce;
      *(undefined8 *)(lVar4 + 8 + lVar94 * 0x10) = 0x13;
      lVar4 = lVar94 + 1;
      *(longlong *)(param_2 + 0x130) = lVar4;
      if (lVar4 == *(longlong *)(param_2 + 0x120)) {
        pdb_142d8afd0(param_2 + 0x120);
      }
      lVar5 = *(longlong *)(param_2 + 0x128);
      *(undefined **)(lVar5 + lVar4 * 0x10) = &UNK_142e426f0;
      *(undefined8 *)(lVar5 + 8 + lVar4 * 0x10) = 6;
      *(longlong *)(param_2 + 0x130) = lVar94 + 2;
      LOCK();
      lVar94 = *plVar77;
      *plVar77 = *plVar77 + 1;
      UNLOCK();
      if (*plVar77 == 0 || SCARRY8(lVar94,1) != *plVar77 < 0) goto LAB_1400fcfcf;
      lVar94 = lVar91;
      pdb_1409b91b0(param_2,lVar91,plVar77);
      uVar85 = (undefined1)lVar94;
      lVar94 = *(longlong *)(param_2 + 0x130);
      if (lVar94 == *(longlong *)(param_2 + 0x120)) {
        pdb_142d8afd0(param_2 + 0x120);
      }
      *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar94 * 0x10) = 0;
      lVar4 = lVar94 + 1;
      *(longlong *)(param_2 + 0x130) = lVar4;
      if (lVar4 == *(longlong *)(param_2 + 0x120)) {
        pdb_142d8afd0(param_2 + 0x120);
      }
      lVar5 = *(longlong *)(param_2 + 0x128);
      *(undefined **)(lVar5 + lVar4 * 0x10) = &UNK_142e426f6;
      *(undefined8 *)(lVar5 + 8 + lVar4 * 0x10) = 4;
      *(longlong *)(param_2 + 0x130) = lVar94 + 2;
      uVar78 = pdb_1409d12b0();
      uVar83 = CONCAT71((int7)((ulonglong)lVar82 >> 8),uVar78);
      pdb_1409b6690(param_2,lVar91,0,0,uVar87 & 0xffffffff00000000,uVar83,uVar85);
      lVar82 = *(longlong *)(param_2 + 0x130);
      if (lVar82 == *(longlong *)(param_2 + 0x120)) {
        pdb_142d8afd0(param_2 + 0x120);
      }
      *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar82 * 0x10) = 0;
      lVar94 = lVar82 + 1;
      *(longlong *)(param_2 + 0x130) = lVar94;
      if (lVar94 == *(longlong *)(param_2 + 0x120)) {
        pdb_142d8afd0(param_2 + 0x120);
      }
      *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar94 * 0x10) = 0;
      *(longlong *)(param_2 + 0x130) = lVar82 + 2;
      if (uVar90 <= *(ulonglong *)(param_2 + 0x1c8)) {
        *(ulonglong *)(param_2 + 0x1c8) = uVar90;
      }
      uStack_938 = 0;
      uStack_936 = (undefined2)param_5;
      uVar79 = uStack_936;
      uStack_934 = (undefined2)(param_5 >> 0x10);
      uVar76 = uStack_934;
      uStack_932 = 1;
      uStack_930 = 1;
      uStack_92e = 0x6501;
      uStack_92c = 0x201;
      uStack_92a = 0;
      uStack_928._0_4_ = 0x42e4260a;
      uStack_928._4_4_ = 1;
      puStack_920 = (ulonglong *)0x7;
      uVar80 = pdb_140e2b4e0(param_2,&uStack_938);
      uStack_934 = (undefined2)uVar80;
      uStack_932 = (undefined2)((uint)uVar80 >> 0x10);
      uStack_92c = 1;
      uStack_92a = 1;
      uStack_929 = 0;
      uStack_928._0_4_ = 0x2016501;
      uStack_928._4_4_ = uStack_928._4_4_ & 0xffffff00;
      uStack_938 = 0;
      uStack_936 = 0;
      uStack_930 = uVar79;
      uStack_92e = uVar76;
      if (*(char *)(param_2 + 0x24c) == '\x01') {
        pdb_140e19620(&uStack_938,param_2);
      }
      uStack_1e8 = (undefined4)uStack_928;
      uStack_1e4 = (undefined2)uStack_928._4_4_;
      uStack_1e2 = (undefined2)(uStack_928._4_4_ >> 0x10);
      uStack_1f8 = CONCAT22(uStack_936,uStack_938);
      uStack_1f4 = CONCAT22(uStack_932,uStack_934);
      uStack_1f0 = CONCAT22(uStack_92e,uStack_930);
      uStack_1ec = uStack_92c;
      uStack_1ea = (undefined2)(CONCAT13(uStack_929,CONCAT12(uStack_92a,uStack_92c)) >> 0x10);
      uStack_938 = 0;
      uStack_932 = 1;
      uStack_930 = 1;
      uStack_92e = 0x6101;
      uStack_92c = 0x201;
      uStack_92a = 0;
      uStack_928._0_4_ = 0x42e42611;
      uStack_928._4_4_ = 1;
      puStack_920 = (ulonglong *)0x8;
      uStack_936 = uVar79;
      uStack_934 = uVar76;
      uVar80 = pdb_140e2b4e0(param_2,&uStack_938);
      uStack_934 = (undefined2)uVar80;
      uStack_932 = (undefined2)((uint)uVar80 >> 0x10);
      uStack_92c = 1;
      uStack_92a = 1;
      uStack_929 = 0;
      uStack_928._0_4_ = 0x2016101;
      uStack_928._4_4_ = uStack_928._4_4_ & 0xffffff00;
      uStack_938 = 0;
      uStack_936 = 0;
      uStack_930 = uVar79;
      uStack_92e = uVar76;
      if (*(char *)(param_2 + 0x24c) == '\x01') {
        pdb_140e19620(&uStack_938,param_2);
      }
      uStack_268 = CONCAT44(uStack_928._4_4_,(undefined4)uStack_928);
      uStack_278 = CONCAT22(uStack_936,uStack_938);
      uStack_274 = CONCAT22(uStack_932,uStack_934);
      uStack_270 = CONCAT22(uStack_92e,uStack_930);
      uStack_26c = CONCAT13(uStack_929,CONCAT12(uStack_92a,uStack_92c));
      uStack_2a8 = CONCAT44(uStack_1f4,uStack_1f8);
      uStack_2a0 = CONCAT26(uStack_1ea,CONCAT24(uStack_1ec,uStack_1f0));
      uStack_298 = CONCAT26(uStack_1e2,CONCAT24(uStack_1e4,uStack_1e8));
      lStack_290 = *param_7;
      uStack_288 = param_7[1];
      lStack_280 = param_7[2];
      if (*(longlong *)(lStack_a0 + 0x88) == 0) goto LAB_1400fb073;
      lVar82 = *(longlong *)(lStack_a0 + 0x70);
      uVar90 = 0xbc86f891ccb8bc37;
      lVar94 = 0;
      goto LAB_1400faa2b;
    }
    uVar86 = (ushort)(uVar89 - 1) & (ushort)uVar89;
    uVar89 = CONCAT22((short)(uVar89 - 1 >> 0x10),uVar86);
  }
  goto LAB_1400fa544;
LAB_1400faa2b:
  uVar90 = uVar90 & *(ulonglong *)(lStack_a0 + 0x78);
  auVar131 = *(undefined1 (*) [16])(lVar82 + uVar90);
  auVar112[0] = -(auVar131[0] == cVar28);
  auVar112[1] = -(auVar131[1] == cVar29);
  auVar112[2] = -(auVar131[2] == cVar30);
  auVar112[3] = -(auVar131[3] == cVar31);
  auVar112[4] = -(auVar131[4] == cVar32);
  auVar112[5] = -(auVar131[5] == cVar33);
  auVar112[6] = -(auVar131[6] == cVar34);
  auVar112[7] = -(auVar131[7] == cVar35);
  auVar112[8] = -(auVar131[8] == cVar36);
  auVar112[9] = -(auVar131[9] == cVar37);
  auVar112[10] = -(auVar131[10] == cVar38);
  auVar112[0xb] = -(auVar131[0xb] == cVar39);
  auVar112[0xc] = -(auVar131[0xc] == cVar40);
  auVar112[0xd] = -(auVar131[0xd] == cVar41);
  auVar112[0xe] = -(auVar131[0xe] == cVar42);
  auVar112[0xf] = -(auVar131[0xf] == cVar43);
  uVar86 = (ushort)(SUB161(auVar112 >> 7,0) & 1) | (ushort)(SUB161(auVar112 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar112 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar112 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar112 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar112 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar112 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar112 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar112 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar112 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar112 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar112 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar112 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar112 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar112 >> 0x77,0) & 1) << 0xe | (ushort)(auVar112[0xf] >> 7) << 0xf;
  uVar89 = (uint)uVar86;
  while (uVar86 != 0) {
    uVar92 = 0;
    for (uVar6 = uVar89; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar92 = uVar92 + 1;
    }
    uVar87 = uVar92 + uVar90 & *(ulonglong *)(lStack_a0 + 0x78);
    pcVar1 = (char *)(lVar82 + -0x18 + uVar87 * -0x18);
    auVar113[0] = -(*pcVar1 == cVar44);
    auVar113[1] = -(pcVar1[1] == cVar45);
    auVar113[2] = -(pcVar1[2] == cVar46);
    auVar113[3] = -(pcVar1[3] == cVar47);
    auVar113[4] = -(pcVar1[4] == cVar48);
    auVar113[5] = -(pcVar1[5] == cVar49);
    auVar113[6] = -(pcVar1[6] == cVar50);
    auVar113[7] = -(pcVar1[7] == cVar51);
    auVar113[8] = -(pcVar1[8] == cVar52);
    auVar113[9] = -(pcVar1[9] == cVar53);
    auVar113[10] = -(pcVar1[10] == cVar54);
    auVar113[0xb] = -(pcVar1[0xb] == cVar55);
    auVar113[0xc] = -(pcVar1[0xc] == cVar56);
    auVar113[0xd] = -(pcVar1[0xd] == cVar57);
    auVar113[0xe] = -(pcVar1[0xe] == cVar58);
    auVar113[0xf] = -(pcVar1[0xf] == cVar59);
    if ((ushort)((ushort)(SUB161(auVar113 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar113 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar113 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar113 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar113 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar113 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar113 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar113 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar113 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar113 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar113 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar113 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar113 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar113 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar113 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar113[0xf] >> 7) << 0xf) == 0xffff) {
      uVar90 = *(ulonglong *)(lVar82 + uVar87 * -0x18 + -8);
      if ((*(ulonglong *)(lStack_a0 + 0x210) <= uVar90) ||
         (uVar90 = *(ulonglong *)(*(longlong *)(lStack_a0 + 0x208) + uVar90 * 8), uVar90 == 0))
      goto LAB_1400fb073;
      lVar82 = ~uVar90 * 0x40;
      if (*(longlong *)(*(longlong *)(lStack_a0 + 0x1d8) + 0x20 + lVar82) == 0) goto LAB_1400fb073;
      uVar79 = pdb_140e2c370(param_2,*(longlong *)(*(longlong *)(lStack_a0 + 0x1d8) + lVar82 + 0x10)
                                     + 0x10);
      uVar90 = *(ulonglong *)(param_2 + 0x1b8);
      uVar87 = *(ulonglong *)(param_2 + 0x1c8);
      if (uVar87 == uVar90) {
        pdb_142d7f1b0(param_2 + 0x1b8,uVar87,2,2,2);
        uVar90 = *(ulonglong *)(param_2 + 0x1b8);
      }
      lVar82 = *(longlong *)(param_2 + 0x1c0);
      *(undefined2 *)(lVar82 + uVar87 * 2) = uVar79;
      *(ulonglong *)(param_2 + 0x1c8) = uVar87 + 1;
      if (uVar87 + 1 == uVar90) {
        pdb_142d7f1b0(param_2 + 0x1b8,uVar90,1,2,2);
        lVar82 = *(longlong *)(param_2 + 0x1c0);
      }
      *(undefined2 *)(lVar82 + 2 + uVar87 * 2) = uStack_94;
      *(ulonglong *)(param_2 + 0x1c8) = uVar87 + 2;
      uVar90 = uStack_c8;
      pdb_1409ac8e0(param_2,lStack_a0,&uStack_2a8,param_8,uStack_c8);
      uVar90 = uVar90 & 0xffffffffffffff00;
      pdb_1409ad100(auStack_4f8,param_2,&lStack_290,0,uVar90);
      uVar80 = (undefined4)((ulonglong)uVar83 >> 0x20);
      if (*_DAT_143ca43e0 == '\0') {
        lVar82 = *(longlong *)(param_2 + 0x130);
        if (lVar82 == *(longlong *)(param_2 + 0x120)) {
          pdb_142d8afd0(param_2 + 0x120);
        }
        lVar94 = *(longlong *)(param_2 + 0x128);
        *(undefined **)(lVar94 + lVar82 * 0x10) = &UNK_142e427b6;
        *(undefined8 *)(lVar94 + 8 + lVar82 * 0x10) = 0x18;
        lVar94 = lVar82 + 1;
        *(longlong *)(param_2 + 0x130) = lVar94;
        if (lVar94 == *(longlong *)(param_2 + 0x120)) {
          pdb_142d8afd0(param_2 + 0x120);
        }
        lVar91 = *(longlong *)(param_2 + 0x128);
        *(undefined **)(lVar91 + lVar94 * 0x10) = &UNK_142e426f0;
        *(undefined8 *)(lVar91 + 8 + lVar94 * 0x10) = 6;
        *(longlong *)(param_2 + 0x130) = lVar82 + 2;
        LOCK();
        lVar82 = *plStack_b0;
        *plStack_b0 = *plStack_b0 + 1;
        UNLOCK();
        if (*plStack_b0 == 0 || SCARRY8(lVar82,1) != *plStack_b0 < 0) goto LAB_1400fcfcf;
        lVar82 = lStack_a0;
        pdb_1409ba020(param_2,lStack_a0,plStack_b0,auStack_4f8);
        uVar85 = (undefined1)lVar82;
        lVar82 = *(longlong *)(param_2 + 0x130);
        if (lVar82 == *(longlong *)(param_2 + 0x120)) {
          pdb_142d8afd0(param_2 + 0x120);
        }
        *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar82 * 0x10) = 0;
        lVar94 = lVar82 + 1;
        *(longlong *)(param_2 + 0x130) = lVar94;
        if (lVar94 == *(longlong *)(param_2 + 0x120)) {
          pdb_142d8afd0(param_2 + 0x120);
        }
        lVar4 = lStack_a0;
        lVar91 = *(longlong *)(param_2 + 0x128);
        *(undefined **)(lVar91 + lVar94 * 0x10) = &UNK_142e426f6;
        *(undefined8 *)(lVar91 + 8 + lVar94 * 0x10) = 4;
        *(longlong *)(param_2 + 0x130) = lVar82 + 2;
        uVar78 = pdb_1409d12b0();
        uVar83 = CONCAT71((int7)((ulonglong)uVar83 >> 8),uVar78);
        pdb_1409b6690(param_2,lVar4,auStack_4f8,1,uVar90 & 0xffffffff00000000,uVar83,uVar85);
        uVar80 = (undefined4)((ulonglong)uVar83 >> 0x20);
        lVar82 = *(longlong *)(param_2 + 0x130);
        if (lVar82 == *(longlong *)(param_2 + 0x120)) {
          pdb_142d8afd0(param_2 + 0x120);
        }
        *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar82 * 0x10) = 0;
        lVar94 = lVar82 + 1;
        *(longlong *)(param_2 + 0x130) = lVar94;
        if (lVar94 == *(longlong *)(param_2 + 0x120)) {
          pdb_142d8afd0(param_2 + 0x120);
        }
        *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar94 * 0x10) = 0;
        *(longlong *)(param_2 + 0x130) = lVar82 + 2;
      }
      uVar90 = *(ulonglong *)(param_2 + 0x1c8);
      if (uVar87 <= *(ulonglong *)(param_2 + 0x1c8)) {
        *(ulonglong *)(param_2 + 0x1c8) = uVar87;
        uVar90 = uVar87;
      }
      if (uVar90 == *(ulonglong *)(param_2 + 0x1b8)) {
        pdb_142d7f1b0(param_2 + 0x1b8,uVar90,1,2,2);
      }
      lVar82 = lStack_a0;
      *(undefined2 *)(*(longlong *)(param_2 + 0x1c0) + uVar90 * 2) = uStack_94;
      *(ulonglong *)(param_2 + 0x1c8) = uVar90 + 1;
      pdb_140b26860(param_2,lStack_a0);
      pdb_140b20f60(param_2,lVar82);
      if (*(longlong *)(lVar82 + 0x88) == 0) goto LAB_1400fb7d4;
      lVar94 = *(longlong *)(lVar82 + 0x70);
      uVar87 = 0xbc86f891ccb8bc37;
      lVar91 = 0;
      goto LAB_1400fae8e;
    }
    uVar86 = (ushort)(uVar89 - 1) & (ushort)uVar89;
    uVar89 = CONCAT22((short)(uVar89 - 1 >> 0x10),uVar86);
  }
  goto LAB_1400faa7e;
LAB_1400fae8e:
  uVar87 = uVar87 & *(ulonglong *)(lVar82 + 0x78);
  auVar131 = *(undefined1 (*) [16])(lVar94 + uVar87);
  auVar114[0] = -(auVar131[0] == cVar28);
  auVar114[1] = -(auVar131[1] == cVar29);
  auVar114[2] = -(auVar131[2] == cVar30);
  auVar114[3] = -(auVar131[3] == cVar31);
  auVar114[4] = -(auVar131[4] == cVar32);
  auVar114[5] = -(auVar131[5] == cVar33);
  auVar114[6] = -(auVar131[6] == cVar34);
  auVar114[7] = -(auVar131[7] == cVar35);
  auVar114[8] = -(auVar131[8] == cVar36);
  auVar114[9] = -(auVar131[9] == cVar37);
  auVar114[10] = -(auVar131[10] == cVar38);
  auVar114[0xb] = -(auVar131[0xb] == cVar39);
  auVar114[0xc] = -(auVar131[0xc] == cVar40);
  auVar114[0xd] = -(auVar131[0xd] == cVar41);
  auVar114[0xe] = -(auVar131[0xe] == cVar42);
  auVar114[0xf] = -(auVar131[0xf] == cVar43);
  uVar86 = (ushort)(SUB161(auVar114 >> 7,0) & 1) | (ushort)(SUB161(auVar114 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar114 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar114 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar114 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar114 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar114 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar114 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar114 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar114 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar114 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar114 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar114 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar114 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar114 >> 0x77,0) & 1) << 0xe | (ushort)(auVar114[0xf] >> 7) << 0xf;
  uVar89 = (uint)uVar86;
  while (uVar86 != 0) {
    uVar92 = 0;
    for (uVar6 = uVar89; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar92 = uVar92 + 1;
    }
    uVar88 = uVar92 + uVar87 & *(ulonglong *)(lVar82 + 0x78);
    pcVar1 = (char *)(lVar94 + -0x18 + uVar88 * -0x18);
    auVar115[0] = -(*pcVar1 == cVar44);
    auVar115[1] = -(pcVar1[1] == cVar45);
    auVar115[2] = -(pcVar1[2] == cVar46);
    auVar115[3] = -(pcVar1[3] == cVar47);
    auVar115[4] = -(pcVar1[4] == cVar48);
    auVar115[5] = -(pcVar1[5] == cVar49);
    auVar115[6] = -(pcVar1[6] == cVar50);
    auVar115[7] = -(pcVar1[7] == cVar51);
    auVar115[8] = -(pcVar1[8] == cVar52);
    auVar115[9] = -(pcVar1[9] == cVar53);
    auVar115[10] = -(pcVar1[10] == cVar54);
    auVar115[0xb] = -(pcVar1[0xb] == cVar55);
    auVar115[0xc] = -(pcVar1[0xc] == cVar56);
    auVar115[0xd] = -(pcVar1[0xd] == cVar57);
    auVar115[0xe] = -(pcVar1[0xe] == cVar58);
    auVar115[0xf] = -(pcVar1[0xf] == cVar59);
    if ((ushort)((ushort)(SUB161(auVar115 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar115 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar115 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar115 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar115 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar115 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar115 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar115 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar115 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar115 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar115 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar115 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar115 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar115 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar115 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar115[0xf] >> 7) << 0xf) == 0xffff) {
      uVar87 = *(ulonglong *)(lVar94 + uVar88 * -0x18 + -8);
      if ((*(ulonglong *)(lVar82 + 0x210) <= uVar87) ||
         (uVar87 = *(ulonglong *)(*(longlong *)(lVar82 + 0x208) + uVar87 * 8), uVar87 == 0))
      goto LAB_1400fb7d4;
      lVar94 = ~uVar87 * 0x40;
      if (*(longlong *)(*(longlong *)(lVar82 + 0x1d8) + 0x20 + lVar94) == 0) goto LAB_1400fb7d4;
      uVar81 = pdb_140e2c370(param_2,*(longlong *)(*(longlong *)(lVar82 + 0x1d8) + lVar94 + 0x10) +
                                     0x10);
      pdb_140e29ad0(param_2,uVar81);
      pdb_1409abe20(param_2,lVar82,&uStack_2a8,param_8,uStack_c8);
      pdb_140b20150(param_2,lVar82,&uStack_2a8,&lStack_290,auStack_4f8);
      pdb_140e09c70(&uStack_1f8,param_2);
      if (*(longlong *)(lVar82 + 0x88) == 0) goto LAB_1400fbdb6;
      lVar94 = *(longlong *)(lVar82 + 0x70);
      uVar87 = 0x9307f98c576a403d;
      lVar91 = 0;
      goto LAB_1400fb002;
    }
    uVar86 = (ushort)(uVar89 - 1) & (ushort)uVar89;
    uVar89 = CONCAT22((short)(uVar89 - 1 >> 0x10),uVar86);
  }
  goto LAB_1400faee2;
LAB_1400fb054:
  auVar123[0] = -(auVar131[0] == -1);
  auVar123[1] = -(auVar131[1] == -1);
  auVar123[2] = -(auVar131[2] == -1);
  auVar123[3] = -(auVar131[3] == -1);
  auVar123[4] = -(auVar131[4] == -1);
  auVar123[5] = -(auVar131[5] == -1);
  auVar123[6] = -(auVar131[6] == -1);
  auVar123[7] = -(auVar131[7] == -1);
  auVar123[8] = -(auVar131[8] == -1);
  auVar123[9] = -(auVar131[9] == -1);
  auVar123[10] = -(auVar131[10] == -1);
  auVar123[0xb] = -(auVar131[0xb] == -1);
  auVar123[0xc] = -(auVar131[0xc] == -1);
  auVar123[0xd] = -(auVar131[0xd] == -1);
  auVar123[0xe] = -(auVar131[0xe] == -1);
  auVar123[0xf] = -(auVar131[0xf] == -1);
  if ((((((((((((((((SUB161(auVar123 >> 7,0) & 1) != 0 || (SUB161(auVar123 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar123 >> 0x17,0) & 1) != 0) || (SUB161(auVar123 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar123 >> 0x27,0) & 1) != 0) || (SUB161(auVar123 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar123 >> 0x37,0) & 1) != 0) || (SUB161(auVar123 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar123 >> 0x47,0) & 1) != 0) || (SUB161(auVar123 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar123 >> 0x57,0) & 1) != 0) || (SUB161(auVar123 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar123 >> 0x67,0) & 1) != 0) || (SUB161(auVar123 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar123 >> 0x77,0) & 1) != 0) || auVar123[0xf] < '\0') {
LAB_1400fbdb6:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142e426c0);
  }
  uVar87 = uVar87 + lVar91 + 0x10;
  lVar91 = lVar91 + 0x10;
  goto LAB_1400fb002;
LAB_1400fbd97:
  auVar124[0] = -(*pcVar1 == -1);
  auVar124[1] = -(pcVar1[1] == -1);
  auVar124[2] = -(pcVar1[2] == -1);
  auVar124[3] = -(pcVar1[3] == -1);
  auVar124[4] = -(pcVar1[4] == -1);
  auVar124[5] = -(pcVar1[5] == -1);
  auVar124[6] = -(pcVar1[6] == -1);
  auVar124[7] = -(pcVar1[7] == -1);
  auVar124[8] = -(pcVar1[8] == -1);
  auVar124[9] = -(pcVar1[9] == -1);
  auVar124[10] = -(pcVar1[10] == -1);
  auVar124[0xb] = -(pcVar1[0xb] == -1);
  auVar124[0xc] = -(pcVar1[0xc] == -1);
  auVar124[0xd] = -(pcVar1[0xd] == -1);
  auVar124[0xe] = -(pcVar1[0xe] == -1);
  auVar124[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar124 >> 7,0) & 1) != 0 || (SUB161(auVar124 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar124 >> 0x17,0) & 1) != 0) || (SUB161(auVar124 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar124 >> 0x27,0) & 1) != 0) || (SUB161(auVar124 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar124 >> 0x37,0) & 1) != 0) || (SUB161(auVar124 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar124 >> 0x47,0) & 1) != 0) || (SUB161(auVar124 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar124 >> 0x57,0) & 1) != 0) || (SUB161(auVar124 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar124 >> 0x67,0) & 1) != 0) || (SUB161(auVar124 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar124 >> 0x77,0) & 1) != 0) || auVar124[0xf] < '\0') goto LAB_1400fc8ab;
  uVar90 = uVar90 + lVar91 + 0x10;
  lVar91 = lVar91 + 0x10;
  goto LAB_1400fbd42;
LAB_1400fcb65:
  uVar90 = uVar90 & *(ulonglong *)(lStack_a0 + 0x78);
  auVar131 = *(undefined1 (*) [16])(lVar82 + uVar90);
  auVar118[0] = -(auVar131[0] == cVar28);
  auVar118[1] = -(auVar131[1] == cVar29);
  auVar118[2] = -(auVar131[2] == cVar30);
  auVar118[3] = -(auVar131[3] == cVar31);
  auVar118[4] = -(auVar131[4] == cVar32);
  auVar118[5] = -(auVar131[5] == cVar33);
  auVar118[6] = -(auVar131[6] == cVar34);
  auVar118[7] = -(auVar131[7] == cVar35);
  auVar118[8] = -(auVar131[8] == cVar36);
  auVar118[9] = -(auVar131[9] == cVar37);
  auVar118[10] = -(auVar131[10] == cVar38);
  auVar118[0xb] = -(auVar131[0xb] == cVar39);
  auVar118[0xc] = -(auVar131[0xc] == cVar40);
  auVar118[0xd] = -(auVar131[0xd] == cVar41);
  auVar118[0xe] = -(auVar131[0xe] == cVar42);
  auVar118[0xf] = -(auVar131[0xf] == cVar43);
  uVar86 = (ushort)(SUB161(auVar118 >> 7,0) & 1) | (ushort)(SUB161(auVar118 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar118 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar118 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar118 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar118 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar118 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar118 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar118 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar118 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar118 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar118 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar118 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar118 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar118 >> 0x77,0) & 1) << 0xe | (ushort)(auVar118[0xf] >> 7) << 0xf;
  uVar89 = (uint)uVar86;
  while (uVar86 != 0) {
    uVar92 = 0;
    for (uVar6 = uVar89; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar92 = uVar92 + 1;
    }
    uVar87 = uVar92 + uVar90 & *(ulonglong *)(lStack_a0 + 0x78);
    pcVar1 = (char *)(lVar82 + -0x18 + uVar87 * -0x18);
    auVar119[0] = -(*pcVar1 == cVar44);
    auVar119[1] = -(pcVar1[1] == cVar45);
    auVar119[2] = -(pcVar1[2] == cVar46);
    auVar119[3] = -(pcVar1[3] == cVar47);
    auVar119[4] = -(pcVar1[4] == cVar48);
    auVar119[5] = -(pcVar1[5] == cVar49);
    auVar119[6] = -(pcVar1[6] == cVar50);
    auVar119[7] = -(pcVar1[7] == cVar51);
    auVar119[8] = -(pcVar1[8] == cVar52);
    auVar119[9] = -(pcVar1[9] == cVar53);
    auVar119[10] = -(pcVar1[10] == cVar54);
    auVar119[0xb] = -(pcVar1[0xb] == cVar55);
    auVar119[0xc] = -(pcVar1[0xc] == cVar56);
    auVar119[0xd] = -(pcVar1[0xd] == cVar57);
    auVar119[0xe] = -(pcVar1[0xe] == cVar58);
    auVar119[0xf] = -(pcVar1[0xf] == cVar59);
    if ((ushort)((ushort)(SUB161(auVar119 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar119 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar119 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar119 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar119 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar119 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar119 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar119 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar119 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar119 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar119 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar119 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar119 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar119 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar119 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar119[0xf] >> 7) << 0xf) == 0xffff) {
      uVar90 = *(ulonglong *)(lVar82 + uVar87 * -0x18 + -8);
      if ((*(ulonglong *)(lStack_a0 + 0x210) <= uVar90) ||
         (uVar90 = *(ulonglong *)(*(longlong *)(lStack_a0 + 0x208) + uVar90 * 8), uVar90 == 0))
      goto LAB_1400fcf35;
      lVar82 = ~uVar90 * 0x40;
      if (*(longlong *)(*(longlong *)(lStack_a0 + 0x1d8) + 0x20 + lVar82) == 0) goto LAB_1400fcf35;
      uStack_91 = 0;
      uVar80 = pdb_140e2a740(param_2,*(longlong *)(*(longlong *)(lStack_a0 + 0x1d8) + lVar82 + 0x10)
                                     + 0x18);
      uVar90 = *(ulonglong *)(param_2 + 0x1c8);
      if (uVar90 == *(ulonglong *)(param_2 + 0x1b8)) {
        uStack_91 = 0;
        pdb_142d7f1b0(param_2 + 0x1b8,uVar90,1,2,2);
      }
      *(undefined2 *)(*(longlong *)(param_2 + 0x1c0) + uVar90 * 2) = uStack_a2;
      *(ulonglong *)(param_2 + 0x1c8) = uVar90 + 1;
      if (*(longlong *)(lStack_a0 + 0x88) == 0) goto LAB_1400fcf4e;
      lVar82 = *(longlong *)(lStack_a0 + 0x70);
      uVar87 = 0xf005b54a1c526f96;
      lVar94 = 0;
      goto LAB_1400fccbe;
    }
    uVar86 = (ushort)(uVar89 - 1) & (ushort)uVar89;
    uVar89 = CONCAT22((short)(uVar89 - 1 >> 0x10),uVar86);
  }
  goto LAB_1400fcbb8;
LAB_1400fccbe:
  uVar87 = uVar87 & *(ulonglong *)(lStack_a0 + 0x78);
  auVar131 = *(undefined1 (*) [16])(lVar82 + uVar87);
  auVar120[0] = -(auVar131[0] == cVar12);
  auVar120[1] = -(auVar131[1] == cVar13);
  auVar120[2] = -(auVar131[2] == cVar14);
  auVar120[3] = -(auVar131[3] == cVar15);
  auVar120[4] = -(auVar131[4] == cVar16);
  auVar120[5] = -(auVar131[5] == cVar17);
  auVar120[6] = -(auVar131[6] == cVar18);
  auVar120[7] = -(auVar131[7] == cVar19);
  auVar120[8] = -(auVar131[8] == cVar20);
  auVar120[9] = -(auVar131[9] == cVar21);
  auVar120[10] = -(auVar131[10] == cVar22);
  auVar120[0xb] = -(auVar131[0xb] == cVar23);
  auVar120[0xc] = -(auVar131[0xc] == cVar24);
  auVar120[0xd] = -(auVar131[0xd] == cVar25);
  auVar120[0xe] = -(auVar131[0xe] == cVar26);
  auVar120[0xf] = -(auVar131[0xf] == cVar27);
  uVar86 = (ushort)(SUB161(auVar120 >> 7,0) & 1) | (ushort)(SUB161(auVar120 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar120 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar120 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar120 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar120 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar120 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar120 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar120 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar120 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar120 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar120 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar120 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar120 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar120 >> 0x77,0) & 1) << 0xe | (ushort)(auVar120[0xf] >> 7) << 0xf;
  uVar89 = (uint)uVar86;
  while (uVar86 != 0) {
    uVar92 = 0;
    for (uVar6 = uVar89; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar92 = uVar92 + 1;
    }
    uVar88 = uVar92 + uVar87 & *(ulonglong *)(lStack_a0 + 0x78);
    pcVar1 = (char *)(lVar82 + -0x18 + uVar88 * -0x18);
    auVar121[0] = -(*pcVar1 == cVar60);
    auVar121[1] = -(pcVar1[1] == cVar61);
    auVar121[2] = -(pcVar1[2] == cVar62);
    auVar121[3] = -(pcVar1[3] == cVar63);
    auVar121[4] = -(pcVar1[4] == cVar64);
    auVar121[5] = -(pcVar1[5] == cVar65);
    auVar121[6] = -(pcVar1[6] == cVar66);
    auVar121[7] = -(pcVar1[7] == cVar67);
    auVar121[8] = -(pcVar1[8] == cVar68);
    auVar121[9] = -(pcVar1[9] == cVar69);
    auVar121[10] = -(pcVar1[10] == cVar70);
    auVar121[0xb] = -(pcVar1[0xb] == cVar71);
    auVar121[0xc] = -(pcVar1[0xc] == cVar72);
    auVar121[0xd] = -(pcVar1[0xd] == cVar73);
    auVar121[0xe] = -(pcVar1[0xe] == cVar74);
    auVar121[0xf] = -(pcVar1[0xf] == cVar75);
    if ((ushort)((ushort)(SUB161(auVar121 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar121 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar121 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar121 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar121 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar121 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar121 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar121 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar121 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar121 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar121 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar121 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar121 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar121 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar121 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar121[0xf] >> 7) << 0xf) == 0xffff) {
      uVar87 = *(ulonglong *)(lVar82 + uVar88 * -0x18 + -8);
      if ((uVar87 < *(ulonglong *)(lStack_a0 + 0x210)) &&
         (uVar87 = *(ulonglong *)(*(longlong *)(lStack_a0 + 0x208) + uVar87 * 8), uVar87 != 0)) {
        lVar82 = ~uVar87 * 0x40;
        if (*(longlong *)(*(longlong *)(lStack_a0 + 0x1d8) + 0x20 + lVar82) != 0) {
          pub_142e32760(&uStack_938,
                        *(longlong *)(*(longlong *)(lStack_a0 + 0x1d8) + lVar82 + 0x10) + 0x400,
                        0x400);
          uStack_91 = 0;
          uStack_178 = pdb_14009d500(*(undefined8 *)(param_2 + 0x1e8),&UNK_142e42589,0xc,
                                     &UNK_142e42595,0x1f);
          uVar81 = pdb_140e2a740(param_2,&uStack_178);
          pdb_1405d5490(param_2,uVar81,&UNK_142e42595,0x1f,&uStack_938);
          uStack_91 = 0;
          pdb_1404cb460(&uStack_178);
          uStack_91 = 0;
          pdb_140e29ad0(param_2,CONCAT62((int6)((ulonglong)plVar97 >> 0x10),(short)uVar81) &
                                0xffffffff);
          uStack_91 = 0;
          pdb_140e2bec0(param_2,uVar80);
          if (uVar90 <= *(ulonglong *)(param_2 + 0x1c8)) {
            *(ulonglong *)(param_2 + 0x1c8) = uVar90;
          }
          uStack_91 = 0;
          pdb_140e29ad0(param_2,uVar80);
          uStack_91 = 0;
          pdb_140b02dd0(param_2,lStack_a0,&uStack_1f8,uStack_c8);
          uStack_91 = 0;
          pdb_14007ee60(param_2,lStack_a0,&uStack_1f8);
          plStack_220[8] = CONCAT26(uStack_1e2,CONCAT24(uStack_1e4,uStack_1e8));
          plStack_220[6] = CONCAT44(uStack_1f4,uStack_1f8);
          plStack_220[7] = CONCAT26(uStack_1ea,CONCAT24(uStack_1ec,uStack_1f0));
          plStack_220[2] = lStack_3e8;
          *plStack_220 = lStack_3f8;
          plStack_220[1] = lStack_3f0;
          plStack_220[5] = lStack_478;
          plStack_220[3] = lStack_488;
          plStack_220[4] = lStack_480;
          LOCK();
          *plStack_b0 = *plStack_b0 + -1;
          UNLOCK();
          if (*plStack_b0 == 0) {
            pdb_140c7a7b0(&plStack_b0);
          }
          return plStack_220;
        }
      }
      goto LAB_1400fcf4e;
    }
    uVar86 = (ushort)(uVar89 - 1) & (ushort)uVar89;
    uVar89 = CONCAT22((short)(uVar89 - 1 >> 0x10),uVar86);
  }
  auVar107[0] = -(auVar131[0] == -1);
  auVar107[1] = -(auVar131[1] == -1);
  auVar107[2] = -(auVar131[2] == -1);
  auVar107[3] = -(auVar131[3] == -1);
  auVar107[4] = -(auVar131[4] == -1);
  auVar107[5] = -(auVar131[5] == -1);
  auVar107[6] = -(auVar131[6] == -1);
  auVar107[7] = -(auVar131[7] == -1);
  auVar107[8] = -(auVar131[8] == -1);
  auVar107[9] = -(auVar131[9] == -1);
  auVar107[10] = -(auVar131[10] == -1);
  auVar107[0xb] = -(auVar131[0xb] == -1);
  auVar107[0xc] = -(auVar131[0xc] == -1);
  auVar107[0xd] = -(auVar131[0xd] == -1);
  auVar107[0xe] = -(auVar131[0xe] == -1);
  auVar107[0xf] = -(auVar131[0xf] == -1);
  if ((((((((((((((((SUB161(auVar107 >> 7,0) & 1) != 0 || (SUB161(auVar107 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar107 >> 0x17,0) & 1) != 0) || (SUB161(auVar107 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar107 >> 0x27,0) & 1) != 0) || (SUB161(auVar107 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar107 >> 0x37,0) & 1) != 0) || (SUB161(auVar107 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar107 >> 0x47,0) & 1) != 0) || (SUB161(auVar107 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar107 >> 0x57,0) & 1) != 0) || (SUB161(auVar107 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar107 >> 0x67,0) & 1) != 0) || (SUB161(auVar107 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar107 >> 0x77,0) & 1) != 0) || auVar107[0xf] < '\0') {
LAB_1400fcf4e:
    uStack_91 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142e427e8);
  }
  uVar87 = uVar87 + lVar94 + 0x10;
  lVar94 = lVar94 + 0x10;
  goto LAB_1400fccbe;
LAB_1400fcbb8:
  auVar106[0] = -(auVar131[0] == -1);
  auVar106[1] = -(auVar131[1] == -1);
  auVar106[2] = -(auVar131[2] == -1);
  auVar106[3] = -(auVar131[3] == -1);
  auVar106[4] = -(auVar131[4] == -1);
  auVar106[5] = -(auVar131[5] == -1);
  auVar106[6] = -(auVar131[6] == -1);
  auVar106[7] = -(auVar131[7] == -1);
  auVar106[8] = -(auVar131[8] == -1);
  auVar106[9] = -(auVar131[9] == -1);
  auVar106[10] = -(auVar131[10] == -1);
  auVar106[0xb] = -(auVar131[0xb] == -1);
  auVar106[0xc] = -(auVar131[0xc] == -1);
  auVar106[0xd] = -(auVar131[0xd] == -1);
  auVar106[0xe] = -(auVar131[0xe] == -1);
  auVar106[0xf] = -(auVar131[0xf] == -1);
  if ((((((((((((((((SUB161(auVar106 >> 7,0) & 1) != 0 || (SUB161(auVar106 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar106 >> 0x17,0) & 1) != 0) || (SUB161(auVar106 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar106 >> 0x27,0) & 1) != 0) || (SUB161(auVar106 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar106 >> 0x37,0) & 1) != 0) || (SUB161(auVar106 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar106 >> 0x47,0) & 1) != 0) || (SUB161(auVar106 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar106 >> 0x57,0) & 1) != 0) || (SUB161(auVar106 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar106 >> 0x67,0) & 1) != 0) || (SUB161(auVar106 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar106 >> 0x77,0) & 1) != 0) || auVar106[0xf] < '\0') {
LAB_1400fcf35:
    uStack_91 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142e42690);
  }
  uVar90 = uVar90 + lVar94 + 0x10;
  lVar94 = lVar94 + 0x10;
  goto LAB_1400fcb65;
LAB_1400faee2:
  auVar104[0] = -(auVar131[0] == -1);
  auVar104[1] = -(auVar131[1] == -1);
  auVar104[2] = -(auVar131[2] == -1);
  auVar104[3] = -(auVar131[3] == -1);
  auVar104[4] = -(auVar131[4] == -1);
  auVar104[5] = -(auVar131[5] == -1);
  auVar104[6] = -(auVar131[6] == -1);
  auVar104[7] = -(auVar131[7] == -1);
  auVar104[8] = -(auVar131[8] == -1);
  auVar104[9] = -(auVar131[9] == -1);
  auVar104[10] = -(auVar131[10] == -1);
  auVar104[0xb] = -(auVar131[0xb] == -1);
  auVar104[0xc] = -(auVar131[0xc] == -1);
  auVar104[0xd] = -(auVar131[0xd] == -1);
  auVar104[0xe] = -(auVar131[0xe] == -1);
  auVar104[0xf] = -(auVar131[0xf] == -1);
  if ((((((((((((((((SUB161(auVar104 >> 7,0) & 1) != 0 || (SUB161(auVar104 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar104 >> 0x17,0) & 1) != 0) || (SUB161(auVar104 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar104 >> 0x27,0) & 1) != 0) || (SUB161(auVar104 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar104 >> 0x37,0) & 1) != 0) || (SUB161(auVar104 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar104 >> 0x47,0) & 1) != 0) || (SUB161(auVar104 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar104 >> 0x57,0) & 1) != 0) || (SUB161(auVar104 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar104 >> 0x67,0) & 1) != 0) || (SUB161(auVar104 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar104 >> 0x77,0) & 1) != 0) || auVar104[0xf] < '\0') {
LAB_1400fb7d4:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142e426a8);
  }
  uVar87 = uVar87 + lVar91 + 0x10;
  lVar91 = lVar91 + 0x10;
  goto LAB_1400fae8e;
LAB_1400faa7e:
  auVar103[0] = -(auVar131[0] == -1);
  auVar103[1] = -(auVar131[1] == -1);
  auVar103[2] = -(auVar131[2] == -1);
  auVar103[3] = -(auVar131[3] == -1);
  auVar103[4] = -(auVar131[4] == -1);
  auVar103[5] = -(auVar131[5] == -1);
  auVar103[6] = -(auVar131[6] == -1);
  auVar103[7] = -(auVar131[7] == -1);
  auVar103[8] = -(auVar131[8] == -1);
  auVar103[9] = -(auVar131[9] == -1);
  auVar103[10] = -(auVar131[10] == -1);
  auVar103[0xb] = -(auVar131[0xb] == -1);
  auVar103[0xc] = -(auVar131[0xc] == -1);
  auVar103[0xd] = -(auVar131[0xd] == -1);
  auVar103[0xe] = -(auVar131[0xe] == -1);
  auVar103[0xf] = -(auVar131[0xf] == -1);
  if ((((((((((((((((SUB161(auVar103 >> 7,0) & 1) != 0 || (SUB161(auVar103 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar103 >> 0x17,0) & 1) != 0) || (SUB161(auVar103 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar103 >> 0x27,0) & 1) != 0) || (SUB161(auVar103 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar103 >> 0x37,0) & 1) != 0) || (SUB161(auVar103 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar103 >> 0x47,0) & 1) != 0) || (SUB161(auVar103 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar103 >> 0x57,0) & 1) != 0) || (SUB161(auVar103 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar103 >> 0x67,0) & 1) != 0) || (SUB161(auVar103 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar103 >> 0x77,0) & 1) != 0) || auVar103[0xf] < '\0') {
LAB_1400fb073:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142e42620);
  }
  uVar90 = uVar90 + lVar94 + 0x10;
  lVar94 = lVar94 + 0x10;
  goto LAB_1400faa2b;
LAB_1400fa544:
  auVar102[0] = -(auVar131[0] == -1);
  auVar102[1] = -(auVar131[1] == -1);
  auVar102[2] = -(auVar131[2] == -1);
  auVar102[3] = -(auVar131[3] == -1);
  auVar102[4] = -(auVar131[4] == -1);
  auVar102[5] = -(auVar131[5] == -1);
  auVar102[6] = -(auVar131[6] == -1);
  auVar102[7] = -(auVar131[7] == -1);
  auVar102[8] = -(auVar131[8] == -1);
  auVar102[9] = -(auVar131[9] == -1);
  auVar102[10] = -(auVar131[10] == -1);
  auVar102[0xb] = -(auVar131[0xb] == -1);
  auVar102[0xc] = -(auVar131[0xc] == -1);
  auVar102[0xd] = -(auVar131[0xd] == -1);
  auVar102[0xe] = -(auVar131[0xe] == -1);
  auVar102[0xf] = -(auVar131[0xf] == -1);
  if ((((((((((((((((SUB161(auVar102 >> 7,0) & 1) != 0 || (SUB161(auVar102 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar102 >> 0x17,0) & 1) != 0) || (SUB161(auVar102 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar102 >> 0x27,0) & 1) != 0) || (SUB161(auVar102 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar102 >> 0x37,0) & 1) != 0) || (SUB161(auVar102 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar102 >> 0x47,0) & 1) != 0) || (SUB161(auVar102 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar102 >> 0x57,0) & 1) != 0) || (SUB161(auVar102 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar102 >> 0x67,0) & 1) != 0) || (SUB161(auVar102 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar102 >> 0x77,0) & 1) != 0) || auVar102[0xf] < '\0') {
LAB_1400faf01:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142e426d8);
  }
  uVar88 = uVar88 + lVar91 + 0x10;
  lVar91 = lVar91 + 0x10;
  goto LAB_1400fa4f1;
LAB_1400fa3b0:
  auVar101[0] = -(auVar131[0] == -1);
  auVar101[1] = -(auVar131[1] == -1);
  auVar101[2] = -(auVar131[2] == -1);
  auVar101[3] = -(auVar131[3] == -1);
  auVar101[4] = -(auVar131[4] == -1);
  auVar101[5] = -(auVar131[5] == -1);
  auVar101[6] = -(auVar131[6] == -1);
  auVar101[7] = -(auVar131[7] == -1);
  auVar101[8] = -(auVar131[8] == -1);
  auVar101[9] = -(auVar131[9] == -1);
  auVar101[10] = -(auVar131[10] == -1);
  auVar101[0xb] = -(auVar131[0xb] == -1);
  auVar101[0xc] = -(auVar131[0xc] == -1);
  auVar101[0xd] = -(auVar131[0xd] == -1);
  auVar101[0xe] = -(auVar131[0xe] == -1);
  auVar101[0xf] = -(auVar131[0xf] == -1);
  if ((((((((((((((((SUB161(auVar101 >> 7,0) & 1) != 0 || (SUB161(auVar101 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar101 >> 0x17,0) & 1) != 0) || (SUB161(auVar101 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar101 >> 0x27,0) & 1) != 0) || (SUB161(auVar101 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar101 >> 0x37,0) & 1) != 0) || (SUB161(auVar101 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar101 >> 0x47,0) & 1) != 0) || (SUB161(auVar101 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar101 >> 0x57,0) & 1) != 0) || (SUB161(auVar101 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar101 >> 0x67,0) & 1) != 0) || (SUB161(auVar101 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar101 >> 0x77,0) & 1) != 0) || auVar101[0xf] < '\0') {
LAB_1400faa9d:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142e425b8);
  }
  uVar90 = uVar90 + lVar94 + 0x10;
  lVar94 = lVar94 + 0x10;
  goto LAB_1400fa356;
LAB_1400fb002:
  uVar87 = uVar87 & *(ulonglong *)(lVar82 + 0x78);
  auVar131 = *(undefined1 (*) [16])(lVar94 + uVar87);
  auVar129[0] = -(auVar131[0] == DAT_142e34260);
  auVar129[1] = -(auVar131[1] == DAT_142e34260._1_1_);
  auVar129[2] = -(auVar131[2] == DAT_142e34260._2_1_);
  auVar129[3] = -(auVar131[3] == DAT_142e34260._3_1_);
  auVar129[4] = -(auVar131[4] == DAT_142e34260._4_1_);
  auVar129[5] = -(auVar131[5] == DAT_142e34260._5_1_);
  auVar129[6] = -(auVar131[6] == DAT_142e34260._6_1_);
  auVar129[7] = -(auVar131[7] == DAT_142e34260._7_1_);
  auVar129[8] = -(auVar131[8] == DAT_142e34260._8_1_);
  auVar129[9] = -(auVar131[9] == DAT_142e34260._9_1_);
  auVar129[10] = -(auVar131[10] == DAT_142e34260._10_1_);
  auVar129[0xb] = -(auVar131[0xb] == DAT_142e34260._11_1_);
  auVar129[0xc] = -(auVar131[0xc] == DAT_142e34260._12_1_);
  auVar129[0xd] = -(auVar131[0xd] == DAT_142e34260._13_1_);
  auVar129[0xe] = -(auVar131[0xe] == DAT_142e34260._14_1_);
  auVar129[0xf] = -(auVar131[0xf] == DAT_142e34260._15_1_);
  uVar86 = (ushort)(SUB161(auVar129 >> 7,0) & 1) | (ushort)(SUB161(auVar129 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar129 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar129 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar129 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar129 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar129 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar129 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar129 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar129 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar129 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar129 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar129 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar129 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar129 >> 0x77,0) & 1) << 0xe | (ushort)(auVar129[0xf] >> 7) << 0xf;
  uVar88 = (ulonglong)uVar86;
  while( true ) {
    if (uVar86 == 0) goto LAB_1400fb054;
    uVar89 = 0;
    for (uVar92 = (uint)uVar88; (uVar92 & 1) == 0; uVar92 = uVar92 >> 1 | 0x80000000) {
      uVar89 = uVar89 + 1;
    }
    uVar96 = uVar89 + uVar87 & *(ulonglong *)(lVar82 + 0x78);
    pcVar1 = (char *)(lVar94 + -0x18 + uVar96 * -0x18);
    auVar130[0] = -(*pcVar1 == DAT_142e34af0);
    auVar130[1] = -(pcVar1[1] == DAT_142e34af0._1_1_);
    auVar130[2] = -(pcVar1[2] == DAT_142e34af0._2_1_);
    auVar130[3] = -(pcVar1[3] == DAT_142e34af0._3_1_);
    auVar130[4] = -(pcVar1[4] == DAT_142e34af0._4_1_);
    auVar130[5] = -(pcVar1[5] == DAT_142e34af0._5_1_);
    auVar130[6] = -(pcVar1[6] == DAT_142e34af0._6_1_);
    auVar130[7] = -(pcVar1[7] == DAT_142e34af0._7_1_);
    auVar130[8] = -(pcVar1[8] == DAT_142e34af0._8_1_);
    auVar130[9] = -(pcVar1[9] == DAT_142e34af0._9_1_);
    auVar130[10] = -(pcVar1[10] == DAT_142e34af0._10_1_);
    auVar130[0xb] = -(pcVar1[0xb] == DAT_142e34af0._11_1_);
    auVar130[0xc] = -(pcVar1[0xc] == DAT_142e34af0._12_1_);
    auVar130[0xd] = -(pcVar1[0xd] == DAT_142e34af0._13_1_);
    auVar130[0xe] = -(pcVar1[0xe] == DAT_142e34af0._14_1_);
    auVar130[0xf] = -(pcVar1[0xf] == DAT_142e34af0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar130 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar130 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar130 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar130 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar130 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar130 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar130 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar130 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar130 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar130 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar130 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar130 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar130 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar130 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar130 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar130[0xf] >> 7) << 0xf) == 0xffff) break;
    iVar93 = (uint)uVar88 - 1;
    uVar86 = (ushort)iVar93 & (ushort)uVar88;
    uVar88 = (ulonglong)CONCAT22((short)((uint)iVar93 >> 0x10),uVar86);
  }
  uVar87 = *(ulonglong *)(lVar94 + uVar96 * -0x18 + -8);
  if ((*(ulonglong *)(lVar82 + 0x210) <= uVar87) ||
     (uVar87 = *(ulonglong *)(*(longlong *)(lVar82 + 0x208) + uVar87 * 8), uVar87 == 0))
  goto LAB_1400fbdb6;
  lVar94 = ~uVar87 * 0x40;
  if (*(longlong *)(*(longlong *)(lVar82 + 0x1d8) + 0x20 + lVar94) == 0) goto LAB_1400fbdb6;
  lVar82 = *(longlong *)(*(longlong *)(lVar82 + 0x1d8) + lVar94 + 0x10);
  uStack_178 = *(ulonglong *)(lVar82 + 0xd0) ^ (ulonglong)DAT_142e37820;
  uStack_170 = (undefined4 *)
               (CONCAT44(uStack_170._4_4_,*(undefined4 *)(lVar82 + 0xd8)) ^ 0x80000000);
  pdb_140cad8c0(&uStack_938,param_2,3,CONCAT62((int6)(uVar88 >> 0x10),0x400),&uStack_178,
                CONCAT44(uVar80,0x44fa0000),&uStack_1f8);
  uStack_a48 = CONCAT44(uStack_1f4,uStack_1f8);
  uStack_a40 = CONCAT26(uStack_1ea,CONCAT24(uStack_1ec,uStack_1f0));
  uStack_a38 = CONCAT26(uStack_1e2,CONCAT24(uStack_1e4,uStack_1e8));
  if (uVar90 <= *(ulonglong *)(param_2 + 0x1c8)) {
    *(ulonglong *)(param_2 + 0x1c8) = uVar90;
  }
  uStack_318 = (undefined4)uStack_908;
  uStack_314 = (undefined2)uStack_908._4_4_;
  uStack_312 = (undefined2)((uint)uStack_908._4_4_ >> 0x10);
  uStack_348 = CONCAT26(uStack_932,CONCAT24(uStack_934,CONCAT22(uStack_936,uStack_938)));
  uStack_340 = CONCAT17(uStack_929,
                        CONCAT16(uStack_92a,CONCAT24(uStack_92c,CONCAT22(uStack_92e,uStack_930))));
  uStack_338 = CONCAT44(uStack_928._4_4_,(undefined4)uStack_928);
  puStack_328 = puStack_918;
  uStack_320 = (undefined4)uStack_910;
  uStack_31c = uStack_910._4_4_;
  puStack_330 = puStack_920;
  uStack_91 = 1;
  plStack_900 = (longlong *)uStack_a48;
  puStack_8f8 = (undefined1 *)uStack_a40;
  uStack_8f0 = uStack_a38;
  pdb_140e29ad0(param_2,uStack_314);
  uStack_91 = 1;
  pdb_1405d89c0(param_2,&UNK_142e42638,9,&UNK_142e42641,0x21,(longlong)&uStack_338 + 4);
  uStack_938 = 0;
  uStack_936 = 0x200;
  uStack_934 = 0x200;
  uStack_932 = 1;
  uStack_930 = 3;
  uStack_92e = 0x7c01;
  uStack_92c = 0x301;
  uStack_92a = 0;
  uStack_928._0_4_ = 0x42e42662;
  uStack_928._4_4_ = 1;
  puStack_920 = (ulonglong *)0x14;
  uStack_91 = 1;
  uVar80 = pdb_140e2b4e0(param_2,&uStack_938);
  uStack_934 = (undefined2)uVar80;
  uStack_932 = (undefined2)((uint)uVar80 >> 0x10);
  uStack_930 = 0x200;
  uStack_92e = 0x200;
  uStack_92c = 1;
  uStack_92a = 3;
  uStack_929 = 0;
  uStack_928._0_4_ = 0x3017c01;
  uStack_928._4_4_ = uStack_928._4_4_ & 0xffffff00;
  uStack_938 = 0;
  uStack_936 = 0;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    uStack_91 = 1;
    pdb_140e19620(&uStack_938,param_2);
  }
  uStack_2b8 = (undefined6)CONCAT44(uStack_928._4_4_,(undefined4)uStack_928);
  uStack_2b2 = (undefined2)(uStack_928._4_4_ >> 0x10);
  uStack_2c8 = CONCAT22(uStack_936,uStack_938);
  uStack_2c4 = CONCAT22(uStack_932,uStack_934);
  uStack_2c0 = CONCAT24(uStack_92c,CONCAT22(uStack_92e,uStack_930));
  uStack_2ba = (undefined2)(CONCAT17(uStack_929,CONCAT16(uStack_92a,uStack_2c0)) >> 0x30);
  uVar90 = *(ulonglong *)(param_2 + 0x1c8);
  if (uVar90 == *(ulonglong *)(param_2 + 0x1b8)) {
    uStack_91 = 1;
    pdb_142d7f1b0(param_2 + 0x1b8,uVar90,1,2,2);
  }
  *(undefined2 *)(*(longlong *)(param_2 + 0x1c0) + uVar90 * 2) = uStack_a2;
  *(ulonglong *)(param_2 + 0x1c8) = uVar90 + 1;
  uStack_c0 = uVar90;
  pdb_14007ee60();
  pbStack_9b8 = pub_1406abab0(0x90,4);
  uVar83 = _UNK_142e42268;
  if (pbStack_9b8 == (byte *)0x0) {
    uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0x90);
  }
  *(undefined8 *)pbStack_9b8 = _DAT_142e42260;
  *(undefined8 *)(pbStack_9b8 + 8) = uVar83;
  uVar83 = _UNK_142e42278;
  *(undefined8 *)(pbStack_9b8 + 0x10) = _DAT_142e42270;
  *(undefined8 *)(pbStack_9b8 + 0x18) = uVar83;
  uVar83 = _UNK_142e42288;
  *(undefined8 *)(pbStack_9b8 + 0x20) = _DAT_142e42280;
  *(undefined8 *)(pbStack_9b8 + 0x28) = uVar83;
  uVar83 = _UNK_142e42298;
  *(undefined8 *)(pbStack_9b8 + 0x30) = _DAT_142e42290;
  *(undefined8 *)(pbStack_9b8 + 0x38) = uVar83;
  uVar83 = _UNK_142e422a8;
  *(undefined8 *)(pbStack_9b8 + 0x40) = _DAT_142e422a0;
  *(undefined8 *)(pbStack_9b8 + 0x48) = uVar83;
  uVar83 = _UNK_142e422b8;
  *(undefined8 *)(pbStack_9b8 + 0x50) = _DAT_142e422b0;
  *(undefined8 *)(pbStack_9b8 + 0x58) = uVar83;
  uVar83 = _UNK_142e422c8;
  *(undefined8 *)(pbStack_9b8 + 0x60) = _DAT_142e422c0;
  *(undefined8 *)(pbStack_9b8 + 0x68) = uVar83;
  uVar83 = _UNK_142e422d8;
  *(undefined8 *)(pbStack_9b8 + 0x70) = _DAT_142e422d0;
  *(undefined8 *)(pbStack_9b8 + 0x78) = uVar83;
  uVar83 = _UNK_142e422e8;
  *(undefined8 *)(pbStack_9b8 + 0x80) = _DAT_142e422e0;
  *(undefined8 *)(pbStack_9b8 + 0x88) = uVar83;
  lStack_9c0 = 0x24;
  uStack_9b0 = 0x24;
  pdb_1405d5970(&uStack_468,param_2,pbStack_9b8,0x24);
  uVar86 = (((ushort)uStack_288 >> 4) - (ushort)(((ushort)uStack_288 & _DAT_142e422f0) == 0)) + 1;
  uVar99 = ((uStack_288._2_2_ >> 4) - (ushort)((uStack_288._2_2_ & _UNK_142e422f2) == 0)) + 1;
  sVar100 = ((uStack_288._6_2_ >> 4) - (ushort)((uStack_288._6_2_ & _UNK_142e422f6) == 0)) + 1;
  auVar11._2_2_ =
       (((ushort)lStack_280 >> 4) - (ushort)(((ushort)lStack_280 & _UNK_142e422f8) == 0)) + 1;
  auVar11._0_2_ = sVar100;
  auVar11._4_8_ = 0;
  auVar8._12_2_ = sVar100;
  auVar8._0_12_ = auVar11 << 0x30;
  auVar10._6_8_ = 0;
  auVar10._0_6_ =
       (uint6)(CONCAT44(auVar8._10_4_,
                        CONCAT22(((uStack_288._4_2_ >> 4) -
                                 (ushort)((uStack_288._4_2_ & _UNK_142e422f4) == 0)) + 1,sVar100))
              >> 0x10);
  auVar9._6_8_ = SUB148(auVar10 << 0x40,6);
  auVar9._4_2_ = uVar99;
  auVar9._2_2_ = 0;
  auVar9._0_2_ = uVar86;
  lStack_9f0 = auVar9._0_8_;
  uStack_3d8 = CONCAT44(uStack_3d8._4_4_,(uint)uVar99 * (uint)uVar86);
  uVar90 = 0;
  do {
    uStack_538 = uVar90;
    uStack_1f8 = pdb_140e25fd0(0,uVar90 & 0xffffffff);
    uStack_1e8 = (undefined4)uStack_2b8;
    uStack_1e4 = (undefined2)((uint6)uStack_2b8 >> 0x20);
    uStack_1f0 = (undefined4)uStack_2c0;
    uStack_1ec = (undefined2)((uint6)uStack_2c0 >> 0x20);
    uStack_1ea = uStack_2ba;
    uStack_1f4 = uStack_2c4;
    uStack_178 = 0;
    uStack_170 = &uStack_1f8;
    uStack_168 = 1;
    uStack_938 = SUB82(&uStack_a48,0);
    uStack_936 = (undefined2)((ulonglong)&uStack_a48 >> 0x10);
    uStack_934 = (undefined2)((ulonglong)&uStack_a48 >> 0x20);
    uStack_932 = (undefined2)((ulonglong)&uStack_a48 >> 0x30);
    uStack_930 = SUB82(&lStack_9f0,0);
    uStack_92e = (undefined2)((ulonglong)&lStack_9f0 >> 0x10);
    uStack_92c = (undefined2)((ulonglong)&lStack_9f0 >> 0x20);
    uStack_92a = (undefined1)((ulonglong)&lStack_9f0 >> 0x30);
    uStack_929 = (undefined1)((ulonglong)&lStack_9f0 >> 0x38);
    uStack_928 = &lStack_290;
    puStack_920 = &uStack_538;
    puStack_918 = &uStack_468;
    uStack_908 = &uStack_3d8;
    puVar137 = &uStack_938;
    uStack_910 = &lStack_9c0;
    pdb_1405d4ea0(param_2,&UNK_142e426fa,0x1a,&uStack_178,puVar137);
    uVar90 = uVar90 + 1;
  } while (uVar90 < 3);
  uVar83 = CONCAT71((int7)((ulonglong)puVar137 >> 8),1);
  pdb_1409ad100(auStack_a10,param_2,&uStack_2c8,1,uVar83);
  uVar80 = (undefined4)((ulonglong)uVar83 >> 0x20);
  lVar82 = *(longlong *)(param_2 + 0x130);
  if (lVar82 == *(longlong *)(param_2 + 0x120)) {
    pdb_142d8afd0(param_2 + 0x120);
  }
  lVar94 = *(longlong *)(param_2 + 0x128);
  *(undefined **)(lVar94 + lVar82 * 0x10) = &UNK_142e426f0;
  *(undefined8 *)(lVar94 + 8 + lVar82 * 0x10) = 6;
  *(longlong *)(param_2 + 0x130) = lVar82 + 1;
  LOCK();
  lVar82 = *plStack_b0;
  *plStack_b0 = *plStack_b0 + 1;
  UNLOCK();
  if (*plStack_b0 == 0 || SCARRY8(lVar82,1) != *plStack_b0 < 0) {
LAB_1400fcfcf:
                    /* WARNING: Does not return */
    pcVar95 = (code *)invalidInstructionException();
    (*pcVar95)();
  }
  lVar82 = lStack_a0;
  pdb_1409ba5d0(param_2);
  uVar85 = (undefined1)lVar82;
  lVar82 = *(longlong *)(param_2 + 0x130);
  if (lVar82 == *(longlong *)(param_2 + 0x120)) {
    pdb_142d8afd0(param_2 + 0x120);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar82 * 0x10) = 0;
  lVar94 = lVar82 + 1;
  *(longlong *)(param_2 + 0x130) = lVar94;
  if (lVar94 == *(longlong *)(param_2 + 0x120)) {
    pdb_142d8afd0(param_2 + 0x120);
  }
  lVar4 = lStack_a0;
  lVar91 = *(longlong *)(param_2 + 0x128);
  *(undefined **)(lVar91 + lVar94 * 0x10) = &UNK_142e426f6;
  *(undefined8 *)(lVar91 + 8 + lVar94 * 0x10) = 4;
  *(longlong *)(param_2 + 0x130) = lVar82 + 2;
  uVar78 = pdb_1409d1290();
  pdb_1409b6690(param_2,lVar4,auStack_a10,0,CONCAT44(uVar80,1),uVar78,uVar85);
  lVar82 = *(longlong *)(param_2 + 0x130);
  if (lVar82 == *(longlong *)(param_2 + 0x120)) {
    pdb_142d8afd0(param_2 + 0x120);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar82 * 0x10) = 0;
  *(longlong *)(param_2 + 0x130) = lVar82 + 1;
  pdb_140b215f0(param_2,lStack_a0,auStack_a10);
  if (lStack_9c0 != 0) {
    pub_1406abac0(pbStack_9b8,lStack_9c0 << 2,4);
  }
  if (uStack_c0 <= *(ulonglong *)(param_2 + 0x1c8)) {
    *(ulonglong *)(param_2 + 0x1c8) = uStack_c0;
  }
  if (*(longlong *)(lStack_a0 + 0x88) != 0) {
    lVar82 = *(longlong *)(lStack_a0 + 0x70);
    uVar90 = 0xbc86f891ccb8bc37;
    lVar94 = 0;
    do {
      uVar90 = uVar90 & *(ulonglong *)(lStack_a0 + 0x78);
      auVar131 = *(undefined1 (*) [16])(lVar82 + uVar90);
      auVar116[0] = -(auVar131[0] == cVar28);
      auVar116[1] = -(auVar131[1] == cVar29);
      auVar116[2] = -(auVar131[2] == cVar30);
      auVar116[3] = -(auVar131[3] == cVar31);
      auVar116[4] = -(auVar131[4] == cVar32);
      auVar116[5] = -(auVar131[5] == cVar33);
      auVar116[6] = -(auVar131[6] == cVar34);
      auVar116[7] = -(auVar131[7] == cVar35);
      auVar116[8] = -(auVar131[8] == cVar36);
      auVar116[9] = -(auVar131[9] == cVar37);
      auVar116[10] = -(auVar131[10] == cVar38);
      auVar116[0xb] = -(auVar131[0xb] == cVar39);
      auVar116[0xc] = -(auVar131[0xc] == cVar40);
      auVar116[0xd] = -(auVar131[0xd] == cVar41);
      auVar116[0xe] = -(auVar131[0xe] == cVar42);
      auVar116[0xf] = -(auVar131[0xf] == cVar43);
      uVar86 = (ushort)(SUB161(auVar116 >> 7,0) & 1) | (ushort)(SUB161(auVar116 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar116 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar116 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar116 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar116 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar116 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar116 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar116 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar116 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar116 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar116 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar116 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar116 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar116 >> 0x77,0) & 1) << 0xe | (ushort)(auVar116[0xf] >> 7) << 0xf
      ;
      uVar89 = (uint)uVar86;
      while (uVar86 != 0) {
        uVar92 = 0;
        for (uVar6 = uVar89; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar92 = uVar92 + 1;
        }
        uVar87 = uVar92 + uVar90 & *(ulonglong *)(lStack_a0 + 0x78);
        pcVar1 = (char *)(lVar82 + -0x18 + uVar87 * -0x18);
        auVar117[0] = -(*pcVar1 == cVar44);
        auVar117[1] = -(pcVar1[1] == cVar45);
        auVar117[2] = -(pcVar1[2] == cVar46);
        auVar117[3] = -(pcVar1[3] == cVar47);
        auVar117[4] = -(pcVar1[4] == cVar48);
        auVar117[5] = -(pcVar1[5] == cVar49);
        auVar117[6] = -(pcVar1[6] == cVar50);
        auVar117[7] = -(pcVar1[7] == cVar51);
        auVar117[8] = -(pcVar1[8] == cVar52);
        auVar117[9] = -(pcVar1[9] == cVar53);
        auVar117[10] = -(pcVar1[10] == cVar54);
        auVar117[0xb] = -(pcVar1[0xb] == cVar55);
        auVar117[0xc] = -(pcVar1[0xc] == cVar56);
        auVar117[0xd] = -(pcVar1[0xd] == cVar57);
        auVar117[0xe] = -(pcVar1[0xe] == cVar58);
        auVar117[0xf] = -(pcVar1[0xf] == cVar59);
        if ((ushort)((ushort)(SUB161(auVar117 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar117 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar117 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar117 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar117 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar117 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar117 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar117 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar117 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar117 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar117 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar117 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar117 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar117 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar117 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar117[0xf] >> 7) << 0xf) == 0xffff) {
          uVar90 = *(ulonglong *)(lVar82 + uVar87 * -0x18 + -8);
          if ((*(ulonglong *)(lStack_a0 + 0x210) <= uVar90) ||
             (uVar90 = *(ulonglong *)(*(longlong *)(lStack_a0 + 0x208) + uVar90 * 8), uVar90 == 0))
          goto LAB_1400fbdf1;
          lVar82 = ~uVar90 * 0x40;
          if (*(longlong *)(*(longlong *)(lStack_a0 + 0x1d8) + 0x20 + lVar82) == 0)
          goto LAB_1400fbdf1;
          uStack_91 = 1;
          pdb_140e2d1b0(param_2,*(longlong *)(*(longlong *)(lStack_a0 + 0x1d8) + lVar82 + 0x10) +
                                0x10);
          uStack_398 = uStack_348;
          uStack_390 = uStack_340;
          uStack_388 = uStack_338;
          puStack_380 = puStack_330;
          puStack_378 = puStack_328;
          uStack_f8 = uStack_31c;
          uStack_f4 = uStack_318;
          uStack_f0 = CONCAT22(uStack_312,uStack_314);
          uStack_428 = uStack_268;
          uStack_438 = CONCAT44(uStack_274,uStack_278);
          uStack_430 = CONCAT44(uStack_26c,uStack_270);
          lStack_448 = uStack_288;
          lStack_440 = lStack_280;
          uStack_458 = uStack_298;
          lStack_450 = lStack_290;
          uStack_468 = uStack_2a8;
          uStack_460 = uStack_2a0;
          uStack_408 = param_8[2];
          uStack_418 = *param_8;
          uStack_410 = param_8[1];
          uStack_c0 = *(ulonglong *)(param_2 + 0x1c8);
          if (uStack_c0 == *(ulonglong *)(param_2 + 0x1b8)) {
            uStack_91 = 0;
            pdb_142d7f1b0(param_2 + 0x1b8,uStack_c0,1,2,2);
          }
          *(undefined2 *)(*(longlong *)(param_2 + 0x1c0) + uStack_c0 * 2) = uStack_94;
          *(ulonglong *)(param_2 + 0x1c8) = uStack_c0 + 1;
          puStack_918 = puStack_378;
          uStack_928._0_4_ = (undefined4)uStack_388;
          uStack_928._4_4_ = (uint)((ulonglong)uStack_388 >> 0x20);
          puStack_920 = puStack_380;
          uStack_938 = (undefined2)uStack_398;
          uStack_936 = (undefined2)((ulonglong)uStack_398 >> 0x10);
          uStack_934 = (undefined2)((ulonglong)uStack_398 >> 0x20);
          uStack_932 = (undefined2)((ulonglong)uStack_398 >> 0x30);
          uStack_930 = (undefined2)uStack_390;
          uStack_92e = (undefined2)((ulonglong)uStack_390 >> 0x10);
          uStack_92c = (undefined2)((ulonglong)uStack_390 >> 0x20);
          uStack_92a = (undefined1)((ulonglong)uStack_390 >> 0x30);
          uStack_929 = (undefined1)((ulonglong)uStack_390 >> 0x38);
          uStack_910._0_4_ = uStack_320;
          uStack_908._4_4_ = uStack_f0;
          plStack_900 = &lStack_a0;
          uStack_8f0 = uStack_c8;
          puStack_8e8 = &uStack_b2;
          lStack_8e0 = param_6;
          puStack_8d8 = auStack_4f8;
          pcStack_8c8 = &cStack_a3;
          uStack_880 = uStack_428;
          uStack_890 = uStack_438;
          uStack_888 = uStack_430;
          lStack_8a0 = lStack_448;
          lStack_898 = lStack_440;
          uStack_8b0 = uStack_458;
          lStack_8a8 = lStack_450;
          uStack_8c0 = uStack_468;
          uStack_8b8 = uStack_460;
          uStack_878 = uStack_418;
          uStack_870 = uStack_410;
          uStack_868 = uStack_408;
          uStack_1d8 = SUB84(puStack_378,0);
          uStack_1d4 = (undefined4)((ulonglong)puStack_378 >> 0x20);
          uStack_1e4 = (undefined2)((ulonglong)uStack_388 >> 0x20);
          uStack_1e2 = (undefined2)((ulonglong)uStack_388 >> 0x30);
          uStack_1e0 = SUB84(puStack_380,0);
          uStack_1dc = (undefined4)((ulonglong)puStack_380 >> 0x20);
          uStack_1f8 = (int)uStack_398;
          uStack_1f4 = (undefined4)((ulonglong)uStack_398 >> 0x20);
          uStack_1f0 = (undefined4)uStack_390;
          uStack_1ea = (undefined2)((ulonglong)uStack_390 >> 0x30);
          uStack_1d0 = uStack_320;
          uStack_1cc = uStack_f8;
          uStack_1c8 = uStack_f4;
          uStack_1c4 = uStack_f0;
          uStack_91 = 0;
          puStack_8f8 = auStack_a10;
          puStack_8d0 = &uStack_2c8;
          uStack_1ec = uStack_92c;
          uStack_1e8 = (undefined4)uStack_928;
          uVar80 = pdb_140b00540(param_2,lStack_a0,&uStack_1f8,auStack_a10,uStack_c8);
          uStack_91 = 0;
          pdb_140e29ad0(param_2,uVar80);
          uVar79 = *puStack_8e8;
          uVar90 = *(ulonglong *)(param_2 + 0x1b8);
          uVar87 = *(ulonglong *)(param_2 + 0x1c8);
          if (uVar87 == uVar90) {
            uStack_91 = 0;
            pdb_142d7f1b0(param_2 + 0x1b8,uVar87,2,2,2);
            uVar90 = *(ulonglong *)(param_2 + 0x1b8);
          }
          lVar82 = *(longlong *)(param_2 + 0x1c0);
          *(short *)(lVar82 + uVar87 * 2) = (short)uVar80;
          *(ulonglong *)(param_2 + 0x1c8) = uVar87 + 1;
          if (uVar87 + 1 == uVar90) {
            uStack_91 = 0;
            pdb_142d7f1b0(param_2 + 0x1b8,uVar90,1,2,2);
            lVar82 = *(longlong *)(param_2 + 0x1c0);
          }
          *(undefined2 *)(lVar82 + 2 + uVar87 * 2) = uVar79;
          *(ulonglong *)(param_2 + 0x1c8) = uVar87 + 2;
          uStack_91 = 0;
          uVar80 = pdb_140a65e70(param_2);
          if (uVar87 <= *(ulonglong *)(param_2 + 0x1c8)) {
            *(ulonglong *)(param_2 + 0x1c8) = uVar87;
          }
          uStack_91 = 0;
          pdb_140e29ad0(param_2,uVar80);
          uStack_91 = 0;
          pdb_140a65040(param_2,*plStack_900,&lStack_8a8);
          uStack_91 = 0;
          pdb_140b38410(param_2,*plStack_900,&lStack_8a8);
          uStack_91 = 0;
          pdb_140a774a0(param_2,*plStack_900,&lStack_8a8);
          uStack_91 = 0;
          pdb_1409ac420(param_2,*plStack_900,&uStack_8c0,&uStack_878,uStack_8f0);
          uStack_91 = 0;
          pdb_140b05100(&uStack_1f8,param_2,&uStack_8c0);
          uStack_358 = CONCAT26(uStack_1e2,CONCAT24(uStack_1e4,uStack_1e8));
          uStack_368 = CONCAT44(uStack_1f4,uStack_1f8);
          uStack_360 = CONCAT26(uStack_1ea,CONCAT24(uStack_1ec,uStack_1f0));
          uStack_498 = CONCAT44(uStack_1cc,uStack_1d0);
          uStack_4a8 = CONCAT44(uStack_1dc,uStack_1e0);
          uStack_4a0 = CONCAT44(uStack_1d4,uStack_1d8);
          if (*_DAT_143ca4280 == '\x01') {
            uStack_91 = 0;
            pdb_1409abdc0(param_2,&uStack_8c0);
          }
          bVar98 = true;
          if (*(char *)(lStack_8e0 + 0xc5) == '\x02') goto LAB_1400fbe5a;
          lVar82 = *plStack_900;
          if (*(longlong *)(lVar82 + 0x88) == 0) {
LAB_1400fc8ab:
            uStack_91 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_142e42718);
          }
          lVar94 = *(longlong *)(lVar82 + 0x70);
          uVar90 = 0xe2158ef04a125bf5;
          lVar91 = 0;
          goto LAB_1400fbd42;
        }
        uVar86 = (ushort)(uVar89 - 1) & (ushort)uVar89;
        uVar89 = CONCAT22((short)(uVar89 - 1 >> 0x10),uVar86);
      }
      auVar105[0] = -(auVar131[0] == -1);
      auVar105[1] = -(auVar131[1] == -1);
      auVar105[2] = -(auVar131[2] == -1);
      auVar105[3] = -(auVar131[3] == -1);
      auVar105[4] = -(auVar131[4] == -1);
      auVar105[5] = -(auVar131[5] == -1);
      auVar105[6] = -(auVar131[6] == -1);
      auVar105[7] = -(auVar131[7] == -1);
      auVar105[8] = -(auVar131[8] == -1);
      auVar105[9] = -(auVar131[9] == -1);
      auVar105[10] = -(auVar131[10] == -1);
      auVar105[0xb] = -(auVar131[0xb] == -1);
      auVar105[0xc] = -(auVar131[0xc] == -1);
      auVar105[0xd] = -(auVar131[0xd] == -1);
      auVar105[0xe] = -(auVar131[0xe] == -1);
      auVar105[0xf] = -(auVar131[0xf] == -1);
      if ((((((((((((((((SUB161(auVar105 >> 7,0) & 1) != 0 || (SUB161(auVar105 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar105 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar105 >> 0x1f,0) & 1) != 0) || (SUB161(auVar105 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar105 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar105 >> 0x37,0) & 1) != 0) || (SUB161(auVar105 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar105 >> 0x47,0) & 1) != 0) || (SUB161(auVar105 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar105 >> 0x57,0) & 1) != 0) || (SUB161(auVar105 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar105 >> 0x67,0) & 1) != 0) || (SUB161(auVar105 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar105 >> 0x77,0) & 1) != 0) || auVar105[0xf] < '\0') break;
      uVar90 = uVar90 + lVar94 + 0x10;
      lVar94 = lVar94 + 0x10;
    } while( true );
  }
LAB_1400fbdf1:
  uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142e42678);
LAB_1400fbd42:
  uVar90 = uVar90 & *(ulonglong *)(lVar82 + 0x78);
  pcVar1 = (char *)(lVar94 + uVar90);
  auVar131[0] = -(*pcVar1 == DAT_142e344d0);
  auVar131[1] = -(pcVar1[1] == DAT_142e344d0._1_1_);
  auVar131[2] = -(pcVar1[2] == DAT_142e344d0._2_1_);
  auVar131[3] = -(pcVar1[3] == DAT_142e344d0._3_1_);
  auVar131[4] = -(pcVar1[4] == DAT_142e344d0._4_1_);
  auVar131[5] = -(pcVar1[5] == DAT_142e344d0._5_1_);
  auVar131[6] = -(pcVar1[6] == DAT_142e344d0._6_1_);
  auVar131[7] = -(pcVar1[7] == DAT_142e344d0._7_1_);
  auVar131[8] = -(pcVar1[8] == DAT_142e344d0._8_1_);
  auVar131[9] = -(pcVar1[9] == DAT_142e344d0._9_1_);
  auVar131[10] = -(pcVar1[10] == DAT_142e344d0._10_1_);
  auVar131[0xb] = -(pcVar1[0xb] == DAT_142e344d0._11_1_);
  auVar131[0xc] = -(pcVar1[0xc] == DAT_142e344d0._12_1_);
  auVar131[0xd] = -(pcVar1[0xd] == DAT_142e344d0._13_1_);
  auVar131[0xe] = -(pcVar1[0xe] == DAT_142e344d0._14_1_);
  auVar131[0xf] = -(pcVar1[0xf] == DAT_142e344d0._15_1_);
  uVar86 = (ushort)(SUB161(auVar131 >> 7,0) & 1) | (ushort)(SUB161(auVar131 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar131 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar131 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar131 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar131 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar131 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar131 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar131 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar131 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar131 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar131 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar131 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar131 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar131 >> 0x77,0) & 1) << 0xe | (ushort)(auVar131[0xf] >> 7) << 0xf;
  uVar89 = (uint)uVar86;
  while( true ) {
    if (uVar86 == 0) goto LAB_1400fbd97;
    uVar92 = 0;
    for (uVar6 = uVar89; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar92 = uVar92 + 1;
    }
    uVar87 = uVar92 + uVar90 & *(ulonglong *)(lVar82 + 0x78);
    pcVar2 = (char *)(lVar94 + -0x18 + uVar87 * -0x18);
    auVar132[0] = -(*pcVar2 == DAT_142e34b60);
    auVar132[1] = -(pcVar2[1] == UNK_142e34b61);
    auVar132[2] = -(pcVar2[2] == UNK_142e34b62);
    auVar132[3] = -(pcVar2[3] == UNK_142e34b63);
    auVar132[4] = -(pcVar2[4] == UNK_142e34b64);
    auVar132[5] = -(pcVar2[5] == UNK_142e34b65);
    auVar132[6] = -(pcVar2[6] == UNK_142e34b66);
    auVar132[7] = -(pcVar2[7] == UNK_142e34b67);
    auVar132[8] = -(pcVar2[8] == UNK_142e34b68);
    auVar132[9] = -(pcVar2[9] == UNK_142e34b69);
    auVar132[10] = -(pcVar2[10] == UNK_142e34b6a);
    auVar132[0xb] = -(pcVar2[0xb] == UNK_142e34b6b);
    auVar132[0xc] = -(pcVar2[0xc] == UNK_142e34b6c);
    auVar132[0xd] = -(pcVar2[0xd] == UNK_142e34b6d);
    auVar132[0xe] = -(pcVar2[0xe] == UNK_142e34b6e);
    auVar132[0xf] = -(pcVar2[0xf] == UNK_142e34b6f);
    if ((ushort)((ushort)(SUB161(auVar132 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar132 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar132 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar132 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar132 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar132 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar132 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar132 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar132 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar132 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar132 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar132 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar132 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar132 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar132 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar132[0xf] >> 7) << 0xf) == 0xffff) break;
    uVar86 = (ushort)(uVar89 - 1) & (ushort)uVar89;
    uVar89 = CONCAT22((short)(uVar89 - 1 >> 0x10),uVar86);
  }
  uVar90 = *(ulonglong *)(lVar94 + uVar87 * -0x18 + -8);
  if ((*(ulonglong *)(lVar82 + 0x210) <= uVar90) ||
     (uVar90 = *(ulonglong *)(*(longlong *)(lVar82 + 0x208) + uVar90 * 8), uVar90 == 0))
  goto LAB_1400fc8ab;
  lVar94 = ~uVar90 * 0x40;
  if (*(longlong *)(*(longlong *)(lVar82 + 0x1d8) + 0x20 + lVar94) == 0) goto LAB_1400fc8ab;
  bVar98 = **(int **)(*(longlong *)(lVar82 + 0x1d8) + lVar94 + 0x10) != 3;
LAB_1400fbe5a:
  uStack_91 = 0;
  pdb_140e08180(auStack_110,param_2,&lStack_8a8,&uStack_890,bVar98);
  uStack_91 = 0;
  pdb_140cd1640(auStack_4c0,param_2,&uStack_368,&uStack_4a8,&uStack_8c0,&lStack_8a8,auStack_110);
  if (*(char *)(lStack_8e0 + 0xc5) != '\0') {
    lVar82 = *plStack_900;
    if (*(longlong *)(lVar82 + 0x88) == 0) {
LAB_1400fc892:
      uStack_91 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142e42730);
    }
    lVar94 = *(longlong *)(lVar82 + 0x70);
    uVar90 = 0xcda1f14a4c73f628;
    lVar91 = 0;
    do {
      uVar90 = uVar90 & *(ulonglong *)(lVar82 + 0x78);
      pcVar1 = (char *)(lVar94 + uVar90);
      auVar133[0] = -(*pcVar1 == DAT_142e35050);
      auVar133[1] = -(pcVar1[1] == DAT_142e35050._1_1_);
      auVar133[2] = -(pcVar1[2] == DAT_142e35050._2_1_);
      auVar133[3] = -(pcVar1[3] == DAT_142e35050._3_1_);
      auVar133[4] = -(pcVar1[4] == DAT_142e35050._4_1_);
      auVar133[5] = -(pcVar1[5] == DAT_142e35050._5_1_);
      auVar133[6] = -(pcVar1[6] == DAT_142e35050._6_1_);
      auVar133[7] = -(pcVar1[7] == DAT_142e35050._7_1_);
      auVar133[8] = -(pcVar1[8] == DAT_142e35050._8_1_);
      auVar133[9] = -(pcVar1[9] == DAT_142e35050._9_1_);
      auVar133[10] = -(pcVar1[10] == DAT_142e35050._10_1_);
      auVar133[0xb] = -(pcVar1[0xb] == DAT_142e35050._11_1_);
      auVar133[0xc] = -(pcVar1[0xc] == DAT_142e35050._12_1_);
      auVar133[0xd] = -(pcVar1[0xd] == DAT_142e35050._13_1_);
      auVar133[0xe] = -(pcVar1[0xe] == DAT_142e35050._14_1_);
      auVar133[0xf] = -(pcVar1[0xf] == DAT_142e35050._15_1_);
      uVar86 = (ushort)(SUB161(auVar133 >> 7,0) & 1) | (ushort)(SUB161(auVar133 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar133 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar133 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar133 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar133 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar133 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar133 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar133 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar133 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar133 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar133 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar133 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar133 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar133 >> 0x77,0) & 1) << 0xe | (ushort)(auVar133[0xf] >> 7) << 0xf
      ;
      uVar89 = (uint)uVar86;
      while (uVar86 != 0) {
        uVar92 = 0;
        for (uVar6 = uVar89; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar92 = uVar92 + 1;
        }
        uVar87 = uVar92 + uVar90 & *(ulonglong *)(lVar82 + 0x78);
        pcVar2 = (char *)(lVar94 + -0x18 + uVar87 * -0x18);
        auVar134[0] = -(*pcVar2 == DAT_142e42300);
        auVar134[1] = -(pcVar2[1] == UNK_142e42301);
        auVar134[2] = -(pcVar2[2] == UNK_142e42302);
        auVar134[3] = -(pcVar2[3] == UNK_142e42303);
        auVar134[4] = -(pcVar2[4] == UNK_142e42304);
        auVar134[5] = -(pcVar2[5] == UNK_142e42305);
        auVar134[6] = -(pcVar2[6] == UNK_142e42306);
        auVar134[7] = -(pcVar2[7] == UNK_142e42307);
        auVar134[8] = -(pcVar2[8] == UNK_142e42308);
        auVar134[9] = -(pcVar2[9] == UNK_142e42309);
        auVar134[10] = -(pcVar2[10] == UNK_142e4230a);
        auVar134[0xb] = -(pcVar2[0xb] == UNK_142e4230b);
        auVar134[0xc] = -(pcVar2[0xc] == UNK_142e4230c);
        auVar134[0xd] = -(pcVar2[0xd] == UNK_142e4230d);
        auVar134[0xe] = -(pcVar2[0xe] == UNK_142e4230e);
        auVar134[0xf] = -(pcVar2[0xf] == UNK_142e4230f);
        if ((ushort)((ushort)(SUB161(auVar134 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar134 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar134 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar134 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar134 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar134 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar134 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar134 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar134 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar134 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar134 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar134 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar134 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar134 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar134 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar134[0xf] >> 7) << 0xf) == 0xffff) {
          uVar90 = *(ulonglong *)(lVar94 + uVar87 * -0x18 + -8);
          if ((*(ulonglong *)(lVar82 + 0x210) <= uVar90) ||
             (uVar90 = *(ulonglong *)(*(longlong *)(lVar82 + 0x208) + uVar90 * 8), uVar90 == 0))
          goto LAB_1400fc892;
          lVar94 = ~uVar90 * 0x40;
          if (*(longlong *)(*(longlong *)(lVar82 + 0x1d8) + 0x20 + lVar94) == 0) goto LAB_1400fc892;
          puVar84 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar82 + 0x1d8) + lVar94 + 0x10) + 4)
          ;
          goto LAB_1400fbfd9;
        }
        uVar86 = (ushort)(uVar89 - 1) & (ushort)uVar89;
        uVar89 = CONCAT22((short)(uVar89 - 1 >> 0x10),uVar86);
      }
      auVar125[0] = -(*pcVar1 == -1);
      auVar125[1] = -(pcVar1[1] == -1);
      auVar125[2] = -(pcVar1[2] == -1);
      auVar125[3] = -(pcVar1[3] == -1);
      auVar125[4] = -(pcVar1[4] == -1);
      auVar125[5] = -(pcVar1[5] == -1);
      auVar125[6] = -(pcVar1[6] == -1);
      auVar125[7] = -(pcVar1[7] == -1);
      auVar125[8] = -(pcVar1[8] == -1);
      auVar125[9] = -(pcVar1[9] == -1);
      auVar125[10] = -(pcVar1[10] == -1);
      auVar125[0xb] = -(pcVar1[0xb] == -1);
      auVar125[0xc] = -(pcVar1[0xc] == -1);
      auVar125[0xd] = -(pcVar1[0xd] == -1);
      auVar125[0xe] = -(pcVar1[0xe] == -1);
      auVar125[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar125 >> 7,0) & 1) != 0 || (SUB161(auVar125 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar125 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar125 >> 0x1f,0) & 1) != 0) || (SUB161(auVar125 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar125 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar125 >> 0x37,0) & 1) != 0) || (SUB161(auVar125 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar125 >> 0x47,0) & 1) != 0) || (SUB161(auVar125 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar125 >> 0x57,0) & 1) != 0) || (SUB161(auVar125 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar125 >> 0x67,0) & 1) != 0) || (SUB161(auVar125 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar125 >> 0x77,0) & 1) != 0) || auVar125[0xf] < '\0') goto LAB_1400fc892;
      uVar90 = uVar90 + lVar91 + 0x10;
      lVar91 = lVar91 + 0x10;
    } while( true );
  }
  puVar84 = &uStack_870;
LAB_1400fbfd9:
  uStack_91 = 0;
  pdb_1406f8030(&uStack_1f8,param_2,*(undefined4 *)puVar84);
  if (uStack_1f8 == 1) {
    uStack_178 = CONCAT26(uStack_1ea,CONCAT24(uStack_1ec,uStack_1f0));
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142e42c10,0x2b,&uStack_178,&UNK_142e42bf0,&UNK_142e42748);
  }
  uStack_258 = CONCAT44(uStack_1f0,uStack_1f4);
  uStack_250 = CONCAT44(uStack_1e8,CONCAT22(uStack_1ea,uStack_1ec));
  uStack_248 = CONCAT44(uStack_1e0,CONCAT22(uStack_1e2,uStack_1e4));
  uStack_308 = CONCAT44(uStack_1d8,uStack_1dc);
  uStack_300 = CONCAT44(uStack_1d0,uStack_1d4);
  uStack_2f8 = CONCAT44(uStack_1c8,uStack_1cc);
  uStack_1f8._3_1_ = (undefined1)uStack_1dc;
  uStack_1f4 = (undefined4)(uStack_308 >> 8);
  uStack_1f0._3_1_ = (undefined1)uStack_1d4;
  uStack_1f0 = CONCAT13(uStack_1f0._3_1_,(int3)((uint)uStack_1d8 >> 8));
  uStack_1ec = (undefined2)((uint)uStack_1d4 >> 8);
  uStack_1ea = (undefined2)((ulonglong)uStack_300 >> 0x18);
  uStack_1e8._3_1_ = (undefined1)uStack_1cc;
  uStack_1e8 = CONCAT13(uStack_1e8._3_1_,(int3)((uint)uStack_1d0 >> 8));
  uStack_1e4 = (undefined2)((uint)uStack_1cc >> 8);
  uStack_1e2 = (undefined2)((ulonglong)uStack_2f8 >> 0x18);
  uStack_1e0._0_3_ = (undefined3)((uint)uStack_1c8 >> 8);
  uStack_2f0 = (undefined1)uStack_1c4;
  uStack_91 = 0;
  uStack_94 = CONCAT11(uStack_94._1_1_,(undefined1)uStack_1c4);
  uStack_168 = uStack_248;
  uStack_160 = uStack_308;
  lStack_158 = uStack_300;
  pdb_140b03860(&lStack_9c0,param_2,&lStack_8a8,&uStack_368,&uStack_4a8,&uStack_308,
                (undefined1)uStack_1c4,auStack_110,auStack_4c0);
  uStack_91 = 0;
  pdb_140cd1dc0(auStack_a60,param_2,&uStack_368,&uStack_4a8,auStack_4c0,&lStack_9c0,auStack_110);
  plVar77 = plStack_900;
  lVar82 = *(longlong *)(param_2 + 0x130);
  if (lVar82 == *(longlong *)(param_2 + 0x120)) {
    uStack_91 = 0;
    pdb_142d8afd0(param_2 + 0x120);
  }
  lVar94 = *(longlong *)(param_2 + 0x128);
  *(undefined **)(lVar94 + lVar82 * 0x10) = &UNK_142e42760;
  *(undefined8 *)(lVar94 + 8 + lVar82 * 0x10) = 0x17;
  *(longlong *)(param_2 + 0x130) = lVar82 + 1;
  lVar82 = *plVar77;
  uStack_91 = 0;
  pdb_140b1f850(&uStack_1f8,param_2,lVar82);
  uStack_91 = 0;
  pdb_140b053f0(&uStack_538,param_2,lVar82,&uStack_368,&uStack_4a8,auStack_110,&uStack_1f8);
  uStack_500 = CONCAT44(uStack_1d4,uStack_1d8);
  uStack_520 = CONCAT44(uStack_1f4,uStack_1f8);
  uStack_518 = CONCAT26(uStack_1ea,CONCAT24(uStack_1ec,uStack_1f0));
  uStack_510 = CONCAT26(uStack_1e2,CONCAT24(uStack_1e4,uStack_1e8));
  uStack_508 = CONCAT44(uStack_1dc,uStack_1e0);
  lVar82 = *(longlong *)(param_2 + 0x130);
  if (lVar82 == *(longlong *)(param_2 + 0x120)) {
    uStack_91 = 0;
    pdb_142d8afd0(param_2 + 0x120);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar82 * 0x10) = 0;
  *(longlong *)(param_2 + 0x130) = lVar82 + 1;
  uStack_948 = uStack_528;
  uStack_958 = uStack_538;
  uStack_950 = uStack_530;
  uStack_3b8 = uStack_500;
  uStack_3c8 = uStack_510;
  uStack_3c0 = uStack_508;
  uStack_3d8 = uStack_520;
  uStack_3d0 = uStack_518;
  uStack_91 = 0;
  pdb_140b04680(auStack_a78,param_2,*plStack_900,&uStack_8c0,auStack_110);
  uStack_91 = 0;
  pdb_1409ea3b0(param_2,*plStack_900,&uStack_8c0,&uStack_878,&uStack_308,(undefined1)uStack_94,
                auStack_4c0,&uStack_368,auStack_a60,auStack_a78,&uStack_958,&uStack_3d8);
  if (*_DAT_143ca4500 == '\0') {
    uStack_91 = 0;
    pdb_140b02c60(auStack_4d8,param_2,*plStack_900,&uStack_878,&lStack_8a8,uStack_8f0);
    bVar98 = cStack_4c4 == '\x02';
  }
  else {
    cStack_4c4 = '\x02';
    bVar98 = true;
  }
  uStack_91 = 0;
  pdb_140b04a60(param_2,*plStack_900);
  lStack_208 = lStack_898;
  lStack_218 = lStack_8a8;
  lStack_210 = lStack_8a0;
  uStack_968 = uStack_880;
  uStack_978 = uStack_890;
  uStack_970 = uStack_888;
  uStack_91 = 0;
  pdb_140b21c50(param_2,*plStack_900,&uStack_878,&lStack_218,puStack_8d8);
  uStack_91 = 0;
  puVar84 = &uStack_3d8;
  puVar138 = puStack_8d0;
  pdb_140aac8d0(&uStack_1f8,param_2,*plStack_900,&uStack_878,&lStack_218,&uStack_368,puStack_8d0,
                puVar84,auStack_110);
  pcVar1 = pcStack_8c8;
  uVar90 = uStack_8f0;
  plVar77 = plStack_900;
  uVar80 = (undefined4)((ulonglong)puVar138 >> 0x20);
  uVar81 = (undefined4)((ulonglong)puVar84 >> 0x20);
  plVar97 = &lStack_8a8;
  if (!bVar98) {
    lVar82 = *(longlong *)(param_2 + 0x130);
    if (lVar82 == *(longlong *)(param_2 + 0x120)) {
      uStack_91 = 0;
      pdb_142d8afd0(param_2 + 0x120);
    }
    lVar94 = *(longlong *)(param_2 + 0x128);
    *(undefined **)(lVar94 + lVar82 * 0x10) = &UNK_142e42777;
    *(undefined8 *)(lVar94 + 8 + lVar82 * 0x10) = 0xb;
    *(longlong *)(param_2 + 0x130) = lVar82 + 1;
    pcVar95 = pdb_140b025a0;
    if (*pcVar1 != '\0') {
      pcVar95 = pdb_140b012e0;
    }
    uStack_91 = 0;
    puVar139 = auStack_4d8;
    uVar83 = CONCAT71((int7)((ulonglong)puVar138 >> 8),(undefined1)uStack_94);
    (*pcVar95)(param_2,*plVar77,&uStack_878,&lStack_218,&uStack_368,&uStack_308,uVar83,puVar139,
               auStack_110,&uStack_1f8,uVar90);
    uVar80 = (undefined4)((ulonglong)uVar83 >> 0x20);
    uVar81 = (undefined4)((ulonglong)puVar139 >> 0x20);
    lVar82 = *(longlong *)(param_2 + 0x130);
    if (lVar82 == *(longlong *)(param_2 + 0x120)) {
      uStack_91 = 0;
      pdb_142d8afd0(param_2 + 0x120);
    }
    *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar82 * 0x10) = 0;
    *(longlong *)(param_2 + 0x130) = lVar82 + 1;
    plVar97 = plVar77;
  }
  uStack_91 = 0;
  pdb_140b04c70(&lStack_9f0,param_2,*plStack_900,&lStack_218);
  lVar82 = *plStack_900;
  if (*(longlong *)(lVar82 + 0x88) != 0) {
    lVar94 = *(longlong *)(lVar82 + 0x70);
    uVar90 = 0x17b2b0983155443e;
    lVar91 = 0;
    while( true ) {
      uVar90 = uVar90 & *(ulonglong *)(lVar82 + 0x78);
      auVar131 = *(undefined1 (*) [16])(lVar94 + uVar90);
      auVar135[0] = -(auVar131[0] == DAT_142e42310);
      auVar135[1] = -(auVar131[1] == DAT_142e42310._1_1_);
      auVar135[2] = -(auVar131[2] == DAT_142e42310._2_1_);
      auVar135[3] = -(auVar131[3] == DAT_142e42310._3_1_);
      auVar135[4] = -(auVar131[4] == DAT_142e42310._4_1_);
      auVar135[5] = -(auVar131[5] == DAT_142e42310._5_1_);
      auVar135[6] = -(auVar131[6] == DAT_142e42310._6_1_);
      auVar135[7] = -(auVar131[7] == DAT_142e42310._7_1_);
      auVar135[8] = -(auVar131[8] == DAT_142e42310._8_1_);
      auVar135[9] = -(auVar131[9] == DAT_142e42310._9_1_);
      auVar135[10] = -(auVar131[10] == DAT_142e42310._10_1_);
      auVar135[0xb] = -(auVar131[0xb] == DAT_142e42310._11_1_);
      auVar135[0xc] = -(auVar131[0xc] == DAT_142e42310._12_1_);
      auVar135[0xd] = -(auVar131[0xd] == DAT_142e42310._13_1_);
      auVar135[0xe] = -(auVar131[0xe] == DAT_142e42310._14_1_);
      auVar135[0xf] = -(auVar131[0xf] == DAT_142e42310._15_1_);
      uVar86 = (ushort)(SUB161(auVar135 >> 7,0) & 1) | (ushort)(SUB161(auVar135 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar135 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar135 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar135 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar135 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar135 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar135 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar135 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar135 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar135 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar135 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar135 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar135 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar135 >> 0x77,0) & 1) << 0xe | (ushort)(auVar135[0xf] >> 7) << 0xf
      ;
      uVar89 = (uint)uVar86;
      while (uVar86 != 0) {
        uVar92 = 0;
        for (uVar6 = uVar89; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar92 = uVar92 + 1;
        }
        uVar87 = uVar92 + uVar90 & *(ulonglong *)(lVar82 + 0x78);
        pcVar1 = (char *)(lVar94 + -0x18 + uVar87 * -0x18);
        auVar136[0] = -(*pcVar1 == DAT_142e42320);
        auVar136[1] = -(pcVar1[1] == DAT_142e42320._1_1_);
        auVar136[2] = -(pcVar1[2] == DAT_142e42320._2_1_);
        auVar136[3] = -(pcVar1[3] == DAT_142e42320._3_1_);
        auVar136[4] = -(pcVar1[4] == DAT_142e42320._4_1_);
        auVar136[5] = -(pcVar1[5] == DAT_142e42320._5_1_);
        auVar136[6] = -(pcVar1[6] == DAT_142e42320._6_1_);
        auVar136[7] = -(pcVar1[7] == DAT_142e42320._7_1_);
        auVar136[8] = -(pcVar1[8] == DAT_142e42320._8_1_);
        auVar136[9] = -(pcVar1[9] == DAT_142e42320._9_1_);
        auVar136[10] = -(pcVar1[10] == DAT_142e42320._10_1_);
        auVar136[0xb] = -(pcVar1[0xb] == DAT_142e42320._11_1_);
        auVar136[0xc] = -(pcVar1[0xc] == DAT_142e42320._12_1_);
        auVar136[0xd] = -(pcVar1[0xd] == DAT_142e42320._13_1_);
        auVar136[0xe] = -(pcVar1[0xe] == DAT_142e42320._14_1_);
        auVar136[0xf] = -(pcVar1[0xf] == DAT_142e42320._15_1_);
        if ((ushort)((ushort)(SUB161(auVar136 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar136 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar136 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar136 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar136 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar136 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar136 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar136 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar136 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar136 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar136 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar136 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar136 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar136 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar136 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar136[0xf] >> 7) << 0xf) == 0xffff) {
          uVar90 = *(ulonglong *)(lVar94 + uVar87 * -0x18 + -8);
          if ((*(ulonglong *)(lVar82 + 0x210) <= uVar90) ||
             (uVar90 = *(ulonglong *)(*(longlong *)(lVar82 + 0x208) + uVar90 * 8), uVar90 == 0))
          goto LAB_1400fc704;
          lVar94 = ~uVar90 * 0x40;
          if (*(longlong *)(*(longlong *)(lVar82 + 0x1d8) + 0x20 + lVar94) == 0) goto LAB_1400fc704;
          cVar3 = **(char **)(*(longlong *)(lVar82 + 0x1d8) + lVar94 + 0x10);
          if (*(char *)(lStack_8e0 + 0xac + (ulonglong)(cVar3 == '\x10')) == '\0') {
            uStack_2d8 = uStack_868;
            uStack_2e8 = uStack_878;
            uStack_2e0 = uStack_870;
          }
          else {
            uStack_91 = 0;
            pdb_140e09fa0(param_2,&uStack_878);
            uStack_91 = 0;
            pdb_140cd3700(&uStack_2e8,param_2,&uStack_878,&lStack_218,&lStack_9f0,cVar3 == '\x10');
          }
          uStack_91 = 0;
          pdb_1401211c0(param_2,*plStack_900,&uStack_2e8,&lStack_218,&uStack_978);
          lVar94 = lStack_8e0;
          uStack_228 = uStack_2f8;
          uStack_238 = uStack_308;
          uStack_230 = uStack_300;
          lVar82 = *(longlong *)(param_2 + 0x130);
          if (lVar82 == *(longlong *)(param_2 + 0x120)) {
            uStack_91 = 0;
            pdb_142d8afd0(param_2 + 0x120);
          }
          lVar91 = *(longlong *)(param_2 + 0x128);
          *(undefined **)(lVar91 + lVar82 * 0x10) = &UNK_142e427a0;
          *(undefined8 *)(lVar91 + 8 + lVar82 * 0x10) = 0x16;
          *(longlong *)(param_2 + 0x130) = lVar82 + 1;
          if (*(char *)(lVar94 + 0xc5) == '\0') {
            uStack_168 = uStack_228;
            uStack_178 = uStack_238;
            uStack_170 = (undefined4 *)uStack_230;
            uStack_160 = CONCAT71(uStack_160._1_7_,(undefined1)uStack_94);
            uStack_d8 = uStack_248;
            uStack_e8 = uStack_258;
            uStack_e0 = uStack_250;
            uStack_91 = 0;
            pdb_1406f7340(&uStack_3b0,param_2,&uStack_2e8,&uStack_178,auStack_110,&uStack_e8,
                          CONCAT44(uVar80,*(undefined4 *)(lVar94 + 0x98)));
          }
          else if (*(char *)(lVar94 + 0xc5) == '\x01') {
            uStack_168 = uStack_228;
            uStack_178 = uStack_238;
            uStack_170 = (undefined4 *)uStack_230;
            uStack_160 = CONCAT71(uStack_160._1_7_,(undefined1)uStack_94);
            uStack_d8 = uStack_248;
            uStack_e8 = uStack_258;
            uStack_e0 = uStack_250;
            uStack_91 = 0;
            pdb_1406f7560(&uStack_3b0,param_2,&uStack_2e8,&uStack_178,&lStack_218,auStack_110,
                          &uStack_e8,CONCAT44(uVar81,*(undefined4 *)(lVar94 + 0x98)));
          }
          else {
            uStack_168 = uStack_228;
            uStack_178 = uStack_238;
            uStack_170 = (undefined4 *)uStack_230;
            uStack_160 = CONCAT71(uStack_160._1_7_,(undefined1)uStack_94);
            uStack_d8 = uStack_248;
            uStack_e8 = uStack_258;
            uStack_e0 = uStack_250;
            uStack_91 = 0;
            pdb_1406f75c0(&uStack_3b0,param_2,&uStack_2e8,&uStack_178,&lStack_218,auStack_110,
                          &uStack_e8,CONCAT44(uVar81,*(undefined4 *)(lVar94 + 0x98)));
          }
          lVar82 = *(longlong *)(param_2 + 0x130);
          if (lVar82 == *(longlong *)(param_2 + 0x120)) {
            uStack_91 = 0;
            pdb_142d8afd0(param_2 + 0x120);
          }
          *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar82 * 0x10) = 0;
          *(longlong *)(param_2 + 0x130) = lVar82 + 1;
          uStack_d8 = uStack_3a0;
          uStack_e8 = uStack_3b0;
          uStack_e0 = uStack_3a8;
          if (DAT_143cb2b28 == '\x01') {
            uStack_91 = 0;
            pdb_140b03f50(param_2,&uStack_e8);
          }
          uStack_168 = uStack_d8;
          uStack_178 = uStack_e8;
          uStack_170 = (undefined4 *)uStack_e0;
          lStack_130 = lStack_218;
          lStack_128 = lStack_210;
          lStack_120 = lStack_208;
          uStack_160 = lStack_9f0;
          lStack_158 = lStack_9e8;
          lStack_150 = lStack_9e0;
          uStack_148 = uStack_9d8;
          uStack_140 = uStack_9d0;
          uStack_138 = uStack_9c8;
          if (uStack_c0 <= *(ulonglong *)(param_2 + 0x1c8)) {
            *(ulonglong *)(param_2 + 0x1c8) = uStack_c0;
          }
          uStack_1e8 = (undefined4)uStack_d8;
          uStack_1e4 = (undefined2)((ulonglong)uStack_d8 >> 0x20);
          uStack_1e2 = (undefined2)((ulonglong)uStack_d8 >> 0x30);
          uStack_1f8 = (int)uStack_e8;
          uStack_1f4 = (undefined4)(uStack_e8 >> 0x20);
          uStack_1f0 = (undefined4)uStack_e0;
          uStack_1ec = (undefined2)((ulonglong)uStack_e0 >> 0x20);
          uStack_1ea = (undefined2)((ulonglong)uStack_e0 >> 0x30);
          lStack_488 = lStack_9f0;
          lStack_480 = lStack_9e8;
          lStack_478 = lStack_9e0;
          lStack_3f8 = lStack_218;
          lStack_3f0 = lStack_210;
          lStack_3e8 = lStack_208;
          if (*(longlong *)(lStack_a0 + 0x88) == 0) goto LAB_1400fcf35;
          lVar82 = *(longlong *)(lStack_a0 + 0x70);
          uVar90 = 0xbc86f891ccb8bc37;
          lVar94 = 0;
          goto LAB_1400fcb65;
        }
        uVar86 = (ushort)(uVar89 - 1) & (ushort)uVar89;
        uVar89 = CONCAT22((short)(uVar89 - 1 >> 0x10),uVar86);
      }
      auVar126[0] = -(auVar131[0] == -1);
      auVar126[1] = -(auVar131[1] == -1);
      auVar126[2] = -(auVar131[2] == -1);
      auVar126[3] = -(auVar131[3] == -1);
      auVar126[4] = -(auVar131[4] == -1);
      auVar126[5] = -(auVar131[5] == -1);
      auVar126[6] = -(auVar131[6] == -1);
      auVar126[7] = -(auVar131[7] == -1);
      auVar126[8] = -(auVar131[8] == -1);
      auVar126[9] = -(auVar131[9] == -1);
      auVar126[10] = -(auVar131[10] == -1);
      auVar126[0xb] = -(auVar131[0xb] == -1);
      auVar126[0xc] = -(auVar131[0xc] == -1);
      auVar126[0xd] = -(auVar131[0xd] == -1);
      auVar126[0xe] = -(auVar131[0xe] == -1);
      auVar126[0xf] = -(auVar131[0xf] == -1);
      if ((((((((((((((((SUB161(auVar126 >> 7,0) & 1) != 0 || (SUB161(auVar126 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar126 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar126 >> 0x1f,0) & 1) != 0) || (SUB161(auVar126 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar126 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar126 >> 0x37,0) & 1) != 0) || (SUB161(auVar126 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar126 >> 0x47,0) & 1) != 0) || (SUB161(auVar126 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar126 >> 0x57,0) & 1) != 0) || (SUB161(auVar126 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar126 >> 0x67,0) & 1) != 0) || (SUB161(auVar126 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar126 >> 0x77,0) & 1) != 0) || auVar126[0xf] < '\0') break;
      uVar90 = uVar90 + lVar91 + 0x10;
      lVar91 = lVar91 + 0x10;
    }
  }
LAB_1400fc704:
  uStack_91 = 0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142e42788);
}

