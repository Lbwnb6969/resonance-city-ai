// VA 0x140bfceb0, PDB extent 677 bytes
// country_core::shader::grass2::card_splat_resolve::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::grass2::card_splat_resolve::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 677 */

void pdb_140bfceb0(undefined8 *param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar4 = *(longlong *)(param_3 + 0x78);
  lVar9 = param_1[1];
  uVar1 = param_2[2];
  *(ulonglong *)(lVar4 + (ulonglong)uVar1) =
       (ulonglong)*(ushort *)(lVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar9 + 8);
  lVar8 = param_1[3];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x10)) =
       (ulonglong)*(ushort *)(lVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar8 + 8);
  lVar5 = param_1[5];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x18)) =
       (ulonglong)*(ushort *)(lVar5 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar5 + 8);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  uVar6 = *param_1;
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar10 = *(longlong *)(param_3 + 0x20);
  lVar7 = lVar4 * 0x10;
  *(int *)(lVar10 + lVar7) = iVar2 + 9;
  *(int *)(lVar10 + 4 + lVar7) = iVar3;
  *(undefined8 *)(lVar10 + 8 + lVar7) = uVar6;
  lVar10 = lVar4 + 1;
  *(longlong *)(param_3 + 0x28) = lVar10;
  if (lVar10 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar7 = *(longlong *)(param_3 + 0x20);
  lVar10 = lVar10 * 0x10;
  *(int *)(lVar7 + lVar10) = iVar2 + 1;
  *(int *)(lVar7 + 4 + lVar10) = iVar3;
  *(longlong *)(lVar7 + 8 + lVar10) = lVar9;
  *(longlong *)(param_3 + 0x28) = lVar4 + 2;
  *(undefined8 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar1 + 8)) = param_1[9];
  uVar6 = param_1[2];
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar9 = *(longlong *)(param_3 + 0x20);
  lVar10 = lVar4 * 0x10;
  *(int *)(lVar9 + lVar10) = iVar2 + 8;
  *(int *)(lVar9 + 4 + lVar10) = iVar3;
  *(undefined8 *)(lVar9 + 8 + lVar10) = uVar6;
  *(longlong *)(param_3 + 0x28) = lVar4 + 1;
  lVar4 = *(longlong *)(param_3 + 0x40);
  if (lVar4 == *(longlong *)(param_3 + 0x30)) {
    pdb_142d7e980(param_3 + 0x30);
  }
  lVar9 = *(longlong *)(param_3 + 0x38);
  lVar10 = lVar4 * 0x10;
  *(int *)(lVar9 + lVar10) = iVar2 + 2;
  *(int *)(lVar9 + 4 + lVar10) = iVar3;
  *(longlong *)(lVar9 + 8 + lVar10) = lVar8;
  *(longlong *)(param_3 + 0x40) = lVar4 + 1;
  uVar6 = param_1[4];
  lVar4 = *(longlong *)(param_3 + 0x58);
  if (lVar4 == *(longlong *)(param_3 + 0x48)) {
    pdb_142d7e980(param_3 + 0x48);
  }
  lVar9 = *(longlong *)(param_3 + 0x50);
  lVar8 = lVar4 * 0x10;
  *(int *)(lVar9 + lVar8) = iVar2 + 7;
  *(int *)(lVar9 + 4 + lVar8) = iVar3;
  *(undefined8 *)(lVar9 + 8 + lVar8) = uVar6;
  *(longlong *)(param_3 + 0x58) = lVar4 + 1;
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar9 = *(longlong *)(param_3 + 0x20);
  lVar8 = lVar4 * 0x10;
  *(int *)(lVar9 + lVar8) = iVar2 + 3;
  *(int *)(lVar9 + 4 + lVar8) = iVar3;
  *(longlong *)(lVar9 + 8 + lVar8) = lVar5;
  *(longlong *)(param_3 + 0x28) = lVar4 + 1;
  uVar6 = param_1[6];
  lVar4 = *(longlong *)(param_3 + 0x58);
  if (lVar4 == *(longlong *)(param_3 + 0x48)) {
    pdb_142d7e980(param_3 + 0x48);
  }
  lVar9 = *(longlong *)(param_3 + 0x50);
  lVar8 = lVar4 * 0x10;
  *(int *)(lVar9 + lVar8) = iVar2 + 4;
  *(int *)(lVar9 + 4 + lVar8) = iVar3;
  *(undefined8 *)(lVar9 + 8 + lVar8) = uVar6;
  lVar9 = lVar4 + 1;
  *(longlong *)(param_3 + 0x58) = lVar9;
  uVar6 = param_1[7];
  if (lVar9 == *(longlong *)(param_3 + 0x48)) {
    pdb_142d7e980(param_3 + 0x48);
  }
  lVar8 = *(longlong *)(param_3 + 0x50);
  lVar9 = lVar9 * 0x10;
  *(int *)(lVar8 + lVar9) = iVar2 + 5;
  *(int *)(lVar8 + 4 + lVar9) = iVar3;
  *(undefined8 *)(lVar8 + 8 + lVar9) = uVar6;
  lVar9 = lVar4 + 2;
  *(longlong *)(param_3 + 0x58) = lVar9;
  uVar6 = param_1[8];
  if (lVar9 == *(longlong *)(param_3 + 0x48)) {
    pdb_142d7e980(param_3 + 0x48);
  }
  lVar8 = *(longlong *)(param_3 + 0x50);
  lVar9 = lVar9 * 0x10;
  *(int *)(lVar8 + lVar9) = iVar2 + 6;
  *(int *)(lVar8 + 4 + lVar9) = iVar3;
  *(undefined8 *)(lVar8 + 8 + lVar9) = uVar6;
  *(longlong *)(param_3 + 0x58) = lVar4 + 3;
  return;
}

