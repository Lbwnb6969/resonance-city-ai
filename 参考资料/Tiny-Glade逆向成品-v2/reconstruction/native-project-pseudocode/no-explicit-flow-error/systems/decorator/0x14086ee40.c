// VA 0x14086ee40, PDB extent 454 bytes
// system_decorator::ui_systems::ui_place_decorator::decorator_cursor_icon
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_place_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_place_decorator::decorator_cursor_icon
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_place_decorator.rs
   Extent: 454 */

void pdb_14086ee40(undefined4 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  ulonglong arg0;
  longlong lVar3;
  code *pcVar4;
  byte *pbVar5;
  undefined8 auStack_1a0 [2];
  longlong *plStack_190;
  longlong *plStack_188;
  ulonglong uStack_178;
  byte *pbStack_170;
  ulonglong uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 auStack_e8 [23];
  
  lVar2 = *(longlong *)(&UNK_14300de38 + param_3 * 8);
  auStack_e8[0] = 0x8000000000000001;
  pdb_1409bb100(&uStack_178,auStack_e8);
  pdb_1409bb0b0(auStack_e8,&uStack_178,0);
  pdb_1409bba50(auStack_1a0,auStack_e8,param_5,param_6,param_7);
  iVar1 = *(int *)(&UNK_14300de78 + lVar2 * 4);
  arg0 = *(ulonglong *)(&UNK_14300de90 + lVar2 * 8);
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(arg0,1);
  if (pbVar5 != (byte *)0x0) {
    pub_142e32760(pbVar5,&UNK_14300de78 + iVar1,arg0);
    uStack_160 = 0;
    uStack_150 = _DAT_14300d940;
    uStack_178 = arg0;
    pbStack_170 = pbVar5;
    uStack_168 = arg0;
    uStack_158 = param_1;
    uStack_154 = param_2;
    pdb_1414b9e10(auStack_1a0,&uStack_178,&UNK_14300ddf0);
    if (plStack_190 == (longlong *)0x0) {
      plStack_190 = plStack_188;
    }
    lVar2 = plStack_190[2];
    if ((ulonglong)(*plStack_190 - lVar2) < 0x18) {
      pdb_142d7f1b0(plStack_190,lVar2,0x18,1,1);
    }
    lVar3 = plStack_190[1];
    *(code **)(lVar3 + lVar2) = pdb_1414b81d0;
    *(undefined8 *)(lVar3 + 8 + lVar2) = auStack_1a0[0];
    *(undefined1 *)(lVar3 + 0x10 + lVar2) = 0;
    plStack_190[2] = lVar2 + 0x18;
    return;
  }
  pdb_142dc7e2a(1,arg0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

