// VA 0x14087c140, PDB extent 1085 bytes
// system_decorator::load_decorators::load_decorators::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/load_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::load_decorators::load_decorators::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/load_decorators.rs
   Extent: 1085 */

void pdb_14087c140(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong arg0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
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
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar4 = pdb_140a2b210(param_2,param_3,param_4);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300fee0);
  }
  lVar5 = pdb_140a97600(lVar4);
  arg0 = param_3 - lVar5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = arg0;
  uVar7 = SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
  if (arg0 < 0x7ffffffffffffffd) goto LAB_14087c1c2;
  param_3 = 0;
  do {
    uVar7 = arg0;
    pdb_142dc7e2a();
LAB_14087c1c2:
    if (param_3 == lVar5) {
      pbStack_50 = (byte *)0x4;
      uStack_58 = 0;
      goto LAB_14087c287;
    }
    pdb_14007ee60();
    param_3 = 4;
    pbStack_50 = pub_1406abab0(arg0,4);
  } while (pbStack_50 == (byte *)0x0);
  uStack_58 = uVar7 >> 3;
  if (arg0 - 0xc < 0xc) {
    uVar7 = 0;
  }
  else {
    lVar8 = 0x14;
    uVar7 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar5 + -0xc + lVar8);
      *(undefined8 *)(pbStack_50 + lVar8 + -0x14) = *(undefined8 *)(lVar5 + -0x14 + lVar8);
      *(undefined4 *)(pbStack_50 + lVar8 + -0xc) = uVar1;
      uVar1 = *(undefined4 *)(lVar5 + lVar8);
      *(undefined8 *)(pbStack_50 + lVar8 + -8) = *(undefined8 *)(lVar5 + -8 + lVar8);
      *(undefined4 *)(pbStack_50 + lVar8) = uVar1;
      uVar7 = uVar7 + 2;
      lVar8 = lVar8 + 0x18;
    } while ((uStack_58 & 0xffffffffffffffe) != uVar7);
    if ((uStack_58 & 1) == 0) goto LAB_14087c287;
  }
  lVar8 = uVar7 * 0xc;
  uVar1 = *(undefined4 *)(lVar5 + 8 + lVar8);
  *(undefined8 *)(pbStack_50 + lVar8) = *(undefined8 *)(lVar5 + lVar8);
  *(undefined4 *)(pbStack_50 + lVar8 + 8) = uVar1;
LAB_14087c287:
  pdb_1409efc00(&uStack_108,pbStack_50,uStack_58);
  if (uStack_108 == 0) {
    pdb_142dc8110(&UNK_14300fef8,0xb,&UNK_14300ff08);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uStack_118 = uStack_98;
  uStack_110 = uStack_90;
  uStack_128 = uStack_a8;
  uStack_120 = uStack_a0;
  uStack_138 = uStack_b8;
  uStack_130 = uStack_b0;
  uStack_148 = CONCAT44(uStack_c4,uStack_c8);
  uStack_140 = CONCAT44(uStack_bc,uStack_c0);
  uStack_178 = uStack_f8;
  uStack_174 = uStack_f4;
  uStack_170 = uStack_f0;
  uStack_16c = uStack_ec;
  uStack_168 = uStack_e8;
  uStack_164 = uStack_e4;
  uStack_160 = uStack_e0;
  uStack_15c = uStack_dc;
  uStack_158 = uStack_d8;
  uStack_154 = uStack_d4;
  uStack_150 = uStack_d0;
  uStack_14c = uStack_cc;
  uStack_188 = (undefined4)uStack_108;
  uStack_184 = uStack_108._4_4_;
  uStack_180 = (undefined4)uStack_100;
  uStack_17c = uStack_100._4_4_;
  if (uStack_58 != 0) {
    pub_1406abac0(pbStack_50,uStack_58 * 0xc,4);
  }
  uStack_42 = 1;
  pdb_140a96d60(&uStack_70,lVar4);
  uStack_41 = 1;
  pdb_140a96ee0(&uStack_1a8,lVar4);
  uStack_88 = uStack_118;
  uStack_80 = uStack_110;
  uStack_98 = uStack_128;
  uStack_90 = uStack_120;
  uStack_a8 = uStack_138;
  uStack_a0 = uStack_130;
  uStack_b8 = uStack_148;
  uStack_b0 = uStack_140;
  uStack_c8 = uStack_158;
  uStack_c4 = uStack_154;
  uStack_c0 = uStack_150;
  uStack_bc = uStack_14c;
  uStack_d8 = uStack_168;
  uStack_d4 = uStack_164;
  uStack_d0 = uStack_160;
  uStack_cc = uStack_15c;
  uStack_e8 = uStack_178;
  uStack_e4 = uStack_174;
  uStack_e0 = uStack_170;
  uStack_dc = uStack_16c;
  uStack_f8 = uStack_188;
  uStack_f4 = uStack_184;
  uStack_f0 = uStack_180;
  uStack_ec = uStack_17c;
  uStack_108 = 1;
  uStack_100 = 1;
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x90,0x10);
  if (pbVar6 != (byte *)0x0) {
    pub_142e32760(pbVar6,&uStack_108,0x90);
    param_1[2] = uStack_60;
    *param_1 = uStack_70;
    param_1[1] = uStack_68;
    param_1[6] = uStack_198;
    param_1[7] = uStack_190;
    param_1[4] = uStack_1a8;
    param_1[5] = uStack_1a0;
    param_1[3] = pbVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x90);
}

