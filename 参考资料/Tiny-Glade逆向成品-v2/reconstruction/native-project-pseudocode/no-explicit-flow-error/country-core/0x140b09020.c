// VA 0x140b09020, PDB extent 5865 bytes
// country_core::startup::background_terrain_maps::rasterize_heightmap
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140b09d88) */
/* WARNING: Removing unreachable block (ram,0x000140b098b4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::background_terrain_maps::rasterize_heightmap
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
   Extent: 5865 */

void pdb_140b09020(undefined8 *param_1,longlong param_2,code *param_3)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  unkuint9 Var8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 (**ppauVar16) [16];
  uint uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint *puVar22;
  longlong *plVar23;
  uint *puVar24;
  code *pcVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  undefined1 (**ppauVar29) [16];
  code *pcVar30;
  undefined1 (*pauVar31) [16];
  ushort uVar32;
  longlong lVar33;
  undefined1 auVar34 [8];
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  undefined1 (*pauVar38) [16];
  undefined1 (***pppauVar39) [16];
  byte bVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  bool bVar43;
  int iVar44;
  int iVar45;
  byte bVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float extraout_XMM0_Da;
  float fVar52;
  float fVar53;
  float fVar65;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar66;
  float fVar74;
  float fVar76;
  undefined1 auVar68 [16];
  float fVar75;
  float fVar77;
  undefined1 auVar70 [16];
  float fVar67;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar78;
  float fVar81;
  float fVar82;
  undefined1 auVar79 [16];
  float fVar83;
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar91 [16];
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar99;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar100;
  uint auStack_270 [5];
  uint uStack_25c;
  undefined1 auStack_258 [16];
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined1 (*pauStack_238) [16];
  ulonglong uStack_230;
  longlong lStack_228;
  undefined1 (**ppauStack_220) [16];
  longlong lStack_218;
  ulonglong uStack_210;
  ulonglong uStack_200;
  ulonglong uStack_1f8;
  uint *puStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  longlong lStack_1d0;
  byte *pbStack_1c8;
  ulonglong uStack_1c0;
  undefined1 auStack_1b8 [16];
  uint uStack_1a8;
  uint uStack_1a4;
  ulonglong uStack_1a0;
  undefined1 (*pauStack_198) [16];
  undefined1 *puStack_190;
  longlong lStack_188;
  undefined1 (**ppauStack_180) [16];
  longlong lStack_178;
  undefined1 auStack_170 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  uint *puStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [8];
  float fStack_130;
  float fStack_12c;
  undefined1 (*pauStack_128) [16];
  ulonglong uStack_120;
  undefined8 uStack_118;
  float fStack_110;
  float fStack_10c;
  code *pcStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  undefined1 auVar69 [16];
  
  uStack_f0 = 0xfffffffffffffffe;
  puStack_140 = param_1;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    pcStack_100 = param_3;
    uVar18 = pdb_1400af950(param_2 + 0x58,&UNK_143054090,0xf);
    lVar20 = *(longlong *)(param_2 + 0x38);
    bVar40 = (byte)(uVar18 >> 0x39);
    auVar54 = ZEXT216(CONCAT11(bVar40,bVar40));
    auVar54 = pshuflw(auVar54,auVar54,0);
    lVar35 = 0;
    do {
      uVar18 = uVar18 & *(ulonglong *)(param_2 + 0x40);
      auVar98 = *(undefined1 (*) [16])(lVar20 + uVar18);
      auVar84[0] = -(auVar98[0] == auVar54[0]);
      auVar84[1] = -(auVar98[1] == auVar54[1]);
      auVar84[2] = -(auVar98[2] == auVar54[2]);
      auVar84[3] = -(auVar98[3] == auVar54[3]);
      auVar84[4] = -(auVar98[4] == auVar54[4]);
      auVar84[5] = -(auVar98[5] == auVar54[5]);
      auVar84[6] = -(auVar98[6] == auVar54[6]);
      auVar84[7] = -(auVar98[7] == auVar54[7]);
      auVar84[8] = -(auVar98[8] == auVar54[0]);
      auVar84[9] = -(auVar98[9] == auVar54[1]);
      auVar84[10] = -(auVar98[10] == auVar54[2]);
      auVar84[0xb] = -(auVar98[0xb] == auVar54[3]);
      auVar84[0xc] = -(auVar98[0xc] == auVar54[4]);
      auVar84[0xd] = -(auVar98[0xd] == auVar54[5]);
      auVar84[0xe] = -(auVar98[0xe] == auVar54[6]);
      auVar84[0xf] = -(auVar98[0xf] == auVar54[7]);
      uVar32 = (ushort)(SUB161(auVar84 >> 7,0) & 1) | (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe | (ushort)(auVar84[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar32;
      if (uVar32 != 0) {
        while( true ) {
          uVar27 = 0;
          for (uVar5 = uVar17; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
          lVar33 = (uVar27 + uVar18 & *(ulonglong *)(param_2 + 0x40)) * -0x38;
          if ((*(longlong *)(lVar20 + -0x28 + lVar33) == 0xf) &&
             (lVar33 = lVar33 + lVar20,
             *(longlong *)((longlong)*(longlong **)(lVar33 + -0x30) + 7) == 0x6e6f697469736f50 &&
             **(longlong **)(lVar33 + -0x30) == 0x505f786574726556)) break;
          uVar32 = (ushort)(uVar17 - 1) & (ushort)uVar17;
          uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar32);
          if (uVar32 == 0) goto LAB_140b09160;
        }
        if (*(int *)(lVar33 + -0x20) != 4) break;
        pauStack_128 = *(undefined1 (**) [16])(lVar33 + -0x10);
        uStack_120 = *(ulonglong *)(lVar33 + -8);
        pdb_14007ee60();
        pbVar19 = pub_1406abab0(0x40000,4);
        uVar15 = _UNK_143053c78;
        uVar14 = _DAT_143053c70;
        if (pbVar19 == (byte *)0x0) {
          pdb_142dc7e2a(4,0x40000);
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        lVar20 = 0x1c;
        while( true ) {
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x70) = uVar14;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x70 + 8) = uVar15;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x60) = uVar14;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x60 + 8) = uVar15;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x50) = uVar14;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x50 + 8) = uVar15;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x40) = uVar14;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x40 + 8) = uVar15;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x30) = uVar14;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x30 + 8) = uVar15;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x20) = uVar14;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x20 + 8) = uVar15;
          if (lVar20 == 0xfffc) break;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x10) = uVar14;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + -0x10 + 8) = uVar15;
          *(undefined8 *)(pbVar19 + lVar20 * 4) = uVar14;
          *(undefined8 *)(pbVar19 + lVar20 * 4 + 8) = uVar15;
          lVar20 = lVar20 + 0x20;
        }
        *(undefined8 *)(pbVar19 + 0x3ffe0) = uVar14;
        *(undefined8 *)(pbVar19 + 0x3ffe8) = uVar15;
        *(undefined8 *)(pbVar19 + 0x3fff0) = uVar14;
        *(undefined8 *)(pbVar19 + 0x3fff8) = uVar15;
        fVar90 = _UNK_143053c94;
        fVar52 = _DAT_143053c90;
        fVar4 = _DAT_14300b120;
        fVar53 = _DAT_142e36f50;
        puStack_1f0 = *(uint **)(param_2 + 8);
        uVar18 = *(ulonglong *)(param_2 + 0x10) / 3;
        uStack_1f8 = uVar18 * 3;
        puVar24 = puStack_1f0;
        uStack_1a0 = uStack_1f8;
        pbStack_f8 = pbVar19;
        while (2 < uStack_1a0) {
          uVar42 = (ulonglong)*puVar24;
          if (uStack_120 <= uVar42) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar42,uStack_120,&UNK_143054130);
          }
          uVar21 = (ulonglong)puVar24[1];
          if (uStack_120 <= uVar21) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar21,uStack_120,&UNK_143054148);
          }
          uVar37 = (ulonglong)puVar24[2];
          if (uStack_120 <= uVar37) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar37,uStack_120,&UNK_143054160);
          }
          puVar24 = puVar24 + 3;
          uStack_1a0 = uStack_1a0 - 3;
          uVar18 = uVar37 * 3;
          auVar97._4_4_ = *(undefined4 *)(*pauStack_128 + uVar42 * 0xc + 8);
          auVar97._0_4_ = *(undefined4 *)(*pauStack_128 + uVar37 * 0xc + 8);
          auVar97._8_8_ = 0;
          auVar98 = divps(auVar97,_DAT_14300b880);
          fVar48 = auVar98._8_4_;
          auVar54._4_4_ = *(undefined4 *)(*pauStack_128 + uVar37 * 0xc);
          auVar54._0_4_ = *(undefined4 *)(*pauStack_128 + uVar21 * 0xc);
          auVar54._8_8_ = 0;
          auVar54 = divps(auVar54,_DAT_14300b880);
          fVar47 = auVar54._12_4_;
          fVar96 = (auVar98._0_4_ + _DAT_142e36f60) * _DAT_143053c80;
          fVar99 = (auVar98._4_4_ + _UNK_142e36f64) * _UNK_143053c84;
          fVar100 = (auVar98._12_4_ + _UNK_142e36f6c) * _UNK_143053c8c;
          fVar92 = (*(float *)((longlong)(*pauStack_128 + uVar21 * 0xc) + 8) / _DAT_142e4bfe4 +
                   _DAT_142e36f60) * _DAT_143053c80;
          fVar93 = (auVar98._0_4_ + _UNK_142e36f64) * _UNK_143053c84;
          fVar94 = (fVar48 + _UNK_142e36f68) * _UNK_143053c88;
          fVar95 = (fVar48 + _UNK_142e36f6c) * _UNK_143053c8c;
          auVar98._0_4_ = (_DAT_142e37950 - (auVar54._0_4_ + _DAT_142e36f60)) * _DAT_143053c80;
          auVar98._4_4_ = (_UNK_142e37954 - (auVar54._4_4_ + _UNK_142e36f64)) * _UNK_143053c84;
          auVar98._8_4_ = (_UNK_142e37958 - (auVar54._8_4_ + _UNK_142e36f68)) * _UNK_143053c88;
          auVar98._12_4_ = (_UNK_142e3795c - (fVar47 + _UNK_142e36f6c)) * _UNK_143053c8c;
          fVar86 = (_DAT_142e37950 - (auVar54._4_4_ + _DAT_142e36f60)) * _DAT_143053c80;
          fVar87 = (_UNK_142e37954 -
                   (*(float *)(*pauStack_128 + uVar42 * 0xc) / _DAT_142e4bfe4 + _UNK_142e36f64)) *
                   _UNK_143053c84;
          fVar88 = (_UNK_142e37958 - (fVar47 + _UNK_142e36f68)) * _UNK_143053c88;
          fVar89 = (_UNK_142e3795c - (fVar47 + _UNK_142e36f6c)) * _UNK_143053c8c;
          auVar85._4_4_ = fVar87;
          auVar85._0_4_ = fVar87;
          auVar85._8_4_ = fVar89;
          auVar85._12_4_ = fVar89;
          fVar74 = (auVar98._4_4_ - fVar87) * (fVar92 - fVar99);
          fStack_10c = (auVar98._12_4_ - fVar89) * (fVar93 - fVar100);
          fVar47 = fVar74 - (auVar98._0_4_ - fVar87) * (fVar96 - fVar99);
          fStack_110 = fStack_10c - (auVar98._8_4_ - fVar89) * (fVar99 - fVar100);
          fStack_10c = fStack_10c - fStack_10c;
          uStack_118 = (uint *)CONCAT44(fVar74 - fVar74,fVar47);
          if (_DAT_143013288 <= (float)((uint)fVar47 & _DAT_142e377e0)) {
            fVar47 = *(float *)(*pauStack_128 + uVar42 * 0xc + 4);
            fVar74 = *(float *)(*pauStack_128 + uVar21 * 0xc + 4);
            fVar3 = *(float *)(*pauStack_128 + uVar37 * 0xc + 4);
            auVar55._4_4_ = fVar99;
            auVar55._0_4_ = fVar99;
            auVar55._8_4_ = fVar100;
            auVar55._12_4_ = fVar100;
            if (fVar92 <= fVar99) {
              auVar55._0_4_ = fVar92;
            }
            if (fVar96 <= auVar55._0_4_) {
              auVar55._0_4_ = fVar96;
            }
            fStack_1e8 = fVar87;
            if (fVar87 <= auVar98._0_4_) {
              fStack_1e8 = auVar98._0_4_;
            }
            if (fStack_1e8 <= auVar98._4_4_) {
              fStack_1e8 = auVar98._4_4_;
            }
            auStack_138._4_4_ = fVar99;
            auStack_138._0_4_ = fVar96;
            fStack_130 = (fVar48 + _UNK_142e36f68) * _UNK_143053c88;
            fStack_12c = fVar100;
            auVar56._4_12_ = auVar55._4_12_;
            auVar56._0_4_ = auVar55._0_4_ + _DAT_142e36f38;
            auStack_258 = auVar85;
            fStack_248 = auVar98._4_4_;
            fStack_244 = auVar98._4_4_;
            fStack_240 = auVar98._12_4_;
            fStack_23c = auVar98._12_4_;
            fStack_1e4 = fVar87;
            fStack_1e0 = fVar89;
            fStack_1dc = fVar89;
            auStack_1b8 = auVar98;
            auVar57._0_8_ = pub_142e329c0(auVar56._0_8_);
            auVar57._8_8_ = extraout_XMM0_Qb;
            if ((float)auVar57._0_8_ <= 0.0) {
              auVar9._12_4_ = 0;
              auVar9._0_12_ = auVar57._4_12_;
              auVar57 = auVar9 << 0x20;
            }
            fVar96 = auVar57._0_4_;
            uVar18 = (longlong)(fVar96 - _DAT_142e36f2c) & (longlong)fVar96 >> 0x3f |
                     (longlong)fVar96;
            if (fVar96 < 0.0) {
              uVar18 = 0;
            }
            if (_DAT_142e36f30 < fVar96) {
              uVar18 = 0xffffffffffffffff;
            }
            uStack_200 = uVar18;
            fVar48 = (float)pub_142e32a40();
            fVar99 = _DAT_14304fc80;
            fVar96 = _DAT_142e4fba0;
            if (_DAT_142e4fba0 <= fVar48) {
              fVar48 = _DAT_142e4fba0;
            }
            uVar42 = (ulonglong)fVar48;
            if (_DAT_14304fc80 < fVar48) {
              uVar42 = 0x7fffffffffffffff;
            }
            if (NAN(fVar48)) {
              uVar42 = 0;
            }
            auVar11._4_4_ = fStack_1e4;
            auVar11._0_4_ = fStack_1e8;
            auVar11._8_4_ = fStack_1e0;
            auVar11._12_4_ = fStack_1dc;
            auVar58._4_12_ = auVar11._4_12_;
            auVar58._0_4_ = fStack_1e8 + _DAT_142e36f38;
            puStack_148 = puVar24;
            fVar48 = (float)pub_142e32a40(auVar58._0_8_);
            if (fVar96 <= fVar48) {
              fVar48 = fVar96;
            }
            uVar12 = auStack_138._0_4_;
            uVar13 = auStack_138._4_4_;
            fVar96 = fStack_130;
            fVar100 = fStack_12c;
            uVar21 = (ulonglong)fVar48;
            if (fVar99 < fVar48) {
              uVar21 = 0x7fffffffffffffff;
            }
            if (NAN(fVar48)) {
              uVar21 = 0;
            }
            fStack_1e8 = (float)uVar21;
            fStack_1e4 = (float)(uVar21 >> 0x20);
            puVar24 = puStack_148;
            if (-1 < (longlong)(uVar21 | uVar42)) {
              auVar59._0_8_ = pub_142e329c0();
              fVar99 = fStack_110;
              auVar59._8_8_ = extraout_XMM0_Qb_00;
              if ((float)auVar59._0_8_ <= 0.0) {
                auVar10._12_4_ = 0;
                auVar10._0_12_ = auVar59._4_12_;
                auVar59 = auVar10 << 0x20;
              }
              fVar49 = auVar59._0_4_;
              uVar18 = (longlong)(fVar49 - _DAT_142e36f2c) & (longlong)fVar49 >> 0x3f |
                       (longlong)fVar49;
              fVar48 = auStack_1b8._12_4_;
              uVar21 = 0;
              if (0.0 <= fVar49) {
                uVar21 = uVar18;
              }
              puVar22 = (uint *)0xffffffffffffffff;
              if (_DAT_142e36f30 < fVar49) {
                uVar21 = 0xffffffffffffffff;
              }
              auStack_138 = (undefined1  [8])CONCAT44((float)uVar13 - fVar93,(float)uVar12 - fVar92)
              ;
              fStack_130 = fVar96 - fVar94;
              fStack_12c = fVar100 - fVar95;
              fVar96 = auStack_1b8._0_4_;
              fVar100 = auStack_1b8._4_4_;
              fVar49 = auStack_1b8._8_4_;
              uVar12 = (undefined4)uStack_118;
              auVar68._8_4_ = fStack_130;
              auVar68._0_8_ = auStack_138;
              auVar68._12_4_ = fStack_12c;
              puVar26 = (uint *)0x0;
              while ((puVar24 = puStack_148, ((ulonglong)puVar26 & 1) == 0 &&
                     (uVar37 = CONCAT44(fStack_1e4,fStack_1e8), uVar21 <= uVar37))) {
                uStack_118 = (uint *)CONCAT71((int7)((ulonglong)puVar22 >> 8),uVar21 >= uVar37);
                uVar37 = uVar21 + (uVar21 < uVar37);
                puVar22 = uStack_118;
                if ((longlong)uVar21 < 0) {
                  puVar22 = (uint *)(uVar21 >> 1);
                }
                fVar50 = (float)uVar21 + fVar53;
                fVar78 = auStack_1b8._0_4_;
                fVar81 = auStack_1b8._4_4_;
                fVar82 = auStack_1b8._8_4_;
                fVar83 = auStack_1b8._12_4_;
                fVar66 = auVar68._0_4_;
                fVar75 = auVar68._4_4_;
                fVar76 = auVar68._8_4_;
                fVar77 = auVar68._12_4_;
                lVar20 = uVar21 * 0x100;
                bVar43 = false;
                uVar21 = uStack_200;
                while ((uVar41 = uVar21, puVar26 = uStack_118, uVar21 = uVar37,
                       auVar68 = _auStack_138, !bVar43 && (uVar41 <= uVar42))) {
                  bVar43 = uVar41 >= uVar42;
                  uVar21 = uVar41 + (uVar41 < uVar42);
                  if ((longlong)uVar41 < 0) {
                    puVar22 = (uint *)(uVar41 >> 1);
                  }
                  fVar51 = (float)uVar41 + fVar53;
                  auVar60._0_4_ = (fVar50 - fVar78) * fVar66 - (fVar51 - fVar92) * (fVar86 - fVar96)
                  ;
                  auVar60._4_4_ =
                       (fVar50 - fVar81) * fVar75 - (fVar51 - fVar93) * (fVar87 - fVar100);
                  auVar60._8_4_ = (0.0 - fVar82) * fVar76 - (0.0 - fVar94) * (fVar88 - fVar49);
                  auVar60._12_4_ = (0.0 - fVar83) * fVar77 - (0.0 - fVar95) * (fVar89 - fVar48);
                  auVar7._4_4_ = uVar12;
                  auVar7._0_4_ = uVar12;
                  auVar7._8_4_ = fVar99;
                  auVar7._12_4_ = fVar99;
                  auVar54 = divps(auVar60,auVar7);
                  fVar51 = auVar54._0_4_;
                  fVar65 = auVar54._4_4_;
                  iVar44 = -(uint)(fVar51 < fVar52);
                  iVar45 = -(uint)(fVar65 < fVar90);
                  auVar70._4_4_ = iVar45;
                  auVar70._0_4_ = iVar44;
                  auVar70._8_4_ = iVar45;
                  auVar70._12_4_ = iVar45;
                  auVar69._8_8_ = auVar70._8_8_;
                  auVar69._4_4_ = iVar44;
                  auVar69._0_4_ = iVar44;
                  uVar17 = movmskpd((int)puVar22,auVar69);
                  puVar22 = (uint *)(ulonglong)uVar17;
                  if ((uVar17 == 0) &&
                     (fVar67 = (_DAT_142e36f28 - fVar51) - fVar65, fVar4 <= fVar67)) {
                    uVar41 = uVar41 + lVar20;
                    if (0xffff < uVar41) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(uVar41,0x10000,&UNK_143054178);
                    }
                    fVar51 = fVar67 * fVar3 + fVar65 * fVar74 + fVar51 * fVar47;
                    if (!NAN(*(float *)(pbVar19 + uVar41 * 4))) {
                      puVar22 = (uint *)(*pcStack_100)();
                      pbVar19 = pbStack_f8;
                      fVar51 = extraout_XMM0_Da;
                    }
                    *(float *)(pbVar19 + uVar41 * 4) = fVar51;
                  }
                }
              }
            }
          }
        }
        plVar23 = (longlong *)pdb_140f3bda0();
        if ((char)plVar23[2] == '\x01') {
          lStack_218 = *plVar23;
          uVar18 = plVar23[1];
        }
        else {
          lStack_218 = pdb_140f4fd10();
          *plVar23 = lStack_218;
          plVar23[1] = uVar18;
          *(undefined1 *)(plVar23 + 2) = 1;
        }
        uVar21 = uStack_120;
        *plVar23 = lStack_218 + 1;
        ppauVar16 = _UNK_143053ed8;
        lVar20 = _DAT_143053ed0;
        uVar42 = _UNK_143053ec8;
        pauVar38 = _DAT_143053ec0;
        lStack_228 = _DAT_143053ed0;
        ppauStack_220 = _UNK_143053ed8;
        pauStack_238 = _DAT_143053ec0;
        uStack_230 = _UNK_143053ec8;
        puStack_190 = *pauStack_128 + uStack_120 * 0xc;
        pauStack_198 = pauStack_128;
        lStack_188 = 0;
        ppauStack_180 = &pauStack_238;
        ppauVar29 = &pauStack_198;
        uStack_210 = uVar18;
        pdb_1415ec9f0(&lStack_1d0);
        plVar23 = (longlong *)pdb_140f3bda0();
        if ((char)plVar23[2] == '\x01') {
          lStack_178 = *plVar23;
          ppauVar29 = (undefined1 (**) [16])plVar23[1];
        }
        else {
          lStack_178 = pdb_140f4fd10();
          *plVar23 = lStack_178;
          plVar23[1] = (longlong)ppauVar29;
          *(undefined1 *)(plVar23 + 2) = 1;
        }
        *plVar23 = lStack_178 + 1;
        uVar13 = _UNK_142e47bfc;
        uVar12 = _UNK_142e47bf8;
        lStack_188 = lVar20;
        ppauStack_180 = ppauVar16;
        pauStack_198 = pauVar38;
        puStack_190 = (undefined1 *)uVar42;
        auStack_170._0_8_ = ppauVar29;
        puVar24 = puStack_1f0;
        while (bVar43 = 2 < uStack_1f8, uStack_1f8 = uStack_1f8 - 3, bVar43) {
          uStack_118 = puVar24 + 3;
          auStack_270[0] = *puVar24;
          auStack_270[1] = (uint)*(undefined8 *)(puVar24 + 1);
          auStack_270[3] = (uint)((ulonglong)*(undefined8 *)(puVar24 + 1) >> 0x20);
          auStack_270[2] = auStack_270[1];
          auStack_270[4] = auStack_270[3];
          uStack_25c = *puVar24;
          lVar20 = 0;
          do {
            uVar18 = (ulonglong)auStack_270[lVar20 * 2];
            if (uStack_1c0 <= uVar18) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar18,uStack_1c0,&UNK_1430542a8);
            }
            uVar42 = (ulonglong)auStack_270[lVar20 * 2 + 1];
            if (uStack_1c0 <= uVar42) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar42,uStack_1c0,&UNK_1430542c0);
            }
            uVar17 = *(uint *)(pbStack_1c8 + uVar18 * 4);
            uVar27 = *(uint *)(pbStack_1c8 + uVar42 * 4);
            uVar5 = uVar17;
            if (uVar27 >= uVar17 && uVar27 != uVar17) {
              uVar5 = uVar27;
            }
            if (uVar27 < uVar17) {
              uVar17 = uVar27;
            }
            uStack_1a8 = uVar17;
            uStack_1a4 = uVar5;
            uVar42 = pdb_1400af680(&lStack_178);
            lVar20 = lVar20 + 1;
            bVar40 = (byte)(uVar42 >> 0x38);
            bVar46 = bVar40 >> 1;
            auVar54 = ZEXT216(CONCAT11(bVar46,bVar46));
            auVar54 = pshuflw(auVar54,auVar54,0);
            lVar35 = 0;
            uVar18 = uVar42;
            while( true ) {
              uVar18 = uVar18 & (ulonglong)puStack_190;
              auVar98 = *(undefined1 (*) [16])(*pauStack_198 + uVar18);
              auVar80[0] = -(auVar98[0] == auVar54[0]);
              auVar80[1] = -(auVar98[1] == auVar54[1]);
              auVar80[2] = -(auVar98[2] == auVar54[2]);
              auVar80[3] = -(auVar98[3] == auVar54[3]);
              auVar80[4] = -(auVar98[4] == auVar54[4]);
              auVar80[5] = -(auVar98[5] == auVar54[5]);
              auVar80[6] = -(auVar98[6] == auVar54[6]);
              auVar80[7] = -(auVar98[7] == auVar54[7]);
              auVar80[8] = -(auVar98[8] == auVar54[0]);
              auVar80[9] = -(auVar98[9] == auVar54[1]);
              auVar80[10] = -(auVar98[10] == auVar54[2]);
              auVar80[0xb] = -(auVar98[0xb] == auVar54[3]);
              auVar80[0xc] = -(auVar98[0xc] == auVar54[4]);
              auVar80[0xd] = -(auVar98[0xd] == auVar54[5]);
              auVar80[0xe] = -(auVar98[0xe] == auVar54[6]);
              auVar80[0xf] = -(auVar98[0xf] == auVar54[7]);
              uVar32 = (ushort)(SUB161(auVar80 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar80[0xf] >> 7) << 0xf;
              uVar27 = (uint)uVar32;
              while (uVar32 != 0) {
                uVar28 = 0;
                for (uVar6 = uVar27; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar28 = uVar28 + 1;
                }
                uVar37 = uVar28 + uVar18 & (ulonglong)puStack_190;
                if ((*(uint *)((longlong)pauStack_198 + uVar37 * -0xc + -0xc) == uVar17) &&
                   (*(uint *)((longlong)pauStack_198 + uVar37 * -0xc + -8) == uVar5)) {
                  piVar1 = (int *)((longlong)pauStack_198 + uVar37 * -0xc + -4);
                  *piVar1 = *piVar1 + 1;
                  puVar24 = uStack_118;
                  goto joined_r0x000140b0993b;
                }
                uVar32 = (ushort)(uVar27 - 1) & (ushort)uVar27;
                uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar32);
              }
              auVar71[0] = -(auVar98[0] == -1);
              auVar71[1] = -(auVar98[1] == -1);
              auVar71[2] = -(auVar98[2] == -1);
              auVar71[3] = -(auVar98[3] == -1);
              auVar71[4] = -(auVar98[4] == -1);
              auVar71[5] = -(auVar98[5] == -1);
              auVar71[6] = -(auVar98[6] == -1);
              auVar71[7] = -(auVar98[7] == -1);
              auVar71[8] = -(auVar98[8] == -1);
              auVar71[9] = -(auVar98[9] == -1);
              auVar71[10] = -(auVar98[10] == -1);
              auVar71[0xb] = -(auVar98[0xb] == -1);
              auVar71[0xc] = -(auVar98[0xc] == -1);
              auVar71[0xd] = -(auVar98[0xd] == -1);
              auVar71[0xe] = -(auVar98[0xe] == -1);
              auVar71[0xf] = -(auVar98[0xf] == -1);
              uVar32 = (ushort)(SUB161(auVar71 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar71[0xf] >> 7) << 0xf;
              if (uVar32 != 0) break;
              uVar18 = uVar18 + lVar35 + 0x10;
              lVar35 = lVar35 + 0x10;
            }
            if (lStack_188 == 0) {
              pdb_142d9cbd0(&pauStack_198,1,&lStack_178,CONCAT71((uint7)(byte)(uVar32 >> 8),1));
            }
            uVar42 = uVar42 & (ulonglong)puStack_190;
            auVar54 = *(undefined1 (*) [16])(*pauStack_198 + uVar42);
            uVar32 = (ushort)(SUB161(auVar54 >> 7,0) & 1) |
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
                     (ushort)(byte)(auVar54[0xf] >> 7) << 0xf;
            uVar27 = (uint)uVar32;
            if (uVar32 == 0) {
              lVar35 = 0x10;
              do {
                uVar42 = uVar42 + lVar35 & (ulonglong)puStack_190;
                auVar54 = *(undefined1 (*) [16])(*pauStack_198 + uVar42);
                lVar35 = lVar35 + 0x10;
                uVar27 = (uint)(ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
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
                                       (ushort)(byte)(auVar54[0xf] >> 7) << 0xf);
              } while (uVar27 == 0);
            }
            uVar28 = 0;
            for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
              uVar28 = uVar28 + 1;
            }
            uVar18 = uVar28 + uVar42 & (ulonglong)puStack_190;
            bVar46 = (*pauStack_198)[uVar18];
            if (-1 < (char)bVar46) {
              auVar54 = *pauStack_198;
              uVar27 = 0;
              for (uVar28 = (uint)(ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
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
                                          (ushort)(byte)(auVar54[0xf] >> 7) << 0xf);
                  (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
                uVar27 = uVar27 + 1;
              }
              uVar18 = (ulonglong)uVar27;
              bVar46 = (*pauStack_198)[uVar18];
            }
            bVar40 = bVar40 >> 1;
            (*pauStack_198)[uVar18] = bVar40;
            pauStack_198[1][uVar18 - 0x10 & (ulonglong)puStack_190] = bVar40;
            *(ulonglong *)((longlong)pauStack_198 + uVar18 * -0xc + -0xc) = CONCAT44(uVar5,uVar17);
            *(undefined4 *)((longlong)pauStack_198 + uVar18 * -0xc + -4) = 0;
            auVar72._0_8_ = CONCAT71(0,bVar46 & 1);
            auVar72._8_4_ = uVar12;
            auVar72._12_4_ = uVar13;
            lStack_188 = lStack_188 - auVar72._0_8_;
            ppauStack_180 = (undefined1 (**) [16])((longlong)ppauStack_180 - auVar72._8_8_);
            piVar1 = (int *)((longlong)pauStack_198 + uVar18 * -0xc + -4);
            *piVar1 = *piVar1 + 1;
            puVar24 = uStack_118;
joined_r0x000140b0993b:
            uStack_118 = puVar24;
          } while (lVar20 != 3);
        }
        auVar54 = *pauStack_198;
        pauVar38 = pauStack_198 + 1;
        uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar54[0xf] >> 7) << 0xf);
        pauVar31 = pauStack_198;
        auVar34 = (undefined1  [8])ppauStack_180;
LAB_140b09b1e:
        do {
          pbVar19 = pbStack_f8;
          if (auVar34 == (undefined1  [8])0x0) {
            if (puStack_190 != (undefined1 *)0x0) {
              uVar18 = (longlong)puStack_190 * 0xc + 0x1bU & 0xfffffffffffffff0;
              uVar42 = (longlong)puStack_190 + uVar18 + 0x11;
              if (uVar42 != 0) {
                pub_1406abac0((byte *)((longlong)pauStack_198 - uVar18),uVar42,0x10);
              }
            }
            if (lStack_1d0 != 0) {
              pub_1406abac0(pbStack_1c8,lStack_1d0 << 2,4);
            }
            if (uStack_230 != 0) {
              lVar20 = uStack_230 * 0x10 + 0x10;
              uVar18 = uStack_230 + lVar20 + 0x11;
              if (uVar18 != 0) {
                pub_1406abac0((byte *)((longlong)pauStack_238 - lVar20),uVar18,0x10);
              }
            }
            lVar20 = 0xc;
            do {
              if (lVar20 == 0x4000c) {
                *puStack_140 = 0x8000000000000000;
                pub_1406abac0(pbVar19,0x40000,4);
                return;
              }
            } while ((((NAN(*(float *)(pbVar19 + lVar20 + -0xc))) &&
                      (NAN(*(float *)(pbVar19 + lVar20 + -8)))) &&
                     (NAN(*(float *)(pbVar19 + lVar20 + -4)))) &&
                    (pfVar2 = (float *)(pbVar19 + lVar20), lVar20 = lVar20 + 0x10, NAN(*pfVar2)));
LAB_140b09f54:
            pdb_14007ee60();
            pcVar25 = (code *)pub_1406abab0(0x40000,4);
            pbVar19 = pbStack_f8;
            if (pcVar25 == (code *)0x0) {
              pdb_142dc7e2a(4,0x40000);
                    /* WARNING: Does not return */
              pcVar25 = (code *)invalidInstructionException();
              (*pcVar25)();
            }
            pub_142e32760(pcVar25,pbStack_f8,0x40000);
            uStack_118 = (uint *)0x0;
            pcStack_100 = pcVar25;
            lVar35 = 0;
            pcVar30 = pcVar25;
            lVar20 = 0;
LAB_140b09fd1:
            lVar36 = lVar20 + 1;
            lVar33 = 0;
            do {
              uVar18 = lVar33 - 1;
              do {
                uVar42 = uVar18;
                uVar18 = uVar42 + 1;
                if (0xff < uVar18) {
                  lVar35 = lVar35 + 0x100;
                  pbVar19 = pbVar19 + 0x400;
                  pcVar30 = pcVar30 + 0x400;
                  lVar20 = lVar36;
                  if (lVar36 != 0x100) goto LAB_140b09fd1;
                  pub_1406abac0((byte *)pcVar25,0x40000,4);
                  if (((ulonglong)uStack_118 & 1) == 0) {
                    *puStack_140 = 0x10000;
                    puStack_140[1] = pbStack_f8;
                    puStack_140[2] = 0x10000;
                    return;
                  }
                  goto LAB_140b09f54;
                }
                if (0xffff < lVar35 + uVar42 + 1) {
                  uVar18 = 0x10000;
                  if (0x10000 < (ulonglong)(lVar33 + lVar35)) {
                    uVar18 = lVar33 + lVar35;
                  }
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar18,0x10000,&UNK_143054060);
                }
              } while (!NAN(*(float *)(pcVar30 + uVar42 * 4 + 4)) &&
                       !NAN(*(float *)(pcVar30 + uVar42 * 4 + 4)));
              lStack_188 = -1;
              ppauStack_180 = (undefined1 (**) [16])0x0;
              lStack_178 = 1;
              auStack_170 = (undefined1  [16])0x0;
              uStack_160 = 0xffffffffffffffff;
              uStack_158 = 0;
              uStack_150 = 1;
              lVar33 = uVar42 + 2;
              fVar53 = 0.0;
              uVar21 = 0;
              iVar44 = 0;
              do {
                pppauVar39 = &ppauStack_180 + uVar21 * 2;
                uVar37 = uVar21;
                while (((uVar41 = (longlong)*pppauVar39 + lVar20, 0xff < (longlong)uVar41 ||
                        (uVar21 = (longlong)pppauVar39[-1] + uVar18, 0xff < (longlong)uVar21)) ||
                       ((longlong)(uVar41 | uVar21) < 0))) {
                  uVar37 = uVar37 + 1;
                  pppauVar39 = pppauVar39 + 2;
                  if (uVar37 == 4) goto LAB_140b0a100;
                }
                uVar21 = uVar21 + uVar41 * 0x100;
                if (0xffff < uVar21) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar21,0x10000,&UNK_143054078);
                }
                fVar4 = *(float *)(pcVar25 + uVar21 * 4);
                if (!NAN(fVar4)) {
                  fVar53 = fVar53 + fVar4;
                }
                uVar21 = uVar37 + 1;
                iVar44 = iVar44 + (uint)(!NAN(fVar4) && !NAN(fVar4));
              } while (uVar37 != 3);
LAB_140b0a100:
              if (0 < iVar44) {
                *(float *)(pbVar19 + uVar18 * 4) = fVar53 / (float)iVar44;
                lVar33 = uVar42 + 2;
                uStack_118 = (uint *)CONCAT71((int7)(uVar21 >> 8),1);
              }
            } while( true );
          }
          if ((short)uVar17 == 0) {
            do {
              auVar54 = *pauVar38;
              pauVar31 = pauVar31 + -0xc;
              pauVar38 = pauVar38 + 1;
              uVar17 = (ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar54[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar17 == 0);
          }
          uVar27 = 0;
          for (uVar5 = uVar17; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
          uVar18 = (ulonglong)uVar27;
          uVar17 = uVar17 - 1 & uVar17;
          auVar34 = (undefined1  [8])((longlong)auVar34 + -1);
        } while (*(int *)((longlong)pauVar31 + uVar18 * -0xc + -4) != 1);
        uVar42 = (ulonglong)*(uint *)((longlong)pauVar31 + uVar18 * -0xc + -0xc);
        if (uVar21 <= uVar42) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar42,uVar21,&UNK_143054260);
        }
        uVar18 = (ulonglong)*(uint *)((longlong)pauVar31 + uVar18 * -0xc + -8);
        if (uVar21 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar18,uVar21,&UNK_143054278);
        }
        fVar53 = *(float *)(*pauStack_128 + uVar42 * 0xc + 4);
        fVar4 = *(float *)(*pauStack_128 + uVar18 * 0xc + 4);
        auVar91._4_4_ = *(undefined4 *)((longlong)(*pauStack_128 + uVar42 * 0xc) + 8);
        auVar91._0_4_ = *(undefined4 *)(*pauStack_128 + uVar18 * 0xc + 8);
        auVar91._8_8_ = 0;
        auVar54 = divps(auVar91,_DAT_14300b880);
        fVar90 = (auVar54._0_4_ + _DAT_142e36f60) * _DAT_143053c80;
        fVar47 = (auVar54._4_4_ + _UNK_142e36f64) * _UNK_143053c84;
        fVar74 = (auVar54._12_4_ + _UNK_142e36f6c) * _UNK_143053c8c;
        auVar73._4_4_ = *(undefined4 *)(*pauStack_128 + uVar42 * 0xc);
        auVar73._0_4_ = *(undefined4 *)(*pauStack_128 + uVar18 * 0xc);
        auVar73._8_8_ = 0;
        auVar54 = divps(auVar73,_DAT_14300b880);
        fVar86 = (_DAT_142e37950 - (auVar54._0_4_ + _DAT_142e36f60)) * _DAT_143053c80;
        fVar87 = (_UNK_142e37954 - (auVar54._4_4_ + _UNK_142e36f64)) * _UNK_143053c84;
        fVar88 = (_UNK_142e3795c - (auVar54._12_4_ + _UNK_142e36f6c)) * _UNK_143053c8c;
        fVar52 = (float)pub_142e329c0();
        uStack_118 = (uint *)((longlong)(fVar52 - _DAT_142e36f2c) & (longlong)fVar52 >> 0x3f |
                             (longlong)fVar52);
        if (fVar52 < 0.0) {
          uStack_118 = (uint *)0x0;
        }
        if (_DAT_142e36f30 < fVar52) {
          uStack_118 = (uint *)0xffffffffffffffff;
        }
        uStack_118 = (uint *)((longlong)uStack_118 + (ulonglong)(uStack_118 == (uint *)0x0));
        auStack_138 = auVar34;
        Var8 = ZEXT89(uStack_118);
        bVar43 = false;
        puVar24 = (uint *)0x0;
LAB_140b09ca0:
        auVar34 = auStack_138;
        uVar21 = uStack_120;
        if ((!bVar43) && (puVar24 <= uStack_118)) {
          bVar43 = puVar24 >= uStack_118;
          puVar22 = (uint *)((longlong)puVar24 + (ulonglong)(puVar24 < uStack_118));
          fVar93 = (float)puVar24 / (float)(unkint9)Var8;
          fVar52 = _DAT_142e36f28 - fVar93;
          fVar89 = fVar47 * fVar52;
          fVar92 = fVar74 * 0.0;
          auVar61._4_4_ = fVar89;
          auVar61._0_4_ = fVar89;
          auVar61._8_4_ = fVar92;
          auVar61._12_4_ = fVar92;
          auVar62._4_12_ = auVar61._4_12_;
          auVar62._0_4_ = fVar89 + fVar90 * fVar93;
          fVar89 = (float)pub_142e32a40(auVar62._0_8_);
          uVar18 = 0x7fffffffffffffff;
          if (fVar89 <= _DAT_14304fc80) {
            uVar18 = (ulonglong)fVar89;
          }
          uVar42 = 0;
          if (!NAN(fVar89)) {
            uVar42 = uVar18;
          }
          fVar52 = fVar52 * fVar87;
          fVar89 = fVar88 * 0.0;
          auVar63._4_4_ = fVar52;
          auVar63._0_4_ = fVar52;
          auVar63._8_4_ = fVar89;
          auVar63._12_4_ = fVar89;
          auVar64._4_12_ = auVar63._4_12_;
          auVar64._0_4_ = fVar52 + fVar93 * fVar86;
          fVar52 = (float)pub_142e32a40(auVar64._0_8_);
          uVar18 = 0x7fffffffffffffff;
          puVar24 = puVar22;
          if (_DAT_14304fc80 < fVar52) goto code_r0x000140b09d71;
          uVar18 = (ulonglong)fVar52;
          if (!NAN(fVar52)) goto LAB_140b09da0;
LAB_140b09d7c:
          uVar18 = 0;
          goto LAB_140b09db3;
        }
        goto LAB_140b09b1e;
      }
LAB_140b09160:
      auVar79[0] = -(auVar98[0] == -1);
      auVar79[1] = -(auVar98[1] == -1);
      auVar79[2] = -(auVar98[2] == -1);
      auVar79[3] = -(auVar98[3] == -1);
      auVar79[4] = -(auVar98[4] == -1);
      auVar79[5] = -(auVar98[5] == -1);
      auVar79[6] = -(auVar98[6] == -1);
      auVar79[7] = -(auVar98[7] == -1);
      auVar79[8] = -(auVar98[8] == -1);
      auVar79[9] = -(auVar98[9] == -1);
      auVar79[10] = -(auVar98[10] == -1);
      auVar79[0xb] = -(auVar98[0xb] == -1);
      auVar79[0xc] = -(auVar98[0xc] == -1);
      auVar79[0xd] = -(auVar98[0xd] == -1);
      auVar79[0xe] = -(auVar98[0xe] == -1);
      auVar79[0xf] = -(auVar98[0xf] == -1);
      if ((((((((((((((((SUB161(auVar79 >> 7,0) & 1) != 0 || (SUB161(auVar79 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar79 >> 0x17,0) & 1) != 0) || (SUB161(auVar79 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar79 >> 0x27,0) & 1) != 0) || (SUB161(auVar79 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar79 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar79 >> 0x3f,0) & 1) != 0) || (SUB161(auVar79 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar79 >> 0x4f,0) & 1) != 0) || (SUB161(auVar79 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar79 >> 0x5f,0) & 1) != 0) || (SUB161(auVar79 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar79 >> 0x6f,0) & 1) != 0) || (SUB161(auVar79 >> 0x77,0) & 1) != 0) ||
          auVar79[0xf] < '\0') break;
      uVar18 = uVar18 + lVar35 + 0x10;
      lVar35 = lVar35 + 0x10;
    } while( true );
  }
  *puStack_140 = 0x8000000000000000;
  return;
code_r0x000140b09d71:
  if (NAN(fVar52)) goto LAB_140b09d7c;
LAB_140b09da0:
  if ((longlong)uVar18 < 0x100) {
LAB_140b09db3:
    if (((longlong)uVar42 < 0x100) && (-1 < (longlong)(uVar42 | uVar18))) {
      uVar42 = uVar18 * 0x100 + uVar42;
      if (0xffff < uVar42) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar42,0x10000,&UNK_143054290);
      }
      fVar52 = fVar93 * (fVar4 - fVar53) + fVar53;
      if (!NAN(*(float *)(pbStack_f8 + uVar42 * 4))) {
        fVar52 = (float)(*pcStack_100)();
      }
      *(float *)(pbStack_f8 + uVar42 * 4) = fVar52;
    }
  }
  goto LAB_140b09ca0;
}

