// VA 0x141a27bd0, PDB extent 539 bytes
// country_core::shader::prefix_scan::inclusive_prefix_scan_subtotals::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::prefix_scan::inclusive_prefix_scan_subtotals::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 539 */

void pdb_141a27bd0(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  plVar5 = (longlong *)*param_3;
  if (plVar5[1] != 0) {
    lVar6 = *param_1;
    uVar2 = *(undefined4 *)(lVar6 + 0x10);
    lVar7 = *plVar5;
    uVar10 = pdb_141764080(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8,
                           *(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                           (short)plVar5[7],plVar5[1],plVar5[2],uVar2,0x19,1);
    lVar7 = *plVar5;
    iVar3 = *param_2;
    iVar4 = param_2[1];
    uVar1 = *(undefined8 *)(lVar6 + 8);
    lVar6 = *(longlong *)(lVar7 + 0x100);
    if (lVar6 == *(longlong *)(lVar7 + 0xf0)) {
      pdb_142dbafc0(lVar7 + 0xf0);
    }
    lVar8 = *(longlong *)(lVar7 + 0xf8);
    lVar9 = lVar6 * 0x1c;
    *(undefined4 *)(lVar8 + lVar9) = 4;
    *(undefined8 *)(lVar8 + 4 + lVar9) = uVar1;
    *(undefined4 *)(lVar8 + 0xc + lVar9) = uVar2;
    *(int *)(lVar8 + 0x10 + lVar9) = iVar3;
    *(int *)(lVar8 + 0x14 + lVar9) = iVar4;
    *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar10;
    *(longlong *)(lVar7 + 0x100) = lVar6 + 1;
    if (plVar5[1] != 0) {
      lVar6 = param_1[1];
      lVar7 = *plVar5;
      uVar2 = *(undefined4 *)(lVar6 + 0x10);
      uVar10 = pdb_141764730(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8
                             ,*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                             (short)plVar5[7],plVar5[1],plVar5[2],uVar2,0x3319,
                             *(undefined4 *)(lVar7 + 0x248));
      lVar7 = *plVar5;
      uVar1 = *(undefined8 *)(lVar6 + 8);
      lVar6 = *(longlong *)(lVar7 + 0x100);
      if (lVar6 == *(longlong *)(lVar7 + 0xf0)) {
        pdb_142dbafc0(lVar7 + 0xf0);
      }
      lVar8 = *(longlong *)(lVar7 + 0xf8);
      lVar9 = lVar6 * 0x1c;
      *(undefined4 *)(lVar8 + lVar9) = 3;
      *(undefined8 *)(lVar8 + 4 + lVar9) = uVar1;
      *(undefined4 *)(lVar8 + 0xc + lVar9) = uVar2;
      *(int *)(lVar8 + 0x10 + lVar9) = iVar3 + 1;
      *(int *)(lVar8 + 0x14 + lVar9) = iVar4;
      *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar10;
      *(longlong *)(lVar7 + 0x100) = lVar6 + 1;
      *(int *)(param_3[3] + (ulonglong)(uint)param_2[2]) = (int)param_1[2];
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

