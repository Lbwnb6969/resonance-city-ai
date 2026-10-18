// VA 0x140beb950, PDB extent 1369 bytes
// country_core::systems::garden::draw_garden::draw_garden
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden/draw_garden.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::garden::draw_garden::draw_garden
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden/draw_garden.rs
   Extent: 1369 */

void pdb_140beb950(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 *param_9,byte *param_10,undefined8 *param_11,longlong *param_12)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  longlong lVar11;
  byte *pbVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 uVar18;
  undefined *puVar19;
  longlong *plVar20;
  uint uVar21;
  byte bVar22;
  longlong *plVar23;
  char *pcVar24;
  undefined8 uVar25;
  uint *puVar26;
  float fVar27;
  float fVar28;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  undefined1 auStack_168 [32];
  undefined8 *puStack_148;
  undefined4 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint auStack_128 [2];
  float fStack_120;
  byte bStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_c0;
  undefined1 auStack_a8 [16];
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
  
  puVar26 = (uint *)*param_9;
  uStack_98 = param_9[4];
  uStack_90 = param_9[5];
  uStack_88 = param_9[6];
  uStack_80 = param_9[7];
  uStack_78 = *(undefined4 *)(param_9 + 8);
  uStack_74 = *(undefined4 *)((longlong)param_9 + 0x44);
  uStack_70 = *(undefined4 *)(param_9 + 9);
  uStack_6c = *(undefined4 *)((longlong)param_9 + 0x4c);
  uStack_68 = *(undefined4 *)(param_9 + 10);
  uStack_64 = *(undefined4 *)((longlong)param_9 + 0x54);
  uStack_60 = *(undefined4 *)(param_9 + 0xb);
  uStack_5c = *(undefined4 *)((longlong)param_9 + 0x5c);
  pfVar4 = (float *)param_11[4];
  pbVar12 = (byte *)*param_1;
  bVar13 = *pbVar12;
  bVar7 = false;
  if (*(char *)param_11[8] != '\x01') {
LAB_140beba13:
    bVar22 = pbVar12[1];
    goto joined_r0x000140bebdbe;
  }
  switch(bVar13) {
  case 2:
  case 3:
    unaff_XMM6_Da = *pfVar4;
    bVar7 = true;
    bVar22 = pbVar12[1];
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xc:
    goto LAB_140beba13;
  case 0xb:
    unaff_XMM6_Da = pfVar4[1];
    bVar7 = true;
    bVar22 = 4;
    goto code_r0x000140beba91;
  case 0xd:
    unaff_XMM6_Da = pfVar4[2];
    goto code_r0x000140beba6d;
  case 0xe:
    unaff_XMM6_Da = pfVar4[2] * _DAT_142f95160;
code_r0x000140beba6d:
    bVar7 = true;
    bVar22 = 5;
    goto code_r0x000140beba91;
  default:
    bVar22 = pbVar12[1];
  }
joined_r0x000140bebdbe:
  if (bVar13 - 2 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x000140beba2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_143065e38 + *(int *)(&UNK_143065e38 + (ulonglong)(bVar13 - 2) * 4)))();
    return;
  }
  if (bVar13 == 0xd) {
    unaff_XMM6_Da = pfVar4[2];
    if (0x7f7fffff < (uint)ABS(unaff_XMM6_Da)) {
      uStack_130 = param_2;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143065b26,0x28,&UNK_143065b70);
    }
    uStack_108 = 0;
    fStack_f0 = 0.0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    puStack_140 = &uStack_108;
    puStack_148 = (undefined8 *)CONCAT71(puStack_148._1_7_,3);
    plVar20 = (longlong *)&UNK_143065b88;
    uStack_130 = param_2;
    puVar9 = (undefined8 *)pdb_1408ffe50(*param_3,&UNK_143065b88,6,5);
    plVar5 = (longlong *)*param_8;
    pcVar24 = (char *)((longlong)plVar5 + 4);
    pcVar10 = "";
    if ((char)*plVar5 != '\0') {
      pcVar10 = pcVar24;
    }
    pdb_140defa80(auStack_a8,*(undefined4 *)pcVar10,*(undefined4 *)(pcVar10 + 8),
                  _DAT_142e3798c * unaff_XMM6_Da * _DAT_142e3c670);
    uVar18 = 2;
    if ((*(char *)(puVar9 + 3) == '\x02') && ((longlong *)puVar9[7] == plVar20)) {
      uVar18 = *(undefined1 *)((longlong)puVar9 + 0x19);
    }
    puStack_140 = &uStack_78;
    puStack_148 = &uStack_98;
    lVar8 = pdb_140bfacd0(param_10,uVar18,auStack_a8,puVar26);
    bVar13 = *param_10;
    uVar14 = (ulonglong)bVar13;
    auStack_128[0] = (uint)bVar13;
    plVar23 = plVar5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar13) {
    case 0:
      goto LAB_140bebe5c;
    case 1:
      param_2 = uStack_130;
code_r0x000140bebdd0:
      auStack_128[1] = 0x3f000000;
      fStack_120 = unaff_XMM6_Da;
      bStack_11c = bVar13;
      break;
    case 2:
      if ((char)lVar8 == '\0') {
        return;
      }
      pcVar10 = "";
      if ((char)*plVar5 != '\0') {
        pcVar10 = pcVar24;
      }
      pdb_140defa80(&uStack_104,*(undefined4 *)pcVar10,*(undefined4 *)(pcVar10 + 8),
                    unaff_XMM6_Da * _DAT_142e36f50);
      pcVar10 = "";
      if ((char)*plVar5 != '\0') {
        pcVar10 = pcVar24;
      }
      fStack_f0 = *(float *)(pcVar10 + 4) + _DAT_142e37838;
      uStack_e8 = 0;
      uStack_f4 = 0;
      uStack_108 = CONCAT22(uStack_108._2_2_,0x100);
      *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
      lVar8 = *param_12;
      lVar11 = *(longlong *)(lVar8 + 0x30);
      uVar25 = *(undefined8 *)(lVar8 + 0x40);
      if (lVar11 == *(longlong *)(lVar8 + 0x20)) {
        pdb_142d7ee50(lVar8 + 0x20);
      }
      lVar17 = *(longlong *)(lVar8 + 0x28);
      lVar15 = lVar11 * 0x40;
      *(ulonglong *)(lVar17 + 0x30 + lVar15) = CONCAT44(uStack_d4,uStack_d8);
      puVar9 = (undefined8 *)(lVar17 + 0x20 + lVar15);
      *puVar9 = uStack_e8;
      puVar9[1] = uStack_e0;
      puVar9 = (undefined8 *)(lVar17 + 0x10 + lVar15);
      *puVar9 = CONCAT44(uStack_f4,uStack_f8);
      puVar9[1] = CONCAT44(uStack_ec,fStack_f0);
      puVar1 = (undefined4 *)(lVar17 + lVar15);
      *puVar1 = uStack_108;
      puVar1[1] = uStack_104;
      puVar1[2] = uStack_100;
      puVar1[3] = uStack_fc;
      *(undefined8 *)(lVar17 + 0x38 + lVar15) = uVar25;
      *(longlong *)(lVar8 + 0x30) = lVar11 + 1;
      *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
      auStack_128[0] = 2;
      param_2 = uStack_130;
      break;
    case 3:
code_r0x000140bebcb2:
      auStack_128[0] = 3;
      param_2 = uStack_130;
      break;
    case 5:
      iVar2 = *(int *)(&UNK_143065e7c + uVar14 * 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar13) {
      case 0:
        goto LAB_140bec3ad;
      case 1:
        plVar5[2] = 0;
        if (*plVar5 == 0) {
          pdb_142db07d0(plVar5);
        }
        pfVar4 = (float *)plVar5[1];
        *pfVar4 = unaff_XMM8_Da;
        pfVar4[1] = unaff_XMM7_Da;
        plVar5[2] = 1;
        fVar27 = _DAT_142e37870 + unaff_XMM8_Da;
        puVar9 = *(undefined8 **)((longlong)plVar5 + 300);
        if (*plVar5 == 1) {
          pdb_142db07d0(plVar5);
        }
        *(ulonglong *)(plVar5[1] + 8) = CONCAT44(unaff_XMM7_Da + 0.0,fVar27);
        plVar5[2] = 2;
        param_10 = (byte *)(ulonglong)*(uint *)((longlong)plVar20 + 0x1c);
        puVar26 = (uint *)plVar20[2];
        *puVar26 = *(uint *)((longlong)plVar20 + 0x1c);
        param_4 = (undefined8 *)*plVar20;
        goto code_r0x000140bec0c6;
      case 2:
        if ((char)lVar8 == '\0') {
          return;
        }
        lVar8 = plVar5[1];
        lVar11 = plVar5[2];
        puVar9 = *(undefined8 **)((longlong)plVar5 + 300);
        if (((lVar11 == 0) ||
            (puVar16 = (undefined8 *)(lVar8 + lVar11 * 8 + -8), puVar16 == (undefined8 *)0x0)) ||
           (uVar25 = *puVar16, fVar27 = (float)uVar25 - unaff_XMM8_Da,
           fVar28 = (float)((ulonglong)uVar25 >> 0x20) - unaff_XMM7_Da,
           _DAT_143009d64 <= fVar28 * fVar28 + fVar27 * fVar27)) {
          if (lVar11 == *plVar5) {
            pdb_142db07d0(plVar5);
            lVar8 = plVar5[1];
          }
          *(float *)(lVar8 + lVar11 * 8) = unaff_XMM8_Da;
          *(float *)(lVar8 + 4 + lVar11 * 8) = unaff_XMM7_Da;
          plVar5[2] = lVar11 + 1;
        }
        uVar21 = *(uint *)((longlong)plVar20 + 0x1c);
        puVar26 = (uint *)plVar20[2];
        *puVar26 = uVar21;
        param_4 = (undefined8 *)*plVar20;
        goto code_r0x000140bec156;
      case 3:
        uVar3 = *(undefined4 *)((longlong)plVar20 + 0x1c);
        puVar1 = (undefined4 *)plVar20[2];
        *puVar1 = uVar3;
        lVar8 = *plVar20;
        puStack_140 = (undefined4 *)CONCAT71(puStack_140._1_7_,0x40);
        puStack_148 = (undefined8 *)((ulonglong)puStack_148 & 0xffffffffffffff00);
        pdb_140a85b60(lVar8,plVar5[1],plVar5[2],unaff_XMM6_Da);
        *puVar1 = uVar3;
        lVar11 = *(longlong *)(lVar8 + 0x10);
        if (lVar11 != *(longlong *)(lVar8 + 0x28)) {
          pdb_142dc85e0(lVar11,*(longlong *)(lVar8 + 0x28),&UNK_143043428);
          goto code_r0x000140bec419;
        }
        pub_142e32760(*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x20),lVar11 << 2);
        *(undefined2 *)(lVar8 + 0x280) = 0;
        *puVar1 = uVar3;
        puVar9 = (undefined8 *)pdb_140bf45b0(**(undefined8 **)((longlong)plVar5 + 300));
        if ((puVar9 == (undefined8 *)0x0) ||
           (lVar11 = (**(code **)(puVar9[1] + 0x18))(*puVar9), lVar11 == 0))
        goto code_r0x000140bec419;
        uVar25 = 0;
        pdb_140a85430(lVar8,0,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
        uVar6 = plVar5[2];
        uVar14 = uVar6 * 8;
        if (uVar14 < 0x7ffffffffffffffd && uVar6 >> 0x3d == 0) goto code_r0x000140bec2fb;
        do {
          pdb_142dc7e2a(uVar25,uVar14);
code_r0x000140bec2fb:
          lVar8 = plVar5[1];
          if (uVar14 == 0) {
            pbVar12 = (byte *)0x4;
            pcVar24 = (char *)((longlong)plVar5 + 100);
            pcVar24[0] = '\0';
            pcVar24[1] = '\0';
            pcVar24[2] = '\0';
            pcVar24[3] = '\0';
            pcVar24[4] = '\0';
            pcVar24[5] = '\0';
            pcVar24[6] = '\0';
            pcVar24[7] = '\0';
            param_4 = *(undefined8 **)((longlong)plVar5 + 0x154);
            goto joined_r0x000140bec3fc;
          }
          pdb_14007ee60();
          uVar25 = 4;
          pbVar12 = pub_1406abab0(uVar14,4);
        } while (pbVar12 == (byte *)0x0);
        *(ulonglong *)((longlong)plVar5 + 100) = uVar6;
        param_4 = *(undefined8 **)((longlong)plVar5 + 0x154);
joined_r0x000140bec3fc:
        if (uVar6 != 0) {
          pub_142e32760(pbVar12,lVar8,uVar14);
        }
        *(byte **)((longlong)plVar5 + 0x5c) = pbVar12;
        *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
        param_4 = (undefined8 *)*param_4;
        param_10 = (byte *)param_4[6];
        puVar26 = (uint *)param_4[8];
        if (param_10 == (byte *)param_4[4]) {
          pdb_142d7ede0(param_4 + 4);
        }
        lVar8 = param_4[5];
        uVar14 = (longlong)param_10 * 5;
        *(undefined8 *)(lVar8 + (longlong)param_10 * 0x28) = *(undefined8 *)((longlong)plVar5 + 100)
        ;
        *(undefined8 *)(lVar8 + 8 + (longlong)param_10 * 0x28) =
             *(undefined8 *)((longlong)plVar5 + 0x5c);
        *(ulonglong *)(lVar8 + 0x10 + (longlong)param_10 * 0x28) = uVar6;
        *(float *)(lVar8 + 0x18 + (longlong)param_10 * 0x28) = unaff_XMM6_Da;
        *(undefined1 *)(lVar8 + 0x1c + (longlong)param_10 * 0x28) = 0;
        *(undefined1 *)(lVar8 + 0x1d + (longlong)param_10 * 0x28) = 0x40;
        break;
      case 4:
        *(uint *)((longlong)plVar5 + -0x44) =
             *(uint *)((longlong)plVar5 + -0x44) ^ (uint)auStack_168;
        *(int *)(&UNK_143065e34 + iVar2) =
             *(int *)(&UNK_143065e34 + iVar2) << ((char)iVar2 + 0x7cU & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    case 4:
      *(uint **)(lVar8 + 0x20 + uVar14 * 8) = puVar26;
      param_4[6] = param_10 + 1;
      param_4[8] = param_4[8] + 1;
LAB_140bec3ad:
      plVar5[2] = 0;
      return;
    case 6:
code_r0x000140bec0c6:
      pdb_140a85240(param_4);
      uVar21 = (uint)param_10;
      *puVar26 = uVar21;
code_r0x000140bec156:
      puStack_140 = (undefined4 *)CONCAT71(puStack_140._1_7_,0x40);
      puStack_148 = (undefined8 *)((ulonglong)puStack_148 & 0xffffffffffffff00);
      pdb_140a85b60(param_4,plVar5[1],plVar5[2],unaff_XMM6_Da);
      *puVar26 = uVar21;
      puVar9 = (undefined8 *)pdb_140bf45b0(*puVar9,&UNK_14331c998);
      if ((puVar9 == (undefined8 *)0x0) ||
         (lVar8 = (**(code **)(puVar9[1] + 0x18))(*puVar9), lVar8 == 0)) {
code_r0x000140bec419:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143043538);
      }
      puVar9 = *(undefined8 **)((longlong)plVar5 + 0x15c);
      pdb_140a85430(param_4,1,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
      *(undefined4 *)puVar9[2] = *(undefined4 *)((longlong)puVar9 + 0x1c);
      plVar23 = (longlong *)*puVar9;
      param_4 = (undefined8 *)plVar23[6];
      lVar8 = plVar23[8];
      if (param_4 == (undefined8 *)plVar23[4]) {
        pdb_142d7e6e0(plVar23 + 4);
      }
      lVar11 = plVar23[5];
      lVar17 = (longlong)param_4 * 0x20;
      *(longlong *)(lVar11 + lVar17) = lVar8;
      *(float *)(lVar11 + 8 + lVar17) = unaff_XMM8_Da;
      *(undefined4 *)(lVar11 + 0xc + lVar17) = *(undefined4 *)((longlong)plVar5 + 100);
      *(float *)(lVar11 + 0x10 + lVar17) = unaff_XMM7_Da;
      *(float *)(lVar11 + 0x14 + lVar17) = unaff_XMM6_Da;
      *(undefined1 *)(lVar11 + 0x18 + lVar17) = 0;
      *(undefined1 *)(lVar11 + 0x1c + lVar17) = 0x40;
code_r0x000140bec210:
      plVar23[6] = (longlong)param_4 + 1;
      plVar23[8] = plVar23[8] + 1;
      return;
    case 7:
      goto code_r0x000140bec210;
    case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar13 != 4) {
      return;
    }
code_r0x000140beba91:
    if ((bVar22 != 0) && (bVar22 != 5)) {
      return;
    }
    if (!bVar7) {
      fVar27 = (float)pdb_140de8220(_DAT_142e37988,_DAT_142e37830,*(undefined4 *)*param_11);
      unaff_XMM6_Da = fVar27 * _DAT_142e37adc + (_DAT_142e36f28 - fVar27);
    }
    if (0x7f7fffff < (uint)ABS(unaff_XMM6_Da)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143065b26,0x28,&UNK_143065b50);
    }
    uStack_108 = 0;
    fStack_f0 = 0.0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    puStack_140 = &uStack_108;
    puStack_148 = (undefined8 *)CONCAT71(puStack_148._1_7_,3);
    puVar19 = &UNK_143065b68;
    lVar8 = pdb_1408ffe50(*param_3,&UNK_143065b68,6,9);
    if ((*(char *)(lVar8 + 0x18) != '\x02') || (*(undefined **)(lVar8 + 0x38) != puVar19)) {
LAB_140bebcc4:
      *param_10 = 0;
      return;
    }
    if (*(byte *)(lVar8 + 0x19) < 2) {
      if (1 < (byte)(*param_10 - 1)) goto LAB_140bebcc4;
      *param_10 = 3;
      uStack_130 = param_2;
      goto code_r0x000140bebcb2;
    }
    if (*(byte *)(lVar8 + 0x19) == 2) goto LAB_140bebcc4;
    if (1 < (byte)(*param_10 - 1)) {
      *param_10 = 1;
      bVar13 = 0;
      auStack_128[0] = 0;
      goto code_r0x000140bebdd0;
    }
    *param_10 = 2;
    auStack_128[0] = 2;
  }
  pcVar24 = "";
  if (*(char *)*param_8 != '\0') {
    pcVar24 = (char *)*param_8 + 4;
  }
  uStack_110 = *(undefined4 *)(pcVar24 + 8);
  uStack_118 = *(undefined8 *)pcVar24;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_138 = param_7;
  puStack_140 = (undefined4 *)param_6;
  puStack_148 = (undefined8 *)param_5;
  pdb_140c0a810(auStack_128,&uStack_118,param_2,*param_4);
LAB_140bebe5c:
  return;
}

