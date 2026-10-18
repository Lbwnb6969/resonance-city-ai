// VA 0x140b4b820, PDB extent 796 bytes
// country_core::shader::rasterize_buildings::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::rasterize_buildings::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 796 */

void pdb_140b4b820(longlong *param_1,int *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  
  lVar4 = param_3[1];
  puVar5 = (undefined8 *)*param_1;
  uVar1 = param_2[2];
  *(ulonglong *)(lVar4 + (ulonglong)uVar1) =
       (ulonglong)*(ushort *)((longlong)puVar5 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar5 + 1);
  puVar6 = (undefined8 *)param_1[2];
  *(ulonglong *)(lVar4 + (ulonglong)(uVar1 + 8)) =
       (ulonglong)*(ushort *)((longlong)puVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar6 + 1);
  *(int *)(lVar4 + (ulonglong)(uVar1 + 0x10)) = (int)param_1[3];
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    lVar4 = *param_3;
    uVar7 = *puVar5;
    uVar13 = 0x33;
    uVar11 = pdb_141764730(*(undefined8 *)(lVar4 + 200),*(undefined8 *)(lVar4 + 0xd0),lVar4 + 0xd8,
                           *(undefined8 *)(lVar4 + 0x80),*(undefined8 *)(lVar4 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],(int)((ulonglong)uVar7 >> 0x20),
                           0x3319,*(undefined4 *)(lVar4 + 0x248));
    lVar4 = *param_3;
    lVar8 = *(longlong *)(lVar4 + 0x100);
    if (lVar8 == *(longlong *)(lVar4 + 0xf0)) {
      pdb_142dbafc0(lVar4 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar4 + 0xf8);
    lVar10 = lVar8 * 0x1c;
    *(undefined4 *)(lVar9 + lVar10) = 1;
    *(undefined8 *)(lVar9 + 4 + lVar10) = uVar7;
    *(int *)(lVar9 + 0x10 + lVar10) = iVar2 + 1;
    *(int *)(lVar9 + 0x14 + lVar10) = iVar3;
    *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar11;
    *(longlong *)(lVar4 + 0x100) = lVar8 + 1;
    if (param_3[1] != 0) {
      lVar4 = param_1[1];
      uVar11 = *(undefined4 *)(lVar4 + 0x10);
      lVar8 = *param_3;
      uVar12 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8
                             ,*(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar11,CONCAT11(uVar13,0x19),1)
      ;
      lVar8 = *param_3;
      uVar7 = *(undefined8 *)(lVar4 + 8);
      lVar4 = *(longlong *)(lVar8 + 0x100);
      if (lVar4 == *(longlong *)(lVar8 + 0xf0)) {
        pdb_142dbafc0(lVar8 + 0xf0);
      }
      lVar9 = *(longlong *)(lVar8 + 0xf8);
      lVar10 = lVar4 * 0x1c;
      *(undefined4 *)(lVar9 + lVar10) = 4;
      *(undefined8 *)(lVar9 + 4 + lVar10) = uVar7;
      *(undefined4 *)(lVar9 + 0xc + lVar10) = uVar11;
      *(int *)(lVar9 + 0x10 + lVar10) = iVar2 + 3;
      *(int *)(lVar9 + 0x14 + lVar10) = iVar3;
      *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar12;
      *(longlong *)(lVar8 + 0x100) = lVar4 + 1;
      if (param_3[1] != 0) {
        lVar4 = *param_3;
        uVar7 = *puVar6;
        uVar11 = pdb_141764730(*(undefined8 *)(lVar4 + 200),*(undefined8 *)(lVar4 + 0xd0),
                               lVar4 + 0xd8,*(undefined8 *)(lVar4 + 0x80),
                               *(undefined8 *)(lVar4 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,(int)((ulonglong)uVar7 >> 0x20),0x3319,
                               *(undefined4 *)(lVar4 + 0x248));
        lVar4 = *param_3;
        lVar8 = *(longlong *)(lVar4 + 0x100);
        if (lVar8 == *(longlong *)(lVar4 + 0xf0)) {
          pdb_142dbafc0(lVar4 + 0xf0);
        }
        lVar9 = *(longlong *)(lVar4 + 0xf8);
        lVar10 = lVar8 * 0x1c;
        *(undefined4 *)(lVar9 + lVar10) = 1;
        *(undefined8 *)(lVar9 + 4 + lVar10) = uVar7;
        *(int *)(lVar9 + 0x10 + lVar10) = iVar2 + 2;
        *(int *)(lVar9 + 0x14 + lVar10) = iVar3;
        *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar11;
        *(longlong *)(lVar4 + 0x100) = lVar8 + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

