// VA 0x140aeb0a0, PDB extent 535 bytes
// country_core::systems::ui_clutter::ui_focus_decoclutter::ui_focus_decoclutter::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_focus_decoclutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_clutter::ui_focus_decoclutter::ui_focus_decoclutter::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_focus_decoclutter.rs
   Extent: 535 */

undefined8 *
pdb_140aeb0a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  ulonglong arg0;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 auStack_110 [5];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  ulonglong uStack_d0;
  byte *pbStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  ulonglong uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined2 uStack_64;
  undefined1 uStack_62;
  byte *pbStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_58 = pub_1406abab0(8,8);
  if (pbStack_58 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  uStack_6c = 0x3f80000000000000;
  uStack_74 = 0;
  uStack_e8 = 0x8000000000000001;
  uStack_b8 = _DAT_142e4e650;
  uStack_b0 = _UNK_142e4e658;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 2;
  uStack_88 = 1;
  uStack_80 = 0x100;
  uStack_7c = (ulonglong)_DAT_142e36f28;
  uStack_64 = 0;
  uStack_62 = 0;
  pdb_1409bba50(auStack_110,&uStack_e8,param_3,param_4,param_5);
  arg0 = param_2[1];
  if ((longlong)arg0 < 0) {
    uVar4 = 0;
LAB_140aeb18c:
    pdb_142dc7e2a(uVar4,arg0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  if (arg0 == 0) {
    pbStack_c8 = (byte *)0x1;
  }
  else {
    uVar2 = *param_2;
    pdb_14007ee60();
    uVar4 = 1;
    pbStack_c8 = pub_1406abab0(arg0,1);
    if (pbStack_c8 == (byte *)0x0) goto LAB_140aeb18c;
    pub_142e32760(pbStack_c8,uVar2,arg0);
  }
  uStack_e8 = CONCAT44(uVar1,uVar1);
  uStack_e0 = param_2[2];
  uStack_d8 = *(undefined4 *)(param_2 + 3);
  uStack_b8 = uStack_b8 & 0xffffffff00000000;
  uStack_d0 = arg0;
  uStack_c0 = arg0;
  pdb_141617160(auStack_110,&uStack_e8,&UNK_1430500b0);
  *(undefined8 *)pbStack_58 = auStack_110[0];
  *param_1 = 1;
  param_1[1] = pbStack_58;
  param_1[2] = 1;
  return param_1;
}

