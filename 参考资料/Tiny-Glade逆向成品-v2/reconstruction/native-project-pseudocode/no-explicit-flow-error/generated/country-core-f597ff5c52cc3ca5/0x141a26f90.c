// VA 0x141a26f90, PDB extent 1572 bytes
// country_core::shader::wall::generate_draw_lists2::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::wall::generate_draw_lists2::impl$2::bind_entry_point<rhapsody::rg::binding::RgProtocol,rhapsody::rg::node_builder::compute_pass_builder::RgComputeEntryBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1572 */

void pdb_141a26f90(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  byte *pbVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined2 in_stack_ffffffffffffff70;
  undefined2 uVar17;
  undefined1 uVar18;
  
  plVar7 = (longlong *)*param_3;
  if (plVar7[1] != 0) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar8 = *param_1;
    uVar5 = *(undefined4 *)(lVar8 + 0x10);
    lVar9 = *plVar7;
    uVar17 = CONCAT11((char)((ushort)in_stack_ffffffffffffff70 >> 8),0x19);
    uVar15 = pdb_141764080(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8,
                           *(undefined8 *)(lVar9 + 0x80),*(undefined8 *)(lVar9 + 0x88),
                           (short)plVar7[7],plVar7[1],plVar7[2],uVar5,uVar17,1);
    uVar18 = (undefined1)((ushort)uVar17 >> 8);
    lVar9 = *plVar7;
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
    *(int *)(lVar10 + 0x10 + lVar11) = iVar3 + 1;
    *(int *)(lVar10 + 0x14 + lVar11) = iVar4;
    *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar15;
    *(longlong *)(lVar9 + 0x100) = lVar8 + 1;
    if (plVar7[1] != 0) {
      lVar8 = param_1[1];
      uVar5 = *(undefined4 *)(lVar8 + 0x10);
      lVar9 = *plVar7;
      uVar15 = pdb_141764080(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),lVar9 + 0xd8
                             ,*(undefined8 *)(lVar9 + 0x80),*(undefined8 *)(lVar9 + 0x88),
                             (short)plVar7[7],plVar7[1],plVar7[2],uVar5,CONCAT11(uVar18,0x19),1);
      lVar9 = *plVar7;
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
      *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar15;
      *(longlong *)(lVar9 + 0x100) = lVar8 + 1;
      if (plVar7[1] != 0) {
        lVar8 = param_1[2];
        lVar9 = *plVar7;
        uVar5 = *(undefined4 *)(lVar8 + 0x10);
        uVar15 = pdb_141764730(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),
                               lVar9 + 0xd8,*(undefined8 *)(lVar9 + 0x80),
                               *(undefined8 *)(lVar9 + 0x88),(short)plVar7[7],plVar7[1],plVar7[2],
                               uVar5,0x3319,*(undefined4 *)(lVar9 + 0x248));
        lVar9 = *plVar7;
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
        *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar15;
        *(longlong *)(lVar9 + 0x100) = lVar8 + 1;
        if (plVar7[1] != 0) {
          lVar8 = param_1[3];
          lVar9 = *plVar7;
          uVar5 = *(undefined4 *)(lVar8 + 0x10);
          uVar15 = pdb_141764730(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),
                                 lVar9 + 0xd8,*(undefined8 *)(lVar9 + 0x80),
                                 *(undefined8 *)(lVar9 + 0x88),(short)plVar7[7],plVar7[1],plVar7[2],
                                 uVar5,0x3319,*(undefined4 *)(lVar9 + 0x248));
          lVar9 = *plVar7;
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
          *(int *)(lVar10 + 0x10 + lVar11) = iVar3 + 4;
          *(int *)(lVar10 + 0x14 + lVar11) = iVar4;
          *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar15;
          *(longlong *)(lVar9 + 0x100) = lVar8 + 1;
          lVar8 = param_3[1];
          uVar16 = param_2[2];
          *(int *)(lVar8 + (ulonglong)uVar16) = (int)param_1[8];
          if (plVar7[1] != 0) {
            lVar9 = param_1[4];
            lVar10 = *plVar7;
            uVar5 = *(undefined4 *)(lVar9 + 0x10);
            uVar18 = 0x33;
            uVar15 = pdb_141764730(*(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xd0),
                                   lVar10 + 0xd8,*(undefined8 *)(lVar10 + 0x80),
                                   *(undefined8 *)(lVar10 + 0x88),(short)plVar7[7],plVar7[1],
                                   plVar7[2],uVar5,0x3319,*(undefined4 *)(lVar10 + 0x248));
            lVar10 = *plVar7;
            uVar1 = *(undefined8 *)(lVar9 + 8);
            lVar9 = *(longlong *)(lVar10 + 0x100);
            if (lVar9 == *(longlong *)(lVar10 + 0xf0)) {
              pdb_142dbafc0(lVar10 + 0xf0);
            }
            lVar11 = *(longlong *)(lVar10 + 0xf8);
            lVar13 = lVar9 * 0x1c;
            *(undefined4 *)(lVar11 + lVar13) = 3;
            *(undefined8 *)(lVar11 + 4 + lVar13) = uVar1;
            *(undefined4 *)(lVar11 + 0xc + lVar13) = uVar5;
            *(int *)(lVar11 + 0x10 + lVar13) = iVar3 + 5;
            *(int *)(lVar11 + 0x14 + lVar13) = iVar4;
            *(undefined4 *)(lVar11 + 0x18 + lVar13) = uVar15;
            *(longlong *)(lVar10 + 0x100) = lVar9 + 1;
            lVar9 = param_3[3];
            uVar5 = *(undefined4 *)((longlong)param_1 + 0x34);
            *(int *)(lVar9 + (ulonglong)uVar16) = (int)param_1[6];
            *(undefined4 *)(lVar9 + (ulonglong)(uVar16 + 4)) = uVar5;
            *(longlong *)(lVar8 + (ulonglong)(uVar16 + 4)) = param_1[7];
            pbVar12 = (byte *)param_1[5];
            bVar2 = pbVar12[0x11];
            uVar14 = 0x19;
            uVar16 = bVar2 - 0x7c;
            if ((uVar16 < 7) && ((0x75U >> (uVar16 & 0x1f) & 1) != 0)) {
              uVar14 = 0x1a;
            }
            if (plVar7[1] != 0) {
              uVar5 = *(undefined4 *)(pbVar12 + 4);
              lVar8 = *plVar7;
              uVar15 = pdb_141764080(*(undefined8 *)(lVar8 + 200),*(undefined8 *)(lVar8 + 0xd0),
                                     lVar8 + 0xd8,*(undefined8 *)(lVar8 + 0x80),
                                     *(undefined8 *)(lVar8 + 0x88),(short)plVar7[7],plVar7[1],
                                     plVar7[2],uVar5,CONCAT11(uVar18,uVar14),1);
              if (*pbVar12 != bVar2 && *pbVar12 != 0) {
                pdb_140e2c3a0(*plVar7,pbVar12);
              }
              lVar8 = *plVar7;
              uVar6 = *(undefined4 *)pbVar12;
              lVar9 = *(longlong *)(lVar8 + 0x100);
              if (lVar9 == *(longlong *)(lVar8 + 0xf0)) {
                pdb_142dbafc0(lVar8 + 0xf0);
              }
              lVar10 = *(longlong *)(lVar8 + 0xf8);
              lVar11 = lVar9 * 0x1c;
              *(undefined4 *)(lVar10 + lVar11) = 0;
              *(ulonglong *)(lVar10 + 4 + lVar11) = CONCAT44(uVar5,uVar6);
              *(int *)(lVar10 + 0x10 + lVar11) = iVar3 + 6;
              *(int *)(lVar10 + 0x14 + lVar11) = iVar4;
              *(undefined4 *)(lVar10 + 0x18 + lVar11) = uVar15;
              *(longlong *)(lVar8 + 0x100) = lVar9 + 1;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143332e78);
}

