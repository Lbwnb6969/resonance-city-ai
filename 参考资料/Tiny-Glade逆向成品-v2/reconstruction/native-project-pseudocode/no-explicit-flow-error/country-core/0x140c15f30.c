// VA 0x140c15f30, PDB extent 1595 bytes
// country_core::resources::grading_lut::GradingLut::load_png
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::grading_lut::GradingLut::load_png
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
   Extent: 1595 */

ulonglong * pdb_140c15f30(ulonglong *param_1,undefined8 param_2,ulonglong *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  ulonglong uStack_1b0;
  byte *pbStack_1a8;
  undefined8 uStack_1a0;
  int iStack_190;
  undefined4 uStack_18c;
  code *pcStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong *puStack_150;
  code *pcStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_100;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  int iStack_dc;
  ulonglong *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong *puStack_50;
  byte *pbStack_48;
  ulonglong *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pcStack_148 = pdb_140001020;
  puStack_150 = param_3;
  puStack_50 = param_3;
  pdb_140f60760(&puStack_d8,&UNK_143068d63,&puStack_150);
  puStack_40 = puStack_d8;
  pbStack_48 = (byte *)pcStack_d0;
  pdb_140d929f0(&uStack_1b0,pcStack_d0,uStack_c8);
  if (puStack_40 != (ulonglong *)0x0) {
    pub_1406abac0(pbStack_48,(ulonglong)puStack_40,1);
  }
  puStack_40 = (ulonglong *)uStack_1b0;
  pbStack_48 = pbStack_1a8;
  pdb_140da3220(&puStack_150,pbStack_1a8,uStack_1a0);
  if (puStack_40 != (ulonglong *)0x0) {
    pub_1406abac0(pbStack_48,(ulonglong)puStack_40,1);
  }
  if (puStack_150 == (ulonglong *)0x2) {
    uStack_68 = pcStack_178;
    uStack_60 = uStack_170;
    uStack_58 = uStack_168;
    uStack_78 = pcStack_148;
    uStack_70 = uStack_180;
    puVar5 = (ulonglong *)0x8000000000000009;
LAB_140c161f7:
    uStack_a8 = uStack_160;
    uStack_a0 = uStack_158;
    pcStack_d0 = uStack_78;
    uStack_c8 = (int *)uStack_70;
    uStack_c0 = uStack_68;
    uStack_b8 = (undefined4)uStack_60;
    uStack_b4 = uStack_60._4_4_;
    uStack_b0 = uStack_58;
    pcStack_188 = uStack_78;
    puStack_d8 = puVar5;
    uVar6 = pdb_142deb120(&puStack_d8);
    param_1[1] = uVar6;
    *param_1 = 0x8000000000000000;
  }
  else {
    uStack_88 = uStack_100;
    uStack_a8 = CONCAT44(uStack_11c,uStack_120);
    uStack_a0 = CONCAT44(uStack_114,uStack_118);
    uStack_b8 = uStack_130;
    uStack_b4 = uStack_12c;
    uStack_b0 = CONCAT44(uStack_124,uStack_128);
    uStack_c8 = (int *)CONCAT44(uStack_13c,uStack_140);
    uStack_c0 = (code *)CONCAT44(uStack_134,uStack_138);
    puStack_d8 = puStack_150;
    pcStack_d0 = pcStack_148;
    pdb_1417d6090(&iStack_190,&puStack_d8);
    puVar5 = (ulonglong *)CONCAT44(uStack_18c,iStack_190);
    uStack_58 = uStack_168;
    uStack_78 = pcStack_188;
    pcVar1 = uStack_78;
    uStack_70 = uStack_180;
    uVar2 = uStack_70;
    uStack_68 = pcStack_178;
    pcVar3 = uStack_68;
    uStack_60 = uStack_170;
    uVar4 = uStack_60;
    if (puVar5 != (ulonglong *)0x800000000000000a) goto LAB_140c161f7;
    uStack_78._0_4_ = SUB84(pcStack_188,0);
    uStack_78._4_4_ = (undefined4)((ulonglong)pcStack_188 >> 0x20);
    uStack_70._0_4_ = (undefined4)uStack_180;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_180 >> 0x20);
    uStack_68._0_4_ = SUB84(pcStack_178,0);
    uStack_68._4_4_ = (undefined4)((ulonglong)pcStack_178 >> 0x20);
    uStack_60._0_4_ = (undefined4)uStack_170;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_170 >> 0x20);
    uStack_1d8 = (undefined4)uStack_78;
    uStack_1d4 = uStack_78._4_4_;
    uStack_1d0 = (undefined4)uStack_70;
    uStack_1cc = uStack_70._4_4_;
    uStack_1c8 = (undefined4)uStack_68;
    uStack_1c4 = uStack_68._4_4_;
    uStack_1c0 = (undefined4)uStack_60;
    uStack_1bc = uStack_60._4_4_;
    uStack_1b8 = uStack_168;
    uStack_78 = pcVar1;
    uStack_70 = uVar2;
    uStack_68 = pcVar3;
    uStack_60 = uVar4;
    pdb_140daccf0(&uStack_f8,&uStack_1d8);
    pdb_140c18160(&uStack_78);
    if (iStack_dc == 0x10 && iStack_e0 == 0x100) {
      puStack_d8 = (ulonglong *)0x10001000000000;
      pcStack_d0 = (code *)0x125010800010010;
      uStack_c8 = (int *)CONCAT71(uStack_c8._1_7_,4);
      pdb_1415d5630(&puStack_150,param_2,&UNK_143068d77,0xb,&puStack_d8,1,pbStack_f0,uStack_e8);
      if ((int)puStack_150 != 0xb) {
        uStack_b8 = uStack_130;
        uStack_b4 = uStack_12c;
        puStack_d8 = puStack_150;
        pcStack_d0 = pcStack_148;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143069180,0x2b,&puStack_d8,&UNK_143069160,&UNK_143068db8);
      }
      param_1[2] = puStack_50[2];
      uVar6 = puStack_50[1];
      *param_1 = *puStack_50;
      param_1[1] = uVar6;
      *(undefined4 *)(param_1 + 3) = 0x100010;
      *(undefined2 *)((longlong)param_1 + 0x1c) = 0x10;
      param_1[4] = (ulonglong)pcStack_148;
      if (uStack_f8 == 0) {
        return param_1;
      }
      goto LAB_140c16278;
    }
    uStack_78 = (code *)CONCAT44(uStack_78._4_4_,iStack_e0);
    iStack_190 = iStack_dc;
    pcStack_d0 = pdb_140f71a50;
    uStack_c0 = pdb_140f71a50;
    puStack_d8 = &uStack_78;
    uStack_c8 = &iStack_190;
    pdb_140f60760(&puStack_150,&UNK_143068dd0,&puStack_d8);
    puStack_d8 = puStack_150;
    pcStack_d0 = pcStack_148;
    uStack_c8 = (int *)CONCAT44(uStack_13c,uStack_140);
    uVar6 = pdb_142de92b0(&puStack_d8);
    param_1[1] = uVar6;
    *param_1 = 0x8000000000000000;
    if (uStack_f8 != 0) {
      pub_1406abac0(pbStack_f0,uStack_f8,1);
    }
  }
  uStack_f8 = *puStack_50;
  if (uStack_f8 == 0) {
    return param_1;
  }
  pbStack_f0 = (byte *)puStack_50[1];
LAB_140c16278:
  pub_1406abac0(pbStack_f0,uStack_f8,1);
  return param_1;
}

