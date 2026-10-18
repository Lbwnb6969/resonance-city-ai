// VA 0x1409ca380, PDB extent 2936 bytes
// country_core::shader::water::ice_refl_march::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::water::ice_refl_march::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 2936 */

void pdb_1409ca380(longlong *param_1,int *param_2,longlong *param_3)

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
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined2 in_stack_fffffffffffffef0;
  undefined2 uVar22;
  undefined1 uVar23;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  lVar6 = param_3[1];
  uVar21 = param_2[2];
  pbVar7 = (byte *)param_1[8];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar21 + 4)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  pbVar8 = (byte *)param_1[10];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar21 + 0xc)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  pbVar9 = (byte *)param_1[0xc];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar21 + 0x14)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  pbVar10 = (byte *)param_1[0xe];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar21 + 0x1c)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  puVar11 = (undefined8 *)param_1[0xf];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar21 + 0x24)) =
       (ulonglong)*(ushort *)((longlong)puVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar11 + 1);
  puVar12 = (undefined8 *)param_1[0xd];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar21 + 0x2c)) =
       (ulonglong)*(ushort *)((longlong)puVar12 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar12 + 1);
  *(int *)(lVar6 + (ulonglong)uVar21) = (int)param_1[0x10];
  plVar13 = (longlong *)*param_3;
  if (plVar13[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar14 = *param_1;
    uVar20 = *(undefined4 *)(lVar14 + 0x10);
    lVar15 = *plVar13;
    uVar22 = CONCAT11((char)((ushort)in_stack_fffffffffffffef0 >> 8),0x19);
    puStack_c8 = puVar11;
    puStack_c0 = puVar12;
    pbStack_b8 = pbVar10;
    pbStack_b0 = pbVar9;
    plStack_a8 = param_3;
    uVar19 = pdb_141764080(*(undefined8 *)(lVar15 + 200),*(undefined8 *)(lVar15 + 0xd0),
                           lVar15 + 0xd8,*(undefined8 *)(lVar15 + 0x80),
                           *(undefined8 *)(lVar15 + 0x88),(short)plVar13[7],plVar13[1],plVar13[2],
                           uVar20,uVar22,1);
    uVar23 = (undefined1)((ushort)uVar22 >> 8);
    lVar15 = *plVar13;
    uVar1 = *(undefined8 *)(lVar14 + 8);
    lVar14 = *(longlong *)(lVar15 + 0x100);
    if (lVar14 == *(longlong *)(lVar15 + 0xf0)) {
      pdb_142dbafc0(lVar15 + 0xf0);
    }
    lVar16 = *(longlong *)(lVar15 + 0xf8);
    lVar17 = lVar14 * 0x1c;
    *(undefined4 *)(lVar16 + lVar17) = 4;
    *(undefined8 *)(lVar16 + 4 + lVar17) = uVar1;
    *(undefined4 *)(lVar16 + 0xc + lVar17) = uVar20;
    *(int *)(lVar16 + 0x10 + lVar17) = iVar3 + 1;
    *(int *)(lVar16 + 0x14 + lVar17) = iVar4;
    *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar19;
    *(longlong *)(lVar15 + 0x100) = lVar14 + 1;
    if (plVar13[1] != 0) {
      lVar14 = param_1[1];
      uVar20 = *(undefined4 *)(lVar14 + 0x10);
      lVar15 = *plVar13;
      uVar22 = CONCAT11(uVar23,0x19);
      uVar19 = pdb_141764080(*(undefined8 *)(lVar15 + 200),*(undefined8 *)(lVar15 + 0xd0),
                             lVar15 + 0xd8,*(undefined8 *)(lVar15 + 0x80),
                             *(undefined8 *)(lVar15 + 0x88),(short)plVar13[7],plVar13[1],plVar13[2],
                             uVar20,uVar22,1);
      uVar23 = (undefined1)((ushort)uVar22 >> 8);
      lVar15 = *plVar13;
      uVar1 = *(undefined8 *)(lVar14 + 8);
      lVar14 = *(longlong *)(lVar15 + 0x100);
      if (lVar14 == *(longlong *)(lVar15 + 0xf0)) {
        pdb_142dbafc0(lVar15 + 0xf0);
      }
      lVar16 = *(longlong *)(lVar15 + 0xf8);
      lVar17 = lVar14 * 0x1c;
      *(undefined4 *)(lVar16 + lVar17) = 4;
      *(undefined8 *)(lVar16 + 4 + lVar17) = uVar1;
      *(undefined4 *)(lVar16 + 0xc + lVar17) = uVar20;
      *(int *)(lVar16 + 0x10 + lVar17) = iVar3 + 2;
      *(int *)(lVar16 + 0x14 + lVar17) = iVar4;
      *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar19;
      *(longlong *)(lVar15 + 0x100) = lVar14 + 1;
      lStack_90 = plStack_a8[2];
      iStack_d4 = iVar3 + 0xb;
      iStack_cc = uVar21 + 0x34;
      uStack_88 = (undefined4)param_1[2];
      uStack_84 = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_80 = (undefined4)param_1[3];
      uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
      uStack_78 = (undefined4)param_1[4];
      uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
      uStack_70 = (undefined4)param_1[5];
      uStack_6c = *(undefined4 *)((longlong)param_1 + 0x2c);
      uStack_68 = (undefined4)param_1[6];
      uStack_64 = *(undefined4 *)((longlong)param_1 + 0x34);
      uStack_60 = (undefined4)param_1[7];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0x3c);
      iStack_d0 = iVar4;
      plStack_a0 = plVar13;
      lStack_98 = lVar6;
      pdb_140bdc8f0(&uStack_88,&iStack_d4,&plStack_a0);
      bVar2 = pbVar7[0x11];
      uVar18 = 0x19;
      uVar21 = bVar2 - 0x7c;
      if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
        uVar18 = 0x1a;
      }
      if (plVar13[1] != 0) {
        uVar20 = *(undefined4 *)(pbVar7 + 4);
        lVar6 = *plVar13;
        uVar19 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                               lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                               *(undefined8 *)(lVar6 + 0x88),(short)plVar13[7],plVar13[1],plVar13[2]
                               ,uVar20,CONCAT11(uVar23,uVar18),1);
        if (*pbVar7 != bVar2 && *pbVar7 != 0) {
          pdb_140e2c3a0(*plVar13,pbVar7);
        }
        lVar6 = *plVar13;
        uVar5 = *(undefined4 *)pbVar7;
        lVar14 = *(longlong *)(lVar6 + 0x100);
        if (lVar14 == *(longlong *)(lVar6 + 0xf0)) {
          pdb_142dbafc0(lVar6 + 0xf0);
        }
        lVar15 = *(longlong *)(lVar6 + 0xf8);
        lVar16 = lVar14 * 0x1c;
        *(undefined4 *)(lVar15 + lVar16) = 0;
        *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar20,uVar5);
        *(int *)(lVar15 + 0x10 + lVar16) = iVar3 + 3;
        *(int *)(lVar15 + 0x14 + lVar16) = iVar4;
        *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
        *(longlong *)(lVar6 + 0x100) = lVar14 + 1;
        if (plVar13[1] != 0) {
          lVar6 = param_1[9];
          lVar14 = *plVar13;
          uVar20 = *(undefined4 *)(lVar6 + 0x10);
          uVar23 = 0x33;
          uVar19 = pdb_141764730(*(undefined8 *)(lVar14 + 200),*(undefined8 *)(lVar14 + 0xd0),
                                 lVar14 + 0xd8,*(undefined8 *)(lVar14 + 0x80),
                                 *(undefined8 *)(lVar14 + 0x88),(short)plVar13[7],plVar13[1],
                                 plVar13[2],uVar20,0x3319,*(undefined4 *)(lVar14 + 0x248));
          lVar14 = *plVar13;
          uVar1 = *(undefined8 *)(lVar6 + 8);
          lVar6 = *(longlong *)(lVar14 + 0x100);
          if (lVar6 == *(longlong *)(lVar14 + 0xf0)) {
            pdb_142dbafc0(lVar14 + 0xf0);
          }
          lVar15 = *(longlong *)(lVar14 + 0xf8);
          lVar16 = lVar6 * 0x1c;
          *(undefined4 *)(lVar15 + lVar16) = 3;
          *(undefined8 *)(lVar15 + 4 + lVar16) = uVar1;
          *(undefined4 *)(lVar15 + 0xc + lVar16) = uVar20;
          *(int *)(lVar15 + 0x10 + lVar16) = iVar3 + 10;
          *(int *)(lVar15 + 0x14 + lVar16) = iVar4;
          *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
          *(longlong *)(lVar14 + 0x100) = lVar6 + 1;
          bVar2 = pbVar8[0x11];
          uVar18 = 0x19;
          uVar21 = bVar2 - 0x7c;
          if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
            uVar18 = 0x1a;
          }
          if (plVar13[1] != 0) {
            uVar20 = *(undefined4 *)(pbVar8 + 4);
            lVar6 = *plVar13;
            uVar19 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                   lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                   *(undefined8 *)(lVar6 + 0x88),(short)plVar13[7],plVar13[1],
                                   plVar13[2],uVar20,CONCAT11(uVar23,uVar18),1);
            if (*pbVar8 != bVar2 && *pbVar8 != 0) {
              pdb_140e2c3a0(*plVar13,pbVar8);
            }
            lVar6 = *plVar13;
            uVar5 = *(undefined4 *)pbVar8;
            lVar14 = *(longlong *)(lVar6 + 0x100);
            if (lVar14 == *(longlong *)(lVar6 + 0xf0)) {
              pdb_142dbafc0(lVar6 + 0xf0);
            }
            lVar15 = *(longlong *)(lVar6 + 0xf8);
            lVar16 = lVar14 * 0x1c;
            *(undefined4 *)(lVar15 + lVar16) = 0;
            *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar20,uVar5);
            *(int *)(lVar15 + 0x10 + lVar16) = iVar3 + 4;
            *(int *)(lVar15 + 0x14 + lVar16) = iVar4;
            *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
            *(longlong *)(lVar6 + 0x100) = lVar14 + 1;
            if (plVar13[1] != 0) {
              lVar6 = param_1[0xb];
              lVar14 = *plVar13;
              uVar20 = *(undefined4 *)(lVar6 + 0x10);
              uVar23 = 0x33;
              uVar19 = pdb_141764730(*(undefined8 *)(lVar14 + 200),*(undefined8 *)(lVar14 + 0xd0),
                                     lVar14 + 0xd8,*(undefined8 *)(lVar14 + 0x80),
                                     *(undefined8 *)(lVar14 + 0x88),(short)plVar13[7],plVar13[1],
                                     plVar13[2],uVar20,0x3319,*(undefined4 *)(lVar14 + 0x248));
              lVar14 = *plVar13;
              uVar1 = *(undefined8 *)(lVar6 + 8);
              lVar6 = *(longlong *)(lVar14 + 0x100);
              if (lVar6 == *(longlong *)(lVar14 + 0xf0)) {
                pdb_142dbafc0(lVar14 + 0xf0);
              }
              pbVar7 = pbStack_b0;
              lVar15 = *(longlong *)(lVar14 + 0xf8);
              lVar16 = lVar6 * 0x1c;
              *(undefined4 *)(lVar15 + lVar16) = 3;
              *(undefined8 *)(lVar15 + 4 + lVar16) = uVar1;
              *(undefined4 *)(lVar15 + 0xc + lVar16) = uVar20;
              *(int *)(lVar15 + 0x10 + lVar16) = iVar3 + 9;
              *(int *)(lVar15 + 0x14 + lVar16) = iVar4;
              *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
              *(longlong *)(lVar14 + 0x100) = lVar6 + 1;
              bVar2 = pbStack_b0[0x11];
              uVar18 = 0x19;
              uVar21 = bVar2 - 0x7c;
              if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
                uVar18 = 0x1a;
              }
              if (plVar13[1] != 0) {
                uVar20 = *(undefined4 *)(pbStack_b0 + 4);
                lVar6 = *plVar13;
                uVar19 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                       lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                       *(undefined8 *)(lVar6 + 0x88),(short)plVar13[7],plVar13[1],
                                       plVar13[2],uVar20,CONCAT11(uVar23,uVar18),1);
                if (*pbVar7 != bVar2 && *pbVar7 != 0) {
                  pdb_140e2c3a0(*plVar13,pbVar7);
                }
                lVar6 = *plVar13;
                uVar5 = *(undefined4 *)pbVar7;
                lVar14 = *(longlong *)(lVar6 + 0x100);
                if (lVar14 == *(longlong *)(lVar6 + 0xf0)) {
                  pdb_142dbafc0(lVar6 + 0xf0);
                }
                lVar15 = *(longlong *)(lVar6 + 0xf8);
                lVar16 = lVar14 * 0x1c;
                *(undefined4 *)(lVar15 + lVar16) = 0;
                *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar20,uVar5);
                *(int *)(lVar15 + 0x10 + lVar16) = iVar3 + 5;
                *(int *)(lVar15 + 0x14 + lVar16) = iVar4;
                *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
                *(longlong *)(lVar6 + 0x100) = lVar14 + 1;
                if (plVar13[1] != 0) {
                  lVar6 = *plVar13;
                  uVar1 = *puStack_c0;
                  uVar23 = 0x33;
                  uVar20 = pdb_141764730(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                         lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                         *(undefined8 *)(lVar6 + 0x88),(short)plVar13[7],plVar13[1],
                                         plVar13[2],(int)((ulonglong)uVar1 >> 0x20),0x3319,
                                         *(undefined4 *)(lVar6 + 0x248));
                  lVar6 = *plVar13;
                  lVar14 = *(longlong *)(lVar6 + 0x100);
                  if (lVar14 == *(longlong *)(lVar6 + 0xf0)) {
                    pdb_142dbafc0(lVar6 + 0xf0);
                  }
                  pbVar7 = pbStack_b8;
                  lVar15 = *(longlong *)(lVar6 + 0xf8);
                  lVar16 = lVar14 * 0x1c;
                  *(undefined4 *)(lVar15 + lVar16) = 1;
                  *(undefined8 *)(lVar15 + 4 + lVar16) = uVar1;
                  *(int *)(lVar15 + 0x10 + lVar16) = iVar3 + 8;
                  *(int *)(lVar15 + 0x14 + lVar16) = iVar4;
                  *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar20;
                  *(longlong *)(lVar6 + 0x100) = lVar14 + 1;
                  bVar2 = pbStack_b8[0x11];
                  uVar18 = 0x19;
                  uVar21 = bVar2 - 0x7c;
                  if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
                    uVar18 = 0x1a;
                  }
                  if (plVar13[1] != 0) {
                    uVar20 = *(undefined4 *)(pbStack_b8 + 4);
                    lVar6 = *plVar13;
                    uVar19 = pdb_141764080(*(undefined8 *)(lVar6 + 200),
                                           *(undefined8 *)(lVar6 + 0xd0),lVar6 + 0xd8,
                                           *(undefined8 *)(lVar6 + 0x80),
                                           *(undefined8 *)(lVar6 + 0x88),(short)plVar13[7],
                                           plVar13[1],plVar13[2],uVar20,CONCAT11(uVar23,uVar18),1);
                    if (*pbVar7 != bVar2 && *pbVar7 != 0) {
                      pdb_140e2c3a0(*plVar13,pbVar7);
                    }
                    lVar6 = *plVar13;
                    uVar5 = *(undefined4 *)pbVar7;
                    lVar14 = *(longlong *)(lVar6 + 0x100);
                    if (lVar14 == *(longlong *)(lVar6 + 0xf0)) {
                      pdb_142dbafc0(lVar6 + 0xf0);
                    }
                    lVar15 = *(longlong *)(lVar6 + 0xf8);
                    lVar16 = lVar14 * 0x1c;
                    *(undefined4 *)(lVar15 + lVar16) = 0;
                    *(ulonglong *)(lVar15 + 4 + lVar16) = CONCAT44(uVar20,uVar5);
                    *(int *)(lVar15 + 0x10 + lVar16) = iVar3 + 6;
                    *(int *)(lVar15 + 0x14 + lVar16) = iVar4;
                    *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar19;
                    *(longlong *)(lVar6 + 0x100) = lVar14 + 1;
                    if (plVar13[1] != 0) {
                      lVar6 = *plVar13;
                      uVar1 = *puStack_c8;
                      uVar20 = pdb_141764730(*(undefined8 *)(lVar6 + 200),
                                             *(undefined8 *)(lVar6 + 0xd0),lVar6 + 0xd8,
                                             *(undefined8 *)(lVar6 + 0x80),
                                             *(undefined8 *)(lVar6 + 0x88),(short)plVar13[7],
                                             plVar13[1],plVar13[2],(int)((ulonglong)uVar1 >> 0x20),
                                             0x3319,*(undefined4 *)(lVar6 + 0x248));
                      lVar6 = *plVar13;
                      lVar14 = *(longlong *)(lVar6 + 0x100);
                      if (lVar14 == *(longlong *)(lVar6 + 0xf0)) {
                        pdb_142dbafc0(lVar6 + 0xf0);
                      }
                      lVar15 = *(longlong *)(lVar6 + 0xf8);
                      lVar16 = lVar14 * 0x1c;
                      *(undefined4 *)(lVar15 + lVar16) = 1;
                      *(undefined8 *)(lVar15 + 4 + lVar16) = uVar1;
                      *(int *)(lVar15 + 0x10 + lVar16) = iVar3 + 7;
                      *(int *)(lVar15 + 0x14 + lVar16) = iVar4;
                      *(undefined4 *)(lVar15 + 0x18 + lVar16) = uVar20;
                      *(longlong *)(lVar6 + 0x100) = lVar14 + 1;
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
  pdb_142dc8150(&UNK_143332e78);
}

