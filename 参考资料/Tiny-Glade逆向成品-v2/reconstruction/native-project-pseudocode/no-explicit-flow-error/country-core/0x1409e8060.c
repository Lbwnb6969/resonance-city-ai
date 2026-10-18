// VA 0x1409e8060, PDB extent 8152 bytes
// country_core::startup::debug::debug
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/debug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::debug::debug
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/debug.rs
   Extent: 8152 */

void pdb_1409e8060(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauStack_2a8) [16];
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined1 (*pauStack_288) [16];
  undefined1 (*pauStack_280) [16];
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 (*pauStack_248) [16];
  ulonglong uStack_240;
  longlong lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 (*pauStack_1c8) [16];
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 (*pauStack_180) [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined1 (*pauStack_148) [16];
  ulonglong uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  ulonglong uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 (*pauStack_d8) [16];
  undefined1 (*pauStack_d0) [16];
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 (*pauStack_98) [16];
  ulonglong uStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)*param_1;
  pdb_140a596f0(&pauStack_208,*param_5,&UNK_143031db8,0x15,&UNK_143031df8);
  uStack_51 = 1;
  pdb_141b241d0(&uStack_188,&UNK_143031e10,0x1a);
  if (SBORROW8(0,(longlong)uStack_188)) {
    pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_143031e30);
  }
  uStack_68 = puStack_118;
  uStack_60 = uStack_110;
  uStack_78 = uStack_128;
  uStack_70 = uStack_120;
  lStack_88 = (longlong)puStack_138;
  uStack_80 = uStack_130;
  pauStack_98 = pauStack_148;
  uStack_90 = uStack_140;
  uStack_a8 = uStack_158;
  uStack_a4 = uStack_154;
  uStack_b8 = (undefined4)uStack_168;
  uStack_b4 = uStack_168._4_4_;
  uStack_b0 = uStack_160;
  uStack_ac = uStack_15c;
  uStack_c0 = (undefined4)uStack_170;
  uStack_bc = uStack_170._4_4_;
  pauStack_d8 = uStack_188;
  pauStack_d0 = pauStack_180;
  uVar3 = *param_4;
  uVar4 = *param_2;
  uStack_51 = 1;
  pauVar8 = (undefined1 (*) [16])pdb_140b08d00(&pauStack_d8,&UNK_143031e48,7,uVar3,uVar4);
  uStack_51 = 1;
  puVar9 = (undefined8 *)pdb_140bf45b0(*param_3,&UNK_14331c928);
  if (puVar9 != (undefined8 *)0x0) {
    uStack_51 = 1;
    lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9);
    if (lVar10 != 0) {
      uStack_51 = 1;
      uStack_110 = pdb_141990df0(&pauStack_208,lVar2 + 0x10,lVar10);
      pauStack_d0 = pauStack_208;
      uStack_c8 = (ulonglong)pauStack_200;
      uStack_c0 = uStack_1f8;
      uStack_bc = uStack_1f4;
      uStack_b8 = uStack_1f0;
      uStack_b4 = uStack_1ec;
      uStack_b0 = uStack_1e8;
      uStack_ac = uStack_1e4;
      uStack_a8 = uStack_1e0;
      uStack_a4 = uStack_1dc;
      puStack_118 = (undefined *)CONCAT44(uStack_1d4,uStack_1d8);
      uStack_168 = (undefined1 (*) [16])0x0;
      uStack_160 = 0;
      uStack_188 = (undefined1 (*) [16])((ulonglong)uStack_188._4_4_ << 0x20);
      uStack_178 = (undefined *)_DAT_142e4e650;
      uStack_170 = _UNK_142e4e658;
      uStack_15c = 0x3f800000;
      uStack_158 = 0x3f800000;
      uStack_154 = 0x3f800000;
      uStack_150 = pauStack_d8;
      pauStack_148 = pauStack_208;
      puStack_138 = (undefined *)CONCAT44(uStack_1f4,uStack_1f8);
      uStack_140 = (ulonglong)pauStack_200;
      uStack_130 = CONCAT44(uStack_1ec,uStack_1f0);
      uStack_128 = CONCAT44(uStack_1e4,uStack_1e8);
      uStack_120 = CONCAT44(uStack_1dc,uStack_1e0);
      pcStack_108 = pdb_141b2db30;
      uStack_100 = 0;
      uStack_51 = 0;
      pauStack_180 = pauVar8;
      pdb_141620500(&pauStack_d8,param_6,&uStack_188,&UNK_143031e68);
      pdb_141b241d0(&uStack_188,&UNK_143031e80,0x2c);
      pauVar8 = _DAT_142e37950;
      if (SBORROW8(0,(longlong)uStack_188)) {
        pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_143031eb0);
      }
      uStack_68 = puStack_118;
      uStack_60 = uStack_110;
      uStack_78 = uStack_128;
      uStack_70 = uStack_120;
      lStack_88 = (longlong)puStack_138;
      uStack_80 = uStack_130;
      pauStack_98 = pauStack_148;
      uStack_90 = uStack_140;
      uStack_a8 = uStack_158;
      uStack_a4 = uStack_154;
      uStack_a0 = uStack_150;
      uStack_b8 = (undefined4)uStack_168;
      uStack_b4 = uStack_168._4_4_;
      uStack_b0 = uStack_160;
      uStack_ac = uStack_15c;
      uStack_c8._0_4_ = SUB84(uStack_178,0);
      uStack_c8._4_4_ = uStack_178._4_4_;
      uStack_c0 = (undefined4)uStack_170;
      uStack_bc = uStack_170._4_4_;
      pauStack_d8 = uStack_188;
      pauStack_d0 = pauStack_180;
      pauStack_208 = _DAT_142e37950;
      pauStack_200._0_4_ = 0x3f800000;
      if (puStack_138 != (undefined *)0x0) {
        auVar1 = *uStack_150;
        uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
        pauVar11 = uStack_150;
        pauVar12 = uStack_150;
        while (uVar7 = uVar5 ^ 0xffff, uVar7 == 0) {
          pauVar12 = pauVar12 + 1;
          auVar1 = *pauVar12;
          pauVar11 = pauVar11 + -0x38;
          uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
        }
        uVar6 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        pdb_1415e43a0(&uStack_188,&pauStack_208,
                      *(undefined8 *)((longlong)pauVar11 + (ulonglong)uVar6 * -0x38 + -8));
        pdb_140c93200(&pauStack_d8,&DAT_143045cc8,0xc,&uStack_188);
      }
      uStack_188 = pauStack_d8;
      pauStack_180 = pauStack_d0;
      uStack_178._0_4_ = (undefined4)uStack_c8;
      uStack_178._4_4_ = uStack_c8._4_4_;
      uStack_170._0_4_ = uStack_c0;
      uStack_170._4_4_ = uStack_bc;
      uStack_168._0_4_ = uStack_b8;
      uStack_168._4_4_ = uStack_b4;
      uStack_160 = uStack_b0;
      uStack_15c = uStack_ac;
      uStack_158 = uStack_a8;
      uStack_154 = uStack_a4;
      uStack_150._0_4_ = SUB84(uStack_a0,0);
      uStack_150._4_4_ = uStack_a0._4_4_;
      pauStack_148 = pauStack_98;
      uStack_140 = uStack_90;
      puStack_138 = (undefined *)lStack_88;
      uStack_130 = uStack_80;
      uStack_128 = uStack_78;
      uStack_120 = uStack_70;
      puStack_118 = (undefined *)uStack_68;
      uStack_110 = uStack_60;
      pdb_140b08d00(&uStack_188,&UNK_143031ec8,0x19,uVar3,uVar4);
      pdb_141b241d0(&uStack_188,&UNK_143031ee1,0x21);
      if (SBORROW8(0,(longlong)uStack_188)) {
        pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_143031f08);
      }
      uStack_68 = puStack_118;
      uStack_60 = uStack_110;
      uStack_78 = uStack_128;
      uStack_70 = uStack_120;
      lStack_88 = (longlong)puStack_138;
      uStack_80 = uStack_130;
      pauStack_98 = pauStack_148;
      uStack_90 = uStack_140;
      uStack_a8 = uStack_158;
      uStack_a4 = uStack_154;
      uStack_a0 = (undefined1 (*) [16])CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
      uStack_b8 = (undefined4)uStack_168;
      uStack_b4 = uStack_168._4_4_;
      uStack_b0 = uStack_160;
      uStack_ac = uStack_15c;
      uStack_c8 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
      uStack_c0 = (undefined4)uStack_170;
      uStack_bc = uStack_170._4_4_;
      pauStack_d8 = uStack_188;
      pauStack_d0 = pauStack_180;
      pdb_140b08d00(&pauStack_d8,&UNK_143031f20,0xe,uVar3,uVar4);
      pdb_141b241d0(&uStack_188,&UNK_143031f2e,0x28);
      if (SBORROW8(0,(longlong)uStack_188)) {
        pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_143031f58);
      }
      uStack_68 = puStack_118;
      uStack_60 = uStack_110;
      uStack_78 = uStack_128;
      uStack_70 = uStack_120;
      lStack_88 = (longlong)puStack_138;
      uStack_80 = uStack_130;
      pauStack_98 = pauStack_148;
      uStack_90 = uStack_140;
      uStack_a8 = uStack_158;
      uStack_a4 = uStack_154;
      uStack_a0 = (undefined1 (*) [16])CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
      uStack_b8 = (undefined4)uStack_168;
      uStack_b4 = uStack_168._4_4_;
      uStack_b0 = uStack_160;
      uStack_ac = uStack_15c;
      uStack_c8 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
      uStack_c0 = (undefined4)uStack_170;
      uStack_bc = uStack_170._4_4_;
      pauStack_d8 = uStack_188;
      pauStack_d0 = pauStack_180;
      pdb_140b08d00(&pauStack_d8,&UNK_143031f70,0x15,uVar3,uVar4);
      pdb_141b241d0(&uStack_188,&UNK_143031f85,0x1b);
      if (SBORROW8(0,(longlong)uStack_188)) {
        pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_143031fa0);
      }
      uStack_68 = puStack_118;
      uStack_60 = uStack_110;
      uStack_78 = uStack_128;
      uStack_70 = uStack_120;
      lStack_88 = (longlong)puStack_138;
      uStack_80 = uStack_130;
      pauStack_98 = pauStack_148;
      uStack_90 = uStack_140;
      uStack_a8 = uStack_158;
      uStack_a4 = uStack_154;
      uStack_a0 = (undefined1 (*) [16])CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
      uStack_b8 = (undefined4)uStack_168;
      uStack_b4 = uStack_168._4_4_;
      uStack_b0 = uStack_160;
      uStack_ac = uStack_15c;
      uStack_c8 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
      uStack_c0 = (undefined4)uStack_170;
      uStack_bc = uStack_170._4_4_;
      pauStack_d8 = uStack_188;
      pauStack_d0 = pauStack_180;
      pdb_140b08d00(&pauStack_d8,&UNK_143031fb8,0xb,uVar3,uVar4);
      pdb_141b241d0(&uStack_188,&UNK_143031fc3,0x25);
      if (SBORROW8(0,(longlong)uStack_188)) {
        pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_143031fe8);
      }
      uStack_68 = puStack_118;
      uStack_60 = uStack_110;
      uStack_78 = uStack_128;
      uStack_70 = uStack_120;
      lStack_88 = (longlong)puStack_138;
      uStack_80 = uStack_130;
      pauStack_98 = pauStack_148;
      uStack_90 = uStack_140;
      uStack_a8 = uStack_158;
      uStack_a4 = uStack_154;
      uStack_a0 = (undefined1 (*) [16])CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
      uStack_b8 = (undefined4)uStack_168;
      uStack_b4 = uStack_168._4_4_;
      uStack_b0 = uStack_160;
      uStack_ac = uStack_15c;
      uStack_c8 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
      uStack_c0 = (undefined4)uStack_170;
      uStack_bc = uStack_170._4_4_;
      pauStack_d8 = uStack_188;
      pauStack_d0 = pauStack_180;
      pdb_140b08d00(&pauStack_d8,&UNK_143032000,6,uVar3,uVar4);
      pdb_141b241d0(&uStack_188,&UNK_143032006,0x26);
      if (SBORROW8(0,(longlong)uStack_188)) {
        pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_143032030);
      }
      uStack_68 = puStack_118;
      uStack_60 = uStack_110;
      uStack_78 = uStack_128;
      uStack_70 = uStack_120;
      lStack_88 = (longlong)puStack_138;
      uStack_80 = uStack_130;
      pauStack_98 = pauStack_148;
      uStack_90 = uStack_140;
      uStack_a8 = uStack_158;
      uStack_a4 = uStack_154;
      uStack_a0 = (undefined1 (*) [16])CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
      uStack_b8 = (undefined4)uStack_168;
      uStack_b4 = uStack_168._4_4_;
      uStack_b0 = uStack_160;
      uStack_ac = uStack_15c;
      uStack_c8 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
      uStack_c0 = (undefined4)uStack_170;
      uStack_bc = uStack_170._4_4_;
      pauStack_d8 = uStack_188;
      pauStack_d0 = pauStack_180;
      pdb_140b08d00(&pauStack_d8,&UNK_143032048,0x13,uVar3,uVar4);
      pdb_141b241d0(&uStack_188,&UNK_14303205b,0x28);
      if (SBORROW8(0,(longlong)uStack_188)) {
        pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_143032088);
      }
      uStack_68 = puStack_118;
      uStack_60 = uStack_110;
      uStack_78 = uStack_128;
      uStack_70 = uStack_120;
      lStack_88 = (longlong)puStack_138;
      uStack_80 = uStack_130;
      pauStack_98 = pauStack_148;
      uStack_90 = uStack_140;
      uStack_a8 = uStack_158;
      uStack_a4 = uStack_154;
      uStack_a0 = (undefined1 (*) [16])CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
      uStack_b8 = (undefined4)uStack_168;
      uStack_b4 = uStack_168._4_4_;
      uStack_b0 = uStack_160;
      uStack_ac = uStack_15c;
      uStack_c8 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
      uStack_c0 = (undefined4)uStack_170;
      uStack_bc = uStack_170._4_4_;
      pauStack_d8 = uStack_188;
      pauStack_d0 = pauStack_180;
      pdb_140b08d00(&pauStack_d8,&UNK_1430320a0,0x15,uVar3,uVar4);
      pdb_141b241d0(&uStack_188,&UNK_1430320b5,0x28);
      if (!SBORROW8(0,(longlong)uStack_188)) {
        uStack_68 = puStack_118;
        uStack_60 = uStack_110;
        uStack_78 = uStack_128;
        uStack_70 = uStack_120;
        lStack_88 = (longlong)puStack_138;
        uStack_80 = uStack_130;
        pauStack_98 = pauStack_148;
        uStack_90 = uStack_140;
        uStack_a8 = uStack_158;
        uStack_a4 = uStack_154;
        uStack_a0 = (undefined1 (*) [16])CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
        uStack_b8 = (undefined4)uStack_168;
        uStack_b4 = uStack_168._4_4_;
        uStack_b0 = uStack_160;
        uStack_ac = uStack_15c;
        uStack_c8 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        uStack_c0 = (undefined4)uStack_170;
        uStack_bc = uStack_170._4_4_;
        pauStack_d8 = uStack_188;
        pauStack_d0 = pauStack_180;
        pdb_140b08d00(&pauStack_d8,&UNK_1430320f8,0x15,uVar3,uVar4);
        pdb_141b241d0(&uStack_188,&UNK_14303210d,0x24);
        if (SBORROW8(0,(longlong)uStack_188)) {
          pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_143032138);
        }
        uStack_68 = puStack_118;
        uStack_60 = uStack_110;
        uStack_78 = uStack_128;
        uStack_70 = uStack_120;
        lStack_88 = (longlong)puStack_138;
        uStack_80 = uStack_130;
        pauStack_98 = pauStack_148;
        uStack_90 = uStack_140;
        uStack_a8 = uStack_158;
        uStack_a4 = uStack_154;
        uStack_a0 = (undefined1 (*) [16])CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
        uStack_b8 = (undefined4)uStack_168;
        uStack_b4 = uStack_168._4_4_;
        uStack_b0 = uStack_160;
        uStack_ac = uStack_15c;
        uStack_c8 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        uStack_c0 = (undefined4)uStack_170;
        uStack_bc = uStack_170._4_4_;
        pauStack_d8 = uStack_188;
        pauStack_d0 = pauStack_180;
        pdb_140b08d00(&pauStack_d8,&UNK_143032150,0x11,uVar3,uVar4);
        pdb_141b241d0(&uStack_188,&UNK_14303210d,0x24);
        if (SBORROW8(0,(longlong)uStack_188)) {
          pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_143032168);
        }
        uStack_68 = puStack_118;
        uStack_60 = uStack_110;
        uStack_78 = uStack_128;
        uStack_70 = uStack_120;
        lStack_88 = (longlong)puStack_138;
        uStack_80 = uStack_130;
        pauStack_98 = pauStack_148;
        uStack_90 = uStack_140;
        uStack_a8 = uStack_158;
        uStack_a4 = uStack_154;
        uStack_a0 = (undefined1 (*) [16])CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
        uStack_b8 = (undefined4)uStack_168;
        uStack_b4 = uStack_168._4_4_;
        uStack_b0 = uStack_160;
        uStack_ac = uStack_15c;
        uStack_c8._0_4_ = (undefined4)uStack_178;
        uStack_c8._4_4_ = uStack_178._4_4_;
        uStack_c0 = (undefined4)uStack_170;
        uStack_bc = uStack_170._4_4_;
        pauStack_d8 = uStack_188;
        pauStack_d0 = pauStack_180;
        pauStack_208 = (undefined1 (*) [16])(ulonglong)_DAT_142e3c670;
        pauStack_200._0_4_ = 0;
        if (puStack_138 != (undefined *)0x0) {
          auVar1 = *uStack_a0;
          uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
          pauVar11 = uStack_a0;
          pauVar12 = uStack_a0;
          while (uVar7 = uVar5 ^ 0xffff, uVar7 == 0) {
            pauVar12 = pauVar12 + 1;
            auVar1 = *pauVar12;
            pauVar11 = pauVar11 + -0x38;
            uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
          }
          uVar6 = 0;
          for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          pdb_1415e43a0(&uStack_188,&pauStack_208,
                        *(undefined8 *)((longlong)pauVar11 + (ulonglong)uVar6 * -0x38 + -8));
          pdb_140c93200(&pauStack_d8,&DAT_143045cc8,0xc,&uStack_188);
        }
        uStack_188 = pauStack_d8;
        pauStack_180 = pauStack_d0;
        uStack_178._0_4_ = (undefined4)uStack_c8;
        uStack_178._4_4_ = uStack_c8._4_4_;
        uStack_170._0_4_ = uStack_c0;
        uStack_170._4_4_ = uStack_bc;
        uStack_168._0_4_ = uStack_b8;
        uStack_168._4_4_ = uStack_b4;
        uStack_160 = uStack_b0;
        uStack_15c = uStack_ac;
        uStack_158 = uStack_a8;
        uStack_154 = uStack_a4;
        uStack_150 = uStack_a0;
        pauStack_148 = pauStack_98;
        uStack_140 = uStack_90;
        puStack_138 = (undefined *)lStack_88;
        uStack_130 = uStack_80;
        uStack_128 = uStack_78;
        uStack_120 = uStack_70;
        puStack_118 = (undefined *)uStack_68;
        uStack_110 = uStack_60;
        pdb_140b08d00(&uStack_188,&UNK_143032180,0x15,uVar3,uVar4);
        pdb_141b241d0(&uStack_188,&UNK_143032195,0x2b);
        if (SBORROW8(0,(longlong)uStack_188)) {
          pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_1430321c0);
        }
        uStack_68 = puStack_118;
        uStack_60 = uStack_110;
        uStack_78 = uStack_128;
        uStack_70 = uStack_120;
        lStack_88 = (longlong)puStack_138;
        uStack_80 = uStack_130;
        pauStack_98 = pauStack_148;
        uStack_90 = uStack_140;
        uStack_a8 = uStack_158;
        uStack_a4 = uStack_154;
        uStack_a0 = uStack_150;
        uStack_b8 = (undefined4)uStack_168;
        uStack_b4 = uStack_168._4_4_;
        uStack_b0 = uStack_160;
        uStack_ac = uStack_15c;
        uStack_c8 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        uStack_c0 = (undefined4)uStack_170;
        uStack_bc = uStack_170._4_4_;
        pauStack_d8 = uStack_188;
        pauStack_d0 = pauStack_180;
        pdb_140b08d00(&pauStack_d8,&UNK_1430321d8,0x18,uVar3,uVar4);
        pauStack_d8 = _DAT_1430311a0;
        pauStack_d0 = (undefined1 (*) [16])_UNK_1430311a8;
        uStack_c8 = _DAT_1430311b0;
        pdb_140a9a270(&uStack_188,&pauStack_d8);
        pauStack_208 = _DAT_1430311c0;
        pauStack_200 = (undefined1 (*) [16])CONCAT44(pauStack_200._4_4_,0x3d75c28f);
        if (puStack_138 != (undefined *)0x0) {
          auVar1 = *uStack_150;
          uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
          pauVar11 = uStack_150;
          pauVar12 = uStack_150;
          while (uVar7 = uVar5 ^ 0xffff, uVar7 == 0) {
            pauVar12 = pauVar12 + 1;
            auVar1 = *pauVar12;
            pauVar11 = pauVar11 + -0x38;
            uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
          }
          uVar6 = 0;
          for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          pdb_1415e43a0(&pauStack_d8,&pauStack_208,
                        *(undefined8 *)((longlong)pauVar11 + (ulonglong)uVar6 * -0x38 + -8));
          pdb_140c93200(&uStack_188,&DAT_143045cc8,0xc,&pauStack_d8);
        }
        pauStack_d8 = uStack_188;
        pauStack_d0 = pauStack_180;
        uStack_c8 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        uStack_c0 = (undefined4)uStack_170;
        uStack_bc = uStack_170._4_4_;
        uStack_b8 = (undefined4)uStack_168;
        uStack_b4 = uStack_168._4_4_;
        uStack_b0 = uStack_160;
        uStack_ac = uStack_15c;
        uStack_a8 = uStack_158;
        uStack_a4 = uStack_154;
        uStack_a0 = uStack_150;
        pauStack_98 = pauStack_148;
        uStack_90 = uStack_140;
        lStack_88 = (longlong)puStack_138;
        uStack_80 = uStack_130;
        uStack_78 = uStack_128;
        uStack_70 = uStack_120;
        uStack_68 = puStack_118;
        uStack_60 = uStack_110;
        pdb_140b08d00(&pauStack_d8,&UNK_1430321f0,9,uVar3,uVar4);
        pdb_141b241d0(&uStack_188,&UNK_1430321f9,0x1d);
        if (!SBORROW8(0,(longlong)uStack_188)) {
          uStack_68 = puStack_118;
          uStack_60 = uStack_110;
          uStack_78 = uStack_128;
          uStack_70 = uStack_120;
          lStack_88 = (longlong)puStack_138;
          uStack_80 = uStack_130;
          pauStack_98 = pauStack_148;
          uStack_90 = uStack_140;
          uStack_a8 = uStack_158;
          uStack_a4 = uStack_154;
          uStack_a0._0_4_ = SUB84(uStack_150,0);
          uStack_a0._4_4_ = uStack_150._4_4_;
          uStack_b8 = (undefined4)uStack_168;
          uStack_b4 = uStack_168._4_4_;
          uStack_b0 = uStack_160;
          uStack_ac = uStack_15c;
          uStack_c8._0_4_ = (undefined4)uStack_178;
          uStack_c8._4_4_ = uStack_178._4_4_;
          uStack_c0 = (undefined4)uStack_170;
          uStack_bc = uStack_170._4_4_;
          pauStack_d8 = uStack_188;
          pauStack_d0 = pauStack_180;
          pdb_140b08d00(&pauStack_d8,&UNK_143032230,10,uVar3,uVar4);
          uStack_178 = &UNK_14303223a;
          uStack_170 = 0x12;
          uStack_168 = pauVar8;
          uStack_160 = 0x3f800000;
          uStack_158 = 0x4303224c;
          uStack_154 = 1;
          uStack_150 = (undefined1 (*) [16])0x10;
          pauStack_148 = (undefined1 (*) [16])(ulonglong)_DAT_142e36f28;
          uStack_140 = uStack_140 & 0xffffffff00000000;
          puStack_138 = &UNK_14303225c;
          uStack_130 = 0x11;
          uStack_128 = 0;
          uStack_120 = CONCAT44(uStack_120._4_4_,0x3f800000);
          puStack_118 = &UNK_14303226d;
          uStack_110 = 0x12;
          pcStack_108 = _DAT_142e378e0;
          uStack_100 = uStack_100 & 0xffffffff00000000;
          puStack_f8 = &UNK_14303227f;
          uStack_f0 = 0x11;
          uStack_e8 = _DAT_142e3c660;
          uStack_e0 = 0x3dcccccd;
          pdb_140a9b770(&pauStack_d8,0,_DAT_142e36f28);
          if (!SBORROW8(0,(longlong)pauStack_d8)) {
            uStack_198 = uStack_68;
            uStack_190 = uStack_60;
            uStack_1a8 = uStack_78;
            uStack_1a0 = uStack_70;
            lStack_1b8 = lStack_88;
            uStack_1b0 = uStack_80;
            pauStack_1c8 = pauStack_98;
            uStack_1c0 = uStack_90;
            uStack_1d8 = uStack_a8;
            uStack_1d4 = uStack_a4;
            uStack_1d0 = (undefined4)uStack_a0;
            uStack_1cc = uStack_a0._4_4_;
            uStack_1e8 = uStack_b8;
            uStack_1e4 = uStack_b4;
            uStack_1e0 = uStack_b0;
            uStack_1dc = uStack_ac;
            uStack_1f8 = (undefined4)uStack_c8;
            uStack_1f4 = uStack_c8._4_4_;
            uStack_1f0 = uStack_c0;
            uStack_1ec = uStack_bc;
            pauStack_208 = pauStack_d8;
            pauStack_200 = pauStack_d0;
            if (lStack_88 != 0) {
              pauVar8 = (undefined1 (*) [16])CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
              auVar1 = *pauVar8;
              uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
              pauVar11 = pauVar8;
              while (uVar7 = uVar5 ^ 0xffff, uVar7 == 0) {
                pauVar11 = pauVar11 + 1;
                auVar1 = *pauVar11;
                pauVar8 = pauVar8 + -0x38;
                uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
              }
              uVar6 = 0;
              for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              pdb_1415e43a0(&pauStack_d8,&uStack_168,
                            *(undefined8 *)((longlong)pauVar8 + (ulonglong)uVar6 * -0x38 + -8));
              pdb_140c93200(&pauStack_208,&DAT_143045cc8,0xc,&pauStack_d8);
            }
            pauStack_288 = pauStack_208;
            pauStack_280 = pauStack_200;
            uStack_278 = uStack_1f8;
            uStack_274 = uStack_1f4;
            uStack_270 = uStack_1f0;
            uStack_26c = uStack_1ec;
            uStack_268 = uStack_1e8;
            uStack_264 = uStack_1e4;
            uStack_260 = uStack_1e0;
            uStack_25c = uStack_1dc;
            uStack_258 = uStack_1d8;
            uStack_254 = uStack_1d4;
            uStack_250 = uStack_1d0;
            uStack_24c = uStack_1cc;
            pauStack_248 = pauStack_1c8;
            uStack_240 = uStack_1c0;
            lStack_238 = lStack_1b8;
            uStack_230 = uStack_1b0;
            uStack_228 = uStack_1a8;
            uStack_220 = uStack_1a0;
            uStack_218 = uStack_198;
            uStack_210 = uStack_190;
            pdb_140b08d00(&pauStack_288,&UNK_14303223a,0x12,uVar3,uVar4);
            pdb_140a9b770(&pauStack_d8,0,_DAT_142e36f28);
            if (!SBORROW8(0,(longlong)pauStack_d8)) {
              uStack_198 = uStack_68;
              uStack_190 = uStack_60;
              uStack_1a8 = uStack_78;
              uStack_1a0 = uStack_70;
              lStack_1b8 = lStack_88;
              uStack_1b0 = uStack_80;
              pauStack_1c8 = pauStack_98;
              uStack_1c0 = uStack_90;
              uStack_1d8 = uStack_a8;
              uStack_1d4 = uStack_a4;
              uStack_1d0 = (undefined4)uStack_a0;
              uStack_1cc = uStack_a0._4_4_;
              uStack_1e8 = uStack_b8;
              uStack_1e4 = uStack_b4;
              uStack_1e0 = uStack_b0;
              uStack_1dc = uStack_ac;
              uStack_1f8 = (undefined4)uStack_c8;
              uStack_1f4 = uStack_c8._4_4_;
              uStack_1f0 = uStack_c0;
              uStack_1ec = uStack_bc;
              pauStack_208 = pauStack_d8;
              pauStack_200 = pauStack_d0;
              if (lStack_88 != 0) {
                pauVar8 = (undefined1 (*) [16])CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
                auVar1 = *pauVar8;
                uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
                pauVar11 = pauVar8;
                while (uVar7 = uVar5 ^ 0xffff, uVar7 == 0) {
                  pauVar11 = pauVar11 + 1;
                  auVar1 = *pauVar11;
                  pauVar8 = pauVar8 + -0x38;
                  uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
                }
                uVar6 = 0;
                for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar6 = uVar6 + 1;
                }
                pdb_1415e43a0(&pauStack_d8,&pauStack_148,
                              *(undefined8 *)((longlong)pauVar8 + (ulonglong)uVar6 * -0x38 + -8));
                pdb_140c93200(&pauStack_208,&DAT_143045cc8,0xc,&pauStack_d8);
              }
              pauStack_288 = pauStack_208;
              pauStack_280 = pauStack_200;
              uStack_278 = uStack_1f8;
              uStack_274 = uStack_1f4;
              uStack_270 = uStack_1f0;
              uStack_26c = uStack_1ec;
              uStack_268 = uStack_1e8;
              uStack_264 = uStack_1e4;
              uStack_260 = uStack_1e0;
              uStack_25c = uStack_1dc;
              uStack_258 = uStack_1d8;
              uStack_254 = uStack_1d4;
              uStack_250 = uStack_1d0;
              uStack_24c = uStack_1cc;
              pauStack_248 = pauStack_1c8;
              uStack_240 = uStack_1c0;
              lStack_238 = lStack_1b8;
              uStack_230 = uStack_1b0;
              uStack_228 = uStack_1a8;
              uStack_220 = uStack_1a0;
              uStack_218 = uStack_198;
              uStack_210 = uStack_190;
              pdb_140b08d00(&pauStack_288,&UNK_14303224c,0x10,uVar3,uVar4);
              pdb_140a9b770(&pauStack_d8,0,_DAT_142e36f28);
              if (!SBORROW8(0,(longlong)pauStack_d8)) {
                uStack_198 = uStack_68;
                uStack_190 = uStack_60;
                uStack_1a8 = uStack_78;
                uStack_1a0 = uStack_70;
                lStack_1b8 = lStack_88;
                uStack_1b0 = uStack_80;
                pauStack_1c8 = pauStack_98;
                uStack_1c0 = uStack_90;
                uStack_1d8 = uStack_a8;
                uStack_1d4 = uStack_a4;
                uStack_1d0 = (undefined4)uStack_a0;
                uStack_1cc = uStack_a0._4_4_;
                uStack_1e8 = uStack_b8;
                uStack_1e4 = uStack_b4;
                uStack_1e0 = uStack_b0;
                uStack_1dc = uStack_ac;
                uStack_1f8 = (undefined4)uStack_c8;
                uStack_1f4 = uStack_c8._4_4_;
                uStack_1f0 = uStack_c0;
                uStack_1ec = uStack_bc;
                pauStack_208 = pauStack_d8;
                pauStack_200 = pauStack_d0;
                if (lStack_88 != 0) {
                  pauVar8 = (undefined1 (*) [16])CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
                  auVar1 = *pauVar8;
                  uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
                  pauVar11 = pauVar8;
                  while (uVar7 = uVar5 ^ 0xffff, uVar7 == 0) {
                    pauVar11 = pauVar11 + 1;
                    auVar1 = *pauVar11;
                    pauVar8 = pauVar8 + -0x38;
                    uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
                  }
                  uVar6 = 0;
                  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                    uVar6 = uVar6 + 1;
                  }
                  pdb_1415e43a0(&pauStack_d8,&uStack_128,
                                *(undefined8 *)((longlong)pauVar8 + (ulonglong)uVar6 * -0x38 + -8));
                  pdb_140c93200(&pauStack_208,&DAT_143045cc8,0xc,&pauStack_d8);
                }
                pauStack_288 = pauStack_208;
                pauStack_280 = pauStack_200;
                uStack_278 = uStack_1f8;
                uStack_274 = uStack_1f4;
                uStack_270 = uStack_1f0;
                uStack_26c = uStack_1ec;
                uStack_268 = uStack_1e8;
                uStack_264 = uStack_1e4;
                uStack_260 = uStack_1e0;
                uStack_25c = uStack_1dc;
                uStack_258 = uStack_1d8;
                uStack_254 = uStack_1d4;
                uStack_250 = uStack_1d0;
                uStack_24c = uStack_1cc;
                pauStack_248 = pauStack_1c8;
                uStack_240 = uStack_1c0;
                lStack_238 = lStack_1b8;
                uStack_230 = uStack_1b0;
                uStack_228 = uStack_1a8;
                uStack_220 = uStack_1a0;
                uStack_218 = uStack_198;
                uStack_210 = uStack_190;
                pdb_140b08d00(&pauStack_288,&UNK_14303225c,0x11,uVar3,uVar4);
                pdb_140a9b770(&pauStack_d8,0,_DAT_142e36f28);
                if (!SBORROW8(0,(longlong)pauStack_d8)) {
                  uStack_198 = uStack_68;
                  uStack_190 = uStack_60;
                  uStack_1a8 = uStack_78;
                  uStack_1a0 = uStack_70;
                  lStack_1b8 = lStack_88;
                  uStack_1b0 = uStack_80;
                  pauStack_1c8 = pauStack_98;
                  uStack_1c0 = uStack_90;
                  uStack_1d8 = uStack_a8;
                  uStack_1d4 = uStack_a4;
                  uStack_1d0 = (undefined4)uStack_a0;
                  uStack_1cc = uStack_a0._4_4_;
                  uStack_1e8 = uStack_b8;
                  uStack_1e4 = uStack_b4;
                  uStack_1e0 = uStack_b0;
                  uStack_1dc = uStack_ac;
                  uStack_1f8 = (undefined4)uStack_c8;
                  uStack_1f4 = uStack_c8._4_4_;
                  uStack_1f0 = uStack_c0;
                  uStack_1ec = uStack_bc;
                  pauStack_208 = pauStack_d8;
                  pauStack_200 = pauStack_d0;
                  if (lStack_88 != 0) {
                    pauVar8 = (undefined1 (*) [16])CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
                    auVar1 = *pauVar8;
                    uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
                    pauVar11 = pauVar8;
                    while (uVar7 = uVar5 ^ 0xffff, uVar7 == 0) {
                      pauVar11 = pauVar11 + 1;
                      auVar1 = *pauVar11;
                      pauVar8 = pauVar8 + -0x38;
                      uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
                    }
                    uVar6 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                      uVar6 = uVar6 + 1;
                    }
                    pdb_1415e43a0(&pauStack_d8,&pcStack_108,
                                  *(undefined8 *)((longlong)pauVar8 + (ulonglong)uVar6 * -0x38 + -8)
                                 );
                    pdb_140c93200(&pauStack_208,&DAT_143045cc8,0xc,&pauStack_d8);
                  }
                  pauStack_288 = pauStack_208;
                  pauStack_280 = pauStack_200;
                  uStack_278 = uStack_1f8;
                  uStack_274 = uStack_1f4;
                  uStack_270 = uStack_1f0;
                  uStack_26c = uStack_1ec;
                  uStack_268 = uStack_1e8;
                  uStack_264 = uStack_1e4;
                  uStack_260 = uStack_1e0;
                  uStack_25c = uStack_1dc;
                  uStack_258 = uStack_1d8;
                  uStack_254 = uStack_1d4;
                  uStack_250 = uStack_1d0;
                  uStack_24c = uStack_1cc;
                  pauStack_248 = pauStack_1c8;
                  uStack_240 = uStack_1c0;
                  lStack_238 = lStack_1b8;
                  uStack_230 = uStack_1b0;
                  uStack_228 = uStack_1a8;
                  uStack_220 = uStack_1a0;
                  uStack_218 = uStack_198;
                  uStack_210 = uStack_190;
                  pdb_140b08d00(&pauStack_288,&UNK_14303226d,0x12,uVar3,uVar4);
                  pdb_140a9b770(&pauStack_d8,0,_DAT_142e36f28);
                  if (!SBORROW8(0,(longlong)pauStack_d8)) {
                    uStack_198 = uStack_68;
                    uStack_190 = uStack_60;
                    uStack_1a8 = uStack_78;
                    uStack_1a0 = uStack_70;
                    lStack_1b8 = lStack_88;
                    uStack_1b0 = uStack_80;
                    pauStack_1c8 = pauStack_98;
                    uStack_1c0 = uStack_90;
                    uStack_1d8 = uStack_a8;
                    uStack_1d4 = uStack_a4;
                    uStack_1d0 = (undefined4)uStack_a0;
                    uStack_1cc = uStack_a0._4_4_;
                    uStack_1e8 = uStack_b8;
                    uStack_1e4 = uStack_b4;
                    uStack_1e0 = uStack_b0;
                    uStack_1dc = uStack_ac;
                    uStack_1f8 = (undefined4)uStack_c8;
                    uStack_1f4 = uStack_c8._4_4_;
                    uStack_1f0 = uStack_c0;
                    uStack_1ec = uStack_bc;
                    pauStack_208 = pauStack_d8;
                    pauStack_200 = pauStack_d0;
                    if (lStack_88 != 0) {
                      pauVar8 = (undefined1 (*) [16])CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0)
                      ;
                      auVar1 = *pauVar8;
                      uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
                      pauVar11 = pauVar8;
                      while (uVar7 = uVar5 ^ 0xffff, uVar7 == 0) {
                        pauVar11 = pauVar11 + 1;
                        auVar1 = *pauVar11;
                        pauVar8 = pauVar8 + -0x38;
                        uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
                      }
                      uVar6 = 0;
                      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                        uVar6 = uVar6 + 1;
                      }
                      pdb_1415e43a0(&pauStack_d8,&uStack_e8,
                                    *(undefined8 *)
                                     ((longlong)pauVar8 + (ulonglong)uVar6 * -0x38 + -8));
                      pdb_140c93200(&pauStack_208,&DAT_143045cc8,0xc,&pauStack_d8);
                    }
                    pauStack_288 = pauStack_208;
                    pauStack_280 = pauStack_200;
                    uStack_278 = uStack_1f8;
                    uStack_274 = uStack_1f4;
                    uStack_270 = uStack_1f0;
                    uStack_26c = uStack_1ec;
                    uStack_268 = uStack_1e8;
                    uStack_264 = uStack_1e4;
                    uStack_260 = uStack_1e0;
                    uStack_25c = uStack_1dc;
                    uStack_258 = uStack_1d8;
                    uStack_254 = uStack_1d4;
                    uStack_250 = uStack_1d0;
                    uStack_24c = uStack_1cc;
                    pauStack_248 = pauStack_1c8;
                    uStack_240 = uStack_1c0;
                    lStack_238 = lStack_1b8;
                    uStack_230 = uStack_1b0;
                    uStack_228 = uStack_1a8;
                    uStack_220 = uStack_1a0;
                    uStack_218 = uStack_198;
                    uStack_210 = uStack_190;
                    pdb_140b08d00(&pauStack_288,&UNK_14303227f,0x11,uVar3,uVar4);
                    return;
                  }
                }
              }
            }
          }
          uStack_298 = CONCAT44(uStack_bc,uStack_c0);
          pauStack_2a8 = pauStack_d0;
          uStack_2a0 = (undefined4)uStack_c8;
          uStack_29c = uStack_c8._4_4_;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_2a8,&UNK_143032aa0,&UNK_143032290);
        }
        pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_143032218);
      }
      pauStack_d8 = pauStack_180;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143032ac0,0x2b,&pauStack_d8,&UNK_143032b30,&UNK_1430320e0);
    }
  }
  uStack_51 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143031e50);
}

