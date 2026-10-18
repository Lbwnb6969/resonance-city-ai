// VA 0x140ab6410, PDB extent 2993 bytes
// country_core::systems::wall::ui_draw_wall::ui_draw_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/ui_draw_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::ui_draw_wall::ui_draw_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/ui_draw_wall.rs
   Extent: 2993 */

void pdb_140ab6410(undefined8 *param_1,char *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8,
                  longlong *param_9,longlong *param_10,undefined8 *param_11,undefined8 *param_12,
                  undefined8 *param_13,longlong *param_14,longlong *param_15,longlong *param_16)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  longlong lVar7;
  code *pcVar8;
  float fVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  byte *pbVar13;
  char *pcVar14;
  int *piVar15;
  char *pcVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  char *pcVar21;
  longlong *plVar22;
  float fVar23;
  float fVar24;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  char *pcStack_1a0;
  byte *pbStack_198;
  ulonglong uStack_190;
  longlong lStack_188;
  longlong lStack_180;
  undefined4 *puStack_178;
  undefined8 uStack_170;
  float *pfStack_168;
  code *pcStack_160;
  ulonglong uStack_158;
  byte *pbStack_150;
  ulonglong uStack_148;
  float *pfStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_120;
  int *piStack_108;
  char *pcStack_100;
  float *pfStack_f8;
  byte *pbStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  char *pcStack_d8;
  undefined4 *puStack_d0;
  char *pcStack_c8;
  undefined4 uStack_bc;
  longlong *plStack_b8;
  longlong *plStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  piVar15 = (int *)*param_11;
  lVar4 = param_11[4];
  puVar5 = (undefined4 *)param_11[6];
  uVar3 = *(undefined4 *)((longlong)param_11 + 0x3c);
  pcStack_c8 = (char *)param_11[8];
  puStack_d0 = (undefined4 *)param_11[10];
  uStack_bc = *(undefined4 *)((longlong)param_11 + 0x5c);
  lStack_188 = *param_16;
  uStack_1e8 = (undefined4)param_16[8];
  uStack_1e4 = *(undefined4 *)((longlong)param_16 + 0x44);
  uStack_1e0 = (undefined4)param_16[9];
  uStack_1dc = *(undefined4 *)((longlong)param_16 + 0x4c);
  uStack_1d8 = (undefined4)param_16[10];
  uStack_1d4 = *(undefined4 *)((longlong)param_16 + 0x54);
  uStack_1d0 = (undefined4)param_16[0xb];
  uStack_1cc = *(undefined4 *)((longlong)param_16 + 0x5c);
  uStack_1c8 = (undefined4)param_16[0xc];
  uStack_1c4 = *(undefined4 *)((longlong)param_16 + 100);
  uStack_1c0 = (undefined4)param_16[0xd];
  uStack_1bc = *(undefined4 *)((longlong)param_16 + 0x6c);
  uStack_1b8 = (undefined4)param_16[0xe];
  uStack_1b4 = *(undefined4 *)((longlong)param_16 + 0x74);
  uStack_1b0 = (undefined4)param_16[0xf];
  uStack_1ac = *(undefined4 *)((longlong)param_16 + 0x7c);
  puStack_178 = (undefined4 *)param_16[2];
  uStack_dc = *(undefined4 *)((longlong)param_16 + 0x1c);
  lStack_180 = param_16[4];
  pcVar6 = (char *)*param_1;
  if (*pcVar6 == '\x0f') {
    uVar18 = *param_8;
    pcVar16 = &UNK_14304a660;
    uVar19 = 6;
  }
  else {
    if (*pcVar6 != '\x01') {
      return;
    }
    if (pcVar6[1] != '\0') {
      return;
    }
    uVar18 = *param_8;
    pcVar16 = &UNK_14304a666;
    uVar19 = 4;
  }
  uStack_120 = 0;
  puStack_138 = (undefined *)((ulonglong)puStack_138 & 0xffffffff00000000);
  pbStack_150 = (byte *)((ulonglong)pbStack_150 & 0xffffffff00000000);
  pfStack_168 = (float *)((ulonglong)pfStack_168 & 0xffffffff00000000);
  plStack_b8 = param_4;
  plStack_b0 = param_3;
  pcStack_a8 = param_2;
  lVar12 = pdb_1408ffe50(uVar18,uStack_1d8,uVar19,1,3,&pfStack_168);
  pcVar21 = (char *)*param_6;
  pcStack_100 = pcVar21 + 4;
  pcVar14 = "";
  if (*pcVar21 != '\0') {
    pcVar14 = pcStack_100;
  }
  piStack_108 = piVar15 + 1;
  pcStack_d8 = pcVar16;
  if (*piVar15 == 1) {
    cVar10 = pdb_140df1700();
    if (cVar10 != '\0') goto LAB_140ab6618;
LAB_140ab663b:
    *puVar5 = uVar3;
    lVar17 = *(longlong *)(lVar4 + 0x30);
    uVar18 = *(undefined8 *)(lVar4 + 0x40);
    if (lVar17 == *(longlong *)(lVar4 + 0x20)) {
      pdb_142d7e8a0(lVar4 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + lVar17 * 8) = uVar18;
    *(longlong *)(lVar4 + 0x30) = lVar17 + 1;
    *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
    if (*(char *)(lVar12 + 0x18) != '\0') goto LAB_140ab6681;
LAB_140ab6bad:
    pbVar13 = *(byte **)pcStack_a8;
    piVar15 = (int *)(&UNK_14304aae8 + *(int *)(&UNK_14304aae8 + (ulonglong)*pbVar13 * 4));
    plVar20 = plStack_b0;
    pcVar21 = pcStack_a8;
    plVar22 = plStack_b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*pbVar13) {
    case 0:
      goto LAB_140ab6e61;
    case 1:
      goto code_r0x000140ab6bd9;
    case 2:
code_r0x000140ab6cbb:
      *(undefined4 *)plVar22[2] = *(undefined4 *)((longlong)plVar22 + 0x1c);
      lVar4 = *plVar22;
      lVar12 = *(longlong *)(lVar4 + 0x30);
      uVar18 = *(undefined8 *)(lVar4 + 0x40);
      if (lVar12 == *(longlong *)(lVar4 + 0x20)) {
        pdb_142d7e8a0();
      }
      *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + lVar12 * 8) = uVar18;
      *(longlong *)(lVar4 + 0x30) = lVar12 + 1;
      *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
      if (SBORROW8(0,*(longlong *)*param_15)) {
        return;
      }
      lVar4 = ((longlong *)*param_15)[0x10];
      *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
      lVar12 = *param_14;
      lVar17 = *(longlong *)(lVar12 + 0x30);
      uVar18 = *(undefined8 *)(lVar12 + 0x40);
      if (lVar17 == *(longlong *)(lVar12 + 0x20)) {
        pdb_142d7e830(lVar12 + 0x20);
      }
      lVar7 = *(longlong *)(lVar12 + 0x28);
      *(undefined8 *)(lVar7 + lVar17 * 0x18) = uVar18;
      *(longlong *)(lVar7 + 8 + lVar17 * 0x18) = lVar4;
      *(undefined1 *)(lVar7 + 0x10 + lVar17 * 0x18) = 0;
      break;
    case 3:
code_r0x000140ab6d4f:
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      lVar4 = *param_5;
      lVar12 = *(longlong *)(lVar4 + 0x30);
      uVar18 = *(undefined8 *)(lVar4 + 0x40);
      if (lVar12 == *(longlong *)(lVar4 + 0x20)) {
        pdb_142d7e980(lVar4 + 0x20);
      }
      lVar17 = *(longlong *)(lVar4 + 0x28);
      *(undefined8 *)(lVar17 + lVar12 * 0x10) = uVar18;
      *(undefined1 *)(lVar17 + 8 + lVar12 * 0x10) = 1;
      *(longlong *)(lVar4 + 0x30) = lVar12 + 1;
      *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      lVar4 = *param_7;
      lVar12 = *(longlong *)(lVar4 + 0x30);
      uVar18 = *(undefined8 *)(lVar4 + 0x40);
      if (lVar12 == *(longlong *)(lVar4 + 0x20)) {
        pdb_142d7e8a0(lVar4 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + lVar12 * 8) = uVar18;
      *(longlong *)(lVar4 + 0x30) = lVar12 + 1;
      *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
      **(undefined4 **)(pcVar21 + 0x10) = *(undefined4 *)(pcVar21 + 0x1c);
      *pbVar13 = 0;
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      *(undefined1 *)(*param_9 + 8) = 1;
      if (SBORROW8(0,*(longlong *)*param_15)) {
        return;
      }
      lVar4 = ((longlong *)*param_15)[0x10];
      *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
      lVar12 = *param_14;
      lVar17 = *(longlong *)(lVar12 + 0x30);
      uVar18 = *(undefined8 *)(lVar12 + 0x40);
      if (lVar17 == *(longlong *)(lVar12 + 0x20)) {
        pdb_142d7e830(lVar12 + 0x20);
      }
      lVar7 = *(longlong *)(lVar12 + 0x28);
      *(undefined8 *)(lVar7 + lVar17 * 0x18) = uVar18;
      *(longlong *)(lVar7 + 8 + lVar17 * 0x18) = lVar4;
      *(undefined1 *)(lVar7 + 0x10 + lVar17 * 0x18) = 1;
      break;
    case 4:
code_r0x000140ab7929:
                    /* WARNING: Could not recover jumptable at 0x000140ab7937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14304aaf8 + *(int *)(&UNK_14304aaf8 + (longlong)pcVar16 * 4)))
                (&UNK_14304aae8,&UNK_14304aaf8 + *(int *)(&UNK_14304aaf8 + (longlong)pcVar16 * 4));
      return;
    case 5:
code_r0x000140ab798d:
      piVar15 = (int *)(ulonglong)((int)piVar15 + 0x48000000);
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(piVar15 + 2) + 0x18))(*(undefined8 *)piVar15);
      return;
    case 6:
code_r0x000140ab795b:
      *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
      goto pdb_140f679a0;
    case 7:
code_r0x000140ab7974:
      *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
      goto pdb_140f679a0;
    case 8:
code_r0x000140ab7942:
      piVar15 = (int *)(ulonglong)((int)piVar15 + 0x48000000);
      goto pdb_140f679a0;
    case 9:
code_r0x000140ab79a6:
      uVar11 = (int)piVar15 + *piVar15;
      piVar15 = (int *)(ulonglong)uVar11;
      *(char *)piVar15 = (char)*piVar15 + (char)uVar11;
      goto pdb_140f679a0;
    }
    *(longlong *)(lVar12 + 0x30) = lVar17 + 1;
  }
  else {
    cVar10 = pdb_140def450(piStack_108,*(undefined4 *)pcVar14,*(undefined4 *)(pcVar14 + 8));
    if (cVar10 == '\0') goto LAB_140ab663b;
LAB_140ab6618:
    if (*(char *)(lVar12 + 0x18) == '\0') goto LAB_140ab6bad;
LAB_140ab6681:
    if ((*(char **)(lVar12 + 0x38) == pcStack_d8) && (*(int *)(lVar12 + 0x28) != 2)) {
      pcVar16 = pcVar21 + 4;
      pcVar14 = "";
      if (*pcVar21 != '\0') {
        pcVar14 = pcVar16;
      }
      fVar23 = (float)pdb_1419c1ac0(*param_12,*(undefined4 *)pcVar14,*(undefined4 *)(pcVar14 + 8));
      if (fVar23 < _DAT_142e3787c) {
        pcVar16 = "";
        if (*pcVar21 != '\0') {
          pcVar16 = pcVar21 + 4;
        }
        uVar18 = *(undefined8 *)pcVar16;
        fVar1 = *(float *)(pcVar16 + 8);
        pfStack_168 = (float *)CONCAT44(fVar1,(float)uVar18);
        pdb_140df4540(&fStack_e8,&pfStack_168,fVar23);
        fVar9 = fStack_e0;
        fVar24 = fStack_e4;
        fVar23 = fStack_e8;
        uStack_170 = *param_13;
        pcStack_160 = pdb_140f33df0;
        pfStack_168 = &fStack_e8;
        pdb_140f60760(&pcStack_1a0,&UNK_14304a66a,&pfStack_168);
        pbStack_f0 = pbStack_198;
        pcStack_160 = (code *)CONCAT44(pcStack_160._4_4_,fStack_e0);
        pfStack_168 = (float *)CONCAT44(fStack_e4,fStack_e8);
        pdb_14007ee60();
        pfStack_f8 = (float *)pub_1406abab0(0x30,8);
        if (pfStack_f8 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x30);
        }
        fVar23 = (float)uVar18 - fVar23;
        fVar24 = (float)((ulonglong)uVar18 >> 0x20) - fVar24;
        pfStack_f8[0] = 1.4013e-45;
        pfStack_f8[1] = 0.0;
        pfStack_f8[2] = 1.4013e-45;
        pfStack_f8[3] = 0.0;
        *(undefined8 *)(pfStack_f8 + 4) = uVar18;
        pfStack_f8[6] = fVar1;
        *(float **)(pfStack_f8 + 7) = pfStack_168;
        pfStack_f8[9] = pcStack_160._0_4_;
        pfStack_f8[10] = SQRT((fVar1 - fVar9) * (fVar1 - fVar9) + fVar24 * fVar24 + fVar23 * fVar23)
        ;
        pcStack_160 = (code *)&UNK_14304a678;
        pfStack_168 = pfStack_f8;
        if ((longlong)uStack_190 < 0) {
          uVar18 = 0;
LAB_140ab6828:
          pdb_142dc7e2a(uVar18,uStack_190);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if (uStack_190 == 0) {
          pbVar13 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          uVar18 = 1;
          pbVar13 = pub_1406abab0(uStack_190,1);
          if (pbVar13 == (byte *)0x0) goto LAB_140ab6828;
          pub_142e32760(pbVar13,pbStack_f0,uStack_190);
        }
        pcStack_160 = (code *)CONCAT71(pcStack_160._1_7_,2);
        uStack_158 = uStack_190;
        uStack_148 = uStack_190;
        pfStack_140 = pfStack_f8;
        puStack_138 = &UNK_14304a678;
        pbStack_150 = pbVar13;
        pdb_141a88350(uStack_170,&pfStack_168);
        pcVar16 = pcStack_1a0;
        if (pcStack_1a0 != (char *)0x0) {
          pub_1406abac0(pbStack_f0,(ulonglong)pcStack_1a0,1);
          pcVar16 = pcStack_1a0;
        }
      }
    }
    if ((*(char *)(lVar12 + 0x18) != '\x02') || (*(char **)(lVar12 + 0x38) != pcStack_d8))
    goto LAB_140ab6bad;
    bVar2 = *(byte *)(lVar12 + 0x19);
    if (bVar2 < 2) {
      **(undefined4 **)(pcStack_a8 + 0x10) = *(undefined4 *)(pcStack_a8 + 0x1c);
      pcVar16 = pcStack_a8;
      if ((byte)(**(char **)pcStack_a8 - 1U) < 2) {
        **(char **)pcStack_a8 = '\x03';
        pbVar13 = *(byte **)pcStack_a8;
        piVar15 = (int *)(&UNK_14304aae8 + *(int *)(&UNK_14304aae8 + (ulonglong)*pbVar13 * 4));
        plVar20 = plStack_b0;
        pcVar21 = pcStack_a8;
        plVar22 = plStack_b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*pbVar13) {
        case 0:
          goto LAB_140ab6e61;
        case 2:
          goto code_r0x000140ab6cbb;
        case 3:
          goto code_r0x000140ab6d4f;
        case 4:
          goto code_r0x000140ab7929;
        case 5:
          goto code_r0x000140ab798d;
        case 6:
          goto code_r0x000140ab795b;
        case 7:
          goto code_r0x000140ab7974;
        case 8:
          goto code_r0x000140ab7942;
        case 9:
          goto code_r0x000140ab79a6;
        }
        goto code_r0x000140ab6bd9;
      }
      goto LAB_140ab6bad;
    }
    if (bVar2 == 2) goto LAB_140ab6bad;
    if (bVar2 == 3) {
      pcVar14 = "";
      if (*pcVar21 != '\0') {
        pcVar14 = pcStack_100;
      }
      if (*piVar15 == 1) {
        cVar10 = pdb_140df1700();
      }
      else {
        cVar10 = pdb_140def450(piStack_108,*(undefined4 *)pcVar14,*(undefined4 *)(pcVar14 + 8));
      }
      pcVar21 = pcStack_a8;
      plVar20 = plStack_b0;
      plVar22 = plStack_b8;
      if (cVar10 == '\0') {
        *puStack_d0 = uStack_bc;
        lVar4 = *(longlong *)(pcStack_c8 + 0x30);
        uVar18 = *(undefined8 *)(pcStack_c8 + 0x40);
        if (lVar4 == *(longlong *)(pcStack_c8 + 0x20)) {
          pdb_142d7e8a0(pcStack_c8 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(pcStack_c8 + 0x28) + lVar4 * 8) = uVar18;
        *(longlong *)(pcStack_c8 + 0x30) = lVar4 + 1;
        *(longlong *)(pcStack_c8 + 0x40) = *(longlong *)(pcStack_c8 + 0x40) + 1;
        pcVar16 = pcStack_c8;
      }
      else {
        **(undefined4 **)(pcStack_a8 + 0x10) = *(undefined4 *)(pcStack_a8 + 0x1c);
        **(undefined1 **)pcStack_a8 = 1;
      }
      *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
      lVar4 = *param_10;
      lVar12 = *(longlong *)(lVar4 + 0x30);
      uVar18 = *(undefined8 *)(lVar4 + 0x40);
      if (lVar12 == *(longlong *)(lVar4 + 0x20)) {
        pdb_142d7e8a0(lVar4 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + lVar12 * 8) = uVar18;
      *(longlong *)(lVar4 + 0x30) = lVar12 + 1;
      *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
      pbVar13 = *(byte **)pcVar21;
      piVar15 = (int *)(&UNK_14304aae8 + *(int *)(&UNK_14304aae8 + (ulonglong)*pbVar13 * 4));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*pbVar13) {
      case 0:
        goto LAB_140ab6e61;
      case 1:
        goto code_r0x000140ab6bd9;
      case 3:
        goto code_r0x000140ab6d4f;
      case 4:
        goto code_r0x000140ab7929;
      case 5:
        goto code_r0x000140ab798d;
      case 6:
        goto code_r0x000140ab795b;
      case 7:
        goto code_r0x000140ab7974;
      case 8:
        goto code_r0x000140ab7942;
      case 9:
        goto code_r0x000140ab79a6;
      }
      goto code_r0x000140ab6cbb;
    }
    pcVar16 = "";
    if (*pcVar21 != '\0') {
      pcVar16 = pcStack_100;
    }
    if (*piVar15 == 1) {
      cVar10 = pdb_140df1700();
    }
    else {
      cVar10 = pdb_140def450(piStack_108,*(undefined4 *)pcVar16,*(undefined4 *)(pcVar16 + 8));
    }
    pcVar21 = pcStack_a8;
    pcVar16 = pcStack_c8;
    if (cVar10 == '\0') {
      *puStack_d0 = uStack_bc;
      lVar4 = *(longlong *)(pcStack_c8 + 0x30);
      uVar18 = *(undefined8 *)(pcStack_c8 + 0x40);
      if (lVar4 == *(longlong *)(pcStack_c8 + 0x20)) {
        pdb_142d7e8a0(pcStack_c8 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(pcVar16 + 0x28) + lVar4 * 8) = uVar18;
      *(longlong *)(pcVar16 + 0x30) = lVar4 + 1;
      *(longlong *)(pcVar16 + 0x40) = *(longlong *)(pcVar16 + 0x40) + 1;
      **(undefined4 **)(pcVar21 + 0x10) = *(undefined4 *)(pcVar21 + 0x1c);
      pcStack_a8 = pcVar21;
      if (1 < (byte)(**(char **)pcVar21 - 1U)) goto LAB_140ab6bad;
      **(char **)pcVar21 = '\x03';
      pbVar13 = *(byte **)pcVar21;
      piVar15 = (int *)(&UNK_14304aae8 + *(int *)(&UNK_14304aae8 + (ulonglong)*pbVar13 * 4));
      plVar20 = plStack_b0;
      plVar22 = plStack_b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*pbVar13) {
      case 0:
        goto LAB_140ab6e61;
      case 2:
        goto code_r0x000140ab6cbb;
      case 3:
        goto code_r0x000140ab6d4f;
      case 4:
        goto code_r0x000140ab7929;
      case 5:
        goto code_r0x000140ab798d;
      case 6:
        goto code_r0x000140ab795b;
      case 7:
        goto code_r0x000140ab7974;
      case 8:
        goto code_r0x000140ab7942;
      case 9:
        goto code_r0x000140ab79a6;
      }
    }
    else {
      pbVar13 = *(byte **)pcStack_a8;
      bVar2 = ((byte)(*pbVar13 - 1) < 2) * '\x02';
      **(undefined4 **)(pcStack_a8 + 0x10) = *(undefined4 *)(pcStack_a8 + 0x1c);
      *pbVar13 = bVar2;
      pbVar13 = *(byte **)pcStack_a8;
      piVar15 = (int *)(&UNK_14304aae8 + *(int *)(&UNK_14304aae8 + (ulonglong)*pbVar13 * 4));
      pcVar16 = (char *)(ulonglong)bVar2;
      plVar20 = plStack_b0;
      plVar22 = plStack_b8;
      pcStack_a8 = pcVar21;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*pbVar13) {
      case 0:
        goto LAB_140ab6e61;
      case 2:
        goto code_r0x000140ab6cbb;
      case 3:
        goto code_r0x000140ab6d4f;
      case 4:
        goto code_r0x000140ab7929;
      case 5:
        goto code_r0x000140ab798d;
      case 6:
        goto code_r0x000140ab795b;
      case 7:
        goto code_r0x000140ab7974;
      case 8:
        goto code_r0x000140ab7942;
      case 9:
        goto code_r0x000140ab79a6;
      }
    }
code_r0x000140ab6bd9:
    uVar3 = uStack_dc;
    puVar5 = puStack_178;
    lVar12 = lStack_180;
    lVar4 = lStack_188;
    *puStack_178 = uStack_dc;
    pdb_140aa2f60(lStack_188,1,param_15,lStack_180,&uStack_1e8,&UNK_14304a6a8,9);
    *puVar5 = uVar3;
    pcStack_160 = (code *)(lVar12 + 0x90);
    if (*(longlong *)(lVar12 + 0x90) == 0) {
      pcStack_160 = (code *)0x0;
    }
    pfStack_168 = (float *)0x1;
    uStack_158 = 0;
    uStack_130 = 0;
    pdb_1414e0e70(&pfStack_168,lVar4 + 0x30);
    uVar3 = *(undefined4 *)((longlong)plVar20 + 0x1c);
    puVar5 = (undefined4 *)plVar20[2];
    *puVar5 = uVar3;
    lVar4 = *plVar20;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    cVar10 = *pcVar6;
    *puVar5 = uVar3;
    *(bool *)(lVar4 + 0x18) = cVar10 == '\x0f';
    *(undefined4 *)plVar22[2] = *(undefined4 *)((longlong)plVar22 + 0x1c);
    lVar12 = *plVar22;
    lVar4 = *(longlong *)(lVar12 + 0x30);
    uVar18 = *(undefined8 *)(lVar12 + 0x40);
    if (lVar4 == *(longlong *)(lVar12 + 0x20)) {
      pdb_142d7e8a0(lVar12 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar12 + 0x28) + lVar4 * 8) = uVar18;
    *(longlong *)(lVar12 + 0x30) = lVar4 + 1;
  }
  *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
LAB_140ab6e61:
  return;
}

