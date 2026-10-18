// VA 0x1417f08a0, PDB extent 372 bytes
// country_core::shader::text::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::text::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 372 */

void pdb_1417f08a0(undefined8 *param_1,int *param_2,longlong param_3)

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
  
  lVar4 = *(longlong *)(param_3 + 0x78);
  uVar1 = param_2[2];
  lVar5 = param_1[3];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 8)) =
       (ulonglong)*(ushort *)(lVar5 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar5 + 8);
  lVar9 = param_1[2];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x10)) =
       (ulonglong)*(ushort *)(lVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar9 + 8);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  uVar6 = *param_1;
  lVar4 = *(longlong *)(param_3 + 0x58);
  if (lVar4 == *(longlong *)(param_3 + 0x48)) {
    pdb_142d7e980(param_3 + 0x48);
  }
  lVar8 = *(longlong *)(param_3 + 0x50);
  lVar7 = lVar4 * 0x10;
  *(int *)(lVar8 + lVar7) = iVar2 + 1;
  *(int *)(lVar8 + 4 + lVar7) = iVar3;
  *(undefined8 *)(lVar8 + 8 + lVar7) = uVar6;
  lVar8 = lVar4 + 1;
  *(longlong *)(param_3 + 0x58) = lVar8;
  uVar6 = param_1[1];
  if (lVar8 == *(longlong *)(param_3 + 0x48)) {
    pdb_142d7e980(param_3 + 0x48);
  }
  lVar7 = *(longlong *)(param_3 + 0x50);
  lVar8 = lVar8 * 0x10;
  *(int *)(lVar7 + lVar8) = iVar2 + 2;
  *(int *)(lVar7 + 4 + lVar8) = iVar3;
  *(undefined8 *)(lVar7 + 8 + lVar8) = uVar6;
  *(longlong *)(param_3 + 0x58) = lVar4 + 2;
  *(undefined8 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)uVar1) = param_1[4];
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar8 = *(longlong *)(param_3 + 0x20);
  lVar7 = lVar4 * 0x10;
  *(int *)(lVar8 + lVar7) = iVar2 + 4;
  *(int *)(lVar8 + 4 + lVar7) = iVar3;
  *(longlong *)(lVar8 + 8 + lVar7) = lVar9;
  lVar9 = lVar4 + 1;
  *(longlong *)(param_3 + 0x28) = lVar9;
  if (lVar9 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar8 = *(longlong *)(param_3 + 0x20);
  lVar9 = lVar9 * 0x10;
  *(int *)(lVar8 + lVar9) = iVar2 + 3;
  *(int *)(lVar8 + 4 + lVar9) = iVar3;
  *(longlong *)(lVar8 + 8 + lVar9) = lVar5;
  *(longlong *)(param_3 + 0x28) = lVar4 + 2;
  return;
}

