// VA 0x14068d040, PDB extent 388 bytes
// tiny_glade::gui::settings::do_gui_escape_menu_settings::closure$5::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tiny_glade::gui::settings::do_gui_escape_menu_settings::closure$5::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 388 */

void pdb_14068d040(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *arg0;
  ulonglong arg1;
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if ((param_1 & 1) != 0) {
    pdb_140a1aa60(&uStack_60);
    pdb_140cb8ed0(&uStack_78,&uStack_60,0x808080e0);
    pdb_140cb8f80(&uStack_60,&uStack_78,_DAT_142e37878);
    plVar1 = (longlong *)pdb_1403054f0(param_4);
    arg0 = (byte *)plVar1[1];
    lVar3 = plVar1[2];
    if (lVar3 != 0) {
      pbVar4 = arg0 + 8;
      do {
        arg1 = *(ulonglong *)(pbVar4 + -8);
        if ((-1 < (longlong)arg1) && (arg1 != 0)) {
          pub_1406abac0(*(byte **)pbVar4,arg1,1);
        }
        pbVar4 = pbVar4 + 0x20;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*plVar1 != 0) {
      pub_1406abac0(arg0,*plVar1 << 5,8);
    }
    plVar1[2] = lStack_50;
    *(undefined4 *)plVar1 = uStack_60;
    *(undefined4 *)((longlong)plVar1 + 4) = uStack_5c;
    *(undefined4 *)(plVar1 + 1) = uStack_58;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_54;
  }
  pdb_140734440(&uStack_60,param_4,param_2,param_3);
  uVar2 = pdb_140726ff0(&uStack_60);
  pdb_14060a7e0(uVar2,_DAT_142e37994);
  lStack_68 = lStack_50;
  uStack_78 = uStack_60;
  uStack_74 = uStack_5c;
  uStack_70 = uStack_58;
  uStack_6c = uStack_54;
  pdb_140727100(&uStack_60,&uStack_78,_DAT_142f95194);
  return;
}

