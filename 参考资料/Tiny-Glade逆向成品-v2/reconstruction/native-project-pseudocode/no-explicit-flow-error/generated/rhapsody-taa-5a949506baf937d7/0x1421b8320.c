// VA 0x1421b8320, PDB extent 1788 bytes
// rhapsody_taa::shader::tgsr_reproject::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-taa-5a949506baf937d7/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_taa::shader::tgsr_reproject::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-taa-5a949506baf937d7/out/shabriri.rs
   Extent: 1788 */

void pdb_1421b8320(longlong *param_1,int *param_2,longlong *param_3)

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
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined1 uVar22;
  
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
  *(ulonglong *)(lVar6 + (ulonglong)(uVar2 + 0x2c)) =
       (ulonglong)*(ushort *)((longlong)puVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar9 + 1);
  pbVar10 = (byte *)param_1[5];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar2 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar10 + 8);
  puVar11 = (undefined8 *)param_1[2];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar2 + 0x24)) =
       (ulonglong)*(ushort *)((longlong)puVar11 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar11 + 1);
  puVar12 = (undefined8 *)param_1[4];
  *(ulonglong *)(lVar6 + (ulonglong)(uVar2 + 0x1c)) =
       (ulonglong)*(ushort *)((longlong)puVar12 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar12 + 1);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar13 = *param_3;
    uVar14 = *puVar9;
    uVar22 = 0x33;
    uVar19 = pdb_1410dd1c0(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                           lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                           *(undefined8 *)(lVar13 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                           (int)((ulonglong)uVar14 >> 0x20),0x3319,*(undefined4 *)(lVar13 + 0x248));
    lVar13 = *param_3;
    lVar15 = *(longlong *)(lVar13 + 0x100);
    if (lVar15 == *(longlong *)(lVar13 + 0xf0)) {
      pdb_142dbafc0(lVar13 + 0xf0);
    }
    lVar16 = *(longlong *)(lVar13 + 0xf8);
    lVar17 = lVar15 * 0x1c;
    *(undefined4 *)(lVar16 + lVar17) = 1;
    *(undefined8 *)(lVar16 + 4 + lVar17) = uVar14;
    *(int *)(lVar16 + 0x10 + lVar17) = iVar3 + 6;
    *(int *)(lVar16 + 0x14 + lVar17) = iVar4;
    *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar19;
    *(longlong *)(lVar13 + 0x100) = lVar15 + 1;
    bVar1 = pbVar7[0x11];
    uVar18 = 0x19;
    uVar21 = bVar1 - 0x7c;
    if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
      uVar18 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar19 = *(undefined4 *)(pbVar7 + 4);
      lVar13 = *param_3;
      uVar20 = pdb_1410dd4f0(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                             lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                             *(undefined8 *)(lVar13 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                             uVar19,CONCAT11(uVar22,uVar18),1);
      if (*pbVar7 != bVar1 && *pbVar7 != 0) {
        pdb_140e2c3a0(*param_3,pbVar7);
      }
      lVar13 = *param_3;
      uVar5 = *(undefined4 *)pbVar7;
      lVar15 = *(longlong *)(lVar13 + 0x100);
      if (lVar15 == *(longlong *)(lVar13 + 0xf0)) {
        pdb_142dbafc0(lVar13 + 0xf0);
      }
      lVar16 = *(longlong *)(lVar13 + 0xf8);
      lVar17 = lVar15 * 0x1c;
      *(undefined4 *)(lVar16 + lVar17) = 0;
      *(ulonglong *)(lVar16 + 4 + lVar17) = CONCAT44(uVar19,uVar5);
      *(int *)(lVar16 + 0x10 + lVar17) = iVar3 + 1;
      *(int *)(lVar16 + 0x14 + lVar17) = iVar4;
      *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar20;
      *(longlong *)(lVar13 + 0x100) = lVar15 + 1;
      if (param_3[1] != 0) {
        lVar13 = *param_3;
        uVar14 = *puVar11;
        uVar22 = 0x33;
        uVar19 = pdb_1410dd1c0(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                               lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                               *(undefined8 *)(lVar13 + 0x88),(short)param_3[7],param_3[1],
                               param_3[2],(int)((ulonglong)uVar14 >> 0x20),0x3319,
                               *(undefined4 *)(lVar13 + 0x248));
        lVar13 = *param_3;
        lVar15 = *(longlong *)(lVar13 + 0x100);
        if (lVar15 == *(longlong *)(lVar13 + 0xf0)) {
          pdb_142dbafc0(lVar13 + 0xf0);
        }
        lVar16 = *(longlong *)(lVar13 + 0xf8);
        lVar17 = lVar15 * 0x1c;
        *(undefined4 *)(lVar16 + lVar17) = 1;
        *(undefined8 *)(lVar16 + 4 + lVar17) = uVar14;
        *(int *)(lVar16 + 0x10 + lVar17) = iVar3 + 5;
        *(int *)(lVar16 + 0x14 + lVar17) = iVar4;
        *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar19;
        *(longlong *)(lVar13 + 0x100) = lVar15 + 1;
        bVar1 = pbVar8[0x11];
        uVar18 = 0x19;
        uVar21 = bVar1 - 0x7c;
        if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
          uVar18 = 0x1a;
        }
        if (param_3[1] != 0) {
          uVar19 = *(undefined4 *)(pbVar8 + 4);
          lVar13 = *param_3;
          uVar20 = pdb_1410dd4f0(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                                 lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                                 *(undefined8 *)(lVar13 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar19,CONCAT11(uVar22,uVar18),1);
          if (*pbVar8 != bVar1 && *pbVar8 != 0) {
            pdb_140e2c3a0(*param_3,pbVar8);
          }
          lVar13 = *param_3;
          uVar5 = *(undefined4 *)pbVar8;
          lVar15 = *(longlong *)(lVar13 + 0x100);
          if (lVar15 == *(longlong *)(lVar13 + 0xf0)) {
            pdb_142dbafc0(lVar13 + 0xf0);
          }
          lVar16 = *(longlong *)(lVar13 + 0xf8);
          lVar17 = lVar15 * 0x1c;
          *(undefined4 *)(lVar16 + lVar17) = 0;
          *(ulonglong *)(lVar16 + 4 + lVar17) = CONCAT44(uVar19,uVar5);
          *(int *)(lVar16 + 0x10 + lVar17) = iVar3 + 2;
          *(int *)(lVar16 + 0x14 + lVar17) = iVar4;
          *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar20;
          *(longlong *)(lVar13 + 0x100) = lVar15 + 1;
          if (param_3[1] != 0) {
            lVar13 = *param_3;
            uVar14 = *puVar12;
            uVar22 = 0x33;
            uVar19 = pdb_1410dd1c0(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                                   lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                                   *(undefined8 *)(lVar13 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],(int)((ulonglong)uVar14 >> 0x20),0x3319,
                                   *(undefined4 *)(lVar13 + 0x248));
            lVar13 = *param_3;
            lVar15 = *(longlong *)(lVar13 + 0x100);
            if (lVar15 == *(longlong *)(lVar13 + 0xf0)) {
              pdb_142dbafc0(lVar13 + 0xf0);
            }
            lVar16 = *(longlong *)(lVar13 + 0xf8);
            lVar17 = lVar15 * 0x1c;
            *(undefined4 *)(lVar16 + lVar17) = 1;
            *(undefined8 *)(lVar16 + 4 + lVar17) = uVar14;
            *(int *)(lVar16 + 0x10 + lVar17) = iVar3 + 4;
            *(int *)(lVar16 + 0x14 + lVar17) = iVar4;
            *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar19;
            *(longlong *)(lVar13 + 0x100) = lVar15 + 1;
            bVar1 = pbVar10[0x11];
            uVar18 = 0x19;
            uVar21 = bVar1 - 0x7c;
            if ((uVar21 < 7) && ((0x75U >> (uVar21 & 0x1f) & 1) != 0)) {
              uVar18 = 0x1a;
            }
            if (param_3[1] != 0) {
              uVar19 = *(undefined4 *)(pbVar10 + 4);
              lVar13 = *param_3;
              uVar20 = pdb_1410dd4f0(*(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),
                                     lVar13 + 0xd8,*(undefined8 *)(lVar13 + 0x80),
                                     *(undefined8 *)(lVar13 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],uVar19,CONCAT11(uVar22,uVar18),1);
              if (*pbVar10 != bVar1 && *pbVar10 != 0) {
                pdb_140e2c3a0(*param_3,pbVar10);
              }
              lVar13 = *param_3;
              uVar5 = *(undefined4 *)pbVar10;
              lVar15 = *(longlong *)(lVar13 + 0x100);
              if (lVar15 == *(longlong *)(lVar13 + 0xf0)) {
                pdb_142dbafc0(lVar13 + 0xf0);
              }
              lVar16 = *(longlong *)(lVar13 + 0xf8);
              lVar17 = lVar15 * 0x1c;
              *(undefined4 *)(lVar16 + lVar17) = 0;
              *(ulonglong *)(lVar16 + 4 + lVar17) = CONCAT44(uVar19,uVar5);
              *(int *)(lVar16 + 0x10 + lVar17) = iVar3 + 3;
              *(int *)(lVar16 + 0x14 + lVar17) = iVar4;
              *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar20;
              *(longlong *)(lVar13 + 0x100) = lVar15 + 1;
              *(char *)(lVar6 + (ulonglong)(uVar2 + 0x18)) = (char)param_1[6];
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa3030);
}

