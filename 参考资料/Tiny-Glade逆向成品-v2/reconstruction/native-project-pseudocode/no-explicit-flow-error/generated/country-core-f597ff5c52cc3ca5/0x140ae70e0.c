// VA 0x140ae70e0, PDB extent 288 bytes
// country_core::shader::lut::water_noise::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::shader::lut::water_noise::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 288 */

void pdb_140ae70e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  *(ulonglong *)(param_3[1] + (ulonglong)*(uint *)(param_2 + 1)) =
       (ulonglong)*(ushort *)((longlong)param_1 + 10) << 0x20 | (ulonglong)*(ushort *)(param_1 + 1);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    uVar1 = *param_2;
    lVar2 = *param_3;
    uVar3 = *param_1;
    uVar7 = pdb_141764730(*(undefined8 *)(lVar2 + 200),*(undefined8 *)(lVar2 + 0xd0),lVar2 + 0xd8,
                          *(undefined8 *)(lVar2 + 0x80),*(undefined8 *)(lVar2 + 0x88),
                          (short)param_3[7],param_3[1],param_3[2],(int)((ulonglong)uVar3 >> 0x20),
                          0x3319,*(undefined4 *)(lVar2 + 0x248));
    lVar2 = *param_3;
    lVar4 = *(longlong *)(lVar2 + 0x100);
    if (lVar4 == *(longlong *)(lVar2 + 0xf0)) {
      pdb_142dbafc0(lVar2 + 0xf0);
    }
    lVar5 = *(longlong *)(lVar2 + 0xf8);
    lVar6 = lVar4 * 0x1c;
    *(undefined4 *)(lVar5 + lVar6) = 1;
    *(undefined8 *)(lVar5 + 4 + lVar6) = uVar3;
    *(ulonglong *)(lVar5 + 0x10 + lVar6) =
         CONCAT44((int)((ulonglong)uVar1 >> 0x20) + _UNK_142e3c994,(int)uVar1 + _DAT_142e3c990);
    *(undefined4 *)(lVar5 + 0x18 + lVar6) = uVar7;
    *(longlong *)(lVar2 + 0x100) = lVar4 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

