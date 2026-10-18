// VA 0x141d02b20, PDB extent 2626 bytes
// rhapsody_dof::shader::fullres::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_dof::shader::fullres::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
   Extent: 2626 */

void pdb_141d02b20(longlong *param_1,int *param_2,longlong *param_3)

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
  undefined8 *puVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined2 in_stack_ffffffffffffff60;
  undefined2 uVar21;
  undefined1 uVar22;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)param_1[1];
  uVar20 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar20) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  pbVar7 = (byte *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 8)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  pbVar8 = (byte *)param_1[5];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  pbVar9 = (byte *)param_1[7];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x18)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  puVar10 = (undefined8 *)param_1[8];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x20)) =
       (ulonglong)*(ushort *)((longlong)puVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar10 + 1);
  pbVar11 = (byte *)param_1[6];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x28)) =
       (ulonglong)*(ushort *)(pbVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar11 + 8);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar5 = *param_1;
    uVar19 = *(undefined4 *)(lVar5 + 0x10);
    lVar12 = *param_3;
    uVar21 = CONCAT11((char)((ushort)in_stack_ffffffffffffff60 >> 8),0x19);
    uVar17 = pdb_141cfe690(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                           lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                           *(undefined8 *)(lVar12 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                           uVar19,uVar21,1);
    uVar22 = (undefined1)((ushort)uVar21 >> 8);
    lVar12 = *param_3;
    uVar18 = *(undefined4 *)(lVar5 + 8);
    uVar4 = *(undefined4 *)(lVar5 + 0xc);
    lVar5 = *(longlong *)(lVar12 + 0x100);
    if (lVar5 == *(longlong *)(lVar12 + 0xf0)) {
      pdb_142dbafc0(lVar12 + 0xf0);
    }
    lVar13 = *(longlong *)(lVar12 + 0xf8);
    lVar15 = lVar5 * 0x1c;
    *(undefined4 *)(lVar13 + lVar15) = 4;
    *(undefined4 *)(lVar13 + 4 + lVar15) = uVar18;
    *(undefined4 *)(lVar13 + 8 + lVar15) = uVar4;
    *(undefined4 *)(lVar13 + 0xc + lVar15) = uVar19;
    *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 9;
    *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
    *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar17;
    *(longlong *)(lVar12 + 0x100) = lVar5 + 1;
    bVar1 = pbVar6[0x11];
    uVar16 = 0x19;
    uVar20 = bVar1 - 0x7c;
    if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
      uVar16 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar19 = *(undefined4 *)(pbVar6 + 4);
      lVar5 = *param_3;
      uVar21 = CONCAT11(uVar22,uVar16);
      uVar18 = pdb_141cfe690(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar19,uVar21,1);
      uVar22 = (undefined1)((ushort)uVar21 >> 8);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*param_3,pbVar6);
      }
      lVar5 = *param_3;
      uVar4 = *(undefined4 *)pbVar6;
      lVar12 = *(longlong *)(lVar5 + 0x100);
      if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar13 = *(longlong *)(lVar5 + 0xf8);
      lVar15 = lVar12 * 0x1c;
      *(undefined4 *)(lVar13 + lVar15) = 0;
      *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
      *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 1;
      *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
      *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
      *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
      if (param_3[1] != 0) {
        lVar5 = param_1[2];
        uVar19 = *(undefined4 *)(lVar5 + 0x10);
        lVar12 = *param_3;
        uVar21 = CONCAT11(uVar22,0x19);
        uVar17 = pdb_141cfe690(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                               lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                               *(undefined8 *)(lVar12 + 0x88),(short)param_3[7],param_3[1],
                               param_3[2],uVar19,uVar21,1);
        uVar22 = (undefined1)((ushort)uVar21 >> 8);
        lVar12 = *param_3;
        uVar18 = *(undefined4 *)(lVar5 + 8);
        uVar4 = *(undefined4 *)(lVar5 + 0xc);
        lVar5 = *(longlong *)(lVar12 + 0x100);
        if (lVar5 == *(longlong *)(lVar12 + 0xf0)) {
          pdb_142dbafc0(lVar12 + 0xf0);
        }
        lVar13 = *(longlong *)(lVar12 + 0xf8);
        lVar15 = lVar5 * 0x1c;
        *(undefined4 *)(lVar13 + lVar15) = 4;
        *(undefined4 *)(lVar13 + 4 + lVar15) = uVar18;
        *(undefined4 *)(lVar13 + 8 + lVar15) = uVar4;
        *(undefined4 *)(lVar13 + 0xc + lVar15) = uVar19;
        *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 8;
        *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
        *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar17;
        *(longlong *)(lVar12 + 0x100) = lVar5 + 1;
        bVar1 = pbVar7[0x11];
        uVar16 = 0x19;
        uVar20 = bVar1 - 0x7c;
        if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
          uVar16 = 0x1a;
        }
        if (param_3[1] != 0) {
          uVar19 = *(undefined4 *)(pbVar7 + 4);
          lVar5 = *param_3;
          uVar21 = CONCAT11(uVar22,uVar16);
          uVar18 = pdb_141cfe690(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar19,uVar21,1);
          uVar22 = (undefined1)((ushort)uVar21 >> 8);
          if (*pbVar7 != bVar1 && *pbVar7 != 0) {
            pdb_140e2c3a0(*param_3,pbVar7);
          }
          lVar5 = *param_3;
          uVar4 = *(undefined4 *)pbVar7;
          lVar12 = *(longlong *)(lVar5 + 0x100);
          if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar13 = *(longlong *)(lVar5 + 0xf8);
          lVar15 = lVar12 * 0x1c;
          *(undefined4 *)(lVar13 + lVar15) = 0;
          *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
          *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 2;
          *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
          *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
          *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
          if (param_3[1] != 0) {
            lVar5 = param_1[4];
            uVar19 = *(undefined4 *)(lVar5 + 0x10);
            lVar12 = *param_3;
            uVar21 = CONCAT11(uVar22,0x18);
            uVar17 = pdb_141cfe690(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                                   lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                                   *(undefined8 *)(lVar12 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar19,uVar21,1);
            uVar22 = (undefined1)((ushort)uVar21 >> 8);
            lVar12 = *param_3;
            uVar18 = *(undefined4 *)(lVar5 + 8);
            uVar4 = *(undefined4 *)(lVar5 + 0xc);
            lVar5 = *(longlong *)(lVar12 + 0x100);
            if (lVar5 == *(longlong *)(lVar12 + 0xf0)) {
              pdb_142dbafc0(lVar12 + 0xf0);
            }
            lVar13 = *(longlong *)(lVar12 + 0xf8);
            lVar15 = lVar5 * 0x1c;
            *(undefined4 *)(lVar13 + lVar15) = 2;
            *(undefined4 *)(lVar13 + 4 + lVar15) = uVar18;
            *(undefined4 *)(lVar13 + 8 + lVar15) = uVar4;
            *(undefined4 *)(lVar13 + 0xc + lVar15) = uVar19;
            *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 7;
            *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
            *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar17;
            *(longlong *)(lVar12 + 0x100) = lVar5 + 1;
            bVar1 = pbVar8[0x11];
            uVar16 = 0x19;
            uVar20 = bVar1 - 0x7c;
            if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
              uVar16 = 0x1a;
            }
            if (param_3[1] != 0) {
              uVar19 = *(undefined4 *)(pbVar8 + 4);
              lVar5 = *param_3;
              uVar21 = CONCAT11(uVar22,uVar16);
              uVar18 = pdb_141cfe690(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                     lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                     *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],uVar19,uVar21,1);
              uVar22 = (undefined1)((ushort)uVar21 >> 8);
              if (*pbVar8 != bVar1 && *pbVar8 != 0) {
                pdb_140e2c3a0(*param_3,pbVar8);
              }
              lVar5 = *param_3;
              uVar4 = *(undefined4 *)pbVar8;
              lVar12 = *(longlong *)(lVar5 + 0x100);
              if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
                pdb_142dbafc0(lVar5 + 0xf0);
              }
              lVar13 = *(longlong *)(lVar5 + 0xf8);
              lVar15 = lVar12 * 0x1c;
              *(undefined4 *)(lVar13 + lVar15) = 0;
              *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
              *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 3;
              *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
              *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
              *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
              bVar1 = pbVar11[0x11];
              uVar16 = 0x19;
              uVar20 = bVar1 - 0x7c;
              if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
                uVar16 = 0x1a;
              }
              if (param_3[1] != 0) {
                uVar19 = *(undefined4 *)(pbVar11 + 4);
                lVar5 = *param_3;
                uVar21 = CONCAT11(uVar22,uVar16);
                uVar18 = pdb_141cfe690(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                       lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                       *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                       param_3[2],uVar19,uVar21,1);
                uVar22 = (undefined1)((ushort)uVar21 >> 8);
                if (*pbVar11 != bVar1 && *pbVar11 != 0) {
                  pdb_140e2c3a0(*param_3,pbVar11);
                }
                lVar5 = *param_3;
                uVar4 = *(undefined4 *)pbVar11;
                lVar12 = *(longlong *)(lVar5 + 0x100);
                if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
                  pdb_142dbafc0(lVar5 + 0xf0);
                }
                lVar13 = *(longlong *)(lVar5 + 0xf8);
                lVar15 = lVar12 * 0x1c;
                *(undefined4 *)(lVar13 + lVar15) = 0;
                *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
                *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 6;
                *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
                *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
                *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
                bVar1 = pbVar9[0x11];
                uVar16 = 0x19;
                uVar20 = bVar1 - 0x7c;
                if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
                  uVar16 = 0x1a;
                }
                if (param_3[1] != 0) {
                  uVar19 = *(undefined4 *)(pbVar9 + 4);
                  lVar5 = *param_3;
                  uVar18 = pdb_141cfe690(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                         lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                         *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                         param_3[2],uVar19,CONCAT11(uVar22,uVar16),1);
                  if (*pbVar9 != bVar1 && *pbVar9 != 0) {
                    pdb_140e2c3a0(*param_3,pbVar9);
                  }
                  lVar5 = *param_3;
                  uVar4 = *(undefined4 *)pbVar9;
                  lVar12 = *(longlong *)(lVar5 + 0x100);
                  if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
                    pdb_142dbafc0(lVar5 + 0xf0);
                  }
                  lVar13 = *(longlong *)(lVar5 + 0xf8);
                  lVar15 = lVar12 * 0x1c;
                  *(undefined4 *)(lVar13 + lVar15) = 0;
                  *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
                  *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 4;
                  *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
                  *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
                  *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
                  if (param_3[1] != 0) {
                    lVar5 = *param_3;
                    uVar14 = *puVar10;
                    uVar19 = pdb_141cfe950(*(undefined8 *)(lVar5 + 200),
                                           *(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                                           *(undefined8 *)(lVar5 + 0x80),
                                           *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],
                                           param_3[1],param_3[2],(int)((ulonglong)uVar14 >> 0x20),
                                           0x3319,*(undefined4 *)(lVar5 + 0x248));
                    lVar5 = *param_3;
                    lVar12 = *(longlong *)(lVar5 + 0x100);
                    if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
                      pdb_142dbafc0(lVar5 + 0xf0);
                    }
                    lVar13 = *(longlong *)(lVar5 + 0xf8);
                    lVar15 = lVar12 * 0x1c;
                    *(undefined4 *)(lVar13 + lVar15) = 1;
                    *(undefined8 *)(lVar13 + 4 + lVar15) = uVar14;
                    *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 5;
                    *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
                    *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar19;
                    *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
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
  pdb_142dc8150(&UNK_1433c93f0);
}

