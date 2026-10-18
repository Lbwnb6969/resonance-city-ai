// VA 0x141a5f220, PDB extent 549 bytes
// country_core::shader::nani::draw_indexed_indirect_to_dispatch::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::nani::draw_indexed_indirect_to_dispatch::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 549 */

void pdb_141a5f220(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  plVar6 = (longlong *)*param_3;
  if (plVar6[1] != 0) {
    lVar7 = *param_1;
    uVar2 = *(undefined4 *)(lVar7 + 0x10);
    lVar8 = *plVar6;
    uVar11 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8,
                           *(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                           (short)plVar6[7],plVar6[1],plVar6[2],uVar2,0x19,1);
    lVar8 = *plVar6;
    iVar3 = *param_2;
    iVar4 = param_2[1];
    uVar1 = *(undefined8 *)(lVar7 + 8);
    lVar7 = *(longlong *)(lVar8 + 0x100);
    if (lVar7 == *(longlong *)(lVar8 + 0xf0)) {
      pdb_142dbafc0(lVar8 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar8 + 0xf8);
    lVar10 = lVar7 * 0x1c;
    *(undefined4 *)(lVar9 + lVar10) = 4;
    *(undefined8 *)(lVar9 + 4 + lVar10) = uVar1;
    *(undefined4 *)(lVar9 + 0xc + lVar10) = uVar2;
    *(int *)(lVar9 + 0x10 + lVar10) = iVar3;
    *(int *)(lVar9 + 0x14 + lVar10) = iVar4;
    *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar11;
    *(longlong *)(lVar8 + 0x100) = lVar7 + 1;
    if (plVar6[1] != 0) {
      lVar7 = param_1[1];
      lVar8 = *plVar6;
      uVar2 = *(undefined4 *)(lVar7 + 0x10);
      uVar11 = pdb_141764730(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8
                             ,*(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                             (short)plVar6[7],plVar6[1],plVar6[2],uVar2,0x3319,
                             *(undefined4 *)(lVar8 + 0x248));
      lVar8 = *plVar6;
      uVar1 = *(undefined8 *)(lVar7 + 8);
      lVar7 = *(longlong *)(lVar8 + 0x100);
      if (lVar7 == *(longlong *)(lVar8 + 0xf0)) {
        pdb_142dbafc0(lVar8 + 0xf0);
      }
      lVar9 = *(longlong *)(lVar8 + 0xf8);
      lVar10 = lVar7 * 0x1c;
      *(undefined4 *)(lVar9 + lVar10) = 3;
      *(undefined8 *)(lVar9 + 4 + lVar10) = uVar1;
      *(undefined4 *)(lVar9 + 0xc + lVar10) = uVar2;
      *(int *)(lVar9 + 0x10 + lVar10) = iVar3 + 1;
      *(int *)(lVar9 + 0x14 + lVar10) = iVar4;
      *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar11;
      *(longlong *)(lVar8 + 0x100) = lVar7 + 1;
      lVar7 = param_3[3];
      uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
      uVar5 = param_2[2];
      *(int *)(lVar7 + (ulonglong)uVar5) = (int)param_1[2];
      *(undefined4 *)(lVar7 + (ulonglong)(uVar5 + 4)) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

