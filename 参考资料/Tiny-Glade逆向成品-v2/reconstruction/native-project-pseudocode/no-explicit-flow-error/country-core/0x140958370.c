// VA 0x140958370, PDB extent 84 bytes
// country_core::resources::mouse_capture::CustomCursorSsboGpuData::update_visibility
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::mouse_capture::CustomCursorSsboGpuData::update_visibility
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
   Extent: 84 */

void pdb_140958370(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = pdb_140e579a0(param_1[2] + 0x10);
  if (cVar2 == '\0') {
    lVar1 = *param_1;
    uVar3 = *param_2;
    *(uint *)(lVar1 + 8) = (uint)(param_2[2] == 0 && uVar3 != 0);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_2[1];
    }
    *(uint *)(lVar1 + 0xc) = uVar3;
  }
  return;
}

