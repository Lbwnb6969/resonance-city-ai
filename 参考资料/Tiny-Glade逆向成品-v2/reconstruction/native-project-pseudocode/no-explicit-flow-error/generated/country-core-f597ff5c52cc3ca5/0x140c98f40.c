// VA 0x140c98f40, PDB extent 2159 bytes
// country_core::shader::water::ice_deferred_rt::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::water::ice_deferred_rt::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 2159 */

void pdb_140c98f40(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined2 in_stack_ffffffffffffff00;
  undefined2 uVar19;
  undefined1 uVar20;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined8 *puStack_d0;
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
  uVar18 = param_2[2];
  pbStack_a8 = (byte *)param_1[8];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar18 + 4)) =
       (ulonglong)*(ushort *)(pbStack_a8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbStack_a8 + 8);
  pbStack_b8 = (byte *)param_1[10];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar18 + 0xc)) =
       (ulonglong)*(ushort *)(pbStack_b8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbStack_b8 + 8);
  pbVar7 = (byte *)param_1[0xc];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar18 + 0x14)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  puVar8 = (undefined8 *)param_1[9];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar18 + 0x24)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  puVar9 = (undefined8 *)param_1[0xb];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar18 + 0x1c)) =
       (ulonglong)*(ushort *)((longlong)puVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar9 + 1);
  *(int *)(lVar6 + (ulonglong)uVar18) = (int)param_1[0xd];
  plVar10 = (longlong *)*param_3;
  if (plVar10[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar11 = *param_1;
    uVar17 = *(undefined4 *)(lVar11 + 0x10);
    lVar12 = *plVar10;
    uVar19 = CONCAT11((char)((ushort)in_stack_ffffffffffffff00 >> 8),0x19);
    puStack_d0 = puVar9;
    pbStack_c8 = pbVar7;
    puStack_c0 = puVar8;
    plStack_b0 = param_3;
    uVar16 = pdb_141764080(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                           lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                           *(undefined8 *)(lVar12 + 0x88),(short)plVar10[7],plVar10[1],plVar10[2],
                           uVar17,uVar19,1);
    uVar20 = (undefined1)((ushort)uVar19 >> 8);
    lVar12 = *plVar10;
    uVar1 = *(undefined8 *)(lVar11 + 8);
    lVar11 = *(longlong *)(lVar12 + 0x100);
    if (lVar11 == *(longlong *)(lVar12 + 0xf0)) {
      pdb_142dbafc0(lVar12 + 0xf0);
    }
    lVar13 = *(longlong *)(lVar12 + 0xf8);
    lVar14 = lVar11 * 0x1c;
    *(undefined4 *)(lVar13 + lVar14) = 4;
    *(undefined8 *)(lVar13 + 4 + lVar14) = uVar1;
    *(undefined4 *)(lVar13 + 0xc + lVar14) = uVar17;
    *(int *)(lVar13 + 0x10 + lVar14) = iVar3 + 1;
    *(int *)(lVar13 + 0x14 + lVar14) = iVar4;
    *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar16;
    *(longlong *)(lVar12 + 0x100) = lVar11 + 1;
    if (plVar10[1] != 0) {
      lVar11 = param_1[1];
      uVar17 = *(undefined4 *)(lVar11 + 0x10);
      lVar12 = *plVar10;
      uVar19 = CONCAT11(uVar20,0x19);
      uVar16 = pdb_141764080(*(undefined8 *)(lVar12 + 200),*(undefined8 *)(lVar12 + 0xd0),
                             lVar12 + 0xd8,*(undefined8 *)(lVar12 + 0x80),
                             *(undefined8 *)(lVar12 + 0x88),(short)plVar10[7],plVar10[1],plVar10[2],
                             uVar17,uVar19,1);
      uVar20 = (undefined1)((ushort)uVar19 >> 8);
      lVar12 = *plVar10;
      uVar1 = *(undefined8 *)(lVar11 + 8);
      lVar11 = *(longlong *)(lVar12 + 0x100);
      if (lVar11 == *(longlong *)(lVar12 + 0xf0)) {
        pdb_142dbafc0(lVar12 + 0xf0);
      }
      lVar13 = *(longlong *)(lVar12 + 0xf8);
      lVar14 = lVar11 * 0x1c;
      *(undefined4 *)(lVar13 + lVar14) = 4;
      *(undefined8 *)(lVar13 + 4 + lVar14) = uVar1;
      *(undefined4 *)(lVar13 + 0xc + lVar14) = uVar17;
      *(int *)(lVar13 + 0x10 + lVar14) = iVar3 + 2;
      *(int *)(lVar13 + 0x14 + lVar14) = iVar4;
      *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar16;
      *(longlong *)(lVar12 + 0x100) = lVar11 + 1;
      lStack_90 = plStack_b0[2];
      iStack_dc = iVar3 + 8;
      iStack_d4 = uVar18 + 0x2c;
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
      iStack_d8 = iVar4;
      plStack_a0 = plVar10;
      lStack_98 = lVar6;
      pdb_140bdc8f0(&uStack_88,&iStack_dc,&plStack_a0);
      pbVar7 = pbStack_a8;
      bVar2 = pbStack_a8[0x11];
      uVar15 = 0x19;
      uVar18 = bVar2 - 0x7c;
      if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
        uVar15 = 0x1a;
      }
      if (plVar10[1] != 0) {
        uVar17 = *(undefined4 *)(pbStack_a8 + 4);
        lVar6 = *plVar10;
        uVar16 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                               lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                               *(undefined8 *)(lVar6 + 0x88),(short)plVar10[7],plVar10[1],plVar10[2]
                               ,uVar17,CONCAT11(uVar20,uVar15),1);
        if (*pbVar7 != bVar2 && *pbVar7 != 0) {
          pdb_140e2c3a0(*plVar10,pbVar7);
        }
        lVar6 = *plVar10;
        uVar5 = *(undefined4 *)pbVar7;
        lVar11 = *(longlong *)(lVar6 + 0x100);
        if (lVar11 == *(longlong *)(lVar6 + 0xf0)) {
          pdb_142dbafc0(lVar6 + 0xf0);
        }
        lVar12 = *(longlong *)(lVar6 + 0xf8);
        lVar13 = lVar11 * 0x1c;
        *(undefined4 *)(lVar12 + lVar13) = 0;
        *(ulonglong *)(lVar12 + 4 + lVar13) = CONCAT44(uVar17,uVar5);
        *(int *)(lVar12 + 0x10 + lVar13) = iVar3 + 3;
        *(int *)(lVar12 + 0x14 + lVar13) = iVar4;
        *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
        *(longlong *)(lVar6 + 0x100) = lVar11 + 1;
        if (plVar10[1] != 0) {
          lVar6 = *plVar10;
          uVar1 = *puStack_c0;
          uVar20 = 0x33;
          uVar17 = pdb_141764730(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                 lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                 *(undefined8 *)(lVar6 + 0x88),(short)plVar10[7],plVar10[1],
                                 plVar10[2],(int)((ulonglong)uVar1 >> 0x20),0x3319,
                                 *(undefined4 *)(lVar6 + 0x248));
          lVar6 = *plVar10;
          lVar11 = *(longlong *)(lVar6 + 0x100);
          if (lVar11 == *(longlong *)(lVar6 + 0xf0)) {
            pdb_142dbafc0(lVar6 + 0xf0);
          }
          pbVar7 = pbStack_b8;
          lVar12 = *(longlong *)(lVar6 + 0xf8);
          lVar13 = lVar11 * 0x1c;
          *(undefined4 *)(lVar12 + lVar13) = 1;
          *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
          *(int *)(lVar12 + 0x10 + lVar13) = iVar3 + 7;
          *(int *)(lVar12 + 0x14 + lVar13) = iVar4;
          *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar17;
          *(longlong *)(lVar6 + 0x100) = lVar11 + 1;
          bVar2 = pbStack_b8[0x11];
          uVar15 = 0x19;
          uVar18 = bVar2 - 0x7c;
          if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
            uVar15 = 0x1a;
          }
          if (plVar10[1] != 0) {
            uVar17 = *(undefined4 *)(pbStack_b8 + 4);
            lVar6 = *plVar10;
            uVar16 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                   lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                   *(undefined8 *)(lVar6 + 0x88),(short)plVar10[7],plVar10[1],
                                   plVar10[2],uVar17,CONCAT11(uVar20,uVar15),1);
            if (*pbVar7 != bVar2 && *pbVar7 != 0) {
              pdb_140e2c3a0(*plVar10,pbVar7);
            }
            lVar6 = *plVar10;
            uVar5 = *(undefined4 *)pbVar7;
            lVar11 = *(longlong *)(lVar6 + 0x100);
            if (lVar11 == *(longlong *)(lVar6 + 0xf0)) {
              pdb_142dbafc0(lVar6 + 0xf0);
            }
            lVar12 = *(longlong *)(lVar6 + 0xf8);
            lVar13 = lVar11 * 0x1c;
            *(undefined4 *)(lVar12 + lVar13) = 0;
            *(ulonglong *)(lVar12 + 4 + lVar13) = CONCAT44(uVar17,uVar5);
            *(int *)(lVar12 + 0x10 + lVar13) = iVar3 + 4;
            *(int *)(lVar12 + 0x14 + lVar13) = iVar4;
            *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
            *(longlong *)(lVar6 + 0x100) = lVar11 + 1;
            if (plVar10[1] != 0) {
              lVar6 = *plVar10;
              uVar1 = *puStack_d0;
              uVar20 = 0x33;
              uVar17 = pdb_141764730(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                     lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                     *(undefined8 *)(lVar6 + 0x88),(short)plVar10[7],plVar10[1],
                                     plVar10[2],(int)((ulonglong)uVar1 >> 0x20),0x3319,
                                     *(undefined4 *)(lVar6 + 0x248));
              lVar6 = *plVar10;
              lVar11 = *(longlong *)(lVar6 + 0x100);
              if (lVar11 == *(longlong *)(lVar6 + 0xf0)) {
                pdb_142dbafc0(lVar6 + 0xf0);
              }
              pbVar7 = pbStack_c8;
              lVar12 = *(longlong *)(lVar6 + 0xf8);
              lVar13 = lVar11 * 0x1c;
              *(undefined4 *)(lVar12 + lVar13) = 1;
              *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
              *(int *)(lVar12 + 0x10 + lVar13) = iVar3 + 6;
              *(int *)(lVar12 + 0x14 + lVar13) = iVar4;
              *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar17;
              *(longlong *)(lVar6 + 0x100) = lVar11 + 1;
              bVar2 = pbStack_c8[0x11];
              uVar15 = 0x19;
              uVar18 = bVar2 - 0x7c;
              if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
                uVar15 = 0x1a;
              }
              if (plVar10[1] != 0) {
                uVar17 = *(undefined4 *)(pbStack_c8 + 4);
                lVar6 = *plVar10;
                uVar16 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                       lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                       *(undefined8 *)(lVar6 + 0x88),(short)plVar10[7],plVar10[1],
                                       plVar10[2],uVar17,CONCAT11(uVar20,uVar15),1);
                if (*pbVar7 != bVar2 && *pbVar7 != 0) {
                  pdb_140e2c3a0(*plVar10,pbVar7);
                }
                lVar6 = *plVar10;
                uVar5 = *(undefined4 *)pbVar7;
                lVar11 = *(longlong *)(lVar6 + 0x100);
                if (lVar11 == *(longlong *)(lVar6 + 0xf0)) {
                  pdb_142dbafc0(lVar6 + 0xf0);
                }
                lVar12 = *(longlong *)(lVar6 + 0xf8);
                lVar13 = lVar11 * 0x1c;
                *(undefined4 *)(lVar12 + lVar13) = 0;
                *(ulonglong *)(lVar12 + 4 + lVar13) = CONCAT44(uVar17,uVar5);
                *(int *)(lVar12 + 0x10 + lVar13) = iVar3 + 5;
                *(int *)(lVar12 + 0x14 + lVar13) = iVar4;
                *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
                *(longlong *)(lVar6 + 0x100) = lVar11 + 1;
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

