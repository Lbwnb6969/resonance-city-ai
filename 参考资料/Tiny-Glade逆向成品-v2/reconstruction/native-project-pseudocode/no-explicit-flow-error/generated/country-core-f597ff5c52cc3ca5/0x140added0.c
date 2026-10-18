// VA 0x140added0, PDB extent 1048 bytes
// country_core::shader::deferred::solid_light_sun_sky::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::deferred::solid_light_sun_sky::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1048 */

void pdb_140added0(undefined8 *param_1,int *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar4 = param_3[0xf];
  lVar14 = param_1[1];
  uVar1 = param_2[2];
  *(ulonglong *)(lVar4 + (ulonglong)uVar1) =
       (ulonglong)*(ushort *)(lVar14 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar14 + 8);
  lVar13 = param_1[3];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 8)) =
       (ulonglong)*(ushort *)(lVar13 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar13 + 8);
  lVar5 = param_1[5];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x10)) =
       (ulonglong)*(ushort *)(lVar5 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar5 + 8);
  lVar6 = param_1[7];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x18)) =
       (ulonglong)*(ushort *)(lVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar6 + 8);
  lVar7 = param_1[4];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x38)) =
       (ulonglong)*(ushort *)(lVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar7 + 8);
  lVar8 = param_1[6];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x30)) =
       (ulonglong)*(ushort *)(lVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar8 + 8);
  lVar9 = param_1[8];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x24)) =
       (ulonglong)*(ushort *)(lVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar9 + 8);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  uVar10 = *param_1;
  lVar4 = param_3[0xb];
  if (lVar4 == param_3[9]) {
    pdb_142d7e980(param_3 + 9);
  }
  lVar12 = param_3[10];
  lVar11 = lVar4 * 0x10;
  *(int *)(lVar12 + lVar11) = iVar2 + 0xd;
  *(int *)(lVar12 + 4 + lVar11) = iVar3;
  *(undefined8 *)(lVar12 + 8 + lVar11) = uVar10;
  param_3[0xb] = lVar4 + 1;
  lVar4 = param_3[5];
  if (lVar4 == param_3[3]) {
    pdb_142d7e980(param_3 + 3);
  }
  lVar12 = param_3[4];
  lVar11 = lVar4 * 0x10;
  *(int *)(lVar12 + lVar11) = iVar2 + 1;
  *(int *)(lVar12 + 4 + lVar11) = iVar3;
  *(longlong *)(lVar12 + 8 + lVar11) = lVar14;
  param_3[5] = lVar4 + 1;
  uVar10 = param_1[2];
  lVar4 = param_3[0xb];
  if (lVar4 == param_3[9]) {
    pdb_142d7e980(param_3 + 9);
  }
  lVar14 = param_3[10];
  lVar12 = lVar4 * 0x10;
  *(int *)(lVar14 + lVar12) = iVar2 + 0xc;
  *(int *)(lVar14 + 4 + lVar12) = iVar3;
  *(undefined8 *)(lVar14 + 8 + lVar12) = uVar10;
  param_3[0xb] = lVar4 + 1;
  lVar4 = param_3[5];
  if (lVar4 == param_3[3]) {
    pdb_142d7e980(param_3 + 3);
  }
  lVar14 = param_3[4];
  lVar12 = lVar4 * 0x10;
  *(int *)(lVar14 + lVar12) = iVar2 + 2;
  *(int *)(lVar14 + 4 + lVar12) = iVar3;
  *(longlong *)(lVar14 + 8 + lVar12) = lVar13;
  lVar14 = lVar4 + 1;
  param_3[5] = lVar14;
  if (lVar14 == param_3[3]) {
    pdb_142d7e980(param_3 + 3);
  }
  lVar13 = param_3[4];
  lVar14 = lVar14 * 0x10;
  *(int *)(lVar13 + lVar14) = iVar2 + 0xb;
  *(int *)(lVar13 + 4 + lVar14) = iVar3;
  *(longlong *)(lVar13 + 8 + lVar14) = lVar7;
  lVar14 = lVar4 + 2;
  param_3[5] = lVar14;
  if (lVar14 == param_3[3]) {
    pdb_142d7e980(param_3 + 3);
  }
  lVar13 = param_3[4];
  lVar14 = lVar14 * 0x10;
  *(int *)(lVar13 + lVar14) = iVar2 + 3;
  *(int *)(lVar13 + 4 + lVar14) = iVar3;
  *(longlong *)(lVar13 + 8 + lVar14) = lVar5;
  lVar14 = lVar4 + 3;
  param_3[5] = lVar14;
  if (lVar14 == param_3[3]) {
    pdb_142d7e980(param_3 + 3);
  }
  lVar13 = param_3[4];
  lVar14 = lVar14 * 0x10;
  *(int *)(lVar13 + lVar14) = iVar2 + 10;
  *(int *)(lVar13 + 4 + lVar14) = iVar3;
  *(longlong *)(lVar13 + 8 + lVar14) = lVar8;
  lVar14 = lVar4 + 4;
  param_3[5] = lVar14;
  if (lVar14 == param_3[3]) {
    pdb_142d7e980(param_3 + 3);
  }
  lVar13 = param_3[4];
  lVar14 = lVar14 * 0x10;
  *(int *)(lVar13 + lVar14) = iVar2 + 4;
  *(int *)(lVar13 + 4 + lVar14) = iVar3;
  *(longlong *)(lVar13 + 8 + lVar14) = lVar6;
  param_3[5] = lVar4 + 5;
  *(undefined4 *)(param_3[0xf] + (ulonglong)(uVar1 + 0x20)) = *(undefined4 *)(param_1 + 0xd);
  *(undefined4 *)(param_3[0xf] + (ulonglong)(uVar1 + 0x2c)) =
       *(undefined4 *)((longlong)param_1 + 0x6c);
  lVar4 = param_3[5];
  if (lVar4 == param_3[3]) {
    pdb_142d7e980(param_3 + 3);
  }
  lVar14 = param_3[4];
  lVar13 = lVar4 * 0x10;
  *(int *)(lVar14 + lVar13) = iVar2 + 5;
  *(int *)(lVar14 + 4 + lVar13) = iVar3;
  *(longlong *)(lVar14 + 8 + lVar13) = lVar9;
  lVar14 = lVar4 + 1;
  param_3[5] = lVar14;
  uVar10 = param_1[9];
  if (lVar14 == param_3[3]) {
    pdb_142d7e980(param_3 + 3);
  }
  lVar13 = param_3[4];
  lVar14 = lVar14 * 0x10;
  *(int *)(lVar13 + lVar14) = iVar2 + 6;
  *(int *)(lVar13 + 4 + lVar14) = iVar3;
  *(undefined8 *)(lVar13 + 8 + lVar14) = uVar10;
  lVar14 = lVar4 + 2;
  param_3[5] = lVar14;
  uVar10 = param_1[10];
  if (lVar14 == param_3[3]) {
    pdb_142d7e980(param_3 + 3);
  }
  lVar13 = param_3[4];
  lVar14 = lVar14 * 0x10;
  *(int *)(lVar13 + lVar14) = iVar2 + 7;
  *(int *)(lVar13 + 4 + lVar14) = iVar3;
  *(undefined8 *)(lVar13 + 8 + lVar14) = uVar10;
  param_3[5] = lVar4 + 3;
  uVar10 = param_1[0xb];
  lVar4 = param_3[2];
  if (lVar4 == *param_3) {
    pdb_142d7e980(param_3);
  }
  lVar14 = param_3[1];
  lVar13 = lVar4 * 0x10;
  *(int *)(lVar14 + lVar13) = iVar2 + 8;
  *(int *)(lVar14 + 4 + lVar13) = iVar3;
  *(undefined8 *)(lVar14 + 8 + lVar13) = uVar10;
  param_3[2] = lVar4 + 1;
  uVar10 = param_1[0xc];
  lVar4 = param_3[0xb];
  if (lVar4 == param_3[9]) {
    pdb_142d7e980(param_3 + 9);
  }
  lVar14 = param_3[10];
  lVar13 = lVar4 * 0x10;
  *(int *)(lVar14 + lVar13) = iVar2 + 9;
  *(int *)(lVar14 + 4 + lVar13) = iVar3;
  *(undefined8 *)(lVar14 + 8 + lVar13) = uVar10;
  param_3[0xb] = lVar4 + 1;
  return;
}

