// VA 0x140bdd080, PDB extent 649 bytes
// country_core::shader::read_terrain_stroke::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::read_terrain_stroke::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 649 */

void pdb_140bdd080(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 uVar17;
  
  pbVar8 = (byte *)param_1[1];
  uVar3 = param_2[2];
  *(ulonglong *)(param_3[1] + (ulonglong)uVar3) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  plVar9 = (longlong *)*param_3;
  if (plVar9[1] != 0) {
    iVar4 = *param_2;
    iVar5 = param_2[1];
    lVar10 = *param_1;
    lVar11 = *plVar9;
    uVar6 = *(undefined4 *)(lVar10 + 0x10);
    uVar17 = 0x33;
    uVar15 = pdb_141764730(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                           lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                           *(undefined8 *)(lVar11 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],uVar6
                           ,0x3319,*(undefined4 *)(lVar11 + 0x248));
    lVar11 = *plVar9;
    uVar1 = *(undefined8 *)(lVar10 + 8);
    lVar10 = *(longlong *)(lVar11 + 0x100);
    if (lVar10 == *(longlong *)(lVar11 + 0xf0)) {
      pdb_142dbafc0(lVar11 + 0xf0);
    }
    lVar12 = *(longlong *)(lVar11 + 0xf8);
    lVar13 = lVar10 * 0x1c;
    *(undefined4 *)(lVar12 + lVar13) = 3;
    *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
    *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar6;
    *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 2;
    *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
    *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar15;
    *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
    bVar2 = pbVar8[0x11];
    uVar14 = 0x19;
    uVar16 = bVar2 - 0x7c;
    if ((uVar16 < 7) && ((0x75U >> (uVar16 & 0x1f) & 1) != 0)) {
      uVar14 = 0x1a;
    }
    if (plVar9[1] != 0) {
      uVar6 = *(undefined4 *)(pbVar8 + 4);
      lVar10 = *plVar9;
      uVar15 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                             lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                             *(undefined8 *)(lVar10 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],
                             uVar6,CONCAT11(uVar17,uVar14),1);
      if (*pbVar8 != bVar2 && *pbVar8 != 0) {
        pdb_140e2c3a0(*plVar9,pbVar8);
      }
      lVar10 = *plVar9;
      uVar7 = *(undefined4 *)pbVar8;
      lVar11 = *(longlong *)(lVar10 + 0x100);
      if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
        pdb_142dbafc0(lVar10 + 0xf0);
      }
      lVar12 = *(longlong *)(lVar10 + 0xf8);
      lVar13 = lVar11 * 0x1c;
      *(undefined4 *)(lVar12 + lVar13) = 0;
      *(ulonglong *)(lVar12 + 4 + lVar13) = CONCAT44(uVar6,uVar7);
      *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 1;
      *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
      *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar15;
      *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
      *(longlong *)(param_3[3] + (ulonglong)uVar3) = param_1[2];
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

