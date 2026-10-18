// VA 0x1428b3820, PDB extent 680 bytes
// country_core::systems::ui::resources::widget_params::WidgetParams::signifier<system_color::ui_color_wall_and_roof::ui_color_wall_and_roof::closure_env$8>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::WidgetParams::signifier<system_color::ui_color_wall_and_roof::ui_color_wall_and_roof::closure_env$8>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 680 */

undefined8
pdb_1428b3820(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  byte *pbStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puStack_48 = param_2;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x18,8);
  if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  pbVar1[0] = 1;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0;
  pbVar1[8] = 1;
  pbVar1[9] = 0;
  pbVar1[10] = 0;
  pbVar1[0xb] = 0;
  pbVar1[0xc] = 0;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0;
  pbVar1[0xf] = 0;
  *(undefined4 *)(pbVar1 + 0x10) = param_3;
  *(undefined4 *)(pbVar1 + 0x14) = param_4;
  pdb_1409baea0(&uStack_78,&UNK_1432873d8,0xc,pbVar1,&UNK_1432873e8);
  if (SBORROW8(0,CONCAT44(uStack_74,uStack_78))) {
    pdb_1409a5100(puStack_48);
    *puStack_48 = 0;
    puStack_48[1] = 8;
    puStack_48[2] = 0;
  }
  else {
    pdb_14007ee60();
    pbStack_50 = pub_1406abab0(0x28,8);
    if (pbStack_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x28);
    }
    *(undefined8 *)(pbStack_50 + 0x20) = uStack_58;
    *(undefined4 *)(pbStack_50 + 0x10) = uStack_68;
    *(undefined4 *)(pbStack_50 + 0x14) = uStack_64;
    *(undefined4 *)(pbStack_50 + 0x18) = uStack_60;
    *(undefined4 *)(pbStack_50 + 0x1c) = uStack_5c;
    *(undefined4 *)pbStack_50 = uStack_78;
    *(undefined4 *)(pbStack_50 + 4) = uStack_74;
    *(undefined4 *)(pbStack_50 + 8) = uStack_70;
    *(undefined4 *)(pbStack_50 + 0xc) = uStack_6c;
    pdb_1409a5100(puStack_48);
    *puStack_48 = 1;
    puStack_48[1] = pbStack_50;
    puStack_48[2] = 1;
  }
  pub_142e32760(param_1,puStack_48,0xb0);
  return param_1;
}

