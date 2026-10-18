// VA 0x140bce8c0, PDB extent 863 bytes
// country_core::startup::load_glade_particles::load_glade_particles
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_particles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_glade_particles::load_glade_particles
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_particles.rs
   Extent: 863 */

void pdb_140bce8c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_141b241d0(&uStack_d8,&UNK_143064094,0x21);
  if (SBORROW8(0,uStack_d8)) {
    uStack_158 = uStack_d0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143064a60,0x2b,&uStack_158,&UNK_143064a40,&UNK_1430640f0);
  }
  uStack_e8 = uStack_68;
  uStack_e0 = uStack_60;
  uStack_f8 = uStack_78;
  uStack_f0 = uStack_70;
  uStack_108 = uStack_88;
  uStack_100 = uStack_80;
  uStack_110 = uStack_90;
  uStack_128 = uStack_ac._4_4_;
  uStack_124 = uStack_a4;
  uStack_138 = (undefined4)uStack_b8;
  uStack_134 = uStack_b8._4_4_;
  uStack_130 = uStack_b0;
  uStack_12c = (undefined4)uStack_ac;
  uStack_140 = (undefined4)uStack_c0;
  uStack_13c = uStack_c0._4_4_;
  uStack_158._0_4_ = (undefined4)uStack_d8;
  uStack_158._4_4_ = uStack_d8._4_4_;
  uVar3 = pdb_140b08d00(&uStack_158,&UNK_143064108,0x12,*param_6,*param_2);
  pdb_140a596f0(&uStack_190,*param_7,&UNK_14306411a,0x1a,&UNK_143064138);
  lVar1 = *(longlong *)*param_1;
  uStack_39 = 1;
  puVar4 = (undefined8 *)pdb_140bf45b0(*param_3,&UNK_14331c8b8);
  if (puVar4 != (undefined8 *)0x0) {
    uStack_39 = 1;
    uVar5 = (**(code **)(puVar4[1] + 0x18))(*puVar4);
    if (uVar5 != 0) {
      uVar2 = *param_4;
      uStack_39 = 1;
      uVar6 = pdb_140df4400(&UNK_143064168,10);
      uStack_39 = 1;
      uVar6 = pdb_140a2e580(uVar2,uVar6);
      uStack_39 = 1;
      uVar7 = pdb_140df4400(&UNK_143064172,0x1a);
      uStack_39 = 1;
      uStack_c8 = pdb_140a2e580(uVar2,uVar7);
      uStack_39 = 1;
      uStack_d8 = uVar5;
      uStack_d0 = uVar6;
      uStack_60 = pdb_1419925c0(&uStack_190,lVar1 + 0x10,&uStack_d8);
      uStack_120 = uStack_160;
      uStack_130 = uStack_170;
      uStack_12c = uStack_16c;
      uStack_128 = uStack_168;
      uStack_124 = uStack_164;
      uStack_140 = uStack_180;
      uStack_13c = uStack_17c;
      uStack_138 = uStack_178;
      uStack_134 = uStack_174;
      uStack_150 = uStack_190;
      uVar2 = uStack_150;
      uStack_148 = uStack_188;
      uStack_d8 = uStack_d8 & 0xffffffff00000000;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_58 = *(undefined4 *)*param_5;
      uStack_c8 = _DAT_142e4e650;
      uStack_c0 = _UNK_142e4e658;
      uStack_ac = 0x3f8000003f800000;
      uStack_a4 = 0x3f800000;
      uStack_90 = uStack_188;
      uStack_68 = uStack_160;
      uStack_150._0_4_ = (undefined4)uStack_190;
      uStack_150._4_4_ = (undefined4)((ulonglong)uStack_190 >> 0x20);
      uStack_a0 = (undefined4)uStack_158;
      uStack_9c = uStack_158._4_4_;
      uStack_98 = (undefined4)uStack_150;
      uStack_94 = uStack_150._4_4_;
      uStack_39 = 0;
      uStack_150 = uVar2;
      uStack_d0 = uVar3;
      pdb_14161afe0(&uStack_158,param_8,&uStack_d8,&UNK_143064190);
      return;
    }
  }
  uStack_39 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143064150);
}

