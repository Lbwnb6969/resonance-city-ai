// Matched PDB: country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_point_plant_offsets
// VA 0x140b245e0, PDB extent 246 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_point_plant_offsets
   Extent: 246 bytes. No whole-program auto-analysis. */

undefined8 pdb_140b245e0(undefined8 param_1,longlong param_2)

{
  undefined8 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_58;
  undefined8 uStack_48;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  lStack_98 = *(longlong *)(param_2 + 0x68);
  lStack_90 = lStack_98 + *(longlong *)(param_2 + 0x70) * 0x48;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_a0 = 1;
  uStack_58 = 0;
  uStack_48 = 0;
  pdb_1415fbd10(&lStack_38,&uStack_a0);
  uStack_20 = uStack_30;
  uStack_a0 = uStack_30;
  lStack_98 = uStack_28;
  lStack_90 = 2;
  pdb_1415ea9b0(param_1,&uStack_a0);
  if (lStack_38 != 0) {
    func_0x0001406abac0(uStack_20,lStack_38 << 2,4);
  }
  return param_1;
}

