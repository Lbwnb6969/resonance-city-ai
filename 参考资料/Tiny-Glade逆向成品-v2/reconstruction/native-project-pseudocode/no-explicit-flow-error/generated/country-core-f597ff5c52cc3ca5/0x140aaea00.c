// VA 0x140aaea00, PDB extent 568 bytes
// country_core::shader::final_post::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::final_post::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 568 */

void pdb_140aaea00(longlong *param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = *(longlong *)(param_3 + 0x78);
  lVar9 = *param_1;
  uVar2 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar2) =
       (ulonglong)*(ushort *)(lVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar9 + 8);
  lVar6 = param_1[1];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar2 + 8)) =
       (ulonglong)*(ushort *)(lVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar6 + 8);
  *(int *)(lVar5 + (ulonglong)(uVar2 + 0x4c)) = (int)param_1[5];
  iVar3 = *param_2;
  iVar4 = param_2[1];
  lVar5 = *(longlong *)(param_3 + 0x28);
  if (lVar5 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar8 = *(longlong *)(param_3 + 0x20);
  lVar7 = lVar5 * 0x10;
  *(int *)(lVar8 + lVar7) = iVar3 + 1;
  *(int *)(lVar8 + 4 + lVar7) = iVar4;
  *(longlong *)(lVar8 + 8 + lVar7) = lVar9;
  *(longlong *)(param_3 + 0x28) = lVar5 + 1;
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x48)) =
       *(undefined4 *)((longlong)param_1 + 0x2c);
  lVar5 = *(longlong *)(param_3 + 0x28);
  plVar1 = (longlong *)(param_3 + 0x18);
  if (lVar5 == *plVar1) {
    pdb_142d7e980(plVar1);
  }
  lVar9 = *(longlong *)(param_3 + 0x20);
  lVar8 = lVar5 * 0x10;
  *(int *)(lVar9 + lVar8) = iVar3 + 2;
  *(int *)(lVar9 + 4 + lVar8) = iVar4;
  *(longlong *)(lVar9 + 8 + lVar8) = lVar6;
  lVar9 = lVar5 + 1;
  *(longlong *)(param_3 + 0x28) = lVar9;
  lVar6 = param_1[2];
  if (lVar9 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(plVar1);
  }
  lVar8 = *(longlong *)(param_3 + 0x20);
  lVar9 = lVar9 * 0x10;
  *(int *)(lVar8 + lVar9) = iVar3 + 3;
  *(int *)(lVar8 + 4 + lVar9) = iVar4;
  *(longlong *)(lVar8 + 8 + lVar9) = lVar6;
  *(longlong *)(param_3 + 0x28) = lVar5 + 2;
  *(int *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x10)) = (int)param_1[6];
  *(longlong *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x14)) = param_1[4];
  lVar5 = param_1[3];
  lVar9 = *(longlong *)(param_3 + 0x58);
  if (lVar9 == *(longlong *)(param_3 + 0x48)) {
    pdb_142d7e980(param_3 + 0x48);
  }
  lVar6 = *(longlong *)(param_3 + 0x50);
  lVar8 = lVar9 * 0x10;
  *(int *)(lVar6 + lVar8) = iVar3 + 4;
  *(int *)(lVar6 + 4 + lVar8) = iVar4;
  *(longlong *)(lVar6 + 8 + lVar8) = lVar5;
  *(longlong *)(param_3 + 0x58) = lVar9 + 1;
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x1c)) =
       *(undefined4 *)((longlong)param_1 + 0x34);
  *(int *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x20)) = (int)param_1[7];
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x24)) =
       *(undefined4 *)((longlong)param_1 + 0x3c);
  *(int *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x28)) = (int)param_1[8];
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x2c)) =
       *(undefined4 *)((longlong)param_1 + 0x44);
  *(int *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x30)) = (int)param_1[9];
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x34)) =
       *(undefined4 *)((longlong)param_1 + 0x4c);
  *(int *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x38)) = (int)param_1[10];
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x3c)) =
       *(undefined4 *)((longlong)param_1 + 0x54);
  *(int *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x40)) = (int)param_1[0xb];
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x44)) =
       *(undefined4 *)((longlong)param_1 + 0x5c);
  return;
}

