// VA 0x140adbff0, PDB extent 479 bytes
// country_core::systems::ui_clutter::ui_autoclutter::ui_convert_autoclutter_to_decoclutter::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_autoclutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_clutter::ui_autoclutter::ui_convert_autoclutter_to_decoclutter::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_autoclutter.rs
   Extent: 479 */

undefined8 *
pdb_140adbff0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 auStack_100 [5];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  ulonglong uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined2 uStack_54;
  undefined1 uStack_52;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_48 = pub_1406abab0(8,8);
  if (pbStack_48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  uStack_5c = 0x3f80000000000000;
  uStack_64 = 0;
  uStack_d8 = 0x8000000000000001;
  uStack_a8 = _DAT_142e4e650;
  uStack_a0 = _UNK_142e4e658;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 2;
  uStack_78 = 1;
  uStack_70 = 0x100;
  uStack_6c = (ulonglong)_DAT_142e36f28;
  uStack_54 = 0;
  uStack_52 = 0;
  pdb_1409bba50(auStack_100,&uStack_d8,param_3,param_4,param_5);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  pdb_14007ee60();
  pbStack_b8 = pub_1406abab0(4,1);
  if (pbStack_b8 != (byte *)0x0) {
    pbStack_b8[0] = 0x6c;
    pbStack_b8[1] = 0x69;
    pbStack_b8[2] = 0x6e;
    pbStack_b8[3] = 0x6b;
    uStack_d8 = CONCAT44(uVar1,uVar1);
    uStack_d0 = *param_2;
    uStack_c8 = *(undefined4 *)(param_2 + 1);
    uStack_c0 = 4;
    uStack_b0 = 4;
    uStack_a8 = uStack_a8 & 0xffffffff00000000;
    pdb_141617160(auStack_100,&uStack_d8,&UNK_14304e730);
    *(undefined8 *)pbStack_48 = auStack_100[0];
    *param_1 = 1;
    param_1[1] = pbStack_48;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

