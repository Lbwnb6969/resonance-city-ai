// VA 0x140ae81c0, PDB extent 823 bytes
// country_core::shader::critters::firefly_vis_query::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::critters::firefly_vis_query::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 823 */

void pdb_140ae81c0(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 uVar16;
  undefined2 uVar15;
  
  pbVar7 = (byte *)param_1[1];
  *(ulonglong *)(param_3[1] + (ulonglong)(uint)param_2[2]) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar8 = *param_1;
    lVar9 = *param_3;
    uVar5 = *(undefined4 *)(lVar8 + 0x10);
    uVar16 = 0x33;
    uVar13 = pdb_141764730(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8,
                           *(undefined8 *)(lVar9 + 0x80),*(undefined8 *)(lVar9 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar5,0x3319,
                           *(undefined4 *)(lVar9 + 0x248));
    lVar9 = *param_3;
    uVar1 = *(undefined8 *)(lVar8 + 8);
    lVar8 = *(longlong *)(lVar9 + 0x100);
    if (lVar8 == *(longlong *)(lVar9 + 0xf0)) {
      pdb_142dbafc0(lVar9 + 0xf0);
    }
    lVar10 = *(longlong *)(lVar9 + 0xf8);
    lVar11 = lVar8 * 0x1c;
    *(undefined4 *)(lVar10 + lVar11) = 3;
    *(undefined8 *)(lVar10 + 4 + lVar11) = uVar1;
    *(undefined4 *)(lVar10 + 0xc + lVar11) = uVar5;
    *(int *)(lVar10 + 0x10 + lVar11) = iVar3 + 3;
    *(int *)(lVar10 + 0x14 + lVar11) = iVar4;
    *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar13;
    *(longlong *)(lVar9 + 0x100) = lVar8 + 1;
    bVar2 = pbVar7[0x11];
    uVar12 = 0x19;
    uVar14 = bVar2 - 0x7c;
    if ((uVar14 < 7) && ((0x75U >> (uVar14 & 0x1f) & 1) != 0)) {
      uVar12 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar5 = *(undefined4 *)(pbVar7 + 4);
      lVar8 = *param_3;
      uVar15 = CONCAT11(uVar16,uVar12);
      uVar13 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8
                             ,*(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar5,uVar15,1);
      uVar16 = (undefined1)((ushort)uVar15 >> 8);
      if (*pbVar7 != bVar2 && *pbVar7 != 0) {
        pdb_140e2c3a0(*param_3,pbVar7);
      }
      lVar8 = *param_3;
      uVar6 = *(undefined4 *)pbVar7;
      lVar9 = *(longlong *)(lVar8 + 0x100);
      if (lVar9 == *(longlong *)(lVar8 + 0xf0)) {
        pdb_142dbafc0(lVar8 + 0xf0);
      }
      lVar10 = *(longlong *)(lVar8 + 0xf8);
      lVar11 = lVar9 * 0x1c;
      *(undefined4 *)(lVar10 + lVar11) = 0;
      *(ulonglong *)(lVar10 + 4 + lVar11) = CONCAT44(uVar5,uVar6);
      *(int *)(lVar10 + 0x10 + lVar11) = iVar3 + 1;
      *(int *)(lVar10 + 0x14 + lVar11) = iVar4;
      *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar13;
      *(longlong *)(lVar8 + 0x100) = lVar9 + 1;
      if (param_3[1] != 0) {
        lVar8 = param_1[2];
        uVar5 = *(undefined4 *)(lVar8 + 0x10);
        lVar9 = *param_3;
        uVar13 = pdb_141764080(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),
                               lVar9 + 0xd8,*(undefined8 *)(lVar9 + 0x80),
                               *(undefined8 *)(lVar9 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar5,CONCAT11(uVar16,0x19),1);
        lVar9 = *param_3;
        uVar1 = *(undefined8 *)(lVar8 + 8);
        lVar8 = *(longlong *)(lVar9 + 0x100);
        if (lVar8 == *(longlong *)(lVar9 + 0xf0)) {
          pdb_142dbafc0(lVar9 + 0xf0);
        }
        lVar10 = *(longlong *)(lVar9 + 0xf8);
        lVar11 = lVar8 * 0x1c;
        *(undefined4 *)(lVar10 + lVar11) = 4;
        *(undefined8 *)(lVar10 + 4 + lVar11) = uVar1;
        *(undefined4 *)(lVar10 + 0xc + lVar11) = uVar5;
        *(int *)(lVar10 + 0x10 + lVar11) = iVar3 + 2;
        *(int *)(lVar10 + 0x14 + lVar11) = iVar4;
        *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar13;
        *(longlong *)(lVar9 + 0x100) = lVar8 + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

