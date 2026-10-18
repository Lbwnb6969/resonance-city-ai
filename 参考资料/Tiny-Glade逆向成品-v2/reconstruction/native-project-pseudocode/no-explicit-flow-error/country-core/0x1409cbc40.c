// VA 0x1409cbc40, PDB extent 2562 bytes
// country_core::systems::wall::shapes::rectangle::ui_modes::edit_dims::UiRectangleDimsEdit::signifier
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_dims.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_modes::edit_dims::UiRectangleDimsEdit::signifier
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_dims.rs
   Extent: 2562 */

void pdb_1409cbc40(byte *param_1,longlong *param_2,undefined8 param_3,byte *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong arg0;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float in_XMM1_Da;
  float fVar18;
  float fVar19;
  byte *pbStack_198;
  undefined8 uStack_190;
  byte *pbStack_180;
  byte *pbStack_178;
  ulonglong uStack_170;
  byte *pbStack_168;
  ulonglong uStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  float *pfStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  ulonglong uStack_128;
  byte *pbStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  float fStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_ec;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  code *pcStack_d0;
  byte **ppbStack_c8;
  code *pcStack_c0;
  byte **ppbStack_b8;
  code *pcStack_b0;
  undefined4 *puStack_a8;
  code *pcStack_a0;
  float *pfStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  if (param_1[0x58] != 1) {
    lVar9 = *param_2;
    if (*(char *)(lVar9 + 0x18) == '\0') {
      return;
    }
    pbVar7 = (byte *)param_2[1];
    if (*(byte **)(lVar9 + 0x38) != pbVar7) {
      return;
    }
    if (*(int *)(lVar9 + 0x28) == 2) {
      return;
    }
    uVar15 = *(undefined4 *)(lVar9 + 0x50);
    pbVar6 = param_1 + 0x38;
    pbVar8 = *(byte **)(param_1 + 0x50);
    pbStack_e0 = param_4;
    fVar13 = (float)pdb_140df3e10(pbVar6,pbVar8);
    fVar18 = in_XMM1_Da;
    fVar14 = (float)pdb_140df3e10(pbVar6,pbVar8 + 1);
    pbStack_d8 = (byte *)CONCAT44(fVar18 * _UNK_142e36f64 + in_XMM1_Da * _UNK_142e36f64,
                                  fVar14 * _DAT_142e36f60 + fVar13 * _DAT_142e36f60);
    pdb_140df4540(&fStack_104,&pbStack_d8,uVar15);
    uVar15 = pdb_140df1760(pbVar6,pbVar8);
    pbStack_d8 = param_1 + 0x30;
    pcStack_d0 = pdb_1409d0ca0;
    pcStack_c0 = pdb_140f33d80;
    fVar13 = fVar18;
    ppbStack_c8 = (byte **)&fStack_104;
    pdb_140f60760(&pbStack_148,&UNK_14302c7d8,&pbStack_d8);
    uVar4 = uStack_138;
    pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,fStack_fc);
    pbStack_d8 = (byte *)CONCAT44(uStack_100,fStack_104);
    pdb_14007ee60();
    pfStack_98 = (float *)pub_1406abab0(0x28,8);
    if (pfStack_98 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x28);
    }
    *(byte *)((longlong)pfStack_98 + 0) = 1;
    *(byte *)((longlong)pfStack_98 + 1) = 0;
    *(byte *)((longlong)pfStack_98 + 2) = 0;
    *(byte *)((longlong)pfStack_98 + 3) = 0;
    *(byte *)((longlong)pfStack_98 + 4) = 0;
    *(byte *)((longlong)pfStack_98 + 5) = 0;
    *(byte *)((longlong)pfStack_98 + 6) = 0;
    *(byte *)((longlong)pfStack_98 + 7) = 0;
    *(byte *)((longlong)pfStack_98 + 8) = 1;
    *(byte *)((longlong)pfStack_98 + 9) = 0;
    *(byte *)((longlong)pfStack_98 + 10) = 0;
    *(byte *)((longlong)pfStack_98 + 0xb) = 0;
    *(byte *)((longlong)pfStack_98 + 0xc) = 0;
    *(byte *)((longlong)pfStack_98 + 0xd) = 0;
    *(byte *)((longlong)pfStack_98 + 0xe) = 0;
    *(byte *)((longlong)pfStack_98 + 0xf) = 0;
    *(undefined4 *)((longlong)pfStack_98 + 0x10) = uVar15;
    *(float *)((longlong)pfStack_98 + 0x14) = fVar18;
    *(byte **)((longlong)pfStack_98 + 0x18) = pbStack_d8;
    *(undefined4 *)((longlong)pfStack_98 + 0x20) = pcStack_d0._0_4_;
    pcStack_d0 = (code *)&UNK_14302c7f8;
    pbStack_d8 = (byte *)pfStack_98;
    if ((longlong)uVar4 < 0) {
      uVar12 = 0;
    }
    else {
      pbStack_e8 = pbVar8;
      if (uVar4 == 0) {
        pbVar8 = (byte *)0x1;
LAB_1409cc15b:
        pcStack_d0 = (code *)((ulonglong)pcStack_d0 & 0xffffffffffffff00);
        ppbStack_c8 = (byte **)uVar4;
        ppbStack_b8 = (byte **)uVar4;
        pcStack_b0 = (code *)pfStack_98;
        puStack_a8 = (undefined4 *)&UNK_14302c7f8;
        pbStack_d8 = pbVar7;
        pcStack_c0 = (code *)pbVar8;
        pdb_141a88350(param_3,&pbStack_d8);
        pbVar5 = pbStack_e8;
        pbVar8 = pbStack_e8 + 1;
        if (pbStack_148 != (byte *)0x0) {
          pub_1406abac0((byte *)pfStack_140,(ulonglong)pbStack_148,1);
        }
        fVar14 = fStack_fc;
        fVar18 = fStack_104;
        pdb_14007ee60();
        pfStack_98 = (float *)pub_1406abab0(0x10,4);
        if (pfStack_98 != (float *)0x0) {
          fVar16 = (float)pdb_140df3e10(pbVar6,pbVar5);
          fVar19 = fVar13;
          fVar17 = (float)pdb_140df3e10(pbVar6,pbVar8);
          *pfStack_98 = fVar16 - fVar18;
          pfStack_98[1] = fVar13 - fVar14;
          pfStack_98[2] = fVar17 - fVar18;
          pfStack_98[3] = fVar19 - fVar14;
          pbStack_148 = (byte *)0x2;
          pfStack_140 = pfStack_98;
          uStack_138 = 2;
          pdb_140080c90(&pbStack_d8,&pbStack_148,0);
          if (!SBORROW8(0,(longlong)pbStack_d8)) {
            puStack_118 = (undefined *)puStack_a8;
            uStack_128 = (ulonglong)ppbStack_b8;
            pbStack_120 = (byte *)pcStack_b0;
            uStack_138 = (ulonglong)ppbStack_c8;
            pbStack_130 = (byte *)pcStack_c0;
            pbStack_148 = pbStack_d8;
            pfStack_140 = (float *)pcStack_d0;
            pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,fStack_fc);
            pbStack_d8 = (byte *)CONCAT44(uStack_100,fStack_104);
            lVar9 = *(longlong *)pbStack_e0;
            if (!SBORROW8(0,lVar9)) {
              if (lVar9 != 0) {
                pub_1406abac0(*(byte **)(pbStack_e0 + 8),lVar9 << 3,4);
              }
              if (*(longlong *)(pbStack_e0 + 0x18) != 0) {
                pub_1406abac0(*(byte **)(pbStack_e0 + 0x20),*(longlong *)(pbStack_e0 + 0x18) << 2,4)
                ;
              }
            }
            *(undefined **)(pbStack_e0 + 0x30) = puStack_118;
            *(ulonglong *)(pbStack_e0 + 0x20) = uStack_128;
            *(byte **)(pbStack_e0 + 0x28) = pbStack_120;
            *(ulonglong *)(pbStack_e0 + 0x10) = uStack_138;
            *(byte **)(pbStack_e0 + 0x18) = pbStack_130;
            *(byte **)pbStack_e0 = pbStack_148;
            *(float **)(pbStack_e0 + 8) = pfStack_140;
            *(byte **)(pbStack_e0 + 0x38) = pbVar7;
            *(byte **)(pbStack_e0 + 0x40) = pbStack_d8;
            *(undefined4 *)(pbStack_e0 + 0x48) = pcStack_d0._0_4_;
            return;
          }
          pbStack_148 = (byte *)pcStack_d0;
          pfStack_140 = (float *)ppbStack_c8;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14335e278,0x2b,&pbStack_148,&UNK_14335e258,&UNK_14302c828);
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x10);
      }
      uStack_f8 = param_3;
      pdb_14007ee60();
      uVar12 = 1;
      pbVar8 = pub_1406abab0(uVar4,1);
      if (pbVar8 != (byte *)0x0) {
        pub_142e32760(pbVar8,pfStack_140,uVar4);
        param_3 = uStack_f8;
        goto LAB_1409cc15b;
      }
    }
    pdb_142dc7e2a(uVar12,uVar4);
    goto LAB_1409cc385;
  }
  if ((*param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302c840);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pbStack_198 = *(byte **)(param_1 + 0x20);
  uStack_190 = *(undefined8 *)(param_1 + 0x28);
  lVar9 = *param_2;
  uVar15 = _DAT_142e36f28;
  if (*(char *)(lVar9 + 0x18) == '\x01') {
    pbStack_150 = (byte *)param_2[1];
    if ((*(byte **)(lVar9 + 0x38) == pbStack_150) && (*(char *)(lVar9 + 0x19) != '\0')) {
LAB_1409cbe81:
      uVar15 = _DAT_142e37990;
    }
  }
  else {
    pbStack_150 = (byte *)param_2[1];
    if (((*(char *)(lVar9 + 0x18) == '\x02') && (*(byte **)(lVar9 + 0x38) == pbStack_150)) &&
       (*(char *)(lVar9 + 0x19) != '\x02')) goto LAB_1409cbe81;
  }
  uStack_138 = uStack_138 & 0xffffffffffffff00;
  pbStack_130 = &UNK_14302c858;
  uStack_128 = 10;
  pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,1);
  puStack_118 = &UNK_14302c862;
  uStack_110 = 0x12;
  param_1 = param_1 + 0x30;
  lVar9 = 0;
  pbStack_158 = param_1;
  uStack_f8 = param_3;
  uStack_ec = uVar15;
  while( true ) {
    puStack_a8 = &uStack_ec;
    ppbStack_b8 = &pbStack_168;
    uVar4 = (&uStack_138)[lVar9 * 3];
    if ((byte)uVar4 == 2) {
      return;
    }
    pbVar7 = (&pbStack_130)[lVar9 * 3];
    uVar1 = (&uStack_128)[lVar9 * 3];
    pcStack_d0 = pdb_1409d0ca0;
    ppbStack_c8 = &pbStack_198;
    pcStack_c0 = pdb_140f33d80;
    pcStack_b0 = pdb_1402ed400;
    pcStack_a0 = pdb_140f70fc0;
    pbStack_168 = pbVar7;
    uStack_160 = uVar1;
    pbStack_d8 = param_1;
    pdb_140f60760(&pbStack_180,&UNK_14302c874,&pbStack_d8);
    arg0 = uStack_170;
    pfStack_98 = (float *)pbStack_180;
    pbStack_e8 = pbStack_178;
    pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,(undefined4)uStack_190);
    pbStack_d8 = pbStack_198;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x50,0x10);
    if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x50);
    }
    lVar9 = lVar9 + 1;
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
    *(byte **)(pbVar6 + 0x10) = pbVar7;
    *(ulonglong *)(pbVar6 + 0x18) = uVar1;
    *(undefined8 *)(pbVar6 + 0x20) = uVar12;
    *(undefined8 *)(pbVar6 + 0x28) = uVar3;
    *(byte **)(pbVar6 + 0x30) = pbStack_d8;
    *(undefined4 *)(pbVar6 + 0x38) = pcStack_d0._0_4_;
    *(undefined4 *)(pbVar6 + 0x3c) = uVar15;
    pbVar6[0x40] = (byte)uVar4 & 1;
    pcStack_d0 = (code *)&UNK_14302c898;
    pbStack_e0 = pbVar6;
    pbStack_d8 = pbVar6;
    if ((longlong)arg0 < 0) break;
    if (arg0 == 0) {
      pbVar7 = (byte *)0x1;
      uVar11 = uStack_f8;
    }
    else {
      pdb_14007ee60();
      uVar10 = 1;
      pbVar7 = pub_1406abab0(arg0,1);
      uVar11 = uStack_f8;
      if (pbVar7 == (byte *)0x0) goto LAB_1409cc102;
      pub_142e32760(pbVar7,pbStack_e8,arg0);
    }
    pbStack_d8 = pbStack_150;
    pcStack_d0 = (code *)((ulonglong)pcStack_d0 & 0xffffffffffffff00);
    ppbStack_c8 = (byte **)arg0;
    ppbStack_b8 = (byte **)arg0;
    pcStack_b0 = (code *)pbStack_e0;
    puStack_a8 = (undefined4 *)&UNK_14302c898;
    pcStack_c0 = (code *)pbVar7;
    pdb_141a88350(uVar11,&pbStack_d8);
    param_1 = pbStack_158;
    if (pfStack_98 != (float *)0x0) {
      pub_1406abac0(pbStack_e8,(ulonglong)pfStack_98,1);
    }
    if (lVar9 == 2) {
      return;
    }
  }
  uVar10 = 0;
LAB_1409cc102:
  pdb_142dc7e2a(uVar10,arg0);
LAB_1409cc385:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

