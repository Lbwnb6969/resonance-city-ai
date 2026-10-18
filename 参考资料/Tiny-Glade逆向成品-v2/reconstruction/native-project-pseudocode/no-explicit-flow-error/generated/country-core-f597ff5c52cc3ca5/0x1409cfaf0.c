// VA 0x1409cfaf0, PDB extent 2448 bytes
// country_core::shader::nani::cull_and_bucket_smoke::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::nani::cull_and_bucket_smoke::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 2448 */

void pdb_1409cfaf0(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 uVar18;
  undefined2 uVar17;
  
  plVar8 = (longlong *)*param_3;
  lVar9 = param_3[3];
  lVar12 = param_1[0xb];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x5c);
  lVar13 = param_1[0xc];
  uVar4 = param_2[2];
  *(longlong *)(lVar9 + (ulonglong)uVar4) = param_1[10];
  *(int *)(lVar9 + (ulonglong)(uVar4 + 8)) = (int)lVar12;
  *(undefined4 *)(lVar9 + (ulonglong)(uVar4 + 0xc)) = uVar3;
  *(int *)(lVar9 + (ulonglong)(uVar4 + 0x10)) = (int)lVar13;
  if (plVar8[1] != 0) {
    iVar5 = *param_2;
    iVar6 = param_2[1];
    lVar9 = *param_1;
    uVar3 = *(undefined4 *)(lVar9 + 0x10);
    lVar12 = *plVar8;
    uVar15 = pdb_141764080(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                           lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                           *(undefined8 *)(lVar12 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2],uVar3
                           ,0x19,1);
    lVar12 = *plVar8;
    uVar1 = *(undefined8 *)(lVar9 + 8);
    lVar9 = *(longlong *)(lVar12 + 0x100);
    if (lVar9 == *(longlong *)(lVar12 + 0xf0)) {
      pdb_142dbafc0(lVar12 + 0xf0);
    }
    lVar13 = *(longlong *)(lVar12 + 0xf8);
    lVar11 = lVar9 * 0x1c;
    *(undefined4 *)(lVar13 + lVar11) = 4;
    *(undefined8 *)(lVar13 + 4 + lVar11) = uVar1;
    *(undefined4 *)(lVar13 + 0xc + lVar11) = uVar3;
    *(int *)(lVar13 + 0x10 + lVar11) = iVar5 + 1;
    *(int *)(lVar13 + 0x14 + lVar11) = iVar6;
    *(undefined4 *)(lVar13 + 0x18 + lVar11) = uVar15;
    *(longlong *)(lVar12 + 0x100) = lVar9 + 1;
    if (plVar8[1] != 0) {
      lVar9 = param_1[1];
      lVar12 = *plVar8;
      uVar3 = *(undefined4 *)(lVar9 + 0x10);
      uVar15 = pdb_141764730(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                             lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                             *(undefined8 *)(lVar12 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2],
                             uVar3,0x3319,*(undefined4 *)(lVar12 + 0x248));
      lVar12 = *plVar8;
      uVar1 = *(undefined8 *)(lVar9 + 8);
      lVar9 = *(longlong *)(lVar12 + 0x100);
      if (lVar9 == *(longlong *)(lVar12 + 0xf0)) {
        pdb_142dbafc0(lVar12 + 0xf0);
      }
      lVar13 = *(longlong *)(lVar12 + 0xf8);
      lVar11 = lVar9 * 0x1c;
      *(undefined4 *)(lVar13 + lVar11) = 3;
      *(undefined8 *)(lVar13 + 4 + lVar11) = uVar1;
      *(undefined4 *)(lVar13 + 0xc + lVar11) = uVar3;
      *(int *)(lVar13 + 0x10 + lVar11) = iVar5 + 2;
      *(int *)(lVar13 + 0x14 + lVar11) = iVar6;
      *(undefined4 *)(lVar13 + 0x18 + lVar11) = uVar15;
      *(longlong *)(lVar12 + 0x100) = lVar9 + 1;
      if (plVar8[1] != 0) {
        lVar9 = param_1[2];
        lVar12 = *plVar8;
        uVar3 = *(undefined4 *)(lVar9 + 0x10);
        uVar15 = pdb_141764730(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                               lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                               *(undefined8 *)(lVar12 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2],
                               uVar3,0x3319,*(undefined4 *)(lVar12 + 0x248));
        lVar12 = *plVar8;
        uVar1 = *(undefined8 *)(lVar9 + 8);
        lVar9 = *(longlong *)(lVar12 + 0x100);
        if (lVar9 == *(longlong *)(lVar12 + 0xf0)) {
          pdb_142dbafc0(lVar12 + 0xf0);
        }
        lVar13 = *(longlong *)(lVar12 + 0xf8);
        lVar11 = lVar9 * 0x1c;
        *(undefined4 *)(lVar13 + lVar11) = 3;
        *(undefined8 *)(lVar13 + 4 + lVar11) = uVar1;
        *(undefined4 *)(lVar13 + 0xc + lVar11) = uVar3;
        *(int *)(lVar13 + 0x10 + lVar11) = iVar5 + 3;
        *(int *)(lVar13 + 0x14 + lVar11) = iVar6;
        *(undefined4 *)(lVar13 + 0x18 + lVar11) = uVar15;
        *(longlong *)(lVar12 + 0x100) = lVar9 + 1;
        if (plVar8[1] != 0) {
          lVar9 = param_1[3];
          lVar12 = *plVar8;
          uVar3 = *(undefined4 *)(lVar9 + 0x10);
          uVar15 = pdb_141764730(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                                 lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                                 *(undefined8 *)(lVar12 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2]
                                 ,uVar3,0x3319,*(undefined4 *)(lVar12 + 0x248));
          lVar12 = *plVar8;
          uVar1 = *(undefined8 *)(lVar9 + 8);
          lVar9 = *(longlong *)(lVar12 + 0x100);
          if (lVar9 == *(longlong *)(lVar12 + 0xf0)) {
            pdb_142dbafc0(lVar12 + 0xf0);
          }
          lVar13 = *(longlong *)(lVar12 + 0xf8);
          lVar11 = lVar9 * 0x1c;
          *(undefined4 *)(lVar13 + lVar11) = 3;
          *(undefined8 *)(lVar13 + 4 + lVar11) = uVar1;
          *(undefined4 *)(lVar13 + 0xc + lVar11) = uVar3;
          *(int *)(lVar13 + 0x10 + lVar11) = iVar5 + 4;
          *(int *)(lVar13 + 0x14 + lVar11) = iVar6;
          *(undefined4 *)(lVar13 + 0x18 + lVar11) = uVar15;
          *(longlong *)(lVar12 + 0x100) = lVar9 + 1;
          if (plVar8[1] != 0) {
            lVar9 = param_1[4];
            lVar12 = *plVar8;
            uVar3 = *(undefined4 *)(lVar9 + 0x10);
            uVar18 = 0x33;
            uVar15 = pdb_141764730(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                                   lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                                   *(undefined8 *)(lVar12 + 0x88),(short)plVar8[7],plVar8[1],
                                   plVar8[2],uVar3,0x3319,*(undefined4 *)(lVar12 + 0x248));
            lVar12 = *plVar8;
            uVar1 = *(undefined8 *)(lVar9 + 8);
            lVar9 = *(longlong *)(lVar12 + 0x100);
            if (lVar9 == *(longlong *)(lVar12 + 0xf0)) {
              pdb_142dbafc0(lVar12 + 0xf0);
            }
            lVar13 = *(longlong *)(lVar12 + 0xf8);
            lVar11 = lVar9 * 0x1c;
            *(undefined4 *)(lVar13 + lVar11) = 3;
            *(undefined8 *)(lVar13 + 4 + lVar11) = uVar1;
            *(undefined4 *)(lVar13 + 0xc + lVar11) = uVar3;
            *(int *)(lVar13 + 0x10 + lVar11) = iVar5 + 5;
            *(int *)(lVar13 + 0x14 + lVar11) = iVar6;
            *(undefined4 *)(lVar13 + 0x18 + lVar11) = uVar15;
            *(longlong *)(lVar12 + 0x100) = lVar9 + 1;
            if (plVar8[1] != 0) {
              lVar9 = param_1[5];
              uVar3 = *(undefined4 *)(lVar9 + 0x10);
              lVar12 = *plVar8;
              uVar15 = pdb_141764080(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                                     lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                                     *(undefined8 *)(lVar12 + 0x88),(short)plVar8[7],plVar8[1],
                                     plVar8[2],uVar3,CONCAT11(uVar18,0x19),1);
              lVar12 = *plVar8;
              uVar1 = *(undefined8 *)(lVar9 + 8);
              lVar9 = *(longlong *)(lVar12 + 0x100);
              if (lVar9 == *(longlong *)(lVar12 + 0xf0)) {
                pdb_142dbafc0(lVar12 + 0xf0);
              }
              lVar13 = *(longlong *)(lVar12 + 0xf8);
              lVar11 = lVar9 * 0x1c;
              *(undefined4 *)(lVar13 + lVar11) = 4;
              *(undefined8 *)(lVar13 + 4 + lVar11) = uVar1;
              *(undefined4 *)(lVar13 + 0xc + lVar11) = uVar3;
              *(int *)(lVar13 + 0x10 + lVar11) = iVar5 + 6;
              *(int *)(lVar13 + 0x14 + lVar11) = iVar6;
              *(undefined4 *)(lVar13 + 0x18 + lVar11) = uVar15;
              *(longlong *)(lVar12 + 0x100) = lVar9 + 1;
              if (plVar8[1] != 0) {
                lVar9 = param_1[6];
                lVar12 = *plVar8;
                uVar3 = *(undefined4 *)(lVar9 + 0x10);
                uVar18 = 0x33;
                uVar15 = pdb_141764730(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                                       lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                                       *(undefined8 *)(lVar12 + 0x88),(short)plVar8[7],plVar8[1],
                                       plVar8[2],uVar3,0x3319,*(undefined4 *)(lVar12 + 0x248));
                lVar12 = *plVar8;
                uVar1 = *(undefined8 *)(lVar9 + 8);
                lVar9 = *(longlong *)(lVar12 + 0x100);
                if (lVar9 == *(longlong *)(lVar12 + 0xf0)) {
                  pdb_142dbafc0(lVar12 + 0xf0);
                }
                lVar13 = *(longlong *)(lVar12 + 0xf8);
                lVar11 = lVar9 * 0x1c;
                *(undefined4 *)(lVar13 + lVar11) = 3;
                *(undefined8 *)(lVar13 + 4 + lVar11) = uVar1;
                *(undefined4 *)(lVar13 + 0xc + lVar11) = uVar3;
                *(int *)(lVar13 + 0x10 + lVar11) = iVar5 + 7;
                *(int *)(lVar13 + 0x14 + lVar11) = iVar6;
                *(undefined4 *)(lVar13 + 0x18 + lVar11) = uVar15;
                *(longlong *)(lVar12 + 0x100) = lVar9 + 1;
                if (plVar8[1] != 0) {
                  lVar9 = param_1[7];
                  uVar3 = *(undefined4 *)(lVar9 + 0x10);
                  lVar12 = *plVar8;
                  uVar17 = CONCAT11(uVar18,0x19);
                  uVar15 = pdb_141764080(*(undefined8 *)(lVar12 + 200),
                                         *(undefined8 *)(lVar12 + 0xd0),lVar12 + 0xd8,
                                         *(undefined8 *)(lVar12 + 0x80),
                                         *(undefined8 *)(lVar12 + 0x88),(short)plVar8[7],plVar8[1],
                                         plVar8[2],uVar3,uVar17,1);
                  uVar18 = (undefined1)((ushort)uVar17 >> 8);
                  lVar12 = *plVar8;
                  uVar1 = *(undefined8 *)(lVar9 + 8);
                  lVar9 = *(longlong *)(lVar12 + 0x100);
                  if (lVar9 == *(longlong *)(lVar12 + 0xf0)) {
                    pdb_142dbafc0(lVar12 + 0xf0);
                  }
                  lVar13 = *(longlong *)(lVar12 + 0xf8);
                  lVar11 = lVar9 * 0x1c;
                  *(undefined4 *)(lVar13 + lVar11) = 4;
                  *(undefined8 *)(lVar13 + 4 + lVar11) = uVar1;
                  *(undefined4 *)(lVar13 + 0xc + lVar11) = uVar3;
                  *(int *)(lVar13 + 0x10 + lVar11) = iVar5 + 8;
                  *(int *)(lVar13 + 0x14 + lVar11) = iVar6;
                  *(undefined4 *)(lVar13 + 0x18 + lVar11) = uVar15;
                  *(longlong *)(lVar12 + 0x100) = lVar9 + 1;
                  pbVar10 = (byte *)param_1[8];
                  bVar2 = pbVar10[0x11];
                  uVar14 = 0x19;
                  uVar16 = bVar2 - 0x7c;
                  if ((uVar16 < 7) && ((0x75U >> (uVar16 & 0x1f) & 1) != 0)) {
                    uVar14 = 0x1a;
                  }
                  if (plVar8[1] != 0) {
                    uVar3 = *(undefined4 *)(pbVar10 + 4);
                    lVar9 = *plVar8;
                    uVar17 = CONCAT11(uVar18,uVar14);
                    uVar15 = pdb_141764080(*(undefined8 *)(lVar9 + 200),
                                           *(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8,
                                           *(undefined8 *)(lVar9 + 0x80),
                                           *(undefined8 *)(lVar9 + 0x88),(short)plVar8[7],plVar8[1],
                                           plVar8[2],uVar3,uVar17,1);
                    uVar18 = (undefined1)((ushort)uVar17 >> 8);
                    if (*pbVar10 != bVar2 && *pbVar10 != 0) {
                      pdb_140e2c3a0(*plVar8,pbVar10);
                    }
                    lVar9 = *plVar8;
                    uVar7 = *(undefined4 *)pbVar10;
                    lVar12 = *(longlong *)(lVar9 + 0x100);
                    if (lVar12 == *(longlong *)(lVar9 + 0xf0)) {
                      pdb_142dbafc0(lVar9 + 0xf0);
                    }
                    lVar13 = *(longlong *)(lVar9 + 0xf8);
                    lVar11 = lVar12 * 0x1c;
                    *(undefined4 *)(lVar13 + lVar11) = 0;
                    *(ulonglong *)(lVar13 + 4 + lVar11) = CONCAT44(uVar3,uVar7);
                    *(int *)(lVar13 + 0x10 + lVar11) = iVar5 + 9;
                    *(int *)(lVar13 + 0x14 + lVar11) = iVar6;
                    *(undefined4 *)(lVar13 + 0x18 + lVar11) = uVar15;
                    *(longlong *)(lVar9 + 0x100) = lVar12 + 1;
                    *(longlong *)(param_3[1] + (ulonglong)uVar4) = param_1[0xd];
                    if (plVar8[1] != 0) {
                      lVar9 = param_1[9];
                      uVar3 = *(undefined4 *)(lVar9 + 0x10);
                      lVar12 = *plVar8;
                      uVar15 = pdb_141764080(*(undefined8 *)(lVar12 + 200),
                                             *(undefined8 *)(lVar12 + 0xd0),lVar12 + 0xd8,
                                             *(undefined8 *)(lVar12 + 0x80),
                                             *(undefined8 *)(lVar12 + 0x88),(short)plVar8[7],
                                             plVar8[1],plVar8[2],uVar3,CONCAT11(uVar18,0x19),1);
                      lVar12 = *plVar8;
                      uVar1 = *(undefined8 *)(lVar9 + 8);
                      lVar9 = *(longlong *)(lVar12 + 0x100);
                      if (lVar9 == *(longlong *)(lVar12 + 0xf0)) {
                        pdb_142dbafc0(lVar12 + 0xf0);
                      }
                      lVar13 = *(longlong *)(lVar12 + 0xf8);
                      lVar11 = lVar9 * 0x1c;
                      *(undefined4 *)(lVar13 + lVar11) = 4;
                      *(undefined8 *)(lVar13 + 4 + lVar11) = uVar1;
                      *(undefined4 *)(lVar13 + 0xc + lVar11) = uVar3;
                      *(int *)(lVar13 + 0x10 + lVar11) = iVar5 + 10;
                      *(int *)(lVar13 + 0x14 + lVar11) = iVar6;
                      *(undefined4 *)(lVar13 + 0x18 + lVar11) = uVar15;
                      *(longlong *)(lVar12 + 0x100) = lVar9 + 1;
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

