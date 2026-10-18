// VA 0x140b8bfb0, PDB extent 438 bytes
// country_core::systems::wall::shapes::circle::ui_edit_circle::ui_edit_circle::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_edit_circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::ui_edit_circle::ui_edit_circle::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_edit_circle.rs
   Extent: 438 */

undefined8 *
pdb_140b8bfb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 auStack_f0 [5];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  ulonglong uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_38 = pub_1406abab0(8,8);
  if (pbStack_38 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pbStack_b8 = pub_1406abab0(0x1e,1);
  uVar2 = _UNK_14305db4e;
  if (pbStack_b8 != (byte *)0x0) {
    *(ulonglong *)(pbStack_b8 + 0xe) = CONCAT62(_UNK_14305db48,_DAT_14305db46);
    *(undefined8 *)(pbStack_b8 + 0x16) = uVar2;
    uVar2 = CONCAT26(_DAT_14305db46,_UNK_14305db40);
    *(undefined8 *)pbStack_b8 = _DAT_14305db38;
    *(undefined8 *)(pbStack_b8 + 8) = uVar2;
    uStack_54 = param_2[2];
    uStack_4c = *(undefined4 *)(param_2 + 3);
    uStack_98 = *param_2;
    uStack_90 = param_2[1];
    uStack_c8 = 0x8000000000000000;
    uStack_c0 = 0x1e;
    uStack_b0 = 0x1e;
    uStack_88 = 0x3fc0000000000001;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 2;
    uStack_68 = 1;
    uStack_60 = 0x100;
    uStack_5c = (ulonglong)_DAT_142e36f28;
    uStack_48 = 0x3f800000;
    uStack_44 = 0;
    uStack_42 = 0;
    pdb_1409bba50(auStack_f0,&uStack_c8,param_3,param_4,param_5);
    *(undefined8 *)pbStack_38 = auStack_f0[0];
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0x1e);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

