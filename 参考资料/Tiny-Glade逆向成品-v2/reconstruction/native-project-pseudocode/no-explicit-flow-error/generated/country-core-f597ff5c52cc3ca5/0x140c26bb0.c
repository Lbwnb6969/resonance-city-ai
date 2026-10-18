// VA 0x140c26bb0, PDB extent 799 bytes
// country_core::shader::nani::group_draw_cmd_prefix_sum::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::nani::group_draw_cmd_prefix_sum::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 799 */

void pdb_140c26bb0(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  lVar6 = param_3[3];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar8 = param_1[4];
  uVar10 = *(undefined4 *)((longlong)param_1 + 0x24);
  lVar9 = param_1[5];
  uVar3 = param_2[2];
  *(int *)(lVar6 + (ulonglong)uVar3) = (int)param_1[3];
  *(undefined4 *)(lVar6 + (ulonglong)(uVar3 + 4)) = uVar2;
  *(int *)(lVar6 + (ulonglong)(uVar3 + 8)) = (int)lVar8;
  *(undefined4 *)(lVar6 + (ulonglong)(uVar3 + 0xc)) = uVar10;
  *(int *)(lVar6 + (ulonglong)(uVar3 + 0x10)) = (int)lVar9;
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar6 = *param_1;
    lVar8 = *param_3;
    uVar2 = *(undefined4 *)(lVar6 + 0x10);
    uVar10 = pdb_141764730(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8,
                           *(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar2,0x3319,
                           *(undefined4 *)(lVar8 + 0x248));
    lVar8 = *param_3;
    iVar4 = *param_2;
    iVar5 = param_2[1];
    uVar1 = *(undefined8 *)(lVar6 + 8);
    lVar6 = *(longlong *)(lVar8 + 0x100);
    if (lVar6 == *(longlong *)(lVar8 + 0xf0)) {
      pdb_142dbafc0(lVar8 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar8 + 0xf8);
    lVar7 = lVar6 * 0x1c;
    *(undefined4 *)(lVar9 + lVar7) = 3;
    *(undefined8 *)(lVar9 + 4 + lVar7) = uVar1;
    *(undefined4 *)(lVar9 + 0xc + lVar7) = uVar2;
    *(int *)(lVar9 + 0x10 + lVar7) = iVar4;
    *(int *)(lVar9 + 0x14 + lVar7) = iVar5;
    *(undefined4 *)(lVar9 + 0x18 + lVar7) = uVar10;
    *(longlong *)(lVar8 + 0x100) = lVar6 + 1;
    if (param_3[1] != 0) {
      lVar6 = param_1[1];
      lVar8 = *param_3;
      uVar2 = *(undefined4 *)(lVar6 + 0x10);
      uVar10 = pdb_141764730(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8
                             ,*(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar2,0x3319,
                             *(undefined4 *)(lVar8 + 0x248));
      lVar8 = *param_3;
      uVar1 = *(undefined8 *)(lVar6 + 8);
      lVar6 = *(longlong *)(lVar8 + 0x100);
      if (lVar6 == *(longlong *)(lVar8 + 0xf0)) {
        pdb_142dbafc0(lVar8 + 0xf0);
      }
      lVar9 = *(longlong *)(lVar8 + 0xf8);
      lVar7 = lVar6 * 0x1c;
      *(undefined4 *)(lVar9 + lVar7) = 3;
      *(undefined8 *)(lVar9 + 4 + lVar7) = uVar1;
      *(undefined4 *)(lVar9 + 0xc + lVar7) = uVar2;
      *(int *)(lVar9 + 0x10 + lVar7) = iVar4 + 1;
      *(int *)(lVar9 + 0x14 + lVar7) = iVar5;
      *(undefined4 *)(lVar9 + 0x18 + lVar7) = uVar10;
      *(longlong *)(lVar8 + 0x100) = lVar6 + 1;
      if (param_3[1] != 0) {
        lVar6 = param_1[2];
        lVar8 = *param_3;
        uVar2 = *(undefined4 *)(lVar6 + 0x10);
        uVar10 = pdb_141764730(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                               lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                               *(undefined8 *)(lVar8 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar2,0x3319,*(undefined4 *)(lVar8 + 0x248));
        lVar8 = *param_3;
        uVar1 = *(undefined8 *)(lVar6 + 8);
        lVar6 = *(longlong *)(lVar8 + 0x100);
        if (lVar6 == *(longlong *)(lVar8 + 0xf0)) {
          pdb_142dbafc0(lVar8 + 0xf0);
        }
        lVar9 = *(longlong *)(lVar8 + 0xf8);
        lVar7 = lVar6 * 0x1c;
        *(undefined4 *)(lVar9 + lVar7) = 3;
        *(undefined8 *)(lVar9 + 4 + lVar7) = uVar1;
        *(undefined4 *)(lVar9 + 0xc + lVar7) = uVar2;
        *(int *)(lVar9 + 0x10 + lVar7) = iVar4 + 2;
        *(int *)(lVar9 + 0x14 + lVar7) = iVar5;
        *(undefined4 *)(lVar9 + 0x18 + lVar7) = uVar10;
        *(longlong *)(lVar8 + 0x100) = lVar6 + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

