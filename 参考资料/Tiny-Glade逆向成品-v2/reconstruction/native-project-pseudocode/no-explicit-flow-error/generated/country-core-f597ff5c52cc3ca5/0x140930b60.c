// VA 0x140930b60, PDB extent 280 bytes
// country_core::shader::nani::clear_histogram::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::nani::clear_histogram::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 280 */

void pdb_140930b60(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar4 = *param_3;
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = pdb_141764730(*(undefined8 *)(lVar4 + 200),*(undefined8 *)(lVar4 + 0xd0),lVar4 + 0xd8,
                          *(undefined8 *)(lVar4 + 0x80),*(undefined8 *)(lVar4 + 0x88),
                          (short)param_3[7],param_3[1],param_3[2],uVar3,0x3319,
                          *(undefined4 *)(lVar4 + 0x248));
    lVar4 = *param_3;
    uVar1 = *param_2;
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar5 = *(longlong *)(lVar4 + 0x100);
    if (lVar5 == *(longlong *)(lVar4 + 0xf0)) {
      pdb_142dbafc0(lVar4 + 0xf0);
    }
    lVar6 = *(longlong *)(lVar4 + 0xf8);
    lVar7 = lVar5 * 0x1c;
    *(undefined4 *)(lVar6 + lVar7) = 3;
    *(undefined8 *)(lVar6 + 4 + lVar7) = uVar2;
    *(undefined4 *)(lVar6 + 0xc + lVar7) = uVar3;
    *(undefined8 *)(lVar6 + 0x10 + lVar7) = uVar1;
    *(undefined4 *)(lVar6 + 0x18 + lVar7) = uVar8;
    *(longlong *)(lVar4 + 0x100) = lVar5 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

