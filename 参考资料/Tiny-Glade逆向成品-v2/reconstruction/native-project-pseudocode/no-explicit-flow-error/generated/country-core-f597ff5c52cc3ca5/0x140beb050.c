// VA 0x140beb050, PDB extent 220 bytes
// country_core::shader::lut_gallery::thumbnail::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::shader::lut_gallery::thumbnail::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::binding::RgEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 220 */

void pdb_140beb050(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  uVar3 = *param_1;
  lVar4 = *(longlong *)(param_3 + 0x28);
  if (lVar4 == *(longlong *)(param_3 + 0x18)) {
    pdb_142d7e980(param_3 + 0x18);
  }
  lVar5 = *(longlong *)(param_3 + 0x20);
  *(ulonglong *)(lVar5 + lVar4 * 0x10) =
       CONCAT44((int)((ulonglong)uVar1 >> 0x20) + _UNK_142e3c994,(int)uVar1 + _DAT_142e3c990);
  *(undefined8 *)(lVar5 + 8 + lVar4 * 0x10) = uVar3;
  *(longlong *)(param_3 + 0x28) = lVar4 + 1;
  uVar2 = *(uint *)(param_2 + 1);
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)uVar2) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 4)) =
       *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined8 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 8)) = param_1[1];
  *(undefined8 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x10)) = param_1[2];
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x18)) =
       *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x1c)) =
       *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x20)) =
       *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar2 + 0x24)) =
       *(undefined4 *)((longlong)param_1 + 0x2c);
  return;
}

