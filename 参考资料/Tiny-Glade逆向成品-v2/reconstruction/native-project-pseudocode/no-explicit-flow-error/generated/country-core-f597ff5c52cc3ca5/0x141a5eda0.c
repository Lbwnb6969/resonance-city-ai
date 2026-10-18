// VA 0x141a5eda0, PDB extent 327 bytes
// country_core::shader::wall::reset_pass2_inst_counts::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::shader::wall::reset_pass2_inst_counts::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 327 */

void pdb_141a5eda0(longlong param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  
  plVar4 = (longlong *)*param_4;
  if (plVar4[1] != 0) {
    uVar1 = *param_3;
    lVar5 = *plVar4;
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar9 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                          *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                          (short)plVar4[7],plVar4[1],plVar4[2],uVar3,0x3319,
                          *(undefined4 *)(lVar5 + 0x248));
    lVar5 = *plVar4;
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar5 + 0x100);
    if (lVar6 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar7 = *(longlong *)(lVar5 + 0xf8);
    lVar8 = lVar6 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = 3;
    *(undefined8 *)(lVar7 + 4 + lVar8) = uVar2;
    iVar10 = (int)uVar1 + _DAT_142e3c990;
    iVar11 = (int)((ulonglong)uVar1 >> 0x20) + _UNK_142e3c994;
    *(undefined4 *)(lVar7 + 0xc + lVar8) = uVar3;
    *(ulonglong *)(lVar7 + 0x10 + lVar8) = CONCAT44(iVar11,iVar10);
    *(undefined4 *)(lVar7 + 0x18 + lVar8) = uVar9;
    *(longlong *)(lVar5 + 0x100) = lVar6 + 1;
    *(undefined4 *)(param_4[1] + (ulonglong)*(uint *)(param_3 + 1)) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

