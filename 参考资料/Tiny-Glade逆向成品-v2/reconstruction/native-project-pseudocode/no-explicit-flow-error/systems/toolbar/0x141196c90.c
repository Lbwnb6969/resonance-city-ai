// VA 0x141196c90, PDB extent 436 bytes
// toolbar::menu::load::display_save_file_load_error::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::load::display_save_file_load_error::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
   Extent: 436 */

void pdb_141196c90(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uStack_30 = pdb_1402ed400;
  uStack_38 = param_1;
  pdb_140f60760(&uStack_70,&UNK_14329f60e,&uStack_38);
  pbStack_40 = pbStack_68;
  pbStack_80 = pbStack_68;
  uStack_78 = uStack_60;
  uStack_38 = pdb_140bbbcb0(&pbStack_80);
  uStack_30 = (code *)CONCAT44(_UNK_14329c264,_DAT_14329c260);
  uStack_28 = CONCAT44(_UNK_14329c26c,_UNK_14329c268);
  uStack_30 = (code *)pdb_1400affa0(&uStack_38);
  uStack_38 = *(undefined8 *)(param_2 + 8);
  uVar1 = pdb_1400b0130(&uStack_38);
  pdb_14072caa0(&uStack_38,param_2,uVar1);
  uVar1 = pdb_14116ee90(&uStack_38,0);
  pdb_14119b6b0(uVar1,pbStack_40,uStack_60);
  uStack_48 = uStack_28;
  uStack_58 = (undefined4)uStack_38;
  uStack_54 = uStack_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  lVar2 = pdb_14116e180(&uStack_58);
  *(undefined4 *)(lVar2 + 600) = 0xffffffe0;
  uStack_28 = uStack_48;
  uStack_38._0_4_ = uStack_58;
  uStack_38._4_4_ = uStack_54;
  uStack_30._0_4_ = uStack_50;
  uStack_30._4_4_ = uStack_4c;
  uVar1 = pdb_14116e180(&uStack_38);
  pdb_140cb68f0(uVar1,0);
  uStack_48 = uStack_28;
  uStack_58 = (undefined4)uStack_38;
  uStack_54 = uStack_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uVar1 = pdb_14116e180(&uStack_58);
  pdb_140cb5df0(uVar1,_DAT_14329e270);
  uStack_28 = uStack_48;
  uStack_38 = CONCAT44(uStack_54,uStack_58);
  uStack_30 = (code *)CONCAT44(uStack_4c,uStack_50);
  uVar1 = pdb_14116e180(&uStack_38);
  pdb_14119b2b0(uVar1,_DAT_142e378c0);
  if (uStack_70 != 0) {
    pub_1406abac0(pbStack_40,uStack_70,1);
  }
  return;
}

