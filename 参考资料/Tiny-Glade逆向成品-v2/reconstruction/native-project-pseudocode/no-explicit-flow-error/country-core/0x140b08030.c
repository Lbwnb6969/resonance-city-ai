// VA 0x140b08030, PDB extent 98 bytes
// country_core::render::nani::trimesh::TrimeshBuilder::positions
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/trimesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::trimesh::TrimeshBuilder::positions
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/trimesh.rs
   Extent: 98 */

undefined8 pdb_140b08030(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  *param_2 = 1;
  param_2[1] = param_2[7];
  uStack_18 = param_2[8];
  uStack_10 = param_2[9];
  uStack_58 = *param_2;
  uStack_50 = param_2[1];
  uStack_48 = *(undefined4 *)(param_2 + 2);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_40 = *(undefined4 *)(param_2 + 3);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_38 = *(undefined4 *)(param_2 + 4);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_30 = *(undefined4 *)(param_2 + 5);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_28 = *(undefined4 *)(param_2 + 6);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_20 = *(undefined4 *)(param_2 + 7);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x3c);
  pdb_140accf50(param_1,&uStack_58);
  return param_1;
}

