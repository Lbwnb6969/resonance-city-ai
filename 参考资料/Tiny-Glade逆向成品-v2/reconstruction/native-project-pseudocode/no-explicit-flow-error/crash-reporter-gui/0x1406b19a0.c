// VA 0x1406b19a0, PDB extent 1139 bytes
// crash_reporter_gui::Controls::more_info_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: crash_reporter_gui::Controls::more_info_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 1139 */

void pdb_1406b19a0(ulonglong param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulonglong uStack_150;
  byte *pbStack_148;
  ulonglong uStack_140;
  undefined8 **ppuStack_138;
  byte *pbStack_130;
  undefined8 *puStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulonglong **ppuStack_c8;
  code *pcStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  ulonglong uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined8 *puStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pbVar4 = (byte *)0x1b;
  ppuStack_138 = (undefined8 **)pdb_140dc6290(&UNK_142f98109);
  ppuStack_c8 = (ulonglong **)&ppuStack_138;
  pcStack_c0 = pdb_1402ed400;
  pbStack_130 = pbVar4;
  pdb_140f60760(&uStack_150,&UNK_142f98124,&ppuStack_c8);
  if ((longlong)uStack_140 < 0) {
    uVar5 = 0;
LAB_1406b1a1a:
    pbStack_48 = pbStack_148;
    pdb_142dc7e2a(uVar5,uStack_140);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uStack_140 == 0) {
    pbStack_a0 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar5 = 1;
    pbStack_a0 = pub_1406abab0(uStack_140,1);
    if (pbStack_a0 == (byte *)0x0) goto LAB_1406b1a1a;
    pub_142e32760(pbStack_a0,pbStack_148,uStack_140);
  }
  ppuStack_c8 = (ulonglong **)0x0;
  pcStack_c0 = (code *)&UNK_143267ca5;
  puStack_b8 = (undefined8 *)0x9;
  uStack_b0 = CONCAT53(uStack_b0._3_5_,0x40300);
  uStack_a8 = uStack_140;
  uStack_98 = uStack_140;
  uStack_90 = 0;
  uStack_88 = 0x3fa6666600000000;
  uStack_80 = CONCAT22(uStack_80._2_2_,2);
  uStack_78 = 2;
  uStack_70 = 0;
  uStack_5c = 1;
  uStack_5a = 0;
  if (uStack_150 != 0) {
    pub_1406abac0(pbStack_148,uStack_150,1);
  }
  pdb_140fb3190(&ppuStack_138,&ppuStack_c8);
  if (uStack_120 == 0x800000000000000a) goto LAB_1406b1b67;
  puVar2 = &uStack_110;
  uVar3 = 1;
  if ((longlong)uStack_120 < 0) {
    uVar3 = uStack_120 ^ 0x8000000000000000;
  }
  if (uVar3 < 9) {
    if ((0x1ddUL >> (uVar3 & 0x3f) & 1) != 0) goto LAB_1406b1b67;
    if (uVar3 != 1) goto LAB_1406b1b50;
    if (uStack_120 == 0) goto LAB_1406b1b67;
    puVar2 = &uStack_118;
  }
  else {
LAB_1406b1b50:
    uStack_120 = uStack_118;
    if (uStack_118 == 0) goto LAB_1406b1b67;
  }
  pub_1406abac0((byte *)*puVar2,uStack_120,1);
LAB_1406b1b67:
  uStack_120 = 0x8000000000000006;
  ppuStack_c8 = ppuStack_138;
  pcStack_c0 = (code *)pbStack_130;
  uStack_98 = uStack_108;
  uStack_90 = (undefined4)uStack_100;
  uStack_8c = uStack_100._4_4_;
  uStack_88._0_4_ = uStack_f8;
  uStack_88._4_4_ = uStack_f4;
  uStack_80 = uStack_f0;
  uStack_7c = uStack_ec;
  uStack_78 = (undefined2)uStack_e8;
  uStack_76 = (undefined2)((ulonglong)uStack_e8 >> 0x10);
  uStack_74 = uStack_e8._4_4_;
  uStack_70 = (undefined4)uStack_e0;
  uStack_6c = uStack_e0._4_4_;
  uStack_68 = (undefined4)uStack_d8;
  uStack_64 = uStack_d8._4_4_;
  uStack_60 = (undefined4)uStack_d0;
  uStack_5c = (undefined2)((ulonglong)uStack_d0 >> 0x20);
  uStack_5a = (undefined1)((ulonglong)uStack_d0 >> 0x30);
  uStack_59 = (undefined1)((ulonglong)uStack_d0 >> 0x38);
  puStack_b8 = puStack_128;
  uStack_b0 = 0x8000000000000006;
  uStack_a8 = param_1;
  pbStack_a0 = (byte *)param_2;
  if ((ulonglong **)0x4 < ppuStack_138) {
    pbStack_48 = pbStack_130;
    puStack_50 = puStack_128;
    uStack_118 = param_1;
    uStack_110 = param_2;
    if ((code *)*puStack_128 != (code *)0x0) {
      (*(code *)*puStack_128)(pbStack_130);
    }
    if (puStack_50[1] != 0) {
      pub_1406abac0(pbStack_48,puStack_50[1],puStack_50[2]);
    }
  }
  ppuStack_c8 = (ulonglong **)0x5;
  pcStack_c0 = (code *)0x1;
  puStack_b8 = (undefined8 *)&UNK_142f98130;
  uStack_100 = CONCAT44(uStack_8c,uStack_90);
  uStack_118 = uStack_a8;
  uStack_110 = (ulonglong)pbStack_a0;
  uStack_108 = uStack_98;
  uStack_f8 = (undefined4)uStack_88;
  uStack_f4 = uStack_88._4_4_;
  uStack_f0 = uStack_80;
  uStack_ec = uStack_7c;
  uStack_e8 = CONCAT44(uStack_74,CONCAT22(uStack_76,uStack_78));
  ppuStack_138 = (undefined8 **)0x5;
  pbStack_130 = (byte *)0x1;
  puStack_128 = (undefined8 *)&UNK_142f98130;
  uStack_120 = uStack_b0;
  uStack_d0 = CONCAT17(uStack_59,CONCAT16(uStack_5a,CONCAT24(uStack_5c,uStack_60)));
  uStack_e0 = 0;
  uStack_d8 = 0;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x70,8);
  if (pbVar4 != (byte *)0x0) {
    *(undefined8 *)(pbVar4 + 0x60) = uStack_d8;
    *(undefined8 *)(pbVar4 + 0x68) = uStack_d0;
    *(undefined8 *)(pbVar4 + 0x50) = uStack_e8;
    *(undefined8 *)(pbVar4 + 0x58) = uStack_e0;
    *(ulonglong *)(pbVar4 + 0x40) = CONCAT44(uStack_f4,uStack_f8);
    *(ulonglong *)(pbVar4 + 0x48) = CONCAT44(uStack_ec,uStack_f0);
    *(undefined8 *)(pbVar4 + 0x30) = uStack_108;
    *(undefined8 *)(pbVar4 + 0x38) = uStack_100;
    *(ulonglong *)(pbVar4 + 0x20) = uStack_118;
    *(ulonglong *)(pbVar4 + 0x28) = uStack_110;
    *(undefined8 **)(pbVar4 + 0x10) = puStack_128;
    *(ulonglong *)(pbVar4 + 0x18) = uStack_120;
    *(undefined8 ***)pbVar4 = ppuStack_138;
    *(byte **)(pbVar4 + 8) = pbStack_130;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x70);
}

