// VA 0x141704c30, PDB extent 1934 bytes
// country_core::startup::startup_garden_brush::startup_garden_brush
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_garden_brush.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_garden_brush::startup_garden_brush
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_garden_brush.rs
   Extent: 1934 */

void pdb_141704c30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)*param_1;
  uVar10 = *param_6;
  pdb_140a596f0(&uStack_1c0,uVar10,&UNK_1433270fe,0x2c,&UNK_143327168);
  uVar9 = *param_4;
  uStack_62 = 1;
  puVar7 = (undefined8 *)pdb_140bf45b0(uVar9,&UNK_14331c850);
  if (puVar7 != (undefined8 *)0x0) {
    uStack_62 = 1;
    lVar8 = (**(code **)(puVar7[1] + 0x18))(*puVar7);
    if (lVar8 != 0) {
      uStack_62 = 1;
      uStack_78 = pdb_141990870(&uStack_1c0,lVar1 + 0x10,lVar8);
      uStack_63 = 1;
      uStack_70 = uStack_78;
      pdb_141b241d0(&uStack_108,&UNK_143327198,0x1f);
      if (SBORROW8(0,CONCAT44(uStack_104,uStack_108))) {
        uStack_188 = uStack_100;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143327518,0x2b,&uStack_188,&UNK_143327548,&UNK_1433271b8);
      }
      uStack_118 = uStack_98;
      uStack_110 = uStack_90;
      uStack_128 = uStack_a8;
      uStack_120 = uStack_a0;
      uStack_138 = uStack_b8;
      uStack_130 = uStack_b0;
      uStack_140 = uStack_c0;
      uStack_158 = uStack_dc._4_4_;
      uStack_154 = uStack_d4;
      uStack_168 = (undefined4)uStack_e8;
      uStack_164 = uStack_e8._4_4_;
      uStack_160 = uStack_e0;
      uStack_15c = (undefined4)uStack_dc;
      uStack_170 = (undefined4)uStack_f0;
      uStack_16c = uStack_f0._4_4_;
      uStack_188._0_4_ = uStack_108;
      uStack_188._4_4_ = uStack_104;
      uVar2 = *param_3;
      uVar3 = *param_2;
      uStack_63 = 1;
      uStack_100 = pdb_140b08d00(&uStack_188,&UNK_1433271d0,0xc,uVar2,uVar3);
      uVar5 = _UNK_142e4e658;
      uVar4 = _DAT_142e4e650;
      uStack_150 = uStack_190;
      uStack_160 = uStack_1a0;
      uStack_15c = uStack_19c;
      uStack_158 = uStack_198;
      uStack_154 = uStack_194;
      uStack_170 = uStack_1b0;
      uStack_16c = uStack_1ac;
      uStack_168 = uStack_1a8;
      uStack_164 = uStack_1a4;
      uStack_180 = uStack_1c0;
      uVar6 = uStack_180;
      uStack_178 = uStack_1b8;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_f8 = _DAT_142e4e650;
      uStack_f0 = _UNK_142e4e658;
      uStack_dc = 0x3f8000003f800000;
      uStack_d4 = 0x3f800000;
      uStack_a0 = CONCAT44(uStack_194,uStack_198);
      uStack_98 = uStack_190;
      uStack_b0 = CONCAT44(uStack_1a4,uStack_1a8);
      uStack_a8 = CONCAT44(uStack_19c,uStack_1a0);
      uStack_b8 = CONCAT44(uStack_1ac,uStack_1b0);
      uStack_c0 = uStack_1b8;
      uStack_180._0_4_ = (undefined4)uStack_1c0;
      uStack_180._4_4_ = (undefined4)((ulonglong)uStack_1c0 >> 0x20);
      uStack_d0 = (undefined4)uStack_188;
      uStack_cc = uStack_188._4_4_;
      uStack_c8 = (undefined4)uStack_180;
      uStack_c4 = uStack_180._4_4_;
      uStack_90 = uStack_70;
      pcStack_88 = pdb_140af4a50;
      uStack_80 = 0xd;
      uStack_63 = 0;
      uStack_180 = uVar6;
      pdb_14161c000(&uStack_188,param_7,&uStack_108,&UNK_1433271e0);
      pdb_140a596f0(&uStack_1c0,uVar10,&UNK_1433271f8,0x22,&UNK_143327220);
      uStack_61 = 1;
      puVar7 = (undefined8 *)pdb_140bf45b0(uVar9,&UNK_14331c9d8);
      if (puVar7 != (undefined8 *)0x0) {
        uStack_61 = 1;
        lVar8 = (**(code **)(puVar7[1] + 0x18))(*puVar7);
        if (lVar8 != 0) {
          uVar10 = *param_5;
          uStack_61 = 1;
          uVar9 = pdb_140df4400(&UNK_143327250,0x14);
          uStack_61 = 1;
          uVar10 = pdb_140a2e580(uVar10,uVar9);
          uStack_61 = 1;
          uStack_78 = pdb_141991a50(&uStack_1c0,lVar1 + 0x10,uVar10,lVar8);
          uStack_64 = 1;
          uStack_70 = uStack_78;
          pdb_141b241d0(&uStack_108,&UNK_143327264,0x21);
          if (!SBORROW8(0,CONCAT44(uStack_104,uStack_108))) {
            uStack_118 = uStack_98;
            uStack_110 = uStack_90;
            uStack_128 = uStack_a8;
            uStack_120 = uStack_a0;
            uStack_138 = uStack_b8;
            uStack_130 = uStack_b0;
            uStack_148 = CONCAT44(uStack_c4,uStack_c8);
            uStack_140 = uStack_c0;
            uStack_158 = uStack_dc._4_4_;
            uStack_154 = uStack_d4;
            uStack_150 = CONCAT44(uStack_cc,uStack_d0);
            uStack_168 = (undefined4)uStack_e8;
            uStack_164 = uStack_e8._4_4_;
            uStack_160 = uStack_e0;
            uStack_15c = (undefined4)uStack_dc;
            uStack_178 = uStack_f8;
            uStack_170 = (undefined4)uStack_f0;
            uStack_16c = uStack_f0._4_4_;
            uStack_188._0_4_ = uStack_108;
            uStack_188._4_4_ = uStack_104;
            uStack_180 = uStack_100;
            uStack_64 = 1;
            uStack_100 = pdb_140b08d00(&uStack_188,&UNK_1433272a0,0x10,uVar2,uVar3);
            uStack_150 = uStack_190;
            uStack_160 = uStack_1a0;
            uStack_15c = uStack_19c;
            uStack_158 = uStack_198;
            uStack_154 = uStack_194;
            uStack_170 = uStack_1b0;
            uStack_16c = uStack_1ac;
            uStack_168 = uStack_1a8;
            uStack_164 = uStack_1a4;
            uStack_180 = uStack_1c0;
            uVar10 = uStack_180;
            uStack_178 = uStack_1b8;
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            uStack_f8 = uVar4;
            uStack_f0 = uVar5;
            uStack_dc = 0x3f8000003f800000;
            uStack_d4 = 0x3f800000;
            uStack_98 = uStack_190;
            uStack_c0 = uStack_1b8;
            uStack_180._0_4_ = (undefined4)uStack_1c0;
            uStack_180._4_4_ = (undefined4)((ulonglong)uStack_1c0 >> 0x20);
            uStack_d0 = (undefined4)uStack_188;
            uStack_cc = uStack_188._4_4_;
            uStack_c8 = (undefined4)uStack_180;
            uStack_c4 = uStack_180._4_4_;
            uStack_90 = uStack_70;
            pcStack_88 = pdb_140af4a50;
            uStack_80 = 0xf;
            uStack_64 = 0;
            uStack_180 = uVar10;
            pdb_14161df10(&uStack_188,param_7,&uStack_108,&UNK_1433272b0);
            return;
          }
          uStack_188 = uStack_100;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143327518,0x2b,&uStack_188,&UNK_143327548,&UNK_143327288);
        }
      }
      uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143327238);
    }
  }
  uStack_62 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143327180);
}

