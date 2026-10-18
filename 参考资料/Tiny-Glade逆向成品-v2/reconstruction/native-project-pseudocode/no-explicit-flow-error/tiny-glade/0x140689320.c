// VA 0x140689320, PDB extent 2156 bytes
// tiny_glade::gui::gui_fog::fill_precipitation_slots::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_fog::fill_precipitation_slots::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
   Extent: 2156 */

void pdb_140689320(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar13;
  undefined1 uStack_139;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  float *pfStack_70;
  undefined4 *puStack_68;
  undefined8 uStack_60;
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  uVar8 = *(undefined8 *)(param_2 + 8);
  puStack_98 = &UNK_142f95418;
  uStack_90 = 0x16;
  uStack_138 = pdb_14072aeb0(&puStack_98);
  uVar6 = _UNK_142f3b4f8;
  uVar5 = _DAT_142f3b4f0;
  puStack_130 = (undefined *)_DAT_142f3b4f0;
  uStack_128 = _UNK_142f3b4f8;
  puStack_130 = (undefined *)pdb_1400affa0(&uStack_138);
  uStack_138 = uVar8;
  uVar8 = pdb_1400b0130(&uStack_138);
  pdb_14072caa0(&uStack_138,param_2,uVar8);
  pdb_140734630(&puStack_98,&uStack_138,&UNK_142f9542e,0x1b);
  puStack_b8 = &UNK_142f95449;
  uStack_b0 = 8;
  uVar8 = pdb_14072cd40(auStack_88);
  ppuStack_d8 = (undefined **)pdb_14072aeb0(&puStack_b8);
  uStack_138 = pdb_140315970(&ppuStack_d8);
  puStack_130 = (undefined *)uVar5;
  uStack_128 = uVar6;
  puStack_130 = (undefined *)pdb_1400affa0(&uStack_138);
  uStack_138 = uVar8;
  uVar8 = pdb_1400b0130(&uStack_138);
  cVar7 = pdb_14072c9c0(auStack_88,uVar8);
  if (cVar7 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      ppuStack_d8 = &puStack_98;
      pcStack_d0 = pdb_1402ed420;
      pcStack_c0 = pdb_1402ed420;
      uStack_138 = 0;
      puStack_130 = &UNK_142f9589f;
      uStack_128 = 0x14;
      uStack_120 = 0;
      puStack_118 = &UNK_142f95876;
      uStack_110 = 0x28;
      uStack_108 = 1;
      puStack_100 = &UNK_142f9589f;
      uStack_f8 = 0x14;
      uStack_f0 = 0xf100000001;
      puStack_e8 = &UNK_142f95858;
      ppuStack_e0 = &ppuStack_d8;
      ppuStack_c8 = &puStack_b8;
      pdb_140f332f0(&uStack_139,&uStack_138);
    }
    uVar8 = uStack_80;
    ppuStack_d8 = (undefined **)&UNK_142f95449;
    pcStack_d0 = (code *)0x8;
    uStack_138 = pdb_14072aeb0(&ppuStack_d8);
    puStack_130 = (undefined *)uVar5;
    uStack_128 = uVar6;
    puStack_130 = (undefined *)pdb_1400affa0(&uStack_138);
    uStack_138 = uVar8;
    uVar8 = pdb_1400b0130(&uStack_138);
    pdb_14072caa0(&ppuStack_d8,auStack_88,uVar8);
  }
  else {
    pdb_14072cd20(&ppuStack_d8,auStack_88,uVar8);
  }
  uVar8 = pdb_140725a70(&ppuStack_d8);
  pdb_140732af0(uVar8);
  pdb_140306cd0(&uStack_138,&ppuStack_d8,&UNK_142f954be,0x1b,&UNK_142f954d9,0x1b,
                CONCAT44(uVar13,0x42600000));
  uVar8 = pdb_140725a70(&uStack_138);
  pdb_140732b00(uVar8);
  puVar1 = (undefined1 *)param_1[1];
  uVar8 = param_1[2];
  puStack_b8 = &UNK_142f95451;
  uStack_b0 = 6;
  uVar9 = pdb_14072cd40(auStack_88);
  ppuStack_d8 = (undefined **)pdb_14072aeb0(&puStack_b8);
  uStack_138 = pdb_140315970(&ppuStack_d8);
  puStack_130 = (undefined *)uVar5;
  uStack_128 = uVar6;
  puStack_130 = (undefined *)pdb_1400affa0(&uStack_138);
  uStack_138 = uVar9;
  uVar9 = pdb_1400b0130(&uStack_138);
  cVar7 = pdb_14072c9c0(auStack_88,uVar9);
  uStack_a8 = uVar8;
  puStack_a0 = puVar1;
  if (cVar7 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      ppuStack_d8 = &puStack_98;
      pcStack_d0 = pdb_1402ed420;
      pcStack_c0 = pdb_1402ed420;
      uStack_138 = 0;
      puStack_130 = &UNK_142f9589f;
      uStack_128 = 0x14;
      uStack_120 = 0;
      puStack_118 = &UNK_142f95876;
      uStack_110 = 0x28;
      uStack_108 = 1;
      puStack_100 = &UNK_142f9589f;
      uStack_f8 = 0x14;
      uStack_f0 = 0xf100000001;
      puStack_e8 = &UNK_142f95858;
      ppuStack_e0 = &ppuStack_d8;
      ppuStack_c8 = &puStack_b8;
      pdb_140f332f0(&uStack_139,&uStack_138);
    }
    uVar8 = uStack_80;
    ppuStack_d8 = (undefined **)&UNK_142f95451;
    pcStack_d0 = (code *)0x6;
    uStack_138 = pdb_14072aeb0(&ppuStack_d8);
    puStack_130 = (undefined *)uVar5;
    uStack_128 = uVar6;
    puStack_130 = (undefined *)pdb_1400affa0(&uStack_138);
    uStack_138 = uVar8;
    uVar8 = pdb_1400b0130(&uStack_138);
    pdb_14072caa0(&uStack_138,auStack_88,uVar8);
    uVar8 = uStack_a8;
  }
  else {
    pdb_14072cd20(&uStack_138,auStack_88,uVar9);
  }
  pdb_140689b90(puVar1,uVar8,&uStack_138);
  pfVar2 = (float *)*param_1;
  puVar3 = (undefined4 *)param_1[3];
  uVar8 = param_1[4];
  pbVar4 = (byte *)param_1[5];
  puStack_b8 = &UNK_142f95457;
  uStack_b0 = 6;
  uVar9 = pdb_14072cd40(auStack_88);
  ppuStack_d8 = (undefined **)pdb_14072aeb0(&puStack_b8);
  uStack_138 = pdb_140315970(&ppuStack_d8);
  puStack_130 = (undefined *)uVar5;
  uStack_128 = uVar6;
  puStack_130 = (undefined *)pdb_1400affa0(&uStack_138);
  uStack_138 = uVar9;
  uVar9 = pdb_1400b0130(&uStack_138);
  cVar7 = pdb_14072c9c0(auStack_88,uVar9);
  if (cVar7 == '\0') {
    pfStack_70 = pfVar2;
    puStack_68 = puVar3;
    uStack_60 = uVar8;
    if (*_DAT_143ca8e90 != 0) {
      ppuStack_d8 = &puStack_98;
      pcStack_d0 = pdb_1402ed420;
      pcStack_c0 = pdb_1402ed420;
      uStack_138 = 0;
      puStack_130 = &UNK_142f9589f;
      uStack_128 = 0x14;
      uStack_120 = 0;
      puStack_118 = &UNK_142f95876;
      uStack_110 = 0x28;
      uStack_108 = 1;
      puStack_100 = &UNK_142f9589f;
      uStack_f8 = 0x14;
      uStack_f0 = 0xf100000001;
      puStack_e8 = &UNK_142f95858;
      ppuStack_e0 = &ppuStack_d8;
      ppuStack_c8 = &puStack_b8;
      pdb_140f332f0(&uStack_139,&uStack_138);
    }
    ppuStack_d8 = (undefined **)&UNK_142f95457;
    pcStack_d0 = (code *)0x6;
    uStack_138 = pdb_14072aeb0(&ppuStack_d8);
    puStack_130 = (undefined *)uVar5;
    uStack_128 = uVar6;
    puStack_130 = (undefined *)pdb_1400affa0(&uStack_138);
    uStack_138 = uStack_80;
    uVar8 = pdb_1400b0130(&uStack_138);
    pdb_14072caa0(&uStack_138,auStack_88,uVar8);
    pfVar2 = pfStack_70;
    fVar11 = 0.0;
    if (0.0 <= *pfStack_70) {
      fVar11 = *pfStack_70;
    }
    fVar12 = _DAT_142e36f28;
    if (fVar11 <= _DAT_142e36f28) {
      fVar12 = fVar11;
    }
    uVar10 = pdb_14008dee0(&uStack_138,&UNK_142f95475,0x13,&UNK_142f95488,0x1b,&UNK_142f954a3,0x1b,
                           fVar12,*puStack_68,uStack_60,uStack_a8);
    *pbVar4 = (byte)(uVar10 >> 0x20) & 1;
    if ((uVar10 >> 0x28 & 1) != 0) {
      *puStack_a0 = 1;
    }
    *pfVar2 = (float)uVar10;
  }
  else {
    pdb_14072cd20(&uStack_138,auStack_88,uVar9);
    fVar11 = 0.0;
    if (0.0 <= *pfVar2) {
      fVar11 = *pfVar2;
    }
    fVar12 = _DAT_142e36f28;
    if (fVar11 <= _DAT_142e36f28) {
      fVar12 = fVar11;
    }
    uVar10 = pdb_14008dee0(&uStack_138,&UNK_142f95475,0x13,&UNK_142f95488,0x1b,&UNK_142f954a3,0x1b,
                           fVar12,*puVar3,uVar8,uStack_a8);
    *pbVar4 = (byte)(uVar10 >> 0x20) & 1;
    if ((uVar10 >> 0x28 & 1) != 0) {
      *puStack_a0 = 1;
    }
    *pfVar2 = (float)uVar10;
  }
  return;
}

