// VA 0x140bde120, PDB extent 2450 bytes
// country_core::shader::gi::trace_gi_candidates::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::gi::trace_gi_candidates::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 2450 */

void pdb_140bde120(longlong *param_1,int *param_2,longlong *param_3)

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
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined1 uVar23;
  undefined2 uVar22;
  
  lVar5 = param_3[1];
  uVar21 = param_2[2];
  pbVar6 = (byte *)param_1[1];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar21 + 4)) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  pbVar7 = (byte *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar21 + 0xc)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  puVar8 = (undefined8 *)*param_1;
  *(ulonglong *)(lVar5 + (ulonglong)(uVar21 + 0x3c)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  pbVar9 = (byte *)param_1[5];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar21 + 0x14)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  puVar10 = (undefined8 *)param_1[2];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar21 + 0x34)) =
       (ulonglong)*(ushort *)((longlong)puVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar10 + 1);
  pbVar11 = (byte *)param_1[7];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar21 + 0x1c)) =
       (ulonglong)*(ushort *)(pbVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar11 + 8);
  pbVar12 = (byte *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar21 + 0x2c)) =
       (ulonglong)*(ushort *)(pbVar12 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar12 + 8);
  pbVar13 = (byte *)param_1[6];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar21 + 0x24)) =
       (ulonglong)*(ushort *)(pbVar13 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar13 + 8);
  *(int *)(lVar5 + (ulonglong)uVar21) = (int)param_1[8];
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    lVar5 = *param_3;
    uVar14 = *puVar8;
    uVar23 = 0x33;
    uVar19 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],(int)((ulonglong)uVar14 >> 0x20),
                           0x3319,*(undefined4 *)(lVar5 + 0x248));
    lVar5 = *param_3;
    lVar15 = *(longlong *)(lVar5 + 0x100);
    if (lVar15 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar16 = *(longlong *)(lVar5 + 0xf8);
    lVar17 = lVar15 * 0x1c;
    *(undefined4 *)(lVar16 + lVar17) = 1;
    *(undefined8 *)(lVar16 + 4 + lVar17) = uVar14;
    *(int *)(lVar16 + 0x10 + lVar17) = iVar2 + 8;
    *(int *)(lVar16 + 0x14 + lVar17) = iVar3;
    *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar19;
    *(longlong *)(lVar5 + 0x100) = lVar15 + 1;
    bVar1 = pbVar6[0x11];
    uVar18 = 0x19;
    uVar21 = bVar1 - 0x7c;
    if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
      uVar18 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar19 = *(undefined4 *)(pbVar6 + 4);
      lVar5 = *param_3;
      uVar20 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar19,CONCAT11(uVar23,uVar18),
                             1);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*param_3,pbVar6);
      }
      lVar5 = *param_3;
      uVar4 = *(undefined4 *)pbVar6;
      lVar15 = *(longlong *)(lVar5 + 0x100);
      if (lVar15 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar16 = *(longlong *)(lVar5 + 0xf8);
      lVar17 = lVar15 * 0x1c;
      *(undefined4 *)(lVar16 + lVar17) = 0;
      *(ulonglong *)(lVar16 + 4 + lVar17) = CONCAT44(uVar19,uVar4);
      *(int *)(lVar16 + 0x10 + lVar17) = iVar2 + 1;
      *(int *)(lVar16 + 0x14 + lVar17) = iVar3;
      *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar20;
      *(longlong *)(lVar5 + 0x100) = lVar15 + 1;
      if (param_3[1] != 0) {
        lVar5 = *param_3;
        uVar14 = *puVar10;
        uVar23 = 0x33;
        uVar19 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,(int)((ulonglong)uVar14 >> 0x20),0x3319,
                               *(undefined4 *)(lVar5 + 0x248));
        lVar5 = *param_3;
        lVar15 = *(longlong *)(lVar5 + 0x100);
        if (lVar15 == *(longlong *)(lVar5 + 0xf0)) {
          pdb_142dbafc0(lVar5 + 0xf0);
        }
        lVar16 = *(longlong *)(lVar5 + 0xf8);
        lVar17 = lVar15 * 0x1c;
        *(undefined4 *)(lVar16 + lVar17) = 1;
        *(undefined8 *)(lVar16 + 4 + lVar17) = uVar14;
        *(int *)(lVar16 + 0x10 + lVar17) = iVar2 + 7;
        *(int *)(lVar16 + 0x14 + lVar17) = iVar3;
        *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar19;
        *(longlong *)(lVar5 + 0x100) = lVar15 + 1;
        bVar1 = pbVar7[0x11];
        uVar18 = 0x19;
        uVar21 = bVar1 - 0x7c;
        if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
          uVar18 = 0x1a;
        }
        if (param_3[1] != 0) {
          uVar19 = *(undefined4 *)(pbVar7 + 4);
          lVar5 = *param_3;
          uVar22 = CONCAT11(uVar23,uVar18);
          uVar20 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar19,uVar22,1);
          uVar23 = (undefined1)((ushort)uVar22 >> 8);
          if (*pbVar7 != bVar1 && *pbVar7 != 0) {
            pdb_140e2c3a0(*param_3,pbVar7);
          }
          lVar5 = *param_3;
          uVar4 = *(undefined4 *)pbVar7;
          lVar15 = *(longlong *)(lVar5 + 0x100);
          if (lVar15 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar16 = *(longlong *)(lVar5 + 0xf8);
          lVar17 = lVar15 * 0x1c;
          *(undefined4 *)(lVar16 + lVar17) = 0;
          *(ulonglong *)(lVar16 + 4 + lVar17) = CONCAT44(uVar19,uVar4);
          *(int *)(lVar16 + 0x10 + lVar17) = iVar2 + 2;
          *(int *)(lVar16 + 0x14 + lVar17) = iVar3;
          *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar20;
          *(longlong *)(lVar5 + 0x100) = lVar15 + 1;
          bVar1 = pbVar12[0x11];
          uVar18 = 0x19;
          uVar21 = bVar1 - 0x7c;
          if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
            uVar18 = 0x1a;
          }
          if (param_3[1] != 0) {
            uVar19 = *(undefined4 *)(pbVar12 + 4);
            lVar5 = *param_3;
            uVar22 = CONCAT11(uVar23,uVar18);
            uVar20 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar19,uVar22,1);
            uVar23 = (undefined1)((ushort)uVar22 >> 8);
            if (*pbVar12 != bVar1 && *pbVar12 != 0) {
              pdb_140e2c3a0(*param_3,pbVar12);
            }
            lVar5 = *param_3;
            uVar4 = *(undefined4 *)pbVar12;
            lVar15 = *(longlong *)(lVar5 + 0x100);
            if (lVar15 == *(longlong *)(lVar5 + 0xf0)) {
              pdb_142dbafc0(lVar5 + 0xf0);
            }
            lVar16 = *(longlong *)(lVar5 + 0xf8);
            lVar17 = lVar15 * 0x1c;
            *(undefined4 *)(lVar16 + lVar17) = 0;
            *(ulonglong *)(lVar16 + 4 + lVar17) = CONCAT44(uVar19,uVar4);
            *(int *)(lVar16 + 0x10 + lVar17) = iVar2 + 6;
            *(int *)(lVar16 + 0x14 + lVar17) = iVar3;
            *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar20;
            *(longlong *)(lVar5 + 0x100) = lVar15 + 1;
            bVar1 = pbVar9[0x11];
            uVar18 = 0x19;
            uVar21 = bVar1 - 0x7c;
            if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
              uVar18 = 0x1a;
            }
            if (param_3[1] != 0) {
              uVar19 = *(undefined4 *)(pbVar9 + 4);
              lVar5 = *param_3;
              uVar22 = CONCAT11(uVar23,uVar18);
              uVar20 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                     lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                     *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],uVar19,uVar22,1);
              uVar23 = (undefined1)((ushort)uVar22 >> 8);
              if (*pbVar9 != bVar1 && *pbVar9 != 0) {
                pdb_140e2c3a0(*param_3,pbVar9);
              }
              lVar5 = *param_3;
              uVar4 = *(undefined4 *)pbVar9;
              lVar15 = *(longlong *)(lVar5 + 0x100);
              if (lVar15 == *(longlong *)(lVar5 + 0xf0)) {
                pdb_142dbafc0(lVar5 + 0xf0);
              }
              lVar16 = *(longlong *)(lVar5 + 0xf8);
              lVar17 = lVar15 * 0x1c;
              *(undefined4 *)(lVar16 + lVar17) = 0;
              *(ulonglong *)(lVar16 + 4 + lVar17) = CONCAT44(uVar19,uVar4);
              *(int *)(lVar16 + 0x10 + lVar17) = iVar2 + 3;
              *(int *)(lVar16 + 0x14 + lVar17) = iVar3;
              *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar20;
              *(longlong *)(lVar5 + 0x100) = lVar15 + 1;
              bVar1 = pbVar13[0x11];
              uVar18 = 0x19;
              uVar21 = bVar1 - 0x7c;
              if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
                uVar18 = 0x1a;
              }
              if (param_3[1] != 0) {
                uVar19 = *(undefined4 *)(pbVar13 + 4);
                lVar5 = *param_3;
                uVar22 = CONCAT11(uVar23,uVar18);
                uVar20 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                       lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                       *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                       param_3[2],uVar19,uVar22,1);
                uVar23 = (undefined1)((ushort)uVar22 >> 8);
                if (*pbVar13 != bVar1 && *pbVar13 != 0) {
                  pdb_140e2c3a0(*param_3,pbVar13);
                }
                lVar5 = *param_3;
                uVar4 = *(undefined4 *)pbVar13;
                lVar15 = *(longlong *)(lVar5 + 0x100);
                if (lVar15 == *(longlong *)(lVar5 + 0xf0)) {
                  pdb_142dbafc0(lVar5 + 0xf0);
                }
                lVar16 = *(longlong *)(lVar5 + 0xf8);
                lVar17 = lVar15 * 0x1c;
                *(undefined4 *)(lVar16 + lVar17) = 0;
                *(ulonglong *)(lVar16 + 4 + lVar17) = CONCAT44(uVar19,uVar4);
                *(int *)(lVar16 + 0x10 + lVar17) = iVar2 + 5;
                *(int *)(lVar16 + 0x14 + lVar17) = iVar3;
                *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar20;
                *(longlong *)(lVar5 + 0x100) = lVar15 + 1;
                bVar1 = pbVar11[0x11];
                uVar18 = 0x19;
                uVar21 = bVar1 - 0x7c;
                if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
                  uVar18 = 0x1a;
                }
                if (param_3[1] != 0) {
                  uVar19 = *(undefined4 *)(pbVar11 + 4);
                  lVar5 = *param_3;
                  uVar20 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                         lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                         *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                         param_3[2],uVar19,CONCAT11(uVar23,uVar18),1);
                  if (*pbVar11 != bVar1 && *pbVar11 != 0) {
                    pdb_140e2c3a0(*param_3,pbVar11);
                  }
                  lVar5 = *param_3;
                  uVar4 = *(undefined4 *)pbVar11;
                  lVar15 = *(longlong *)(lVar5 + 0x100);
                  if (lVar15 == *(longlong *)(lVar5 + 0xf0)) {
                    pdb_142dbafc0(lVar5 + 0xf0);
                  }
                  lVar16 = *(longlong *)(lVar5 + 0xf8);
                  lVar17 = lVar15 * 0x1c;
                  *(undefined4 *)(lVar16 + lVar17) = 0;
                  *(ulonglong *)(lVar16 + 4 + lVar17) = CONCAT44(uVar19,uVar4);
                  *(int *)(lVar16 + 0x10 + lVar17) = iVar2 + 4;
                  *(int *)(lVar16 + 0x14 + lVar17) = iVar3;
                  *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar20;
                  *(longlong *)(lVar5 + 0x100) = lVar15 + 1;
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

