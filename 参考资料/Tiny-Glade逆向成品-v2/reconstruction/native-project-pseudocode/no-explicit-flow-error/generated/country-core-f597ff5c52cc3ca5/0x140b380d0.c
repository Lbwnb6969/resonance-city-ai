// VA 0x140b380d0, PDB extent 821 bytes
// country_core::shader::garden::spawn_bushes_garden::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::garden::spawn_bushes_garden::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 821 */

void pdb_140b380d0(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  
  plVar6 = (longlong *)*param_3;
  if (plVar6[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    lVar7 = *param_1;
    lVar8 = *plVar6;
    uVar4 = *(undefined4 *)(lVar7 + 0x10);
    uVar12 = pdb_141764730(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8,
                           *(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                           (short)plVar6[7],plVar6[1],plVar6[2],uVar4,0x3319,
                           *(undefined4 *)(lVar8 + 0x248));
    lVar8 = *plVar6;
    uVar1 = *(undefined8 *)(lVar7 + 8);
    lVar7 = *(longlong *)(lVar8 + 0x100);
    if (lVar7 == *(longlong *)(lVar8 + 0xf0)) {
      pdb_142dbafc0(lVar8 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar8 + 0xf8);
    lVar10 = lVar7 * 0x1c;
    *(undefined4 *)(lVar9 + lVar10) = 3;
    *(undefined8 *)(lVar9 + 4 + lVar10) = uVar1;
    *(undefined4 *)(lVar9 + 0xc + lVar10) = uVar4;
    *(int *)(lVar9 + 0x10 + lVar10) = iVar2 + 1;
    *(int *)(lVar9 + 0x14 + lVar10) = iVar3;
    *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar12;
    *(longlong *)(lVar8 + 0x100) = lVar7 + 1;
    lVar7 = param_3[1];
    uVar5 = param_2[2];
    *(int *)(lVar7 + (ulonglong)uVar5) = (int)param_1[4];
    if (plVar6[1] != 0) {
      lVar8 = param_1[1];
      lVar9 = *plVar6;
      uVar4 = *(undefined4 *)(lVar8 + 0x10);
      uVar12 = pdb_141764730(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8
                             ,*(undefined8 *)(lVar9 + 0x80),*(undefined8 *)(lVar9 + 0x88),
                             (short)plVar6[7],plVar6[1],plVar6[2],uVar4,0x3319,
                             *(undefined4 *)(lVar9 + 0x248));
      lVar9 = *plVar6;
      uVar1 = *(undefined8 *)(lVar8 + 8);
      lVar8 = *(longlong *)(lVar9 + 0x100);
      if (lVar8 == *(longlong *)(lVar9 + 0xf0)) {
        pdb_142dbafc0(lVar9 + 0xf0);
      }
      lVar10 = *(longlong *)(lVar9 + 0xf8);
      lVar11 = lVar8 * 0x1c;
      *(undefined4 *)(lVar10 + lVar11) = 3;
      *(undefined8 *)(lVar10 + 4 + lVar11) = uVar1;
      *(undefined4 *)(lVar10 + 0xc + lVar11) = uVar4;
      *(int *)(lVar10 + 0x10 + lVar11) = iVar2 + 2;
      *(int *)(lVar10 + 0x14 + lVar11) = iVar3;
      *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar12;
      *(longlong *)(lVar9 + 0x100) = lVar8 + 1;
      if (plVar6[1] != 0) {
        lVar8 = param_1[2];
        lVar9 = *plVar6;
        uVar4 = *(undefined4 *)(lVar8 + 0x10);
        uVar12 = pdb_141764730(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),
                               lVar9 + 0xd8,*(undefined8 *)(lVar9 + 0x80),
                               *(undefined8 *)(lVar9 + 0x88),(short)plVar6[7],plVar6[1],plVar6[2],
                               uVar4,0x3319,*(undefined4 *)(lVar9 + 0x248));
        lVar9 = *plVar6;
        uVar1 = *(undefined8 *)(lVar8 + 8);
        lVar8 = *(longlong *)(lVar9 + 0x100);
        if (lVar8 == *(longlong *)(lVar9 + 0xf0)) {
          pdb_142dbafc0(lVar9 + 0xf0);
        }
        lVar10 = *(longlong *)(lVar9 + 0xf8);
        lVar11 = lVar8 * 0x1c;
        *(undefined4 *)(lVar10 + lVar11) = 3;
        *(undefined8 *)(lVar10 + 4 + lVar11) = uVar1;
        *(undefined4 *)(lVar10 + 0xc + lVar11) = uVar4;
        *(int *)(lVar10 + 0x10 + lVar11) = iVar2 + 3;
        *(int *)(lVar10 + 0x14 + lVar11) = iVar3;
        *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar12;
        *(longlong *)(lVar9 + 0x100) = lVar8 + 1;
        *(longlong *)(lVar7 + (ulonglong)(uVar5 + 4)) = param_1[3];
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

