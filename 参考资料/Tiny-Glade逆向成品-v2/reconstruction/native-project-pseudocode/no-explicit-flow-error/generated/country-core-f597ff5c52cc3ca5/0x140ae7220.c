// VA 0x140ae7220, PDB extent 2966 bytes
// country_core::shader::grass2::card_splat_cull::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::grass2::card_splat_cull::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 2966 */

void pdb_140ae7220(undefined8 *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined2 in_stack_ffffffffffffff70;
  undefined2 uVar19;
  
  lVar7 = param_3[1];
  uVar3 = param_2[2];
  puVar8 = (undefined8 *)param_1[0xb];
  *(ulonglong *)(lVar7 + (ulonglong)(uVar3 + 8)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  param_3 = (longlong *)*param_3;
  pbVar9 = (byte *)*param_1;
  bVar2 = pbVar9[0x11];
  uVar14 = 0x19;
  uVar18 = bVar2 - 0x7c;
  if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
    uVar14 = 0x1a;
  }
  if (param_3[1] != 0) {
    iVar4 = *param_2;
    iVar5 = param_2[1];
    uVar17 = *(undefined4 *)(pbVar9 + 4);
    lVar10 = *param_3;
    uVar19 = CONCAT11((char)((ushort)in_stack_ffffffffffffff70 >> 8),uVar14);
    uVar16 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                           lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                           *(undefined8 *)(lVar10 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                           uVar17,uVar19,1);
    uVar14 = (undefined1)((ushort)uVar19 >> 8);
    if (*pbVar9 != bVar2 && *pbVar9 != 0) {
      pdb_140e2c3a0(*param_3,pbVar9);
    }
    lVar10 = *param_3;
    uVar6 = *(undefined4 *)pbVar9;
    lVar11 = *(longlong *)(lVar10 + 0x100);
    if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
      pdb_142dbafc0(lVar10 + 0xf0);
    }
    lVar12 = *(longlong *)(lVar10 + 0xf8);
    lVar13 = lVar11 * 0x1c;
    *(undefined4 *)(lVar12 + lVar13) = 0;
    *(ulonglong *)(lVar12 + 4 + lVar13) = CONCAT44(uVar17,uVar6);
    *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 1;
    *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
    *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
    *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
    pbVar9 = (byte *)param_1[1];
    bVar2 = pbVar9[0x11];
    uVar15 = 0x19;
    uVar18 = bVar2 - 0x7c;
    if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
      uVar15 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar17 = *(undefined4 *)(pbVar9 + 4);
      lVar10 = *param_3;
      uVar19 = CONCAT11(uVar14,uVar15);
      uVar16 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                             lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                             *(undefined8 *)(lVar10 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                             uVar17,uVar19,1);
      uVar14 = (undefined1)((ushort)uVar19 >> 8);
      if (*pbVar9 != bVar2 && *pbVar9 != 0) {
        pdb_140e2c3a0(*param_3,pbVar9);
      }
      lVar10 = *param_3;
      uVar6 = *(undefined4 *)pbVar9;
      lVar11 = *(longlong *)(lVar10 + 0x100);
      if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
        pdb_142dbafc0(lVar10 + 0xf0);
      }
      lVar12 = *(longlong *)(lVar10 + 0xf8);
      lVar13 = lVar11 * 0x1c;
      *(undefined4 *)(lVar12 + lVar13) = 0;
      *(ulonglong *)(lVar12 + 4 + lVar13) = CONCAT44(uVar17,uVar6);
      *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 2;
      *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
      *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
      *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
      *(undefined8 *)(lVar7 + (ulonglong)uVar3) = param_1[0xc];
      if (param_3[1] != 0) {
        lVar10 = param_1[2];
        uVar17 = *(undefined4 *)(lVar10 + 0x10);
        lVar11 = *param_3;
        uVar19 = CONCAT11(uVar14,0x19);
        uVar16 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                               lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                               *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],
                               param_3[2],uVar17,uVar19,1);
        uVar14 = (undefined1)((ushort)uVar19 >> 8);
        lVar11 = *param_3;
        uVar1 = *(undefined8 *)(lVar10 + 8);
        lVar10 = *(longlong *)(lVar11 + 0x100);
        if (lVar10 == *(longlong *)(lVar11 + 0xf0)) {
          pdb_142dbafc0(lVar11 + 0xf0);
        }
        lVar12 = *(longlong *)(lVar11 + 0xf8);
        lVar13 = lVar10 * 0x1c;
        *(undefined4 *)(lVar12 + lVar13) = 4;
        *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
        *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar17;
        *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 3;
        *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
        *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
        *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
        if (param_3[1] != 0) {
          lVar10 = param_1[3];
          uVar17 = *(undefined4 *)(lVar10 + 0x10);
          lVar11 = *param_3;
          uVar19 = CONCAT11(uVar14,0x19);
          uVar16 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                                 lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                                 *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar17,uVar19,1);
          uVar14 = (undefined1)((ushort)uVar19 >> 8);
          lVar11 = *param_3;
          uVar1 = *(undefined8 *)(lVar10 + 8);
          lVar10 = *(longlong *)(lVar11 + 0x100);
          if (lVar10 == *(longlong *)(lVar11 + 0xf0)) {
            pdb_142dbafc0(lVar11 + 0xf0);
          }
          lVar12 = *(longlong *)(lVar11 + 0xf8);
          lVar13 = lVar10 * 0x1c;
          *(undefined4 *)(lVar12 + lVar13) = 4;
          *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
          *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar17;
          *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 4;
          *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
          *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
          *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
          if (param_3[1] != 0) {
            lVar10 = param_1[4];
            uVar17 = *(undefined4 *)(lVar10 + 0x10);
            lVar11 = *param_3;
            uVar19 = CONCAT11(uVar14,0x19);
            uVar16 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                                   lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                                   *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar17,uVar19,1);
            uVar14 = (undefined1)((ushort)uVar19 >> 8);
            lVar11 = *param_3;
            uVar1 = *(undefined8 *)(lVar10 + 8);
            lVar10 = *(longlong *)(lVar11 + 0x100);
            if (lVar10 == *(longlong *)(lVar11 + 0xf0)) {
              pdb_142dbafc0(lVar11 + 0xf0);
            }
            lVar12 = *(longlong *)(lVar11 + 0xf8);
            lVar13 = lVar10 * 0x1c;
            *(undefined4 *)(lVar12 + lVar13) = 4;
            *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
            *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar17;
            *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 5;
            *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
            *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
            *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
            if (param_3[1] != 0) {
              lVar10 = param_1[5];
              uVar17 = *(undefined4 *)(lVar10 + 0x10);
              lVar11 = *param_3;
              uVar19 = CONCAT11(uVar14,0x19);
              uVar16 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                                     lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                                     *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],uVar17,uVar19,1);
              uVar14 = (undefined1)((ushort)uVar19 >> 8);
              lVar11 = *param_3;
              uVar1 = *(undefined8 *)(lVar10 + 8);
              lVar10 = *(longlong *)(lVar11 + 0x100);
              if (lVar10 == *(longlong *)(lVar11 + 0xf0)) {
                pdb_142dbafc0(lVar11 + 0xf0);
              }
              lVar12 = *(longlong *)(lVar11 + 0xf8);
              lVar13 = lVar10 * 0x1c;
              *(undefined4 *)(lVar12 + lVar13) = 4;
              *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
              *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar17;
              *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 6;
              *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
              *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
              *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
              if (param_3[1] != 0) {
                lVar10 = param_1[6];
                uVar17 = *(undefined4 *)(lVar10 + 0x10);
                lVar11 = *param_3;
                uVar16 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                                       lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                                       *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],
                                       param_3[2],uVar17,CONCAT11(uVar14,0x19),1);
                lVar11 = *param_3;
                uVar1 = *(undefined8 *)(lVar10 + 8);
                lVar10 = *(longlong *)(lVar11 + 0x100);
                if (lVar10 == *(longlong *)(lVar11 + 0xf0)) {
                  pdb_142dbafc0(lVar11 + 0xf0);
                }
                lVar12 = *(longlong *)(lVar11 + 0xf8);
                lVar13 = lVar10 * 0x1c;
                *(undefined4 *)(lVar12 + lVar13) = 4;
                *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
                *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar17;
                *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 7;
                *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
                *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
                *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
                if (param_3[1] != 0) {
                  lVar10 = param_1[7];
                  lVar11 = *param_3;
                  uVar17 = *(undefined4 *)(lVar10 + 0x10);
                  uVar16 = pdb_141764730(*(undefined8 *)(lVar11 + 200),
                                         *(undefined8 *)(lVar11 + 0xd0),lVar11 + 0xd8,
                                         *(undefined8 *)(lVar11 + 0x80),
                                         *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1]
                                         ,param_3[2],uVar17,0x3319,*(undefined4 *)(lVar11 + 0x248));
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
                  *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar17;
                  *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 8;
                  *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
                  *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
                  *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
                  if (param_3[1] != 0) {
                    lVar10 = param_1[8];
                    lVar11 = *param_3;
                    uVar17 = *(undefined4 *)(lVar10 + 0x10);
                    uVar16 = pdb_141764730(*(undefined8 *)(lVar11 + 200),
                                           *(undefined8 *)(lVar11 + 0xd0),lVar11 + 0xd8,
                                           *(undefined8 *)(lVar11 + 0x80),
                                           *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],
                                           param_3[1],param_3[2],uVar17,0x3319,
                                           *(undefined4 *)(lVar11 + 0x248));
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
                    *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar17;
                    *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 9;
                    *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
                    *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
                    *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
                    if (param_3[1] != 0) {
                      lVar10 = param_1[9];
                      lVar11 = *param_3;
                      uVar17 = *(undefined4 *)(lVar10 + 0x10);
                      uVar16 = pdb_141764730(*(undefined8 *)(lVar11 + 200),
                                             *(undefined8 *)(lVar11 + 0xd0),lVar11 + 0xd8,
                                             *(undefined8 *)(lVar11 + 0x80),
                                             *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],
                                             param_3[1],param_3[2],uVar17,0x3319,
                                             *(undefined4 *)(lVar11 + 0x248));
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
                      *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar17;
                      *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 10;
                      *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
                      *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
                      *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
                      if (param_3[1] != 0) {
                        lVar10 = param_1[10];
                        lVar11 = *param_3;
                        uVar17 = *(undefined4 *)(lVar10 + 0x10);
                        uVar16 = pdb_141764730(*(undefined8 *)(lVar11 + 200),
                                               *(undefined8 *)(lVar11 + 0xd0),lVar11 + 0xd8,
                                               *(undefined8 *)(lVar11 + 0x80),
                                               *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],
                                               param_3[1],param_3[2],uVar17,0x3319,
                                               *(undefined4 *)(lVar11 + 0x248));
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
                        *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar17;
                        *(int *)(lVar12 + 0x10 + lVar13) = iVar4 + 0xb;
                        *(int *)(lVar12 + 0x14 + lVar13) = iVar5;
                        *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
                        *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
                        *(undefined8 *)(lVar7 + (ulonglong)(uVar3 + 0x10)) = param_1[0xd];
                        if (param_3[1] != 0) {
                          lVar7 = *param_3;
                          uVar1 = *puVar8;
                          uVar17 = pdb_141764730(*(undefined8 *)(lVar7 + 200),
                                                 *(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8,
                                                 *(undefined8 *)(lVar7 + 0x80),
                                                 *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],
                                                 param_3[1],param_3[2],
                                                 (int)((ulonglong)uVar1 >> 0x20),0x3319,
                                                 *(undefined4 *)(lVar7 + 0x248));
                          lVar7 = *param_3;
                          lVar10 = *(longlong *)(lVar7 + 0x100);
                          if (lVar10 == *(longlong *)(lVar7 + 0xf0)) {
                            pdb_142dbafc0(lVar7 + 0xf0);
                          }
                          lVar11 = *(longlong *)(lVar7 + 0xf8);
                          lVar12 = lVar10 * 0x1c;
                          *(undefined4 *)(lVar11 + lVar12) = 1;
                          *(undefined8 *)(lVar11 + 4 + lVar12) = uVar1;
                          *(int *)(lVar11 + 0x10 + lVar12) = iVar4 + 0xc;
                          *(int *)(lVar11 + 0x14 + lVar12) = iVar5;
                          *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar17;
                          *(longlong *)(lVar7 + 0x100) = lVar10 + 1;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

