// VA 0x140b70980, PDB extent 608 bytes
// country_core::shader::gauss_blur_building_mask::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::gauss_blur_building_mask::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 608 */

void pdb_140b70980(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)*param_1;
  uVar15 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar15) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  puVar7 = (undefined8 *)param_1[1];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar15 + 8)) =
       (ulonglong)*(ushort *)((longlong)puVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar7 + 1);
  *(undefined1 *)(lVar5 + (ulonglong)(uVar15 + 0x10)) = *(undefined1 *)(param_1 + 2);
  param_3 = (longlong *)*param_3;
  bVar1 = pbVar6[0x11];
  uVar12 = 0x19;
  uVar15 = bVar1 - 0x7c;
  if ((uVar15 < 7) && ((0x75U >> (uVar15 & 0x1f) & 1) != 0)) {
    uVar12 = 0x1a;
  }
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar14 = *(undefined4 *)(pbVar6 + 4);
    lVar5 = *param_3;
    uVar13 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar14,uVar12,1);
    if (*pbVar6 != bVar1 && *pbVar6 != 0) {
      pdb_140e2c3a0(*param_3,pbVar6);
    }
    lVar5 = *param_3;
    uVar4 = *(undefined4 *)pbVar6;
    lVar8 = *(longlong *)(lVar5 + 0x100);
    if (lVar8 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar5 + 0xf8);
    lVar11 = lVar8 * 0x1c;
    *(undefined4 *)(lVar9 + lVar11) = 0;
    *(ulonglong *)(lVar9 + 4 + lVar11) = CONCAT44(uVar14,uVar4);
    *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 1;
    *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
    *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
    *(longlong *)(lVar5 + 0x100) = lVar8 + 1;
    if (param_3[1] != 0) {
      lVar5 = *param_3;
      uVar10 = *puVar7;
      uVar14 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],
                             (int)((ulonglong)uVar10 >> 0x20),0x3319,*(undefined4 *)(lVar5 + 0x248))
      ;
      lVar5 = *param_3;
      lVar8 = *(longlong *)(lVar5 + 0x100);
      if (lVar8 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar9 = *(longlong *)(lVar5 + 0xf8);
      lVar11 = lVar8 * 0x1c;
      *(undefined4 *)(lVar9 + lVar11) = 1;
      *(undefined8 *)(lVar9 + 4 + lVar11) = uVar10;
      *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 2;
      *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
      *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar14;
      *(longlong *)(lVar5 + 0x100) = lVar8 + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

