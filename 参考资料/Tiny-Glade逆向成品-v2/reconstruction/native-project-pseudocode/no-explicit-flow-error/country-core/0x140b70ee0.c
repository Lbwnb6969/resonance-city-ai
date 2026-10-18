// VA 0x140b70ee0, PDB extent 1217 bytes
// country_core::systems::ui_2d_follow_mouse::ui_2d_follow_mouse
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_2d_follow_mouse.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ui_2d_follow_mouse::ui_2d_follow_mouse
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_2d_follow_mouse.rs
   Extent: 1217 */

void pdb_140b70ee0(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  code *pcVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong unaff_RSI;
  longlong lVar16;
  uint *puVar17;
  longlong lVar18;
  undefined *unaff_R12;
  longlong unaff_R13;
  undefined *puVar19;
  longlong lVar20;
  undefined *puVar21;
  
  cVar9 = pdb_140e94b40();
  if (cVar9 == '\0') goto LAB_140b7109b;
  puVar21 = &UNK_14305ba18;
  unaff_RSI = 0x3d;
  uVar15 = 0x3d;
  lVar10 = pdb_140b73fd0(&UNK_14305ba18);
  if (lVar10 == 1) {
    if (uVar15 < 0x3e) {
      puVar21 = &UNK_14305ba18;
      uVar11 = pdb_140b73fd0(&UNK_14305ba18);
      if ((uVar11 & 1) != 0) {
        if (0x3d < uVar15 + 2) goto LAB_140b712fe;
        unaff_RSI = 0x3b - uVar15;
        puVar21 = &UNK_14305ba1a + uVar15;
      }
      goto LAB_140b70f74;
    }
  }
  else {
LAB_140b70f74:
    puVar12 = &UNK_14305b806;
    unaff_R12 = &UNK_14305b7d1;
    do {
      pbVar1 = puVar12 + -1;
      uVar14 = (uint)(char)*pbVar1;
      if ((int)uVar14 < 0) {
        bVar4 = puVar12[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar12[-3];
          if ((char)bVar5 < -0x40) {
            pbVar2 = puVar12 + -4;
            puVar12 = puVar12 + -4;
            uVar14 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar12 = puVar12 + -3;
            uVar14 = bVar5 & 0xf;
          }
          uVar14 = bVar4 & 0x3f | uVar14 << 6;
        }
        else {
          puVar12 = puVar12 + -2;
          uVar14 = bVar4 & 0x1f;
        }
        uVar14 = (uint)(*pbVar1 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_140b71009;
LAB_140b7101f:
        if ((undefined *)0x35 < puVar12 + -0x14305b7d0) goto LAB_140b712bb;
        unaff_R13 = 0x34 - (longlong)(puVar12 + -0x14305b7d1);
        unaff_R12 = puVar12 + 1;
        goto LAB_140b71043;
      }
      puVar12 = puVar12 + -1;
      if (uVar14 == 0x5c) goto LAB_140b7101f;
LAB_140b71009:
      if (uVar14 == 0x2f) goto LAB_140b7101f;
    } while (puVar12 != &UNK_14305b7d1);
    unaff_R13 = 0x35;
LAB_140b71043:
    plVar13 = (longlong *)pdb_140e97000();
    if ((char)plVar13[0xd] != '\x01') goto LAB_140b7128b;
    do {
      if (*plVar13 == 0) {
        *plVar13 = -1;
        unaff_RSI = pdb_140e94f10(plVar13 + 1,puVar21,unaff_RSI,unaff_R12,unaff_R13,1,0);
        *plVar13 = *plVar13 + 1;
LAB_140b7109b:
        lVar10 = *param_1;
        lVar7 = param_1[1];
        uVar6 = *(undefined4 *)((longlong)param_1 + 0x14);
        puVar17 = *(uint **)(lVar10 + 0xf8);
        puVar3 = puVar17 + *(longlong *)(lVar10 + 0x100);
        plVar13 = (longlong *)*param_2;
        if (*(char *)(lVar10 + 0x108) != '\0') {
          lVar18 = 0;
          param_1 = (longlong *)0x0;
          puVar21 = (undefined *)0x0;
          do {
            if ((int)puVar21 == (int)lVar18) {
              if (puVar17 == puVar3) goto LAB_140b7123a;
              param_2 = *(undefined8 **)(lVar7 + 0x1a0);
              while( true ) {
                uVar15 = (ulonglong)*puVar17;
                param_1 = (longlong *)(uVar15 * 9);
                lVar18 = param_2[uVar15 * 9 + 2];
                if (lVar18 != 0) break;
                puVar17 = puVar17 + 1;
                if (puVar17 == puVar3) goto LAB_140b7123a;
              }
              lVar16 = ~*(ulonglong *)(param_2[uVar15 * 9 + 7] + *(longlong *)(lVar10 + 0x110) * 8)
                       * 0x30;
              param_1 = *(longlong **)(param_2[uVar15 * 9 + 3] + 0x10 + lVar16);
              param_2 = *(undefined8 **)(param_2[uVar15 * 9 + 3] + 0x28 + lVar16);
              puVar17 = puVar17 + 1;
              puVar21 = (undefined *)0x0;
            }
            lVar16 = *plVar13;
            *(undefined4 *)((longlong)param_2 + (longlong)puVar21 * 4) = uVar6;
            unaff_R12 = (undefined *)((longlong)puVar21 * 0x10);
            param_1[(longlong)puVar21 * 2] = lVar16;
            puVar21 = (undefined *)(ulonglong)((int)puVar21 + 1);
          } while( true );
        }
        param_2 = (undefined8 *)0x8;
        puVar21 = (undefined *)0x0;
        unaff_R12 = (undefined *)0x0;
        while (puVar17 != puVar3) {
          param_2 = *(undefined8 **)(lVar7 + 0x100);
          while( true ) {
            uVar15 = (ulonglong)*puVar17;
            param_1 = (longlong *)(uVar15 * 0xa0);
            lVar18 = (param_2 + 0xb)[uVar15 * 0x14];
            if (lVar18 != 0) break;
            puVar17 = puVar17 + 1;
            if (puVar17 == puVar3) goto LAB_140b7123a;
          }
          uVar11 = (ulonglong)*(uint *)((longlong)(param_2 + uVar15 * 0x14) + 0x94);
          lVar16 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x18 + uVar11 * 0x48);
          lVar20 = ~*(ulonglong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x38 + uVar11 * 0x48) +
                     *(longlong *)(lVar10 + 0x110) * 8) * 0x30;
          puVar21 = *(undefined **)(lVar16 + 0x10 + lVar20);
          param_1 = *(longlong **)(lVar16 + 0x28 + lVar20);
          param_2 = (undefined8 *)(param_2 + uVar15 * 0x14)[10];
          puVar17 = puVar17 + 1;
          puVar12 = (undefined *)0x1;
          puVar19 = (undefined *)0x0;
          while( true ) {
            unaff_R12 = puVar12;
            uVar14 = *(uint *)(param_2 + (longlong)puVar19 * 2 + 1);
            lVar16 = *plVar13;
            *(undefined4 *)((longlong)param_1 + (ulonglong)~uVar14 * 4) = uVar6;
            unaff_R13 = (ulonglong)~uVar14 * 0x10;
            *(longlong *)(puVar21 + unaff_R13) = lVar16;
            if ((int)unaff_R12 == (int)lVar18) break;
            puVar12 = (undefined *)(ulonglong)((int)unaff_R12 + 1);
            puVar19 = unaff_R12;
          }
        }
LAB_140b7123a:
        if (cVar9 == '\0') {
          return;
        }
        plVar13 = (longlong *)pdb_140e97000();
        if (((char)plVar13[0xd] != '\x01') &&
           (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0)) break;
        if (*plVar13 == 0) {
          *plVar13 = -1;
          pdb_140e95370(plVar13 + 1,unaff_RSI);
          *plVar13 = *plVar13 + 1;
          return;
        }
      }
      plVar13 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b7128b:
      plVar13 = (longlong *)pdb_142d8ec20(plVar13,0);
    } while (plVar13 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_140b712bb:
    pdb_142dc8070(&UNK_14305b7d1,0x35);
  }
  pdb_142dc8070(&UNK_14305ba18,0x3d,0);
LAB_140b712fe:
  pdb_142dc8070(&UNK_14305ba18,0x3d);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

