// VA 0x140bdf260, PDB extent 999 bytes
// country_core::shader::painterly::generate_strokes::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::painterly::generate_strokes::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 999 */

void pdb_140bdf260(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined1 uVar19;
  undefined2 uVar18;
  
  lVar8 = param_3[1];
  pbVar9 = (byte *)param_1[1];
  uVar3 = param_2[2];
  *(ulonglong *)(lVar8 + (ulonglong)uVar3) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  pbVar10 = (byte *)param_1[2];
  *(ulonglong *)(lVar8 + (ulonglong)(uVar3 + 8)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  plVar11 = (longlong *)*param_3;
  if (plVar11[1] != 0) {
    iVar4 = *param_2;
    iVar5 = param_2[1];
    lVar8 = *param_1;
    lVar12 = *plVar11;
    uVar6 = *(undefined4 *)(lVar8 + 0x10);
    uVar19 = 0x33;
    uVar16 = pdb_141764730(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                           lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                           *(undefined8 *)(lVar12 + 0x88),(short)plVar11[7],plVar11[1],plVar11[2],
                           uVar6,0x3319,*(undefined4 *)(lVar12 + 0x248));
    lVar12 = *plVar11;
    uVar1 = *(undefined8 *)(lVar8 + 8);
    lVar8 = *(longlong *)(lVar12 + 0x100);
    if (lVar8 == *(longlong *)(lVar12 + 0xf0)) {
      pdb_142dbafc0(lVar12 + 0xf0);
    }
    lVar13 = *(longlong *)(lVar12 + 0xf8);
    lVar14 = lVar8 * 0x1c;
    *(undefined4 *)(lVar13 + lVar14) = 3;
    *(undefined8 *)(lVar13 + 4 + lVar14) = uVar1;
    *(undefined4 *)(lVar13 + 0xc + lVar14) = uVar6;
    *(int *)(lVar13 + 0x10 + lVar14) = iVar4 + 3;
    *(int *)(lVar13 + 0x14 + lVar14) = iVar5;
    *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar16;
    *(longlong *)(lVar12 + 0x100) = lVar8 + 1;
    bVar2 = pbVar9[0x11];
    uVar15 = 0x19;
    uVar17 = bVar2 - 0x7c;
    if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
      uVar15 = 0x1a;
    }
    if (plVar11[1] != 0) {
      uVar6 = *(undefined4 *)(pbVar9 + 4);
      lVar8 = *plVar11;
      uVar18 = CONCAT11(uVar19,uVar15);
      uVar16 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8
                             ,*(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                             (short)plVar11[7],plVar11[1],plVar11[2],uVar6,uVar18,1);
      uVar19 = (undefined1)((ushort)uVar18 >> 8);
      if (*pbVar9 != bVar2 && *pbVar9 != 0) {
        pdb_140e2c3a0(*plVar11,pbVar9);
      }
      lVar8 = *plVar11;
      uVar7 = *(undefined4 *)pbVar9;
      lVar12 = *(longlong *)(lVar8 + 0x100);
      if (lVar12 == *(longlong *)(lVar8 + 0xf0)) {
        pdb_142dbafc0(lVar8 + 0xf0);
      }
      lVar13 = *(longlong *)(lVar8 + 0xf8);
      lVar14 = lVar12 * 0x1c;
      *(undefined4 *)(lVar13 + lVar14) = 0;
      *(ulonglong *)(lVar13 + 4 + lVar14) = CONCAT44(uVar6,uVar7);
      *(int *)(lVar13 + 0x10 + lVar14) = iVar4 + 1;
      *(int *)(lVar13 + 0x14 + lVar14) = iVar5;
      *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar16;
      *(longlong *)(lVar8 + 0x100) = lVar12 + 1;
      bVar2 = pbVar10[0x11];
      uVar15 = 0x19;
      uVar17 = bVar2 - 0x7c;
      if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
        uVar15 = 0x1a;
      }
      if (plVar11[1] != 0) {
        uVar6 = *(undefined4 *)(pbVar10 + 4);
        lVar8 = *plVar11;
        uVar16 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                               lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                               *(undefined8 *)(lVar8 + 0x88),(short)plVar11[7],plVar11[1],plVar11[2]
                               ,uVar6,CONCAT11(uVar19,uVar15),1);
        if (*pbVar10 != bVar2 && *pbVar10 != 0) {
          pdb_140e2c3a0(*plVar11,pbVar10);
        }
        lVar8 = *plVar11;
        uVar7 = *(undefined4 *)pbVar10;
        lVar12 = *(longlong *)(lVar8 + 0x100);
        if (lVar12 == *(longlong *)(lVar8 + 0xf0)) {
          pdb_142dbafc0(lVar8 + 0xf0);
        }
        lVar13 = *(longlong *)(lVar8 + 0xf8);
        lVar14 = lVar12 * 0x1c;
        *(undefined4 *)(lVar13 + lVar14) = 0;
        *(ulonglong *)(lVar13 + 4 + lVar14) = CONCAT44(uVar6,uVar7);
        *(int *)(lVar13 + 0x10 + lVar14) = iVar4 + 2;
        *(int *)(lVar13 + 0x14 + lVar14) = iVar5;
        *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar16;
        *(longlong *)(lVar8 + 0x100) = lVar12 + 1;
        lVar8 = param_3[3];
        *(int *)(lVar8 + (ulonglong)uVar3) = (int)param_1[3];
        *(undefined4 *)(lVar8 + (ulonglong)(uVar3 + 4)) = *(undefined4 *)((longlong)param_1 + 0x1c);
        *(int *)(lVar8 + (ulonglong)(uVar3 + 8)) = (int)param_1[4];
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

