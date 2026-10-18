// VA 0x14092cf10, PDB extent 1502 bytes
// country_core::systems::wall::shapes::calc_shape_height::calc_shape_height_and_stone_foundation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/calc_shape_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::calc_shape_height::calc_shape_height_and_stone_foundation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/calc_shape_height.rs
   Extent: 1502 */

void pdb_14092cf10(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar13;
  undefined4 uVar14;
  longlong lVar15;
  ushort uVar16;
  longlong lVar17;
  uint uVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  longlong *plVar31;
  longlong lStack_130;
  byte *pbStack_128;
  longlong lStack_120;
  longlong lStack_118;
  byte *pbStack_110;
  longlong lStack_f8;
  byte *pbStack_f0;
  longlong lStack_e0;
  byte *pbStack_d8;
  longlong lStack_c0;
  byte *pbStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  pcVar4 = (char *)*param_1;
  if ((*pcVar4 == '\x01') && (pcVar4[1] != '\0')) {
    if (pcVar4[1] == '\x02') {
      pdb_140df37e0(&lStack_f8,*param_2 + 0x10);
    }
    else {
      pdb_140defcd0(&lStack_f8,*param_3 + 0x10);
    }
    plVar31 = param_6;
    pdb_1419abbe0(&lStack_130,&lStack_f8);
    lVar5 = *param_6;
    fVar27 = 0.0;
    uVar18 = -(uint)(0.0 < *(float *)(lVar5 + 0x44));
    fVar20 = (float)((uint)*(float *)(lVar5 + 0x44) & uVar18);
    fVar22 = (float)(~uVar18 & _DAT_143021a10 | (uint)fVar20);
    uVar6 = *param_4;
    fVar28 = 0.0;
    lStack_b0 = lStack_120;
    pbStack_b8 = pbStack_128;
    fVar29 = _DAT_142e36f3c;
    pbVar13 = pbStack_128;
    while (pbVar13 != pbStack_128 + lStack_120 * 0xc) {
      fVar20 = *(float *)(pbVar13 + 4);
      fVar21 = (float)pdb_1419c1ac0(uVar6);
      fVar27 = fVar27 + fVar20;
      fVar30 = fVar20;
      if (fVar20 <= fVar28) {
        fVar30 = fVar28;
      }
      fVar28 = (float)(~-(uint)NAN(fVar28) & (uint)fVar30 | -(uint)NAN(fVar28) & (uint)fVar20);
      pbVar13 = pbVar13 + 0xc;
      fVar20 = fVar22;
      if (fVar22 <= fVar21) {
        fVar20 = fVar21;
      }
      fVar20 = (float)(~-(uint)NAN(fVar21) & (uint)fVar20 | -(uint)NAN(fVar21) & (uint)fVar22);
      fVar30 = fVar20;
      if (fVar29 <= fVar20) {
        fVar30 = fVar29;
      }
      fVar29 = (float)(~-(uint)NAN(fVar29) & (uint)fVar30 | -(uint)NAN(fVar29) & (uint)fVar20);
    }
    cVar2 = *(char *)(lVar5 + 0x34);
    uVar14 = 0;
    if (cVar2 != '\x02') {
      param_5 = (longlong *)*param_5;
      lStack_c0 = *(longlong *)(lVar5 + 0x28);
      uVar14 = 0;
      if (param_5[3] != 0) {
        lStack_a8 = lStack_c0;
        uVar11 = pdb_1400af0a0(param_5 + 4,&lStack_c0);
        lVar12 = *param_5;
        bVar19 = (byte)(uVar11 >> 0x39);
        auVar23 = ZEXT216(CONCAT11(bVar19,bVar19));
        auVar23 = pshuflw(auVar23,auVar23,0);
        lVar15 = 0;
        while( true ) {
          uVar11 = uVar11 & param_5[1];
          auVar1 = *(undefined1 (*) [16])(lVar12 + uVar11);
          auVar25[0] = -(auVar1[0] == auVar23[0]);
          auVar25[1] = -(auVar1[1] == auVar23[1]);
          auVar25[2] = -(auVar1[2] == auVar23[2]);
          auVar25[3] = -(auVar1[3] == auVar23[3]);
          auVar25[4] = -(auVar1[4] == auVar23[4]);
          auVar25[5] = -(auVar1[5] == auVar23[5]);
          auVar25[6] = -(auVar1[6] == auVar23[6]);
          auVar25[7] = -(auVar1[7] == auVar23[7]);
          auVar25[8] = -(auVar1[8] == auVar23[0]);
          auVar25[9] = -(auVar1[9] == auVar23[1]);
          auVar25[10] = -(auVar1[10] == auVar23[2]);
          auVar25[0xb] = -(auVar1[0xb] == auVar23[3]);
          auVar25[0xc] = -(auVar1[0xc] == auVar23[4]);
          auVar25[0xd] = -(auVar1[0xd] == auVar23[5]);
          auVar25[0xe] = -(auVar1[0xe] == auVar23[6]);
          auVar25[0xf] = -(auVar1[0xf] == auVar23[7]);
          uVar16 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar25[0xf] >> 7) << 0xf;
          uVar18 = (uint)uVar16;
          while (uVar16 != 0) {
            uVar26 = 0;
            for (uVar10 = uVar18; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar26 = uVar26 + 1;
            }
            lVar17 = (uVar26 + uVar11 & param_5[1]) * -0x2b0;
            if (lStack_a8 == *(longlong *)(lVar12 + -0x2b0 + lVar17)) {
              lVar12 = lVar12 + lVar17;
              if ((*(ulonglong *)(lVar12 + -0x298) < 2) ||
                 (fVar20 = *(float *)(lVar12 + -0x278), fVar20 <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143021d60,uVar18,plVar31);
              }
              uVar14 = 0;
              if ((*(char *)(lVar12 + -9) == '\x01') && (*(uint *)(lVar12 + -0x50) < 2)) {
                uVar14 = 1;
                fVar20 = 0.0;
                if (0.0 < *(float *)(lVar12 + -0x14)) {
                  fVar22 = (float)pdb_14092ff30(lVar12 + -0x2a8,cVar2);
                  fVar20 = fVar22 - fVar29;
                  if (fVar22 - fVar29 <= 0.0) {
                    fVar20 = 0.0;
                  }
                }
              }
              goto LAB_14092d1ec;
            }
            uVar16 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar16);
          }
          auVar24[0] = -(auVar1[0] == -1);
          auVar24[1] = -(auVar1[1] == -1);
          auVar24[2] = -(auVar1[2] == -1);
          auVar24[3] = -(auVar1[3] == -1);
          auVar24[4] = -(auVar1[4] == -1);
          auVar24[5] = -(auVar1[5] == -1);
          auVar24[6] = -(auVar1[6] == -1);
          auVar24[7] = -(auVar1[7] == -1);
          auVar24[8] = -(auVar1[8] == -1);
          auVar24[9] = -(auVar1[9] == -1);
          auVar24[10] = -(auVar1[10] == -1);
          auVar24[0xb] = -(auVar1[0xb] == -1);
          auVar24[0xc] = -(auVar1[0xc] == -1);
          auVar24[0xd] = -(auVar1[0xd] == -1);
          auVar24[0xe] = -(auVar1[0xe] == -1);
          auVar24[0xf] = -(auVar1[0xf] == -1);
          uVar14 = 0;
          fVar20 = auVar23._0_4_;
          if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x2f,0) & 1) != 0) || (SUB161(auVar24 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
          uVar11 = uVar11 + lVar15 + 0x10;
          lVar15 = lVar15 + 0x10;
        }
      }
    }
LAB_14092d1ec:
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    *(undefined4 *)(lVar5 + 8) = uVar14;
    *(float *)(lVar5 + 0xc) = fVar20;
    fVar20 = _DAT_14300b368;
    pcVar7 = (char *)*param_6;
    if ((*pcVar4 != '\x01') ||
       ((fVar22 = _DAT_142e37900, pcVar4[1] != '\x02' &&
        (fVar22 = _DAT_142f57bc8, pcVar4[1] != '\x01')))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143021d19,0x28,&UNK_143021d48);
    }
    if (*(int *)(pcVar7 + 0x10) == 2) {
      if (*pcVar7 == '\0') {
        fVar27 = 0.0;
      }
      else {
        fVar27 = *(float *)(pcVar7 + 4);
      }
      fVar22 = fVar22 + fVar27;
    }
    else {
      fVar22 = fVar27 / (float)lStack_b0 + fVar22 + _DAT_14300b368;
    }
    fVar22 = fVar22 - (fVar28 + _DAT_14300b368);
    fVar27 = *(float *)(&UNK_143021a18 + (ulonglong)(pcVar7[0x34] == '\x01') * 4);
    if (*(float *)(&UNK_143021a18 + (ulonglong)(pcVar7[0x34] == '\x01') * 4) <= fVar22) {
      fVar27 = fVar22;
    }
    fVar22 = _DAT_143008730;
    if (fVar27 <= _DAT_143008730) {
      fVar22 = fVar27;
    }
    uVar14 = *(undefined4 *)((longlong)param_6 + 0x1c);
    *(undefined4 *)param_6[2] = uVar14;
    *(float *)(pcVar7 + 0x48) = fVar22;
    fVar27 = *(float *)(*param_6 + 0x44);
    uVar18 = -(uint)(fVar27 == 0.0);
    uVar26 = _DAT_142f61034 & uVar18;
    uVar3 = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar8 = (undefined4 *)param_7[2];
    *puVar8 = uVar3;
    puVar9 = (undefined4 *)*param_7;
    puVar9[2] = ~uVar18 & (uint)fVar27 | uVar26;
    fVar28 = (float)pdb_140de93b0(uVar14,fVar22 + fVar28 + fVar20);
    *puVar8 = uVar3;
    *puVar9 = 1;
    puVar9[1] = fVar28;
    fVar20 = (float)puVar9[2];
    *puVar8 = uVar3;
    puVar9[3] = fVar28 - fVar20;
    if (lStack_130 != 0) {
      pub_1406abac0(pbStack_b8,lStack_130 * 0xc,4);
    }
    if (lStack_118 != 0) {
      pub_1406abac0(pbStack_110,lStack_118 << 2,4);
    }
    if (lStack_f8 != 0) {
      pub_1406abac0(pbStack_f0,lStack_f8 << 3,4);
    }
    if (lStack_e0 != 0) {
      pub_1406abac0(pbStack_d8,lStack_e0 << 2,4);
    }
  }
  else {
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    *(undefined4 *)*param_7 = 0;
  }
  return;
}

