// VA 0x140a049b0, PDB extent 546 bytes
// country_core::systems::ui_raise_shape::ui_raise_shape::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_raise_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui_raise_shape::ui_raise_shape::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_raise_shape.rs
   Extent: 546 */

undefined8 *
pdb_140a049b0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong arg0;
  undefined8 uVar4;
  undefined8 auStack_120 [5];
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  ulonglong uStack_e0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_90;
  ulonglong uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined1 uStack_72;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_50 = pub_1406abab0(8,8);
  if (pbStack_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  arg0 = uVar1 * 0xc;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    uVar4 = 0;
LAB_140a04a24:
    pdb_142dc7e2a(uVar4,arg0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  uStack_60 = param_4;
  uStack_58 = param_3;
  if (arg0 == 0) {
    pbStack_e8 = (byte *)0x4;
    uStack_f0 = 0;
  }
  else {
    pdb_14007ee60();
    uVar4 = 4;
    pbStack_e8 = pub_1406abab0(arg0,4);
    uStack_f0 = uVar1;
    if (pbStack_e8 == (byte *)0x0) goto LAB_140a04a24;
  }
  if (uVar1 != 0) {
    pub_142e32760(pbStack_e8,uVar2,arg0);
  }
  uStack_7c = 0;
  uStack_84 = 0;
  uStack_9c = *(undefined4 *)(param_2 + 0x18);
  uStack_f8 = 0x8000000000000002;
  uStack_c8 = _DAT_142e4e650;
  uStack_c4 = _UNK_142e4e654;
  uStack_c0 = _UNK_142e4e658;
  uStack_bc = _UNK_142e4e65c;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_90 = 0x100;
  uStack_8c = (ulonglong)_DAT_142e36f28;
  uStack_78 = 0x3f800000;
  uStack_74 = 0;
  uStack_72 = 0;
  uStack_e0 = uVar1;
  pdb_1409bba50(auStack_120,&uStack_f8,uStack_58,uStack_60,param_5);
  *(undefined8 *)pbStack_50 = auStack_120[0];
  *param_1 = 1;
  param_1[1] = pbStack_50;
  param_1[2] = 1;
  return param_1;
}

