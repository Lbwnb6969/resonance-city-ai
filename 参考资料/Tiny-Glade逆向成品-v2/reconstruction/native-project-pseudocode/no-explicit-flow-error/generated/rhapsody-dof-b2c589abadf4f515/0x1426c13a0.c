// VA 0x1426c13a0, PDB extent 772 bytes
// rhapsody_dof::shader::clear_halfres::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_dof::shader::clear_halfres::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
   Extent: 772 */

void pdb_1426c13a0(longlong *param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  
  puVar5 = (undefined8 *)param_1[1];
  *(ulonglong *)(param_3[1] + (ulonglong)(uint)param_2[2]) =
       (ulonglong)*(ushort *)((longlong)puVar5 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar5 + 1);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    lVar6 = *param_1;
    uVar12 = *(undefined4 *)(lVar6 + 0x10);
    lVar7 = *param_3;
    uVar11 = pdb_141cfe690(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8,
                           *(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar12,0x19,1);
    lVar7 = *param_3;
    uVar3 = *(undefined4 *)(lVar6 + 8);
    uVar4 = *(undefined4 *)(lVar6 + 0xc);
    lVar6 = *(longlong *)(lVar7 + 0x100);
    if (lVar6 == *(longlong *)(lVar7 + 0xf0)) {
      pdb_142dbafc0(lVar7 + 0xf0);
    }
    lVar8 = *(longlong *)(lVar7 + 0xf8);
    lVar10 = lVar6 * 0x1c;
    *(undefined4 *)(lVar8 + lVar10) = 4;
    *(undefined4 *)(lVar8 + 4 + lVar10) = uVar3;
    *(undefined4 *)(lVar8 + 8 + lVar10) = uVar4;
    *(undefined4 *)(lVar8 + 0xc + lVar10) = uVar12;
    *(int *)(lVar8 + 0x10 + lVar10) = iVar1 + 3;
    *(int *)(lVar8 + 0x14 + lVar10) = iVar2;
    *(undefined4 *)(lVar8 + 0x18 + lVar10) = uVar11;
    *(longlong *)(lVar7 + 0x100) = lVar6 + 1;
    if (param_3[1] != 0) {
      lVar6 = *param_3;
      uVar9 = *puVar5;
      uVar13 = 0x33;
      uVar12 = pdb_141cfe950(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),lVar6 + 0xd8
                             ,*(undefined8 *)(lVar6 + 0x80),*(undefined8 *)(lVar6 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],(int)((ulonglong)uVar9 >> 0x20)
                             ,0x3319,*(undefined4 *)(lVar6 + 0x248));
      lVar6 = *param_3;
      lVar7 = *(longlong *)(lVar6 + 0x100);
      if (lVar7 == *(longlong *)(lVar6 + 0xf0)) {
        pdb_142dbafc0(lVar6 + 0xf0);
      }
      lVar8 = *(longlong *)(lVar6 + 0xf8);
      lVar10 = lVar7 * 0x1c;
      *(undefined4 *)(lVar8 + lVar10) = 1;
      *(undefined8 *)(lVar8 + 4 + lVar10) = uVar9;
      *(int *)(lVar8 + 0x10 + lVar10) = iVar1 + 1;
      *(int *)(lVar8 + 0x14 + lVar10) = iVar2;
      *(undefined4 *)(lVar8 + 0x18 + lVar10) = uVar12;
      *(longlong *)(lVar6 + 0x100) = lVar7 + 1;
      if (param_3[1] != 0) {
        lVar6 = param_1[2];
        uVar12 = *(undefined4 *)(lVar6 + 0x10);
        lVar7 = *param_3;
        uVar11 = pdb_141cfe690(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),
                               lVar7 + 0xd8,*(undefined8 *)(lVar7 + 0x80),
                               *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar12,CONCAT11(uVar13,0x19),1);
        lVar7 = *param_3;
        uVar3 = *(undefined4 *)(lVar6 + 8);
        uVar4 = *(undefined4 *)(lVar6 + 0xc);
        lVar6 = *(longlong *)(lVar7 + 0x100);
        if (lVar6 == *(longlong *)(lVar7 + 0xf0)) {
          pdb_142dbafc0(lVar7 + 0xf0);
        }
        lVar8 = *(longlong *)(lVar7 + 0xf8);
        lVar10 = lVar6 * 0x1c;
        *(undefined4 *)(lVar8 + lVar10) = 4;
        *(undefined4 *)(lVar8 + 4 + lVar10) = uVar3;
        *(undefined4 *)(lVar8 + 8 + lVar10) = uVar4;
        *(undefined4 *)(lVar8 + 0xc + lVar10) = uVar12;
        *(int *)(lVar8 + 0x10 + lVar10) = iVar1 + 2;
        *(int *)(lVar8 + 0x14 + lVar10) = iVar2;
        *(undefined4 *)(lVar8 + 0x18 + lVar10) = uVar11;
        *(longlong *)(lVar7 + 0x100) = lVar6 + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1433c93f0);
}

