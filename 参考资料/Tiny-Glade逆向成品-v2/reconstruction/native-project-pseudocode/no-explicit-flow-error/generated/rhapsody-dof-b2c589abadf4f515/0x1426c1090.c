// VA 0x1426c1090, PDB extent 778 bytes
// rhapsody_dof::shader::init_buffers::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_dof::shader::init_buffers::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
   Extent: 778 */

void pdb_1426c1090(longlong *param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  *(int *)(param_3[1] + (ulonglong)(uint)param_2[2]) = (int)param_1[3];
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    lVar6 = *param_1;
    uVar3 = *(undefined4 *)(lVar6 + 0x10);
    lVar7 = *param_3;
    uVar10 = pdb_141cfe690(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8,
                           *(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar3,0x18,1);
    lVar7 = *param_3;
    uVar4 = *(undefined4 *)(lVar6 + 8);
    uVar5 = *(undefined4 *)(lVar6 + 0xc);
    lVar6 = *(longlong *)(lVar7 + 0x100);
    if (lVar6 == *(longlong *)(lVar7 + 0xf0)) {
      pdb_142dbafc0(lVar7 + 0xf0);
    }
    lVar8 = *(longlong *)(lVar7 + 0xf8);
    lVar9 = lVar6 * 0x1c;
    *(undefined4 *)(lVar8 + lVar9) = 2;
    *(undefined4 *)(lVar8 + 4 + lVar9) = uVar4;
    *(undefined4 *)(lVar8 + 8 + lVar9) = uVar5;
    *(undefined4 *)(lVar8 + 0xc + lVar9) = uVar3;
    *(int *)(lVar8 + 0x10 + lVar9) = iVar1 + 1;
    *(int *)(lVar8 + 0x14 + lVar9) = iVar2;
    *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar10;
    *(longlong *)(lVar7 + 0x100) = lVar6 + 1;
    if (param_3[1] != 0) {
      lVar6 = param_1[1];
      lVar7 = *param_3;
      uVar3 = *(undefined4 *)(lVar6 + 0x10);
      uVar10 = pdb_141cfe950(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8
                             ,*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar3,0x3319,
                             *(undefined4 *)(lVar7 + 0x248));
      lVar7 = *param_3;
      uVar4 = *(undefined4 *)(lVar6 + 8);
      uVar5 = *(undefined4 *)(lVar6 + 0xc);
      lVar6 = *(longlong *)(lVar7 + 0x100);
      if (lVar6 == *(longlong *)(lVar7 + 0xf0)) {
        pdb_142dbafc0(lVar7 + 0xf0);
      }
      lVar8 = *(longlong *)(lVar7 + 0xf8);
      lVar9 = lVar6 * 0x1c;
      *(undefined4 *)(lVar8 + lVar9) = 3;
      *(undefined4 *)(lVar8 + 4 + lVar9) = uVar4;
      *(undefined4 *)(lVar8 + 8 + lVar9) = uVar5;
      *(undefined4 *)(lVar8 + 0xc + lVar9) = uVar3;
      *(int *)(lVar8 + 0x10 + lVar9) = iVar1 + 2;
      *(int *)(lVar8 + 0x14 + lVar9) = iVar2;
      *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar10;
      *(longlong *)(lVar7 + 0x100) = lVar6 + 1;
      if (param_3[1] != 0) {
        lVar6 = param_1[2];
        lVar7 = *param_3;
        uVar3 = *(undefined4 *)(lVar6 + 0x10);
        uVar10 = pdb_141cfe950(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),
                               lVar7 + 0xd8,*(undefined8 *)(lVar7 + 0x80),
                               *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar3,0x3319,*(undefined4 *)(lVar7 + 0x248));
        lVar7 = *param_3;
        uVar4 = *(undefined4 *)(lVar6 + 8);
        uVar5 = *(undefined4 *)(lVar6 + 0xc);
        lVar6 = *(longlong *)(lVar7 + 0x100);
        if (lVar6 == *(longlong *)(lVar7 + 0xf0)) {
          pdb_142dbafc0(lVar7 + 0xf0);
        }
        lVar8 = *(longlong *)(lVar7 + 0xf8);
        lVar9 = lVar6 * 0x1c;
        *(undefined4 *)(lVar8 + lVar9) = 3;
        *(undefined4 *)(lVar8 + 4 + lVar9) = uVar4;
        *(undefined4 *)(lVar8 + 8 + lVar9) = uVar5;
        *(undefined4 *)(lVar8 + 0xc + lVar9) = uVar3;
        *(int *)(lVar8 + 0x10 + lVar9) = iVar1 + 3;
        *(int *)(lVar8 + 0x14 + lVar9) = iVar2;
        *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar10;
        *(longlong *)(lVar7 + 0x100) = lVar6 + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1433c93f0);
}

