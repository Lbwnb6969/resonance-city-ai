// VA 0x14297c0a0, PDB extent 1534 bytes
// toolbar::ui_interaction::ui_animation_state_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::ui_interaction::ui_animation_state_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 1534 */

void pdb_14297c0a0(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char cVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  float *unaff_RBX;
  int iVar25;
  ulonglong uVar26;
  undefined *puVar27;
  uint *puVar28;
  undefined1 uVar29;
  longlong lVar30;
  undefined *puVar31;
  longlong unaff_R13;
  undefined *puVar32;
  float fVar33;
  float fVar34;
  longlong lStack_88;
  
  cVar17 = pdb_140e94b40();
  if (cVar17 == '\0') goto LAB_14297c24f;
  puVar32 = &UNK_1436074ee;
  uVar26 = 0x32;
  uVar24 = 0x32;
  lVar19 = pdb_142978b70(&UNK_1436074ee);
  if (lVar19 != 1) goto LAB_14297c13f;
  if (uVar24 < 0x33) {
    puVar32 = &UNK_1436074ee;
    uVar20 = pdb_142978b70(&UNK_1436074ee);
    if ((uVar20 & 1) == 0) {
LAB_14297c13f:
      puVar27 = &UNK_143607874;
      puVar31 = &UNK_143607848;
      do {
        bVar3 = puVar27[-1];
        uVar18 = (uint)(char)bVar3;
        if ((char)bVar3 < '\0') {
          bVar4 = puVar27[-2];
          if ((char)bVar4 < -0x40) {
            bVar5 = puVar27[-3];
            if ((char)bVar5 < -0x40) {
              pbVar1 = puVar27 + -4;
              puVar27 = puVar27 + -4;
              uVar18 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar27 = puVar27 + -3;
              uVar18 = bVar5 & 0xf;
            }
            uVar18 = bVar4 & 0x3f | uVar18 << 6;
          }
          else {
            puVar27 = puVar27 + -2;
            uVar18 = bVar4 & 0x1f;
          }
          uVar18 = (uint)(bVar3 & 0x3f) | uVar18 << 6;
          if (uVar18 != 0x5c) goto LAB_14297c1c4;
LAB_14297c1d5:
          if ((undefined *)0x2c < puVar27 + -0x143607847) goto LAB_14297c5b7;
          unaff_RBX = (float *)(0x2c - (longlong)(puVar27 + -0x143607847));
          puVar31 = puVar27 + 1;
          goto LAB_14297c1f7;
        }
        puVar27 = puVar27 + -1;
        if (uVar18 == 0x5c) goto LAB_14297c1d5;
LAB_14297c1c4:
        if (uVar18 == 0x2f) goto LAB_14297c1d5;
      } while (puVar27 != &UNK_143607848);
      unaff_RBX = (float *)0x2c;
LAB_14297c1f7:
      plVar21 = (longlong *)pdb_140e97000();
      if ((char)plVar21[0xd] != '\x01') goto LAB_14297c587;
LAB_14297c206:
      if (*plVar21 == 0) {
        *plVar21 = -1;
        pdb_140e94f10(plVar21 + 1,puVar32,uVar26,puVar31,unaff_RBX,1,0);
        *plVar21 = *plVar21 + 1;
LAB_14297c24f:
        fVar16 = _DAT_142f60fec;
        fVar15 = _DAT_142e37adc;
        fVar14 = _DAT_142e3787c;
        uVar18 = _DAT_142e37820;
        fVar13 = _DAT_142e36f28;
        lVar19 = *param_1;
        lVar9 = param_1[1];
        uVar8 = *(undefined4 *)((longlong)param_1 + 0x14);
        puVar28 = *(uint **)(lVar19 + 0xf8);
        puVar2 = puVar28 + *(longlong *)(lVar19 + 0x100);
        cVar6 = *(char *)(lVar19 + 0x108);
        lVar10 = *param_2;
        param_2 = (longlong *)0x0;
        lStack_88 = 8;
        puVar31 = (undefined *)0x0;
        puVar32 = (undefined *)0x0;
        uVar26 = 0;
        do {
          if (cVar6 == '\0') {
            if ((int)uVar26 == (int)param_2) {
              if (puVar28 == puVar2) goto LAB_14297c52c;
              while( true ) {
                param_2 = *(longlong **)
                           (*(longlong *)(lVar9 + 0x100) + 0x58 + (ulonglong)*puVar28 * 0xa0);
                if (param_2 != (longlong *)0x0) break;
                puVar28 = puVar28 + 1;
                if (puVar28 == puVar2) goto LAB_14297c52c;
              }
              lVar22 = *(longlong *)(lVar9 + 0x100) + (ulonglong)*puVar28 * 0xa0;
              uVar24 = (ulonglong)*(uint *)(lVar22 + 0x94);
              lVar30 = *(longlong *)(lVar9 + 0x1a0);
              lVar23 = lVar30 + uVar24 * 0x48;
              lVar11 = *(longlong *)(lVar30 + 0x38 + uVar24 * 0x48);
              if (*(ulonglong *)(lVar19 + 0x110) < *(ulonglong *)(lVar30 + 0x40 + uVar24 * 0x48)) {
                uVar24 = *(ulonglong *)(lVar11 + *(ulonglong *)(lVar19 + 0x110) * 8);
                lVar23 = *(longlong *)(lVar23 + 0x18);
                if (uVar24 == 0) goto LAB_14297c42f;
                puVar32 = *(undefined **)(lVar23 + 0x10 + ~uVar24 * 0x30);
              }
              else {
                lVar23 = *(longlong *)(lVar23 + 0x18);
LAB_14297c42f:
                puVar32 = (undefined *)0x0;
              }
              puVar28 = puVar28 + 1;
              lVar30 = ~*(ulonglong *)(lVar11 + *(longlong *)(lVar19 + 0x118) * 8) * 0x30;
              puVar31 = *(undefined **)(lVar23 + 0x10 + lVar30);
              unaff_R13 = *(longlong *)(lVar23 + 0x28 + lVar30);
              lStack_88 = *(longlong *)(lVar22 + 0x50);
              uVar26 = 0;
            }
            iVar25 = (int)uVar26;
            uVar26 = (ulonglong)~*(uint *)(lStack_88 + 8 + uVar26 * 0x10);
          }
          else {
            if ((int)uVar26 == (int)param_2) {
              if (puVar28 == puVar2) goto LAB_14297c52c;
              while( true ) {
                param_2 = *(longlong **)
                           (*(longlong *)(lVar9 + 0x1a0) + 0x10 + (ulonglong)*puVar28 * 0x48);
                if (param_2 != (longlong *)0x0) break;
                puVar28 = puVar28 + 1;
                if (puVar28 == puVar2) goto LAB_14297c52c;
              }
              lVar23 = *(longlong *)(lVar9 + 0x1a0) + (ulonglong)*puVar28 * 0x48;
              if (*(ulonglong *)(lVar19 + 0x110) < *(ulonglong *)(lVar23 + 0x40)) {
                uVar24 = *(ulonglong *)
                          (*(longlong *)(lVar23 + 0x38) + *(ulonglong *)(lVar19 + 0x110) * 8);
                lVar30 = *(longlong *)(lVar23 + 0x18);
                if (uVar24 == 0) goto LAB_14297c3fe;
                puVar32 = *(undefined **)(lVar30 + 0x10 + ~uVar24 * 0x30);
              }
              else {
                lVar30 = *(longlong *)(lVar23 + 0x18);
LAB_14297c3fe:
                puVar32 = (undefined *)0x0;
              }
              puVar28 = puVar28 + 1;
              lVar23 = ~*(ulonglong *)
                         (*(longlong *)(lVar23 + 0x38) + *(longlong *)(lVar19 + 0x118) * 8) * 0x30;
              puVar31 = *(undefined **)(lVar30 + 0x10 + lVar23);
              unaff_R13 = *(longlong *)(lVar30 + 0x28 + lVar23);
              uVar26 = 0;
            }
            iVar25 = (int)uVar26;
          }
          param_1 = (longlong *)(uVar26 * 4 + unaff_R13);
          unaff_RBX = (float *)(puVar31 + uVar26 * 0x10);
          if ((puVar32 + uVar26 * 3)[1] == '\0') {
            if (*(char *)(unaff_RBX + 3) == '\0') {
              uVar29 = 2;
            }
            else {
              fVar33 = *(float *)(lVar10 + 0x58);
              *(undefined4 *)param_1 = uVar8;
              unaff_RBX[1] = fVar33 / fVar16 + unaff_RBX[1];
              uVar29 = 1;
            }
          }
          else {
            uVar29 = 2;
            if (*(char *)(unaff_RBX + 3) != '\x01') {
              fVar33 = *(float *)(lVar10 + 0x58);
              *(undefined4 *)param_1 = uVar8;
              unaff_RBX[1] = fVar33 / fVar14 + unaff_RBX[1];
              uVar29 = 0;
            }
          }
          *(undefined4 *)param_1 = uVar8;
          *(undefined1 *)(unaff_RBX + 3) = uVar29;
          fVar33 = 0.0;
          if (0.0 <= unaff_RBX[1]) {
            fVar33 = unaff_RBX[1];
          }
          fVar34 = fVar13;
          if (fVar33 <= fVar13) {
            fVar34 = fVar33;
          }
          *(undefined4 *)param_1 = uVar8;
          unaff_RBX[1] = fVar34;
          fVar33 = *(float *)(lVar10 + 0x58);
          cVar7 = puVar32[uVar26 * 3];
          *(undefined4 *)param_1 = uVar8;
          fVar33 = fVar33 * fVar15;
          if (cVar7 == '\0') {
            fVar33 = (float)((uint)fVar33 ^ uVar18);
          }
          uVar26 = (ulonglong)(iVar25 + 1);
          fVar34 = 0.0;
          if (0.0 <= fVar33 + *unaff_RBX) {
            fVar34 = fVar33 + *unaff_RBX;
          }
          fVar33 = fVar13;
          if (fVar34 <= fVar13) {
            fVar33 = fVar34;
          }
          *unaff_RBX = fVar33;
        } while( true );
      }
      goto LAB_14297c57b;
    }
    if (uVar24 + 2 < 0x33) {
      uVar26 = 0x30 - uVar24;
      puVar32 = &UNK_1436074f0 + uVar24;
      goto LAB_14297c13f;
    }
    goto LAB_14297c5fa;
  }
  goto LAB_14297c5da;
LAB_14297c52c:
  if (cVar17 != '\0') {
    plVar21 = (longlong *)pdb_140e97000();
    if (((char)plVar21[0xd] != '\x01') &&
       (plVar21 = (longlong *)pdb_142dcf3a0(plVar21,0), plVar21 == (longlong *)0x0))
    goto LAB_14297c5ab;
    if (*plVar21 != 0) {
LAB_14297c57b:
      plVar21 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_14297c587:
      plVar21 = (longlong *)pdb_142dcf3a0(plVar21,0);
      if (plVar21 == (longlong *)0x0) goto LAB_14297c5ab;
      goto LAB_14297c206;
    }
    *plVar21 = -1;
    pdb_140e95370(plVar21 + 1);
    *plVar21 = *plVar21 + 1;
  }
  return;
LAB_14297c5ab:
  pdb_142dc7890(&UNK_1432a7ee8);
LAB_14297c5b7:
  pdb_142dc8070(&UNK_143607848,0x2c);
LAB_14297c5da:
  pdb_142dc8070(&UNK_1436074ee,0x32,0);
LAB_14297c5fa:
  pdb_142dc8070(&UNK_1436074ee,0x32);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

