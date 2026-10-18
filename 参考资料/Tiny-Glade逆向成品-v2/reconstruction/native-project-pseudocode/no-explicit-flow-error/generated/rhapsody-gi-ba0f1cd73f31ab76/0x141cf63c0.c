// VA 0x141cf63c0, PDB extent 2176 bytes
// rhapsody_gi::shader::eval_screen_radiance::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-gi-ba0f1cd73f31ab76/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_gi::shader::eval_screen_radiance::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-gi-ba0f1cd73f31ab76/out/shabriri.rs
   Extent: 2176 */

void pdb_141cf63c0(longlong *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined1 uVar22;
  undefined2 uVar21;
  
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
  puVar8 = (undefined8 *)*param_1;
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x30)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  pbVar9 = (byte *)param_1[5];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  pbVar10 = (byte *)param_1[2];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x28)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  pbVar11 = (byte *)param_1[6];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x18)) =
       (ulonglong)*(ushort *)(pbVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar11 + 8);
  pbVar12 = (byte *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x20)) =
       (ulonglong)*(ushort *)(pbVar12 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar12 + 8);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar5 = *param_3;
    uVar13 = *puVar8;
    uVar22 = 0x33;
    uVar18 = pdb_141cf8590(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],(int)((ulonglong)uVar13 >> 0x20),
                           0x3319,*(undefined4 *)(lVar5 + 0x248));
    lVar5 = *param_3;
    lVar14 = *(longlong *)(lVar5 + 0x100);
    if (lVar14 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar15 = *(longlong *)(lVar5 + 0xf8);
    lVar16 = lVar14 * 0x1c;
    *(undefined4 *)(lVar15 + lVar16) = 1;
    *(undefined8 *)(lVar15 + 4 + lVar16) = uVar13;
    *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 7;
    *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
    *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar18;
    *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
    bVar1 = pbVar6[0x11];
    uVar17 = 0x19;
    uVar20 = bVar1 - 0x7c;
    if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
      uVar17 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar18 = *(undefined4 *)(pbVar6 + 4);
      lVar5 = *param_3;
      uVar21 = CONCAT11(uVar22,uVar17);
      uVar19 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar18,uVar21,1);
      uVar22 = (undefined1)((ushort)uVar21 >> 8);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*param_3,pbVar6);
      }
      lVar5 = *param_3;
      uVar4 = *(undefined4 *)pbVar6;
      lVar14 = *(longlong *)(lVar5 + 0x100);
      if (lVar14 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar15 = *(longlong *)(lVar5 + 0xf8);
      lVar16 = lVar14 * 0x1c;
      *(undefined4 *)(lVar15 + lVar16) = 0;
      *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar18,uVar4);
      *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 1;
      *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
      *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
      *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
      bVar1 = pbVar10[0x11];
      uVar17 = 0x19;
      uVar20 = bVar1 - 0x7c;
      if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
        uVar17 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar18 = *(undefined4 *)(pbVar10 + 4);
        lVar5 = *param_3;
        uVar21 = CONCAT11(uVar22,uVar17);
        uVar19 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar18,uVar21,1);
        uVar22 = (undefined1)((ushort)uVar21 >> 8);
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
        *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar18,uVar4);
        *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 6;
        *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
        *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
        *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
        bVar1 = pbVar7[0x11];
        uVar17 = 0x19;
        uVar20 = bVar1 - 0x7c;
        if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
          uVar17 = 0x1a;
        }
        if (param_3[1] != 0) {
          uVar18 = *(undefined4 *)(pbVar7 + 4);
          lVar5 = *param_3;
          uVar21 = CONCAT11(uVar22,uVar17);
          uVar19 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar18,uVar21,1);
          uVar22 = (undefined1)((ushort)uVar21 >> 8);
          if (*pbVar7 != bVar1 && *pbVar7 != 0) {
            pdb_140e2c3a0(*param_3,pbVar7);
          }
          lVar5 = *param_3;
          uVar4 = *(undefined4 *)pbVar7;
          lVar14 = *(longlong *)(lVar5 + 0x100);
          if (lVar14 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar15 = *(longlong *)(lVar5 + 0xf8);
          lVar16 = lVar14 * 0x1c;
          *(undefined4 *)(lVar15 + lVar16) = 0;
          *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar18,uVar4);
          *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 2;
          *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
          *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
          *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
          bVar1 = pbVar12[0x11];
          uVar17 = 0x19;
          uVar20 = bVar1 - 0x7c;
          if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
            uVar17 = 0x1a;
          }
          if (param_3[1] != 0) {
            uVar18 = *(undefined4 *)(pbVar12 + 4);
            lVar5 = *param_3;
            uVar21 = CONCAT11(uVar22,uVar17);
            uVar19 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar18,uVar21,1);
            uVar22 = (undefined1)((ushort)uVar21 >> 8);
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
            *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar18,uVar4);
            *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 5;
            *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
            *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
            *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
            bVar1 = pbVar9[0x11];
            uVar17 = 0x19;
            uVar20 = bVar1 - 0x7c;
            if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
              uVar17 = 0x1a;
            }
            if (param_3[1] != 0) {
              uVar18 = *(undefined4 *)(pbVar9 + 4);
              lVar5 = *param_3;
              uVar21 = CONCAT11(uVar22,uVar17);
              uVar19 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                     lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                     *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],uVar18,uVar21,1);
              uVar22 = (undefined1)((ushort)uVar21 >> 8);
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
              *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar18,uVar4);
              *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 3;
              *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
              *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
              *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
              bVar1 = pbVar11[0x11];
              uVar17 = 0x19;
              uVar20 = bVar1 - 0x7c;
              if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
                uVar17 = 0x1a;
              }
              if (param_3[1] != 0) {
                uVar18 = *(undefined4 *)(pbVar11 + 4);
                lVar5 = *param_3;
                uVar19 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                       lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                       *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                       param_3[2],uVar18,CONCAT11(uVar22,uVar17),1);
                if (*pbVar11 != bVar1 && *pbVar11 != 0) {
                  pdb_140e2c3a0(*param_3,pbVar11);
                }
                lVar5 = *param_3;
                uVar4 = *(undefined4 *)pbVar11;
                lVar14 = *(longlong *)(lVar5 + 0x100);
                if (lVar14 == *(longlong *)(lVar5 + 0xf0)) {
                  pdb_142dbafc0(lVar5 + 0xf0);
                }
                lVar15 = *(longlong *)(lVar5 + 0xf8);
                lVar16 = lVar14 * 0x1c;
                *(undefined4 *)(lVar15 + lVar16) = 0;
                *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar18,uVar4);
                *(int *)(lVar15 + 0x10 + lVar16) = iVar2 + 4;
                *(int *)(lVar15 + 0x14 + lVar16) = iVar3;
                *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
                *(longlong *)(lVar5 + 0x100) = lVar14 + 1;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1433c7f00);
}

