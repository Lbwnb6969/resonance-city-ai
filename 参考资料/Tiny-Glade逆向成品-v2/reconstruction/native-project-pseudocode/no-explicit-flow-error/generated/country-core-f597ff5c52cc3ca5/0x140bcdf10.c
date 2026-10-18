// VA 0x140bcdf10, PDB extent 1538 bytes
// country_core::shader::paths::combine_path_exclusions::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::paths::combine_path_exclusions::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1538 */

void pdb_140bcdf10(longlong *param_1,int *param_2,longlong *param_3)

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
  byte *pbVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined1 uVar20;
  undefined2 uVar19;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)param_1[1];
  uVar18 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar18) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  pbVar7 = (byte *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar18 + 8)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  puVar8 = (undefined8 *)*param_1;
  *(ulonglong *)(lVar5 + (ulonglong)(uVar18 + 0x20)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  pbVar9 = (byte *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar18 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  pbVar10 = (byte *)param_1[2];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar18 + 0x18)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    lVar5 = *param_3;
    uVar11 = *puVar8;
    uVar20 = 0x33;
    uVar16 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],(int)((ulonglong)uVar11 >> 0x20),
                           0x3319,*(undefined4 *)(lVar5 + 0x248));
    lVar5 = *param_3;
    lVar12 = *(longlong *)(lVar5 + 0x100);
    if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar13 = *(longlong *)(lVar5 + 0xf8);
    lVar14 = lVar12 * 0x1c;
    *(undefined4 *)(lVar13 + lVar14) = 1;
    *(undefined8 *)(lVar13 + 4 + lVar14) = uVar11;
    *(int *)(lVar13 + 0x10 + lVar14) = iVar2 + 5;
    *(int *)(lVar13 + 0x14 + lVar14) = iVar3;
    *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar16;
    *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
    bVar1 = pbVar6[0x11];
    uVar15 = 0x19;
    uVar18 = bVar1 - 0x7c;
    if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
      uVar15 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar16 = *(undefined4 *)(pbVar6 + 4);
      lVar5 = *param_3;
      uVar19 = CONCAT11(uVar20,uVar15);
      uVar17 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar16,uVar19,1);
      uVar20 = (undefined1)((ushort)uVar19 >> 8);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*param_3,pbVar6);
      }
      lVar5 = *param_3;
      uVar4 = *(undefined4 *)pbVar6;
      lVar12 = *(longlong *)(lVar5 + 0x100);
      if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar13 = *(longlong *)(lVar5 + 0xf8);
      lVar14 = lVar12 * 0x1c;
      *(undefined4 *)(lVar13 + lVar14) = 0;
      *(ulonglong *)(lVar13 + 4 + lVar14) = CONCAT44(uVar16,uVar4);
      *(int *)(lVar13 + 0x10 + lVar14) = iVar2 + 1;
      *(int *)(lVar13 + 0x14 + lVar14) = iVar3;
      *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar17;
      *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
      bVar1 = pbVar10[0x11];
      uVar15 = 0x19;
      uVar18 = bVar1 - 0x7c;
      if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
        uVar15 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar16 = *(undefined4 *)(pbVar10 + 4);
        lVar5 = *param_3;
        uVar19 = CONCAT11(uVar20,uVar15);
        uVar17 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar16,uVar19,1);
        uVar20 = (undefined1)((ushort)uVar19 >> 8);
        if (*pbVar10 != bVar1 && *pbVar10 != 0) {
          pdb_140e2c3a0(*param_3,pbVar10);
        }
        lVar5 = *param_3;
        uVar4 = *(undefined4 *)pbVar10;
        lVar12 = *(longlong *)(lVar5 + 0x100);
        if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
          pdb_142dbafc0(lVar5 + 0xf0);
        }
        lVar13 = *(longlong *)(lVar5 + 0xf8);
        lVar14 = lVar12 * 0x1c;
        *(undefined4 *)(lVar13 + lVar14) = 0;
        *(ulonglong *)(lVar13 + 4 + lVar14) = CONCAT44(uVar16,uVar4);
        *(int *)(lVar13 + 0x10 + lVar14) = iVar2 + 4;
        *(int *)(lVar13 + 0x14 + lVar14) = iVar3;
        *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar17;
        *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
        bVar1 = pbVar7[0x11];
        uVar15 = 0x19;
        uVar18 = bVar1 - 0x7c;
        if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
          uVar15 = 0x1a;
        }
        if (param_3[1] != 0) {
          uVar16 = *(undefined4 *)(pbVar7 + 4);
          lVar5 = *param_3;
          uVar19 = CONCAT11(uVar20,uVar15);
          uVar17 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar16,uVar19,1);
          uVar20 = (undefined1)((ushort)uVar19 >> 8);
          if (*pbVar7 != bVar1 && *pbVar7 != 0) {
            pdb_140e2c3a0(*param_3,pbVar7);
          }
          lVar5 = *param_3;
          uVar4 = *(undefined4 *)pbVar7;
          lVar12 = *(longlong *)(lVar5 + 0x100);
          if (lVar12 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar13 = *(longlong *)(lVar5 + 0xf8);
          lVar14 = lVar12 * 0x1c;
          *(undefined4 *)(lVar13 + lVar14) = 0;
          *(ulonglong *)(lVar13 + 4 + lVar14) = CONCAT44(uVar16,uVar4);
          *(int *)(lVar13 + 0x10 + lVar14) = iVar2 + 2;
          *(int *)(lVar13 + 0x14 + lVar14) = iVar3;
          *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar17;
          *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
          bVar1 = pbVar9[0x11];
          uVar15 = 0x19;
          uVar18 = bVar1 - 0x7c;
          if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
            uVar15 = 0x1a;
          }
          if (param_3[1] != 0) {
            uVar16 = *(undefined4 *)(pbVar9 + 4);
            lVar5 = *param_3;
            uVar17 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar16,CONCAT11(uVar20,uVar15),1);
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
            lVar14 = lVar12 * 0x1c;
            *(undefined4 *)(lVar13 + lVar14) = 0;
            *(ulonglong *)(lVar13 + 4 + lVar14) = CONCAT44(uVar16,uVar4);
            *(int *)(lVar13 + 0x10 + lVar14) = iVar2 + 3;
            *(int *)(lVar13 + 0x14 + lVar14) = iVar3;
            *(undefined4 *)(lVar13 + 0x18 + lVar14) = uVar17;
            *(longlong *)(lVar5 + 0x100) = lVar12 + 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

