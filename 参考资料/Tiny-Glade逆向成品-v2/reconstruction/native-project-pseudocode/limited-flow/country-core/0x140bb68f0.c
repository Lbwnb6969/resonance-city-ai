// VA 0x140bb68f0, PDB extent 5287 bytes
// country_core::systems::audio::terrain_audio::terrain_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/terrain_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::terrain_audio::terrain_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/terrain_audio.rs
   Extent: 5287 */

void pdb_140bb68f0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined *puVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  char *pcVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined8 uStack_188;
  undefined auStack_168 [56];
  longlong *plStack_130;
  longlong *plStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 *puStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong lStack_d0;
  char cStack_c1;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  cStack_c1 = pdb_140e94b40();
  if (cStack_c1 == '\0') goto LAB_140bb6b0e;
  puVar17 = (ulonglong *)&UNK_143061e89;
  puVar19 = (undefined8 *)0x41;
  uVar12 = 0x41;
  lVar6 = pdb_140bb9660(&UNK_143061e89);
  if (lVar6 == 1) {
    if (0x41 < uVar12) {
LAB_140bb777b:
      pdb_142dc8070(&UNK_143061e89,0x41,0);
LAB_140bb779b:
      pdb_142dc8070(&UNK_143061e89,0x41);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar17 = (ulonglong *)&UNK_143061e89;
    uVar7 = pdb_140bb9660(&UNK_143061e89);
    if ((uVar7 & 1) != 0) {
      if (0x41 < uVar12 + 2) goto LAB_140bb779b;
      puVar19 = (undefined8 *)(0x3f - uVar12);
      puVar17 = (ulonglong *)(&UNK_143061e8b + uVar12);
    }
  }
  puVar8 = &UNK_14306187a;
  puVar18 = &UNK_143061844;
  do {
    pbVar1 = puVar8 + -1;
    uVar11 = (uint)(char)*pbVar1;
    plStack_120 = param_1;
    if ((int)uVar11 < 0) {
      bVar3 = puVar8[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar8[-3];
        if ((char)bVar4 < -0x40) {
          pbVar2 = puVar8 + -4;
          puVar8 = puVar8 + -4;
          uVar11 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar8 = puVar8 + -3;
          uVar11 = bVar4 & 0xf;
        }
        uVar11 = bVar3 & 0x3f | uVar11 << 6;
      }
      else {
        puVar8 = puVar8 + -2;
        uVar11 = bVar3 & 0x1f;
      }
      uVar11 = (uint)(*pbVar1 & 0x3f) | uVar11 << 6;
      if (uVar11 != 0x5c) goto LAB_140bb6a69;
LAB_140bb6a85:
      if ((undefined *)0x36 < puVar8 + -0x143061843) {
        pdb_142dc8070(&UNK_143061844,0x36,puVar8 + -0x143061843,0x36,&UNK_143061f68);
        goto LAB_140bb777b;
      }
      puVar14 = (undefined8 *)(0x35 - (longlong)(puVar8 + -0x143061844));
      puVar18 = puVar8 + 1;
      goto LAB_140bb6aa8;
    }
    puVar8 = puVar8 + -1;
    if (uVar11 == 0x5c) goto LAB_140bb6a85;
LAB_140bb6a69:
    if (uVar11 == 0x2f) goto LAB_140bb6a85;
  } while (puVar8 != &UNK_143061844);
  puVar14 = (undefined8 *)0x36;
LAB_140bb6aa8:
  plVar9 = (longlong *)pdb_140e97000();
  if ((char)plVar9[0xd] != '\x01') goto LAB_140bb7622;
  do {
    if (*plVar9 == 0) {
      *plVar9 = -1;
      plStack_130 = plVar9;
      uStack_188 = pdb_140e94f10(plVar9 + 1,puVar17,puVar19,puVar18,puVar14,1,0);
      *plStack_130 = *plStack_130 + 1;
      param_1 = plStack_120;
LAB_140bb6b0e:
      fVar20 = _DAT_142e36f28;
      if (*(char *)*param_4 != '\t') {
        fVar20 = *(float *)(*param_5 + 0x1c) / _DAT_142f3e554;
      }
      pcVar15 = "";
      if (*(char *)*param_6 != '\0') {
        pcVar15 = (char *)*param_6 + 4;
      }
      uStack_d8 = *(undefined4 *)(pcVar15 + 8);
      uStack_e0 = *(undefined8 *)pcVar15;
      puVar17 = (ulonglong *)*param_3;
      lVar6 = param_3[1];
      uVar12 = *puVar17;
      uVar13 = 0;
      uVar7 = uVar12 - *(ulonglong *)(lVar6 + 0x18);
      if (uVar12 < *(ulonglong *)(lVar6 + 0x18)) {
        uVar7 = uVar13;
      }
      uVar16 = uVar12 - *(ulonglong *)(lVar6 + 0x38);
      if (uVar12 < *(ulonglong *)(lVar6 + 0x38)) {
        uVar16 = uVar13;
      }
      param_3 = (undefined8 *)(uVar7 * 0x28 + *(longlong *)(lVar6 + 8));
      uVar12 = *(ulonglong *)(lVar6 + 0x10) - uVar7;
      if (*(ulonglong *)(lVar6 + 0x10) < uVar7) {
        param_3 = (undefined8 *)0x8;
        uVar12 = uVar13;
      }
      puVar14 = (undefined8 *)(uVar16 * 0x28 + *(longlong *)(lVar6 + 0x28));
      uVar7 = *(ulonglong *)(lVar6 + 0x30) - uVar16;
      if (*(ulonglong *)(lVar6 + 0x30) < uVar16) {
        puVar14 = (undefined8 *)0x8;
        uVar7 = uVar13;
      }
      *puVar17 = (*(longlong *)(lVar6 + 0x40) - uVar7) - uVar12;
      plStack_120 = param_3 + uVar12 * 5;
      plStack_130 = (longlong *)*param_1;
      uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      lStack_d0 = *param_2;
      puStack_e8 = (undefined4 *)param_2[2];
      lVar6 = lStack_d0 + 0xc0;
      lVar10 = lStack_d0 + 0x40;
      param_4 = (undefined8 *)&UNK_1430620b4;
      if (((param_3 != (undefined8 *)0x0) && (puVar19 = param_3, param_3 != plStack_120)) ||
         ((puVar14 != (undefined8 *)0x0 && (puVar19 = puVar14, puVar14 != puVar14 + uVar7 * 5)))) {
        *puVar17 = *puVar17 + 1;
                    /* WARNING: Could not recover jumptable at 0x000140bb6cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1430620b4 + *(int *)(&UNK_1430620b4 + (ulonglong)*(uint *)(puVar19 + 1) * 4)
                  ))();
        return;
      }
      *puStack_e8 = uStack_d4;
      uStack_118 = uStack_e0;
      uStack_110 = uStack_d8;
      if (*(char *)(lStack_d0 + 0xb8) == '\0') {
        pdb_140a87f70(lStack_d0 + 0x80);
      }
      else {
        pdb_140a87e10();
        uVar12 = *(ulonglong *)(lStack_d0 + 0xa8);
        if (*(ulonglong *)(lStack_d0 + 0x90) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,*(ulonglong *)(lStack_d0 + 0x90),&UNK_143043a80);
        }
        pdb_140a8e730(uVar12 * 0x30 + *(longlong *)(lStack_d0 + 0x88),&UNK_143061800,0xd,fVar20);
        uVar12 = *(ulonglong *)(lStack_d0 + 0xa8);
        if (*(ulonglong *)(lStack_d0 + 0x90) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,*(ulonglong *)(lStack_d0 + 0x90),&UNK_143043a80);
        }
        pdb_140a8e190(uVar12 * 0x30 + *(longlong *)(lStack_d0 + 0x88),&uStack_118);
      }
      *(undefined1 *)(lStack_d0 + 0xb8) = 0;
      *puStack_e8 = uStack_d4;
      uStack_110 = uStack_d8;
      uStack_118 = uStack_e0;
      if (*(char *)(lStack_d0 + 0x78) == '\0') {
        pdb_140a87f70(lVar10);
      }
      else {
        pdb_140a87e10(lVar10);
        uVar12 = *(ulonglong *)(lStack_d0 + 0x68);
        if (*(ulonglong *)(lStack_d0 + 0x50) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,*(ulonglong *)(lStack_d0 + 0x50),&UNK_143043a80);
        }
        pdb_140a8e730(uVar12 * 0x30 + *(longlong *)(lStack_d0 + 0x48),&UNK_143061800,0xd,0);
        uVar12 = *(ulonglong *)(lStack_d0 + 0x68);
        if (*(ulonglong *)(lStack_d0 + 0x50) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,*(ulonglong *)(lStack_d0 + 0x50),&UNK_143043a80);
        }
        pdb_140a8e190(uVar12 * 0x30 + *(longlong *)(lStack_d0 + 0x48),&uStack_118);
      }
      *(undefined1 *)(lStack_d0 + 0x78) = 0;
      *puStack_e8 = uStack_d4;
      uStack_110 = uStack_d8;
      uStack_118 = uStack_e0;
      if (*(char *)(lStack_d0 + 0x38) == '\0') {
        pdb_140a87f70();
      }
      else {
        pdb_140a87e10();
        uVar12 = *(ulonglong *)(lStack_d0 + 0x28);
        if (*(ulonglong *)(lStack_d0 + 0x10) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,*(ulonglong *)(lStack_d0 + 0x10),&UNK_143043a80);
        }
        pdb_140a8e730(uVar12 * 0x30 + *(longlong *)(lStack_d0 + 8),&UNK_143061800,0xd,0);
        uVar12 = *(ulonglong *)(lStack_d0 + 0x28);
        if (*(ulonglong *)(lStack_d0 + 0x10) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,*(ulonglong *)(lStack_d0 + 0x10),&UNK_143043a80);
        }
        pdb_140a8e190(uVar12 * 0x30 + *(longlong *)(lStack_d0 + 8),&uStack_118);
      }
      *(undefined1 *)(lStack_d0 + 0x38) = 0;
      *puStack_e8 = uStack_d4;
      if (*(char *)(lStack_d0 + 0xf8) == '\0') {
        pdb_140a87f70(lVar6);
      }
      else {
        pdb_140a87e10(lVar6);
        uVar12 = *(ulonglong *)(lStack_d0 + 0xe8);
        if (*(ulonglong *)(lStack_d0 + 0xd0) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,*(ulonglong *)(lStack_d0 + 0xd0),&UNK_143043a80);
        }
        pdb_140a8e730(uVar12 * 0x30 + *(longlong *)(lStack_d0 + 200),&UNK_143061800,0xd,0);
        uVar12 = *(ulonglong *)(lStack_d0 + 0xe8);
        if (*(ulonglong *)(lStack_d0 + 0xd0) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,*(ulonglong *)(lStack_d0 + 0xd0),&UNK_143043a80);
        }
        pdb_140a8e190(uVar12 * 0x30 + *(longlong *)(lStack_d0 + 200),&uStack_e0);
      }
      *(undefined1 *)(lStack_d0 + 0xf8) = 0;
      if (cStack_c1 == '\0') {
        return;
      }
      plVar9 = (longlong *)pdb_140e97000();
      if (((char)plVar9[0xd] != '\x01') &&
         (plVar9 = (longlong *)pdb_142d8ec20(plVar9,0), plVar9 == (longlong *)0x0)) break;
      puVar18 = auStack_168;
      puVar19 = param_3;
      if (*plVar9 == 0) {
        *plVar9 = -1;
        plStack_120 = plVar9;
        pdb_140e95370(plVar9 + 1,uStack_188);
        *plStack_120 = *plStack_120 + 1;
        return;
      }
    }
    plVar9 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140bb7622:
    plVar9 = (longlong *)pdb_142d8ec20(plVar9,0);
  } while (plVar9 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
  pdb_142dc7e2a(1,0x1d);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

