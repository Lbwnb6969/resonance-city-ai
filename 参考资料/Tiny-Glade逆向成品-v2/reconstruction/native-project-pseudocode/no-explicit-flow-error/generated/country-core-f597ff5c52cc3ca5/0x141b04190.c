// VA 0x141b04190, PDB extent 1099 bytes
// country_core::shader::dof::prepare::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::dof::prepare::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1099 */

void pdb_141b04190(longlong *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 uVar18;
  undefined2 uVar17;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)param_1[1];
  uVar16 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar16) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  puVar7 = (undefined8 *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar16 + 8)) =
       (ulonglong)*(ushort *)((longlong)puVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar7 + 1);
  puVar8 = (undefined8 *)*param_1;
  *(ulonglong *)(lVar5 + (ulonglong)(uVar16 + 0x10)) =
       (ulonglong)*(ushort *)((longlong)puVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar8 + 1);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    lVar5 = *param_3;
    uVar9 = *puVar8;
    uVar18 = 0x33;
    uVar14 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],(int)((ulonglong)uVar9 >> 0x20),
                           0x3319,*(undefined4 *)(lVar5 + 0x248));
    lVar5 = *param_3;
    lVar10 = *(longlong *)(lVar5 + 0x100);
    if (lVar10 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar11 = *(longlong *)(lVar5 + 0xf8);
    lVar12 = lVar10 * 0x1c;
    *(undefined4 *)(lVar11 + lVar12) = 1;
    *(undefined8 *)(lVar11 + 4 + lVar12) = uVar9;
    *(int *)(lVar11 + 0x10 + lVar12) = iVar2 + 4;
    *(int *)(lVar11 + 0x14 + lVar12) = iVar3;
    *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar14;
    *(longlong *)(lVar5 + 0x100) = lVar10 + 1;
    bVar1 = pbVar6[0x11];
    uVar13 = 0x19;
    uVar16 = bVar1 - 0x7c;
    if ((uVar16 < 7) && ((0x75U >> (uVar16 & 0x1f) & 1) != 0)) {
      uVar13 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar14 = *(undefined4 *)(pbVar6 + 4);
      lVar5 = *param_3;
      uVar17 = CONCAT11(uVar18,uVar13);
      uVar15 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar14,uVar17,1);
      uVar18 = (undefined1)((ushort)uVar17 >> 8);
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
      lVar12 = lVar10 * 0x1c;
      *(undefined4 *)(lVar11 + lVar12) = 0;
      *(ulonglong *)(lVar11 + 4 + lVar12) = CONCAT44(uVar14,uVar4);
      *(int *)(lVar11 + 0x10 + lVar12) = iVar2 + 1;
      *(int *)(lVar11 + 0x14 + lVar12) = iVar3;
      *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar15;
      *(longlong *)(lVar5 + 0x100) = lVar10 + 1;
      if (param_3[1] != 0) {
        lVar5 = param_1[2];
        uVar14 = *(undefined4 *)(lVar5 + 0x10);
        lVar10 = *param_3;
        uVar15 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                               lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                               *(undefined8 *)(lVar10 + 0x88),(short)param_3[7],param_3[1],
                               param_3[2],uVar14,CONCAT11(uVar18,0x19),1);
        lVar10 = *param_3;
        uVar9 = *(undefined8 *)(lVar5 + 8);
        lVar5 = *(longlong *)(lVar10 + 0x100);
        if (lVar5 == *(longlong *)(lVar10 + 0xf0)) {
          pdb_142dbafc0(lVar10 + 0xf0);
        }
        lVar11 = *(longlong *)(lVar10 + 0xf8);
        lVar12 = lVar5 * 0x1c;
        *(undefined4 *)(lVar11 + lVar12) = 4;
        *(undefined8 *)(lVar11 + 4 + lVar12) = uVar9;
        *(undefined4 *)(lVar11 + 0xc + lVar12) = uVar14;
        *(int *)(lVar11 + 0x10 + lVar12) = iVar2 + 2;
        *(int *)(lVar11 + 0x14 + lVar12) = iVar3;
        *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar15;
        *(longlong *)(lVar10 + 0x100) = lVar5 + 1;
        if (param_3[1] != 0) {
          lVar5 = *param_3;
          uVar9 = *puVar7;
          uVar14 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],(int)((ulonglong)uVar9 >> 0x20),0x3319,
                                 *(undefined4 *)(lVar5 + 0x248));
          lVar5 = *param_3;
          lVar10 = *(longlong *)(lVar5 + 0x100);
          if (lVar10 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar11 = *(longlong *)(lVar5 + 0xf8);
          lVar12 = lVar10 * 0x1c;
          *(undefined4 *)(lVar11 + lVar12) = 1;
          *(undefined8 *)(lVar11 + 4 + lVar12) = uVar9;
          *(int *)(lVar11 + 0x10 + lVar12) = iVar2 + 3;
          *(int *)(lVar11 + 0x14 + lVar12) = iVar3;
          *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar14;
          *(longlong *)(lVar5 + 0x100) = lVar10 + 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

