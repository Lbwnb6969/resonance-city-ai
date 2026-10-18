// VA 0x140a3b080, PDB extent 90 bytes
// country_core::systems::temp_eraser::TempEraser::brush_size_override
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/temp_eraser.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::temp_eraser::TempEraser::brush_size_override
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/temp_eraser.rs
   Extent: 90 */

undefined8 pdb_140a3b080(char *param_1,undefined1 *param_2)

{
  if (*param_1 == '\x01') {
    switch(*param_2) {
    case 2:
    case 3:
      return 1;
    case 0xb:
      return 1;
    case 0xd:
      return 1;
    case 0xe:
      return 1;
    }
  }
  return 0;
}

