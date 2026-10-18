// VA 0x140abf7b0, PDB extent 16439 bytes
// country_core::systems::audio::decorator_audio::decorator_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/decorator_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140ac2570) */
/* WARNING: Removing unreachable block (ram,0x000140ac251c) */
/* WARNING: Removing unreachable block (ram,0x000140ac24b4) */
/* WARNING: Removing unreachable block (ram,0x000140ac244c) */
/* WARNING: Removing unreachable block (ram,0x000140ac23ea) */
/* WARNING: Removing unreachable block (ram,0x000140ac2388) */
/* WARNING: Removing unreachable block (ram,0x000140ac2323) */
/* WARNING: Removing unreachable block (ram,0x000140ac22be) */
/* WARNING: Removing unreachable block (ram,0x000140ac2259) */
/* WARNING: Removing unreachable block (ram,0x000140ac221a) */
/* WARNING: Removing unreachable block (ram,0x000140ac228a) */
/* WARNING: Removing unreachable block (ram,0x000140ac22e1) */
/* WARNING: Removing unreachable block (ram,0x000140ac2357) */
/* WARNING: Removing unreachable block (ram,0x000140ac23b9) */
/* WARNING: Removing unreachable block (ram,0x000140ac241b) */
/* WARNING: Removing unreachable block (ram,0x000140ac2480) */
/* WARNING: Removing unreachable block (ram,0x000140ac24e8) */
/* WARNING: Removing unreachable block (ram,0x000140ac254d) */
/* WARNING: Removing unreachable block (ram,0x000140ac25a1) */
/* WARNING: Removing unreachable block (ram,0x000140ac25d2) */
/* Matched PDB project procedure:
   country_core::systems::audio::decorator_audio::decorator_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/decorator_audio.rs
   Extent: 16439 */

void pdb_140abf7b0(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined *puVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulonglong *puVar19;
  longlong lVar20;
  ulonglong *puVar21;
  longlong lStack_258;
  undefined8 uStack_250;
  longlong lStack_160;
  byte *pbStack_158;
  ulonglong uStack_150;
  undefined1 uStack_139;
  ulonglong *puStack_138;
  undefined8 uStack_130;
  undefined8 auStack_128 [6];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong lStack_b0;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  cVar8 = pdb_140e94b40();
  if (cVar8 == '\0') {
    lStack_258 = 0;
  }
  else {
    puVar17 = &UNK_14304c493;
    lVar20 = 0x45;
    uVar14 = 0x45;
    lStack_b0 = param_1;
    lVar9 = pdb_140ac7c70(&UNK_14304c493);
    if (lVar9 == 1) {
      if (0x45 < uVar14) {
        pdb_142dc8070(&UNK_14304c493,0x45,0,uVar14,&UNK_14304c5a0);
        pdb_142dc7e2a(1,0x1e);
LAB_140ac2ca5:
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      puVar17 = &UNK_14304c493;
      uVar10 = pdb_140ac7c70(&UNK_14304c493);
      if ((uVar10 & 1) != 0) {
        if (0x45 < uVar14 + 2) {
          pdb_142dc8070(&UNK_14304c493,0x45,uVar14 + 2,0x45,&UNK_14304c5b8);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar20 = 0x43 - uVar14;
        puVar17 = &UNK_14304c495 + uVar14;
      }
    }
    puVar11 = &UNK_14304b9f9;
    puVar18 = &UNK_14304b9c1;
    do {
      pbVar1 = puVar11 + -1;
      uVar13 = (uint)(char)*pbVar1;
      if ((int)uVar13 < 0) {
        bVar5 = puVar11[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar11[-3];
          if ((char)bVar6 < -0x40) {
            pbVar2 = puVar11 + -4;
            puVar11 = puVar11 + -4;
            uVar13 = bVar6 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar11 = puVar11 + -3;
            uVar13 = bVar6 & 0xf;
          }
          uVar13 = bVar5 & 0x3f | uVar13 << 6;
        }
        else {
          puVar11 = puVar11 + -2;
          uVar13 = bVar5 & 0x1f;
        }
        uVar14 = (ulonglong)(uVar13 << 6);
        uVar13 = (uint)(*pbVar1 & 0x3f) | uVar13 << 6;
        if (uVar13 != 0x5c) goto LAB_140abf909;
LAB_140abf925:
        if (puVar11 + -0x14304b9c0 < (undefined *)0x39) {
          lVar9 = 0x37 - (longlong)(puVar11 + -0x14304b9c1);
          puVar18 = puVar11 + 1;
          goto LAB_140abf948;
        }
        pdb_142dc8070(&UNK_14304b9c1,0x38,puVar11 + -0x14304b9c0,0x38,&UNK_14304c580);
        pdb_142dc7e2a(1,0x1c);
        goto LAB_140ac2ca5;
      }
      puVar11 = puVar11 + -1;
      if (uVar13 == 0x5c) goto LAB_140abf925;
LAB_140abf909:
      if (uVar13 == 0x2f) goto LAB_140abf925;
    } while (puVar11 != &UNK_14304b9c1);
    lVar9 = 0x38;
LAB_140abf948:
    plVar12 = (longlong *)pdb_140e97000();
    if ((char)plVar12[0xd] != '\x01') {
      uVar14 = 0;
      plVar12 = (longlong *)pdb_142d8ec20(plVar12);
      if (plVar12 == (longlong *)0x0) {
LAB_140ac2909:
        pdb_142dc7890(&UNK_143326860);
        auStack_128[0] = CONCAT44(uStack_d4,uStack_d8);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14304c468,0x2b,auStack_128,&UNK_14304c448,&UNK_14304bc28);
      }
    }
    if (*plVar12 != 0) goto LAB_140ac2778;
    *plVar12 = -1;
    puStack_138 = (ulonglong *)plVar12;
    uStack_250 = pdb_140e94f10(plVar12 + 1,puVar17,lVar20,puVar18,lVar9,1,0);
    *puStack_138 = *puStack_138 + 1;
    lStack_258 = 1;
  }
  lStack_160 = 0;
  pbStack_158 = (byte *)0x4;
  uStack_150 = 0;
  puStack_138 = (ulonglong *)*param_2;
  lVar9 = param_2[1];
  uVar14 = *puStack_138;
  uVar16 = 0;
  uVar10 = uVar14 - *(ulonglong *)(lVar9 + 0x18);
  if (uVar14 < *(ulonglong *)(lVar9 + 0x18)) {
    uVar10 = uVar16;
  }
  uVar15 = uVar14 - *(ulonglong *)(lVar9 + 0x38);
  if (uVar14 < *(ulonglong *)(lVar9 + 0x38)) {
    uVar15 = uVar16;
  }
  puVar19 = (ulonglong *)(uVar10 * 0x30 + *(longlong *)(lVar9 + 8));
  uVar14 = *(ulonglong *)(lVar9 + 0x10) - uVar10;
  if (*(ulonglong *)(lVar9 + 0x10) < uVar10) {
    puVar19 = (ulonglong *)0x8;
    uVar14 = uVar16;
  }
  puVar21 = (ulonglong *)(uVar15 * 0x30 + *(longlong *)(lVar9 + 0x28));
  uVar10 = *(ulonglong *)(lVar9 + 0x30) - uVar15;
  if (*(ulonglong *)(lVar9 + 0x30) < uVar15) {
    puVar21 = (ulonglong *)0x8;
    uVar10 = uVar16;
  }
  *puStack_138 = (*(longlong *)(lVar9 + 0x40) - uVar10) - uVar14;
  uStack_f0 = *param_3;
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lStack_b0 = *param_4;
  puStack_e8 = (undefined4 *)param_4[2];
  uStack_f8 = *param_5;
  uStack_130 = param_5[1];
  lVar9 = lStack_b0 + 0x460;
  lVar20 = lStack_b0 + 0x4d0;
  lVar3 = lStack_b0 + 0x498;
  lVar4 = lStack_b0 + 0x150;
  if (((puVar19 != (ulonglong *)0x0) && (puVar19 != puVar19 + uVar14 * 6)) ||
     ((puVar21 != (ulonglong *)0x0 && (puVar19 = puVar21, puVar21 != puVar21 + uVar10 * 6)))) {
    *puStack_138 = *puStack_138 + 1;
    lVar9 = *puVar19 - 8;
    if (*puVar19 < 8) {
      lVar9 = 3;
    }
                    /* WARNING: Could not recover jumptable at 0x000140abfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14304c824 + *(int *)(&UNK_14304c824 + lVar9 * 4)))();
    return;
  }
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x38);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x70);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0xa8);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lVar4);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0xe0);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x118);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x188);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x268);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x2a0);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x2d8);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x3f0);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x310);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x348);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x380);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x3b8);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lStack_b0 + 0x428);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lVar9);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lVar3);
  *puStack_e8 = uStack_a4;
  pdb_140a87f70(lVar20);
  puStack_e0 = &uStack_139;
  do {
    lStack_b0 = lStack_b0 + 0x1c0;
    uVar14 = 0;
    while (uVar14 < 3) {
      *puStack_e8 = uStack_a4;
      lVar9 = uVar14 * 0x38 + lStack_b0;
      if (uVar14 < uStack_150) {
        uVar10 = *(ulonglong *)(lVar9 + 0x28);
        if (*(ulonglong *)(lVar9 + 0x10) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar10,*(ulonglong *)(lVar9 + 0x10),&UNK_143043a80);
        }
        uStack_d8 = *(undefined4 *)(pbStack_158 + uVar14 * 0x10 + 0xc);
        puStack_e0 = *(undefined1 **)(pbStack_158 + uVar14 * 0x10 + 4);
        pdb_140a8e190(uVar10 * 0x30 + *(longlong *)(lVar9 + 8),&puStack_e0);
        pdb_140a87e10(lVar9);
        uVar14 = uVar14 + 1;
      }
      else {
        pdb_140a87f70(lVar9);
        uVar14 = uVar14 + 1;
      }
    }
    uVar14 = 0;
    if (lStack_160 != 0) {
      uVar14 = lStack_160 << 4;
      pub_1406abac0(pbStack_158,uVar14,4);
    }
    if (lStack_258 == 0) {
      return;
    }
    plVar12 = (longlong *)pdb_140e97000();
    if ((char)plVar12[0xd] != '\x01') {
      uVar14 = 0;
      plVar12 = (longlong *)pdb_142d8ec20(plVar12);
      if (plVar12 == (longlong *)0x0) goto LAB_140ac2909;
    }
    if (*plVar12 == 0) {
      *plVar12 = -1;
      puStack_138 = (ulonglong *)plVar12;
      pdb_140e95370(plVar12 + 1,uStack_250);
      *puStack_138 = *puStack_138 + 1;
      return;
    }
LAB_140ac2778:
    pdb_142dc8090(&UNK_143326a50);
    if (uVar14 < 0x15) {
      pdb_14151bd50();
    }
    else {
      pdb_140c76cb0();
    }
  } while( true );
}

