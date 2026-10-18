// VA 0x140b31710, PDB extent 1378 bytes
// country_core::systems::render_loop::compute_passes::compute_water::water_spawn_vegetation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_water.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::compute_water::water_spawn_vegetation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_water.rs
   Extent: 1378 */

void pdb_140b31710(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined1 auStack_d8 [20];
  undefined1 auStack_c4 [16];
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (DAT_143cb2d0c != '\0') {
    return;
  }
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar10 = 0x7057b4358e925fdb;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar7 + uVar10);
      auVar17[0] = -(*pcVar1 == DAT_142e33d90);
      auVar17[1] = -(pcVar1[1] == DAT_142e33d90._1_1_);
      auVar17[2] = -(pcVar1[2] == DAT_142e33d90._2_1_);
      auVar17[3] = -(pcVar1[3] == DAT_142e33d90._3_1_);
      auVar17[4] = -(pcVar1[4] == DAT_142e33d90._4_1_);
      auVar17[5] = -(pcVar1[5] == DAT_142e33d90._5_1_);
      auVar17[6] = -(pcVar1[6] == DAT_142e33d90._6_1_);
      auVar17[7] = -(pcVar1[7] == DAT_142e33d90._7_1_);
      auVar17[8] = -(pcVar1[8] == DAT_142e33d90._8_1_);
      auVar17[9] = -(pcVar1[9] == DAT_142e33d90._9_1_);
      auVar17[10] = -(pcVar1[10] == DAT_142e33d90._10_1_);
      auVar17[0xb] = -(pcVar1[0xb] == DAT_142e33d90._11_1_);
      auVar17[0xc] = -(pcVar1[0xc] == DAT_142e33d90._12_1_);
      auVar17[0xd] = -(pcVar1[0xd] == DAT_142e33d90._13_1_);
      auVar17[0xe] = -(pcVar1[0xe] == DAT_142e33d90._14_1_);
      auVar17[0xf] = -(pcVar1[0xf] == DAT_142e33d90._15_1_);
      uVar13 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar7 + -0x18 + uVar14 * -0x18);
        auVar18[0] = -(*pcVar2 == DAT_142e34350);
        auVar18[1] = -(pcVar2[1] == DAT_142e34350._1_1_);
        auVar18[2] = -(pcVar2[2] == DAT_142e34350._2_1_);
        auVar18[3] = -(pcVar2[3] == DAT_142e34350._3_1_);
        auVar18[4] = -(pcVar2[4] == DAT_142e34350._4_1_);
        auVar18[5] = -(pcVar2[5] == DAT_142e34350._5_1_);
        auVar18[6] = -(pcVar2[6] == DAT_142e34350._6_1_);
        auVar18[7] = -(pcVar2[7] == DAT_142e34350._7_1_);
        auVar18[8] = -(pcVar2[8] == DAT_142e34350._8_1_);
        auVar18[9] = -(pcVar2[9] == DAT_142e34350._9_1_);
        auVar18[10] = -(pcVar2[10] == DAT_142e34350._10_1_);
        auVar18[0xb] = -(pcVar2[0xb] == DAT_142e34350._11_1_);
        auVar18[0xc] = -(pcVar2[0xc] == DAT_142e34350._12_1_);
        auVar18[0xd] = -(pcVar2[0xd] == DAT_142e34350._13_1_);
        auVar18[0xe] = -(pcVar2[0xe] == DAT_142e34350._14_1_);
        auVar18[0xf] = -(pcVar2[0xf] == DAT_142e34350._15_1_);
        if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar7 + uVar14 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar10) ||
             (uVar10 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar10 * 8), uVar10 == 0))
          goto LAB_140b31c17;
          lVar7 = ~uVar10 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar7) == 0) goto LAB_140b31c17;
          uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar7 + 0x10);
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_140b31c23;
          lVar7 = *(longlong *)(param_2 + 0x70);
          uVar10 = 0x1d6a82b468dfb8a2;
          lVar11 = 0;
          goto LAB_140b31870;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar15[0] = -(*pcVar1 == -1);
      auVar15[1] = -(pcVar1[1] == -1);
      auVar15[2] = -(pcVar1[2] == -1);
      auVar15[3] = -(pcVar1[3] == -1);
      auVar15[4] = -(pcVar1[4] == -1);
      auVar15[5] = -(pcVar1[5] == -1);
      auVar15[6] = -(pcVar1[6] == -1);
      auVar15[7] = -(pcVar1[7] == -1);
      auVar15[8] = -(pcVar1[8] == -1);
      auVar15[9] = -(pcVar1[9] == -1);
      auVar15[10] = -(pcVar1[10] == -1);
      auVar15[0xb] = -(pcVar1[0xb] == -1);
      auVar15[0xc] = -(pcVar1[0xc] == -1);
      auVar15[0xd] = -(pcVar1[0xd] == -1);
      auVar15[0xe] = -(pcVar1[0xe] == -1);
      auVar15[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_140b31c17:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143057a70);
LAB_140b31870:
  uVar10 = uVar10 & *(ulonglong *)(param_2 + 0x78);
  auVar17 = *(undefined1 (*) [16])(lVar7 + uVar10);
  auVar19[0] = -(auVar17[0] == DAT_142e34ec0);
  auVar19[1] = -(auVar17[1] == DAT_142e34ec0._1_1_);
  auVar19[2] = -(auVar17[2] == DAT_142e34ec0._2_1_);
  auVar19[3] = -(auVar17[3] == DAT_142e34ec0._3_1_);
  auVar19[4] = -(auVar17[4] == DAT_142e34ec0._4_1_);
  auVar19[5] = -(auVar17[5] == DAT_142e34ec0._5_1_);
  auVar19[6] = -(auVar17[6] == DAT_142e34ec0._6_1_);
  auVar19[7] = -(auVar17[7] == DAT_142e34ec0._7_1_);
  auVar19[8] = -(auVar17[8] == DAT_142e34ec0._8_1_);
  auVar19[9] = -(auVar17[9] == DAT_142e34ec0._9_1_);
  auVar19[10] = -(auVar17[10] == DAT_142e34ec0._10_1_);
  auVar19[0xb] = -(auVar17[0xb] == DAT_142e34ec0._11_1_);
  auVar19[0xc] = -(auVar17[0xc] == DAT_142e34ec0._12_1_);
  auVar19[0xd] = -(auVar17[0xd] == DAT_142e34ec0._13_1_);
  auVar19[0xe] = -(auVar17[0xe] == DAT_142e34ec0._14_1_);
  auVar19[0xf] = -(auVar17[0xf] == DAT_142e34ec0._15_1_);
  uVar13 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar14 = uVar4 + uVar10 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar7 + -0x18 + uVar14 * -0x18);
    auVar20[0] = -(*pcVar1 == DAT_142e60e60);
    auVar20[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
    auVar20[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
    auVar20[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
    auVar20[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
    auVar20[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
    auVar20[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
    auVar20[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
    auVar20[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
    auVar20[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
    auVar20[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
    auVar20[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
    auVar20[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
    auVar20[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
    auVar20[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
    auVar20[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar10 = *(ulonglong *)(lVar7 + uVar14 * -0x18 + -8);
      if ((uVar10 < *(ulonglong *)(param_2 + 0x210)) &&
         (uVar10 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar10 * 8), uVar10 != 0)) {
        lVar7 = ~uVar10 * 0x40;
        if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar7) != 0) {
          uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar7 + 0x10);
          pdb_14152bb60(auStack_d8,uVar3,param_1);
          pdb_14152e060(&uStack_68,uVar3,param_1);
          pdb_14152b6c0(&uStack_1e8,uVar3,param_1);
          uVar9 = uVar3;
          pdb_141528d20(&uStack_160,uVar3,param_1);
          uStack_b4 = puStack_58._0_4_;
          uStack_b0 = uStack_1e8;
          uStack_a8 = uStack_1e0;
          uStack_a0 = uStack_1d8;
          uStack_9c = uStack_160;
          uStack_94 = uStack_158;
          uStack_8c = uStack_150;
          uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),0x18);
          plStack_70 = (longlong *)pdb_140a2e6e0(uVar8,uVar9,&UNK_143057aa0);
          uStack_88 = 0;
          uStack_80 = 8;
          uStack_78 = 0;
          uVar8 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331b1c,0x26,&uStack_88);
          pdb_140e291c0(&uStack_160,&UNK_143331b1c,0x26,uVar8,param_1);
          puStack_50 = auStack_c4;
          uStack_60._0_4_ = (undefined4)uVar9;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          uStack_48 = 0xe1000000e1;
          uStack_40 = 7;
          puStack_58 = auStack_d8;
          uStack_68 = &uStack_b0;
          pdb_14179cbf0(&uStack_1e8,&uStack_160,&uStack_68);
          pub_142e32760(&uStack_160,&uStack_1e8,0x88);
          uStack_68._4_4_ = 0xe1;
          uStack_60._0_4_ = 0xe1;
          uStack_60._4_4_ = 1;
          uStack_68._0_4_ = 1;
          pdb_140e28810(&uStack_160,&uStack_68);
          uStack_88 = 0;
          uStack_80 = 8;
          uStack_78 = 0;
          uVar8 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333142b,0x23,&uStack_88);
          pdb_140e291c0(&uStack_160,&UNK_14333142b,0x23,uVar8,param_1);
          uStack_60 = &uStack_9c;
          puStack_58 = (undefined1 *)0x9600000096;
          puStack_50 = (undefined1 *)CONCAT44(puStack_50._4_4_,8);
          uStack_68 = &uStack_b0;
          pdb_1417869d0(&uStack_1e8,&uStack_160,&uStack_68);
          pub_142e32760(&uStack_160,&uStack_1e8,0x88);
          uStack_68._4_4_ = 0x96;
          uStack_60._0_4_ = 0x96;
          uStack_60._4_4_ = 1;
          uStack_68._0_4_ = 1;
          pdb_140e28810(&uStack_160,&uStack_68);
          plVar6 = plStack_70;
          pdb_140e9a350(plStack_70);
          pdb_140e9a350();
          LOCK();
          lVar7 = *plVar6;
          if (lVar7 == 8) {
            *plVar6 = 0;
          }
          UNLOCK();
          if (lVar7 != 8) {
            pdb_142dbca40(plVar6,0);
          }
          pdb_141538740(uVar3,param_1);
          pdb_141537c00(uVar3,param_1);
          pdb_141539c80(uVar3,param_1);
          pdb_141539dc0(uVar3,param_1);
          return;
        }
      }
      goto LAB_140b31c23;
    }
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
  }
  auVar16[0] = -(auVar17[0] == -1);
  auVar16[1] = -(auVar17[1] == -1);
  auVar16[2] = -(auVar17[2] == -1);
  auVar16[3] = -(auVar17[3] == -1);
  auVar16[4] = -(auVar17[4] == -1);
  auVar16[5] = -(auVar17[5] == -1);
  auVar16[6] = -(auVar17[6] == -1);
  auVar16[7] = -(auVar17[7] == -1);
  auVar16[8] = -(auVar17[8] == -1);
  auVar16[9] = -(auVar17[9] == -1);
  auVar16[10] = -(auVar17[10] == -1);
  auVar16[0xb] = -(auVar17[0xb] == -1);
  auVar16[0xc] = -(auVar17[0xc] == -1);
  auVar16[0xd] = -(auVar17[0xd] == -1);
  auVar16[0xe] = -(auVar17[0xe] == -1);
  auVar16[0xf] = -(auVar17[0xf] == -1);
  if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x37,0) & 1) != 0) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') {
LAB_140b31c23:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143057a88);
  }
  uVar10 = uVar10 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_140b31870;
}

