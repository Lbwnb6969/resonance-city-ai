// VA 0x14085d890, PDB extent 37 bytes
// system_decorator::ui_systems::ui_stairs_viz::visualize_ui_stairs::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_stairs_viz::visualize_ui_stairs::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_viz.rs
   Extent: 37 */

undefined8 pdb_14085d890(void)

{
  longlong lVar1;
  
  lVar1 = pdb_140c40010();
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)(lVar1 + 0x10) >> 8),*(byte *)(lVar1 + 0x32) < 2);
  }
  return 0;
}

