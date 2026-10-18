// VA 0x14264ac60, PDB extent 864 bytes
// rhapsody_shadow::shader::setup_shadows::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-shadow-ce28a028bfbc0370/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_shadow::shader::setup_shadows::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-shadow-ce28a028bfbc0370/out/shabriri.rs
   Extent: 864 */

void pdb_14264ac60(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  
  lVar6 = param_3[1];
  uVar14 = param_2[2];
  *(undefined4 *)(lVar6 + (ulonglong)uVar14) = *(undefined4 *)(param_1 + 3);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  *(undefined4 *)(lVar6 + (ulonglong)(uVar14 + 4)) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar14 + 8)) = *(undefined4 *)(param_1 + 5);
  *(undefined8 *)(lVar6 + (ulonglong)(uVar14 + 8)) = param_1[4];
  *(undefined4 *)(lVar6 + (ulonglong)(uVar14 + 0x14)) = *(undefined4 *)((longlong)param_1 + 0x2c);
  param_3 = (longlong *)*param_3;
  pbVar7 = (byte *)*param_1;
  bVar1 = pbVar7[0x11];
  uVar11 = 0x19;
  uVar14 = bVar1 - 0x7c;
  if ((uVar14 < 7) && ((0x75U >> (uVar14 & 0x1f) & 1) != 0)) {
    uVar11 = 0x1a;
  }
  if (param_3[1] != 0) {
    uVar4 = *(undefined4 *)(pbVar7 + 4);
    lVar6 = *param_3;
    uVar12 = pdb_141cad020(*(undefined8 *)(lVar6 + 200),*(undefined8 *)(lVar6 + 0xd0),lVar6 + 0xd8,
                           *(undefined8 *)(lVar6 + 0x80),*(undefined8 *)(lVar6 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar4,uVar11,1);
    if (*pbVar7 != bVar1 && *pbVar7 != 0) {
      pdb_140e2c3a0(*param_3,pbVar7);
    }
    lVar6 = *param_3;
    uVar5 = *(undefined4 *)pbVar7;
    lVar8 = *(longlong *)(lVar6 + 0x100);
    if (lVar8 == *(longlong *)(lVar6 + 0xf0)) {
      pdb_142dbafc0(lVar6 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar6 + 0xf8);
    lVar10 = lVar8 * 0x1c;
    *(undefined4 *)(lVar9 + lVar10) = 0;
    *(ulonglong *)(lVar9 + 4 + lVar10) = CONCAT44(uVar4,uVar5);
    *(int *)(lVar9 + 0x10 + lVar10) = iVar2 + 1;
    *(int *)(lVar9 + 0x14 + lVar10) = iVar3;
    *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar12;
    *(longlong *)(lVar6 + 0x100) = lVar8 + 1;
    if (param_3[1] != 0) {
      lVar6 = param_1[1];
      lVar8 = *param_3;
      uVar4 = *(undefined4 *)(lVar6 + 0x10);
      uVar13 = pdb_141cad2e0(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8
                             ,*(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar4,0x3319,
                             *(undefined4 *)(lVar8 + 0x248));
      lVar8 = *param_3;
      uVar12 = *(undefined4 *)(lVar6 + 8);
      uVar5 = *(undefined4 *)(lVar6 + 0xc);
      lVar6 = *(longlong *)(lVar8 + 0x100);
      if (lVar6 == *(longlong *)(lVar8 + 0xf0)) {
        pdb_142dbafc0(lVar8 + 0xf0);
      }
      lVar9 = *(longlong *)(lVar8 + 0xf8);
      lVar10 = lVar6 * 0x1c;
      *(undefined4 *)(lVar9 + lVar10) = 3;
      *(undefined4 *)(lVar9 + 4 + lVar10) = uVar12;
      *(undefined4 *)(lVar9 + 8 + lVar10) = uVar5;
      *(undefined4 *)(lVar9 + 0xc + lVar10) = uVar4;
      *(int *)(lVar9 + 0x10 + lVar10) = iVar2 + 2;
      *(int *)(lVar9 + 0x14 + lVar10) = iVar3;
      *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar13;
      *(longlong *)(lVar8 + 0x100) = lVar6 + 1;
      if (param_3[1] != 0) {
        lVar6 = param_1[2];
        lVar8 = *param_3;
        uVar4 = *(undefined4 *)(lVar6 + 0x10);
        uVar13 = pdb_141cad2e0(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                               lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                               *(undefined8 *)(lVar8 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar4,0x3319,*(undefined4 *)(lVar8 + 0x248));
        lVar8 = *param_3;
        uVar12 = *(undefined4 *)(lVar6 + 8);
        uVar5 = *(undefined4 *)(lVar6 + 0xc);
        lVar6 = *(longlong *)(lVar8 + 0x100);
        if (lVar6 == *(longlong *)(lVar8 + 0xf0)) {
          pdb_142dbafc0(lVar8 + 0xf0);
        }
        lVar9 = *(longlong *)(lVar8 + 0xf8);
        lVar10 = lVar6 * 0x1c;
        *(undefined4 *)(lVar9 + lVar10) = 3;
        *(undefined4 *)(lVar9 + 4 + lVar10) = uVar12;
        *(undefined4 *)(lVar9 + 8 + lVar10) = uVar5;
        *(undefined4 *)(lVar9 + 0xc + lVar10) = uVar4;
        *(int *)(lVar9 + 0x10 + lVar10) = iVar2 + 3;
        *(int *)(lVar9 + 0x14 + lVar10) = iVar3;
        *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar13;
        *(longlong *)(lVar8 + 0x100) = lVar6 + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143636460);
}

