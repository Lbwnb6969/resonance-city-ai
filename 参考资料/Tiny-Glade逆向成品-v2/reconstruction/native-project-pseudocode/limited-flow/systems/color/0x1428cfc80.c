// VA 0x1428cfc80, PDB extent 3041 bytes
// system_color::ui_color_decorator::ui_color_windows_and_flags
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::ui_color_decorator::ui_color_windows_and_flags
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_decorator.rs
   Extent: 3041 */

void pdb_1428cfc80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 param_13,longlong *param_14,undefined8 *param_15,longlong *param_16)

{
  uint *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  undefined1 uVar7;
  char cVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  char *pcVar17;
  undefined1 *puVar18;
  uint *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ushort uVar24;
  longlong lVar25;
  bool bVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_3a8 [64];
  undefined4 auStack_368 [2];
  undefined8 uStack_360;
  undefined8 uStack_308;
  ulonglong uStack_258;
  undefined1 *puStack_250;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  byte bStack_14f;
  byte abStack_140 [4];
  uint uStack_13c;
  ulonglong uStack_138;
  ulonglong uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int iStack_110;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined8 *puStack_c8;
  ulonglong uStack_c0;
  ulonglong *puStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  byte bStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  if (*(char *)*param_1 != '\a') {
    return;
  }
  pfVar2 = (float *)*param_12;
  puStack_c8 = param_2;
  uStack_a8 = param_4;
  pdb_1409ef4a0(abStack_140,*param_11,pfVar2,0);
  if (iStack_110 == 2) {
    return;
  }
  uVar20 = (ulonglong)uStack_13c;
  if (abStack_140[0] - 0xd < 2) {
    uStack_308 = CONCAT44((int)uStack_138,uStack_13c);
    param_16 = (longlong *)*param_16;
    if (param_16[3] == 0) {
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
    }
    else {
      uVar10 = pdb_1428a3c70(param_16 + 4,&uStack_308);
      lVar16 = *param_16;
      bVar27 = (byte)(uVar10 >> 0x39);
      auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
      auVar28 = pshuflw(auVar28,auVar28,0);
      lVar21 = 0;
      while( true ) {
        uVar10 = uVar10 & param_16[1];
        pcVar17 = (char *)(lVar16 + uVar10);
        auVar33[0] = -(*pcVar17 == auVar28[0]);
        auVar33[1] = -(pcVar17[1] == auVar28[1]);
        auVar33[2] = -(pcVar17[2] == auVar28[2]);
        auVar33[3] = -(pcVar17[3] == auVar28[3]);
        auVar33[4] = -(pcVar17[4] == auVar28[4]);
        auVar33[5] = -(pcVar17[5] == auVar28[5]);
        auVar33[6] = -(pcVar17[6] == auVar28[6]);
        auVar33[7] = -(pcVar17[7] == auVar28[7]);
        auVar33[8] = -(pcVar17[8] == auVar28[0]);
        auVar33[9] = -(pcVar17[9] == auVar28[1]);
        auVar33[10] = -(pcVar17[10] == auVar28[2]);
        auVar33[0xb] = -(pcVar17[0xb] == auVar28[3]);
        auVar33[0xc] = -(pcVar17[0xc] == auVar28[4]);
        auVar33[0xd] = -(pcVar17[0xd] == auVar28[5]);
        auVar33[0xe] = -(pcVar17[0xe] == auVar28[6]);
        auVar33[0xf] = -(pcVar17[0xf] == auVar28[7]);
        uVar24 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf
        ;
        uVar22 = (uint)uVar24;
        while (uVar24 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar22; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar25 = (uVar4 + uVar10 & param_16[1]) * -0x140;
          if ((uStack_13c == *(uint *)(lVar16 + -0x140 + lVar25)) &&
             (*(int *)(lVar16 + -0x13c + lVar25) == (int)uStack_138)) {
            uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)*(byte *)(lVar16 + lVar25 + -0x98));
            goto LAB_1428cff16;
          }
          uVar24 = (ushort)(uVar22 - 1) & (ushort)uVar22;
          uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar24);
        }
        auVar30[0] = -(*pcVar17 == -1);
        auVar30[1] = -(pcVar17[1] == -1);
        auVar30[2] = -(pcVar17[2] == -1);
        auVar30[3] = -(pcVar17[3] == -1);
        auVar30[4] = -(pcVar17[4] == -1);
        auVar30[5] = -(pcVar17[5] == -1);
        auVar30[6] = -(pcVar17[6] == -1);
        auVar30[7] = -(pcVar17[7] == -1);
        auVar30[8] = -(pcVar17[8] == -1);
        auVar30[9] = -(pcVar17[9] == -1);
        auVar30[10] = -(pcVar17[10] == -1);
        auVar30[0xb] = -(pcVar17[0xb] == -1);
        auVar30[0xc] = -(pcVar17[0xc] == -1);
        auVar30[0xd] = -(pcVar17[0xd] == -1);
        auVar30[0xe] = -(pcVar17[0xe] == -1);
        auVar30[0xf] = -(pcVar17[0xf] == -1);
        if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar30 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar30 >> 0x1f,0) & 1) != 0) || (SUB161(auVar30 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') break;
        uVar10 = uVar10 + lVar21 + 0x10;
        lVar21 = lVar21 + 0x10;
      }
      uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
    }
LAB_1428cff16:
    uVar14 = *param_3;
    puStack_b8 = (ulonglong *)pdb_140c40010(uVar14,uVar20);
    if (puStack_b8 == (ulonglong *)0x0) {
      return;
    }
    bStack_93 = abStack_140[0];
    uVar13 = uVar20;
    uVar11 = pdb_140c3d2c0(uVar14);
    lVar16 = *param_14;
    uStack_c0 = uStack_138;
    uVar10 = uStack_138 & 0xffffffff;
    lVar21 = pdb_140c017b0(uVar20);
    uStack_1f8 = (undefined8 *)lVar21;
    if (*(longlong *)(lVar16 + 0x1b0) != 0) {
      uVar12 = pdb_140fc4ba0(lVar16 + 0x1b8,&uStack_1f8);
      uVar10 = *(ulonglong *)(lVar16 + 0x1a0);
      bVar27 = (byte)(uVar12 >> 0x39);
      auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
      auVar28 = pshuflw(auVar28,auVar28,0);
      lVar25 = 0;
      while( true ) {
        uVar12 = uVar12 & uVar10;
        pcVar17 = (char *)(*(longlong *)(lVar16 + 0x198) + uVar12);
        auVar34[0] = -(*pcVar17 == auVar28[0]);
        auVar34[1] = -(pcVar17[1] == auVar28[1]);
        auVar34[2] = -(pcVar17[2] == auVar28[2]);
        auVar34[3] = -(pcVar17[3] == auVar28[3]);
        auVar34[4] = -(pcVar17[4] == auVar28[4]);
        auVar34[5] = -(pcVar17[5] == auVar28[5]);
        auVar34[6] = -(pcVar17[6] == auVar28[6]);
        auVar34[7] = -(pcVar17[7] == auVar28[7]);
        auVar34[8] = -(pcVar17[8] == auVar28[0]);
        auVar34[9] = -(pcVar17[9] == auVar28[1]);
        auVar34[10] = -(pcVar17[10] == auVar28[2]);
        auVar34[0xb] = -(pcVar17[0xb] == auVar28[3]);
        auVar34[0xc] = -(pcVar17[0xc] == auVar28[4]);
        auVar34[0xd] = -(pcVar17[0xd] == auVar28[5]);
        auVar34[0xe] = -(pcVar17[0xe] == auVar28[6]);
        auVar34[0xf] = -(pcVar17[0xf] == auVar28[7]);
        uVar24 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf
        ;
        uVar22 = (uint)uVar24;
        while (uVar24 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar22; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar23 = *(longlong *)(lVar16 + 0x198) + (uVar4 + uVar12 & uVar10) * -0x20;
          if (lVar21 == *(longlong *)(lVar23 + -0x20)) {
            uVar12 = *(ulonglong *)(lVar23 + -8);
            if (uVar12 < 2) {
              lVar23 = lVar23 + -0x18;
            }
            else {
              uVar12 = *(ulonglong *)(lVar23 + -0x10);
              lVar23 = *(longlong *)(lVar23 + -0x18);
            }
            uVar10 = 0;
            if ((uVar12 != 0) &&
               (pcVar17 = (char *)(lVar23 + uVar12 * 4 + -4), pcVar17 != (char *)0x0)) {
              uVar10 = (ulonglong)(*pcVar17 == '\x03');
            }
            uStack_98 = (uint)uVar10;
            lVar16 = 0;
            goto LAB_1428d0070;
          }
          uVar24 = (ushort)(uVar22 - 1) & (ushort)uVar22;
          uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar24);
        }
        auVar31[0] = -(*pcVar17 == -1);
        auVar31[1] = -(pcVar17[1] == -1);
        auVar31[2] = -(pcVar17[2] == -1);
        auVar31[3] = -(pcVar17[3] == -1);
        auVar31[4] = -(pcVar17[4] == -1);
        auVar31[5] = -(pcVar17[5] == -1);
        auVar31[6] = -(pcVar17[6] == -1);
        auVar31[7] = -(pcVar17[7] == -1);
        auVar31[8] = -(pcVar17[8] == -1);
        auVar31[9] = -(pcVar17[9] == -1);
        auVar31[10] = -(pcVar17[10] == -1);
        auVar31[0xb] = -(pcVar17[0xb] == -1);
        auVar31[0xc] = -(pcVar17[0xc] == -1);
        auVar31[0xd] = -(pcVar17[0xd] == -1);
        auVar31[0xe] = -(pcVar17[0xe] == -1);
        auVar31[0xf] = -(pcVar17[0xf] == -1);
        if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x1f,0) & 1) != 0) || (SUB161(auVar31 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') break;
        uVar12 = uVar12 + lVar25 + 0x10;
        lVar25 = lVar25 + 0x10;
      }
    }
    uStack_98 = 0;
    goto LAB_1428d0084;
  }
  bStack_93 = abStack_140[0];
  if (abStack_140[0] != 4) {
    return;
  }
  uVar10 = uStack_138;
  puStack_b8 = (ulonglong *)pdb_140c3d060(*param_3,uStack_138,uStack_130);
  if (puStack_b8 == (ulonglong *)0x0) {
    return;
  }
  uStack_c0 = uStack_138;
  uVar13 = *puStack_b8;
  lVar16 = pdb_140a61160(*param_15);
  uStack_1f8 = (undefined8 *)CONCAT44(uStack_1f8._4_4_,uStack_13c);
  uVar11 = *(ulonglong *)(lVar16 + 0x10);
  uStack_b0 = uStack_130;
  uStack_a0 = uVar13;
  if (uVar11 != 0) {
    if (uVar11 == 1) {
      lVar16 = *(longlong *)(lVar16 + 8);
      if (uStack_13c == *(uint *)(lVar16 + 0x20)) {
        uVar13 = 0;
LAB_1428d0334:
        lVar21 = *(longlong *)(lVar16 + 0x10 + uVar13 * 0x28);
        uVar10 = 0;
        if (lVar21 != 0) {
          puVar19 = *(uint **)(lVar16 + 8 + uVar13 * 0x28);
          puVar1 = puVar19 + lVar21 * 2;
          lVar16 = *param_14;
          uStack_98 = 0;
LAB_1428d0430:
          uVar10 = (ulonglong)*puVar19;
          uVar9 = pdb_140a61520(uVar20);
          lVar21 = pdb_140c017b0(uVar9);
          uStack_1f8 = (undefined8 *)lVar21;
          if (*(longlong *)(lVar16 + 0x1b0) != 0) {
            uVar13 = pdb_140fc4ba0(lVar16 + 0x1b8,&uStack_1f8);
            uVar10 = *(ulonglong *)(lVar16 + 0x1a0);
            bVar27 = (byte)(uVar13 >> 0x39);
            auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
            auVar28 = pshuflw(auVar28,auVar28,0);
            lVar25 = 0;
            while( true ) {
              uVar13 = uVar13 & uVar10;
              auVar33 = *(undefined1 (*) [16])(*(longlong *)(lVar16 + 0x198) + uVar13);
              auVar32[0] = -(auVar33[0] == auVar28[0]);
              auVar32[1] = -(auVar33[1] == auVar28[1]);
              auVar32[2] = -(auVar33[2] == auVar28[2]);
              auVar32[3] = -(auVar33[3] == auVar28[3]);
              auVar32[4] = -(auVar33[4] == auVar28[4]);
              auVar32[5] = -(auVar33[5] == auVar28[5]);
              auVar32[6] = -(auVar33[6] == auVar28[6]);
              auVar32[7] = -(auVar33[7] == auVar28[7]);
              auVar32[8] = -(auVar33[8] == auVar28[0]);
              auVar32[9] = -(auVar33[9] == auVar28[1]);
              auVar32[10] = -(auVar33[10] == auVar28[2]);
              auVar32[0xb] = -(auVar33[0xb] == auVar28[3]);
              auVar32[0xc] = -(auVar33[0xc] == auVar28[4]);
              auVar32[0xd] = -(auVar33[0xd] == auVar28[5]);
              auVar32[0xe] = -(auVar33[0xe] == auVar28[6]);
              auVar32[0xf] = -(auVar33[0xf] == auVar28[7]);
              uVar24 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
              uVar22 = (uint)uVar24;
              while (uVar24 != 0) {
                uVar4 = 0;
                for (uVar5 = uVar22; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                lVar23 = *(longlong *)(lVar16 + 0x198) + (uVar4 + uVar13 & uVar10) * -0x20;
                if (lVar21 == *(longlong *)(lVar23 + -0x20)) {
                  uVar13 = *(ulonglong *)(lVar23 + -8);
                  if (uVar13 < 2) {
                    lVar23 = lVar23 + -0x18;
                  }
                  else {
                    uVar13 = *(ulonglong *)(lVar23 + -0x10);
                    lVar23 = *(longlong *)(lVar23 + -0x18);
                  }
                  if ((uVar13 != 0) &&
                     (pcVar17 = (char *)(lVar23 + uVar13 * 4 + -4), pcVar17 != (char *)0x0)) {
                    uStack_98 = CONCAT31((int3)(uStack_98 >> 8),(byte)uStack_98 | *pcVar17 == '\x03'
                                        );
                    uVar10 = (ulonglong)uStack_98;
                  }
                  lVar21 = 0;
                  goto LAB_1428d0410;
                }
                uVar24 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar24);
              }
              auVar29[0] = -(auVar33[0] == -1);
              auVar29[1] = -(auVar33[1] == -1);
              auVar29[2] = -(auVar33[2] == -1);
              auVar29[3] = -(auVar33[3] == -1);
              auVar29[4] = -(auVar33[4] == -1);
              auVar29[5] = -(auVar33[5] == -1);
              auVar29[6] = -(auVar33[6] == -1);
              auVar29[7] = -(auVar33[7] == -1);
              auVar29[8] = -(auVar33[8] == -1);
              auVar29[9] = -(auVar33[9] == -1);
              auVar29[10] = -(auVar33[10] == -1);
              auVar29[0xb] = -(auVar33[0xb] == -1);
              auVar29[0xc] = -(auVar33[0xc] == -1);
              auVar29[0xd] = -(auVar33[0xd] == -1);
              auVar29[0xe] = -(auVar33[0xe] == -1);
              auVar29[0xf] = -(auVar33[0xf] == -1);
              if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
              uVar13 = uVar13 + lVar25 + 0x10;
              lVar25 = lVar25 + 0x10;
            }
          }
          goto LAB_1428d04a0;
        }
      }
    }
    else {
      uVar13 = pdb_140fc4e90(lVar16 + 0x38,&uStack_1f8);
      uVar12 = pdb_142b39ce0(lVar16,uVar13,&uStack_1f8);
      uVar10 = uVar13;
      if ((uVar12 & 1) != 0) {
        if (uVar11 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar13,uVar11,&UNK_14366cdd8);
        }
        lVar16 = *(longlong *)(lVar16 + 8);
        if (lVar16 != 0) goto LAB_1428d0334;
      }
    }
  }
  uStack_98 = 0;
LAB_1428d04b7:
  uVar22 = (uint)((uint)uStack_a0 < 6);
  if (uStack_c0 == 3) {
    return;
  }
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  uStack_d8 = uStack_c0;
  uStack_d0 = uStack_b0;
  goto LAB_1428d0086;
  while (pcVar17 = (char *)(lVar23 + lVar21), lVar21 = lVar21 + 4, *pcVar17 != '\x05') {
LAB_1428d0410:
    if (uVar13 * 4 == lVar21) break;
  }
LAB_1428d04a0:
  puVar19 = puVar19 + 2;
  if (puVar19 == puVar1) goto LAB_1428d04b7;
  goto LAB_1428d0430;
  while (pcVar17 = (char *)(lVar23 + lVar16), lVar16 = lVar16 + 4, *pcVar17 != '\x05') {
LAB_1428d0070:
    if (uVar12 * 4 == lVar16) break;
  }
LAB_1428d0084:
  uVar22 = 1;
  uStack_d8 = uVar11;
  uStack_d0 = uVar13;
LAB_1428d0086:
  uStack_e8 = pdb_140c47770(param_8);
  uStack_e0 = uVar10;
  uVar7 = pdb_140c45920(&uStack_e8,uVar20);
  uStack_b0 = CONCAT71(uStack_b0._1_7_,uVar7);
  uVar13 = *(ulonglong *)*param_6;
  uVar14 = *puStack_c8;
  uStack_1f8 = &uStack_308;
  pcStack_1f0 = pdb_140090b90;
  uStack_308 = uVar20;
  pdb_140f60760(auStack_100,&UNK_1435afa03,&uStack_1f8);
  uStack_308 = CONCAT44(SQRT((pfVar2[2] - fStack_120) * (pfVar2[2] - fStack_120) +
                             (pfVar2[1] - fStack_124) * (pfVar2[1] - fStack_124) +
                             (*pfVar2 - fStack_128) * (*pfVar2 - fStack_128)),(undefined4)uStack_308
                       );
  uStack_308 = CONCAT71(uStack_308._1_7_,5);
  uStack_258 = uStack_258 & 0xffffffffffffff00;
  uStack_91 = 1;
  pdb_140c9dcb0(&uStack_1f8,&uStack_308,&uStack_258);
  bStack_14f = bStack_14f | 2;
  pub_142e32760(&uStack_308,&uStack_1f8,0xb0);
  uStack_92 = 1;
  pdb_140c9dee0(&uStack_1f8);
  uStack_360 = 0;
  auStack_368[0] = 1;
  uStack_92 = 1;
  pdb_140c9de10(&uStack_258,&uStack_1f8,auStack_368);
  uStack_1f8 = (undefined8 *)CONCAT44(uStack_1f8._4_4_,uVar22 * 5 + 4);
  uStack_92 = 1;
  pdb_140c9df00(auStack_368,&uStack_258,&uStack_1f8);
  uStack_92 = 0;
  pdb_140c9dd20(&uStack_1f8,&uStack_308,auStack_368);
  puStack_250 = (undefined1 *)CONCAT71(puStack_250._1_7_,(char)uVar22);
  uStack_91 = 1;
  uStack_258 = uVar13;
  pdb_1428b3310(&uStack_308,&uStack_1f8,&uStack_258);
  uStack_91 = 0;
  puVar18 = auStack_100;
  uStack_258 = pdb_1428b3ad0(uVar14,puVar18,&uStack_308);
  if ((char)uVar22 == '\0') {
    return;
  }
  puStack_250 = puVar18;
  cVar8 = pdb_1408ffaf0(&uStack_258);
  puVar6 = puStack_b8;
  if (cVar8 == '\0') goto LAB_1428d0599;
  if ((int)*puStack_b8 == 7) {
    uVar9 = pdb_140a61520(uStack_13c);
    uStack_1f8 = (undefined8 *)CONCAT44(uStack_13c,uVar9);
    pcStack_1f0 = (code *)CONCAT62(pcStack_1f0._2_6_,0x100);
    pdb_141b751b0(param_13,&uStack_1f8,&UNK_1435afa18);
    goto LAB_1428d0599;
  }
  pdb_140c45ec0(&uStack_1f8,*param_7,uStack_13c,&UNK_1435afa30);
  pdb_1408697c0(auStack_3a8,&uStack_1f8);
  uVar7 = *(undefined1 *)((longlong)puVar6 + 0x59);
  uVar14 = pdb_140c44e40(uVar10,uVar7,uStack_b0 & 0xff);
  if (*(byte *)((longlong)puVar6 + 0x32) < 2) {
    uVar3 = *param_10;
    uVar15 = pdb_140c413f0(&uStack_d8);
    lVar16 = pdb_140b54f80(uVar3,uVar15,&UNK_1435afa48);
    if (lVar16 == 0) goto LAB_1428d0571;
    bVar26 = *(uint *)(lVar16 + 600) < 2;
  }
  else {
LAB_1428d0571:
    bVar26 = false;
  }
  pdb_140c68730(uVar14,auStack_3a8,*param_9,uStack_13c,uVar7,bVar26,1);
LAB_1428d0599:
  cVar8 = pdb_1408ffa90(&uStack_258);
  if (cVar8 == '\0') {
    return;
  }
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar16 = *param_5;
  lVar21 = *(longlong *)(lVar16 + 0x30);
  uVar14 = *(undefined8 *)(lVar16 + 0x40);
  if (lVar21 == *(longlong *)(lVar16 + 0x20)) {
    pdb_142d7e980(lVar16 + 0x20);
  }
  lVar25 = *(longlong *)(lVar16 + 0x28);
  *(undefined8 *)(lVar25 + lVar21 * 0x10) = uVar14;
  *(undefined1 *)(lVar25 + 8 + lVar21 * 0x10) = 0;
  *(longlong *)(lVar16 + 0x30) = lVar21 + 1;
  *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
                    /* WARNING: Could not recover jumptable at 0x0001428d0614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1435afaa0 + *(int *)(&UNK_1435afaa0 + *puStack_b8 * 4)))();
  return;
}

