// VA 0x140900fd0, PDB extent 72 bytes
// country_core::systems::ui::resources::ui_state::WidgetId::from_name<alloc::string::String>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::WidgetId::from_name<alloc::string::String>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 72 */

undefined8 pdb_140900fd0(ulonglong *param_1)

{
  byte *arg0;
  undefined8 uVar1;
  byte *pbStack_20;
  ulonglong uStack_18;
  
  arg0 = (byte *)param_1[1];
  uStack_18 = param_1[2];
  pbStack_20 = arg0;
  uVar1 = pdb_140bbbcb0(&pbStack_20);
  if (*param_1 != 0) {
    pub_1406abac0(arg0,*param_1,1);
  }
  return uVar1;
}

