// VA 0x1408ffab0, PDB extent 26 bytes
// country_core::systems::ui::resources::slider3d::impl$1::into_drag_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::slider3d::impl$1::into_drag_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 26 */

undefined1 pdb_1408ffab0(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *param_1;
  uVar2 = 2;
  if ((*(char *)(lVar1 + 0x18) == '\x02') && (*(longlong *)(lVar1 + 0x38) == param_1[1])) {
    uVar2 = *(undefined1 *)(lVar1 + 0x19);
  }
  return uVar2;
}

