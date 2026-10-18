// VA 0x142134ce0, PDB extent 3051 bytes
// system_color::style_changes::_::impl$0::get_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_changes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_changes::_::impl$0::get_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_changes.rs
   Extent: 3051 */

void pdb_142134ce0(undefined8 *param_1,ulonglong *param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 uStack_181;
  undefined4 *puStack_180;
  code *pcStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined4 *puStack_160;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulonglong *puStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*param_2 < *(ulonglong *)(param_4 + 0x210)) &&
     (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + *param_2 * 8), uVar2 != 0)) {
    lVar8 = ~uVar2 * 0x40;
    if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar8) != 0) {
      lVar8 = *(longlong *)(param_4 + 0x1d8) + lVar8;
      uVar3 = *(undefined8 *)(lVar8 + 0x10);
      if ((param_2[1] < *(ulonglong *)(param_4 + 0x210)) &&
         (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[1] * 8), uVar2 != 0)) {
        lVar9 = ~uVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar9) != 0) {
          uVar1 = *param_3;
          lVar9 = *(longlong *)(param_4 + 0x1d8) + lVar9;
          uVar4 = *(undefined8 *)(lVar9 + 0x10);
          if ((param_2[2] < *(ulonglong *)(param_4 + 0x210)) &&
             (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[2] * 8), uVar2 != 0))
          {
            lVar10 = ~uVar2 * 0x40;
            if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar10) != 0) {
              lVar10 = *(longlong *)(param_4 + 0x1d8) + lVar10;
              uVar5 = *(undefined8 *)(lVar10 + 0x10);
              puStack_160 = param_3;
              if ((param_2[3] < *(ulonglong *)(param_4 + 0x210)) &&
                 (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[3] * 8),
                 uVar2 != 0)) {
                lVar11 = ~uVar2 * 0x40;
                if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar11) != 0) {
                  lVar11 = *(longlong *)(param_4 + 0x1d8) + lVar11;
                  uVar6 = *(undefined8 *)(lVar11 + 0x10);
                  if ((param_2[4] < *(ulonglong *)(param_4 + 0x210)) &&
                     (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[4] * 8),
                     uVar2 != 0)) {
                    lVar12 = ~uVar2 * 0x40;
                    if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar12) != 0) {
                      lVar12 = *(longlong *)(param_4 + 0x1d8) + lVar12;
                      uStack_58 = *(undefined8 *)(lVar12 + 0x10);
                      uStack_50 = uVar5;
                      uStack_48 = uVar3;
                      if ((param_2[0x28] < *(ulonglong *)(param_4 + 0x210)) &&
                         (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[0x28] * 8)
                         , uVar2 != 0)) {
                        lVar13 = ~uVar2 * 0x40;
                        if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar13) != 0) {
                          lStack_70 = *(longlong *)(param_4 + 0x1d8) + lVar13;
                          uStack_78 = *(undefined8 *)(lStack_70 + 0x10);
                          uVar2 = *(ulonglong *)(param_4 + 0x210);
                          lStack_68 = lVar12;
                          uStack_60 = uVar6;
                          if (param_2[0x29] < uVar2) {
                            lVar12 = *(longlong *)(param_4 + 0x208);
                            uVar7 = *(ulonglong *)(lVar12 + param_2[0x29] * 8);
                            if (uVar7 != 0) {
                              lVar13 = *(longlong *)(param_4 + 0x1d8);
                              lVar15 = ~uVar7 * 0x40;
                              if ((((((*(longlong *)(lVar13 + 0x20 + lVar15) != 0) &&
                                     (uStack_88 = uVar4, lStack_80 = lVar8, param_2[0x2a] < uVar2))
                                    && (uVar7 = *(ulonglong *)(lVar12 + param_2[0x2a] * 8),
                                       uVar7 != 0)) &&
                                   ((lVar8 = ~uVar7 * 0x40,
                                    *(longlong *)(lVar13 + 0x20 + lVar8) != 0 &&
                                    (param_2[0x2b] < uVar2)))) &&
                                  (uVar7 = *(ulonglong *)(lVar12 + param_2[0x2b] * 8), uVar7 != 0))
                                 && ((((lVar14 = ~uVar7 * 0x40,
                                       *(longlong *)(lVar13 + 0x20 + lVar14) != 0 &&
                                       (lStack_90 = lVar11, param_2[0x2c] < uVar2)) &&
                                      ((uVar7 = *(ulonglong *)(lVar12 + param_2[0x2c] * 8),
                                       uVar7 != 0 &&
                                       (((lVar11 = ~uVar7 * 0x40,
                                         *(longlong *)(lVar13 + 0x20 + lVar11) != 0 &&
                                         (param_2[0x2d] < uVar2)) &&
                                        (uVar7 = *(ulonglong *)(lVar12 + param_2[0x2d] * 8),
                                        uVar7 != 0)))))) &&
                                     (lVar16 = ~uVar7 * 0x40,
                                     *(longlong *)(lVar13 + 0x20 + lVar16) != 0)))) {
                                if (((param_2[0x2e] < uVar2) &&
                                    (uVar2 = *(ulonglong *)(lVar12 + param_2[0x2e] * 8), uVar2 != 0)
                                    ) && (lVar12 = ~uVar2 * 0x40,
                                         *(longlong *)(lVar13 + 0x20 + lVar12) != 0)) {
                                  lVar15 = lVar15 + lVar13;
                                  uStack_b8 = *(undefined8 *)(lVar15 + 0x10);
                                  lVar8 = lVar8 + lVar13;
                                  uStack_b0 = *(undefined8 *)(lVar8 + 0x10);
                                  lVar14 = lVar14 + lVar13;
                                  uStack_a8 = *(undefined8 *)(lVar14 + 0x10);
                                  lVar11 = lVar11 + lVar13;
                                  uStack_a0 = *(undefined8 *)(lVar11 + 0x10);
                                  lVar16 = lVar16 + lVar13;
                                  uStack_98 = *(undefined8 *)(lVar16 + 0x10);
                                  lVar12 = lVar12 + lVar13;
                                  uVar3 = *(undefined8 *)(lVar12 + 0x10);
                                  if ((param_2[0x2f] < *(ulonglong *)(param_4 + 0x210)) &&
                                     (uVar2 = *(ulonglong *)
                                               (*(longlong *)(param_4 + 0x208) + param_2[0x2f] * 8),
                                     uVar2 != 0)) {
                                    lVar13 = ~uVar2 * 0x40;
                                    if (*(longlong *)
                                         (*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar13) != 0) {
                                      lStack_f8 = *(longlong *)(param_4 + 0x1d8) + lVar13;
                                      uVar4 = *(undefined8 *)(lStack_f8 + 0x10);
                                      uStack_f0 = uVar3;
                                      lStack_e8 = lVar12;
                                      lStack_e0 = lVar16;
                                      lStack_d8 = lVar14;
                                      lStack_d0 = lVar8;
                                      lStack_c8 = lVar15;
                                      lStack_c0 = lVar10;
                                      if (param_2[0x30] < *(ulonglong *)(param_4 + 0x210)) {
                                        uVar2 = *(ulonglong *)
                                                 (*(longlong *)(param_4 + 0x208) + param_2[0x30] * 8
                                                 );
                                        if (uVar2 != 0) {
                                          lVar8 = *(longlong *)(param_4 + 0x1d8);
                                          lVar10 = ~uVar2 * 0x40;
                                          if ((((*(longlong *)(lVar8 + 0x20 + lVar10) != 0) &&
                                               (uStack_154 = uVar1, lStack_100 = lVar9,
                                               param_2[0x31] < *(ulonglong *)(param_4 + 0x210))) &&
                                              (uVar2 = *(ulonglong *)
                                                        (*(longlong *)(param_4 + 0x208) +
                                                        param_2[0x31] * 8), uVar2 != 0)) &&
                                             (lVar9 = ~uVar2 * 0x40,
                                             *(longlong *)(lVar8 + 0x20 + lVar9) != 0)) {
                                            puStack_108 = param_2 + 5;
                                            lVar10 = lVar10 + lVar8;
                                            uStack_110 = *(undefined8 *)(lVar10 + 0x10);
                                            lVar9 = lVar9 + lVar8;
                                            uVar3 = *(undefined8 *)(lVar9 + 0x10);
                                            pdb_142128b80(puStack_108,param_4);
                                            uVar2 = *(ulonglong *)(param_4 + 0x210);
                                            if (param_2[0x32] < uVar2) {
                                              lVar8 = *(longlong *)(param_4 + 0x208);
                                              uVar7 = *(ulonglong *)(lVar8 + param_2[0x32] * 8);
                                              if (uVar7 != 0) {
                                                lVar12 = *(longlong *)(param_4 + 0x1d8);
                                                lVar13 = ~uVar7 * 0x40;
                                                if ((((*(longlong *)(lVar12 + 0x20 + lVar13) != 0)
                                                     && (param_2[0x33] < uVar2)) &&
                                                    ((uVar7 = *(ulonglong *)
                                                               (lVar8 + param_2[0x33] * 8),
                                                     uVar7 != 0 &&
                                                     ((lVar15 = ~uVar7 * 0x40,
                                                      *(longlong *)(lVar12 + 0x20 + lVar15) != 0 &&
                                                      (param_2[0x34] < uVar2)))))) &&
                                                   ((uVar7 = *(ulonglong *)
                                                              (lVar8 + param_2[0x34] * 8),
                                                    uVar7 != 0 &&
                                                    (lVar14 = ~uVar7 * 0x40,
                                                    *(longlong *)(lVar12 + 0x20 + lVar14) != 0)))) {
                                                  param_3 = puStack_160;
                                                  if (((param_2[0x35] < uVar2) &&
                                                      (uVar2 = *(ulonglong *)
                                                                (lVar8 + param_2[0x35] * 8),
                                                      uVar2 != 0)) &&
                                                     (lVar8 = ~uVar2 * 0x40,
                                                     *(longlong *)(lVar12 + 0x20 + lVar8) != 0)) {
                                                    lVar13 = lVar13 + lVar12;
                                                    uStack_128 = *(undefined8 *)(lVar13 + 0x10);
                                                    lVar15 = lVar15 + lVar12;
                                                    uStack_120 = *(undefined8 *)(lVar15 + 0x10);
                                                    lVar14 = lVar14 + lVar12;
                                                    uStack_118 = *(undefined8 *)(lVar14 + 0x10);
                                                    lVar8 = lVar8 + lVar12;
                                                    uVar5 = *(undefined8 *)(lVar8 + 0x10);
                                                    if ((param_2[0x36] <
                                                         *(ulonglong *)(param_4 + 0x210)) &&
                                                       (uVar2 = *(ulonglong *)
                                                                 (*(longlong *)(param_4 + 0x208) +
                                                                 param_2[0x36] * 8), uVar2 != 0)) {
                                                      lVar12 = ~uVar2 * 0x40;
                                                      if (*(longlong *)
                                                           (*(longlong *)(param_4 + 0x1d8) + 0x20 +
                                                           lVar12) != 0) {
                                                        lVar12 = *(longlong *)(param_4 + 0x1d8) +
                                                                 lVar12;
                                                        uStack_150 = *(undefined8 *)(lVar12 + 0x10);
                                                        uStack_148 = uVar5;
                                                        uStack_140 = uVar3;
                                                        uStack_138 = uVar4;
                                                        lStack_130 = lVar11;
                                                        if ((param_2[0x37] <
                                                             *(ulonglong *)(param_4 + 0x210)) &&
                                                           (uVar2 = *(ulonglong *)
                                                                     (*(longlong *)(param_4 + 0x208)
                                                                     + param_2[0x37] * 8),
                                                           uVar2 != 0)) {
                                                          lVar16 = ~uVar2 * 0x40;
                                                          if (*(longlong *)
                                                               (*(longlong *)(param_4 + 0x1d8) +
                                                                0x20 + lVar16) != 0) {
                                                            lVar16 = *(longlong *)(param_4 + 0x1d8)
                                                                     + lVar16;
                                                            uVar6 = *(undefined8 *)(lVar16 + 0x10);
                                                            *param_1 = uStack_78;
                                                            param_1[1] = lStack_70 + 0x38;
                                                            param_1[2] = lStack_70 + 0x3c;
                                                            *(undefined4 *)(param_1 + 3) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x1c) = param_5;
                                                            param_1[4] = uStack_b8;
                                                            param_1[5] = lStack_c8 + 0x38;
                                                            param_1[6] = lStack_c8 + 0x3c;
                                                            *(undefined4 *)(param_1 + 7) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x3c) = param_5;
                                                            param_1[8] = uStack_b0;
                                                            param_1[9] = lStack_d0 + 0x38;
                                                            param_1[10] = lStack_d0 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0xb) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x5c) = param_5;
                                                            param_1[0xc] = uStack_a8;
                                                            param_1[0xd] = lStack_d8 + 0x38;
                                                            param_1[0xe] = lStack_d8 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0xf) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x7c) = param_5;
                                                            param_1[0x10] = uStack_a0;
                                                            param_1[0x11] = lVar11 + 0x38;
                                                            param_1[0x12] = lVar11 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x13) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x9c) = param_5;
                                                            param_1[0x14] = uStack_98;
                                                            param_1[0x15] = lStack_e0 + 0x38;
                                                            param_1[0x16] = lStack_e0 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x17) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0xbc) = param_5;
                                                            param_1[0x18] = uStack_f0;
                                                            param_1[0x19] = lStack_e8 + 0x38;
                                                            param_1[0x1a] = lStack_e8 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x1b) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0xdc) = param_5;
                                                            param_1[0x1c] = uVar4;
                                                            param_1[0x1d] = lStack_f8 + 0x38;
                                                            param_1[0x1e] = lStack_f8 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x1f) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0xfc) = param_5;
                                                            param_1[0x20] = uStack_110;
                                                            param_1[0x21] = lVar10 + 0x38;
                                                            param_1[0x22] = lVar10 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x23) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x11c) = param_5;
                                                            param_1[0x24] = uVar3;
                                                            param_1[0x25] = lVar9 + 0x38;
                                                            param_1[0x26] = lVar9 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x27) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x13c) = param_5;
                                                            param_1[0x28] = puStack_108;
                                                            param_1[0x29] = param_4;
                                                            *(undefined4 *)(param_1 + 0x2a) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x154) = param_5;
                                                            param_1[0x2b] = uStack_128;
                                                            param_1[0x2c] = lVar13 + 0x38;
                                                            param_1[0x2d] = lVar13 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x2e) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x174) = param_5;
                                                            param_1[0x2f] = uStack_120;
                                                            param_1[0x30] = lVar15 + 0x38;
                                                            param_1[0x31] = lVar15 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x32) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x194) = param_5;
                                                            param_1[0x33] = uStack_118;
                                                            param_1[0x34] = lVar14 + 0x38;
                                                            param_1[0x35] = lVar14 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x36) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x1b4) = param_5;
                                                            param_1[0x37] = uVar5;
                                                            param_1[0x38] = lVar8 + 0x38;
                                                            param_1[0x39] = lVar8 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x3a) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x1d4) = param_5;
                                                            param_1[0x3b] = uStack_150;
                                                            param_1[0x3c] = lVar12 + 0x38;
                                                            param_1[0x3d] = lVar12 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x3e) =
                                                                 uStack_154;
                                                            *(undefined4 *)((longlong)param_1 + 500)
                                                                 = param_5;
                                                            param_1[0x3f] = uVar6;
                                                            param_1[0x40] = lVar16 + 0x38;
                                                            param_1[0x41] = lVar16 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x42) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x214) = param_5;
                                                            param_1[0x43] = uStack_48;
                                                            param_1[0x44] = lStack_80 + 0x38;
                                                            param_1[0x45] = lStack_80 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x46) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x234) = param_5;
                                                            param_1[0x47] = uStack_88;
                                                            param_1[0x48] = lStack_100 + 0x38;
                                                            param_1[0x49] = lStack_100 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x4a) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x254) = param_5;
                                                            param_1[0x4b] = uStack_50;
                                                            param_1[0x4c] = lStack_c0 + 0x38;
                                                            param_1[0x4d] = lStack_c0 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x4e) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x274) = param_5;
                                                            param_1[0x4f] = uStack_60;
                                                            param_1[0x50] = lStack_90 + 0x38;
                                                            param_1[0x51] = lStack_90 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x52) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x294) = param_5;
                                                            param_1[0x53] = uStack_58;
                                                            param_1[0x54] = lStack_68 + 0x38;
                                                            param_1[0x55] = lStack_68 + 0x3c;
                                                            *(undefined4 *)(param_1 + 0x56) =
                                                                 uStack_154;
                                                            *(undefined4 *)
                                                             ((longlong)param_1 + 0x2b4) = param_5;
                                                            return;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  goto LAB_142135897;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_14213583d;
                                    }
                                  }
                                }
                                goto LAB_142135897;
                              }
                            }
                          }
LAB_14213583d:
                          puStack_180 = puStack_160 + 1;
                          pcStack_178 = pdb_140f33ec0;
                          puStack_170 = &uStack_181;
                          pcStack_168 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
                          pdb_142dc83d0(&UNK_14346019f,&puStack_180,&UNK_143460238);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_142135897:
  puStack_180 = param_3 + 1;
  pcStack_178 = pdb_140f33ec0;
  puStack_170 = &uStack_181;
  pcStack_168 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14346019f,&puStack_180,&UNK_143460250);
}

