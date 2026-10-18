// VA 0x142b24cf0, PDB extent 598 bytes
// country_core::systems::ui::resources::widget_params::WidgetParams::signifier<system_tree::ui_move_tree::ui_move_tree::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::WidgetParams::signifier<system_tree::ui_move_tree::ui_move_tree::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 598 */

undefined8 pdb_142b24cf0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  byte *pbStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  puStack_28 = param_2;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x20,8);
  if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x20);
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
  *(undefined8 *)(pbVar1 + 0x10) = *param_3;
  *(undefined4 *)(pbVar1 + 0x18) = *(undefined4 *)(param_3 + 1);
  pdb_1409baea0(&uStack_58,&UNK_14344bfd0,0xc,pbVar1,&UNK_14344bfa0);
  if (SBORROW8(0,CONCAT44(uStack_54,uStack_58))) {
    pdb_1409a5100(puStack_28);
    *puStack_28 = 0;
    puStack_28[1] = 8;
    puStack_28[2] = 0;
  }
  else {
    pdb_14007ee60();
    pbStack_30 = pub_1406abab0(0x28,8);
    if (pbStack_30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x28);
    }
    *(undefined8 *)(pbStack_30 + 0x20) = uStack_38;
    *(undefined4 *)(pbStack_30 + 0x10) = uStack_48;
    *(undefined4 *)(pbStack_30 + 0x14) = uStack_44;
    *(undefined4 *)(pbStack_30 + 0x18) = uStack_40;
    *(undefined4 *)(pbStack_30 + 0x1c) = uStack_3c;
    *(undefined4 *)pbStack_30 = uStack_58;
    *(undefined4 *)(pbStack_30 + 4) = uStack_54;
    *(undefined4 *)(pbStack_30 + 8) = uStack_50;
    *(undefined4 *)(pbStack_30 + 0xc) = uStack_4c;
    pdb_1409a5100(puStack_28);
    *puStack_28 = 1;
    puStack_28[1] = pbStack_30;
    puStack_28[2] = 1;
  }
  pub_142e32760(param_1,puStack_28,0xb0);
  return param_1;
}

