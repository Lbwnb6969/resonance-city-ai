// VA 0x1408ffa90, PDB extent 30 bytes
// country_core::systems::ui::resources::ui_state::UiWidgetContext::clicked
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::UiWidgetContext::clicked
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 30 */

undefined8 pdb_1408ffa90(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0x18) == '\x02') && (*(char *)(lVar1 + 0x19) == '\x01')) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(lVar1 + 0x38) == param_1[1]);
  }
  return 0;
}

