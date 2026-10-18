// VA 0x141b045e0, PDB extent 578 bytes
// country_core::shader::inc::volumetric_shadow::impl$5::bind<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::inc::volumetric_shadow::impl$5::bind<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 578 */

void pdb_141b045e0(byte *param_1,longlong param_2,int *param_3,longlong *param_4)

{
  undefined8 uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  uint uVar13;
  
  *(ulonglong *)(param_4[1] + (ulonglong)(uint)param_3[2]) =
       (ulonglong)*(ushort *)(param_1 + 10) << 0x20 | (ulonglong)*(ushort *)(param_1 + 8);
  bVar2 = param_1[0x11];
  uVar11 = 0x19;
  uVar13 = bVar2 - 0x7c;
  if ((uVar13 < 7) && ((0x75U >> (uVar13 & 0x1f) & 1) != 0)) {
    uVar11 = 0x1a;
  }
  param_4 = (longlong *)*param_4;
  if (param_4[1] != 0) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    lVar7 = *param_4;
    uVar12 = pdb_141764080(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8,
                           *(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                           (short)param_4[7],param_4[1],param_4[2],uVar3,uVar11,1);
    if (*param_1 != bVar2 && *param_1 != 0) {
      pdb_140e2c3a0(*param_4,param_1);
    }
    lVar7 = *param_4;
    iVar4 = *param_3;
    iVar5 = param_3[1];
    uVar6 = *(undefined4 *)param_1;
    lVar8 = *(longlong *)(lVar7 + 0x100);
    if (lVar8 == *(longlong *)(lVar7 + 0xf0)) {
      pdb_142dbafc0(lVar7 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar7 + 0xf8);
    lVar10 = lVar8 * 0x1c;
    *(undefined4 *)(lVar9 + lVar10) = 0;
    *(ulonglong *)(lVar9 + 4 + lVar10) = CONCAT44(uVar3,uVar6);
    *(int *)(lVar9 + 0x10 + lVar10) = iVar4;
    *(int *)(lVar9 + 0x14 + lVar10) = iVar5;
    *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar12;
    *(longlong *)(lVar7 + 0x100) = lVar8 + 1;
    if (param_4[1] != 0) {
      uVar3 = *(undefined4 *)(param_2 + 0x10);
      lVar7 = *param_4;
      uVar12 = pdb_141764080(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8
                             ,*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                             (short)param_4[7],param_4[1],param_4[2],uVar3,0x19,1);
      lVar7 = *param_4;
      uVar1 = *(undefined8 *)(param_2 + 8);
      lVar8 = *(longlong *)(lVar7 + 0x100);
      if (lVar8 == *(longlong *)(lVar7 + 0xf0)) {
        pdb_142dbafc0(lVar7 + 0xf0);
      }
      lVar9 = *(longlong *)(lVar7 + 0xf8);
      lVar10 = lVar8 * 0x1c;
      *(undefined4 *)(lVar9 + lVar10) = 4;
      *(undefined8 *)(lVar9 + 4 + lVar10) = uVar1;
      *(undefined4 *)(lVar9 + 0xc + lVar10) = uVar3;
      *(int *)(lVar9 + 0x10 + lVar10) = iVar4 + 1;
      *(int *)(lVar9 + 0x14 + lVar10) = iVar5;
      *(undefined4 *)(lVar9 + 0x18 + lVar10) = uVar12;
      *(longlong *)(lVar7 + 0x100) = lVar8 + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

