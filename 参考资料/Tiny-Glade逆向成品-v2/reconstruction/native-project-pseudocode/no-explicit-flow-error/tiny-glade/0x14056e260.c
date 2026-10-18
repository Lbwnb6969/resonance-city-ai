// VA 0x14056e260, PDB extent 61 bytes
// tiny_glade::winit_bevy_glue::winit_to_bevy_keycode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_bevy_glue.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::winit_bevy_glue::winit_to_bevy_keycode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_bevy_glue.rs
   Extent: 61 */

void pdb_14056e260(undefined4 *param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_2 + 0x58) == 5) {
    *param_1 = *(undefined4 *)(&UNK_142f6a204 + (ulonglong)(*(byte *)(param_2 + 0x5a) ^ 0x80) * 4);
    return;
  }
  uVar1 = *(undefined2 *)(param_2 + 0x5a);
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  *(short *)(param_1 + 1) = *(short *)(param_2 + 0x58);
  *(undefined2 *)((longlong)param_1 + 6) = uVar1;
  param_1[2] = uVar2;
  *param_1 = 0;
  return;
}

