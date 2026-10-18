// VA 0x14297dc80, PDB extent 588 bytes
// toolbar::ui_interaction::render_taffy_ui_to_widgets::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::ui_interaction::render_taffy_ui_to_widgets::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 588 */

undefined8 *
pdb_14297dc80(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 auStack_1a8 [18];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 auStack_80 [2];
  longlong *plStack_70;
  longlong *plStack_68;
  byte *pbStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_58 = pub_1406abab0(8,8);
  if (pbStack_58 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  auStack_1a8[0] = 0x8000000000000001;
  pdb_1409bb100(&uStack_118,auStack_1a8);
  pdb_1409bb0b0(auStack_1a8,&uStack_118,0);
  pdb_1409bba50(auStack_80,auStack_1a8,param_3,param_4,param_5);
  uVar1 = param_2[2];
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  pdb_14007ee60();
  pbStack_100 = pub_1406abab0(10,1);
  if (pbStack_100 != (byte *)0x0) {
    pbStack_100[0] = 0x69;
    pbStack_100[1] = 99;
    pbStack_100[2] = 0x6f;
    pbStack_100[3] = 0x6e;
    pbStack_100[4] = 0x5f;
    pbStack_100[5] = 99;
    pbStack_100[6] = 0x72;
    pbStack_100[7] = 0x6f;
    pbStack_100[8] = 0x73;
    pbStack_100[9] = 0x73;
    uStack_108 = 10;
    uStack_f8 = 10;
    uStack_f0 = 0;
    uStack_118 = uVar5;
    uStack_114 = uVar6;
    uStack_110 = uVar7;
    uStack_10c = uVar1;
    pdb_1411b02f0(auStack_80,&uStack_118,&UNK_1436078d0);
    if (plStack_70 == (longlong *)0x0) {
      plStack_70 = plStack_68;
    }
    lVar2 = plStack_70[2];
    if ((ulonglong)(*plStack_70 - lVar2) < 0x18) {
      pdb_142d7f1b0(plStack_70,lVar2,0x18,1,1);
    }
    lVar3 = plStack_70[1];
    *(code **)(lVar3 + lVar2) = pdb_1411af0e0;
    *(undefined8 *)(lVar3 + 8 + lVar2) = auStack_80[0];
    *(undefined1 *)(lVar3 + 0x10 + lVar2) = 0;
    plStack_70[2] = lVar2 + 0x18;
    *(undefined8 *)pbStack_58 = auStack_80[0];
    *param_1 = 1;
    param_1[1] = pbStack_58;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,10);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

