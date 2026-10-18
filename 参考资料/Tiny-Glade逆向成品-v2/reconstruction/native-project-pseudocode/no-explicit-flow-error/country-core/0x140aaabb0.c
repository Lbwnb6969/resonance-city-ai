// VA 0x140aaabb0, PDB extent 132 bytes
// country_core::render::nani::instance_data::CurvedHalfTimberInstanceData::new_straight_with_depth
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/instance_data.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::instance_data::CurvedHalfTimberInstanceData::new_straight_with_depth
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/instance_data.rs
   Extent: 132 */

void pdb_140aaabb0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,char param_8,byte param_9
                  )

{
  int iVar1;
  
  iVar1 = (uint)param_9 * 2 + 2;
  if (param_8 == '\0') {
    iVar1 = (uint)param_9 * 2 + 1;
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_6;
  *(int *)(param_1 + 4) = iVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 5) = param_7;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x100000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}

