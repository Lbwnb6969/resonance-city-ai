// VA 0x141cf6c40, PDB extent 2147 bytes
// rhapsody_gi::shader::reproject_screen_radiance::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-gi-ba0f1cd73f31ab76/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_gi::shader::reproject_screen_radiance::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-gi-ba0f1cd73f31ab76/out/shabriri.rs
   Extent: 2147 */

void pdb_141cf6c40(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined1 uVar21;
  undefined2 uVar20;
  
  lVar5 = param_3[1];
  iVar2 = *param_2;
  iVar3 = param_2[1];
  uVar19 = param_2[2];
  pbVar6 = (byte *)param_1[1];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 8)) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  pbVar7 = (byte *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  pbVar8 = (byte *)param_1[5];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x18)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  puVar9 = (undefined8 *)param_1[2];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x30)) =
       (ulonglong)*(ushort *)((longlong)puVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar9 + 1);
  pbVar10 = (byte *)param_1[6];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x20)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  pbVar11 = (byte *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x28)) =
       (ulonglong)*(ushort *)(pbVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar11 + 8);
  *(undefined1 *)(lVar5 + (ulonglong)uVar19) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(lVar5 + (ulonglong)(uVar19 + 4)) = *(undefined1 *)((longlong)param_1 + 0x39);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar5 = *param_3;
    uVar12 = *(undefined8 *)*param_1;
    uVar21 = 0x33;
    uVar17 = pdb_141cf8590(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],(int)((ulonglong)uVar12 >> 0x20),
                           0x3319,*(undefined4 *)(lVar5 + 0x248));
    lVar5 = *param_3;
    lVar13 = *(longlong *)(lVar5 + 0x100);
    if (lVar13 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar14 = *(longlong *)(lVar5 + 0xf8);
    lVar15 = lVar13 * 0x1c;
    *(undefined4 *)(lVar14 + lVar15) = 1;
    *(undefined8 *)(lVar14 + 4 + lVar15) = uVar12;
    *(int *)(lVar14 + 0x10 + lVar15) = iVar2 + 7;
    *(int *)(lVar14 + 0x14 + lVar15) = iVar3;
    *(undefined4 *)(lVar14 + 0x18 + lVar15) = uVar17;
    *(longlong *)(lVar5 + 0x100) = lVar13 + 1;
    bVar1 = pbVar6[0x11];
    uVar16 = 0x19;
    uVar19 = bVar1 - 0x7c;
    if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
      uVar16 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar17 = *(undefined4 *)(pbVar6 + 4);
      lVar5 = *param_3;
      uVar18 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar17,CONCAT11(uVar21,uVar16),
                             1);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*param_3,pbVar6);
      }
      lVar5 = *param_3;
      uVar4 = *(undefined4 *)pbVar6;
      lVar13 = *(longlong *)(lVar5 + 0x100);
      if (lVar13 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar14 = *(longlong *)(lVar5 + 0xf8);
      lVar15 = lVar13 * 0x1c;
      *(undefined4 *)(lVar14 + lVar15) = 0;
      *(ulonglong *)(lVar14 + 4 + lVar15) = CONCAT44(uVar17,uVar4);
      *(int *)(lVar14 + 0x10 + lVar15) = iVar2 + 1;
      *(int *)(lVar14 + 0x14 + lVar15) = iVar3;
      *(undefined4 *)(lVar14 + 0x18 + lVar15) = uVar18;
      *(longlong *)(lVar5 + 0x100) = lVar13 + 1;
      if (param_3[1] != 0) {
        lVar5 = *param_3;
        uVar12 = *puVar9;
        uVar21 = 0x33;
        uVar17 = pdb_141cf8590(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,(int)((ulonglong)uVar12 >> 0x20),0x3319,
                               *(undefined4 *)(lVar5 + 0x248));
        lVar5 = *param_3;
        lVar13 = *(longlong *)(lVar5 + 0x100);
        if (lVar13 == *(longlong *)(lVar5 + 0xf0)) {
          pdb_142dbafc0(lVar5 + 0xf0);
        }
        lVar14 = *(longlong *)(lVar5 + 0xf8);
        lVar15 = lVar13 * 0x1c;
        *(undefined4 *)(lVar14 + lVar15) = 1;
        *(undefined8 *)(lVar14 + 4 + lVar15) = uVar12;
        *(int *)(lVar14 + 0x10 + lVar15) = iVar2 + 6;
        *(int *)(lVar14 + 0x14 + lVar15) = iVar3;
        *(undefined4 *)(lVar14 + 0x18 + lVar15) = uVar17;
        *(longlong *)(lVar5 + 0x100) = lVar13 + 1;
        bVar1 = pbVar7[0x11];
        uVar16 = 0x19;
        uVar19 = bVar1 - 0x7c;
        if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
          uVar16 = 0x1a;
        }
        if (param_3[1] != 0) {
          uVar17 = *(undefined4 *)(pbVar7 + 4);
          lVar5 = *param_3;
          uVar20 = CONCAT11(uVar21,uVar16);
          uVar18 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar17,uVar20,1);
          uVar21 = (undefined1)((ushort)uVar20 >> 8);
          if (*pbVar7 != bVar1 && *pbVar7 != 0) {
            pdb_140e2c3a0(*param_3,pbVar7);
          }
          lVar5 = *param_3;
          uVar4 = *(undefined4 *)pbVar7;
          lVar13 = *(longlong *)(lVar5 + 0x100);
          if (lVar13 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar14 = *(longlong *)(lVar5 + 0xf8);
          lVar15 = lVar13 * 0x1c;
          *(undefined4 *)(lVar14 + lVar15) = 0;
          *(ulonglong *)(lVar14 + 4 + lVar15) = CONCAT44(uVar17,uVar4);
          *(int *)(lVar14 + 0x10 + lVar15) = iVar2 + 2;
          *(int *)(lVar14 + 0x14 + lVar15) = iVar3;
          *(undefined4 *)(lVar14 + 0x18 + lVar15) = uVar18;
          *(longlong *)(lVar5 + 0x100) = lVar13 + 1;
          bVar1 = pbVar11[0x11];
          uVar16 = 0x19;
          uVar19 = bVar1 - 0x7c;
          if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
            uVar16 = 0x1a;
          }
          if (param_3[1] != 0) {
            uVar17 = *(undefined4 *)(pbVar11 + 4);
            lVar5 = *param_3;
            uVar20 = CONCAT11(uVar21,uVar16);
            uVar18 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar17,uVar20,1);
            uVar21 = (undefined1)((ushort)uVar20 >> 8);
            if (*pbVar11 != bVar1 && *pbVar11 != 0) {
              pdb_140e2c3a0(*param_3,pbVar11);
            }
            lVar5 = *param_3;
            uVar4 = *(undefined4 *)pbVar11;
            lVar13 = *(longlong *)(lVar5 + 0x100);
            if (lVar13 == *(longlong *)(lVar5 + 0xf0)) {
              pdb_142dbafc0(lVar5 + 0xf0);
            }
            lVar14 = *(longlong *)(lVar5 + 0xf8);
            lVar15 = lVar13 * 0x1c;
            *(undefined4 *)(lVar14 + lVar15) = 0;
            *(ulonglong *)(lVar14 + 4 + lVar15) = CONCAT44(uVar17,uVar4);
            *(int *)(lVar14 + 0x10 + lVar15) = iVar2 + 5;
            *(int *)(lVar14 + 0x14 + lVar15) = iVar3;
            *(undefined4 *)(lVar14 + 0x18 + lVar15) = uVar18;
            *(longlong *)(lVar5 + 0x100) = lVar13 + 1;
            bVar1 = pbVar8[0x11];
            uVar16 = 0x19;
            uVar19 = bVar1 - 0x7c;
            if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
              uVar16 = 0x1a;
            }
            if (param_3[1] != 0) {
              uVar17 = *(undefined4 *)(pbVar8 + 4);
              lVar5 = *param_3;
              uVar20 = CONCAT11(uVar21,uVar16);
              uVar18 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                     lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                     *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],uVar17,uVar20,1);
              uVar21 = (undefined1)((ushort)uVar20 >> 8);
              if (*pbVar8 != bVar1 && *pbVar8 != 0) {
                pdb_140e2c3a0(*param_3,pbVar8);
              }
              lVar5 = *param_3;
              uVar4 = *(undefined4 *)pbVar8;
              lVar13 = *(longlong *)(lVar5 + 0x100);
              if (lVar13 == *(longlong *)(lVar5 + 0xf0)) {
                pdb_142dbafc0(lVar5 + 0xf0);
              }
              lVar14 = *(longlong *)(lVar5 + 0xf8);
              lVar15 = lVar13 * 0x1c;
              *(undefined4 *)(lVar14 + lVar15) = 0;
              *(ulonglong *)(lVar14 + 4 + lVar15) = CONCAT44(uVar17,uVar4);
              *(int *)(lVar14 + 0x10 + lVar15) = iVar2 + 3;
              *(int *)(lVar14 + 0x14 + lVar15) = iVar3;
              *(undefined4 *)(lVar14 + 0x18 + lVar15) = uVar18;
              *(longlong *)(lVar5 + 0x100) = lVar13 + 1;
              bVar1 = pbVar10[0x11];
              uVar16 = 0x19;
              uVar19 = bVar1 - 0x7c;
              if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
                uVar16 = 0x1a;
              }
              if (param_3[1] != 0) {
                uVar17 = *(undefined4 *)(pbVar10 + 4);
                lVar5 = *param_3;
                uVar18 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                       lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                       *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                       param_3[2],uVar17,CONCAT11(uVar21,uVar16),1);
                if (*pbVar10 != bVar1 && *pbVar10 != 0) {
                  pdb_140e2c3a0(*param_3,pbVar10);
                }
                lVar5 = *param_3;
                uVar4 = *(undefined4 *)pbVar10;
                lVar13 = *(longlong *)(lVar5 + 0x100);
                if (lVar13 == *(longlong *)(lVar5 + 0xf0)) {
                  pdb_142dbafc0(lVar5 + 0xf0);
                }
                lVar14 = *(longlong *)(lVar5 + 0xf8);
                lVar15 = lVar13 * 0x1c;
                *(undefined4 *)(lVar14 + lVar15) = 0;
                *(ulonglong *)(lVar14 + 4 + lVar15) = CONCAT44(uVar17,uVar4);
                *(int *)(lVar14 + 0x10 + lVar15) = iVar2 + 4;
                *(int *)(lVar14 + 0x14 + lVar15) = iVar3;
                *(undefined4 *)(lVar14 + 0x18 + lVar15) = uVar18;
                *(longlong *)(lVar5 + 0x100) = lVar13 + 1;
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

