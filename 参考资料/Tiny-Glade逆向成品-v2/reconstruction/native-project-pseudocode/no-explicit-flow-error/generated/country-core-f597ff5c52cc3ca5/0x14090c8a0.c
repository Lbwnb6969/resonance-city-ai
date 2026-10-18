// VA 0x14090c8a0, PDB extent 588 bytes
// country_core::shader::paths::extend_path_mask_margin::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::paths::extend_path_mask_margin::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 588 */

void pdb_14090c8a0(undefined8 *param_1,byte *param_2,int *param_3,longlong *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 uVar14;
  
  lVar5 = param_4[1];
  uVar13 = param_3[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar13) =
       (ulonglong)*(ushort *)(param_2 + 10) << 0x20 | (ulonglong)*(ushort *)(param_2 + 8);
  *(ulonglong *)(lVar5 + (ulonglong)(uVar13 + 8)) =
       (ulonglong)*(ushort *)((longlong)param_1 + 10) << 0x20 | (ulonglong)*(ushort *)(param_1 + 1);
  param_4 = (longlong *)*param_4;
  if (param_4[1] != 0) {
    iVar2 = *param_3;
    iVar3 = param_3[1];
    lVar5 = *param_4;
    uVar6 = *param_1;
    uVar14 = 0x33;
    uVar11 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_4[7],param_4[1],param_4[2],(int)((ulonglong)uVar6 >> 0x20),
                           0x3319,*(undefined4 *)(lVar5 + 0x248));
    lVar5 = *param_4;
    lVar7 = *(longlong *)(lVar5 + 0x100);
    if (lVar7 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar8 = *(longlong *)(lVar5 + 0xf8);
    lVar9 = lVar7 * 0x1c;
    *(undefined4 *)(lVar8 + lVar9) = 1;
    *(undefined8 *)(lVar8 + 4 + lVar9) = uVar6;
    *(int *)(lVar8 + 0x10 + lVar9) = iVar2 + 2;
    *(int *)(lVar8 + 0x14 + lVar9) = iVar3;
    *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar11;
    *(longlong *)(lVar5 + 0x100) = lVar7 + 1;
    bVar1 = param_2[0x11];
    uVar10 = 0x19;
    uVar13 = bVar1 - 0x7c;
    if ((uVar13 < 7) && ((0x75U >> (uVar13 & 0x1f) & 1) != 0)) {
      uVar10 = 0x1a;
    }
    if (param_4[1] != 0) {
      uVar11 = *(undefined4 *)(param_2 + 4);
      lVar5 = *param_4;
      uVar12 = pdb_141764080(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_4[7],param_4[1],param_4[2],uVar11,CONCAT11(uVar14,uVar10),
                             1);
      if (*param_2 != bVar1 && *param_2 != 0) {
        pdb_140e2c3a0(*param_4,param_2);
      }
      lVar5 = *param_4;
      uVar4 = *(undefined4 *)param_2;
      lVar7 = *(longlong *)(lVar5 + 0x100);
      if (lVar7 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar8 = *(longlong *)(lVar5 + 0xf8);
      lVar9 = lVar7 * 0x1c;
      *(undefined4 *)(lVar8 + lVar9) = 0;
      *(ulonglong *)(lVar8 + 4 + lVar9) = CONCAT44(uVar11,uVar4);
      *(int *)(lVar8 + 0x10 + lVar9) = iVar2 + 1;
      *(int *)(lVar8 + 0x14 + lVar9) = iVar3;
      *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar12;
      *(longlong *)(lVar5 + 0x100) = lVar7 + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

