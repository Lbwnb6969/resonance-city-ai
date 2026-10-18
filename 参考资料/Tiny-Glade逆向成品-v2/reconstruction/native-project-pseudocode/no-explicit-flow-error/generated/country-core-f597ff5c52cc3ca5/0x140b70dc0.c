// VA 0x140b70dc0, PDB extent 282 bytes
// country_core::shader::compute_sky_visibility_volume::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::compute_sky_visibility_volume::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 282 */

void pdb_140b70dc0(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  plVar2 = (longlong *)*param_4;
  if (plVar2[1] != 0) {
    lVar3 = *plVar2;
    uVar4 = *param_1;
    uVar8 = pdb_141764730(*(undefined8 *)(lVar3 + 200),*(undefined8 *)(lVar3 + 0xd0),lVar3 + 0xd8,
                          *(undefined8 *)(lVar3 + 0x80),*(undefined8 *)(lVar3 + 0x88),
                          (short)plVar2[7],plVar2[1],plVar2[2],(int)((ulonglong)uVar4 >> 0x20),
                          0x3319,*(undefined4 *)(lVar3 + 0x248));
    lVar3 = *plVar2;
    uVar1 = *param_3;
    lVar5 = *(longlong *)(lVar3 + 0x100);
    if (lVar5 == *(longlong *)(lVar3 + 0xf0)) {
      pdb_142dbafc0(lVar3 + 0xf0);
    }
    lVar6 = *(longlong *)(lVar3 + 0xf8);
    lVar7 = lVar5 * 0x1c;
    *(undefined4 *)(lVar6 + lVar7) = 1;
    *(undefined8 *)(lVar6 + 4 + lVar7) = uVar4;
    *(undefined8 *)(lVar6 + 0x10 + lVar7) = uVar1;
    *(undefined4 *)(lVar6 + 0x18 + lVar7) = uVar8;
    *(longlong *)(lVar3 + 0x100) = lVar5 + 1;
    *(undefined1 *)(param_4[3] + (ulonglong)*(uint *)(param_3 + 1)) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

