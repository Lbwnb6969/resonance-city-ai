// VA 0x140ae8500, PDB extent 2141 bytes
// country_core::shader::grass2::card_splats_shadow::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::grass2::card_splats_shadow::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 2141 */

void pdb_140ae8500(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined2 in_stack_ffffffffffffff80;
  undefined2 uVar16;
  undefined1 uVar17;
  
  puVar6 = (undefined8 *)param_1[8];
  *(ulonglong *)(param_3[1] + (ulonglong)(uint)param_2[2]) =
       (ulonglong)*(ushort *)((longlong)puVar6 + 10) << 0x20 | (ulonglong)*(ushort *)(puVar6 + 1);
  param_3 = (longlong *)*param_3;
  if (param_3[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar7 = *param_1;
    uVar14 = *(undefined4 *)(lVar7 + 0x10);
    lVar8 = *param_3;
    uVar16 = CONCAT11((char)((ushort)in_stack_ffffffffffffff80 >> 8),0x19);
    uVar13 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8,
                           *(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                           (short)param_3[7],param_3[1],param_3[2],uVar14,uVar16,1);
    uVar17 = (undefined1)((ushort)uVar16 >> 8);
    lVar8 = *param_3;
    uVar1 = *(undefined8 *)(lVar7 + 8);
    lVar7 = *(longlong *)(lVar8 + 0x100);
    if (lVar7 == *(longlong *)(lVar8 + 0xf0)) {
      pdb_142dbafc0(lVar8 + 0xf0);
    }
    lVar9 = *(longlong *)(lVar8 + 0xf8);
    lVar11 = lVar7 * 0x1c;
    *(undefined4 *)(lVar9 + lVar11) = 4;
    *(undefined8 *)(lVar9 + 4 + lVar11) = uVar1;
    *(undefined4 *)(lVar9 + 0xc + lVar11) = uVar14;
    *(int *)(lVar9 + 0x10 + lVar11) = iVar3 + 1;
    *(int *)(lVar9 + 0x14 + lVar11) = iVar4;
    *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
    *(longlong *)(lVar8 + 0x100) = lVar7 + 1;
    if (param_3[1] != 0) {
      lVar7 = param_1[1];
      uVar14 = *(undefined4 *)(lVar7 + 0x10);
      lVar8 = *param_3;
      uVar16 = CONCAT11(uVar17,0x19);
      uVar13 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),lVar8 + 0xd8
                             ,*(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88),
                             (short)param_3[7],param_3[1],param_3[2],uVar14,uVar16,1);
      uVar17 = (undefined1)((ushort)uVar16 >> 8);
      lVar8 = *param_3;
      uVar1 = *(undefined8 *)(lVar7 + 8);
      lVar7 = *(longlong *)(lVar8 + 0x100);
      if (lVar7 == *(longlong *)(lVar8 + 0xf0)) {
        pdb_142dbafc0(lVar8 + 0xf0);
      }
      lVar9 = *(longlong *)(lVar8 + 0xf8);
      lVar11 = lVar7 * 0x1c;
      *(undefined4 *)(lVar9 + lVar11) = 4;
      *(undefined8 *)(lVar9 + 4 + lVar11) = uVar1;
      *(undefined4 *)(lVar9 + 0xc + lVar11) = uVar14;
      *(int *)(lVar9 + 0x10 + lVar11) = iVar3 + 2;
      *(int *)(lVar9 + 0x14 + lVar11) = iVar4;
      *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
      *(longlong *)(lVar8 + 0x100) = lVar7 + 1;
      if (param_3[1] != 0) {
        lVar7 = param_1[2];
        uVar14 = *(undefined4 *)(lVar7 + 0x10);
        lVar8 = *param_3;
        uVar16 = CONCAT11(uVar17,0x19);
        uVar13 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                               lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                               *(undefined8 *)(lVar8 + 0x88),(short)param_3[7],param_3[1],param_3[2]
                               ,uVar14,uVar16,1);
        uVar17 = (undefined1)((ushort)uVar16 >> 8);
        lVar8 = *param_3;
        uVar1 = *(undefined8 *)(lVar7 + 8);
        lVar7 = *(longlong *)(lVar8 + 0x100);
        if (lVar7 == *(longlong *)(lVar8 + 0xf0)) {
          pdb_142dbafc0(lVar8 + 0xf0);
        }
        lVar9 = *(longlong *)(lVar8 + 0xf8);
        lVar11 = lVar7 * 0x1c;
        *(undefined4 *)(lVar9 + lVar11) = 4;
        *(undefined8 *)(lVar9 + 4 + lVar11) = uVar1;
        *(undefined4 *)(lVar9 + 0xc + lVar11) = uVar14;
        *(int *)(lVar9 + 0x10 + lVar11) = iVar3 + 3;
        *(int *)(lVar9 + 0x14 + lVar11) = iVar4;
        *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
        *(longlong *)(lVar8 + 0x100) = lVar7 + 1;
        if (param_3[1] != 0) {
          lVar7 = param_1[3];
          uVar14 = *(undefined4 *)(lVar7 + 0x10);
          lVar8 = *param_3;
          uVar16 = CONCAT11(uVar17,0x19);
          uVar13 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                                 lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                                 *(undefined8 *)(lVar8 + 0x88),(short)param_3[7],param_3[1],
                                 param_3[2],uVar14,uVar16,1);
          uVar17 = (undefined1)((ushort)uVar16 >> 8);
          lVar8 = *param_3;
          uVar1 = *(undefined8 *)(lVar7 + 8);
          lVar7 = *(longlong *)(lVar8 + 0x100);
          if (lVar7 == *(longlong *)(lVar8 + 0xf0)) {
            pdb_142dbafc0(lVar8 + 0xf0);
          }
          lVar9 = *(longlong *)(lVar8 + 0xf8);
          lVar11 = lVar7 * 0x1c;
          *(undefined4 *)(lVar9 + lVar11) = 4;
          *(undefined8 *)(lVar9 + 4 + lVar11) = uVar1;
          *(undefined4 *)(lVar9 + 0xc + lVar11) = uVar14;
          *(int *)(lVar9 + 0x10 + lVar11) = iVar3 + 4;
          *(int *)(lVar9 + 0x14 + lVar11) = iVar4;
          *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
          *(longlong *)(lVar8 + 0x100) = lVar7 + 1;
          if (param_3[1] != 0) {
            lVar7 = param_1[4];
            uVar14 = *(undefined4 *)(lVar7 + 0x10);
            lVar8 = *param_3;
            uVar16 = CONCAT11(uVar17,0x19);
            uVar13 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                                   lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                                   *(undefined8 *)(lVar8 + 0x88),(short)param_3[7],param_3[1],
                                   param_3[2],uVar14,uVar16,1);
            uVar17 = (undefined1)((ushort)uVar16 >> 8);
            lVar8 = *param_3;
            uVar1 = *(undefined8 *)(lVar7 + 8);
            lVar7 = *(longlong *)(lVar8 + 0x100);
            if (lVar7 == *(longlong *)(lVar8 + 0xf0)) {
              pdb_142dbafc0(lVar8 + 0xf0);
            }
            lVar9 = *(longlong *)(lVar8 + 0xf8);
            lVar11 = lVar7 * 0x1c;
            *(undefined4 *)(lVar9 + lVar11) = 4;
            *(undefined8 *)(lVar9 + 4 + lVar11) = uVar1;
            *(undefined4 *)(lVar9 + 0xc + lVar11) = uVar14;
            *(int *)(lVar9 + 0x10 + lVar11) = iVar3 + 5;
            *(int *)(lVar9 + 0x14 + lVar11) = iVar4;
            *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
            *(longlong *)(lVar8 + 0x100) = lVar7 + 1;
            if (param_3[1] != 0) {
              lVar7 = param_1[5];
              uVar14 = *(undefined4 *)(lVar7 + 0x10);
              lVar8 = *param_3;
              uVar16 = CONCAT11(uVar17,0x19);
              uVar13 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                                     lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                                     *(undefined8 *)(lVar8 + 0x88),(short)param_3[7],param_3[1],
                                     param_3[2],uVar14,uVar16,1);
              uVar17 = (undefined1)((ushort)uVar16 >> 8);
              lVar8 = *param_3;
              uVar1 = *(undefined8 *)(lVar7 + 8);
              lVar7 = *(longlong *)(lVar8 + 0x100);
              if (lVar7 == *(longlong *)(lVar8 + 0xf0)) {
                pdb_142dbafc0(lVar8 + 0xf0);
              }
              lVar9 = *(longlong *)(lVar8 + 0xf8);
              lVar11 = lVar7 * 0x1c;
              *(undefined4 *)(lVar9 + lVar11) = 4;
              *(undefined8 *)(lVar9 + 4 + lVar11) = uVar1;
              *(undefined4 *)(lVar9 + 0xc + lVar11) = uVar14;
              *(int *)(lVar9 + 0x10 + lVar11) = iVar3 + 6;
              *(int *)(lVar9 + 0x14 + lVar11) = iVar4;
              *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
              *(longlong *)(lVar8 + 0x100) = lVar7 + 1;
              if (param_3[1] != 0) {
                lVar7 = param_1[6];
                uVar14 = *(undefined4 *)(lVar7 + 0x10);
                lVar8 = *param_3;
                uVar16 = CONCAT11(uVar17,0x19);
                uVar13 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                                       lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                                       *(undefined8 *)(lVar8 + 0x88),(short)param_3[7],param_3[1],
                                       param_3[2],uVar14,uVar16,1);
                uVar17 = (undefined1)((ushort)uVar16 >> 8);
                lVar8 = *param_3;
                uVar1 = *(undefined8 *)(lVar7 + 8);
                lVar7 = *(longlong *)(lVar8 + 0x100);
                if (lVar7 == *(longlong *)(lVar8 + 0xf0)) {
                  pdb_142dbafc0(lVar8 + 0xf0);
                }
                lVar9 = *(longlong *)(lVar8 + 0xf8);
                lVar11 = lVar7 * 0x1c;
                *(undefined4 *)(lVar9 + lVar11) = 4;
                *(undefined8 *)(lVar9 + 4 + lVar11) = uVar1;
                *(undefined4 *)(lVar9 + 0xc + lVar11) = uVar14;
                *(int *)(lVar9 + 0x10 + lVar11) = iVar3 + 7;
                *(int *)(lVar9 + 0x14 + lVar11) = iVar4;
                *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
                *(longlong *)(lVar8 + 0x100) = lVar7 + 1;
                pbVar10 = (byte *)param_1[7];
                bVar2 = pbVar10[0x11];
                uVar12 = 0x19;
                uVar15 = bVar2 - 0x7c;
                if ((uVar15 < 7) && ((0x75U >> (uVar15 & 0x1f) & 1) != 0)) {
                  uVar12 = 0x1a;
                }
                if (param_3[1] != 0) {
                  uVar14 = *(undefined4 *)(pbVar10 + 4);
                  lVar7 = *param_3;
                  uVar13 = pdb_141764080(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0),
                                         lVar7 + 0xd8,*(undefined8 *)(lVar7 + 0x80),
                                         *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],param_3[1],
                                         param_3[2],uVar14,CONCAT11(uVar17,uVar12),1);
                  if (*pbVar10 != bVar2 && *pbVar10 != 0) {
                    pdb_140e2c3a0(*param_3,pbVar10);
                  }
                  lVar7 = *param_3;
                  uVar5 = *(undefined4 *)pbVar10;
                  lVar8 = *(longlong *)(lVar7 + 0x100);
                  if (lVar8 == *(longlong *)(lVar7 + 0xf0)) {
                    pdb_142dbafc0(lVar7 + 0xf0);
                  }
                  lVar9 = *(longlong *)(lVar7 + 0xf8);
                  lVar11 = lVar8 * 0x1c;
                  *(undefined4 *)(lVar9 + lVar11) = 0;
                  *(ulonglong *)(lVar9 + 4 + lVar11) = CONCAT44(uVar14,uVar5);
                  *(int *)(lVar9 + 0x10 + lVar11) = iVar3 + 9;
                  *(int *)(lVar9 + 0x14 + lVar11) = iVar4;
                  *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar13;
                  *(longlong *)(lVar7 + 0x100) = lVar8 + 1;
                  if (param_3[1] != 0) {
                    lVar7 = *param_3;
                    uVar1 = *puVar6;
                    uVar14 = pdb_141764730(*(undefined8 *)(lVar7 + 200),
                                           *(undefined8 *)(lVar7 + 0xd0),lVar7 + 0xd8,
                                           *(undefined8 *)(lVar7 + 0x80),
                                           *(undefined8 *)(lVar7 + 0x88),(short)param_3[7],
                                           param_3[1],param_3[2],(int)((ulonglong)uVar1 >> 0x20),
                                           0x3319,*(undefined4 *)(lVar7 + 0x248));
                    lVar7 = *param_3;
                    lVar8 = *(longlong *)(lVar7 + 0x100);
                    if (lVar8 == *(longlong *)(lVar7 + 0xf0)) {
                      pdb_142dbafc0(lVar7 + 0xf0);
                    }
                    lVar9 = *(longlong *)(lVar7 + 0xf8);
                    lVar11 = lVar8 * 0x1c;
                    *(undefined4 *)(lVar9 + lVar11) = 1;
                    *(undefined8 *)(lVar9 + 4 + lVar11) = uVar1;
                    *(int *)(lVar9 + 0x10 + lVar11) = iVar3 + 8;
                    *(int *)(lVar9 + 0x14 + lVar11) = iVar4;
                    *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar14;
                    *(longlong *)(lVar7 + 0x100) = lVar8 + 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

