// VA 0x14163ac70, PDB extent 1274 bytes
// country_core::shader::generate_hzb::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::generate_hzb::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1274 */

void pdb_14163ac70(undefined4 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  
  lVar18 = param_3[3];
  uVar16 = param_1[1];
  uVar4 = *(undefined8 *)(param_1 + 2);
  uVar5 = *(undefined8 *)(param_1 + 4);
  uVar17 = param_2[2];
  *(undefined4 *)(lVar18 + (ulonglong)uVar17) = *param_1;
  *(undefined4 *)(lVar18 + (ulonglong)(uVar17 + 4)) = uVar16;
  *(undefined8 *)(lVar18 + (ulonglong)(uVar17 + 8)) = uVar4;
  *(undefined8 *)(lVar18 + (ulonglong)(uVar17 + 0x10)) = uVar5;
  param_3 = (longlong *)*param_3;
  pbVar6 = *(byte **)(param_1 + 0x20);
  bVar1 = pbVar6[0x11];
  uVar13 = 0x19;
  uVar17 = bVar1 - 0x7c;
  if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
    uVar13 = 0x1a;
  }
  if (param_3[1] != 0) {
    uVar16 = *(undefined4 *)(pbVar6 + 4);
    lVar18 = *param_3;
    uVar14 = pdb_141764080(*(undefined8 *)(lVar18 + 200),*(undefined8 *)(lVar18 + 0xd0),
                           lVar18 + 0xd8,*(undefined8 *)(lVar18 + 0x80),
                           *(undefined8 *)(lVar18 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                           uVar16,uVar13,1);
    if (*pbVar6 != bVar1 && *pbVar6 != 0) {
      pdb_140e2c3a0(*param_3,pbVar6);
    }
    lVar18 = *param_3;
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar15 = *(undefined4 *)pbVar6;
    lVar7 = *(longlong *)(lVar18 + 0x100);
    if (lVar7 == *(longlong *)(lVar18 + 0xf0)) {
      pdb_142dbafc0(lVar18 + 0xf0);
    }
    lVar8 = *(longlong *)(lVar18 + 0xf8);
    lVar11 = lVar7 * 0x1c;
    *(undefined4 *)(lVar8 + lVar11) = 0;
    *(ulonglong *)(lVar8 + 4 + lVar11) = CONCAT44(uVar16,uVar15);
    *(int *)(lVar8 + 0x10 + lVar11) = iVar2;
    *(int *)(lVar8 + 0x14 + lVar11) = iVar3;
    *(undefined4 *)(lVar8 + 0x18 + lVar11) = uVar14;
    *(longlong *)(lVar18 + 0x100) = lVar7 + 1;
    uStack_68 = *(undefined8 *)(param_1 + 0x1e);
    uStack_78 = *(undefined8 *)(param_1 + 0x1a);
    uStack_70 = *(undefined8 *)(param_1 + 0x1c);
    uStack_88 = *(undefined8 *)(param_1 + 0x16);
    uStack_80 = *(undefined8 *)(param_1 + 0x18);
    uStack_98 = *(undefined8 *)(param_1 + 0x12);
    uStack_90 = *(undefined8 *)(param_1 + 0x14);
    uStack_a8 = *(undefined8 *)(param_1 + 0xe);
    uStack_a0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 10);
    uStack_b0 = *(undefined8 *)(param_1 + 0xc);
    uStack_c8._0_4_ = param_1[6];
    uStack_c8._4_4_ = param_1[7];
    uStack_c0 = param_1[8];
    uStack_bc = param_1[9];
    lVar18 = 0;
    do {
      lVar7 = lVar18 + 1;
      puVar10 = (undefined4 *)(&uStack_c8)[lVar18];
      lStack_60 = lVar7;
      if (param_3[1] == 0) goto LAB_14163b15d;
      lVar8 = *param_3;
      uVar16 = puVar10[1];
      uVar15 = pdb_141764730(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8
                             ,*(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar16,0x3319,
                             *(undefined4 *)(lVar8 + 0x248));
      lVar8 = *param_3;
      uVar14 = *puVar10;
      lVar11 = *(longlong *)(lVar8 + 0x100);
      if (lVar11 == *(longlong *)(lVar8 + 0xf0)) {
        pdb_142dbafc0(lVar8 + 0xf0);
      }
      lVar9 = *(longlong *)(lVar8 + 0xf8);
      lVar12 = lVar11 * 0x1c;
      *(undefined4 *)(lVar9 + lVar12) = 1;
      *(ulonglong *)(lVar9 + 4 + lVar12) = CONCAT44(uVar16,uVar14);
      *(int *)(lVar9 + 0x10 + lVar12) = iVar2 + 1;
      *(int *)(lVar9 + 0x14 + lVar12) = (int)lVar18 + iVar3 * 0xd;
      *(undefined4 *)(lVar9 + 0x18 + lVar12) = uVar15;
      *(longlong *)(lVar8 + 0x100) = lVar11 + 1;
      lVar18 = lVar7;
    } while (lVar7 != 0xd);
    if (param_3[1] != 0) {
      lVar18 = *param_3;
      uVar4 = **(undefined8 **)(param_1 + 0x22);
      uVar16 = pdb_141764730(*(undefined8 *)(lVar18 + 200),*(undefined8 *)(lVar18 + 0xd0),
                             lVar18 + 0xd8,*(undefined8 *)(lVar18 + 0x80),
                             *(undefined8 *)(lVar18 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                             (int)((ulonglong)uVar4 >> 0x20),0x3319,*(undefined4 *)(lVar18 + 0x248))
      ;
      lVar18 = *param_3;
      lVar7 = *(longlong *)(lVar18 + 0x100);
      if (lVar7 == *(longlong *)(lVar18 + 0xf0)) {
        pdb_142dbafc0(lVar18 + 0xf0);
      }
      lVar8 = *(longlong *)(lVar18 + 0xf8);
      lVar11 = lVar7 * 0x1c;
      *(undefined4 *)(lVar8 + lVar11) = 1;
      *(undefined8 *)(lVar8 + 4 + lVar11) = uVar4;
      *(int *)(lVar8 + 0x10 + lVar11) = iVar2 + 2;
      *(int *)(lVar8 + 0x14 + lVar11) = iVar3;
      *(undefined4 *)(lVar8 + 0x18 + lVar11) = uVar16;
      *(longlong *)(lVar18 + 0x100) = lVar7 + 1;
      if (param_3[1] != 0) {
        lVar18 = *(longlong *)(param_1 + 0x24);
        lVar7 = *param_3;
        uVar16 = *(undefined4 *)(lVar18 + 0x10);
        uVar14 = pdb_141764730(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),
                               lVar7 + 0xd8,*(undefined8 *)(lVar7 + 0x80),
                               *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar16,0x3319,*(undefined4 *)(lVar7 + 0x248));
        lVar7 = *param_3;
        uVar4 = *(undefined8 *)(lVar18 + 8);
        lVar18 = *(longlong *)(lVar7 + 0x100);
        if (lVar18 == *(longlong *)(lVar7 + 0xf0)) {
          pdb_142dbafc0(lVar7 + 0xf0);
        }
        lVar8 = *(longlong *)(lVar7 + 0xf8);
        lVar11 = lVar18 * 0x1c;
        *(undefined4 *)(lVar8 + lVar11) = 3;
        *(undefined8 *)(lVar8 + 4 + lVar11) = uVar4;
        *(undefined4 *)(lVar8 + 0xc + lVar11) = uVar16;
        *(int *)(lVar8 + 0x10 + lVar11) = iVar2 + 3;
        *(int *)(lVar8 + 0x14 + lVar11) = iVar3;
        *(undefined4 *)(lVar8 + 0x18 + lVar11) = uVar14;
        *(longlong *)(lVar7 + 0x100) = lVar18 + 1;
        return;
      }
    }
  }
LAB_14163b15d:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

