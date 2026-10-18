// VA 0x140a0b470, PDB extent 201 bytes
// country_core::shader::timed_terrain_gizmo::impl$6::bind<rhapsody::raw::binding_set::RawProtocol,rhapsody::raw::binding_set::RawBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::timed_terrain_gizmo::impl$6::bind<rhapsody::raw::binding_set::RawProtocol,rhapsody::raw::binding_set::RawBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 201 */

void pdb_140a0b470(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  uVar8 = param_1[8];
  uVar9 = param_1[9];
  uVar10 = param_1[10];
  uVar11 = param_1[0xb];
  uVar12 = *(uint *)(param_2 + 8);
  lVar13 = *(longlong *)(param_3 + 8);
  *(undefined4 *)(lVar13 + (ulonglong)uVar12) = *param_1;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 4)) = uVar1;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 8)) = uVar2;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 0xc)) = uVar3;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 0x10)) = uVar4;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 0x14)) = uVar5;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 0x18)) = uVar6;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 0x1c)) = uVar7;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 0x20)) = uVar8;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 0x24)) = uVar9;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 0x28)) = uVar10;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 0x2c)) = uVar11;
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 0x30)) = param_1[0xc];
  *(undefined4 *)(lVar13 + (ulonglong)(uVar12 + 0x34)) = param_1[0xd];
  return;
}

