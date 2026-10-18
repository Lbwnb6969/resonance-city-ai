// VA 0x140a6a780, PDB extent 150 bytes
// country_core::resources::walls::wall_render_slots::WallRenderSlots::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::wall_render_slots::WallRenderSlots::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
   Extent: 150 */

undefined8 * pdb_140a6a780(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)pdb_140f3bda0();
  if ((char)plVar2[2] == '\x01') {
    lVar3 = *plVar2;
    param_2 = plVar2[1];
  }
  else {
    lVar3 = pdb_140f4fd10();
    plVar2[1] = param_2;
    *(undefined1 *)(plVar2 + 2) = 1;
  }
  *plVar2 = lVar3 + 1;
  uVar1 = _UNK_1430403f8;
  param_1[8] = _DAT_1430403f0;
  param_1[9] = uVar1;
  uVar1 = _UNK_1430403e8;
  param_1[6] = _DAT_1430403e0;
  param_1[7] = uVar1;
  param_1[10] = lVar3;
  param_1[0xb] = param_2;
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xc] = 0x100000000000;
  param_1[4] = 8;
  param_1[5] = 0;
  return param_1;
}

