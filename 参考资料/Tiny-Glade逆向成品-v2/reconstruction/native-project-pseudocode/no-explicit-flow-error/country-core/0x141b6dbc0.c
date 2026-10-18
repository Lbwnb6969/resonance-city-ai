// VA 0x141b6dbc0, PDB extent 251 bytes
// country_core::systems::ui_edit_focus::selection_outlines<core::iter::adapters::copied::Copied<core::slice::iter::Iter<country_core::resources::walls::WallId> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui_edit_focus::selection_outlines<core::iter::adapters::copied::Copied<core::slice::iter::Iter<country_core::resources::walls::WallId>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
   Extent: 251 */

longlong *
pdb_141b6dbc0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong *puStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lStack_50 = param_5;
  puStack_60 = &uStack_58;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_58 = param_4;
  pdb_141608420(&lStack_48,&uStack_70);
  if ((param_4 & 1) != 0) {
    lVar3 = lStack_38 * 0x10;
    lVar2 = 0;
    do {
      if (lVar3 == lVar2) {
        if (lStack_38 == lStack_48) {
          pdb_142d7e980(&lStack_48);
        }
        *(longlong *)(lStack_40 + lVar3) = param_5;
        *(undefined4 *)(lStack_40 + 8 + lVar3) = 0x3dcccccd;
        lStack_38 = lStack_38 + 1;
        break;
      }
      plVar1 = (longlong *)(lStack_40 + lVar2);
      lVar2 = lVar2 + 0x10;
    } while (*plVar1 != param_5);
  }
  param_1[2] = lStack_38;
  *param_1 = lStack_48;
  param_1[1] = lStack_40;
  return param_1;
}

