// VA 0x140aaa800, PDB extent 111 bytes
// country_core::render::nani::instance_data::CurvedHalfTimberInstanceData::new_straight
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/instance_data.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::instance_data::CurvedHalfTimberInstanceData::new_straight
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/instance_data.rs
   Extent: 111 */

void pdb_140aaa800(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,char param_7,byte param_8)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (uint)param_8 * 2 + 2;
  if (param_7 == '\0') {
    iVar1 = (uint)param_8 * 2 + 1;
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_6;
  *(int *)(param_1 + 4) = iVar1;
  uVar2 = _UNK_143048c18;
  *(undefined8 *)((longlong)param_1 + 0x24) = _DAT_143048c10;
  *(undefined8 *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}

