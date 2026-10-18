// VA 0x14092bfd0, PDB extent 1428 bytes
// country_core::systems::look_at_camera::look_at_camera
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/look_at_camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::look_at_camera::look_at_camera
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/look_at_camera.rs
   Extent: 1428 */

void pdb_14092bfd0(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined *puVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined1 auStack_bc [28];
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined4 uStack_64;
  longlong lStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar18 = 0;
  cVar8 = pdb_140e94b40();
  if (cVar8 == '\0') {
    lStack_88 = 0;
    goto LAB_14092c198;
  }
  puVar20 = &UNK_14302217a;
  lVar17 = 0x35;
  uVar16 = 0x35;
  lVar9 = pdb_140930400(&UNK_14302217a);
  if (lVar9 != 1) {
LAB_14092c06b:
    puVar11 = &UNK_143021c29;
    puVar21 = &UNK_143021bf8;
    do {
      pbVar1 = puVar11 + -1;
      uVar14 = (uint)(char)*pbVar1;
      if ((int)uVar14 < 0) {
        bVar4 = puVar11[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar11[-3];
          if ((char)bVar5 < -0x40) {
            pbVar2 = puVar11 + -4;
            puVar11 = puVar11 + -4;
            uVar14 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar11 = puVar11 + -3;
            uVar14 = bVar5 & 0xf;
          }
          uVar14 = bVar4 & 0x3f | uVar14 << 6;
        }
        else {
          puVar11 = puVar11 + -2;
          uVar14 = bVar4 & 0x1f;
        }
        uVar14 = (uint)(*pbVar1 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_14092c0f9;
LAB_14092c116:
        if ((undefined *)0x31 < puVar11 + -0x143021bf7) goto LAB_14092c41b;
        lVar9 = 0x30 - (longlong)(puVar11 + -0x143021bf8);
        puVar21 = puVar11 + 1;
        goto LAB_14092c13a;
      }
      puVar11 = puVar11 + -1;
      if (uVar14 == 0x5c) goto LAB_14092c116;
LAB_14092c0f9:
      if (uVar14 == 0x2f) goto LAB_14092c116;
    } while (puVar11 != &UNK_143021bf8);
    lVar9 = 0x31;
LAB_14092c13a:
    plVar12 = (longlong *)pdb_140e97000();
    if (((char)plVar12[0xd] == '\x01') ||
       (plVar12 = (longlong *)pdb_142d8ec20(plVar12,0), plVar12 != (longlong *)0x0)) {
      if (*plVar12 != 0) goto LAB_14092c3df;
      *plVar12 = -1;
      plStack_50 = plVar12;
      uStack_80 = pdb_140e94f10(plVar12 + 1,puVar20,lVar17,puVar21,lVar9,1,0);
      *plStack_50 = *plStack_50 + 1;
      lStack_88 = 1;
LAB_14092c198:
      lStack_70 = *param_1;
      lStack_58 = param_1[1];
      uStack_64 = *(undefined4 *)((longlong)param_1 + 0x14);
      puVar19 = *(uint **)(lStack_70 + 0xf8);
      puVar3 = puVar19 + *(longlong *)(lStack_70 + 0x100);
      plStack_50 = (longlong *)CONCAT71(plStack_50._1_7_,*(char *)(lStack_70 + 0x108));
      uStack_90 = *param_2;
      lStack_78 = 8;
      lVar9 = 0;
      uVar14 = 0;
      if (*(char *)(lStack_70 + 0x108) == '\0') goto LAB_14092c230;
      do {
        uVar7 = uVar14;
        if (uVar14 == (uint)lVar18) {
          if (puVar19 == puVar3) goto LAB_14092c393;
          while( true ) {
            lVar18 = *(longlong *)
                      (*(longlong *)(lStack_58 + 0x1a0) + 0x10 + (ulonglong)*puVar19 * 0x48);
            if (lVar18 != 0) break;
            puVar19 = puVar19 + 1;
            if (puVar19 == puVar3) goto LAB_14092c393;
          }
          lVar9 = *(longlong *)(lStack_58 + 0x1a0) + (ulonglong)*puVar19 * 0x48;
          lVar17 = *(longlong *)(lVar9 + 0x18);
          lVar13 = ~*(ulonglong *)
                     (*(longlong *)(lVar9 + 0x38) + *(longlong *)(lStack_70 + 0x110) * 8) * 0x30;
          lVar9 = *(longlong *)(lVar17 + 0x10 + lVar13);
          lStack_60 = *(longlong *)(lVar17 + 0x28 + lVar13);
          puVar19 = puVar19 + 1;
          uVar14 = 0;
          uVar7 = uVar14;
        }
        while( true ) {
          *(undefined4 *)(lStack_60 + (ulonglong)uVar7 * 4) = uStack_64;
          pdb_140e08f50(auStack_bc,uStack_90);
          uStack_a0 = 0x3f80000000000000;
          uStack_98 = 0;
          pdb_140df46b0((ulonglong)uVar7 * 0x30 + lVar9,auStack_bc,&uStack_a0);
          uVar14 = uVar14 + 1;
          if ((char)plStack_50 != '\0') break;
LAB_14092c230:
          if (uVar14 == (uint)lVar18) {
            if (puVar19 == puVar3) goto LAB_14092c393;
            while( true ) {
              lVar18 = *(longlong *)
                        (*(longlong *)(lStack_58 + 0x100) + 0x58 + (ulonglong)*puVar19 * 0xa0);
              if (lVar18 != 0) break;
              puVar19 = puVar19 + 1;
              if (puVar19 == puVar3) goto LAB_14092c393;
            }
            lVar13 = *(longlong *)(lStack_58 + 0x100) + (ulonglong)*puVar19 * 0xa0;
            uVar16 = (ulonglong)*(uint *)(lVar13 + 0x94);
            lVar17 = *(longlong *)(*(longlong *)(lStack_58 + 0x1a0) + 0x18 + uVar16 * 0x48);
            lVar15 = ~*(ulonglong *)
                       (*(longlong *)(*(longlong *)(lStack_58 + 0x1a0) + 0x38 + uVar16 * 0x48) +
                       *(longlong *)(lStack_70 + 0x110) * 8) * 0x30;
            lVar9 = *(longlong *)(lVar17 + 0x10 + lVar15);
            lStack_60 = *(longlong *)(lVar17 + 0x28 + lVar15);
            lStack_78 = *(longlong *)(lVar13 + 0x50);
            puVar19 = puVar19 + 1;
            uVar14 = 0;
            uVar16 = 0;
          }
          else {
            uVar16 = (ulonglong)uVar14;
          }
          uVar7 = ~*(uint *)(lStack_78 + 8 + uVar16 * 0x10);
        }
      } while( true );
    }
    goto LAB_14092c40f;
  }
  if (uVar16 < 0x36) {
    puVar20 = &UNK_14302217a;
    uVar10 = pdb_140930400(&UNK_14302217a);
    if ((uVar10 & 1) != 0) {
      if (0x35 < uVar16 + 2) goto LAB_14092c45e;
      lVar17 = 0x33 - uVar16;
      puVar20 = &UNK_14302217c + uVar16;
    }
    goto LAB_14092c06b;
  }
  goto LAB_14092c43e;
LAB_14092c393:
  if (lStack_88 == 0) {
    return;
  }
  plVar12 = (longlong *)pdb_140e97000();
  if ((char)plVar12[0xd] != '\x01') goto LAB_14092c3eb;
  do {
    if (*plVar12 == 0) {
      *plVar12 = -1;
      plStack_50 = plVar12;
      pdb_140e95370(plVar12 + 1,uStack_80);
      *plStack_50 = *plStack_50 + 1;
      return;
    }
LAB_14092c3df:
    plVar12 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_14092c3eb:
    plVar12 = (longlong *)pdb_142d8ec20(plVar12,0);
  } while (plVar12 != (longlong *)0x0);
LAB_14092c40f:
  pdb_142dc7890(&UNK_143326860);
LAB_14092c41b:
  pdb_142dc8070(&UNK_143021bf8,0x31);
LAB_14092c43e:
  pdb_142dc8070(&UNK_14302217a,0x35,0);
LAB_14092c45e:
  pdb_142dc8070(&UNK_14302217a,0x35);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

