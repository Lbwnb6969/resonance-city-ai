// VA 0x140b55c80, PDB extent 1536 bytes
// country_core::startup::startup_roof::startup_roof
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_roof::startup_roof
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_roof.rs
   Extent: 1536 */

void pdb_140b55c80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pdb_141b241d0(&uStack_f8,&UNK_14305a4d0,0x1d);
  if (SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
    uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14305a9d0,0x2b,&uStack_178,&UNK_14305a9b0,&UNK_14305a520);
  }
  uStack_108 = uStack_88;
  uStack_100 = uStack_80;
  uStack_110 = uStack_90;
  uStack_128 = uStack_a8;
  uStack_138 = uStack_b8;
  uStack_130 = uStack_b0;
  uStack_148 = uStack_cc._4_4_;
  uStack_144 = uStack_c4;
  uStack_158 = (undefined4)uStack_d8;
  uStack_154 = uStack_d8._4_4_;
  uStack_150 = uStack_d0;
  uStack_14c = (undefined4)uStack_cc;
  uStack_160 = (undefined4)uStack_e0;
  uStack_15c = uStack_e0._4_4_;
  uStack_178 = CONCAT44(uStack_f4,uStack_f8);
  uVar11 = *param_3;
  uVar1 = *param_2;
  uVar8 = pdb_140b08d00(&uStack_178,&UNK_14305a538,10,uVar11,uVar1);
  uVar2 = *param_4;
  pdb_140a596f0(&uStack_1b0,uVar2,&UNK_14305a542,0x21,&UNK_14305a568);
  plVar3 = (longlong *)*param_1;
  lVar4 = *plVar3;
  uVar5 = *param_5;
  uStack_61 = 1;
  puVar9 = (undefined8 *)pdb_140bf45b0(uVar5,&UNK_14331c8a0);
  if (puVar9 != (undefined8 *)0x0) {
    uStack_61 = 1;
    lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9);
    if (lVar10 != 0) {
      uStack_61 = 1;
      uStack_80 = pdb_141990f50(&uStack_1b0,lVar4 + 0x10,lVar10);
      uVar7 = _UNK_142e4e658;
      uVar6 = _DAT_142e4e650;
      uStack_170 = uStack_1b0;
      uStack_168 = uStack_1a8;
      uStack_160 = uStack_1a0;
      uStack_15c = uStack_19c;
      uStack_158 = uStack_198;
      uStack_154 = uStack_194;
      uStack_150 = uStack_190;
      uStack_14c = uStack_18c;
      uStack_148 = uStack_188;
      uStack_144 = uStack_184;
      uStack_140 = uStack_180;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_e8 = _DAT_142e4e650;
      uStack_e0 = _UNK_142e4e658;
      uStack_cc = 0x3f8000003f800000;
      uStack_c4 = 0x3f800000;
      uStack_c0 = uStack_178;
      uStack_b8 = uStack_1b0;
      uStack_a8 = CONCAT44(uStack_19c,uStack_1a0);
      uStack_b0 = uStack_1a8;
      uStack_a0 = uStack_198;
      uStack_9c = uStack_194;
      uStack_98 = uStack_190;
      uStack_94 = uStack_18c;
      uStack_90 = CONCAT44(uStack_184,uStack_188);
      uStack_88 = uStack_180;
      pcStack_78 = pdb_141b2cc70;
      uStack_70 = 0;
      uStack_61 = 0;
      uStack_f0 = uVar8;
      pdb_14161c000(&uStack_178,param_6,&uStack_f8,&UNK_14305a598);
      pdb_141b241d0(&uStack_f8,&UNK_14305a5b0,0x24);
      if (SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
        uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305a9d0,0x2b,&uStack_178,&UNK_14305a9b0,&UNK_14305a5d8);
      }
      uStack_108 = uStack_88;
      uStack_100 = uStack_80;
      uStack_118 = CONCAT44(uStack_94,uStack_98);
      uStack_110 = uStack_90;
      uStack_120 = CONCAT44(uStack_9c,uStack_a0);
      uStack_128 = uStack_a8;
      uStack_138 = uStack_b8;
      uStack_130 = uStack_b0;
      uStack_148 = uStack_cc._4_4_;
      uStack_144 = uStack_c4;
      uStack_140 = uStack_c0;
      uStack_158 = (undefined4)uStack_d8;
      uStack_154 = uStack_d8._4_4_;
      uStack_150 = uStack_d0;
      uStack_14c = (undefined4)uStack_cc;
      uStack_168 = uStack_e8;
      uStack_160 = (undefined4)uStack_e0;
      uStack_15c = uStack_e0._4_4_;
      uStack_178 = CONCAT44(uStack_f4,uStack_f8);
      uStack_170 = uStack_f0;
      uVar11 = pdb_140b08d00(&uStack_178,&UNK_14305a5f0,0x11,uVar11,uVar1);
      pdb_140a596f0(&uStack_1b0,uVar2,&UNK_14305a601,0x21,&UNK_14305a628);
      lVar4 = *plVar3;
      uStack_62 = 1;
      puVar9 = (undefined8 *)pdb_140bf45b0(uVar5,&UNK_14331c9d0);
      if (puVar9 != (undefined8 *)0x0) {
        uStack_62 = 1;
        lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9);
        if (lVar10 != 0) {
          uStack_62 = 1;
          uStack_80 = pdb_141992730(&uStack_1b0,lVar4 + 0x10,lVar10);
          uStack_170 = uStack_1b0;
          uStack_168 = uStack_1a8;
          uStack_160 = uStack_1a0;
          uStack_15c = uStack_19c;
          uStack_158 = uStack_198;
          uStack_154 = uStack_194;
          uStack_150 = uStack_190;
          uStack_14c = uStack_18c;
          uStack_148 = uStack_188;
          uStack_144 = uStack_184;
          uStack_140 = uStack_180;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_f8 = 0;
          uStack_e8 = uVar6;
          uStack_e0 = uVar7;
          uStack_cc = 0x3f8000003f800000;
          uStack_c4 = 0x3f800000;
          uStack_c0 = uStack_178;
          uStack_b8 = uStack_1b0;
          uStack_b0 = uStack_1a8;
          uStack_a0 = uStack_198;
          uStack_9c = uStack_194;
          uStack_98 = uStack_190;
          uStack_94 = uStack_18c;
          uStack_88 = uStack_180;
          pcStack_78 = pdb_141b2d3d0;
          uStack_70 = 0;
          uStack_62 = 0;
          uStack_f0 = uVar11;
          pdb_14161c000(&uStack_178,param_6,&uStack_f8,&UNK_14305a658);
          return;
        }
      }
      uStack_62 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305a640);
    }
  }
  uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14305a580);
}

