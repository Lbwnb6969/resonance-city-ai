// VA 0x140a6d7c0, PDB extent 432 bytes
// country_core::input::input_stream::InputStream::on_history_sync
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::input::input_stream::InputStream::on_history_sync
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 432 */

void pdb_140a6d7c0(ulonglong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  if (param_3 == '\0') {
    pdb_140929810(param_1 + 4,0);
    param_1[6] = 0;
    pdb_1409299e0(param_1,0);
    param_1[2] = 0;
  }
  else if ((param_1[3] - 9 < 0xfffffffffffffff6) || (param_1[7] - 10000 < 0xffffffffffffd8ef)) {
    pdb_140a6d980(param_1);
  }
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  uVar11 = param_2[4];
  uVar12 = param_2[5];
  uVar13 = param_2[6];
  uVar14 = param_2[7];
  uVar2 = param_1[7];
  uVar17 = *param_1;
  uVar15 = param_1[3];
  if (uVar15 == uVar17) {
    pdb_1409293e0(param_1);
    uVar17 = *param_1;
    uVar15 = param_1[3];
  }
  param_1[3] = uVar15 + 1;
  uVar18 = 0;
  if (uVar17 <= uVar15 + param_1[2]) {
    uVar18 = uVar17;
  }
  uVar17 = param_1[1];
  lVar16 = ((uVar15 + param_1[2]) - uVar18) * 0x68;
  *(ulonglong *)(uVar17 + 0x60 + lVar16) = uVar2;
  puVar1 = (undefined8 *)(uVar17 + 0x50 + lVar16);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(uVar17 + 0x40 + lVar16);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(uVar17 + 0x30 + lVar16);
  *puVar1 = uVar13;
  puVar1[1] = uVar14;
  puVar1 = (undefined8 *)(uVar17 + 0x20 + lVar16);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1 = (undefined8 *)(uVar17 + 0x10 + lVar16);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  *(undefined8 *)(uVar17 + lVar16) = uVar7;
  ((undefined8 *)(uVar17 + lVar16))[1] = uVar8;
  return;
}

