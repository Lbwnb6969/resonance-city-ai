// VA 0x140bdc8f0, PDB extent 973 bytes
// country_core::shader::inc::reflection_fog::impl$5::bind<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::inc::reflection_fog::impl$5::bind<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 973 */

void pdb_140bdc8f0(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  uint uVar14;
  
  pdb_141b045e0(*param_1,param_1[1],param_2,param_3);
  pbVar6 = (byte *)param_1[2];
  bVar1 = pbVar6[0x11];
  uVar12 = 0x19;
  uVar14 = bVar1 - 0x7c;
  if ((uVar14 < 7) && ((0x75U >> (uVar14 & 0x1f) & 1) != 0)) {
    uVar12 = 0x1a;
  }
  plVar7 = (longlong *)*param_3;
  if (plVar7[1] != 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar4 = *(undefined4 *)(pbVar6 + 4);
    lVar8 = *plVar7;
    uVar13 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8,
                           *(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                           (short)plVar7[7],plVar7[1],plVar7[2],uVar4,uVar12,1);
    if (*pbVar6 != bVar1 && *pbVar6 != 0) {
      pdb_140e2c3a0(*plVar7,pbVar6);
    }
    lVar8 = *plVar7;
    uVar5 = *(undefined4 *)pbVar6;
    lVar9 = *(longlong *)(lVar8 + 0x100);
    if (lVar9 == *(longlong *)(lVar8 + 0xf0)) {
      pdb_142dbafc0(lVar8 + 0xf0);
    }
    lVar10 = *(longlong *)(lVar8 + 0xf8);
    lVar11 = lVar9 * 0x1c;
    *(undefined4 *)(lVar10 + lVar11) = 0;
    *(ulonglong *)(lVar10 + 4 + lVar11) = CONCAT44(uVar4,uVar5);
    *(int *)(lVar10 + 0x10 + lVar11) = iVar2 + 2;
    *(int *)(lVar10 + 0x14 + lVar11) = iVar3;
    *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar13;
    *(longlong *)(lVar8 + 0x100) = lVar9 + 1;
    pbVar6 = (byte *)param_1[3];
    bVar1 = pbVar6[0x11];
    uVar12 = 0x19;
    uVar14 = bVar1 - 0x7c;
    if ((uVar14 < 7) && ((0x75U >> (uVar14 & 0x1f) & 1) != 0)) {
      uVar12 = 0x1a;
    }
    plVar7 = (longlong *)*param_3;
    if (plVar7[1] != 0) {
      uVar4 = *(undefined4 *)(pbVar6 + 4);
      lVar8 = *plVar7;
      uVar13 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8
                             ,*(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                             (short)plVar7[7],plVar7[1],plVar7[2],uVar4,uVar12,1);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*plVar7,pbVar6);
      }
      lVar8 = *plVar7;
      uVar5 = *(undefined4 *)pbVar6;
      lVar9 = *(longlong *)(lVar8 + 0x100);
      if (lVar9 == *(longlong *)(lVar8 + 0xf0)) {
        pdb_142dbafc0(lVar8 + 0xf0);
      }
      lVar10 = *(longlong *)(lVar8 + 0xf8);
      lVar11 = lVar9 * 0x1c;
      *(undefined4 *)(lVar10 + lVar11) = 0;
      *(ulonglong *)(lVar10 + 4 + lVar11) = CONCAT44(uVar4,uVar5);
      *(int *)(lVar10 + 0x10 + lVar11) = iVar2 + 3;
      *(int *)(lVar10 + 0x14 + lVar11) = iVar3;
      *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar13;
      *(longlong *)(lVar8 + 0x100) = lVar9 + 1;
      pbVar6 = (byte *)param_1[4];
      bVar1 = pbVar6[0x11];
      uVar12 = 0x19;
      uVar14 = bVar1 - 0x7c;
      if ((uVar14 < 7) && ((0x75U >> (uVar14 & 0x1f) & 1) != 0)) {
        uVar12 = 0x1a;
      }
      plVar7 = (longlong *)*param_3;
      if (plVar7[1] != 0) {
        uVar4 = *(undefined4 *)(pbVar6 + 4);
        lVar8 = *plVar7;
        uVar13 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                               lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                               *(undefined8 *)(lVar8 + 0x88),(short)plVar7[7],plVar7[1],plVar7[2],
                               uVar4,uVar12,1);
        if (*pbVar6 != bVar1 && *pbVar6 != 0) {
          pdb_140e2c3a0(*plVar7,pbVar6);
        }
        lVar8 = *plVar7;
        uVar5 = *(undefined4 *)pbVar6;
        lVar9 = *(longlong *)(lVar8 + 0x100);
        if (lVar9 == *(longlong *)(lVar8 + 0xf0)) {
          pdb_142dbafc0(lVar8 + 0xf0);
        }
        lVar10 = *(longlong *)(lVar8 + 0xf8);
        lVar11 = lVar9 * 0x1c;
        *(undefined4 *)(lVar10 + lVar11) = 0;
        *(ulonglong *)(lVar10 + 4 + lVar11) = CONCAT44(uVar4,uVar5);
        *(int *)(lVar10 + 0x10 + lVar11) = iVar2 + 4;
        *(int *)(lVar10 + 0x14 + lVar11) = iVar3;
        *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar13;
        *(longlong *)(lVar8 + 0x100) = lVar9 + 1;
        iVar2 = param_2[2];
        *(undefined4 *)(param_3[1] + (ulonglong)(iVar2 + 8)) = *(undefined4 *)(param_1 + 5);
        *(undefined4 *)(param_3[1] + (ulonglong)(iVar2 + 0xc)) =
             *(undefined4 *)((longlong)param_1 + 0x2c);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

