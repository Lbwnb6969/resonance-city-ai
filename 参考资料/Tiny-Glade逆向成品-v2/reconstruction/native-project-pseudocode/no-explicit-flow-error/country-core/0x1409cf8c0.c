// VA 0x1409cf8c0, PDB extent 97 bytes
// country_core::resources::color_id::wooden_wall_rt_albedo
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/color_id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::color_id::wooden_wall_rt_albedo
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/color_id.rs
   Extent: 97 */

void pdb_1409cf8c0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_c;
  undefined4 uStack_4;
  
  if (param_2 < 0xb) {
    uStack_4 = *(undefined4 *)(&UNK_14302cd68 + (ulonglong)param_2 * 0xc);
    uStack_c = *(undefined8 *)(&UNK_14302cd60 + (ulonglong)param_2 * 0xc);
  }
  uStack_20 = _DAT_142e36f60;
  uStack_18 = 0x3f000000;
  puVar1 = &uStack_20;
  if (param_2 < 0xb) {
    puVar1 = &uStack_c;
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar1 + 1);
  *param_1 = *puVar1;
  return;
}

