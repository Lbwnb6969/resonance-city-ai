// VA 0x1409221e0, PDB extent 1654 bytes
// country_core::systems::ui::signifiers::signifier_mark_for_delete::despawn_marked
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/signifier_mark_for_delete.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::signifier_mark_for_delete::despawn_marked
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/signifier_mark_for_delete.rs
   Extent: 1654 */

void pdb_1409221e0(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong unaff_RSI;
  uint *puVar19;
  uint *puVar20;
  undefined *puVar21;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong *plStack_80;
  char cStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  cStack_71 = pdb_140e94b40();
  if (cStack_71 == '\0') {
    uStack_d0 = 0;
    goto LAB_1409223bc;
  }
  puVar20 = (uint *)&UNK_14302167d;
  unaff_RSI = 0x50;
  uVar18 = 0x50;
  lVar10 = pdb_1409279b0(&UNK_14302167d);
  if (lVar10 == 1) {
    if (uVar18 < 0x51) {
      puVar20 = (uint *)&UNK_14302167d;
      uVar11 = pdb_1409279b0(&UNK_14302167d);
      if ((uVar11 & 1) != 0) {
        if (0x50 < uVar18 + 2) goto LAB_14092272c;
        unaff_RSI = 0x4e - uVar18;
        puVar20 = (uint *)(&UNK_14302167f + uVar18);
      }
      goto LAB_140922283;
    }
  }
  else {
LAB_140922283:
    puVar12 = &UNK_143021085;
    puVar21 = &UNK_14302103b;
    do {
      pbVar1 = puVar12 + -1;
      uVar16 = (uint)(char)*pbVar1;
      if ((int)uVar16 < 0) {
        bVar3 = puVar12[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar12[-3];
          if ((char)bVar4 < -0x40) {
            pbVar2 = puVar12 + -4;
            puVar12 = puVar12 + -4;
            uVar16 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar12 = puVar12 + -3;
            uVar16 = bVar4 & 0xf;
          }
          uVar16 = bVar3 & 0x3f | uVar16 << 6;
        }
        else {
          puVar12 = puVar12 + -2;
          uVar16 = bVar3 & 0x1f;
        }
        uVar16 = (uint)(*pbVar1 & 0x3f) | uVar16 << 6;
        if (uVar16 != 0x5c) goto LAB_140922319;
LAB_140922336:
        if ((undefined *)0x4a < puVar12 + -0x14302103a) goto LAB_1409226e9;
        lVar10 = 0x49 - (longlong)(puVar12 + -0x14302103b);
        puVar21 = puVar12 + 1;
        goto LAB_14092235a;
      }
      puVar12 = puVar12 + -1;
      if (uVar16 == 0x5c) goto LAB_140922336;
LAB_140922319:
      if (uVar16 == 0x2f) goto LAB_140922336;
    } while (puVar12 != &UNK_14302103b);
    lVar10 = 0x4a;
LAB_14092235a:
    plVar13 = (longlong *)pdb_140e97000();
    if ((char)plVar13[0xd] != '\x01') goto LAB_1409226b9;
    do {
      if (*plVar13 == 0) {
        *plVar13 = -1;
        plStack_80 = plVar13;
        uStack_c8 = pdb_140e94f10(plVar13 + 1,puVar20,unaff_RSI,puVar21,lVar10,1,0);
        *plStack_80 = *plStack_80 + 1;
        uStack_d0 = 1;
        uStack_98 = uStack_c8;
LAB_1409223bc:
        lStack_88 = *param_1;
        lVar10 = param_1[1];
        puVar19 = *(uint **)(lStack_88 + 0xf8);
        puStack_a0 = puVar19 + *(longlong *)(lStack_88 + 0x100);
        cVar5 = *(char *)(lStack_88 + 0x108);
        uStack_b0 = param_2[3];
        uStack_a8 = param_2[2];
        uVar7 = *param_2;
        uVar8 = param_2[1];
        lStack_90 = 8;
        plStack_80 = (longlong *)0x0;
        param_2 = (undefined8 *)0x0;
        puVar21 = (undefined *)0x0;
        lVar14 = 8;
        plVar13 = (longlong *)0x0;
        puVar20 = puStack_a0;
LAB_14092241f:
        if (cVar5 == '\0') {
          if ((int)puVar21 == (int)param_2) {
            do {
              if (puVar19 == puVar20) goto LAB_14092265a;
              uVar16 = *puVar19;
              puVar19 = puVar19 + 1;
              param_2 = *(undefined8 **)
                         (*(longlong *)(lVar10 + 0x100) + 0x58 + (ulonglong)uVar16 * 0xa0);
            } while (param_2 == (undefined8 *)0x0);
            lVar14 = *(longlong *)(lVar10 + 0x100) + (ulonglong)uVar16 * 0xa0;
            uVar18 = *(ulonglong *)(lStack_88 + 0x118);
            puVar21 = (undefined *)0x0;
            if ((uVar18 < *(ulonglong *)(lVar14 + 0x88)) &&
               (*(longlong *)(*(longlong *)(lVar14 + 0x80) + uVar18 * 8) != 0)) {
              uVar11 = (ulonglong)*(uint *)(lVar14 + 0x94);
              lVar17 = *(longlong *)(lVar10 + 0x1a0);
              plVar13 = (longlong *)0x1;
              if ((uVar18 < *(ulonglong *)(lVar17 + 0x40 + uVar11 * 0x48)) &&
                 (uVar18 = *(ulonglong *)(*(longlong *)(lVar17 + 0x38 + uVar11 * 0x48) + uVar18 * 8)
                 , uVar18 != 0)) {
                plStack_80 = *(longlong **)
                              (*(longlong *)(lVar17 + uVar11 * 0x48 + 0x18) + 0x10 + ~uVar18 * 0x30)
                ;
              }
              else {
                plStack_80 = (longlong *)0x0;
              }
            }
            else {
              plVar13 = (longlong *)0x0;
            }
            lVar14 = *(longlong *)(lVar14 + 0x50);
          }
          uVar15 = *(undefined8 *)(lVar14 + (longlong)puVar21 * 0x10);
          iVar9 = (int)uVar15;
          if ((char)plVar13 == '\x01') {
            lVar17 = (ulonglong)~*(uint *)((longlong)puVar21 * 0x10 + lVar14 + 8) * 0x1c +
                     (longlong)plStack_80;
            plVar13 = (longlong *)0x1;
            goto joined_r0x0001409225ed;
          }
          if (iVar9 != 0) {
            puVar21 = (undefined *)(ulonglong)((int)puVar21 + 1);
            plVar13 = (longlong *)0x0;
            goto LAB_140922616;
          }
        }
        else {
          if ((int)puVar21 == (int)param_2) {
            do {
              if (puVar19 == puVar20) goto LAB_14092265a;
              uVar16 = *puVar19;
              puVar19 = puVar19 + 1;
              param_2 = *(undefined8 **)
                         (*(longlong *)(lVar10 + 0x1a0) + 0x10 + (ulonglong)uVar16 * 0x48);
            } while (param_2 == (undefined8 *)0x0);
            lVar17 = *(longlong *)(lVar10 + 0x1a0) + (ulonglong)uVar16 * 0x48;
            puVar21 = (undefined *)0x0;
            if ((*(ulonglong *)(lStack_88 + 0x118) < *(ulonglong *)(lVar17 + 0x40)) &&
               (uVar18 = *(ulonglong *)
                          (*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lStack_88 + 0x118) * 8),
               uVar18 != 0)) {
              plStack_80 = *(longlong **)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar18 * 0x30);
              plVar13 = (longlong *)0x1;
            }
            else {
              plVar13 = (longlong *)0x0;
            }
            lStack_90 = *(longlong *)(lVar17 + 8);
          }
          uVar15 = *(undefined8 *)(lStack_90 + (longlong)puVar21 * 8);
          lVar17 = (longlong)puVar21 * 0x1c + (longlong)plStack_80;
          if (plVar13 == (longlong *)0x0) {
            lVar17 = 0;
          }
          iVar9 = (int)uVar15;
joined_r0x0001409225ed:
          if (iVar9 != 0) goto LAB_1409225ef;
        }
LAB_14092265a:
        if (cStack_71 == '\0') {
          return;
        }
        plVar13 = (longlong *)pdb_140e97000();
        if (((char)plVar13[0xd] != '\x01') &&
           (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0)) break;
        if (*plVar13 == 0) {
          *plVar13 = -1;
          plStack_80 = plVar13;
          pdb_140e95370(plVar13 + 1,uStack_98);
          *plStack_80 = *plStack_80 + 1;
          return;
        }
      }
      plVar13 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_1409226b9:
      plVar13 = (longlong *)pdb_142d8ec20(plVar13,0);
    } while (plVar13 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_1409226e9:
    pdb_142dc8070(&UNK_14302103b,0x4a);
  }
  pdb_142dc8070(&UNK_14302167d,0x50,0);
LAB_14092272c:
  pdb_142dc8070(&UNK_14302167d,0x50);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
LAB_1409225ef:
  puVar21 = (undefined *)(ulonglong)((int)puVar21 + 1);
  if ((lVar17 == 0) || ((*(float *)(lVar17 + 0x14) == 0.0 && (!NAN(*(float *)(lVar17 + 0x14)))))) {
LAB_140922616:
    param_1 = plVar13;
    unaff_RSI = lVar14;
    uStack_e0 = uStack_a8;
    uStack_d8 = uStack_b0;
    uStack_f8 = uVar15;
    uStack_f0 = uVar7;
    uStack_e8 = uVar8;
    pdb_140f04aa0(&uStack_f8,&UNK_143021088);
    lVar14 = unaff_RSI;
    plVar13 = param_1;
    puVar20 = puStack_a0;
  }
  goto LAB_14092241f;
}

