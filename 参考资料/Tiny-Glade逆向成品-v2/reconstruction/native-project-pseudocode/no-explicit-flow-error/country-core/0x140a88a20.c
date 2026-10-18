// VA 0x140a88a20, PDB extent 5 bytes
// country_core::utils::debug_viz::DebugRectangle3d::show
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::debug_viz::DebugRectangle3d::show
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 5 */

void pdb_140a88a20(undefined4 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulonglong arg0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 in_XMM1_Da;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 auStack_1a8 [2];
  byte *pbStack_198;
  byte *pbStack_190;
  ulonglong uStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  float *pfStack_138;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  code *pcStack_120;
  byte *pbStack_118;
  code *pcStack_110;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  uVar2 = param_1[0xb];
  uVar3 = param_1[0xc];
  auStack_1a8[0] = *(undefined8 *)(param_1 + 0xb);
  lVar14 = 0;
  uStack_178 = param_2;
  while (puVar16 = param_1 + 5, lVar14 != 2) {
    uStack_154 = *(undefined4 *)((longlong)auStack_1a8 + lVar14 * 4);
    pdb_140df3ac0(&uStack_148,puVar16);
    pfVar11 = pfStack_138;
    pbStack_100 = (byte *)uStack_148;
    pbStack_f8 = (byte *)uStack_140;
    if (CONCAT44(fStack_12c,fStack_130) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_128._4_4_,(float)uStack_128),
                    CONCAT44(fStack_12c,fStack_130) << 2,4);
    }
    uVar19 = param_1[4];
    uStack_1c8 = *param_1;
    uStack_1c4 = param_1[1];
    uStack_1c0 = param_1[2];
    uStack_1bc = param_1[3];
    uStack_e1 = 1;
    uVar18 = pdb_140df3ee0(puVar16);
    uStack_148 = (float *)&uStack_154;
    uStack_140 = pdb_140f705d0;
    fStack_130 = 5.358429;
    fStack_12c = 1.4013e-45;
    uStack_128 = &uStack_1c8;
    pcStack_120 = pdb_140ab7920;
    pcStack_110 = pdb_1400aa270;
    uStack_e1 = 1;
    pfStack_138 = (float *)puVar16;
    pbStack_118 = (byte *)(param_1 + 0xd);
    pdb_140f60760(&pbStack_198,&UNK_14304a048,&uStack_148);
    uVar15 = uStack_188;
    pbStack_f0 = pbStack_198;
    pbStack_150 = pbStack_190;
    uStack_148._0_4_ = uStack_1c8;
    uStack_148._4_4_ = uStack_1c4;
    uStack_140._0_4_ = uStack_1c0;
    uStack_140._4_4_ = uStack_1bc;
    bVar1 = *(byte *)(param_1 + 0xd);
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x50,8);
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    lVar14 = lVar14 + 1;
    pbVar12[0] = 1;
    pbVar12[1] = 0;
    pbVar12[2] = 0;
    pbVar12[3] = 0;
    pbVar12[4] = 0;
    pbVar12[5] = 0;
    pbVar12[6] = 0;
    pbVar12[7] = 0;
    pbVar12[8] = 1;
    pbVar12[9] = 0;
    pbVar12[10] = 0;
    pbVar12[0xb] = 0;
    pbVar12[0xc] = 0;
    pbVar12[0xd] = 0;
    pbVar12[0xe] = 0;
    pbVar12[0xf] = 0;
    *(byte **)(pbVar12 + 0x10) = pbStack_100;
    *(byte **)(pbVar12 + 0x18) = pbStack_f8;
    *(float **)(pbVar12 + 0x20) = pfVar11;
    *(undefined4 *)(pbVar12 + 0x28) = (undefined4)uStack_148;
    *(undefined4 *)(pbVar12 + 0x2c) = uStack_148._4_4_;
    *(undefined4 *)(pbVar12 + 0x30) = (undefined4)uStack_140;
    *(undefined4 *)(pbVar12 + 0x34) = uStack_140._4_4_;
    *(float **)(pbVar12 + 0x38) = pfVar11;
    *(undefined4 *)(pbVar12 + 0x40) = uVar18;
    *(undefined4 *)(pbVar12 + 0x44) = uVar19;
    pbVar12[0x48] = bVar1;
    uStack_140 = (code *)&UNK_14304a080;
    pbStack_180 = pbVar12;
    uStack_148 = (float *)pbVar12;
    if ((longlong)uVar15 < 0) {
      uVar17 = 0;
LAB_140ab1547:
      pdb_142dc7e2a(uVar17,uVar15);
      goto LAB_140ab184f;
    }
    if (uVar15 == 0) {
      pbVar12 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar17 = 1;
      pbVar12 = pub_1406abab0(uVar15,1);
      if (pbVar12 == (byte *)0x0) goto LAB_140ab1547;
      pub_142e32760(pbVar12,pbStack_150,uVar15);
    }
    uStack_140 = (code *)CONCAT71(uStack_140._1_7_,2);
    pfStack_138 = (float *)uVar15;
    fStack_130 = SUB84(pbVar12,0);
    fStack_12c = (float)((ulonglong)pbVar12 >> 0x20);
    uStack_128._0_4_ = (float)uVar15;
    uStack_128._4_4_ = (float)(uVar15 >> 0x20);
    pcStack_120 = (code *)pbStack_180;
    pbStack_118 = &UNK_14304a080;
    pdb_141a88350(uStack_178,&uStack_148);
    if (pbStack_f0 != (byte *)0x0) {
      pub_1406abac0(pbStack_150,(ulonglong)pbStack_f0,1);
    }
  }
  uVar15 = 0;
  while( true ) {
    uVar19 = pdb_140df3e10(param_1 + 5,uVar15);
    uStack_148 = (float *)CONCAT44(in_XMM1_Da,uVar19);
    pdb_140df4540(&fStack_160,&uStack_148,uVar2);
    uVar19 = pdb_140df3e10(param_1 + 5,uVar15);
    uStack_148 = (float *)CONCAT44(in_XMM1_Da,uVar19);
    pdb_140df4540(&fStack_16c,&uStack_148,uVar3);
    fVar10 = fStack_158;
    fVar9 = fStack_15c;
    fVar8 = fStack_160;
    fVar7 = fStack_164;
    fVar6 = fStack_168;
    fVar5 = fStack_16c;
    uVar19 = param_1[4];
    uStack_1b8 = *param_1;
    uStack_1b4 = param_1[1];
    uStack_1b0 = param_1[2];
    uStack_1ac = param_1[3];
    uStack_140 = pdb_140f33d80;
    fStack_130 = 7.6012573;
    fStack_12c = 1.4013e-45;
    uStack_128 = &uStack_1b8;
    pcStack_120 = pdb_140ab7920;
    pbStack_118 = (byte *)(param_1 + 0xd);
    pcStack_110 = pdb_1400aa270;
    uStack_148 = &fStack_160;
    pfStack_138 = &fStack_16c;
    pdb_140f60760(&pbStack_198,&UNK_14304a048,&uStack_148);
    arg0 = uStack_188;
    pbVar12 = pbStack_198;
    pbStack_f0 = pbStack_190;
    fStack_130 = fStack_158;
    pfStack_138 = (float *)CONCAT44(fStack_15c,fStack_160);
    uStack_128._4_4_ = fStack_164;
    fStack_12c = fStack_16c;
    uStack_128._0_4_ = fStack_168;
    uStack_148._0_4_ = uStack_1b8;
    uStack_148._4_4_ = uStack_1b4;
    uStack_140._0_4_ = uStack_1b0;
    uStack_140._4_4_ = uStack_1ac;
    bVar1 = *(byte *)(param_1 + 0xd);
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x48,8);
    pbStack_100 = pbVar12;
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x48);
    }
    uVar15 = uVar15 + 1;
    pbVar13[0] = 1;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    pbVar13[4] = 0;
    pbVar13[5] = 0;
    pbVar13[6] = 0;
    pbVar13[7] = 0;
    pbVar13[8] = 1;
    pbVar13[9] = 0;
    pbVar13[10] = 0;
    pbVar13[0xb] = 0;
    pbVar13[0xc] = 0;
    pbVar13[0xd] = 0;
    pbVar13[0xe] = 0;
    pbVar13[0xf] = 0;
    *(undefined4 *)(pbVar13 + 0x10) = (undefined4)uStack_148;
    *(undefined4 *)(pbVar13 + 0x14) = uStack_148._4_4_;
    *(undefined4 *)(pbVar13 + 0x18) = (undefined4)uStack_140;
    *(undefined4 *)(pbVar13 + 0x1c) = uStack_140._4_4_;
    *(float **)(pbVar13 + 0x20) = pfStack_138;
    *(ulonglong *)(pbVar13 + 0x28) = CONCAT44(fStack_12c,fStack_130);
    *(ulonglong *)(pbVar13 + 0x30) = CONCAT44(uStack_128._4_4_,(float)uStack_128);
    *(float *)(pbVar13 + 0x38) =
         SQRT((fVar10 - fVar7) * (fVar10 - fVar7) +
              (fVar9 - fVar6) * (fVar9 - fVar6) + (fVar8 - fVar5) * (fVar8 - fVar5));
    *(undefined4 *)(pbVar13 + 0x3c) = uVar19;
    pbVar13[0x40] = bVar1;
    uStack_140 = (code *)&UNK_14304a050;
    uStack_148 = (float *)pbVar13;
    pbStack_f8 = pbVar13;
    if ((longlong)arg0 < 0) break;
    in_XMM1_Da = (undefined4)uStack_148;
    if (arg0 == 0) {
      pbVar12 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar17 = 1;
      pbVar12 = pub_1406abab0(arg0,1);
      if (pbVar12 == (byte *)0x0) goto LAB_140ab181f;
      pub_142e32760(pbVar12,pbStack_f0,arg0);
    }
    uStack_140 = (code *)CONCAT71(uStack_140._1_7_,2);
    pfStack_138 = (float *)arg0;
    fStack_130 = SUB84(pbVar12,0);
    fStack_12c = (float)((ulonglong)pbVar12 >> 0x20);
    uStack_128._0_4_ = (float)arg0;
    uStack_128._4_4_ = (float)(arg0 >> 0x20);
    pcStack_120 = (code *)pbStack_f8;
    pbStack_118 = &UNK_14304a050;
    pdb_141a88350(uStack_178,&uStack_148);
    if (pbStack_100 != (byte *)0x0) {
      pub_1406abac0(pbStack_f0,(ulonglong)pbStack_100,1);
    }
    if (3 < uVar15) {
      return;
    }
  }
  uVar17 = 0;
LAB_140ab181f:
  pdb_142dc7e2a(uVar17,arg0);
LAB_140ab184f:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

