// VA 0x141a87a70, PDB extent 555 bytes
// country_core::shader::ice_plane::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::ice_plane::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 555 */

void pdb_141a87a70(undefined8 *param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar4 = *(longlong *)(param_3 + 0x78);
  uVar1 = param_2[2];
  lVar11 = param_1[1];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 4)) =
       (ulonglong)*(ushort *)(lVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar11 + 8);
  lVar10 = param_1[3];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0xc)) =
       (ulonglong)*(ushort *)(lVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar10 + 8);
  lVar5 = param_1[4];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x14)) =
       (ulonglong)*(ushort *)(lVar5 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar5 + 8);
  lVar6 = param_1[5];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x1c)) =
       (ulonglong)*(ushort *)(lVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar6 + 8);
  *(undefined4 *)(lVar4 + (ulonglong)uVar1) = *(undefined4 *)(param_1 + 6);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  uVar7 = *param_1;
  lVar4 = *(longlong *)(param_3 + 0x70);
  if (lVar4 == *(longlong *)(param_3 + 0x60)) {
    pdb_142d7e980(param_3 + 0x60);
  }
  lVar9 = *(longlong *)(param_3 + 0x68);
  lVar8 = lVar4 * 0x10;
  *(int *)(lVar9 + lVar8) = iVar2 + 6;
  *(int *)(lVar9 + 4 + lVar8) = iVar3;
  *(undefined8 *)(lVar9 + 8 + lVar8) = uVar7;
  *(longlong *)(param_3 + 0x70) = lVar4 + 1;
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar9 = *(longlong *)(param_3 + 0x20);
  lVar8 = lVar4 * 0x10;
  *(int *)(lVar9 + lVar8) = iVar2 + 1;
  *(int *)(lVar9 + 4 + lVar8) = iVar3;
  *(longlong *)(lVar9 + 8 + lVar8) = lVar11;
  *(longlong *)(param_3 + 0x28) = lVar4 + 1;
  uVar7 = param_1[2];
  lVar4 = *(longlong *)(param_3 + 0x70);
  if (lVar4 == *(longlong *)(param_3 + 0x60)) {
    pdb_142d7e980(param_3 + 0x60);
  }
  lVar11 = *(longlong *)(param_3 + 0x68);
  lVar9 = lVar4 * 0x10;
  *(int *)(lVar11 + lVar9) = iVar2 + 5;
  *(int *)(lVar11 + 4 + lVar9) = iVar3;
  *(undefined8 *)(lVar11 + 8 + lVar9) = uVar7;
  *(longlong *)(param_3 + 0x70) = lVar4 + 1;
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar11 = *(longlong *)(param_3 + 0x20);
  lVar9 = lVar4 * 0x10;
  *(int *)(lVar11 + lVar9) = iVar2 + 2;
  *(int *)(lVar11 + 4 + lVar9) = iVar3;
  *(longlong *)(lVar11 + 8 + lVar9) = lVar10;
  *(longlong *)(param_3 + 0x28) = lVar4 + 1;
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar1 + 0x24)) =
       *(undefined4 *)((longlong)param_1 + 0x34);
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar11 = *(longlong *)(param_3 + 0x20);
  lVar10 = lVar4 * 0x10;
  *(int *)(lVar11 + lVar10) = iVar2 + 3;
  *(int *)(lVar11 + 4 + lVar10) = iVar3;
  *(longlong *)(lVar11 + 8 + lVar10) = lVar5;
  lVar11 = lVar4 + 1;
  *(longlong *)(param_3 + 0x28) = lVar11;
  if (lVar11 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar10 = *(longlong *)(param_3 + 0x20);
  lVar11 = lVar11 * 0x10;
  *(int *)(lVar10 + lVar11) = iVar2 + 4;
  *(int *)(lVar10 + 4 + lVar11) = iVar3;
  *(longlong *)(lVar10 + 8 + lVar11) = lVar6;
  *(longlong *)(param_3 + 0x28) = lVar4 + 2;
  return;
}

