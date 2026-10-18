// VA 0x140a6a940, PDB extent 112 bytes
// country_core::resources::walls::wall_render_slots::WallRenderSlots::clear
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_render_slots::WallRenderSlots::clear
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
   Extent: 112 */

void pdb_140a6a940(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0x30),0xff,uVar1 + 0x11);
      uVar2 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar2 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(ulonglong *)(param_1 + 0x40) = uVar2;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

