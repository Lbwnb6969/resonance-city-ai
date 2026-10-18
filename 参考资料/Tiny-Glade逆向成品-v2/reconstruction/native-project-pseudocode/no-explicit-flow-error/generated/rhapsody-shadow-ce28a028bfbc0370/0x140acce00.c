// VA 0x140acce00, PDB extent 335 bytes
// rhapsody_shadow::shader::setup_volume_shadows::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-shadow-ce28a028bfbc0370/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   rhapsody_shadow::shader::setup_volume_shadows::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-shadow-ce28a028bfbc0370/out/shabriri.rs
   Extent: 335 */

void pdb_140acce00(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  lVar5 = param_3[1];
  uVar3 = *(uint *)(param_2 + 1);
  *(int *)(lVar5 + (ulonglong)uVar3) = (int)param_1[1];
  uVar1 = *param_2;
  *(undefined4 *)(lVar5 + (ulonglong)(uVar3 + 4)) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(int *)(lVar5 + 8 + (ulonglong)(uVar3 + 8)) = (int)param_1[3];
  *(longlong *)(lVar5 + (ulonglong)(uVar3 + 8)) = param_1[2];
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar5 = *param_1;
    lVar6 = *param_3;
    uVar4 = *(undefined4 *)(lVar5 + 0x10);
    uVar9 = pdb_141764730(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),lVar6 + 0xd8,
                          *(undefined8 *)(lVar6 + 0x80),*(undefined8 *)(lVar6 + 0x88),
                          (short)param_3[7],param_3[1],param_3[2],uVar4,0x3319,
                          *(undefined4 *)(lVar6 + 0x248));
    lVar6 = *param_3;
    uVar2 = *(undefined8 *)(lVar5 + 8);
    lVar5 = *(longlong *)(lVar6 + 0x100);
    if (lVar5 == *(longlong *)(lVar6 + 0xf0)) {
      pdb_142dbafc0(lVar6 + 0xf0);
    }
    lVar7 = *(longlong *)(lVar6 + 0xf8);
    lVar8 = lVar5 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = 3;
    *(undefined8 *)(lVar7 + 4 + lVar8) = uVar2;
    *(undefined4 *)(lVar7 + 0xc + lVar8) = uVar4;
    *(ulonglong *)(lVar7 + 0x10 + lVar8) =
         CONCAT44((int)((ulonglong)uVar1 >> 0x20) + _UNK_142e3c994,(int)uVar1 + _DAT_142e3c990);
    *(undefined4 *)(lVar7 + 0x18 + lVar8) = uVar9;
    *(longlong *)(lVar6 + 0x100) = lVar5 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

