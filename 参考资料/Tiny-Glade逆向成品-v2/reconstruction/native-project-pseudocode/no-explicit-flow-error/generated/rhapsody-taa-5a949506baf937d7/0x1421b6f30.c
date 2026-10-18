// VA 0x1421b6f30, PDB extent 2905 bytes
// rhapsody_taa::shader::tgsr2_decide::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-taa-5a949506baf937d7/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_taa::shader::tgsr2_decide::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-taa-5a949506baf937d7/out/shabriri.rs
   Extent: 2905 */

void pdb_1421b6f30(longlong *param_1,int *param_2,longlong *param_3)

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
  byte *pbVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  undefined2 in_stack_ffffffffffffff40;
  undefined2 uVar25;
  undefined1 uVar26;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)param_1[1];
  uVar24 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar24) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  pbVar7 = (byte *)param_1[2];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar24 + 8)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  pbVar8 = (byte *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar24 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  pbVar9 = (byte *)param_1[5];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar24 + 0x18)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  pbVar10 = (byte *)param_1[7];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar24 + 0x20)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  puVar11 = (undefined8 *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar24 + 0x38)) =
       (ulonglong)*(ushort *)((longlong)puVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar11 + 1);
  pbVar12 = (byte *)param_1[8];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar24 + 0x28)) =
       (ulonglong)*(ushort *)(pbVar12 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar12 + 8);
  pbVar13 = (byte *)param_1[6];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar24 + 0x30)) =
       (ulonglong)*(ushort *)(pbVar13 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar13 + 8);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar14 = *param_1;
    uVar22 = *(undefined4 *)(lVar14 + 0x10);
    lVar15 = *param_3;
    uVar25 = CONCAT11((char)((ushort)in_stack_ffffffffffffff40 >> 8),0x18);
    uVar20 = pdb_1410dd4f0(*(undefined8 *)(lVar15 + 200),*(undefined8 *)(lVar15 + 0xd0),
                           lVar15 + 0xd8,*(undefined8 *)(lVar15 + 0x80),
                           *(undefined8 *)(lVar15 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                           uVar22,uVar25,1);
    uVar26 = (undefined1)((ushort)uVar25 >> 8);
    lVar15 = *param_3;
    uVar21 = *(undefined4 *)(lVar14 + 8);
    uVar4 = *(undefined4 *)(lVar14 + 0xc);
    lVar14 = *(longlong *)(lVar15 + 0x100);
    if (lVar14 == *(longlong *)(lVar15 + 0xf0)) {
      pdb_142dbafc0(lVar15 + 0xf0);
    }
    lVar16 = *(longlong *)(lVar15 + 0xf8);
    lVar18 = lVar14 * 0x1c;
    *(undefined4 *)(lVar16 + lVar18) = 2;
    *(undefined4 *)(lVar16 + 4 + lVar18) = uVar21;
    *(undefined4 *)(lVar16 + 8 + lVar18) = uVar4;
    *(undefined4 *)(lVar16 + 0xc + lVar18) = uVar22;
    *(int *)(lVar16 + 0x10 + lVar18) = iVar2 + 9;
    *(int *)(lVar16 + 0x14 + lVar18) = iVar3;
    *(undefined4 *)(lVar16 + 0x18 + lVar18) = uVar20;
    *(longlong *)(lVar15 + 0x100) = lVar14 + 1;
    bVar1 = pbVar6[0x11];
    uVar19 = 0x19;
    uVar23 = bVar1 - 0x7c;
    if ((uVar23 < 7) && ((0x75U >> (uVar23 & 0x1f) & 1) != 0)) {
      uVar19 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar22 = *(undefined4 *)(pbVar6 + 4);
      lVar14 = *param_3;
      uVar25 = CONCAT11(uVar26,uVar19);
      uVar21 = pdb_1410dd4f0(*(undefined8 *)(lVar14 + 200),*(undefined8 *)(lVar14 + 0xd0),
                             lVar14 + 0xd8,*(undefined8 *)(lVar14 + 0x80),
                             *(undefined8 *)(lVar14 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                             uVar22,uVar25,1);
      uVar26 = (undefined1)((ushort)uVar25 >> 8);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*param_3,pbVar6);
      }
      lVar14 = *param_3;
      uVar4 = *(undefined4 *)pbVar6;
      lVar15 = *(longlong *)(lVar14 + 0x100);
      if (lVar15 == *(longlong *)(lVar14 + 0xf0)) {
        pdb_142dbafc0(lVar14 + 0xf0);
      }
      lVar16 = *(longlong *)(lVar14 + 0xf8);
      lVar18 = lVar15 * 0x1c;
      *(undefined4 *)(lVar16 + lVar18) = 0;
      *(ulonglong *)(lVar16 + 4 + lVar18) = CONCAT44(uVar22,uVar4);
      *(int *)(lVar16 + 0x10 + lVar18) = iVar2 + 1;
      *(int *)(lVar16 + 0x14 + lVar18) = iVar3;
      *(undefined4 *)(lVar16 + 0x18 + lVar18) = uVar21;
      *(longlong *)(lVar14 + 0x100) = lVar15 + 1;
      *(longlong *)(lVar5 + (ulonglong)(uVar24 + 0x44)) = param_1[9];
      bVar1 = pbVar7[0x11];
      uVar19 = 0x19;
      uVar23 = bVar1 - 0x7c;
      if ((uVar23 < 7) && ((0x75U >> (uVar23 & 0x1f) & 1) != 0)) {
        uVar19 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar22 = *(undefined4 *)(pbVar7 + 4);
        lVar14 = *param_3;
        uVar25 = CONCAT11(uVar26,uVar19);
        uVar21 = pdb_1410dd4f0(*(undefined8 *)(lVar14 + 200),*(undefined8 *)(lVar14 + 0xd0),
                               lVar14 + 0xd8,*(undefined8 *)(lVar14 + 0x80),
                               *(undefined8 *)(lVar14 + 0x88),(short)param_3[7],param_3[1],
                               param_3[2],uVar22,uVar25,1);
        uVar26 = (undefined1)((ushort)uVar25 >> 8);
        if (*pbVar7 != bVar1 && *pbVar7 != 0) {
          pdb_140e2c3a0(*param_3,pbVar7);
        }
        lVar14 = *param_3;
        uVar4 = *(undefined4 *)pbVar7;
        lVar15 = *(longlong *)(lVar14 + 0x100);
        if (lVar15 == *(longlong *)(lVar14 + 0xf0)) {
          pdb_142dbafc0(lVar14 + 0xf0);
        }
        lVar16 = *(longlong *)(lVar14 + 0xf8);
        lVar18 = lVar15 * 0x1c;
        *(undefined4 *)(lVar16 + lVar18) = 0;
        *(ulonglong *)(lVar16 + 4 + lVar18) = CONCAT44(uVar22,uVar4);
        *(int *)(lVar16 + 0x10 + lVar18) = iVar2 + 2;
        *(int *)(lVar16 + 0x14 + lVar18) = iVar3;
        *(undefined4 *)(lVar16 + 0x18 + lVar18) = uVar21;
        *(longlong *)(lVar14 + 0x100) = lVar15 + 1;
        *(char *)(lVar5 + (ulonglong)(uVar24 + 0x40)) = (char)param_1[10];
        bVar1 = pbVar8[0x11];
        uVar19 = 0x19;
        uVar24 = bVar1 - 0x7c;
        if ((uVar24 < 7) && ((0x75U >> (uVar24 & 0x1f) & 1) != 0)) {
          uVar19 = 0x1a;
        }
        if (param_3[1] != 0) {
          uVar22 = *(undefined4 *)(pbVar8 + 4);
          lVar5 = *param_3;
          uVar21 = pdb_1410dd4f0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar22,CONCAT11(uVar26,uVar19),1);
          if (*pbVar8 != bVar1 && *pbVar8 != 0) {
            pdb_140e2c3a0(*param_3,pbVar8);
          }
          lVar5 = *param_3;
          uVar4 = *(undefined4 *)pbVar8;
          lVar14 = *(longlong *)(lVar5 + 0x100);
          if (lVar14 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar15 = *(longlong *)(lVar5 + 0xf8);
          lVar16 = lVar14 * 0x1c;
          *(undefined4 *)(lVar15 + lVar16) = 0;
          *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar22,uVar4);
          *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 3;
          *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
          *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar21;
          *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
          if (param_3[1] != 0) {
            lVar5 = *param_3;
            uVar17 = *puVar11;
            uVar26 = 0x33;
            uVar22 = pdb_1410dd1c0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],(int)((ulonglong)uVar17 >> 0x20),0x3319,
                                   *(undefined4 *)(lVar5 + 0x248));
            lVar5 = *param_3;
            lVar14 = *(longlong *)(lVar5 + 0x100);
            if (lVar14 == *(longlong *)(lVar5 + 0xf0)) {
              pdb_142dbafc0(lVar5 + 0xf0);
            }
            lVar15 = *(longlong *)(lVar5 + 0xf8);
            lVar16 = lVar14 * 0x1c;
            *(undefined4 *)(lVar15 + lVar16) = 1;
            *(undefined8 *)(lVar15 + 4 + lVar16) = uVar17;
            *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 8;
            *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
            *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar22;
            *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
            bVar1 = pbVar9[0x11];
            uVar19 = 0x19;
            uVar24 = bVar1 - 0x7c;
            if ((uVar24 < 7) && ((0x75U >> (uVar24 & 0x1f) & 1) != 0)) {
              uVar19 = 0x1a;
            }
            if (param_3[1] != 0) {
              uVar22 = *(undefined4 *)(pbVar9 + 4);
              lVar5 = *param_3;
              uVar25 = CONCAT11(uVar26,uVar19);
              uVar21 = pdb_1410dd4f0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                     lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                     *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],uVar22,uVar25,1);
              uVar26 = (undefined1)((ushort)uVar25 >> 8);
              if (*pbVar9 != bVar1 && *pbVar9 != 0) {
                pdb_140e2c3a0(*param_3,pbVar9);
              }
              lVar5 = *param_3;
              uVar4 = *(undefined4 *)pbVar9;
              lVar14 = *(longlong *)(lVar5 + 0x100);
              if (lVar14 == *(longlong *)(lVar5 + 0xf0)) {
                pdb_142dbafc0(lVar5 + 0xf0);
              }
              lVar15 = *(longlong *)(lVar5 + 0xf8);
              lVar16 = lVar14 * 0x1c;
              *(undefined4 *)(lVar15 + lVar16) = 0;
              *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar22,uVar4);
              *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 4;
              *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
              *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar21;
              *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
              bVar1 = pbVar13[0x11];
              uVar19 = 0x19;
              uVar24 = bVar1 - 0x7c;
              if ((uVar24 < 7) && ((0x75U >> (uVar24 & 0x1f) & 1) != 0)) {
                uVar19 = 0x1a;
              }
              if (param_3[1] != 0) {
                uVar22 = *(undefined4 *)(pbVar13 + 4);
                lVar5 = *param_3;
                uVar25 = CONCAT11(uVar26,uVar19);
                uVar21 = pdb_1410dd4f0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                       lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                       *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                       param_3[2],uVar22,uVar25,1);
                uVar26 = (undefined1)((ushort)uVar25 >> 8);
                if (*pbVar13 != bVar1 && *pbVar13 != 0) {
                  pdb_140e2c3a0(*param_3,pbVar13);
                }
                lVar5 = *param_3;
                uVar4 = *(undefined4 *)pbVar13;
                lVar14 = *(longlong *)(lVar5 + 0x100);
                if (lVar14 == *(longlong *)(lVar5 + 0xf0)) {
                  pdb_142dbafc0(lVar5 + 0xf0);
                }
                lVar15 = *(longlong *)(lVar5 + 0xf8);
                lVar16 = lVar14 * 0x1c;
                *(undefined4 *)(lVar15 + lVar16) = 0;
                *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar22,uVar4);
                *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 7;
                *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
                *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar21;
                *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
                bVar1 = pbVar10[0x11];
                uVar19 = 0x19;
                uVar24 = bVar1 - 0x7c;
                if ((uVar24 < 7) && ((0x75U >> (uVar24 & 0x1f) & 1) != 0)) {
                  uVar19 = 0x1a;
                }
                if (param_3[1] != 0) {
                  uVar22 = *(undefined4 *)(pbVar10 + 4);
                  lVar5 = *param_3;
                  uVar25 = CONCAT11(uVar26,uVar19);
                  uVar21 = pdb_1410dd4f0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                         lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                         *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                         param_3[2],uVar22,uVar25,1);
                  uVar26 = (undefined1)((ushort)uVar25 >> 8);
                  if (*pbVar10 != bVar1 && *pbVar10 != 0) {
                    pdb_140e2c3a0(*param_3,pbVar10);
                  }
                  lVar5 = *param_3;
                  uVar4 = *(undefined4 *)pbVar10;
                  lVar14 = *(longlong *)(lVar5 + 0x100);
                  if (lVar14 == *(longlong *)(lVar5 + 0xf0)) {
                    pdb_142dbafc0(lVar5 + 0xf0);
                  }
                  lVar15 = *(longlong *)(lVar5 + 0xf8);
                  lVar16 = lVar14 * 0x1c;
                  *(undefined4 *)(lVar15 + lVar16) = 0;
                  *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar22,uVar4);
                  *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 5;
                  *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
                  *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar21;
                  *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
                  bVar1 = pbVar12[0x11];
                  uVar19 = 0x19;
                  uVar24 = bVar1 - 0x7c;
                  if ((uVar24 < 7) && ((0x75U >> (uVar24 & 0x1f) & 1) != 0)) {
                    uVar19 = 0x1a;
                  }
                  if (param_3[1] != 0) {
                    uVar22 = *(undefined4 *)(pbVar12 + 4);
                    lVar5 = *param_3;
                    uVar21 = pdb_1410dd4f0(*(undefined8 *)(lVar5 + 200),
                                           *(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                                           *(undefined8 *)(lVar5 + 0x80),
                                           *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],
                                           param_3[1],param_3[2],uVar22,CONCAT11(uVar26,uVar19),1);
                    if (*pbVar12 != bVar1 && *pbVar12 != 0) {
                      pdb_140e2c3a0(*param_3,pbVar12);
                    }
                    lVar5 = *param_3;
                    uVar4 = *(undefined4 *)pbVar12;
                    lVar14 = *(longlong *)(lVar5 + 0x100);
                    if (lVar14 == *(longlong *)(lVar5 + 0xf0)) {
                      pdb_142dbafc0(lVar5 + 0xf0);
                    }
                    lVar15 = *(longlong *)(lVar5 + 0xf8);
                    lVar16 = lVar14 * 0x1c;
                    *(undefined4 *)(lVar15 + lVar16) = 0;
                    *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar22,uVar4);
                    *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 6;
                    *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
                    *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar21;
                    *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
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
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa3030);
}

