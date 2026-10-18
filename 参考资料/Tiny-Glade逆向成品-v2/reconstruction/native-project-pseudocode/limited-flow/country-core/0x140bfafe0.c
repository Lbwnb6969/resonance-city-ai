// VA 0x140bfafe0, PDB extent 2993 bytes
// country_core::systems::paths::draw_path::draw_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::paths::draw_path::draw_path
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
   Extent: 2993 */

void pdb_140bfafe0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  float *pfVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  char extraout_AL;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined7 uVar14;
  undefined7 extraout_var;
  char *pcVar13;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 uVar17;
  undefined *puVar18;
  ulonglong uVar19;
  char *pcVar20;
  byte *pbVar21;
  byte bVar22;
  byte bVar23;
  bool bVar24;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  float unaff_XMM6_Da;
  longlong *in_stack_00000040;
  undefined8 *in_stack_00000048;
  byte *in_stack_00000050;
  undefined8 *in_stack_00000058;
  byte *in_stack_00000060;
  undefined8 *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined4 uStack_124;
  float fStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_e0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uVar2 = *in_stack_00000058;
  uStack_b8 = *in_stack_00000078;
  uStack_b0 = in_stack_00000078[1];
  uStack_a8 = in_stack_00000078[2];
  uStack_a0 = in_stack_00000078[3];
  uStack_98 = in_stack_00000078[4];
  uStack_90 = in_stack_00000078[5];
  uStack_88 = in_stack_00000078[6];
  uStack_80 = in_stack_00000078[7];
  uStack_78 = *(undefined4 *)(in_stack_00000078 + 8);
  uStack_74 = *(undefined4 *)((longlong)in_stack_00000078 + 0x44);
  uStack_70 = *(undefined4 *)(in_stack_00000078 + 9);
  uStack_6c = *(undefined4 *)((longlong)in_stack_00000078 + 0x4c);
  uStack_68 = *(undefined4 *)(in_stack_00000078 + 10);
  uStack_64 = *(undefined4 *)((longlong)in_stack_00000078 + 0x54);
  uStack_60 = *(undefined4 *)(in_stack_00000078 + 0xb);
  uStack_5c = *(undefined4 *)((longlong)in_stack_00000078 + 0x5c);
  pcVar20 = (char *)*param_1;
  cVar9 = *pcVar20;
  pfVar3 = (float *)*in_stack_00000048;
  bVar8 = false;
  if (*(char *)*param_2 != '\x01') goto LAB_140bfb0c2;
  switch(cVar9) {
  case '\x02':
  case '\x03':
    unaff_XMM6_Da = *pfVar3;
    bVar8 = true;
    break;
  case '\v':
    unaff_XMM6_Da = pfVar3[1];
    bVar22 = pcVar20[1];
    lVar12 = *(longlong *)(pcVar20 + 8);
    bVar8 = true;
    goto code_r0x000140bfb10e;
  case '\r':
    unaff_XMM6_Da = pfVar3[2];
    goto code_r0x000140bfb12f;
  case '\x0e':
    unaff_XMM6_Da = pfVar3[2] * _DAT_142f95160;
code_r0x000140bfb12f:
    bVar22 = pcVar20[1];
    lVar12 = *(longlong *)(pcVar20 + 8);
    bVar8 = true;
    goto code_r0x000140bfb13b;
  }
LAB_140bfb0c2:
  bVar22 = pcVar20[1];
  lVar12 = *(longlong *)(pcVar20 + 8);
  switch(cVar9) {
  case '\x02':
  case '\x03':
    bVar23 = 0;
    break;
  default:
    goto LAB_140bfb147;
  case '\v':
code_r0x000140bfb10e:
    bVar23 = 4;
    break;
  case '\f':
    bVar23 = 6;
    break;
  case '\r':
  case '\x0e':
code_r0x000140bfb13b:
    bVar23 = 5;
  }
  if (*(char *)*param_2 == '\0') {
LAB_140bfb147:
    bVar23 = bVar22;
    if (cVar9 == '\x04') goto LAB_140bfb1e6;
    if (cVar9 == '\x03') {
      if (2 < lVar12 - 1U) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143067283,0x28,&UNK_1430672b0);
      }
      unaff_XMM6_Da = *pfVar3;
      if (0x7f7fffff < (uint)ABS(unaff_XMM6_Da)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143067213,0x28,&UNK_143067260);
      }
      fStack_110 = 0.0;
      uStack_f8 = 0;
      uStack_e0 = 0;
      puVar18 = &UNK_143067278;
      lVar11 = pdb_1408ffe50(*param_4,&UNK_143067278,0xb,3);
    }
    else {
      if (cVar9 != '\x02') {
        return;
      }
      unaff_XMM6_Da = *pfVar3;
      if (0x7f7fffff < (uint)ABS(unaff_XMM6_Da)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143067213,0x28,&UNK_143067240);
      }
      fStack_110 = 0.0;
      uStack_f8 = 0;
      uStack_e0 = 0;
      puVar18 = &UNK_143067258;
      lVar11 = pdb_1408ffe50(*param_4,&UNK_143067258,4,3);
      lVar12 = 0;
    }
    pcVar20 = "";
    if (**(char **)in_stack_00000050 != '\0') {
      pcVar20 = *(char **)in_stack_00000050 + 4;
    }
    pdb_140defa80(auStack_c8,*(undefined4 *)pcVar20,*(undefined4 *)(pcVar20 + 8),
                  _DAT_142e3c670 * unaff_XMM6_Da);
    uVar17 = 2;
    if ((*(char *)(lVar11 + 0x18) == '\x02') && (*(undefined **)(lVar11 + 0x38) == puVar18)) {
      uVar17 = *(undefined1 *)(lVar11 + 0x19);
    }
    pdb_140bfacd0(in_stack_00000060,uVar17,auStack_c8,uVar2);
    uVar15 = 1;
    bVar8 = true;
    uVar19 = (ulonglong)*(int *)(&UNK_143067964 + (ulonglong)*in_stack_00000060 * 4);
    puVar18 = &UNK_143067964 + uVar19;
    pbVar21 = in_stack_00000050;
    uVar14 = extraout_var;
    cVar9 = extraout_AL;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*in_stack_00000060) {
    case 0:
      goto LAB_140bfbb14;
    case 1:
      goto code_r0x000140bfb3cf;
    case 2:
      goto code_r0x000140bfb479;
    case 3:
      goto code_r0x000140bfb5b9;
    case 4:
      goto code_r0x000140bfb5f4;
    case 5:
      goto code_r0x000140bfb73f;
    case 6:
      goto code_r0x000140bfb92e;
    case 7:
      goto code_r0x000140bfba1c;
    case 8:
      goto code_r0x000140bfb83f;
    default:
      goto code_r0x000143067964;
    }
  }
LAB_140bfb1e6:
  if ((bVar23 & 0xfd) != 0) {
    return;
  }
  if (!bVar8) {
    unaff_XMM6_Da = *(float *)*in_stack_00000070 * _DAT_143020e90;
  }
  if (0x7f7fffff < (uint)ABS(unaff_XMM6_Da)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143067213,0x28,&UNK_1430672c8);
  }
  fStack_110 = 0.0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  puVar18 = &UNK_1430672e0;
  lVar12 = pdb_1408ffe50(*param_4,&UNK_1430672e0,6,7);
  if ((*(char *)(lVar12 + 0x18) == '\x02') && (*(undefined **)(lVar12 + 0x38) == puVar18)) {
    pbVar21 = (byte *)(lVar12 + 0x19);
    lVar12 = 0;
    if (1 < *pbVar21) {
      if (*pbVar21 != 2) {
        bVar24 = (byte)(*in_stack_00000060 - 1) < 2;
        *in_stack_00000060 = bVar24 + 1;
        cVar9 = '\x01';
        lVar12 = 4;
        bVar8 = false;
        switch(bVar24) {
        case false:
          goto code_r0x000140bfb3cf;
        }
        goto code_r0x000140bfb479;
      }
      goto LAB_140bfb294;
    }
    lVar12 = 0;
    bVar22 = ((byte)(*in_stack_00000060 - 1) < 2) * '\x03';
  }
  else {
LAB_140bfb294:
    bVar22 = 0;
  }
  *in_stack_00000060 = bVar22;
  uVar14 = (undefined7)((ulonglong)lVar12 >> 8);
  cVar9 = '\x01';
  lVar12 = 4;
  uVar15 = 0;
  bVar8 = false;
  uVar19 = (ulonglong)*(int *)(&UNK_143067964 + (ulonglong)bVar22 * 4);
  puVar18 = &UNK_143067964 + uVar19;
  pbVar21 = in_stack_00000060;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar22) {
  case 0:
LAB_140bfbb14:
    return;
  case 1:
code_r0x000140bfb3cf:
    uStack_11c = uStack_11c & 0xffffff00;
    fStack_120 = unaff_XMM6_Da;
                    /* WARNING: Could not recover jumptable at 0x000140bfb439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_143067974 + *(int *)(&UNK_143067974 + lVar12 * 4)))
              (&UNK_143067974 + *(int *)(&UNK_143067974 + lVar12 * 4));
    return;
  case 2:
code_r0x000140bfb479:
    if (cVar9 == '\0') {
      return;
    }
    if (bVar8) {
      pcVar4 = *(char **)in_stack_00000050;
      pcVar20 = pcVar4 + 4;
      pcVar13 = "";
      if (*pcVar4 != '\0') {
        pcVar13 = pcVar20;
      }
      pdb_140defa80(&uStack_124,*(undefined4 *)pcVar13,*(undefined4 *)(pcVar13 + 8),unaff_XMM6_Da);
      if (*pcVar4 == '\0') {
        pcVar20 = "";
      }
      fStack_110 = *(float *)(pcVar20 + 4) + _DAT_142e37838;
      uStack_108 = 0;
      uStack_114 = 0;
      *(undefined4 *)in_stack_00000040[2] = *(undefined4 *)((longlong)in_stack_00000040 + 0x1c);
      lVar11 = *in_stack_00000040;
      lVar5 = *(longlong *)(lVar11 + 0x30);
      uVar2 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar5 == *(longlong *)(lVar11 + 0x20)) {
        pdb_142d7ee50(lVar11 + 0x20);
      }
      lVar6 = *(longlong *)(lVar11 + 0x28);
      lVar16 = lVar5 * 0x40;
      *(ulonglong *)(lVar6 + 0x30 + lVar16) = CONCAT44(uStack_f4,uStack_f8);
      puVar1 = (undefined4 *)(lVar6 + 0x20 + lVar16);
      *puVar1 = (undefined4)uStack_108;
      puVar1[1] = uStack_108._4_4_;
      puVar1[2] = uStack_100;
      puVar1[3] = uStack_fc;
      puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar16);
      *puVar1 = uStack_118;
      puVar1[1] = uStack_114;
      puVar1[2] = fStack_110;
      puVar1[3] = uStack_10c;
      puVar1 = (undefined4 *)(lVar6 + lVar16);
      *puVar1 = 0x100;
      puVar1[1] = uStack_124;
      puVar1[2] = fStack_120;
      puVar1[3] = uStack_11c;
      *(undefined8 *)(lVar6 + 0x38 + lVar16) = uVar2;
      *(longlong *)(lVar11 + 0x30) = lVar5 + 1;
      *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
                    /* WARNING: Could not recover jumptable at 0x000140bfb5b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_143067974 + *(int *)(&UNK_143067974 + lVar12 * 4)))
                (&UNK_143067974 + *(int *)(&UNK_143067974 + lVar12 * 4));
      return;
    }
    goto code_r0x000140bfb73f;
  case 3:
code_r0x000140bfb5b9:
  case 4:
    break;
  case 5:
    goto code_r0x000140bfb73f;
  case 6:
code_r0x000140bfb92e:
    pdb_140c0ce00(uVar2,puVar18,pbVar21);
    return;
  case 7:
code_r0x000140bfba1c:
    pdb_140c0df60(uVar15,puVar18,pbVar21);
    return;
  case 8:
code_r0x000140bfb83f:
    pdb_140c0baf0(uVar15,puVar18,pbVar21);
    return;
  default:
code_r0x000143067964:
    uVar10 = (int)CONCAT71(uVar14,0x41) + 0x55fdb93b + (uint)(0xfffffffebcf9869b < uVar19);
    pcVar20 = (char *)(ulonglong)uVar10;
    Ram0000000182d17737 = in_ST0;
    *(unkbyte10 *)pbVar21 = in_ST1;
    cVar9 = (char)uVar10;
    *pcVar20 = *pcVar20 + cVar9;
    *pcVar20 = *pcVar20 + cVar9;
    *pcVar20 = *pcVar20 + cVar9;
    pcVar20[0x3f] = pcVar20[0x3f] + (char)(uVar10 >> 8);
    pcVar7 = (code *)swi(3);
    (*pcVar7)(0xfdfd);
    return;
  }
code_r0x000140bfb5f4:
                    /* WARNING: Could not recover jumptable at 0x000140bfb602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143067974 + *(int *)(&UNK_143067974 + lVar12 * 4)))
            (&UNK_143067974 + *(int *)(&UNK_143067974 + lVar12 * 4));
  return;
code_r0x000140bfb73f:
                    /* WARNING: Could not recover jumptable at 0x000140bfb74d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143067974 + *(int *)(&UNK_143067974 + lVar12 * 4)))
            (&UNK_143067974 + *(int *)(&UNK_143067974 + lVar12 * 4));
  return;
}

