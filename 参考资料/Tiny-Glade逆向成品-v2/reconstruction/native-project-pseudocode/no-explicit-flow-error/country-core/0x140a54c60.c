// VA 0x140a54c60, PDB extent 1832 bytes
// country_core::systems::audio::path_audio::path_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/path_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::path_audio::path_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/path_audio.rs
   Extent: 1832 */

void pdb_140a54c60(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  code *pcVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  char *pcVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  bool bVar28;
  undefined *puVar29;
  uint *puVar30;
  undefined8 *puVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar39;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  char cStack_71;
  undefined8 uStack_70;
  
  uVar39 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  uStack_70 = 0xfffffffffffffffe;
  puStack_90 = param_4;
  uVar10 = pdb_140e94b40();
  uVar15 = (ulonglong)uVar10;
  plStack_80 = param_2;
  if ((char)uVar10 == '\0') {
    uStack_b8 = 0;
    cStack_71 = '\0';
    goto LAB_140a54e3a;
  }
  puVar29 = &UNK_14303e02d;
  lVar20 = 0x3b;
  uVar17 = 0x3b;
  lVar11 = pdb_140a58ed0(&UNK_14303e02d);
  if (lVar11 == 1) {
    if (uVar17 < 0x3c) {
      puVar29 = &UNK_14303e02d;
      uVar12 = pdb_140a58ed0(&UNK_14303e02d);
      if ((uVar12 & 1) != 0) {
        if (0x3b < uVar17 + 2) goto LAB_140a55258;
        lVar20 = 0x39 - uVar17;
        puVar29 = &UNK_14303e02f + uVar17;
      }
      goto LAB_140a54d0d;
    }
  }
  else {
LAB_140a54d0d:
    puVar13 = &UNK_14303d987;
    puVar30 = (uint *)&UNK_14303d954;
    do {
      pbVar1 = puVar13 + -1;
      uVar10 = (uint)(char)*pbVar1;
      if ((int)uVar10 < 0) {
        bVar3 = puVar13[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar13[-3];
          if ((char)bVar4 < -0x40) {
            pbVar2 = puVar13 + -4;
            puVar13 = puVar13 + -4;
            uVar10 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar13 = puVar13 + -3;
            uVar10 = bVar4 & 0xf;
          }
          uVar10 = bVar3 & 0x3f | uVar10 << 6;
        }
        else {
          puVar13 = puVar13 + -2;
          uVar10 = bVar3 & 0x1f;
        }
        uVar10 = (uint)(*pbVar1 & 0x3f) | uVar10 << 6;
        if (uVar10 != 0x5c) goto LAB_140a54d99;
LAB_140a54db5:
        if ((undefined *)0x33 < puVar13 + -0x14303d953) goto LAB_140a55215;
        lVar11 = 0x32 - (longlong)(puVar13 + -0x14303d954);
        puVar30 = (uint *)(puVar13 + 1);
        goto LAB_140a54dd8;
      }
      puVar13 = puVar13 + -1;
      if (uVar10 == 0x5c) goto LAB_140a54db5;
LAB_140a54d99:
      if (uVar10 == 0x2f) goto LAB_140a54db5;
    } while (puVar13 != &UNK_14303d954);
    lVar11 = 0x33;
LAB_140a54dd8:
    plVar14 = (longlong *)pdb_140e97000();
    if ((char)plVar14[0xd] != '\x01') goto LAB_140a551e5;
    do {
      if (*plVar14 == 0) {
        *plVar14 = -1;
        plStack_88 = plVar14;
        uStack_b0 = pdb_140e94f10(plVar14 + 1,puVar29,lVar20,puVar30,lVar11,1,0);
        uVar39 = (undefined4)((ulonglong)lVar11 >> 0x20);
        *plStack_88 = *plStack_88 + 1;
        uStack_b8 = 1;
        plStack_88 = (longlong *)uStack_b0;
        cStack_71 = (char)uVar15;
LAB_140a54e3a:
        pcVar5 = (char *)*param_5;
        fVar38 = _DAT_142e36f28;
        if (*(char *)*param_1 != '\t') {
          fVar38 = *(float *)(pcVar5 + 0x1c) / _DAT_142f3e554;
        }
        lVar20 = *param_6;
        puVar24 = (undefined8 *)(lVar20 + 0x20);
        puVar27 = (undefined8 *)(lVar20 + 0x28);
        if (*(char *)(lVar20 + 0x298) == '\0') {
          puVar27 = (undefined8 *)(lVar20 + 0x10);
          puVar24 = (undefined8 *)(lVar20 + 8);
        }
        uStack_c0 = *puVar27;
        uStack_c8 = *puVar24;
        pcVar18 = "";
        if (*pcVar5 != '\0') {
          pcVar18 = pcVar5 + 4;
        }
        fVar37 = (float)pdb_140a7d8d0(&uStack_c8,*(undefined4 *)pcVar18,*(undefined4 *)(pcVar18 + 8)
                                      ,_DAT_143006a28,CONCAT44(uVar39,0x43020000));
        lVar20 = param_7[1];
        uVar15 = *(ulonglong *)*param_7;
        param_1 = (undefined8 *)0x0;
        puVar24 = (undefined8 *)(uVar15 - *(ulonglong *)(lVar20 + 0x18));
        if (uVar15 < *(ulonglong *)(lVar20 + 0x18)) {
          puVar24 = param_1;
        }
        puVar27 = (undefined8 *)(uVar15 - *(ulonglong *)(lVar20 + 0x38));
        if (uVar15 < *(ulonglong *)(lVar20 + 0x38)) {
          puVar27 = param_1;
        }
        bVar32 = puVar27 <= *(undefined8 **)(lVar20 + 0x30);
        puVar27 = (undefined8 *)((longlong)*(undefined8 **)(lVar20 + 0x30) - (longlong)puVar27);
        bVar34 = puVar27 != (undefined8 *)0x0;
        if (!bVar32) {
          puVar27 = param_1;
        }
        bVar33 = puVar24 <= *(undefined8 **)(lVar20 + 0x10);
        puVar24 = (undefined8 *)((longlong)*(undefined8 **)(lVar20 + 0x10) - (longlong)puVar24);
        bVar35 = puVar24 != (undefined8 *)0x0;
        if (!bVar33) {
          puVar24 = param_1;
        }
        bVar28 = bVar33 && bVar35 || bVar32 && bVar34;
        puVar29 = (undefined *)(ulonglong)bVar28;
        puVar24 = (undefined8 *)((longlong)puVar24 + (longlong)puVar27);
        if (bVar33 && bVar35 || bVar32 && bVar34) {
          puVar24 = param_1;
        }
        *(ulonglong *)*param_7 = *(longlong *)(lVar20 + 0x40) - (longlong)puVar24;
        lVar20 = param_3[1];
        uVar15 = *(ulonglong *)*param_3;
        puVar24 = (undefined8 *)(uVar15 - *(ulonglong *)(lVar20 + 0x18));
        if (uVar15 < *(ulonglong *)(lVar20 + 0x18)) {
          puVar24 = param_1;
        }
        puVar27 = (undefined8 *)(uVar15 - *(ulonglong *)(lVar20 + 0x38));
        if (uVar15 < *(ulonglong *)(lVar20 + 0x38)) {
          puVar27 = param_1;
        }
        puVar6 = *(undefined8 **)(lVar20 + 0x10);
        puVar7 = *(undefined8 **)(lVar20 + 0x30);
        puVar22 = (undefined8 *)((longlong)puVar7 - (longlong)puVar27);
        if (puVar27 > puVar7) {
          puVar22 = param_1;
        }
        puVar31 = (undefined8 *)((longlong)puVar6 - (longlong)puVar24);
        if (puVar24 > puVar6) {
          puVar31 = param_1;
        }
        uVar15 = *(ulonglong *)(lVar20 + 0x40);
        if (puVar24 <= puVar6 &&
            (undefined8 *)((longlong)puVar6 - (longlong)puVar24) != (undefined8 *)0x0 ||
            puVar27 <= puVar7 &&
            (undefined8 *)((longlong)puVar7 - (longlong)puVar27) != (undefined8 *)0x0) {
          lVar11 = (longlong)puVar27 * 0x20 + *(longlong *)(lVar20 + 0x28);
          lVar20 = (longlong)puVar24 * 0x20 + *(longlong *)(lVar20 + 8);
          if (puVar6 < puVar24) {
            lVar20 = 8;
          }
          lVar25 = 0;
          if (puVar24 < puVar6) {
            lVar25 = lVar20 + -0x20 + (longlong)puVar31 * 0x20;
          }
          if (puVar7 < puVar27) {
            lVar11 = 8;
          }
          lVar20 = lVar11 + -0x20 + (longlong)puVar22 * 0x20;
          if (puVar7 <= puVar27) {
            lVar20 = lVar25;
          }
          param_1 = (undefined8 *)(lVar20 + 8);
        }
        else {
          uVar15 = uVar15 - ((longlong)puVar22 + (longlong)puVar31);
        }
        *(ulonglong *)*param_3 = uVar15;
        lVar20 = puStack_90[1];
        uVar17 = *(ulonglong *)*puStack_90;
        uVar15 = 0;
        uVar12 = uVar17 - *(ulonglong *)(lVar20 + 0x18);
        if (uVar17 < *(ulonglong *)(lVar20 + 0x18)) {
          uVar12 = uVar15;
        }
        uVar16 = uVar17 - *(ulonglong *)(lVar20 + 0x38);
        if (uVar17 < *(ulonglong *)(lVar20 + 0x38)) {
          uVar16 = uVar15;
        }
        uVar17 = *(ulonglong *)(lVar20 + 0x10);
        uVar8 = *(ulonglong *)(lVar20 + 0x30);
        uVar23 = uVar8 - uVar16;
        if (uVar16 > uVar8) {
          uVar23 = uVar15;
        }
        uVar21 = uVar17 - uVar12;
        if (uVar12 > uVar17) {
          uVar21 = uVar15;
        }
        uVar19 = *(ulonglong *)(lVar20 + 0x40);
        if (uVar12 <= uVar17 && uVar17 - uVar12 != 0 || uVar16 <= uVar8 && uVar8 - uVar16 != 0) {
          lVar11 = uVar16 * 0x20 + *(longlong *)(lVar20 + 0x28);
          lVar20 = uVar12 * 0x20 + *(longlong *)(lVar20 + 8);
          if (uVar17 < uVar12) {
            lVar20 = 8;
          }
          uVar21 = lVar20 + -0x20 + uVar21 * 0x20;
          uVar26 = 0;
          if (uVar12 < uVar17) {
            uVar26 = uVar21;
          }
          if (uVar8 < uVar16) {
            lVar11 = 8;
          }
          uVar15 = lVar11 + -0x20 + uVar23 * 0x20;
          if (uVar8 <= uVar16) {
            uVar15 = uVar26;
          }
          uVar15 = uVar15 + 8;
        }
        else {
          uVar19 = uVar19 - (uVar23 + uVar21);
          uVar21 = uVar17;
        }
        *(ulonglong *)*puStack_90 = uVar19;
        uVar10 = *(uint *)((longlong)plStack_80 + 0x1c);
        param_3 = (undefined8 *)(ulonglong)uVar10;
        puVar30 = (uint *)plStack_80[2];
        *puVar30 = uVar10;
        bVar36 = param_1 == (undefined8 *)0x0;
        lVar20 = *plStack_80;
        puVar24 = (undefined8 *)0x0;
        if (_DAT_142e37848 <= fVar37) {
          puVar24 = param_1;
        }
        lVar11 = CONCAT71((int7)(uVar21 >> 8),bVar36 || bVar28);
        if (bVar36 || (bVar33 && bVar35 || bVar32 && bVar34)) {
          puVar24 = (undefined8 *)0x0;
        }
        puStack_98 = param_1;
        pdb_140c22660(lVar20 + 0x70,puVar24,fVar38);
        *puVar30 = uVar10;
        if (bVar36 || (bVar33 && bVar35 || bVar32 && bVar34)) {
          puVar24 = (undefined8 *)0x0;
        }
        else {
          puVar24 = param_1;
          if (*(char *)((longlong)param_1 + 0x14) != '\0') {
            puVar24 = (undefined8 *)0x0;
          }
          if (_DAT_142e37848 <= fVar37) {
            puVar24 = (undefined8 *)0x0;
          }
        }
        pdb_140c22660(lVar20 + 0x38,puVar24,fVar38);
        *puVar30 = uVar10;
        if (bVar36 || (bVar33 && bVar35 || bVar32 && bVar34)) {
          param_1 = (undefined8 *)0x0;
        }
        else {
          if ((*(byte *)((longlong)param_1 + 0x14) & 1) == 0) {
            param_1 = (undefined8 *)0x0;
          }
          if (_DAT_142e37848 <= fVar37) {
            param_1 = (undefined8 *)0x0;
          }
        }
        pdb_140c22770(lVar20,param_1,fVar38,&puStack_98);
        uVar17 = 0;
        if (_DAT_142e37848 <= fVar37) {
          uVar17 = uVar15;
        }
        if (uVar15 == 0) {
          uVar17 = uVar15;
        }
        *puVar30 = uVar10;
        if (bVar33 && bVar35 || bVar32 && bVar34) {
          uVar17 = 0;
        }
        pdb_140c22660(lVar20 + 0xe0,uVar17,fVar38);
        lVar20 = lVar20 + 0xa8;
        if (bVar33 && bVar35 || bVar32 && bVar34) {
          uVar15 = 0;
        }
        bVar32 = _DAT_142e37848 <= fVar37;
        *puVar30 = uVar10;
        if (bVar32) {
          uVar15 = 0;
        }
        pdb_140c22660(lVar20,uVar15,fVar38);
        if (cStack_71 == '\0') {
          return;
        }
        plVar14 = (longlong *)pdb_140e97000();
        if (((char)plVar14[0xd] != '\x01') &&
           (plVar14 = (longlong *)pdb_142d8ec20(plVar14,0), plVar14 == (longlong *)0x0)) break;
        if (*plVar14 == 0) {
          *plVar14 = -1;
          plStack_80 = plVar14;
          pdb_140e95370(plVar14 + 1,plStack_88);
          *plStack_80 = *plStack_80 + 1;
          return;
        }
      }
      plVar14 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a551e5:
      plVar14 = (longlong *)pdb_142d8ec20(plVar14,0);
    } while (plVar14 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_140a55215:
    pdb_142dc8070(&UNK_14303d954,0x33);
  }
  pdb_142dc8070(&UNK_14303e02d,0x3b,0);
LAB_140a55258:
  pdb_142dc8070(&UNK_14303e02d,0x3b);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

