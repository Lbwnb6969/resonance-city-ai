// VA 0x140bfd890, PDB extent 2583 bytes
// country_core::systems::wall::shapes::circle::signifiers::edit_line::signifier_edit_circle_line
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/signifiers/edit_line.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::signifiers::edit_line::signifier_edit_circle_line
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/signifiers/edit_line.rs
   Extent: 2583 */

void pdb_140bfd890(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong lStack_1b8;
  float *pfStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_18c;
  byte *pbStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  byte *pbStack_168;
  undefined8 uStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  undefined *puStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float **ppfStack_118;
  byte *pbStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pbVar12 = (byte *)*param_2;
  pbStack_188 = pbVar12;
  if (pbVar12[0x38] == 0) {
    lVar2 = *(longlong *)(pbVar12 + 8);
    plStack_100 = param_1;
    puStack_f8 = param_3;
    pdb_140defa80(&uStack_128,0,0,*(float *)(pbVar12 + 0x18) + _DAT_143016280);
    fVar25 = _DAT_142f95160;
    fVar23 = (float)pdb_140def2c0(&uStack_128);
    uStack_128 = (byte *)CONCAT44((float)((ulonglong)uStack_128 >> 0x20) - fVar25,
                                  SUB84(uStack_128,0) - fVar23);
    uVar3 = *param_4;
    pbVar4 = *(byte **)pbVar12;
    uStack_160 = pdb_140c05040;
    pbStack_168 = pbVar12;
    pdb_140f60760(&pfStack_1b0,&UNK_143067a53,&pbStack_168);
    pdb_14007ee60();
    pbStack_140 = pub_1406abab0(0x28,8);
    if (pbStack_140 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x28);
    }
    pbStack_140[0] = 1;
    pbStack_140[1] = 0;
    pbStack_140[2] = 0;
    pbStack_140[3] = 0;
    pbStack_140[4] = 0;
    pbStack_140[5] = 0;
    pbStack_140[6] = 0;
    pbStack_140[7] = 0;
    pbStack_140[8] = 1;
    pbStack_140[9] = 0;
    pbStack_140[10] = 0;
    pbStack_140[0xb] = 0;
    pbStack_140[0xc] = 0;
    pbStack_140[0xd] = 0;
    pbStack_140[0xe] = 0;
    pbStack_140[0xf] = 0;
    *(undefined4 *)(pbStack_140 + 0x10) = (undefined4)uStack_128;
    *(undefined4 *)(pbStack_140 + 0x14) = uStack_128._4_4_;
    *(undefined4 *)(pbStack_140 + 0x18) = (undefined4)uStack_120;
    *(undefined4 *)(pbStack_140 + 0x1c) = uStack_120._4_4_;
    *(longlong *)(pbStack_140 + 0x20) = lVar2;
    uStack_160 = (code *)&UNK_143067a68;
    pbStack_168 = pbStack_140;
    if ((longlong)pbStack_1a0 < 0) {
      uVar22 = 0;
      pbStack_110 = pbStack_140;
LAB_140bfd9ed:
      pdb_142dc7e2a(uVar22,pbStack_1a0);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (pbStack_1a0 == (byte *)0x0) {
      pbVar12 = (byte *)0x1;
    }
    else {
      pbStack_110 = pbStack_140;
      pdb_14007ee60();
      uVar22 = 1;
      pbVar12 = pub_1406abab0((ulonglong)pbStack_1a0,1);
      if (pbVar12 == (byte *)0x0) goto LAB_140bfd9ed;
      pub_142e32760(pbVar12,pbStack_1a8,pbStack_1a0);
      pbStack_140 = pbStack_110;
    }
    uStack_160 = (code *)((ulonglong)uStack_160 & 0xffffffffffffff00);
    pbStack_158 = pbStack_1a0;
    pbStack_148 = pbStack_1a0;
    puStack_138 = &UNK_143067a68;
    pbStack_168 = pbVar4;
    pbStack_150 = pbVar12;
    pdb_141a88350(uVar3,&pbStack_168);
    param_1 = plStack_100;
    param_3 = puStack_f8;
    if (pfStack_1b0 != (float *)0x0) {
      pub_1406abac0(pbStack_1a8,(ulonglong)pfStack_1b0,1);
      param_1 = plStack_100;
      param_3 = puStack_f8;
    }
  }
  fVar11 = _DAT_143016280;
  fVar10 = _DAT_142f95160;
  fVar9 = _DAT_142e3b1d8;
  uVar8 = _DAT_142e3787c;
  fVar23 = _DAT_142e37848;
  fVar25 = _DAT_142e36f28;
  lStack_108 = *param_1;
  lStack_170 = param_1[1];
  lVar2 = param_1[2];
  puVar18 = *(uint **)(lStack_108 + 0xf8);
  puVar1 = puVar18 + *(longlong *)(lStack_108 + 0x100);
  pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,*(undefined1 *)(lStack_108 + 0x108));
  uStack_18c = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar3 = *param_3;
  puVar5 = (undefined4 *)param_3[2];
  lVar17 = 0;
  lStack_1b8 = 8;
  puStack_f8 = (undefined8 *)0x0;
  plStack_100 = (longlong *)0x0;
  lVar19 = 0;
  uVar20 = 0;
  do {
    if ((char)pbStack_110 == '\0') {
      if (uVar20 == (uint)lVar17) {
        if (puVar18 == puVar1) {
          return;
        }
        while( true ) {
          lVar17 = *(longlong *)
                    (*(longlong *)(lStack_170 + 0x100) + 0x58 + (ulonglong)*puVar18 * 0xa0);
          if (lVar17 != 0) break;
          puVar18 = puVar18 + 1;
          if (puVar18 == puVar1) {
            return;
          }
        }
        lVar15 = *(longlong *)(lStack_170 + 0x100) + (ulonglong)*puVar18 * 0xa0;
        uVar14 = (ulonglong)*(uint *)(lVar15 + 0x94);
        lVar19 = *(longlong *)(lStack_170 + 0x1a0);
        uVar13 = *(ulonglong *)(lVar19 + 0x40 + uVar14 * 0x48);
        lVar21 = *(longlong *)(lVar19 + 0x18 + uVar14 * 0x48);
        lVar19 = *(longlong *)(lVar19 + 0x38 + uVar14 * 0x48);
        if ((*(ulonglong *)(lStack_108 + 0x118) < uVar13) &&
           (uVar14 = *(ulonglong *)(lVar19 + *(ulonglong *)(lStack_108 + 0x118) * 8), uVar14 != 0))
        {
          plStack_100 = *(longlong **)(lVar21 + 0x10 + ~uVar14 * 0x30);
          uVar14 = *(ulonglong *)(lStack_108 + 0x120);
          if (uVar13 <= uVar14) goto LAB_140bfdd5b;
LAB_140bfdcf1:
          uVar13 = *(ulonglong *)(lVar19 + uVar14 * 8);
          if (uVar13 == 0) goto LAB_140bfdd5b;
          puStack_f8 = *(undefined8 **)(lVar21 + 0x10 + ~uVar13 * 0x30);
        }
        else {
          plStack_100 = (longlong *)0x0;
          uVar14 = *(ulonglong *)(lStack_108 + 0x120);
          if (uVar14 < uVar13) goto LAB_140bfdcf1;
LAB_140bfdd5b:
          puStack_f8 = (undefined8 *)0x0;
        }
        lVar16 = ~*(ulonglong *)(lVar19 + *(longlong *)(lStack_108 + 0x110) * 8) * 0x30;
        lVar19 = *(longlong *)(lVar21 + 0x10 + lVar16);
        lStack_180 = *(longlong *)(lVar21 + 0x20 + lVar16);
        lStack_178 = *(longlong *)(lVar21 + 0x28 + lVar16);
        puVar18 = puVar18 + 1;
        lStack_1b8 = *(longlong *)(lVar15 + 0x50);
        uVar20 = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = (ulonglong)uVar20;
      }
      uVar7 = ~*(uint *)(lStack_1b8 + 8 + uVar13 * 0x10);
    }
    else {
      uVar7 = uVar20;
      if (uVar20 == (uint)lVar17) {
        if (puVar18 == puVar1) {
          return;
        }
        while( true ) {
          lVar17 = *(longlong *)
                    (*(longlong *)(lStack_170 + 0x1a0) + 0x10 + (ulonglong)*puVar18 * 0x48);
          if (lVar17 != 0) break;
          puVar18 = puVar18 + 1;
          if (puVar18 == puVar1) {
            return;
          }
        }
        lVar19 = *(longlong *)(lStack_170 + 0x1a0) + (ulonglong)*puVar18 * 0x48;
        uVar13 = *(ulonglong *)(lVar19 + 0x40);
        lVar21 = *(longlong *)(lVar19 + 0x18);
        lVar19 = *(longlong *)(lVar19 + 0x38);
        if ((*(ulonglong *)(lStack_108 + 0x118) < uVar13) &&
           (uVar14 = *(ulonglong *)(lVar19 + *(ulonglong *)(lStack_108 + 0x118) * 8), uVar14 != 0))
        {
          plStack_100 = *(longlong **)(lVar21 + 0x10 + ~uVar14 * 0x30);
          uVar14 = *(ulonglong *)(lStack_108 + 0x120);
          if (uVar13 <= uVar14) goto LAB_140bfdd13;
LAB_140bfdcb7:
          uVar13 = *(ulonglong *)(lVar19 + uVar14 * 8);
          if (uVar13 == 0) goto LAB_140bfdd13;
          puStack_f8 = *(undefined8 **)(lVar21 + 0x10 + ~uVar13 * 0x30);
        }
        else {
          plStack_100 = (longlong *)0x0;
          uVar14 = *(ulonglong *)(lStack_108 + 0x120);
          if (uVar14 < uVar13) goto LAB_140bfdcb7;
LAB_140bfdd13:
          puStack_f8 = (undefined8 *)0x0;
        }
        lVar15 = ~*(ulonglong *)(lVar19 + *(longlong *)(lStack_108 + 0x110) * 8) * 0x30;
        lVar19 = *(longlong *)(lVar21 + 0x10 + lVar15);
        lStack_180 = *(longlong *)(lVar21 + 0x20 + lVar15);
        lStack_178 = *(longlong *)(lVar21 + 0x28 + lVar15);
        puVar18 = puVar18 + 1;
        uVar20 = 0;
        uVar7 = uVar20;
      }
    }
    uVar13 = (ulonglong)uVar7;
    pfStack_1b0 = (float *)(lVar19 + uVar13 * 0x28);
    pbStack_1a8 = (byte *)(lStack_180 + uVar13 * 4);
    pbStack_1a0 = (byte *)(lStack_178 + uVar13 * 4);
    lVar21 = uVar13 * 0x10 + (longlong)plStack_100;
    fVar27 = *(float *)(uVar13 * 0x1c + (longlong)puStack_f8 + 0x18);
    fVar28 = fVar27 * fVar9 + (fVar25 - fVar27) * fVar23;
    fVar27 = fVar10 - fVar28;
    uStack_128 = (byte *)CONCAT44(uStack_128._4_4_,fVar27);
    uStack_198 = lVar2;
    if ((fVar27 < 0.0) || (fVar25 < fVar27)) {
      pbStack_168 = (byte *)&uStack_128;
      uStack_160 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14335ec38,&pbStack_168,&UNK_143067a98);
    }
    fVar28 = fVar28 + fVar10;
    uStack_128 = (byte *)CONCAT44(uStack_128._4_4_,fVar28);
    if ((fVar28 < 0.0) || (fVar25 < fVar28)) {
      pbStack_168 = (byte *)&uStack_128;
      uStack_160 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14335ec38,&pbStack_168,&UNK_143067ab0);
    }
    if (pbStack_188[0x38] != 2) {
      pdb_140defa80(&uStack_128,0,0,*(float *)(pbStack_188 + 0x18) + fVar11);
      fVar26 = fVar10;
      fVar24 = (float)pdb_140def2c0(&uStack_128);
      fVar24 = SUB84(uStack_128,0) - fVar24;
      fVar26 = (float)((ulonglong)uStack_128 >> 0x20) - fVar26;
      pbStack_168 = (byte *)CONCAT44(fVar26,fVar24);
      uStack_160 = (code *)uStack_120;
      pbVar12 = (byte *)uStack_160;
      *(undefined4 *)pbStack_1a0 = uStack_198._4_4_;
      uStack_160._0_4_ = SUB84(uStack_120,0);
      uStack_160._4_4_ = (float)((ulonglong)uStack_120 >> 0x20);
      *pfStack_1b0 = fVar24;
      pfStack_1b0[1] = fVar26;
      pfStack_1b0[2] = (float)uStack_160;
      pfStack_1b0[3] = uStack_160._4_4_;
      uStack_160 = (code *)pbVar12;
      uStack_128 = pbStack_168;
    }
    pdb_140def480(&pbStack_168,pfStack_1b0,uVar8,fVar27,fVar28);
    pbVar12 = (byte *)uStack_160;
    uStack_120 = (byte *)(uStack_160 + (longlong)pbStack_158 * 8);
    uStack_128 = (byte *)uStack_160;
    ppfStack_118 = &pfStack_1b0;
    *puVar5 = uStack_18c;
    pdb_141740c50(&uStack_128,lVar21,uVar3);
    if (pbStack_168 != (byte *)0x0) {
      pub_1406abac0(pbVar12,(longlong)pbStack_168 << 3,4);
    }
    if (pbStack_150 != (byte *)0x0) {
      pub_1406abac0(pbStack_148,(longlong)pbStack_150 << 2,4);
    }
    uVar20 = uVar20 + 1;
  } while( true );
}

