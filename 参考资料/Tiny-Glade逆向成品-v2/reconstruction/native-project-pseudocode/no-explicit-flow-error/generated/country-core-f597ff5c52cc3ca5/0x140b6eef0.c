// VA 0x140b6eef0, PDB extent 1048 bytes
// country_core::shader::water::spawn_lilypads::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::water::spawn_lilypads::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1048 */

void pdb_140b6eef0(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  lVar5 = param_3[1];
  uVar2 = param_2[2];
  puVar6 = (undefined8 *)param_1[1];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar2 + 4)) =
       (ulonglong)*(ushort *)((longlong)puVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar6 + 1);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar7 = *param_1;
    lVar8 = *param_3;
    uVar12 = *(undefined4 *)(lVar7 + 0x10);
    uVar11 = pdb_141764730(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8,
                           *(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar12,0x3319,
                           *(undefined4 *)(lVar8 + 0x248));
    lVar8 = *param_3;
    uVar1 = *(undefined8 *)(lVar7 + 8);
    lVar7 = *(longlong *)(lVar8 + 0x100);
    if (lVar7 == *(longlong *)(lVar8 + 0xf0)) {
      pdb_142dbafc0(lVar8 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar8 + 0xf8);
    lVar10 = lVar7 * 0x1c;
    *(undefined4 *)(lVar9 + lVar10) = 3;
    *(undefined8 *)(lVar9 + 4 + lVar10) = uVar1;
    *(undefined4 *)(lVar9 + 0xc + lVar10) = uVar12;
    *(int *)(lVar9 + 0x10 + lVar10) = iVar3 + 1;
    *(int *)(lVar9 + 0x14 + lVar10) = iVar4;
    *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar11;
    *(longlong *)(lVar8 + 0x100) = lVar7 + 1;
    *(int *)(lVar5 + (ulonglong)uVar2) = (int)param_1[5];
    *(longlong *)(lVar5 + (ulonglong)(uVar2 + 0xc)) = param_1[4];
    if (param_3[1] != 0) {
      lVar5 = *param_3;
      uVar1 = *puVar6;
      uVar12 = pdb_141764730(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],(int)((ulonglong)uVar1 >> 0x20)
                             ,0x3319,*(undefined4 *)(lVar5 + 0x248));
      lVar5 = *param_3;
      lVar7 = *(longlong *)(lVar5 + 0x100);
      if (lVar7 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar8 = *(longlong *)(lVar5 + 0xf8);
      lVar9 = lVar7 * 0x1c;
      *(undefined4 *)(lVar8 + lVar9) = 1;
      *(undefined8 *)(lVar8 + 4 + lVar9) = uVar1;
      *(int *)(lVar8 + 0x10 + lVar9) = iVar3 + 2;
      *(int *)(lVar8 + 0x14 + lVar9) = iVar4;
      *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar12;
      *(longlong *)(lVar5 + 0x100) = lVar7 + 1;
      if (param_3[1] != 0) {
        lVar5 = param_1[2];
        lVar7 = *param_3;
        uVar12 = *(undefined4 *)(lVar5 + 0x10);
        uVar11 = pdb_141764730(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),
                               lVar7 + 0xd8,*(undefined8 *)(lVar7 + 0x80),
                               *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar12,0x3319,*(undefined4 *)(lVar7 + 0x248));
        lVar7 = *param_3;
        uVar1 = *(undefined8 *)(lVar5 + 8);
        lVar5 = *(longlong *)(lVar7 + 0x100);
        if (lVar5 == *(longlong *)(lVar7 + 0xf0)) {
          pdb_142dbafc0(lVar7 + 0xf0);
        }
        lVar8 = *(longlong *)(lVar7 + 0xf8);
        lVar9 = lVar5 * 0x1c;
        *(undefined4 *)(lVar8 + lVar9) = 3;
        *(undefined8 *)(lVar8 + 4 + lVar9) = uVar1;
        *(undefined4 *)(lVar8 + 0xc + lVar9) = uVar12;
        *(int *)(lVar8 + 0x10 + lVar9) = iVar3 + 3;
        *(int *)(lVar8 + 0x14 + lVar9) = iVar4;
        *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar11;
        *(longlong *)(lVar7 + 0x100) = lVar5 + 1;
        if (param_3[1] != 0) {
          lVar5 = param_1[3];
          lVar7 = *param_3;
          uVar12 = *(undefined4 *)(lVar5 + 0x10);
          uVar11 = pdb_141764730(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),
                                 lVar7 + 0xd8,*(undefined8 *)(lVar7 + 0x80),
                                 *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar12,0x3319,*(undefined4 *)(lVar7 + 0x248));
          lVar7 = *param_3;
          uVar1 = *(undefined8 *)(lVar5 + 8);
          lVar5 = *(longlong *)(lVar7 + 0x100);
          if (lVar5 == *(longlong *)(lVar7 + 0xf0)) {
            pdb_142dbafc0(lVar7 + 0xf0);
          }
          lVar8 = *(longlong *)(lVar7 + 0xf8);
          lVar9 = lVar5 * 0x1c;
          *(undefined4 *)(lVar8 + lVar9) = 3;
          *(undefined8 *)(lVar8 + 4 + lVar9) = uVar1;
          *(undefined4 *)(lVar8 + 0xc + lVar9) = uVar12;
          *(int *)(lVar8 + 0x10 + lVar9) = iVar3 + 4;
          *(int *)(lVar8 + 0x14 + lVar9) = iVar4;
          *(undefined4 *)(lVar8 + 0x18 + lVar9) = uVar11;
          *(longlong *)(lVar7 + 0x100) = lVar5 + 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

