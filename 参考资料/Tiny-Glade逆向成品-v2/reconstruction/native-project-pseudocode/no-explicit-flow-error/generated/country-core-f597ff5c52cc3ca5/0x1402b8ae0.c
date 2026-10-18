// VA 0x1402b8ae0, PDB extent 974 bytes
// country_core::shader::screenshot::capture_screenshot_buffer::impl$6::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::screenshot::capture_screenshot_buffer::impl$6::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 974 */

void pdb_1402b8ae0(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 uVar18;
  undefined2 uVar17;
  
  lVar7 = param_3[1];
  uVar16 = param_2[2];
  pbVar8 = (byte *)param_1[1];
  *(ulonglong *)(lVar7 + (ulonglong)(uVar16 + 8)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  pbVar9 = (byte *)param_1[2];
  *(ulonglong *)(lVar7 + (ulonglong)(uVar16 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar10 = *param_1;
    lVar11 = *param_3;
    uVar5 = *(undefined4 *)(lVar10 + 0x10);
    uVar18 = 0x33;
    uVar15 = pdb_1405d6440(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                           lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                           *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                           uVar5,0x3319,*(undefined4 *)(lVar11 + 0x248));
    lVar11 = *param_3;
    uVar1 = *(undefined8 *)(lVar10 + 8);
    lVar10 = *(longlong *)(lVar11 + 0x100);
    if (lVar10 == *(longlong *)(lVar11 + 0xf0)) {
      pdb_142dbafc0(lVar11 + 0xf0);
    }
    lVar12 = *(longlong *)(lVar11 + 0xf8);
    lVar13 = lVar10 * 0x1c;
    *(undefined4 *)(lVar12 + lVar13) = 3;
    *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
    *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar5;
    *(int *)(lVar12 + 0x10 + lVar13) = iVar3 + 1;
    *(int *)(lVar12 + 0x14 + lVar13) = iVar4;
    *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar15;
    *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
    *(longlong *)(lVar7 + (ulonglong)uVar16) = param_1[3];
    bVar2 = pbVar8[0x11];
    uVar14 = 0x19;
    uVar16 = bVar2 - 0x7c;
    if ((uVar16 < 7) && ((0x75U >> (uVar16 & 0x1f) & 1) != 0)) {
      uVar14 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar5 = *(undefined4 *)(pbVar8 + 4);
      lVar7 = *param_3;
      uVar17 = CONCAT11(uVar18,uVar14);
      uVar15 = pdb_1405d5d90(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8
                             ,*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar5,uVar17,1);
      uVar18 = (undefined1)((ushort)uVar17 >> 8);
      if (*pbVar8 != bVar2 && *pbVar8 != 0) {
        pdb_140e2c3a0(*param_3,pbVar8);
      }
      lVar7 = *param_3;
      uVar6 = *(undefined4 *)pbVar8;
      lVar10 = *(longlong *)(lVar7 + 0x100);
      if (lVar10 == *(longlong *)(lVar7 + 0xf0)) {
        pdb_142dbafc0(lVar7 + 0xf0);
      }
      lVar11 = *(longlong *)(lVar7 + 0xf8);
      lVar12 = lVar10 * 0x1c;
      *(undefined4 *)(lVar11 + lVar12) = 0;
      *(ulonglong *)(lVar11 + 4 + lVar12) = CONCAT44(uVar5,uVar6);
      *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 2;
      *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
      *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar15;
      *(longlong *)(lVar7 + 0x100) = lVar10 + 1;
      bVar2 = pbVar9[0x11];
      uVar14 = 0x19;
      uVar16 = bVar2 - 0x7c;
      if ((uVar16 < 7) && ((0x75U >> (uVar16 & 0x1f) & 1) != 0)) {
        uVar14 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar5 = *(undefined4 *)(pbVar9 + 4);
        lVar7 = *param_3;
        uVar15 = pdb_1405d5d90(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),
                               lVar7 + 0xd8,*(undefined8 *)(lVar7 + 0x80),
                               *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar5,CONCAT11(uVar18,uVar14),1);
        if (*pbVar9 != bVar2 && *pbVar9 != 0) {
          pdb_140e2c3a0(*param_3,pbVar9);
        }
        lVar7 = *param_3;
        uVar6 = *(undefined4 *)pbVar9;
        lVar10 = *(longlong *)(lVar7 + 0x100);
        if (lVar10 == *(longlong *)(lVar7 + 0xf0)) {
          pdb_142dbafc0(lVar7 + 0xf0);
        }
        lVar11 = *(longlong *)(lVar7 + 0xf8);
        lVar12 = lVar10 * 0x1c;
        *(undefined4 *)(lVar11 + lVar12) = 0;
        *(ulonglong *)(lVar11 + 4 + lVar12) = CONCAT44(uVar5,uVar6);
        *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 3;
        *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
        *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar15;
        *(longlong *)(lVar7 + 0x100) = lVar10 + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f67320);
}

