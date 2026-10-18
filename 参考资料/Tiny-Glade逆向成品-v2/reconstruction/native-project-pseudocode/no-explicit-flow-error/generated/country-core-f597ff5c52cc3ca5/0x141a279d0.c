// VA 0x141a279d0, PDB extent 512 bytes
// country_core::shader::rocky_terrain::displace_rocky_terrain::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::rocky_terrain::displace_rocky_terrain::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 512 */

void pdb_141a279d0(longlong *param_1,int *param_2,longlong *param_3)

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
  
  *(int *)(param_3[3] + (ulonglong)(uint)param_2[2]) = (int)param_1[2];
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar5 = *param_1;
    lVar6 = *param_3;
    uVar2 = *(undefined4 *)(lVar5 + 0x10);
    uVar9 = pdb_141764730(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),lVar6 + 0xd8,
                          *(undefined8 *)(lVar6 + 0x80),*(undefined8 *)(lVar6 + 0x88),
                          (short)param_3[7],param_3[1],param_3[2],uVar2,0x3319,
                          *(undefined4 *)(lVar6 + 0x248));
    lVar6 = *param_3;
    iVar3 = *param_2;
    iVar4 = param_2[1];
    uVar1 = *(undefined8 *)(lVar5 + 8);
    lVar5 = *(longlong *)(lVar6 + 0x100);
    if (lVar5 == *(longlong *)(lVar6 + 0xf0)) {
      pdb_142dbafc0(lVar6 + 0xf0);
    }
    lVar7 = *(longlong *)(lVar6 + 0xf8);
    lVar8 = lVar5 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = 3;
    *(undefined8 *)(lVar7 + 4 + lVar8) = uVar1;
    *(undefined4 *)(lVar7 + 0xc + lVar8) = uVar2;
    *(int *)(lVar7 + 0x10 + lVar8) = iVar3;
    *(int *)(lVar7 + 0x14 + lVar8) = iVar4;
    *(undefined4 *)(lVar7 + 0x18 + lVar8) = uVar9;
    *(longlong *)(lVar6 + 0x100) = lVar5 + 1;
    if (param_3[1] != 0) {
      lVar5 = param_1[1];
      lVar6 = *param_3;
      uVar2 = *(undefined4 *)(lVar5 + 0x10);
      uVar9 = pdb_141764730(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),lVar6 + 0xd8,
                            *(undefined8 *)(lVar6 + 0x80),*(undefined8 *)(lVar6 + 0x88),
                            (short)param_3[7],param_3[1],param_3[2],uVar2,0x3319,
                            *(undefined4 *)(lVar6 + 0x248));
      lVar6 = *param_3;
      uVar1 = *(undefined8 *)(lVar5 + 8);
      lVar5 = *(longlong *)(lVar6 + 0x100);
      if (lVar5 == *(longlong *)(lVar6 + 0xf0)) {
        pdb_142dbafc0(lVar6 + 0xf0);
      }
      lVar7 = *(longlong *)(lVar6 + 0xf8);
      lVar8 = lVar5 * 0x1c;
      *(undefined4 *)(lVar7 + lVar8) = 3;
      *(undefined8 *)(lVar7 + 4 + lVar8) = uVar1;
      *(undefined4 *)(lVar7 + 0xc + lVar8) = uVar2;
      *(int *)(lVar7 + 0x10 + lVar8) = iVar3 + 1;
      *(int *)(lVar7 + 0x14 + lVar8) = iVar4;
      *(undefined4 *)(lVar7 + 0x18 + lVar8) = uVar9;
      *(longlong *)(lVar6 + 0x100) = lVar5 + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

