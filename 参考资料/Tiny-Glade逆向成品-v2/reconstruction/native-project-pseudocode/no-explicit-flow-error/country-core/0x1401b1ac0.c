// VA 0x1401b1ac0, PDB extent 2614 bytes
// country_core::systems::wall::eraser::bulldoze_params::_::impl$0::get_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::eraser::bulldoze_params::_::impl$0::get_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
   Extent: 2614 */

void pdb_1401b1ac0(undefined8 *param_1,ulonglong *param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 uStack_149;
  undefined4 *puStack_148;
  code *pcStack_140;
  undefined1 *puStack_138;
  code *pcStack_130;
  undefined4 *puStack_128;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong *puStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  if ((*param_2 < *(ulonglong *)(param_4 + 0x210)) &&
     (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + *param_2 * 8), uVar2 != 0)) {
    lVar9 = ~uVar2 * 0x40;
    if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar9) != 0) {
      lVar9 = *(longlong *)(param_4 + 0x1d8) + lVar9;
      uVar3 = *(undefined8 *)(lVar9 + 0x10);
      if ((param_2[1] < *(ulonglong *)(param_4 + 0x210)) &&
         (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[1] * 8), uVar2 != 0)) {
        lVar10 = ~uVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar10) != 0) {
          uVar1 = *param_3;
          lVar10 = *(longlong *)(param_4 + 0x1d8) + lVar10;
          uVar4 = *(undefined8 *)(lVar10 + 0x10);
          uVar2 = *(ulonglong *)(param_4 + 0x210);
          if (param_2[0x26] < uVar2) {
            lVar11 = *(longlong *)(param_4 + 0x208);
            uVar5 = *(ulonglong *)(lVar11 + param_2[0x26] * 8);
            if (uVar5 != 0) {
              lVar13 = *(longlong *)(param_4 + 0x1d8);
              lVar15 = ~uVar5 * 0x40;
              if ((((*(longlong *)(lVar13 + 0x20 + lVar15) != 0) && (param_2[0x27] < uVar2)) &&
                  (uVar5 = *(ulonglong *)(lVar11 + param_2[0x27] * 8), uVar5 != 0)) &&
                 (lVar17 = ~uVar5 * 0x40, *(longlong *)(lVar13 + 0x20 + lVar17) != 0)) {
                if (((param_2[0x28] < uVar2) &&
                    (uVar2 = *(ulonglong *)(lVar11 + param_2[0x28] * 8), uVar2 != 0)) &&
                   (lVar11 = ~uVar2 * 0x40, *(longlong *)(lVar13 + 0x20 + lVar11) != 0)) {
                  lStack_48 = lVar15 + lVar13;
                  uStack_70 = *(undefined8 *)(lStack_48 + 0x10);
                  lStack_50 = lVar17 + lVar13;
                  uStack_68 = *(undefined8 *)(lStack_50 + 0x10);
                  lStack_58 = lVar11 + lVar13;
                  uStack_60 = *(undefined8 *)(lStack_58 + 0x10);
                  puStack_128 = param_3;
                  if ((param_2[0x29] < *(ulonglong *)(param_4 + 0x210)) &&
                     (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[0x29] * 8),
                     uVar2 != 0)) {
                    lVar11 = ~uVar2 * 0x40;
                    if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar11) != 0) {
                      puStack_80 = param_2 + 2;
                      lStack_78 = *(longlong *)(param_4 + 0x1d8) + lVar11;
                      uStack_88 = *(undefined8 *)(lStack_78 + 0x10);
                      pdb_14061fc70(puStack_80,param_4);
                      uVar2 = *(ulonglong *)(param_4 + 0x210);
                      param_3 = puStack_128;
                      if (param_2[0x2a] < uVar2) {
                        lVar11 = *(longlong *)(param_4 + 0x208);
                        uVar5 = *(ulonglong *)(lVar11 + param_2[0x2a] * 8);
                        if (uVar5 != 0) {
                          lVar13 = *(longlong *)(param_4 + 0x1d8);
                          lVar15 = ~uVar5 * 0x40;
                          if ((((*(longlong *)(lVar13 + 0x20 + lVar15) != 0) &&
                               (param_2[0x2b] < uVar2)) &&
                              (uVar5 = *(ulonglong *)(lVar11 + param_2[0x2b] * 8), uVar5 != 0)) &&
                             (lVar17 = ~uVar5 * 0x40, *(longlong *)(lVar13 + 0x20 + lVar17) != 0)) {
                            if (((param_2[0x2c] < uVar2) &&
                                (uVar2 = *(ulonglong *)(lVar11 + param_2[0x2c] * 8), uVar2 != 0)) &&
                               (lVar11 = ~uVar2 * 0x40, *(longlong *)(lVar13 + 0x20 + lVar11) != 0))
                            {
                              lVar15 = lVar15 + lVar13;
                              uStack_98 = *(undefined8 *)(lVar15 + 0x10);
                              lVar17 = lVar17 + lVar13;
                              uVar6 = *(undefined8 *)(lVar17 + 0x10);
                              lVar11 = lVar11 + lVar13;
                              uVar7 = *(undefined8 *)(lVar11 + 0x10);
                              uStack_11c = uVar1;
                              uStack_90 = uVar4;
                              if ((param_2[0x2d] < *(ulonglong *)(param_4 + 0x210)) &&
                                 (uVar2 = *(ulonglong *)
                                           (*(longlong *)(param_4 + 0x208) + param_2[0x2d] * 8),
                                 uVar2 != 0)) {
                                lVar13 = ~uVar2 * 0x40;
                                if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar13) !=
                                    0) {
                                  lStack_a8 = *(longlong *)(param_4 + 0x1d8) + lVar13;
                                  uStack_b8 = *(undefined8 *)(lStack_a8 + 0x10);
                                  uVar2 = *(ulonglong *)(param_4 + 0x210);
                                  uStack_b0 = uVar6;
                                  uStack_a0 = uVar7;
                                  if (param_2[0x2e] < uVar2) {
                                    lVar13 = *(longlong *)(param_4 + 0x208);
                                    uVar5 = *(ulonglong *)(lVar13 + param_2[0x2e] * 8);
                                    if (uVar5 != 0) {
                                      lVar21 = *(longlong *)(param_4 + 0x1d8);
                                      lVar14 = ~uVar5 * 0x40;
                                      if (((((*(longlong *)(lVar21 + 0x20 + lVar14) != 0) &&
                                            (param_2[0x2f] < uVar2)) &&
                                           (uVar5 = *(ulonglong *)(lVar13 + param_2[0x2f] * 8),
                                           uVar5 != 0)) &&
                                          ((((lVar18 = ~uVar5 * 0x40,
                                             *(longlong *)(lVar21 + 0x20 + lVar18) != 0 &&
                                             (lStack_c8 = lVar10, uStack_c0 = uVar3,
                                             param_2[0x30] < uVar2)) &&
                                            ((uVar5 = *(ulonglong *)(lVar13 + param_2[0x30] * 8),
                                             uVar5 != 0 &&
                                             ((lVar16 = ~uVar5 * 0x40,
                                              *(longlong *)(lVar21 + 0x20 + lVar16) != 0 &&
                                              (param_2[0x31] < uVar2)))))) &&
                                           (uVar5 = *(ulonglong *)(lVar13 + param_2[0x31] * 8),
                                           uVar5 != 0)))) &&
                                         (lVar12 = ~uVar5 * 0x40,
                                         *(longlong *)(lVar21 + 0x20 + lVar12) != 0)) {
                                        if (((param_2[0x32] < uVar2) &&
                                            (uVar2 = *(ulonglong *)(lVar13 + param_2[0x32] * 8),
                                            uVar2 != 0)) &&
                                           (lVar13 = ~uVar2 * 0x40,
                                           *(longlong *)(lVar21 + 0x20 + lVar13) != 0)) {
                                          lVar14 = lVar14 + lVar21;
                                          uStack_f0 = *(undefined8 *)(lVar14 + 0x10);
                                          lVar18 = lVar18 + lVar21;
                                          uStack_e8 = *(undefined8 *)(lVar18 + 0x10);
                                          lVar16 = lVar16 + lVar21;
                                          uStack_e0 = *(undefined8 *)(lVar16 + 0x10);
                                          lVar12 = lVar12 + lVar21;
                                          uStack_d8 = *(undefined8 *)(lVar12 + 0x10);
                                          lVar13 = lVar13 + lVar21;
                                          uStack_d0 = *(undefined8 *)(lVar13 + 0x10);
                                          if ((param_2[0x33] < *(ulonglong *)(param_4 + 0x210)) &&
                                             (uVar2 = *(ulonglong *)
                                                       (*(longlong *)(param_4 + 0x208) +
                                                       param_2[0x33] * 8), uVar2 != 0)) {
                                            lVar21 = ~uVar2 * 0x40;
                                            if (*(longlong *)
                                                 (*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar21) !=
                                                0) {
                                              lVar21 = *(longlong *)(param_4 + 0x1d8) + lVar21;
                                              uStack_f8 = *(undefined8 *)(lVar21 + 0x10);
                                              if ((param_2[0x34] < *(ulonglong *)(param_4 + 0x210))
                                                 && (uVar2 = *(ulonglong *)
                                                              (*(longlong *)(param_4 + 0x208) +
                                                              param_2[0x34] * 8), uVar2 != 0)) {
                                                lVar19 = ~uVar2 * 0x40;
                                                if (*(longlong *)
                                                     (*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar19
                                                     ) != 0) {
                                                  lVar19 = *(longlong *)(param_4 + 0x1d8) + lVar19;
                                                  uStack_118 = *(undefined8 *)(lVar19 + 0x10);
                                                  lStack_110 = lVar21;
                                                  lStack_108 = lVar15;
                                                  lStack_100 = lVar9;
                                                  if ((param_2[0x35] <
                                                       *(ulonglong *)(param_4 + 0x210)) &&
                                                     (uVar2 = *(ulonglong *)
                                                               (*(longlong *)(param_4 + 0x208) +
                                                               param_2[0x35] * 8), uVar2 != 0)) {
                                                    lVar20 = ~uVar2 * 0x40;
                                                    if (*(longlong *)
                                                         (*(longlong *)(param_4 + 0x1d8) + 0x20 +
                                                         lVar20) != 0) {
                                                      lVar20 = *(longlong *)(param_4 + 0x1d8) +
                                                               lVar20;
                                                      uVar8 = *(undefined8 *)(lVar20 + 0x10);
                                                      *param_1 = uStack_70;
                                                      param_1[1] = lStack_48 + 0x38;
                                                      param_1[2] = lStack_48 + 0x3c;
                                                      *(undefined4 *)(param_1 + 3) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x1c) =
                                                           param_5;
                                                      param_1[4] = uStack_68;
                                                      param_1[5] = lStack_50 + 0x38;
                                                      param_1[6] = lStack_50 + 0x3c;
                                                      *(undefined4 *)(param_1 + 7) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x3c) =
                                                           param_5;
                                                      param_1[8] = uStack_60;
                                                      param_1[9] = lStack_58 + 0x38;
                                                      param_1[10] = lStack_58 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0xb) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x5c) =
                                                           param_5;
                                                      param_1[0xc] = uStack_88;
                                                      param_1[0xd] = lStack_78 + 0x38;
                                                      param_1[0xe] = lStack_78 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0xf) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x7c) =
                                                           param_5;
                                                      param_1[0x10] = puStack_80;
                                                      param_1[0x11] = param_4;
                                                      *(undefined4 *)(param_1 + 0x12) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x94) =
                                                           param_5;
                                                      param_1[0x13] = uStack_98;
                                                      param_1[0x14] = lVar15 + 0x38;
                                                      param_1[0x15] = lVar15 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x16) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0xb4) =
                                                           param_5;
                                                      param_1[0x17] = uVar6;
                                                      param_1[0x18] = lVar17 + 0x38;
                                                      param_1[0x19] = lVar17 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x1a) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0xd4) =
                                                           param_5;
                                                      param_1[0x1b] = uVar7;
                                                      param_1[0x1c] = lVar11 + 0x38;
                                                      param_1[0x1d] = lVar11 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x1e) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0xf4) =
                                                           param_5;
                                                      param_1[0x1f] = uStack_b8;
                                                      param_1[0x20] = lStack_a8 + 0x38;
                                                      param_1[0x21] = lStack_a8 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x22) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x114) =
                                                           param_5;
                                                      param_1[0x23] = uStack_f0;
                                                      param_1[0x24] = lVar14 + 0x38;
                                                      param_1[0x25] = lVar14 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x26) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x134) =
                                                           param_5;
                                                      param_1[0x27] = uStack_e8;
                                                      param_1[0x28] = lVar18 + 0x38;
                                                      param_1[0x29] = lVar18 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x2a) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x154) =
                                                           param_5;
                                                      param_1[0x2b] = uStack_e0;
                                                      param_1[0x2c] = lVar16 + 0x38;
                                                      param_1[0x2d] = lVar16 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x2e) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x174) =
                                                           param_5;
                                                      param_1[0x2f] = uStack_d8;
                                                      param_1[0x30] = lVar12 + 0x38;
                                                      param_1[0x31] = lVar12 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x32) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x194) =
                                                           param_5;
                                                      param_1[0x33] = uStack_d0;
                                                      param_1[0x34] = lVar13 + 0x38;
                                                      param_1[0x35] = lVar13 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x36) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x1b4) =
                                                           param_5;
                                                      param_1[0x37] = uStack_f8;
                                                      param_1[0x38] = lVar21 + 0x38;
                                                      param_1[0x39] = lVar21 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x3a) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x1d4) =
                                                           param_5;
                                                      param_1[0x3b] = uStack_118;
                                                      param_1[0x3c] = lVar19 + 0x38;
                                                      param_1[0x3d] = lVar19 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x3e) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 500) =
                                                           param_5;
                                                      param_1[0x3f] = uVar8;
                                                      param_1[0x40] = lVar20 + 0x38;
                                                      param_1[0x41] = lVar20 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x42) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x214) =
                                                           param_5;
                                                      param_1[0x43] = uVar3;
                                                      param_1[0x44] = lVar9 + 0x38;
                                                      param_1[0x45] = lVar9 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x46) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x234) =
                                                           param_5;
                                                      param_1[0x47] = uVar4;
                                                      param_1[0x48] = lVar10 + 0x38;
                                                      param_1[0x49] = lVar10 + 0x3c;
                                                      *(undefined4 *)(param_1 + 0x4a) = uVar1;
                                                      *(undefined4 *)((longlong)param_1 + 0x254) =
                                                           param_5;
                                                      return;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        goto LAB_1401b2486;
                                      }
                                    }
                                  }
                                  goto LAB_1401b24c2;
                                }
                              }
                            }
                            goto LAB_1401b2486;
                          }
                        }
                      }
                      goto LAB_1401b24c2;
                    }
                  }
                }
                goto LAB_1401b2486;
              }
            }
          }
LAB_1401b24c2:
          puStack_148 = param_3 + 1;
          pcStack_140 = pdb_140f33ec0;
          puStack_138 = &uStack_149;
          pcStack_130 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_142e521c7,&puStack_148,&UNK_142e52260);
        }
      }
    }
  }
LAB_1401b2486:
  puStack_148 = param_3 + 1;
  pcStack_140 = pdb_140f33ec0;
  puStack_138 = &uStack_149;
  pcStack_130 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142e521c7,&puStack_148,&UNK_142e52278);
}

