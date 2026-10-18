// VA 0x1409c1de0, PDB extent 1918 bytes
// country_core::systems::audio::water_audio::water_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/water_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::water_audio::water_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/water_audio.rs
   Extent: 1918 */

void pdb_1409c1de0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  bool bVar9;
  code *pcVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  char cVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  longlong unaff_R15;
  uint7 uVar35;
  bool bVar36;
  bool bVar37;
  float fVar38;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  uVar11 = pdb_140e94b40();
  puVar30 = (undefined8 *)(ulonglong)uVar11;
  if ((char)uVar11 == '\0') {
    cVar25 = '\0';
    goto LAB_1409c1fc2;
  }
  puVar33 = &UNK_14302bf94;
  unaff_R15 = 0x3d;
  uVar17 = 0x3d;
  lVar12 = pdb_1409c48f0(&UNK_14302bf94);
  if (lVar12 == 1) {
    if (uVar17 < 0x3e) {
      puVar33 = &UNK_14302bf94;
      uVar13 = pdb_1409c48f0(&UNK_14302bf94);
      if ((uVar13 & 1) != 0) {
        if (0x3d < uVar17 + 2) goto LAB_1409c245b;
        unaff_R15 = 0x3b - uVar17;
        puVar33 = &UNK_14302bf96 + uVar17;
      }
      goto LAB_1409c1e8a;
    }
  }
  else {
LAB_1409c1e8a:
    puVar14 = &UNK_14302bcce;
    puVar34 = (undefined8 *)&UNK_14302bc9a;
    do {
      pbVar1 = puVar14 + -1;
      uVar11 = (uint)(char)*pbVar1;
      if ((int)uVar11 < 0) {
        bVar3 = puVar14[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar14[-3];
          if ((char)bVar4 < -0x40) {
            pbVar2 = puVar14 + -4;
            puVar14 = puVar14 + -4;
            uVar11 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar14 = puVar14 + -3;
            uVar11 = bVar4 & 0xf;
          }
          uVar11 = bVar3 & 0x3f | uVar11 << 6;
        }
        else {
          puVar14 = puVar14 + -2;
          uVar11 = bVar3 & 0x1f;
        }
        uVar11 = (uint)(*pbVar1 & 0x3f) | uVar11 << 6;
        if (uVar11 != 0x5c) goto LAB_1409c1f19;
LAB_1409c1f35:
        if ((undefined *)0x34 < puVar14 + -0x14302bc99) goto LAB_1409c2418;
        puVar23 = (undefined8 *)(0x33 - (longlong)(puVar14 + -0x14302bc9a));
        puVar34 = (undefined8 *)(puVar14 + 1);
        goto LAB_1409c1f58;
      }
      puVar14 = puVar14 + -1;
      if (uVar11 == 0x5c) goto LAB_1409c1f35;
LAB_1409c1f19:
      if (uVar11 == 0x2f) goto LAB_1409c1f35;
    } while (puVar14 != &UNK_14302bc9a);
    puVar23 = (undefined8 *)0x34;
LAB_1409c1f58:
    plVar15 = (longlong *)pdb_140e97000();
    puStack_78 = param_4;
    puStack_70 = param_1;
    if ((char)plVar15[0xd] != '\x01') goto LAB_1409c23e8;
    do {
      cVar25 = (char)puVar30;
      if (*plVar15 == 0) {
        *plVar15 = -1;
        pdb_140e94f10(plVar15 + 1,puVar33,unaff_R15,puVar34,puVar23,1,0);
        *plVar15 = *plVar15 + 1;
        param_1 = puStack_70;
        param_4 = puStack_78;
LAB_1409c1fc2:
        uVar35 = (uint7)((ulonglong)unaff_R15 >> 8);
        if (*(char *)*param_1 == '\t') {
          fVar38 = _DAT_142e36f28;
          if (*(char *)(*param_6 + 0x98) != '\x04') goto LAB_1409c1ff5;
LAB_1409c208e:
          uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
          puVar6 = (undefined4 *)param_2[2];
          *puVar6 = uVar5;
          lVar12 = param_3[1];
          uVar17 = *(ulonglong *)*param_3;
          uVar19 = 0;
          uVar13 = uVar17 - *(ulonglong *)(lVar12 + 0x18);
          if (uVar17 < *(ulonglong *)(lVar12 + 0x18)) {
            uVar13 = uVar19;
          }
          uVar16 = uVar17 - *(ulonglong *)(lVar12 + 0x38);
          if (uVar17 < *(ulonglong *)(lVar12 + 0x38)) {
            uVar16 = uVar19;
          }
          uVar17 = *(ulonglong *)(lVar12 + 0x10);
          uVar7 = *(ulonglong *)(lVar12 + 0x30);
          uVar29 = uVar7 - uVar16;
          if (uVar16 > uVar7) {
            uVar29 = uVar19;
          }
          lVar22 = (ulonglong)uVar35 << 8;
          uVar24 = uVar17 - uVar13;
          if (uVar13 > uVar17) {
            uVar24 = uVar19;
          }
          lVar21 = *param_2;
          uVar27 = *(ulonglong *)(lVar12 + 0x40);
          if (uVar13 <= uVar17 && uVar17 - uVar13 != 0 || uVar16 <= uVar7 && uVar7 - uVar16 != 0) {
            lVar18 = uVar16 * 0x20 + *(longlong *)(lVar12 + 0x28);
            lVar22 = uVar13 * 0x20 + *(longlong *)(lVar12 + 8);
            if (uVar17 < uVar13) {
              lVar22 = 8;
            }
            lVar12 = 0;
            if (uVar13 < uVar17) {
              lVar12 = lVar22 + -0x20 + uVar24 * 0x20;
            }
            if (uVar7 < uVar16) {
              lVar18 = 8;
            }
            lVar18 = lVar18 + -0x20 + uVar29 * 0x20;
            if (uVar7 <= uVar16) {
              lVar18 = lVar12;
            }
            uVar19 = lVar18 + 8;
          }
          else {
            uVar27 = uVar27 - (uVar29 + uVar24);
          }
          *(ulonglong *)*param_3 = uVar27;
          pdb_140c22660(lVar21 + 0x70,uVar19,fVar38);
          *puVar6 = uVar5;
          lVar12 = param_4[1];
          uVar17 = *(ulonglong *)*param_4;
          puVar20 = (undefined8 *)0x0;
          puVar26 = (undefined8 *)(uVar17 - *(ulonglong *)(lVar12 + 0x18));
          if (uVar17 < *(ulonglong *)(lVar12 + 0x18)) {
            puVar26 = puVar20;
          }
          puVar28 = (undefined8 *)(uVar17 - *(ulonglong *)(lVar12 + 0x38));
          if (uVar17 < *(ulonglong *)(lVar12 + 0x38)) {
            puVar28 = puVar20;
          }
          puVar8 = *(undefined8 **)(lVar12 + 0x10);
          param_3 = *(undefined8 **)(lVar12 + 0x30);
          bVar36 = param_3 < puVar28;
          puVar30 = (undefined8 *)((longlong)param_3 - (longlong)puVar28);
          puVar31 = puVar30;
          if (bVar36) {
            puVar31 = puVar20;
          }
          unaff_R15 = CONCAT71((int7)((ulonglong)lVar22 >> 8),bVar36 || puVar30 == (undefined8 *)0x0
                              );
          bVar37 = puVar8 < puVar26;
          puVar23 = (undefined8 *)((longlong)puVar8 - (longlong)puVar26);
          puVar34 = puVar23;
          if (bVar37) {
            puVar34 = puVar20;
          }
          uVar17 = *(ulonglong *)(lVar12 + 0x40);
          bVar9 = bVar37 || puVar23 == (undefined8 *)0x0;
          if ((bVar37 || puVar23 == (undefined8 *)0x0) && (bVar36 || puVar30 == (undefined8 *)0x0))
          {
            uVar17 = uVar17 - (longlong)((longlong)puVar31 + (longlong)puVar34);
            puVar23 = puVar8;
            puVar30 = puVar26;
          }
          else {
            lVar22 = (longlong)puVar28 * 0x20 + *(longlong *)(lVar12 + 0x28);
            puVar34 = (undefined8 *)((longlong)puVar34 * 0x20);
            unaff_R15 = (longlong)puVar26 * 0x20 + *(longlong *)(lVar12 + 8);
            puVar23 = (undefined8 *)0x8;
            if (puVar8 < puVar26) {
              unaff_R15 = 8;
            }
            puVar30 = (undefined8 *)(unaff_R15 + -0x20 + (longlong)puVar34);
            puVar32 = (undefined8 *)0x0;
            if (puVar26 < puVar8) {
              puVar32 = puVar30;
            }
            if (param_3 < puVar28) {
              lVar22 = 8;
            }
            puVar20 = (undefined8 *)(lVar22 + -0x20 + (longlong)puVar31 * 0x20);
            if (param_3 <= puVar28) {
              puVar20 = puVar32;
            }
            puVar20 = puVar20 + 1;
          }
          *(ulonglong *)*param_4 = uVar17;
          pdb_140c22660(lVar21 + 0xa8,puVar20,fVar38);
          *puVar6 = uVar5;
          pdb_140a87f70(lVar21);
          *puVar6 = uVar5;
          param_2 = (longlong *)(lVar21 + 0x38);
          pdb_140a87f70(param_2);
        }
        else {
          fVar38 = *(float *)(*param_5 + 0x1c) / _DAT_142f3e554;
          if (*(char *)(*param_6 + 0x98) == '\x04') goto LAB_1409c208e;
LAB_1409c1ff5:
          uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
          puVar6 = (undefined4 *)param_2[2];
          *puVar6 = uVar5;
          lVar12 = *param_2;
          lVar22 = param_3[1];
          uVar17 = *(ulonglong *)*param_3;
          uVar19 = 0;
          uVar13 = uVar17 - *(ulonglong *)(lVar22 + 0x18);
          if (uVar17 < *(ulonglong *)(lVar22 + 0x18)) {
            uVar13 = uVar19;
          }
          uVar16 = uVar17 - *(ulonglong *)(lVar22 + 0x38);
          if (uVar17 < *(ulonglong *)(lVar22 + 0x38)) {
            uVar16 = uVar19;
          }
          uVar17 = *(ulonglong *)(lVar22 + 0x10);
          uVar7 = *(ulonglong *)(lVar22 + 0x30);
          uVar29 = uVar7 - uVar16;
          if (uVar16 > uVar7) {
            uVar29 = uVar19;
          }
          uVar24 = uVar17 - uVar13;
          if (uVar13 > uVar17) {
            uVar24 = uVar19;
          }
          lVar21 = (ulonglong)uVar35 << 8;
          uVar27 = *(ulonglong *)(lVar22 + 0x40);
          if (uVar13 <= uVar17 && uVar17 - uVar13 != 0 || uVar16 <= uVar7 && uVar7 - uVar16 != 0) {
            lVar18 = uVar16 * 0x20 + *(longlong *)(lVar22 + 0x28);
            lVar21 = uVar13 * 0x20 + *(longlong *)(lVar22 + 8);
            if (uVar17 < uVar13) {
              lVar21 = 8;
            }
            lVar22 = 0;
            if (uVar13 < uVar17) {
              lVar22 = lVar21 + -0x20 + uVar24 * 0x20;
            }
            if (uVar7 < uVar16) {
              lVar18 = 8;
            }
            lVar18 = lVar18 + -0x20 + uVar29 * 0x20;
            if (uVar7 <= uVar16) {
              lVar18 = lVar22;
            }
            uVar19 = lVar18 + 8;
          }
          else {
            uVar27 = uVar27 - (uVar29 + uVar24);
          }
          *(ulonglong *)*param_3 = uVar27;
          pdb_140c22660(lVar12,uVar19,fVar38);
          *puVar6 = uVar5;
          lVar22 = param_4[1];
          uVar17 = *(ulonglong *)*param_4;
          puVar20 = (undefined8 *)0x0;
          puVar26 = (undefined8 *)(uVar17 - *(ulonglong *)(lVar22 + 0x18));
          if (uVar17 < *(ulonglong *)(lVar22 + 0x18)) {
            puVar26 = puVar20;
          }
          puVar28 = (undefined8 *)(uVar17 - *(ulonglong *)(lVar22 + 0x38));
          if (uVar17 < *(ulonglong *)(lVar22 + 0x38)) {
            puVar28 = puVar20;
          }
          puVar8 = *(undefined8 **)(lVar22 + 0x10);
          param_3 = *(undefined8 **)(lVar22 + 0x30);
          bVar36 = param_3 < puVar28;
          puVar30 = (undefined8 *)((longlong)param_3 - (longlong)puVar28);
          puVar31 = puVar30;
          if (bVar36) {
            puVar31 = puVar20;
          }
          unaff_R15 = CONCAT71((int7)((ulonglong)lVar21 >> 8),bVar36 || puVar30 == (undefined8 *)0x0
                              );
          bVar37 = puVar8 < puVar26;
          puVar23 = (undefined8 *)((longlong)puVar8 - (longlong)puVar26);
          puVar34 = puVar23;
          if (bVar37) {
            puVar34 = puVar20;
          }
          uVar17 = *(ulonglong *)(lVar22 + 0x40);
          bVar9 = bVar37 || puVar23 == (undefined8 *)0x0;
          if ((bVar37 || puVar23 == (undefined8 *)0x0) && (bVar36 || puVar30 == (undefined8 *)0x0))
          {
            uVar17 = uVar17 - (longlong)((longlong)puVar31 + (longlong)puVar34);
            puVar23 = puVar8;
            puVar30 = puVar26;
          }
          else {
            lVar21 = (longlong)puVar28 * 0x20 + *(longlong *)(lVar22 + 0x28);
            puVar34 = (undefined8 *)((longlong)puVar34 * 0x20);
            unaff_R15 = (longlong)puVar26 * 0x20 + *(longlong *)(lVar22 + 8);
            puVar23 = (undefined8 *)0x8;
            if (puVar8 < puVar26) {
              unaff_R15 = 8;
            }
            puVar30 = (undefined8 *)(unaff_R15 + -0x20 + (longlong)puVar34);
            puVar32 = (undefined8 *)0x0;
            if (puVar26 < puVar8) {
              puVar32 = puVar30;
            }
            if (param_3 < puVar28) {
              lVar21 = 8;
            }
            puVar20 = (undefined8 *)(lVar21 + -0x20 + (longlong)puVar31 * 0x20);
            if (param_3 <= puVar28) {
              puVar20 = puVar32;
            }
            puVar20 = puVar20 + 1;
          }
          *(ulonglong *)*param_4 = uVar17;
          pdb_140c22660(lVar12 + 0x38,puVar20,fVar38);
          *puVar6 = uVar5;
          pdb_140a87f70(lVar12 + 0x70);
          *puVar6 = uVar5;
          param_2 = (longlong *)(lVar12 + 0xa8);
          pdb_140a87f70(param_2);
        }
        puStack_70 = (undefined8 *)CONCAT44(puStack_70._4_4_,uVar5);
        puStack_78 = (undefined8 *)CONCAT71(puStack_78._1_7_,cVar25);
        puVar33 = (undefined *)(ulonglong)bVar9;
        if (cVar25 == '\0') {
          return;
        }
        plVar15 = (longlong *)pdb_140e97000();
        if (((char)plVar15[0xd] != '\x01') &&
           (plVar15 = (longlong *)pdb_142d8ec20(plVar15,0), plVar15 == (longlong *)0x0)) break;
        if (*plVar15 == 0) {
          *plVar15 = -1;
          pdb_140e95370(plVar15 + 1);
          *plVar15 = *plVar15 + 1;
          return;
        }
      }
      plVar15 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_1409c23e8:
      plVar15 = (longlong *)pdb_142d8ec20(plVar15,0);
    } while (plVar15 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_1409c2418:
    pdb_142dc8070(&UNK_14302bc9a,0x34);
  }
  pdb_142dc8070(&UNK_14302bf94,0x3d,0);
LAB_1409c245b:
  pdb_142dc8070(&UNK_14302bf94,0x3d);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

