// VA 0x140ca1790, PDB extent 447 bytes
// country_core::systems::terrain::ui_terrain_focus_mode::ui_terrain_focus_mode::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_terrain_focus_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::terrain::ui_terrain_focus_mode::ui_terrain_focus_mode::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_terrain_focus_mode.rs
   Extent: 447 */

undefined8 *
pdb_140ca1790(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 auStack_100 [5];
  undefined8 uStack_d8;
  byte *pbStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined2 uStack_70;
  ulonglong uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
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
  uVar1 = *(undefined4 *)(param_2 + 2);
  pdb_14007ee60();
  pbStack_d0 = pub_1406abab0(0x14,4);
  if (pbStack_d0 != (byte *)0x0) {
    uVar2 = param_2[1];
    *(undefined8 *)pbStack_d0 = *param_2;
    *(undefined8 *)(pbStack_d0 + 8) = uVar2;
    *(undefined4 *)(pbStack_d0 + 0x10) = uVar1;
    uStack_5c = 0;
    uStack_64 = 0;
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_d8 = 0x8000000000000004;
    puStack_c8 = &UNK_143077e38;
    uStack_a8 = _DAT_142e4e650;
    uStack_a4 = _UNK_142e4e654;
    uStack_a0 = _UNK_142e4e658;
    uStack_9c = _UNK_142e4e65c;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 1;
    uStack_70 = 0x100;
    uStack_6c = (ulonglong)_DAT_142e36f28;
    uStack_58 = 0x3f800000;
    uStack_54 = 0;
    uStack_52 = 0;
    pdb_1409bba50(auStack_100,&uStack_d8,param_3,param_4,param_5);
    *(undefined8 *)pbStack_48 = auStack_100[0];
    *param_1 = 1;
    param_1[1] = pbStack_48;
    param_1[2] = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x14);
}

