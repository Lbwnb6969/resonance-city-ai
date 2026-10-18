// VA 0x1410e09c0, PDB extent 3106 bytes
// rhapsody_taa::shader::tgsr::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-taa-5a949506baf937d7/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_taa::shader::tgsr::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-taa-5a949506baf937d7/out/shabriri.rs
   Extent: 3106 */

void pdb_1410e09c0(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  undefined2 in_stack_ffffffffffffff50;
  undefined2 uVar27;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)*param_1;
  uVar26 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar26) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  pbVar7 = (byte *)param_1[1];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar26 + 8)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  pbVar8 = (byte *)param_1[2];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar26 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  pbVar9 = (byte *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar26 + 0x18)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  pbVar10 = (byte *)param_1[6];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar26 + 0x20)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  puVar11 = (undefined8 *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar26 + 0x48)) =
       (ulonglong)*(ushort *)((longlong)puVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar11 + 1);
  pbVar12 = (byte *)param_1[8];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar26 + 0x28)) =
       (ulonglong)*(ushort *)(pbVar12 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar12 + 8);
  puVar13 = (undefined8 *)param_1[5];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar26 + 0x40)) =
       (ulonglong)*(ushort *)((longlong)puVar13 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar13 + 1);
  pbVar14 = (byte *)param_1[9];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar26 + 0x30)) =
       (ulonglong)*(ushort *)(pbVar14 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar14 + 8);
  puVar15 = (undefined8 *)param_1[7];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar26 + 0x38)) =
       (ulonglong)*(ushort *)((longlong)puVar15 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar15 + 1);
  *(undefined4 *)(lVar5 + (ulonglong)(uVar26 + 0x58)) = *(undefined4 *)(param_1 + 10);
  param_3 = (longlong *)*param_3;
  uVar21 = 0x19;
  bVar1 = pbVar6[0x11];
  uVar25 = bVar1 - 0x7c;
  if ((uVar25 < 7) && ((0x75U >> (uVar25 & 0x1f) & 1) != 0)) {
    uVar21 = 0x1a;
  }
  if (param_3[1] != 0) {
    uVar24 = *(undefined4 *)(pbVar6 + 4);
    lVar16 = *param_3;
    uVar27 = CONCAT11((char)((ushort)in_stack_ffffffffffffff50 >> 8),uVar21);
    uVar23 = pdb_1410dd4f0(*(undefined8 *)(lVar16 + 200),*(undefined8 *)(lVar16 + 0xd0),
                           lVar16 + 0xd8,*(undefined8 *)(lVar16 + 0x80),
                           *(undefined8 *)(lVar16 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                           uVar24,uVar27,1);
    uVar21 = (undefined1)((ushort)uVar27 >> 8);
    if (*pbVar6 != bVar1 && *pbVar6 != 0) {
      pdb_140e2c3a0(*param_3,pbVar6);
    }
    lVar16 = *param_3;
    uVar4 = *(undefined4 *)pbVar6;
    lVar17 = *(longlong *)(lVar16 + 0x100);
    if (lVar17 == *(longlong *)(lVar16 + 0xf0)) {
      pdb_142dbafc0(lVar16 + 0xf0);
    }
    lVar18 = *(longlong *)(lVar16 + 0xf8);
    lVar20 = lVar17 * 0x1c;
    *(undefined4 *)(lVar18 + lVar20) = 0;
    *(ulonglong *)(lVar18 + 4 + lVar20) = CONCAT44(uVar24,uVar4);
    *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 1;
    *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
    *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar23;
    *(longlong *)(lVar16 + 0x100) = lVar17 + 1;
    *(undefined4 *)(lVar5 + (ulonglong)(uVar26 + 0x54)) = *(undefined4 *)((longlong)param_1 + 0x54);
    bVar1 = pbVar7[0x11];
    uVar22 = 0x19;
    uVar25 = bVar1 - 0x7c;
    if ((uVar25 < 7) && ((0x75U >> (uVar25 & 0x1f) & 1) != 0)) {
      uVar22 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar24 = *(undefined4 *)(pbVar7 + 4);
      lVar16 = *param_3;
      uVar27 = CONCAT11(uVar21,uVar22);
      uVar23 = pdb_1410dd4f0(*(undefined8 *)(lVar16 + 200),*(undefined8 *)(lVar16 + 0xd0),
                             lVar16 + 0xd8,*(undefined8 *)(lVar16 + 0x80),
                             *(undefined8 *)(lVar16 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                             uVar24,uVar27,1);
      uVar21 = (undefined1)((ushort)uVar27 >> 8);
      if (*pbVar7 != bVar1 && *pbVar7 != 0) {
        pdb_140e2c3a0(*param_3,pbVar7);
      }
      lVar16 = *param_3;
      uVar4 = *(undefined4 *)pbVar7;
      lVar17 = *(longlong *)(lVar16 + 0x100);
      if (lVar17 == *(longlong *)(lVar16 + 0xf0)) {
        pdb_142dbafc0(lVar16 + 0xf0);
      }
      lVar18 = *(longlong *)(lVar16 + 0xf8);
      lVar20 = lVar17 * 0x1c;
      *(undefined4 *)(lVar18 + lVar20) = 0;
      *(ulonglong *)(lVar18 + 4 + lVar20) = CONCAT44(uVar24,uVar4);
      *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 2;
      *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
      *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar23;
      *(longlong *)(lVar16 + 0x100) = lVar17 + 1;
      *(undefined1 *)(lVar5 + (ulonglong)(uVar26 + 0x50)) =
           *(undefined1 *)((longlong)param_1 + 0x5a);
      bVar1 = pbVar8[0x11];
      uVar22 = 0x19;
      uVar26 = bVar1 - 0x7c;
      if ((uVar26 < 7) && ((0x75U >> (uVar26 & 0x1f) & 1) != 0)) {
        uVar22 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar24 = *(undefined4 *)(pbVar8 + 4);
        lVar5 = *param_3;
        uVar23 = pdb_1410dd4f0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar24,CONCAT11(uVar21,uVar22),1);
        if (*pbVar8 != bVar1 && *pbVar8 != 0) {
          pdb_140e2c3a0(*param_3,pbVar8);
        }
        lVar5 = *param_3;
        uVar4 = *(undefined4 *)pbVar8;
        lVar16 = *(longlong *)(lVar5 + 0x100);
        if (lVar16 == *(longlong *)(lVar5 + 0xf0)) {
          pdb_142dbafc0(lVar5 + 0xf0);
        }
        lVar17 = *(longlong *)(lVar5 + 0xf8);
        lVar18 = lVar16 * 0x1c;
        *(undefined4 *)(lVar17 + lVar18) = 0;
        *(ulonglong *)(lVar17 + 4 + lVar18) = CONCAT44(uVar24,uVar4);
        *(int *)(lVar17 + 0x10 + lVar18) = iVar2 + 3;
        *(int *)(lVar17 + 0x14 + lVar18) = iVar3;
        *(undefined4 *)(lVar17 + 0x18 + lVar18) = uVar23;
        *(longlong *)(lVar5 + 0x100) = lVar16 + 1;
        if (param_3[1] != 0) {
          lVar5 = *param_3;
          uVar19 = *puVar11;
          uVar21 = 0x33;
          uVar24 = pdb_1410dd1c0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],(int)((ulonglong)uVar19 >> 0x20),0x3319,
                                 *(undefined4 *)(lVar5 + 0x248));
          lVar5 = *param_3;
          lVar16 = *(longlong *)(lVar5 + 0x100);
          if (lVar16 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar17 = *(longlong *)(lVar5 + 0xf8);
          lVar18 = lVar16 * 0x1c;
          *(undefined4 *)(lVar17 + lVar18) = 1;
          *(undefined8 *)(lVar17 + 4 + lVar18) = uVar19;
          *(int *)(lVar17 + 0x10 + lVar18) = iVar2 + 10;
          *(int *)(lVar17 + 0x14 + lVar18) = iVar3;
          *(undefined4 *)(lVar17 + 0x18 + lVar18) = uVar24;
          *(longlong *)(lVar5 + 0x100) = lVar16 + 1;
          bVar1 = pbVar9[0x11];
          uVar22 = 0x19;
          uVar26 = bVar1 - 0x7c;
          if ((uVar26 < 7) && ((0x75U >> (uVar26 & 0x1f) & 1) != 0)) {
            uVar22 = 0x1a;
          }
          if (param_3[1] != 0) {
            uVar24 = *(undefined4 *)(pbVar9 + 4);
            lVar5 = *param_3;
            uVar23 = pdb_1410dd4f0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar24,CONCAT11(uVar21,uVar22),1);
            if (*pbVar9 != bVar1 && *pbVar9 != 0) {
              pdb_140e2c3a0(*param_3,pbVar9);
            }
            lVar5 = *param_3;
            uVar4 = *(undefined4 *)pbVar9;
            lVar16 = *(longlong *)(lVar5 + 0x100);
            if (lVar16 == *(longlong *)(lVar5 + 0xf0)) {
              pdb_142dbafc0(lVar5 + 0xf0);
            }
            lVar17 = *(longlong *)(lVar5 + 0xf8);
            lVar18 = lVar16 * 0x1c;
            *(undefined4 *)(lVar17 + lVar18) = 0;
            *(ulonglong *)(lVar17 + 4 + lVar18) = CONCAT44(uVar24,uVar4);
            *(int *)(lVar17 + 0x10 + lVar18) = iVar2 + 4;
            *(int *)(lVar17 + 0x14 + lVar18) = iVar3;
            *(undefined4 *)(lVar17 + 0x18 + lVar18) = uVar23;
            *(longlong *)(lVar5 + 0x100) = lVar16 + 1;
            if (param_3[1] != 0) {
              lVar5 = *param_3;
              uVar19 = *puVar13;
              uVar21 = 0x33;
              uVar24 = pdb_1410dd1c0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                     lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                     *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],(int)((ulonglong)uVar19 >> 0x20),0x3319,
                                     *(undefined4 *)(lVar5 + 0x248));
              lVar5 = *param_3;
              lVar16 = *(longlong *)(lVar5 + 0x100);
              if (lVar16 == *(longlong *)(lVar5 + 0xf0)) {
                pdb_142dbafc0(lVar5 + 0xf0);
              }
              lVar17 = *(longlong *)(lVar5 + 0xf8);
              lVar18 = lVar16 * 0x1c;
              *(undefined4 *)(lVar17 + lVar18) = 1;
              *(undefined8 *)(lVar17 + 4 + lVar18) = uVar19;
              *(int *)(lVar17 + 0x10 + lVar18) = iVar2 + 9;
              *(int *)(lVar17 + 0x14 + lVar18) = iVar3;
              *(undefined4 *)(lVar17 + 0x18 + lVar18) = uVar24;
              *(longlong *)(lVar5 + 0x100) = lVar16 + 1;
              bVar1 = pbVar10[0x11];
              uVar22 = 0x19;
              uVar26 = bVar1 - 0x7c;
              if ((uVar26 < 7) && ((0x75U >> (uVar26 & 0x1f) & 1) != 0)) {
                uVar22 = 0x1a;
              }
              if (param_3[1] != 0) {
                uVar24 = *(undefined4 *)(pbVar10 + 4);
                lVar5 = *param_3;
                uVar23 = pdb_1410dd4f0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                       lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                       *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                       param_3[2],uVar24,CONCAT11(uVar21,uVar22),1);
                if (*pbVar10 != bVar1 && *pbVar10 != 0) {
                  pdb_140e2c3a0(*param_3,pbVar10);
                }
                lVar5 = *param_3;
                uVar4 = *(undefined4 *)pbVar10;
                lVar16 = *(longlong *)(lVar5 + 0x100);
                if (lVar16 == *(longlong *)(lVar5 + 0xf0)) {
                  pdb_142dbafc0(lVar5 + 0xf0);
                }
                lVar17 = *(longlong *)(lVar5 + 0xf8);
                lVar18 = lVar16 * 0x1c;
                *(undefined4 *)(lVar17 + lVar18) = 0;
                *(ulonglong *)(lVar17 + 4 + lVar18) = CONCAT44(uVar24,uVar4);
                *(int *)(lVar17 + 0x10 + lVar18) = iVar2 + 5;
                *(int *)(lVar17 + 0x14 + lVar18) = iVar3;
                *(undefined4 *)(lVar17 + 0x18 + lVar18) = uVar23;
                *(longlong *)(lVar5 + 0x100) = lVar16 + 1;
                if (param_3[1] != 0) {
                  lVar5 = *param_3;
                  uVar19 = *puVar15;
                  uVar21 = 0x33;
                  uVar24 = pdb_1410dd1c0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                         lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                         *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                         param_3[2],(int)((ulonglong)uVar19 >> 0x20),0x3319,
                                         *(undefined4 *)(lVar5 + 0x248));
                  lVar5 = *param_3;
                  lVar16 = *(longlong *)(lVar5 + 0x100);
                  if (lVar16 == *(longlong *)(lVar5 + 0xf0)) {
                    pdb_142dbafc0(lVar5 + 0xf0);
                  }
                  lVar17 = *(longlong *)(lVar5 + 0xf8);
                  lVar18 = lVar16 * 0x1c;
                  *(undefined4 *)(lVar17 + lVar18) = 1;
                  *(undefined8 *)(lVar17 + 4 + lVar18) = uVar19;
                  *(int *)(lVar17 + 0x10 + lVar18) = iVar2 + 8;
                  *(int *)(lVar17 + 0x14 + lVar18) = iVar3;
                  *(undefined4 *)(lVar17 + 0x18 + lVar18) = uVar24;
                  *(longlong *)(lVar5 + 0x100) = lVar16 + 1;
                  bVar1 = pbVar12[0x11];
                  uVar22 = 0x19;
                  uVar26 = bVar1 - 0x7c;
                  if ((uVar26 < 7) && ((0x75U >> (uVar26 & 0x1f) & 1) != 0)) {
                    uVar22 = 0x1a;
                  }
                  if (param_3[1] != 0) {
                    uVar24 = *(undefined4 *)(pbVar12 + 4);
                    lVar5 = *param_3;
                    uVar27 = CONCAT11(uVar21,uVar22);
                    uVar23 = pdb_1410dd4f0(*(undefined8 *)(lVar5 + 200),
                                           *(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                                           *(undefined8 *)(lVar5 + 0x80),
                                           *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],
                                           param_3[1],param_3[2],uVar24,uVar27,1);
                    uVar21 = (undefined1)((ushort)uVar27 >> 8);
                    if (*pbVar12 != bVar1 && *pbVar12 != 0) {
                      pdb_140e2c3a0(*param_3,pbVar12);
                    }
                    lVar5 = *param_3;
                    uVar4 = *(undefined4 *)pbVar12;
                    lVar16 = *(longlong *)(lVar5 + 0x100);
                    if (lVar16 == *(longlong *)(lVar5 + 0xf0)) {
                      pdb_142dbafc0(lVar5 + 0xf0);
                    }
                    lVar17 = *(longlong *)(lVar5 + 0xf8);
                    lVar18 = lVar16 * 0x1c;
                    *(undefined4 *)(lVar17 + lVar18) = 0;
                    *(ulonglong *)(lVar17 + 4 + lVar18) = CONCAT44(uVar24,uVar4);
                    *(int *)(lVar17 + 0x10 + lVar18) = iVar2 + 6;
                    *(int *)(lVar17 + 0x14 + lVar18) = iVar3;
                    *(undefined4 *)(lVar17 + 0x18 + lVar18) = uVar23;
                    *(longlong *)(lVar5 + 0x100) = lVar16 + 1;
                    bVar1 = pbVar14[0x11];
                    uVar22 = 0x19;
                    uVar26 = bVar1 - 0x7c;
                    if ((uVar26 < 7) && ((0x75U >> (uVar26 & 0x1f) & 1) != 0)) {
                      uVar22 = 0x1a;
                    }
                    if (param_3[1] != 0) {
                      uVar24 = *(undefined4 *)(pbVar14 + 4);
                      lVar5 = *param_3;
                      uVar23 = pdb_1410dd4f0(*(undefined8 *)(lVar5 + 200),
                                             *(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                                             *(undefined8 *)(lVar5 + 0x80),
                                             *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],
                                             param_3[1],param_3[2],uVar24,CONCAT11(uVar21,uVar22),1)
                      ;
                      if (*pbVar14 != bVar1 && *pbVar14 != 0) {
                        pdb_140e2c3a0(*param_3,pbVar14);
                      }
                      lVar5 = *param_3;
                      uVar4 = *(undefined4 *)pbVar14;
                      lVar16 = *(longlong *)(lVar5 + 0x100);
                      if (lVar16 == *(longlong *)(lVar5 + 0xf0)) {
                        pdb_142dbafc0(lVar5 + 0xf0);
                      }
                      lVar17 = *(longlong *)(lVar5 + 0xf8);
                      lVar18 = lVar16 * 0x1c;
                      *(undefined4 *)(lVar17 + lVar18) = 0;
                      *(ulonglong *)(lVar17 + 4 + lVar18) = CONCAT44(uVar24,uVar4);
                      *(int *)(lVar17 + 0x10 + lVar18) = iVar2 + 7;
                      *(int *)(lVar17 + 0x14 + lVar18) = iVar3;
                      *(undefined4 *)(lVar17 + 0x18 + lVar18) = uVar23;
                      *(longlong *)(lVar5 + 0x100) = lVar16 + 1;
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
  pdb_142dc8150(&UNK_142fa3030);
}

