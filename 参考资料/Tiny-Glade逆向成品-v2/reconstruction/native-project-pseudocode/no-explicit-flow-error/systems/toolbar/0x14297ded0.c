// VA 0x14297ded0, PDB extent 1572 bytes
// toolbar::ui_interaction::ui_send_focus_begin_events
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::ui_interaction::ui_send_focus_begin_events
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 1572 */

void pdb_14297ded0(longlong *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong unaff_RDI;
  undefined *puVar19;
  longlong *plVar20;
  longlong lVar21;
  uint *puVar22;
  longlong *plStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar21 = 0;
  plStack_60 = (longlong *)param_3;
  cStack_49 = pdb_140e94b40();
  plVar20 = param_2;
  if (cStack_49 == '\0') goto LAB_14297e0a4;
  puVar22 = (uint *)&UNK_14360760a;
  unaff_RDI = 0x33;
  uVar17 = 0x33;
  lVar11 = pdb_142978b70(&UNK_14360760a);
  if (lVar11 != 1) goto LAB_14297df72;
  if (uVar17 < 0x34) {
    puVar22 = (uint *)&UNK_14360760a;
    uVar12 = pdb_142978b70(&UNK_14360760a);
    if ((uVar12 & 1) == 0) {
LAB_14297df72:
      puVar19 = &UNK_143607874;
      plVar20 = (longlong *)&UNK_143607848;
      do {
        bVar2 = puVar19[-1];
        uVar10 = (uint)(char)bVar2;
        plStack_68 = param_2;
        if ((char)bVar2 < '\0') {
          bVar3 = puVar19[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar19[-3];
            if ((char)bVar4 < -0x40) {
              pbVar1 = puVar19 + -4;
              puVar19 = puVar19 + -4;
              uVar10 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar19 = puVar19 + -3;
              uVar10 = bVar4 & 0xf;
            }
            uVar10 = bVar3 & 0x3f | uVar10 << 6;
          }
          else {
            puVar19 = puVar19 + -2;
            uVar10 = bVar3 & 0x1f;
          }
          uVar10 = (uint)(bVar2 & 0x3f) | uVar10 << 6;
          if (uVar10 != 0x5c) goto LAB_14297e004;
LAB_14297e01c:
          if ((undefined *)0x2c < puVar19 + -0x143607847) goto LAB_14297e3af;
          puVar18 = (uint *)(0x2c - (longlong)(puVar19 + -0x143607847));
          plVar20 = (longlong *)(puVar19 + 1);
          goto LAB_14297e03e;
        }
        puVar19 = puVar19 + -1;
        if (uVar10 == 0x5c) goto LAB_14297e01c;
LAB_14297e004:
        if (uVar10 == 0x2f) goto LAB_14297e01c;
      } while (puVar19 != &UNK_143607848);
      puVar18 = (uint *)0x2c;
LAB_14297e03e:
      plVar13 = (longlong *)pdb_140e97000();
      if ((char)plVar13[0xd] != '\x01') goto LAB_14297e37b;
LAB_14297e04d:
      if (*plVar13 == 0) {
        *plVar13 = -1;
        plStack_58 = plVar13;
        uStack_78 = pdb_140e94f10(plVar13 + 1,puVar22,unaff_RDI,plVar20,puVar18,1,0);
        *plStack_58 = *plStack_58 + 1;
        plVar20 = plStack_68;
LAB_14297e0a4:
        lStack_80 = *param_1;
        param_1 = (longlong *)param_1[1];
        puVar22 = *(uint **)(lStack_80 + 0xf8);
        puVar18 = puVar22 + *(longlong *)(lStack_80 + 0x100);
        plStack_68 = (longlong *)CONCAT71(plStack_68._1_7_,*(undefined1 *)(lStack_80 + 0x108));
        lVar11 = (longlong)plStack_60 + 0x20;
        uStack_6c = *(undefined4 *)((longlong)plVar20 + 0x1c);
        lStack_88 = *plVar20;
        puVar5 = (undefined4 *)plVar20[2];
        lVar14 = lStack_88 + 0x20;
        lStack_98 = 8;
        lStack_90 = 8;
        plStack_58 = (longlong *)0x0;
        uVar17 = 0;
        do {
          if ((char)plStack_68 == '\0') {
            uVar12 = uVar17;
            if ((int)uVar17 == (int)lVar21) {
              do {
                if (puVar22 == puVar18) goto LAB_14297e324;
                uVar10 = *puVar22;
                puVar22 = puVar22 + 1;
                lVar21 = *(longlong *)(param_1[0x20] + 0x58 + (ulonglong)uVar10 * 0xa0);
              } while (lVar21 == 0);
              lVar15 = param_1[0x20] + (ulonglong)uVar10 * 0xa0;
              uVar17 = (ulonglong)*(uint *)(lVar15 + 0x94);
              if (*(ulonglong *)(lStack_80 + 0x110) <
                  *(ulonglong *)(param_1[0x34] + 0x40 + uVar17 * 0x48)) {
                lVar7 = param_1[0x34] + uVar17 * 0x48;
                uVar17 = *(ulonglong *)
                          (*(longlong *)(lVar7 + 0x38) + *(ulonglong *)(lStack_80 + 0x110) * 8);
                if (uVar17 == 0) goto LAB_14297e24a;
                plStack_58 = *(longlong **)(*(longlong *)(lVar7 + 0x18) + 0x10 + ~uVar17 * 0x30);
              }
              else {
LAB_14297e24a:
                plStack_58 = (longlong *)0x0;
              }
              lStack_90 = *(longlong *)(lVar15 + 0x50);
              uVar12 = 0;
            }
            puVar16 = (undefined8 *)(lStack_90 + uVar12 * 0x10);
            uVar17 = (ulonglong)~*(uint *)(lStack_90 + 8 + uVar12 * 0x10);
          }
          else {
            if ((int)uVar17 == (int)lVar21) {
              do {
                if (puVar22 == puVar18) goto LAB_14297e324;
                uVar10 = *puVar22;
                puVar22 = puVar22 + 1;
                lVar21 = *(longlong *)(param_1[0x34] + 0x10 + (ulonglong)uVar10 * 0x48);
              } while (lVar21 == 0);
              lVar15 = param_1[0x34] + (ulonglong)uVar10 * 0x48;
              if ((*(ulonglong *)(lStack_80 + 0x110) < *(ulonglong *)(lVar15 + 0x40)) &&
                 (uVar17 = *(ulonglong *)
                            (*(longlong *)(lVar15 + 0x38) + *(ulonglong *)(lStack_80 + 0x110) * 8),
                 uVar17 != 0)) {
                plStack_58 = *(longlong **)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar17 * 0x30);
              }
              else {
                plStack_58 = (longlong *)0x0;
              }
              lStack_98 = *(longlong *)(lVar15 + 8);
              uVar17 = 0;
            }
            puVar16 = (undefined8 *)(lStack_98 + uVar17 * 8);
            uVar12 = uVar17;
          }
          lVar15 = uVar17 * 3;
          plVar20 = (longlong *)*puVar16;
          if ((int)plVar20 == 0) goto LAB_14297e324;
          uVar17 = (ulonglong)((int)uVar12 + 1);
          plStack_a0 = plVar20;
          if (*(char *)(lVar15 + (longlong)plStack_58 + 1) == '\0') {
            pdb_1400af0a0(lVar11,&plStack_a0);
            pdb_140ca9ac0(plStack_60);
          }
          else {
            cVar9 = pdb_1403b05d0(plStack_60);
            if (cVar9 == '\0') {
              *puVar5 = uStack_6c;
              lVar15 = *(longlong *)(lStack_88 + 0x30);
              uVar6 = *(undefined8 *)(lStack_88 + 0x40);
              if (lVar15 == *(longlong *)(lStack_88 + 0x20)) {
                pdb_142d7e980(lVar14);
              }
              lVar7 = *(longlong *)(lStack_88 + 0x28);
              *(longlong **)(lVar7 + lVar15 * 0x10) = plVar20;
              *(undefined8 *)(lVar7 + 8 + lVar15 * 0x10) = uVar6;
              unaff_RDI = lVar15 + 1;
              *(longlong *)(lStack_88 + 0x30) = unaff_RDI;
              *(longlong *)(lStack_88 + 0x40) = *(longlong *)(lStack_88 + 0x40) + 1;
            }
          }
        } while( true );
      }
      goto LAB_14297e36f;
    }
    if (uVar17 + 2 < 0x34) {
      unaff_RDI = 0x31 - uVar17;
      puVar22 = (uint *)(&UNK_14360760c + uVar17);
      goto LAB_14297df72;
    }
    goto LAB_14297e3f2;
  }
  goto LAB_14297e3d2;
LAB_14297e324:
  if (cStack_49 != '\0') {
    plVar13 = (longlong *)pdb_140e97000();
    if (((char)plVar13[0xd] != '\x01') &&
       (plVar13 = (longlong *)pdb_142dcf3a0(plVar13,0), plVar13 == (longlong *)0x0))
    goto LAB_14297e3a3;
    if (*plVar13 != 0) {
LAB_14297e36f:
      plVar13 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_14297e37b:
      plVar13 = (longlong *)pdb_142dcf3a0(plVar13,0);
      if (plVar13 == (longlong *)0x0) goto LAB_14297e3a3;
      goto LAB_14297e04d;
    }
    *plVar13 = -1;
    plStack_60 = plVar13;
    pdb_140e95370(plVar13 + 1);
    *plStack_60 = *plStack_60 + 1;
  }
  return;
LAB_14297e3a3:
  pdb_142dc7890(&UNK_1432a7ee8);
LAB_14297e3af:
  pdb_142dc8070(&UNK_143607848,0x2c);
LAB_14297e3d2:
  pdb_142dc8070(&UNK_14360760a,0x33,0);
LAB_14297e3f2:
  pdb_142dc8070(&UNK_14360760a,0x33);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

