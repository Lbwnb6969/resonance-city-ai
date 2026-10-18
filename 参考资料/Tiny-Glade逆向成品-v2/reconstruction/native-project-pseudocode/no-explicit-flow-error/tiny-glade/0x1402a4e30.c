// VA 0x1402a4e30, PDB extent 937 bytes
// tiny_glade::gui::confirm_incoming_panic_repro::confirm_incoming_panic_repro
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/confirm_incoming_panic_repro.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::gui::confirm_incoming_panic_repro::confirm_incoming_panic_repro
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/confirm_incoming_panic_repro.rs
   Extent: 937 */

void pdb_1402a4e30(longlong *param_1,undefined8 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  ulonglong *puStack_1a0;
  code *pcStack_198;
  undefined8 auStack_118 [6];
  undefined8 **ppuStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_88;
  undefined1 uStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pcVar1 = (char *)*param_2;
  lVar7 = *param_1;
  if (*pcVar1 == '\x02') {
    uVar4 = pdb_140a6d970(lVar7);
    if (uVar4 < 2) {
      pdb_14007ee60();
      pbVar6 = pub_1406abab0(0x8c,1);
      if (pbVar6 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x8c);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pub_142e32760(pbVar6,&UNK_142e65729,0x8c);
      uStack_60 = 0x8c;
      uStack_50 = 0x8c;
      pbStack_58 = pbVar6;
    }
    else {
      lVar5 = pdb_140a6d970(lVar7);
      puStack_1a0 = (ulonglong *)(lVar5 + -1);
      ppuStack_e8 = &puStack_1a0;
      pcStack_e0 = pdb_140f72a40;
      pdb_140f60760(&uStack_60,&UNK_142e657b5,&ppuStack_e8);
    }
    puStack_1a0 = &uStack_60;
    pcStack_198 = pdb_140001020;
    pdb_140f60760(&ppuStack_e8,&UNK_142e658a5,&puStack_1a0);
    uVar3 = uStack_d8;
    ppuStack_40 = ppuStack_e8;
    pcStack_48 = pcStack_e0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    ppuStack_e8 = (ulonglong **)0x0;
    pcStack_e0 = (code *)0x1;
    uStack_c8 = 1;
    uStack_c0 = 0;
    uStack_b8 = 0x8000000000000000;
    uStack_88 = 0xd;
    uStack_68 = 0;
    pdb_140cae6e0(&puStack_1a0,&ppuStack_e8,&UNK_142e659d3,4);
    pdb_140cae550(&ppuStack_e8,&puStack_1a0,pcStack_48,uVar3);
    auStack_118[0] = 0x8000000000000000;
    pdb_140cae480(&puStack_1a0,&ppuStack_e8,auStack_118);
    pdb_140cae650(&puStack_1a0);
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    *pcVar1 = '\x03';
    if (ppuStack_40 != (ulonglong **)0x0) {
      pub_1406abac0((byte *)pcStack_48,(ulonglong)ppuStack_40,1);
    }
    if (uStack_60 != 0) {
      pub_1406abac0(pbStack_58,uStack_60,1);
    }
  }
  if ((*(longlong *)(lVar7 + 0x40) == -0x7ffffffffffffffe) && (*pcVar1 == '\x01')) {
    lVar5 = *(longlong *)(lVar7 + 0x48);
    lVar7 = pdb_140a6d770(lVar7);
    if (lVar5 + 1 == lVar7) {
      uStack_d8 = 0;
      uStack_d0 = 0;
      ppuStack_e8 = (undefined8 **)0x0;
      pcStack_e0 = (code *)0x1;
      uStack_c8 = 1;
      uStack_c0 = 0;
      uStack_b8 = 0x8000000000000000;
      uStack_88 = 0xd;
      uStack_68 = 0;
      pdb_140cae6e0(&puStack_1a0,&ppuStack_e8,&UNK_142e659d7,0x1e);
      pdb_140cae550(&ppuStack_e8,&puStack_1a0,&UNK_142e659f5,0x97);
      auStack_118[0] = 0x8000000000000000;
      pdb_140cae480(&puStack_1a0,&ppuStack_e8,auStack_118);
      pdb_140cae650(&puStack_1a0);
      *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
      *pcVar1 = '\x02';
    }
  }
  return;
}

