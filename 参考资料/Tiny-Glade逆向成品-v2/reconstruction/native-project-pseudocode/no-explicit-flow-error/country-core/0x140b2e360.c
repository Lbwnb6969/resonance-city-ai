// VA 0x140b2e360, PDB extent 155 bytes
// country_core::resources::walls::material_stats::MaterialStats::init_this_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/material_stats.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::material_stats::MaterialStats::init_this_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/material_stats.rs
   Extent: 155 */

void pdb_140b2e360(longlong param_1,undefined4 param_2,char param_3)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    pub_1406abac0(*(byte **)(param_1 + 0x78),*(longlong *)(param_1 + 0x70) << 3,4);
  }
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 4;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 0x90) = param_2;
    param_2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  *(undefined4 *)(param_1 + 0x9c) = param_2;
  return;
}

