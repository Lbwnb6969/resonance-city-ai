// VA 0x1409fbfa0, PDB extent 1430 bytes
// country_core::shader::painterly::acquire_target::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::painterly::acquire_target::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1430 */

void pdb_1409fbfa0(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined2 in_stack_ffffffffffffff90;
  undefined2 uVar19;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)param_1[1];
  uVar18 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar18) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  puVar7 = (undefined8 *)param_1[4];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar18 + 8)) =
       (ulonglong)*(ushort *)((longlong)puVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar7 + 1);
  puVar8 = (undefined8 *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar18 + 0x10)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  param_3 = (longlong *)*param_3;
  pbVar9 = (byte *)*param_1;
  bVar1 = pbVar9[0x11];
  uVar14 = 0x19;
  uVar18 = bVar1 - 0x7c;
  if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
    uVar14 = 0x1a;
  }
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar17 = *(undefined4 *)(pbVar9 + 4);
    lVar5 = *param_3;
    uVar19 = CONCAT11((char)((ushort)in_stack_ffffffffffffff90 >> 8),uVar14);
    uVar16 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar17,uVar19,1);
    uVar14 = (undefined1)((ushort)uVar19 >> 8);
    if (*pbVar9 != bVar1 && *pbVar9 != 0) {
      pdb_140e2c3a0(*param_3,pbVar9);
    }
    lVar5 = *param_3;
    uVar4 = *(undefined4 *)pbVar9;
    lVar10 = *(longlong *)(lVar5 + 0x100);
    if (lVar10 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar11 = *(longlong *)(lVar5 + 0xf8);
    lVar13 = lVar10 * 0x1c;
    *(undefined4 *)(lVar11 + lVar13) = 0;
    *(ulonglong *)(lVar11 + 4 + lVar13) = CONCAT44(uVar17,uVar4);
    *(int *)(lVar11 + 0x10 + lVar13) = iVar2 + 1;
    *(int *)(lVar11 + 0x14 + lVar13) = iVar3;
    *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar16;
    *(longlong *)(lVar5 + 0x100) = lVar10 + 1;
    bVar1 = pbVar6[0x11];
    uVar15 = 0x19;
    uVar18 = bVar1 - 0x7c;
    if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
      uVar15 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar17 = *(undefined4 *)(pbVar6 + 4);
      lVar5 = *param_3;
      uVar19 = CONCAT11(uVar14,uVar15);
      uVar16 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar17,uVar19,1);
      uVar14 = (undefined1)((ushort)uVar19 >> 8);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*param_3,pbVar6);
      }
      lVar5 = *param_3;
      uVar4 = *(undefined4 *)pbVar6;
      lVar10 = *(longlong *)(lVar5 + 0x100);
      if (lVar10 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar11 = *(longlong *)(lVar5 + 0xf8);
      lVar13 = lVar10 * 0x1c;
      *(undefined4 *)(lVar11 + lVar13) = 0;
      *(ulonglong *)(lVar11 + 4 + lVar13) = CONCAT44(uVar17,uVar4);
      *(int *)(lVar11 + 0x10 + lVar13) = iVar2 + 2;
      *(int *)(lVar11 + 0x14 + lVar13) = iVar3;
      *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar16;
      *(longlong *)(lVar5 + 0x100) = lVar10 + 1;
      pbVar6 = (byte *)param_1[2];
      bVar1 = pbVar6[0x11];
      uVar15 = 0x19;
      uVar18 = bVar1 - 0x7c;
      if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
        uVar15 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar17 = *(undefined4 *)(pbVar6 + 4);
        lVar5 = *param_3;
        uVar16 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar17,CONCAT11(uVar14,uVar15),1);
        if (*pbVar6 != bVar1 && *pbVar6 != 0) {
          pdb_140e2c3a0(*param_3,pbVar6);
        }
        lVar5 = *param_3;
        uVar4 = *(undefined4 *)pbVar6;
        lVar10 = *(longlong *)(lVar5 + 0x100);
        if (lVar10 == *(longlong *)(lVar5 + 0xf0)) {
          pdb_142dbafc0(lVar5 + 0xf0);
        }
        lVar11 = *(longlong *)(lVar5 + 0xf8);
        lVar13 = lVar10 * 0x1c;
        *(undefined4 *)(lVar11 + lVar13) = 0;
        *(ulonglong *)(lVar11 + 4 + lVar13) = CONCAT44(uVar17,uVar4);
        *(int *)(lVar11 + 0x10 + lVar13) = iVar2 + 3;
        *(int *)(lVar11 + 0x14 + lVar13) = iVar3;
        *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar16;
        *(longlong *)(lVar5 + 0x100) = lVar10 + 1;
        if (param_3[1] != 0) {
          lVar5 = *param_3;
          uVar12 = *puVar8;
          uVar17 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],(int)((ulonglong)uVar12 >> 0x20),0x3319,
                                 *(undefined4 *)(lVar5 + 0x248));
          lVar5 = *param_3;
          lVar10 = *(longlong *)(lVar5 + 0x100);
          if (lVar10 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar11 = *(longlong *)(lVar5 + 0xf8);
          lVar13 = lVar10 * 0x1c;
          *(undefined4 *)(lVar11 + lVar13) = 1;
          *(undefined8 *)(lVar11 + 4 + lVar13) = uVar12;
          *(int *)(lVar11 + 0x10 + lVar13) = iVar2 + 5;
          *(int *)(lVar11 + 0x14 + lVar13) = iVar3;
          *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar17;
          *(longlong *)(lVar5 + 0x100) = lVar10 + 1;
          if (param_3[1] != 0) {
            lVar5 = *param_3;
            uVar12 = *puVar7;
            uVar17 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                   lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],(int)((ulonglong)uVar12 >> 0x20),0x3319,
                                   *(undefined4 *)(lVar5 + 0x248));
            lVar5 = *param_3;
            lVar10 = *(longlong *)(lVar5 + 0x100);
            if (lVar10 == *(longlong *)(lVar5 + 0xf0)) {
              pdb_142dbafc0(lVar5 + 0xf0);
            }
            lVar11 = *(longlong *)(lVar5 + 0xf8);
            lVar13 = lVar10 * 0x1c;
            *(undefined4 *)(lVar11 + lVar13) = 1;
            *(undefined8 *)(lVar11 + 4 + lVar13) = uVar12;
            *(int *)(lVar11 + 0x10 + lVar13) = iVar2 + 4;
            *(int *)(lVar11 + 0x14 + lVar13) = iVar3;
            *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar17;
            *(longlong *)(lVar5 + 0x100) = lVar10 + 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

