// VA 0x142053590, PDB extent 1650 bytes
// system_water::draw_water::draw_water
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/draw_water.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000142053985) overlaps instruction at (ram,0x000142053981)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_water::draw_water::draw_water
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/draw_water.rs
   Extent: 1650 */

void pdb_142053590(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  byte *param_5,undefined4 *param_6,undefined8 param_7,longlong *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,byte *param_12,
                  undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,
                  undefined8 *param_16)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined8 uVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  float extraout_XMM0_Da;
  float fVar16;
  float fVar17;
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  char cStack_130;
  byte bStack_12f;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  float fStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_d8;
  float fStack_d4;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float fStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar12 = *param_11;
  uStack_158 = param_11[4];
  uStack_150 = param_11[5];
  uStack_148 = param_11[6];
  uStack_140 = param_11[7];
  uStack_178 = param_11[8];
  uStack_170 = param_11[9];
  uStack_168 = *(undefined4 *)(param_11 + 10);
  uStack_164 = *(undefined4 *)((longlong)param_11 + 0x54);
  uStack_160 = *(undefined4 *)(param_11 + 0xb);
  uStack_15c = *(undefined4 *)((longlong)param_11 + 0x5c);
  if (*_DAT_143ca4500 != '\0') {
    return;
  }
  puVar13 = (undefined4 *)*param_15;
  lVar2 = param_15[4];
  uVar8 = param_15[8];
  puVar3 = (undefined8 *)*param_1;
  uStack_88 = puVar3[2];
  uStack_98 = (undefined8 *)*puVar3;
  uStack_90 = (code *)puVar3[1];
  uStack_118 = param_2;
  puStack_110 = param_4;
  uVar4 = pdb_140a3b080(uVar8,&uStack_98,lVar2);
  uVar14 = (ulonglong)uVar4;
  uStack_88 = puVar3[2];
  uStack_98 = (undefined8 *)*puVar3;
  uStack_90._0_4_ = *(undefined4 *)(puVar3 + 1);
  uStack_90._4_4_ = *(undefined4 *)((longlong)puVar3 + 0xc);
  pdb_140a3b030(&cStack_130,uVar8,&uStack_98);
  if (cStack_130 == '\v') {
    fVar16 = *(float *)(lVar2 + 4);
    if (0x7f7fffff < (uint)ABS(fVar16)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143448d37,0x28,&UNK_143448d80);
    }
    puVar11 = &UNK_143448d98;
    uStack_c0 = pdb_1408ffd40(*param_3,&UNK_143448d98,5,4);
    param_10 = (undefined8 *)*param_10;
    puStack_b8 = puVar11;
    pdb_140a8e090(&uStack_a8,param_10);
    pdb_140a8e090(&uStack_98,param_10);
    puVar15 = auStack_188;
    pdb_140defa80(puVar15,(undefined4)uStack_98,(undefined4)uStack_90,_DAT_142e3c670 * fVar16);
    uVar5 = pdb_1408ffab0(&uStack_c0);
    pcVar7 = (char *)pdb_140bfacd0(param_12,uVar5,puVar15,uVar12,&uStack_158,&uStack_178);
    bVar9 = *param_12;
    uVar10 = (ulonglong)bVar9;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar9) {
    case 0:
      goto LAB_142053b47;
    case 2:
      if ((char)pcVar7 == '\0') {
        return;
      }
      pdb_140a8e090(&uStack_98,param_10);
      pdb_140defa80((longlong)&uStack_98 + 4,(undefined4)uStack_98,(undefined4)uStack_90,fVar16);
      pdb_140a8e090(&uStack_d8,param_10);
      uStack_78 = 0;
      uStack_88 = uStack_88 & 0xffffffff;
      fStack_80 = fStack_d4 + _DAT_142e37838;
      uStack_98 = (undefined8 *)CONCAT62(uStack_98._2_6_,0x100);
      *(undefined4 *)param_16[2] = *(undefined4 *)((longlong)param_16 + 0x1c);
      param_12 = (byte *)*param_16;
      puVar13 = *(undefined4 **)(param_12 + 0x30);
      uVar12 = *(undefined8 *)(param_12 + 0x40);
      if (puVar13 == *(undefined4 **)(param_12 + 0x20)) {
        pdb_142d7ee50(param_12 + 0x20);
      }
      pcVar7 = *(char **)(param_12 + 0x28);
      uVar10 = (longlong)puVar13 * 0x40;
      *(undefined8 *)(pcVar7 + uVar10 + 0x30) = uStack_68;
      *(undefined8 *)(pcVar7 + uVar10 + 0x20) = uStack_78;
      *(undefined8 *)(pcVar7 + uVar10 + 0x20 + 8) = uStack_70;
      *(ulonglong *)(pcVar7 + uVar10 + 0x10) = uStack_88;
      *(ulonglong *)((longlong)(pcVar7 + uVar10 + 0x10) + 8) = CONCAT44(uStack_7c,fStack_80);
      pcVar1 = pcVar7 + uVar10;
      *(undefined4 *)pcVar1 = (undefined4)uStack_98;
      *(undefined4 *)(pcVar1 + 4) = uStack_98._4_4_;
      *(undefined4 *)(pcVar1 + 8) = (undefined4)uStack_90;
      *(undefined4 *)(pcVar1 + 0xc) = uStack_90._4_4_;
    case 6:
      *(undefined8 *)(pcVar7 + uVar10 + 0x38) = uVar12;
      *(longlong *)(param_12 + 0x30) = (longlong)puVar13 + 1;
      *(longlong *)(param_12 + 0x40) = *(longlong *)(param_12 + 0x40) + 1;
code_r0x000142053a8a:
      uStack_108 = 2;
      break;
    case 3:
      goto code_r0x000142053995;
    case 4:
      *(undefined1 *)((ulonglong)pcVar7 & 0xffffffffffffff00) =
           *(undefined1 *)((ulonglong)pcVar7 & 0xffffffffffffff00);
      param_5 = param_12;
      goto code_r0x000142053ad7;
    case 5:
      goto code_r0x00014205388f;
    case 7:
      *pcVar7 = *pcVar7 + (char)pcVar7;
      auStack_100 = ZEXT416((uint)fVar16);
    case 1:
code_r0x000142053981:
      uStack_108 = 0;
      auStack_100[4] = bVar9;
      auStack_100._0_4_ = fVar16;
    }
  }
  else {
    if (cStack_130 != '\x04') {
      return;
    }
    if ((bStack_12f & 3) != 0) {
      return;
    }
    fVar16 = extraout_XMM0_Da;
    if ((uVar4 & 1) == 0) {
      fVar16 = (float)pdb_140de8220(_DAT_142e37988,_DAT_142e37830,*puVar13);
      fVar16 = fVar16 * _DAT_142e37adc + (_DAT_142e36f28 - fVar16);
    }
    if (0x7f7fffff < (uint)ABS(fVar16)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143448d37,0x28,&UNK_143448d60);
    }
    puVar11 = &UNK_143448d78;
    uStack_c0 = pdb_1408ffd40(*param_3,&UNK_143448d78,6,0);
    puStack_b8 = puVar11;
    pdb_140a8e090(&uStack_a8,*param_10);
    pdb_140bf25f0(&uStack_98,*param_14,0);
    uStack_a0 = (undefined4)uStack_90;
    uStack_a8 = uStack_98;
    uVar12 = *param_13;
    uStack_90 = pdb_140f33df0;
    uStack_98 = &uStack_a8;
    pdb_140f60760(&uStack_d8,&UNK_143448d9d,&uStack_98);
    uStack_90._0_4_ = uStack_a0;
    uStack_98 = (undefined8 *)uStack_a8;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x20,8);
    pbStack_b0 = pbStack_d0;
    if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    fVar17 = _DAT_142e36f50 * fVar16;
    pbVar6[0] = 1;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6[4] = 0;
    pbVar6[5] = 0;
    pbVar6[6] = 0;
    pbVar6[7] = 0;
    pbVar6[8] = 1;
    pbVar6[9] = 0;
    pbVar6[10] = 0;
    pbVar6[0xb] = 0;
    pbVar6[0xc] = 0;
    pbVar6[0xd] = 0;
    pbVar6[0xe] = 0;
    pbVar6[0xf] = 0;
    *(undefined8 **)(pbVar6 + 0x10) = uStack_98;
    *(undefined4 *)(pbVar6 + 0x18) = (undefined4)uStack_90;
    *(float *)(pbVar6 + 0x1c) = fVar17;
    pdb_1409baea0(&uStack_98,pbStack_d0,uStack_c8,pbVar6,&UNK_143448db0);
    uStack_e8 = uStack_78;
    auStack_100._8_4_ = (undefined4)uStack_88;
    auStack_100._12_4_ = uStack_88._4_4_;
    fStack_f0 = fStack_80;
    uStack_ec = uStack_7c;
    uStack_108 = (undefined4)uStack_98;
    uStack_104 = uStack_98._4_4_;
    auStack_100._4_4_ = uStack_90._4_4_;
    auStack_100._0_4_ = (undefined4)uStack_90;
    pdb_140b133a0(uVar12,&uStack_108);
    if (CONCAT44(fStack_d4,uStack_d8) != 0) {
      pub_1406abac0(pbStack_b0,CONCAT44(fStack_d4,uStack_d8),1);
    }
    uVar5 = pdb_1408ffab0(&uStack_c0);
    pdb_140bfaf90(param_12,uVar5,1);
    pcVar7 = (char *)(ulonglong)*param_12;
code_r0x00014205388f:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(&UNK_143448e08 + *(int *)(&UNK_143448e08 + (longlong)pcVar7 * 4)) {
    case (undefined *)0x14205389f:
      bVar9 = 0;
      goto code_r0x000142053981;
    case (undefined *)0x142053995:
code_r0x000142053995:
      uStack_108 = 3;
      break;
    case (undefined *)0x142053a8a:
      goto code_r0x000142053a8a;
    case (undefined *)0x142053b47:
      goto LAB_142053b47;
    }
  }
  *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
  puVar15 = (undefined1 *)*param_8;
  uVar14 = *(ulonglong *)(puVar15 + 0x30);
  uVar8 = *(undefined8 *)(puVar15 + 0x40);
  uVar12 = param_7;
  puVar13 = param_6;
  param_10 = param_9;
  if (uVar14 == *(ulonglong *)(puVar15 + 0x20)) {
    pdb_142d7e8a0(puVar15 + 0x20);
  }
code_r0x000142053ad7:
  *(undefined8 *)(*(longlong *)(puVar15 + 0x28) + uVar14 * 8) = uVar8;
  *(ulonglong *)(puVar15 + 0x30) = uVar14 + 1;
  *(longlong *)(puVar15 + 0x40) = *(longlong *)(puVar15 + 0x40) + 1;
  pdb_140a698f0(*param_10);
  uStack_90 = (code *)CONCAT44(uStack_90._4_4_,uStack_a0);
  uStack_98 = (undefined8 *)uStack_a8;
  *(undefined4 *)puStack_110[2] = *(undefined4 *)((longlong)puStack_110 + 0x1c);
  uVar8 = pdb_1406d0830(*puStack_110);
  pdb_142878e40(&uStack_108,&uStack_98,uStack_118,uVar8,param_5,puVar13,uVar12);
LAB_142053b47:
  return;
}

