// VA 0x14008e2b0, PDB extent 431 bytes
// tiny_glade::gui::gui_fog::fill_weather_slots
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_fog::fill_weather_slots
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
   Extent: 431 */

undefined1
pdb_14008e2b0(undefined8 param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  longlong lStack_70;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  undefined4 *puStack_50;
  undefined4 uStack_44;
  
  uStack_7d = param_3;
  uStack_7c = param_4;
  uStack_44 = param_4;
  cVar1 = pdb_140a3d910(&uStack_7d);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uStack_7e = 0;
    puStack_78 = (undefined1 *)(param_2 + 0x10);
    lStack_70 = param_2 + 0x15;
    puStack_68 = (undefined4 *)param_6;
    puStack_60 = &uStack_7c;
    uStack_58 = param_5;
    puStack_50 = (undefined4 *)&uStack_7e;
    pdb_14068dc70(param_1,&UNK_142e3856a,0xd,&puStack_78);
    uVar2 = uStack_7e;
  }
  uStack_7c = CONCAT31(uStack_7c._1_3_,uVar2);
  pdb_14068f7f0(param_1,&UNK_142e38558,8);
  pdb_14068f180(param_1,&UNK_142e38560,10,param_2 + 0x14,param_6);
  uStack_7f = 0;
  puStack_60 = (undefined4 *)param_5;
  uStack_58 = param_6;
  puStack_78 = &uStack_7f;
  lStack_70 = param_2;
  puStack_68 = &uStack_44;
  puStack_50 = &uStack_7c;
  pdb_140690d10(param_1,&UNK_142e385aa,8,&puStack_78);
  uStack_7f = 1;
  puStack_60 = (undefined4 *)param_5;
  uStack_58 = param_6;
  puStack_78 = &uStack_7f;
  lStack_70 = param_2;
  puStack_68 = &uStack_44;
  puStack_50 = &uStack_7c;
  pdb_140690d10(param_1,&UNK_142e385b2,8,&puStack_78);
  uStack_7f = 2;
  puStack_60 = (undefined4 *)param_5;
  uStack_58 = param_6;
  puStack_78 = &uStack_7f;
  lStack_70 = param_2;
  puStack_68 = &uStack_44;
  puStack_50 = &uStack_7c;
  pdb_140690d10(param_1,&UNK_142e385ba,8,&puStack_78);
  return (undefined1)uStack_7c;
}

