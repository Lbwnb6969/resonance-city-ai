// VA 0x140ca1950, PDB extent 438 bytes
// country_core::systems::terrain::ui_terrain_focus_mode::ui_terrain_focus_mode::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_terrain_focus_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::terrain::ui_terrain_focus_mode::ui_terrain_focus_mode::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_terrain_focus_mode.rs
   Extent: 438 */

undefined8 *
pdb_140ca1950(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined4 uStack_88;
  float fStack_84;
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
  pbStack_b8 = pub_1406abab0(0x1a,1);
  uVar2 = _UNK_143077e7a;
  if (pbStack_b8 != (byte *)0x0) {
    *(ulonglong *)(pbStack_b8 + 10) = CONCAT26(_UNK_143077e78,_DAT_143077e72);
    *(undefined8 *)(pbStack_b8 + 0x12) = uVar2;
    uVar2 = CONCAT62(_DAT_143077e72,_UNK_143077e70);
    *(undefined8 *)pbStack_b8 = _DAT_143077e68;
    *(undefined8 *)(pbStack_b8 + 8) = uVar2;
    uStack_98 = *param_2;
    uStack_90 = param_2[1];
    fStack_84 = *(float *)(param_2 + 2) * _DAT_142e37838;
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_54 = *(undefined8 *)((longlong)param_2 + 0x14);
    uStack_c8 = 0x8000000000000000;
    uStack_c0 = 0x1a;
    uStack_b0 = 0x1a;
    uStack_88 = 1;
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
  pdb_142dc7e2a(1,0x1a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

