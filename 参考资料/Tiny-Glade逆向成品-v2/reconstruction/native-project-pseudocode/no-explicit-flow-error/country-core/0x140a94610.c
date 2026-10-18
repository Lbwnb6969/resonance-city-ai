// VA 0x140a94610, PDB extent 192 bytes
// country_core::render::render_config::impl$43::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::render_config::impl$43::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 192 */

void pdb_140a94610(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[7] = 0x8000000000000001;
  param_1[0xc] = 0x43800000780;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0xaa) = 0x1010001;
  *(undefined1 (*) [16])((longlong)param_1 + 0x94) = ZEXT416(_DAT_142f3e554);
  *param_1 = 0;
  param_1[1] = 8;
  *(undefined1 *)((longlong)param_1 + 0xae) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbf) = 0x300000000000000;
  param_1[4] = 8;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  return;
}

