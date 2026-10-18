// VA 0x140a95d00, PDB extent 1921 bytes
// country_core::shader::water::deferred_rt::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::water::deferred_rt::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1921 */

void pdb_140a95d00(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined2 in_stack_ffffffffffffff00;
  undefined2 uVar18;
  undefined1 uVar19;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  byte *pbStack_c8;
  undefined8 *puStack_c0;
  byte *pbStack_b8;
  longlong *plStack_b0;
  byte *pbStack_a8;
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
  uVar17 = param_2[2];
  pbStack_a8 = (byte *)param_1[8];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar17 + 4)) =
       (ulonglong)*(ushort *)(pbStack_a8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbStack_a8 + 8);
  pbStack_b8 = (byte *)param_1[10];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar17 + 0xc)) =
       (ulonglong)*(ushort *)(pbStack_b8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbStack_b8 + 8);
  pbVar7 = (byte *)param_1[0xb];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar17 + 0x14)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  puVar8 = (undefined8 *)param_1[9];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar17 + 0x1c)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  *(int *)(lVar6 + (ulonglong)uVar17) = (int)param_1[0xc];
  plVar9 = (longlong *)*param_3;
  if (plVar9[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar10 = *param_1;
    uVar16 = *(undefined4 *)(lVar10 + 0x10);
    lVar11 = *plVar9;
    uVar18 = CONCAT11((char)((ushort)in_stack_ffffffffffffff00 >> 8),0x19);
    pbStack_c8 = pbVar7;
    puStack_c0 = puVar8;
    plStack_b0 = param_3;
    uVar15 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                           lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                           *(undefined8 *)(lVar11 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],
                           uVar16,uVar18,1);
    uVar19 = (undefined1)((ushort)uVar18 >> 8);
    lVar11 = *plVar9;
    uVar1 = *(undefined8 *)(lVar10 + 8);
    lVar10 = *(longlong *)(lVar11 + 0x100);
    if (lVar10 == *(longlong *)(lVar11 + 0xf0)) {
      pdb_142dbafc0(lVar11 + 0xf0);
    }
    lVar12 = *(longlong *)(lVar11 + 0xf8);
    lVar13 = lVar10 * 0x1c;
    *(undefined4 *)(lVar12 + lVar13) = 4;
    *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
    *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar16;
    *(int *)(lVar12 + 0x10 + lVar13) = iVar3 + 1;
    *(int *)(lVar12 + 0x14 + lVar13) = iVar4;
    *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar15;
    *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
    if (plVar9[1] != 0) {
      lVar10 = param_1[1];
      uVar16 = *(undefined4 *)(lVar10 + 0x10);
      lVar11 = *plVar9;
      uVar18 = CONCAT11(uVar19,0x19);
      uVar15 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                             lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                             *(undefined8 *)(lVar11 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],
                             uVar16,uVar18,1);
      uVar19 = (undefined1)((ushort)uVar18 >> 8);
      lVar11 = *plVar9;
      uVar1 = *(undefined8 *)(lVar10 + 8);
      lVar10 = *(longlong *)(lVar11 + 0x100);
      if (lVar10 == *(longlong *)(lVar11 + 0xf0)) {
        pdb_142dbafc0(lVar11 + 0xf0);
      }
      lVar12 = *(longlong *)(lVar11 + 0xf8);
      lVar13 = lVar10 * 0x1c;
      *(undefined4 *)(lVar12 + lVar13) = 4;
      *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
      *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar16;
      *(int *)(lVar12 + 0x10 + lVar13) = iVar3 + 2;
      *(int *)(lVar12 + 0x14 + lVar13) = iVar4;
      *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar15;
      *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
      lStack_90 = plStack_b0[2];
      iStack_d4 = iVar3 + 7;
      iStack_cc = uVar17 + 0x24;
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
      plStack_a0 = plVar9;
      lStack_98 = lVar6;
      pdb_140bdc8f0(&uStack_88,&iStack_d4,&plStack_a0);
      pbVar7 = pbStack_a8;
      bVar2 = pbStack_a8[0x11];
      uVar14 = 0x19;
      uVar17 = bVar2 - 0x7c;
      if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
        uVar14 = 0x1a;
      }
      if (plVar9[1] != 0) {
        uVar16 = *(undefined4 *)(pbStack_a8 + 4);
        lVar6 = *plVar9;
        uVar15 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                               lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                               *(undefined8 *)(lVar6 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],
                               uVar16,CONCAT11(uVar19,uVar14),1);
        if (*pbVar7 != bVar2 && *pbVar7 != 0) {
          pdb_140e2c3a0(*plVar9,pbVar7);
        }
        lVar6 = *plVar9;
        uVar5 = *(undefined4 *)pbVar7;
        lVar10 = *(longlong *)(lVar6 + 0x100);
        if (lVar10 == *(longlong *)(lVar6 + 0xf0)) {
          pdb_142dbafc0(lVar6 + 0xf0);
        }
        lVar11 = *(longlong *)(lVar6 + 0xf8);
        lVar12 = lVar10 * 0x1c;
        *(undefined4 *)(lVar11 + lVar12) = 0;
        *(ulonglong *)(lVar11 + 4 + lVar12) = CONCAT44(uVar16,uVar5);
        *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 3;
        *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
        *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar15;
        *(longlong *)(lVar6 + 0x100) = lVar10 + 1;
        if (plVar9[1] != 0) {
          lVar6 = *plVar9;
          uVar1 = *puStack_c0;
          uVar19 = 0x33;
          uVar16 = pdb_141764730(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                 lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                 *(undefined8 *)(lVar6 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],
                                 (int)((ulonglong)uVar1 >> 0x20),0x3319,
                                 *(undefined4 *)(lVar6 + 0x248));
          lVar6 = *plVar9;
          lVar10 = *(longlong *)(lVar6 + 0x100);
          if (lVar10 == *(longlong *)(lVar6 + 0xf0)) {
            pdb_142dbafc0(lVar6 + 0xf0);
          }
          pbVar7 = pbStack_b8;
          lVar11 = *(longlong *)(lVar6 + 0xf8);
          lVar12 = lVar10 * 0x1c;
          *(undefined4 *)(lVar11 + lVar12) = 1;
          *(undefined8 *)(lVar11 + 4 + lVar12) = uVar1;
          *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 6;
          *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
          *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar16;
          *(longlong *)(lVar6 + 0x100) = lVar10 + 1;
          bVar2 = pbStack_b8[0x11];
          uVar14 = 0x19;
          uVar17 = bVar2 - 0x7c;
          if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
            uVar14 = 0x1a;
          }
          if (plVar9[1] != 0) {
            uVar16 = *(undefined4 *)(pbStack_b8 + 4);
            lVar6 = *plVar9;
            uVar18 = CONCAT11(uVar19,uVar14);
            uVar15 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                   lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                   *(undefined8 *)(lVar6 + 0x88),(short)plVar9[7],plVar9[1],
                                   plVar9[2],uVar16,uVar18,1);
            uVar19 = (undefined1)((ushort)uVar18 >> 8);
            if (*pbVar7 != bVar2 && *pbVar7 != 0) {
              pdb_140e2c3a0(*plVar9,pbVar7);
            }
            lVar6 = *plVar9;
            uVar5 = *(undefined4 *)pbVar7;
            lVar10 = *(longlong *)(lVar6 + 0x100);
            if (lVar10 == *(longlong *)(lVar6 + 0xf0)) {
              pdb_142dbafc0(lVar6 + 0xf0);
            }
            pbVar7 = pbStack_c8;
            lVar11 = *(longlong *)(lVar6 + 0xf8);
            lVar12 = lVar10 * 0x1c;
            *(undefined4 *)(lVar11 + lVar12) = 0;
            *(ulonglong *)(lVar11 + 4 + lVar12) = CONCAT44(uVar16,uVar5);
            *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 4;
            *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
            *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar15;
            *(longlong *)(lVar6 + 0x100) = lVar10 + 1;
            bVar2 = pbStack_c8[0x11];
            uVar14 = 0x19;
            uVar17 = bVar2 - 0x7c;
            if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
              uVar14 = 0x1a;
            }
            if (plVar9[1] != 0) {
              uVar16 = *(undefined4 *)(pbStack_c8 + 4);
              lVar6 = *plVar9;
              uVar15 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                     lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                     *(undefined8 *)(lVar6 + 0x88),(short)plVar9[7],plVar9[1],
                                     plVar9[2],uVar16,CONCAT11(uVar19,uVar14),1);
              if (*pbVar7 != bVar2 && *pbVar7 != 0) {
                pdb_140e2c3a0(*plVar9,pbVar7);
              }
              lVar6 = *plVar9;
              uVar5 = *(undefined4 *)pbVar7;
              lVar10 = *(longlong *)(lVar6 + 0x100);
              if (lVar10 == *(longlong *)(lVar6 + 0xf0)) {
                pdb_142dbafc0(lVar6 + 0xf0);
              }
              lVar11 = *(longlong *)(lVar6 + 0xf8);
              lVar12 = lVar10 * 0x1c;
              *(undefined4 *)(lVar11 + lVar12) = 0;
              *(ulonglong *)(lVar11 + 4 + lVar12) = CONCAT44(uVar16,uVar5);
              *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 5;
              *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
              *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar15;
              *(longlong *)(lVar6 + 0x100) = lVar10 + 1;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

