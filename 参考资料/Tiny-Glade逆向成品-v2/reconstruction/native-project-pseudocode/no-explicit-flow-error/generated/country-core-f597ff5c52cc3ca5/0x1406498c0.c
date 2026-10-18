// VA 0x1406498c0, PDB extent 554 bytes
// country_core::shader::upload_cpu_raster::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::upload_cpu_raster::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 554 */

void pdb_1406498c0(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  plVar4 = (longlong *)*param_3;
  if (plVar4[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    lVar5 = *param_1;
    uVar10 = *(undefined4 *)(lVar5 + 0x10);
    lVar6 = *plVar4;
    uVar9 = pdb_1405d5d90(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),lVar6 + 0xd8,
                          *(undefined8 *)(lVar6 + 0x80),*(undefined8 *)(lVar6 + 0x88),
                          (short)plVar4[7],plVar4[1],plVar4[2],uVar10,0x19,1);
    lVar6 = *plVar4;
    uVar1 = *(undefined8 *)(lVar5 + 8);
    lVar5 = *(longlong *)(lVar6 + 0x100);
    if (lVar5 == *(longlong *)(lVar6 + 0xf0)) {
      pdb_142dbafc0(lVar6 + 0xf0);
    }
    lVar7 = *(longlong *)(lVar6 + 0xf8);
    lVar8 = lVar5 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = 4;
    *(undefined8 *)(lVar7 + 4 + lVar8) = uVar1;
    *(undefined4 *)(lVar7 + 0xc + lVar8) = uVar10;
    *(int *)(lVar7 + 0x10 + lVar8) = iVar2 + 1;
    *(int *)(lVar7 + 0x14 + lVar8) = iVar3;
    *(undefined4 *)(lVar7 + 0x18 + lVar8) = uVar9;
    *(longlong *)(lVar6 + 0x100) = lVar5 + 1;
    if (plVar4[1] != 0) {
      lVar5 = *plVar4;
      uVar1 = *(undefined8 *)param_1[1];
      uVar10 = pdb_1405d6440(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)plVar4[7],plVar4[1],plVar4[2],(int)((ulonglong)uVar1 >> 0x20),
                             0x3319,*(undefined4 *)(lVar5 + 0x248));
      lVar5 = *plVar4;
      lVar6 = *(longlong *)(lVar5 + 0x100);
      if (lVar6 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar7 = *(longlong *)(lVar5 + 0xf8);
      lVar8 = lVar6 * 0x1c;
      *(undefined4 *)(lVar7 + lVar8) = 1;
      *(undefined8 *)(lVar7 + 4 + lVar8) = uVar1;
      *(int *)(lVar7 + 0x10 + lVar8) = iVar2 + 2;
      *(int *)(lVar7 + 0x14 + lVar8) = iVar3;
      *(undefined4 *)(lVar7 + 0x18 + lVar8) = uVar10;
      *(longlong *)(lVar5 + 0x100) = lVar6 + 1;
      *(int *)(param_3[1] + (ulonglong)(uint)param_2[2]) = (int)param_1[2];
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f67320);
}

