// VA 0x140c17790, PDB extent 76 bytes
// country_core::resources::walls::dormers::DormerHoleSsbo::cottage
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/dormers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::walls::dormers::DormerHoleSsbo::cottage
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/dormers.rs
   Extent: 76 */

void pdb_140c17790(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *param_1 = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2;
  param_1[2] = *param_4;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_6;
  param_1[5] = _DAT_143068b70;
  return;
}

