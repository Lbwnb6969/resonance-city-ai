// VA 0x1428ce3c0, PDB extent 4819 bytes
// system_color::set_decorator_color_id::set_decorator_color_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_decorator_color_id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::set_decorator_color_id::set_decorator_color_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_decorator_color_id.rs
   Extent: 4819 */

void pdb_1428ce3c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9,undefined8 *param_10,undefined8 *param_11)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  int *piVar17;
  undefined4 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  byte *pbVar22;
  ulonglong uVar23;
  byte *pbVar24;
  ulonglong uVar25;
  undefined1 uVar26;
  byte *pbVar27;
  byte *pbVar28;
  ulonglong uVar29;
  ulonglong *puVar30;
  byte *pbVar31;
  ulonglong *puVar32;
  undefined4 uStack_104;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  ulonglong *puStack_d0;
  byte *pbStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined3 uStack_b0;
  undefined5 uStack_ad;
  longlong lStack_a8;
  byte *pbStack_a0;
  undefined4 uStack_94;
  byte *pbStack_90;
  byte *pbStack_88;
  ulonglong *puStack_80;
  byte *pbStack_78;
  undefined4 uStack_6c;
  ulonglong *puStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puStack_80 = (ulonglong *)*param_2;
  lVar14 = param_2[1];
  uVar6 = *puStack_80;
  uVar23 = 0;
  uVar25 = uVar6 - *(ulonglong *)(lVar14 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar14 + 0x18)) {
    uVar25 = uVar23;
  }
  uVar29 = uVar6 - *(ulonglong *)(lVar14 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar14 + 0x38)) {
    uVar29 = uVar23;
  }
  puVar30 = (ulonglong *)(uVar25 * 0x18 + *(longlong *)(lVar14 + 8));
  uVar6 = *(ulonglong *)(lVar14 + 0x10) - uVar25;
  if (*(ulonglong *)(lVar14 + 0x10) < uVar25) {
    puVar30 = (ulonglong *)0x8;
    uVar6 = uVar23;
  }
  pbStack_a0 = (byte *)(uVar29 * 0x18 + *(longlong *)(lVar14 + 0x28));
  uVar25 = *(ulonglong *)(lVar14 + 0x30) - uVar29;
  if (*(ulonglong *)(lVar14 + 0x30) < uVar29) {
    pbStack_a0 = (byte *)0x8;
    uVar25 = uVar23;
  }
  *puStack_80 = (*(longlong *)(lVar14 + 0x40) - uVar25) - uVar6;
  pbStack_90 = (byte *)((longlong)puVar30 + uVar6 * 0x18);
  puStack_d0 = (ulonglong *)(pbStack_a0 + uVar25 * 0x18);
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar7 = *param_1;
  puVar8 = (undefined4 *)param_1[2];
  uVar9 = *param_10;
  uVar10 = *param_11;
  uStack_94 = *(undefined4 *)((longlong)param_9 + 0x1c);
  lStack_a8 = *param_9;
  puVar11 = (undefined4 *)param_9[2];
  lVar14 = lStack_a8 + 0x20;
  if (puVar30 != (ulonglong *)0x0) goto LAB_1428ce4df;
  do {
    if ((pbStack_a0 == (byte *)0x0) || ((ulonglong *)pbStack_a0 == puStack_d0)) {
      puStack_68 = (ulonglong *)*param_3;
      lVar16 = param_3[1];
      uVar6 = *puStack_68;
      uVar23 = 0;
      uVar25 = uVar6 - *(ulonglong *)(lVar16 + 0x18);
      if (uVar6 < *(ulonglong *)(lVar16 + 0x18)) {
        uVar25 = uVar23;
      }
      uVar29 = uVar6 - *(ulonglong *)(lVar16 + 0x38);
      if (uVar6 < *(ulonglong *)(lVar16 + 0x38)) {
        uVar29 = uVar23;
      }
      lVar20 = uVar25 * 0x18 + *(longlong *)(lVar16 + 8);
      uVar6 = *(ulonglong *)(lVar16 + 0x10) - uVar25;
      if (*(ulonglong *)(lVar16 + 0x10) < uVar25) {
        lVar20 = 8;
        uVar6 = uVar23;
      }
      lVar19 = uVar29 * 0x18 + *(longlong *)(lVar16 + 0x28);
      uVar25 = *(ulonglong *)(lVar16 + 0x30) - uVar29;
      if (*(ulonglong *)(lVar16 + 0x30) < uVar29) {
        lVar19 = 8;
        uVar25 = uVar23;
      }
      *puStack_68 = (*(longlong *)(lVar16 + 0x40) - uVar25) - uVar6;
      puStack_80 = (ulonglong *)(lVar20 + uVar6 * 0x18);
      pbStack_a0 = (byte *)(lVar19 + uVar25 * 0x18);
      do {
        if ((lVar20 == 0) || ((ulonglong *)lVar20 == puStack_80)) {
          if ((lVar19 == 0) || ((byte *)lVar19 == pbStack_a0)) {
            puStack_80 = (ulonglong *)*param_4;
            lVar16 = param_4[1];
            uVar6 = *puStack_80;
            uVar23 = 0;
            uVar25 = uVar6 - *(ulonglong *)(lVar16 + 0x18);
            if (uVar6 < *(ulonglong *)(lVar16 + 0x18)) {
              uVar25 = uVar23;
            }
            uVar29 = uVar6 - *(ulonglong *)(lVar16 + 0x38);
            if (uVar6 < *(ulonglong *)(lVar16 + 0x38)) {
              uVar29 = uVar23;
            }
            pbVar22 = (byte *)(uVar25 * 0x18 + *(longlong *)(lVar16 + 8));
            uVar6 = *(ulonglong *)(lVar16 + 0x10) - uVar25;
            if (*(ulonglong *)(lVar16 + 0x10) < uVar25) {
              pbVar22 = (byte *)0x8;
              uVar6 = uVar23;
            }
            pbVar31 = (byte *)(uVar29 * 0x18 + *(longlong *)(lVar16 + 0x28));
            uVar25 = *(ulonglong *)(lVar16 + 0x30) - uVar29;
            if (*(ulonglong *)(lVar16 + 0x30) < uVar29) {
              pbVar31 = (byte *)0x8;
              uVar25 = uVar23;
            }
            *puStack_80 = (*(longlong *)(lVar16 + 0x40) - uVar25) - uVar6;
            pbStack_a0 = pbVar22 + uVar6 * 0x18;
            pbStack_90 = pbVar31 + uVar25 * 0x18;
            do {
              if ((pbVar22 == (byte *)0x0) || (pbVar22 == pbStack_a0)) {
                if ((pbVar31 == (byte *)0x0) || (pbVar31 == pbStack_90)) {
                  puVar30 = (ulonglong *)*param_5;
                  lVar16 = param_5[1];
                  uVar6 = *puVar30;
                  uVar23 = 0;
                  uVar25 = uVar6 - *(ulonglong *)(lVar16 + 0x18);
                  if (uVar6 < *(ulonglong *)(lVar16 + 0x18)) {
                    uVar25 = uVar23;
                  }
                  uVar29 = uVar6 - *(ulonglong *)(lVar16 + 0x38);
                  if (uVar6 < *(ulonglong *)(lVar16 + 0x38)) {
                    uVar29 = uVar23;
                  }
                  pbVar22 = (byte *)(uVar25 * 0x10 + *(longlong *)(lVar16 + 8));
                  uVar6 = *(ulonglong *)(lVar16 + 0x10) - uVar25;
                  if (*(ulonglong *)(lVar16 + 0x10) < uVar25) {
                    pbVar22 = (byte *)0x8;
                    uVar6 = uVar23;
                  }
                  puVar32 = (ulonglong *)(uVar29 * 0x10 + *(longlong *)(lVar16 + 0x28));
                  uVar25 = *(ulonglong *)(lVar16 + 0x30) - uVar29;
                  if (*(ulonglong *)(lVar16 + 0x30) < uVar29) {
                    puVar32 = (ulonglong *)0x8;
                    uVar25 = uVar23;
                  }
                  *puVar30 = (*(longlong *)(lVar16 + 0x40) - uVar25) - uVar6;
                  pbStack_a0 = pbVar22 + uVar6 * 0x10;
                  pbStack_c8 = (byte *)((longlong)puVar32 + uVar25 * 0x10);
                  puStack_d0 = puVar30;
                  do {
                    if ((pbVar22 == (byte *)0x0) || (pbVar22 == pbStack_a0)) {
                      if ((puVar32 == (ulonglong *)0x0) || (puVar32 == (ulonglong *)pbStack_c8)) {
                        puVar30 = (ulonglong *)*param_6;
                        lVar16 = param_6[1];
                        uVar6 = *puVar30;
                        uVar23 = 0;
                        uVar25 = uVar6 - *(ulonglong *)(lVar16 + 0x18);
                        if (uVar6 < *(ulonglong *)(lVar16 + 0x18)) {
                          uVar25 = uVar23;
                        }
                        uVar29 = uVar6 - *(ulonglong *)(lVar16 + 0x38);
                        if (uVar6 < *(ulonglong *)(lVar16 + 0x38)) {
                          uVar29 = uVar23;
                        }
                        pbVar22 = (byte *)(uVar25 * 0x10 + *(longlong *)(lVar16 + 8));
                        uVar6 = *(ulonglong *)(lVar16 + 0x10) - uVar25;
                        if (*(ulonglong *)(lVar16 + 0x10) < uVar25) {
                          pbVar22 = (byte *)0x8;
                          uVar6 = uVar23;
                        }
                        puVar32 = (ulonglong *)(uVar29 * 0x10 + *(longlong *)(lVar16 + 0x28));
                        uVar25 = *(ulonglong *)(lVar16 + 0x30) - uVar29;
                        if (*(ulonglong *)(lVar16 + 0x30) < uVar29) {
                          puVar32 = (ulonglong *)0x8;
                          uVar25 = uVar23;
                        }
                        *puVar30 = (*(longlong *)(lVar16 + 0x40) - uVar25) - uVar6;
                        pbStack_a0 = pbVar22 + uVar6 * 0x10;
                        pbStack_c8 = (byte *)((longlong)puVar32 + uVar25 * 0x10);
                        puStack_d0 = puVar30;
                        do {
                          if ((pbVar22 == (byte *)0x0) || (pbVar22 == pbStack_a0)) {
                            if ((puVar32 == (ulonglong *)0x0) ||
                               (puVar32 == (ulonglong *)pbStack_c8)) {
                              puVar30 = (ulonglong *)*param_7;
                              lVar16 = param_7[1];
                              uVar6 = *puVar30;
                              uVar23 = 0;
                              uVar25 = uVar6 - *(ulonglong *)(lVar16 + 0x18);
                              if (uVar6 < *(ulonglong *)(lVar16 + 0x18)) {
                                uVar25 = uVar23;
                              }
                              uVar29 = uVar6 - *(ulonglong *)(lVar16 + 0x38);
                              if (uVar6 < *(ulonglong *)(lVar16 + 0x38)) {
                                uVar29 = uVar23;
                              }
                              pbVar22 = (byte *)(uVar25 * 0x10 + *(longlong *)(lVar16 + 8));
                              uVar6 = *(ulonglong *)(lVar16 + 0x10) - uVar25;
                              if (*(ulonglong *)(lVar16 + 0x10) < uVar25) {
                                pbVar22 = (byte *)0x8;
                                uVar6 = uVar23;
                              }
                              puVar32 = (ulonglong *)(uVar29 * 0x10 + *(longlong *)(lVar16 + 0x28));
                              uVar25 = *(ulonglong *)(lVar16 + 0x30) - uVar29;
                              if (*(ulonglong *)(lVar16 + 0x30) < uVar29) {
                                puVar32 = (ulonglong *)0x8;
                                uVar25 = uVar23;
                              }
                              *puVar30 = (*(longlong *)(lVar16 + 0x40) - uVar25) - uVar6;
                              pbStack_a0 = pbVar22 + uVar6 * 0x10;
                              pbStack_c8 = (byte *)((longlong)puVar32 + uVar25 * 0x10);
                              puStack_d0 = puVar30;
                              do {
                                if ((pbVar22 == (byte *)0x0) || (pbVar22 == pbStack_a0)) {
                                  if ((puVar32 == (ulonglong *)0x0) ||
                                     (puVar32 == (ulonglong *)pbStack_c8)) {
                                    puVar30 = (ulonglong *)*param_8;
                                    lVar16 = param_8[1];
                                    uVar6 = *puVar30;
                                    uVar23 = 0;
                                    uVar25 = uVar6 - *(ulonglong *)(lVar16 + 0x18);
                                    if (uVar6 < *(ulonglong *)(lVar16 + 0x18)) {
                                      uVar25 = uVar23;
                                    }
                                    uVar29 = uVar6 - *(ulonglong *)(lVar16 + 0x38);
                                    if (uVar6 < *(ulonglong *)(lVar16 + 0x38)) {
                                      uVar29 = uVar23;
                                    }
                                    pbVar22 = (byte *)(uVar25 * 0x18 + *(longlong *)(lVar16 + 8));
                                    uVar6 = *(ulonglong *)(lVar16 + 0x10) - uVar25;
                                    if (*(ulonglong *)(lVar16 + 0x10) < uVar25) {
                                      pbVar22 = (byte *)0x8;
                                      uVar6 = uVar23;
                                    }
                                    puVar32 = (ulonglong *)
                                              (uVar29 * 0x18 + *(longlong *)(lVar16 + 0x28));
                                    uVar25 = *(ulonglong *)(lVar16 + 0x30) - uVar29;
                                    if (*(ulonglong *)(lVar16 + 0x30) < uVar29) {
                                      puVar32 = (ulonglong *)0x8;
                                      uVar25 = uVar23;
                                    }
                                    *puVar30 = (*(longlong *)(lVar16 + 0x40) - uVar25) - uVar6;
                                    pbStack_a0 = pbVar22 + uVar6 * 0x18;
                                    pbStack_c8 = (byte *)((longlong)puVar32 + uVar25 * 0x18);
                                    puStack_d0 = puVar30;
                                    do {
                                      if ((pbVar22 == (byte *)0x0) || (pbVar22 == pbStack_a0)) {
                                        if ((puVar32 == (ulonglong *)0x0) ||
                                           (puVar32 == (ulonglong *)pbStack_c8)) {
                                          return;
                                        }
                                        pbVar24 = (byte *)((longlong)puVar32 + 0x18);
                                        pbVar31 = (byte *)0x0;
                                        pbVar28 = (byte *)puVar32;
                                      }
                                      else {
                                        pbVar31 = pbVar22 + 0x18;
                                        pbVar28 = pbVar22;
                                        pbVar24 = (byte *)puVar32;
                                      }
                                      *puVar30 = *puVar30 + 1;
                                      *puVar8 = uStack_6c;
                                      puStack_80 = (ulonglong *)
                                                   CONCAT44(puStack_80._4_4_,
                                                            *(undefined4 *)(pbVar28 + 8));
                                      puStack_68 = (ulonglong *)pbVar24;
                                      piVar17 = (int *)pdb_140c40a30(uVar7);
                                      pbVar22 = pbVar31;
                                      puVar32 = (ulonglong *)pbVar24;
                                      if ((piVar17 != (int *)0x0) &&
                                         (puVar32 = puStack_68, *piVar17 == 7)) {
                                        pbStack_78 = pbVar31;
                                        pdb_140a60320(&uStack_c0,uVar9,
                                                      (ulonglong)puStack_80 & 0xffffffff);
                                        pbStack_88 = (byte *)CONCAT17(uStack_b9,uStack_c0);
                                        pbVar31 = (byte *)CONCAT44(uStack_b4,uStack_b8);
                                        pbVar22 = pbVar31 + CONCAT53(uStack_ad,uStack_b0) * 4;
                                        pbStack_90 = pbVar31;
                                        for (; pbVar31 != pbVar22; pbVar31 = pbVar31 + 4) {
                                          uVar3 = *(undefined4 *)pbVar31;
                                          *puVar8 = uStack_6c;
                                          lVar16 = pdb_140c40a30(uVar7,uVar3);
                                          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                            pdb_142dc8150(&UNK_1435af6b8);
                                          }
                                          uVar3 = *(undefined4 *)(pbVar28 + 0xc);
                                          lVar16 = pdb_140901490(lVar16 + 0x38,&UNK_1435af6d0);
                                          *(undefined4 *)(lVar16 + 0x10) = uVar3;
                                        }
                                        if (pbStack_88 != (byte *)0x0) {
                                          pub_1406abac0(pbStack_90,(longlong)pbStack_88 << 2,4);
                                        }
                                        puVar30 = puStack_d0;
                                        pbVar22 = pbStack_78;
                                        puVar32 = puStack_68;
                                        if (pbVar28[0x10] == 1) {
                                          pdb_140c45db0(&uStack_dc,uVar10,
                                                        (ulonglong)puStack_80 & 0xffffffff,
                                                        &UNK_1435af6a0);
                                          uStack_b0 = (undefined3)((uint)uStack_d4 >> 8);
                                          uStack_b9 = (undefined1)uStack_dc;
                                          uStack_b8 = (undefined4)((ulonglong)uStack_dc >> 8);
                                          uStack_b4._0_3_ =
                                               (undefined3)((ulonglong)uStack_dc >> 0x28);
                                          uStack_b4 = CONCAT13((char)uStack_d4,(undefined3)uStack_b4
                                                              );
                                          *puVar11 = uStack_94;
                                          lVar16 = *(longlong *)(lStack_a8 + 0x30);
                                          uVar12 = *(undefined8 *)(lStack_a8 + 0x40);
                                          if (lVar16 == *(longlong *)(lStack_a8 + 0x20)) {
                                            pdb_142d7e6e0(lVar14);
                                          }
                                          lVar20 = *(longlong *)(lStack_a8 + 0x28);
                                          lVar19 = lVar16 * 0x20;
                                          *(undefined8 *)(lVar20 + lVar19) = uVar12;
                                          *(undefined1 *)(lVar20 + 8 + lVar19) = 10;
                                          *(uint *)(lVar20 + 0x18 + lVar19) =
                                               CONCAT31(uStack_b0,uStack_b4._3_1_);
                                          puVar1 = (undefined8 *)(lVar20 + 9 + lVar19);
                                          *puVar1 = CONCAT17(uStack_b9,uStack_c0);
                                          puVar1[1] = CONCAT44(uStack_b4,uStack_b8);
                                          *(longlong *)(lStack_a8 + 0x30) = lVar16 + 1;
                                          *(longlong *)(lStack_a8 + 0x40) =
                                               *(longlong *)(lStack_a8 + 0x40) + 1;
                                          pbVar22 = pbStack_78;
                                          puVar32 = puStack_68;
                                        }
                                      }
                                    } while( true );
                                  }
                                  pbVar24 = (byte *)((longlong)puVar32 + 0x10);
                                  pbVar31 = (byte *)0x0;
                                  pbVar28 = (byte *)puVar32;
                                }
                                else {
                                  pbVar31 = pbVar22 + 0x10;
                                  pbVar28 = pbVar22;
                                  pbVar24 = (byte *)puVar32;
                                }
                                *puVar30 = *puVar30 + 1;
                                *puVar8 = uStack_6c;
                                puStack_80 = (ulonglong *)
                                             CONCAT44(puStack_80._4_4_,*(undefined4 *)(pbVar28 + 8))
                                ;
                                puStack_68 = (ulonglong *)pbVar24;
                                piVar17 = (int *)pdb_140c40a30(uVar7);
                                pbVar22 = pbVar31;
                                puVar32 = (ulonglong *)pbVar24;
                                if ((piVar17 != (int *)0x0) && (puVar32 = puStack_68, *piVar17 == 7)
                                   ) {
                                  pbStack_78 = pbVar31;
                                  pdb_140a60320(&uStack_c0,uVar9,(ulonglong)puStack_80 & 0xffffffff)
                                  ;
                                  pbStack_88 = (byte *)CONCAT17(uStack_b9,uStack_c0);
                                  pbVar31 = (byte *)CONCAT44(uStack_b4,uStack_b8);
                                  pbVar22 = pbVar31 + CONCAT53(uStack_ad,uStack_b0) * 4;
                                  pbStack_90 = pbVar31;
                                  for (; pbVar31 != pbVar22; pbVar31 = pbVar31 + 4) {
                                    uVar3 = *(undefined4 *)pbVar31;
                                    *puVar8 = uStack_6c;
                                    lVar16 = pdb_140c40a30(uVar7,uVar3);
                                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                      pdb_142dc8150(&UNK_1435af700);
                                    }
                                    bVar2 = pbVar28[0xc];
                                    lVar16 = pdb_140901490(lVar16 + 0x38,&UNK_1435af718);
                                    *(byte *)(lVar16 + 0x16) = bVar2;
                                  }
                                  if (pbStack_88 != (byte *)0x0) {
                                    pub_1406abac0(pbStack_90,(longlong)pbStack_88 << 2,4);
                                  }
                                  puVar30 = puStack_d0;
                                  pbVar22 = pbStack_78;
                                  puVar32 = puStack_68;
                                  if (pbVar28[0xd] == 1) {
                                    pdb_140c45db0(&uStack_dc,uVar10,
                                                  (ulonglong)puStack_80 & 0xffffffff,&UNK_1435af6e8)
                                    ;
                                    uStack_b0 = (undefined3)((uint)uStack_d4 >> 8);
                                    uStack_b9 = (undefined1)uStack_dc;
                                    uStack_b8 = (undefined4)((ulonglong)uStack_dc >> 8);
                                    uStack_b4._0_3_ = (undefined3)((ulonglong)uStack_dc >> 0x28);
                                    uStack_b4 = CONCAT13((char)uStack_d4,(undefined3)uStack_b4);
                                    *puVar11 = uStack_94;
                                    lVar16 = *(longlong *)(lStack_a8 + 0x30);
                                    uVar12 = *(undefined8 *)(lStack_a8 + 0x40);
                                    if (lVar16 == *(longlong *)(lStack_a8 + 0x20)) {
                                      pdb_142d7e6e0(lVar14);
                                    }
                                    lVar20 = *(longlong *)(lStack_a8 + 0x28);
                                    lVar19 = lVar16 * 0x20;
                                    *(undefined8 *)(lVar20 + lVar19) = uVar12;
                                    *(undefined1 *)(lVar20 + 8 + lVar19) = 10;
                                    *(uint *)(lVar20 + 0x18 + lVar19) =
                                         CONCAT31(uStack_b0,uStack_b4._3_1_);
                                    puVar1 = (undefined8 *)(lVar20 + 9 + lVar19);
                                    *puVar1 = CONCAT17(uStack_b9,uStack_c0);
                                    puVar1[1] = CONCAT44(uStack_b4,uStack_b8);
                                    *(longlong *)(lStack_a8 + 0x30) = lVar16 + 1;
                                    *(longlong *)(lStack_a8 + 0x40) =
                                         *(longlong *)(lStack_a8 + 0x40) + 1;
                                    pbVar22 = pbStack_78;
                                    puVar32 = puStack_68;
                                  }
                                }
                              } while( true );
                            }
                            pbVar24 = (byte *)((longlong)puVar32 + 0x10);
                            pbVar31 = (byte *)0x0;
                            pbVar28 = (byte *)puVar32;
                          }
                          else {
                            pbVar31 = pbVar22 + 0x10;
                            pbVar28 = pbVar22;
                            pbVar24 = (byte *)puVar32;
                          }
                          *puVar30 = *puVar30 + 1;
                          *puVar8 = uStack_6c;
                          puStack_80 = (ulonglong *)
                                       CONCAT44(puStack_80._4_4_,*(undefined4 *)(pbVar28 + 8));
                          puStack_68 = (ulonglong *)pbVar24;
                          piVar17 = (int *)pdb_140c40a30(uVar7);
                          pbVar22 = pbVar31;
                          puVar32 = (ulonglong *)pbVar24;
                          if ((piVar17 != (int *)0x0) && (puVar32 = puStack_68, *piVar17 == 7)) {
                            pbStack_78 = pbVar31;
                            pdb_140a60320(&uStack_c0,uVar9,(ulonglong)puStack_80 & 0xffffffff);
                            pbStack_88 = (byte *)CONCAT17(uStack_b9,uStack_c0);
                            pbVar31 = (byte *)CONCAT44(uStack_b4,uStack_b8);
                            pbVar22 = pbVar31 + CONCAT53(uStack_ad,uStack_b0) * 4;
                            pbStack_90 = pbVar31;
                            for (; pbVar31 != pbVar22; pbVar31 = pbVar31 + 4) {
                              uVar3 = *(undefined4 *)pbVar31;
                              *puVar8 = uStack_6c;
                              lVar16 = pdb_140c40a30(uVar7,uVar3);
                              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                pdb_142dc8150(&UNK_1435af748);
                              }
                              bVar2 = pbVar28[0xc];
                              lVar16 = pdb_140901490(lVar16 + 0x38,&UNK_1435af760);
                              *(byte *)(lVar16 + 0x15) = bVar2;
                            }
                            if (pbStack_88 != (byte *)0x0) {
                              pub_1406abac0(pbStack_90,(longlong)pbStack_88 << 2,4);
                            }
                            puVar30 = puStack_d0;
                            pbVar22 = pbStack_78;
                            puVar32 = puStack_68;
                            if (pbVar28[0xd] == 1) {
                              pdb_140c45db0(&uStack_dc,uVar10,(ulonglong)puStack_80 & 0xffffffff,
                                            &UNK_1435af730);
                              uStack_b0 = (undefined3)((uint)uStack_d4 >> 8);
                              uStack_b9 = (undefined1)uStack_dc;
                              uStack_b8 = (undefined4)((ulonglong)uStack_dc >> 8);
                              uStack_b4._0_3_ = (undefined3)((ulonglong)uStack_dc >> 0x28);
                              uStack_b4 = CONCAT13((char)uStack_d4,(undefined3)uStack_b4);
                              *puVar11 = uStack_94;
                              lVar16 = *(longlong *)(lStack_a8 + 0x30);
                              uVar12 = *(undefined8 *)(lStack_a8 + 0x40);
                              if (lVar16 == *(longlong *)(lStack_a8 + 0x20)) {
                                pdb_142d7e6e0(lVar14);
                              }
                              lVar20 = *(longlong *)(lStack_a8 + 0x28);
                              lVar19 = lVar16 * 0x20;
                              *(undefined8 *)(lVar20 + lVar19) = uVar12;
                              *(undefined1 *)(lVar20 + 8 + lVar19) = 10;
                              *(uint *)(lVar20 + 0x18 + lVar19) =
                                   CONCAT31(uStack_b0,uStack_b4._3_1_);
                              puVar1 = (undefined8 *)(lVar20 + 9 + lVar19);
                              *puVar1 = CONCAT17(uStack_b9,uStack_c0);
                              puVar1[1] = CONCAT44(uStack_b4,uStack_b8);
                              *(longlong *)(lStack_a8 + 0x30) = lVar16 + 1;
                              *(longlong *)(lStack_a8 + 0x40) = *(longlong *)(lStack_a8 + 0x40) + 1;
                              pbVar22 = pbStack_78;
                              puVar32 = puStack_68;
                            }
                          }
                        } while( true );
                      }
                      pbVar24 = (byte *)((longlong)puVar32 + 0x10);
                      pbVar31 = (byte *)0x0;
                      pbVar28 = (byte *)puVar32;
                    }
                    else {
                      pbVar31 = pbVar22 + 0x10;
                      pbVar28 = pbVar22;
                      pbVar24 = (byte *)puVar32;
                    }
                    *puVar30 = *puVar30 + 1;
                    *puVar8 = uStack_6c;
                    puStack_80 = (ulonglong *)
                                 CONCAT44(puStack_80._4_4_,*(undefined4 *)(pbVar28 + 8));
                    puStack_68 = (ulonglong *)pbVar24;
                    piVar17 = (int *)pdb_140c40a30(uVar7);
                    pbVar22 = pbVar31;
                    puVar32 = (ulonglong *)pbVar24;
                    if ((piVar17 != (int *)0x0) && (puVar32 = puStack_68, *piVar17 == 7)) {
                      pbStack_78 = pbVar31;
                      pdb_140a60320(&uStack_c0,uVar9,(ulonglong)puStack_80 & 0xffffffff);
                      pbStack_88 = (byte *)CONCAT17(uStack_b9,uStack_c0);
                      pbVar31 = (byte *)CONCAT44(uStack_b4,uStack_b8);
                      pbVar22 = pbVar31 + CONCAT53(uStack_ad,uStack_b0) * 4;
                      pbStack_90 = pbVar31;
                      for (; pbVar31 != pbVar22; pbVar31 = pbVar31 + 4) {
                        uVar3 = *(undefined4 *)pbVar31;
                        *puVar8 = uStack_6c;
                        lVar16 = pdb_140c40a30(uVar7,uVar3);
                        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc8150(&UNK_1435af790);
                        }
                        bVar2 = pbVar28[0xc];
                        lVar16 = pdb_140901490(lVar16 + 0x38,&UNK_1435af7a8);
                        *(byte *)(lVar16 + 0x14) = bVar2;
                      }
                      if (pbStack_88 != (byte *)0x0) {
                        pub_1406abac0(pbStack_90,(longlong)pbStack_88 << 2,4);
                      }
                      puVar30 = puStack_d0;
                      pbVar22 = pbStack_78;
                      puVar32 = puStack_68;
                      if (pbVar28[0xd] == 1) {
                        pdb_140c45db0(&uStack_dc,uVar10,(ulonglong)puStack_80 & 0xffffffff,
                                      &UNK_1435af778);
                        uStack_b0 = (undefined3)((uint)uStack_d4 >> 8);
                        uStack_b9 = (undefined1)uStack_dc;
                        uStack_b8 = (undefined4)((ulonglong)uStack_dc >> 8);
                        uStack_b4._0_3_ = (undefined3)((ulonglong)uStack_dc >> 0x28);
                        uStack_b4 = CONCAT13((char)uStack_d4,(undefined3)uStack_b4);
                        *puVar11 = uStack_94;
                        lVar16 = *(longlong *)(lStack_a8 + 0x30);
                        uVar12 = *(undefined8 *)(lStack_a8 + 0x40);
                        if (lVar16 == *(longlong *)(lStack_a8 + 0x20)) {
                          pdb_142d7e6e0(lVar14);
                        }
                        lVar20 = *(longlong *)(lStack_a8 + 0x28);
                        lVar19 = lVar16 * 0x20;
                        *(undefined8 *)(lVar20 + lVar19) = uVar12;
                        *(undefined1 *)(lVar20 + 8 + lVar19) = 10;
                        *(uint *)(lVar20 + 0x18 + lVar19) = CONCAT31(uStack_b0,uStack_b4._3_1_);
                        puVar1 = (undefined8 *)(lVar20 + 9 + lVar19);
                        *puVar1 = CONCAT17(uStack_b9,uStack_c0);
                        puVar1[1] = CONCAT44(uStack_b4,uStack_b8);
                        *(longlong *)(lStack_a8 + 0x30) = lVar16 + 1;
                        *(longlong *)(lStack_a8 + 0x40) = *(longlong *)(lStack_a8 + 0x40) + 1;
                        pbVar22 = pbStack_78;
                        puVar32 = puStack_68;
                      }
                    }
                  } while( true );
                }
                pbVar28 = pbVar31 + 0x18;
                pbVar24 = (byte *)0x0;
                pbVar27 = pbVar31;
              }
              else {
                pbVar24 = pbVar22 + 0x18;
                pbVar27 = pbVar22;
                pbVar28 = pbVar31;
              }
              *puStack_80 = *puStack_80 + 1;
              *puVar8 = uStack_6c;
              puStack_68 = (ulonglong *)CONCAT44(puStack_68._4_4_,*(undefined4 *)(pbVar27 + 8));
              piVar17 = (int *)pdb_140c40a30(uVar7);
              pbVar22 = pbVar24;
              pbVar31 = pbVar28;
              if ((piVar17 != (int *)0x0) && (*piVar17 == 7)) {
                pbStack_88 = pbVar24;
                pbStack_78 = pbVar28;
                pdb_140a60320(&uStack_c0,uVar9,(ulonglong)puStack_68 & 0xffffffff);
                pbStack_c8 = (byte *)CONCAT17(uStack_b9,uStack_c0);
                pbVar31 = (byte *)CONCAT44(uStack_b4,uStack_b8);
                pbVar22 = pbVar31 + CONCAT53(uStack_ad,uStack_b0) * 4;
                puStack_d0 = (ulonglong *)pbVar31;
                while (pbVar31 != pbVar22) {
                  uVar3 = *(undefined4 *)pbVar31;
                  *puVar8 = uStack_6c;
                  lVar16 = pdb_140c40a30(uVar7,uVar3);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_1435af7d8);
                  }
                  lVar16 = pdb_140901490(lVar16 + 0x38,&UNK_1435af7f0);
                  pbVar31 = pbVar31 + 4;
                  bVar2 = pbVar27[0x10];
                  uVar3 = *(undefined4 *)(pbVar27 + 0xc);
                  if ((bVar2 == 1) || (*(undefined4 *)(lVar16 + 8) = uVar3, bVar2 != 0)) {
                    *(undefined4 *)(lVar16 + 0xc) = uVar3;
                  }
                }
                if (pbStack_c8 != (byte *)0x0) {
                  pub_1406abac0((byte *)puStack_d0,(longlong)pbStack_c8 << 2,4);
                }
                pbVar22 = pbStack_88;
                pbVar31 = pbStack_78;
                if (pbVar27[0x11] == 1) {
                  pdb_140c45db0(&uStack_dc,uVar10,(ulonglong)puStack_68 & 0xffffffff,&UNK_1435af7c0)
                  ;
                  uStack_b0 = (undefined3)((uint)uStack_d4 >> 8);
                  uStack_b9 = (undefined1)uStack_dc;
                  uStack_b8 = (undefined4)((ulonglong)uStack_dc >> 8);
                  uStack_b4._0_3_ = (undefined3)((ulonglong)uStack_dc >> 0x28);
                  uStack_b4 = CONCAT13((char)uStack_d4,(undefined3)uStack_b4);
                  *puVar11 = uStack_94;
                  lVar16 = *(longlong *)(lStack_a8 + 0x30);
                  uVar12 = *(undefined8 *)(lStack_a8 + 0x40);
                  if (lVar16 == *(longlong *)(lStack_a8 + 0x20)) {
                    pdb_142d7e6e0(lVar14);
                  }
                  lVar20 = *(longlong *)(lStack_a8 + 0x28);
                  lVar19 = lVar16 * 0x20;
                  *(undefined8 *)(lVar20 + lVar19) = uVar12;
                  *(undefined1 *)(lVar20 + 8 + lVar19) = 10;
                  *(uint *)(lVar20 + 0x18 + lVar19) = CONCAT31(uStack_b0,uStack_b4._3_1_);
                  puVar1 = (undefined8 *)(lVar20 + 9 + lVar19);
                  *puVar1 = CONCAT17(uStack_b9,uStack_c0);
                  puVar1[1] = CONCAT44(uStack_b4,uStack_b8);
                  *(longlong *)(lStack_a8 + 0x30) = lVar16 + 1;
                  *(longlong *)(lStack_a8 + 0x40) = *(longlong *)(lStack_a8 + 0x40) + 1;
                  pbVar22 = pbStack_88;
                  pbVar31 = pbStack_78;
                }
              }
            } while( true );
          }
          lVar16 = lVar19 + 0x18;
          lVar13 = 0;
          lVar21 = lVar19;
        }
        else {
          lVar16 = lVar19;
          lVar13 = lVar20 + 0x18;
          lVar21 = lVar20;
        }
        lVar20 = lVar13;
        lVar19 = lVar16;
        *puStack_68 = *puStack_68 + 1;
        *puVar8 = uStack_6c;
        uVar3 = *(undefined4 *)(lVar21 + 8);
        piVar17 = (int *)pdb_140c40a30(uVar7);
        if ((piVar17 != (int *)0x0) && (*piVar17 == 4)) {
          uVar4 = *(undefined4 *)(lVar21 + 0xc);
          puVar18 = (undefined4 *)pdb_1409013f0(piVar17 + 0xe);
          *puVar18 = uVar4;
          if (*(char *)(lVar21 + 0x10) == '\x01') {
            pdb_140c45db0(&uStack_c0,uVar10,uVar3,&UNK_1435af820);
            *puVar11 = uStack_94;
            lVar16 = *(longlong *)(lStack_a8 + 0x30);
            uVar12 = *(undefined8 *)(lStack_a8 + 0x40);
            if (lVar16 == *(longlong *)(lStack_a8 + 0x20)) {
              pdb_142d7e6e0(lVar14);
            }
            lVar13 = *(longlong *)(lStack_a8 + 0x28);
            lVar21 = lVar16 * 0x20;
            *(undefined8 *)(lVar13 + lVar21) = uVar12;
            *(undefined1 *)(lVar13 + 8 + lVar21) = 0xe;
            *(undefined4 *)(lVar13 + 0xc + lVar21) = uVar4;
            *(undefined4 *)(lVar13 + 0x18 + lVar21) = uStack_b8;
            *(ulonglong *)(lVar13 + 0x10 + lVar21) = CONCAT17(uStack_b9,uStack_c0);
            *(longlong *)(lStack_a8 + 0x30) = lVar16 + 1;
            *(longlong *)(lStack_a8 + 0x40) = *(longlong *)(lStack_a8 + 0x40) + 1;
          }
        }
      } while( true );
    }
    puVar32 = (ulonglong *)0x0;
    puVar30 = (ulonglong *)pbStack_a0;
    pbStack_a0 = pbStack_a0 + 0x18;
    while( true ) {
      *puStack_80 = *puStack_80 + 1;
      *puVar8 = uStack_6c;
      uVar3 = *(undefined4 *)((longlong)puVar30 + 8);
      plVar15 = (longlong *)pdb_140c40a30(uVar7);
      if (plVar15 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1435af838);
      }
      uVar4 = *(undefined4 *)((longlong)puVar30 + 0xc);
      *(undefined4 *)(plVar15 + 10) = uVar4;
      pbVar22 = (byte *)*plVar15;
      if (pbVar22 == (byte *)0x7) {
        pbStack_88 = pbVar22;
        puStack_68 = puVar32;
        pdb_140a60320(&uStack_c0,uVar9,uVar3);
        pbStack_78 = (byte *)CONCAT17(uStack_b9,uStack_c0);
        pbVar24 = (byte *)CONCAT44(uStack_b4,uStack_b8);
        pbVar31 = pbVar24 + CONCAT53(uStack_ad,uStack_b0) * 4;
        pbStack_c8 = pbVar24;
        pbVar22 = pbStack_88;
        puVar32 = puStack_68;
        for (; pbStack_88 = pbVar22, puStack_68 = puVar32, pbVar24 != pbVar31; pbVar24 = pbVar24 + 4
            ) {
          uVar5 = *(undefined4 *)pbVar24;
          *puVar8 = uStack_6c;
          lVar16 = pdb_140c40a30(uVar7,uVar5);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1435af850);
          }
          *(undefined4 *)(lVar16 + 0x50) = uVar4;
          pbVar22 = pbStack_88;
          puVar32 = puStack_68;
        }
        if (pbStack_78 != (byte *)0x0) {
          pub_1406abac0(pbStack_c8,(longlong)pbStack_78 << 2,4);
        }
      }
      pbVar31 = (byte *)((longlong)puVar30 + 0x10);
      puVar30 = puVar32;
      if (*pbVar31 != 0) {
        uVar26 = 10;
        if ((0xcfUL >> ((ulonglong)pbVar22 & 0x3f) & 1) == 0) {
          if (pbVar22 == (byte *)0x4) {
            uVar26 = 0xd;
            uStack_104 = uVar4;
          }
          else {
            uVar26 = 8;
          }
        }
        puStack_68 = puVar32;
        pdb_140c45db0(&uStack_c0,uVar10,uVar3,&UNK_1435af868);
        *puVar11 = uStack_94;
        lVar16 = *(longlong *)(lStack_a8 + 0x30);
        uVar12 = *(undefined8 *)(lStack_a8 + 0x40);
        if (lVar16 == *(longlong *)(lStack_a8 + 0x20)) {
          pdb_142d7e6e0(lVar14);
        }
        lVar20 = *(longlong *)(lStack_a8 + 0x28);
        lVar19 = lVar16 * 0x20;
        *(undefined8 *)(lVar20 + lVar19) = uVar12;
        *(undefined1 *)(lVar20 + 8 + lVar19) = uVar26;
        *(undefined4 *)(lVar20 + 0xc + lVar19) = uStack_104;
        *(undefined4 *)(lVar20 + 0x18 + lVar19) = uStack_b8;
        *(ulonglong *)(lVar20 + 0x10 + lVar19) = CONCAT17(uStack_b9,uStack_c0);
        *(longlong *)(lStack_a8 + 0x30) = lVar16 + 1;
        *(longlong *)(lStack_a8 + 0x40) = *(longlong *)(lStack_a8 + 0x40) + 1;
        puVar30 = puStack_68;
      }
      if (puVar30 == (ulonglong *)0x0) break;
LAB_1428ce4df:
      if (puVar30 == (ulonglong *)pbStack_90) break;
      puVar32 = (ulonglong *)((longlong)puVar30 + 0x18);
    }
  } while( true );
}

