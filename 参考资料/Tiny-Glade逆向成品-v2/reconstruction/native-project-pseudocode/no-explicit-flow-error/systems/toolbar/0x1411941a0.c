// VA 0x1411941a0, PDB extent 580 bytes
// toolbar::menu::save_error::ui::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/save_error.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::save_error::ui::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/save_error.rs
   Extent: 580 */

void pdb_1411941a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 *puStack_58;
  code *pcStack_50;
  byte *pbStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar2 = 0x13;
  uStack_b0 = pdb_140dc6290(&UNK_14329f36e);
  uVar3 = 0x1c;
  uStack_a8 = uVar2;
  uStack_c0 = pdb_140dc6290(&UNK_14329f381);
  uVar2 = 0x12;
  uStack_b8 = uVar3;
  uStack_d0 = pdb_140dc6290(&UNK_14329f39d);
  uStack_88 = &uStack_b0;
  uStack_80 = pdb_1402ed400;
  uStack_78 = &uStack_c0;
  pcStack_70 = pdb_1402ed400;
  pcStack_60 = pdb_1402ed400;
  puStack_58 = &uStack_d0;
  pcStack_50 = pdb_1402ed400;
  uStack_c8 = uVar2;
  uStack_68 = param_1;
  pdb_140f60760(&uStack_a0,&UNK_14329f3af,&uStack_88);
  pbStack_40 = pbStack_98;
  pbStack_e0 = pbStack_98;
  uStack_d8 = uStack_90;
  uStack_88 = (undefined8 *)pdb_140bbbcb0(&pbStack_e0);
  uStack_80 = (code *)CONCAT44(_UNK_14329c264,_DAT_14329c260);
  uStack_78 = (undefined8 *)CONCAT44(_UNK_14329c26c,_UNK_14329c268);
  uStack_80 = (code *)pdb_1400affa0(&uStack_88);
  uStack_88 = *(undefined8 **)(param_2 + 8);
  uVar2 = pdb_1400b0130(&uStack_88);
  pdb_14072caa0(&uStack_88,param_2,uVar2);
  uVar2 = pdb_14116ee90(&uStack_88,0);
  pdb_14119b6b0(uVar2,pbStack_40,uStack_90);
  uStack_28 = uStack_78;
  uStack_38 = (undefined4)uStack_88;
  uStack_34 = uStack_88._4_4_;
  uStack_30 = (undefined4)uStack_80;
  uStack_2c = uStack_80._4_4_;
  lVar1 = pdb_14116e180(&uStack_38);
  *(undefined4 *)(lVar1 + 600) = 0x7b5a51ff;
  uStack_78 = (undefined8 *)uStack_28;
  uStack_88._0_4_ = uStack_38;
  uStack_88._4_4_ = uStack_34;
  uStack_80._0_4_ = uStack_30;
  uStack_80._4_4_ = uStack_2c;
  uVar2 = pdb_14116e180(&uStack_88);
  pdb_140cb68f0(uVar2,0);
  uStack_28 = uStack_78;
  uStack_38 = (undefined4)uStack_88;
  uStack_34 = uStack_88._4_4_;
  uStack_30 = (undefined4)uStack_80;
  uStack_2c = uStack_80._4_4_;
  uVar2 = pdb_14116e180(&uStack_38);
  pdb_140cb5a70(uVar2,3);
  uStack_78 = (undefined8 *)uStack_28;
  uStack_88._0_4_ = uStack_38;
  uStack_88._4_4_ = uStack_34;
  uStack_80._0_4_ = uStack_30;
  uStack_80._4_4_ = uStack_2c;
  uVar2 = pdb_14116e180(&uStack_88);
  pdb_14119b2b0(uVar2,_DAT_14304d834);
  uStack_28 = uStack_78;
  uStack_38 = (undefined4)uStack_88;
  uStack_34 = uStack_88._4_4_;
  uStack_30 = (undefined4)uStack_80;
  uStack_2c = uStack_80._4_4_;
  uVar2 = pdb_14116e180(&uStack_38);
  pdb_140cb5df0(uVar2,_DAT_142fa5c70);
  if (uStack_a0 != 0) {
    pub_1406abac0(pbStack_40,uStack_a0,1);
  }
  return;
}

