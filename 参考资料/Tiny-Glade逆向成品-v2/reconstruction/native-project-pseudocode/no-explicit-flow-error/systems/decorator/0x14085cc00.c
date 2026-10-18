// VA 0x14085cc00, PDB extent 73 bytes
// system_decorator::ui_systems::ui_stairs_viz::visualize_ui_stairs::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_stairs_viz::visualize_ui_stairs::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_viz.rs
   Extent: 73 */

undefined8 pdb_14085cc00(void)

{
  char cVar1;
  longlong lVar2;
  float *pfVar3;
  
  lVar2 = pdb_140c40010();
  if ((lVar2 != 0) && (cVar1 = pdb_1409010e0(lVar2 + 0x10), cVar1 == '\0')) {
    pfVar3 = (float *)pdb_140901490(lVar2 + 0x38,&UNK_14300ca78);
    if (_DAT_142e37838 < *pfVar3) {
      return 1;
    }
  }
  return 0;
}

