// VA 0x1408f0fe0, PDB extent 126 bytes
// system_decorator::audio::op_preview_audio::is_on_wooden_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_preview_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::audio::op_preview_audio::is_on_wooden_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_preview_audio.rs
   Extent: 126 */

bool pdb_1408f0fe0(float param_1,byte param_2,longlong param_3)

{
  char cVar1;
  float extraout_XMM0_Da;
  
  if (param_2 < 2 && param_3 != 0) {
    cVar1 = pdb_1408ff980(param_3 + 0x29f);
    if (cVar1 != '\0') {
      cVar1 = pdb_1408ff980(param_3 + 0x29f);
      if (cVar1 == '\0') {
        return true;
      }
      if (1 < *(uint *)(param_3 + 600)) {
        return true;
      }
      if (*(float *)(param_3 + 0x294) <= 0.0) {
        return true;
      }
      pdb_14092f940(param_3);
      return extraout_XMM0_Da < param_1;
    }
  }
  return false;
}

