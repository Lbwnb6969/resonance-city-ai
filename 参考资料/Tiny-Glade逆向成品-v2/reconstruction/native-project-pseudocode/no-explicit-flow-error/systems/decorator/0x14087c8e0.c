// VA 0x14087c8e0, PDB extent 1282 bytes
// system_decorator::load_decorators::load_collision_as_bbx
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/load_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::load_decorators::load_collision_as_bbx
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/load_decorators.rs
   Extent: 1282 */

void pdb_14087c8e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte *pbVar2;
  float fVar3;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
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
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
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
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [8];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  lVar1 = pdb_140a2b210(param_2,param_3,param_4);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300ff80);
  }
  pdb_140a96ee0(&fStack_e0,lVar1);
  if ((fStack_e0 == _DAT_142e36f28) && (!NAN(fStack_e0) && !NAN(_DAT_142e36f28))) {
    if ((fStack_dc == 0.0) && (!NAN(fStack_dc))) {
      fVar3 = (fStack_c4 + fStack_c8) * _DAT_142e36f50;
      pdb_140df4540(&uStack_178,auStack_d8,fVar3);
      pdb_140de88f0(&uStack_208,(uint)fStack_dc ^ _DAT_142e37820,_DAT_142e36f28);
      uStack_16c = 0x3f800000;
      uStack_168 = 0x3f800000;
      uStack_164 = 0x3f800000;
      pdb_140b3d590(&uStack_c0,uStack_d0,fStack_c4 - fStack_c8,uStack_cc,&uStack_188);
      uStack_a0 = (byte *)CONCAT44(fStack_c4 - fStack_c8,uStack_d0);
      uStack_98 = uStack_cc;
      uStack_91 = 1;
      pdb_140df4540(&uStack_188,auStack_d8,fVar3);
      uStack_91 = 1;
      pdb_1409efe30(&uStack_208,&uStack_a0,&uStack_188);
      uStack_188 = 1;
      uStack_180 = 1;
      uStack_178 = CONCAT44(uStack_204,uStack_208);
      uStack_170 = uStack_200;
      uStack_16c = uStack_1fc;
      uStack_168 = uStack_1f8;
      uStack_164 = uStack_1f4;
      uStack_160 = uStack_1f0;
      uStack_15c = uStack_1ec;
      uStack_158 = uStack_1e8;
      uStack_154 = uStack_1e4;
      uStack_150 = uStack_1e0;
      uStack_14c = uStack_1dc;
      uStack_148 = uStack_1d8;
      uStack_144 = uStack_1d4;
      uStack_140 = uStack_1d0;
      uStack_13c = uStack_1cc;
      uStack_138 = uStack_1c8;
      uStack_130 = uStack_1c0;
      uStack_128 = uStack_1b8;
      uStack_120 = uStack_1b0;
      uStack_118 = uStack_1a8;
      uStack_110 = uStack_1a0;
      uStack_108 = uStack_198;
      uStack_104 = uStack_194;
      uStack_100 = uStack_190;
      uStack_fc = uStack_18c;
      pdb_14007ee60();
      pbVar2 = pub_1406abab0(0x90,0x10);
      if (pbVar2 != (byte *)0x0) {
        pub_142e32760(pbVar2,&uStack_188,0x90);
        uStack_f0 = uStack_c0;
        uStack_e8 = uStack_b8;
        pbStack_a8 = pbVar2;
        uStack_a0 = pbVar2;
        lVar1 = pdb_140a2b210(param_2,param_3,param_4);
        if (lVar1 != 0) {
          pdb_140a96ee0(&uStack_188,lVar1);
          param_1[2] = uStack_b0;
          *param_1 = uStack_c0;
          param_1[1] = uStack_b8;
          param_1[4] = uStack_188;
          param_1[5] = uStack_180;
          param_1[6] = uStack_178;
          param_1[7] = CONCAT44(uStack_16c,uStack_170);
          param_1[3] = pbStack_a8;
          return;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14300ffb8);
      }
      goto LAB_14087cbf7;
    }
  }
  pdb_142de6711(0,&fStack_e0,&UNK_14300ff98,0);
LAB_14087cbf7:
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x90);
}

