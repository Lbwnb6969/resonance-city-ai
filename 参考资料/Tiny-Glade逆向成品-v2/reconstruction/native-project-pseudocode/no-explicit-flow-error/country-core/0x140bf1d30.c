// VA 0x140bf1d30, PDB extent 2010 bytes
// country_core::systems::wall::snapping::snapping_maintain::snapping_signifiers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_maintain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::snapping::snapping_maintain::snapping_signifiers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_maintain.rs
   Extent: 2010 */

void pdb_140bf1d30(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 auVar1 [16];
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  ushort uVar20;
  uint uVar21;
  longlong *plVar22;
  longlong lVar23;
  uint *puVar24;
  longlong unaff_R14;
  longlong lVar25;
  bool bVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar31;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_a8;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined4 auStack_90 [4];
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  puVar12 = (uint *)*param_3;
  lVar16 = param_3[1];
  uVar17 = *(uint *)((longlong)param_3 + 0x14);
  puVar24 = *(uint **)(puVar12 + 0x3e);
  lVar11 = *(longlong *)(puVar12 + 0x40);
  cVar2 = (char)puVar12[0x42];
  lVar23 = lVar11 * 4;
  puVar18 = puVar24;
  if (cVar2 == '\0') {
    do {
      if (lVar23 == 0) goto LAB_140bf1e96;
      uVar21 = *puVar18;
      puVar18 = puVar18 + 1;
      unaff_R14 = *(longlong *)(lVar16 + 0x100);
      lVar10 = *(longlong *)(unaff_R14 + 0x58 + (ulonglong)uVar21 * 0xa0);
      lVar23 = lVar23 + -4;
    } while (lVar10 == 0);
    lVar25 = unaff_R14 + (ulonglong)uVar21 * 0xa0;
    uVar7 = (ulonglong)*(uint *)(lVar25 + 0x94);
    lVar23 = *(longlong *)(lVar16 + 0x1a0);
    lVar13 = uVar7 * 0x48 + lVar23;
    lVar8 = *(longlong *)(lVar23 + 0x38 + uVar7 * 0x48);
    if (*(ulonglong *)(puVar12 + 0x44) < *(ulonglong *)(lVar23 + 0x40 + uVar7 * 0x48)) {
      uVar7 = *(ulonglong *)(lVar8 + *(ulonglong *)(puVar12 + 0x44) * 8);
      lVar23 = *(longlong *)(lVar13 + 0x18);
      if (uVar7 == 0) goto LAB_140bf1f1d;
      lVar13 = *(longlong *)(lVar23 + 0x10 + ~uVar7 * 0x30);
    }
    else {
      lVar23 = *(longlong *)(lVar13 + 0x18);
LAB_140bf1f1d:
      lVar13 = 0;
    }
    lVar8 = ~*(ulonglong *)(lVar8 + *(longlong *)(puVar12 + 0x46) * 8) * 0x30;
    uVar7 = (ulonglong)~*(uint *)(*(longlong *)(lVar25 + 0x50) + 8);
    unaff_R14 = uVar7 * 0x30 + *(longlong *)(lVar23 + 0x10 + lVar8);
    puVar12 = (uint *)(uVar7 * 4 + *(longlong *)(lVar23 + 0x28 + lVar8));
    iVar15 = 1;
    goto LAB_140bf1f65;
  }
  do {
    if (lVar23 == 0) goto LAB_140bf1e96;
    uVar7 = (ulonglong)*puVar18;
    puVar18 = puVar18 + 1;
    unaff_R14 = uVar7 * 9;
    lVar10 = *(longlong *)(*(longlong *)(lVar16 + 0x1a0) + 0x10 + uVar7 * 0x48);
    lVar23 = lVar23 + -4;
  } while (lVar10 == 0);
  lVar23 = *(longlong *)(lVar16 + 0x1a0) + uVar7 * 0x48;
  if (*(ulonglong *)(puVar12 + 0x44) < *(ulonglong *)(lVar23 + 0x40)) {
    uVar7 = *(ulonglong *)(*(longlong *)(lVar23 + 0x38) + *(ulonglong *)(puVar12 + 0x44) * 8);
    lVar8 = *(longlong *)(lVar23 + 0x18);
    if (uVar7 == 0) goto LAB_140bf1eed;
    lVar13 = *(longlong *)(lVar8 + 0x10 + ~uVar7 * 0x30);
  }
  else {
    lVar8 = *(longlong *)(lVar23 + 0x18);
LAB_140bf1eed:
    lVar13 = 0;
  }
  lVar23 = ~*(ulonglong *)(*(longlong *)(lVar23 + 0x38) + *(longlong *)(puVar12 + 0x46) * 8) * 0x30;
  unaff_R14 = *(longlong *)(lVar8 + 0x10 + lVar23);
  puVar12 = *(uint **)(lVar8 + 0x28 + lVar23);
  iVar15 = 1;
  if (cVar2 != '\0') goto LAB_140bf1eab;
LAB_140bf1f65:
  if (iVar15 == (int)lVar10) {
    do {
      if (puVar18 == puVar24 + lVar11) goto LAB_140bf1fa9;
      uVar21 = *puVar18;
      puVar18 = puVar18 + 1;
    } while (*(longlong *)(*(longlong *)(lVar16 + 0x100) + 0x58 + (ulonglong)uVar21 * 0xa0) == 0);
  }
  goto LAB_140bf1f93;
LAB_140bf1fa9:
  puVar24 = (uint *)(ulonglong)uVar17;
  if (lVar13 != 0) {
    *puVar12 = uVar17;
    *(undefined4 *)(unaff_R14 + 0x24) = 0;
    *(undefined8 *)(unaff_R14 + 0x1c) = 0;
    lVar23 = *param_2;
    lVar16 = param_2[1];
    uVar21 = *(uint *)((longlong)param_2 + 0x14);
    uVar7 = (ulonglong)uVar21;
    puVar18 = *(uint **)(lVar23 + 0xf8);
    lVar11 = *(longlong *)(lVar23 + 0x100);
    cVar2 = *(char *)(lVar23 + 0x108);
    puVar19 = puVar18;
    plVar22 = param_4;
    if (cVar2 == '\0') {
      lVar10 = lVar11 * 4;
      do {
        if (lVar10 == 0) goto LAB_140bf211f;
        plVar22 = (longlong *)(ulonglong)*puVar19;
        puVar19 = puVar19 + 1;
        puVar24 = *(uint **)(lVar16 + 0x100);
        lVar8 = *(longlong *)(puVar24 + (longlong)plVar22 * 0x28 + 0x16);
        lVar10 = lVar10 + -4;
      } while (lVar8 == 0);
      uVar7 = (ulonglong)puVar24[(longlong)plVar22 * 0x28 + 0x25];
      lVar13 = *(longlong *)(lVar16 + 0x1a0);
      lVar10 = lVar13 + uVar7 * 0x48;
      lVar25 = *(longlong *)(lVar13 + 0x38 + uVar7 * 0x48);
      if (*(ulonglong *)(lVar23 + 0x110) < *(ulonglong *)(lVar13 + 0x40 + uVar7 * 0x48)) {
        uVar7 = *(ulonglong *)(lVar25 + *(ulonglong *)(lVar23 + 0x110) * 8);
        lVar10 = *(longlong *)(lVar10 + 0x18);
        if (uVar7 == 0) goto LAB_140bf2346;
        lVar13 = *(longlong *)(lVar10 + 0x10 + ~uVar7 * 0x30);
      }
      else {
        lVar10 = *(longlong *)(lVar10 + 0x18);
LAB_140bf2346:
        lVar13 = 0;
      }
      lVar23 = ~*(ulonglong *)(lVar25 + *(longlong *)(lVar23 + 0x118) * 8) * 0x30;
      uVar7 = (ulonglong)~*(uint *)(*(longlong *)(puVar24 + (longlong)plVar22 * 0x28 + 0x14) + 8) *
              0x30 + *(longlong *)(lVar10 + 0x10 + lVar23);
      puVar24 = (uint *)((ulonglong)
                         ~*(uint *)(*(longlong *)(puVar24 + (longlong)plVar22 * 0x28 + 0x14) + 8) *
                         4 + *(longlong *)(lVar10 + 0x28 + lVar23));
      iVar15 = 1;
      goto LAB_140bf2196;
    }
    lVar10 = lVar11 * 4;
    do {
      if (lVar10 == 0) goto LAB_140bf211f;
      uVar9 = (ulonglong)*puVar19;
      puVar19 = puVar19 + 1;
      puVar24 = (uint *)(uVar9 * 9);
      lVar8 = *(longlong *)(*(longlong *)(lVar16 + 0x1a0) + 0x10 + uVar9 * 0x48);
      lVar10 = lVar10 + -4;
    } while (lVar8 == 0);
    lVar10 = *(longlong *)(lVar16 + 0x1a0) + uVar9 * 0x48;
    if (*(ulonglong *)(lVar23 + 0x110) < *(ulonglong *)(lVar10 + 0x40)) {
      uVar7 = *(ulonglong *)(*(longlong *)(lVar10 + 0x38) + *(ulonglong *)(lVar23 + 0x110) * 8);
      lVar25 = *(longlong *)(lVar10 + 0x18);
      if (uVar7 == 0) goto LAB_140bf2169;
      lVar13 = *(longlong *)(lVar25 + 0x10 + ~uVar7 * 0x30);
    }
    else {
      lVar25 = *(longlong *)(lVar10 + 0x18);
LAB_140bf2169:
      lVar13 = 0;
    }
    lVar23 = ~*(ulonglong *)(*(longlong *)(lVar10 + 0x38) + *(longlong *)(lVar23 + 0x118) * 8) *
             0x30;
    uVar7 = *(ulonglong *)(lVar25 + 0x10 + lVar23);
    puVar24 = *(uint **)(lVar25 + 0x28 + lVar23);
    iVar14 = 1;
    iVar15 = 1;
    if (cVar2 != '\0') goto LAB_140bf2130;
    goto LAB_140bf2196;
  }
  bVar26 = false;
  goto LAB_140bf1f99;
LAB_140bf211f:
  uVar21 = (uint)plVar22;
  lVar8 = 0;
  iVar14 = 0;
  lVar13 = 0;
  iVar15 = iVar14;
  if (cVar2 == '\0') {
LAB_140bf2196:
    if (iVar15 == (int)lVar8) {
      do {
        if (puVar19 == puVar18 + lVar11) goto LAB_140bf21f6;
        uVar3 = *puVar19;
        puVar19 = puVar19 + 1;
      } while (*(longlong *)(*(longlong *)(lVar16 + 0x100) + 0x58 + (ulonglong)uVar3 * 0xa0) == 0);
    }
  }
  else {
LAB_140bf2130:
    if (iVar14 == (int)lVar8) {
      do {
        if (puVar19 == puVar18 + lVar11) goto LAB_140bf21f6;
        uVar3 = *puVar19;
        puVar19 = puVar19 + 1;
      } while (*(longlong *)(*(longlong *)(lVar16 + 0x1a0) + 0x10 + (ulonglong)uVar3 * 0x48) == 0);
    }
  }
  bVar26 = lVar13 != 0;
  goto LAB_140bf21c9;
LAB_140bf21f6:
  if (lVar13 != 0) {
    *puVar24 = uVar21;
    *(undefined4 *)(uVar7 + 0x24) = 0;
    *(undefined8 *)(uVar7 + 0x1c) = 0;
    pbVar4 = (byte *)*param_1;
    if (1 < *pbVar4) {
      if (*pbVar4 == 2) {
        *puVar12 = uVar17;
        *(undefined8 *)(unaff_R14 + 0x1c) = _DAT_143065e90;
        *(undefined4 *)(unaff_R14 + 0x24) = 0x3fc00000;
        pdb_140df4540(&lStack_d8,pbVar4 + 8,*(undefined4 *)(pbVar4 + 4));
        *puVar12 = uVar17;
        *(undefined4 *)(unaff_R14 + 0x18) = (undefined4)uStack_d0;
        *(longlong *)(unaff_R14 + 0x10) = lStack_d8;
      }
      else {
        param_4 = (longlong *)*param_4;
        lVar23 = *(longlong *)(pbVar4 + 0x10);
        if (param_4[3] != 0) {
          lStack_d8 = lVar23;
          uVar7 = pdb_1400af0a0(param_4 + 4,&lStack_d8);
          lVar16 = *param_4;
          bVar27 = (byte)(uVar7 >> 0x39);
          auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
          auVar28 = pshuflw(auVar28,auVar28,0);
          lVar11 = 0;
          while( true ) {
            uVar7 = uVar7 & param_4[1];
            auVar1 = *(undefined1 (*) [16])(lVar16 + uVar7);
            auVar30[0] = -(auVar1[0] == auVar28[0]);
            auVar30[1] = -(auVar1[1] == auVar28[1]);
            auVar30[2] = -(auVar1[2] == auVar28[2]);
            auVar30[3] = -(auVar1[3] == auVar28[3]);
            auVar30[4] = -(auVar1[4] == auVar28[4]);
            auVar30[5] = -(auVar1[5] == auVar28[5]);
            auVar30[6] = -(auVar1[6] == auVar28[6]);
            auVar30[7] = -(auVar1[7] == auVar28[7]);
            auVar30[8] = -(auVar1[8] == auVar28[0]);
            auVar30[9] = -(auVar1[9] == auVar28[1]);
            auVar30[10] = -(auVar1[10] == auVar28[2]);
            auVar30[0xb] = -(auVar1[0xb] == auVar28[3]);
            auVar30[0xc] = -(auVar1[0xc] == auVar28[4]);
            auVar30[0xd] = -(auVar1[0xd] == auVar28[5]);
            auVar30[0xe] = -(auVar1[0xe] == auVar28[6]);
            auVar30[0xf] = -(auVar1[0xf] == auVar28[7]);
            uVar20 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar30[0xf] >> 7) << 0xf;
            uVar17 = (uint)uVar20;
            while (uVar20 != 0) {
              uVar21 = 0;
              for (uVar3 = uVar17; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar21 = uVar21 + 1;
              }
              lVar10 = (uVar21 + uVar7 & param_4[1]) * -0x2b0;
              if (lVar23 == *(longlong *)(lVar16 + -0x2b0 + lVar10)) {
                lVar16 = lVar16 + lVar10;
                if ((1 < *(ulonglong *)(lVar16 + -0x298)) && (0.0 < *(float *)(lVar16 + -0x278))) {
                  pdb_140df4540(&lStack_d8,pbVar4 + 8);
                  pdb_140c9ae80(&uStack_68,lVar16 + -0x2a8,&lStack_d8,*param_5,
                                CONCAT44(uVar31,0x40800000),0,0);
                  if (SBORROW8(0,lStack_58)) {
                    return;
                  }
                  uStack_74 = uStack_60;
                  uStack_7c = uStack_68;
                  uStack_c8 = uStack_48;
                  lStack_d8 = lStack_58;
                  uStack_d0 = uStack_50;
                  uStack_c0 = 0x8000000000000000;
                  uStack_a8 = 0;
                  uStack_98 = 0x40000000;
                  uStack_94 = 1;
                  uVar5 = *param_6;
                  pdb_140ab2da0(&lStack_d8,uVar5);
                  auStack_90[0] = 0;
                  uStack_80 = 0x3e4ccccd;
                  uStack_70 = 0x3f800000;
                  uStack_6c = 1;
                  pdb_140ab07b0(auStack_90,uVar5);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143066078);
              }
              uVar20 = (ushort)(uVar17 - 1) & (ushort)uVar17;
              uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar20);
            }
            auVar29[0] = -(auVar1[0] == -1);
            auVar29[1] = -(auVar1[1] == -1);
            auVar29[2] = -(auVar1[2] == -1);
            auVar29[3] = -(auVar1[3] == -1);
            auVar29[4] = -(auVar1[4] == -1);
            auVar29[5] = -(auVar1[5] == -1);
            auVar29[6] = -(auVar1[6] == -1);
            auVar29[7] = -(auVar1[7] == -1);
            auVar29[8] = -(auVar1[8] == -1);
            auVar29[9] = -(auVar1[9] == -1);
            auVar29[10] = -(auVar1[10] == -1);
            auVar29[0xb] = -(auVar1[0xb] == -1);
            auVar29[0xc] = -(auVar1[0xc] == -1);
            auVar29[0xd] = -(auVar1[0xd] == -1);
            auVar29[0xe] = -(auVar1[0xe] == -1);
            auVar29[0xf] = -(auVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
            uVar7 = uVar7 + lVar11 + 0x10;
            lVar11 = lVar11 + 0x10;
          }
        }
      }
    }
    return;
  }
  bVar26 = false;
LAB_140bf21c9:
  puVar6 = &UNK_143066060;
  goto LAB_140bf21d4;
LAB_140bf1e96:
  lVar10 = 0;
  iVar15 = 0;
  lVar13 = 0;
  if (cVar2 == '\0') goto LAB_140bf1f65;
LAB_140bf1eab:
  if (iVar15 == (int)lVar10) {
    do {
      if (puVar18 == puVar24 + lVar11) goto LAB_140bf1fa9;
      uVar21 = *puVar18;
      puVar18 = puVar18 + 1;
    } while (*(longlong *)(*(longlong *)(lVar16 + 0x1a0) + 0x10 + (ulonglong)uVar21 * 0x48) == 0);
  }
LAB_140bf1f93:
  bVar26 = lVar13 != 0;
LAB_140bf1f99:
  puVar6 = &UNK_143066048;
LAB_140bf21d4:
  lStack_d8 = CONCAT71(lStack_d8._1_7_,bVar26);
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143066330,0x2b,&lStack_d8,&UNK_143066380,puVar6);
}

