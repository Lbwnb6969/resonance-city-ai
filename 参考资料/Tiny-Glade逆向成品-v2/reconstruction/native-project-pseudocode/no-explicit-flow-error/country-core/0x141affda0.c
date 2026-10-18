// VA 0x141affda0, PDB extent 604 bytes
// country_core::startup::load_audio::load_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_audio::load_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_audio.rs
   Extent: 604 */

void pdb_141affda0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 *puStack_28;
  code *pcStack_20;
  
  lVar5 = param_2;
  uStack_48 = pdb_140f3c9d0();
  uVar4 = (undefined4)lVar5;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_40 = uVar4;
  pdb_140a8b6c0(*param_1);
  if (2 < *_DAT_143ca8e90) {
    uStack_38 = pdb_140f3cb70(&uStack_48);
    puStack_28 = &uStack_38;
    pcStack_20 = pdb_140f72840;
    uStack_a8 = 0;
    pbStack_a0 = &UNK_14338c980;
    uStack_98 = 0x21;
    uStack_90 = 0;
    puStack_88 = &UNK_14338c928;
    uStack_80 = 0x2d;
    uStack_78 = 3;
    puStack_70 = &UNK_14338c980;
    uStack_68 = 0x21;
    uStack_60 = 0xc00000001;
    puStack_58 = &UNK_14338c956;
    ppuStack_50 = &puStack_28;
    uStack_30 = uVar4;
    pdb_140f332f0(&uStack_a9,&uStack_a8);
  }
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x1c,4);
  if (pbVar3 != (byte *)0x0) {
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[0x18] = 0;
    pbVar3[0x19] = 0;
    pbVar3[0x1a] = 0;
    pbVar3[0x1b] = 0;
    uStack_a8 = 1;
    uStack_98 = 1;
    uStack_90 = 1;
    pbStack_a0 = pbVar3;
    pdb_141618f60(param_2,&uStack_a8,&UNK_14338c9a8);
    plVar6 = *(longlong **)(param_2 + 8);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = *(longlong **)(param_2 + 0x10);
    }
    lVar5 = plVar6[2];
    if ((ulonglong)(*plVar6 - lVar5) < 0xc) {
      pdb_142d7f1b0(plVar6,lVar5,0xc,1,1);
    }
    lVar1 = plVar6[1];
    *(code **)(lVar1 + lVar5) = pdb_14160a6b0;
    *(undefined4 *)(lVar1 + 8 + lVar5) = 0;
    plVar6[2] = lVar5 + 0xc;
    uStack_a8 = 2;
    uStack_78 = uStack_78 & 0xffffffff00000000;
    pdb_141619230(param_2,&uStack_a8,&UNK_14338c9c0);
    lVar5 = plVar6[2];
    if ((ulonglong)(*plVar6 - lVar5) < 8) {
      pdb_142d7f1b0(plVar6,lVar5,8,1,1);
    }
    *(code **)(plVar6[1] + lVar5) = pdb_14160a850;
    plVar6[2] = lVar5 + 8;
    return;
  }
  pdb_142dc7e2a(4,0x1c);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

