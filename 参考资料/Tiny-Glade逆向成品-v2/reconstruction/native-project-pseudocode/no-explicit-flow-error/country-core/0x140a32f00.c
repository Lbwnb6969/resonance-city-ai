// VA 0x140a32f00, PDB extent 5613 bytes
// country_core::startup::spawn_preplaced_trees::spawn_preplaced_trees
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/spawn_preplaced_trees.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::spawn_preplaced_trees::spawn_preplaced_trees
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/spawn_preplaced_trees.rs
   Extent: 5613 */

void pdb_140a32f00(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  code *pcVar9;
  uint uVar10;
  float fVar11;
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
  undefined8 uVar32;
  int iVar33;
  longlong lVar34;
  byte *pbVar35;
  longlong lVar36;
  byte *pbVar37;
  byte *pbVar38;
  ulonglong uVar39;
  byte *pbVar40;
  byte *pbVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  byte *pbVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  ulonglong uStack_320;
  byte *pbStack_318;
  undefined8 uStack_310;
  byte *pbStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  ulonglong uStack_2c8;
  byte *pbStack_2c0;
  undefined8 uStack_2b8;
  ulonglong *puStack_2a8;
  longlong lStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  undefined *puStack_288;
  undefined4 *puStack_280;
  undefined4 *puStack_278;
  longlong lStack_270;
  ulonglong *puStack_268;
  byte *pbStack_260;
  ulonglong uStack_258;
  byte *pbStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulonglong uStack_228;
  ulonglong *puStack_220;
  ulonglong *puStack_218;
  byte *pbStack_210;
  ulonglong *puStack_208;
  byte *pbStack_200;
  ulonglong *puStack_1f8;
  byte *pbStack_1f0;
  ulonglong uStack_1e8;
  byte *pbStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  ulonglong *puStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  puVar5 = (ulonglong *)*param_3;
  lVar34 = param_3[1];
  uVar6 = *puVar5;
  uVar43 = 0;
  uVar44 = uVar6 - *(ulonglong *)(lVar34 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar34 + 0x18)) {
    uVar44 = uVar43;
  }
  uVar42 = uVar6 - *(ulonglong *)(lVar34 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar34 + 0x38)) {
    uVar42 = uVar43;
  }
  uVar6 = *(ulonglong *)(lVar34 + 0x30);
  uVar45 = uVar6 - uVar42;
  if (uVar6 < uVar42) {
    uVar45 = uVar43;
  }
  uVar7 = *(ulonglong *)(lVar34 + 0x10);
  uVar39 = uVar7 - uVar44;
  if (uVar7 < uVar44) {
    uVar39 = uVar43;
  }
  uVar43 = *(ulonglong *)(lVar34 + 0x40);
  *puVar5 = uVar43 - (uVar39 + uVar45);
  if (uVar7 >= uVar44 && uVar7 - uVar44 != 0 || uVar6 >= uVar42 && uVar6 - uVar42 != 0) {
    *puVar5 = uVar43;
    if (2 < *_DAT_143ca8e90) {
      pbStack_198 = (byte *)0x0;
      pbStack_190 = &UNK_14303ade4;
      pbStack_188 = (byte *)0x2c;
      pbStack_180 = (byte *)0x0;
      uStack_178 = &UNK_14303adab;
      uStack_170 = 0x38;
      uStack_168 = 3;
      uStack_164 = 0;
      uStack_160 = 0x4303ade4;
      uStack_15c = 1;
      uStack_158 = 0x2c;
      uStack_154 = 0;
      uStack_150 = 0x2400000001;
      puStack_148 = &UNK_14303ad90;
      uStack_140 = 0x37;
      pdb_140f332f0(&uStack_e1,&pbStack_198);
    }
    lStack_2a0 = *param_1;
    lVar34 = (ulonglong)*(byte *)(lStack_2a0 + 0x98) * 8;
    pdb_140f3e9e0(&pbStack_198,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_14303b4a8 + lVar34),
                  *(undefined8 *)(&UNK_14303b480 + lVar34));
    pbStack_100 = pbStack_190;
    pdb_140f3e9e0(&pbStack_200,pbStack_190,pbStack_188,&UNK_14303ae10,10);
    pdb_1416432f0(&puStack_268,&pbStack_200);
    if (SBORROW8(0,(longlong)puStack_268)) {
      pbStack_200 = pbStack_260;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303ae10,10,&pbStack_200,&UNK_14303b250,&UNK_14303ae20);
    }
    puStack_108 = puStack_268;
    pbStack_f8 = pbStack_260;
    pdb_1416502b0(&pbStack_200,pbStack_260,uStack_258);
    pbVar41 = pbStack_1f0;
    puVar5 = puStack_1f8;
    pbVar38 = pbStack_200;
    if (SBORROW8(0,(longlong)pbStack_200)) {
      puStack_268 = puStack_1f8;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303ae38,0x11,&puStack_268,&UNK_14303b270,&UNK_14303ae50);
    }
    if (puStack_108 != (ulonglong *)0x0) {
      pub_1406abac0(pbStack_f8,(ulonglong)puStack_108,1);
    }
    if (pbStack_198 != (byte *)0x0) {
      pub_1406abac0(pbStack_100,(ulonglong)pbStack_198,1);
    }
    uVar32 = _DAT_14303a8c0;
    cVar31 = UNK_14303a8bf;
    cVar30 = UNK_14303a8be;
    cVar29 = UNK_14303a8bd;
    cVar28 = UNK_14303a8bc;
    cVar27 = UNK_14303a8bb;
    cVar26 = UNK_14303a8ba;
    cVar25 = UNK_14303a8b9;
    cVar24 = UNK_14303a8b8;
    cVar23 = UNK_14303a8b7;
    cVar22 = UNK_14303a8b6;
    cVar21 = UNK_14303a8b5;
    cVar20 = UNK_14303a8b4;
    cVar19 = UNK_14303a8b3;
    cVar18 = UNK_14303a8b2;
    cVar17 = UNK_14303a8b1;
    cVar16 = DAT_14303a8b0;
    cVar15 = UNK_14302dda3;
    cVar14 = UNK_14302dda2;
    cVar13 = UNK_14302dda1;
    cVar12 = DAT_14302dda0;
    fVar11 = _DAT_14300e4bc;
    uVar10 = _DAT_142e377e0;
    puStack_208 = puVar5 + (longlong)pbVar41 * 10;
    puStack_220 = puVar5;
    puStack_218 = puVar5;
    pbStack_210 = pbVar38;
    uStack_130 = *(undefined4 *)((longlong)param_4 + 0x1c);
    pbStack_f8 = (byte *)*param_4;
    puStack_278 = (undefined4 *)param_4[2];
    puStack_108 = (ulonglong *)*param_2;
    pbStack_298 = (byte *)param_2[1];
    pbStack_290 = (byte *)param_2[2];
    pbVar38 = pbStack_298;
    if (pbStack_298 == (byte *)0x0) {
      pbVar38 = pbStack_290;
    }
    puStack_288 = (undefined *)param_2[3];
    uStack_134 = *(undefined4 *)((longlong)param_5 + 0x1c);
    pbStack_100 = (byte *)*param_5;
    puStack_280 = (undefined4 *)param_5[2];
    fVar49 = (float)_DAT_1430132e0;
    uVar6 = (ulonglong)_DAT_1430132e0 >> 0x20;
    lStack_270 = (longlong)pbStack_100 + 0x20;
    pbVar41 = (byte *)0x0;
    if (puVar5 != puStack_208) {
      do {
        while( true ) {
          puVar5 = puStack_218 + 10;
          pbVar40 = (byte *)*puStack_218;
          uStack_228 = puStack_218[9];
          uStack_238 = puStack_218[7];
          uStack_230 = puStack_218[8];
          uVar44 = puStack_218[5];
          uStack_240 = puStack_218[6];
          uStack_258 = puStack_218[3];
          pbVar46 = (byte *)puStack_218[4];
          puStack_268 = (ulonglong *)puStack_218[1];
          pbVar37 = (byte *)puStack_218[2];
          pbStack_260 = pbVar37;
          pbStack_250 = pbVar46;
          uStack_248 = uVar44;
          puStack_218 = puVar5;
          if (SBORROW8(0,(longlong)pbVar40)) goto LAB_140a33a7c;
          uStack_248._0_4_ = (undefined4)uVar44;
          uStack_248._4_4_ = (undefined4)(uVar44 >> 0x20);
          uStack_240._4_4_ = (undefined4)(uStack_240 >> 0x20);
          uStack_238._4_4_ = (undefined4)(uStack_238 >> 0x20);
          uStack_230._4_4_ = (undefined4)(uStack_230 >> 0x20);
          uStack_1c8 = (undefined4)uStack_238;
          uStack_1c4 = uStack_238._4_4_;
          uStack_1c0 = (undefined4)uStack_230;
          uStack_1bc = uStack_230._4_4_;
          uStack_1d8 = (undefined4)uStack_248;
          uStack_1d4 = uStack_248._4_4_;
          uStack_1d0 = (undefined4)uStack_240;
          uStack_1cc = uStack_240._4_4_;
          pbStack_200 = pbVar40;
          puStack_1f8 = puStack_268;
          pbStack_1f0 = pbVar37;
          uStack_1e8 = uStack_258;
          pbStack_1e0 = pbVar46;
          uStack_1b8 = uStack_228;
          if ((pbVar37 == (byte *)0x12) &&
             (auVar47[0] = -((char)*puStack_268 == cVar16),
             auVar47[1] = -(*(char *)((longlong)puStack_268 + 1) == cVar17),
             auVar47[2] = -(*(char *)((longlong)puStack_268 + 2) == cVar18),
             auVar47[3] = -(*(char *)((longlong)puStack_268 + 3) == cVar19),
             auVar47[4] = -(*(char *)((longlong)puStack_268 + 4) == cVar20),
             auVar47[5] = -(*(char *)((longlong)puStack_268 + 5) == cVar21),
             auVar47[6] = -(*(char *)((longlong)puStack_268 + 6) == cVar22),
             auVar47[7] = -(*(char *)((longlong)puStack_268 + 7) == cVar23),
             auVar47[8] = -((char)puStack_268[1] == cVar24),
             auVar47[9] = -(*(char *)((longlong)puStack_268 + 9) == cVar25),
             auVar47[10] = -(*(char *)((longlong)puStack_268 + 10) == cVar26),
             auVar47[0xb] = -(*(char *)((longlong)puStack_268 + 0xb) == cVar27),
             auVar47[0xc] = -(*(char *)((longlong)puStack_268 + 0xc) == cVar28),
             auVar47[0xd] = -(*(char *)((longlong)puStack_268 + 0xd) == cVar29),
             auVar47[0xe] = -(*(char *)((longlong)puStack_268 + 0xe) == cVar30),
             auVar47[0xf] = -(*(char *)((longlong)puStack_268 + 0xf) == cVar31),
             auVar48[0] = -((char)(short)puStack_268[2] == cVar12),
             auVar48[1] = -((char)((ushort)(short)puStack_268[2] >> 8) == cVar13),
             auVar48[2] = -(cVar14 == '\0'), auVar48[3] = -(cVar15 == '\0'), auVar48[4] = 0xff,
             auVar48[5] = 0xff, auVar48[6] = 0xff, auVar48[7] = 0xff, auVar48[8] = 0xff,
             auVar48[9] = 0xff, auVar48[10] = 0xff, auVar48[0xb] = 0xff, auVar48[0xc] = 0xff,
             auVar48[0xd] = 0xff, auVar48[0xe] = 0xff, auVar48[0xf] = 0xff,
             auVar48 = auVar48 & auVar47,
             (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) == 0xffff)) break;
          lVar34 = (ulonglong)*(byte *)(lStack_2a0 + 0x98) * 8;
          pbStack_128 = pbVar41;
          pdb_140f3e9e0(&pbStack_198,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_14303b4a8 + lVar34),
                        *(undefined8 *)(&UNK_14303b480 + lVar34));
          pdb_141b030b0(&uStack_2c8,pbVar46,uVar44,&pbStack_198);
          puStack_2a8 = &uStack_2c8;
          pdb_140d929f0(&pbStack_198,pbStack_2c0,uStack_2b8);
          pbStack_f0 = pbStack_190;
          pdb_140f55d10(&pbStack_120,pbStack_190,pbStack_188);
          pdb_141706360(&uStack_320,&pbStack_120,&pbStack_198);
          pbVar41 = pbStack_128;
          if (pbStack_198 != (byte *)0x0) {
            pub_1406abac0(pbStack_f0,(ulonglong)pbStack_198,1);
          }
          uStack_1b0 = uStack_320;
          if (SBORROW8(0,uStack_320)) {
            pdb_142d8e520(&puStack_2a8);
LAB_140a332ff:
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          pbStack_1a0 = pbStack_318;
          pdb_141650620(&pbStack_198,pbStack_318,uStack_310);
          pbVar40 = pbStack_188;
          if (SBORROW8(0,(longlong)pbStack_198)) {
            pbStack_120 = pbStack_190;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14303b290,0x2b,&pbStack_120,&UNK_14303b270,&UNK_14303ae68);
          }
          pbStack_1a8 = pbStack_198;
          pbStack_f0 = pbStack_190;
          pbStack_120 = (byte *)pdb_1418bdee0(puStack_1f8);
          uStack_12c = (undefined4)uStack_1b8;
          pbVar46 = pbStack_f0 + (longlong)pbVar40 * 0x30;
          pbVar40 = pbStack_f0;
          pbStack_118 = pbVar37;
          while (pbVar37 = pbVar40, pbVar37 != pbVar46) {
            pbVar40 = pbVar37 + 0x30;
            uVar4 = *(undefined8 *)pbVar37;
            fVar50 = (float)uVar4;
            if (((float)((uint)fVar50 & uVar10) < fVar11) &&
               (fVar3 = *(float *)(pbVar37 + 8), (float)((uint)fVar3 & uVar10) < fVar11)) {
              pbVar35 = (byte *)pdb_140ed5970(puStack_108);
              lVar34 = *(longlong *)(pbVar38 + 0x10);
              if ((ulonglong)(*(longlong *)pbVar38 - lVar34) < 0x20) {
                pdb_142d7f1b0(pbVar38,lVar34,0x20,1,1);
              }
              lVar8 = *(longlong *)(pbVar38 + 8);
              *(code **)(lVar8 + lVar34) = pdb_14160ad50;
              *(byte **)(lVar8 + 8 + lVar34) = pbVar35;
              *(byte **)(lVar8 + 0x10 + lVar34) = pbVar41 + 0x186a1;
              *(undefined1 *)(lVar8 + 0x18 + lVar34) = 1;
              *(longlong *)(pbVar38 + 0x10) = lVar34 + 0x20;
              pbStack_190 = (byte *)puStack_108;
              pbStack_188 = pbStack_298;
              pbStack_180 = pbStack_290;
              uStack_178 = puStack_288;
              LOCK();
              lVar34 = *(longlong *)pbStack_120;
              *(longlong *)pbStack_120 = *(longlong *)pbStack_120 + 1;
              UNLOCK();
              pbStack_198 = pbVar35;
              if (*(longlong *)pbStack_120 == 0 || SCARRY8(lVar34,1) != *(longlong *)pbStack_120 < 0
                 ) goto LAB_140a332ff;
              pdb_141616c60(&pbStack_198,pbStack_120,pbStack_118,&UNK_14303ae80);
              lVar34 = *(longlong *)(pbVar38 + 0x10);
              if ((ulonglong)(*(longlong *)pbVar38 - lVar34) < 0x28) {
                pdb_142d7f1b0(pbVar38,lVar34,0x28,1,1);
              }
              lVar8 = *(longlong *)(pbVar38 + 8);
              *(code **)(lVar8 + lVar34) = pdb_14160cf40;
              *(byte **)(lVar8 + 8 + lVar34) = pbVar35;
              *(undefined8 *)(lVar8 + 0x10 + lVar34) = uVar32;
              *(undefined4 *)(lVar8 + 0x18 + lVar34) = 0x3f800000;
              *(undefined1 *)(lVar8 + 0x1c + lVar34) = 0;
              *(undefined1 *)(lVar8 + 0x20 + lVar34) = 0;
              lVar8 = lVar34 + 0x28;
              *(longlong *)(pbVar38 + 0x10) = lVar8;
              if ((ulonglong)(*(longlong *)pbVar38 - lVar8) < 0x20) {
                pdb_142d7f1b0(pbVar38,lVar8,0x20,1,1);
              }
              lVar8 = *(longlong *)(pbVar38 + 8);
              *(code **)(lVar8 + 0x28 + lVar34) = pdb_141609550;
              *(byte **)(lVar8 + 0x30 + lVar34) = pbVar35;
              *(float *)(lVar8 + 0x38 + lVar34) = fVar50;
              *(float *)(lVar8 + 0x3c + lVar34) = fVar3;
              *(undefined1 *)(lVar8 + 0x40 + lVar34) = 0;
              lVar8 = lVar34 + 0x48;
              *(longlong *)(pbVar38 + 0x10) = lVar8;
              if ((ulonglong)(*(longlong *)pbVar38 - lVar8) < 0x20) {
                pdb_142d7f1b0(pbVar38,lVar8,0x20,1,1);
              }
              lVar8 = *(longlong *)(pbVar38 + 8);
              *(code **)(lVar8 + 0x48 + lVar34) = pdb_14160a960;
              *(byte **)(lVar8 + 0x50 + lVar34) = pbVar35;
              *(ulonglong *)(lVar8 + 0x58 + lVar34) =
                   CONCAT44((float)((ulonglong)uVar4 >> 0x20) + (float)uVar6,fVar50 + fVar49);
              *(float *)(lVar8 + 0x60 + lVar34) = fVar3 + 0.0;
              *(undefined1 *)(lVar8 + 100 + lVar34) = 0;
              *(longlong *)(pbVar38 + 0x10) = lVar34 + 0x68;
              pbStack_308 = *(byte **)pbVar37;
              puStack_300 = *(undefined **)(pbVar37 + 8);
              uStack_2f8 = *(undefined8 *)(pbVar37 + 0x10);
              uStack_2e8 = *(undefined8 *)(pbVar37 + 0x1c);
              uStack_2e0 = *(undefined8 *)(pbVar37 + 0x24);
              uStack_2d8 = *(undefined4 *)(pbVar37 + 0x2c);
              LOCK();
              lVar34 = *(longlong *)pbStack_120;
              *(longlong *)pbStack_120 = *(longlong *)pbStack_120 + 1;
              UNLOCK();
              if (*(longlong *)pbStack_120 == 0 || SCARRY8(lVar34,1) != *(longlong *)pbStack_120 < 0
                 ) goto LAB_140a332ff;
              uStack_164 = (undefined4)uStack_2e8;
              uStack_160 = (undefined4)((ulonglong)uStack_2e8 >> 0x20);
              uStack_15c = (undefined4)uStack_2e0;
              uStack_158 = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
              *puStack_280 = uStack_134;
              uStack_150 = *(undefined8 *)((longlong)pbStack_100 + 0x40);
              pbStack_128 = pbStack_120;
              pbStack_198 = pbStack_120;
              pbStack_190 = pbStack_118;
              uStack_168 = uStack_12c;
              lVar34 = *(longlong *)((longlong)pbStack_100 + 0x30);
              pbStack_188 = pbVar35;
              pbStack_180 = pbStack_308;
              uStack_178 = puStack_300;
              uStack_170 = uStack_2f8;
              uStack_154 = uStack_2d8;
              if (lVar34 == *(longlong *)((longlong)pbStack_100 + 0x20)) {
                pdb_142d8d780(lStack_270);
              }
              lVar8 = *(longlong *)((longlong)pbStack_100 + 0x28);
              lVar36 = lVar34 * 0x50;
              puVar1 = (undefined8 *)(lVar8 + 0x40 + lVar36);
              *puVar1 = CONCAT44(uStack_154,uStack_158);
              puVar1[1] = uStack_150;
              puVar2 = (undefined4 *)(lVar8 + 0x30 + lVar36);
              *puVar2 = uStack_168;
              puVar2[1] = uStack_164;
              puVar2[2] = uStack_160;
              puVar2[3] = uStack_15c;
              puVar2 = (undefined4 *)(lVar8 + 0x20 + lVar36);
              *puVar2 = (undefined4)uStack_178;
              puVar2[1] = uStack_178._4_4_;
              puVar2[2] = (undefined4)uStack_170;
              puVar2[3] = uStack_170._4_4_;
              puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar36);
              *puVar1 = pbStack_188;
              puVar1[1] = pbStack_180;
              *(undefined8 *)(lVar8 + lVar36) = pbStack_198;
              ((undefined8 *)(lVar8 + lVar36))[1] = pbStack_190;
              *(longlong *)((longlong)pbStack_100 + 0x30) = lVar34 + 1;
              *(longlong *)((longlong)pbStack_100 + 0x40) =
                   *(longlong *)((longlong)pbStack_100 + 0x40) + 1;
              *puStack_278 = uStack_130;
              iVar33 = pdb_141409100(pbStack_f8,pbVar41 + 0x186a1,pbVar35);
              pbVar37 = pbVar41 + 0x186a2;
              if (pbVar41 + 0x186a2 <= *(byte **)((longlong)pbStack_f8 + 0x30)) {
                pbVar37 = *(byte **)((longlong)pbStack_f8 + 0x30);
              }
              *(byte **)((longlong)pbStack_f8 + 0x30) = pbVar37;
              pbVar41 = pbVar41 + 1;
              if (iVar33 != 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_14303ae98,0x20,&UNK_14303aeb8);
              }
            }
          }
          LOCK();
          *(longlong *)pbStack_120 = *(longlong *)pbStack_120 + -1;
          UNLOCK();
          if (*(longlong *)pbStack_120 == 0) {
            pdb_1406ed6a0(&pbStack_120);
          }
          if (pbStack_1a8 != (byte *)0x0) {
            pub_1406abac0(pbStack_f0,(longlong)pbStack_1a8 * 0x30,4);
          }
          if (uStack_1b0 != 0) {
            pub_1406abac0(pbStack_1a0,uStack_1b0,1);
          }
          if (uStack_2c8 != 0) {
            pub_1406abac0(pbStack_2c0,uStack_2c8,1);
          }
          if (pbStack_200 != (byte *)0x0) {
            pub_1406abac0((byte *)puStack_1f8,(ulonglong)pbStack_200,1);
          }
          if (uStack_1e8 != 0) {
            pub_1406abac0(pbStack_1e0,uStack_1e8,1);
          }
          uVar44 = CONCAT44(uStack_1cc,uStack_1d0);
          if ((!SBORROW8(0,uVar44)) && (uVar44 != 0)) {
            pub_1406abac0((byte *)CONCAT44(uStack_1c4,uStack_1c8),uVar44,1);
          }
          if (puStack_218 == puStack_208) goto LAB_140a33a7c;
        }
        if (pbVar40 != (byte *)0x0) {
          pub_1406abac0((byte *)puStack_268,(ulonglong)pbVar40,1);
        }
        if (uStack_1e8 != 0) {
          pub_1406abac0(pbStack_1e0,uStack_1e8,1);
        }
        uVar44 = CONCAT44(uStack_1cc,uStack_1d0);
        if ((!SBORROW8(0,uVar44)) && (uVar44 != 0)) {
          pub_1406abac0((byte *)CONCAT44(uStack_1c4,uStack_1c8),uVar44,1);
        }
      } while (puStack_218 != puStack_208);
    }
LAB_140a33a7c:
    pdb_14096ce60(&puStack_220);
  }
  return;
}

