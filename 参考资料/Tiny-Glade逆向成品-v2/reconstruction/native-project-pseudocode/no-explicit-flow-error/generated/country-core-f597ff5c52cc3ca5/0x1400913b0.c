// VA 0x1400913b0, PDB extent 866 bytes
// country_core::shader::blur_downsample::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::blur_downsample::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 866 */

void pdb_1400913b0(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  
  puVar5 = (undefined8 *)param_1[1];
  *(ulonglong *)(param_3[1] + (ulonglong)(uint)param_2[2]) =
       (ulonglong)*(ushort *)((longlong)puVar5 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar5 + 1);
  param_3 = (longlong *)*param_3;
  pbVar6 = (byte *)*param_1;
  bVar1 = pbVar6[0x11];
  uVar12 = 0x19;
  uVar16 = bVar1 - 0x7c;
  if ((uVar16 < 7) && ((0x75U >> (uVar16 & 0x1f) & 1) != 0)) {
    uVar12 = 0x1a;
  }
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar15 = *(undefined4 *)(pbVar6 + 4);
    lVar7 = *param_3;
    uVar14 = pdb_1405d5d90(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8,
                           *(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar15,uVar12,1);
    if (*pbVar6 != bVar1 && *pbVar6 != 0) {
      pdb_140e2c3a0(*param_3,pbVar6);
    }
    lVar7 = *param_3;
    uVar4 = *(undefined4 *)pbVar6;
    lVar8 = *(longlong *)(lVar7 + 0x100);
    if (lVar8 == *(longlong *)(lVar7 + 0xf0)) {
      pdb_142dbafc0(lVar7 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar7 + 0xf8);
    lVar11 = lVar8 * 0x1c;
    *(undefined4 *)(lVar9 + lVar11) = 0;
    *(ulonglong *)(lVar9 + 4 + lVar11) = CONCAT44(uVar15,uVar4);
    *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 3;
    *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
    *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar14;
    *(longlong *)(lVar7 + 0x100) = lVar8 + 1;
    if (param_3[1] != 0) {
      lVar7 = *param_3;
      uVar10 = *puVar5;
      uVar12 = 0x33;
      uVar15 = pdb_1405d6440(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8
                             ,*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],
                             (int)((ulonglong)uVar10 >> 0x20),0x3319,*(undefined4 *)(lVar7 + 0x248))
      ;
      lVar7 = *param_3;
      lVar8 = *(longlong *)(lVar7 + 0x100);
      if (lVar8 == *(longlong *)(lVar7 + 0xf0)) {
        pdb_142dbafc0(lVar7 + 0xf0);
      }
      lVar9 = *(longlong *)(lVar7 + 0xf8);
      lVar11 = lVar8 * 0x1c;
      *(undefined4 *)(lVar9 + lVar11) = 1;
      *(undefined8 *)(lVar9 + 4 + lVar11) = uVar10;
      *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 1;
      *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
      *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar15;
      *(longlong *)(lVar7 + 0x100) = lVar8 + 1;
      pbVar6 = (byte *)param_1[2];
      bVar1 = pbVar6[0x11];
      uVar13 = 0x19;
      uVar16 = bVar1 - 0x7c;
      if ((uVar16 < 7) && ((0x75U >> (uVar16 & 0x1f) & 1) != 0)) {
        uVar13 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar15 = *(undefined4 *)(pbVar6 + 4);
        lVar7 = *param_3;
        uVar14 = pdb_1405d5d90(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),
                               lVar7 + 0xd8,*(undefined8 *)(lVar7 + 0x80),
                               *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar15,CONCAT11(uVar12,uVar13),1);
        if (*pbVar6 != bVar1 && *pbVar6 != 0) {
          pdb_140e2c3a0(*param_3,pbVar6);
        }
        lVar7 = *param_3;
        uVar4 = *(undefined4 *)pbVar6;
        lVar8 = *(longlong *)(lVar7 + 0x100);
        if (lVar8 == *(longlong *)(lVar7 + 0xf0)) {
          pdb_142dbafc0(lVar7 + 0xf0);
        }
        lVar9 = *(longlong *)(lVar7 + 0xf8);
        lVar11 = lVar8 * 0x1c;
        *(undefined4 *)(lVar9 + lVar11) = 0;
        *(ulonglong *)(lVar9 + 4 + lVar11) = CONCAT44(uVar15,uVar4);
        *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 2;
        *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
        *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar14;
        *(longlong *)(lVar7 + 0x100) = lVar8 + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f67320);
}

