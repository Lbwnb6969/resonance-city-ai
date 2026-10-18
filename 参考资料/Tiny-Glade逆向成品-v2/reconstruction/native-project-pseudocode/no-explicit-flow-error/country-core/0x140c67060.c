// VA 0x140c67060, PDB extent 721 bytes
// country_core::systems::wall::shapes::rectangle::ui_modes::edit_orientation::UiRectangleOrientationEdit::signifier
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_orientation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_modes::edit_orientation::UiRectangleOrientationEdit::signifier
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_orientation.rs
   Extent: 721 */

void pdb_140c67060(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_XMM1_Da;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_114 [12];
  undefined1 auStack_108 [12];
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined4 *puStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    lVar2 = *param_2;
    if (*(char *)(lVar2 + 0x18) == '\0') {
      return;
    }
    lVar3 = param_2[1];
    if (*(longlong *)(lVar2 + 0x38) != lVar3) {
      return;
    }
    if (*(int *)(lVar2 + 0x28) == 2) {
      return;
    }
    uVar4 = *(undefined4 *)(lVar2 + 0x50);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uStack_80 = pdb_140df3e10(param_1 + 8,uVar1);
    uStack_7c = in_XMM1_Da;
    pdb_140df4540(&uStack_90,&uStack_80,uVar4);
    uStack_d8._0_4_ = pdb_140df1dc0(param_1 + 8,uVar1);
    uStack_d8._4_4_ = in_XMM1_Da;
    pdb_140df4520(auStack_114,&uStack_d8);
    pdb_140de8fd0(&uStack_d8,auStack_114);
    uVar4 = _DAT_142e382c0;
    uVar5 = (undefined4)uStack_d8;
    uVar6 = uStack_d8._4_4_;
    uVar7 = (undefined4)uStack_d0;
    uVar8 = uStack_d0._4_4_;
    goto LAB_140c67204;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = pdb_140df3e10(param_1 + 8,uVar1);
  uStack_7c = in_XMM1_Da;
  pdb_140df4540(&uStack_fc,&uStack_80,*(float *)(param_1 + 0x28) + _DAT_142e3b1d8);
  uStack_d8._0_4_ = pdb_140df1dc0(param_1 + 8,uVar1);
  uStack_d8._4_4_ = in_XMM1_Da;
  pdb_140df4520(auStack_108,&uStack_d8);
  lVar2 = *param_2;
  uVar4 = _DAT_1430124c0;
  if (*(char *)(lVar2 + 0x18) == '\x01') {
    lVar3 = param_2[1];
    if ((*(longlong *)(lVar2 + 0x38) == lVar3) && (*(char *)(lVar2 + 0x19) != '\0')) {
LAB_140c671de:
      uVar4 = _DAT_143070278;
    }
  }
  else {
    lVar3 = param_2[1];
    if (((*(char *)(lVar2 + 0x18) == '\x02') && (*(longlong *)(lVar2 + 0x38) == lVar3)) &&
       (*(char *)(lVar2 + 0x19) != '\x02')) goto LAB_140c671de;
  }
  pdb_140de8fd0(&uStack_d8,auStack_108);
  uStack_90 = uStack_fc;
  uStack_88 = uStack_f4;
  uVar5 = (undefined4)uStack_d8;
  uVar6 = uStack_d8._4_4_;
  uVar7 = (undefined4)uStack_d0;
  uVar8 = uStack_d0._4_4_;
LAB_140c67204:
  uStack_a0 = uStack_90;
  uStack_98 = uStack_88;
  uStack_d0 = pdb_140c6b520;
  puStack_c8 = &uStack_a0;
  pcStack_c0 = pdb_140f33d80;
  puStack_b8 = &uStack_64;
  pcStack_b0 = pdb_140f70fc0;
  uStack_d8 = param_1;
  uStack_64 = uVar4;
  pdb_140f60760(&uStack_80,&UNK_143070bf8,&uStack_d8);
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_d8 = CONCAT44(uVar6,uVar5);
  uStack_d0 = (code *)CONCAT44(uVar8,uVar7);
  pbStack_e0 = pbStack_78;
  pdb_140c49e60(lVar3,pbStack_78,uStack_70,&uStack_f0,&uStack_d8,uVar4,param_3);
  if (CONCAT44(uStack_7c,uStack_80) != 0) {
    pub_1406abac0(pbStack_e0,CONCAT44(uStack_7c,uStack_80),1);
  }
  return;
}

