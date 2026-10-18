// VA 0x14163b6e0, PDB extent 3652 bytes
// country_core::shader::water::ice_refl_resolve::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::water::ice_refl_resolve::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 3652 */

void pdb_14163b6e0(undefined8 *param_1,int *param_2,longlong *param_3)

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
  undefined8 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined2 in_stack_ffffffffffffff50;
  undefined2 uVar26;
  
  lVar5 = param_3[1];
  uVar25 = param_2[2];
  pbVar6 = (byte *)param_1[1];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar25 + 4)) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  pbVar7 = (byte *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar25 + 0xc)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  pbVar8 = (byte *)param_1[5];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar25 + 0x14)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  pbVar9 = (byte *)param_1[7];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar25 + 0x1c)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  pbVar10 = (byte *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar25 + 0x4c)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  puVar11 = (undefined8 *)param_1[9];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar25 + 0x24)) =
       (ulonglong)*(ushort *)((longlong)puVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar11 + 1);
  puVar12 = (undefined8 *)param_1[6];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar25 + 0x44)) =
       (ulonglong)*(ushort *)((longlong)puVar12 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar12 + 1);
  pbVar13 = (byte *)param_1[0xb];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar25 + 0x2c)) =
       (ulonglong)*(ushort *)(pbVar13 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar13 + 8);
  pbVar14 = (byte *)param_1[8];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar25 + 0x3c)) =
       (ulonglong)*(ushort *)(pbVar14 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar14 + 8);
  puVar15 = (undefined8 *)param_1[10];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar25 + 0x34)) =
       (ulonglong)*(ushort *)((longlong)puVar15 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar15 + 1);
  *(undefined4 *)(lVar5 + (ulonglong)uVar25) = *(undefined4 *)(param_1 + 0xc);
  param_3 = (longlong *)*param_3;
  pbVar16 = (byte *)*param_1;
  bVar1 = pbVar16[0x11];
  uVar21 = 0x19;
  uVar25 = bVar1 - 0x7c;
  if ((uVar25 < 7) && ((0x75U >> (uVar25 & 0x1f) & 1) != 0)) {
    uVar21 = 0x1a;
  }
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar24 = *(undefined4 *)(pbVar16 + 4);
    lVar5 = *param_3;
    uVar26 = CONCAT11((char)((ushort)in_stack_ffffffffffffff50 >> 8),uVar21);
    uVar23 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar24,uVar26,1);
    uVar21 = (undefined1)((ushort)uVar26 >> 8);
    if (*pbVar16 != bVar1 && *pbVar16 != 0) {
      pdb_140e2c3a0(*param_3,pbVar16);
    }
    lVar5 = *param_3;
    uVar4 = *(undefined4 *)pbVar16;
    lVar17 = *(longlong *)(lVar5 + 0x100);
    if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar18 = *(longlong *)(lVar5 + 0xf8);
    lVar20 = lVar17 * 0x1c;
    *(undefined4 *)(lVar18 + lVar20) = 0;
    *(ulonglong *)(lVar18 + 4 + lVar20) = CONCAT44(uVar24,uVar4);
    *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 0xc;
    *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
    *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar23;
    *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
    bVar1 = pbVar6[0x11];
    uVar22 = 0x19;
    uVar25 = bVar1 - 0x7c;
    if (uVar25 < 7) {
      if ((0x75U >> (uVar25 & 0x1f) & 1) != 0) {
        uVar22 = 0x1a;
      }
      lVar5 = param_3[1];
    }
    else {
      lVar5 = param_3[1];
      uVar22 = 0x19;
    }
    if (lVar5 != 0) {
      uVar24 = *(undefined4 *)(pbVar6 + 4);
      lVar17 = *param_3;
      uVar26 = CONCAT11(uVar21,uVar22);
      uVar23 = pdb_141764080(*(undefined8 *)(lVar17 + 200),*(undefined8 *)(lVar17 + 0xd0),
                             lVar17 + 0xd8,*(undefined8 *)(lVar17 + 0x80),
                             *(undefined8 *)(lVar17 + 0x88),(short)param_3[7],lVar5,param_3[2],
                             uVar24,uVar26,1);
      uVar21 = (undefined1)((ushort)uVar26 >> 8);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*param_3,pbVar6);
      }
      lVar5 = *param_3;
      uVar4 = *(undefined4 *)pbVar6;
      lVar17 = *(longlong *)(lVar5 + 0x100);
      if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar18 = *(longlong *)(lVar5 + 0xf8);
      lVar20 = lVar17 * 0x1c;
      *(undefined4 *)(lVar18 + lVar20) = 0;
      *(ulonglong *)(lVar18 + 4 + lVar20) = CONCAT44(uVar24,uVar4);
      *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 1;
      *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
      *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar23;
      *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
      pbVar6 = (byte *)param_1[2];
      bVar1 = pbVar6[0x11];
      uVar22 = 0x19;
      uVar25 = bVar1 - 0x7c;
      if ((uVar25 < 7) && ((0x75U >> (uVar25 & 0x1f) & 1) != 0)) {
        uVar22 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar24 = *(undefined4 *)(pbVar6 + 4);
        lVar5 = *param_3;
        uVar26 = CONCAT11(uVar21,uVar22);
        uVar23 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar24,uVar26,1);
        uVar21 = (undefined1)((ushort)uVar26 >> 8);
        if (*pbVar6 != bVar1 && *pbVar6 != 0) {
          pdb_140e2c3a0(*param_3,pbVar6);
        }
        lVar5 = *param_3;
        uVar4 = *(undefined4 *)pbVar6;
        lVar17 = *(longlong *)(lVar5 + 0x100);
        if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
          pdb_142dbafc0(lVar5 + 0xf0);
        }
        lVar18 = *(longlong *)(lVar5 + 0xf8);
        lVar20 = lVar17 * 0x1c;
        *(undefined4 *)(lVar18 + lVar20) = 0;
        *(ulonglong *)(lVar18 + 4 + lVar20) = CONCAT44(uVar24,uVar4);
        *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 0xb;
        *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
        *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar23;
        *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
        bVar1 = pbVar7[0x11];
        uVar22 = 0x19;
        uVar25 = bVar1 - 0x7c;
        if ((uVar25 < 7) && ((0x75U >> (uVar25 & 0x1f) & 1) != 0)) {
          uVar22 = 0x1a;
        }
        if (param_3[1] != 0) {
          uVar24 = *(undefined4 *)(pbVar7 + 4);
          lVar5 = *param_3;
          uVar26 = CONCAT11(uVar21,uVar22);
          uVar23 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar24,uVar26,1);
          uVar21 = (undefined1)((ushort)uVar26 >> 8);
          if (*pbVar7 != bVar1 && *pbVar7 != 0) {
            pdb_140e2c3a0(*param_3,pbVar7);
          }
          lVar5 = *param_3;
          uVar4 = *(undefined4 *)pbVar7;
          lVar17 = *(longlong *)(lVar5 + 0x100);
          if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar18 = *(longlong *)(lVar5 + 0xf8);
          lVar20 = lVar17 * 0x1c;
          *(undefined4 *)(lVar18 + lVar20) = 0;
          *(ulonglong *)(lVar18 + 4 + lVar20) = CONCAT44(uVar24,uVar4);
          *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 2;
          *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
          *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar23;
          *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
          bVar1 = pbVar10[0x11];
          uVar22 = 0x19;
          uVar25 = bVar1 - 0x7c;
          if ((uVar25 < 7) && ((0x75U >> (uVar25 & 0x1f) & 1) != 0)) {
            uVar22 = 0x1a;
          }
          if (param_3[1] != 0) {
            uVar24 = *(undefined4 *)(pbVar10 + 4);
            lVar5 = *param_3;
            uVar26 = CONCAT11(uVar21,uVar22);
            uVar23 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar24,uVar26,1);
            uVar21 = (undefined1)((ushort)uVar26 >> 8);
            if (*pbVar10 != bVar1 && *pbVar10 != 0) {
              pdb_140e2c3a0(*param_3,pbVar10);
            }
            lVar5 = *param_3;
            uVar4 = *(undefined4 *)pbVar10;
            lVar17 = *(longlong *)(lVar5 + 0x100);
            if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
              pdb_142dbafc0(lVar5 + 0xf0);
            }
            lVar18 = *(longlong *)(lVar5 + 0xf8);
            lVar20 = lVar17 * 0x1c;
            *(undefined4 *)(lVar18 + lVar20) = 0;
            *(ulonglong *)(lVar18 + 4 + lVar20) = CONCAT44(uVar24,uVar4);
            *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 10;
            *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
            *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar23;
            *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
            bVar1 = pbVar8[0x11];
            uVar22 = 0x19;
            uVar25 = bVar1 - 0x7c;
            if ((uVar25 < 7) && ((0x75U >> (uVar25 & 0x1f) & 1) != 0)) {
              uVar22 = 0x1a;
            }
            if (param_3[1] != 0) {
              uVar24 = *(undefined4 *)(pbVar8 + 4);
              lVar5 = *param_3;
              uVar23 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                     lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                     *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],uVar24,CONCAT11(uVar21,uVar22),1);
              if (*pbVar8 != bVar1 && *pbVar8 != 0) {
                pdb_140e2c3a0(*param_3,pbVar8);
              }
              lVar5 = *param_3;
              uVar4 = *(undefined4 *)pbVar8;
              lVar17 = *(longlong *)(lVar5 + 0x100);
              if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
                pdb_142dbafc0(lVar5 + 0xf0);
              }
              lVar18 = *(longlong *)(lVar5 + 0xf8);
              lVar20 = lVar17 * 0x1c;
              *(undefined4 *)(lVar18 + lVar20) = 0;
              *(ulonglong *)(lVar18 + 4 + lVar20) = CONCAT44(uVar24,uVar4);
              *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 3;
              *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
              *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar23;
              *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
              if (param_3[1] != 0) {
                lVar5 = *param_3;
                uVar19 = *puVar12;
                uVar21 = 0x33;
                uVar24 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                       lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                       *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                       param_3[2],(int)((ulonglong)uVar19 >> 0x20),0x3319,
                                       *(undefined4 *)(lVar5 + 0x248));
                lVar5 = *param_3;
                lVar17 = *(longlong *)(lVar5 + 0x100);
                if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
                  pdb_142dbafc0(lVar5 + 0xf0);
                }
                lVar18 = *(longlong *)(lVar5 + 0xf8);
                lVar20 = lVar17 * 0x1c;
                *(undefined4 *)(lVar18 + lVar20) = 1;
                *(undefined8 *)(lVar18 + 4 + lVar20) = uVar19;
                *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 9;
                *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
                *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar24;
                *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
                bVar1 = pbVar9[0x11];
                uVar22 = 0x19;
                uVar25 = bVar1 - 0x7c;
                if (uVar25 < 7) {
                  if ((0x75U >> (uVar25 & 0x1f) & 1) != 0) {
                    uVar22 = 0x1a;
                  }
                  lVar5 = param_3[1];
                }
                else {
                  lVar5 = param_3[1];
                  uVar22 = 0x19;
                }
                if (lVar5 != 0) {
                  uVar24 = *(undefined4 *)(pbVar9 + 4);
                  lVar17 = *param_3;
                  uVar26 = CONCAT11(uVar21,uVar22);
                  uVar23 = pdb_141764080(*(undefined8 *)(lVar17 + 200),
                                         *(undefined8 *)(lVar17 + 0xd0),lVar17 + 0xd8,
                                         *(undefined8 *)(lVar17 + 0x80),
                                         *(undefined8 *)(lVar17 + 0x88),(short)param_3[7],lVar5,
                                         param_3[2],uVar24,uVar26,1);
                  uVar21 = (undefined1)((ushort)uVar26 >> 8);
                  if (*pbVar9 != bVar1 && *pbVar9 != 0) {
                    pdb_140e2c3a0(*param_3,pbVar9);
                  }
                  lVar5 = *param_3;
                  uVar4 = *(undefined4 *)pbVar9;
                  lVar17 = *(longlong *)(lVar5 + 0x100);
                  if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
                    pdb_142dbafc0(lVar5 + 0xf0);
                  }
                  lVar18 = *(longlong *)(lVar5 + 0xf8);
                  lVar20 = lVar17 * 0x1c;
                  *(undefined4 *)(lVar18 + lVar20) = 0;
                  *(ulonglong *)(lVar18 + 4 + lVar20) = CONCAT44(uVar24,uVar4);
                  *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 4;
                  *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
                  *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar23;
                  *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
                  bVar1 = pbVar14[0x11];
                  uVar22 = 0x19;
                  uVar25 = bVar1 - 0x7c;
                  if ((uVar25 < 7) && ((0x75U >> (uVar25 & 0x1f) & 1) != 0)) {
                    uVar22 = 0x1a;
                  }
                  if (param_3[1] != 0) {
                    uVar24 = *(undefined4 *)(pbVar14 + 4);
                    lVar5 = *param_3;
                    uVar23 = pdb_141764080(*(undefined8 *)(lVar5 + 200),
                                           *(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                                           *(undefined8 *)(lVar5 + 0x80),
                                           *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],
                                           param_3[1],param_3[2],uVar24,CONCAT11(uVar21,uVar22),1);
                    if (*pbVar14 != bVar1 && *pbVar14 != 0) {
                      pdb_140e2c3a0(*param_3,pbVar14);
                    }
                    lVar5 = *param_3;
                    uVar4 = *(undefined4 *)pbVar14;
                    lVar17 = *(longlong *)(lVar5 + 0x100);
                    if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
                      pdb_142dbafc0(lVar5 + 0xf0);
                    }
                    lVar18 = *(longlong *)(lVar5 + 0xf8);
                    lVar20 = lVar17 * 0x1c;
                    *(undefined4 *)(lVar18 + lVar20) = 0;
                    *(ulonglong *)(lVar18 + 4 + lVar20) = CONCAT44(uVar24,uVar4);
                    *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 8;
                    *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
                    *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar23;
                    *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
                    if (param_3[1] != 0) {
                      lVar5 = *param_3;
                      uVar19 = *puVar11;
                      uVar24 = pdb_141764730(*(undefined8 *)(lVar5 + 200),
                                             *(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                                             *(undefined8 *)(lVar5 + 0x80),
                                             *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],
                                             param_3[1],param_3[2],(int)((ulonglong)uVar19 >> 0x20),
                                             0x3319,*(undefined4 *)(lVar5 + 0x248));
                      lVar5 = *param_3;
                      lVar17 = *(longlong *)(lVar5 + 0x100);
                      if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
                        pdb_142dbafc0(lVar5 + 0xf0);
                      }
                      lVar18 = *(longlong *)(lVar5 + 0xf8);
                      lVar20 = lVar17 * 0x1c;
                      *(undefined4 *)(lVar18 + lVar20) = 1;
                      *(undefined8 *)(lVar18 + 4 + lVar20) = uVar19;
                      *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 5;
                      *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
                      *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar24;
                      *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
                      if (param_3[1] != 0) {
                        lVar5 = *param_3;
                        uVar19 = *puVar15;
                        uVar21 = 0x33;
                        uVar24 = pdb_141764730(*(undefined8 *)(lVar5 + 200),
                                               *(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                                               *(undefined8 *)(lVar5 + 0x80),
                                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],
                                               param_3[1],param_3[2],
                                               (int)((ulonglong)uVar19 >> 0x20),0x3319,
                                               *(undefined4 *)(lVar5 + 0x248));
                        lVar5 = *param_3;
                        lVar17 = *(longlong *)(lVar5 + 0x100);
                        if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
                          pdb_142dbafc0(lVar5 + 0xf0);
                        }
                        lVar18 = *(longlong *)(lVar5 + 0xf8);
                        lVar20 = lVar17 * 0x1c;
                        *(undefined4 *)(lVar18 + lVar20) = 1;
                        *(undefined8 *)(lVar18 + 4 + lVar20) = uVar19;
                        *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 7;
                        *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
                        *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar24;
                        *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
                        bVar1 = pbVar13[0x11];
                        uVar22 = 0x19;
                        uVar25 = bVar1 - 0x7c;
                        if ((uVar25 < 7) && ((0x75U >> (uVar25 & 0x1f) & 1) != 0)) {
                          uVar22 = 0x1a;
                        }
                        if (param_3[1] != 0) {
                          uVar24 = *(undefined4 *)(pbVar13 + 4);
                          lVar5 = *param_3;
                          uVar23 = pdb_141764080(*(undefined8 *)(lVar5 + 200),
                                                 *(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                                                 *(undefined8 *)(lVar5 + 0x80),
                                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],
                                                 param_3[1],param_3[2],uVar24,
                                                 CONCAT11(uVar21,uVar22),1);
                          if (*pbVar13 != bVar1 && *pbVar13 != 0) {
                            pdb_140e2c3a0(*param_3,pbVar13);
                          }
                          lVar5 = *param_3;
                          uVar4 = *(undefined4 *)pbVar13;
                          lVar17 = *(longlong *)(lVar5 + 0x100);
                          if (lVar17 == *(longlong *)(lVar5 + 0xf0)) {
                            pdb_142dbafc0(lVar5 + 0xf0);
                          }
                          lVar18 = *(longlong *)(lVar5 + 0xf8);
                          lVar20 = lVar17 * 0x1c;
                          *(undefined4 *)(lVar18 + lVar20) = 0;
                          *(ulonglong *)(lVar18 + 4 + lVar20) = CONCAT44(uVar24,uVar4);
                          *(int *)(lVar18 + 0x10 + lVar20) = iVar2 + 6;
                          *(int *)(lVar18 + 0x14 + lVar20) = iVar3;
                          *(undefined4 *)(lVar18 + 0x18 + lVar20) = uVar23;
                          *(longlong *)(lVar5 + 0x100) = lVar17 + 1;
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

