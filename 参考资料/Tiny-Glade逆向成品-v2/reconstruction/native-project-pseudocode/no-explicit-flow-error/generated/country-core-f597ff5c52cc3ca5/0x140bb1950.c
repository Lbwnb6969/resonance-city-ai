// VA 0x140bb1950, PDB extent 500 bytes
// country_core::shader::light_binning::cell_prefix_merge::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::light_binning::cell_prefix_merge::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 500 */

void pdb_140bb1950(longlong param_1,longlong param_2,int *param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  
  param_4 = (longlong *)*param_4;
  if (param_4[1] != 0) {
    lVar5 = *param_4;
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar10 = 0x33;
    uVar9 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                          *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                          (short)param_4[7],param_4[1],param_4[2],uVar2,0x3319,
                          *(undefined4 *)(lVar5 + 0x248));
    lVar5 = *param_4;
    iVar3 = *param_3;
    iVar4 = param_3[1];
    uVar1 = *(undefined8 *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar5 + 0x100);
    if (lVar6 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar7 = *(longlong *)(lVar5 + 0xf8);
    lVar8 = lVar6 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = 3;
    *(undefined8 *)(lVar7 + 4 + lVar8) = uVar1;
    *(undefined4 *)(lVar7 + 0xc + lVar8) = uVar2;
    *(int *)(lVar7 + 0x10 + lVar8) = iVar3;
    *(int *)(lVar7 + 0x14 + lVar8) = iVar4;
    *(undefined4 *)(lVar7 + 0x18 + lVar8) = uVar9;
    *(longlong *)(lVar5 + 0x100) = lVar6 + 1;
    if (param_4[1] != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x10);
      lVar5 = *param_4;
      uVar9 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                            *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                            (short)param_4[7],param_4[1],param_4[2],uVar2,CONCAT11(uVar10,0x19),1);
      lVar5 = *param_4;
      uVar1 = *(undefined8 *)(param_2 + 8);
      lVar6 = *(longlong *)(lVar5 + 0x100);
      if (lVar6 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar7 = *(longlong *)(lVar5 + 0xf8);
      lVar8 = lVar6 * 0x1c;
      *(undefined4 *)(lVar7 + lVar8) = 4;
      *(undefined8 *)(lVar7 + 4 + lVar8) = uVar1;
      *(undefined4 *)(lVar7 + 0xc + lVar8) = uVar2;
      *(int *)(lVar7 + 0x10 + lVar8) = iVar3 + 1;
      *(int *)(lVar7 + 0x14 + lVar8) = iVar4;
      *(undefined4 *)(lVar7 + 0x18 + lVar8) = uVar9;
      *(longlong *)(lVar5 + 0x100) = lVar6 + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

