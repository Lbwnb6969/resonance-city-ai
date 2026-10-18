// VA 0x1409ffaf0, PDB extent 422 bytes
// country_core::systems::wall::adjust_wall_height::adjust_wall_ui_mode::impl$0::signifier::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/adjust_wall_ui_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::adjust_wall_height::adjust_wall_ui_mode::impl$0::signifier::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/adjust_wall_ui_mode.rs
   Extent: 422 */

undefined8 *
pdb_1409ffaf0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 auStack_f0 [5];
  undefined8 auStack_c8 [6];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
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
  if (pbStack_38 != (byte *)0x0) {
    uStack_4c = 0;
    uStack_54 = 0;
    uStack_58 = *(undefined4 *)(param_2 + 1);
    auStack_c8[0] = 0x8000000000000001;
    uStack_98 = _DAT_142e4e650;
    uStack_94 = _UNK_142e4e654;
    uStack_90 = _UNK_142e4e658;
    uStack_8c = _UNK_142e4e65c;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0x4040000000000000;
    uStack_68 = 1;
    uStack_60 = 0x101;
    uStack_5c = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0;
    uStack_42 = 0;
    pdb_1409bba50(auStack_f0,auStack_c8,param_3,param_4,param_5);
    uStack_70 = *param_2;
    uStack_90 = 0;
    uStack_88 = 0;
    auStack_c8[0] = 0x8000000000000000;
    uStack_80 = 0;
    pdb_141617950(auStack_f0,auStack_c8,&UNK_1430346a8);
    *(undefined8 *)pbStack_38 = auStack_f0[0];
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
}

