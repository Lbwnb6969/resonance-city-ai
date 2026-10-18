// VA 0x1408ffad0, PDB extent 27 bytes
// country_core::systems::ui::resources::ui_state::UiWidgetContext::hovered
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::UiWidgetContext::hovered
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 27 */

undefined1 pdb_1408ffad0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0x18) == '\x01') && (*(longlong *)(lVar1 + 0x38) == param_1[1])) {
    return *(undefined1 *)(lVar1 + 0x19);
  }
  return 0;
}

