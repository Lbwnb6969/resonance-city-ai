// VA 0x140b57670, PDB extent 258 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 258 */

undefined8 * pdb_140b57670(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uStack_68 = 0;
  uStack_60 = 8;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 8;
  uStack_40 = 0;
  puVar4 = &uStack_68;
  pdb_140b42570(&uStack_38,puVar4,0x1000);
  plVar2 = (longlong *)pdb_140f3bda0();
  if ((char)plVar2[2] == '\x01') {
    lVar3 = *plVar2;
    puVar4 = (undefined8 *)plVar2[1];
  }
  else {
    lVar3 = pdb_140f4fd10();
    *plVar2 = lVar3;
    plVar2[1] = (longlong)puVar4;
    *(undefined1 *)(plVar2 + 2) = 1;
  }
  *plVar2 = lVar3 + 1;
  param_1[2] = uStack_28;
  *param_1 = uStack_38;
  param_1[1] = uStack_30;
  uVar1 = _UNK_14305a998;
  param_1[3] = _DAT_14305a990;
  param_1[4] = uVar1;
  uVar1 = _UNK_14305a9a8;
  param_1[5] = _DAT_14305a9a0;
  param_1[6] = uVar1;
  param_1[7] = lVar3;
  param_1[8] = puVar4;
  param_1[9] = 0x4000000040;
  param_1[10] = _DAT_142e61200;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}

