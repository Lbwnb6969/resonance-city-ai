// VA 0x141cb92e0, PDB extent 591 bytes
// rhapsody_post::shader::blur::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-post-a712405cb12dc4ce/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_post::shader::blur::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-post-a712405cb12dc4ce/out/shabriri.rs
   Extent: 591 */

void pdb_141cb92e0(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  
  plVar5 = (longlong *)*param_3;
  pbVar6 = (byte *)*param_1;
  bVar1 = pbVar6[0x11];
  uVar12 = 0x19;
  uVar15 = bVar1 - 0x7c;
  if ((uVar15 < 7) && ((0x75U >> (uVar15 & 0x1f) & 1) != 0)) {
    uVar12 = 0x1a;
  }
  if (plVar5[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar14 = *(undefined4 *)(pbVar6 + 4);
    lVar7 = *plVar5;
    uVar13 = pdb_141cbab10(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8,
                           *(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                           (short)plVar5[7],plVar5[1],plVar5[2],uVar14,uVar12,1);
    if (*pbVar6 != bVar1 && *pbVar6 != 0) {
      pdb_140e2c3a0(*plVar5,pbVar6);
    }
    lVar7 = *plVar5;
    uVar4 = *(undefined4 *)pbVar6;
    lVar8 = *(longlong *)(lVar7 + 0x100);
    if (lVar8 == *(longlong *)(lVar7 + 0xf0)) {
      pdb_142dbafc0(lVar7 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar7 + 0xf8);
    lVar11 = lVar8 * 0x1c;
    *(undefined4 *)(lVar9 + lVar11) = 0;
    *(ulonglong *)(lVar9 + 4 + lVar11) = CONCAT44(uVar14,uVar4);
    *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 1;
    *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
    *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
    *(longlong *)(lVar7 + 0x100) = lVar8 + 1;
    if (plVar5[1] != 0) {
      lVar7 = *plVar5;
      uVar10 = *(undefined8 *)param_1[1];
      uVar14 = pdb_141cba7e0(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8
                             ,*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                             (short)plVar5[7],plVar5[1],plVar5[2],(int)((ulonglong)uVar10 >> 0x20),
                             0x3319,*(undefined4 *)(lVar7 + 0x248));
      lVar7 = *plVar5;
      lVar8 = *(longlong *)(lVar7 + 0x100);
      if (lVar8 == *(longlong *)(lVar7 + 0xf0)) {
        pdb_142dbafc0(lVar7 + 0xf0);
      }
      lVar9 = *(longlong *)(lVar7 + 0xf8);
      lVar11 = lVar8 * 0x1c;
      *(undefined4 *)(lVar9 + lVar11) = 1;
      *(undefined8 *)(lVar9 + 4 + lVar11) = uVar10;
      *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 2;
      *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
      *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar14;
      *(longlong *)(lVar7 + 0x100) = lVar8 + 1;
      *(undefined8 *)(param_3[1] + (ulonglong)(uint)param_2[2]) = param_1[2];
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1433ac7d8);
}

