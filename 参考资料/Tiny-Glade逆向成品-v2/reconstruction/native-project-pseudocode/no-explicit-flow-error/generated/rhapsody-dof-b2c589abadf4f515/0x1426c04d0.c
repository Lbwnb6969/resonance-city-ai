// VA 0x1426c04d0, PDB extent 1363 bytes
// rhapsody_dof::shader::analyze::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_dof::shader::analyze::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
   Extent: 1363 */

void pdb_1426c04d0(longlong *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 uVar17;
  
  lVar5 = param_3[1];
  pbVar6 = (byte *)param_1[1];
  uVar16 = param_2[2];
  *(ulonglong *)(lVar5 + (ulonglong)uVar16) =
       (ulonglong)*(ushort *)(pbVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar6 + 8);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  puVar7 = (undefined8 *)param_1[3];
  *(ulonglong *)(lVar5 + (ulonglong)(uVar16 + 8)) =
       (ulonglong)*(ushort *)((longlong)puVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar7 + 1);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    lVar5 = *param_1;
    lVar8 = *param_3;
    uVar15 = *(undefined4 *)(lVar5 + 0x10);
    uVar17 = 0x33;
    uVar13 = pdb_141cfe950(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8,
                           *(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar15,0x3319,
                           *(undefined4 *)(lVar8 + 0x248));
    lVar8 = *param_3;
    uVar14 = *(undefined4 *)(lVar5 + 8);
    uVar4 = *(undefined4 *)(lVar5 + 0xc);
    lVar5 = *(longlong *)(lVar8 + 0x100);
    if (lVar5 == *(longlong *)(lVar8 + 0xf0)) {
      pdb_142dbafc0(lVar8 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar8 + 0xf8);
    lVar11 = lVar5 * 0x1c;
    *(undefined4 *)(lVar9 + lVar11) = 3;
    *(undefined4 *)(lVar9 + 4 + lVar11) = uVar14;
    *(undefined4 *)(lVar9 + 8 + lVar11) = uVar4;
    *(undefined4 *)(lVar9 + 0xc + lVar11) = uVar15;
    *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 5;
    *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
    *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
    *(longlong *)(lVar8 + 0x100) = lVar5 + 1;
    bVar1 = pbVar6[0x11];
    uVar12 = 0x19;
    uVar16 = bVar1 - 0x7c;
    if ((uVar16 < 7) && ((0x75U >> (uVar16 & 0x1f) & 1) != 0)) {
      uVar12 = 0x1a;
    }
    if (param_3[1] != 0) {
      uVar15 = *(undefined4 *)(pbVar6 + 4);
      lVar5 = *param_3;
      uVar14 = pdb_141cfe690(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),lVar5 + 0xd8
                             ,*(undefined8 *)(lVar5 + 0x80),*(undefined8 *)(lVar5 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar15,CONCAT11(uVar17,uVar12),
                             1);
      if (*pbVar6 != bVar1 && *pbVar6 != 0) {
        pdb_140e2c3a0(*param_3,pbVar6);
      }
      lVar5 = *param_3;
      uVar4 = *(undefined4 *)pbVar6;
      lVar8 = *(longlong *)(lVar5 + 0x100);
      if (lVar8 == *(longlong *)(lVar5 + 0xf0)) {
        pdb_142dbafc0(lVar5 + 0xf0);
      }
      lVar9 = *(longlong *)(lVar5 + 0xf8);
      lVar11 = lVar8 * 0x1c;
      *(undefined4 *)(lVar9 + lVar11) = 0;
      *(ulonglong *)(lVar9 + 4 + lVar11) = CONCAT44(uVar15,uVar4);
      *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 1;
      *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
      *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar14;
      *(longlong *)(lVar5 + 0x100) = lVar8 + 1;
      if (param_3[1] != 0) {
        lVar5 = param_1[2];
        lVar8 = *param_3;
        uVar15 = *(undefined4 *)(lVar5 + 0x10);
        uVar13 = pdb_141cfe950(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                               lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                               *(undefined8 *)(lVar8 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar15,0x3319,*(undefined4 *)(lVar8 + 0x248));
        lVar8 = *param_3;
        uVar14 = *(undefined4 *)(lVar5 + 8);
        uVar4 = *(undefined4 *)(lVar5 + 0xc);
        lVar5 = *(longlong *)(lVar8 + 0x100);
        if (lVar5 == *(longlong *)(lVar8 + 0xf0)) {
          pdb_142dbafc0(lVar8 + 0xf0);
        }
        lVar9 = *(longlong *)(lVar8 + 0xf8);
        lVar11 = lVar5 * 0x1c;
        *(undefined4 *)(lVar9 + lVar11) = 3;
        *(undefined4 *)(lVar9 + 4 + lVar11) = uVar14;
        *(undefined4 *)(lVar9 + 8 + lVar11) = uVar4;
        *(undefined4 *)(lVar9 + 0xc + lVar11) = uVar15;
        *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 4;
        *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
        *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
        *(longlong *)(lVar8 + 0x100) = lVar5 + 1;
        if (param_3[1] != 0) {
          lVar5 = *param_3;
          uVar10 = *puVar7;
          uVar17 = 0x33;
          uVar15 = pdb_141cfe950(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                                 lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],(int)((ulonglong)uVar10 >> 0x20),0x3319,
                                 *(undefined4 *)(lVar5 + 0x248));
          lVar5 = *param_3;
          lVar8 = *(longlong *)(lVar5 + 0x100);
          if (lVar8 == *(longlong *)(lVar5 + 0xf0)) {
            pdb_142dbafc0(lVar5 + 0xf0);
          }
          lVar9 = *(longlong *)(lVar5 + 0xf8);
          lVar11 = lVar8 * 0x1c;
          *(undefined4 *)(lVar9 + lVar11) = 1;
          *(undefined8 *)(lVar9 + 4 + lVar11) = uVar10;
          *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 2;
          *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
          *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar15;
          *(longlong *)(lVar5 + 0x100) = lVar8 + 1;
          if (param_3[1] != 0) {
            lVar5 = param_1[4];
            uVar15 = *(undefined4 *)(lVar5 + 0x10);
            lVar8 = *param_3;
            uVar13 = pdb_141cfe690(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                                   lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                                   *(undefined8 *)(lVar8 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar15,CONCAT11(uVar17,0x19),1);
            lVar8 = *param_3;
            uVar14 = *(undefined4 *)(lVar5 + 8);
            uVar4 = *(undefined4 *)(lVar5 + 0xc);
            lVar5 = *(longlong *)(lVar8 + 0x100);
            if (lVar5 == *(longlong *)(lVar8 + 0xf0)) {
              pdb_142dbafc0(lVar8 + 0xf0);
            }
            lVar9 = *(longlong *)(lVar8 + 0xf8);
            lVar11 = lVar5 * 0x1c;
            *(undefined4 *)(lVar9 + lVar11) = 4;
            *(undefined4 *)(lVar9 + 4 + lVar11) = uVar14;
            *(undefined4 *)(lVar9 + 8 + lVar11) = uVar4;
            *(undefined4 *)(lVar9 + 0xc + lVar11) = uVar15;
            *(int *)(lVar9 + 0x10 + lVar11) = iVar2 + 3;
            *(int *)(lVar9 + 0x14 + lVar11) = iVar3;
            *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
            *(longlong *)(lVar8 + 0x100) = lVar5 + 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1433c93f0);
}

