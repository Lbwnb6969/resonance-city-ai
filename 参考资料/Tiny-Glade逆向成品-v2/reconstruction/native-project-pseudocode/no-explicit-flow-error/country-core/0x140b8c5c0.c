// VA 0x140b8c5c0, PDB extent 87 bytes
// country_core::systems::terrain::ui_terrain_focus_mode::ui_terrain_focus_mode::closure$1::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_terrain_focus_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::terrain::ui_terrain_focus_mode::ui_terrain_focus_mode::closure$1::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_terrain_focus_mode.rs
   Extent: 87 */

undefined8 * pdb_140b8c5c0(undefined8 *param_1,longlong param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  byte *pbStack_20;
  
  pdb_140defdf0(&uStack_40,param_2,_DAT_142e36f50,*(undefined4 *)(param_2 + 0x10));
  param_1[2] = uStack_30;
  *param_1 = uStack_40;
  param_1[1] = uStack_38;
  if (lStack_28 != 0) {
    pub_1406abac0(pbStack_20,lStack_28 << 2,4);
  }
  return param_1;
}

