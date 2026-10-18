// VA 0x140b8caf0, PDB extent 85 bytes
// country_core::systems::wall::shapes::circle::ui_create_circle::circle_signifier::closure$0::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_create_circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::ui_create_circle::circle_signifier::closure$0::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_create_circle.rs
   Extent: 85 */

undefined8 * pdb_140b8caf0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  byte *pbStack_20;
  
  pdb_140defdf0(&uStack_40,param_2,_DAT_142e3787c,0);
  param_1[2] = uStack_30;
  *param_1 = uStack_40;
  param_1[1] = uStack_38;
  if (lStack_28 != 0) {
    pub_1406abac0(pbStack_20,lStack_28 << 2,4);
  }
  return param_1;
}

