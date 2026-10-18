// VA 0x140b246e0, PDB extent 245 bytes
// country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_point_attrib_indices
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_point_attrib_indices
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 245 */

undefined8 pdb_140b246e0(undefined8 param_1,longlong param_2)

{
  byte *pbStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_58;
  undefined8 uStack_48;
  longlong lStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  lStack_98 = *(longlong *)(param_2 + 0x68);
  lStack_90 = lStack_98 + *(longlong *)(param_2 + 0x70) * 0x48;
  uStack_88 = 0;
  uStack_70 = 0;
  pbStack_a0 = (byte *)0x1;
  uStack_58 = 0;
  uStack_48 = 0;
  pdb_1415f5780(&lStack_38,&pbStack_a0);
  pbStack_20 = pbStack_30;
  pbStack_a0 = pbStack_30;
  lStack_98 = uStack_28;
  lStack_90 = 2;
  pdb_1416009c0(param_1,&pbStack_a0);
  if (lStack_38 != 0) {
    pub_1406abac0(pbStack_20,lStack_38 * 2,2);
  }
  return param_1;
}

