// VA 0x1421820c0, PDB extent 1072 bytes
// system_clutter::autoclutter::load_clutter_meshes::load_clutter_meshes::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/load_clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::load_clutter_meshes::load_clutter_meshes::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/load_clutter_meshes.rs
   Extent: 1072 */

void pdb_1421820c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6,byte param_7,byte param_8,byte param_9,
                  ulonglong param_10,ulonglong param_11,char param_12)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 in_stack_fffffffffffffe58;
  uint uVar7;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uVar7 = (uint)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  uStack_60 = 0xfffffffffffffffe;
  if ((param_12 == '\0') || (*_DAT_143ca4500 == '\0')) {
    pdb_1428daa80(&uStack_178,param_3,param_4);
    if (SBORROW8(0,CONCAT44(uStack_174,uStack_178))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143468b60,0x2b,&uStack_f8,&UNK_143468b40,&UNK_143468b28);
    }
    uStack_88 = uStack_108;
    uStack_80 = uStack_100;
    uStack_98 = uStack_118;
    uStack_90 = uStack_110;
    uStack_a8 = uStack_128;
    uStack_a0 = uStack_120;
    uStack_b8 = uStack_138;
    uStack_b0 = uStack_130;
    uStack_c8 = uStack_148;
    uStack_c4 = uStack_144;
    uStack_c0 = uStack_140;
    uStack_bc = uStack_13c;
    uStack_d8 = uStack_158;
    uStack_d4 = uStack_154;
    uStack_d0 = uStack_150;
    uStack_cc = uStack_14c;
    uStack_e8 = uStack_168;
    uStack_e4 = uStack_164;
    uStack_e0 = uStack_160;
    uStack_dc = uStack_15c;
    uStack_f8._0_4_ = uStack_178;
    uStack_f8._4_4_ = uStack_174;
    uStack_f0 = uStack_170;
    uStack_ec = uStack_16c;
    if (!SBORROW8(0,CONCAT44(uStack_15c,uStack_160))) {
      uStack_61 = 1;
      cVar2 = pdb_140d8af50(CONCAT44(uStack_154,uStack_158),CONCAT44(uStack_14c,uStack_150));
      if (cVar2 != '\0') {
        uStack_61 = 1;
        cVar2 = pdb_140b25eb0(&uStack_f8);
        if (cVar2 != '\0') {
          if ((param_10 & 1) == 0) {
            param_11 = 0xffb1e74fbef6a00f;
          }
          param_10 = 1;
        }
      }
    }
    uStack_61 = 1;
    uVar6 = pdb_140a97350(&uStack_f8);
    uStack_61 = 1;
    pdb_140a96ee0(&uStack_198,&uStack_f8);
    uStack_108 = uStack_88;
    uStack_100 = uStack_80;
    uStack_118 = uStack_98;
    uStack_110 = uStack_90;
    uStack_128 = uStack_a8;
    uStack_120 = uStack_a0;
    uStack_138 = uStack_b8;
    uStack_130 = uStack_b0;
    uStack_148 = uStack_c8;
    uStack_144 = uStack_c4;
    uStack_140 = uStack_c0;
    uStack_13c = uStack_bc;
    uStack_158 = uStack_d8;
    uStack_154 = uStack_d4;
    uStack_150 = uStack_d0;
    uStack_14c = uStack_cc;
    uStack_168 = uStack_e8;
    uStack_164 = uStack_e4;
    uStack_160 = uStack_e0;
    uStack_15c = uStack_dc;
    uStack_178 = (undefined4)uStack_f8;
    uStack_174 = uStack_f8._4_4_;
    uStack_170 = uStack_f0;
    uStack_16c = uStack_ec;
    uVar1 = *param_1;
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_61 = 0;
    uVar3 = pdb_140b0d740(&uStack_178,param_5,param_6,uVar1,*param_2);
    uStack_61 = 0;
    uVar5 = pdb_140df4400(param_5,param_6);
    pdb_14007ee60();
    puVar4 = (ulonglong *)pub_1406abab0(0x68,8);
    if (puVar4 == (ulonglong *)0x0) {
      uStack_61 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x68);
    }
    *puVar4 = param_10;
    puVar4[1] = param_11;
    puVar4[2] = param_5;
    puVar4[3] = param_6;
    puVar4[4] = 4;
    puVar4[5] = 0;
    puVar4[6] = uVar3;
    puVar4[7] = uVar5;
    puVar4[8] = uStack_198;
    puVar4[9] = uStack_190;
    puVar4[10] = uStack_188;
    puVar4[0xb] = uStack_180;
    *(undefined4 *)(puVar4 + 0xc) = uVar6;
  }
  else {
    uVar3 = pdb_140df4400(param_5,param_6);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    pdb_140df3fd0(&uStack_178,&uStack_70,&uStack_f8,_DAT_142e36f28,(ulonglong)uVar7 << 0x20,
                  &UNK_143468b10);
    pdb_14007ee60();
    puVar4 = (ulonglong *)pub_1406abab0(0x68,8);
    if (puVar4 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x68);
    }
    *puVar4 = param_10;
    puVar4[1] = param_11;
    puVar4[2] = param_5;
    puVar4[3] = param_6;
    puVar4[4] = 4;
    puVar4[5] = 0;
    puVar4[6] = 0xffffffffffffffff;
    puVar4[7] = uVar3;
    puVar4[8] = CONCAT44(uStack_174,uStack_178);
    puVar4[9] = CONCAT44(uStack_16c,uStack_170);
    puVar4[10] = CONCAT44(uStack_164,uStack_168);
    puVar4[0xb] = CONCAT44(uStack_15c,uStack_160);
    *(undefined4 *)(puVar4 + 0xc) = 0x3f800000;
  }
  *(byte *)((longlong)puVar4 + 100) = param_8;
  *(byte *)((longlong)puVar4 + 0x65) = param_9;
  *(byte *)((longlong)puVar4 + 0x66) = param_7;
  return;
}

