// VA 0x140b0f540, PDB extent 2800 bytes
// country_core::startup::startup_ivy::startup_ivy
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_ivy.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_ivy::startup_ivy
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_ivy.rs
   Extent: 2800 */

void pdb_140b0f540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 (*pauVar16) [16];
  ulonglong uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulonglong uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  ulonglong uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined1 (*pauStack_c0) [16];
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_178 = _DAT_143054950;
  uStack_170 = _UNK_143054958;
  uStack_168 = _DAT_143054960;
  pdb_140a9a270(&uStack_f8,&uStack_178);
  uStack_1c0 = (ulonglong)_DAT_142e36f28;
  uStack_1b8 = 0;
  if (uStack_a8 != 0) {
    auVar1 = *pauStack_c0;
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
            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
    pauVar16 = pauStack_c0;
    while (uVar7 = uVar5 ^ 0xffff, uVar7 == 0) {
      pauVar16 = pauVar16 + 1;
      auVar1 = *pauVar16;
      pauStack_c0 = pauStack_c0 + -0x38;
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
    pdb_1415e43a0(&uStack_178,&uStack_1c0,
                  *(undefined8 *)((longlong)pauStack_c0 + (ulonglong)uVar6 * -0x38 + -8));
    pdb_140c93200(&uStack_f8,&DAT_143045cc8,0xc,&uStack_178);
  }
  uStack_170 = uStack_f0;
  uStack_160 = (undefined4)uStack_e0;
  uStack_15c = uStack_e0._4_4_;
  uStack_158 = (undefined4)uStack_d8;
  uStack_154 = uStack_d8._4_4_;
  uStack_150 = uStack_d0;
  uStack_14c = (undefined4)uStack_cc;
  uStack_148 = uStack_cc._4_4_;
  uStack_144 = uStack_c4;
  uStack_138 = uStack_b8;
  uStack_130 = uStack_b0;
  lStack_128 = uStack_a8;
  uStack_120 = uStack_a0;
  uStack_118 = uStack_98;
  uStack_110 = uStack_90;
  uStack_108 = uStack_88;
  uStack_100 = uStack_80;
  uVar14 = *param_3;
  uVar15 = *param_2;
  pdb_140b08d00(&uStack_178,&UNK_143054a40,0xe,uVar14,uVar15);
  pdb_141b241d0(&uStack_f8,&UNK_143054a4e,0x1d);
  if (!SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
    uStack_108 = uStack_88;
    uStack_100 = uStack_80;
    uStack_118 = uStack_98;
    uStack_110 = uStack_90;
    lStack_128 = uStack_a8;
    uStack_120 = uStack_a0;
    uStack_138 = uStack_b8;
    uStack_130 = uStack_b0;
    uStack_178 = CONCAT44(uStack_f4,uStack_f8);
    uStack_148 = uStack_cc._4_4_;
    uStack_144 = uStack_c4;
    uStack_158 = (undefined4)uStack_d8;
    uStack_154 = uStack_d8._4_4_;
    uStack_150 = uStack_d0;
    uStack_14c = (undefined4)uStack_cc;
    uStack_168._0_4_ = (undefined4)uStack_e8;
    uStack_168._4_4_ = uStack_e8._4_4_;
    uStack_160 = (undefined4)uStack_e0;
    uStack_15c = uStack_e0._4_4_;
    uStack_170 = uStack_f0;
    uVar9 = pdb_140b08d00(&uStack_178,&UNK_143054ab8,10,uVar14,uVar15);
    uStack_188 = *param_6;
    pdb_140a596f0(&uStack_178,uStack_188,&UNK_143054ac2,0x25,&UNK_143054ae8);
    plVar2 = (longlong *)*param_1;
    lVar3 = *plVar2;
    uStack_180 = *param_4;
    uStack_61 = 1;
    puVar10 = (undefined8 *)pdb_140bf45b0(uStack_180,&UNK_14331ca00);
    if (puVar10 != (undefined8 *)0x0) {
      uStack_61 = 1;
      lVar11 = (**(code **)(puVar10[1] + 0x18))(*puVar10);
      if (lVar11 != 0) {
        uVar4 = *param_5;
        uStack_61 = 1;
        uVar12 = pdb_140df4400(&UNK_143054b18,0x10);
        uStack_61 = 1;
        uVar12 = pdb_140a2e580(uVar4,uVar12);
        uStack_61 = 1;
        uStack_80 = pdb_1419910b0(&uStack_178,lVar3 + 0x10,lVar11,uVar12);
        uVar8 = _UNK_142e4e658;
        uVar12 = _DAT_142e4e650;
        uStack_88 = CONCAT44(uStack_144,uStack_148);
        uStack_98 = CONCAT44(uStack_154,uStack_158);
        uStack_90 = CONCAT44(uStack_14c,uStack_150);
        uStack_a8 = CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
        uStack_a0 = CONCAT44(uStack_15c,uStack_160);
        uStack_b8 = uStack_178;
        uStack_b0 = uStack_170;
        uStack_f8 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e8 = _DAT_142e4e650;
        uStack_e0 = _UNK_142e4e658;
        uStack_cc = 0x3f8000003f800000;
        uStack_c4 = 0x3f800000;
        pcStack_78 = pdb_140b10030;
        uStack_70 = 0;
        uStack_61 = 0;
        uStack_f0 = uVar9;
        pdb_14161c000(&uStack_1c0,param_7,&uStack_f8,&UNK_143054b28);
        pdb_141b241d0(&uStack_f8,&UNK_143054b40,0x1b);
        if (SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
          uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143055320,0x2b,&uStack_178,&UNK_143055300,&UNK_143054b60);
        }
        uStack_108 = uStack_88;
        uStack_100 = uStack_80;
        uStack_118 = uStack_98;
        uStack_110 = uStack_90;
        lStack_128 = uStack_a8;
        uStack_120 = uStack_a0;
        uStack_138 = uStack_b8;
        uStack_130 = uStack_b0;
        uStack_178 = CONCAT44(uStack_f4,uStack_f8);
        uStack_148 = uStack_cc._4_4_;
        uStack_144 = uStack_c4;
        uStack_158 = (undefined4)uStack_d8;
        uStack_154 = uStack_d8._4_4_;
        uStack_150 = uStack_d0;
        uStack_14c = (undefined4)uStack_cc;
        uStack_168 = uStack_e8;
        uStack_160 = (undefined4)uStack_e0;
        uStack_15c = uStack_e0._4_4_;
        uStack_170 = uStack_f0;
        uVar9 = pdb_140b08d00(&uStack_178,&UNK_143054b78,8,uVar14,uVar15);
        pdb_140a596f0(&uStack_1c0,uStack_188,&UNK_143054b80,0x23,&UNK_143054ba8);
        lVar3 = *plVar2;
        uStack_62 = 1;
        uVar13 = pdb_140df4400(&UNK_143054bc0,0x14);
        uStack_62 = 1;
        uVar13 = pdb_140a2e580(uVar4,uVar13);
        uStack_62 = 1;
        puVar10 = (undefined8 *)pdb_140bf45b0(uStack_180,&UNK_14331c8c0);
        if (puVar10 != (undefined8 *)0x0) {
          uStack_62 = 1;
          lVar11 = (**(code **)(puVar10[1] + 0x18))(*puVar10);
          if (lVar11 != 0) {
            uStack_f8 = 0;
            uStack_62 = 1;
            uStack_f0 = uVar13;
            uStack_e8 = lVar11;
            uStack_80 = pdb_141991d30(&uStack_1c0,lVar3 + 0x10,&uStack_f8);
            uStack_168 = CONCAT44(uStack_1b4,uStack_1b8);
            uStack_170 = uStack_1c0;
            uStack_160 = uStack_1b0;
            uStack_15c = uStack_1ac;
            uStack_158 = uStack_1a8;
            uStack_154 = uStack_1a4;
            uStack_150 = uStack_1a0;
            uStack_14c = uStack_19c;
            uStack_148 = uStack_198;
            uStack_144 = uStack_194;
            uStack_140 = uStack_190;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_f8 = 0;
            uStack_e8 = uVar12;
            uStack_e0 = uVar8;
            uStack_cc = 0x3f8000003f800000;
            uStack_c4 = 0x3f800000;
            pauStack_c0 = (undefined1 (*) [16])uStack_178;
            uStack_b8 = uStack_1c0;
            uStack_a8 = CONCAT44(uStack_1ac,uStack_1b0);
            uStack_a0 = CONCAT44(uStack_1a4,uStack_1a8);
            uStack_98 = CONCAT44(uStack_19c,uStack_1a0);
            uStack_90 = CONCAT44(uStack_194,uStack_198);
            uStack_88 = uStack_190;
            pcStack_78 = pdb_141b2d020;
            uStack_70 = 0;
            uStack_62 = 0;
            uStack_f0 = uVar9;
            uStack_b0 = uStack_168;
            pdb_14161c000(&uStack_178,param_7,&uStack_f8,&UNK_143054bf0);
            pdb_141b241d0(&uStack_f8,&UNK_143054c08,0x1d);
            if (SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
              uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143055320,0x2b,&uStack_178,&UNK_143055300,&UNK_143054c28);
            }
            uStack_108 = uStack_88;
            uStack_100 = uStack_80;
            uStack_118 = uStack_98;
            uStack_110 = uStack_90;
            lStack_128 = uStack_a8;
            uStack_120 = uStack_a0;
            uStack_138 = uStack_b8;
            uStack_130 = uStack_b0;
            uStack_178 = CONCAT44(uStack_f4,uStack_f8);
            uStack_148 = uStack_cc._4_4_;
            uStack_144 = uStack_c4;
            uStack_140 = pauStack_c0;
            uStack_158 = (undefined4)uStack_d8;
            uStack_154 = uStack_d8._4_4_;
            uStack_150 = uStack_d0;
            uStack_14c = (undefined4)uStack_cc;
            uStack_168 = uStack_e8;
            uStack_160 = (undefined4)uStack_e0;
            uStack_15c = uStack_e0._4_4_;
            uStack_170 = uStack_f0;
            uVar14 = pdb_140b08d00(&uStack_178,&UNK_143054c40,10,uVar14,uVar15);
            pdb_140a596f0(&uStack_1c0,uStack_188,&UNK_143054b80,0x23,&UNK_143054c50);
            lVar3 = *plVar2;
            uStack_63 = 1;
            uVar15 = pdb_140df4400(&UNK_143054c68,0x10);
            uStack_63 = 1;
            uVar15 = pdb_140a2e580(uVar4,uVar15);
            uStack_63 = 1;
            puVar10 = (undefined8 *)pdb_140bf45b0(uStack_180,&UNK_14331c968);
            if (puVar10 != (undefined8 *)0x0) {
              uStack_63 = 1;
              lVar11 = (**(code **)(puVar10[1] + 0x18))(*puVar10);
              if (lVar11 != 0) {
                uStack_f8 = 1;
                uStack_63 = 1;
                uStack_f0 = uVar15;
                uStack_e8 = lVar11;
                uStack_80 = pdb_141991d30(&uStack_1c0,lVar3 + 0x10,&uStack_f8);
                uStack_168 = CONCAT44(uStack_1b4,uStack_1b8);
                uStack_170 = uStack_1c0;
                uStack_160 = uStack_1b0;
                uStack_15c = uStack_1ac;
                uStack_158 = uStack_1a8;
                uStack_154 = uStack_1a4;
                uStack_150 = uStack_1a0;
                uStack_14c = uStack_19c;
                uStack_148 = uStack_198;
                uStack_144 = uStack_194;
                uStack_140 = uStack_190;
                uStack_d8 = 0;
                uStack_d0 = 0;
                uStack_f8 = 0;
                uStack_e8 = uVar12;
                uStack_e0 = uVar8;
                uStack_cc = 0x3f8000003f800000;
                uStack_c4 = 0x3f800000;
                pauStack_c0 = (undefined1 (*) [16])uStack_178;
                uStack_b8 = uStack_1c0;
                uStack_88 = uStack_190;
                pcStack_78 = pdb_141b2d780;
                uStack_70 = 0;
                uStack_63 = 0;
                uStack_f0 = uVar14;
                uStack_b0 = uStack_168;
                pdb_14161c000(&uStack_178,param_7,&uStack_f8,&UNK_143054c90);
                return;
              }
            }
            uStack_63 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143054c78);
          }
        }
        uStack_62 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143054bd8);
      }
    }
    uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143054b00);
  }
  uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143055320,0x2b,&uStack_178,&UNK_143055300,&UNK_143054aa0);
}

