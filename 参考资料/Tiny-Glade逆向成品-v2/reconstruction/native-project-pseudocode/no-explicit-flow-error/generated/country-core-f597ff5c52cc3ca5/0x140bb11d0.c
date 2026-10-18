// VA 0x140bb11d0, PDB extent 1122 bytes
// country_core::shader::wall::generate_draw_lists_shadow::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::wall::generate_draw_lists_shadow::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1122 */

void pdb_140bb11d0(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte *pbVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined1 uVar18;
  
  plVar8 = (longlong *)*param_3;
  if (plVar8[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar9 = *param_1;
    uVar5 = *(undefined4 *)(lVar9 + 0x10);
    lVar10 = *plVar8;
    uVar16 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                           lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                           *(undefined8 *)(lVar10 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2],uVar5
                           ,0x19,1);
    lVar10 = *plVar8;
    uVar1 = *(undefined8 *)(lVar9 + 8);
    lVar9 = *(longlong *)(lVar10 + 0x100);
    if (lVar9 == *(longlong *)(lVar10 + 0xf0)) {
      pdb_142dbafc0(lVar10 + 0xf0);
    }
    lVar11 = *(longlong *)(lVar10 + 0xf8);
    lVar12 = lVar9 * 0x1c;
    *(undefined4 *)(lVar11 + lVar12) = 4;
    *(undefined8 *)(lVar11 + 4 + lVar12) = uVar1;
    *(undefined4 *)(lVar11 + 0xc + lVar12) = uVar5;
    *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 1;
    *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
    *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar16;
    *(longlong *)(lVar10 + 0x100) = lVar9 + 1;
    if (plVar8[1] != 0) {
      lVar9 = param_1[1];
      lVar10 = *plVar8;
      uVar5 = *(undefined4 *)(lVar9 + 0x10);
      uVar16 = pdb_141764730(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                             lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                             *(undefined8 *)(lVar10 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2],
                             uVar5,0x3319,*(undefined4 *)(lVar10 + 0x248));
      lVar10 = *plVar8;
      uVar1 = *(undefined8 *)(lVar9 + 8);
      lVar9 = *(longlong *)(lVar10 + 0x100);
      if (lVar9 == *(longlong *)(lVar10 + 0xf0)) {
        pdb_142dbafc0(lVar10 + 0xf0);
      }
      lVar11 = *(longlong *)(lVar10 + 0xf8);
      lVar12 = lVar9 * 0x1c;
      *(undefined4 *)(lVar11 + lVar12) = 3;
      *(undefined8 *)(lVar11 + 4 + lVar12) = uVar1;
      *(undefined4 *)(lVar11 + 0xc + lVar12) = uVar5;
      *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 2;
      *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
      *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar16;
      *(longlong *)(lVar10 + 0x100) = lVar9 + 1;
      lVar9 = param_3[1];
      uVar6 = param_2[2];
      *(int *)(lVar9 + (ulonglong)uVar6) = (int)param_1[6];
      if (plVar8[1] != 0) {
        lVar10 = param_1[2];
        lVar11 = *plVar8;
        uVar5 = *(undefined4 *)(lVar10 + 0x10);
        uVar18 = 0x33;
        uVar16 = pdb_141764730(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                               lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                               *(undefined8 *)(lVar11 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2],
                               uVar5,0x3319,*(undefined4 *)(lVar11 + 0x248));
        lVar11 = *plVar8;
        uVar1 = *(undefined8 *)(lVar10 + 8);
        lVar10 = *(longlong *)(lVar11 + 0x100);
        if (lVar10 == *(longlong *)(lVar11 + 0xf0)) {
          pdb_142dbafc0(lVar11 + 0xf0);
        }
        lVar12 = *(longlong *)(lVar11 + 0xf8);
        lVar14 = lVar10 * 0x1c;
        *(undefined4 *)(lVar12 + lVar14) = 3;
        *(undefined8 *)(lVar12 + 4 + lVar14) = uVar1;
        *(undefined4 *)(lVar12 + 0xc + lVar14) = uVar5;
        *(int *)(lVar12 + 0x10 + lVar14) = iVar3 + 3;
        *(int *)(lVar12 + 0x14 + lVar14) = iVar4;
        *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar16;
        *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
        pbVar13 = (byte *)param_1[3];
        bVar2 = pbVar13[0x11];
        uVar15 = 0x19;
        uVar17 = bVar2 - 0x7c;
        if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
          uVar15 = 0x1a;
        }
        if (plVar8[1] != 0) {
          uVar5 = *(undefined4 *)(pbVar13 + 4);
          lVar10 = *plVar8;
          uVar16 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                                 lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                                 *(undefined8 *)(lVar10 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2]
                                 ,uVar5,CONCAT11(uVar18,uVar15),1);
          if (*pbVar13 != bVar2 && *pbVar13 != 0) {
            pdb_140e2c3a0(*plVar8,pbVar13);
          }
          lVar10 = *plVar8;
          uVar7 = *(undefined4 *)pbVar13;
          lVar11 = *(longlong *)(lVar10 + 0x100);
          if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
            pdb_142dbafc0(lVar10 + 0xf0);
          }
          lVar12 = *(longlong *)(lVar10 + 0xf8);
          lVar14 = lVar11 * 0x1c;
          *(undefined4 *)(lVar12 + lVar14) = 0;
          *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar5,uVar7);
          *(int *)(lVar12 + 0x10 + lVar14) = iVar3 + 4;
          *(int *)(lVar12 + 0x14 + lVar14) = iVar4;
          *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar16;
          *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
          *(longlong *)(lVar9 + (ulonglong)(uVar6 + 4)) = param_1[4];
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_1 + 0x2c);
          *(int *)(lVar9 + (ulonglong)uVar6) = (int)param_1[5];
          *(undefined4 *)(lVar9 + (ulonglong)(uVar6 + 4)) = uVar5;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

