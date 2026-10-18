// VA 0x141a12550, PDB extent 1241 bytes
// country_core::shader::water::ice_refr_resolve::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::water::ice_refr_resolve::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1241 */

void pdb_141a12550(longlong *param_1,int *param_2,longlong *param_3)

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
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined1 uVar19;
  undefined2 uVar18;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)param_1[1];
  uVar17 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar17) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  pbVar7 = (byte *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar17 + 8)) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  puVar8 = (undefined8 *)*param_1;
  *(ulonglong *)(lVar5 + (ulonglong)(uVar17 + 0x18)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  pbVar9 = (byte *)param_1[2];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar17 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar9 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar9 + 8);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    lVar5 = *param_3;
    uVar10 = *puVar8;
    uVar19 = 0x33;
    uVar15 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],(int)((ulonglong)uVar10 >> 0x20),
                           0x3319,*(undefined4 *)(lVar5 + 0x248));
    lVar5 = *param_3;
    lVar11 = *(longlong *)(lVar5 + 0x100);
    if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar12 = *(longlong *)(lVar5 + 0xf8);
    lVar13 = lVar11 * 0x1c;
    *(undefined4 *)(lVar12 + lVar13) = 1;
    *(undefined8 *)(lVar12 + 4 + lVar13) = uVar10;
    *(int *)(lVar12 + 0x10 + lVar13) = iVar2 + 4;
    *(int *)(lVar12 + 0x14 + lVar13) = iVar3;
    *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar15;
    *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
    bVar1 = pbVar6[0x11];
    uVar14 = 0x19;
    uVar17 = bVar1 - 0x7c;
    if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
      uVar14 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar15 = *(undefined4 *)(pbVar6 + 4);
      lVar5 = *param_3;
      uVar18 = CONCAT11(uVar19,uVar14);
      uVar16 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar15,uVar18,1);
      uVar19 = (undefined1)((ushort)uVar18 >> 8);
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
      lVar13 = lVar11 * 0x1c;
      *(undefined4 *)(lVar12 + lVar13) = 0;
      *(ulonglong *)(lVar12 + 4 + lVar13) = CONCAT44(uVar15,uVar4);
      *(int *)(lVar12 + 0x10 + lVar13) = iVar2 + 1;
      *(int *)(lVar12 + 0x14 + lVar13) = iVar3;
      *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
      *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
      bVar1 = pbVar9[0x11];
      uVar14 = 0x19;
      uVar17 = bVar1 - 0x7c;
      if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
        uVar14 = 0x1a;
      }
      if (param_3[1] != 0) {
        uVar15 = *(undefined4 *)(pbVar9 + 4);
        lVar5 = *param_3;
        uVar18 = CONCAT11(uVar19,uVar14);
        uVar16 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar15,uVar18,1);
        uVar19 = (undefined1)((ushort)uVar18 >> 8);
        if (*pbVar9 != bVar1 && *pbVar9 != 0) {
          pdb_140e2c3a0(*param_3,pbVar9);
        }
        lVar5 = *param_3;
        uVar4 = *(undefined4 *)pbVar9;
        lVar11 = *(longlong *)(lVar5 + 0x100);
        if (lVar11 == *(longlong *)(lVar5 + 0xf0)) {
          pdb_142dbafc0(lVar5 + 0xf0);
        }
        lVar12 = *(longlong *)(lVar5 + 0xf8);
        lVar13 = lVar11 * 0x1c;
        *(undefined4 *)(lVar12 + lVar13) = 0;
        *(ulonglong *)(lVar12 + 4 + lVar13) = CONCAT44(uVar15,uVar4);
        *(int *)(lVar12 + 0x10 + lVar13) = iVar2 + 3;
        *(int *)(lVar12 + 0x14 + lVar13) = iVar3;
        *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
        *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
        bVar1 = pbVar7[0x11];
        uVar14 = 0x19;
        uVar17 = bVar1 - 0x7c;
        if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
          uVar14 = 0x1a;
        }
        if (param_3[1] != 0) {
          uVar15 = *(undefined4 *)(pbVar7 + 4);
          lVar5 = *param_3;
          uVar16 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar15,CONCAT11(uVar19,uVar14),1);
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
          lVar13 = lVar11 * 0x1c;
          *(undefined4 *)(lVar12 + lVar13) = 0;
          *(ulonglong *)(lVar12 + 4 + lVar13) = CONCAT44(uVar15,uVar4);
          *(int *)(lVar12 + 0x10 + lVar13) = iVar2 + 2;
          *(int *)(lVar12 + 0x14 + lVar13) = iVar3;
          *(undefined4 *)(lVar12 + 0x18 + lVar13) = uVar16;
          *(longlong *)(lVar5 + 0x100) = lVar11 + 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

