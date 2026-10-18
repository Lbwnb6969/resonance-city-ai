// VA 0x1429853c0, PDB extent 2849 bytes
// toolbar::toolbar_button::toolbar_button_keep_focus
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_button.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::toolbar_button::toolbar_button_keep_focus
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_button.rs
   Extent: 2849 */

void pdb_1429853c0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  code *pcVar8;
  float fVar9;
  undefined *puVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong unaff_RSI;
  longlong lVar26;
  ulonglong uVar27;
  undefined *puVar28;
  uint *puVar29;
  longlong lVar30;
  undefined *puVar31;
  undefined *unaff_R13;
  float fVar32;
  
  puVar20 = param_2;
  cVar11 = pdb_140e94b40();
  if (cVar11 == '\0') goto LAB_14298555f;
  unaff_RSI = 0x32;
  lVar13 = pdb_142984230(0x32);
  puVar31 = &UNK_1436080b8;
  if (lVar13 != 1) goto LAB_14298544c;
  if (puVar20 < (undefined8 *)0x33) {
    uVar14 = pdb_142984230(puVar20);
    if ((uVar14 & 1) == 0) {
LAB_14298544c:
      puVar28 = &UNK_1436081c4;
      unaff_R13 = &UNK_143608198;
      do {
        bVar3 = puVar28[-1];
        uVar12 = (uint)(char)bVar3;
        if ((char)bVar3 < '\0') {
          bVar4 = puVar28[-2];
          if ((char)bVar4 < -0x40) {
            bVar5 = puVar28[-3];
            if ((char)bVar5 < -0x40) {
              pbVar1 = puVar28 + -4;
              puVar28 = puVar28 + -4;
              uVar12 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar28 = puVar28 + -3;
              uVar12 = bVar5 & 0xf;
            }
            uVar12 = bVar4 & 0x3f | uVar12 << 6;
          }
          else {
            puVar28 = puVar28 + -2;
            uVar12 = bVar4 & 0x1f;
          }
          uVar12 = (uint)(bVar3 & 0x3f) | uVar12 << 6;
          if (uVar12 != 0x5c) goto LAB_1429854d4;
LAB_1429854e5:
          if ((undefined *)0x2c < puVar28 + -0x143608197) goto LAB_142985dff;
          uVar14 = 0x2c - (longlong)(puVar28 + -0x143608197);
          unaff_R13 = puVar28 + 1;
          goto LAB_142985507;
        }
        puVar28 = puVar28 + -1;
        if (uVar12 == 0x5c) goto LAB_1429854e5;
LAB_1429854d4:
        if (uVar12 == 0x2f) goto LAB_1429854e5;
      } while (puVar28 != &UNK_143608198);
      uVar14 = 0x2c;
LAB_142985507:
      plVar15 = (longlong *)pdb_140e97000();
      if ((char)plVar15[0xd] != '\x01') goto LAB_142985dcb;
LAB_142985516:
      if (*plVar15 == 0) {
        *plVar15 = -1;
        pdb_140e94f10(plVar15 + 1,puVar31,unaff_RSI,unaff_R13,uVar14,1,0);
        *plVar15 = *plVar15 + 1;
LAB_14298555f:
        fVar9 = _DAT_142e37988;
        lVar13 = *param_1;
        puVar31 = (undefined *)param_1[1];
        uVar12 = *(uint *)((longlong)param_1 + 0x14);
        puVar29 = *(uint **)(lVar13 + 0xf8);
        puVar2 = puVar29 + *(longlong *)(lVar13 + 0x100);
        lVar30 = *param_3;
        if (*(char *)(lVar13 + 0x108) == '\0') {
          puVar28 = (undefined *)0x0;
          unaff_R13 = (undefined *)0x8;
          lVar19 = 0;
          lVar16 = 0;
          lVar17 = 0;
          uVar14 = 0;
          do {
            if ((int)uVar14 == (int)lVar17) {
              if (puVar29 == puVar2) goto LAB_1429857c6;
              while( true ) {
                lVar17 = *(longlong *)
                          (*(longlong *)(puVar31 + 0x100) + 0x58 + (ulonglong)*puVar29 * 0xa0);
                if (lVar17 != 0) break;
                puVar29 = puVar29 + 1;
                if (puVar29 == puVar2) goto LAB_1429857c6;
              }
              lVar23 = *(longlong *)(puVar31 + 0x100) + (ulonglong)*puVar29 * 0xa0;
              uVar14 = (ulonglong)*(uint *)(lVar23 + 0x94);
              lVar19 = *(longlong *)(*(longlong *)(puVar31 + 0x1a0) + 0x18 + uVar14 * 0x48);
              lVar18 = *(longlong *)(*(longlong *)(puVar31 + 0x1a0) + 0x38 + uVar14 * 0x48);
              lVar26 = ~*(ulonglong *)(lVar18 + *(longlong *)(lVar13 + 0x110) * 8) * 0x30;
              lVar16 = *(longlong *)(lVar19 + 0x10 + lVar26);
              param_1 = *(longlong **)(lVar19 + 0x28 + lVar26);
              lVar19 = *(longlong *)
                        (lVar19 + 0x10 +
                        ~*(ulonglong *)(lVar18 + *(longlong *)(lVar13 + 0x118) * 8) * 0x30);
              unaff_R13 = *(undefined **)(lVar23 + 0x50);
              puVar29 = puVar29 + 1;
              uVar24 = 1;
              uVar14 = 0;
            }
            else {
              uVar24 = (ulonglong)((int)uVar14 + 1);
            }
            uVar14 = (ulonglong)~*(uint *)(unaff_R13 + uVar14 * 0x10 + 8);
            uVar22 = 1;
            fVar32 = fVar9;
            if (*(char *)(lVar19 + 1 + uVar14 * 3) == '\0') {
              fVar32 = *(float *)(lVar16 + uVar14 * 4) - *(float *)(lVar30 + 0x58);
              if (fVar32 <= 0.0) {
                fVar32 = 0.0;
              }
              uVar22 = (uint)puVar28;
            }
            *(uint *)((longlong)param_1 + uVar14 * 4) = uVar12;
            *(float *)(lVar16 + uVar14 * 4) = fVar32;
            puVar28 = (undefined *)(ulonglong)uVar22;
            uVar14 = uVar24;
          } while( true );
        }
        puVar28 = (undefined *)0x0;
        param_1 = (longlong *)0x0;
        lVar16 = 0;
        lVar17 = 0;
        uVar22 = 0;
        do {
          if (uVar22 == (uint)lVar17) {
            if (puVar29 == puVar2) goto LAB_1429857c6;
            while( true ) {
              lVar17 = *(longlong *)
                        (*(longlong *)(puVar31 + 0x1a0) + 0x10 + (ulonglong)*puVar29 * 0x48);
              if (lVar17 != 0) break;
              puVar29 = puVar29 + 1;
              if (puVar29 == puVar2) goto LAB_1429857c6;
            }
            lVar16 = *(longlong *)(puVar31 + 0x1a0) + (ulonglong)*puVar29 * 0x48;
            lVar19 = *(longlong *)(lVar16 + 0x18);
            lVar18 = *(longlong *)(lVar16 + 0x38);
            lVar26 = ~*(ulonglong *)(lVar18 + *(longlong *)(lVar13 + 0x110) * 8) * 0x30;
            lVar16 = *(longlong *)(lVar19 + 0x10 + lVar26);
            unaff_RSI = *(ulonglong *)(lVar19 + 0x28 + lVar26);
            param_1 = *(longlong **)
                       (lVar19 + 0x10 +
                       ~*(ulonglong *)(lVar18 + *(longlong *)(lVar13 + 0x118) * 8) * 0x30);
            puVar29 = puVar29 + 1;
            uVar22 = 0;
          }
          uVar14 = (ulonglong)uVar22;
          puVar10 = (undefined *)0x1;
          fVar32 = fVar9;
          if ((*(char *)((longlong)param_1 + uVar14 * 3 + 1) == '\0') &&
             (fVar32 = *(float *)(lVar16 + uVar14 * 4) - *(float *)(lVar30 + 0x58),
             puVar10 = puVar28, fVar32 <= 0.0)) {
            fVar32 = 0.0;
          }
          puVar28 = puVar10;
          uVar22 = uVar22 + 1;
          *(uint *)(unaff_RSI + uVar14 * 4) = uVar12;
          *(float *)(lVar16 + uVar14 * 4) = fVar32;
          unaff_R13 = puVar28;
        } while( true );
      }
      goto LAB_142985dbf;
    }
    if ((longlong)puVar20 + 2U < 0x33) {
      unaff_RSI = 0x30 - (longlong)puVar20;
      puVar31 = &UNK_1436080ba + (longlong)puVar20;
      goto LAB_14298544c;
    }
    goto LAB_142985e42;
  }
  goto LAB_142985e22;
LAB_1429857c6:
  puVar6 = (ulonglong *)*param_2;
  lVar30 = param_2[1];
  uVar14 = *puVar6;
  uVar25 = 0;
  uVar24 = uVar14 - *(ulonglong *)(lVar30 + 0x18);
  if (uVar14 < *(ulonglong *)(lVar30 + 0x18)) {
    uVar24 = uVar25;
  }
  uVar21 = uVar14 - *(ulonglong *)(lVar30 + 0x38);
  if (uVar14 < *(ulonglong *)(lVar30 + 0x38)) {
    uVar21 = uVar25;
  }
  uVar14 = *(ulonglong *)(lVar30 + 0x30);
  unaff_RSI = uVar14 - uVar21;
  if (uVar21 > uVar14) {
    unaff_RSI = uVar25;
  }
  uVar7 = *(ulonglong *)(lVar30 + 0x10);
  uVar27 = uVar7 - uVar24;
  if (uVar24 > uVar7) {
    uVar27 = uVar25;
  }
  uVar25 = *(ulonglong *)(lVar30 + 0x40);
  uVar27 = uVar27 + unaff_RSI;
  *puVar6 = uVar25 - uVar27;
  if (uVar24 <= uVar7 && uVar7 - uVar24 != 0 || uVar21 <= uVar14 && uVar14 - uVar21 != 0) {
    *puVar6 = uVar25;
    puVar29 = *(uint **)(lVar13 + 0xf8);
    puVar2 = puVar29 + *(longlong *)(lVar13 + 0x100);
    if (*(char *)(lVar13 + 0x108) != '\0') {
      lVar30 = 0;
      unaff_RSI = 0;
      uVar27 = 0;
      do {
        if ((int)uVar27 == (int)lVar30) {
          if (puVar29 == puVar2) goto LAB_142985a8a;
          while( true ) {
            lVar30 = *(longlong *)
                      (*(longlong *)(puVar31 + 0x1a0) + 0x10 + (ulonglong)*puVar29 * 0x48);
            if (lVar30 != 0) break;
            puVar29 = puVar29 + 1;
            if (puVar29 == puVar2) goto LAB_142985a8a;
          }
          lVar17 = *(longlong *)(puVar31 + 0x1a0) + (ulonglong)*puVar29 * 0x48;
          lVar16 = *(longlong *)(lVar17 + 0x18);
          lVar17 = ~*(ulonglong *)(*(longlong *)(lVar17 + 0x38) + *(longlong *)(lVar13 + 0x110) * 8)
                   * 0x30;
          unaff_RSI = *(ulonglong *)(lVar16 + 0x10 + lVar17);
          uVar24 = *(ulonglong *)(lVar16 + 0x28 + lVar17);
          puVar29 = puVar29 + 1;
          uVar27 = 0;
        }
        *(uint *)(uVar24 + uVar27 * 4) = uVar12;
        *(undefined4 *)(unaff_RSI + uVar27 * 4) = 0;
        uVar27 = (ulonglong)((int)uVar27 + 1);
      } while( true );
    }
    uVar27 = 0;
    while (puVar29 != puVar2) {
      while( true ) {
        lVar30 = *(longlong *)(*(longlong *)(puVar31 + 0x100) + 0x58 + (ulonglong)*puVar29 * 0xa0);
        if (lVar30 != 0) break;
        puVar29 = puVar29 + 1;
        if (puVar29 == puVar2) goto LAB_142985a8a;
      }
      lVar19 = *(longlong *)(puVar31 + 0x100) + (ulonglong)*puVar29 * 0xa0;
      uVar14 = (ulonglong)*(uint *)(lVar19 + 0x94);
      lVar17 = *(longlong *)(*(longlong *)(puVar31 + 0x1a0) + 0x18 + uVar14 * 0x48);
      lVar16 = ~*(ulonglong *)
                 (*(longlong *)(*(longlong *)(puVar31 + 0x1a0) + 0x38 + uVar14 * 0x48) +
                 *(longlong *)(lVar13 + 0x110) * 8) * 0x30;
      uVar27 = *(ulonglong *)(lVar17 + 0x10 + lVar16);
      unaff_RSI = *(ulonglong *)(lVar17 + 0x28 + lVar16);
      lVar17 = *(longlong *)(lVar19 + 0x50);
      puVar29 = puVar29 + 1;
      uVar22 = 1;
      uVar14 = 0;
      while( true ) {
        uVar14 = (ulonglong)~*(uint *)(lVar17 + 8 + uVar14 * 0x10);
        *(uint *)(unaff_RSI + uVar14 * 4) = uVar12;
        *(undefined4 *)(uVar27 + uVar14 * 4) = 0;
        if (uVar22 == (uint)lVar30) break;
        uVar14 = (ulonglong)uVar22;
        uVar22 = uVar22 + 1;
      }
    }
  }
  else if (puVar28 != (undefined *)0x0) {
    puVar29 = *(uint **)(lVar13 + 0xf8);
    puVar2 = puVar29 + *(longlong *)(lVar13 + 0x100);
    if (*(char *)(lVar13 + 0x108) == '\0') {
      lVar30 = 0;
      uVar27 = 8;
      lVar17 = 0;
      unaff_RSI = 0;
      uVar14 = 0;
LAB_142985cda:
      if ((int)uVar14 == (int)lVar30) {
        if (puVar29 == puVar2) goto LAB_142985a8a;
        uVar27 = *(ulonglong *)(puVar31 + 0x100);
        while( true ) {
          lVar30 = *(longlong *)(uVar27 + 0x58 + (ulonglong)*puVar29 * 0xa0);
          if (lVar30 != 0) break;
          puVar29 = puVar29 + 1;
          if (puVar29 == puVar2) goto LAB_142985a8a;
        }
        lVar18 = uVar27 + (ulonglong)*puVar29 * 0xa0;
        uVar14 = (ulonglong)*(uint *)(lVar18 + 0x94);
        lVar17 = *(longlong *)(*(longlong *)(puVar31 + 0x1a0) + 0x18 + uVar14 * 0x48);
        lVar16 = *(longlong *)(*(longlong *)(puVar31 + 0x1a0) + 0x38 + uVar14 * 0x48);
        lVar19 = ~*(ulonglong *)(lVar16 + *(longlong *)(lVar13 + 0x110) * 8) * 0x30;
        unaff_RSI = *(ulonglong *)(lVar17 + 0x10 + lVar19);
        uVar24 = *(ulonglong *)(lVar17 + 0x28 + lVar19);
        lVar17 = *(longlong *)
                  (lVar17 + 0x10 +
                  ~*(ulonglong *)(lVar16 + *(longlong *)(lVar13 + 0x118) * 8) * 0x30);
        uVar27 = *(ulonglong *)(lVar18 + 0x50);
        puVar29 = puVar29 + 1;
        uVar25 = 1;
        uVar14 = 0;
      }
      else {
        uVar25 = (ulonglong)((int)uVar14 + 1);
      }
      param_1 = (longlong *)(uVar14 * 0x10);
      uVar21 = (ulonglong)~*(uint *)(uVar27 + 8 + (longlong)param_1);
      uVar14 = uVar25;
      if (*(char *)(lVar17 + 1 + uVar21 * 3) == '\0') {
        *(uint *)(uVar24 + uVar21 * 4) = uVar12;
        *(undefined4 *)(unaff_RSI + uVar21 * 4) = 0;
      }
      goto LAB_142985cda;
    }
    lVar30 = 0;
    uVar27 = 0;
    unaff_RSI = 0;
    uVar14 = 0;
LAB_142985850:
    uVar25 = uVar14;
    if ((int)uVar25 == (int)lVar30) {
      if (puVar29 == puVar2) goto LAB_142985a8a;
      while( true ) {
        lVar30 = *(longlong *)(*(longlong *)(puVar31 + 0x1a0) + 0x10 + (ulonglong)*puVar29 * 0x48);
        if (lVar30 != 0) break;
        puVar29 = puVar29 + 1;
        if (puVar29 == puVar2) goto LAB_142985a8a;
      }
      lVar17 = *(longlong *)(puVar31 + 0x1a0) + (ulonglong)*puVar29 * 0x48;
      lVar16 = *(longlong *)(lVar17 + 0x18);
      lVar17 = *(longlong *)(lVar17 + 0x38);
      lVar19 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar13 + 0x110) * 8) * 0x30;
      unaff_RSI = *(ulonglong *)(lVar16 + 0x10 + lVar19);
      uVar24 = *(ulonglong *)(lVar16 + 0x28 + lVar19);
      uVar27 = *(ulonglong *)
                (lVar16 + 0x10 + ~*(ulonglong *)(lVar17 + *(longlong *)(lVar13 + 0x118) * 8) * 0x30)
      ;
      puVar29 = puVar29 + 1;
      uVar25 = 0;
    }
    uVar14 = (ulonglong)((int)uVar25 + 1);
    if (*(char *)(uVar27 + 1 + uVar25 * 3) == '\0') {
      *(uint *)(uVar24 + uVar25 * 4) = uVar12;
      *(undefined4 *)(unaff_RSI + uVar25 * 4) = 0;
    }
    goto LAB_142985850;
  }
LAB_142985a8a:
  puVar29 = *(uint **)(lVar13 + 0xf8);
  puVar2 = puVar29 + *(longlong *)(lVar13 + 0x100);
  if (*(char *)(lVar13 + 0x108) == '\0') {
    lVar30 = 0;
    unaff_RSI = 8;
    param_3 = (longlong *)0x0;
    lVar17 = 0;
    uVar14 = 0;
LAB_142985b85:
    if ((int)uVar14 == (int)lVar30) {
      if (puVar29 == puVar2) goto LAB_142985c7b;
      unaff_RSI = *(ulonglong *)(puVar31 + 0x100);
      while( true ) {
        lVar30 = *(longlong *)(unaff_RSI + 0x58 + (ulonglong)*puVar29 * 0xa0);
        if (lVar30 != 0) break;
        puVar29 = puVar29 + 1;
        if (puVar29 == puVar2) goto LAB_142985c7b;
      }
      lVar18 = unaff_RSI + (ulonglong)*puVar29 * 0xa0;
      uVar14 = (ulonglong)*(uint *)(lVar18 + 0x94);
      lVar16 = *(longlong *)(*(longlong *)(puVar31 + 0x1a0) + 0x18 + uVar14 * 0x48);
      lVar19 = *(longlong *)(*(longlong *)(puVar31 + 0x1a0) + 0x38 + uVar14 * 0x48);
      lVar17 = *(longlong *)
                (lVar16 + 0x10 + ~*(ulonglong *)(lVar19 + *(longlong *)(lVar13 + 0x110) * 8) * 0x30)
      ;
      lVar19 = ~*(ulonglong *)(lVar19 + *(longlong *)(lVar13 + 0x118) * 8) * 0x30;
      param_3 = *(longlong **)(lVar16 + 0x10 + lVar19);
      uVar27 = *(ulonglong *)(lVar16 + 0x28 + lVar19);
      unaff_RSI = *(ulonglong *)(lVar18 + 0x50);
      puVar29 = puVar29 + 1;
      uVar24 = 1;
      uVar14 = 0;
    }
    else {
      uVar24 = (ulonglong)((int)uVar14 + 1);
    }
    param_1 = (longlong *)(uVar14 * 0x10);
    uVar25 = (ulonglong)~*(uint *)(unaff_RSI + 8 + (longlong)param_1);
    uVar14 = uVar24;
    if (0.0 < *(float *)(lVar17 + uVar25 * 4)) {
      param_1 = (longlong *)(ulonglong)uVar12;
      *(uint *)(uVar27 + uVar25 * 4) = uVar12;
      *(undefined1 *)((longlong)param_3 + uVar25 * 3 + 1) = 1;
    }
    goto LAB_142985b85;
  }
  lVar30 = 0;
  lVar16 = 0;
  lVar17 = 0;
  param_3 = (longlong *)(ulonglong)uVar12;
  uVar24 = 0;
LAB_142985aba:
  uVar14 = uVar24;
  if ((int)uVar14 == (int)lVar30) {
    if (puVar29 == puVar2) goto LAB_142985c7b;
    while( true ) {
      lVar30 = *(longlong *)(*(longlong *)(puVar31 + 0x1a0) + 0x10 + (ulonglong)*puVar29 * 0x48);
      if (lVar30 != 0) break;
      puVar29 = puVar29 + 1;
      if (puVar29 == puVar2) goto LAB_142985c7b;
    }
    lVar17 = *(longlong *)(puVar31 + 0x1a0) + (ulonglong)*puVar29 * 0x48;
    lVar19 = *(longlong *)(lVar17 + 0x18);
    lVar16 = *(longlong *)(lVar17 + 0x38);
    lVar17 = *(longlong *)
              (lVar19 + 0x10 + ~*(ulonglong *)(lVar16 + *(longlong *)(lVar13 + 0x110) * 8) * 0x30);
    lVar18 = ~*(ulonglong *)(lVar16 + *(longlong *)(lVar13 + 0x118) * 8) * 0x30;
    lVar16 = *(longlong *)(lVar19 + 0x10 + lVar18);
    unaff_RSI = *(ulonglong *)(lVar19 + 0x28 + lVar18);
    puVar29 = puVar29 + 1;
    uVar14 = 0;
  }
  uVar24 = (ulonglong)((int)uVar14 + 1);
  if (0.0 < *(float *)(lVar17 + uVar14 * 4)) {
    *(uint *)(unaff_RSI + uVar14 * 4) = uVar12;
    *(undefined1 *)(lVar16 + 1 + uVar14 * 3) = 1;
  }
  goto LAB_142985aba;
LAB_142985c7b:
  if (cVar11 != '\0') {
    plVar15 = (longlong *)pdb_140e97000();
    if (((char)plVar15[0xd] != '\x01') &&
       (plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0), plVar15 == (longlong *)0x0))
    goto LAB_142985df3;
    if (*plVar15 != 0) {
LAB_142985dbf:
      plVar15 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_142985dcb:
      plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0);
      if (plVar15 == (longlong *)0x0) goto LAB_142985df3;
      goto LAB_142985516;
    }
    *plVar15 = -1;
    pdb_140e95370(plVar15 + 1);
    *plVar15 = *plVar15 + 1;
  }
  return;
LAB_142985df3:
  pdb_142dc7890(&UNK_1432a7ee8);
LAB_142985dff:
  pdb_142dc8070(&UNK_143608198,0x2c);
LAB_142985e22:
  pdb_142dc8070(&UNK_1436080b8,0x32,0);
LAB_142985e42:
  pdb_142dc8070(&UNK_1436080b8,0x32);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

