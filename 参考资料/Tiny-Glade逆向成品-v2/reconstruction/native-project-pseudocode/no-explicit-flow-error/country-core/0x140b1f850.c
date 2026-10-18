// VA 0x140b1f850, PDB extent 1997 bytes
// country_core::systems::render_loop::compute_passes::bin_lights::bin_lights
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/bin_lights.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::bin_lights::bin_lights
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/bin_lights.rs
   Extent: 1997 */

undefined4 * pdb_140b1f850(undefined4 *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ushort uVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 *puStack_210;
  undefined4 *puStack_208;
  undefined4 *puStack_200;
  int iStack_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_1ec;
  undefined2 uStack_1eb;
  undefined1 uStack_1e9;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 uStack_1d8;
  undefined2 uStack_1d7;
  undefined1 uStack_1d5;
  undefined8 uStack_1d4;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined4 uStack_1ac;
  undefined1 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_128;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_7c [60];
  
  if (*(longlong *)(param_3 + 0x88) != 0) {
    lVar11 = *(longlong *)(param_3 + 0x70);
    uVar14 = 0x1d6a82b468dfb8a2;
    lVar15 = 0;
    while( true ) {
      uVar14 = uVar14 & *(ulonglong *)(param_3 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar11 + uVar14);
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
      uVar17 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar16 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar18 = uVar4 + uVar14 & *(ulonglong *)(param_3 + 0x78);
        pcVar1 = (char *)(lVar11 + -0x18 + uVar18 * -0x18);
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
          uVar14 = *(ulonglong *)(lVar11 + uVar18 * -0x18 + -8);
          if ((uVar14 < *(ulonglong *)(param_3 + 0x210)) &&
             (uVar14 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar14 * 8), uVar14 != 0)) {
            lVar11 = ~uVar14 * 0x40;
            if (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + lVar11) != 0) {
              uVar13 = *(undefined8 *)(*(longlong *)(param_3 + 0x1d8) + lVar11 + 0x10);
              puVar12 = (undefined8 *)pdb_140bf45b0(uVar13,&UNK_14331c960);
              if ((puVar12 != (undefined8 *)0x0) &&
                 (lVar11 = (**(code **)(puVar12[1] + 0x18))(*puVar12), lVar11 != 0)) {
                uVar3 = *(undefined8 *)(lVar11 + 8);
                uStack_128 = uVar13;
                pdb_141526380(auStack_7c,uVar13,param_2);
                uVar20 = (undefined1)uVar13;
                iVar21 = (int)uVar3;
                if (iVar21 == 0) {
                  uVar7 = pdb_140e25e40(4);
                  uStack_1b0 = 1;
                  puStack_1a0 = &UNK_143055b48;
                  uStack_198 = 0x22;
                  uVar19 = SUB81(&uStack_1b0,0);
                  uStack_1ac = uVar7;
                  uStack_1a8 = uVar20;
                  uVar8 = pdb_140e2b4e0(param_2);
                  uVar9 = pdb_140e25e40(4);
                  uStack_1b0 = 1;
                  puStack_1a0 = &UNK_143055b6a;
                  uStack_198 = 0x19;
                  uStack_1ac = uVar9;
                  uStack_1a8 = uVar19;
                  uVar10 = pdb_140e2b4e0(param_2,&uStack_1b0);
                  uVar25 = (undefined4)_DAT_143055680;
                  uVar26 = (undefined4)((ulonglong)_DAT_143055680 >> 0x20);
                  uVar6 = uVar25;
                  uVar27 = uVar26;
                }
                else {
                  uVar6 = pdb_140e25e40(0x10000);
                  uStack_1b0 = 1;
                  puStack_1a0 = &UNK_143055b83;
                  uStack_198 = 0x16;
                  uStack_1ac = uVar6;
                  uStack_1a8 = uVar20;
                  uStack_1e0 = pdb_140e2b4e0(param_2,&uStack_1b0);
                  uStack_1e8 = 0xffffffff00000000;
                  uStack_1f0 = uVar6;
                  uStack_1ec = uVar20;
                  pdb_140e29980(param_2);
                  uStack_1c8 = 0;
                  uStack_1c0 = 8;
                  uStack_1b8 = 0;
                  uVar13 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143331a1b,0x35,
                                         &uStack_1c8);
                  pdb_140e291c0(&uStack_108,&UNK_143331a1b,0x35,uVar13,param_2);
                  puStack_200 = (undefined4 *)CONCAT44(puStack_200._4_4_,iVar21);
                  puStack_210 = auStack_7c;
                  puStack_208 = &uStack_1f0;
                  pdb_1417963d0(&uStack_1b0,&uStack_108,&puStack_210);
                  uStack_100 = 0x100000001;
                  uStack_108 = CONCAT44(iVar21,1);
                  uVar20 = SUB81(&uStack_108,0);
                  pdb_140e28810(&uStack_1b0);
                  uVar6 = pdb_140e25e40(0x44);
                  uStack_1b0 = 1;
                  puStack_1a0 = &UNK_143055b99;
                  uStack_198 = 0x1b;
                  uStack_1ac = uVar6;
                  uStack_1a8 = uVar20;
                  uStack_10c = pdb_140e2b4e0(param_2,&uStack_1b0);
                  uStack_114 = 0xffffffff00000000;
                  puStack_210 = (undefined1 *)0x0;
                  puStack_208 = (undefined4 *)0x8;
                  puStack_200 = (undefined4 *)0x0;
                  uStack_11c = uVar6;
                  uStack_118 = uVar20;
                  uVar13 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_14333180a,0x2f,
                                         &puStack_210);
                  pdb_140e291c0(&uStack_108,&UNK_14333180a,0x2f,uVar13,param_2);
                  pdb_1417859f0(&uStack_1b0,&uStack_108,&uStack_1f0,&uStack_11c);
                  uStack_108 = _DAT_143028dd0;
                  uStack_100 = _UNK_143028dd8;
                  pdb_140e28810(&uStack_1b0,&uStack_108);
                  puStack_210 = (undefined1 *)0x0;
                  puStack_208 = (undefined4 *)0x8;
                  puStack_200 = (undefined4 *)0x0;
                  uVar13 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143330ef9,0x38,
                                         &puStack_210);
                  pdb_140e291c0(&uStack_108,&UNK_143330ef9,0x38,uVar13,param_2);
                  pdb_14178bb80(&uStack_1b0,&uStack_108,&uStack_11c,0x10);
                  uStack_108 = _DAT_143055660;
                  uStack_100 = _UNK_143055668;
                  pdb_140e28810(&uStack_1b0,&uStack_108);
                  puStack_210 = (undefined1 *)0x0;
                  puStack_208 = (undefined4 *)0x8;
                  puStack_200 = (undefined4 *)0x0;
                  uVar13 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_1433316fd,0x31,
                                         &puStack_210);
                  pdb_140e291c0(&uStack_108,&UNK_1433316fd,0x31,uVar13,param_2);
                  pdb_14178a560(&uStack_1b0,&uStack_108,&uStack_1f0,&uStack_11c);
                  uStack_108 = _DAT_143055670;
                  uStack_100 = _UNK_143055678;
                  uVar20 = SUB81(&uStack_108,0);
                  pdb_140e28810(&uStack_1b0);
                  uVar6 = pdb_140e25e40(0x100000);
                  uStack_1b0 = 1;
                  puStack_1a0 = &UNK_143055bb4;
                  uStack_198 = 0xd;
                  uStack_1ac = uVar6;
                  uStack_1a8 = uVar20;
                  uStack_1cc = pdb_140e2b4e0(param_2,&uStack_1b0);
                  uStack_1d4 = 0xffffffff00000000;
                  uStack_1c8 = 0;
                  uStack_1c0 = 8;
                  uStack_1b8 = 0;
                  uStack_1dc = uVar6;
                  uStack_1d8 = uVar20;
                  uVar13 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143330d4a,0x35,
                                         &uStack_1c8);
                  pdb_140e291c0(&uStack_108,&UNK_143330d4a,0x35,uVar13,param_2);
                  puStack_210 = auStack_7c;
                  puStack_200 = &uStack_1dc;
                  puStack_208 = &uStack_1f0;
                  iStack_1f8 = iVar21;
                  pdb_1417a2c60(&uStack_1b0,&uStack_108,&puStack_210);
                  uStack_100 = 0x100000001;
                  uStack_108 = CONCAT44(iVar21,1);
                  pdb_140e28810(&uStack_1b0,&uStack_108);
                  uStack_1b0 = uStack_1eb;
                  uStack_1ae = uStack_1e9;
                  uVar25 = (undefined4)uStack_1e8;
                  uVar26 = (undefined4)((ulonglong)uStack_1e8 >> 0x20);
                  uStack_108._0_3_ = CONCAT12(uStack_1d5,uStack_1d7);
                  uVar6 = (int)uStack_1d4;
                  uVar27 = (int)((ulonglong)uStack_1d4 >> 0x20);
                  uVar7 = uStack_1f0;
                  uVar8 = uStack_1e0;
                  uVar9 = uStack_1dc;
                  uVar10 = uStack_1cc;
                  uVar20 = uStack_1ec;
                  uVar19 = uStack_1d8;
                }
                pdb_141535000(uStack_128,param_2);
                *param_1 = uVar7;
                *(undefined1 *)(param_1 + 1) = uVar20;
                *(undefined2 *)((longlong)param_1 + 5) = uStack_1b0;
                *(undefined1 *)((longlong)param_1 + 7) = uStack_1ae;
                *(ulonglong *)(param_1 + 2) = CONCAT44(uVar26,uVar25);
                param_1[4] = uVar8;
                param_1[5] = uVar9;
                *(undefined1 *)(param_1 + 6) = uVar19;
                *(undefined2 *)((longlong)param_1 + 0x19) = (undefined2)uStack_108;
                *(undefined1 *)((longlong)param_1 + 0x1b) = uStack_108._2_1_;
                *(ulonglong *)(param_1 + 7) = CONCAT44(uVar27,uVar6);
                param_1[9] = uVar10;
                return param_1;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143055b30);
            }
          }
          goto LAB_140b1fecd;
        }
        uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
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
      uVar14 = uVar14 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
LAB_140b1fecd:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143055b18);
}

