// VA 0x140bfaf90, PDB extent 71 bytes
// country_core::systems::paths::draw_path::DrawState::update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::paths::draw_path::DrawState::update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
   Extent: 71 */

void pdb_140bfaf90(char *param_1,byte param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 3;
  if (1 < param_2) {
    uVar2 = (uint)(byte)(param_2 - 2);
  }
  if (uVar2 - 1 < 2) {
    cVar1 = '\x02';
    if (1 < (byte)(*param_1 - 1U)) {
      cVar1 = param_3;
    }
    *param_1 = cVar1;
    return;
  }
  cVar1 = '\0';
  if (uVar2 != 0) {
    cVar1 = ((byte)(*param_1 - 1U) < 2) * '\x03';
  }
  *param_1 = cVar1;
  return;
}

