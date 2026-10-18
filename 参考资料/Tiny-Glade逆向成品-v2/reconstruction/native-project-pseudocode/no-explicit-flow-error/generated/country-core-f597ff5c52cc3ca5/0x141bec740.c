// VA 0x141bec740, PDB extent 2285 bytes
// country_core::shader::rdi::temporal::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::rdi::temporal::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 2285 */

void pdb_141bec740(undefined8 *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined2 in_stack_ffffffffffffff70;
  undefined2 uVar20;
  
  lVar6 = param_3[1];
  uVar19 = param_2[2];
  pbVar7 = (byte *)*param_1;
  *(ulonglong *)(lVar6 + (ulonglong)(uVar19 + 4)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  pbVar8 = (byte *)param_1[2];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar19 + 0xc)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  pbVar9 = (byte *)param_1[4];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar19 + 0x14)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  pbVar10 = (byte *)param_1[6];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar19 + 0x1c)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  puVar11 = (undefined8 *)param_1[7];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar19 + 0x24)) =
       (ulonglong)*(ushort *)((longlong)puVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar11 + 1);
  *(undefined4 *)(lVar6 + (ulonglong)uVar19) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(lVar6 + (ulonglong)(uVar19 + 0x2c)) = *(undefined4 *)((longlong)param_1 + 0x44);
  param_3 = (longlong *)*param_3;
  bVar2 = pbVar7[0x11];
  uVar15 = 0x19;
  uVar19 = bVar2 - 0x7c;
  if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
    uVar15 = 0x1a;
  }
  if (param_3[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    uVar18 = *(undefined4 *)(pbVar7 + 4);
    lVar6 = *param_3;
    uVar20 = CONCAT11((char)((ushort)in_stack_ffffffffffffff70 >> 8),uVar15);
    uVar17 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),lVar6 + 0xd8,
                           *(undefined8 *)(lVar6 + 0x80),*(undefined8 *)(lVar6 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar18,uVar20,1);
    uVar15 = (undefined1)((ushort)uVar20 >> 8);
    if (*pbVar7 != bVar2 && *pbVar7 != 0) {
      pdb_140e2c3a0(*param_3,pbVar7);
    }
    lVar6 = *param_3;
    uVar5 = *(undefined4 *)pbVar7;
    lVar12 = *(longlong *)(lVar6 + 0x100);
    if (lVar12 == *(longlong *)(lVar6 + 0xf0)) {
      pdb_142dbafc0(lVar6 + 0xf0);
    }
    lVar13 = *(longlong *)(lVar6 + 0xf8);
    lVar14 = lVar12 * 0x1c;
    *(undefined4 *)(lVar13 + lVar14) = 0;
    *(ulonglong *)(lVar13 + 4 + lVar14) = CONCAT44(uVar18,uVar5);
    *(int *)(lVar13 + 0x10 + lVar14) = iVar3 + 1;
    *(int *)(lVar13 + 0x14 + lVar14) = iVar4;
    *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar17;
    *(longlong *)(lVar6 + 0x100) = lVar12 + 1;
    if (param_3[1] != 0) {
      lVar6 = param_1[1];
      uVar18 = *(undefined4 *)(lVar6 + 0x10);
      lVar12 = *param_3;
      uVar20 = CONCAT11(uVar15,0x19);
      uVar17 = pdb_141764080(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                             lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                             *(undefined8 *)(lVar12 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                             uVar18,uVar20,1);
      uVar15 = (undefined1)((ushort)uVar20 >> 8);
      lVar12 = *param_3;
      uVar1 = *(undefined8 *)(lVar6 + 8);
      lVar6 = *(longlong *)(lVar12 + 0x100);
      if (lVar6 == *(longlong *)(lVar12 + 0xf0)) {
        pdb_142dbafc0(lVar12 + 0xf0);
      }
      lVar13 = *(longlong *)(lVar12 + 0xf8);
      lVar14 = lVar6 * 0x1c;
      *(undefined4 *)(lVar13 + lVar14) = 4;
      *(undefined8 *)(lVar13 + 4 + lVar14) = uVar1;
      *(undefined4 *)(lVar13 + 0xc + lVar14) = uVar18;
      *(int *)(lVar13 + 0x10 + lVar14) = iVar3 + 8;
      *(int *)(lVar13 + 0x14 + lVar14) = iVar4;
      *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar17;
      *(longlong *)(lVar12 + 0x100) = lVar6 + 1;
      bVar2 = pbVar8[0x11];
      uVar16 = 0x19;
      uVar19 = bVar2 - 0x7c;
      if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
        uVar16 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar18 = *(undefined4 *)(pbVar8 + 4);
        lVar6 = *param_3;
        uVar20 = CONCAT11(uVar15,uVar16);
        uVar17 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                               lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                               *(undefined8 *)(lVar6 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar18,uVar20,1);
        uVar15 = (undefined1)((ushort)uVar20 >> 8);
        if (*pbVar8 != bVar2 && *pbVar8 != 0) {
          pdb_140e2c3a0(*param_3,pbVar8);
        }
        lVar6 = *param_3;
        uVar5 = *(undefined4 *)pbVar8;
        lVar12 = *(longlong *)(lVar6 + 0x100);
        if (lVar12 == *(longlong *)(lVar6 + 0xf0)) {
          pdb_142dbafc0(lVar6 + 0xf0);
        }
        lVar13 = *(longlong *)(lVar6 + 0xf8);
        lVar14 = lVar12 * 0x1c;
        *(undefined4 *)(lVar13 + lVar14) = 0;
        *(ulonglong *)(lVar13 + 4 + lVar14) = CONCAT44(uVar18,uVar5);
        *(int *)(lVar13 + 0x10 + lVar14) = iVar3 + 2;
        *(int *)(lVar13 + 0x14 + lVar14) = iVar4;
        *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar17;
        *(longlong *)(lVar6 + 0x100) = lVar12 + 1;
        if (param_3[1] != 0) {
          lVar6 = param_1[3];
          uVar18 = *(undefined4 *)(lVar6 + 0x10);
          lVar12 = *param_3;
          uVar20 = CONCAT11(uVar15,0x19);
          uVar17 = pdb_141764080(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                                 lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                                 *(undefined8 *)(lVar12 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar18,uVar20,1);
          uVar15 = (undefined1)((ushort)uVar20 >> 8);
          lVar12 = *param_3;
          uVar1 = *(undefined8 *)(lVar6 + 8);
          lVar6 = *(longlong *)(lVar12 + 0x100);
          if (lVar6 == *(longlong *)(lVar12 + 0xf0)) {
            pdb_142dbafc0(lVar12 + 0xf0);
          }
          lVar13 = *(longlong *)(lVar12 + 0xf8);
          lVar14 = lVar6 * 0x1c;
          *(undefined4 *)(lVar13 + lVar14) = 4;
          *(undefined8 *)(lVar13 + 4 + lVar14) = uVar1;
          *(undefined4 *)(lVar13 + 0xc + lVar14) = uVar18;
          *(int *)(lVar13 + 0x10 + lVar14) = iVar3 + 7;
          *(int *)(lVar13 + 0x14 + lVar14) = iVar4;
          *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar17;
          *(longlong *)(lVar12 + 0x100) = lVar6 + 1;
          bVar2 = pbVar9[0x11];
          uVar16 = 0x19;
          uVar19 = bVar2 - 0x7c;
          if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
            uVar16 = 0x1a;
          }
          if (param_3[1] != 0) {
            uVar18 = *(undefined4 *)(pbVar9 + 4);
            lVar6 = *param_3;
            uVar20 = CONCAT11(uVar15,uVar16);
            uVar17 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                   lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                   *(undefined8 *)(lVar6 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar18,uVar20,1);
            uVar15 = (undefined1)((ushort)uVar20 >> 8);
            if (*pbVar9 != bVar2 && *pbVar9 != 0) {
              pdb_140e2c3a0(*param_3,pbVar9);
            }
            lVar6 = *param_3;
            uVar5 = *(undefined4 *)pbVar9;
            lVar12 = *(longlong *)(lVar6 + 0x100);
            if (lVar12 == *(longlong *)(lVar6 + 0xf0)) {
              pdb_142dbafc0(lVar6 + 0xf0);
            }
            lVar13 = *(longlong *)(lVar6 + 0xf8);
            lVar14 = lVar12 * 0x1c;
            *(undefined4 *)(lVar13 + lVar14) = 0;
            *(ulonglong *)(lVar13 + 4 + lVar14) = CONCAT44(uVar18,uVar5);
            *(int *)(lVar13 + 0x10 + lVar14) = iVar3 + 3;
            *(int *)(lVar13 + 0x14 + lVar14) = iVar4;
            *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar17;
            *(longlong *)(lVar6 + 0x100) = lVar12 + 1;
            if (param_3[1] != 0) {
              lVar6 = param_1[5];
              uVar18 = *(undefined4 *)(lVar6 + 0x10);
              lVar12 = *param_3;
              uVar20 = CONCAT11(uVar15,0x19);
              uVar17 = pdb_141764080(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                                     lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                                     *(undefined8 *)(lVar12 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],uVar18,uVar20,1);
              uVar15 = (undefined1)((ushort)uVar20 >> 8);
              lVar12 = *param_3;
              uVar1 = *(undefined8 *)(lVar6 + 8);
              lVar6 = *(longlong *)(lVar12 + 0x100);
              if (lVar6 == *(longlong *)(lVar12 + 0xf0)) {
                pdb_142dbafc0(lVar12 + 0xf0);
              }
              lVar13 = *(longlong *)(lVar12 + 0xf8);
              lVar14 = lVar6 * 0x1c;
              *(undefined4 *)(lVar13 + lVar14) = 4;
              *(undefined8 *)(lVar13 + 4 + lVar14) = uVar1;
              *(undefined4 *)(lVar13 + 0xc + lVar14) = uVar18;
              *(int *)(lVar13 + 0x10 + lVar14) = iVar3 + 6;
              *(int *)(lVar13 + 0x14 + lVar14) = iVar4;
              *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar17;
              *(longlong *)(lVar12 + 0x100) = lVar6 + 1;
              bVar2 = pbVar10[0x11];
              uVar16 = 0x19;
              uVar19 = bVar2 - 0x7c;
              if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
                uVar16 = 0x1a;
              }
              if (param_3[1] != 0) {
                uVar18 = *(undefined4 *)(pbVar10 + 4);
                lVar6 = *param_3;
                uVar17 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                       lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                       *(undefined8 *)(lVar6 + 0x88),(short)param_3[7],param_3[1],
                                       param_3[2],uVar18,CONCAT11(uVar15,uVar16),1);
                if (*pbVar10 != bVar2 && *pbVar10 != 0) {
                  pdb_140e2c3a0(*param_3,pbVar10);
                }
                lVar6 = *param_3;
                uVar5 = *(undefined4 *)pbVar10;
                lVar12 = *(longlong *)(lVar6 + 0x100);
                if (lVar12 == *(longlong *)(lVar6 + 0xf0)) {
                  pdb_142dbafc0(lVar6 + 0xf0);
                }
                lVar13 = *(longlong *)(lVar6 + 0xf8);
                lVar14 = lVar12 * 0x1c;
                *(undefined4 *)(lVar13 + lVar14) = 0;
                *(ulonglong *)(lVar13 + 4 + lVar14) = CONCAT44(uVar18,uVar5);
                *(int *)(lVar13 + 0x10 + lVar14) = iVar3 + 4;
                *(int *)(lVar13 + 0x14 + lVar14) = iVar4;
                *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar17;
                *(longlong *)(lVar6 + 0x100) = lVar12 + 1;
                if (param_3[1] != 0) {
                  lVar6 = *param_3;
                  uVar1 = *puVar11;
                  uVar18 = pdb_141764730(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                         lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                         *(undefined8 *)(lVar6 + 0x88),(short)param_3[7],param_3[1],
                                         param_3[2],(int)((ulonglong)uVar1 >> 0x20),0x3319,
                                         *(undefined4 *)(lVar6 + 0x248));
                  lVar6 = *param_3;
                  lVar12 = *(longlong *)(lVar6 + 0x100);
                  if (lVar12 == *(longlong *)(lVar6 + 0xf0)) {
                    pdb_142dbafc0(lVar6 + 0xf0);
                  }
                  lVar13 = *(longlong *)(lVar6 + 0xf8);
                  lVar14 = lVar12 * 0x1c;
                  *(undefined4 *)(lVar13 + lVar14) = 1;
                  *(undefined8 *)(lVar13 + 4 + lVar14) = uVar1;
                  *(int *)(lVar13 + 0x10 + lVar14) = iVar3 + 5;
                  *(int *)(lVar13 + 0x14 + lVar14) = iVar4;
                  *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar18;
                  *(longlong *)(lVar6 + 0x100) = lVar12 + 1;
                  return;
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

