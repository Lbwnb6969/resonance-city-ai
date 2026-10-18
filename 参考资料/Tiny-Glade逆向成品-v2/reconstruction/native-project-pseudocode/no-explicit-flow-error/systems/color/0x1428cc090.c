// VA 0x1428cc090, PDB extent 2442 bytes
// system_color::set_roof_customization::set_roof_customization
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_roof_customization.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::set_roof_customization::set_roof_customization
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_roof_customization.rs
   Extent: 2442 */

void pdb_1428cc090(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  byte *pbVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  byte bVar26;
  ulonglong uVar27;
  int *piVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined3 uStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined1 auStack_74 [12];
  longlong lStack_68;
  undefined4 *puStack_60;
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  puVar7 = (ulonglong *)*param_1;
  lVar8 = param_1[1];
  uVar17 = *puVar7;
  uVar21 = 0;
  uVar27 = uVar17 - *(ulonglong *)(lVar8 + 0x18);
  if (uVar17 < *(ulonglong *)(lVar8 + 0x18)) {
    uVar27 = uVar21;
  }
  uVar25 = uVar17 - *(ulonglong *)(lVar8 + 0x38);
  if (uVar17 < *(ulonglong *)(lVar8 + 0x38)) {
    uVar25 = uVar21;
  }
  lVar23 = uVar27 * 0x18 + *(longlong *)(lVar8 + 8);
  uVar17 = *(ulonglong *)(lVar8 + 0x10) - uVar27;
  if (*(ulonglong *)(lVar8 + 0x10) < uVar27) {
    lVar23 = 8;
    uVar17 = uVar21;
  }
  lVar31 = uVar25 * 0x18 + *(longlong *)(lVar8 + 0x28);
  uVar27 = *(ulonglong *)(lVar8 + 0x30) - uVar25;
  if (*(ulonglong *)(lVar8 + 0x30) < uVar25) {
    lVar31 = 8;
    uVar27 = uVar21;
  }
  *puVar7 = (*(longlong *)(lVar8 + 0x40) - uVar27) - uVar17;
  lVar8 = lVar23 + uVar17 * 0x18;
  lVar29 = lVar31 + uVar27 * 0x18;
  uVar9 = *param_3;
  lVar10 = *param_4;
  lVar11 = param_4[1];
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar5 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar12 = *param_5;
  puVar13 = (undefined4 *)param_5[2];
  do {
    if ((lVar23 == 0) || (lVar23 == lVar8)) {
      if ((lVar31 == 0) || (lVar31 == lVar29)) {
        puVar7 = (ulonglong *)*param_2;
        lVar8 = param_2[1];
        uVar17 = *puVar7;
        uVar21 = 0;
        uVar27 = uVar17 - *(ulonglong *)(lVar8 + 0x18);
        if (uVar17 < *(ulonglong *)(lVar8 + 0x18)) {
          uVar27 = uVar21;
        }
        uVar25 = uVar17 - *(ulonglong *)(lVar8 + 0x38);
        if (uVar17 < *(ulonglong *)(lVar8 + 0x38)) {
          uVar25 = uVar21;
        }
        lVar23 = uVar27 * 0x20 + *(longlong *)(lVar8 + 8);
        uVar17 = *(ulonglong *)(lVar8 + 0x10) - uVar27;
        if (*(ulonglong *)(lVar8 + 0x10) < uVar27) {
          lVar23 = 8;
          uVar17 = uVar21;
        }
        lVar31 = uVar25 * 0x20 + *(longlong *)(lVar8 + 0x28);
        uVar27 = *(ulonglong *)(lVar8 + 0x30) - uVar25;
        if (*(ulonglong *)(lVar8 + 0x30) < uVar25) {
          lVar31 = 8;
          uVar27 = uVar21;
        }
        *puVar7 = (*(longlong *)(lVar8 + 0x40) - uVar27) - uVar17;
        uVar6 = *(undefined4 *)((longlong)param_6 + 0x1c);
        lVar8 = *param_6;
        puStack_60 = (undefined4 *)param_6[2];
        lStack_68 = lVar8 + 0x20;
        lVar29 = lVar31;
        lVar30 = lVar23;
        do {
          if ((lVar30 == 0) || (lVar30 == uVar17 * 0x20 + lVar23)) {
            if ((lVar29 == 0) || (lVar29 == uVar27 * 0x20 + lVar31)) {
              puVar7 = (ulonglong *)*param_7;
              lVar23 = param_7[1];
              uVar17 = *puVar7;
              uVar21 = 0;
              uVar27 = uVar17 - *(ulonglong *)(lVar23 + 0x18);
              if (uVar17 < *(ulonglong *)(lVar23 + 0x18)) {
                uVar27 = uVar21;
              }
              uVar25 = uVar17 - *(ulonglong *)(lVar23 + 0x38);
              if (uVar17 < *(ulonglong *)(lVar23 + 0x38)) {
                uVar25 = uVar21;
              }
              lVar31 = uVar27 * 0x18 + *(longlong *)(lVar23 + 8);
              uVar17 = *(ulonglong *)(lVar23 + 0x10) - uVar27;
              if (*(ulonglong *)(lVar23 + 0x10) < uVar27) {
                lVar31 = 8;
                uVar17 = uVar21;
              }
              lVar29 = uVar25 * 0x18 + *(longlong *)(lVar23 + 0x28);
              uVar27 = *(ulonglong *)(lVar23 + 0x30) - uVar25;
              if (*(ulonglong *)(lVar23 + 0x30) < uVar25) {
                lVar29 = 8;
                uVar27 = uVar21;
              }
              *puVar7 = (*(longlong *)(lVar23 + 0x40) - uVar27) - uVar17;
              lVar23 = lVar31 + uVar17 * 0x18;
              lVar12 = lVar29 + uVar27 * 0x18;
              lStack_80 = CONCAT44(lStack_80._4_4_,*(undefined4 *)((longlong)param_8 + 0x1c));
              uVar14 = *param_8;
              puVar13 = (undefined4 *)param_8[2];
              do {
                if ((lVar31 == 0) || (lVar31 == lVar23)) {
                  if ((lVar29 == 0) || (lVar29 == lVar12)) {
                    return;
                  }
                  lVar31 = 0;
                  lVar30 = lVar29 + 0x18;
                  lVar20 = lVar29;
                }
                else {
                  lVar30 = lVar29;
                  lVar20 = lVar31;
                  lVar31 = lVar31 + 0x18;
                }
                lVar29 = lVar30;
                *puVar7 = *puVar7 + 1;
                uVar15 = *(undefined8 *)(lVar20 + 8);
                uVar17 = pdb_140b54b40(uVar9,uVar15);
                if (((((uVar17 & 0xffffffff) != 0) &&
                     (uVar27 = uVar17 & 0xffffffff ^ 0xffffffff,
                     uVar27 < *(ulonglong *)(lVar11 + 0x10))) &&
                    (piVar28 = (int *)(uVar27 * 0x18 + *(longlong *)(lVar11 + 8)),
                    piVar28[4] == (int)(uVar17 >> 0x20))) &&
                   (((*piVar28 != 0 &&
                     (uVar17 = *(ulonglong *)(piVar28 + 2),
                     (uVar17 & 0xffffffff) < *(ulonglong *)(lVar10 + 0x38))) &&
                    ((*(ulonglong *)(*(longlong *)(lVar10 + 0x28) + (uVar17 >> 6 & 0x3ffffff) * 8)
                      >> (uVar17 & 0x3f) & 1) != 0)))) {
                  lVar30 = *(longlong *)
                            (*(longlong *)(lVar11 + 0x1a0) + 0x18 + (uVar17 >> 0x20) * 0x48);
                  lVar18 = ~*(ulonglong *)
                             (*(longlong *)
                               (*(longlong *)(lVar11 + 0x1a0) + 0x38 + (uVar17 >> 0x20) * 0x48) +
                             *(longlong *)(lVar10 + 0x110) * 8) * 0x30;
                  lVar24 = *(longlong *)(lVar30 + 0x10 + lVar18);
                  lVar30 = *(longlong *)(lVar30 + 0x28 + lVar18);
                  uVar17 = (ulonglong)(uint)~piVar28[1];
                  lVar18 = uVar17 * 0x58;
                  bVar26 = *(byte *)(lVar24 + 0x3d + lVar18);
                  if (bVar26 != *(byte *)(lVar20 + 0x11)) {
                    *puStack_60 = uVar6;
                    lVar19 = *(longlong *)(lVar8 + 0x30);
                    lStack_88 = *(longlong *)(lVar8 + 0x40);
                    if (lVar19 == *(longlong *)(lVar8 + 0x20)) {
                      lStack_98 = lVar18;
                      uStack_90 = uVar17;
                      pdb_142d7e980(lStack_68);
                      uVar17 = uStack_90;
                      lVar18 = lStack_98;
                    }
                    lVar16 = *(longlong *)(lVar8 + 0x28);
                    *(longlong *)(lVar16 + lVar19 * 0x10) = lStack_88;
                    *(undefined8 *)(lVar16 + 8 + lVar19 * 0x10) = uVar15;
                    *(longlong *)(lVar8 + 0x30) = lVar19 + 1;
                    *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
                    bVar26 = *(byte *)(lVar20 + 0x11);
                  }
                  *(undefined4 *)(lVar30 + uVar17 * 4) = uVar4;
                  *(byte *)(lVar24 + lVar18 + 0x3d) = bVar26;
                  if (*(char *)(lVar20 + 0x12) == '\x01') {
                    *puVar13 = (undefined4)lStack_80;
                    bVar3 = *(byte *)(lVar20 + 0x10);
                    pdb_14007ee60();
                    pbVar22 = pub_1406abab0(0x50,8);
                    if (pbVar22 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc7e11(8,0x50);
                    }
                    pbVar22[0] = 1;
                    pbVar22[1] = 0;
                    pbVar22[2] = 0;
                    pbVar22[3] = 0;
                    pbVar22[4] = 0;
                    pbVar22[5] = 0;
                    pbVar22[6] = 0;
                    pbVar22[7] = 0;
                    pbVar22[8] = 1;
                    pbVar22[9] = 0;
                    pbVar22[10] = 0;
                    pbVar22[0xb] = 0;
                    pbVar22[0xc] = 0;
                    pbVar22[0xd] = 0;
                    pbVar22[0xe] = 0;
                    pbVar22[0xf] = 0;
                    pbVar22[0x10] = 4;
                    pbVar22[0x11] = bVar3;
                    pbVar22[0x12] = bVar26;
                    *(undefined8 *)(pbVar22 + 0x18) = uVar15;
                    uStack_a8 = SUB84(pbVar22,0);
                    uStack_a4 = (undefined4)((ulonglong)pbVar22 >> 0x20);
                    uStack_b0 = 8;
                    uStack_ac = 0;
                    pdb_140ae5180(uVar14,&uStack_b0,&UNK_1435af548);
                  }
                }
              } while( true );
            }
            lVar24 = lVar29 + 0x20;
            lVar20 = 0;
            lVar18 = lVar29;
          }
          else {
            lVar20 = lVar30 + 0x20;
            lVar24 = lVar29;
            lVar18 = lVar30;
          }
          *puVar7 = *puVar7 + 1;
          uVar14 = *(undefined8 *)(lVar18 + 8);
          uVar21 = pdb_140b54b40(uVar9);
          lVar29 = lVar24;
          lVar30 = lVar20;
          if ((((uVar21 & 0xffffffff) != 0) &&
              (uVar25 = uVar21 & 0xffffffff ^ 0xffffffff, uVar25 < *(ulonglong *)(lVar11 + 0x10)))
             && ((piVar28 = (int *)(uVar25 * 0x18 + *(longlong *)(lVar11 + 8)),
                 piVar28[4] == (int)(uVar21 >> 0x20) &&
                 (((*piVar28 != 0 &&
                   (uVar21 = *(ulonglong *)(piVar28 + 2),
                   (uVar21 & 0xffffffff) < *(ulonglong *)(lVar10 + 0x38))) &&
                  ((*(ulonglong *)(*(longlong *)(lVar10 + 0x28) + (uVar21 >> 6 & 0x3ffffff) * 8) >>
                    (uVar21 & 0x3f) & 1) != 0)))))) {
            lVar20 = *(longlong *)(*(longlong *)(lVar11 + 0x1a0) + 0x18 + (uVar21 >> 0x20) * 0x48);
            lVar19 = ~*(ulonglong *)
                       (*(longlong *)
                         (*(longlong *)(lVar11 + 0x1a0) + 0x38 + (uVar21 >> 0x20) * 0x48) +
                       *(longlong *)(lVar10 + 0x110) * 8) * 0x30;
            lVar24 = *(longlong *)(lVar20 + 0x10 + lVar19);
            lStack_80 = *(longlong *)(lVar20 + 0x28 + lVar19);
            uVar25 = (ulonglong)(uint)~piVar28[1];
            uVar21 = uVar25 * 0x58;
            lStack_88 = lVar24 + uVar21;
            cVar2 = *(char *)(lVar24 + 0x40 + uVar21);
            if ((cVar2 != *(char *)(lVar18 + 0x10)) ||
               ((cVar2 == '\x02' &&
                (((*(int *)(lVar24 + uVar21 + 0x48) != *(int *)(lVar18 + 0x18) ||
                  (*(int *)(lVar24 + uVar21 + 0x44) != *(int *)(lVar18 + 0x14))) ||
                 (*(char *)(lVar24 + uVar21 + 0x41) != *(char *)(lVar18 + 0x11))))))) {
              *puStack_60 = uVar6;
              lVar20 = *(longlong *)(lVar8 + 0x30);
              lStack_98 = *(longlong *)(lVar8 + 0x40);
              uStack_90 = uVar21;
              if (lVar20 == *(longlong *)(lVar8 + 0x20)) {
                lStack_58 = lVar20;
                lStack_50 = lVar24;
                uStack_48 = uVar25;
                pdb_142d7e980(lStack_68);
                uVar25 = uStack_48;
                lVar20 = lStack_58;
                lVar24 = lStack_50;
              }
              lVar19 = *(longlong *)(lVar8 + 0x28);
              *(longlong *)(lVar19 + lVar20 * 0x10) = lStack_98;
              *(undefined8 *)(lVar19 + 8 + lVar20 * 0x10) = uVar14;
              *(longlong *)(lVar8 + 0x30) = lVar20 + 1;
              *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
              uVar21 = uStack_90;
            }
            uStack_a8 = *(undefined4 *)(lVar18 + 0x18);
            uVar14 = *(undefined8 *)(lVar18 + 0x10);
            uStack_b0 = (undefined4)uVar14;
            uStack_ac = (undefined4)((ulonglong)uVar14 >> 0x20);
            *(undefined4 *)(lStack_80 + uVar25 * 4) = uVar4;
            *(undefined4 *)(lVar24 + uVar21 + 0x48) = uStack_a8;
            *(undefined8 *)(lVar24 + uVar21 + 0x40) = uVar14;
            if (*(char *)(lVar18 + 0x1c) == '\x01') {
              pdb_140b77b90(auStack_74,lStack_88);
              uStack_a0 = SUB43(auStack_74._8_4_,1);
              uStack_ac._3_1_ = (undefined1)auStack_74._0_8_;
              uStack_a8 = SUB84(auStack_74._0_8_,1);
              uStack_a4._0_3_ = SUB83(auStack_74._0_8_,5);
              uStack_a4 = CONCAT13((char)auStack_74._8_4_,(undefined3)uStack_a4);
              *puVar13 = uVar5;
              lVar20 = *(longlong *)(lVar12 + 0x30);
              uVar14 = *(undefined8 *)(lVar12 + 0x40);
              if (lVar20 == *(longlong *)(lVar12 + 0x20)) {
                pdb_142d7e6e0(lVar12 + 0x20);
              }
              lVar24 = *(longlong *)(lVar12 + 0x28);
              lVar18 = lVar20 * 0x20;
              *(undefined8 *)(lVar24 + lVar18) = uVar14;
              *(undefined1 *)(lVar24 + 8 + lVar18) = 0xb;
              *(uint *)(lVar24 + 0x18 + lVar18) = CONCAT31(uStack_a0,uStack_a4._3_1_);
              puVar1 = (undefined4 *)(lVar24 + 9 + lVar18);
              *puVar1 = uStack_b0;
              puVar1[1] = uStack_ac;
              puVar1[2] = uStack_a8;
              puVar1[3] = uStack_a4;
              *(longlong *)(lVar12 + 0x30) = lVar20 + 1;
              *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
            }
          }
        } while( true );
      }
      lVar30 = 0;
      lVar20 = lVar31;
      lVar31 = lVar31 + 0x18;
    }
    else {
      lVar30 = lVar23 + 0x18;
      lVar20 = lVar23;
    }
    lVar23 = lVar30;
    *puVar7 = *puVar7 + 1;
    uVar17 = pdb_140b54b40(uVar9,*(undefined8 *)(lVar20 + 8));
    if ((((uVar17 & 0xffffffff) != 0) &&
        (uVar27 = uVar17 & 0xffffffff ^ 0xffffffff, uVar27 < *(ulonglong *)(lVar11 + 0x10))) &&
       ((piVar28 = (int *)(uVar27 * 0x18 + *(longlong *)(lVar11 + 8)),
        piVar28[4] == (int)(uVar17 >> 0x20) &&
        (((*piVar28 != 0 &&
          (uVar17 = *(ulonglong *)(piVar28 + 2),
          (uVar17 & 0xffffffff) < *(ulonglong *)(lVar10 + 0x38))) &&
         ((*(ulonglong *)(*(longlong *)(lVar10 + 0x28) + (uVar17 >> 6 & 0x3ffffff) * 8) >>
           (uVar17 & 0x3f) & 1) != 0)))))) {
      lVar30 = *(longlong *)(*(longlong *)(lVar11 + 0x1a0) + 0x18 + (uVar17 >> 0x20) * 0x48);
      lVar18 = ~*(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x1a0) + 0x38 + (uVar17 >> 0x20) * 0x48) +
                 *(longlong *)(lVar10 + 0x110) * 8) * 0x30;
      lVar24 = *(longlong *)(lVar30 + 0x10 + lVar18);
      lVar19 = (ulonglong)(uint)~piVar28[1] * 0x58;
      uVar6 = *(undefined4 *)(lVar20 + 0x10);
      *(undefined4 *)(*(longlong *)(lVar30 + 0x28 + lVar18) + (ulonglong)(uint)~piVar28[1] * 4) =
           uVar4;
      *(undefined4 *)(lVar24 + 0x50 + lVar19) = uVar6;
      if (*(char *)(lVar20 + 0x14) == '\x01') {
        pdb_140b77b90(auStack_74,lVar24 + lVar19);
        uStack_a0 = SUB43(auStack_74._8_4_,1);
        uStack_ac._3_1_ = (undefined1)auStack_74._0_8_;
        uStack_a8 = SUB84(auStack_74._0_8_,1);
        uStack_a4._0_3_ = SUB83(auStack_74._0_8_,5);
        uStack_a4 = CONCAT13((char)auStack_74._8_4_,(undefined3)uStack_a4);
        *puVar13 = uVar5;
        lVar30 = *(longlong *)(lVar12 + 0x30);
        uVar14 = *(undefined8 *)(lVar12 + 0x40);
        if (lVar30 == *(longlong *)(lVar12 + 0x20)) {
          pdb_142d7e6e0(lVar12 + 0x20);
        }
        lVar20 = *(longlong *)(lVar12 + 0x28);
        lVar24 = lVar30 * 0x20;
        *(undefined8 *)(lVar20 + lVar24) = uVar14;
        *(undefined1 *)(lVar20 + 8 + lVar24) = 0xb;
        *(uint *)(lVar20 + 0x18 + lVar24) = CONCAT31(uStack_a0,uStack_a4._3_1_);
        puVar1 = (undefined4 *)(lVar20 + 9 + lVar24);
        *puVar1 = uStack_b0;
        puVar1[1] = uStack_ac;
        puVar1[2] = uStack_a8;
        puVar1[3] = uStack_a4;
        *(longlong *)(lVar12 + 0x30) = lVar30 + 1;
        *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
      }
    }
  } while( true );
}

