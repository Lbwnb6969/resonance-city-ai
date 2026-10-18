// VA 0x141cfb0d0, PDB extent 1504 bytes
// rhapsody_gi::shader::gtao_temporal::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-gi-ba0f1cd73f31ab76/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_gi::shader::gtao_temporal::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-gi-ba0f1cd73f31ab76/out/shabriri.rs
   Extent: 1504 */

void pdb_141cfb0d0(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
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
  pbVar6 = (byte *)*param_1;
  uVar19 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar19) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  pbVar7 = (byte *)param_1[2];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 8)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  pbVar8 = (byte *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  puVar9 = (undefined8 *)param_1[1];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x20)) =
       (ulonglong)*(ushort *)((longlong)puVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar9 + 1);
  puVar10 = (undefined8 *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar19 + 0x18)) =
       (ulonglong)*(ushort *)((longlong)puVar10 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar10 + 1);
  *(undefined1 *)(lVar5 + (ulonglong)(uVar19 + 0x28)) = *(undefined1 *)(param_1 + 5);
  param_3 = (longlong *)*param_3;
  bVar1 = pbVar6[0x11];
  uVar15 = 0x19;
  uVar19 = bVar1 - 0x7c;
  if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
    uVar15 = 0x1a;
  }
  if (param_3[1] != 0) {
    uVar18 = *(undefined4 *)(pbVar6 + 4);
    lVar5 = *param_3;
    uVar17 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar18,uVar15,1);
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
    *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 1;
    *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
    *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar17;
    *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
    if (param_3[1] != 0) {
      lVar5 = *param_3;
      uVar13 = *puVar9;
      uVar15 = 0x33;
      uVar18 = pdb_141cf8590(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
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
      bVar1 = pbVar7[0x11];
      uVar16 = 0x19;
      uVar19 = bVar1 - 0x7c;
      if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
        uVar16 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar18 = *(undefined4 *)(pbVar7 + 4);
        lVar5 = *param_3;
        uVar17 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar18,CONCAT11(uVar15,uVar16),1);
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
        *(int *)(lVar12 + 0x10 + lVar14) = iVar2 + 2;
        *(int *)(lVar12 + 0x14 + lVar14) = iVar3;
        *(undefined4 *)(lVar12 + 0x18 + lVar14) = uVar17;
        *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
        if (param_3[1] != 0) {
          lVar5 = *param_3;
          uVar13 = *puVar10;
          uVar15 = 0x33;
          uVar18 = pdb_141cf8590(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
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
          bVar1 = pbVar8[0x11];
          uVar16 = 0x19;
          uVar19 = bVar1 - 0x7c;
          if ((uVar19 < 7) && ((0x75U >> (uVar19 & 0x1f) & 1) != 0)) {
            uVar16 = 0x1a;
          }
          if (param_3[1] != 0) {
            uVar18 = *(undefined4 *)(pbVar8 + 4);
            lVar5 = *param_3;
            uVar17 = pdb_141cf82d0(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar18,CONCAT11(uVar15,uVar16),1);
            if (*pbVar8 != bVar1 && *pbVar8 != 0) {
              pdb_140e2c3a0(*param_3,pbVar8);
            }
            lVar5 = *param_3;
            uVar4 = *(undefined4 *)pbVar8;
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
  pdb_142dc8150(&UNK_1433c7f00);
}

