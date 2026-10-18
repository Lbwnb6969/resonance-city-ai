// VA 0x140adfe80, PDB extent 904 bytes
// country_core::shader::paths::directional_contract::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::paths::directional_contract::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 904 */

void pdb_140adfe80(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined2 in_stack_ffffffffffffffa0;
  undefined2 uVar18;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)param_1[1];
  uVar17 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar17) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  puVar7 = (undefined8 *)param_1[2];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar17 + 8)) =
       (ulonglong)*(ushort *)((longlong)puVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar7 + 1);
  pbVar8 = (byte *)*param_1;
  *(ulonglong *)(lVar5 + (ulonglong)(uVar17 + 0x10)) =
       (ulonglong)*(ushort *)(pbVar8 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar8 + 8);
  param_3 = (longlong *)*param_3;
  bVar1 = pbVar8[0x11];
  uVar13 = 0x19;
  uVar17 = bVar1 - 0x7c;
  if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
    uVar13 = 0x1a;
  }
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar16 = *(undefined4 *)(pbVar8 + 4);
    lVar5 = *param_3;
    uVar18 = CONCAT11((char)((ushort)in_stack_ffffffffffffffa0 >> 8),uVar13);
    uVar15 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar16,uVar18,1);
    uVar13 = (undefined1)((ushort)uVar18 >> 8);
    if (*pbVar8 != bVar1 && *pbVar8 != 0) {
      pdb_140e2c3a0(*param_3,pbVar8);
    }
    lVar5 = *param_3;
    uVar4 = *(undefined4 *)pbVar8;
    lVar9 = *(longlong *)(lVar5 + 0x100);
    if (lVar9 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar10 = *(longlong *)(lVar5 + 0xf8);
    lVar12 = lVar9 * 0x1c;
    *(undefined4 *)(lVar10 + lVar12) = 0;
    *(ulonglong *)(lVar10 + 4 + lVar12) = CONCAT44(uVar16,uVar4);
    *(int *)(lVar10 + 0x10 + lVar12) = iVar2 + 3;
    *(int *)(lVar10 + 0x14 + lVar12) = iVar3;
    *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
    *(longlong *)(lVar5 + 0x100) = lVar9 + 1;
    bVar1 = pbVar6[0x11];
    uVar14 = 0x19;
    uVar17 = bVar1 - 0x7c;
    if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
      uVar14 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar16 = *(undefined4 *)(pbVar6 + 4);
      lVar5 = *param_3;
      uVar15 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar16,CONCAT11(uVar13,uVar14),
                             1);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*param_3,pbVar6);
      }
      lVar5 = *param_3;
      uVar4 = *(undefined4 *)pbVar6;
      lVar9 = *(longlong *)(lVar5 + 0x100);
      if (lVar9 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar10 = *(longlong *)(lVar5 + 0xf8);
      lVar12 = lVar9 * 0x1c;
      *(undefined4 *)(lVar10 + lVar12) = 0;
      *(ulonglong *)(lVar10 + 4 + lVar12) = CONCAT44(uVar16,uVar4);
      *(int *)(lVar10 + 0x10 + lVar12) = iVar2 + 1;
      *(int *)(lVar10 + 0x14 + lVar12) = iVar3;
      *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
      *(longlong *)(lVar5 + 0x100) = lVar9 + 1;
      if (param_3[1] != 0) {
        lVar5 = *param_3;
        uVar11 = *puVar7;
        uVar16 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                               lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                               *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,(int)((ulonglong)uVar11 >> 0x20),0x3319,
                               *(undefined4 *)(lVar5 + 0x248));
        lVar5 = *param_3;
        lVar9 = *(longlong *)(lVar5 + 0x100);
        if (lVar9 == *(longlong *)(lVar5 + 0xf0)) {
          pdb_142dbafc0(lVar5 + 0xf0);
        }
        lVar10 = *(longlong *)(lVar5 + 0xf8);
        lVar12 = lVar9 * 0x1c;
        *(undefined4 *)(lVar10 + lVar12) = 1;
        *(undefined8 *)(lVar10 + 4 + lVar12) = uVar11;
        *(int *)(lVar10 + 0x10 + lVar12) = iVar2 + 2;
        *(int *)(lVar10 + 0x14 + lVar12) = iVar3;
        *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar16;
        *(longlong *)(lVar5 + 0x100) = lVar9 + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

