// VA 0x140a111b0, PDB extent 1612 bytes
// country_core::shader::grass2::build_draws::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::grass2::build_draws::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1612 */

void pdb_140a111b0(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined1 uVar17;
  undefined2 uVar16;
  
  plVar7 = (longlong *)*param_3;
  if (plVar7[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar8 = *param_1;
    lVar9 = *plVar7;
    uVar5 = *(undefined4 *)(lVar8 + 0x10);
    uVar14 = pdb_141764730(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8,
                           *(undefined8 *)(lVar9 + 0x80),*(undefined8 *)(lVar9 + 0x88),
                           (short)plVar7[7],plVar7[1],plVar7[2],uVar5,0x3319,
                           *(undefined4 *)(lVar9 + 0x248));
    lVar9 = *plVar7;
    uVar1 = *(undefined8 *)(lVar8 + 8);
    lVar8 = *(longlong *)(lVar9 + 0x100);
    if (lVar8 == *(longlong *)(lVar9 + 0xf0)) {
      pdb_142dbafc0(lVar9 + 0xf0);
    }
    lVar10 = *(longlong *)(lVar9 + 0xf8);
    lVar12 = lVar8 * 0x1c;
    *(undefined4 *)(lVar10 + lVar12) = 3;
    *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
    *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar5;
    *(int *)(lVar10 + 0x10 + lVar12) = iVar3 + 1;
    *(int *)(lVar10 + 0x14 + lVar12) = iVar4;
    *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar14;
    *(longlong *)(lVar9 + 0x100) = lVar8 + 1;
    if (plVar7[1] != 0) {
      lVar8 = param_1[1];
      lVar9 = *plVar7;
      uVar5 = *(undefined4 *)(lVar8 + 0x10);
      uVar14 = pdb_141764730(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8
                             ,*(undefined8 *)(lVar9 + 0x80),*(undefined8 *)(lVar9 + 0x88),
                             (short)plVar7[7],plVar7[1],plVar7[2],uVar5,0x3319,
                             *(undefined4 *)(lVar9 + 0x248));
      lVar9 = *plVar7;
      uVar1 = *(undefined8 *)(lVar8 + 8);
      lVar8 = *(longlong *)(lVar9 + 0x100);
      if (lVar8 == *(longlong *)(lVar9 + 0xf0)) {
        pdb_142dbafc0(lVar9 + 0xf0);
      }
      lVar10 = *(longlong *)(lVar9 + 0xf8);
      lVar12 = lVar8 * 0x1c;
      *(undefined4 *)(lVar10 + lVar12) = 3;
      *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
      *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar5;
      *(int *)(lVar10 + 0x10 + lVar12) = iVar3 + 2;
      *(int *)(lVar10 + 0x14 + lVar12) = iVar4;
      *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar14;
      *(longlong *)(lVar9 + 0x100) = lVar8 + 1;
      if (plVar7[1] != 0) {
        lVar8 = param_1[2];
        lVar9 = *plVar7;
        uVar5 = *(undefined4 *)(lVar8 + 0x10);
        uVar17 = 0x33;
        uVar14 = pdb_141764730(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),
                               lVar9 + 0xd8,*(undefined8 *)(lVar9 + 0x80),
                               *(undefined8 *)(lVar9 + 0x88),(short)plVar7[7],plVar7[1],plVar7[2],
                               uVar5,0x3319,*(undefined4 *)(lVar9 + 0x248));
        lVar9 = *plVar7;
        uVar1 = *(undefined8 *)(lVar8 + 8);
        lVar8 = *(longlong *)(lVar9 + 0x100);
        if (lVar8 == *(longlong *)(lVar9 + 0xf0)) {
          pdb_142dbafc0(lVar9 + 0xf0);
        }
        lVar10 = *(longlong *)(lVar9 + 0xf8);
        lVar12 = lVar8 * 0x1c;
        *(undefined4 *)(lVar10 + lVar12) = 3;
        *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
        *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar5;
        *(int *)(lVar10 + 0x10 + lVar12) = iVar3 + 3;
        *(int *)(lVar10 + 0x14 + lVar12) = iVar4;
        *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar14;
        *(longlong *)(lVar9 + 0x100) = lVar8 + 1;
        pbVar11 = (byte *)param_1[3];
        bVar2 = pbVar11[0x11];
        uVar13 = 0x19;
        uVar15 = bVar2 - 0x7c;
        if ((uVar15 < 7) && ((0x75U >> (uVar15 & 0x1f) & 1) != 0)) {
          uVar13 = 0x1a;
        }
        if (plVar7[1] != 0) {
          uVar5 = *(undefined4 *)(pbVar11 + 4);
          lVar8 = *plVar7;
          uVar16 = CONCAT11(uVar17,uVar13);
          uVar14 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                                 lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                                 *(undefined8 *)(lVar8 + 0x88),(short)plVar7[7],plVar7[1],plVar7[2],
                                 uVar5,uVar16,1);
          uVar17 = (undefined1)((ushort)uVar16 >> 8);
          if (*pbVar11 != bVar2 && *pbVar11 != 0) {
            pdb_140e2c3a0(*plVar7,pbVar11);
          }
          lVar8 = *plVar7;
          uVar6 = *(undefined4 *)pbVar11;
          lVar9 = *(longlong *)(lVar8 + 0x100);
          if (lVar9 == *(longlong *)(lVar8 + 0xf0)) {
            pdb_142dbafc0(lVar8 + 0xf0);
          }
          lVar10 = *(longlong *)(lVar8 + 0xf8);
          lVar12 = lVar9 * 0x1c;
          *(undefined4 *)(lVar10 + lVar12) = 0;
          *(ulonglong *)(lVar10 + 4 + lVar12) = CONCAT44(uVar5,uVar6);
          *(int *)(lVar10 + 0x10 + lVar12) = iVar3 + 4;
          *(int *)(lVar10 + 0x14 + lVar12) = iVar4;
          *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar14;
          *(longlong *)(lVar8 + 0x100) = lVar9 + 1;
          pbVar11 = (byte *)param_1[4];
          bVar2 = pbVar11[0x11];
          uVar13 = 0x19;
          uVar15 = bVar2 - 0x7c;
          if ((uVar15 < 7) && ((0x75U >> (uVar15 & 0x1f) & 1) != 0)) {
            uVar13 = 0x1a;
          }
          if (plVar7[1] != 0) {
            uVar5 = *(undefined4 *)(pbVar11 + 4);
            lVar8 = *plVar7;
            uVar16 = CONCAT11(uVar17,uVar13);
            uVar14 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                                   lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                                   *(undefined8 *)(lVar8 + 0x88),(short)plVar7[7],plVar7[1],
                                   plVar7[2],uVar5,uVar16,1);
            uVar17 = (undefined1)((ushort)uVar16 >> 8);
            if (*pbVar11 != bVar2 && *pbVar11 != 0) {
              pdb_140e2c3a0(*plVar7,pbVar11);
            }
            lVar8 = *plVar7;
            uVar6 = *(undefined4 *)pbVar11;
            lVar9 = *(longlong *)(lVar8 + 0x100);
            if (lVar9 == *(longlong *)(lVar8 + 0xf0)) {
              pdb_142dbafc0(lVar8 + 0xf0);
            }
            lVar10 = *(longlong *)(lVar8 + 0xf8);
            lVar12 = lVar9 * 0x1c;
            *(undefined4 *)(lVar10 + lVar12) = 0;
            *(ulonglong *)(lVar10 + 4 + lVar12) = CONCAT44(uVar5,uVar6);
            *(int *)(lVar10 + 0x10 + lVar12) = iVar3 + 5;
            *(int *)(lVar10 + 0x14 + lVar12) = iVar4;
            *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar14;
            *(longlong *)(lVar8 + 0x100) = lVar9 + 1;
            pbVar11 = (byte *)param_1[5];
            bVar2 = pbVar11[0x11];
            uVar13 = 0x19;
            uVar15 = bVar2 - 0x7c;
            if ((uVar15 < 7) && ((0x75U >> (uVar15 & 0x1f) & 1) != 0)) {
              uVar13 = 0x1a;
            }
            if (plVar7[1] != 0) {
              uVar5 = *(undefined4 *)(pbVar11 + 4);
              lVar8 = *plVar7;
              uVar14 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                                     lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                                     *(undefined8 *)(lVar8 + 0x88),(short)plVar7[7],plVar7[1],
                                     plVar7[2],uVar5,CONCAT11(uVar17,uVar13),1);
              if (*pbVar11 != bVar2 && *pbVar11 != 0) {
                pdb_140e2c3a0(*plVar7,pbVar11);
              }
              lVar8 = *plVar7;
              uVar6 = *(undefined4 *)pbVar11;
              lVar9 = *(longlong *)(lVar8 + 0x100);
              if (lVar9 == *(longlong *)(lVar8 + 0xf0)) {
                pdb_142dbafc0(lVar8 + 0xf0);
              }
              lVar10 = *(longlong *)(lVar8 + 0xf8);
              lVar12 = lVar9 * 0x1c;
              *(undefined4 *)(lVar10 + lVar12) = 0;
              *(ulonglong *)(lVar10 + 4 + lVar12) = CONCAT44(uVar5,uVar6);
              *(int *)(lVar10 + 0x10 + lVar12) = iVar3 + 6;
              *(int *)(lVar10 + 0x14 + lVar12) = iVar4;
              *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar14;
              *(longlong *)(lVar8 + 0x100) = lVar9 + 1;
              lVar8 = param_3[1];
              uVar15 = param_2[2];
              *(int *)(lVar8 + (ulonglong)uVar15) = (int)param_1[6];
              *(undefined4 *)(lVar8 + (ulonglong)(uVar15 + 4)) =
                   *(undefined4 *)((longlong)param_1 + 0x34);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

