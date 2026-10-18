// VA 0x140bd59c0, PDB extent 1825 bytes
// country_core::resources::logo_animation::startup_animated_logo
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::logo_animation::startup_animated_logo
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
   Extent: 1825 */

void pdb_140bd59c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 auStack_1c0 [5];
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_80;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)*param_1;
  pdb_141b241d0(&uStack_118,&UNK_1430647b0,0x22);
  if (SBORROW8(0,CONCAT44(uStack_114,uStack_118))) {
    uStack_198 = uStack_110;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143064a60,0x2b,&uStack_198,&UNK_143064a40,&UNK_1430647d8);
  }
  uStack_128 = uStack_a8;
  uStack_120 = uStack_a0;
  uStack_168 = (undefined4)uStack_e8;
  uStack_164 = uStack_e8._4_4_;
  uStack_160 = uStack_e0;
  uStack_15c = uStack_dc;
  uStack_178 = (undefined4)uStack_f8;
  uStack_174 = uStack_f8._4_4_;
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188 = uStack_108;
  uStack_184 = uStack_104;
  uStack_180 = uStack_100;
  uStack_17c = uStack_fc;
  uStack_198._0_4_ = uStack_118;
  uStack_198._4_4_ = uStack_114;
  uStack_190 = (undefined4)uStack_110;
  uStack_18c = uStack_110._4_4_;
  uVar11 = *param_3;
  uVar12 = *param_2;
  uVar9 = pdb_140b08d00(&uStack_198,&UNK_1430647f0,0xf,uVar11,uVar12);
  uVar3 = *param_4;
  pdb_140a596f0(&uStack_198,uVar3,&UNK_1430647ff,0x1b,&UNK_143064820);
  if (CONCAT44(uStack_16c,uStack_170) == 0) {
    uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143064838);
  }
  uStack_71 = 1;
  uVar10 = pdb_140e51270(lVar2 + 0x10,&uStack_170);
  uStack_80 = uVar10;
  pdb_140df4940(&uStack_118);
  uStack_108 = uStack_118;
  uVar8 = _UNK_143063f28;
  uVar7 = _DAT_143063f20;
  uVar6 = _DAT_142e37860;
  uStack_118 = 0;
  uStack_d8 = (undefined4)uStack_198;
  uStack_d4 = uStack_198._4_4_;
  uStack_d0 = uStack_190;
  uStack_cc = uStack_18c;
  uStack_c8 = uStack_188;
  uStack_c4 = uStack_184;
  uStack_c0 = uStack_180;
  uStack_bc = uStack_17c;
  uStack_b8 = uStack_178;
  uStack_b4 = uStack_174;
  uStack_b0 = uStack_170;
  uStack_ac = uStack_16c;
  uStack_a8 = CONCAT44(uStack_164,uStack_168);
  uStack_104 = uStack_114;
  uStack_100 = (undefined4)uStack_110;
  uStack_fc = uStack_110._4_4_;
  uStack_f8 = _DAT_143063f20;
  uStack_f0 = _UNK_143063f28;
  uStack_e8 = _DAT_142e37860;
  uStack_98 = 0x13;
  uStack_73 = 0;
  uStack_110 = uVar9;
  uStack_a0 = uVar10;
  pdb_14161dca0(auStack_1c0,param_6,&uStack_118,&UNK_143064850);
  uVar9 = auStack_1c0[0];
  pdb_141b241d0(&uStack_118,&UNK_143064868,0x20);
  if (SBORROW8(0,CONCAT44(uStack_114,uStack_118))) {
    uStack_198 = uStack_110;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143064a60,0x2b,&uStack_198,&UNK_143064a40,&UNK_143064888);
  }
  uStack_128 = uStack_a8;
  uStack_120 = uStack_a0;
  uStack_138 = CONCAT44(uStack_b4,uStack_b8);
  uStack_130 = CONCAT44(uStack_ac,uStack_b0);
  uStack_148 = CONCAT44(uStack_c4,uStack_c8);
  uStack_140 = CONCAT44(uStack_bc,uStack_c0);
  uStack_158 = CONCAT44(uStack_d4,uStack_d8);
  uStack_150 = CONCAT44(uStack_cc,uStack_d0);
  uStack_168 = (undefined4)uStack_e8;
  uStack_164 = uStack_e8._4_4_;
  uStack_160 = uStack_e0;
  uStack_15c = uStack_dc;
  uStack_178 = (undefined4)uStack_f8;
  uStack_174 = uStack_f8._4_4_;
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188 = uStack_108;
  uStack_184 = uStack_104;
  uStack_180 = uStack_100;
  uStack_17c = uStack_fc;
  uStack_198._0_4_ = uStack_118;
  uStack_198._4_4_ = uStack_114;
  uStack_190 = (undefined4)uStack_110;
  uStack_18c = uStack_110._4_4_;
  uVar11 = pdb_140b08d00(&uStack_198,&UNK_1430648a0,0xd,uVar11,uVar12);
  pdb_140a596f0(&uStack_198,uVar3,&UNK_1430648ad,0x24,&UNK_1430648d8);
  if (CONCAT44(uStack_16c,uStack_170) != 0) {
    uStack_72 = 1;
    uVar12 = pdb_140e51270(lVar2 + 0x10,&uStack_170);
    uStack_80 = uVar12;
    pdb_140df4940(&uStack_118);
    uStack_108 = uStack_118;
    uStack_118 = 0;
    uStack_d8 = (undefined4)uStack_198;
    uStack_d4 = uStack_198._4_4_;
    uStack_d0 = uStack_190;
    uStack_cc = uStack_18c;
    uStack_c8 = uStack_188;
    uStack_c4 = uStack_184;
    uStack_c0 = uStack_180;
    uStack_bc = uStack_17c;
    uStack_b8 = uStack_178;
    uStack_b4 = uStack_174;
    uStack_b0 = uStack_170;
    uStack_ac = uStack_16c;
    uStack_a8 = CONCAT44(uStack_164,uStack_168);
    uStack_104 = uStack_114;
    uStack_100 = (undefined4)uStack_110;
    uStack_fc = uStack_110._4_4_;
    uStack_f8 = uVar7;
    uStack_f0 = uVar8;
    uStack_e8 = uVar6;
    uStack_98 = 0x13;
    uStack_74 = 0;
    uStack_110 = uVar11;
    uStack_a0 = uVar12;
    pdb_14161dca0(auStack_1c0,param_6,&uStack_118,&UNK_143064908);
    uVar1 = *(undefined4 *)((longlong)param_5 + 0x1c);
    puVar4 = (undefined8 *)*param_5;
    puVar5 = (undefined4 *)param_5[2];
    *puVar4 = uVar9;
    *puVar5 = uVar1;
    puVar4[1] = auStack_1c0[0];
    return;
  }
  uStack_72 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430648f0);
}

