// VA 0x140ba9e00, PDB extent 637 bytes
// country_core::systems::wall::eraser::ui_bulldozer::hammer_cursor_icon
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/ui_bulldozer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::eraser::ui_bulldozer::hammer_cursor_icon
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/ui_bulldozer.rs
   Extent: 637 */

void pdb_140ba9e00(undefined4 param_1,undefined4 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 auStack_f0 [2];
  longlong *plStack_e0;
  longlong *plStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  ulonglong uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined2 uStack_44;
  undefined1 uStack_42;
  
  uStack_4c = 0x3f80000000000000;
  uStack_54 = 0;
  uStack_c8 = 0x8000000000000001;
  uStack_98 = _DAT_142e4e650;
  uStack_90 = _UNK_142e4e658;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 2;
  uStack_68 = 1;
  uStack_60 = 0x100;
  uStack_5c = (ulonglong)_DAT_142e36f28;
  uStack_44 = 0;
  uStack_42 = 0;
  pdb_1409bba50(auStack_f0,&uStack_c8,param_4,param_5,param_6);
  uVar4 = auStack_f0[0];
  if (param_3 == '\0') {
    plVar5 = plStack_e0;
    if (plStack_e0 == (longlong *)0x0) {
      plVar5 = plStack_d8;
    }
    lVar1 = plVar5[2];
    if ((ulonglong)(*plVar5 - lVar1) < 0x18) {
      pdb_142d7f1b0(plVar5,lVar1,0x18,1,1);
    }
    lVar2 = plVar5[1];
    *(code **)(lVar2 + lVar1) = pdb_14160a570;
    *(undefined8 *)(lVar2 + 8 + lVar1) = uVar4;
    *(undefined1 *)(lVar2 + 0x10 + lVar1) = 0;
    plVar5[2] = lVar1 + 0x18;
  }
  pdb_14007ee60();
  pbStack_b0 = pub_1406abab0(0xd,1);
  if (pbStack_b0 != (byte *)0x0) {
    pbStack_b0[5] = 0x72;
    pbStack_b0[6] = 0x5f;
    pbStack_b0[7] = 99;
    pbStack_b0[8] = 0x75;
    pbStack_b0[9] = 0x72;
    pbStack_b0[10] = 0x73;
    pbStack_b0[0xb] = 0x6f;
    pbStack_b0[0xc] = 0x72;
    pbStack_b0[0] = 0x68;
    pbStack_b0[1] = 0x61;
    pbStack_b0[2] = 0x6d;
    pbStack_b0[3] = 0x6d;
    pbStack_b0[4] = 0x65;
    pbStack_b0[5] = 0x72;
    pbStack_b0[6] = 0x5f;
    pbStack_b0[7] = 99;
    uStack_c8 = CONCAT44(param_2,param_1);
    uStack_c0 = _DAT_143040f90;
    uStack_b8 = 0xd;
    uStack_a8 = 0xd;
    uStack_a0 = 0;
    pdb_1416174b0(auStack_f0,&uStack_c8,&UNK_143060c40);
    if (plStack_e0 == (longlong *)0x0) {
      plStack_e0 = plStack_d8;
    }
    lVar1 = plStack_e0[2];
    if ((ulonglong)(*plStack_e0 - lVar1) < 0x18) {
      pdb_142d7f1b0(plStack_e0,lVar1,0x18,1,1);
    }
    lVar2 = plStack_e0[1];
    *(code **)(lVar2 + lVar1) = pdb_14160d8d0;
    *(undefined8 *)(lVar2 + 8 + lVar1) = auStack_f0[0];
    *(undefined1 *)(lVar2 + 0x10 + lVar1) = 0;
    plStack_e0[2] = lVar1 + 0x18;
    return;
  }
  pdb_142dc7e2a(1,0xd);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

