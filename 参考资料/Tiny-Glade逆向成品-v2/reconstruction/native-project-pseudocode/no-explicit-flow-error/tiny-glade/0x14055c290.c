// VA 0x14055c290, PDB extent 1121 bytes
// tiny_glade::gui::wall_selection_tags::gift_tag<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/wall_selection_tags.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::wall_selection_tags::gift_tag<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/wall_selection_tags.rs
   Extent: 1121 */

undefined8 *
pdb_14055c290(undefined8 *param_1,longlong param_2,int param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             char param_10)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 extraout_EAX;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puVar8;
  
  param_3 = param_3 + 1;
  fVar9 = (float)pdb_140de8850(param_3,2);
  fVar9 = fVar9 * _DAT_142e37900;
  fVar10 = (float)pdb_140de8850(param_3,3);
  fVar11 = (float)pdb_140de8850(param_3,5);
  fVar15 = fVar11 * _UNK_142f67344 + _UNK_142f67354;
  fVar14 = (fVar10 * _DAT_142f67340 + _DAT_142f67350) * fVar15;
  fVar10 = (float)pub_142e32a70(fVar9,_DAT_142e37830);
  fVar11 = (_DAT_142e36f28 - (float)((uint)(fVar10 + _DAT_142e36f34) & _DAT_142e377e0)) * fVar14;
  fVar10 = 0.0;
  if (0.0 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = _DAT_142e4fba0;
  if (fVar10 <= _DAT_142e4fba0) {
    fVar9 = fVar10;
  }
  fVar10 = fVar14;
  fVar12 = fVar14;
  fVar13 = fVar14;
  switch((int)fVar9 & 0xff) {
  case 0:
    fVar10 = 0.0;
    fVar12 = fVar11;
    break;
  case 1:
    fVar10 = 0.0;
    fVar13 = fVar11;
    break;
  case 2:
    fVar10 = fVar11;
    fVar13 = 0.0;
    break;
  case 3:
    fVar13 = 0.0;
    fVar12 = fVar11;
    break;
  case 4:
    fVar12 = 0.0;
    fVar13 = fVar11;
    break;
  default:
    fVar10 = fVar11;
    fVar12 = 0.0;
  }
  fVar15 = fVar15 - fVar14;
  fVar11 = (fVar13 + fVar15) * _DAT_142e4fba0 + _DAT_142e36f50;
  fVar9 = 0.0;
  if (0.0 <= fVar11) {
    fVar9 = fVar11;
  }
  fVar11 = _DAT_142e4fba0;
  if (fVar9 <= _DAT_142e4fba0) {
    fVar11 = fVar9;
  }
  fVar14 = (fVar12 + fVar15) * _DAT_142e4fba0 + _DAT_142e36f50;
  fVar9 = 0.0;
  if (0.0 <= fVar14) {
    fVar9 = fVar14;
  }
  fVar14 = _DAT_142e4fba0;
  if (fVar9 <= _DAT_142e4fba0) {
    fVar14 = fVar9;
  }
  fVar9 = (fVar15 + fVar10) * _DAT_142e4fba0 + _DAT_142e36f50;
  fVar10 = 0.0;
  if (0.0 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = _DAT_142e4fba0;
  if (fVar10 <= _DAT_142e4fba0) {
    fVar9 = fVar10;
  }
  uStack_c0 = param_5;
  uStack_c8 = param_4;
  uStack_138 = pdb_14072aeb0(&uStack_c8);
  uStack_130 = CONCAT44(_UNK_142f3b454,_DAT_142f3b450);
  uStack_128 = CONCAT44(_UNK_142f3b45c,_UNK_142f3b458);
  pdb_1400affa0(&uStack_138);
  uStack_138 = *(undefined8 *)(param_2 + 8);
  uStack_130._0_4_ = extraout_EAX;
  uStack_130._4_4_ = extraout_var;
  uVar4 = pdb_1400b0130(&uStack_138);
  pdb_14072caa0(&uStack_138,param_2,uVar4);
  lVar5 = pdb_140305c10(&uStack_138);
  *(uint *)(lVar5 + 0x30) =
       ((int)fVar9 << 0x10 | 0xff000000U) >> 0x18 | ((int)fVar9 << 0x10 & 0xff0000U) >> 8 |
       ((int)fVar14 & 0xffU) << 0x10 | (int)fVar11 << 0x18;
  *(char *)(lVar5 + 0x34) = param_10;
  uStack_e8 = (undefined4)uStack_138;
  uStack_e4 = uStack_138._4_4_;
  uStack_e0 = (undefined4)uStack_130;
  uStack_dc = uStack_130._4_4_;
  uStack_d8 = uStack_128;
  pdb_140737410(&uStack_138);
  uStack_158 = CONCAT44(_UNK_142f67364,_DAT_142f67360);
  uStack_150 = CONCAT44(_UNK_142f6736c,_UNK_142f67368);
  pdb_140737550(&uStack_c8,&uStack_138,&uStack_158);
  uStack_158 = 0x41f0000000000000;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  pdb_1407375d0(&uStack_138,&uStack_c8,&uStack_158);
  pdb_14072cf30(&uStack_158,&uStack_e8,&uStack_138);
  if (param_10 == '\0') {
    uStack_128 = uStack_148;
    uStack_138 = uStack_158;
    uStack_130._0_4_ = (undefined4)uStack_150;
    uStack_130._4_4_ = uStack_150._4_4_;
    puVar8 = &uStack_138;
    pdb_14072d060(&uStack_c8,puVar8,0);
    uVar7 = SUB84(puVar8,0);
    uVar3 = pdb_1407361e0();
    pdb_1407338e0(&uStack_138,&uStack_c8,uVar3,uVar7);
    uStack_158 = uStack_138;
    uStack_150 = CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
    uStack_148 = uStack_128;
    uVar4 = pdb_140725a70(&uStack_158);
    pdb_140732b20(uVar4);
    uVar4 = pdb_14072cd40(&uStack_158);
    uVar1 = pdb_14072ce40(&uStack_158);
    uVar2 = pdb_14072cd50(&uStack_158);
  }
  else {
    uVar4 = pdb_14072cd40(&uStack_158);
    uVar1 = 0;
    uVar2 = 0;
  }
  pdb_140306670(&uStack_138,&uStack_158,&UNK_142f67450,5,param_6,param_7);
  uVar6 = pdb_140726ff0(&uStack_138);
  pdb_14060a7e0(uVar6,_DAT_142f67370);
  uStack_b8 = uStack_128;
  uStack_c8 = uStack_138;
  uStack_c0 = CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
  pdb_140727040(&uStack_138,&uStack_c8,0x5f493cff);
  uVar6 = pdb_140725a70(&uStack_138);
  pdb_140732b00(uVar6);
  if (param_10 == '\0') {
    uStack_128 = uStack_148;
    uStack_138 = uStack_158;
    uStack_130 = uStack_150;
    pdb_140726690(&uStack_138,param_8,param_9);
  }
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((longlong)param_1 + 9) = uVar2;
  return param_1;
}

