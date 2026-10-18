// VA 0x1409fbe60, PDB extent 311 bytes
// country_core::shader::nani::subtotal_prefix_sum::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::nani::subtotal_prefix_sum::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 311 */

void pdb_1409fbe60(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  lVar5 = param_3[3];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar4 = *(uint *)(param_2 + 1);
  *(int *)(lVar5 + (ulonglong)uVar4) = (int)param_1[1];
  *(undefined4 *)(lVar5 + (ulonglong)(uVar4 + 4)) = uVar3;
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar5 = *param_1;
    lVar6 = *param_3;
    uVar3 = *(undefined4 *)(lVar5 + 0x10);
    uVar9 = pdb_141764730(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),lVar6 + 0xd8,
                          *(undefined8 *)(lVar6 + 0x80),*(undefined8 *)(lVar6 + 0x88),
                          (short)param_3[7],param_3[1],param_3[2],uVar3,0x3319,
                          *(undefined4 *)(lVar6 + 0x248));
    lVar6 = *param_3;
    uVar1 = *param_2;
    uVar2 = *(undefined8 *)(lVar5 + 8);
    lVar5 = *(longlong *)(lVar6 + 0x100);
    if (lVar5 == *(longlong *)(lVar6 + 0xf0)) {
      pdb_142dbafc0(lVar6 + 0xf0);
    }
    lVar7 = *(longlong *)(lVar6 + 0xf8);
    lVar8 = lVar5 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = 3;
    *(undefined8 *)(lVar7 + 4 + lVar8) = uVar2;
    *(undefined4 *)(lVar7 + 0xc + lVar8) = uVar3;
    *(undefined8 *)(lVar7 + 0x10 + lVar8) = uVar1;
    *(undefined4 *)(lVar7 + 0x18 + lVar8) = uVar9;
    *(longlong *)(lVar6 + 0x100) = lVar5 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

