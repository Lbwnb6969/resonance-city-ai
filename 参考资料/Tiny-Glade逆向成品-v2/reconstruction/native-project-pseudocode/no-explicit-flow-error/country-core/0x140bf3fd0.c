// VA 0x140bf3fd0, PDB extent 140 bytes
// country_core::resources::ivy::ivy_storage::Ivy::add_point
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::ivy::ivy_storage::Ivy::add_point
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_storage.rs
   Extent: 140 */

void pdb_140bf3fd0(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = param_1[0xb];
  param_1[0xb] = uVar1 + 1;
  uVar4 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 == uVar4) {
    pdb_140929640(param_1);
    uVar4 = *param_1;
    uVar2 = param_1[3];
  }
  param_1[3] = uVar2 + 1;
  uVar5 = 0;
  if (uVar4 <= uVar2 + param_1[2]) {
    uVar5 = uVar4;
  }
  lVar3 = (uVar2 + param_1[2]) - uVar5;
  uVar4 = param_1[1];
  *(ulonglong *)(uVar4 + lVar3 * 0x28) = uVar1 + 1;
  *(undefined8 *)(uVar4 + 8 + lVar3 * 0x28) = *param_2;
  *(undefined4 *)(uVar4 + 0x10 + lVar3 * 0x28) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(uVar4 + 0x14 + lVar3 * 0x28) = *param_3;
  *(undefined4 *)(uVar4 + 0x1c + lVar3 * 0x28) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(uVar4 + 0x20 + lVar3 * 0x28) = 0;
  return;
}

