// VA 0x140c177e0, PDB extent 1693 bytes
// country_core::shader::terrain_editing::rasterize_terrain_stroke::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::terrain_editing::rasterize_terrain_stroke::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1693 */

void pdb_140c177e0(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  
  lVar5 = param_3[1];
  uVar20 = param_2[2];
  puVar6 = (undefined8 *)param_1[1];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x14)) =
       (ulonglong)*(ushort *)((longlong)puVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar6 + 1);
  puVar7 = (undefined8 *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x1c)) =
       (ulonglong)*(ushort *)((longlong)puVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar7 + 1);
  puVar8 = (undefined8 *)param_1[5];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x24)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  pbVar9 = (byte *)param_1[2];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x34)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  puVar10 = (undefined8 *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar20 + 0x2c)) =
       (ulonglong)*(ushort *)((longlong)puVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar10 + 1);
  *(undefined4 *)(lVar5 + (ulonglong)uVar20) = *(undefined4 *)(param_1 + 7);
  *(undefined8 *)(lVar5 + (ulonglong)(uVar20 + 8)) = param_1[6];
  *(undefined4 *)(lVar5 + (ulonglong)(uVar20 + 0x10)) = *(undefined4 *)((longlong)param_1 + 0x3c);
  param_3 = (longlong *)*param_3;
  pbVar11 = (byte *)*param_1;
  bVar1 = pbVar11[0x11];
  uVar16 = 0x19;
  uVar20 = bVar1 - 0x7c;
  if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
    uVar16 = 0x1a;
  }
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar19 = *(undefined4 *)(pbVar11 + 4);
    lVar5 = *param_3;
    uVar18 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar19,uVar16,1);
    if (*pbVar11 != bVar1 && *pbVar11 != 0) {
      pdb_140e2c3a0(*param_3,pbVar11);
    }
    lVar5 = *param_3;
    uVar4 = *(undefined4 *)pbVar11;
    lVar12 = *(longlong *)(lVar5 + 0x100);
    if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar13 = *(longlong *)(lVar5 + 0xf8);
    lVar15 = lVar12 * 0x1c;
    *(undefined4 *)(lVar13 + lVar15) = 0;
    *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
    *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 6;
    *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
    *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
    *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
    if (param_3[1] != 0) {
      lVar5 = *param_3;
      uVar14 = *puVar6;
      uVar16 = 0x33;
      uVar19 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],
                             (int)((ulonglong)uVar14 >> 0x20),0x3319,*(undefined4 *)(lVar5 + 0x248))
      ;
      lVar5 = *param_3;
      lVar12 = *(longlong *)(lVar5 + 0x100);
      if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar13 = *(longlong *)(lVar5 + 0xf8);
      lVar15 = lVar12 * 0x1c;
      *(undefined4 *)(lVar13 + lVar15) = 1;
      *(undefined8 *)(lVar13 + 4 + lVar15) = uVar14;
      *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 1;
      *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
      *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar19;
      *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
      bVar1 = pbVar9[0x11];
      uVar17 = 0x19;
      uVar20 = bVar1 - 0x7c;
      if ((uVar20 < 7) && ((0x75U >> (uVar20 & 0x1f) & 1) != 0)) {
        uVar17 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar19 = *(undefined4 *)(pbVar9 + 4);
        lVar5 = *param_3;
        uVar18 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar19,CONCAT11(uVar16,uVar17),1);
        if (*pbVar9 != bVar1 && *pbVar9 != 0) {
          pdb_140e2c3a0(*param_3,pbVar9);
        }
        lVar5 = *param_3;
        uVar4 = *(undefined4 *)pbVar9;
        lVar12 = *(longlong *)(lVar5 + 0x100);
        if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
          pdb_142dbafc0(lVar5 + 0xf0);
        }
        lVar13 = *(longlong *)(lVar5 + 0xf8);
        lVar15 = lVar12 * 0x1c;
        *(undefined4 *)(lVar13 + lVar15) = 0;
        *(ulonglong *)(lVar13 + 4 + lVar15) = CONCAT44(uVar19,uVar4);
        *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 5;
        *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
        *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar18;
        *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
        if (param_3[1] != 0) {
          lVar5 = *param_3;
          uVar14 = *puVar7;
          uVar19 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],(int)((ulonglong)uVar14 >> 0x20),0x3319,
                                 *(undefined4 *)(lVar5 + 0x248));
          lVar5 = *param_3;
          lVar12 = *(longlong *)(lVar5 + 0x100);
          if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar13 = *(longlong *)(lVar5 + 0xf8);
          lVar15 = lVar12 * 0x1c;
          *(undefined4 *)(lVar13 + lVar15) = 1;
          *(undefined8 *)(lVar13 + 4 + lVar15) = uVar14;
          *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 2;
          *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
          *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar19;
          *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
          if (param_3[1] != 0) {
            lVar5 = *param_3;
            uVar14 = *puVar10;
            uVar19 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],(int)((ulonglong)uVar14 >> 0x20),0x3319,
                                   *(undefined4 *)(lVar5 + 0x248));
            lVar5 = *param_3;
            lVar12 = *(longlong *)(lVar5 + 0x100);
            if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
              pdb_142dbafc0(lVar5 + 0xf0);
            }
            lVar13 = *(longlong *)(lVar5 + 0xf8);
            lVar15 = lVar12 * 0x1c;
            *(undefined4 *)(lVar13 + lVar15) = 1;
            *(undefined8 *)(lVar13 + 4 + lVar15) = uVar14;
            *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 4;
            *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
            *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar19;
            *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
            if (param_3[1] != 0) {
              lVar5 = *param_3;
              uVar14 = *puVar8;
              uVar19 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                     lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                     *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],(int)((ulonglong)uVar14 >> 0x20),0x3319,
                                     *(undefined4 *)(lVar5 + 0x248));
              lVar5 = *param_3;
              lVar12 = *(longlong *)(lVar5 + 0x100);
              if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
                pdb_142dbafc0(lVar5 + 0xf0);
              }
              lVar13 = *(longlong *)(lVar5 + 0xf8);
              lVar15 = lVar12 * 0x1c;
              *(undefined4 *)(lVar13 + lVar15) = 1;
              *(undefined8 *)(lVar13 + 4 + lVar15) = uVar14;
              *(int *)(lVar13 + 0x10 + lVar15) = iVar2 + 3;
              *(int *)(lVar13 + 0x14 + lVar15) = iVar3;
              *(undefined4 *)(lVar13 + 0x18 + lVar15) = uVar19;
              *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
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

