// VA 0x140688940, PDB extent 1006 bytes
// tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$8
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$8
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
   Extent: 1006 */

void pdb_140688940(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f3;
  undefined8 uStack_e8;
  byte *pbStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_9f;
  undefined1 uStack_8e;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar6 = 0xd;
  uVar5 = pdb_140dc6290(&UNK_142f952ae,0xd);
  pdb_140f5f4f0(&uStack_118,uVar5,uVar6);
  pbStack_40 = (byte *)CONCAT44(uStack_10c,uStack_110);
  pdb_1407339e0(&uStack_58,param_3,pbStack_40,CONCAT44(uStack_104,uStack_108));
  uVar5 = pdb_1406d0830(&uStack_58);
  uVar5 = pdb_140725a70(uVar5);
  pdb_140732b10(uVar5);
  uStack_68 = uStack_48;
  uStack_78 = uStack_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  pdb_140724ca0(&uStack_58,&uStack_78);
  uVar5 = pdb_140725900(&uStack_58);
  cVar4 = pdb_140732b50(uVar5);
  if (CONCAT44(uStack_114,uStack_118) != 0) {
    pub_1406abac0(pbStack_40,CONCAT44(uStack_114,uStack_118),1);
  }
  if (cVar4 != '\0') {
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar1 = *param_1;
    lVar2 = *(longlong *)(lVar1 + 0x30);
    uVar5 = *(undefined8 *)(lVar1 + 0x40);
    if (lVar2 == *(longlong *)(lVar1 + 0x20)) {
      pdb_142d7e980(lVar1 + 0x20);
    }
    lVar3 = *(longlong *)(lVar1 + 0x28);
    *(undefined8 *)(lVar3 + lVar2 * 0x10) = uVar5;
    *(undefined1 *)(lVar3 + 8 + lVar2 * 0x10) = 0xb;
    *(longlong *)(lVar1 + 0x30) = lVar2 + 1;
    *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 1;
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_118 = 2;
    uStack_114 = 0;
    pdb_140a003a0(*param_2,&uStack_118);
  }
  uVar6 = 8;
  uVar5 = pdb_140dc6290(&UNK_142f952bb,8);
  pdb_140f5f4f0(&uStack_118,uVar5,uVar6);
  pbStack_40 = (byte *)CONCAT44(uStack_10c,uStack_110);
  pdb_1407339e0(&uStack_58,param_3,pbStack_40,CONCAT44(uStack_104,uStack_108));
  pdb_140724ca0(&uStack_78,&uStack_58);
  pdb_140726180(&uStack_58,&uStack_78,6);
  uVar5 = pdb_140725900(&uStack_58);
  cVar4 = pdb_140732b50(uVar5);
  if (CONCAT44(uStack_114,uStack_118) != 0) {
    pub_1406abac0(pbStack_40,CONCAT44(uStack_114,uStack_118),1);
  }
  if (cVar4 != '\0') {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_118 = 5;
    uStack_114 = 0;
    pdb_140a003a0(*param_2,&uStack_118);
  }
  uVar6 = 9;
  uVar5 = pdb_140dc6290(&UNK_142f952c3,9);
  pdb_140f5f4f0(&uStack_118,uVar5,uVar6);
  pbStack_40 = (byte *)CONCAT44(uStack_10c,uStack_110);
  pdb_1407339e0(&uStack_58,param_3,pbStack_40,CONCAT44(uStack_104,uStack_108));
  pdb_140724ca0(&uStack_78,&uStack_58);
  pdb_140726180(&uStack_58,&uStack_78,6);
  uVar5 = pdb_140725900(&uStack_58);
  cVar4 = pdb_140732b50(uVar5);
  if (CONCAT44(uStack_114,uStack_118) != 0) {
    pub_1406abac0(pbStack_40,CONCAT44(uStack_114,uStack_118),1);
  }
  if (cVar4 != '\0') {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar5 = *param_2;
    pdb_14007ee60();
    pbStack_b8 = pub_1406abab0(0x48,8);
    if (pbStack_b8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x48);
    }
    uStack_f4 = 0;
    uStack_f3 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    pbStack_b8[0] = 1;
    pbStack_b8[1] = 0;
    pbStack_b8[2] = 0;
    pbStack_b8[3] = 0;
    pbStack_b8[4] = 0;
    pbStack_b8[5] = 0;
    pbStack_b8[6] = 0;
    pbStack_b8[7] = 0;
    pbStack_b8[8] = 1;
    pbStack_b8[9] = 0;
    pbStack_b8[10] = 0;
    pbStack_b8[0xb] = 0;
    pbStack_b8[0xc] = 0;
    pbStack_b8[0xd] = 0;
    pbStack_b8[0xe] = 0;
    pbStack_b8[0xf] = 0;
    pbStack_b8[0x10] = 0;
    pbStack_b8[0x14] = 0;
    pbStack_b8[0x15] = 0;
    pbStack_b8[0x16] = 0;
    pbStack_b8[0x17] = 0;
    pbStack_b8[0x35] = 0;
    pbStack_b8[0x36] = 0;
    pbStack_b8[0x37] = 0;
    pbStack_b8[0x38] = 0;
    pbStack_b8[0x39] = 0;
    pbStack_b8[0x3a] = 0;
    pbStack_b8[0x3b] = 0;
    pbStack_b8[0x3c] = 0;
    pbStack_b8[0x3d] = 0;
    pbStack_b8[0x3e] = 0;
    pbStack_b8[0x3f] = 0;
    pbStack_b8[0x40] = 0;
    pbStack_b8[0x41] = 0;
    pbStack_b8[0x42] = 0;
    pbStack_b8[0x43] = 0;
    pbStack_b8[0x44] = 0;
    pbStack_b8[0x28] = 0;
    pbStack_b8[0x29] = 0;
    pbStack_b8[0x2a] = 0;
    pbStack_b8[0x2b] = 0;
    pbStack_b8[0x2c] = 0;
    pbStack_b8[0x2d] = 0;
    pbStack_b8[0x2e] = 0;
    pbStack_b8[0x2f] = 0;
    pbStack_b8[0x30] = 0;
    pbStack_b8[0x31] = 0;
    pbStack_b8[0x32] = 0;
    pbStack_b8[0x33] = 0;
    pbStack_b8[0x34] = 0;
    pbStack_b8[0x35] = 0;
    pbStack_b8[0x36] = 0;
    pbStack_b8[0x37] = 0;
    *(undefined4 *)(pbStack_b8 + 0x18) = uStack_118;
    pbStack_b8[0x1c] = 0;
    pbStack_b8[0x1d] = 0;
    pbStack_b8[0x1e] = 0;
    pbStack_b8[0x1f] = 0;
    pbStack_b8[0x20] = 0;
    pbStack_b8[0x21] = 0;
    pbStack_b8[0x22] = 0;
    pbStack_b8[0x23] = 0;
    pbStack_b8[0x24] = 0;
    pbStack_b8[0x25] = 0;
    pbStack_b8[0x26] = 0;
    pbStack_b8[0x27] = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_e8 = 0x8000000000000000;
    uStack_b0 = 0;
    uStack_9f = 0;
    uStack_8e = 0;
    pdb_140a003a0(uVar5,&uStack_118);
  }
  return;
}

