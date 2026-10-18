// VA 0x140908d10, PDB extent 879 bytes
// country_core::shader::compute_volumetric_sm::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::compute_volumetric_sm::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 879 */

void pdb_140908d10(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  
  lVar6 = param_3[1];
  puVar7 = (undefined8 *)param_1[1];
  uVar2 = param_2[2];
  *(ulonglong *)(lVar6 + (ulonglong)uVar2) =
       (ulonglong)*(ushort *)((longlong)puVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar7 + 1);
  param_3 = (longlong *)*param_3;
  pbVar8 = (byte *)*param_1;
  bVar1 = pbVar8[0x11];
  uVar14 = 0x19;
  uVar17 = bVar1 - 0x7c;
  if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
    uVar14 = 0x1a;
  }
  if (param_3[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    uVar16 = *(undefined4 *)(pbVar8 + 4);
    lVar9 = *param_3;
    uVar15 = pdb_141764080(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8,
                           *(undefined8 *)(lVar9 + 0x80),*(undefined8 *)(lVar9 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar16,uVar14,1);
    if (*pbVar8 != bVar1 && *pbVar8 != 0) {
      pdb_140e2c3a0(*param_3,pbVar8);
    }
    lVar9 = *param_3;
    uVar5 = *(undefined4 *)pbVar8;
    lVar10 = *(longlong *)(lVar9 + 0x100);
    if (lVar10 == *(longlong *)(lVar9 + 0xf0)) {
      pdb_142dbafc0(lVar9 + 0xf0);
    }
    lVar11 = *(longlong *)(lVar9 + 0xf8);
    lVar13 = lVar10 * 0x1c;
    *(undefined4 *)(lVar11 + lVar13) = 0;
    *(ulonglong *)(lVar11 + 4 + lVar13) = CONCAT44(uVar16,uVar5);
    *(int *)(lVar11 + 0x10 + lVar13) = iVar3 + 1;
    *(int *)(lVar11 + 0x14 + lVar13) = iVar4;
    *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar15;
    *(longlong *)(lVar9 + 0x100) = lVar10 + 1;
    if (param_3[1] != 0) {
      lVar9 = *param_3;
      uVar12 = *puVar7;
      uVar14 = 0x33;
      uVar16 = pdb_141764730(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8
                             ,*(undefined8 *)(lVar9 + 0x80),*(undefined8 *)(lVar9 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],
                             (int)((ulonglong)uVar12 >> 0x20),0x3319,*(undefined4 *)(lVar9 + 0x248))
      ;
      lVar9 = *param_3;
      lVar10 = *(longlong *)(lVar9 + 0x100);
      if (lVar10 == *(longlong *)(lVar9 + 0xf0)) {
        pdb_142dbafc0(lVar9 + 0xf0);
      }
      lVar11 = *(longlong *)(lVar9 + 0xf8);
      lVar13 = lVar10 * 0x1c;
      *(undefined4 *)(lVar11 + lVar13) = 1;
      *(undefined8 *)(lVar11 + 4 + lVar13) = uVar12;
      *(int *)(lVar11 + 0x10 + lVar13) = iVar3 + 2;
      *(int *)(lVar11 + 0x14 + lVar13) = iVar4;
      *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar16;
      *(longlong *)(lVar9 + 0x100) = lVar10 + 1;
      if (param_3[1] != 0) {
        lVar9 = param_1[2];
        uVar16 = *(undefined4 *)(lVar9 + 0x10);
        lVar10 = *param_3;
        uVar15 = pdb_141764080(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                               lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                               *(undefined8 *)(lVar10 + 0x88),(short)param_3[7],param_3[1],
                               param_3[2],uVar16,CONCAT11(uVar14,0x19),1);
        lVar10 = *param_3;
        uVar12 = *(undefined8 *)(lVar9 + 8);
        lVar9 = *(longlong *)(lVar10 + 0x100);
        if (lVar9 == *(longlong *)(lVar10 + 0xf0)) {
          pdb_142dbafc0(lVar10 + 0xf0);
        }
        lVar11 = *(longlong *)(lVar10 + 0xf8);
        lVar13 = lVar9 * 0x1c;
        *(undefined4 *)(lVar11 + lVar13) = 4;
        *(undefined8 *)(lVar11 + 4 + lVar13) = uVar12;
        *(undefined4 *)(lVar11 + 0xc + lVar13) = uVar16;
        *(int *)(lVar11 + 0x10 + lVar13) = iVar3 + 3;
        *(int *)(lVar11 + 0x14 + lVar13) = iVar4;
        *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar15;
        *(longlong *)(lVar10 + 0x100) = lVar9 + 1;
        *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar2 + 8)) = *(undefined4 *)(param_1 + 4);
        *(undefined8 *)(lVar6 + (ulonglong)(uVar2 + 8)) = param_1[3];
        *(undefined4 *)(lVar6 + (ulonglong)(uVar2 + 0x14)) =
             *(undefined4 *)((longlong)param_1 + 0x24);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

