// VA 0x140b98d70, PDB extent 6088 bytes
// country_core::startup::startup_critters::startup_critters
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_critters.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_critters::startup_critters
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_critters.rs
   Extent: 6088 */

void pdb_140b98d70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9,longlong *param_10)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 (*pauVar18) [16];
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  longlong *plVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uStack_2a0;
  longlong lStack_298;
  ulonglong uStack_290;
  undefined4 uStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  ulonglong uStack_268;
  ulonglong uStack_260;
  ulonglong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined1 uStack_23c;
  undefined2 uStack_23b;
  undefined1 uStack_239;
  undefined8 uStack_238;
  undefined4 uStack_230;
  ulonglong uStack_228;
  ulonglong uStack_220;
  undefined8 uStack_218;
  float fStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  ulonglong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  undefined8 uStack_198;
  float fStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined2 uStack_17b;
  undefined1 uStack_179;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong uStack_168;
  ulonglong uStack_160;
  undefined8 uStack_158;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined8 extraout_XMM0_Qb;
  
  fVar10 = _DAT_142f3e558;
  fVar9 = _DAT_142e37844;
  fVar8 = _DAT_142e36f38;
  fVar7 = _DAT_142e36f28;
  uStack_f0 = 0xfffffffffffffffe;
  puStack_280 = param_3;
  puStack_278 = param_4;
  puStack_270 = param_2;
  if (*(char *)(*param_9 + 0x23) != '\x01') {
LAB_140b992f1:
    fVar23 = _DAT_14305f148;
    fVar10 = _DAT_14305f144;
    fVar9 = _DAT_143017a60;
    fVar8 = _DAT_14300e4bc;
    fVar7 = _DAT_142e36f28;
    if (*(char *)(*param_10 + 0x98) != '\x04') {
      uStack_238 = 0x29a;
      plVar21 = (longlong *)param_8[1];
      if (plVar21 == (longlong *)0x0) {
        plVar21 = (longlong *)param_8[2];
      }
      uVar17 = *param_8;
      uVar14 = 0;
      do {
        fVar24 = (float)pdb_140de8850(uVar14 & 0xffffffff,2);
        auVar27._0_8_ = pdb_140e02880(&uStack_238);
        auVar27._8_8_ = extraout_XMM0_Qb;
        auVar28._4_12_ = auVar27._4_12_;
        auVar28._0_4_ = (float)auVar27._0_8_ * _DAT_142e37ae4 + fVar24;
        fVar24 = fVar7;
        fVar25 = (float)pub_142e32a70(auVar28._0_8_);
        fVar26 = (float)pdb_140e02880(&uStack_238);
        fVar25 = (float)pdb_140de8f60(CONCAT44((fVar26 + (float)(longlong)uVar14) / fVar10,
                                               fVar25 * fVar23 + fVar9));
        fVar26 = (float)pdb_140e02880(&uStack_238);
        pdb_140df4940(&uStack_1a8);
        uVar11 = uStack_1a0;
        uVar19 = uStack_1a8;
        uStack_268 = CONCAT44(uStack_188,uStack_18c);
        uStack_260 = CONCAT44(uStack_260._4_4_,uStack_184);
        uStack_218 = uStack_218 & 0xffffffff00000000;
        uStack_220 = 0;
        uVar16 = pdb_140ed5970(uVar17);
        lVar22 = plVar21[2];
        if ((ulonglong)(*plVar21 - lVar22) < 0x88) {
          pdb_142d7f1b0(plVar21,lVar22,0x88,1,1);
        }
        uVar14 = uVar14 + 1;
        lVar2 = plVar21[1];
        *(code **)(lVar2 + lVar22) = pdb_14160bc20;
        *(undefined4 *)(lVar2 + 8 + lVar22) = 0;
        puVar1 = (ulonglong *)(lVar2 + 0x18 + lVar22);
        *puVar1 = uVar19;
        puVar1[1] = uVar11;
        *(float *)(lVar2 + 0x28 + lVar22) = fVar25 * fVar8;
        *(float *)(lVar2 + 0x2c + lVar22) = fVar26 + fVar7;
        *(float *)(lVar2 + 0x30 + lVar22) = fVar24 * fVar8;
        *(ulonglong *)(lVar2 + 0x34 + lVar22) = uStack_268;
        *(undefined4 *)(lVar2 + 0x3c + lVar22) = (undefined4)uStack_260;
        puVar1 = (ulonglong *)(lVar2 + 0x40 + lVar22);
        *puVar1 = uStack_228;
        puVar1[1] = uStack_220;
        *(undefined4 *)(lVar2 + 0x50 + lVar22) = (undefined4)uStack_218;
        *(undefined8 *)(lVar2 + 0x54 + lVar22) = 0x33d4ccccd;
        puVar15 = (undefined8 *)(lVar2 + 0x60 + lVar22);
        *puVar15 = 0;
        puVar15[1] = 0;
        *(undefined4 *)(lVar2 + 0x70 + lVar22) = 0x3f800000;
        *(undefined8 *)(lVar2 + 0x78 + lVar22) = uVar16;
        plVar21[2] = lVar22 + 0x88;
      } while (uVar14 != 0x60);
      pdb_140a9b770(&uStack_1a8,0,_DAT_142e36f28);
      param_4 = puStack_278;
      param_3 = puStack_280;
      if (SBORROW8(0,uStack_1a8)) {
        uStack_218 = CONCAT44(uStack_18c,fStack_190);
        uStack_228 = uStack_1a0;
        uStack_220 = uStack_198;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143060400,0x2b,&uStack_228,&UNK_143060430,&UNK_14305fa80);
      }
      uStack_1b8 = uStack_138;
      uStack_1b0 = uStack_130;
      uStack_1c8._0_4_ = uStack_148;
      uStack_1c8._4_4_ = uStack_144;
      uStack_1c0 = uStack_140;
      uStack_1d0._0_4_ = fStack_150;
      uStack_1d0._4_4_ = uStack_14c;
      uStack_1d8 = uStack_158;
      uStack_1e8 = uStack_168;
      uStack_1e0 = uStack_160;
      uStack_1fc = CONCAT13(uStack_179,CONCAT21(uStack_17b,uStack_17c));
      uStack_1f8 = uStack_178;
      uStack_1f4 = uStack_174;
      uStack_1f0 = uStack_170;
      uStack_1ec = uStack_16c;
      uStack_208 = uStack_188;
      uStack_204 = uStack_184;
      uStack_200 = uStack_180;
      uStack_218._0_4_ = (undefined4)uStack_198;
      uStack_218._4_4_ = uStack_198._4_4_;
      fStack_210 = fStack_190;
      uStack_20c = uStack_18c;
      uStack_228 = uStack_1a8;
      uStack_220 = uStack_1a0;
      uStack_290 = (ulonglong)(uint)_DAT_142e36f28;
      uStack_288 = 0x3f800000;
      if (uStack_158 != 0) {
        pauVar18 = (undefined1 (*) [16])CONCAT44(uStack_16c,uStack_170);
        auVar27 = *pauVar18;
        uVar4 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
        pauVar20 = pauVar18;
        while (uVar6 = uVar4 ^ 0xffff, uVar6 == 0) {
          pauVar20 = pauVar20 + 1;
          auVar27 = *pauVar20;
          pauVar18 = pauVar18 + -0x38;
          uVar4 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
        }
        uVar5 = 0;
        for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        pdb_1415e43a0(&uStack_1a8,&uStack_290,
                      *(undefined8 *)((longlong)pauVar18 + (ulonglong)uVar5 * -0x38 + -8));
        pdb_140c93200(&uStack_228,&DAT_143045cc8,0xc,&uStack_1a8);
      }
      uStack_1a8 = uStack_228;
      uStack_1a0 = uStack_220;
      uStack_198 = CONCAT44(uStack_218._4_4_,(undefined4)uStack_218);
      fStack_190 = fStack_210;
      uStack_18c = uStack_20c;
      uStack_188 = uStack_208;
      uStack_184 = uStack_204;
      uStack_180 = uStack_200;
      uStack_17c = (undefined1)uStack_1fc;
      uStack_17b = (undefined2)((uint)uStack_1fc >> 8);
      uStack_179 = (undefined1)((uint)uStack_1fc >> 0x18);
      uStack_178 = uStack_1f8;
      uStack_174 = uStack_1f4;
      uStack_170 = uStack_1f0;
      uStack_16c = uStack_1ec;
      uStack_168 = uStack_1e8;
      uStack_160 = uStack_1e0;
      uStack_158 = uStack_1d8;
      fStack_150 = (float)uStack_1d0;
      uStack_14c = uStack_1d0._4_4_;
      uStack_148 = (undefined4)uStack_1c8;
      uStack_144 = uStack_1c8._4_4_;
      uStack_140 = uStack_1c0;
      uStack_138 = uStack_1b8;
      uStack_130 = uStack_1b0;
      uVar17 = *param_4;
      uVar16 = *param_3;
      uVar19 = pdb_140b08d00(&uStack_1a8,&UNK_14305fa98,7,uVar17,uVar16);
      uVar3 = *puStack_270;
      pdb_140a596f0(&uStack_168,uVar3,&UNK_14305fa9f,0x1d,&UNK_14305fac0);
      uVar14 = _DAT_142e4e650;
      uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_180 = 0;
      uStack_198 = _DAT_142e4e650;
      fStack_190 = (float)_UNK_142e4e658;
      fVar7 = fStack_190;
      uStack_18c = (undefined4)((ulonglong)_UNK_142e4e658 >> 0x20);
      uVar12 = uStack_18c;
      uStack_17c = 0;
      uStack_17b = 0x8000;
      uStack_179 = 0x3f;
      uStack_178 = 0x3f800000;
      uStack_174 = 0x3f800000;
      uStack_130 = 0;
      uStack_128 = uStack_128 & 0xffffffff00000000;
      uStack_1a0 = uVar19;
      pdb_14161b780(&uStack_228,param_8,&uStack_1a8,&UNK_14305fad8);
      pdb_140a9b020(&uStack_1a8,_DAT_142e36f28);
      if (uStack_158 != 0) {
        pauVar18 = (undefined1 (*) [16])CONCAT44(uStack_16c,uStack_170);
        auVar27 = *pauVar18;
        uVar4 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
        pauVar20 = pauVar18;
        while (uVar6 = uVar4 ^ 0xffff, uVar6 == 0) {
          pauVar20 = pauVar20 + 1;
          auVar27 = *pauVar20;
          pauVar18 = pauVar18 + -0x38;
          uVar4 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
        }
        uVar5 = 0;
        for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        pdb_1415e43a0(&uStack_228,&uStack_290,
                      *(undefined8 *)((longlong)pauVar18 + (ulonglong)uVar5 * -0x38 + -8));
        pdb_140c93200(&uStack_1a8,&DAT_143045cc8,0xc,&uStack_228);
      }
      uStack_1fc = CONCAT13(uStack_179,CONCAT21(uStack_17b,uStack_17c));
      uStack_228 = uStack_1a8;
      uStack_220 = uStack_1a0;
      uStack_218 = uStack_198;
      fStack_210 = fStack_190;
      uStack_20c = uStack_18c;
      uStack_208 = uStack_188;
      uStack_204 = uStack_184;
      uStack_200 = uStack_180;
      uStack_1f8 = uStack_178;
      uStack_1f4 = uStack_174;
      uStack_1f0 = uStack_170;
      uStack_1ec = uStack_16c;
      uStack_1e8 = uStack_168;
      uStack_1e0 = uStack_160;
      uStack_1d0 = CONCAT44(uStack_14c,fStack_150);
      uStack_1d8 = uStack_158;
      uStack_1c8 = CONCAT44(uStack_144,uStack_148);
      uStack_1c0 = uStack_140;
      uStack_1b8 = uStack_138;
      uStack_1b0 = uStack_130;
      uVar19 = pdb_140b08d00(&uStack_228,&UNK_14305faf0,0xc,uVar17,uVar16);
      pdb_140a596f0(&uStack_168,uVar3,&UNK_14305fafc,0x22,&UNK_14305fb20);
      uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_180 = 0;
      uStack_198 = uVar14;
      uStack_17c = 0;
      uStack_17b = 0x8000;
      uStack_179 = 0x3f;
      uStack_178 = 0x3f800000;
      uStack_174 = 0x3f800000;
      uStack_130 = 0;
      uStack_128 = 0x1200000000;
      uStack_1a0 = uVar19;
      fStack_190 = fVar7;
      uStack_18c = uVar12;
      pdb_14161b250(&uStack_228,param_8,&uStack_1a8,&UNK_14305fb38);
    }
    pdb_141b241d0(&uStack_1a8,&UNK_14305fb50,0x1e);
    if (SBORROW8(0,uStack_1a8)) {
      uStack_228 = uStack_1a0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143060400,0x2b,&uStack_228,&UNK_1430603a0,&UNK_14305fb70);
    }
    uStack_1b8 = uStack_138;
    uStack_1b0 = uStack_130;
    uStack_1c8 = CONCAT44(uStack_144,uStack_148);
    uStack_1c0 = uStack_140;
    uStack_1d0 = CONCAT44(uStack_14c,fStack_150);
    uStack_1d8 = uStack_158;
    uStack_1e8 = uStack_168;
    uStack_1e0 = uStack_160;
    uStack_1fc = CONCAT13(uStack_179,CONCAT21(uStack_17b,uStack_17c));
    uStack_1f8 = uStack_178;
    uStack_1f4 = uStack_174;
    uStack_1f0 = uStack_170;
    uStack_1ec = uStack_16c;
    uStack_208 = uStack_188;
    uStack_204 = uStack_184;
    uStack_200 = uStack_180;
    uStack_218 = uStack_198;
    fStack_210 = fStack_190;
    uStack_20c = uStack_18c;
    uStack_228 = uStack_1a8;
    uStack_220 = uStack_1a0;
    uVar17 = *param_4;
    uVar16 = *param_3;
    pdb_140b08d00(&uStack_228,&UNK_14305fb88,4,uVar17,uVar16);
    pdb_141b241d0(&uStack_1a8,&UNK_14305fb8c,0x1d);
    if (!SBORROW8(0,uStack_1a8)) {
      uStack_1b8 = uStack_138;
      uStack_1b0 = uStack_130;
      uStack_1c8 = CONCAT44(uStack_144,uStack_148);
      uStack_1c0 = uStack_140;
      uStack_1d0 = CONCAT44(uStack_14c,fStack_150);
      uStack_1d8 = uStack_158;
      uStack_1e8 = uStack_168;
      uStack_1e0 = uStack_160;
      uStack_1fc = CONCAT13(uStack_179,CONCAT21(uStack_17b,uStack_17c));
      uStack_1f8 = uStack_178;
      uStack_1f4 = uStack_174;
      uStack_1f0 = uStack_170;
      uStack_1ec = uStack_16c;
      uStack_208 = uStack_188;
      uStack_204 = uStack_184;
      uStack_200 = uStack_180;
      uStack_218 = uStack_198;
      fStack_210 = fStack_190;
      uStack_20c = uStack_18c;
      uStack_228 = uStack_1a8;
      uStack_220 = uStack_1a0;
      pdb_140b08d00(&uStack_228,&UNK_14305fbc8,10,uVar17,uVar16);
      pdb_141b241d0(&uStack_1a8,&UNK_14305fbd2,0x19);
      if (!SBORROW8(0,uStack_1a8)) {
        uStack_1b8 = uStack_138;
        uStack_1b0 = uStack_130;
        uStack_1c8 = CONCAT44(uStack_144,uStack_148);
        uStack_1c0 = uStack_140;
        uStack_1d0 = CONCAT44(uStack_14c,fStack_150);
        uStack_1d8 = uStack_158;
        uStack_1e8 = uStack_168;
        uStack_1e0 = uStack_160;
        uStack_1fc = CONCAT13(uStack_179,CONCAT21(uStack_17b,uStack_17c));
        uStack_1f8 = uStack_178;
        uStack_1f4 = uStack_174;
        uStack_1f0 = uStack_170;
        uStack_1ec = uStack_16c;
        uStack_208 = uStack_188;
        uStack_204 = uStack_184;
        uStack_200 = uStack_180;
        uStack_218 = uStack_198;
        fStack_210 = fStack_190;
        uStack_20c = uStack_18c;
        uStack_228 = uStack_1a8;
        uStack_220 = uStack_1a0;
        pdb_140b08d00(&uStack_228,&UNK_14305fc08,6,uVar17,uVar16);
        return;
      }
      uStack_228 = uStack_1a0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143060400,0x2b,&uStack_228,&UNK_1430603a0,&UNK_14305fbf0);
    }
    uStack_228 = uStack_1a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143060400,0x2b,&uStack_228,&UNK_1430603a0,&UNK_14305fbb0);
  }
  lStack_298 = *(longlong *)*param_1 + 0x10;
  uStack_2a0 = 0x2a729;
  plVar21 = (longlong *)*param_7;
  lVar22 = 0x18;
  do {
    if (*plVar21 == 0) {
      pdb_14007ee60();
      pbVar13 = pub_1406abab0(0x1b,1);
      uVar17 = _UNK_14305fc21;
      if (pbVar13 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x1b);
        goto LAB_140b99cd2;
      }
      *(ulonglong *)(pbVar13 + 0xb) = CONCAT35(_UNK_14305fc1e,_DAT_14305fc19);
      *(undefined8 *)(pbVar13 + 0x13) = uVar17;
      uVar17 = CONCAT53(_DAT_14305fc19,_UNK_14305fc16);
      *(undefined8 *)pbVar13 = _DAT_14305fc0e;
      *(undefined8 *)(pbVar13 + 8) = uVar17;
      uStack_1a8 = 0;
      uStack_198 = 0x1b;
      fStack_190 = SUB84(pbVar13,0);
      uStack_18c = (undefined4)((ulonglong)pbVar13 >> 0x20);
      uStack_188 = 0x1b;
      uStack_184 = 0;
      uStack_180 = CONCAT31(uStack_180._1_3_,2);
    }
    else {
      pdb_140a8b180(&uStack_1a8,*plVar21 + 0x10,&DAT_14305fc0e,0x1b);
      if ((int)uStack_1a8 == 2) {
        uStack_228 = uStack_1a0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143060400,0x2b,&uStack_228,&UNK_1430603a0,&UNK_14305fc30);
      }
    }
    uStack_250 = CONCAT44(uStack_18c,fStack_190);
    uStack_248 = CONCAT44(uStack_184,uStack_188);
    uStack_240 = uStack_180;
    uStack_23c = uStack_17c;
    uStack_23b = uStack_17b;
    uStack_239 = uStack_179;
    uStack_258 = uStack_198;
    uStack_268 = uStack_1a8;
    uStack_260 = uStack_1a0;
    uStack_f2 = 1;
    fVar23 = (float)pdb_140e02880(&uStack_2a0);
    uStack_f2 = 1;
    fVar24 = (float)pdb_140e02880(&uStack_2a0);
    uStack_f2 = 1;
    pdb_140df4940(&uStack_228);
    uVar19 = uStack_220;
    uVar14 = uStack_228;
    uStack_238 = CONCAT44(uStack_208,uStack_20c);
    uStack_230 = uStack_204;
    uStack_f2 = 1;
    fVar25 = (float)pdb_140e02880(&uStack_2a0);
    fStack_150 = (fVar24 + fVar8) * fVar10;
    uStack_188 = (undefined4)uStack_248;
    uStack_184 = uStack_248._4_4_;
    uStack_180 = uStack_240;
    uStack_17c = uStack_23c;
    uStack_17b = uStack_23b;
    uStack_179 = uStack_239;
    uStack_198 = uStack_258;
    fStack_190 = (float)uStack_250;
    uStack_18c = uStack_250._4_4_;
    uStack_1a8 = uStack_268;
    uStack_1a0 = uStack_260;
    uStack_168 = uVar14;
    uStack_160 = uVar19;
    uStack_158 = CONCAT44(0x3f800000,(fVar23 + fVar8) * fVar10);
    uStack_144 = uStack_230;
    uStack_14c = (undefined4)uStack_238;
    uStack_148 = (undefined4)((ulonglong)uStack_238 >> 0x20);
    uStack_128 = CONCAT44(fVar25 * fVar9 + fVar7,2);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 3;
    uStack_178 = 0;
    uStack_138 = 0;
    uStack_130 = 0x3d4ccccd00000000;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_fc = 0x3f800000;
    uStack_f2 = 0;
    pdb_14161bd50(&uStack_228,param_8,&uStack_1a8,&UNK_14305fc48);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  pdb_141b241d0(&uStack_1a8,&UNK_14305f997,0x1c);
  param_4 = puStack_278;
  param_3 = puStack_280;
  if (SBORROW8(0,uStack_1a8)) {
    uStack_228 = uStack_1a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143060400,0x2b,&uStack_228,&UNK_1430603a0,&UNK_14305f9e8);
  }
  uStack_1b8 = uStack_138;
  uStack_1b0 = uStack_130;
  uStack_1c8 = CONCAT44(uStack_144,uStack_148);
  uStack_1c0 = uStack_140;
  uStack_1d0 = CONCAT44(uStack_14c,fStack_150);
  uStack_1d8 = uStack_158;
  uStack_1e8 = uStack_168;
  uStack_1e0 = uStack_160;
  uStack_1fc = CONCAT13(uStack_179,CONCAT21(uStack_17b,uStack_17c));
  uStack_1f8 = uStack_178;
  uStack_1f4 = uStack_174;
  uStack_1f0 = uStack_170;
  uStack_1ec = uStack_16c;
  uStack_208 = uStack_188;
  uStack_204 = uStack_184;
  uStack_200 = uStack_180;
  uStack_218 = uStack_198;
  fStack_210 = fStack_190;
  uStack_20c = uStack_18c;
  uStack_228 = uStack_1a8;
  uStack_220 = uStack_1a0;
  uVar14 = pdb_140b08d00(&uStack_228,&UNK_14305fa00,9,*puStack_278,*puStack_280);
  pdb_140a596f0(&uStack_228,*puStack_270,&UNK_14305fa09,0x1f,&UNK_14305fa28);
  uStack_f1 = 1;
  puVar15 = (undefined8 *)pdb_140bf45b0(*param_5,&UNK_14331c918);
  if (puVar15 != (undefined8 *)0x0) {
    uStack_f1 = 1;
    lVar22 = (**(code **)(puVar15[1] + 0x18))(*puVar15);
    if (lVar22 != 0) {
      uVar17 = *param_6;
      uStack_f1 = 1;
      uVar16 = pdb_140df4400(&UNK_14305fa58,0xf);
      uStack_f1 = 1;
      uVar17 = pdb_140a2e580(uVar17,uVar16);
      uStack_f1 = 1;
      uStack_130 = pdb_1419918f0(&uStack_228,lStack_298,uVar17,lVar22);
      uStack_138 = CONCAT44(uStack_1f4,uStack_1f8);
      uStack_148 = uStack_208;
      uStack_144 = uStack_204;
      uStack_140 = CONCAT44(uStack_1fc,uStack_200);
      uStack_158 = uStack_218;
      fStack_150 = fStack_210;
      uStack_14c = uStack_20c;
      uStack_168 = uStack_228;
      uStack_160 = uStack_220;
      uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_180 = 0;
      uStack_198 = _DAT_142e4e650;
      fStack_190 = (float)_UNK_142e4e658;
      uStack_18c = (undefined4)((ulonglong)_UNK_142e4e658 >> 0x20);
      uStack_17c = 0;
      uStack_17b = 0x8000;
      uStack_179 = 0x3f;
      uStack_178 = 0x3f800000;
      uStack_174 = 0x3f800000;
      uStack_128 = CONCAT44(uStack_128._4_4_,0x18);
      uStack_f1 = 0;
      uStack_1a0 = uVar14;
      pdb_14161afe0(&uStack_268,param_8,&uStack_1a8,&UNK_14305fa68);
      goto LAB_140b992f1;
    }
  }
LAB_140b99cd2:
  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14305fa40);
}

