// VA 0x140bd6210, PDB extent 313 bytes
// country_core::resources::active_raster_stroke::ActiveRasterStroke::start_new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/active_raster_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::active_raster_stroke::ActiveRasterStroke::start_new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/active_raster_stroke.rs
   Extent: 313 */

void pdb_140bd6210(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[2] != 0) {
    pub_1406abac0((byte *)param_1[3],param_1[2] * 0xc,4);
  }
  if (param_1[5] != 0) {
    pub_1406abac0((byte *)param_1[6],param_1[5] * 0xc,4);
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 4;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_1[9] != 0) {
    pub_1406abac0((byte *)param_1[10],param_1[9] * 0xc,4);
  }
  param_1[9] = 0;
  param_1[10] = 4;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined1 *)((longlong)param_1 + 100) = param_3;
  pdb_140bd6640(param_1,param_2);
  lVar1 = param_1[0xb];
  if (lVar1 == param_1[9]) {
    pdb_142db7820(param_1 + 9);
  }
  lVar2 = param_1[10];
  *(undefined4 *)(lVar2 + 8 + lVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + lVar1 * 0xc) = *param_2;
  param_1[0xb] = lVar1 + 1;
  *(undefined4 *)(param_1 + 0xd) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_6;
  return;
}

