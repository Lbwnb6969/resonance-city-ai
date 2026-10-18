// VA 0x140bdbd90, PDB extent 2270 bytes
// country_core::shader::apply_volumetrics::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::apply_volumetrics::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 2270 */

void pdb_140bdbd90(longlong *param_1,int *param_2,longlong *param_3)

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
  uint uVar18;
  undefined2 in_stack_ffffffffffffff40;
  undefined2 uVar19;
  undefined1 uVar20;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined8 *puStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong lStack_68;
  longlong lStack_60;
  
  lVar6 = param_3[1];
  pbVar7 = (byte *)param_1[1];
  uVar18 = param_2[2];
  *(ulonglong *)(lVar6 + (ulonglong)uVar18) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  puVar8 = (undefined8 *)param_1[2];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar18 + 0x10)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  plVar9 = (longlong *)*param_3;
  if (plVar9[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar10 = *param_1;
    uVar16 = *(undefined4 *)(lVar10 + 0x10);
    lVar11 = *plVar9;
    uVar19 = CONCAT11((char)((ushort)in_stack_ffffffffffffff40 >> 8),0x18);
    puStack_80 = puVar8;
    plStack_78 = param_3;
    uVar15 = pdb_141764080(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                           lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                           *(undefined8 *)(lVar11 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],
                           uVar16,uVar19,1);
    uVar20 = (undefined1)((ushort)uVar19 >> 8);
    lVar11 = *plVar9;
    uVar1 = *(undefined8 *)(lVar10 + 8);
    lVar10 = *(longlong *)(lVar11 + 0x100);
    if (lVar10 == *(longlong *)(lVar11 + 0xf0)) {
      pdb_142dbafc0(lVar11 + 0xf0);
    }
    lVar12 = *(longlong *)(lVar11 + 0xf8);
    lVar13 = lVar10 * 0x1c;
    *(undefined4 *)(lVar12 + lVar13) = 2;
    *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
    *(undefined4 *)(lVar12 + 0xc + lVar13) = uVar16;
    *(int *)(lVar12 + 0x10 + lVar13) = iVar3 + 10;
    *(int *)(lVar12 + 0x14 + lVar13) = iVar4;
    *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar15;
    *(longlong *)(lVar11 + 0x100) = lVar10 + 1;
    bVar2 = pbVar7[0x11];
    uVar14 = 0x19;
    uVar17 = bVar2 - 0x7c;
    if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
      uVar14 = 0x1a;
    }
    if (plVar9[1] != 0) {
      uVar16 = *(undefined4 *)(pbVar7 + 4);
      lVar10 = *plVar9;
      uVar15 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                             lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                             *(undefined8 *)(lVar10 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],
                             uVar16,CONCAT11(uVar20,uVar14),1);
      if (*pbVar7 != bVar2 && *pbVar7 != 0) {
        pdb_140e2c3a0(*plVar9,pbVar7);
      }
      lVar10 = *plVar9;
      uVar5 = *(undefined4 *)pbVar7;
      lVar11 = *(longlong *)(lVar10 + 0x100);
      if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
        pdb_142dbafc0(lVar10 + 0xf0);
      }
      lVar12 = *(longlong *)(lVar10 + 0xf8);
      lVar13 = lVar11 * 0x1c;
      *(undefined4 *)(lVar12 + lVar13) = 0;
      *(ulonglong *)(lVar12 + 4 + lVar13) = CONCAT44(uVar16,uVar5);
      *(int *)(lVar12 + 0x10 + lVar13) = iVar3 + 1;
      *(int *)(lVar12 + 0x14 + lVar13) = iVar4;
      *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar15;
      *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
      *(int *)(lVar6 + (ulonglong)(uVar18 + 8)) = (int)param_1[10];
      *(undefined4 *)(lVar6 + (ulonglong)(uVar18 + 0xc)) = *(undefined4 *)((longlong)param_1 + 0x54)
      ;
      *(int *)(lVar6 + (ulonglong)(uVar18 + 0x20)) = (int)param_1[0xb];
      if (plVar9[1] != 0) {
        lVar10 = *plVar9;
        uVar1 = *puStack_80;
        uVar20 = 0x33;
        uVar16 = pdb_141764730(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                               lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                               *(undefined8 *)(lVar10 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],
                               (int)((ulonglong)uVar1 >> 0x20),0x3319,
                               *(undefined4 *)(lVar10 + 0x248));
        lVar10 = *plVar9;
        lVar11 = *(longlong *)(lVar10 + 0x100);
        if (lVar11 == *(longlong *)(lVar10 + 0xf0)) {
          pdb_142dbafc0(lVar10 + 0xf0);
        }
        lVar12 = *(longlong *)(lVar10 + 0xf8);
        lVar13 = lVar11 * 0x1c;
        *(undefined4 *)(lVar12 + lVar13) = 1;
        *(undefined8 *)(lVar12 + 4 + lVar13) = uVar1;
        *(int *)(lVar12 + 0x10 + lVar13) = iVar3 + 2;
        *(int *)(lVar12 + 0x14 + lVar13) = iVar4;
        *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
        *(longlong *)(lVar10 + 0x100) = lVar11 + 1;
        lStack_60 = plStack_78[2];
        iStack_8c = iVar3 + 3;
        iStack_84 = uVar18 + 0x18;
        iStack_88 = iVar4;
        plStack_70 = plVar9;
        lStack_68 = lVar6;
        pdb_141b045e0(param_1[3],param_1[4],&iStack_8c,&plStack_70);
        pbVar7 = (byte *)param_1[5];
        bVar2 = pbVar7[0x11];
        uVar14 = 0x19;
        uVar18 = bVar2 - 0x7c;
        if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
          uVar14 = 0x1a;
        }
        if (plVar9[1] != 0) {
          uVar16 = *(undefined4 *)(pbVar7 + 4);
          lVar6 = *plVar9;
          uVar19 = CONCAT11(uVar20,uVar14);
          uVar15 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                 lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                 *(undefined8 *)(lVar6 + 0x88),(short)plVar9[7],plVar9[1],plVar9[2],
                                 uVar16,uVar19,1);
          uVar20 = (undefined1)((ushort)uVar19 >> 8);
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
          pbVar7 = (byte *)param_1[6];
          bVar2 = pbVar7[0x11];
          uVar14 = 0x19;
          uVar18 = bVar2 - 0x7c;
          if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
            uVar14 = 0x1a;
          }
          if (plVar9[1] != 0) {
            uVar16 = *(undefined4 *)(pbVar7 + 4);
            lVar6 = *plVar9;
            uVar19 = CONCAT11(uVar20,uVar14);
            uVar15 = pdb_141764080(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),
                                   lVar6 + 0xd8,*(undefined8 *)(lVar6 + 0x80),
                                   *(undefined8 *)(lVar6 + 0x88),(short)plVar9[7],plVar9[1],
                                   plVar9[2],uVar16,uVar19,1);
            uVar20 = (undefined1)((ushort)uVar19 >> 8);
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
            *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 6;
            *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
            *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar15;
            *(longlong *)(lVar6 + 0x100) = lVar10 + 1;
            if (plVar9[1] != 0) {
              lVar6 = param_1[7];
              uVar16 = *(undefined4 *)(lVar6 + 0x10);
              lVar10 = *plVar9;
              uVar19 = CONCAT11(uVar20,0x19);
              uVar15 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                                     lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                                     *(undefined8 *)(lVar10 + 0x88),(short)plVar9[7],plVar9[1],
                                     plVar9[2],uVar16,uVar19,1);
              uVar20 = (undefined1)((ushort)uVar19 >> 8);
              lVar10 = *plVar9;
              uVar1 = *(undefined8 *)(lVar6 + 8);
              lVar6 = *(longlong *)(lVar10 + 0x100);
              if (lVar6 == *(longlong *)(lVar10 + 0xf0)) {
                pdb_142dbafc0(lVar10 + 0xf0);
              }
              lVar11 = *(longlong *)(lVar10 + 0xf8);
              lVar12 = lVar6 * 0x1c;
              *(undefined4 *)(lVar11 + lVar12) = 4;
              *(undefined8 *)(lVar11 + 4 + lVar12) = uVar1;
              *(undefined4 *)(lVar11 + 0xc + lVar12) = uVar16;
              *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 7;
              *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
              *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar15;
              *(longlong *)(lVar10 + 0x100) = lVar6 + 1;
              if (plVar9[1] != 0) {
                lVar6 = param_1[8];
                uVar16 = *(undefined4 *)(lVar6 + 0x10);
                lVar10 = *plVar9;
                uVar19 = CONCAT11(uVar20,0x19);
                uVar15 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                                       lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                                       *(undefined8 *)(lVar10 + 0x88),(short)plVar9[7],plVar9[1],
                                       plVar9[2],uVar16,uVar19,1);
                uVar20 = (undefined1)((ushort)uVar19 >> 8);
                lVar10 = *plVar9;
                uVar1 = *(undefined8 *)(lVar6 + 8);
                lVar6 = *(longlong *)(lVar10 + 0x100);
                if (lVar6 == *(longlong *)(lVar10 + 0xf0)) {
                  pdb_142dbafc0(lVar10 + 0xf0);
                }
                lVar11 = *(longlong *)(lVar10 + 0xf8);
                lVar12 = lVar6 * 0x1c;
                *(undefined4 *)(lVar11 + lVar12) = 4;
                *(undefined8 *)(lVar11 + 4 + lVar12) = uVar1;
                *(undefined4 *)(lVar11 + 0xc + lVar12) = uVar16;
                *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 8;
                *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
                *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar15;
                *(longlong *)(lVar10 + 0x100) = lVar6 + 1;
                if (plVar9[1] != 0) {
                  lVar6 = param_1[9];
                  uVar16 = *(undefined4 *)(lVar6 + 0x10);
                  lVar10 = *plVar9;
                  uVar15 = pdb_141764080(*(undefined8 *)(lVar10 + 200),
                                         *(undefined8 *)(lVar10 + 0xd0),lVar10 + 0xd8,
                                         *(undefined8 *)(lVar10 + 0x80),
                                         *(undefined8 *)(lVar10 + 0x88),(short)plVar9[7],plVar9[1],
                                         plVar9[2],uVar16,CONCAT11(uVar20,0x19),1);
                  lVar10 = *plVar9;
                  uVar1 = *(undefined8 *)(lVar6 + 8);
                  lVar6 = *(longlong *)(lVar10 + 0x100);
                  if (lVar6 == *(longlong *)(lVar10 + 0xf0)) {
                    pdb_142dbafc0(lVar10 + 0xf0);
                  }
                  lVar11 = *(longlong *)(lVar10 + 0xf8);
                  lVar12 = lVar6 * 0x1c;
                  *(undefined4 *)(lVar11 + lVar12) = 4;
                  *(undefined8 *)(lVar11 + 4 + lVar12) = uVar1;
                  *(undefined4 *)(lVar11 + 0xc + lVar12) = uVar16;
                  *(int *)(lVar11 + 0x10 + lVar12) = iVar3 + 9;
                  *(int *)(lVar11 + 0x14 + lVar12) = iVar4;
                  *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar15;
                  *(longlong *)(lVar10 + 0x100) = lVar6 + 1;
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

