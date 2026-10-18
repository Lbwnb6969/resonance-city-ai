// VA 0x14298a680, PDB extent 1819 bytes
// toolbar::photomode::ui_slider::ui_slider_reset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/ui_slider.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014298c3d5) overlaps instruction at (ram,0x00014298c3d4)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::photomode::ui_slider::ui_slider_reset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/ui_slider.rs
   Extent: 1819 */

void pdb_14298a680(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  code cVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  undefined1 *puVar10;
  char cVar11;
  uint uVar12;
  code *pcVar13;
  int *piVar14;
  longlong lVar15;
  char *pcVar16;
  uint *puVar17;
  longlong lVar18;
  byte *pbVar19;
  undefined7 uVar20;
  byte bVar21;
  ulonglong uVar22;
  code *pcVar23;
  undefined *puVar24;
  code *pcVar25;
  byte bVar26;
  byte bVar30;
  float *unaff_RBX;
  ulonglong uVar27;
  code *pcVar28;
  undefined6 uVar31;
  code *pcVar29;
  undefined1 *puVar32;
  undefined1 *puVar33;
  code *pcVar34;
  ulonglong uVar35;
  code *pcVar36;
  code *pcVar37;
  longlong lVar38;
  code *pcVar39;
  ulonglong uVar40;
  longlong lVar41;
  code *pcVar42;
  undefined2 in_FS;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  float fVar47;
  uint unaff_XMM12_Dc;
  longlong in_stack_00000178;
  longlong in_stack_00000180;
  longlong in_stack_00000190;
  longlong in_stack_00000198;
  undefined8 *in_stack_000001a0;
  undefined8 *in_stack_000001a8;
  undefined1 auStack_158 [32];
  undefined *puStack_138;
  code *pcStack_130;
  undefined4 uStack_124;
  longlong lStack_120;
  longlong lStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  longlong *plStack_f0;
  undefined4 *puStack_e8;
  undefined8 uStack_e0;
  undefined4 *puStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_50;
  
  puVar32 = auStack_158;
  puVar33 = auStack_158;
  puVar3 = (ulonglong *)*param_1;
  lVar38 = param_1[1];
  uVar22 = *puVar3;
  uVar40 = 0;
  uVar27 = uVar22 - *(ulonglong *)(lVar38 + 0x18);
  if (uVar22 < *(ulonglong *)(lVar38 + 0x18)) {
    uVar27 = uVar40;
  }
  uVar35 = uVar22 - *(ulonglong *)(lVar38 + 0x38);
  if (uVar22 < *(ulonglong *)(lVar38 + 0x38)) {
    uVar35 = uVar40;
  }
  pcVar37 = (code *)(uVar27 * 0x10 + *(longlong *)(lVar38 + 8));
  uVar22 = *(ulonglong *)(lVar38 + 0x10) - uVar27;
  if (*(ulonglong *)(lVar38 + 0x10) < uVar27) {
    pcVar37 = (code *)0x8;
    uVar22 = uVar40;
  }
  pcVar28 = (code *)(uVar35 * 0x10 + *(longlong *)(lVar38 + 0x28));
  uVar27 = *(ulonglong *)(lVar38 + 0x30) - uVar35;
  if (*(ulonglong *)(lVar38 + 0x30) < uVar35) {
    pcVar28 = (code *)0x8;
    uVar27 = uVar40;
  }
  *puVar3 = (*(longlong *)(lVar38 + 0x40) - uVar27) - uVar22;
  uVar5 = _DAT_143607fc0;
  fVar47 = _DAT_142e382d4;
  fVar9 = _DAT_142e37890;
  fVar8 = _DAT_142e37830;
  fVar44 = _DAT_142e36f28;
  plStack_f0 = *(longlong **)(param_3 + 8);
  if (plStack_f0 == (longlong *)0x0) {
    plStack_f0 = *(longlong **)(param_3 + 0x10);
  }
  pcVar42 = pcVar37 + uVar22 * 0x10;
  pcVar34 = pcVar28 + uVar27 * 0x10;
  pcStack_130 = (code *)*param_2;
  pcVar36 = (code *)param_2[1];
  uStack_104 = *(undefined4 *)((longlong)param_6 + 0x1c);
  pcStack_d0 = (code *)*param_6;
  puStack_d8 = (undefined4 *)param_6[2];
  uStack_108 = *(undefined4 *)((longlong)param_5 + 0x1c);
  uStack_e0 = *param_5;
  puStack_e8 = (undefined4 *)param_5[2];
  uStack_124 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_f8 = *param_4;
  puStack_100 = (undefined4 *)param_4[2];
  pcVar39 = pcStack_130;
  pcStack_c8 = pcVar34;
  pcStack_c0 = pcVar42;
  uStack_80 = unaff_XMM9_Dc;
  uStack_7c = unaff_XMM9_Dd;
  uStack_78 = unaff_XMM10_Da;
  uStack_74 = unaff_XMM10_Db;
  uStack_50 = unaff_XMM12_Dc;
LAB_14298a810:
  do {
    if ((pcVar37 == (code *)0x0) || (pcVar37 == pcVar42)) {
      if ((pcVar28 == (code *)0x0) || (pcVar28 == pcVar34)) {
        return;
      }
      pcVar29 = pcVar28 + 0x10;
      pcVar13 = (code *)0x0;
    }
    else {
      pcVar13 = pcVar37 + 0x10;
      pcVar29 = pcVar28;
      pcVar28 = pcVar37;
    }
    *puVar3 = *puVar3 + 1;
    uVar4 = *(undefined8 *)pcVar28;
    pcVar28 = pcVar29;
    pcVar37 = pcVar13;
  } while ((((*(ulonglong *)(pcVar36 + 0x10) <= (ulonglong)~(uint)uVar4) ||
            (piVar14 = (int *)((ulonglong)~(uint)uVar4 * 0x18 + *(longlong *)(pcVar36 + 8)),
            piVar14[4] != (int)((ulonglong)uVar4 >> 0x20))) || (*piVar14 == 0)) ||
          ((uVar22 = *(ulonglong *)(piVar14 + 2),
           *(ulonglong *)(pcVar39 + 0x38) <= (uVar22 & 0xffffffff) ||
           ((*(ulonglong *)(*(longlong *)(pcVar39 + 0x28) + (uVar22 >> 6 & 0x3ffffff) * 8) >>
             (uVar22 & 0x3f) & 1) == 0))));
  uVar22 = uVar22 >> 0x20;
  lVar38 = uVar22 * 9;
  if (*(ulonglong *)(pcVar39 + 0x110) <
      *(ulonglong *)(*(longlong *)(pcVar36 + 0x1a0) + 0x40 + uVar22 * 0x48)) {
    lVar18 = *(longlong *)(pcVar36 + 0x1a0) + uVar22 * 0x48;
    lVar38 = *(longlong *)(lVar18 + 0x38);
    uVar22 = *(ulonglong *)(lVar38 + *(ulonglong *)(pcVar39 + 0x110) * 8);
    if (uVar22 == 0) goto LAB_14298a8ce;
    lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + 0x10 + ~uVar22 * 0x30);
  }
  else {
LAB_14298a8ce:
    lVar18 = 0;
  }
  uVar12 = piVar14[1];
  lVar41 = plStack_f0[2];
  if ((ulonglong)(*plStack_f0 - lVar41) < 0x20) {
    puStack_138 = (undefined *)0x1;
    lVar38 = 0x20;
    param_4 = (undefined8 *)0x1;
    pdb_142d7f1b0(plStack_f0,lVar41);
  }
  lVar15 = plStack_f0[1];
  pcVar25 = pdb_1411ae9e0;
  *(code **)(lVar15 + lVar41) = pdb_1411ae9e0;
  *(undefined8 *)(lVar15 + 8 + lVar41) = uVar4;
  *(undefined8 *)(lVar15 + 0x10 + lVar41) = uVar5;
  *(undefined4 *)(lVar15 + 0x18 + lVar41) = 0;
  *(undefined1 *)(lVar15 + 0x1c + lVar41) = 0;
  lVar41 = lVar41 + 0x20;
  plStack_f0[2] = lVar41;
  lVar15 = (ulonglong)*(byte *)(lVar18 + (ulonglong)~uVar12) * 4;
  fVar45 = *(float *)(&UNK_143608d78 + lVar15);
  fVar46 = *(float *)(&UNK_143608d44 + lVar15);
  fVar43 = (float)pdb_140de8220(fVar45,fVar46,*(undefined4 *)(&UNK_143608d10 + lVar15));
  pcVar42 = pcStack_c0;
  pcVar34 = pcStack_c8;
  uVar4 = uStack_f8;
  pcVar39 = pcStack_130;
  fVar46 = fVar46 * fVar43 + (fVar44 - fVar43) * fVar45;
  bVar21 = *(byte *)(lVar18 + (ulonglong)~uVar12);
  pcVar23 = (code *)&UNK_143608de0;
  uVar22 = (ulonglong)*(int *)(&UNK_143608de0 + (ulonglong)bVar21 * 4);
  pcVar16 = &UNK_143608de0 + uVar22;
  cVar11 = (char)pcVar16;
  bVar26 = (byte)pcVar29;
  bVar30 = (byte)((ulonglong)pcVar29 >> 8);
  uVar31 = (undefined6)((ulonglong)pcVar29 >> 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar21) {
  case 0:
    lVar38 = pdb_1406d0830(uStack_f8);
    uVar2 = *(undefined4 *)(lVar38 + 0x1c);
    *puStack_100 = uStack_124;
    pdb_1409aa280(&lStack_120,uVar4);
    lVar38 = CONCAT44(uStack_10c,uStack_110);
    for (lVar18 = lStack_120; pcVar39 = pcStack_130, lVar18 != lStack_118; lVar18 = lVar18 + 0x40) {
      if ((lVar38 != 0) && (lVar18 != 0)) {
        *(undefined4 *)(lVar18 + 0x1c) = uVar2;
      }
      lVar38 = lVar38 + 1;
    }
    goto LAB_14298a810;
  case 1:
    lVar38 = pdb_1406d0830(uStack_f8);
    uVar2 = *(undefined4 *)(lVar38 + 0x20);
    *puStack_100 = uStack_124;
    pdb_1409aa280(&lStack_120,uVar4);
    lVar38 = CONCAT44(uStack_10c,uStack_110);
    for (lVar18 = lStack_120; pcVar39 = pcStack_130, lVar18 != lStack_118; lVar18 = lVar18 + 0x40) {
      if ((lVar38 != 0) && (lVar18 != 0)) {
        *(undefined4 *)(lVar18 + 0x20) = uVar2;
      }
      lVar38 = lVar38 + 1;
    }
    goto LAB_14298a810;
  case 2:
    lVar38 = pdb_1406d0830(uStack_f8);
    uVar2 = *(undefined4 *)(lVar38 + 0x24);
    *puStack_100 = uStack_124;
    pdb_1409aa280(&lStack_120,uVar4);
    lVar38 = CONCAT44(uStack_10c,uStack_110);
    for (lVar18 = lStack_120; pcVar39 = pcStack_130, lVar18 != lStack_118; lVar18 = lVar18 + 0x40) {
      if ((lVar38 != 0) && (lVar18 != 0)) {
        *(undefined4 *)(lVar18 + 0x24) = uVar2;
      }
      lVar38 = lVar38 + 1;
    }
    goto LAB_14298a810;
  case 3:
    *puStack_100 = uStack_124;
    pdb_1409aa280(&lStack_120,uStack_f8);
    lVar38 = CONCAT44(uStack_10c,uStack_110);
    for (lVar18 = lStack_120; pcVar39 = pcStack_130, lVar18 != lStack_118; lVar18 = lVar18 + 0x40) {
      if ((lVar38 != 0) && (lVar18 != 0)) {
        *(float *)(lVar18 + 0x30) = fVar46;
      }
      lVar38 = lVar38 + 1;
    }
    goto LAB_14298a810;
  case 4:
    *puStack_100 = uStack_124;
    pdb_1409aa280(&lStack_120,uStack_f8);
    lVar38 = CONCAT44(uStack_10c,uStack_110);
    for (lVar18 = lStack_120; pcVar39 = pcStack_130, lVar18 != lStack_118; lVar18 = lVar18 + 0x40) {
      if ((lVar38 != 0) && (lVar18 != 0)) {
        *(float *)(lVar18 + 0x38) = fVar46;
      }
      lVar38 = lVar38 + 1;
    }
    goto LAB_14298a810;
  case 5:
    *puStack_100 = uStack_124;
    pdb_1409aa280(&lStack_120,uStack_f8);
    lVar38 = CONCAT44(uStack_10c,uStack_110);
    for (lVar18 = lStack_120; pcVar39 = pcStack_130, lVar18 != lStack_118; lVar18 = lVar18 + 0x40) {
      if ((lVar38 != 0) && (lVar18 != 0)) {
        *(float *)(lVar18 + 0x34) = fVar46;
      }
      lVar38 = lVar38 + 1;
    }
    goto LAB_14298a810;
  case 6:
    *puStack_e8 = uStack_108;
    lVar38 = pdb_140a36600(uStack_e0);
    *(undefined4 *)(lVar38 + 8) = *(undefined4 *)(lVar38 + 0x14);
    pcVar39 = pcStack_130;
    goto LAB_14298a810;
  case 7:
    *puStack_e8 = uStack_108;
    puVar17 = (uint *)pdb_140a368d0(uStack_e0);
    fVar45 = fVar9;
    if (fVar9 <= fVar46) {
      fVar45 = fVar46;
    }
    fVar46 = fVar8;
    if (fVar45 <= fVar8) {
      fVar46 = fVar45;
    }
    uVar12 = pub_142e32a10(fVar46 + fVar47);
    puVar17[6] = uVar12;
    pcVar39 = pcStack_130;
    if (*puVar17 < 2) {
      *puVar17 = 3;
      *(undefined8 *)(puVar17 + 1) = *(undefined8 *)(puVar17 + 4);
    }
    goto LAB_14298a810;
  case 8:
    *puStack_e8 = uStack_108;
    lVar38 = pdb_140a36600(uStack_e0);
    *(undefined4 *)(lVar38 + 0x18) = *(undefined4 *)(lVar38 + 0x24);
    pcVar39 = pcStack_130;
  case 9:
    goto LAB_14298a810;
  case 10:
    *puStack_d8 = uStack_104;
    pdb_140b67350(pcStack_d0);
    pcVar39 = pcStack_130;
    goto LAB_14298a810;
  case 0xb:
    *puStack_d8 = uStack_104;
    pdb_140b67380(pcStack_d0);
    pcVar39 = pcStack_130;
    goto LAB_14298a810;
  case 0xc:
    *puStack_d8 = uStack_104;
    pdb_140b67390(pcStack_d0);
    pcVar39 = pcStack_130;
    goto LAB_14298a810;
  case 0xd:
    break;
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
    goto code_r0x00014298bf23;
  case 0x10:
    *pcVar16 = *pcVar16 + cVar11;
    pcVar29 = (code *)CONCAT71((int7)((ulonglong)pcVar29 >> 8),bVar26 + 0x8d);
    pcVar37 = (code *)(ulonglong)((int)pcVar16 + 0x66666666 + (uint)(0x72 < bVar26));
    lStack_118 = lVar41;
    pcVar39 = pcStack_c0;
    goto code_r0x00014298bfb0;
  case 0x11:
    goto code_r0x00014298be41;
  case 0x12:
    *(undefined2 *)(pcVar16 + (longlong)pcVar25 * 4) = in_FS;
    *pcVar16 = *pcVar16 + cVar11;
    (&UNK_143608d6b)[uVar22] = (&UNK_143608d6b)[uVar22] + -0x20;
    pcVar16 = (char *)((ulonglong)auStack_158 & 0xffffff98);
    *pcVar16 = *pcVar16 + (char)pcVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
    pcVar16 = (char *)((ulonglong)pcVar16 & 0xffffffffffffff90);
    *pcVar16 = *pcVar16 + (char)pcVar16;
    pcVar16[-0x75] = pcVar16[-0x75] + -0x20;
    pcVar16 = (char *)((ulonglong)auStack_158 & 0xffffff98);
    *pcVar16 = *pcVar16 + (char)pcVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x14:
    pcVar16 = (char *)((ulonglong)pcVar16 & 0xffffffffffffff90);
    *pcVar16 = *pcVar16 + (char)pcVar16;
    pcVar16[-0x75] = pcVar16[-0x75] + -0x20;
    pcVar16 = (char *)((ulonglong)auStack_158 & 0xffffff98);
    *pcVar16 = *pcVar16 + (char)pcVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
    goto code_r0x00014298c1d9;
  case 0x16:
    goto code_r0x00014298bee1;
  case 0x17:
    *(char *)((longlong)param_4 + -0x7374b7ff) =
         *(char *)((longlong)param_4 + -0x7374b7ff) + -0x20 + (0xfffffffebc9f721f < uVar22);
    pcVar16 = (char *)((ulonglong)pcVar16 & 0xffffffffffffffe0);
    *pcVar16 = *pcVar16 + (char)pcVar16;
    pcVar16 = (char *)CONCAT71((int7)((ulonglong)pcVar16 >> 8),(char)pcVar16 + -0x73);
    *pcVar13 = *pcVar36;
    pcVar29 = (code *)CONCAT62(uVar31,CONCAT11(bVar30 | (byte)((ulonglong)pcVar25 >> 8),bVar26));
    pcVar36 = pcVar36 + 1;
    pcVar13 = pcVar13 + 1;
    lStack_118 = lVar41;
    pcVar39 = pcStack_c0;
    goto code_r0x00014298c1bd;
  case 0x18:
    (&UNK_143608d6b)[uVar22] = (&UNK_143608d6b)[uVar22] + -0x20;
    pcVar16 = (char *)((ulonglong)auStack_158 & 0xffffff98);
    *pcVar16 = *pcVar16 + (char)pcVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
    (&UNK_143608d6b)[uVar22] = (&UNK_143608d6b)[uVar22] + -0x20;
    *(undefined2 *)(pcVar16 + (longlong)pcVar25 * 4) = in_FS;
    *pcVar16 = *pcVar16 + cVar11;
    (&UNK_143608d6b)[uVar22] = (&UNK_143608d6b)[uVar22] + -0x20;
    pcVar16 = (char *)((ulonglong)auStack_158 & 0xffffff98);
    *pcVar16 = *pcVar16 + (char)pcVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
    lStack_118 = lVar41;
    pcVar39 = pcStack_c0;
    pcVar7 = pcVar16;
    goto code_r0x00014298c2ce;
  case 0x1b:
    lVar38 = CONCAT71((int7)((ulonglong)pcVar16 >> 8),cVar11 + 'H');
    *(int *)(&UNK_143608de0 + lVar38) = (int)pcVar29;
    puVar32 = auStack_158;
    goto code_r0x00014298c3d9;
  case 0x1c:
    goto code_r0x00014298c323;
  case 0x1d:
    puVar24 = &UNK_143608ddf;
    if (pcVar16 != (char *)0x0) goto code_r0x00014298c37d;
    goto code_r0x00014298c381;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  fVar46 = fVar46 + (fVar43 - fVar9) * fVar45;
  bVar21 = *(byte *)*in_stack_000001a0;
  pcVar23 = (code *)(ulonglong)bVar21;
  uVar22 = (ulonglong)*(int *)(&UNK_143608e14 + (ulonglong)(byte)pcVar29[0x10] * 4);
  pbVar19 = &UNK_143608e14 + uVar22;
  uVar20 = (undefined7)((ulonglong)pbVar19 >> 8);
  lVar41 = lStack_118;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pcVar29[0x10]) {
  case (code)0x0:
    if (bVar21 == 0x10) {
      **(undefined4 **)(in_stack_00000178 + 0x10) = *(undefined4 *)(in_stack_00000178 + 0x1c);
      pdb_1409aa280(&pcStack_d0,uStack_f8);
      pcVar28 = pcStack_c0;
      for (pcVar37 = pcStack_d0; pcVar37 != pcStack_c8; pcVar37 = pcVar37 + 0x40) {
        if ((pcVar28 != (code *)0x0) && (pcVar37 != (code *)0x0)) {
          *(float *)(pcVar37 + 0x1c) = fVar46;
        }
        pcVar28 = pcVar28 + 1;
      }
    }
    break;
  case (code)0x1:
    if (bVar21 == 0x10) {
      **(undefined4 **)(in_stack_00000178 + 0x10) = *(undefined4 *)(in_stack_00000178 + 0x1c);
      pdb_1409aa280(&pcStack_d0,uStack_f8);
      pcVar28 = pcStack_c0;
      for (pcVar37 = pcStack_d0; pcVar37 != pcStack_c8; pcVar37 = pcVar37 + 0x40) {
        if ((pcVar28 != (code *)0x0) && (pcVar37 != (code *)0x0)) {
          *(float *)(pcVar37 + 0x20) = fVar46;
        }
        pcVar28 = pcVar28 + 1;
      }
    }
    break;
  case (code)0x2:
    if (bVar21 == 0x10) {
      **(undefined4 **)(in_stack_00000178 + 0x10) = *(undefined4 *)(in_stack_00000178 + 0x1c);
      pdb_1409aa280(&pcStack_d0,uStack_f8);
      pcVar23 = pcStack_c8;
      pcVar25 = pcStack_c0;
      for (pcVar37 = pcStack_d0; pcVar37 != pcVar23; pcVar37 = pcVar37 + 0x40) {
        if ((pcVar25 != (code *)0x0) && (pcVar37 != (code *)0x0)) {
          *(float *)(pcVar37 + 0x24) = fVar46;
        }
code_r0x00014298bfb0:
        pcVar25 = pcVar25 + 1;
      }
    }
    break;
  case (code)0x3:
    if (bVar21 == 0x10) {
      **(undefined4 **)(in_stack_00000178 + 0x10) = *(undefined4 *)(in_stack_00000178 + 0x1c);
      pdb_1409aa280(&pcStack_d0,uStack_f8);
      pcVar28 = pcStack_c0;
      for (pcVar37 = pcStack_d0; pcVar37 != pcStack_c8; pcVar37 = pcVar37 + 0x40) {
        if ((pcVar28 != (code *)0x0) && (pcVar37 != (code *)0x0)) {
          *(float *)(pcVar37 + 0x30) = fVar46;
        }
        pcVar28 = pcVar28 + 1;
      }
    }
    break;
  case (code)0x4:
    if (bVar21 == 0x10) {
      **(undefined4 **)(in_stack_00000178 + 0x10) = *(undefined4 *)(in_stack_00000178 + 0x1c);
      pdb_1409aa280(&pcStack_d0,uStack_f8);
      pcVar28 = pcStack_c0;
      for (pcVar37 = pcStack_d0; pcVar37 != pcStack_c8; pcVar37 = pcVar37 + 0x40) {
        if ((pcVar28 != (code *)0x0) && (pcVar37 != (code *)0x0)) {
          *(float *)(pcVar37 + 0x38) = fVar46;
        }
        pcVar28 = pcVar28 + 1;
      }
    }
    break;
  case (code)0x5:
    if (bVar21 == 0x10) {
      **(undefined4 **)(in_stack_00000178 + 0x10) = *(undefined4 *)(in_stack_00000178 + 0x1c);
      pdb_1409aa280(&pcStack_d0,uStack_f8);
      pcVar28 = pcStack_c0;
      for (pcVar37 = pcStack_d0; pcVar37 != pcStack_c8; pcVar37 = pcVar37 + 0x40) {
        if ((pcVar28 != (code *)0x0) && (pcVar37 != (code *)0x0)) {
          *(float *)(pcVar37 + 0x34) = fVar46;
        }
        pcVar28 = pcVar28 + 1;
      }
    }
    break;
  case (code)0x6:
    if (bVar21 == 0x10) {
      **(undefined4 **)(in_stack_00000180 + 0x10) = *(undefined4 *)(in_stack_00000180 + 0x1c);
      pcVar16 = (char *)pdb_140a36600(CONCAT44(uStack_74,uStack_78));
code_r0x00014298c1bd:
      fVar43 = fVar46 * (float)((ulonglong)*(undefined8 *)(pcVar16 + 0xc) >> 0x20) +
               (fVar8 - fVar46) * (float)*(undefined8 *)(pcVar16 + 0xc);
      lVar41 = lStack_118;
      pcVar42 = pcVar39;
code_r0x00014298c1d9:
      pcVar39 = pcVar42;
      *(float *)(pcVar16 + 8) = fVar43;
      lStack_118 = lVar41;
    }
    break;
  case (code)0x7:
    if (bVar21 == 0x10) {
      fVar44 = (float)pdb_142b5a620(&UNK_143608c4c,fVar46);
      **(undefined4 **)(in_stack_00000180 + 0x10) = *(undefined4 *)(in_stack_00000180 + 0x1c);
      puVar17 = (uint *)pdb_140a368d0(CONCAT44(uStack_74,uStack_78));
      if ((((float)puVar17[6] != fVar44) || (NAN((float)puVar17[6]) || NAN(fVar44))) &&
         (puVar17[6] = (uint)fVar44, *puVar17 < 2)) {
        *puVar17 = 3;
        *(undefined8 *)(puVar17 + 1) = *(undefined8 *)(puVar17 + 4);
      }
    }
    break;
  case (code)0x8:
    if (bVar21 == 0x10) {
      **(undefined4 **)(in_stack_00000180 + 0x10) = *(undefined4 *)(in_stack_00000180 + 0x1c);
      lVar38 = pdb_140a36600(CONCAT44(uStack_74,uStack_78));
      *(float *)(lVar38 + 0x18) =
           fVar46 * (float)((ulonglong)*(undefined8 *)(lVar38 + 0x1c) >> 0x20) +
           (fVar8 - fVar46) * (float)*(undefined8 *)(lVar38 + 0x1c);
    }
    break;
  case (code)0x9:
    pcVar42 = pcStack_130;
    if (bVar21 != 0x10) {
code_r0x00014298bf23:
      pcVar39 = pcVar42;
      if (fVar47 <= fVar46) {
        fVar47 = fVar46;
      }
      fVar44 = _DAT_142e37830;
      if (fVar47 <= _DAT_142e37830) {
        fVar44 = fVar47;
      }
      **(undefined4 **)(in_stack_00000190 + 0x10) = *(undefined4 *)(in_stack_00000190 + 0x1c);
      *unaff_RBX = fVar44;
      lStack_118 = lVar41;
    }
    break;
  case (code)0xa:
    if (bVar21 != 0x10) {
      **(undefined4 **)(in_stack_00000198 + 0x10) = *(undefined4 *)(in_stack_00000198 + 0x1c);
      pdb_140b673a0(CONCAT44(uStack_7c,uStack_80),fVar46);
    }
    break;
  case (code)0xb:
code_r0x00014298be41:
    lStack_118 = lVar41;
    if ((char)pcVar23 != '\x10') {
      **(undefined4 **)(in_stack_00000198 + 0x10) = *(undefined4 *)(in_stack_00000198 + 0x1c);
      pdb_140b673c0(CONCAT44(uStack_7c,uStack_80),fVar46);
    }
    break;
  case (code)0xc:
code_r0x00014298bee1:
    lStack_118 = lVar41;
    if ((char)pcVar23 != '\x10') {
      **(undefined4 **)(in_stack_00000198 + 0x10) = *(undefined4 *)(in_stack_00000198 + 0x1c);
      pdb_140b67360(CONCAT44(uStack_7c,uStack_80),fVar46);
    }
    break;
  case (code)0xd:
    goto code_r0x00014298c2ff;
  case (code)0xe:
    pcVar23[0x328b4801] = (code)((char)pcVar23[0x328b4801] + bVar21 + (0xfffffffebc9f71eb < uVar22))
    ;
    goto code_r0x00014298c40f;
  case (code)0xf:
    *(uint *)(&UNK_143608d9f + uVar22) = *(int *)(&UNK_143608d9f + uVar22) + (uint)bVar21;
    bVar21 = bVar21 ^ (&UNK_143608d9f)[uVar22];
    if ((char)bVar21 < '\x01') {
      cVar11 = (char)pbVar19 + *pbVar19;
      pcVar16 = (char *)CONCAT71(uVar20,cVar11);
      pcVar16[-0x75] = pcVar16[-0x75] + bVar21;
      pcVar16[-0x7bf0f4c8] = pcVar16[-0x7bf0f4c8] + cVar11;
      *pcVar16 = *pcVar16 + cVar11;
      pcVar16[-0x75] = pcVar16[-0x75] + bVar21;
      pcVar29 = pcVar29 + -0x74b7e3be;
      cVar1 = *pcVar29;
      *pcVar29 = (code)((char)*pcVar29 + bVar21);
      *(char *)((ulonglong)bVar21 + 0x328b4801) =
           *(char *)((ulonglong)bVar21 + 0x328b4801) + bVar21 + CARRY1((byte)cVar1,bVar21);
      pcVar13 = *(code **)(pcVar36 + 0x30);
      puVar10 = (undefined1 *)((ulonglong)pcVar16 & 0xffffffff);
code_r0x00014298c3b7:
      puVar32 = puVar10;
      uVar5 = *(undefined8 *)(pcVar36 + 0x40);
      if (pcVar13 == *(code **)(pcVar36 + 0x20)) {
        *(undefined8 *)(puVar32 + -8) = 0x14298c3ca;
        pdb_142d7e980(pcVar36 + 0x20);
      }
      lVar38 = *(longlong *)(pcVar36 + 0x28);
      pcVar23 = (code *)((longlong)pcVar13 * 0x10);
      *(undefined8 *)(pcVar23 + lVar38) = uVar5;
code_r0x00014298c3d9:
      pcVar23[lVar38 + 8] = (code)0x8;
    }
    else {
      pcVar29 = *(code **)(pcVar36 + 0x40);
      if (pcVar13 == *(code **)(pcVar36 + 0x20)) {
        pdb_142d7e980(pcVar36 + 0x20);
      }
      pcVar16 = *(char **)(pcVar36 + 0x28);
      puVar24 = (undefined *)((longlong)pcVar13 << 4);
code_r0x00014298c37d:
      *(code **)(pcVar16 + (longlong)puVar24) = pcVar29;
code_r0x00014298c381:
      pcVar16[(longlong)(puVar24 + 8)] = '\x04';
      puVar32 = auStack_158;
    }
    goto code_r0x00014298c48f;
  case (code)0x10:
    *(uint *)(&UNK_143608d9f + uVar22) = *(int *)(&UNK_143608d9f + uVar22) + (uint)bVar21;
    bVar21 = bVar21 ^ (&UNK_143608d9f)[uVar22];
    puVar10 = auStack_158;
    if ('\0' < (char)bVar21) goto code_r0x00014298c3b7;
    cVar11 = (char)pbVar19 + *pbVar19;
    pcVar16 = (char *)(CONCAT71(uVar20,cVar11) + -0x75);
    *pcVar16 = *pcVar16 + bVar21;
    *pcVar13 = (code)((char)*pcVar13 + bVar21);
    if ((byte)(cVar11 - 0xdU) < 2) goto LAB_14298c49a;
    *(undefined4 *)in_stack_000001a8[2] = *(undefined4 *)((longlong)in_stack_000001a8 + 0x1c);
    pcVar36 = (code *)*in_stack_000001a8;
code_r0x00014298c40f:
    pcVar13 = *(code **)(pcVar36 + 0x30);
    uVar5 = *(undefined8 *)(pcVar36 + 0x40);
    if (pcVar13 == *(code **)(pcVar36 + 0x20)) {
      pdb_142d7e980(pcVar36 + 0x20);
    }
    lVar38 = *(longlong *)(pcVar36 + 0x28);
    *(undefined8 *)(lVar38 + (longlong)pcVar13 * 0x10) = uVar5;
    *(undefined1 *)(lVar38 + 8 + (longlong)pcVar13 * 0x10) = 9;
code_r0x00014298c48f:
    *(code **)(pcVar36 + 0x30) = pcVar13 + 1;
    *(longlong *)(pcVar36 + 0x40) = *(longlong *)(pcVar36 + 0x40) + 1;
    puVar33 = puVar32;
    goto LAB_14298c49a;
  default:
    bVar30 = bVar30 ^ *pbVar19;
    piVar14 = (int *)(CONCAT62(uVar31,CONCAT11(bVar30,bVar26)) + 0x31);
    *piVar14 = *piVar14 + 1;
    *pbVar19 = *pbVar19 ^ bVar30;
    iRam00000001c15fc660 = iRam00000001c15fc660 + -1;
                    /* WARNING: Could not recover jumptable at 0x000143608e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulonglong)uRam000000013d5fc667)(0x9eff382f);
    return;
  }
  *(undefined4 *)(pcVar13 + (longlong)pcVar36 * 4) = uStack_10c;
  *(float *)(pcVar29 + 0xc) = fVar9;
  puVar33 = auStack_158;
  if (uStack_50 != 0) {
    pcVar16 = (char *)(ulonglong)uStack_50;
    pcVar23 = (code *)0x1;
    if (((((ulonglong)pcVar16 ^ 0xffffffff) < *(ulonglong *)(pcVar39 + 0x10)) &&
        (pcVar25 = (code *)(((ulonglong)pcVar16 ^ 0xffffffff) * 0x18 + *(longlong *)(pcVar39 + 8)),
        *(int *)(pcVar25 + 0x10) == (int)puVar3)) && (*(int *)pcVar25 != 0)) {
      pcVar23 = *(code **)(pcVar25 + 8);
      if (((ulonglong)pcVar23 & 0xffffffff) < *(ulonglong *)(lStack_118 + 0x38)) {
        pcVar7 = (char *)(*(ulonglong *)
                           (*(longlong *)(lStack_118 + 0x28) +
                           ((ulonglong)pcVar23 >> 6 & 0x3ffffff) * 8) >> ((ulonglong)pcVar23 & 0x3f)
                         );
code_r0x00014298c2ce:
        if (((ulonglong)pcVar7 & 1) != 0) {
          pbVar19 = (byte *)(ulonglong)*(uint *)(pcVar25 + 4);
          lVar38 = *(longlong *)
                    (*(longlong *)(pcVar39 + 0x1a0) + 0x18 + ((ulonglong)pcVar23 >> 0x20) * 0x48);
          pcVar23 = (code *)~*(ulonglong *)
                              (*(longlong *)
                                (*(longlong *)(pcVar39 + 0x1a0) + 0x38 +
                                ((ulonglong)pcVar23 >> 0x20) * 0x48) +
                              *(longlong *)(lStack_118 + 0x118) * 8);
code_r0x00014298c2ff:
          uVar12 = *(byte *)(*(longlong *)(lVar38 + 0x10 + (longlong)pcVar23 * 0x30) + 0x10 +
                            (ulonglong)~(uint)pbVar19 * 0x18) - 9;
          pcVar16 = (char *)(ulonglong)uVar12;
          puVar33 = auStack_158;
          if (uVar12 < 4) {
code_r0x00014298c323:
                    /* WARNING: Could not recover jumptable at 0x00014298c331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_143608e48 + *(int *)(&UNK_143608e48 + (longlong)pcVar16 * 4)))();
            return;
          }
          goto LAB_14298c49a;
        }
      }
      pcVar23 = (code *)((longlong)pcVar23 << 0x20);
    }
    pcStack_c8 = (code *)((longlong)puVar3 << 0x20 | (ulonglong)pcVar16);
    puStack_138 = &UNK_143608ca8;
    pcStack_d0 = pcVar23;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143608b58,0x2b,&pcStack_d0,&UNK_143608b38);
  }
LAB_14298c49a:
  uVar5 = (*(undefined8 **)(puVar33 + 0x130))[1];
  puVar6 = *(undefined8 **)(puVar33 + 0x2c8);
  *puVar6 = **(undefined8 **)(puVar33 + 0x130);
  puVar6[1] = uVar5;
  return;
}

