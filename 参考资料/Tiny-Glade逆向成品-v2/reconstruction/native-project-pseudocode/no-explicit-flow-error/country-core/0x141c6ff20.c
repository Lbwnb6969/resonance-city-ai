// VA 0x141c6ff20, PDB extent 198 bytes
// country_core::resources::rocky_terrain::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rocky_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::rocky_terrain::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rocky_terrain.rs
   Extent: 198 */

void pdb_141c6ff20(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x64695f6c && (int)*param_2 == 0x6c6c6563) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x6e6f697469736f70) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x7962625f6c6c6563) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'r' && *param_2 == 0x656e726f635f7369) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x64696f72746e6563 && *param_2 == 0x635f6f745f726964
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

