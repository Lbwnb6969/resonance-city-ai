// VA 0x140bf6890, PDB extent 2190 bytes
// country_core::shader::paths::path_mask_visual::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::paths::path_mask_visual::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 2190 */

void pdb_140bf6890(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined2 in_stack_ffffffffffffff60;
  undefined2 uVar21;
  int iStack_84;
  int iStack_80;
  uint uStack_7c;
  byte *pbStack_78;
  undefined8 *puStack_70;
  byte *pbStack_68;
  undefined8 *puStack_60;
  longlong *plStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  uVar17 = (undefined1)((ushort)in_stack_ffffffffffffff60 >> 8);
  lStack_50 = param_3[1];
  puStack_60 = (undefined8 *)param_1[2];
  uStack_7c = param_2[2];
  *(ulonglong *)(lStack_50 + (ulonglong)uStack_7c) =
       (ulonglong)*(ushort *)((longlong)puStack_60 + 10) << 0x20 |
       (ulonglong)*(ushort *)(puStack_60 + 1);
  puVar5 = (undefined8 *)param_1[4];
  *(ulonglong *)(lStack_50 + (ulonglong)(uStack_7c + 8)) =
       (ulonglong)*(ushort *)((longlong)puVar5 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar5 + 1);
  pbVar6 = (byte *)param_1[1];
  *(ulonglong *)(lStack_50 + (ulonglong)(uStack_7c + 0x30)) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  pbStack_68 = (byte *)param_1[6];
  *(ulonglong *)(lStack_50 + (ulonglong)(uStack_7c + 0x10)) =
       (ulonglong)*(ushort *)(pbStack_68 + 10) << 0x20 | (ulonglong)*(ushort *)(pbStack_68 + 8);
  pbVar7 = (byte *)param_1[3];
  *(ulonglong *)(lStack_50 + (ulonglong)(uStack_7c + 0x28)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  pbVar8 = (byte *)param_1[7];
  *(ulonglong *)(lStack_50 + (ulonglong)(uStack_7c + 0x18)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  pbVar9 = (byte *)param_1[5];
  *(ulonglong *)(lStack_50 + (ulonglong)(uStack_7c + 0x20)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  plVar10 = (longlong *)*param_3;
  lStack_48 = param_3[2];
  iVar2 = *param_2;
  iVar3 = param_2[1];
  iStack_84 = iVar2 + 1;
  iStack_80 = iVar3;
  plStack_58 = plVar10;
  pdb_140bdf110(*param_1,&iStack_84,&plStack_58);
  bVar1 = pbVar6[0x11];
  uVar16 = 0x19;
  uVar20 = bVar1 - 0x7c;
  if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
    uVar16 = 0x1a;
  }
  if (plVar10[1] != 0) {
    uVar19 = *(undefined4 *)(pbVar6 + 4);
    lVar11 = *plVar10;
    pbStack_78 = pbVar8;
    puStack_70 = puVar5;
    uVar18 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                           lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                           *(undefined8 *)(lVar11 + 0x88),(short)plVar10[7],plVar10[1],plVar10[2],
                           uVar19,CONCAT11(uVar17,uVar16),1);
    if (*pbVar6 != bVar1 && *pbVar6 != 0) {
      pdb_140e2c3a0(*plVar10,pbVar6);
    }
    lVar11 = *plVar10;
    uVar4 = *(undefined4 *)pbVar6;
    lVar12 = *(longlong *)(lVar11 + 0x100);
    if (lVar12 == *(longlong *)(lVar11 + 0xf0)) {
      pdb_142dbafc0(lVar11 + 0xf0);
    }
    lVar13 = *(longlong *)(lVar11 + 0xf8);
    lVar15 = lVar12 * 0x1c;
    *(undefined4 *)(lVar13 + lVar15) = 0;
    *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
    *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 8;
    *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
    *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
    *(longlong *)(lVar11 + 0x100) = lVar12 + 1;
    if (plVar10[1] != 0) {
      lVar11 = *plVar10;
      uVar14 = *puStack_60;
      uVar16 = 0x33;
      uVar19 = pdb_141764730(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                             lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                             *(undefined8 *)(lVar11 + 0x88),(short)plVar10[7],plVar10[1],plVar10[2],
                             (int)((ulonglong)uVar14 >> 0x20),0x3319,*(undefined4 *)(lVar11 + 0x248)
                            );
      lVar11 = *plVar10;
      lVar12 = *(longlong *)(lVar11 + 0x100);
      if (lVar12 == *(longlong *)(lVar11 + 0xf0)) {
        pdb_142dbafc0(lVar11 + 0xf0);
      }
      lVar13 = *(longlong *)(lVar11 + 0xf8);
      lVar15 = lVar12 * 0x1c;
      *(undefined4 *)(lVar13 + lVar15) = 1;
      *(undefined8 *)(lVar13 + 4 + lVar15) = uVar14;
      *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 2;
      *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
      *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar19;
      *(longlong *)(lVar11 + 0x100) = lVar12 + 1;
      bVar1 = pbVar7[0x11];
      uVar17 = 0x19;
      uVar20 = bVar1 - 0x7c;
      if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
        uVar17 = 0x1a;
      }
      if (plVar10[1] != 0) {
        uVar19 = *(undefined4 *)(pbVar7 + 4);
        lVar11 = *plVar10;
        uVar18 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                               lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                               *(undefined8 *)(lVar11 + 0x88),(short)plVar10[7],plVar10[1],
                               plVar10[2],uVar19,CONCAT11(uVar16,uVar17),1);
        if (*pbVar7 != bVar1 && *pbVar7 != 0) {
          pdb_140e2c3a0(*plVar10,pbVar7);
        }
        lVar11 = *plVar10;
        uVar4 = *(undefined4 *)pbVar7;
        lVar12 = *(longlong *)(lVar11 + 0x100);
        if (lVar12 == *(longlong *)(lVar11 + 0xf0)) {
          pdb_142dbafc0(lVar11 + 0xf0);
        }
        lVar13 = *(longlong *)(lVar11 + 0xf8);
        lVar15 = lVar12 * 0x1c;
        *(undefined4 *)(lVar13 + lVar15) = 0;
        *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
        *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 7;
        *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
        *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
        *(longlong *)(lVar11 + 0x100) = lVar12 + 1;
        if (plVar10[1] != 0) {
          lVar11 = *plVar10;
          uVar14 = *puStack_70;
          uVar16 = 0x33;
          uVar19 = pdb_141764730(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                                 lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                                 *(undefined8 *)(lVar11 + 0x88),(short)plVar10[7],plVar10[1],
                                 plVar10[2],(int)((ulonglong)uVar14 >> 0x20),0x3319,
                                 *(undefined4 *)(lVar11 + 0x248));
          lVar11 = *plVar10;
          lVar12 = *(longlong *)(lVar11 + 0x100);
          if (lVar12 == *(longlong *)(lVar11 + 0xf0)) {
            pdb_142dbafc0(lVar11 + 0xf0);
          }
          lVar13 = *(longlong *)(lVar11 + 0xf8);
          lVar15 = lVar12 * 0x1c;
          *(undefined4 *)(lVar13 + lVar15) = 1;
          *(undefined8 *)(lVar13 + 4 + lVar15) = uVar14;
          *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 3;
          *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
          *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar19;
          *(longlong *)(lVar11 + 0x100) = lVar12 + 1;
          bVar1 = pbVar9[0x11];
          uVar17 = 0x19;
          uVar20 = bVar1 - 0x7c;
          if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
            uVar17 = 0x1a;
          }
          if (plVar10[1] != 0) {
            uVar19 = *(undefined4 *)(pbVar9 + 4);
            lVar11 = *plVar10;
            uVar21 = CONCAT11(uVar16,uVar17);
            uVar18 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                                   lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                                   *(undefined8 *)(lVar11 + 0x88),(short)plVar10[7],plVar10[1],
                                   plVar10[2],uVar19,uVar21,1);
            uVar16 = (undefined1)((ushort)uVar21 >> 8);
            if (*pbVar9 != bVar1 && *pbVar9 != 0) {
              pdb_140e2c3a0(*plVar10,pbVar9);
            }
            pbVar6 = pbStack_68;
            lVar11 = *plVar10;
            uVar4 = *(undefined4 *)pbVar9;
            lVar12 = *(longlong *)(lVar11 + 0x100);
            if (lVar12 == *(longlong *)(lVar11 + 0xf0)) {
              pdb_142dbafc0(lVar11 + 0xf0);
            }
            lVar13 = *(longlong *)(lVar11 + 0xf8);
            lVar15 = lVar12 * 0x1c;
            *(undefined4 *)(lVar13 + lVar15) = 0;
            *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
            *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 6;
            *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
            *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
            *(longlong *)(lVar11 + 0x100) = lVar12 + 1;
            bVar1 = pbVar6[0x11];
            uVar17 = 0x19;
            uVar20 = bVar1 - 0x7c;
            if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
              uVar17 = 0x1a;
            }
            if (plVar10[1] != 0) {
              uVar19 = *(undefined4 *)(pbVar6 + 4);
              lVar11 = *plVar10;
              uVar21 = CONCAT11(uVar16,uVar17);
              uVar18 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                                     lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                                     *(undefined8 *)(lVar11 + 0x88),(short)plVar10[7],plVar10[1],
                                     plVar10[2],uVar19,uVar21,1);
              uVar16 = (undefined1)((ushort)uVar21 >> 8);
              if (*pbVar6 != bVar1 && *pbVar6 != 0) {
                pdb_140e2c3a0(*plVar10,pbVar6);
              }
              lVar11 = *plVar10;
              uVar4 = *(undefined4 *)pbVar6;
              lVar12 = *(longlong *)(lVar11 + 0x100);
              if (lVar12 == *(longlong *)(lVar11 + 0xf0)) {
                pdb_142dbafc0(lVar11 + 0xf0);
              }
              pbVar6 = pbStack_78;
              lVar13 = *(longlong *)(lVar11 + 0xf8);
              lVar15 = lVar12 * 0x1c;
              *(undefined4 *)(lVar13 + lVar15) = 0;
              *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
              *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 4;
              *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
              *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
              *(longlong *)(lVar11 + 0x100) = lVar12 + 1;
              bVar1 = pbStack_78[0x11];
              uVar17 = 0x19;
              uVar20 = bVar1 - 0x7c;
              if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
                uVar17 = 0x1a;
              }
              if (plVar10[1] != 0) {
                uVar19 = *(undefined4 *)(pbStack_78 + 4);
                lVar11 = *plVar10;
                uVar18 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                                       lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                                       *(undefined8 *)(lVar11 + 0x88),(short)plVar10[7],plVar10[1],
                                       plVar10[2],uVar19,CONCAT11(uVar16,uVar17),1);
                if (*pbVar6 != bVar1 && *pbVar6 != 0) {
                  pdb_140e2c3a0(*plVar10,pbVar6);
                }
                lVar11 = *plVar10;
                uVar4 = *(undefined4 *)pbVar6;
                lVar12 = *(longlong *)(lVar11 + 0x100);
                if (lVar12 == *(longlong *)(lVar11 + 0xf0)) {
                  pdb_142dbafc0(lVar11 + 0xf0);
                }
                lVar13 = *(longlong *)(lVar11 + 0xf8);
                lVar15 = lVar12 * 0x1c;
                *(undefined4 *)(lVar13 + lVar15) = 0;
                *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
                *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 5;
                *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
                *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
                *(longlong *)(lVar11 + 0x100) = lVar12 + 1;
                return;
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

