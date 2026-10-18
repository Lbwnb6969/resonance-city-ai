// VA 0x14297f9a0, PDB extent 1473 bytes
// toolbar::ui_interaction::ui_notify_hints_if_toolbar_in_focus
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::ui_interaction::ui_notify_hints_if_toolbar_in_focus
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 1473 */

void pdb_14297f9a0(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong unaff_RDI;
  undefined *puVar15;
  undefined *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong unaff_R12;
  undefined *unaff_R14;
  undefined *unaff_R15;
  longlong *plStack_50;
  
  cVar8 = pdb_140e94b40();
  if (cVar8 == '\0') goto LAB_14297fb61;
  unaff_R14 = &UNK_143607595;
  unaff_RDI = 0x3c;
  uVar13 = 0x3c;
  lVar10 = pdb_142978b70(&UNK_143607595);
  if (lVar10 == 1) {
    if (uVar13 < 0x3d) {
      unaff_R14 = &UNK_143607595;
      uVar11 = pdb_142978b70(&UNK_143607595);
      if ((uVar11 & 1) != 0) {
        if (0x3c < uVar13 + 2) goto LAB_14297fe27;
        unaff_RDI = 0x3a - uVar13;
        unaff_R14 = &UNK_143607597 + uVar13;
      }
      goto LAB_14297fa35;
    }
  }
  else {
LAB_14297fa35:
    puVar15 = &UNK_143607874;
    unaff_R15 = &UNK_143607848;
    while( true ) {
      bVar3 = puVar15[-1];
      uVar9 = (uint)(char)bVar3;
      if ((char)bVar3 < '\0') break;
      puVar15 = puVar15 + -1;
      if (uVar9 == 0x5c) goto LAB_14297fadd;
LAB_14297fac4:
      if (uVar9 == 0x2f) goto LAB_14297fadd;
      if (puVar15 == &UNK_143607848) {
        unaff_R12 = 0x2c;
LAB_14297fb00:
        plVar12 = (longlong *)pdb_140e97000();
        if ((char)plVar12[0xd] != '\x01') goto LAB_14297fd9f;
        do {
          if (*plVar12 != 0) goto LAB_14297fd93;
          *plVar12 = -1;
          unaff_RDI = pdb_140e94f10(plVar12 + 1,unaff_R14,unaff_RDI,unaff_R15,unaff_R12,1,0);
          *plVar12 = *plVar12 + 1;
LAB_14297fb61:
          lVar10 = *param_1;
          lVar6 = param_1[1];
          puVar14 = *(uint **)(lVar10 + 0xf8);
          puVar2 = puVar14 + *(longlong *)(lVar10 + 0x100);
          if (*(char *)(lVar10 + 0x108) == '\0') {
            lVar17 = 0;
            lVar19 = 8;
            lVar18 = 0;
            param_1 = (longlong *)0x0;
            do {
              if ((int)param_1 == (int)lVar17) {
                do {
                  if (puVar14 == puVar2) goto LAB_14297fcd6;
                  uVar9 = *puVar14;
                  puVar14 = puVar14 + 1;
                  lVar17 = *(longlong *)
                            (*(longlong *)(lVar6 + 0x100) + 0x58 + (ulonglong)uVar9 * 0xa0);
                } while (lVar17 == 0);
                lVar19 = *(longlong *)(lVar6 + 0x100) + (ulonglong)uVar9 * 0xa0;
                uVar13 = (ulonglong)*(uint *)(lVar19 + 0x94);
                if (*(ulonglong *)(lVar10 + 0x110) <
                    *(ulonglong *)(*(longlong *)(lVar6 + 0x1a0) + 0x40 + uVar13 * 0x48)) {
                  lVar18 = *(longlong *)(lVar6 + 0x1a0) + uVar13 * 0x48;
                  uVar13 = *(ulonglong *)
                            (*(longlong *)(lVar18 + 0x38) + *(ulonglong *)(lVar10 + 0x110) * 8);
                  if (uVar13 == 0) goto LAB_14297fc2c;
                  lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + 0x10 + ~uVar13 * 0x30);
                }
                else {
LAB_14297fc2c:
                  lVar18 = 0;
                }
                lVar19 = *(longlong *)(lVar19 + 0x50);
                param_1 = (longlong *)0x0;
              }
              unaff_R14 = (undefined *)
                          ((ulonglong)~*(uint *)(lVar19 + 8 + (longlong)param_1 * 0x10) * 3);
              param_1 = (longlong *)(ulonglong)((int)param_1 + 1);
            } while (unaff_R14[lVar18 + 1] == '\0');
          }
          else {
            lVar19 = 0;
            lVar17 = 0;
            uVar13 = 0;
            do {
              if ((int)uVar13 == (int)lVar19) {
                do {
                  if (puVar14 == puVar2) goto LAB_14297fcd6;
                  uVar9 = *puVar14;
                  puVar14 = puVar14 + 1;
                  lVar19 = *(longlong *)
                            (*(longlong *)(lVar6 + 0x1a0) + 0x10 + (ulonglong)uVar9 * 0x48);
                } while (lVar19 == 0);
                lVar17 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)uVar9 * 0x48;
                if ((*(ulonglong *)(lVar10 + 0x110) < *(ulonglong *)(lVar17 + 0x40)) &&
                   (uVar13 = *(ulonglong *)
                              (*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lVar10 + 0x110) * 8),
                   uVar13 != 0)) {
                  lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar13 * 0x30);
                }
                else {
                  lVar17 = 0;
                }
                uVar13 = 0;
              }
              param_1 = (longlong *)(uVar13 * 3);
              uVar13 = (ulonglong)((int)uVar13 + 1);
            } while (*(char *)(lVar17 + 1 + (longlong)param_1) == '\0');
          }
          *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
          param_2 = (longlong *)*param_2;
          lVar10 = param_2[6];
          unaff_R14 = (undefined *)param_2[8];
          if (lVar10 == param_2[4]) {
            pdb_142d7e8a0(param_2 + 4);
          }
          *(undefined **)(param_2[5] + lVar10 * 8) = unaff_R14;
          param_1 = (longlong *)(lVar10 + 1);
          param_2[6] = (longlong)param_1;
          param_2[8] = param_2[8] + 1;
          if (cVar8 == '\0') {
            return;
          }
          plStack_50 = (longlong *)pdb_140e97000();
          if ((char)plStack_50[0xd] != '\x01') goto LAB_14297fdd3;
          while( true ) {
            if (*plStack_50 == 0) {
              *plStack_50 = -1;
              pdb_140e95370(plStack_50 + 1,unaff_RDI);
              goto LAB_14297fd0c;
            }
LAB_14297fd93:
            plVar12 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_14297fd9f:
            plVar12 = (longlong *)pdb_142dcf3a0(plVar12,0);
            if (plVar12 != (longlong *)0x0) break;
LAB_14297fdc7:
            do {
              plStack_50 = (longlong *)pdb_142dc7890(&UNK_1432a7ee8);
LAB_14297fdd3:
              plStack_50 = (longlong *)pdb_142dcf3a0(plStack_50,0);
            } while (plStack_50 == (longlong *)0x0);
          }
        } while( true );
      }
    }
    bVar4 = puVar15[-2];
    if ((char)bVar4 < -0x40) {
      bVar5 = puVar15[-3];
      if ((char)bVar5 < -0x40) {
        pbVar1 = puVar15 + -4;
        puVar15 = puVar15 + -4;
        uVar9 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
      }
      else {
        puVar15 = puVar15 + -3;
        uVar9 = bVar5 & 0xf;
      }
      uVar9 = bVar4 & 0x3f | uVar9 << 6;
    }
    else {
      puVar15 = puVar15 + -2;
      uVar9 = bVar4 & 0x1f;
    }
    uVar9 = (uint)(bVar3 & 0x3f) | uVar9 << 6;
    if (uVar9 != 0x5c) goto LAB_14297fac4;
LAB_14297fadd:
    puVar16 = puVar15 + -0x143607847;
    if (puVar16 < (undefined *)0x2d) {
      unaff_R12 = 0x2c - (longlong)puVar16;
      unaff_R15 = puVar15 + 1;
      goto LAB_14297fb00;
    }
    pdb_142dc8070(&UNK_143607848,0x2c,puVar16,0x2c,&UNK_1436076a0);
  }
  pdb_142dc8070(&UNK_143607595,0x3c,0);
LAB_14297fe27:
  pdb_142dc8070(&UNK_143607595,0x3c);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
LAB_14297fcd6:
  if (cVar8 != '\0') {
    plStack_50 = (longlong *)pdb_140e97000();
    if (((char)plStack_50[0xd] != '\x01') &&
       (plStack_50 = (longlong *)pdb_142dcf3a0(plStack_50,0), plStack_50 == (longlong *)0x0))
    goto LAB_14297fdc7;
    if (*plStack_50 != 0) goto LAB_14297fd93;
    *plStack_50 = -1;
    pdb_140e95370(plStack_50 + 1,unaff_RDI);
LAB_14297fd0c:
    *plStack_50 = *plStack_50 + 1;
  }
  return;
}

