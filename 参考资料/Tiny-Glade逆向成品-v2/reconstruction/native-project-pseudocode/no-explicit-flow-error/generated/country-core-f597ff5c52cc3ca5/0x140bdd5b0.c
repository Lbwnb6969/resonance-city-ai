// VA 0x140bdd5b0, PDB extent 2917 bytes
// country_core::shader::compute_froxel_lighting::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::compute_froxel_lighting::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 2917 */

void pdb_140bdd5b0(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined2 in_stack_ffffffffffffff20;
  undefined2 uVar24;
  undefined8 uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  byte *pbStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  lStack_88 = param_3[1];
  pbVar5 = (byte *)param_1[1];
  uVar23 = param_2[2];
  uStack_90 = (ulonglong)uVar23;
  *(ulonglong *)(lStack_88 + uStack_90) =
       (ulonglong)*(ushort *)(pbVar5 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar5 + 8);
  puVar6 = (undefined8 *)param_1[2];
  *(ulonglong *)(lStack_88 + (ulonglong)(uVar23 + 8)) =
       (ulonglong)*(ushort *)((longlong)puVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar6 + 1);
  pbVar7 = (byte *)param_1[0xc];
  *(ulonglong *)(lStack_88 + (ulonglong)(uVar23 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  plVar8 = (longlong *)*param_3;
  pbVar9 = (byte *)*param_1;
  bVar1 = pbVar9[0x11];
  uVar19 = 0x19;
  uVar23 = bVar1 - 0x7c;
  if ((uVar23 < 7) && ((0x75U >> (uVar23 & 0x1f) & 1) != 0)) {
    uVar19 = 0x1a;
  }
  plStack_80 = param_3;
  if (plVar8[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar22 = *(undefined4 *)(pbVar9 + 4);
    lVar10 = *plVar8;
    uVar24 = CONCAT11((char)((ushort)in_stack_ffffffffffffff20 >> 8),uVar19);
    pbStack_98 = pbVar7;
    uVar21 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                           lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                           *(undefined8 *)(lVar10 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2],
                           uVar22,uVar24,1);
    uVar19 = (undefined1)((ushort)uVar24 >> 8);
    if (*pbVar9 != bVar1 && *pbVar9 != 0) {
      pdb_140e2c3a0(*plVar8,pbVar9);
    }
    lVar10 = *plVar8;
    uVar4 = *(undefined4 *)pbVar9;
    lVar11 = *(longlong *)(lVar10 + 0x100);
    if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
      pdb_142dbafc0(lVar10 + 0xf0);
    }
    lVar12 = *(longlong *)(lVar10 + 0xf8);
    lVar14 = lVar11 * 0x1c;
    *(undefined4 *)(lVar12 + lVar14) = 0;
    *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar22,uVar4);
    *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 0x10;
    *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
    *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar21;
    *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
    bVar1 = pbVar5[0x11];
    uVar20 = 0x19;
    uVar23 = bVar1 - 0x7c;
    if ((uVar23 < 7) && ((0x75U >> (uVar23 & 0x1f) & 1) != 0)) {
      uVar20 = 0x1a;
    }
    if (plVar8[1] != 0) {
      uVar22 = *(undefined4 *)(pbVar5 + 4);
      lVar10 = *plVar8;
      uVar21 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                             lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                             *(undefined8 *)(lVar10 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2],
                             uVar22,CONCAT11(uVar19,uVar20),1);
      if (*pbVar5 != bVar1 && *pbVar5 != 0) {
        pdb_140e2c3a0(*plVar8,pbVar5);
      }
      lVar10 = *plVar8;
      uVar4 = *(undefined4 *)pbVar5;
      lVar11 = *(longlong *)(lVar10 + 0x100);
      if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
        pdb_142dbafc0(lVar10 + 0xf0);
      }
      lVar12 = *(longlong *)(lVar10 + 0xf8);
      lVar14 = lVar11 * 0x1c;
      *(undefined4 *)(lVar12 + lVar14) = 0;
      *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar22,uVar4);
      *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 1;
      *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
      *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar21;
      *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
      if (plVar8[1] != 0) {
        lVar10 = *plVar8;
        uVar13 = *puVar6;
        uVar22 = pdb_141764730(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                               lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                               *(undefined8 *)(lVar10 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2],
                               (int)((ulonglong)uVar13 >> 0x20),0x3319,
                               *(undefined4 *)(lVar10 + 0x248));
        lVar10 = *plVar8;
        lVar11 = *(longlong *)(lVar10 + 0x100);
        if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
          pdb_142dbafc0(lVar10 + 0xf0);
        }
        lVar12 = *(longlong *)(lVar10 + 0xf8);
        lVar14 = lVar11 * 0x1c;
        *(undefined4 *)(lVar12 + lVar14) = 1;
        *(undefined8 *)(lVar12 + 4 + lVar14) = uVar13;
        *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 2;
        *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
        *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar22;
        *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
        if (plVar8[1] != 0) {
          lVar10 = *plVar8;
          uVar13 = *(undefined8 *)param_1[3];
          uVar19 = 0x33;
          uVar22 = pdb_141764730(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                                 lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                                 *(undefined8 *)(lVar10 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2]
                                 ,(int)((ulonglong)uVar13 >> 0x20),0x3319,
                                 *(undefined4 *)(lVar10 + 0x248));
          lVar10 = *plVar8;
          lVar11 = *(longlong *)(lVar10 + 0x100);
          if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
            pdb_142dbafc0(lVar10 + 0xf0);
          }
          lVar12 = *(longlong *)(lVar10 + 0xf8);
          lVar14 = lVar11 * 0x1c;
          *(undefined4 *)(lVar12 + lVar14) = 1;
          *(undefined8 *)(lVar12 + 4 + lVar14) = uVar13;
          *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 0xf;
          *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
          *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar22;
          *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
          pbVar5 = (byte *)param_1[4];
          bVar1 = pbVar5[0x11];
          uVar20 = 0x19;
          uVar23 = bVar1 - 0x7c;
          if ((uVar23 < 7) && ((0x75U >> (uVar23 & 0x1f) & 1) != 0)) {
            uVar20 = 0x1a;
          }
          if (plVar8[1] != 0) {
            uVar22 = *(undefined4 *)(pbVar5 + 4);
            lVar10 = *plVar8;
            uVar21 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                                   lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                                   *(undefined8 *)(lVar10 + 0x88),(short)plVar8[7],plVar8[1],
                                   plVar8[2],uVar22,CONCAT11(uVar19,uVar20),1);
            if (*pbVar5 != bVar1 && *pbVar5 != 0) {
              pdb_140e2c3a0(*plVar8,pbVar5);
            }
            lVar10 = *plVar8;
            uVar4 = *(undefined4 *)pbVar5;
            lVar11 = *(longlong *)(lVar10 + 0x100);
            if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
              pdb_142dbafc0(lVar10 + 0xf0);
            }
            lVar12 = *(longlong *)(lVar10 + 0xf8);
            lVar14 = lVar11 * 0x1c;
            *(undefined4 *)(lVar12 + lVar14) = 0;
            *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar22,uVar4);
            *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 3;
            *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
            *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar21;
            *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
            if (plVar8[1] != 0) {
              lVar10 = *plVar8;
              uVar13 = *(undefined8 *)param_1[5];
              uVar19 = 0x33;
              uVar22 = pdb_141764730(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                                     lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                                     *(undefined8 *)(lVar10 + 0x88),(short)plVar8[7],plVar8[1],
                                     plVar8[2],(int)((ulonglong)uVar13 >> 0x20),0x3319,
                                     *(undefined4 *)(lVar10 + 0x248));
              lVar10 = *plVar8;
              lVar11 = *(longlong *)(lVar10 + 0x100);
              if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
                pdb_142dbafc0(lVar10 + 0xf0);
              }
              lVar12 = *(longlong *)(lVar10 + 0xf8);
              lVar14 = lVar11 * 0x1c;
              *(undefined4 *)(lVar12 + lVar14) = 1;
              *(undefined8 *)(lVar12 + 4 + lVar14) = uVar13;
              *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 4;
              *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
              *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar22;
              *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
              pbVar5 = (byte *)param_1[6];
              bVar1 = pbVar5[0x11];
              uVar20 = 0x19;
              uVar23 = bVar1 - 0x7c;
              if ((uVar23 < 7) && ((0x75U >> (uVar23 & 0x1f) & 1) != 0)) {
                uVar20 = 0x1a;
              }
              if (plVar8[1] != 0) {
                uVar22 = *(undefined4 *)(pbVar5 + 4);
                lVar10 = *plVar8;
                uVar24 = CONCAT11(uVar19,uVar20);
                uVar21 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                                       lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                                       *(undefined8 *)(lVar10 + 0x88),(short)plVar8[7],plVar8[1],
                                       plVar8[2],uVar22,uVar24,1);
                uVar19 = (undefined1)((ushort)uVar24 >> 8);
                if (*pbVar5 != bVar1 && *pbVar5 != 0) {
                  pdb_140e2c3a0(*plVar8,pbVar5);
                }
                lVar10 = *plVar8;
                uVar4 = *(undefined4 *)pbVar5;
                lVar11 = *(longlong *)(lVar10 + 0x100);
                if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
                  pdb_142dbafc0(lVar10 + 0xf0);
                }
                lVar12 = *(longlong *)(lVar10 + 0xf8);
                lVar14 = lVar11 * 0x1c;
                *(undefined4 *)(lVar12 + lVar14) = 0;
                *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar22,uVar4);
                *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 5;
                *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
                *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar21;
                *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
                pbVar5 = (byte *)param_1[7];
                bVar1 = pbVar5[0x11];
                uVar20 = 0x19;
                uVar23 = bVar1 - 0x7c;
                if ((uVar23 < 7) && ((0x75U >> (uVar23 & 0x1f) & 1) != 0)) {
                  uVar20 = 0x1a;
                }
                if (plVar8[1] != 0) {
                  uVar22 = *(undefined4 *)(pbVar5 + 4);
                  lVar10 = *plVar8;
                  uVar24 = CONCAT11(uVar19,uVar20);
                  uVar21 = pdb_141764080(*(undefined8 *)(lVar10 + 200),
                                         *(undefined8 *)(lVar10 + 0xd0),lVar10 + 0xd8,
                                         *(undefined8 *)(lVar10 + 0x80),
                                         *(undefined8 *)(lVar10 + 0x88),(short)plVar8[7],plVar8[1],
                                         plVar8[2],uVar22,uVar24,1);
                  uVar19 = (undefined1)((ushort)uVar24 >> 8);
                  if (*pbVar5 != bVar1 && *pbVar5 != 0) {
                    pdb_140e2c3a0(*plVar8,pbVar5);
                  }
                  lVar10 = *plVar8;
                  uVar4 = *(undefined4 *)pbVar5;
                  lVar11 = *(longlong *)(lVar10 + 0x100);
                  if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
                    pdb_142dbafc0(lVar10 + 0xf0);
                  }
                  lVar12 = *(longlong *)(lVar10 + 0xf8);
                  lVar14 = lVar11 * 0x1c;
                  *(undefined4 *)(lVar12 + lVar14) = 0;
                  *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar22,uVar4);
                  *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 6;
                  *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
                  *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar21;
                  *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
                  lVar10 = plStack_80[2];
                  lStack_a8 = lStack_88;
                  iStack_4c = iVar2 + 0xc;
                  iStack_44 = (int)uStack_90 + 0x34;
                  plStack_78 = (longlong *)param_1[8];
                  lStack_70 = param_1[9];
                  lStack_68 = param_1[10];
                  uStack_60 = *(undefined4 *)(param_1 + 0xb);
                  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x5c);
                  uStack_b0 = plVar8;
                  lStack_a0 = lVar10;
                  iStack_48 = iVar3;
                  pdb_140908a10(&plStack_78,&iStack_4c,&uStack_b0);
                  pbVar5 = pbStack_98;
                  bVar1 = pbStack_98[0x11];
                  uVar20 = 0x19;
                  uVar23 = bVar1 - 0x7c;
                  if ((uVar23 < 7) && ((0x75U >> (uVar23 & 0x1f) & 1) != 0)) {
                    uVar20 = 0x1a;
                  }
                  if (plVar8[1] != 0) {
                    uVar22 = *(undefined4 *)(pbStack_98 + 4);
                    lVar11 = *plVar8;
                    uVar21 = pdb_141764080(*(undefined8 *)(lVar11 + 200),
                                           *(undefined8 *)(lVar11 + 0xd0),lVar11 + 0xd8,
                                           *(undefined8 *)(lVar11 + 0x80),
                                           *(undefined8 *)(lVar11 + 0x88),(short)plVar8[7],plVar8[1]
                                           ,plVar8[2],uVar22,CONCAT11(uVar19,uVar20),1);
                    if (*pbVar5 != bVar1 && *pbVar5 != 0) {
                      pdb_140e2c3a0(*plVar8,pbVar5);
                    }
                    lVar11 = *plVar8;
                    uVar4 = *(undefined4 *)pbVar5;
                    lVar12 = *(longlong *)(lVar11 + 0x100);
                    if (lVar12 == *(longlong *)(lVar11 + 0xf0)) {
                      pdb_142dbafc0(lVar11 + 0xf0);
                    }
                    lVar18 = lStack_88;
                    uVar17 = uStack_90;
                    lVar14 = *(longlong *)(lVar11 + 0xf8);
                    lVar16 = lVar12 * 0x1c;
                    *(undefined4 *)(lVar14 + lVar16) = 0;
                    *(ulonglong *)(lVar14 + 4 + lVar16) = CONCAT44(uVar22,uVar4);
                    *(int *)(lVar14 + 0x10 + lVar16) = iVar2 + 7;
                    *(int *)(lVar14 + 0x14 + lVar16) = iVar3;
                    *(undefined4 *)(lVar14 + 0x18 + lVar16) = uVar21;
                    *(longlong *)(lVar11 + 0x100) = lVar12 + 1;
                    iVar15 = (int)uStack_90;
                    *(undefined4 *)(lStack_88 + (ulonglong)(iVar15 + 0x18)) =
                         *(undefined4 *)(param_1 + 0x11);
                    *(undefined4 *)(lStack_88 + (ulonglong)(iVar15 + 0x1c)) =
                         *(undefined4 *)((longlong)param_1 + 0x8c);
                    lStack_70 = lStack_88;
                    uStack_b0 = (longlong *)CONCAT44(iVar3,iVar2 + 8);
                    plStack_78 = plVar8;
                    lStack_68 = lVar10;
                    lStack_a8._0_4_ = iVar15 + 0x20;
                    pdb_141b045e0(param_1[0xd],param_1[0xe],&uStack_b0,&plStack_78);
                    lStack_70 = lVar18;
                    uStack_b0 = (longlong *)CONCAT44(iVar3,iVar2 + 10);
                    lStack_a8 = CONCAT44(lStack_a8._4_4_,iVar15 + 0x28);
                    plStack_78 = plVar8;
                    lStack_68 = lVar10;
                    pdb_141b045e0(param_1[0xf],param_1[0x10],&uStack_b0,&plStack_78);
                    *(undefined4 *)(lVar18 + (ulonglong)(iVar15 + 0x30)) =
                         *(undefined4 *)(param_1 + 0x12);
                    *(undefined1 *)(plStack_80[3] + uVar17) =
                         *(undefined1 *)((longlong)param_1 + 0x94);
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
  pdb_142dc8150(&UNK_143332e78);
}

