// VA 0x142d10c30, PDB extent 1463 bytes
// clutter_icon_pipe::shader::clutter_icon_light::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/clutter-icon-pipe-d8befd2a3934cb9b/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   clutter_icon_pipe::shader::clutter_icon_light::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/clutter-icon-pipe-d8befd2a3934cb9b/out/shabriri.rs
   Extent: 1463 */

void pdb_142d10c30(undefined8 *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined2 in_stack_ffffffffffffff90;
  undefined2 uVar19;
  
  lVar6 = param_3[1];
  pbVar7 = (byte *)*param_1;
  uVar2 = param_2[2];
  *(ulonglong *)(lVar6 + (ulonglong)uVar2) =
       (ulonglong)*(ushort *)(pbVar7 + 10) << 0x20 | (ulonglong)*(ushort *)(pbVar7 + 8);
  plVar8 = (longlong *)*param_3;
  bVar1 = pbVar7[0x11];
  uVar14 = 0x19;
  uVar18 = bVar1 - 0x7c;
  if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
    uVar14 = 0x1a;
  }
  if (plVar8[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    uVar17 = *(undefined4 *)(pbVar7 + 4);
    lVar9 = *plVar8;
    uVar19 = CONCAT11((char)((ushort)in_stack_ffffffffffffff90 >> 8),uVar14);
    uVar16 = pdb_1426d79e0(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8,
                           *(undefined8 *)(lVar9 + 0x80),*(undefined8 *)(lVar9 + 0x88),
                           (short)plVar8[7],plVar8[1],plVar8[2],uVar17,uVar19,1);
    uVar14 = (undefined1)((ushort)uVar19 >> 8);
    if (*pbVar7 != bVar1 && *pbVar7 != 0) {
      pdb_140e2c3a0(*plVar8,pbVar7);
    }
    lVar9 = *plVar8;
    uVar5 = *(undefined4 *)pbVar7;
    lVar10 = *(longlong *)(lVar9 + 0x100);
    if (lVar10 == *(longlong *)(lVar9 + 0xf0)) {
      pdb_142dbafc0(lVar9 + 0xf0);
    }
    lVar11 = *(longlong *)(lVar9 + 0xf8);
    lVar13 = lVar10 * 0x1c;
    *(undefined4 *)(lVar11 + lVar13) = 0;
    *(ulonglong *)(lVar11 + 4 + lVar13) = CONCAT44(uVar17,uVar5);
    *(int *)(lVar11 + 0x10 + lVar13) = iVar3 + 1;
    *(int *)(lVar11 + 0x14 + lVar13) = iVar4;
    *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar16;
    *(longlong *)(lVar9 + 0x100) = lVar10 + 1;
    pbVar7 = (byte *)param_1[1];
    bVar1 = pbVar7[0x11];
    uVar15 = 0x19;
    uVar18 = bVar1 - 0x7c;
    if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
      uVar15 = 0x1a;
    }
    if (plVar8[1] != 0) {
      uVar17 = *(undefined4 *)(pbVar7 + 4);
      lVar9 = *plVar8;
      uVar19 = CONCAT11(uVar14,uVar15);
      uVar16 = pdb_1426d79e0(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8
                             ,*(undefined8 *)(lVar9 + 0x80),*(undefined8 *)(lVar9 + 0x88),
                             (short)plVar8[7],plVar8[1],plVar8[2],uVar17,uVar19,1);
      uVar14 = (undefined1)((ushort)uVar19 >> 8);
      if (*pbVar7 != bVar1 && *pbVar7 != 0) {
        pdb_140e2c3a0(*plVar8,pbVar7);
      }
      lVar9 = *plVar8;
      uVar5 = *(undefined4 *)pbVar7;
      lVar10 = *(longlong *)(lVar9 + 0x100);
      if (lVar10 == *(longlong *)(lVar9 + 0xf0)) {
        pdb_142dbafc0(lVar9 + 0xf0);
      }
      lVar11 = *(longlong *)(lVar9 + 0xf8);
      lVar13 = lVar10 * 0x1c;
      *(undefined4 *)(lVar11 + lVar13) = 0;
      *(ulonglong *)(lVar11 + 4 + lVar13) = CONCAT44(uVar17,uVar5);
      *(int *)(lVar11 + 0x10 + lVar13) = iVar3 + 2;
      *(int *)(lVar11 + 0x14 + lVar13) = iVar4;
      *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar16;
      *(longlong *)(lVar9 + 0x100) = lVar10 + 1;
      pbVar7 = (byte *)param_1[2];
      bVar1 = pbVar7[0x11];
      uVar15 = 0x19;
      uVar18 = bVar1 - 0x7c;
      if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
        uVar15 = 0x1a;
      }
      if (plVar8[1] != 0) {
        uVar17 = *(undefined4 *)(pbVar7 + 4);
        lVar9 = *plVar8;
        uVar19 = CONCAT11(uVar14,uVar15);
        uVar16 = pdb_1426d79e0(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),
                               lVar9 + 0xd8,*(undefined8 *)(lVar9 + 0x80),
                               *(undefined8 *)(lVar9 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2],
                               uVar17,uVar19,1);
        uVar14 = (undefined1)((ushort)uVar19 >> 8);
        if (*pbVar7 != bVar1 && *pbVar7 != 0) {
          pdb_140e2c3a0(*plVar8,pbVar7);
        }
        lVar9 = *plVar8;
        uVar5 = *(undefined4 *)pbVar7;
        lVar10 = *(longlong *)(lVar9 + 0x100);
        if (lVar10 == *(longlong *)(lVar9 + 0xf0)) {
          pdb_142dbafc0(lVar9 + 0xf0);
        }
        lVar11 = *(longlong *)(lVar9 + 0xf8);
        lVar13 = lVar10 * 0x1c;
        *(undefined4 *)(lVar11 + lVar13) = 0;
        *(ulonglong *)(lVar11 + 4 + lVar13) = CONCAT44(uVar17,uVar5);
        *(int *)(lVar11 + 0x10 + lVar13) = iVar3 + 3;
        *(int *)(lVar11 + 0x14 + lVar13) = iVar4;
        *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar16;
        *(longlong *)(lVar9 + 0x100) = lVar10 + 1;
        pbVar7 = (byte *)param_1[3];
        bVar1 = pbVar7[0x11];
        uVar15 = 0x19;
        uVar18 = bVar1 - 0x7c;
        if ((uVar18 < 7) && ((0x75U >> (uVar18 & 0x1f) & 1) != 0)) {
          uVar15 = 0x1a;
        }
        if (plVar8[1] != 0) {
          uVar17 = *(undefined4 *)(pbVar7 + 4);
          lVar9 = *plVar8;
          uVar16 = pdb_1426d79e0(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),
                                 lVar9 + 0xd8,*(undefined8 *)(lVar9 + 0x80),
                                 *(undefined8 *)(lVar9 + 0x88),(short)plVar8[7],plVar8[1],plVar8[2],
                                 uVar17,CONCAT11(uVar14,uVar15),1);
          if (*pbVar7 != bVar1 && *pbVar7 != 0) {
            pdb_140e2c3a0(*plVar8,pbVar7);
          }
          lVar9 = *plVar8;
          uVar5 = *(undefined4 *)pbVar7;
          lVar10 = *(longlong *)(lVar9 + 0x100);
          if (lVar10 == *(longlong *)(lVar9 + 0xf0)) {
            pdb_142dbafc0(lVar9 + 0xf0);
          }
          lVar11 = *(longlong *)(lVar9 + 0xf8);
          lVar13 = lVar10 * 0x1c;
          *(undefined4 *)(lVar11 + lVar13) = 0;
          *(ulonglong *)(lVar11 + 4 + lVar13) = CONCAT44(uVar17,uVar5);
          *(int *)(lVar11 + 0x10 + lVar13) = iVar3 + 4;
          *(int *)(lVar11 + 0x14 + lVar13) = iVar4;
          *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar16;
          *(longlong *)(lVar9 + 0x100) = lVar10 + 1;
          if (plVar8[1] != 0) {
            lVar9 = *plVar8;
            uVar12 = *(undefined8 *)param_1[4];
            uVar17 = pdb_1426d7cb0(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),
                                   lVar9 + 0xd8,*(undefined8 *)(lVar9 + 0x80),
                                   *(undefined8 *)(lVar9 + 0x88),(short)plVar8[7],plVar8[1],
                                   plVar8[2],(int)((ulonglong)uVar12 >> 0x20),0x3319,
                                   *(undefined4 *)(lVar9 + 0x248));
            lVar9 = *plVar8;
            lVar10 = *(longlong *)(lVar9 + 0x100);
            if (lVar10 == *(longlong *)(lVar9 + 0xf0)) {
              pdb_142dbafc0(lVar9 + 0xf0);
            }
            lVar11 = *(longlong *)(lVar9 + 0xf8);
            lVar13 = lVar10 * 0x1c;
            *(undefined4 *)(lVar11 + lVar13) = 1;
            *(undefined8 *)(lVar11 + 4 + lVar13) = uVar12;
            *(int *)(lVar11 + 0x10 + lVar13) = iVar3 + 5;
            *(int *)(lVar11 + 0x14 + lVar13) = iVar4;
            *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar17;
            *(longlong *)(lVar9 + 0x100) = lVar10 + 1;
            *(undefined4 *)(lVar6 + (ulonglong)(uVar2 + 8)) = *(undefined4 *)(param_1 + 5);
            *(undefined4 *)(param_3[3] + (ulonglong)uVar2) =
                 *(undefined4 *)((longlong)param_1 + 0x2c);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143641348);
}

