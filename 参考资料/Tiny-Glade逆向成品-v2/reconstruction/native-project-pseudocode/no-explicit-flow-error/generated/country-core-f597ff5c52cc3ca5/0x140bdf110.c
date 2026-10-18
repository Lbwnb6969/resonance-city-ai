// VA 0x140bdf110, PDB extent 328 bytes
// country_core::shader::water::inc::water_mask_sampler::impl$2::bind<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::water::inc::water_mask_sampler::impl$2::bind<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 328 */

void pdb_140bdf110(byte *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  uint uVar11;
  
  bVar2 = param_1[0x11];
  uVar9 = 0x19;
  uVar11 = bVar2 - 0x7c;
  if ((uVar11 < 7) && ((0x75U >> (uVar11 & 0x1f) & 1) != 0)) {
    uVar9 = 0x1a;
  }
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    lVar5 = *param_3;
    uVar10 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar3,uVar9,1);
    if (*param_1 != bVar2 && *param_1 != 0) {
      pdb_140e2c3a0(*param_3,param_1);
    }
    lVar5 = *param_3;
    uVar1 = *param_2;
    uVar4 = *(undefined4 *)param_1;
    lVar6 = *(longlong *)(lVar5 + 0x100);
    if (lVar6 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar7 = *(longlong *)(lVar5 + 0xf8);
    lVar8 = lVar6 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = 0;
    *(ulonglong *)(lVar7 + 4 + lVar8) = CONCAT44(uVar3,uVar4);
    *(undefined8 *)(lVar7 + 0x10 + lVar8) = uVar1;
    *(undefined4 *)(lVar7 + 0x18 + lVar8) = uVar10;
    *(longlong *)(lVar5 + 0x100) = lVar6 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

