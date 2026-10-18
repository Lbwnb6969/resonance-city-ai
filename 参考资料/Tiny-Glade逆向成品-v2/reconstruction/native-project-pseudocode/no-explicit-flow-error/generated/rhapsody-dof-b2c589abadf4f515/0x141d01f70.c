// VA 0x141d01f70, PDB extent 2055 bytes
// rhapsody_dof::shader::halfres::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_dof::shader::halfres::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
   Extent: 2055 */

void pdb_141d01f70(longlong *param_1,int *param_2,longlong *param_3)

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
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined2 in_stack_ffffffffffffff70;
  undefined2 uVar20;
  undefined1 uVar21;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)param_1[1];
  uVar19 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar19) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  pbVar7 = (byte *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 8)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  pbVar8 = (byte *)param_1[5];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  puVar9 = (undefined8 *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x20)) =
       (ulonglong)*(ushort *)((longlong)puVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar9 + 1);
  pbVar10 = (byte *)param_1[6];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x18)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar5 = *param_1;
    uVar18 = *(undefined4 *)(lVar5 + 0x10);
    lVar11 = *param_3;
    uVar20 = CONCAT11((char)((ushort)in_stack_ffffffffffffff70 >> 8),0x19);
    uVar16 = pdb_141cfe690(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                           lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                           *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                           uVar18,uVar20,1);
    uVar21 = (undefined1)((ushort)uVar20 >> 8);
    lVar11 = *param_3;
    uVar17 = *(undefined4 *)(lVar5 + 8);
    uVar4 = *(undefined4 *)(lVar5 + 0xc);
    lVar5 = *(longlong *)(lVar11 + 0x100);
    if (lVar5 == *(longlong *)(lVar11 + 0xf0)) {
      pdb_142dbafc0(lVar11 + 0xf0);
    }
    lVar12 = *(longlong *)(lVar11 + 0xf8);
    lVar14 = lVar5 * 0x1c;
    *(undefined4 *)(lVar12 + lVar14) = 4;
    *(undefined4 *)(lVar12 + 4 + lVar14) = uVar17;
    *(undefined4 *)(lVar12 + 8 + lVar14) = uVar4;
    *(undefined4 *)(lVar12 + 0xc + lVar14) = uVar18;
    *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 7;
    *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
    *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar16;
    *(longlong *)(lVar11 + 0x100) = lVar5 + 1;
    bVar1 = pbVar6[0x11];
    uVar15 = 0x19;
    uVar19 = bVar1 - 0x7c;
    if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
      uVar15 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar18 = *(undefined4 *)(pbVar6 + 4);
      lVar5 = *param_3;
      uVar20 = CONCAT11(uVar21,uVar15);
      uVar17 = pdb_141cfe690(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar18,uVar20,1);
      uVar21 = (undefined1)((ushort)uVar20 >> 8);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*param_3,pbVar6);
      }
      lVar5 = *param_3;
      uVar4 = *(undefined4 *)pbVar6;
      lVar11 = *(longlong *)(lVar5 + 0x100);
      if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar12 = *(longlong *)(lVar5 + 0xf8);
      lVar14 = lVar11 * 0x1c;
      *(undefined4 *)(lVar12 + lVar14) = 0;
      *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar18,uVar4);
      *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 1;
      *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
      *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar17;
      *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
      if (param_3[1] != 0) {
        lVar5 = param_1[2];
        uVar18 = *(undefined4 *)(lVar5 + 0x10);
        lVar11 = *param_3;
        uVar20 = CONCAT11(uVar21,0x19);
        uVar16 = pdb_141cfe690(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                               lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                               *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],
                               param_3[2],uVar18,uVar20,1);
        uVar21 = (undefined1)((ushort)uVar20 >> 8);
        lVar11 = *param_3;
        uVar17 = *(undefined4 *)(lVar5 + 8);
        uVar4 = *(undefined4 *)(lVar5 + 0xc);
        lVar5 = *(longlong *)(lVar11 + 0x100);
        if (lVar5 == *(longlong *)(lVar11 + 0xf0)) {
          pdb_142dbafc0(lVar11 + 0xf0);
        }
        lVar12 = *(longlong *)(lVar11 + 0xf8);
        lVar14 = lVar5 * 0x1c;
        *(undefined4 *)(lVar12 + lVar14) = 4;
        *(undefined4 *)(lVar12 + 4 + lVar14) = uVar17;
        *(undefined4 *)(lVar12 + 8 + lVar14) = uVar4;
        *(undefined4 *)(lVar12 + 0xc + lVar14) = uVar18;
        *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 6;
        *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
        *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar16;
        *(longlong *)(lVar11 + 0x100) = lVar5 + 1;
        bVar1 = pbVar7[0x11];
        uVar15 = 0x19;
        uVar19 = bVar1 - 0x7c;
        if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
          uVar15 = 0x1a;
        }
        if (param_3[1] != 0) {
          uVar18 = *(undefined4 *)(pbVar7 + 4);
          lVar5 = *param_3;
          uVar17 = pdb_141cfe690(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar18,CONCAT11(uVar21,uVar15),1);
          if (*pbVar7 != bVar1 && *pbVar7 != 0) {
            pdb_140e2c3a0(*param_3,pbVar7);
          }
          lVar5 = *param_3;
          uVar4 = *(undefined4 *)pbVar7;
          lVar11 = *(longlong *)(lVar5 + 0x100);
          if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar12 = *(longlong *)(lVar5 + 0xf8);
          lVar14 = lVar11 * 0x1c;
          *(undefined4 *)(lVar12 + lVar14) = 0;
          *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar18,uVar4);
          *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 2;
          *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
          *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar17;
          *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
          if (param_3[1] != 0) {
            lVar5 = *param_3;
            uVar13 = *puVar9;
            uVar21 = 0x33;
            uVar18 = pdb_141cfe950(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],(int)((ulonglong)uVar13 >> 0x20),0x3319,
                                   *(undefined4 *)(lVar5 + 0x248));
            lVar5 = *param_3;
            lVar11 = *(longlong *)(lVar5 + 0x100);
            if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
              pdb_142dbafc0(lVar5 + 0xf0);
            }
            lVar12 = *(longlong *)(lVar5 + 0xf8);
            lVar14 = lVar11 * 0x1c;
            *(undefined4 *)(lVar12 + lVar14) = 1;
            *(undefined8 *)(lVar12 + 4 + lVar14) = uVar13;
            *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 5;
            *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
            *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar18;
            *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
            bVar1 = pbVar8[0x11];
            uVar15 = 0x19;
            uVar19 = bVar1 - 0x7c;
            if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
              uVar15 = 0x1a;
            }
            if (param_3[1] != 0) {
              uVar18 = *(undefined4 *)(pbVar8 + 4);
              lVar5 = *param_3;
              uVar20 = CONCAT11(uVar21,uVar15);
              uVar17 = pdb_141cfe690(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                     lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                     *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],uVar18,uVar20,1);
              uVar21 = (undefined1)((ushort)uVar20 >> 8);
              if (*pbVar8 != bVar1 && *pbVar8 != 0) {
                pdb_140e2c3a0(*param_3,pbVar8);
              }
              lVar5 = *param_3;
              uVar4 = *(undefined4 *)pbVar8;
              lVar11 = *(longlong *)(lVar5 + 0x100);
              if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
                pdb_142dbafc0(lVar5 + 0xf0);
              }
              lVar12 = *(longlong *)(lVar5 + 0xf8);
              lVar14 = lVar11 * 0x1c;
              *(undefined4 *)(lVar12 + lVar14) = 0;
              *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar18,uVar4);
              *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 3;
              *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
              *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar17;
              *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
              bVar1 = pbVar10[0x11];
              uVar15 = 0x19;
              uVar19 = bVar1 - 0x7c;
              if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
                uVar15 = 0x1a;
              }
              if (param_3[1] != 0) {
                uVar18 = *(undefined4 *)(pbVar10 + 4);
                lVar5 = *param_3;
                uVar17 = pdb_141cfe690(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                       lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                       *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                       param_3[2],uVar18,CONCAT11(uVar21,uVar15),1);
                if (*pbVar10 != bVar1 && *pbVar10 != 0) {
                  pdb_140e2c3a0(*param_3,pbVar10);
                }
                lVar5 = *param_3;
                uVar4 = *(undefined4 *)pbVar10;
                lVar11 = *(longlong *)(lVar5 + 0x100);
                if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
                  pdb_142dbafc0(lVar5 + 0xf0);
                }
                lVar12 = *(longlong *)(lVar5 + 0xf8);
                lVar14 = lVar11 * 0x1c;
                *(undefined4 *)(lVar12 + lVar14) = 0;
                *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar18,uVar4);
                *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 4;
                *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
                *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar17;
                *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
                return;
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

