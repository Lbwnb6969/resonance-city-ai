// VA 0x1409fc540, PDB extent 331 bytes
// country_core::shader::grass2::card_splats_clear::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::shader::grass2::card_splats_clear::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 331 */

void pdb_1409fc540(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  uVar2 = *(uint *)(param_3 + 1);
  *(ulonglong *)(param_4[1] + (ulonglong)uVar2) =
       (ulonglong)*(ushort *)((longlong)param_1 + 10) << 0x20 | (ulonglong)*(ushort *)(param_1 + 1);
  plVar3 = (longlong *)*param_4;
  if (plVar3[1] != 0) {
    uVar1 = *param_3;
    lVar4 = *plVar3;
    uVar5 = *param_1;
    uVar9 = pdb_141764730(*(undefined8 *)(lVar4 + 200),*(undefined8 *)(lVar4 + 0xd0),lVar4 + 0xd8,
                          *(undefined8 *)(lVar4 + 0x80),*(undefined8 *)(lVar4 + 0x88),
                          (short)plVar3[7],plVar3[1],plVar3[2],(int)((ulonglong)uVar5 >> 0x20),
                          0x3319,*(undefined4 *)(lVar4 + 0x248));
    lVar4 = *plVar3;
    lVar6 = *(longlong *)(lVar4 + 0x100);
    if (lVar6 == *(longlong *)(lVar4 + 0xf0)) {
      pdb_142dbafc0(lVar4 + 0xf0);
    }
    lVar7 = *(longlong *)(lVar4 + 0xf8);
    lVar8 = lVar6 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = 1;
    *(undefined8 *)(lVar7 + 4 + lVar8) = uVar5;
    *(ulonglong *)(lVar7 + 0x10 + lVar8) =
         CONCAT44((int)((ulonglong)uVar1 >> 0x20) + _UNK_142e3c994,(int)uVar1 + _DAT_142e3c990);
    *(undefined4 *)(lVar7 + 0x18 + lVar8) = uVar9;
    *(longlong *)(lVar4 + 0x100) = lVar6 + 1;
    *(undefined4 *)(param_4[3] + (ulonglong)uVar2) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

