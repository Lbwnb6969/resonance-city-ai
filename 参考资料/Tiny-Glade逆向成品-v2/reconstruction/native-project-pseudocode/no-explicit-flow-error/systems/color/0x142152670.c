// VA 0x142152670, PDB extent 549 bytes
// system_color::ui_color_wall_and_roof::color_cursor_icon
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_wall_and_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::ui_color_wall_and_roof::color_cursor_icon
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_wall_and_roof.rs
   Extent: 549 */

void pdb_142152670(undefined4 param_1,undefined4 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 auStack_1a0 [2];
  longlong *plStack_190;
  longlong *plStack_188;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 auStack_e8 [23];
  
  auStack_e8[0] = 0x8000000000000001;
  pdb_1409bb100(&uStack_178,auStack_e8);
  pdb_1409bb0b0(auStack_e8,&uStack_178,0);
  pdb_1409bba50(auStack_1a0,auStack_e8,param_4,param_5,param_6);
  uVar4 = auStack_1a0[0];
  if (param_3 == '\0') {
    plVar5 = plStack_190;
    if (plStack_190 == (longlong *)0x0) {
      plVar5 = plStack_188;
    }
    lVar1 = plVar5[2];
    if ((ulonglong)(*plVar5 - lVar1) < 0x18) {
      pdb_142d7f1b0(plVar5,lVar1,0x18,1,1);
    }
    lVar2 = plVar5[1];
    *(code **)(lVar2 + lVar1) = pdb_1428d3720;
    *(undefined8 *)(lVar2 + 8 + lVar1) = uVar4;
    *(undefined1 *)(lVar2 + 0x10 + lVar1) = 0;
    plVar5[2] = lVar1 + 0x18;
  }
  pdb_14007ee60();
  pbStack_160 = pub_1406abab0(0x17,1);
  uVar4 = _UNK_143462ed7;
  if (pbStack_160 != (byte *)0x0) {
    *(undefined8 *)pbStack_160 = _DAT_143462ecf;
    *(undefined8 *)(pbStack_160 + 8) = uVar4;
    pbStack_160[0xf] = 0x72;
    pbStack_160[0x10] = 0x5f;
    pbStack_160[0x11] = 99;
    pbStack_160[0x12] = 0x75;
    pbStack_160[0x13] = 0x72;
    pbStack_160[0x14] = 0x73;
    pbStack_160[0x15] = 0x6f;
    pbStack_160[0x16] = 0x72;
    uStack_168 = 0x17;
    uStack_158 = 0x17;
    uStack_150 = 0;
    uStack_170 = _DAT_143040f90;
    uStack_178 = param_1;
    uStack_174 = param_2;
    pdb_1428d47b0(auStack_1a0,&uStack_178,&UNK_143462ee8);
    if (plStack_190 == (longlong *)0x0) {
      plStack_190 = plStack_188;
    }
    lVar1 = plStack_190[2];
    if ((ulonglong)(*plStack_190 - lVar1) < 0x18) {
      pdb_142d7f1b0(plStack_190,lVar1,0x18,1,1);
    }
    lVar2 = plStack_190[1];
    *(code **)(lVar2 + lVar1) = pdb_1428d38f0;
    *(undefined8 *)(lVar2 + 8 + lVar1) = auStack_1a0[0];
    *(undefined1 *)(lVar2 + 0x10 + lVar1) = 0;
    plStack_190[2] = lVar1 + 0x18;
    return;
  }
  pdb_142dc7e2a(1,0x17);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

