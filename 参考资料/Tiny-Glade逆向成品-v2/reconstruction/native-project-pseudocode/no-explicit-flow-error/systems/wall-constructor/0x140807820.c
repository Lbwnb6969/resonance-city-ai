// VA 0x140807820, PDB extent 4056 bytes
// system_wall_constructor::construct_gates::systems::update_gates_hashmap
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_gates/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_gates::systems::update_gates_hashmap
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_gates/systems.rs
   Extent: 4056 */

void pdb_140807820(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ushort uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong *plVar29;
  byte bVar30;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  longlong lStack_168;
  ulonglong *puStack_160;
  undefined4 *puStack_158;
  undefined4 *puStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  longlong lStack_130;
  longlong lStack_128;
  ulonglong *puStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined1 auStack_e0 [16];
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 (*pauStack_b0) [16];
  longlong *plStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  ulonglong *puStack_90;
  longlong *plStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puStack_90 = (ulonglong *)*param_1;
  lVar18 = param_1[1];
  uVar10 = *puStack_90;
  uVar9 = 0;
  uVar24 = uVar10 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar24 = uVar9;
  }
  uVar19 = uVar10 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar19 = uVar9;
  }
  lStack_98 = uVar24 * 0x10 + *(longlong *)(lVar18 + 8);
  uVar10 = *(ulonglong *)(lVar18 + 0x10) - uVar24;
  if (*(ulonglong *)(lVar18 + 0x10) < uVar24) {
    lStack_98 = 8;
    uVar10 = uVar9;
  }
  lStack_100 = uVar19 * 0x10 + *(longlong *)(lVar18 + 0x28);
  uVar24 = *(ulonglong *)(lVar18 + 0x30) - uVar19;
  if (*(ulonglong *)(lVar18 + 0x30) < uVar19) {
    lStack_100 = 8;
    uVar24 = uVar9;
  }
  *puStack_90 = (*(longlong *)(lVar18 + 0x40) - uVar24) - uVar10;
  lVar16 = uVar10 * 0x10 + lStack_98;
  lVar17 = uVar24 * 0x10 + lStack_100;
  puStack_160 = (ulonglong *)*param_2;
  lVar18 = param_2[1];
  uVar10 = *puStack_160;
  uVar24 = uVar10 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar24 = uVar9;
  }
  uVar19 = uVar10 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar19 = uVar9;
  }
  plStack_88 = (longlong *)(uVar24 * 0x40 + *(longlong *)(lVar18 + 8));
  uVar10 = *(ulonglong *)(lVar18 + 0x10) - uVar24;
  if (*(ulonglong *)(lVar18 + 0x10) < uVar24) {
    plStack_88 = (longlong *)0x8;
    uVar10 = uVar9;
  }
  lStack_108 = uVar19 * 0x40 + *(longlong *)(lVar18 + 0x28);
  uVar24 = *(ulonglong *)(lVar18 + 0x30) - uVar19;
  if (*(ulonglong *)(lVar18 + 0x30) < uVar19) {
    lStack_108 = 8;
    uVar24 = uVar9;
  }
  *puStack_160 = (*(longlong *)(lVar18 + 0x40) - uVar24) - uVar10;
  lVar18 = uVar10 * 0x40 + (longlong)plStack_88;
  lVar27 = uVar24 * 0x40 + lStack_108;
  puStack_120 = (ulonglong *)*param_3;
  pauVar15 = (undefined1 (*) [16])param_3[1];
  uVar10 = *puStack_120;
  uVar24 = uVar10 - *(ulonglong *)(pauVar15[1] + 8);
  if (uVar10 < *(ulonglong *)(pauVar15[1] + 8)) {
    uVar24 = uVar9;
  }
  uVar19 = uVar10 - *(ulonglong *)(pauVar15[3] + 8);
  if (uVar10 < *(ulonglong *)(pauVar15[3] + 8)) {
    uVar19 = uVar9;
  }
  lStack_a0 = uVar24 * 0x20 + *(longlong *)(*pauVar15 + 8);
  uVar10 = *(ulonglong *)pauVar15[1] - uVar24;
  if (*(ulonglong *)pauVar15[1] < uVar24) {
    lStack_a0 = 8;
    uVar10 = uVar9;
  }
  lStack_118 = uVar19 * 0x20 + *(longlong *)(pauVar15[2] + 8);
  uVar24 = *(ulonglong *)pauVar15[3] - uVar19;
  if (*(ulonglong *)pauVar15[3] < uVar19) {
    lStack_118 = 8;
    uVar24 = uVar9;
  }
  *puStack_120 = (*(longlong *)pauVar15[4] - uVar24) - uVar10;
  uVar7 = _UNK_142e47bfc;
  uVar6 = _UNK_142e47bf8;
  lStack_130 = uVar10 * 0x20 + lStack_a0;
  lStack_110 = uVar24 * 0x20 + lStack_118;
  uStack_f8 = *(undefined4 *)((longlong)param_7 + 0x1c);
  plVar29 = (longlong *)*param_7;
  puStack_158 = (undefined4 *)param_7[2];
  lStack_148 = *param_8;
  uVar11 = *(undefined8 *)*(undefined1 (*) [16])(param_8 + 1);
  lVar28 = param_8[3];
  lVar14 = param_8[2];
  auVar33 = *(undefined1 (*) [16])(param_8 + 1);
  uStack_f4 = *(undefined4 *)((longlong)param_6 + 0x1c);
  lVar20 = *param_6;
  puStack_150 = (undefined4 *)param_6[2];
  plStack_138 = plVar29 + 4;
  lStack_140 = lVar20 + 0x20;
  plStack_a8 = (longlong *)CONCAT71((int7)((ulonglong)lStack_140 >> 8),1);
  lStack_128 = lVar20;
LAB_140807ac0:
  lVar4 = lStack_148;
  if (((ulonglong)plStack_a8 & 1) == 0) {
joined_r0x000140807b38:
    puVar12 = puStack_120;
    if ((lStack_a0 == 0) || (lStack_a0 == lStack_130)) {
      if ((lStack_118 == 0) || (lStack_118 == lStack_110)) {
        puStack_90 = (ulonglong *)*param_4;
        lVar18 = param_4[1];
        uVar10 = *puStack_90;
        uVar9 = 0;
        uVar24 = uVar10 - *(ulonglong *)(lVar18 + 0x18);
        if (uVar10 < *(ulonglong *)(lVar18 + 0x18)) {
          uVar24 = uVar9;
        }
        uVar19 = uVar10 - *(ulonglong *)(lVar18 + 0x38);
        if (uVar10 < *(ulonglong *)(lVar18 + 0x38)) {
          uVar19 = uVar9;
        }
        lStack_98 = uVar24 * 0x10 + *(longlong *)(lVar18 + 8);
        uVar10 = *(ulonglong *)(lVar18 + 0x10) - uVar24;
        if (*(ulonglong *)(lVar18 + 0x10) < uVar24) {
          lStack_98 = 8;
          uVar10 = uVar9;
        }
        lStack_a0 = uVar19 * 0x10 + *(longlong *)(lVar18 + 0x28);
        uVar24 = *(ulonglong *)(lVar18 + 0x30) - uVar19;
        if (*(ulonglong *)(lVar18 + 0x30) < uVar19) {
          lStack_a0 = 8;
          uVar24 = uVar9;
        }
        *puStack_90 = (*(longlong *)(lVar18 + 0x40) - uVar24) - uVar10;
        lStack_110 = uVar10 * 0x10 + lStack_98;
        lStack_100 = uVar24 * 0x10 + lStack_a0;
        lStack_130 = lVar14;
        puStack_120 = (ulonglong *)uVar11;
        lStack_118 = lVar28;
        plStack_a8 = plVar29;
        do {
          lVar16 = lStack_118;
          lVar18 = lStack_148;
          if ((lStack_98 == 0) || (lStack_98 == lStack_110)) {
            if ((lStack_a0 == 0) || (lStack_a0 == lStack_100)) {
              puStack_90 = (ulonglong *)*param_5;
              lVar17 = param_5[1];
              uVar10 = *puStack_90;
              uVar9 = 0;
              uVar24 = uVar10 - *(ulonglong *)(lVar17 + 0x18);
              if (uVar10 < *(ulonglong *)(lVar17 + 0x18)) {
                uVar24 = uVar9;
              }
              uVar19 = uVar10 - *(ulonglong *)(lVar17 + 0x38);
              if (uVar10 < *(ulonglong *)(lVar17 + 0x38)) {
                uVar19 = uVar9;
              }
              lStack_98 = uVar24 * 0x18 + *(longlong *)(lVar17 + 8);
              uVar10 = *(ulonglong *)(lVar17 + 0x10) - uVar24;
              if (*(ulonglong *)(lVar17 + 0x10) < uVar24) {
                lStack_98 = 8;
                uVar10 = uVar9;
              }
              lStack_a0 = uVar19 * 0x18 + *(longlong *)(lVar17 + 0x28);
              uVar24 = *(ulonglong *)(lVar17 + 0x30) - uVar19;
              if (*(ulonglong *)(lVar17 + 0x30) < uVar19) {
                lStack_a0 = 8;
                uVar24 = uVar9;
              }
              *puStack_90 = (*(longlong *)(lVar17 + 0x40) - uVar24) - uVar10;
              lStack_110 = lStack_98 + uVar10 * 0x18;
              lStack_100 = lStack_a0 + uVar24 * 0x18;
              do {
                if ((lStack_98 == 0) || (lStack_98 == lStack_110)) {
                  if ((lStack_a0 == 0) || (lStack_a0 == lStack_100)) {
                    return;
                  }
                  lStack_98 = 0;
                  lVar17 = lStack_a0;
                  lStack_a0 = lStack_a0 + 0x18;
                }
                else {
                  lVar17 = lStack_98;
                  lStack_98 = lStack_98 + 0x18;
                }
                *puStack_90 = *puStack_90 + 1;
                plVar21 = (longlong *)(lVar17 + 8);
                plStack_88 = plVar21;
                if (plVar29[3] != 0) {
                  uVar10 = pdb_1400af0a0(plStack_138,plVar21);
                  puVar12 = puStack_120;
                  lVar17 = lStack_130;
                  bVar30 = (byte)(uVar10 >> 0x39);
                  auVar33 = ZEXT216(CONCAT11(bVar30,bVar30));
                  auVar33 = pshuflw(auVar33,auVar33,0);
                  lVar27 = 0;
                  while( true ) {
                    uVar10 = uVar10 & plStack_a8[1];
                    pcVar1 = (char *)(*plStack_a8 + uVar10);
                    auVar32[0] = -(*pcVar1 == auVar33[0]);
                    auVar32[1] = -(pcVar1[1] == auVar33[1]);
                    auVar32[2] = -(pcVar1[2] == auVar33[2]);
                    auVar32[3] = -(pcVar1[3] == auVar33[3]);
                    auVar32[4] = -(pcVar1[4] == auVar33[4]);
                    auVar32[5] = -(pcVar1[5] == auVar33[5]);
                    auVar32[6] = -(pcVar1[6] == auVar33[6]);
                    auVar32[7] = -(pcVar1[7] == auVar33[7]);
                    auVar32[8] = -(pcVar1[8] == auVar33[0]);
                    auVar32[9] = -(pcVar1[9] == auVar33[1]);
                    auVar32[10] = -(pcVar1[10] == auVar33[2]);
                    auVar32[0xb] = -(pcVar1[0xb] == auVar33[3]);
                    auVar32[0xc] = -(pcVar1[0xc] == auVar33[4]);
                    auVar32[0xd] = -(pcVar1[0xd] == auVar33[5]);
                    auVar32[0xe] = -(pcVar1[0xe] == auVar33[6]);
                    auVar32[0xf] = -(pcVar1[0xf] == auVar33[7]);
                    uVar26 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar32[0xf] >> 7) << 0xf;
                    uVar22 = (uint)uVar26;
                    if (uVar26 != 0) {
                      do {
                        uVar8 = 0;
                        for (uVar5 = uVar22; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                          uVar8 = uVar8 + 1;
                        }
                        lVar28 = *plStack_a8 + (uVar8 + uVar10 & plStack_a8[1]) * -0x20;
                        if (*plVar21 == *(longlong *)(lVar28 + -0x20)) {
                          pauStack_b0 = *(undefined1 (**) [16])(lVar28 + -8);
                          if (pauStack_b0 != (undefined1 (*) [16])0x0) {
                            lStack_108 = *(longlong *)(lVar28 + -0x10);
                            pauStack_b0 = (undefined1 (*) [16])((longlong)pauStack_b0 << 3);
                            pauVar15 = (undefined1 (*) [16])0x0;
                            do {
                              lStack_f0 = *(longlong *)(*pauVar15 + lStack_108);
                              lStack_e8 = lVar18;
                              auStack_e0._8_8_ = lVar17;
                              auStack_e0._0_8_ = puVar12;
                              lStack_d0 = lVar16;
                              pdb_140f04aa0(&lStack_f0,&UNK_143007928);
                              pauVar15 = (undefined1 (*) [16])(*pauVar15 + 8);
                            } while (pauStack_b0 != pauVar15);
                          }
                          goto LAB_14080857a;
                        }
                        uVar26 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                        uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar26);
                      } while (uVar26 != 0);
                    }
                    auVar37[0] = -(*pcVar1 == -1);
                    auVar37[1] = -(pcVar1[1] == -1);
                    auVar37[2] = -(pcVar1[2] == -1);
                    auVar37[3] = -(pcVar1[3] == -1);
                    auVar37[4] = -(pcVar1[4] == -1);
                    auVar37[5] = -(pcVar1[5] == -1);
                    auVar37[6] = -(pcVar1[6] == -1);
                    auVar37[7] = -(pcVar1[7] == -1);
                    auVar37[8] = -(pcVar1[8] == -1);
                    auVar37[9] = -(pcVar1[9] == -1);
                    auVar37[10] = -(pcVar1[10] == -1);
                    auVar37[0xb] = -(pcVar1[0xb] == -1);
                    auVar37[0xc] = -(pcVar1[0xc] == -1);
                    auVar37[0xd] = -(pcVar1[0xd] == -1);
                    auVar37[0xe] = -(pcVar1[0xe] == -1);
                    auVar37[0xf] = -(pcVar1[0xf] == -1);
                    if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar37 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar37 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar37 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar37 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
                    uVar10 = uVar10 + lVar27 + 0x10;
                    lVar27 = lVar27 + 0x10;
                    plVar21 = plStack_88;
                  }
                }
LAB_14080857a:
                plVar21 = plStack_88;
                *puStack_158 = uStack_f8;
                uVar11 = pdb_1400af0a0(plStack_138,plStack_88);
                plVar29 = plStack_a8;
                pdb_140269750(&lStack_f0,plStack_a8,uVar11,plVar21);
                if ((!SBORROW8(0,lStack_e8)) && (lStack_e8 != 0)) {
                  pub_1406abac0((byte *)auStack_e0._0_8_,lStack_e8 << 3,8);
                }
                lVar27 = lStack_128;
                uStack_c0 = *plVar21;
                auStack_e0 = (undefined1  [16])0x0;
                *puStack_150 = uStack_f4;
                uStack_b8 = *(undefined8 *)(lStack_128 + 0x40);
                lStack_f0 = 0;
                lStack_e8 = 4;
                lStack_d0 = 4;
                lStack_c8 = 0;
                lVar17 = *(longlong *)(lStack_128 + 0x30);
                if (lVar17 == *(longlong *)(lStack_128 + 0x20)) {
                  pdb_142d7ee50(lStack_140);
                }
                lVar28 = *(longlong *)(lVar27 + 0x28);
                lVar14 = lVar17 * 0x40;
                puVar2 = (undefined4 *)(lVar28 + 0x30 + lVar14);
                *puVar2 = (undefined4)uStack_c0;
                puVar2[1] = uStack_c0._4_4_;
                puVar2[2] = (undefined4)uStack_b8;
                puVar2[3] = uStack_b8._4_4_;
                plVar21 = (longlong *)(lVar28 + 0x20 + lVar14);
                *plVar21 = lStack_d0;
                plVar21[1] = lStack_c8;
                puVar3 = (undefined8 *)(lVar28 + 0x10 + lVar14);
                *puVar3 = auStack_e0._0_8_;
                puVar3[1] = auStack_e0._8_8_;
                *(longlong *)(lVar28 + lVar14) = lStack_f0;
                ((longlong *)(lVar28 + lVar14))[1] = lStack_e8;
                *(longlong *)(lVar27 + 0x30) = lVar17 + 1;
                *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
              } while( true );
            }
            lStack_98 = 0;
            lVar18 = lStack_a0;
            lStack_a0 = lStack_a0 + 0x10;
          }
          else {
            lVar18 = lStack_98;
            lStack_98 = lStack_98 + 0x10;
          }
          *puStack_90 = *puStack_90 + 1;
          lStack_168 = *(longlong *)(lVar18 + 8);
          plStack_88 = (longlong *)lStack_168;
          if (plVar29[3] != 0) {
            uVar10 = pdb_1400af0a0(plStack_138,&lStack_168);
            puVar12 = puStack_120;
            lVar18 = lStack_130;
            bVar30 = (byte)(uVar10 >> 0x39);
            auVar33 = ZEXT216(CONCAT11(bVar30,bVar30));
            auVar33 = pshuflw(auVar33,auVar33,0);
            lVar16 = 0;
            while( true ) {
              uVar10 = uVar10 & plStack_a8[1];
              pcVar1 = (char *)(*plStack_a8 + uVar10);
              auVar39[0] = -(*pcVar1 == auVar33[0]);
              auVar39[1] = -(pcVar1[1] == auVar33[1]);
              auVar39[2] = -(pcVar1[2] == auVar33[2]);
              auVar39[3] = -(pcVar1[3] == auVar33[3]);
              auVar39[4] = -(pcVar1[4] == auVar33[4]);
              auVar39[5] = -(pcVar1[5] == auVar33[5]);
              auVar39[6] = -(pcVar1[6] == auVar33[6]);
              auVar39[7] = -(pcVar1[7] == auVar33[7]);
              auVar39[8] = -(pcVar1[8] == auVar33[0]);
              auVar39[9] = -(pcVar1[9] == auVar33[1]);
              auVar39[10] = -(pcVar1[10] == auVar33[2]);
              auVar39[0xb] = -(pcVar1[0xb] == auVar33[3]);
              auVar39[0xc] = -(pcVar1[0xc] == auVar33[4]);
              auVar39[0xd] = -(pcVar1[0xd] == auVar33[5]);
              auVar39[0xe] = -(pcVar1[0xe] == auVar33[6]);
              auVar39[0xf] = -(pcVar1[0xf] == auVar33[7]);
              uVar26 = (ushort)(SUB161(auVar39 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar39[0xf] >> 7) << 0xf;
              uVar22 = (uint)uVar26;
              while (uVar26 != 0) {
                uVar8 = 0;
                for (uVar5 = uVar22; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar8 = uVar8 + 1;
                }
                lVar17 = *plStack_a8 + (uVar8 + uVar10 & plStack_a8[1]) * -0x20;
                if (plStack_88 == (longlong *)*(longlong *)(lVar17 + -0x20)) {
                  pauStack_b0 = *(undefined1 (**) [16])(lVar17 + -8);
                  if (pauStack_b0 != (undefined1 (*) [16])0x0) {
                    lStack_108 = *(longlong *)(lVar17 + -0x10);
                    pauStack_b0 = (undefined1 (*) [16])((longlong)pauStack_b0 << 3);
                    pauVar15 = (undefined1 (*) [16])0x0;
                    do {
                      lStack_f0 = *(longlong *)(*pauVar15 + lStack_108);
                      lStack_e8 = lVar4;
                      auStack_e0._8_8_ = lVar18;
                      auStack_e0._0_8_ = puVar12;
                      lStack_d0 = lVar28;
                      pdb_140f04aa0(&lStack_f0,&UNK_143007940);
                      pauVar15 = (undefined1 (*) [16])(*pauVar15 + 8);
                    } while (pauStack_b0 != pauVar15);
                  }
                  goto LAB_14080820a;
                }
                uVar26 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar26);
              }
              auVar36[0] = -(*pcVar1 == -1);
              auVar36[1] = -(pcVar1[1] == -1);
              auVar36[2] = -(pcVar1[2] == -1);
              auVar36[3] = -(pcVar1[3] == -1);
              auVar36[4] = -(pcVar1[4] == -1);
              auVar36[5] = -(pcVar1[5] == -1);
              auVar36[6] = -(pcVar1[6] == -1);
              auVar36[7] = -(pcVar1[7] == -1);
              auVar36[8] = -(pcVar1[8] == -1);
              auVar36[9] = -(pcVar1[9] == -1);
              auVar36[10] = -(pcVar1[10] == -1);
              auVar36[0xb] = -(pcVar1[0xb] == -1);
              auVar36[0xc] = -(pcVar1[0xc] == -1);
              auVar36[0xd] = -(pcVar1[0xd] == -1);
              auVar36[0xe] = -(pcVar1[0xe] == -1);
              auVar36[0xf] = -(pcVar1[0xf] == -1);
              if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
              uVar10 = uVar10 + lVar16 + 0x10;
              lVar16 = lVar16 + 0x10;
            }
          }
LAB_14080820a:
          *puStack_158 = uStack_f8;
          uVar11 = pdb_1400af0a0(plStack_138,&lStack_168);
          plVar29 = plStack_a8;
          pdb_140269750(&lStack_f0,plStack_a8,uVar11,&lStack_168);
          if ((!SBORROW8(0,lStack_e8)) && (lStack_e8 != 0)) {
            pub_1406abac0((byte *)auStack_e0._0_8_,lStack_e8 << 3,8);
          }
          lVar16 = lStack_128;
          auStack_e0 = (undefined1  [16])0x0;
          *puStack_150 = uStack_f4;
          uStack_b8 = *(undefined8 *)(lStack_128 + 0x40);
          lStack_f0 = 0;
          lStack_e8 = 4;
          lStack_d0 = 4;
          lStack_c8 = 0;
          uStack_c0 = (longlong)plStack_88;
          lVar18 = *(longlong *)(lStack_128 + 0x30);
          if (lVar18 == *(longlong *)(lStack_128 + 0x20)) {
            pdb_142d7ee50(lStack_140);
          }
          lVar17 = *(longlong *)(lVar16 + 0x28);
          lVar27 = lVar18 * 0x40;
          puVar2 = (undefined4 *)(lVar17 + 0x30 + lVar27);
          *puVar2 = (undefined4)uStack_c0;
          puVar2[1] = uStack_c0._4_4_;
          puVar2[2] = (undefined4)uStack_b8;
          puVar2[3] = uStack_b8._4_4_;
          plVar21 = (longlong *)(lVar17 + 0x20 + lVar27);
          *plVar21 = lStack_d0;
          plVar21[1] = lStack_c8;
          puVar3 = (undefined8 *)(lVar17 + 0x10 + lVar27);
          *puVar3 = auStack_e0._0_8_;
          puVar3[1] = auStack_e0._8_8_;
          *(longlong *)(lVar17 + lVar27) = lStack_f0;
          ((longlong *)(lVar17 + lVar27))[1] = lStack_e8;
          *(longlong *)(lVar16 + 0x30) = lVar18 + 1;
          *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
        } while( true );
      }
      plStack_a8 = (longlong *)0x0;
      lStack_a0 = 0;
      plVar21 = (longlong *)lStack_118;
      lStack_118 = lStack_118 + 0x20;
    }
    else {
      plStack_a8 = (longlong *)0x0;
      plVar21 = (longlong *)lStack_a0;
      lStack_a0 = lStack_a0 + 0x20;
    }
  }
  else if (puStack_90 == (ulonglong *)0x0) {
LAB_140807b71:
    puVar12 = puStack_160;
    if ((plStack_88 == (longlong *)0x0) || (plStack_88 == (longlong *)lVar18)) {
      if ((lStack_108 == 0) || (lStack_108 == lVar27)) {
        puStack_90 = (ulonglong *)0x0;
        plStack_88 = (longlong *)0x0;
        goto joined_r0x000140807b38;
      }
      plStack_a8 = (longlong *)CONCAT71((int7)((ulonglong)plStack_88 >> 8),1);
      puStack_90 = (ulonglong *)0x0;
      plStack_88 = (longlong *)0x0;
      plVar21 = (longlong *)lStack_108;
      lStack_108 = lStack_108 + 0x40;
    }
    else {
      plStack_a8 = (longlong *)CONCAT71((int7)((ulonglong)pauVar15 >> 8),1);
      puStack_90 = (ulonglong *)0x0;
      plVar21 = plStack_88;
      plStack_88 = (longlong *)((longlong)plStack_88 + 0x40);
    }
  }
  else {
    puVar12 = puStack_90;
    if ((lStack_98 == 0) || (lStack_98 == lVar16)) {
      if (lStack_100 == 0) {
        lStack_98 = 0;
      }
      else {
        lStack_98 = 0;
        if (lStack_100 != lVar17) {
          plStack_a8 = (longlong *)0x1;
          lStack_98 = 0;
          plVar21 = (longlong *)lStack_100;
          lStack_100 = lStack_100 + 0x10;
          goto LAB_140807c9c;
        }
      }
      goto LAB_140807b71;
    }
    plStack_a8 = (longlong *)CONCAT71((int7)((ulonglong)plStack_a8 >> 8),1);
    plVar21 = (longlong *)lStack_98;
    lStack_98 = lStack_98 + 0x10;
  }
LAB_140807c9c:
  *puVar12 = *puVar12 + 1;
  lVar4 = *(longlong *)((longlong)plVar21 + 8);
  *puStack_158 = uStack_f8;
  lStack_f0 = lVar4;
  uVar9 = pdb_1400af0a0(plVar29 + 4,&lStack_f0);
  lVar25 = lStack_148;
  pauVar13 = (undefined1 (*) [16])*plVar29;
  uVar10 = plVar29[1];
  bVar30 = (byte)(uVar9 >> 0x38);
  bVar31 = bVar30 >> 1;
  auVar32 = ZEXT216(CONCAT11(bVar31,bVar31));
  auVar32 = pshuflw(auVar32,auVar32,0);
  lVar23 = 0;
  uVar24 = uVar9;
  while( true ) {
    uVar24 = uVar24 & uVar10;
    pcVar1 = *pauVar13 + uVar24;
    auVar38[0] = -(*pcVar1 == auVar32[0]);
    auVar38[1] = -(pcVar1[1] == auVar32[1]);
    auVar38[2] = -(pcVar1[2] == auVar32[2]);
    auVar38[3] = -(pcVar1[3] == auVar32[3]);
    auVar38[4] = -(pcVar1[4] == auVar32[4]);
    auVar38[5] = -(pcVar1[5] == auVar32[5]);
    auVar38[6] = -(pcVar1[6] == auVar32[6]);
    auVar38[7] = -(pcVar1[7] == auVar32[7]);
    auVar38[8] = -(pcVar1[8] == auVar32[0]);
    auVar38[9] = -(pcVar1[9] == auVar32[1]);
    auVar38[10] = -(pcVar1[10] == auVar32[2]);
    auVar38[0xb] = -(pcVar1[0xb] == auVar32[3]);
    auVar38[0xc] = -(pcVar1[0xc] == auVar32[4]);
    auVar38[0xd] = -(pcVar1[0xd] == auVar32[5]);
    auVar38[0xe] = -(pcVar1[0xe] == auVar32[6]);
    auVar38[0xf] = -(pcVar1[0xf] == auVar32[7]);
    uVar26 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
    uVar22 = (uint)uVar26;
    while (uVar26 != 0) {
      uVar8 = 0;
      for (uVar5 = uVar22; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar19 = uVar8 + uVar24 & uVar10;
      lVar20 = lStack_128;
      if (*(longlong *)pauVar13[uVar19 * -2 + -2] == lVar4) {
        pauVar15 = *(undefined1 (**) [16])pauVar13[uVar19 * -2 + -1];
        lVar23 = *(longlong *)(pauVar13[uVar19 * -2 + -1] + 8);
        *(undefined8 *)(pauVar13[uVar19 * -2 + -1] + 8) = 0;
        if (lVar23 == 0) goto LAB_140807e80;
        lVar23 = lVar23 << 3;
        pauVar15 = (undefined1 (*) [16])(*pauVar15 + 8);
        goto LAB_140807d90;
      }
      uVar26 = (ushort)(uVar22 - 1) & (ushort)uVar22;
      uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar26);
    }
    auVar34[0] = -(*pcVar1 == -1);
    auVar34[1] = -(pcVar1[1] == -1);
    auVar34[2] = -(pcVar1[2] == -1);
    auVar34[3] = -(pcVar1[3] == -1);
    auVar34[4] = -(pcVar1[4] == -1);
    auVar34[5] = -(pcVar1[5] == -1);
    auVar34[6] = -(pcVar1[6] == -1);
    auVar34[7] = -(pcVar1[7] == -1);
    auVar34[8] = -(pcVar1[8] == -1);
    auVar34[9] = -(pcVar1[9] == -1);
    auVar34[10] = -(pcVar1[10] == -1);
    auVar34[0xb] = -(pcVar1[0xb] == -1);
    auVar34[0xc] = -(pcVar1[0xc] == -1);
    auVar34[0xd] = -(pcVar1[0xd] == -1);
    auVar34[0xe] = -(pcVar1[0xe] == -1);
    auVar34[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
    uVar24 = uVar24 + lVar23 + 0x10;
    lVar23 = lVar23 + 0x10;
  }
  if (plVar29[2] == 0) {
    pdb_142dda2e0(plVar29,1,plVar29 + 4,CONCAT71((int7)(uVar24 >> 8),1));
    pauVar13 = (undefined1 (*) [16])*plVar29;
    uVar10 = plVar29[1];
    lVar20 = lStack_128;
  }
  uVar9 = uVar9 & uVar10;
  auVar32 = *(undefined1 (*) [16])(*pauVar13 + uVar9);
  uVar26 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar32[0xf] >> 7) << 0xf
  ;
  uVar22 = (uint)uVar26;
  if (uVar26 == 0) {
    lVar25 = 0x10;
    do {
      uVar9 = uVar9 + lVar25 & uVar10;
      auVar32 = *(undefined1 (*) [16])(*pauVar13 + uVar9);
      lVar25 = lVar25 + 0x10;
      uVar22 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
    } while (uVar22 == 0);
  }
  uVar8 = 0;
  for (; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
    uVar8 = uVar8 + 1;
  }
  uVar24 = uVar8 + uVar9 & uVar10;
  bVar31 = (*pauVar13)[uVar24];
  if (-1 < (char)bVar31) {
    auVar32 = *pauVar13;
    uVar22 = 0;
    for (uVar8 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar32[0xf] >> 7) << 0xf); (uVar8 & 1) == 0;
        uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar22 = uVar22 + 1;
    }
    uVar24 = (ulonglong)uVar22;
    bVar31 = (*pauVar13)[uVar24];
  }
  bVar30 = bVar30 >> 1;
  (*pauVar13)[uVar24] = bVar30;
  pauVar13[1][uVar24 - 0x10 & uVar10] = bVar30;
  pauVar15 = pauVar13 + uVar24 * -2;
  *(longlong *)pauVar13[uVar24 * -2 + -2] = lVar4;
  *(undefined8 *)(pauVar15[-2] + 8) = 0;
  *(undefined8 *)pauVar15[-1] = 8;
  *(undefined8 *)(pauVar15[-1] + 8) = 0;
  auVar35._0_8_ = CONCAT71(0,bVar31 & 1);
  auVar35._8_4_ = uVar6;
  auVar35._12_4_ = uVar7;
  plVar29[2] = plVar29[2] - auVar35._0_8_;
  plVar29[3] = plVar29[3] - auVar35._8_8_;
  goto LAB_140807e80;
  while( true ) {
    lStack_e8 = lVar25;
    auStack_e0 = auVar33;
    lStack_d0 = lVar28;
    pauStack_b0 = pauVar15;
    pdb_140f04aa0(&lStack_f0,&UNK_143007958);
    pauVar15 = (undefined1 (*) [16])(*pauStack_b0 + 8);
    lVar23 = lVar23 + -8;
    lVar20 = lStack_128;
    if (lVar23 == 0) break;
LAB_140807d90:
    lStack_f0 = *(longlong *)(pauVar15[-1] + 8);
    lVar20 = lStack_128;
    if ((int)lStack_f0 == 0) break;
  }
LAB_140807e80:
  auStack_e0 = ZEXT816(0);
  *puStack_150 = uStack_f4;
  uStack_b8 = *(undefined8 *)(lVar20 + 0x40);
  lStack_f0 = 0;
  lStack_e8 = 4;
  lStack_d0 = 4;
  lStack_c8 = 0;
  lVar25 = *(longlong *)(lVar20 + 0x30);
  uStack_c0 = lVar4;
  if (lVar25 == *(longlong *)(lVar20 + 0x20)) {
    pdb_142d7ee50(lStack_140);
  }
  lVar4 = *(longlong *)(lVar20 + 0x28);
  lVar23 = lVar25 * 0x40;
  puVar2 = (undefined4 *)(lVar4 + 0x30 + lVar23);
  *puVar2 = (undefined4)uStack_c0;
  puVar2[1] = uStack_c0._4_4_;
  puVar2[2] = (undefined4)uStack_b8;
  puVar2[3] = uStack_b8._4_4_;
  plVar21 = (longlong *)(lVar4 + 0x20 + lVar23);
  *plVar21 = lStack_d0;
  plVar21[1] = lStack_c8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar23);
  *puVar3 = auStack_e0._0_8_;
  puVar3[1] = auStack_e0._8_8_;
  *(longlong *)(lVar4 + lVar23) = lStack_f0;
  ((longlong *)(lVar4 + lVar23))[1] = lStack_e8;
  *(longlong *)(lVar20 + 0x30) = lVar25 + 1;
  *(longlong *)(lVar20 + 0x40) = *(longlong *)(lVar20 + 0x40) + 1;
  goto LAB_140807ac0;
}

