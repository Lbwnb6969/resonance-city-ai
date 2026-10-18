// VA 0x1428b3120, PDB extent 483 bytes
// country_core::systems::ui::resources::widget_params::WidgetParams::signifier<enum2$<core::option::Option<country_core::systems::ui::signifiers::SignifierFactory> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::WidgetParams::signifier<enum2$<core::option::Option<country_core::systems::ui::signifiers::SignifierFactory>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 483 */

undefined8 pdb_1428b3120(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  byte *pbStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_20 = param_2;
  pdb_14150fa60(&uStack_50,param_3);
  if (SBORROW8(0,CONCAT44(uStack_4c,uStack_50))) {
    pdb_1409a5100(puStack_20);
    *puStack_20 = 0;
    puStack_20[1] = 8;
    puStack_20[2] = 0;
  }
  else {
    pdb_14007ee60();
    pbStack_28 = pub_1406abab0(0x28,8);
    if (pbStack_28 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x28);
    }
    *(undefined8 *)(pbStack_28 + 0x20) = uStack_30;
    *(undefined4 *)(pbStack_28 + 0x10) = uStack_40;
    *(undefined4 *)(pbStack_28 + 0x14) = uStack_3c;
    *(undefined4 *)(pbStack_28 + 0x18) = uStack_38;
    *(undefined4 *)(pbStack_28 + 0x1c) = uStack_34;
    *(undefined4 *)pbStack_28 = uStack_50;
    *(undefined4 *)(pbStack_28 + 4) = uStack_4c;
    *(undefined4 *)(pbStack_28 + 8) = uStack_48;
    *(undefined4 *)(pbStack_28 + 0xc) = uStack_44;
    pdb_1409a5100(puStack_20);
    *puStack_20 = 1;
    puStack_20[1] = pbStack_28;
    puStack_20[2] = 1;
  }
  pub_142e32760(param_1,puStack_20,0xb0);
  return param_1;
}

