// VA 0x140b761f0, PDB extent 1424 bytes
// country_core::systems::wall::shapes::rectangle::edit_rectangle::edit_rectangle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/edit_rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::edit_rectangle::edit_rectangle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/edit_rectangle.rs
   Extent: 1424 */

void pdb_140b761f0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ushort uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  byte bVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 uStack_119;
  undefined8 uStack_118;
  undefined4 uStack_110;
  longlong *plStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  longlong **pplStack_a0;
  longlong *plStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar3 = (ulonglong *)*param_1;
  lVar23 = param_1[1];
  uVar10 = *puVar3;
  uVar15 = 0;
  uVar11 = uVar10 - *(ulonglong *)(lVar23 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar23 + 0x18)) {
    uVar11 = uVar15;
  }
  uVar12 = uVar10 - *(ulonglong *)(lVar23 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar23 + 0x38)) {
    uVar12 = uVar15;
  }
  uVar10 = *(ulonglong *)(lVar23 + 0x10);
  uVar4 = *(ulonglong *)(lVar23 + 0x30);
  uVar18 = uVar4 - uVar12;
  if (uVar4 < uVar12) {
    uVar18 = uVar15;
  }
  uVar22 = uVar10 - uVar11;
  if (uVar10 < uVar11) {
    uVar22 = uVar15;
  }
  uVar15 = *(ulonglong *)(lVar23 + 0x40);
  lVar21 = *(longlong *)(lVar23 + 8);
  lVar23 = *(longlong *)(lVar23 + 0x28);
  *puVar3 = (uVar15 - uVar18) - uVar22;
  if ((uVar10 < uVar11 || uVar10 - uVar11 == 0) && (uVar4 < uVar12 || uVar4 - uVar12 == 0)) {
    return;
  }
  lVar23 = lVar23 + uVar12 * 0x40;
  lVar21 = lVar21 + uVar11 * 0x40;
  if (uVar10 < uVar11) {
    lVar21 = 8;
  }
  lVar9 = 0;
  if (uVar11 < uVar10) {
    lVar9 = lVar21 + -0x40 + uVar22 * 0x40;
  }
  if (uVar4 < uVar12) {
    lVar23 = 8;
  }
  lVar23 = lVar23 + -0x40 + uVar18 * 0x40;
  if (uVar4 <= uVar12) {
    lVar23 = lVar9;
  }
  *puVar3 = uVar15;
  lVar21 = *(longlong *)(lVar23 + 8);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar5 = (undefined4 *)param_2[2];
  *puVar5 = uVar2;
  param_2 = (longlong *)*param_2;
  plStack_108 = param_4;
  pdb_140df37e0(&lStack_f8,lVar23 + 0x10);
  pdb_14092e8e0(param_2,lVar21,&lStack_f8);
  *puVar5 = uVar2;
  uStack_78 = *(undefined8 *)(lVar23 + 0x20);
  uStack_88 = *(undefined8 *)(lVar23 + 0x10);
  uStack_80 = *(undefined8 *)(lVar23 + 0x18);
  lStack_100 = lVar21;
  lVar9 = pdb_1417bd890(param_2,&lStack_100);
  if (lVar9 == 0) {
    if (1 < *_DAT_143ca8e90) {
      pcStack_90 = pdb_140c04ef0;
      lStack_f8 = 0;
      puStack_f0 = &UNK_143021dde;
      uStack_e8 = 0x2b;
      uStack_e0 = 0;
      puStack_d8 = &UNK_143021da7;
      uStack_d0 = 0x36;
      uStack_c8 = 2;
      puStack_c0 = &UNK_143021dde;
      uStack_b8 = 0x2b;
      uStack_b0 = 0xfd00000001;
      puStack_a8 = &UNK_143021d78;
      pplStack_a0 = &plStack_98;
      plStack_98 = &lStack_100;
      pdb_140f332f0(&uStack_119,&lStack_f8);
    }
  }
  else {
    pdb_1403b05d0(param_2 + 0xc,lVar21);
    *(undefined4 *)(lVar9 + 0x38) = 1;
    *(undefined8 *)(lVar9 + 0x3c) = uStack_88;
    *(undefined8 *)(lVar9 + 0x44) = uStack_80;
    *(undefined8 *)(lVar9 + 0x4c) = uStack_78;
  }
  uStack_110 = *(undefined4 *)(lVar23 + 0x30);
  uStack_118 = *(undefined8 *)(lVar23 + 0x28);
  lStack_f8 = *(longlong *)(lVar23 + 0x28);
  puStack_f0 = (undefined *)CONCAT44(puStack_f0._4_4_,*(undefined4 *)(lVar23 + 0x30));
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar9 = *param_3;
  lVar16 = *(longlong *)(lVar9 + 0x30);
  uVar6 = *(undefined8 *)(lVar9 + 0x40);
  if (lVar16 == *(longlong *)(lVar9 + 0x20)) {
    pdb_142d7e6e0(lVar9 + 0x20);
  }
  lVar20 = *(longlong *)(lVar9 + 0x28);
  lVar13 = lVar16 * 0x20;
  *(undefined8 *)(lVar20 + lVar13) = uVar6;
  *(longlong *)(lVar20 + 8 + lVar13) = lVar21;
  *(longlong *)(lVar20 + 0x10 + lVar13) = lStack_f8;
  *(undefined4 *)(lVar20 + 0x18 + lVar13) = puStack_f0._0_4_;
  *(undefined2 *)(lVar20 + 0x1c + lVar13) = 4;
  *(longlong *)(lVar9 + 0x30) = lVar16 + 1;
  *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
  lStack_f8 = lVar21;
  if (*(char *)(lVar23 + 0x38) != '\x01') {
    if (param_2[3] != 0) {
      uVar11 = pdb_1400af0a0(param_2 + 4,&lStack_f8);
      lVar9 = *param_2;
      uVar10 = param_2[1];
      bVar24 = (byte)(uVar11 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar16 = 0;
      while( true ) {
        uVar11 = uVar11 & uVar10;
        pcVar1 = (char *)(lVar9 + uVar11);
        auVar30[0] = -(*pcVar1 == auVar26[0]);
        auVar30[1] = -(pcVar1[1] == auVar26[1]);
        auVar30[2] = -(pcVar1[2] == auVar26[2]);
        auVar30[3] = -(pcVar1[3] == auVar26[3]);
        auVar30[4] = -(pcVar1[4] == auVar26[4]);
        auVar30[5] = -(pcVar1[5] == auVar26[5]);
        auVar30[6] = -(pcVar1[6] == auVar26[6]);
        auVar30[7] = -(pcVar1[7] == auVar26[7]);
        auVar30[8] = -(pcVar1[8] == auVar26[0]);
        auVar30[9] = -(pcVar1[9] == auVar26[1]);
        auVar30[10] = -(pcVar1[10] == auVar26[2]);
        auVar30[0xb] = -(pcVar1[0xb] == auVar26[3]);
        auVar30[0xc] = -(pcVar1[0xc] == auVar26[4]);
        auVar30[0xd] = -(pcVar1[0xd] == auVar26[5]);
        auVar30[0xe] = -(pcVar1[0xe] == auVar26[6]);
        auVar30[0xf] = -(pcVar1[0xf] == auVar26[7]);
        uVar19 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf
        ;
        uVar17 = (uint)uVar19;
        while (uVar19 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar20 = (uVar7 + uVar11 & uVar10) * -0x78;
          if (lVar21 == *(longlong *)(lVar9 + -0x78 + lVar20)) {
            uVar14 = *(undefined1 *)(lVar9 + lVar20 + -7);
            fVar25 = (float)pdb_140de8220(0,uVar10,*(float *)(lVar23 + 0x34) /
                                                   *(float *)(*param_5 + 0x58));
            fVar31 = 0.0;
            if (0.0 <= fVar25) {
              fVar31 = fVar25;
            }
            fVar25 = _DAT_142e36f28;
            if (fVar31 <= _DAT_142e36f28) {
              fVar25 = fVar31;
            }
            *(undefined4 *)plStack_108[2] = *(undefined4 *)((longlong)plStack_108 + 0x1c);
            lVar23 = *plStack_108;
            lVar9 = *(longlong *)(lVar23 + 0x30);
            uVar6 = *(undefined8 *)(lVar23 + 0x40);
            if (lVar9 == *(longlong *)(lVar23 + 0x20)) {
              pdb_142d7ede0(lVar23 + 0x20);
            }
            lVar16 = *(longlong *)(lVar23 + 0x28);
            *(undefined8 *)(lVar16 + lVar9 * 0x28) = uVar6;
            *(longlong *)(lVar16 + 8 + lVar9 * 0x28) = lVar21;
            *(undefined8 *)(lVar16 + 0x10 + lVar9 * 0x28) = uStack_118;
            *(undefined4 *)(lVar16 + 0x18 + lVar9 * 0x28) = uStack_110;
            *(float *)(lVar16 + 0x1c + lVar9 * 0x28) = fVar25;
            *(undefined1 *)(lVar16 + 0x20 + lVar9 * 0x28) = 0;
            goto LAB_140b76733;
          }
          uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
          uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
        }
        auVar28[0] = -(*pcVar1 == -1);
        auVar28[1] = -(pcVar1[1] == -1);
        auVar28[2] = -(pcVar1[2] == -1);
        auVar28[3] = -(pcVar1[3] == -1);
        auVar28[4] = -(pcVar1[4] == -1);
        auVar28[5] = -(pcVar1[5] == -1);
        auVar28[6] = -(pcVar1[6] == -1);
        auVar28[7] = -(pcVar1[7] == -1);
        auVar28[8] = -(pcVar1[8] == -1);
        auVar28[9] = -(pcVar1[9] == -1);
        auVar28[10] = -(pcVar1[10] == -1);
        auVar28[0xb] = -(pcVar1[0xb] == -1);
        auVar28[0xc] = -(pcVar1[0xc] == -1);
        auVar28[0xd] = -(pcVar1[0xd] == -1);
        auVar28[0xe] = -(pcVar1[0xe] == -1);
        auVar28[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar28 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar28 >> 0x1f,0) & 1) != 0) || (SUB161(auVar28 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') break;
        uVar11 = uVar11 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14305c300);
  }
  if (param_2[3] != 0) {
    uVar10 = pdb_1400af0a0(param_2 + 4,&lStack_f8);
    lVar9 = *param_2;
    bVar24 = (byte)(uVar10 >> 0x39);
    auVar26 = ZEXT216(CONCAT11(bVar24,bVar24));
    auVar26 = pshuflw(auVar26,auVar26,0);
    lVar16 = 0;
    do {
      uVar10 = uVar10 & param_2[1];
      pcVar1 = (char *)(lVar9 + uVar10);
      auVar29[0] = -(*pcVar1 == auVar26[0]);
      auVar29[1] = -(pcVar1[1] == auVar26[1]);
      auVar29[2] = -(pcVar1[2] == auVar26[2]);
      auVar29[3] = -(pcVar1[3] == auVar26[3]);
      auVar29[4] = -(pcVar1[4] == auVar26[4]);
      auVar29[5] = -(pcVar1[5] == auVar26[5]);
      auVar29[6] = -(pcVar1[6] == auVar26[6]);
      auVar29[7] = -(pcVar1[7] == auVar26[7]);
      auVar29[8] = -(pcVar1[8] == auVar26[0]);
      auVar29[9] = -(pcVar1[9] == auVar26[1]);
      auVar29[10] = -(pcVar1[10] == auVar26[2]);
      auVar29[0xb] = -(pcVar1[0xb] == auVar26[3]);
      auVar29[0xc] = -(pcVar1[0xc] == auVar26[4]);
      auVar29[0xd] = -(pcVar1[0xd] == auVar26[5]);
      auVar29[0xe] = -(pcVar1[0xe] == auVar26[6]);
      auVar29[0xf] = -(pcVar1[0xf] == auVar26[7]);
      uVar19 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar20 = (uVar7 + uVar10 & param_2[1]) * -0x78;
        if (lVar21 == *(longlong *)(lVar9 + -0x78 + lVar20)) {
          uVar14 = *(undefined1 *)(lVar9 + lVar20 + -7);
          fVar25 = (float)pdb_140de8220(0,_DAT_142e382c8,
                                        *(float *)(lVar23 + 0x34) / *(float *)(*param_5 + 0x58));
          fVar31 = 0.0;
          if (0.0 <= fVar25) {
            fVar31 = fVar25;
          }
          fVar25 = _DAT_142e36f28;
          if (fVar31 <= _DAT_142e36f28) {
            fVar25 = fVar31;
          }
          *(undefined4 *)plStack_108[2] = *(undefined4 *)((longlong)plStack_108 + 0x1c);
          lVar23 = *plStack_108;
          lVar9 = *(longlong *)(lVar23 + 0x30);
          uVar6 = *(undefined8 *)(lVar23 + 0x40);
          if (lVar9 == *(longlong *)(lVar23 + 0x20)) {
            pdb_142d7ede0(lVar23 + 0x20);
          }
          lVar16 = *(longlong *)(lVar23 + 0x28);
          *(undefined8 *)(lVar16 + lVar9 * 0x28) = uVar6;
          *(longlong *)(lVar16 + 8 + lVar9 * 0x28) = lVar21;
          *(undefined8 *)(lVar16 + 0x10 + lVar9 * 0x28) = uStack_118;
          *(undefined4 *)(lVar16 + 0x18 + lVar9 * 0x28) = uStack_110;
          *(float *)(lVar16 + 0x1c + lVar9 * 0x28) = fVar25;
          *(undefined1 *)(lVar16 + 0x20 + lVar9 * 0x28) = 1;
LAB_140b76733:
          *(undefined1 *)(lVar16 + 0x21 + lVar9 * 0x28) = uVar14;
          *(longlong *)(lVar23 + 0x30) = lVar9 + 1;
          *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
          return;
        }
        uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
      }
      auVar27[0] = -(*pcVar1 == -1);
      auVar27[1] = -(pcVar1[1] == -1);
      auVar27[2] = -(pcVar1[2] == -1);
      auVar27[3] = -(pcVar1[3] == -1);
      auVar27[4] = -(pcVar1[4] == -1);
      auVar27[5] = -(pcVar1[5] == -1);
      auVar27[6] = -(pcVar1[6] == -1);
      auVar27[7] = -(pcVar1[7] == -1);
      auVar27[8] = -(pcVar1[8] == -1);
      auVar27[9] = -(pcVar1[9] == -1);
      auVar27[10] = -(pcVar1[10] == -1);
      auVar27[0xb] = -(pcVar1[0xb] == -1);
      auVar27[0xc] = -(pcVar1[0xc] == -1);
      auVar27[0xd] = -(pcVar1[0xd] == -1);
      auVar27[0xe] = -(pcVar1[0xe] == -1);
      auVar27[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar10 = uVar10 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14305c318);
}

