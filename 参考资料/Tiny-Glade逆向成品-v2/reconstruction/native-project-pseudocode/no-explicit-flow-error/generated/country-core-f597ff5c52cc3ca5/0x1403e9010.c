// VA 0x1403e9010, PDB extent 628 bytes
// country_core::shader::screenshot::tgsr_capture_ref::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::screenshot::tgsr_capture_ref::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 628 */

void pdb_1403e9010(undefined8 *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  uint uVar15;
  
  plVar7 = (longlong *)*param_3;
  pbVar8 = (byte *)*param_1;
  bVar2 = pbVar8[0x11];
  uVar13 = 0x19;
  uVar15 = bVar2 - 0x7c;
  if ((uVar15 < 7) && ((0x75U >> (uVar15 & 0x1f) & 1) != 0)) {
    uVar13 = 0x1a;
  }
  if (plVar7[1] != 0) {
    uVar3 = *(undefined4 *)(pbVar8 + 4);
    lVar9 = *plVar7;
    uVar14 = pdb_1405d5d90(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8,
                           *(undefined8 *)(lVar9 + 0x80),*(undefined8 *)(lVar9 + 0x88),
                           (short)plVar7[7],plVar7[1],plVar7[2],uVar3,uVar13,1);
    if (*pbVar8 != bVar2 && *pbVar8 != 0) {
      pdb_140e2c3a0(*plVar7,pbVar8);
    }
    lVar9 = *plVar7;
    iVar4 = *param_2;
    iVar5 = param_2[1];
    uVar6 = *(undefined4 *)pbVar8;
    lVar10 = *(longlong *)(lVar9 + 0x100);
    if (lVar10 == *(longlong *)(lVar9 + 0xf0)) {
      pdb_142dbafc0(lVar9 + 0xf0);
    }
    lVar11 = *(longlong *)(lVar9 + 0xf8);
    lVar12 = lVar10 * 0x1c;
    *(undefined4 *)(lVar11 + lVar12) = 0;
    *(ulonglong *)(lVar11 + 4 + lVar12) = CONCAT44(uVar3,uVar6);
    *(int *)(lVar11 + 0x10 + lVar12) = iVar4;
    *(int *)(lVar11 + 0x14 + lVar12) = iVar5;
    *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar14;
    *(longlong *)(lVar9 + 0x100) = lVar10 + 1;
    if (plVar7[1] != 0) {
      lVar9 = param_1[1];
      lVar10 = *plVar7;
      uVar3 = *(undefined4 *)(lVar9 + 0x10);
      uVar14 = pdb_1405d6440(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                             lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                             *(undefined8 *)(lVar10 + 0x88),(short)plVar7[7],plVar7[1],plVar7[2],
                             uVar3,0x3319,*(undefined4 *)(lVar10 + 0x248));
      lVar10 = *plVar7;
      uVar1 = *(undefined8 *)(lVar9 + 8);
      lVar9 = *(longlong *)(lVar10 + 0x100);
      if (lVar9 == *(longlong *)(lVar10 + 0xf0)) {
        pdb_142dbafc0(lVar10 + 0xf0);
      }
      lVar11 = *(longlong *)(lVar10 + 0xf8);
      lVar12 = lVar9 * 0x1c;
      *(undefined4 *)(lVar11 + lVar12) = 3;
      *(undefined8 *)(lVar11 + 4 + lVar12) = uVar1;
      *(undefined4 *)(lVar11 + 0xc + lVar12) = uVar3;
      *(int *)(lVar11 + 0x10 + lVar12) = iVar4 + 1;
      *(int *)(lVar11 + 0x14 + lVar12) = iVar5;
      *(undefined4 *)(lVar11 + 0x18 + lVar12) = uVar14;
      *(longlong *)(lVar10 + 0x100) = lVar9 + 1;
      lVar9 = param_3[3];
      uVar15 = param_2[2];
      *(undefined8 *)(lVar9 + (ulonglong)uVar15) = param_1[2];
      *(undefined4 *)(lVar9 + (ulonglong)(uVar15 + 8)) = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(lVar9 + (ulonglong)(uVar15 + 0xc)) = *(undefined4 *)((longlong)param_1 + 0x1c)
      ;
      *(undefined4 *)(lVar9 + (ulonglong)(uVar15 + 0x10)) = *(undefined4 *)(param_1 + 4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f67320);
}

