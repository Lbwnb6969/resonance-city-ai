// VA 0x141703630, PDB extent 1467 bytes
// country_core::shader::extract_half_res_depth_normals::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::extract_half_res_depth_normals::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1467 */

void pdb_141703630(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)param_1[2];
  uVar19 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar19) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  pbVar7 = (byte *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 8)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  puVar8 = (undefined8 *)param_1[1];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x18)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  puVar9 = (undefined8 *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x10)) =
       (ulonglong)*(ushort *)((longlong)puVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar9 + 1);
  param_3 = (longlong *)*param_3;
  pbVar10 = (byte *)*param_1;
  bVar1 = pbVar10[0x11];
  uVar15 = 0x19;
  uVar19 = bVar1 - 0x7c;
  if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
    uVar15 = 0x1a;
  }
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar18 = *(undefined4 *)(pbVar10 + 4);
    lVar5 = *param_3;
    uVar17 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar18,uVar15,1);
    if (*pbVar10 != bVar1 && *pbVar10 != 0) {
      pdb_140e2c3a0(*param_3,pbVar10);
    }
    lVar5 = *param_3;
    uVar4 = *(undefined4 *)pbVar10;
    lVar11 = *(longlong *)(lVar5 + 0x100);
    if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar12 = *(longlong *)(lVar5 + 0xf8);
    lVar14 = lVar11 * 0x1c;
    *(undefined4 *)(lVar12 + lVar14) = 0;
    *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar18,uVar4);
    *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 1;
    *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
    *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar17;
    *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
    if (param_3[1] != 0) {
      lVar5 = *param_3;
      uVar13 = *puVar8;
      uVar15 = 0x33;
      uVar18 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],
                             (int)((ulonglong)uVar13 >> 0x20),0x3319,*(undefined4 *)(lVar5 + 0x248))
      ;
      lVar5 = *param_3;
      lVar11 = *(longlong *)(lVar5 + 0x100);
      if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar12 = *(longlong *)(lVar5 + 0xf8);
      lVar14 = lVar11 * 0x1c;
      *(undefined4 *)(lVar12 + lVar14) = 1;
      *(undefined8 *)(lVar12 + 4 + lVar14) = uVar13;
      *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 5;
      *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
      *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar18;
      *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
      bVar1 = pbVar6[0x11];
      uVar16 = 0x19;
      uVar19 = bVar1 - 0x7c;
      if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
        uVar16 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar18 = *(undefined4 *)(pbVar6 + 4);
        lVar5 = *param_3;
        uVar17 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar18,CONCAT11(uVar15,uVar16),1);
        if (*pbVar6 != bVar1 && *pbVar6 != 0) {
          pdb_140e2c3a0(*param_3,pbVar6);
        }
        lVar5 = *param_3;
        uVar4 = *(undefined4 *)pbVar6;
        lVar11 = *(longlong *)(lVar5 + 0x100);
        if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
          pdb_142dbafc0(lVar5 + 0xf0);
        }
        lVar12 = *(longlong *)(lVar5 + 0xf8);
        lVar14 = lVar11 * 0x1c;
        *(undefined4 *)(lVar12 + lVar14) = 0;
        *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar18,uVar4);
        *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 2;
        *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
        *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar17;
        *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
        if (param_3[1] != 0) {
          lVar5 = *param_3;
          uVar13 = *puVar9;
          uVar15 = 0x33;
          uVar18 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],(int)((ulonglong)uVar13 >> 0x20),0x3319,
                                 *(undefined4 *)(lVar5 + 0x248));
          lVar5 = *param_3;
          lVar11 = *(longlong *)(lVar5 + 0x100);
          if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar12 = *(longlong *)(lVar5 + 0xf8);
          lVar14 = lVar11 * 0x1c;
          *(undefined4 *)(lVar12 + lVar14) = 1;
          *(undefined8 *)(lVar12 + 4 + lVar14) = uVar13;
          *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 4;
          *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
          *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar18;
          *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
          bVar1 = pbVar7[0x11];
          uVar16 = 0x19;
          uVar19 = bVar1 - 0x7c;
          if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
            uVar16 = 0x1a;
          }
          if (param_3[1] != 0) {
            uVar18 = *(undefined4 *)(pbVar7 + 4);
            lVar5 = *param_3;
            uVar17 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar18,CONCAT11(uVar15,uVar16),1);
            if (*pbVar7 != bVar1 && *pbVar7 != 0) {
              pdb_140e2c3a0(*param_3,pbVar7);
            }
            lVar5 = *param_3;
            uVar4 = *(undefined4 *)pbVar7;
            lVar11 = *(longlong *)(lVar5 + 0x100);
            if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
              pdb_142dbafc0(lVar5 + 0xf0);
            }
            lVar12 = *(longlong *)(lVar5 + 0xf8);
            lVar14 = lVar11 * 0x1c;
            *(undefined4 *)(lVar12 + lVar14) = 0;
            *(ulonglong *)(lVar12 + 4 + lVar14) = CONCAT44(uVar18,uVar4);
            *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 3;
            *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
            *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar17;
            *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

