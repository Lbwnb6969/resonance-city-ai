// VA 0x1409cc650, PDB extent 763 bytes
// country_core::systems::wall::shapes::rectangle::ui_modes::edit_dims::impl$1::signifier::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_dims.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_modes::edit_dims::impl$1::signifier::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_dims.rs
   Extent: 763 */

undefined8 *
pdb_1409cc650(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  byte *pbStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_38 = pub_1406abab0(8,8);
  if (pbStack_38 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pbStack_108 = pub_1406abab0(10,1);
  if (pbStack_108 != (byte *)0x0) {
    pbStack_108[0] = 0x66;
    pbStack_108[1] = 0x6c;
    pbStack_108[2] = 0x61;
    pbStack_108[3] = 0x74;
    pbStack_108[4] = 0x5f;
    pbStack_108[5] = 0x61;
    pbStack_108[6] = 0x72;
    pbStack_108[7] = 0x72;
    pbStack_108[8] = 0x6f;
    pbStack_108[9] = 0x77;
    uStack_9c = 0x3f80000000000000;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_118 = 0x8000000000000000;
    uStack_110 = 10;
    uStack_100 = 10;
    uStack_e8 = _DAT_142e4e650;
    uStack_e0 = _UNK_142e4e658;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 2;
    uStack_b8 = 1;
    uStack_b0 = 0x100;
    uStack_ac = _DAT_142e36f28;
    uStack_a8 = 0;
    uStack_94 = (uint)uStack_94._3_1_ << 0x18;
    pdb_140df4520(&uStack_88,param_2);
    pdb_140de8fd0(&uStack_1a8,&uStack_88);
    uStack_170 = uStack_1a0;
    uStack_178 = uStack_1a8;
    uStack_e8 = uStack_1a8;
    uStack_e0 = uStack_1a0;
    uStack_188 = uStack_f8;
    uStack_180 = uStack_f0;
    pbStack_198 = pbStack_108;
    uStack_190 = uStack_100;
    uStack_1a8 = uStack_118;
    uStack_1a0 = uStack_110;
    uStack_88 = CONCAT44(uStack_cc,uStack_d0);
    uStack_80 = CONCAT44(uStack_c4,uStack_c8);
    uStack_78 = CONCAT44(uStack_bc,uStack_c0);
    uStack_70 = CONCAT44(uStack_b4,uStack_b8);
    uStack_140 = CONCAT22(uStack_ae,uStack_b0);
    uStack_68 = CONCAT44(uStack_ac,uStack_140);
    uStack_50 = uStack_9c._4_4_;
    iStack_4c = uStack_94;
    uStack_60 = uStack_a8;
    uStack_48 = uStack_90;
    uStack_5c = (undefined4)*(undefined8 *)(param_2 + 8);
    uStack_58 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
    uStack_12c = *(undefined4 *)(param_2 + 0x10);
    uStack_168 = 0x4000000000000001;
    uStack_120 = uStack_90;
    uStack_130 = uStack_58;
    uStack_128 = CONCAT44(uStack_94,uStack_9c._4_4_);
    uStack_13c = uStack_ac;
    uStack_138 = uStack_a8;
    uStack_134 = uStack_5c;
    uStack_150 = uStack_c0;
    uStack_14c = uStack_bc;
    uStack_148 = uStack_b8;
    uStack_144 = uStack_b4;
    uStack_160 = uStack_d0;
    uStack_15c = uStack_cc;
    uStack_158 = uStack_c8;
    uStack_154 = uStack_c4;
    uStack_54 = uStack_12c;
    pdb_1409bba50(&uStack_118,&uStack_1a8,param_3,param_4,param_5);
    *(undefined8 *)pbStack_38 = uStack_118;
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,10);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

