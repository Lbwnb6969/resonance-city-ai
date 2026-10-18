// VA 0x140b6e140, PDB extent 633 bytes
// country_core::shader::gauss_blur::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::gauss_blur::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 633 */

void pdb_140b6e140(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  
  lVar6 = param_3[1];
  pbVar7 = (byte *)*param_1;
  uVar2 = param_2[2];
  *(ulonglong *)(lVar6 + (ulonglong)uVar2) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  param_3 = (longlong *)*param_3;
  bVar1 = pbVar7[0x11];
  uVar13 = 0x19;
  uVar16 = bVar1 - 0x7c;
  if ((uVar16 < 7) && ((0x75U >> (uVar16 & 0x1f) & 1) != 0)) {
    uVar13 = 0x1a;
  }
  if (param_3[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    uVar15 = *(undefined4 *)(pbVar7 + 4);
    lVar8 = *param_3;
    uVar14 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8,
                           *(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar15,uVar13,1);
    if (*pbVar7 != bVar1 && *pbVar7 != 0) {
      pdb_140e2c3a0(*param_3,pbVar7);
    }
    lVar8 = *param_3;
    uVar5 = *(undefined4 *)pbVar7;
    lVar9 = *(longlong *)(lVar8 + 0x100);
    if (lVar9 == *(longlong *)(lVar8 + 0xf0)) {
      pdb_142dbafc0(lVar8 + 0xf0);
    }
    lVar10 = *(longlong *)(lVar8 + 0xf8);
    lVar12 = lVar9 * 0x1c;
    *(undefined4 *)(lVar10 + lVar12) = 0;
    *(ulonglong *)(lVar10 + 4 + lVar12) = CONCAT44(uVar15,uVar5);
    *(int *)(lVar10 + 0x10 + lVar12) = iVar3 + 1;
    *(int *)(lVar10 + 0x14 + lVar12) = iVar4;
    *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar14;
    *(longlong *)(lVar8 + 0x100) = lVar9 + 1;
    *(undefined4 *)(lVar6 + (ulonglong)(uVar2 + 0xc)) = *(undefined4 *)((longlong)param_1 + 0x14);
    if (param_3[1] != 0) {
      lVar8 = *param_3;
      uVar11 = *(undefined8 *)param_1[1];
      uVar15 = pdb_141764730(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8
                             ,*(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],
                             (int)((ulonglong)uVar11 >> 0x20),0x3319,*(undefined4 *)(lVar8 + 0x248))
      ;
      lVar8 = *param_3;
      lVar9 = *(longlong *)(lVar8 + 0x100);
      if (lVar9 == *(longlong *)(lVar8 + 0xf0)) {
        pdb_142dbafc0(lVar8 + 0xf0);
      }
      lVar10 = *(longlong *)(lVar8 + 0xf8);
      lVar12 = lVar9 * 0x1c;
      *(undefined4 *)(lVar10 + lVar12) = 1;
      *(undefined8 *)(lVar10 + 4 + lVar12) = uVar11;
      *(int *)(lVar10 + 0x10 + lVar12) = iVar3 + 2;
      *(int *)(lVar10 + 0x14 + lVar12) = iVar4;
      *(undefined4 *)(lVar10 + 0x18 + lVar12) = uVar15;
      *(longlong *)(lVar8 + 0x100) = lVar9 + 1;
      *(undefined1 *)(lVar6 + (ulonglong)(uVar2 + 8)) = *(undefined1 *)((longlong)param_1 + 0x19);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

