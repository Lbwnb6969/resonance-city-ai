// VA 0x141a87ca0, PDB extent 890 bytes
// country_core::shader::water_plane::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   country_core::shader::water_plane::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 890 */

void pdb_141a87ca0(longlong *param_1,int *param_2,longlong param_3)

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
  longlong lVar12;
  
  lVar4 = *(longlong *)(param_3 + 0x78);
  uVar1 = param_2[2];
  lVar12 = param_1[4];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 4)) =
       (ulonglong)*(ushort *)(lVar12 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar12 + 8);
  lVar11 = param_1[6];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0xc)) =
       (ulonglong)*(ushort *)(lVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar11 + 8);
  lVar5 = param_1[8];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x14)) =
       (ulonglong)*(ushort *)(lVar5 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar5 + 8);
  lVar6 = param_1[9];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0x1c)) =
       (ulonglong)*(ushort *)(lVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar6 + 8);
  *(int *)(lVar4 + (ulonglong)uVar1) = (int)param_1[0xc];
  iVar2 = *param_2;
  iVar3 = param_2[1];
  lVar4 = param_1[3];
  lVar10 = *(longlong *)(param_3 + 0x70);
  if (lVar10 == *(longlong *)(param_3 + 0x60)) {
    pdb_142d7e980(param_3 + 0x60);
  }
  lVar9 = *(longlong *)(param_3 + 0x68);
  lVar8 = lVar10 * 0x10;
  *(int *)(lVar9 + lVar8) = iVar2 + 9;
  *(int *)(lVar9 + 4 + lVar8) = iVar3;
  *(longlong *)(lVar9 + 8 + lVar8) = lVar4;
  *(longlong *)(param_3 + 0x70) = lVar10 + 1;
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar10 = *(longlong *)(param_3 + 0x20);
  lVar9 = lVar4 * 0x10;
  *(int *)(lVar10 + lVar9) = iVar2 + 1;
  *(int *)(lVar10 + 4 + lVar9) = iVar3;
  *(longlong *)(lVar10 + 8 + lVar9) = lVar12;
  *(longlong *)(param_3 + 0x28) = lVar4 + 1;
  lVar4 = param_1[5];
  lVar12 = *(longlong *)(param_3 + 0x70);
  if (lVar12 == *(longlong *)(param_3 + 0x60)) {
    pdb_142d7e980(param_3 + 0x60);
  }
  lVar10 = *(longlong *)(param_3 + 0x68);
  lVar9 = lVar12 * 0x10;
  *(int *)(lVar10 + lVar9) = iVar2 + 8;
  *(int *)(lVar10 + 4 + lVar9) = iVar3;
  *(longlong *)(lVar10 + 8 + lVar9) = lVar4;
  *(longlong *)(param_3 + 0x70) = lVar12 + 1;
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar12 = *(longlong *)(param_3 + 0x20);
  lVar10 = lVar4 * 0x10;
  *(int *)(lVar12 + lVar10) = iVar2 + 2;
  *(int *)(lVar12 + 4 + lVar10) = iVar3;
  *(longlong *)(lVar12 + 8 + lVar10) = lVar11;
  *(longlong *)(param_3 + 0x28) = lVar4 + 1;
  lVar4 = param_1[7];
  lVar12 = *(longlong *)(param_3 + 0x58);
  if (lVar12 == *(longlong *)(param_3 + 0x48)) {
    pdb_142d7e980(param_3 + 0x48);
  }
  lVar11 = *(longlong *)(param_3 + 0x50);
  lVar10 = lVar12 * 0x10;
  *(int *)(lVar11 + lVar10) = iVar2 + 7;
  *(int *)(lVar11 + 4 + lVar10) = iVar3;
  *(longlong *)(lVar11 + 8 + lVar10) = lVar4;
  *(longlong *)(param_3 + 0x58) = lVar12 + 1;
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar12 = *(longlong *)(param_3 + 0x20);
  lVar11 = lVar4 * 0x10;
  *(int *)(lVar12 + lVar11) = iVar2 + 3;
  *(int *)(lVar12 + 4 + lVar11) = iVar3;
  *(longlong *)(lVar12 + 8 + lVar11) = lVar5;
  *(longlong *)(param_3 + 0x28) = lVar4 + 1;
  lVar4 = *(longlong *)(param_3 + 0x78);
  *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar1 + 0x24)) = *(undefined4 *)((longlong)param_1 + 0x6c)
  ;
  *(undefined8 *)(lVar4 + (ulonglong)(uVar1 + 0x24)) = *(undefined8 *)((longlong)param_1 + 100);
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar12 = *(longlong *)(param_3 + 0x20);
  lVar11 = lVar4 * 0x10;
  *(int *)(lVar12 + lVar11) = iVar2 + 4;
  *(int *)(lVar12 + 4 + lVar11) = iVar3;
  *(longlong *)(lVar12 + 8 + lVar11) = lVar6;
  lVar12 = lVar4 + 1;
  *(longlong *)(param_3 + 0x28) = lVar12;
  lVar11 = param_1[10];
  if (lVar12 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar5 = *(longlong *)(param_3 + 0x20);
  lVar12 = lVar12 * 0x10;
  *(int *)(lVar5 + lVar12) = iVar2 + 5;
  *(int *)(lVar5 + 4 + lVar12) = iVar3;
  *(longlong *)(lVar5 + 8 + lVar12) = lVar11;
  lVar12 = lVar4 + 2;
  *(longlong *)(param_3 + 0x28) = lVar12;
  lVar11 = param_1[0xb];
  if (lVar12 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar5 = *(longlong *)(param_3 + 0x20);
  lVar12 = lVar12 * 0x10;
  *(int *)(lVar5 + lVar12) = iVar2 + 6;
  *(int *)(lVar5 + 4 + lVar12) = iVar3;
  *(longlong *)(lVar5 + 8 + lVar12) = lVar11;
  *(longlong *)(param_3 + 0x28) = lVar4 + 3;
  if (*param_1 == 0) {
    return;
  }
  lVar4 = param_1[1];
  uVar7 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar7,0,lVar4);
  return;
}

