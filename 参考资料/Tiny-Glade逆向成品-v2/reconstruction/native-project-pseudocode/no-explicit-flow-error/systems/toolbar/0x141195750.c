// VA 0x141195750, PDB extent 715 bytes
// toolbar::menu::daily_welcome::ui::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/daily_welcome.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::daily_welcome::ui::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/daily_welcome.rs
   Extent: 715 */

void pdb_141195750(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar6 = *param_1;
  uVar1 = param_1[1];
  uStack_58 = uVar6;
  uStack_50 = uVar1;
  uStack_98 = pdb_140bbbcb0(&uStack_58);
  uVar3 = _UNK_14329c268;
  uVar7 = _DAT_14329c260;
  uStack_90 = _DAT_14329c260;
  uStack_88 = _UNK_14329c268;
  uStack_90 = pdb_1400affa0(&uStack_98);
  uStack_98 = *(undefined8 *)(param_2 + 8);
  uVar4 = pdb_1400b0130(&uStack_98);
  pdb_14072caa0(&uStack_98,param_2,uVar4);
  uVar4 = pdb_14116ee90(&uStack_98,0);
  pdb_14119b6b0(uVar4,uVar6,uVar1);
  uStack_68 = uStack_88;
  uStack_78 = (undefined4)uStack_98;
  uStack_74 = uStack_98._4_4_;
  uStack_70 = (undefined4)uStack_90;
  uStack_6c = uStack_90._4_4_;
  lVar5 = pdb_14116e180(&uStack_78);
  *(undefined4 *)(lVar5 + 600) = 0x7b5a51ff;
  uStack_98._0_4_ = uStack_78;
  uStack_98._4_4_ = uStack_74;
  uStack_90._0_4_ = uStack_70;
  uStack_90._4_4_ = uStack_6c;
  uStack_88 = uStack_68;
  uVar6 = pdb_14116e180(&uStack_98);
  uVar2 = _DAT_142e37ad8;
  pdb_14119b2b0(uVar6,_DAT_142e37ad8);
  uStack_68 = uStack_88;
  uStack_78 = (undefined4)uStack_98;
  uStack_74 = uStack_98._4_4_;
  uStack_70 = (undefined4)uStack_90;
  uStack_6c = uStack_90._4_4_;
  uVar6 = pdb_14116e180(&uStack_78);
  pdb_140cb5c70(uVar6,300);
  uStack_88 = uStack_68;
  uStack_98._0_4_ = uStack_78;
  uStack_98._4_4_ = uStack_74;
  uStack_90._0_4_ = uStack_70;
  uStack_90._4_4_ = uStack_6c;
  uVar6 = pdb_14116e180(&uStack_98);
  pdb_140cb68f0(uVar6,2);
  uStack_68 = uStack_88;
  uStack_78 = (undefined4)uStack_98;
  uStack_74 = uStack_98._4_4_;
  uStack_70 = (undefined4)uStack_90;
  uStack_6c = uStack_90._4_4_;
  uVar6 = pdb_14116e180(&uStack_78);
  pdb_140cb5a70(uVar6,3);
  uVar6 = *(undefined8 *)(param_1[2] + 8);
  uVar1 = *(undefined8 *)(param_1[2] + 0x10);
  uStack_58 = uVar6;
  uStack_50 = uVar1;
  uStack_98 = pdb_140bbbcb0(&uStack_58);
  uStack_90 = uVar7;
  uStack_88 = uVar3;
  uStack_90 = pdb_1400affa0(&uStack_98);
  uStack_98 = *(undefined8 *)(param_2 + 8);
  uVar7 = pdb_1400b0130(&uStack_98);
  pdb_14072caa0(&uStack_98,param_2,uVar7);
  uVar7 = pdb_14116ee90(&uStack_98,0);
  pdb_14119b6b0(uVar7,uVar6,uVar1);
  uStack_68 = uStack_88;
  uStack_78 = (undefined4)uStack_98;
  uStack_74 = uStack_98._4_4_;
  uStack_70 = (undefined4)uStack_90;
  uStack_6c = uStack_90._4_4_;
  lVar5 = pdb_14116e180(&uStack_78);
  *(undefined4 *)(lVar5 + 600) = 0x7b5a51ff;
  uStack_98._0_4_ = uStack_78;
  uStack_98._4_4_ = uStack_74;
  uStack_90._0_4_ = uStack_70;
  uStack_90._4_4_ = uStack_6c;
  uStack_88 = uStack_68;
  uVar6 = pdb_14116e180(&uStack_98);
  pdb_14119b2b0(uVar6,uVar2);
  uStack_68 = uStack_88;
  uStack_78 = (undefined4)uStack_98;
  uStack_74 = uStack_98._4_4_;
  uStack_70 = (undefined4)uStack_90;
  uStack_6c = uStack_90._4_4_;
  uVar6 = pdb_14116e180(&uStack_78);
  pdb_140cb5c70(uVar6,300);
  uStack_88 = uStack_68;
  uStack_98._0_4_ = uStack_78;
  uStack_98._4_4_ = uStack_74;
  uStack_90._0_4_ = uStack_70;
  uStack_90._4_4_ = uStack_6c;
  uVar6 = pdb_14116e180(&uStack_98);
  pdb_140cb68f0(uVar6,2);
  uStack_68 = uStack_88;
  uStack_78 = (undefined4)uStack_98;
  uStack_74 = uStack_98._4_4_;
  uStack_70 = (undefined4)uStack_90;
  uStack_6c = uStack_90._4_4_;
  uVar6 = pdb_14116e180(&uStack_78);
  pdb_140cb5a70(uVar6,3);
  return;
}

