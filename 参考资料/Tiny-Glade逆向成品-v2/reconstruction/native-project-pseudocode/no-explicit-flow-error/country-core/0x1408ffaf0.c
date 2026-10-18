// VA 0x1408ffaf0, PDB extent 30 bytes
// country_core::systems::ui::resources::ui_state::UiWidgetContext::is_active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::UiWidgetContext::is_active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 30 */

undefined8 pdb_1408ffaf0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0x18) != '\0') && (*(longlong *)(lVar1 + 0x38) == param_1[1])) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0x28) != 2);
  }
  return 0;
}

