// VA 0x140b012e0, PDB extent 4787 bytes
// country_core::systems::render_loop::draw_passes::transparency_pass::ice_surface_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/transparency_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::transparency_pass::ice_surface_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/transparency_pass.rs
   Extent: 4787 */

void pdb_140b012e0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,byte param_7,undefined8 param_8,
                  undefined8 param_9,longlong param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 auStack_3f8 [4];
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  longlong lStack_398;
  longlong lStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined4 *puStack_378;
  undefined4 *puStack_370;
  undefined4 *puStack_368;
  longlong lStack_360;
  undefined4 *puStack_358;
  undefined8 *puStack_350;
  undefined4 *puStack_348;
  undefined8 *puStack_340;
  undefined4 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  uint uStack_318;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined4 uStack_2d4;
  undefined1 uStack_2d0;
  undefined8 uStack_2cc;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined1 uStack_2bc;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  byte abStack_290 [8];
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined4 uStack_26c;
  undefined1 uStack_268;
  undefined8 uStack_264;
  undefined4 uStack_25c;
  longlong lStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined2 uStack_21c;
  undefined2 uStack_21a;
  undefined6 uStack_218;
  undefined2 uStack_212;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined6 uStack_208;
  undefined2 uStack_202;
  undefined6 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  undefined2 uStack_1ec;
  undefined2 uStack_1ea;
  undefined6 uStack_1e8;
  undefined2 uStack_1e2;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  byte *pbStack_1c8;
  undefined1 *puStack_1c0;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 *puStack_198;
  undefined4 *puStack_190;
  undefined8 uStack_188;
  uint uStack_150;
  uint uStack_14c;
  undefined8 *puStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  ushort uStack_11c;
  undefined2 uStack_11a;
  uint uStack_118;
  undefined2 uStack_114;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 *puStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 *puStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  uint uStack_a0;
  undefined1 auStack_9c [16];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_298 = param_6;
  abStack_290[0] = param_7;
  uVar16 = *(uint *)(param_3 + 8);
  uStack_150 = (uint)*(ushort *)(param_3 + 10);
  uStack_14c = (uint)*(ushort *)(param_3 + 8);
  uStack_120 = 0;
  uStack_11e = (undefined2)uVar16;
  uStack_11c = (ushort)(uVar16 >> 0x10);
  uStack_11a = 1;
  uStack_118 = 0x9010001;
  uStack_114 = 0x201;
  uStack_112 = 0;
  uStack_110._0_4_ = 0x43052e60;
  uStack_110._4_4_ = 1;
  uStack_108 = 0x11;
  uStack_104 = 0;
  uStack_250 = param_4;
  uVar6 = pdb_140e2b4e0(param_1,&uStack_120);
  uStack_11c = (ushort)uVar6;
  uStack_11a = (undefined2)((uint)uVar6 >> 0x10);
  uStack_114 = 1;
  uStack_112 = 1;
  uStack_111 = 0;
  uStack_110._0_4_ = 0x2010901;
  uStack_110._4_4_ = uStack_110._4_4_ & 0xffffff00;
  uStack_120 = 0;
  uStack_11e = 0;
  uStack_118 = uVar16;
  if (*(char *)(param_1 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_120,param_1);
  }
  uStack_278 = CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
  uStack_288 = CONCAT22(uStack_11e,uStack_120);
  uStack_284 = CONCAT22(uStack_11a,uStack_11c);
  uStack_280 = uStack_118;
  uStack_27c = CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114));
  uVar6 = *(undefined4 *)(param_3 + 8);
  uStack_120 = 0;
  uStack_11e = (undefined2)uVar6;
  uVar5 = uStack_11e;
  uStack_11c = (ushort)((uint)uVar6 >> 0x10);
  uVar20 = uStack_11c;
  uStack_11a = 1;
  uStack_118 = 0x62010001;
  uStack_114 = 0x201;
  uStack_112 = 0;
  uStack_110._0_4_ = 0x43052e71;
  uStack_110._4_4_ = 1;
  uStack_108 = 0xd;
  uStack_104 = 0;
  uVar7 = pdb_140e2b4e0(param_1,&uStack_120);
  uStack_11c = (ushort)uVar7;
  uStack_11a = (undefined2)((uint)uVar7 >> 0x10);
  uStack_114 = 1;
  uStack_112 = 1;
  uStack_111 = 0;
  uStack_110._0_4_ = 0x2016201;
  uStack_110._4_4_ = uStack_110._4_4_ & 0xffffff00;
  uStack_120 = 0;
  uStack_11e = 0;
  uStack_118 = uVar6;
  if (*(char *)(param_1 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_120,param_1);
  }
  uStack_2e8 = CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
  uStack_2f8 = CONCAT22(uStack_11e,uStack_120);
  uStack_2f4 = CONCAT22(uStack_11a,uStack_11c);
  uStack_2f0 = uStack_118;
  uStack_2ec = CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114));
  uStack_120 = 0;
  uStack_11a = 1;
  uStack_118 = 0x62010001;
  uStack_114 = 0x201;
  uStack_112 = 0;
  uStack_110._0_4_ = 0x43052e7e;
  uStack_110._4_4_ = 1;
  uStack_108 = 0x15;
  uStack_104 = 0;
  uVar12 = SUB81(&uStack_120,0);
  lStack_258 = param_3;
  lStack_140 = param_2;
  uStack_11e = uVar5;
  uStack_11c = uVar20;
  uVar7 = pdb_140e2b4e0(param_1);
  uStack_11c = (ushort)uVar7;
  uStack_11a = (undefined2)((uint)uVar7 >> 0x10);
  uStack_114 = 1;
  uStack_112 = 1;
  uStack_111 = 0;
  uStack_110._0_4_ = 0x2016201;
  uStack_110._4_4_ = uStack_110._4_4_ & 0xffffff00;
  uStack_120 = 0;
  uStack_11e = 0;
  uStack_118 = uVar6;
  if (*(char *)(param_1 + 0x24c) == '\x01') {
    lVar14 = param_1;
    pdb_140e19620(&uStack_120);
    uVar12 = (undefined1)lVar14;
  }
  uStack_218 = (undefined6)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
  uStack_212 = (undefined2)(uStack_110._4_4_ >> 0x10);
  uStack_228 = CONCAT22(uStack_11e,uStack_120);
  uStack_224 = CONCAT22(uStack_11a,uStack_11c);
  uStack_220 = uStack_118;
  uStack_21c = uStack_114;
  uStack_21a = (undefined2)(CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114)) >> 0x10);
  uVar6 = pdb_140e25e40(0x10);
  uStack_120 = 1;
  uStack_11c = (ushort)uVar6;
  uStack_11a = (undefined2)((uint)uVar6 >> 0x10);
  uStack_110._0_4_ = 0x43052e93;
  uStack_110._4_4_ = 1;
  uStack_108 = 0x15;
  uStack_104 = 0;
  uVar13 = SUB81(&uStack_120,0);
  uStack_118._0_1_ = uVar12;
  uStack_25c = pdb_140e2b4e0(param_1);
  uStack_264 = 0xffffffff00000000;
  uStack_26c = uVar6;
  uStack_268 = uVar12;
  uVar6 = pdb_140e25e40(0x10);
  uStack_120 = 1;
  uStack_11c = (ushort)uVar6;
  uStack_11a = (undefined2)((uint)uVar6 >> 0x10);
  uStack_110._0_4_ = 0x43052ea8;
  uStack_110._4_4_ = 1;
  uStack_108 = 0x13;
  uStack_104 = 0;
  uStack_118._0_1_ = uVar13;
  uStack_29c = pdb_140e2b4e0(param_1,&uStack_120);
  uStack_2a4 = 0xffffffff00000000;
  uStack_2ac._0_4_ = uVar6;
  uStack_2ac._4_1_ = uVar13;
  pdb_141763ce0(param_1,&uStack_26c,&UNK_143052ebc,4);
  pdb_141763ce0(param_1,&uStack_2ac,&UNK_143052ebc,4);
  uVar8 = (uint)*(ushort *)(param_5 + 0xc) *
          (uint)*(ushort *)(param_5 + 10) * (uint)*(ushort *)(param_5 + 8);
  uVar18 = (ulonglong)((uVar8 >> 4) + uVar8);
  lVar14 = param_5;
  uVar6 = pdb_140e25e40(uVar18 * 4);
  uStack_120 = 1;
  uStack_11c = (ushort)uVar6;
  uStack_11a = (undefined2)((uint)uVar6 >> 0x10);
  uStack_110._0_4_ = 0x43052ecc;
  uStack_110._4_4_ = 1;
  uStack_108 = 0x12;
  uStack_104 = 0;
  uVar12 = SUB81(&uStack_120,0);
  uStack_118._0_1_ = (char)lVar14;
  uStack_2b0 = pdb_140e2b4e0(param_1);
  uStack_2b8 = 0xffffffff00000000;
  uStack_2c0 = uVar6;
  uStack_2bc = (char)lVar14;
  uVar6 = pdb_140e25e40(uVar18 << 4);
  uStack_120 = 1;
  uStack_11c = (ushort)uVar6;
  uStack_11a = (undefined2)((uint)uVar6 >> 0x10);
  uStack_118 = CONCAT31(uStack_118._1_3_,uVar12);
  uStack_110._0_4_ = 0x43052ede;
  uStack_110._4_4_ = 1;
  uStack_108 = 0x11;
  uStack_104 = 0;
  uStack_2c4 = pdb_140e2b4e0(param_1,&uStack_120);
  uStack_2cc = 0xffffffff00000000;
  uStack_1d8 = (ulonglong)uVar16 << 0x20;
  uStack_1d0 = (longlong *)0x109012800010001;
  pbStack_1c8 = (byte *)CONCAT71(pbStack_1c8._1_7_,2);
  uStack_2d4 = uVar6;
  uStack_2d0 = uVar12;
  pdb_14174a370(&uStack_120,param_1,&UNK_143052eef,0xb,&uStack_1d8);
  lVar14 = lStack_258;
  if (CONCAT22(uStack_11e,uStack_120) == 1) {
    uStack_1d8 = CONCAT17(uStack_111,CONCAT16(uStack_112,CONCAT24(uStack_114,uStack_118)));
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1430538c0,0x2b,&uStack_1d8,&UNK_1430538a0,&UNK_143052f48);
  }
  uStack_3d8 = CONCAT44(uStack_118,CONCAT22(uStack_11a,uStack_11c));
  uStack_3d0 = CONCAT44((undefined4)uStack_110,CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114)))
  ;
  uStack_3c8 = CONCAT44(uStack_108,uStack_110._4_4_);
  auStack_3f8[0] = CONCAT44((undefined4)uStack_100,uStack_104);
  uStack_61 = uStack_f0._4_1_;
  if (*(longlong *)(lStack_140 + 0x88) != 0) {
    pbStack_1c8 = abStack_290;
    lVar17 = *(longlong *)(lStack_140 + 0x70);
    uVar18 = 0x7057b4358e925fdb;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lStack_140 + 0x78);
      auVar3 = *(undefined1 (*) [16])(lVar17 + uVar18);
      auVar23[0] = -(auVar3[0] == DAT_142e33d90);
      auVar23[1] = -(auVar3[1] == DAT_142e33d90._1_1_);
      auVar23[2] = -(auVar3[2] == DAT_142e33d90._2_1_);
      auVar23[3] = -(auVar3[3] == DAT_142e33d90._3_1_);
      auVar23[4] = -(auVar3[4] == DAT_142e33d90._4_1_);
      auVar23[5] = -(auVar3[5] == DAT_142e33d90._5_1_);
      auVar23[6] = -(auVar3[6] == DAT_142e33d90._6_1_);
      auVar23[7] = -(auVar3[7] == DAT_142e33d90._7_1_);
      auVar23[8] = -(auVar3[8] == DAT_142e33d90._8_1_);
      auVar23[9] = -(auVar3[9] == DAT_142e33d90._9_1_);
      auVar23[10] = -(auVar3[10] == DAT_142e33d90._10_1_);
      auVar23[0xb] = -(auVar3[0xb] == DAT_142e33d90._11_1_);
      auVar23[0xc] = -(auVar3[0xc] == DAT_142e33d90._12_1_);
      auVar23[0xd] = -(auVar3[0xd] == DAT_142e33d90._13_1_);
      auVar23[0xe] = -(auVar3[0xe] == DAT_142e33d90._14_1_);
      auVar23[0xf] = -(auVar3[0xf] == DAT_142e33d90._15_1_);
      uVar20 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar8 = 0;
        for (uVar15 = uVar16; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar21 = uVar8 + uVar18 & *(ulonglong *)(lStack_140 + 0x78);
        pcVar2 = (char *)(lVar17 + -0x18 + uVar21 * -0x18);
        auVar24[0] = -(*pcVar2 == DAT_142e34350);
        auVar24[1] = -(pcVar2[1] == DAT_142e34350._1_1_);
        auVar24[2] = -(pcVar2[2] == DAT_142e34350._2_1_);
        auVar24[3] = -(pcVar2[3] == DAT_142e34350._3_1_);
        auVar24[4] = -(pcVar2[4] == DAT_142e34350._4_1_);
        auVar24[5] = -(pcVar2[5] == DAT_142e34350._5_1_);
        auVar24[6] = -(pcVar2[6] == DAT_142e34350._6_1_);
        auVar24[7] = -(pcVar2[7] == DAT_142e34350._7_1_);
        auVar24[8] = -(pcVar2[8] == DAT_142e34350._8_1_);
        auVar24[9] = -(pcVar2[9] == DAT_142e34350._9_1_);
        auVar24[10] = -(pcVar2[10] == DAT_142e34350._10_1_);
        auVar24[0xb] = -(pcVar2[0xb] == DAT_142e34350._11_1_);
        auVar24[0xc] = -(pcVar2[0xc] == DAT_142e34350._12_1_);
        auVar24[0xd] = -(pcVar2[0xd] == DAT_142e34350._13_1_);
        auVar24[0xe] = -(pcVar2[0xe] == DAT_142e34350._14_1_);
        auVar24[0xf] = -(pcVar2[0xf] == DAT_142e34350._15_1_);
        if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar17 + uVar21 * -0x18 + -8);
          if ((uVar18 < *(ulonglong *)(lStack_140 + 0x210)) &&
             (uVar18 = *(ulonglong *)(*(longlong *)(lStack_140 + 0x208) + uVar18 * 8), uVar18 != 0))
          {
            lVar17 = ~uVar18 * 0x40;
            if (*(longlong *)(*(longlong *)(lStack_140 + 0x1d8) + 0x20 + lVar17) != 0) {
              uStack_188 = *(undefined8 *)(*(longlong *)(lStack_140 + 0x1d8) + lVar17 + 0x10);
              lStack_398 = lStack_140;
              auStack_9c = (undefined1  [16])0x0;
              uStack_dc = 0;
              puStack_d8 = (undefined4 *)0x0;
              uStack_d0 = 0;
              uStack_120 = 0;
              uStack_11e = 0;
              uStack_118 = (uint)lStack_258;
              uStack_114 = (undefined2)((ulonglong)lStack_258 >> 0x20);
              uStack_112 = (undefined1)((ulonglong)lStack_258 >> 0x30);
              uStack_111 = (undefined1)((ulonglong)lStack_258 >> 0x38);
              uStack_100._0_4_ = 1;
              uStack_100._4_4_ = (undefined4)_DAT_142e3c640;
              uStack_f8 = (undefined4)((ulonglong)_DAT_142e3c640 >> 0x20);
              uStack_f4 = (undefined4)_UNK_142e3c648;
              uStack_f0._0_4_ = (undefined4)((ulonglong)_UNK_142e3c648 >> 0x20);
              puStack_e8 = &uStack_288;
              uStack_e0 = 1;
              puStack_c8 = (undefined8 *)&uStack_2f8;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,2);
              puStack_b8 = &uStack_228;
              uStack_a0 = 1;
              puStack_88 = &uStack_3d8;
              uStack_80 = 0;
              uStack_78 = uStack_250;
              uStack_70 = 0;
              uStack_1d8 = param_11;
              uStack_1d0 = &lStack_398;
              puStack_1c0 = &uStack_61;
              lStack_1b8 = param_5;
              uStack_1b0 = param_9;
              uStack_1a8 = param_8;
              puStack_1a0 = auStack_3f8;
              puStack_198 = &uStack_26c;
              puStack_190 = &uStack_2c0;
              pdb_14174f020(param_1,&UNK_143052f78,9,&uStack_120,&uStack_1d8);
              uVar16 = *(uint *)(lVar14 + 8);
              uVar8 = (uVar16 & 0xffff) >> 1;
              uVar8 = (uVar16 & 1) + uVar8 +
                      (uint)((short)((short)uVar8 + (short)(uVar16 & 1)) == 0);
              uVar20 = (ushort)(uVar16 >> 0x11) + (ushort)((uVar16 >> 0x10 & 1) != 0);
              uStack_11c = 1;
              if (1 < uVar20) {
                uStack_11c = uVar20;
              }
              uVar16 = uVar8 & 0xffff | (uint)uStack_11c << 0x10;
              uStack_120 = 0;
              uStack_11e = (undefined2)uVar8;
              uStack_11a = 1;
              uStack_118 = 0x62010001;
              uStack_114 = 0x201;
              uStack_112 = 0;
              uStack_110._0_4_ = 0x43052f81;
              uStack_110._4_4_ = 1;
              uStack_108 = 0x17;
              uStack_104 = 0;
              uVar6 = pdb_140e2b4e0(param_1,&uStack_120);
              uStack_11c = (ushort)uVar6;
              uStack_11a = (undefined2)((uint)uVar6 >> 0x10);
              uStack_114 = 1;
              uStack_112 = 1;
              uStack_111 = 0;
              uStack_110._0_4_ = 0x2016201;
              uStack_110._4_4_ = uStack_110._4_4_ & 0xffffff00;
              uStack_120 = 0;
              uStack_11e = 0;
              uStack_118 = uVar16;
              if (*(char *)(param_1 + 0x24c) == '\x01') {
                pdb_140e19620(&uStack_120,param_1);
              }
              uStack_1e8 = (undefined6)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
              uStack_1e2 = (undefined2)(uStack_110._4_4_ >> 0x10);
              uStack_1f8 = CONCAT22(uStack_11e,uStack_120);
              uStack_1f4 = CONCAT22(uStack_11a,uStack_11c);
              uStack_1f0 = uStack_118;
              uVar16 = *(uint *)(lVar14 + 8);
              uVar8 = (uVar16 & 0xffff) >> 1;
              uVar8 = (uVar16 & 1) + uVar8 +
                      (uint)((short)((short)uVar8 + (short)(uVar16 & 1)) == 0);
              uVar20 = (ushort)(uVar16 >> 0x11) + (ushort)((uVar16 >> 0x10 & 1) != 0);
              uStack_11c = 1;
              if (1 < uVar20) {
                uStack_11c = uVar20;
              }
              uStack_1ec = uStack_114;
              uStack_1ea = (undefined2)
                           (CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114)) >> 0x10);
              uVar16 = uVar8 & 0xffff | (uint)uStack_11c << 0x10;
              uStack_120 = 0;
              uStack_11e = (undefined2)uVar8;
              uStack_11a = 1;
              uStack_118 = 0x53010001;
              uStack_114 = 0x201;
              uStack_112 = 0;
              uStack_110._0_4_ = 0x43052f98;
              uStack_110._4_4_ = 1;
              uStack_108 = 0xf;
              uStack_104 = 0;
              uVar6 = pdb_140e2b4e0(param_1,&uStack_120);
              uStack_11c = (ushort)uVar6;
              uStack_11a = (undefined2)((uint)uVar6 >> 0x10);
              uStack_114 = 1;
              uStack_112 = 1;
              uStack_111 = 0;
              uStack_110._0_4_ = 0x2015301;
              uStack_110._4_4_ = uStack_110._4_4_ & 0xffffff00;
              uStack_120 = 0;
              uStack_11e = 0;
              uStack_118 = uVar16;
              if (*(char *)(param_1 + 0x24c) == '\x01') {
                pdb_140e19620(&uStack_120,param_1);
              }
              uStack_238 = CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
              uStack_248 = CONCAT22(uStack_11e,uStack_120);
              uStack_244 = CONCAT22(uStack_11a,uStack_11c);
              uStack_240 = uStack_118;
              uStack_23c = CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114));
              pdb_140e2b390(param_1,&uStack_248);
              bVar4 = abStack_290[0];
              uVar10 = uStack_298;
              uStack_388 = uStack_298;
              lStack_140 = param_10 + 0x1c;
              puVar1 = (undefined8 *)(param_10 + 0x34);
              uStack_138 = 0;
              uStack_130 = 8;
              uStack_128 = 0;
              uVar11 = *(undefined8 *)(param_10 + 0x14);
              lStack_390 = param_10 + 0x4c;
              puStack_148 = (undefined8 *)(param_10 + 100);
              uVar9 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333139e,0x26,&uStack_138
                                   );
              pdb_140e291c0(&uStack_1d8,&UNK_14333139e,0x26,uVar9,param_1);
              lVar14 = lStack_140;
              uStack_120 = SUB82(&uStack_26c,0);
              uStack_11e = (undefined2)((ulonglong)&uStack_26c >> 0x10);
              uStack_11c = (ushort)((ulonglong)&uStack_26c >> 0x20);
              uStack_11a = (undefined2)((ulonglong)&uStack_26c >> 0x30);
              uStack_118 = (uint)&uStack_2c0;
              uStack_114 = (undefined2)((ulonglong)&uStack_2c0 >> 0x20);
              uStack_112 = (undefined1)((ulonglong)&uStack_2c0 >> 0x30);
              uStack_111 = (undefined1)((ulonglong)&uStack_2c0 >> 0x38);
              uStack_108 = (undefined4)param_10;
              uStack_104 = (undefined4)((ulonglong)param_10 >> 0x20);
              uStack_f8 = (undefined4)lStack_140;
              uStack_f4 = (undefined4)((ulonglong)lStack_140 >> 0x20);
              uStack_e0 = (undefined4)param_5;
              uStack_dc = (undefined4)((ulonglong)param_5 >> 0x20);
              puStack_d8 = &uStack_2d4;
              uStack_d0 = (undefined4)uVar10;
              uStack_cc = (undefined4)((ulonglong)uVar10 >> 0x20);
              uStack_c0 = param_9;
              puStack_b8 = &uStack_1f8;
              puStack_b0 = &uStack_288;
              puStack_a8 = &uStack_248;
              puStack_e8 = (undefined4 *)uVar11;
              puStack_c8 = &uStack_2ac;
              uStack_a0 = (uint)bVar4;
              uStack_110 = param_10 + 0x4c;
              uStack_100 = param_10 + 100;
              uStack_f0 = puVar1;
              pdb_14178f620(&puStack_380,&uStack_1d8,&uStack_120);
              pdb_140e29040(&puStack_380,&uStack_26c,0);
              uStack_138 = 0;
              uStack_130 = 8;
              uStack_128 = 0;
              uVar10 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331fc4,0x27,
                                     &uStack_138);
              pdb_140e291c0(&uStack_120,&UNK_143331fc4,0x27,uVar10,param_1);
              puStack_378 = &uStack_2d4;
              puStack_370 = (undefined4 *)lStack_390;
              puStack_368 = (undefined4 *)param_10;
              lStack_360 = (longlong)puStack_148;
              puStack_358 = (undefined4 *)lVar14;
              puStack_340 = (undefined8 *)param_5;
              puStack_338 = &uStack_1f8;
              puStack_330 = (undefined8 *)uStack_388;
              puStack_328 = (undefined8 *)&uStack_248;
              uStack_320 = param_9;
              puStack_380 = &uStack_2ac;
              puStack_350 = puVar1;
              puStack_348 = (undefined4 *)uVar11;
              uStack_318 = (uint)bVar4;
              puStack_148 = puVar1;
              pdb_1417a1420(&uStack_1d8,&uStack_120,&puStack_380);
              pdb_140e29040(&uStack_1d8,&uStack_2ac,0);
              lVar14 = lStack_258;
              uStack_1d8 = (ulonglong)*(uint *)(lStack_258 + 8) << 0x20;
              uStack_1d0 = (longlong *)0x17a011800010001;
              pbStack_1c8 = (byte *)CONCAT71(pbStack_1c8._1_7_,2);
              pdb_14174a370(&uStack_120,param_1,&UNK_143052fa7,0x13,&uStack_1d8);
              uVar16 = uStack_f0._4_4_;
              if (CONCAT22(uStack_11e,uStack_120) != 1) {
                uStack_3b8 = CONCAT44(uStack_118,CONCAT22(uStack_11a,uStack_11c));
                uStack_3b0 = CONCAT44((undefined4)uStack_110,
                                      CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114)));
                uStack_3a8 = CONCAT44(uStack_108,uStack_110._4_4_);
                uStack_418 = CONCAT44((undefined4)uStack_100,uStack_104);
                uStack_410 = CONCAT44(uStack_f8,uStack_100._4_4_);
                uStack_408 = CONCAT44((undefined4)uStack_f0,uStack_f4);
                uStack_1d8 = (ulonglong)*(uint *)(lVar14 + 8) << 0x20;
                uStack_1d0 = (longlong *)0x153011800010001;
                pbStack_1c8._1_7_ = (undefined7)((ulonglong)uStack_3a8 >> 8);
                pbStack_1c8 = (byte *)CONCAT71(pbStack_1c8._1_7_,2);
                puStack_1c0 = (undefined1 *)uStack_418;
                lStack_1b8 = uStack_410;
                uStack_1b0 = uStack_408;
                pdb_14174a370(&uStack_120,param_1,&UNK_143052fd8,0x10,&uStack_1d8);
                if (CONCAT22(uStack_11e,uStack_120) != 1) {
                  uVar15 = uVar16 & 0xff & uStack_f0._4_4_;
                  uStack_438 = CONCAT44(uStack_118,CONCAT22(uStack_11a,uStack_11c));
                  uStack_430 = CONCAT44((undefined4)uStack_110,
                                        CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114)));
                  uStack_428 = CONCAT44(uStack_108,uStack_110._4_4_);
                  uStack_458 = CONCAT44((undefined4)uStack_100,uStack_104);
                  uStack_450 = CONCAT44(uStack_f8,uStack_100._4_4_);
                  uStack_448 = CONCAT44((undefined4)uStack_f0,uStack_f4);
                  uStack_208 = CONCAT24(uStack_21c,uStack_220);
                  uStack_202 = uStack_21a;
                  uStack_200 = uStack_218;
                  uStack_210 = 0x7b;
                  uStack_20c = uStack_224;
                  uStack_138 = 0;
                  uStack_130 = 8;
                  uStack_128 = 0;
                  uStack_1d8 = uStack_438;
                  uStack_1d0 = (longlong *)uStack_430;
                  pbStack_1c8 = (byte *)uStack_428;
                  puStack_1c0 = (undefined1 *)uStack_458;
                  lStack_1b8 = uStack_450;
                  uStack_1b0 = uStack_448;
                  uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330e43,0x28,
                                         &uStack_138);
                  pdb_140e291c0(&uStack_1d8,&UNK_143330e43,0x28,uVar11,param_1);
                  uVar11 = uStack_250;
                  puStack_380 = &uStack_3b8;
                  puStack_378 = (undefined4 *)uStack_250;
                  puStack_370 = &uStack_210;
                  puStack_368 = &uStack_2f8;
                  pdb_141790ed0(&uStack_120,&uStack_1d8,&puStack_380);
                  uVar8 = uStack_14c;
                  uVar16 = uStack_150;
                  uStack_1d0 = (longlong *)CONCAT44(1,uStack_150);
                  uStack_1d8 = CONCAT44(uStack_14c,1);
                  pdb_140e28810(&uStack_120,&uStack_1d8);
                  uStack_208 = CONCAT24(uStack_1ec,uStack_1f0);
                  uStack_202 = uStack_1ea;
                  uStack_200 = uStack_1e8;
                  uStack_210 = 0x7b;
                  uStack_20c = uStack_1f4;
                  uStack_138 = 0;
                  uStack_130 = 8;
                  uStack_128 = 0;
                  uVar10 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333112e,0x28,
                                         &uStack_138);
                  pdb_140e291c0(&uStack_1d8,&UNK_14333112e,0x28,uVar10,param_1);
                  puStack_380 = puStack_148;
                  puStack_378 = (undefined4 *)uVar11;
                  puStack_370 = (undefined4 *)lStack_140;
                  puStack_368 = &uStack_288;
                  lStack_360 = param_9;
                  puStack_358 = &uStack_248;
                  puStack_350 = &uStack_438;
                  puStack_348 = &uStack_210;
                  puStack_340 = &uStack_458;
                  puStack_338 = (undefined4 *)lVar14;
                  puStack_330 = &uStack_3b8;
                  puStack_328 = &uStack_418;
                  uStack_320 = CONCAT44(uStack_320._4_4_,uVar15) & 0xffffffff00000001;
                  pdb_14179abc0(&uStack_120,&uStack_1d8,&puStack_380);
                  uStack_1d0 = (longlong *)CONCAT44(1,uVar16);
                  uStack_1d8 = CONCAT44(uVar8,1);
                  pdb_140e28810(&uStack_120,&uStack_1d8);
                  return;
                }
                uStack_1d8 = CONCAT17(uStack_111,
                                      CONCAT16(uStack_112,CONCAT24(uStack_114,uStack_118)));
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_1430538c0,0x2b,&uStack_1d8,&UNK_1430538a0,&UNK_143052fe8);
              }
              uStack_1d8 = CONCAT17(uStack_111,CONCAT16(uStack_112,CONCAT24(uStack_114,uStack_118)))
              ;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_1430538c0,0x2b,&uStack_1d8,&UNK_1430538a0,&UNK_143052fc0);
            }
          }
          goto LAB_140b023e4;
        }
        uVar20 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar20);
      }
      auVar22[0] = -(auVar3[0] == -1);
      auVar22[1] = -(auVar3[1] == -1);
      auVar22[2] = -(auVar3[2] == -1);
      auVar22[3] = -(auVar3[3] == -1);
      auVar22[4] = -(auVar3[4] == -1);
      auVar22[5] = -(auVar3[5] == -1);
      auVar22[6] = -(auVar3[6] == -1);
      auVar22[7] = -(auVar3[7] == -1);
      auVar22[8] = -(auVar3[8] == -1);
      auVar22[9] = -(auVar3[9] == -1);
      auVar22[10] = -(auVar3[10] == -1);
      auVar22[0xb] = -(auVar3[0xb] == -1);
      auVar22[0xc] = -(auVar3[0xc] == -1);
      auVar22[0xd] = -(auVar3[0xd] == -1);
      auVar22[0xe] = -(auVar3[0xe] == -1);
      auVar22[0xf] = -(auVar3[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_140b023e4:
  uStack_1d8 = uStack_3d8;
  uStack_1d0 = (longlong *)uStack_3d0;
  pbStack_1c8 = (byte *)uStack_3c8;
  puStack_1c0 = (undefined1 *)auStack_3f8[0];
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143052f60);
}

