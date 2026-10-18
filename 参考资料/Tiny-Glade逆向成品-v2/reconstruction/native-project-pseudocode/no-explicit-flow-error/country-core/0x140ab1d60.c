// VA 0x140ab1d60, PDB extent 2808 bytes
// country_core::utils::debug_viz::DebugRectangle3d::emit<country_core::utils::debug_viz::impl$3::show_for::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::debug_viz::DebugRectangle3d::emit<country_core::utils::debug_viz::impl$3::show_for::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 2808 */

void pdb_140ab1d60(byte *param_1,undefined8 *param_2)

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
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 in_XMM1_Da;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  ulonglong uStack_1a0;
  byte *pbStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  ulonglong uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  byte *pbStack_158;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float *pfStack_128;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  code *pcStack_110;
  byte *pbStack_108;
  code *pcStack_100;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  pbVar12 = param_1 + 0x14;
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x2c);
  uStack_178 = *param_2;
  uStack_170 = param_2[1];
  uStack_e2 = *(undefined1 *)(param_2 + 2);
  lVar14 = 0;
  pbStack_140 = param_1;
  while (lVar14 != 2) {
    uStack_15c = *(undefined4 *)((longlong)&uStack_1a8 + lVar14 * 4);
    pdb_140df3ac0(&uStack_138,pbVar12);
    pfVar11 = pfStack_128;
    uStack_f8 = (ulonglong)uStack_138;
    pbStack_f0 = (byte *)uStack_130;
    if (CONCAT44(fStack_11c,fStack_120) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_118._4_4_,(float)uStack_118),
                    CONCAT44(fStack_11c,fStack_120) << 2,4);
    }
    uVar18 = *(undefined4 *)(pbStack_140 + 0x10);
    uStack_1c8 = *(undefined4 *)pbStack_140;
    uStack_1c4 = *(undefined4 *)(pbStack_140 + 4);
    uStack_1c0 = *(undefined4 *)(pbStack_140 + 8);
    uStack_1bc = *(undefined4 *)(pbStack_140 + 0xc);
    uStack_e1 = 1;
    uVar17 = pdb_140df3ee0(pbVar12);
    uStack_130 = pdb_140f705d0;
    fStack_120 = 5.358429;
    fStack_11c = 1.4013e-45;
    uStack_118 = &uStack_1c8;
    pcStack_110 = pdb_140ab7920;
    pcStack_100 = pdb_1400aa270;
    uStack_e1 = 1;
    uStack_138 = (float *)&uStack_15c;
    pfStack_128 = (float *)pbVar12;
    pbStack_108 = param_1 + 0x34;
    pdb_140f60760(&uStack_1a0,&UNK_14304a048,&uStack_138);
    uVar15 = uStack_190;
    uStack_188 = uStack_1a0;
    pbStack_158 = pbStack_198;
    uStack_138._0_4_ = uStack_1c8;
    uStack_138._4_4_ = uStack_1c4;
    uStack_130._0_4_ = uStack_1c0;
    uStack_130._4_4_ = uStack_1bc;
    bVar1 = param_1[0x34];
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
    *(ulonglong *)(pbVar12 + 0x10) = uStack_f8;
    *(byte **)(pbVar12 + 0x18) = pbStack_f0;
    *(float **)(pbVar12 + 0x20) = pfVar11;
    *(undefined4 *)(pbVar12 + 0x28) = (undefined4)uStack_138;
    *(undefined4 *)(pbVar12 + 0x2c) = uStack_138._4_4_;
    *(undefined4 *)(pbVar12 + 0x30) = (undefined4)uStack_130;
    *(undefined4 *)(pbVar12 + 0x34) = uStack_130._4_4_;
    *(float **)(pbVar12 + 0x38) = pfVar11;
    *(undefined4 *)(pbVar12 + 0x40) = uVar17;
    *(undefined4 *)(pbVar12 + 0x44) = uVar18;
    pbVar12[0x48] = bVar1;
    uStack_130 = (code *)&UNK_14304a0e0;
    pbStack_180 = pbVar12;
    uStack_138 = (float *)pbVar12;
    if ((longlong)uVar15 < 0) {
      uVar16 = 0;
LAB_140ab2038:
      pdb_142dc7e2a(uVar16,uVar15);
      goto LAB_140ab234f;
    }
    if (uVar15 == 0) {
      pbVar12 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar16 = 1;
      pbVar12 = pub_1406abab0(uVar15,1);
      if (pbVar12 == (byte *)0x0) goto LAB_140ab2038;
      pub_142e32760(pbVar12,pbStack_158,uVar15);
    }
    uStack_138 = (float *)uStack_170;
    uStack_130 = (code *)CONCAT71(uStack_130._1_7_,uStack_e2);
    pfStack_128 = (float *)uVar15;
    fStack_120 = SUB84(pbVar12,0);
    fStack_11c = (float)((ulonglong)pbVar12 >> 0x20);
    uStack_118._0_4_ = (float)uVar15;
    uStack_118._4_4_ = (float)(uVar15 >> 0x20);
    pcStack_110 = (code *)pbStack_180;
    pbStack_108 = &UNK_14304a0e0;
    pdb_141a88350(uStack_178,&uStack_138);
    pbVar12 = pbStack_140 + 0x14;
    if (uStack_188 != 0) {
      pub_1406abac0(pbStack_158,uStack_188,1);
    }
  }
  uVar15 = 0;
  while( true ) {
    pbVar12 = pbStack_140;
    if (3 < uVar15) {
      return;
    }
    pbVar13 = pbStack_140 + 0x14;
    uVar18 = pdb_140df3e10(pbVar13,uVar15);
    uStack_138 = (float *)CONCAT44(in_XMM1_Da,uVar18);
    pdb_140df4540(&fStack_14c,&uStack_138,uVar2);
    uVar18 = pdb_140df3e10(pbVar13,uVar15);
    uStack_138 = (float *)CONCAT44(in_XMM1_Da,uVar18);
    pdb_140df4540(&fStack_168,&uStack_138,uVar3);
    fVar10 = fStack_144;
    fVar9 = fStack_148;
    fVar8 = fStack_14c;
    fVar7 = fStack_160;
    fVar6 = fStack_164;
    fVar5 = fStack_168;
    uVar18 = *(undefined4 *)(pbVar12 + 0x10);
    uStack_1b8 = *(undefined4 *)pbVar12;
    uStack_1b4 = *(undefined4 *)(pbVar12 + 4);
    uStack_1b0 = *(undefined4 *)(pbVar12 + 8);
    uStack_1ac = *(undefined4 *)(pbVar12 + 0xc);
    uStack_130 = pdb_140f33d80;
    fStack_120 = 7.6012573;
    fStack_11c = 1.4013e-45;
    uStack_118 = &uStack_1b8;
    pcStack_110 = pdb_140ab7920;
    pbStack_108 = pbVar12 + 0x34;
    pcStack_100 = pdb_1400aa270;
    uStack_138 = &fStack_14c;
    pfStack_128 = &fStack_168;
    pdb_140f60760(&uStack_1a0,&UNK_14304a048,&uStack_138);
    arg0 = uStack_190;
    uStack_f8 = uStack_1a0;
    pbStack_f0 = pbStack_198;
    fStack_120 = fStack_144;
    pfStack_128 = (float *)CONCAT44(fStack_148,fStack_14c);
    uStack_118._4_4_ = fStack_160;
    fStack_11c = fStack_168;
    uStack_118._0_4_ = fStack_164;
    uStack_138._0_4_ = uStack_1b8;
    uStack_138._4_4_ = uStack_1b4;
    uStack_130._0_4_ = uStack_1b0;
    uStack_130._4_4_ = uStack_1ac;
    bVar1 = pbVar12[0x34];
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x48,8);
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x48);
    }
    uVar15 = uVar15 + 1;
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
    *(undefined4 *)(pbVar12 + 0x10) = (undefined4)uStack_138;
    *(undefined4 *)(pbVar12 + 0x14) = uStack_138._4_4_;
    *(undefined4 *)(pbVar12 + 0x18) = (undefined4)uStack_130;
    *(undefined4 *)(pbVar12 + 0x1c) = uStack_130._4_4_;
    *(float **)(pbVar12 + 0x20) = pfStack_128;
    *(ulonglong *)(pbVar12 + 0x28) = CONCAT44(fStack_11c,fStack_120);
    *(ulonglong *)(pbVar12 + 0x30) = CONCAT44(uStack_118._4_4_,(float)uStack_118);
    *(float *)(pbVar12 + 0x38) =
         SQRT((fVar10 - fVar7) * (fVar10 - fVar7) +
              (fVar9 - fVar6) * (fVar9 - fVar6) + (fVar8 - fVar5) * (fVar8 - fVar5));
    *(undefined4 *)(pbVar12 + 0x3c) = uVar18;
    pbVar12[0x40] = bVar1;
    uStack_130 = (code *)&UNK_14304a0b0;
    uStack_138 = (float *)pbVar12;
    if ((longlong)arg0 < 0) break;
    in_XMM1_Da = (undefined4)uStack_138;
    if (arg0 == 0) {
      pbVar13 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar16 = 1;
      pbVar13 = pub_1406abab0(arg0,1);
      if (pbVar13 == (byte *)0x0) goto LAB_140ab22c1;
      pub_142e32760(pbVar13,pbStack_f0,arg0);
    }
    uStack_138 = (float *)uStack_170;
    uStack_130 = (code *)CONCAT71(uStack_130._1_7_,uStack_e2);
    pfStack_128 = (float *)arg0;
    fStack_120 = SUB84(pbVar13,0);
    fStack_11c = (float)((ulonglong)pbVar13 >> 0x20);
    uStack_118._0_4_ = (float)arg0;
    uStack_118._4_4_ = (float)(arg0 >> 0x20);
    pbStack_108 = &UNK_14304a0b0;
    pcStack_110 = (code *)pbVar12;
    pdb_141a88350(uStack_178,&uStack_138);
    if (uStack_f8 != 0) {
      pub_1406abac0(pbStack_f0,uStack_f8,1);
    }
  }
  uVar16 = 0;
LAB_140ab22c1:
  pbStack_140 = pbVar12;
  pdb_142dc7e2a(uVar16,arg0);
LAB_140ab234f:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

