// VA 0x140689030, PDB extent 301 bytes
// tiny_glade::gui::gui_fog::fill_weather_slots::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_fog::fill_weather_slots::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
   Extent: 301 */

void pdb_140689030(byte *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte bVar7;
  undefined1 auStack_48 [24];
  
  uVar5 = pdb_140725a70(param_3);
  pdb_140732ae0(uVar5,1,0xf);
  uVar5 = pdb_140725a70(param_3);
  pdb_140732af0(uVar5);
  uVar5 = pdb_140725a70(param_3);
  pdb_140732b70(uVar5,1);
  uVar5 = pdb_140725900(param_3);
  cVar4 = pdb_140732b50(uVar5);
  bVar7 = *param_1;
  if (cVar4 != '\0') {
    *param_1 = bVar7 ^ 1;
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar1 = *param_2;
    lVar2 = *(longlong *)(lVar1 + 0x30);
    uVar5 = *(undefined8 *)(lVar1 + 0x40);
    if (lVar2 == *(longlong *)(lVar1 + 0x20)) {
      pdb_142d7e6e0(lVar1 + 0x20);
    }
    lVar3 = *(longlong *)(lVar1 + 0x28);
    *(uint *)(lVar3 + lVar2 * 0x20) = 0x27 - (uint)(bVar7 == 0);
    *(undefined8 *)(lVar3 + 0x18 + lVar2 * 0x20) = uVar5;
    *(longlong *)(lVar1 + 0x30) = lVar2 + 1;
    *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 1;
    bVar7 = bVar7 ^ 1;
  }
  puVar6 = &UNK_142f953ea;
  if (bVar7 != 0) {
    puVar6 = &UNK_142f953fb;
  }
  pdb_140306cd0(auStack_48,param_3,&UNK_142f9540a,0xe,puVar6,(ulonglong)(bVar7 ^ 1) * 2 + 0xf,
                0x42340000);
  uVar5 = pdb_140725a70(auStack_48);
  pdb_140732b00(uVar5);
  return;
}

