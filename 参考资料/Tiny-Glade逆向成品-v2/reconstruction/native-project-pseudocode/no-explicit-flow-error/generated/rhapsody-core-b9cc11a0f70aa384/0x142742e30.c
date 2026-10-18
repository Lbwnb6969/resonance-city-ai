// VA 0x142742e30, PDB extent 1237 bytes
// rhapsody_core::shader::generate_mips::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-core-b9cc11a0f70aa384/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_core::shader::generate_mips::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-core-b9cc11a0f70aa384/out/shabriri.rs
   Extent: 1237 */

void pdb_142742e30(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar18 = param_3[3];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x7c);
  uVar5 = param_1[0x10];
  uVar17 = param_2[2];
  *(undefined4 *)(lVar18 + (ulonglong)uVar17) = *(undefined4 *)(param_1 + 0xf);
  *(undefined4 *)(lVar18 + (ulonglong)(uVar17 + 4)) = uVar2;
  *(undefined8 *)(lVar18 + (ulonglong)(uVar17 + 8)) = uVar5;
  param_3 = (longlong *)*param_3;
  pbVar6 = (byte *)*param_1;
  bVar1 = pbVar6[0x11];
  uVar13 = 0x19;
  uVar17 = bVar1 - 0x7c;
  if ((uVar17 < 7) && ((0x75U >> (uVar17 & 0x1f) & 1) != 0)) {
    uVar13 = 0x1a;
  }
  if (param_3[1] != 0) {
    uVar2 = *(undefined4 *)(pbVar6 + 4);
    lVar18 = *param_3;
    uVar14 = pdb_141e52d90(*(undefined8 *)(lVar18 + 200),*(undefined8 *)(lVar18 + 0xd0),
                           lVar18 + 0xd8,*(undefined8 *)(lVar18 + 0x80),
                           *(undefined8 *)(lVar18 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                           uVar2,uVar13,1);
    if (*pbVar6 != bVar1 && *pbVar6 != 0) {
      pdb_140e2c3a0(*param_3,pbVar6);
    }
    lVar18 = *param_3;
    iVar3 = *param_2;
    iVar4 = param_2[1];
    uVar15 = *(undefined4 *)pbVar6;
    lVar7 = *(longlong *)(lVar18 + 0x100);
    if (lVar7 == *(longlong *)(lVar18 + 0xf0)) {
      pdb_142dbafc0(lVar18 + 0xf0);
    }
    lVar8 = *(longlong *)(lVar18 + 0xf8);
    lVar9 = lVar7 * 0x1c;
    *(undefined4 *)(lVar8 + lVar9) = 0;
    *(ulonglong *)(lVar8 + 4 + lVar9) = CONCAT44(uVar2,uVar15);
    *(int *)(lVar8 + 0x10 + lVar9) = iVar3;
    *(int *)(lVar8 + 0x14 + lVar9) = iVar4;
    *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar14;
    *(longlong *)(lVar18 + 0x100) = lVar7 + 1;
    uStack_58 = param_1[0xb];
    uStack_50 = param_1[0xc];
    uStack_68 = param_1[9];
    uStack_60 = param_1[10];
    uStack_78 = param_1[7];
    uStack_70 = param_1[8];
    uStack_88 = param_1[5];
    uStack_80 = param_1[6];
    uStack_98 = param_1[3];
    uStack_90 = param_1[4];
    uStack_a8._0_4_ = *(undefined4 *)(param_1 + 1);
    uStack_a8._4_4_ = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_a0 = *(undefined4 *)(param_1 + 2);
    uStack_9c = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_48 = 0;
    lVar18 = 0;
    do {
      if (param_3[1] == 0) goto LAB_1427432f8;
      puVar10 = (undefined4 *)(&uStack_a8)[lVar18];
      lVar7 = *param_3;
      uVar2 = puVar10[1];
      uVar15 = pdb_141e53050(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8
                             ,*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar2,0x3319,
                             *(undefined4 *)(lVar7 + 0x248));
      lVar7 = *param_3;
      uVar14 = *puVar10;
      lVar8 = *(longlong *)(lVar7 + 0x100);
      if (lVar8 == *(longlong *)(lVar7 + 0xf0)) {
        pdb_142dbafc0(lVar7 + 0xf0);
      }
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 1;
      lVar9 = *(longlong *)(lVar7 + 0xf8);
      lVar12 = lVar8 * 0x1c;
      *(undefined4 *)(lVar9 + lVar12) = 1;
      *(ulonglong *)(lVar9 + 4 + lVar12) = CONCAT44(uVar2,uVar14);
      *(int *)(lVar9 + 0x10 + lVar12) = iVar3 + 1;
      *(int *)(lVar9 + 0x14 + lVar12) = iVar4 * 0xc + iVar11;
      *(undefined4 *)(lVar9 + 0x18 + lVar12) = uVar15;
      *(longlong *)(lVar7 + 0x100) = lVar8 + 1;
    } while (lVar18 != 0xc);
    if (param_3[1] != 0) {
      puVar10 = (undefined4 *)param_1[0xd];
      lVar18 = *param_3;
      uVar2 = puVar10[1];
      uVar15 = pdb_141e53050(*(undefined8 *)(lVar18 + 200),*(undefined8 *)(lVar18 + 0xd0),
                             lVar18 + 0xd8,*(undefined8 *)(lVar18 + 0x80),
                             *(undefined8 *)(lVar18 + 0x88),(short)param_3[7],param_3[1],param_3[2],
                             uVar2,0x3319,*(undefined4 *)(lVar18 + 0x248));
      lVar18 = *param_3;
      uVar14 = *puVar10;
      lVar7 = *(longlong *)(lVar18 + 0x100);
      if (lVar7 == *(longlong *)(lVar18 + 0xf0)) {
        pdb_142dbafc0(lVar18 + 0xf0);
      }
      lVar8 = *(longlong *)(lVar18 + 0xf8);
      lVar9 = lVar7 * 0x1c;
      *(undefined4 *)(lVar8 + lVar9) = 1;
      *(ulonglong *)(lVar8 + 4 + lVar9) = CONCAT44(uVar2,uVar14);
      *(int *)(lVar8 + 0x10 + lVar9) = iVar3 + 2;
      *(int *)(lVar8 + 0x14 + lVar9) = iVar4;
      *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar15;
      *(longlong *)(lVar18 + 0x100) = lVar7 + 1;
      if (param_3[1] != 0) {
        lVar18 = param_1[0xe];
        lVar7 = *param_3;
        uVar2 = *(undefined4 *)(lVar18 + 0x10);
        uVar16 = pdb_141e53050(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),
                               lVar7 + 0xd8,*(undefined8 *)(lVar7 + 0x80),
                               *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar2,0x3319,*(undefined4 *)(lVar7 + 0x248));
        lVar7 = *param_3;
        uVar14 = *(undefined4 *)(lVar18 + 8);
        uVar15 = *(undefined4 *)(lVar18 + 0xc);
        lVar18 = *(longlong *)(lVar7 + 0x100);
        if (lVar18 == *(longlong *)(lVar7 + 0xf0)) {
          pdb_142dbafc0(lVar7 + 0xf0);
        }
        lVar8 = *(longlong *)(lVar7 + 0xf8);
        lVar9 = lVar18 * 0x1c;
        *(undefined4 *)(lVar8 + lVar9) = 3;
        *(undefined4 *)(lVar8 + 4 + lVar9) = uVar14;
        *(undefined4 *)(lVar8 + 8 + lVar9) = uVar15;
        *(undefined4 *)(lVar8 + 0xc + lVar9) = uVar2;
        *(int *)(lVar8 + 0x10 + lVar9) = iVar3 + 3;
        *(int *)(lVar8 + 0x14 + lVar9) = iVar4;
        *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar16;
        *(longlong *)(lVar7 + 0x100) = lVar18 + 1;
        return;
      }
    }
  }
LAB_1427432f8:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14358cc58);
}

