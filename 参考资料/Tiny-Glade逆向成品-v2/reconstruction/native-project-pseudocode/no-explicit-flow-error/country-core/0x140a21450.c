// VA 0x140a21450, PDB extent 114 bytes
// country_core::meta_commander::MetaCommander::consume
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::meta_commander::MetaCommander::consume
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
   Extent: 114 */

void pdb_140a21450(undefined8 *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (param_2[3] != 0) {
    uVar2 = param_2[2];
    uVar10 = 0;
    if (*param_2 <= uVar2 + 1) {
      uVar10 = *param_2;
    }
    uVar3 = param_2[1];
    param_2[2] = (uVar2 - uVar10) + 1;
    param_2[3] = param_2[3] - 1;
    lVar9 = uVar2 * 0x38;
    uVar4 = ((undefined8 *)(uVar3 + lVar9))[1];
    puVar1 = (undefined8 *)(uVar3 + 0x10 + lVar9);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    puVar1 = (undefined8 *)(uVar3 + 0x20 + lVar9);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    *param_1 = *(undefined8 *)(uVar3 + lVar9);
    param_1[1] = uVar4;
    param_1[6] = *(undefined8 *)(uVar3 + 0x30 + lVar9);
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    return;
  }
  *param_1 = 0x8000000000000015;
  return;
}

