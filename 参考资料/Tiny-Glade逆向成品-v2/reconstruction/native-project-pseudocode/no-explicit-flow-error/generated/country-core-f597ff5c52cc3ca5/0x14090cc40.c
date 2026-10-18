// VA 0x14090cc40, PDB extent 2488 bytes
// country_core::shader::nani::cull_and_bucket_roof_tile::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::nani::cull_and_bucket_roof_tile::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 2488 */

void pdb_14090cc40(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 uVar18;
  undefined2 uVar17;
  
  lVar8 = param_3[3];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x54);
  lVar13 = param_1[0xb];
  uVar15 = *(undefined4 *)((longlong)param_1 + 0x5c);
  uVar4 = param_2[2];
  *(int *)(lVar8 + (ulonglong)uVar4) = (int)param_1[10];
  *(undefined4 *)(lVar8 + (ulonglong)(uVar4 + 4)) = uVar3;
  *(int *)(lVar8 + (ulonglong)(uVar4 + 8)) = (int)lVar13;
  *(undefined4 *)(lVar8 + (ulonglong)(uVar4 + 0xc)) = uVar15;
  plVar9 = (longlong *)*param_3;
  if (plVar9[1] != 0) {
    iVar5 = *param_2;
    iVar6 = param_2[1];
    lVar8 = *param_1;
    uVar3 = *(undefined4 *)(lVar8 + 0x10);
    lVar13 = *plVar9;
    uVar15 = pdb_141764080(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                           lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                           *(undefined8 *)(lVar13 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],uVar3
                           ,0x19,1);
    lVar13 = *plVar9;
    uVar1 = *(undefined8 *)(lVar8 + 8);
    lVar8 = *(longlong *)(lVar13 + 0x100);
    if (lVar8 == *(longlong *)(lVar13 + 0xf0)) {
      pdb_142dbafc0(lVar13 + 0xf0);
    }
    lVar10 = *(longlong *)(lVar13 + 0xf8);
    lVar12 = lVar8 * 0x1c;
    *(undefined4 *)(lVar10 + lVar12) = 4;
    *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
    *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar3;
    *(int *)(lVar10 + 0x10 + lVar12) = iVar5 + 1;
    *(int *)(lVar10 + 0x14 + lVar12) = iVar6;
    *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
    *(longlong *)(lVar13 + 0x100) = lVar8 + 1;
    if (plVar9[1] != 0) {
      lVar8 = param_1[1];
      lVar13 = *plVar9;
      uVar3 = *(undefined4 *)(lVar8 + 0x10);
      uVar15 = pdb_141764730(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                             lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                             *(undefined8 *)(lVar13 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],
                             uVar3,0x3319,*(undefined4 *)(lVar13 + 0x248));
      lVar13 = *plVar9;
      uVar1 = *(undefined8 *)(lVar8 + 8);
      lVar8 = *(longlong *)(lVar13 + 0x100);
      if (lVar8 == *(longlong *)(lVar13 + 0xf0)) {
        pdb_142dbafc0(lVar13 + 0xf0);
      }
      lVar10 = *(longlong *)(lVar13 + 0xf8);
      lVar12 = lVar8 * 0x1c;
      *(undefined4 *)(lVar10 + lVar12) = 3;
      *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
      *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar3;
      *(int *)(lVar10 + 0x10 + lVar12) = iVar5 + 2;
      *(int *)(lVar10 + 0x14 + lVar12) = iVar6;
      *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
      *(longlong *)(lVar13 + 0x100) = lVar8 + 1;
      if (plVar9[1] != 0) {
        lVar8 = param_1[2];
        lVar13 = *plVar9;
        uVar3 = *(undefined4 *)(lVar8 + 0x10);
        uVar15 = pdb_141764730(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                               lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                               *(undefined8 *)(lVar13 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],
                               uVar3,0x3319,*(undefined4 *)(lVar13 + 0x248));
        lVar13 = *plVar9;
        uVar1 = *(undefined8 *)(lVar8 + 8);
        lVar8 = *(longlong *)(lVar13 + 0x100);
        if (lVar8 == *(longlong *)(lVar13 + 0xf0)) {
          pdb_142dbafc0(lVar13 + 0xf0);
        }
        lVar10 = *(longlong *)(lVar13 + 0xf8);
        lVar12 = lVar8 * 0x1c;
        *(undefined4 *)(lVar10 + lVar12) = 3;
        *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
        *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar3;
        *(int *)(lVar10 + 0x10 + lVar12) = iVar5 + 3;
        *(int *)(lVar10 + 0x14 + lVar12) = iVar6;
        *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
        *(longlong *)(lVar13 + 0x100) = lVar8 + 1;
        if (plVar9[1] != 0) {
          lVar8 = param_1[3];
          lVar13 = *plVar9;
          uVar3 = *(undefined4 *)(lVar8 + 0x10);
          uVar15 = pdb_141764730(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                                 lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                                 *(undefined8 *)(lVar13 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2]
                                 ,uVar3,0x3319,*(undefined4 *)(lVar13 + 0x248));
          lVar13 = *plVar9;
          uVar1 = *(undefined8 *)(lVar8 + 8);
          lVar8 = *(longlong *)(lVar13 + 0x100);
          if (lVar8 == *(longlong *)(lVar13 + 0xf0)) {
            pdb_142dbafc0(lVar13 + 0xf0);
          }
          lVar10 = *(longlong *)(lVar13 + 0xf8);
          lVar12 = lVar8 * 0x1c;
          *(undefined4 *)(lVar10 + lVar12) = 3;
          *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
          *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar3;
          *(int *)(lVar10 + 0x10 + lVar12) = iVar5 + 4;
          *(int *)(lVar10 + 0x14 + lVar12) = iVar6;
          *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
          *(longlong *)(lVar13 + 0x100) = lVar8 + 1;
          if (plVar9[1] != 0) {
            lVar8 = param_1[4];
            lVar13 = *plVar9;
            uVar3 = *(undefined4 *)(lVar8 + 0x10);
            uVar18 = 0x33;
            uVar15 = pdb_141764730(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                                   lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                                   *(undefined8 *)(lVar13 + 0x88),(short)plVar9[7],plVar9[1],
                                   plVar9[2],uVar3,0x3319,*(undefined4 *)(lVar13 + 0x248));
            lVar13 = *plVar9;
            uVar1 = *(undefined8 *)(lVar8 + 8);
            lVar8 = *(longlong *)(lVar13 + 0x100);
            if (lVar8 == *(longlong *)(lVar13 + 0xf0)) {
              pdb_142dbafc0(lVar13 + 0xf0);
            }
            lVar10 = *(longlong *)(lVar13 + 0xf8);
            lVar12 = lVar8 * 0x1c;
            *(undefined4 *)(lVar10 + lVar12) = 3;
            *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
            *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar3;
            *(int *)(lVar10 + 0x10 + lVar12) = iVar5 + 5;
            *(int *)(lVar10 + 0x14 + lVar12) = iVar6;
            *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
            *(longlong *)(lVar13 + 0x100) = lVar8 + 1;
            if (plVar9[1] != 0) {
              lVar8 = param_1[5];
              uVar3 = *(undefined4 *)(lVar8 + 0x10);
              lVar13 = *plVar9;
              uVar15 = pdb_141764080(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                                     lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                                     *(undefined8 *)(lVar13 + 0x88),(short)plVar9[7],plVar9[1],
                                     plVar9[2],uVar3,CONCAT11(uVar18,0x19),1);
              lVar13 = *plVar9;
              uVar1 = *(undefined8 *)(lVar8 + 8);
              lVar8 = *(longlong *)(lVar13 + 0x100);
              if (lVar8 == *(longlong *)(lVar13 + 0xf0)) {
                pdb_142dbafc0(lVar13 + 0xf0);
              }
              lVar10 = *(longlong *)(lVar13 + 0xf8);
              lVar12 = lVar8 * 0x1c;
              *(undefined4 *)(lVar10 + lVar12) = 4;
              *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
              *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar3;
              *(int *)(lVar10 + 0x10 + lVar12) = iVar5 + 6;
              *(int *)(lVar10 + 0x14 + lVar12) = iVar6;
              *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
              *(longlong *)(lVar13 + 0x100) = lVar8 + 1;
              if (plVar9[1] != 0) {
                lVar8 = param_1[6];
                lVar13 = *plVar9;
                uVar3 = *(undefined4 *)(lVar8 + 0x10);
                uVar18 = 0x33;
                uVar15 = pdb_141764730(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                                       lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                                       *(undefined8 *)(lVar13 + 0x88),(short)plVar9[7],plVar9[1],
                                       plVar9[2],uVar3,0x3319,*(undefined4 *)(lVar13 + 0x248));
                lVar13 = *plVar9;
                uVar1 = *(undefined8 *)(lVar8 + 8);
                lVar8 = *(longlong *)(lVar13 + 0x100);
                if (lVar8 == *(longlong *)(lVar13 + 0xf0)) {
                  pdb_142dbafc0(lVar13 + 0xf0);
                }
                lVar10 = *(longlong *)(lVar13 + 0xf8);
                lVar12 = lVar8 * 0x1c;
                *(undefined4 *)(lVar10 + lVar12) = 3;
                *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
                *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar3;
                *(int *)(lVar10 + 0x10 + lVar12) = iVar5 + 7;
                *(int *)(lVar10 + 0x14 + lVar12) = iVar6;
                *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
                *(longlong *)(lVar13 + 0x100) = lVar8 + 1;
                if (plVar9[1] != 0) {
                  lVar8 = param_1[7];
                  uVar3 = *(undefined4 *)(lVar8 + 0x10);
                  lVar13 = *plVar9;
                  uVar17 = CONCAT11(uVar18,0x19);
                  uVar15 = pdb_141764080(*(undefined8 *)(lVar13 + 200),
                                         *(undefined8 *)(lVar13 + 0xd0),lVar13 + 0xd8,
                                         *(undefined8 *)(lVar13 + 0x80),
                                         *(undefined8 *)(lVar13 + 0x88),(short)plVar9[7],plVar9[1],
                                         plVar9[2],uVar3,uVar17,1);
                  uVar18 = (undefined1)((ushort)uVar17 >> 8);
                  lVar13 = *plVar9;
                  uVar1 = *(undefined8 *)(lVar8 + 8);
                  lVar8 = *(longlong *)(lVar13 + 0x100);
                  if (lVar8 == *(longlong *)(lVar13 + 0xf0)) {
                    pdb_142dbafc0(lVar13 + 0xf0);
                  }
                  lVar10 = *(longlong *)(lVar13 + 0xf8);
                  lVar12 = lVar8 * 0x1c;
                  *(undefined4 *)(lVar10 + lVar12) = 4;
                  *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
                  *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar3;
                  *(int *)(lVar10 + 0x10 + lVar12) = iVar5 + 8;
                  *(int *)(lVar10 + 0x14 + lVar12) = iVar6;
                  *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
                  *(longlong *)(lVar13 + 0x100) = lVar8 + 1;
                  pbVar11 = (byte *)param_1[8];
                  bVar2 = pbVar11[0x11];
                  uVar14 = 0x19;
                  uVar16 = bVar2 - 0x7c;
                  if ((uVar16 < 7) && ((0x75U >> (uVar16 & 0x1f) & 1) != 0)) {
                    uVar14 = 0x1a;
                  }
                  if (plVar9[1] != 0) {
                    uVar3 = *(undefined4 *)(pbVar11 + 4);
                    lVar8 = *plVar9;
                    uVar17 = CONCAT11(uVar18,uVar14);
                    uVar15 = pdb_141764080(*(undefined8 *)(lVar8 + 200),
                                           *(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8,
                                           *(undefined8 *)(lVar8 + 0x80),
                                           *(undefined8 *)(lVar8 + 0x88),(short)plVar9[7],plVar9[1],
                                           plVar9[2],uVar3,uVar17,1);
                    uVar18 = (undefined1)((ushort)uVar17 >> 8);
                    if (*pbVar11 != bVar2 && *pbVar11 != 0) {
                      pdb_140e2c3a0(*plVar9,pbVar11);
                    }
                    lVar8 = *plVar9;
                    uVar7 = *(undefined4 *)pbVar11;
                    lVar13 = *(longlong *)(lVar8 + 0x100);
                    if (lVar13 == *(longlong *)(lVar8 + 0xf0)) {
                      pdb_142dbafc0(lVar8 + 0xf0);
                    }
                    lVar10 = *(longlong *)(lVar8 + 0xf8);
                    lVar12 = lVar13 * 0x1c;
                    *(undefined4 *)(lVar10 + lVar12) = 0;
                    *(ulonglong *)(lVar10 + 4 + lVar12) = CONCAT44(uVar3,uVar7);
                    *(int *)(lVar10 + 0x10 + lVar12) = iVar5 + 9;
                    *(int *)(lVar10 + 0x14 + lVar12) = iVar6;
                    *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
                    *(longlong *)(lVar8 + 0x100) = lVar13 + 1;
                    *(longlong *)(param_3[1] + (ulonglong)uVar4) = param_1[0xc];
                    if (plVar9[1] != 0) {
                      lVar8 = param_1[9];
                      uVar3 = *(undefined4 *)(lVar8 + 0x10);
                      lVar13 = *plVar9;
                      uVar15 = pdb_141764080(*(undefined8 *)(lVar13 + 200),
                                             *(undefined8 *)(lVar13 + 0xd0),lVar13 + 0xd8,
                                             *(undefined8 *)(lVar13 + 0x80),
                                             *(undefined8 *)(lVar13 + 0x88),(short)plVar9[7],
                                             plVar9[1],plVar9[2],uVar3,CONCAT11(uVar18,0x19),1);
                      lVar13 = *plVar9;
                      uVar1 = *(undefined8 *)(lVar8 + 8);
                      lVar8 = *(longlong *)(lVar13 + 0x100);
                      if (lVar8 == *(longlong *)(lVar13 + 0xf0)) {
                        pdb_142dbafc0(lVar13 + 0xf0);
                      }
                      lVar10 = *(longlong *)(lVar13 + 0xf8);
                      lVar12 = lVar8 * 0x1c;
                      *(undefined4 *)(lVar10 + lVar12) = 4;
                      *(undefined8 *)(lVar10 + 4 + lVar12) = uVar1;
                      *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar3;
                      *(int *)(lVar10 + 0x10 + lVar12) = iVar5 + 10;
                      *(int *)(lVar10 + 0x14 + lVar12) = iVar6;
                      *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
                      *(longlong *)(lVar13 + 0x100) = lVar8 + 1;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

