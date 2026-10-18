// VA 0x140b04c70, PDB extent 1167 bytes
// country_core::systems::render_loop::compute_passes::dof::dof_prepare
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/dof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::dof::dof_prepare
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/dof.rs
   Extent: 1167 */

undefined8 * pdb_140b04c70(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ushort uVar19;
  ulonglong uVar20;
  short sVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  short sVar25;
  short sVar26;
  undefined4 uStack_208;
  undefined4 uStack_204;
  ushort uStack_200;
  ushort uStack_1fe;
  short sStack_1fc;
  undefined2 uStack_1fa;
  undefined2 uStack_1f8;
  undefined4 uStack_1f6;
  undefined2 uStack_1f2;
  uint uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  short sStack_1dc;
  undefined2 uStack_1da;
  undefined8 uStack_1d8;
  undefined2 uStack_1c8;
  ushort uStack_1c6;
  short sStack_1c4;
  short sStack_1c2;
  ushort uStack_1c0;
  undefined2 uStack_1be;
  short sStack_1bc;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined2 uStack_1b6;
  undefined1 uStack_1b4;
  undefined1 uStack_1b3;
  undefined2 uStack_1b2;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 *puStack_118;
  longlong lStack_110;
  undefined1 *puStack_108;
  undefined4 *puStack_100;
  undefined1 auStack_f4 [20];
  undefined4 uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  
  if (*(longlong *)(param_3 + 0x88) != 0) {
    lVar14 = *(longlong *)(param_3 + 0x70);
    uVar16 = 0x1d6a82b468dfb8a2;
    lVar17 = 0;
    while( true ) {
      uVar16 = uVar16 & *(ulonglong *)(param_3 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar14 + uVar16);
      auVar23[0] = -(auVar2[0] == DAT_142e34ec0);
      auVar23[1] = -(auVar2[1] == DAT_142e34ec0._1_1_);
      auVar23[2] = -(auVar2[2] == DAT_142e34ec0._2_1_);
      auVar23[3] = -(auVar2[3] == DAT_142e34ec0._3_1_);
      auVar23[4] = -(auVar2[4] == DAT_142e34ec0._4_1_);
      auVar23[5] = -(auVar2[5] == DAT_142e34ec0._5_1_);
      auVar23[6] = -(auVar2[6] == DAT_142e34ec0._6_1_);
      auVar23[7] = -(auVar2[7] == DAT_142e34ec0._7_1_);
      auVar23[8] = -(auVar2[8] == DAT_142e34ec0._8_1_);
      auVar23[9] = -(auVar2[9] == DAT_142e34ec0._9_1_);
      auVar23[10] = -(auVar2[10] == DAT_142e34ec0._10_1_);
      auVar23[0xb] = -(auVar2[0xb] == DAT_142e34ec0._11_1_);
      auVar23[0xc] = -(auVar2[0xc] == DAT_142e34ec0._12_1_);
      auVar23[0xd] = -(auVar2[0xd] == DAT_142e34ec0._13_1_);
      auVar23[0xe] = -(auVar2[0xe] == DAT_142e34ec0._14_1_);
      auVar23[0xf] = -(auVar2[0xf] == DAT_142e34ec0._15_1_);
      uVar19 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar18; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar20 = uVar3 + uVar16 & *(ulonglong *)(param_3 + 0x78);
        pcVar1 = (char *)(lVar14 + -0x18 + uVar20 * -0x18);
        auVar24[0] = -(*pcVar1 == DAT_142e60e60);
        auVar24[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar24[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar24[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar24[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar24[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar24[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar24[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar24[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar24[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar24[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar24[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar24[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar24[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar24[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar24[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
          uVar16 = *(ulonglong *)(lVar14 + uVar20 * -0x18 + -8);
          if ((uVar16 < *(ulonglong *)(param_3 + 0x210)) &&
             (uVar16 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar16 * 8), uVar16 != 0)) {
            lVar14 = ~uVar16 * 0x40;
            if (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + lVar14) != 0) {
              uStack_138 = *(undefined8 *)(*(longlong *)(param_3 + 0x1d8) + lVar14 + 0x10);
              pdb_1415257f0(auStack_f4,uStack_138,param_2);
              uVar19 = *(ushort *)(param_4 + 10);
              uVar13 = *(undefined4 *)(param_4 + 8);
              uStack_1ec = (uint)*(ushort *)(param_4 + 8);
              uStack_1c8 = 0;
              uStack_1c6 = (ushort)uVar13;
              uVar5 = uStack_1c6;
              sStack_1c4 = (short)((uint)uVar13 >> 0x10);
              sStack_1c2 = 1;
              uStack_1c0 = 1;
              uStack_1be._0_1_ = 1;
              uStack_1be._1_1_ = 0x4c;
              sStack_1bc = 0x201;
              uStack_1ba = 0;
              uStack_1b8 = 0xb8;
              uStack_1b7 = 0x34;
              uStack_1b6 = 0x4305;
              uStack_1b4 = 1;
              uStack_1b3 = 0;
              uStack_1b2 = 0;
              uStack_1b0 = 3;
              uVar12 = pdb_140e2b4e0(param_2,&uStack_1c8);
              sStack_1c4 = (short)uVar12;
              sStack_1c2 = (short)((uint)uVar12 >> 0x10);
              uStack_1be._0_1_ = (undefined1)((uint)uVar13 >> 0x10);
              uStack_1be._1_1_ = (undefined1)((uint)uVar13 >> 0x18);
              sStack_1bc = 1;
              uStack_1ba = 1;
              uStack_1b9 = 0;
              uStack_1b8 = 1;
              uStack_1b7 = 0x4c;
              uStack_1b6 = 0x201;
              uStack_1b4 = 0;
              uStack_1c8 = 0;
              uStack_1c6 = 0;
              uStack_1c0 = uVar5;
              if (*(char *)(param_2 + 0x24c) == '\x01') {
                pdb_140e19620(&uStack_1c8,param_2);
              }
              uVar11 = uStack_1b3;
              uVar10 = uStack_1b4;
              uVar9 = uStack_1b6;
              uVar8 = uStack_1b8;
              uVar7 = uStack_1b9;
              uVar6 = uStack_1ba;
              uStack_1f8 = CONCAT11(uStack_1b7,uStack_1b8);
              uStack_1f6 = (undefined4)
                           (CONCAT15(uStack_1b3,CONCAT14(uStack_1b4,CONCAT22(uStack_1b6,uStack_1f8))
                                    ) >> 0x10);
              uStack_1f2 = uStack_1b2;
              uStack_208 = CONCAT22(uStack_1c6,uStack_1c8);
              uStack_204 = CONCAT22(sStack_1c2,sStack_1c4);
              uStack_200 = uStack_1c0;
              uStack_1fe = (ushort)(CONCAT13(uStack_1be._1_1_,
                                             CONCAT12((undefined1)uStack_1be,uStack_1c0)) >> 0x10);
              sStack_1fc = sStack_1bc;
              uStack_1fa = (undefined2)
                           (CONCAT13(uStack_1b9,CONCAT12(uStack_1ba,sStack_1bc)) >> 0x10);
              sVar21 = sStack_1bc + (ushort)(sStack_1bc == 0);
              uStack_1c8 = 0;
              sVar25 = ((uStack_1c0 >> 3) - (ushort)((uStack_1c0 & _DAT_1430493a0) == 0)) + 1;
              sVar26 = ((uStack_1fe >> 3) - (ushort)((uStack_1fe & _UNK_1430493a2) == 0)) + 1;
              sVar25 = sVar25 + (ushort)(sVar25 == 0);
              sVar26 = sVar26 + (ushort)(sVar26 == 0);
              uStack_1be._0_1_ = uStack_1b8;
              uStack_1c0 = uStack_1fa;
              uStack_1be._1_1_ = 0x53;
              sStack_1bc = uStack_1b6;
              uStack_1ba = uStack_1b4;
              uStack_1b9 = uStack_1b3;
              uStack_1b8 = 0xbb;
              uStack_1b7 = 0x34;
              uStack_1b6 = 0x4305;
              uStack_1b4 = 1;
              uStack_1b3 = 0;
              uStack_1b2 = 0;
              uStack_1b0 = 9;
              uStack_1c6 = sVar25;
              sStack_1c4 = sVar26;
              sStack_1c2 = sVar21;
              uVar13 = pdb_140e2b4e0(param_2,&uStack_1c8);
              sStack_1c4 = (short)uVar13;
              sStack_1c2 = (short)((uint)uVar13 >> 0x10);
              uStack_1b7 = 0x53;
              uStack_1c8 = 0;
              uStack_1c6 = 0;
              uStack_1c0 = sVar25;
              sStack_1bc = sVar21;
              uStack_1ba = uVar6;
              uStack_1b9 = uVar7;
              uStack_1b8 = uVar8;
              uStack_1b6 = uVar9;
              uStack_1b4 = uVar10;
              uStack_1b3 = uVar11;
              if (*(char *)(param_2 + 0x24c) == '\x01') {
                uStack_1be = sVar26;
                pdb_140e19620(&uStack_1c8,param_2);
                sVar26 = uStack_1be;
              }
              uStack_1be._1_1_ = (undefined1)((ushort)sVar26 >> 8);
              uStack_1be._0_1_ = (undefined1)sVar26;
              uStack_1d8 = CONCAT26(uStack_1b2,
                                    CONCAT15(uStack_1b3,
                                             CONCAT14(uStack_1b4,
                                                      CONCAT22(uStack_1b6,
                                                               CONCAT11(uStack_1b7,uStack_1b8)))));
              uStack_1e8 = CONCAT22(uStack_1c6,uStack_1c8);
              uStack_1e4 = CONCAT22(sStack_1c2,sStack_1c4);
              uStack_1e0 = CONCAT13(uStack_1be._1_1_,CONCAT12((undefined1)uStack_1be,uStack_1c0));
              sStack_1dc = sStack_1bc;
              uStack_1da = CONCAT11(uStack_1b9,uStack_1ba);
              uStack_130 = 0;
              uStack_128 = 8;
              uStack_120 = 0;
              uStack_1be = sVar26;
              uVar15 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_14333140e,0x1d,
                                     &uStack_130);
              pdb_140e291c0(&uStack_e0,&UNK_14333140e,0x1d,uVar15,param_2);
              puStack_118 = &uStack_1e8;
              puStack_108 = auStack_f4;
              puStack_100 = &uStack_208;
              lStack_110 = param_4;
              pdb_1417a3250(&uStack_1c8,&uStack_e0,&puStack_118);
              uStack_dc = uStack_1ec;
              uStack_d4 = 1;
              uStack_e0 = 1;
              uStack_d8 = (uint)uVar19;
              pdb_140e28810(&uStack_1c8,&uStack_e0);
              uStack_1c8 = (undefined2)uStack_208;
              uStack_1c6 = (ushort)((uint)uStack_208 >> 0x10);
              sStack_1c4 = (short)uStack_204;
              sStack_1c2 = (short)((uint)uStack_204 >> 0x10);
              uStack_1c0 = uStack_200;
              uStack_1be._0_1_ = (undefined1)uStack_1fe;
              uStack_1be._1_1_ = (undefined1)(uStack_1fe >> 8);
              sStack_1bc = sStack_1fc;
              uStack_1ba = (undefined1)uStack_1fa;
              uStack_1b9 = (undefined1)((ushort)uStack_1fa >> 8);
              uStack_1b8 = (undefined1)uStack_1f8;
              uStack_1b7 = (undefined1)((ushort)uStack_1f8 >> 8);
              uStack_1b6 = (undefined2)uStack_1f6;
              uStack_1b4 = (undefined1)((uint)uStack_1f6 >> 0x10);
              uStack_1b3 = (undefined1)((uint)uStack_1f6 >> 0x18);
              uStack_1b2 = uStack_1f2;
              uStack_1b0 = CONCAT44(uStack_1e4,uStack_1e8);
              uStack_1a8 = CONCAT26(uStack_1da,CONCAT24(sStack_1dc,uStack_1e0));
              uStack_1a0 = uStack_1d8;
              pdb_141536a40(uStack_138,param_2);
              param_1[4] = uStack_1a8;
              param_1[5] = uStack_1a0;
              param_1[2] = CONCAT26(uStack_1b2,
                                    CONCAT15(uStack_1b3,
                                             CONCAT14(uStack_1b4,
                                                      CONCAT22(uStack_1b6,
                                                               CONCAT11(uStack_1b7,uStack_1b8)))));
              param_1[3] = uStack_1b0;
              *param_1 = CONCAT26(sStack_1c2,CONCAT24(sStack_1c4,CONCAT22(uStack_1c6,uStack_1c8)));
              param_1[1] = CONCAT17(uStack_1b9,
                                    CONCAT16(uStack_1ba,
                                             CONCAT24(sStack_1bc,
                                                      CONCAT13(uStack_1be._1_1_,
                                                               CONCAT12((undefined1)uStack_1be,
                                                                        uStack_1c0)))));
              return param_1;
            }
          }
          goto LAB_140b050f2;
        }
        uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
      }
      auVar22[0] = -(auVar2[0] == -1);
      auVar22[1] = -(auVar2[1] == -1);
      auVar22[2] = -(auVar2[2] == -1);
      auVar22[3] = -(auVar2[3] == -1);
      auVar22[4] = -(auVar2[4] == -1);
      auVar22[5] = -(auVar2[5] == -1);
      auVar22[6] = -(auVar2[6] == -1);
      auVar22[7] = -(auVar2[7] == -1);
      auVar22[8] = -(auVar2[8] == -1);
      auVar22[9] = -(auVar2[9] == -1);
      auVar22[10] = -(auVar2[10] == -1);
      auVar22[0xb] = -(auVar2[0xb] == -1);
      auVar22[0xc] = -(auVar2[0xc] == -1);
      auVar22[0xd] = -(auVar2[0xd] == -1);
      auVar22[0xe] = -(auVar2[0xe] == -1);
      auVar22[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar16 = uVar16 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
  }
LAB_140b050f2:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430534a0);
}

