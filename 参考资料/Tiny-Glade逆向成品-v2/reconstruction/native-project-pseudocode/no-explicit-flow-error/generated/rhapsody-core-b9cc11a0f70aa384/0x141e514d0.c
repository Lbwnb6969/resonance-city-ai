// VA 0x141e514d0, PDB extent 570 bytes
// rhapsody_core::shader::depth_min_max::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-core-b9cc11a0f70aa384/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_core::shader::depth_min_max::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-core-b9cc11a0f70aa384/out/shabriri.rs
   Extent: 570 */

void pdb_141e514d0(byte *param_1,undefined8 *param_2,int *param_3,longlong *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  
  *(ulonglong *)(param_4[1] + (ulonglong)(uint)param_3[2]) =
       (ulonglong)*(ushort *)(param_1 + 10) << 0x20 | (ulonglong)*(ushort *)(param_1 + 8);
  param_4 = (longlong *)*param_4;
  bVar1 = param_1[0x11];
  uVar10 = 0x19;
  uVar13 = bVar1 - 0x7c;
  if ((uVar13 < 7) && ((0x75U >> (uVar13 & 0x1f) & 1) != 0)) {
    uVar10 = 0x1a;
  }
  if (param_4[1] != 0) {
    iVar2 = *param_3;
    iVar3 = param_3[1];
    uVar12 = *(undefined4 *)(param_1 + 4);
    lVar5 = *param_4;
    uVar11 = pdb_141e52d90(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8,
                           *(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                           (short)param_4[7],param_4[1],param_4[2],uVar12,uVar10,1);
    if (*param_1 != bVar1 && *param_1 != 0) {
      pdb_140e2c3a0(*param_4,param_1);
    }
    lVar5 = *param_4;
    uVar4 = *(undefined4 *)param_1;
    lVar6 = *(longlong *)(lVar5 + 0x100);
    if (lVar6 == *(longlong *)(lVar5 + 0xf0)) {
      pdb_142dbafc0(lVar5 + 0xf0);
    }
    lVar7 = *(longlong *)(lVar5 + 0xf8);
    lVar9 = lVar6 * 0x1c;
    *(undefined4 *)(lVar7 + lVar9) = 0;
    *(ulonglong *)(lVar7 + 4 + lVar9) = CONCAT44(uVar12,uVar4);
    *(int *)(lVar7 + 0x10 + lVar9) = iVar2 + 1;
    *(int *)(lVar7 + 0x14 + lVar9) = iVar3;
    *(undefined4 *)(lVar7 + 0x18 + lVar9) = uVar11;
    *(longlong *)(lVar5 + 0x100) = lVar6 + 1;
    if (param_4[1] != 0) {
      lVar5 = *param_4;
      uVar8 = *param_2;
      uVar12 = pdb_141e53050(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_4[7],param_4[1],param_4[2],(int)((ulonglong)uVar8 >> 0x20)
                             ,0x3319,*(undefined4 *)(lVar5 + 0x248));
      lVar5 = *param_4;
      lVar6 = *(longlong *)(lVar5 + 0x100);
      if (lVar6 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar7 = *(longlong *)(lVar5 + 0xf8);
      lVar9 = lVar6 * 0x1c;
      *(undefined4 *)(lVar7 + lVar9) = 1;
      *(undefined8 *)(lVar7 + 4 + lVar9) = uVar8;
      *(int *)(lVar7 + 0x10 + lVar9) = iVar2 + 2;
      *(int *)(lVar7 + 0x14 + lVar9) = iVar3;
      *(undefined4 *)(lVar7 + 0x18 + lVar9) = uVar12;
      *(longlong *)(lVar5 + 0x100) = lVar6 + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14358cc58);
}

