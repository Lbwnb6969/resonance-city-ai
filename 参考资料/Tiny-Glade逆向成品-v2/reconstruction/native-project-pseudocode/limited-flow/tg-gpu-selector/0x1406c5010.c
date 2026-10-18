// VA 0x1406c5010, PDB extent 20638 bytes
// tg_gpu_selector::gpu_selection::device_driver_advice
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_gpu_selector::gpu_selection::device_driver_advice
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
   Extent: 20638 */

void pdb_1406c5010(longlong param_1)

{
  code *pcVar1;
  ulonglong arg0;
  byte *pbVar2;
  undefined8 uVar3;
  uint auStack_2c8 [44];
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulonglong uStack_1a8;
  byte *pbStack_1a0;
  undefined4 uStack_198;
  int iStack_194;
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
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  byte *pbStack_130;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar3 = 0x14;
  uStack_218 = pdb_140dc6290(&UNK_142f990f3);
  uStack_108 = param_1 + 0x28;
  uStack_118 = &uStack_218;
  uStack_110 = pdb_1402ed400;
  uStack_100 = pdb_140e8ca40;
  uStack_210 = uVar3;
  pdb_140f60760(&uStack_1a8,&UNK_142f99107,&uStack_118);
  pbStack_130 = pbStack_1a0;
  arg0 = CONCAT44(iStack_194,uStack_198);
  if (iStack_194 < 0) {
    uVar3 = 0;
LAB_1406c50cb:
    pdb_142dc7e2a(uVar3,arg0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (arg0 == 0) {
    uStack_f0 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar3 = 1;
    uStack_f0 = pub_1406abab0(arg0,1);
    if (uStack_f0 == (byte *)0x0) goto LAB_1406c50cb;
    pub_142e32760(uStack_f0,pbStack_130,arg0);
  }
  uStack_118 = (undefined8 *)0x0;
  uStack_110 = (code *)&UNK_14326ed08;
  uStack_108 = 9;
  uStack_100 = (code *)CONCAT53(uStack_100._3_5_,0x40300);
  uStack_e0 = 0;
  uStack_d8 = 0x3fa6666600000000;
  uStack_d0 = CONCAT62(uStack_d0._2_6_,2);
  uStack_c8 = 2;
  uStack_c0 = 0;
  uStack_ac = 1;
  uStack_aa = 0;
  if (uStack_1a8 != 0) {
    pub_1406abac0(pbStack_130,uStack_1a8,1);
  }
  pdb_140fe7bc0(&uStack_1a8,&uStack_118);
  uStack_148 = 0x44160000;
  uStack_118 = (undefined8 *)uStack_1a8;
  uStack_110 = (code *)pbStack_1a0;
  uStack_108._0_4_ = uStack_198;
  uStack_108._4_4_ = iStack_194;
  uStack_100._0_4_ = uStack_190;
  uStack_100._4_4_ = uStack_18c;
  uStack_f8 = uStack_188;
  uStack_f4 = uStack_184;
  uStack_f0._0_4_ = uStack_180;
  uStack_f0._4_4_ = uStack_17c;
  uStack_e8 = uStack_178;
  uStack_e4 = uStack_174;
  uStack_e0 = uStack_170;
  uStack_dc = uStack_16c;
  uStack_d8 = uStack_168;
  uStack_d0 = uStack_160;
  uStack_c8 = (undefined2)uStack_158;
  uStack_c6 = (undefined2)((uint)uStack_158 >> 0x10);
  uStack_c4 = uStack_154;
  uStack_c0 = uStack_150;
  uStack_bc = uStack_14c;
  uStack_b8 = 0x44160000;
  uStack_b4 = (undefined4)uStack_144;
  uStack_b0 = (undefined4)((ulonglong)uStack_144 >> 0x20);
  uStack_ac = (undefined2)uStack_13c;
  uStack_aa = (undefined1)((uint)uStack_13c >> 0x10);
  uStack_a9 = (undefined1)((uint)uStack_13c >> 0x18);
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x70,8);
  if (pbVar2 != (byte *)0x0) {
    *(ulonglong *)(pbVar2 + 0x60) = CONCAT44(uStack_b4,uStack_b8);
    *(ulonglong *)(pbVar2 + 0x68) =
         CONCAT17(uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    *(ulonglong *)(pbVar2 + 0x50) = CONCAT44(uStack_c4,CONCAT22(uStack_c6,uStack_c8));
    *(ulonglong *)(pbVar2 + 0x58) = CONCAT44(uStack_bc,uStack_c0);
    *(undefined8 *)(pbVar2 + 0x40) = uStack_d8;
    *(undefined8 *)(pbVar2 + 0x48) = uStack_d0;
    *(undefined4 *)(pbVar2 + 0x30) = uStack_e8;
    *(undefined4 *)(pbVar2 + 0x34) = uStack_e4;
    *(undefined4 *)(pbVar2 + 0x38) = uStack_e0;
    *(undefined4 *)(pbVar2 + 0x3c) = uStack_dc;
    *(undefined4 *)(pbVar2 + 0x20) = uStack_f8;
    *(undefined4 *)(pbVar2 + 0x24) = uStack_f4;
    *(undefined4 *)(pbVar2 + 0x28) = (undefined4)uStack_f0;
    *(undefined4 *)(pbVar2 + 0x2c) = uStack_f0._4_4_;
    *(undefined4 *)(pbVar2 + 0x10) = (undefined4)uStack_108;
    *(int *)(pbVar2 + 0x14) = uStack_108._4_4_;
    *(undefined4 *)(pbVar2 + 0x18) = (undefined4)uStack_100;
    *(undefined4 *)(pbVar2 + 0x1c) = uStack_100._4_4_;
    *(undefined4 *)pbVar2 = (undefined4)uStack_118;
    *(undefined4 *)(pbVar2 + 4) = uStack_118._4_4_;
    *(undefined4 *)(pbVar2 + 8) = (undefined4)uStack_110;
    *(undefined4 *)(pbVar2 + 0xc) = uStack_110._4_4_;
    uStack_61 = 1;
    pbStack_130 = pbVar2;
    pdb_140e147c0(auStack_2c8,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001406c52f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_142f998b0 + *(int *)(&UNK_142f998b0 + (ulonglong)auStack_2c8[0] * 4)))
              (&UNK_142f998b0 + *(int *)(&UNK_142f998b0 + (ulonglong)auStack_2c8[0] * 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x70);
}

