// VA 0x140aaec40, PDB extent 288 bytes
// country_core::shader::vermeer::combine::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::vermeer::combine::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 288 */

void pdb_140aaec40(longlong *param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar4 = *(longlong *)(param_3 + 0x78);
  uVar1 = param_2[2];
  lVar5 = *param_1;
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 4)) =
       (ulonglong)*(ushort *)(lVar5 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar5 + 8);
  lVar6 = param_1[1];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 0xc)) =
       (ulonglong)*(ushort *)(lVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar6 + 8);
  *(int *)(lVar4 + (ulonglong)uVar1) = (int)param_1[3];
  *(undefined4 *)(lVar4 + (ulonglong)(uVar1 + 0x20)) = *(undefined4 *)((longlong)param_1 + 0x1c);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar7 = *(longlong *)(param_3 + 0x20);
  lVar8 = lVar4 * 0x10;
  *(int *)(lVar7 + lVar8) = iVar2 + 1;
  *(int *)(lVar7 + 4 + lVar8) = iVar3;
  *(longlong *)(lVar7 + 8 + lVar8) = lVar5;
  *(longlong *)(param_3 + 0x28) = lVar4 + 1;
  *(int *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar1 + 0x1c)) = (int)param_1[4];
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980((longlong *)(param_3 + 0x18));
  }
  lVar5 = *(longlong *)(param_3 + 0x20);
  lVar7 = lVar4 * 0x10;
  *(int *)(lVar5 + lVar7) = iVar2 + 2;
  *(int *)(lVar5 + 4 + lVar7) = iVar3;
  *(longlong *)(lVar5 + 8 + lVar7) = lVar6;
  *(longlong *)(param_3 + 0x28) = lVar4 + 1;
  *(longlong *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar1 + 0x14)) = param_1[2];
  return;
}

