// VA 0x14033ddc0, PDB extent 477 bytes
// tiny_glade::gui::gui_escape_menu::wishlist_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_escape_menu::wishlist_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
   Extent: 477 */

void pdb_14033ddc0(undefined8 param_1,float param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pdb_140306cd0(&uStack_68,param_1,&UNK_142f3e698,0xe,&UNK_142f3e6a6,0x11,_DAT_142f3e554 * param_2);
  uVar3 = 0xd;
  uVar2 = pdb_140dc6290(&UNK_142f3e6b7,0xd);
  pdb_140f5f4f0(&uStack_80,uVar2,uVar3);
  uVar4 = pdb_140de80b0(_DAT_142e37878,_DAT_142e37844,(float)lStack_70);
  fVar5 = (float)pdb_140de9fd0(_DAT_142f3e558,_DAT_142e37844,uVar4);
  pdb_1407339e0(&uStack_68,param_1,pbStack_78,lStack_70);
  uVar2 = pdb_140725e80(&uStack_68);
  pdb_14060a7e0(uVar2,fVar5 * param_2);
  uStack_88 = uStack_58;
  uStack_98 = uStack_68;
  uStack_94 = uStack_64;
  uStack_90 = uStack_60;
  uStack_8c = uStack_5c;
  pdb_140726290(&uStack_68,&uStack_98,param_2 * _DAT_142f3e55c);
  pdb_140725ed0(&uStack_98,&uStack_68,2);
  uVar2 = pdb_140725900(&uStack_98);
  cVar1 = pdb_140732b50(uVar2);
  if (cVar1 != '\0') {
    pdb_140559480(param_3,&UNK_142f3e6c4,0x36);
  }
  if (uStack_80 != 0) {
    pub_1406abac0(pbStack_78,uStack_80,1);
  }
  return;
}

