// VA 0x141193dc0, PDB extent 989 bytes
// toolbar::menu::save_error::ui::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/save_error.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::save_error::ui::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/save_error.rs
   Extent: 989 */

void pdb_141193dc0(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong arg1;
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 *puStack_68;
  code *pcStack_60;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pbStack_c0 = param_1;
  pbStack_b8 = param_2;
  uStack_78 = (undefined8 *)pdb_140bbbcb0(&pbStack_c0);
  uVar1 = _UNK_14329c268;
  uVar4 = _DAT_14329c260;
  uStack_70 = (code *)_DAT_14329c260;
  puStack_68 = (undefined4 *)_UNK_14329c268;
  uStack_70 = (code *)pdb_1400affa0(&uStack_78);
  uStack_78 = *(undefined8 **)(param_5 + 8);
  uVar2 = pdb_1400b0130(&uStack_78);
  pdb_14072caa0(&uStack_78,param_5,uVar2);
  uVar2 = pdb_14116ee90(&uStack_78,0);
  pdb_14119b6b0(uVar2,param_1,param_2);
  uStack_88 = puStack_68;
  uStack_98 = (undefined4)uStack_78;
  uStack_94 = uStack_78._4_4_;
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  lVar3 = pdb_14116e180(&uStack_98);
  *(undefined4 *)(lVar3 + 600) = 0x7b0808ff;
  uStack_78._0_4_ = uStack_98;
  uStack_78._4_4_ = uStack_94;
  uStack_70._0_4_ = uStack_90;
  uStack_70._4_4_ = uStack_8c;
  puStack_68 = (undefined4 *)uStack_88;
  uVar2 = pdb_14116e180(&uStack_78);
  pdb_140cb68f0(uVar2,2);
  uStack_88 = puStack_68;
  uStack_98 = (undefined4)uStack_78;
  uStack_94 = uStack_78._4_4_;
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  uVar2 = pdb_14116e180(&uStack_98);
  pdb_140cb5a70(uVar2,3);
  puStack_68 = (undefined4 *)uStack_88;
  uStack_78._0_4_ = uStack_98;
  uStack_78._4_4_ = uStack_94;
  uStack_70._0_4_ = uStack_90;
  uStack_70._4_4_ = uStack_8c;
  uVar2 = pdb_14116e180(&uStack_78);
  pdb_14119b2b0(uVar2,_DAT_142e37880);
  uStack_88 = puStack_68;
  uStack_98 = (undefined4)uStack_78;
  uStack_94 = uStack_78._4_4_;
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  uVar2 = pdb_14116e180(&uStack_98);
  pdb_140cb5df0(uVar2,_DAT_142fa5c70);
  uVar2 = 0x16;
  uStack_d0 = pdb_140dc6290(&UNK_14329f352);
  uStack_c8 = uVar2;
  pdb_140f5fd10(&uStack_98,param_3,param_4);
  uStack_78 = &uStack_d0;
  uStack_70 = pdb_1402ed400;
  pcStack_60 = pdb_140001020;
  puStack_68 = &uStack_98;
  pdb_140f60760(&pbStack_c0,&UNK_14329f368,&uStack_78);
  arg1 = CONCAT44(uStack_94,uStack_98);
  if ((!SBORROW8(0,arg1)) && (arg1 != 0)) {
    pub_1406abac0((byte *)CONCAT44(uStack_8c,uStack_90),arg1,1);
  }
  pbStack_a0 = pbStack_c0;
  pbStack_a8 = pbStack_b8;
  pbStack_c0 = pbStack_b8;
  pbStack_b8 = (byte *)uStack_b0;
  uStack_78 = (undefined8 *)pdb_140bbbcb0(&pbStack_c0);
  uStack_70 = (code *)uVar4;
  puStack_68 = (undefined4 *)uVar1;
  uStack_70 = (code *)pdb_1400affa0(&uStack_78);
  uStack_78 = *(undefined8 **)(param_5 + 8);
  uVar4 = pdb_1400b0130(&uStack_78);
  pdb_14072caa0(&uStack_78,param_5,uVar4);
  uVar4 = pdb_14116ee90(&uStack_78,0);
  pdb_14119b6b0(uVar4,pbStack_a8,uStack_b0);
  uStack_88 = puStack_68;
  uStack_98 = (undefined4)uStack_78;
  uStack_94 = uStack_78._4_4_;
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  lVar3 = pdb_14116e180(&uStack_98);
  *(undefined4 *)(lVar3 + 600) = 0x7b0808ff;
  puStack_68 = (undefined4 *)uStack_88;
  uStack_78._0_4_ = uStack_98;
  uStack_78._4_4_ = uStack_94;
  uStack_70._0_4_ = uStack_90;
  uStack_70._4_4_ = uStack_8c;
  uVar4 = pdb_14116e180(&uStack_78);
  pdb_140cb68f0(uVar4,2);
  uStack_88 = puStack_68;
  uStack_98 = (undefined4)uStack_78;
  uStack_94 = uStack_78._4_4_;
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  uVar4 = pdb_14116e180(&uStack_98);
  pdb_140cb5a70(uVar4,3);
  puStack_68 = (undefined4 *)uStack_88;
  uStack_78._0_4_ = uStack_98;
  uStack_78._4_4_ = uStack_94;
  uStack_70._0_4_ = uStack_90;
  uStack_70._4_4_ = uStack_8c;
  uVar4 = pdb_14116e180(&uStack_78);
  pdb_14119b2b0(uVar4,_DAT_142e37880);
  uStack_88 = puStack_68;
  uStack_98 = (undefined4)uStack_78;
  uStack_94 = uStack_78._4_4_;
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  uVar4 = pdb_14116e180(&uStack_98);
  pdb_140cb5df0(uVar4,_DAT_142fa5c70);
  if (pbStack_a0 != (byte *)0x0) {
    pub_1406abac0(pbStack_a8,(ulonglong)pbStack_a0,1);
  }
  return;
}

