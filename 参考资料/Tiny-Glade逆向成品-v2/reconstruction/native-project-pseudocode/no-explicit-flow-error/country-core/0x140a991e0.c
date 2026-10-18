// VA 0x140a991e0, PDB extent 2660 bytes
// country_core::systems::audio::garden_audio::garden_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/garden_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::garden_audio::garden_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/garden_audio.rs
   Extent: 2660 */

void pdb_140a991e0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined7 uVar25;
  undefined *puVar26;
  byte bVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined8 *puVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  undefined8 *in_stack_fffffffffffffef8;
  undefined8 uVar34;
  undefined4 uVar35;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  longlong lStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  char cStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  cStack_81 = pdb_140e94b40();
  if (cStack_81 == '\0') goto LAB_140a993d7;
  puVar22 = &UNK_14304621d;
  puVar30 = (undefined8 *)0x3f;
  uVar14 = 0x3f;
  lVar5 = pdb_140a9c350(&UNK_14304621d);
  if (lVar5 == 1) {
    if (0x3f < uVar14) {
LAB_140a99acc:
      pdb_142dc8070(&UNK_14304621d,0x3f,0);
LAB_140a99aec:
      pdb_142dc8070(&UNK_14304621d,0x3f);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar22 = &UNK_14304621d;
    uVar6 = pdb_140a9c350(&UNK_14304621d);
    if ((uVar6 & 1) != 0) {
      if (0x3f < uVar14 + 2) goto LAB_140a99aec;
      puVar30 = (undefined8 *)(0x3d - uVar14);
      puVar22 = &UNK_14304621f + uVar14;
    }
  }
  puVar7 = &UNK_143045ea3;
  puVar26 = &UNK_143045e6e;
  do {
    pbVar1 = puVar7 + -1;
    uVar11 = (uint)(char)*pbVar1;
    plStack_90 = param_4;
    if ((int)uVar11 < 0) {
      bVar27 = puVar7[-2];
      if ((char)bVar27 < -0x40) {
        bVar3 = puVar7[-3];
        if ((char)bVar3 < -0x40) {
          pbVar2 = puVar7 + -4;
          puVar7 = puVar7 + -4;
          uVar11 = bVar3 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar7 = puVar7 + -3;
          uVar11 = bVar3 & 0xf;
        }
        uVar11 = bVar27 & 0x3f | uVar11 << 6;
      }
      else {
        puVar7 = puVar7 + -2;
        uVar11 = bVar27 & 0x1f;
      }
      uVar11 = (uint)(*pbVar1 & 0x3f) | uVar11 << 6;
      if (uVar11 != 0x5c) goto LAB_140a99329;
LAB_140a99348:
      if ((undefined *)0x35 < puVar7 + -0x143045e6d) {
        pdb_142dc8070(&UNK_143045e6e,0x35,puVar7 + -0x143045e6d,0x35,&UNK_1430462c0);
        goto LAB_140a99acc;
      }
      puVar15 = (undefined8 *)(0x34 - (longlong)(puVar7 + -0x143045e6e));
      puVar26 = puVar7 + 1;
      goto LAB_140a9936e;
    }
    puVar7 = puVar7 + -1;
    if (uVar11 == 0x5c) goto LAB_140a99348;
LAB_140a99329:
    if (uVar11 == 0x2f) goto LAB_140a99348;
  } while (puVar7 != &UNK_143045e6e);
  puVar15 = (undefined8 *)0x35;
LAB_140a9936e:
  plVar8 = (longlong *)pdb_140e97000();
  if ((char)plVar8[0xd] != '\x01') goto LAB_140a99a3c;
  do {
    if (*plVar8 == 0) {
      *plVar8 = -1;
      plStack_98 = plVar8;
      uStack_c0 = pdb_140e94f10(plVar8 + 1,puVar22,puVar30,puVar26,puVar15,1,0);
      *plStack_98 = *plStack_98 + 1;
      param_4 = plStack_90;
      in_stack_fffffffffffffef8 = puVar15;
LAB_140a993d7:
      fVar33 = _DAT_142e36f28;
      if (*(char *)*param_1 != '\t') {
        fVar33 = *(float *)(*param_6 + 0x1c) / _DAT_142f3e554;
      }
      lVar5 = *param_7;
      puVar30 = (undefined8 *)(lVar5 + 0x20);
      puVar15 = (undefined8 *)(lVar5 + 0x28);
      if (*(char *)(lVar5 + 0x298) == '\0') {
        puVar15 = (undefined8 *)(lVar5 + 0x10);
        puVar30 = (undefined8 *)(lVar5 + 8);
      }
      uStack_b0 = *puVar15;
      uStack_b8 = *puVar30;
      lVar5 = param_3[1];
      uVar14 = *(ulonglong *)*param_3;
      uVar28 = 0;
      uVar6 = uVar14 - *(ulonglong *)(lVar5 + 0x18);
      if (uVar14 < *(ulonglong *)(lVar5 + 0x18)) {
        uVar6 = uVar28;
      }
      uVar19 = uVar14 - *(ulonglong *)(lVar5 + 0x38);
      if (uVar14 < *(ulonglong *)(lVar5 + 0x38)) {
        uVar19 = uVar28;
      }
      uVar14 = *(ulonglong *)(lVar5 + 0x10);
      uVar17 = *(ulonglong *)(lVar5 + 0x30);
      uVar18 = uVar17 - uVar19;
      if (uVar19 > uVar17) {
        uVar18 = uVar28;
      }
      uVar21 = uVar14 - uVar6;
      if (uVar6 > uVar14) {
        uVar21 = uVar28;
      }
      uVar16 = *(ulonglong *)(lVar5 + 0x40);
      if (uVar6 <= uVar14 && uVar14 - uVar6 != 0 || uVar19 <= uVar17 && uVar17 - uVar19 != 0) {
        lVar29 = uVar19 * 0x20 + *(longlong *)(lVar5 + 0x28);
        lVar5 = uVar6 * 0x20 + *(longlong *)(lVar5 + 8);
        if (uVar14 < uVar6) {
          lVar5 = 8;
        }
        lVar9 = 0;
        if (uVar6 < uVar14) {
          lVar9 = lVar5 + -0x20 + uVar21 * 0x20;
        }
        if (uVar17 < uVar19) {
          lVar29 = 8;
        }
        lVar5 = lVar29 + -0x20 + uVar18 * 0x20;
        if (uVar17 <= uVar19) {
          lVar5 = lVar9;
        }
        uVar28 = lVar5 + 8;
      }
      else {
        uVar16 = uVar16 - (uVar18 + uVar21);
      }
      *(ulonglong *)*param_3 = uVar16;
      lVar5 = param_4[1];
      uVar14 = *(ulonglong *)*param_4;
      uVar19 = 0;
      uVar6 = uVar14 - *(ulonglong *)(lVar5 + 0x18);
      if (uVar14 < *(ulonglong *)(lVar5 + 0x18)) {
        uVar6 = uVar19;
      }
      uVar17 = uVar14 - *(ulonglong *)(lVar5 + 0x38);
      if (uVar14 < *(ulonglong *)(lVar5 + 0x38)) {
        uVar17 = uVar19;
      }
      uVar14 = *(ulonglong *)(lVar5 + 0x10);
      uVar18 = *(ulonglong *)(lVar5 + 0x30);
      uVar21 = uVar18 - uVar17;
      if (uVar17 > uVar18) {
        uVar21 = uVar19;
      }
      lStack_a0 = 0;
      uVar16 = uVar14 - uVar6;
      if (uVar6 > uVar14) {
        uVar16 = uVar19;
      }
      uVar19 = *(ulonglong *)(lVar5 + 0x40);
      lVar29 = 0;
      if (uVar6 <= uVar14 && uVar14 - uVar6 != 0 || uVar17 <= uVar18 && uVar18 - uVar17 != 0) {
        lVar9 = uVar17 * 0x20 + *(longlong *)(lVar5 + 0x28);
        lVar29 = uVar6 * 0x20 + *(longlong *)(lVar5 + 8);
        if (uVar14 < uVar6) {
          lVar29 = 8;
        }
        lVar5 = 0;
        if (uVar6 < uVar14) {
          lVar5 = lVar29 + -0x20 + uVar16 * 0x20;
        }
        if (uVar18 < uVar17) {
          lVar9 = 8;
        }
        lStack_a0 = lVar9 + -0x20 + uVar21 * 0x20;
        if (uVar18 <= uVar17) {
          lStack_a0 = lVar5;
        }
        lStack_a0 = lStack_a0 + 8;
      }
      else {
        uVar19 = uVar19 - (uVar21 + uVar16);
      }
      *(ulonglong *)*param_4 = uVar19;
      lVar5 = param_5[1];
      uVar14 = *(ulonglong *)*param_5;
      puVar15 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)(uVar14 - *(ulonglong *)(lVar5 + 0x18));
      if (uVar14 < *(ulonglong *)(lVar5 + 0x18)) {
        puVar10 = puVar15;
      }
      puVar12 = (undefined8 *)(uVar14 - *(ulonglong *)(lVar5 + 0x38));
      if (uVar14 < *(ulonglong *)(lVar5 + 0x38)) {
        puVar12 = puVar15;
      }
      puVar30 = *(undefined8 **)(lVar5 + 0x10);
      param_1 = *(undefined8 **)(lVar5 + 0x30);
      puVar20 = (undefined8 *)((longlong)param_1 - (longlong)puVar12);
      if (puVar12 > param_1) {
        puVar20 = puVar15;
      }
      bVar31 = puVar30 < puVar10;
      puVar23 = (undefined8 *)((longlong)puVar30 - (longlong)puVar10);
      puVar24 = puVar23;
      if (bVar31) {
        puVar24 = puVar15;
      }
      uVar14 = *(ulonglong *)(lVar5 + 0x40);
      puVar26 = (undefined *)
                CONCAT71((int7)((ulonglong)lVar29 >> 8),bVar31 || puVar23 == (undefined8 *)0x0);
      if (!bVar31 && puVar23 != (undefined8 *)0x0 ||
          puVar12 <= param_1 &&
          (undefined8 *)((longlong)param_1 - (longlong)puVar12) != (undefined8 *)0x0) {
        lVar29 = (longlong)puVar12 * 0x20 + *(longlong *)(lVar5 + 0x28);
        puVar24 = (undefined8 *)((longlong)puVar24 * 0x20);
        lVar5 = (longlong)puVar10 * 0x20 + *(longlong *)(lVar5 + 8);
        if (puVar30 < puVar10) {
          lVar5 = 8;
        }
        lVar9 = 0;
        if (puVar10 < puVar30) {
          lVar9 = lVar5 + -0x20 + (longlong)puVar24;
        }
        if (param_1 < puVar12) {
          lVar29 = 8;
        }
        lVar5 = lVar29 + -0x20 + (longlong)puVar20 * 0x20;
        if (param_1 <= puVar12) {
          lVar5 = lVar9;
        }
        puVar15 = (undefined8 *)(lVar5 + 8);
      }
      else {
        uVar14 = uVar14 - ((longlong)puVar20 + (longlong)puVar24);
      }
      *(ulonglong *)*param_5 = uVar14;
      plStack_98 = (longlong *)param_2[2];
      plStack_90 = (longlong *)CONCAT44(plStack_90._4_4_,*(undefined4 *)((longlong)param_2 + 0x1c));
      *(undefined4 *)plStack_98 = *(undefined4 *)((longlong)param_2 + 0x1c);
      lVar5 = *param_2;
      pcStack_a8 = (char *)*param_6;
      if (uVar28 == 0) {
        uVar14 = 0;
      }
      else {
        pcVar13 = "";
        if (*pcStack_a8 != '\0') {
          pcVar13 = pcStack_a8 + 4;
        }
        in_stack_fffffffffffffef8 =
             (undefined8 *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffef8 >> 0x20),0x43020000);
        fVar32 = (float)pdb_140a7d8d0(&uStack_b8,*(undefined4 *)pcVar13,*(undefined4 *)(pcVar13 + 8)
                                      ,_DAT_143006a28,in_stack_fffffffffffffef8);
        uVar14 = 0;
        if (_DAT_142e37848 <= fVar32) {
          uVar14 = uVar28;
        }
      }
      pdb_140c22660(lVar5 + 0x38,uVar14,fVar33);
      *(undefined4 *)plStack_98 = plStack_90._0_4_;
      if (uVar28 == 0) {
        uVar14 = 0;
      }
      else {
        pcVar13 = "";
        if (*pcStack_a8 != '\0') {
          pcVar13 = pcStack_a8 + 4;
        }
        in_stack_fffffffffffffef8 =
             (undefined8 *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffef8 >> 0x20),0x43020000);
        fVar32 = (float)pdb_140a7d8d0(&uStack_b8,*(undefined4 *)pcVar13,*(undefined4 *)(pcVar13 + 8)
                                      ,_DAT_143006a28,in_stack_fffffffffffffef8);
        uVar14 = 0;
        if (fVar32 < _DAT_142e37848) {
          uVar14 = uVar28;
        }
      }
      pdb_140c22660(lVar5,uVar14,fVar33);
      uVar25 = (undefined7)((ulonglong)puVar24 >> 8);
      puVar22 = (undefined *)CONCAT71(uVar25,2);
      uVar11 = 0;
      if (puVar15 == (undefined8 *)0x0) {
        fVar32 = 0.0;
      }
      else {
        bVar27 = *(byte *)((longlong)puVar15 + 0x14);
        if (bVar27 == 0) {
          puVar22 = (undefined *)0x0;
          param_1 = (undefined8 *)0x0;
          bVar27 = 0;
        }
        else {
          if (bVar27 < 4) {
            bVar27 = bVar27 - 1;
            param_1 = (undefined8 *)0x1;
          }
          else if (bVar27 < 7) {
            bVar27 = bVar27 - 4;
            param_1 = (undefined8 *)0x2;
          }
          else if (bVar27 < 10) {
            bVar27 = bVar27 - 7;
            param_1 = (undefined8 *)0x3;
          }
          else {
            fVar32 = 0.0;
            if (0xc < bVar27) goto LAB_140a997ca;
            bVar27 = bVar27 - 10;
            param_1 = (undefined8 *)0x4;
          }
          puVar22 = (undefined *)CONCAT71(uVar25,1);
        }
        in_stack_fffffffffffffef8 =
             (undefined8 *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffef8 >> 0x20),0x43020000);
        fVar32 = (float)pdb_140a7d8d0(&uStack_b8,*(undefined4 *)puVar15,*(undefined4 *)(puVar15 + 1)
                                      ,_DAT_143006a28,in_stack_fffffffffffffef8);
        uVar11 = (uint)_DAT_142e36f28 & -(uint)(_DAT_142e37848 <= fVar32);
        fVar32 = (float)bVar27;
      }
LAB_140a997ca:
      *(undefined4 *)plStack_98 = plStack_90._0_4_;
      lVar29 = 0x70;
      puVar10 = (undefined8 *)0x0;
      while (uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20), lVar29 != 0x188) {
        puVar26 = (undefined *)(lVar5 + lVar29);
        lVar29 = lVar29 + 0x38;
        puVar30 = (undefined8 *)((longlong)puVar10 + 1);
        if ((char)puVar22 == '\x02' || param_1 != puVar10) {
          pdb_140a87f70(puVar26);
          puVar10 = puVar30;
        }
        else {
          uVar14 = *(ulonglong *)(puVar26 + 0x28);
          if (*(ulonglong *)(puVar26 + 0x10) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar14,*(ulonglong *)(puVar26 + 0x10),&UNK_143043a80);
          }
          uStack_d8 = *(undefined4 *)(puVar15 + 1);
          uStack_e0 = *puVar15;
          pdb_140a8e190(uVar14 * 0x30 + *(longlong *)(puVar26 + 8),&uStack_e0);
          uVar14 = *(ulonglong *)(puVar26 + 0x28);
          if (*(ulonglong *)(puVar26 + 0x10) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar14,*(ulonglong *)(puVar26 + 0x10),&UNK_143043a80);
          }
          pdb_140a8e730(uVar14 * 0x30 + *(longlong *)(puVar26 + 8),&UNK_143045ea3,0xd,fVar33);
          if (*(ulonglong *)(puVar26 + 0x10) <= *(ulonglong *)(puVar26 + 0x28)) goto LAB_140a99a6d;
          pdb_140a8e730(*(ulonglong *)(puVar26 + 0x28) * 0x30 + *(longlong *)(puVar26 + 8),
                        &UNK_143045eb0,8,uVar11);
          if ((char)puVar22 == '\x01') {
            uVar14 = *(ulonglong *)(puVar26 + 0x28);
            if (*(ulonglong *)(puVar26 + 0x10) <= uVar14) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar14,*(ulonglong *)(puVar26 + 0x10),&UNK_143043a80);
            }
            pdb_140a8e730(uVar14 * 0x30 + *(longlong *)(puVar26 + 8),&UNK_143045eb8,4,fVar32);
          }
          pdb_140a87e10(puVar26);
          puVar10 = puVar30;
        }
      }
      *(undefined4 *)plStack_98 = plStack_90._0_4_;
      if (lStack_a0 == 0) {
        lVar29 = 0;
      }
      else {
        pcVar13 = "";
        if (*pcStack_a8 != '\0') {
          pcVar13 = pcStack_a8 + 4;
        }
        uVar34 = CONCAT44(uVar35,0x43020000);
        fVar32 = (float)pdb_140a7d8d0(&uStack_b8,*(undefined4 *)pcVar13,*(undefined4 *)(pcVar13 + 8)
                                      ,_DAT_143006a28,uVar34);
        uVar35 = (undefined4)((ulonglong)uVar34 >> 0x20);
        lVar29 = 0;
        if (_DAT_142e37848 <= fVar32) {
          lVar29 = lStack_a0;
        }
      }
      pdb_140c22660(lVar5 + 0x1c0,lVar29,fVar33);
      *(undefined4 *)plStack_98 = plStack_90._0_4_;
      if (lStack_a0 == 0) {
        lVar29 = 0;
      }
      else {
        pcVar13 = "";
        if (*pcStack_a8 != '\0') {
          pcVar13 = pcStack_a8 + 4;
        }
        fVar32 = (float)pdb_140a7d8d0(&uStack_b8,*(undefined4 *)pcVar13,*(undefined4 *)(pcVar13 + 8)
                                      ,_DAT_143006a28,CONCAT44(uVar35,0x43020000));
        lVar29 = 0;
        if (fVar32 < _DAT_142e37848) {
          lVar29 = lStack_a0;
        }
      }
      param_2 = (longlong *)(lVar5 + 0x188);
      pdb_140c22660(param_2,lVar29,fVar33);
      if (cStack_81 == '\0') {
        return;
      }
      plVar8 = (longlong *)pdb_140e97000();
      if (((char)plVar8[0xd] != '\x01') &&
         (plVar8 = (longlong *)pdb_142d8ec20(plVar8,0), plVar8 == (longlong *)0x0)) break;
      param_3 = (undefined8 *)0x188;
      if (*plVar8 == 0) {
        *plVar8 = -1;
        plStack_90 = plVar8;
        pdb_140e95370(plVar8 + 1,uStack_c0);
        *plStack_90 = *plStack_90 + 1;
        return;
      }
    }
    plVar8 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a99a3c:
    plVar8 = (longlong *)pdb_142d8ec20(plVar8,0);
  } while (plVar8 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140a99a6d:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2();
}

