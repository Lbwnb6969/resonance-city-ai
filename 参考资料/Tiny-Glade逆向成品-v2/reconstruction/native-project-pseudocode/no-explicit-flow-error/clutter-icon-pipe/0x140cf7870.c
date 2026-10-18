// VA 0x140cf7870, PDB extent 128 bytes
// clutter_icon_pipe::bake_icon_png_from_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_icon_pipe::bake_icon_png_from_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 128 */

undefined8
pdb_140cf7870(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uStack_48 = *(undefined8 *)(param_3 + 4);
  puStack_38 = &uStack_19;
  uStack_40 = param_2;
  uStack_28 = param_2;
  uStack_19 = param_4;
  pdb_141d61a60(uStack_58,&uStack_58);
  pdb_141d512c0(uStack_28);
  return param_1;
}

