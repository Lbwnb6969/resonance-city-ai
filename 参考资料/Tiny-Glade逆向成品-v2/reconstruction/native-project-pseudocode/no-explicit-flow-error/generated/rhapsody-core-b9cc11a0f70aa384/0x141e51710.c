// VA 0x141e51710, PDB extent 1287 bytes
// rhapsody_core::shader::calculate_reprojection_map::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-core-b9cc11a0f70aa384/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_core::shader::calculate_reprojection_map::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-core-b9cc11a0f70aa384/out/shabriri.rs
   Extent: 1287 */

void pdb_141e51710(longlong *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined1 uVar21;
  undefined2 uVar20;
  
  lVar6 = param_3[1];
  pbVar7 = (byte *)param_1[1];
  uVar2 = param_2[2];
  *(ulonglong *)(lVar6 + (ulonglong)uVar2) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  iVar3 = *param_2;
  iVar4 = param_2[1];
  pbVar8 = (byte *)param_1[3];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar2 + 8)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  puVar9 = (undefined8 *)*param_1;
  *(ulonglong *)(lVar6 + (ulonglong)(uVar2 + 0x20)) =
       (ulonglong)*(ushort *)((longlong)puVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar9 + 1);
  pbVar10 = (byte *)param_1[2];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar2 + 0x18)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar11 = *param_3;
    uVar12 = *puVar9;
    uVar21 = 0x33;
    uVar17 = pdb_141e53050(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                           lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                           *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                           (int)((ulonglong)uVar12 >> 0x20),0x3319,*(undefined4 *)(lVar11 + 0x248));
    lVar11 = *param_3;
    lVar13 = *(longlong *)(lVar11 + 0x100);
    if (lVar13 == *(longlong *)(lVar11 + 0xf0)) {
      pdb_142dbafc0(lVar11 + 0xf0);
    }
    lVar14 = *(longlong *)(lVar11 + 0xf8);
    lVar15 = lVar13 * 0x1c;
    *(undefined4 *)(lVar14 + lVar15) = 1;
    *(undefined8 *)(lVar14 + 4 + lVar15) = uVar12;
    *(int *)(lVar14 + 0x10 + lVar15) = iVar3 + 4;
    *(int *)(lVar14 + 0x14 + lVar15) = iVar4;
    *(undefined4 *)(lVar14 + 0x18 + lVar15) = uVar17;
    *(longlong *)(lVar11 + 0x100) = lVar13 + 1;
    bVar1 = pbVar7[0x11];
    uVar16 = 0x19;
    uVar19 = bVar1 - 0x7c;
    if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
      uVar16 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar17 = *(undefined4 *)(pbVar7 + 4);
      lVar11 = *param_3;
      uVar20 = CONCAT11(uVar21,uVar16);
      uVar18 = pdb_141e52d90(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                             lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                             *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                             uVar17,uVar20,1);
      uVar21 = (undefined1)((ushort)uVar20 >> 8);
      if (*pbVar7 != bVar1 && *pbVar7 != 0) {
        pdb_140e2c3a0(*param_3,pbVar7);
      }
      lVar11 = *param_3;
      uVar5 = *(undefined4 *)pbVar7;
      lVar13 = *(longlong *)(lVar11 + 0x100);
      if (lVar13 == *(longlong *)(lVar11 + 0xf0)) {
        pdb_142dbafc0(lVar11 + 0xf0);
      }
      lVar14 = *(longlong *)(lVar11 + 0xf8);
      lVar15 = lVar13 * 0x1c;
      *(undefined4 *)(lVar14 + lVar15) = 0;
      *(ulonglong *)(lVar14 + 4 + lVar15) = CONCAT44(uVar17,uVar5);
      *(int *)(lVar14 + 0x10 + lVar15) = iVar3 + 1;
      *(int *)(lVar14 + 0x14 + lVar15) = iVar4;
      *(undefined4 *)(lVar14 + 0x18 + lVar15) = uVar18;
      *(longlong *)(lVar11 + 0x100) = lVar13 + 1;
      bVar1 = pbVar10[0x11];
      uVar16 = 0x19;
      uVar19 = bVar1 - 0x7c;
      if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
        uVar16 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar17 = *(undefined4 *)(pbVar10 + 4);
        lVar11 = *param_3;
        uVar20 = CONCAT11(uVar21,uVar16);
        uVar18 = pdb_141e52d90(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                               lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                               *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],
                               param_3[2],uVar17,uVar20,1);
        uVar21 = (undefined1)((ushort)uVar20 >> 8);
        if (*pbVar10 != bVar1 && *pbVar10 != 0) {
          pdb_140e2c3a0(*param_3,pbVar10);
        }
        lVar11 = *param_3;
        uVar5 = *(undefined4 *)pbVar10;
        lVar13 = *(longlong *)(lVar11 + 0x100);
        if (lVar13 == *(longlong *)(lVar11 + 0xf0)) {
          pdb_142dbafc0(lVar11 + 0xf0);
        }
        lVar14 = *(longlong *)(lVar11 + 0xf8);
        lVar15 = lVar13 * 0x1c;
        *(undefined4 *)(lVar14 + lVar15) = 0;
        *(ulonglong *)(lVar14 + 4 + lVar15) = CONCAT44(uVar17,uVar5);
        *(int *)(lVar14 + 0x10 + lVar15) = iVar3 + 3;
        *(int *)(lVar14 + 0x14 + lVar15) = iVar4;
        *(undefined4 *)(lVar14 + 0x18 + lVar15) = uVar18;
        *(longlong *)(lVar11 + 0x100) = lVar13 + 1;
        bVar1 = pbVar8[0x11];
        uVar16 = 0x19;
        uVar19 = bVar1 - 0x7c;
        if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
          uVar16 = 0x1a;
        }
        if (param_3[1] != 0) {
          uVar17 = *(undefined4 *)(pbVar8 + 4);
          lVar11 = *param_3;
          uVar18 = pdb_141e52d90(*(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                                 lVar11 + 0xd8,*(undefined8 *)(lVar11 + 0x80),
                                 *(undefined8 *)(lVar11 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar17,CONCAT11(uVar21,uVar16),1);
          if (*pbVar8 != bVar1 && *pbVar8 != 0) {
            pdb_140e2c3a0(*param_3,pbVar8);
          }
          lVar11 = *param_3;
          uVar5 = *(undefined4 *)pbVar8;
          lVar13 = *(longlong *)(lVar11 + 0x100);
          if (lVar13 == *(longlong *)(lVar11 + 0xf0)) {
            pdb_142dbafc0(lVar11 + 0xf0);
          }
          lVar14 = *(longlong *)(lVar11 + 0xf8);
          lVar15 = lVar13 * 0x1c;
          *(undefined4 *)(lVar14 + lVar15) = 0;
          *(ulonglong *)(lVar14 + 4 + lVar15) = CONCAT44(uVar17,uVar5);
          *(int *)(lVar14 + 0x10 + lVar15) = iVar3 + 2;
          *(int *)(lVar14 + 0x14 + lVar15) = iVar4;
          *(undefined4 *)(lVar14 + 0x18 + lVar15) = uVar18;
          *(longlong *)(lVar11 + 0x100) = lVar13 + 1;
          *(undefined1 *)(lVar6 + (ulonglong)(uVar2 + 0x10)) =
               *(undefined1 *)((longlong)param_1 + 0x21);
          *(undefined1 *)(lVar6 + (ulonglong)(uVar2 + 0x14)) =
               *(undefined1 *)((longlong)param_1 + 0x22);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14358cc58);
}

