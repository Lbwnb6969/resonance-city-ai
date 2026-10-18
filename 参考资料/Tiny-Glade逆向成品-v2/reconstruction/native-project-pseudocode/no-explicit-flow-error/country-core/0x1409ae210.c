// VA 0x1409ae210, PDB extent 1455 bytes
// country_core::systems::render_loop::compute_passes::compute_garden::garden_spawn_vegetation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_garden.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::compute_garden::garden_spawn_vegetation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_garden.rs
   Extent: 1455 */

void pdb_1409ae210(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 **ppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 auStack_12c [20];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 *puStack_104;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  
  lVar6 = *(longlong *)(param_1 + 0x130);
  if (lVar6 == *(longlong *)(param_1 + 0x120)) {
    pdb_142d8afd0(param_1 + 0x120);
  }
  lVar9 = *(longlong *)(param_1 + 0x128);
  *(undefined **)(lVar9 + lVar6 * 0x10) = &UNK_143029610;
  *(undefined8 *)(lVar9 + 8 + lVar6 * 0x10) = 0x17;
  *(longlong *)(param_1 + 0x130) = lVar6 + 1;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x70);
    uVar8 = 0x1d6a82b468dfb8a2;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(param_2 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar6 + uVar8);
      auVar14[0] = -(auVar2[0] == DAT_142e34ec0);
      auVar14[1] = -(auVar2[1] == DAT_142e34ec0._1_1_);
      auVar14[2] = -(auVar2[2] == DAT_142e34ec0._2_1_);
      auVar14[3] = -(auVar2[3] == DAT_142e34ec0._3_1_);
      auVar14[4] = -(auVar2[4] == DAT_142e34ec0._4_1_);
      auVar14[5] = -(auVar2[5] == DAT_142e34ec0._5_1_);
      auVar14[6] = -(auVar2[6] == DAT_142e34ec0._6_1_);
      auVar14[7] = -(auVar2[7] == DAT_142e34ec0._7_1_);
      auVar14[8] = -(auVar2[8] == DAT_142e34ec0._8_1_);
      auVar14[9] = -(auVar2[9] == DAT_142e34ec0._9_1_);
      auVar14[10] = -(auVar2[10] == DAT_142e34ec0._10_1_);
      auVar14[0xb] = -(auVar2[0xb] == DAT_142e34ec0._11_1_);
      auVar14[0xc] = -(auVar2[0xc] == DAT_142e34ec0._12_1_);
      auVar14[0xd] = -(auVar2[0xd] == DAT_142e34ec0._13_1_);
      auVar14[0xe] = -(auVar2[0xe] == DAT_142e34ec0._14_1_);
      auVar14[0xf] = -(auVar2[0xf] == DAT_142e34ec0._15_1_);
      uVar11 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar6 + -0x18 + uVar12 * -0x18);
        auVar15[0] = -(*pcVar1 == DAT_142e60e60);
        auVar15[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar15[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar15[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar15[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar15[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar15[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar15[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar15[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar15[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar15[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar15[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar15[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar15[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar15[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar15[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar6 + uVar12 * -0x18 + -8);
          if ((uVar8 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar8 * 8), uVar8 != 0)) {
            lVar6 = ~uVar8 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar6) != 0) {
              uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar6 + 0x10);
              pdb_14152dbc0(auStack_12c,uVar3,param_1);
              pdb_14152a1f0(&uStack_1f8,uVar3,param_1);
              pdb_14152ad80(&puStack_1e0,uVar3,param_1);
              pdb_14152ab30(&uStack_1b8,uVar3,param_1);
              pdb_14152b6c0(&uStack_c8,uVar3,param_1);
              uStack_108 = (undefined4)uStack_1e8;
              uStack_118 = uStack_1f8;
              uStack_110 = uStack_1f0;
              puStack_104 = puStack_1e0;
              uStack_fc = ppuStack_1d8;
              uStack_f4 = puStack_1d0._0_4_;
              uStack_e0 = uStack_1a8;
              uStack_dc = uStack_c8;
              uStack_d4 = uStack_c0;
              uStack_cc = uStack_b8;
              uStack_1f8 = 0;
              uStack_1f0 = 8;
              uStack_1e8 = 0;
              uVar7 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331ebf,0x2c,&uStack_1f8
                                   );
              pdb_140e291c0(&uStack_1b8,&UNK_143331ebf,0x2c,uVar7,param_1);
              uStack_1c8 = 0x5a0000005a;
              uStack_1c0 = 9;
              puStack_1e0 = &uStack_dc;
              ppuStack_1d8 = (undefined8 **)auStack_12c;
              puStack_1d0 = &uStack_118;
              pdb_141786fc0(&uStack_c8,&uStack_1b8,&puStack_1e0);
              uStack_1b4 = 0x5a;
              uStack_1b0 = 0x5a;
              uStack_1ac = 1;
              uStack_1b8 = 1;
              pdb_140e28810(&uStack_c8,&uStack_1b8);
              uStack_1f8 = 0;
              uStack_1f0 = 8;
              uStack_1e8 = 0;
              uVar7 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331f3c,0x2d,&uStack_1f8
                                   );
              pdb_140e291c0(&uStack_1b8,&UNK_143331f3c,0x2d,uVar7,param_1);
              puStack_1d0 = (undefined8 *)0x9600000096;
              uStack_1c8._0_4_ = 10;
              puStack_1e0 = &uStack_dc;
              ppuStack_1d8 = (undefined8 **)&uStack_118;
              pdb_1417869d0(&uStack_c8,&uStack_1b8,&puStack_1e0);
              uStack_1b4 = 0x96;
              uStack_1b0 = 0x96;
              uStack_1ac = 1;
              uStack_1b8 = 1;
              pdb_140e28810(&uStack_c8,&uStack_1b8);
              uStack_1f8 = 0;
              uStack_1f0 = 8;
              uStack_1e8 = 0;
              uVar7 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331e1b,0x29,&uStack_1f8
                                   );
              pdb_140e291c0(&uStack_1b8,&UNK_143331e1b,0x29,uVar7,param_1);
              puStack_1d0 = (undefined8 *)0xb4000000b4;
              uStack_1c8._0_4_ = 0xd;
              puStack_1e0 = &uStack_dc;
              ppuStack_1d8 = &puStack_104;
              pdb_1417957f0(&uStack_c8,&uStack_1b8,&puStack_1e0);
              uStack_1b4 = 0xb4;
              uStack_1b0 = 0xb4;
              uStack_1ac = 1;
              uStack_1b8 = 1;
              pdb_140e28810(&uStack_c8,&uStack_1b8);
              uStack_1f8 = 0;
              uStack_1f0 = 8;
              uStack_1e8 = 0;
              uVar7 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331473,0x33,&uStack_1f8
                                   );
              pdb_140e291c0(&uStack_1b8,&UNK_143331473,0x33,uVar7,param_1);
              ppuStack_1d8 = (undefined8 **)auStack_f0;
              puStack_1d0 = (undefined8 *)0x19000000190;
              uStack_1c8 = CONCAT44(uStack_1c8._4_4_,0xf);
              puStack_1e0 = &uStack_dc;
              pdb_1417869d0(&uStack_c8,&uStack_1b8,&puStack_1e0);
              uStack_1b4 = 400;
              uStack_1b0 = 400;
              uStack_1ac = 1;
              uStack_1b8 = 1;
              pdb_140e28810(&uStack_c8,&uStack_1b8);
              pdb_14153a400(uVar3,param_1);
              pdb_141538600(uVar3,param_1);
              pdb_141536f80(uVar3,param_1);
              pdb_1415384c0(uVar3,param_1);
              pdb_141539c80(uVar3,param_1);
              lVar6 = *(longlong *)(param_1 + 0x130);
              if (lVar6 == *(longlong *)(param_1 + 0x120)) {
                pdb_142d8afd0(param_1 + 0x120);
              }
              *(undefined8 *)(*(longlong *)(param_1 + 0x128) + lVar6 * 0x10) = 0;
              *(longlong *)(param_1 + 0x130) = lVar6 + 1;
              return;
            }
          }
          goto LAB_1409ae7b2;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar13[0] = -(auVar2[0] == -1);
      auVar13[1] = -(auVar2[1] == -1);
      auVar13[2] = -(auVar2[2] == -1);
      auVar13[3] = -(auVar2[3] == -1);
      auVar13[4] = -(auVar2[4] == -1);
      auVar13[5] = -(auVar2[5] == -1);
      auVar13[6] = -(auVar2[6] == -1);
      auVar13[7] = -(auVar2[7] == -1);
      auVar13[8] = -(auVar2[8] == -1);
      auVar13[9] = -(auVar2[9] == -1);
      auVar13[10] = -(auVar2[10] == -1);
      auVar13[0xb] = -(auVar2[0xb] == -1);
      auVar13[0xc] = -(auVar2[0xc] == -1);
      auVar13[0xd] = -(auVar2[0xd] == -1);
      auVar13[0xe] = -(auVar2[0xe] == -1);
      auVar13[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1409ae7b2:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143029678);
}

