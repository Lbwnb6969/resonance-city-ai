// VA 0x141c6f300, PDB extent 328 bytes
// country_core::input::input_stream::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::input::input_stream::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 328 */

void pdb_141c6f300(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x657a69735f776f64 && *param_2 == 0x735f776f646e6977
       ) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x73676e6974746573 && *param_2 == 0x69747465735f6975
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x68747065 && *param_2 == 0x645f726f73727563) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x73775f736f705f72 && *param_2 == 0x705f726f73727563
       ) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 5) == 0x73775f736f705f72 && *param_2 == 0x705f7265746e6563
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x736e6f697469736f && *param_2 == 0x6f705f7065656873
       ) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x736e6f697461746f && *param_2 == 0x6f725f7065656873
       ) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}

