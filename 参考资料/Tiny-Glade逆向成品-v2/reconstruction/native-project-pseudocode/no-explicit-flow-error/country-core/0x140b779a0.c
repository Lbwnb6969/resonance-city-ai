// VA 0x140b779a0, PDB extent 89 bytes
// country_core::resources::roofs::roof_shape::Roof::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::Roof::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 89 */

void pdb_140b779a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  uVar1 = param_3[1];
  uVar2 = *(undefined8 *)((longlong)param_3 + 0xc);
  uVar3 = *(undefined8 *)((longlong)param_3 + 0x14);
  *(undefined8 *)((longlong)param_1 + 0x24) = *param_3;
  *(undefined8 *)((longlong)param_1 + 0x2c) = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_4[1];
  uVar2 = *(undefined8 *)((longlong)param_4 + 0xc);
  uVar3 = *(undefined8 *)((longlong)param_4 + 0x14);
  param_1[1] = *param_4;
  param_1[2] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_5;
  *(undefined4 *)(param_1 + 10) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x54) = param_7;
  param_1[8] = *param_8;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_8 + 1);
  return;
}

