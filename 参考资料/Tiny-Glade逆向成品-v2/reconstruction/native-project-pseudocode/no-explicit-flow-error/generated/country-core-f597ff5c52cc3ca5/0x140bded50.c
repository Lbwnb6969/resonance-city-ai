// VA 0x140bded50, PDB extent 950 bytes
// country_core::shader::vermeer::generate_strokes::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::vermeer::generate_strokes::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 950 */

void pdb_140bded50(longlong *param_1,int *param_2,longlong *param_3)

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
  undefined1 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined1 uVar17;
  undefined2 uVar16;
  
  lVar7 = param_3[1];
  uVar15 = param_2[2];
  pbVar8 = (byte *)param_1[1];
  *(ulonglong *)(lVar7 + (ulonglong)(uVar15 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  pbVar9 = (byte *)param_1[2];
  *(ulonglong *)(lVar7 + (ulonglong)(uVar15 + 0x18)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  *(int *)(lVar7 + (ulonglong)uVar15) = (int)param_1[3];
  *(undefined4 *)(lVar7 + (ulonglong)(uVar15 + 4)) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(int *)(lVar7 + (ulonglong)(uVar15 + 8)) = (int)param_1[4];
  *(undefined4 *)(lVar7 + (ulonglong)(uVar15 + 0xc)) = *(undefined4 *)((longlong)param_1 + 0x24);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar7 = *param_1;
    lVar10 = *param_3;
    uVar5 = *(undefined4 *)(lVar7 + 0x10);
    uVar17 = 0x33;
    uVar14 = pdb_141764730(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                           lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                           *(undefined8 *)(lVar10 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                           uVar5,0x3319,*(undefined4 *)(lVar10 + 0x248));
    lVar10 = *param_3;
    uVar1 = *(undefined8 *)(lVar7 + 8);
    lVar7 = *(longlong *)(lVar10 + 0x100);
    if (lVar7 == *(longlong *)(lVar10 + 0xf0)) {
      pdb_142dbafc0(lVar10 + 0xf0);
    }
    lVar11 = *(longlong *)(lVar10 + 0xf8);
    lVar12 = lVar7 * 0x1c;
    *(undefined4 *)(lVar11 + lVar12) = 3;
    *(undefined8 *)(lVar11 + 4 + lVar12) = uVar1;
    *(undefined4 *)(lVar11 + 0xc + lVar12) = uVar5;
    *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 3;
    *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
    *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar14;
    *(longlong *)(lVar10 + 0x100) = lVar7 + 1;
    bVar2 = pbVar8[0x11];
    uVar13 = 0x19;
    uVar15 = bVar2 - 0x7c;
    if ((uVar15 < 7) && ((0x75U >> (uVar15 & 0x1f) & 1) != 0)) {
      uVar13 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar5 = *(undefined4 *)(pbVar8 + 4);
      lVar7 = *param_3;
      uVar16 = CONCAT11(uVar17,uVar13);
      uVar14 = pdb_141764080(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8
                             ,*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar5,uVar16,1);
      uVar17 = (undefined1)((ushort)uVar16 >> 8);
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
      *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 1;
      *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
      *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar14;
      *(longlong *)(lVar7 + 0x100) = lVar10 + 1;
      bVar2 = pbVar9[0x11];
      uVar13 = 0x19;
      uVar15 = bVar2 - 0x7c;
      if ((uVar15 < 7) && ((0x75U >> (uVar15 & 0x1f) & 1) != 0)) {
        uVar13 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar5 = *(undefined4 *)(pbVar9 + 4);
        lVar7 = *param_3;
        uVar14 = pdb_141764080(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),
                               lVar7 + 0xd8,*(undefined8 *)(lVar7 + 0x80),
                               *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar5,CONCAT11(uVar17,uVar13),1);
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
        *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 2;
        *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
        *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar14;
        *(longlong *)(lVar7 + 0x100) = lVar10 + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

