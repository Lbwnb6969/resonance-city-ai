// VA 0x140bf00b0, PDB extent 7096 bytes
// country_core::systems::ui::ui_update::ui_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/ui_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140bf0977) */
/* WARNING: Removing unreachable block (ram,0x000140bf09c1) */
/* WARNING: Removing unreachable block (ram,0x000140bf0a07) */
/* WARNING: Removing unreachable block (ram,0x000140bf0a1e) */
/* WARNING: Removing unreachable block (ram,0x000140bf0a24) */
/* Matched PDB project procedure: country_core::systems::ui::ui_update::ui_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/ui_update.rs
   Extent: 7096 */

void pdb_140bf00b0(longlong *param_1,uint *param_2,longlong *param_3,ulonglong *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8,
                  longlong *param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong *plVar10;
  uint *puVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *puVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  byte bVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  undefined4 *puVar27;
  byte bVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  undefined1 uVar32;
  ushort uVar33;
  ulonglong in_R11;
  undefined *puVar34;
  undefined *puVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  int iVar39;
  undefined4 uVar40;
  longlong lVar41;
  bool bVar42;
  bool bVar43;
  longlong *extraout_XMM0_Qa;
  longlong *extraout_XMM0_Qa_00;
  undefined1 auVar44 [16];
  longlong *in_XMM1_Qa;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_10111 [65345];
  longlong **pplStack_1d0;
  undefined1 auStack_1c8 [32];
  uint *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_178;
  undefined8 uStack_170;
  longlong *plStack_168;
  longlong lStack_160;
  longlong *plStack_158;
  longlong lStack_150;
  longlong *plStack_148;
  uint *puStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  longlong *plStack_128;
  int iStack_120;
  longlong *plStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  longlong lStack_c0;
  longlong *plStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong *plStack_88;
  int iStack_80;
  undefined1 uStack_79;
  longlong *plStack_78;
  undefined8 uStack_70;
  
  puVar27 = (undefined4 *)auStack_1c8;
  uStack_70 = 0xfffffffffffffffe;
  pplStack_1d0 = (longlong **)0x140bf00f5;
  cVar15 = pdb_140e94b40();
  plStack_148 = param_1;
  puStack_140 = param_2;
  plStack_138 = param_3;
  if (cVar15 == '\0') {
    lStack_178 = 0;
    plVar19 = extraout_XMM0_Qa;
  }
  else {
    puVar34 = &UNK_143066488;
    lVar41 = 0x2f;
    uVar25 = 0x2f;
    pplStack_1d0 = (longlong **)0x140bf0123;
    lVar16 = pdb_140bf4190(&UNK_143066488);
    if (lVar16 == 1) {
      if (0x2f < uVar25) {
LAB_140bf142d:
        puStack_1a8 = (uint *)&UNK_1430665c8;
        pplStack_1d0 = (longlong **)0x140bf144d;
        pdb_142dc8070(&UNK_143066488,0x2f,0);
LAB_140bf144d:
        puStack_1a8 = (uint *)&UNK_1430665e0;
        pplStack_1d0 = (longlong **)0x140bf1470;
        pdb_142dc8070(&UNK_143066488,0x2f);
code_r0x000140bf1471:
                    /* WARNING: Subroutine does not return */
        pplStack_1d0 = (longlong **)0x140bf147d;
        pdb_142dc81f2();
      }
      puVar34 = &UNK_143066488;
      pplStack_1d0 = (longlong **)0x140bf0148;
      uVar17 = pdb_140bf4190(&UNK_143066488);
      if ((uVar17 & 1) != 0) {
        if (0x2f < uVar25 + 2) goto LAB_140bf144d;
        lVar41 = 0x2d - uVar25;
        puVar34 = &UNK_14306648a + uVar25;
      }
    }
    puVar18 = &UNK_143065fff;
    puVar35 = &UNK_143065fd0;
    do {
      pbVar1 = puVar18 + -1;
      uVar21 = (uint)(char)*pbVar1;
      if ((int)uVar21 < 0) {
        bVar28 = puVar18[-2];
        if ((char)bVar28 < -0x40) {
          bVar4 = puVar18[-3];
          if ((char)bVar4 < -0x40) {
            pbVar2 = puVar18 + -4;
            puVar18 = puVar18 + -4;
            uVar21 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar18 = puVar18 + -3;
            uVar21 = bVar4 & 0xf;
          }
          uVar21 = bVar28 & 0x3f | uVar21 << 6;
        }
        else {
          puVar18 = puVar18 + -2;
          uVar21 = bVar28 & 0x1f;
        }
        uVar21 = (uint)(*pbVar1 & 0x3f) | uVar21 << 6;
        if (uVar21 != 0x5c) goto LAB_140bf01f9;
LAB_140bf0215:
        if (puVar18 + -0x143065fcf < (undefined *)0x30) {
          param_2 = (uint *)(0x2e - (longlong)(puVar18 + -0x143065fd0));
          puVar35 = puVar18 + 1;
          goto LAB_140bf0238;
        }
        puStack_1a8 = (uint *)&UNK_1430665a8;
        pplStack_1d0 = (longlong **)0x140bf142d;
        pdb_142dc8070(&UNK_143065fd0,0x2f,puVar18 + -0x143065fcf,0x2f);
        goto LAB_140bf142d;
      }
      puVar18 = puVar18 + -1;
      if (uVar21 == 0x5c) goto LAB_140bf0215;
LAB_140bf01f9:
      if (uVar21 == 0x2f) goto LAB_140bf0215;
    } while (puVar18 != &UNK_143065fd0);
    param_2 = (uint *)0x2f;
LAB_140bf0238:
    pplStack_1d0 = (longlong **)0x140bf023d;
    plVar19 = (longlong *)pdb_140e97000();
    if ((char)plVar19[0xd] != '\x01') {
      pplStack_1d0 = (longlong **)0x140bf13e0;
      plVar19 = (longlong *)pdb_142d8ec20(plVar19,0);
      if (plVar19 == (longlong *)0x0) goto LAB_140bf13e9;
    }
    if (*plVar19 != 0) goto LAB_140bf13b9;
    *plVar19 = -1;
    uStack_198 = 0;
    uStack_1a0 = 1;
    pplStack_1d0 = (longlong **)0x140bf0288;
    puStack_1a8 = param_2;
    plStack_78 = plVar19;
    uStack_170 = pdb_140e94f10(plVar19 + 1,puVar34,lVar41,puVar35);
    *plStack_78 = *plStack_78 + 1;
    lStack_178 = 1;
    plVar19 = extraout_XMM0_Qa_00;
  }
  param_1 = plStack_148;
  lVar16 = param_6[1];
  uVar25 = *(ulonglong *)*param_6;
  uVar36 = 0;
  uVar17 = uVar25 - *(ulonglong *)(lVar16 + 0x18);
  if (uVar25 < *(ulonglong *)(lVar16 + 0x18)) {
    uVar17 = uVar36;
  }
  uVar31 = uVar25 - *(ulonglong *)(lVar16 + 0x38);
  if (uVar25 < *(ulonglong *)(lVar16 + 0x38)) {
    uVar31 = uVar36;
  }
  bVar42 = uVar31 <= *(ulonglong *)(lVar16 + 0x30);
  uVar31 = *(ulonglong *)(lVar16 + 0x30) - uVar31;
  uVar25 = uVar31;
  if (!bVar42) {
    uVar25 = uVar36;
  }
  bVar43 = uVar17 <= *(ulonglong *)(lVar16 + 0x10);
  uVar17 = *(ulonglong *)(lVar16 + 0x10) - uVar17;
  uVar22 = uVar17;
  if (!bVar43) {
    uVar22 = uVar36;
  }
  plStack_88 = (longlong *)CONCAT71(plStack_88._1_7_,bVar43 && uVar17 != 0 || bVar42 && uVar31 != 0)
  ;
  uVar25 = uVar22 + uVar25;
  if (bVar43 && uVar17 != 0 || bVar42 && uVar31 != 0) {
    uVar25 = uVar36;
  }
  *(ulonglong *)*param_6 = *(longlong *)(lVar16 + 0x40) - uVar25;
  lVar16 = param_5[1];
  uVar25 = *(ulonglong *)*param_5;
  uVar17 = uVar25 - *(ulonglong *)(lVar16 + 0x18);
  if (uVar25 < *(ulonglong *)(lVar16 + 0x18)) {
    uVar17 = uVar36;
  }
  uVar31 = uVar25 - *(ulonglong *)(lVar16 + 0x38);
  if (uVar25 < *(ulonglong *)(lVar16 + 0x38)) {
    uVar31 = uVar36;
  }
  bVar42 = uVar31 <= *(ulonglong *)(lVar16 + 0x30);
  uVar31 = *(ulonglong *)(lVar16 + 0x30) - uVar31;
  uVar25 = uVar31;
  if (!bVar42) {
    uVar25 = uVar36;
  }
  bVar43 = uVar17 <= *(ulonglong *)(lVar16 + 0x10);
  uVar17 = *(ulonglong *)(lVar16 + 0x10) - uVar17;
  uVar22 = uVar17;
  if (!bVar43) {
    uVar22 = uVar36;
  }
  plStack_d8 = (longlong *)CONCAT71(plStack_d8._1_7_,bVar43 && uVar17 != 0 || bVar42 && uVar31 != 0)
  ;
  uVar25 = uVar22 + uVar25;
  if (bVar43 && uVar17 != 0 || bVar42 && uVar31 != 0) {
    uVar25 = uVar36;
  }
  *(ulonglong *)*param_5 = *(longlong *)(lVar16 + 0x40) - uVar25;
  puVar6 = (ulonglong *)*param_4;
  uVar25 = param_4[1];
  uVar17 = *puVar6;
  uVar31 = uVar17 - *(ulonglong *)(uVar25 + 0x18);
  if (uVar17 < *(ulonglong *)(uVar25 + 0x18)) {
    uVar31 = uVar36;
  }
  uVar22 = uVar17 - *(ulonglong *)(uVar25 + 0x38);
  if (uVar17 < *(ulonglong *)(uVar25 + 0x38)) {
    uVar22 = uVar36;
  }
  uVar17 = *(ulonglong *)(uVar25 + 0x10);
  uVar7 = *(ulonglong *)(uVar25 + 0x30);
  uVar29 = uVar7 - uVar22;
  if (uVar7 < uVar22) {
    uVar29 = uVar36;
  }
  bVar42 = uVar17 < uVar31;
  uVar37 = uVar17 - uVar31;
  uVar38 = uVar37;
  if (bVar42) {
    uVar38 = uVar36;
  }
  lVar20 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar42 || uVar37 == 0);
  uVar8 = *(ulonglong *)(uVar25 + 0x40);
  in_R11 = (uVar8 - uVar29) - uVar38;
  lVar16 = *(longlong *)(uVar25 + 8);
  lVar41 = *(longlong *)(uVar25 + 0x28);
  *puVar6 = in_R11;
  if (!bVar42 && uVar37 != 0 || uVar7 >= uVar22 && uVar7 - uVar22 != 0) {
    lVar41 = lVar41 + uVar22 * 0x10;
    lVar16 = lVar16 + uVar31 * 0x10;
    if (uVar17 < uVar31) {
      lVar16 = 8;
    }
    in_R11 = 0;
    if (uVar31 < uVar17) {
      in_R11 = lVar16 + -0x10 + uVar38 * 0x10;
    }
    if (uVar7 < uVar22) {
      lVar41 = 8;
    }
    uVar25 = lVar41 + -0x10 + uVar29 * 0x10;
    if (uVar7 <= uVar22) {
      uVar25 = in_R11;
    }
    *puVar6 = uVar8;
    uVar36 = (ulonglong)(*(byte *)(uVar25 + 8) ^ 1);
  }
  plStack_78 = (longlong *)*plStack_148;
  if (*(longlong *)((longlong)plStack_78 + 0x10) == 0) {
    iVar39 = 2;
    cVar15 = *(char *)((longlong)plStack_78 + 0x18);
    if (cVar15 == '\0') goto LAB_140bf04d7;
LAB_140bf0459:
    if ((cVar15 == '\x01') && (cVar15 = '\x01', *(char *)((longlong)plStack_78 + 0x19) != '\0')) {
      if (iVar39 == 2) {
        *(undefined4 *)plStack_148[2] = *(undefined4 *)((longlong)plStack_148 + 0x1c);
        if (*(char *)((longlong)plStack_78 + 0x18) != '\0') {
          plVar10 = *(longlong **)((longlong)plStack_78 + 0x20);
          LOCK();
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (*plVar10 == 0) {
            pplStack_1d0 = (longlong **)0x140bf04b1;
            plVar19 = (longlong *)pdb_140c7b000((longlong)plStack_78 + 0x20);
          }
        }
        *(undefined1 *)((longlong)plStack_78 + 0x18) = 0;
LAB_140bf04dd:
        cVar15 = '\0';
      }
      else {
        lStack_90 = lVar20;
        iStack_80 = iVar39;
        if (*(longlong *)((longlong)plStack_78 + 0x38) == lVar20) {
          pplStack_1d0 = (longlong **)0x140bf0657;
          plStack_d0 = (longlong *)pdb_140befec0(plStack_78,lVar20);
          lStack_110 = CONCAT44(lStack_110._4_4_,iStack_120);
          plStack_118 = plStack_128;
          plStack_c8 = plStack_168;
          lStack_c0 = lStack_160;
          plStack_b8 = plStack_158;
          lStack_b0 = lStack_150;
          *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
          if (*(char *)((longlong)plStack_78 + 0x18) != '\0') {
            plVar19 = *(longlong **)((longlong)plStack_78 + 0x20);
            LOCK();
            *plVar19 = *plVar19 + -1;
            UNLOCK();
            if (*plVar19 == 0) {
              pplStack_1d0 = (longlong **)0x140bf06c3;
              pdb_140c7b000((longlong)plStack_78 + 0x20);
            }
          }
        }
        else {
          pplStack_1d0 = (longlong **)0x140bf06d4;
          plStack_130 = (longlong *)pdb_140befec0(plStack_78,lVar20);
          plStack_b8 = (longlong *)plStack_130[7];
          plStack_c8 = (longlong *)plStack_130[5];
          lStack_c0 = plStack_130[6];
          *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
          lVar16 = *param_9;
          lVar41 = *(longlong *)(lVar16 + 0x30);
          uVar26 = *(undefined8 *)(lVar16 + 0x40);
          plStack_d0 = plStack_130;
          if (lVar41 == *(longlong *)(lVar16 + 0x20)) {
            pplStack_1d0 = (longlong **)0x140bf0721;
            pdb_142d7e6e0(lVar16 + 0x20);
          }
          lVar20 = *(longlong *)(lVar16 + 0x28);
          lVar23 = lVar41 * 0x20;
          *(longlong **)(lVar20 + 0x10 + lVar23) = plStack_b8;
          *(longlong *)(lVar20 + lVar23) = (longlong)plStack_c8;
          ((longlong *)(lVar20 + lVar23))[1] = lStack_c0;
          *(undefined8 *)(lVar20 + 0x18 + lVar23) = uVar26;
          *(longlong *)(lVar16 + 0x30) = lVar41 + 1;
          *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
          plStack_118 = plStack_128;
          lStack_110 = CONCAT44(lStack_110._4_4_,iStack_120);
          plStack_c8 = plStack_168;
          lStack_c0 = lStack_160;
          plStack_b8 = plStack_158;
          lStack_b0 = lStack_150;
          *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
          if (*(char *)((longlong)plStack_78 + 0x18) != '\0') {
            plVar19 = *(longlong **)((longlong)plStack_78 + 0x20);
            LOCK();
            *plVar19 = *plVar19 + -1;
            UNLOCK();
            if (*plVar19 == 0) {
              pplStack_1d0 = (longlong **)0x140bf07b7;
              pdb_140c7b000((longlong)plStack_78 + 0x20);
            }
          }
        }
        *(undefined2 *)((longlong)plStack_78 + 0x18) = 0x101;
        *(longlong **)((longlong)plStack_78 + 0x20) = plStack_d0;
        *(int *)((longlong)plStack_78 + 0x28) = iStack_80;
        *(longlong **)((longlong)plStack_78 + 0x2c) = plStack_118;
        *(undefined4 *)((longlong)plStack_78 + 0x34) = (undefined4)lStack_110;
        *(longlong *)((longlong)plStack_78 + 0x38) = lStack_90;
        *(longlong **)((longlong)plStack_78 + 0x40) = plStack_c8;
        *(longlong *)((longlong)plStack_78 + 0x48) = lStack_c0;
        *(longlong **)((longlong)plStack_78 + 0x50) = plStack_b8;
        *(longlong *)((longlong)plStack_78 + 0x58) = lStack_b0;
        lVar20 = lStack_90;
        iVar39 = iStack_80;
        in_XMM1_Qa = plStack_b8;
        plVar19 = plStack_c8;
      }
    }
  }
  else {
    piVar9 = *(int **)((longlong)plStack_78 + 8);
    iVar39 = *piVar9;
    iStack_120 = piVar9[3];
    plStack_128 = *(longlong **)(piVar9 + 1);
    lVar20 = *(longlong *)(piVar9 + 4);
    plStack_168 = *(longlong **)(piVar9 + 6);
    lStack_160 = *(longlong *)(piVar9 + 8);
    plVar19 = *(longlong **)(piVar9 + 10);
    lStack_150 = *(longlong *)(piVar9 + 0xc);
    cVar15 = *(char *)((longlong)plStack_78 + 0x18);
    plStack_158 = plVar19;
    if (cVar15 != '\0') goto LAB_140bf0459;
LAB_140bf04d7:
    if (iVar39 == 2) goto LAB_140bf04dd;
    pplStack_1d0 = (longlong **)0x140bf04f0;
    plStack_130 = (longlong *)pdb_140befec0(plStack_78,lVar20);
    plStack_b8 = (longlong *)plStack_130[7];
    plStack_c8 = (longlong *)plStack_130[5];
    lStack_c0 = plStack_130[6];
    *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
    lVar16 = *param_9;
    lVar41 = *(longlong *)(lVar16 + 0x30);
    uVar26 = *(undefined8 *)(lVar16 + 0x40);
    plStack_d0 = plStack_130;
    lStack_90 = lVar20;
    iStack_80 = iVar39;
    if (lVar41 == *(longlong *)(lVar16 + 0x20)) {
      pplStack_1d0 = (longlong **)0x140bf0547;
      pdb_142d7e6e0(lVar16 + 0x20);
    }
    lVar20 = *(longlong *)(lVar16 + 0x28);
    lVar23 = lVar41 * 0x20;
    *(longlong **)(lVar20 + 0x10 + lVar23) = plStack_b8;
    *(longlong *)(lVar20 + lVar23) = (longlong)plStack_c8;
    ((longlong *)(lVar20 + lVar23))[1] = lStack_c0;
    *(undefined8 *)(lVar20 + 0x18 + lVar23) = uVar26;
    *(longlong *)(lVar16 + 0x30) = lVar41 + 1;
    *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
    plStack_118 = plStack_128;
    lStack_110 = CONCAT44(lStack_110._4_4_,iStack_120);
    plStack_c8 = plStack_168;
    lStack_c0 = lStack_160;
    plStack_b8 = plStack_158;
    lStack_b0 = lStack_150;
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    if (*(char *)((longlong)plStack_78 + 0x18) != '\0') {
      plVar19 = *(longlong **)((longlong)plStack_78 + 0x20);
      LOCK();
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (*plVar19 == 0) {
        pplStack_1d0 = (longlong **)0x140bf05da;
        pdb_140c7b000((longlong)plStack_78 + 0x20);
      }
    }
    *(undefined2 *)((longlong)plStack_78 + 0x18) = 0x101;
    *(longlong **)((longlong)plStack_78 + 0x20) = plStack_d0;
    *(int *)((longlong)plStack_78 + 0x28) = iStack_80;
    *(longlong **)((longlong)plStack_78 + 0x2c) = plStack_118;
    *(undefined4 *)((longlong)plStack_78 + 0x34) = (undefined4)lStack_110;
    *(longlong *)((longlong)plStack_78 + 0x38) = lStack_90;
    *(longlong **)((longlong)plStack_78 + 0x40) = plStack_c8;
    *(longlong *)((longlong)plStack_78 + 0x48) = lStack_c0;
    *(longlong **)((longlong)plStack_78 + 0x50) = plStack_b8;
    *(longlong *)((longlong)plStack_78 + 0x58) = lStack_b0;
    cVar15 = '\x01';
    lVar20 = lStack_90;
    iVar39 = iStack_80;
    in_XMM1_Qa = plStack_b8;
    plVar19 = plStack_c8;
  }
  puVar11 = *(uint **)puStack_140;
  bVar28 = (byte)plStack_88 | (byte)uVar36 | (byte)plStack_d8 | *puVar11 == 3;
  if ((bVar28 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140bf0848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_143066634 + *(int *)(&UNK_143066634 + (ulonglong)*puVar11 * 4)))();
    return;
  }
  fVar47 = 0.0;
  puStack_140 = puVar11;
  if (cVar15 == '\0') goto LAB_140bf0f0b;
  if (cVar15 != '\x02') goto LAB_140bf0f0b;
  bVar4 = *(byte *)((longlong)plStack_78 + 0x19);
  bVar24 = 3;
  if (1 < bVar4) {
    bVar24 = bVar4 - 2;
  }
  param_3 = (longlong *)((longlong)plStack_78 + 0x20);
  if (1 < bVar24 - 1) {
    if (bVar24 == 0) {
      if (bVar4 == 4) goto LAB_140bf0ef6;
      goto LAB_140bf0f0b;
    }
    if (iVar39 == 2) {
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      if (*(char *)((longlong)plStack_78 + 0x18) != '\0') {
        plVar10 = (longlong *)*param_3;
        LOCK();
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          pplStack_1d0 = (longlong **)0x140bf0b17;
          plVar19 = (longlong *)pdb_140c7b000(param_3);
        }
      }
      *(undefined1 *)((longlong)plStack_78 + 0x18) = 0;
      goto LAB_140bf0f0b;
    }
    lStack_90 = lVar20;
    iStack_80 = iVar39;
    if (lVar20 == *(longlong *)((longlong)plStack_78 + 0x38)) {
      plStack_88 = (longlong *)*param_3;
      LOCK();
      lVar16 = *plStack_88;
      *plStack_88 = *plStack_88 + 1;
      UNLOCK();
      if (*plStack_88 == 0 || SCARRY8(lVar16,1) != *plStack_88 < 0) goto LAB_140bf147e;
      lStack_110 = CONCAT44(lStack_110._4_4_,iStack_120);
      plStack_118 = plStack_128;
      plStack_c8 = plStack_168;
      lStack_c0 = lStack_160;
      plStack_b8 = plStack_158;
      lStack_b0 = lStack_150;
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      if (*(char *)((longlong)plStack_78 + 0x18) != '\0') {
        plVar19 = (longlong *)*param_3;
        LOCK();
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          pplStack_1d0 = (longlong **)0x140bf0ba7;
          pdb_140c7b000(param_3);
        }
      }
    }
    else {
      pplStack_1d0 = (longlong **)0x140bf0cb0;
      plStack_130 = (longlong *)pdb_140befec0(plStack_78,lVar20);
      plStack_b8 = (longlong *)plStack_130[7];
      plStack_c8 = (longlong *)plStack_130[5];
      lStack_c0 = plStack_130[6];
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      lVar16 = *param_9;
      lVar41 = *(longlong *)(lVar16 + 0x30);
      uVar26 = *(undefined8 *)(lVar16 + 0x40);
      plStack_88 = plStack_130;
      if (lVar41 == *(longlong *)(lVar16 + 0x20)) {
        pplStack_1d0 = (longlong **)0x140bf0cfc;
        pdb_142d7e6e0(lVar16 + 0x20);
      }
      lVar20 = *(longlong *)(lVar16 + 0x28);
      lVar23 = lVar41 * 0x20;
      *(longlong **)(lVar20 + 0x10 + lVar23) = plStack_b8;
      *(longlong *)(lVar20 + lVar23) = (longlong)plStack_c8;
      ((longlong *)(lVar20 + lVar23))[1] = lStack_c0;
      *(undefined8 *)(lVar20 + 0x18 + lVar23) = uVar26;
      *(longlong *)(lVar16 + 0x30) = lVar41 + 1;
      *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
      plStack_118 = plStack_128;
      lStack_110 = CONCAT44(lStack_110._4_4_,iStack_120);
      plStack_c8 = plStack_168;
      lStack_c0 = lStack_160;
      plStack_b8 = plStack_158;
      lStack_b0 = lStack_150;
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      if (*(char *)((longlong)plStack_78 + 0x18) != '\0') {
        plVar19 = (longlong *)*param_3;
        LOCK();
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          pplStack_1d0 = (longlong **)0x140bf0d7f;
          pdb_140c7b000(param_3);
        }
      }
    }
    *(undefined2 *)((longlong)plStack_78 + 0x18) = 0x101;
    *(longlong **)((longlong)plStack_78 + 0x20) = plStack_88;
    *(int *)((longlong)plStack_78 + 0x28) = iStack_80;
    *(longlong **)((longlong)plStack_78 + 0x2c) = plStack_118;
    *(undefined4 *)((longlong)plStack_78 + 0x34) = (undefined4)lStack_110;
    *(longlong *)((longlong)plStack_78 + 0x38) = lStack_90;
    *(longlong **)((longlong)plStack_78 + 0x40) = plStack_c8;
    *(longlong *)((longlong)plStack_78 + 0x48) = lStack_c0;
    *(longlong **)((longlong)plStack_78 + 0x50) = plStack_b8;
    *(longlong *)((longlong)plStack_78 + 0x58) = lStack_b0;
    in_XMM1_Qa = plStack_b8;
    plVar19 = plStack_c8;
    goto LAB_140bf0f0b;
  }
  if ((bVar28 & 1) != 0) {
    lStack_e8 = *(longlong *)((longlong)plStack_78 + 0x58);
    plStack_c8 = *(longlong **)((longlong)plStack_78 + 0x28);
    lStack_c0 = *(longlong *)((longlong)plStack_78 + 0x30);
    plStack_108 = *(longlong **)((longlong)plStack_78 + 0x38);
    lStack_100 = *(longlong *)((longlong)plStack_78 + 0x40);
    lStack_f8 = *(longlong *)((longlong)plStack_78 + 0x48);
    lStack_f0 = *(longlong *)((longlong)plStack_78 + 0x50);
    plStack_88 = *(longlong **)((longlong)plStack_78 + 0x20);
    lVar41 = *(longlong *)((longlong)plStack_78 + 0x38);
    LOCK();
    lVar16 = *plStack_88;
    *plStack_88 = *plStack_88 + 1;
    UNLOCK();
    plStack_b8 = plStack_108;
    lStack_b0 = lStack_100;
    lStack_a8 = lStack_f8;
    lStack_a0 = lStack_f0;
    lStack_98 = lStack_e8;
    if (*plStack_88 != 0 && SCARRY8(lVar16,1) == *plStack_88 < 0) {
      plStack_d8 = (longlong *)((longlong)plStack_78 + 0x28);
      plStack_138 = (longlong *)CONCAT71(plStack_138._1_7_,lVar20 == lVar41 && iVar39 != 2);
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      plStack_118 = plStack_c8;
      lStack_110 = lStack_c0;
      if (*(char *)((longlong)plStack_78 + 0x18) != '\0') {
        plVar19 = (longlong *)*param_3;
        LOCK();
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          pplStack_1d0 = (longlong **)0x140bf0955;
          pdb_140c7b000(param_3);
        }
      }
      *(undefined1 *)((longlong)plStack_78 + 0x18) = 2;
      *(undefined1 *)((longlong)plStack_78 + 0x19) = plStack_138._0_1_;
      *(longlong **)((longlong)plStack_78 + 0x20) = plStack_88;
      plStack_d8[6] = lStack_e8;
      plStack_d8[4] = lStack_f8;
      plStack_d8[5] = lStack_f0;
      plStack_d8[2] = (longlong)plStack_108;
      plStack_d8[3] = lStack_100;
      *plStack_d8 = (longlong)plStack_118;
      plStack_d8[1] = lStack_110;
      in_XMM1_Qa = plStack_108;
      plVar19 = plStack_118;
      goto LAB_140bf0f0b;
    }
    goto LAB_140bf147e;
  }
  param_4 = (ulonglong *)((longlong)plStack_78 + 0x90);
  uVar25 = *(ulonglong *)((longlong)plStack_78 + 0x90);
  if (uVar25 < 0xfffffffffffffff0 && (char)(((uint)uVar25 & 8) >> 3) == '\0') {
    LOCK();
    uVar17 = *param_4;
    if (uVar25 == uVar17) {
      *param_4 = uVar25 + 0x10;
    }
    UNLOCK();
    if (uVar25 != uVar17) goto LAB_140bf0ad5;
  }
  else {
LAB_140bf0ad5:
    pplStack_1d0 = (longlong **)0x140bf0ae5;
    pdb_142dbb5f0(param_4,0,bVar28,1000000000);
  }
  pplStack_1d0 = (longlong **)0x140bf0bc4;
  pdb_140e9a150(param_4);
  pplStack_1d0 = (longlong **)0x140bf0bd4;
  pdb_140e9a150((ulonglong)param_4 | 1);
  plVar19 = plStack_78;
  if (*(longlong *)((longlong)plStack_78 + 0xb0) == 0) {
    plVar19 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)((longlong)plStack_78 + 0x38);
    pplStack_1d0 = (longlong **)0x140bf0c00;
    uVar17 = pdb_1400af0a0((longlong)plStack_78 + 0xb8,plVar10);
    lVar16 = *(longlong *)((longlong)plVar19 + 0x98);
    uVar25 = *(ulonglong *)((longlong)plVar19 + 0xa0);
    bVar28 = (byte)(uVar17 >> 0x39);
    auVar44 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar44 = pshuflw(auVar44,auVar44,0);
    lVar41 = 0;
    while( true ) {
      uVar17 = uVar17 & uVar25;
      pcVar3 = (char *)(lVar16 + uVar17);
      auVar46[0] = -(*pcVar3 == auVar44[0]);
      auVar46[1] = -(pcVar3[1] == auVar44[1]);
      auVar46[2] = -(pcVar3[2] == auVar44[2]);
      auVar46[3] = -(pcVar3[3] == auVar44[3]);
      auVar46[4] = -(pcVar3[4] == auVar44[4]);
      auVar46[5] = -(pcVar3[5] == auVar44[5]);
      auVar46[6] = -(pcVar3[6] == auVar44[6]);
      auVar46[7] = -(pcVar3[7] == auVar44[7]);
      auVar46[8] = -(pcVar3[8] == auVar44[0]);
      auVar46[9] = -(pcVar3[9] == auVar44[1]);
      auVar46[10] = -(pcVar3[10] == auVar44[2]);
      auVar46[0xb] = -(pcVar3[0xb] == auVar44[3]);
      auVar46[0xc] = -(pcVar3[0xc] == auVar44[4]);
      auVar46[0xd] = -(pcVar3[0xd] == auVar44[5]);
      auVar46[0xe] = -(pcVar3[0xe] == auVar44[6]);
      auVar46[0xf] = -(pcVar3[0xf] == auVar44[7]);
      uVar33 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
      uVar21 = (uint)uVar33;
      if (uVar33 != 0) {
        do {
          uVar13 = 0;
          for (uVar14 = uVar21; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          in_R11 = lVar16 + (uVar13 + uVar17 & uVar25) * -0x10;
          if (*plVar10 == *(longlong *)(in_R11 - 0x10)) goto LAB_140bf0de2;
          uVar33 = (ushort)(uVar21 - 1) & (ushort)uVar21;
          uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar33);
        } while (uVar33 != 0);
      }
      auVar45[0] = -(*pcVar3 == -1);
      auVar45[1] = -(pcVar3[1] == -1);
      auVar45[2] = -(pcVar3[2] == -1);
      auVar45[3] = -(pcVar3[3] == -1);
      auVar45[4] = -(pcVar3[4] == -1);
      auVar45[5] = -(pcVar3[5] == -1);
      auVar45[6] = -(pcVar3[6] == -1);
      auVar45[7] = -(pcVar3[7] == -1);
      auVar45[8] = -(pcVar3[8] == -1);
      auVar45[9] = -(pcVar3[9] == -1);
      auVar45[10] = -(pcVar3[10] == -1);
      auVar45[0xb] = -(pcVar3[0xb] == -1);
      auVar45[0xc] = -(pcVar3[0xc] == -1);
      auVar45[0xd] = -(pcVar3[0xd] == -1);
      auVar45[0xe] = -(pcVar3[0xe] == -1);
      auVar45[0xf] = -(pcVar3[0xf] == -1);
      if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar45 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar45 >> 0x3f,0) & 1) != 0) || (SUB161(auVar45 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar45 >> 0x4f,0) & 1) != 0) || (SUB161(auVar45 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar45 >> 0x5f,0) & 1) != 0) || (SUB161(auVar45 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar45 >> 0x6f,0) & 1) != 0) || (SUB161(auVar45 >> 0x77,0) & 1) != 0) ||
          auVar45[0xf] < '\0') break;
      uVar17 = uVar17 + lVar41 + 0x10;
      lVar41 = lVar41 + 0x10;
    }
    in_R11 = 0;
LAB_140bf0de2:
    plVar19 = (longlong *)(in_R11 - 8);
    if (in_R11 == 0) {
      plVar19 = (longlong *)0x0;
    }
  }
  if (plVar19 == (longlong *)0x0) {
    plVar19 = param_3;
  }
  plVar19 = (longlong *)*plVar19;
  LOCK();
  lVar16 = *plVar19;
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  if (*plVar19 != 0 && SCARRY8(lVar16,1) == *plVar19 < 0) {
    uStack_79 = 1;
    pplStack_1d0 = (longlong **)0x140bf0e14;
    plStack_118 = plVar19;
    pdb_140e9a350(param_4);
    uStack_79 = 1;
    pplStack_1d0 = (longlong **)0x140bf0e24;
    pdb_140e9a350((ulonglong)param_4 | 1);
    LOCK();
    uVar25 = *param_4;
    *param_4 = *param_4 - 0x10;
    UNLOCK();
    if ((uVar25 & 0xfffffffffffffff2) == 0x12) goto LAB_140bf13f5;
    do {
      plStack_88 = (longlong *)((longlong)plStack_78 + 0x28);
      lStack_98 = *(longlong *)((longlong)plStack_78 + 0x58);
      plStack_c8 = (longlong *)*plStack_88;
      lStack_c0 = *(longlong *)((longlong)plStack_78 + 0x30);
      plStack_b8 = *(longlong **)((longlong)plStack_78 + 0x38);
      lStack_b0 = *(longlong *)((longlong)plStack_78 + 0x40);
      lStack_a8 = *(longlong *)((longlong)plStack_78 + 0x48);
      lStack_a0 = *(longlong *)((longlong)plStack_78 + 0x50);
      plStack_d8 = plStack_118;
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      if (*(char *)((longlong)plStack_78 + 0x18) != '\0') {
        plVar19 = (longlong *)*param_3;
        LOCK();
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          pplStack_1d0 = (longlong **)0x140bf0ea9;
          pdb_140c7b000(param_3);
        }
      }
      *(undefined2 *)((longlong)plStack_78 + 0x18) = 0x402;
      *(longlong **)((longlong)plStack_78 + 0x20) = plStack_d8;
      plStack_88[6] = lStack_98;
      plStack_88[4] = lStack_a8;
      plStack_88[5] = lStack_a0;
      plStack_88[2] = (longlong)plStack_b8;
      plStack_88[3] = lStack_b0;
      *plStack_88 = (longlong)plStack_c8;
      plStack_88[1] = lStack_c0;
      in_XMM1_Qa = plStack_b8;
      plVar19 = plStack_c8;
LAB_140bf0ef6:
      fVar47 = *(float *)((longlong)plStack_78 + 200) + *(float *)(*plStack_138 + 0x28);
LAB_140bf0f0b:
      uVar5 = *(undefined4 *)((longlong)param_1 + 0x1c);
      param_1 = (longlong *)param_1[2];
      *(undefined4 *)param_1 = uVar5;
      *(float *)((longlong)plStack_78 + 200) = fVar47;
      if (*(char *)((longlong)plStack_78 + 0x18) == '\0') {
        *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
        lVar16 = *param_7;
        lVar41 = *(longlong *)(lVar16 + 0x30);
        uVar26 = *(undefined8 *)(lVar16 + 0x40);
        if (lVar41 == *(longlong *)(lVar16 + 0x20)) {
          pplStack_1d0 = (longlong **)0x140bf0fe0;
          pdb_142d7e6e0(lVar16 + 0x20);
        }
        lVar20 = *(longlong *)(lVar16 + 0x28);
        lVar23 = lVar41 * 0x20;
        *(undefined8 *)(lVar20 + lVar23) = uVar26;
        *(undefined4 *)(lVar20 + 8 + lVar23) = 0;
        *(undefined1 *)(lVar20 + 0x18 + lVar23) = 0;
        *(longlong *)(lVar16 + 0x30) = lVar41 + 1;
        *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
        goto LAB_140bf11a5;
      }
      lVar16 = *(longlong *)((longlong)plStack_78 + 0x20);
      if (*(char *)(lVar16 + 0x88) != '\x02') {
        if (*(char *)(lVar16 + 0x88) == '\x01') {
          uVar32 = *(undefined1 *)(lVar16 + 0x89);
          *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
          lVar16 = *param_7;
          lVar41 = *(longlong *)(lVar16 + 0x30);
          uVar26 = *(undefined8 *)(lVar16 + 0x40);
          if (lVar41 == *(longlong *)(lVar16 + 0x20)) {
            pplStack_1d0 = (longlong **)0x140bf0f7f;
            pdb_142d7e6e0(lVar16 + 0x20);
          }
          lVar20 = *(longlong *)(lVar16 + 0x28);
          lVar23 = lVar41 * 0x20;
          *(undefined8 *)(lVar20 + lVar23) = uVar26;
          *(undefined4 *)(lVar20 + 8 + lVar23) = 0;
          *(undefined1 *)(lVar20 + 0x18 + lVar23) = uVar32;
          *(longlong *)(lVar16 + 0x30) = lVar41 + 1;
          *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
          bVar28 = *(byte *)((longlong)plStack_78 + 0x59);
        }
        else {
          *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
          lVar16 = *param_7;
          lVar41 = *(longlong *)(lVar16 + 0x30);
          uVar26 = *(undefined8 *)(lVar16 + 0x40);
          if (lVar41 == *(longlong *)(lVar16 + 0x20)) {
            pplStack_1d0 = (longlong **)0x140bf106e;
            pdb_142d7e6e0(lVar16 + 0x20);
          }
          lVar20 = *(longlong *)(lVar16 + 0x28);
          lVar23 = lVar41 * 0x20;
          *(undefined8 *)(lVar20 + lVar23) = uVar26;
          *(undefined4 *)(lVar20 + 8 + lVar23) = 0;
          *(undefined1 *)(lVar20 + 0x18 + lVar23) = 0;
          *(longlong *)(lVar16 + 0x30) = lVar41 + 1;
          *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
          bVar28 = *(byte *)((longlong)plStack_78 + 0x59);
        }
        goto joined_r0x000140bf10a1;
      }
      uVar32 = *(undefined1 *)(lVar16 + 0x89);
      fVar48 = (float)*(undefined8 *)(lVar16 + 0x8c);
      fVar49 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x8c) >> 0x20);
      fVar47 = *(float *)(lVar16 + 0x94);
      puVar34 = &UNK_143066648 + *(int *)(&UNK_143066648 + (ulonglong)*(byte *)(lVar16 + 0x98) * 4);
      plStack_148 = (longlong *)CONCAT71(plStack_148._1_7_,uVar32);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(lVar16 + 0x98)) {
      case 0:
        lVar41 = 8;
        break;
      case 1:
        if (*(ulonglong *)((longlong)plStack_78 + 0x40) < *(ulonglong *)(lVar16 + 0xb0)) {
          puVar30 = (undefined8 *)
                    (*(ulonglong *)((longlong)plStack_78 + 0x40) * 0xc +
                    *(longlong *)(lVar16 + 0xa8));
          goto code_r0x000140bf10ea;
        }
        goto code_r0x000140bf1471;
      default:
        uVar40 = 0;
        goto code_r0x000140bf10fe;
      case 6:
        lVar41 = 4;
        break;
      case 8:
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      case 9:
        puVar34 = (undefined *)(ulonglong)*(byte *)(param_7 + 3);
        uVar32 = *(undefined1 *)((longlong)param_7 + 1);
        goto code_r0x000140bf1ce8;
      case 10:
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      case 0xb:
        pplStack_1d0 = &plStack_148;
        puVar27 = (undefined4 *)auStack_10111;
code_r0x000140bf1ce8:
        **(undefined4 **)(puVar34 + 0x10) = *(undefined4 *)(puVar34 + 0x1c);
        *(undefined1 *)(param_7 + 4) = 0x48;
        *(undefined1 *)((longlong)param_7 + 0x21) = uVar32;
        *(short *)((longlong)param_7 + 0x22) = (short)in_R11;
        *(longlong **)((longlong)param_7 + 0x24) = in_XMM1_Qa;
        *(int *)((longlong)param_7 + 0x2c) = (int)plVar19;
        param_7[6] = lVar16;
        *(char *)(param_7 + 7) = (char)plStack_78;
        uVar5 = *(undefined4 *)((longlong)puVar27 + 3);
        *(undefined4 *)((longlong)param_7 + 0x39) = *puVar27;
        *(undefined4 *)((longlong)param_7 + 0x3c) = uVar5;
        return;
      }
      puVar30 = (undefined8 *)(lVar16 + 0x98 + lVar41);
code_r0x000140bf10ea:
      fVar48 = fVar48 + (float)*puVar30;
      fVar49 = fVar49 + (float)((ulonglong)*puVar30 >> 0x20);
      fVar47 = fVar47 + *(float *)(puVar30 + 1);
      uVar40 = 1;
code_r0x000140bf10fe:
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      lVar16 = *param_7;
      lVar41 = *(longlong *)(lVar16 + 0x30);
      uVar26 = *(undefined8 *)(lVar16 + 0x40);
      if (lVar41 == *(longlong *)(lVar16 + 0x20)) {
        pplStack_1d0 = (longlong **)0x140bf1121;
        pdb_142d7e6e0(lVar16 + 0x20);
      }
      lVar20 = *(longlong *)(lVar16 + 0x28);
      lVar23 = lVar41 * 0x20;
      *(undefined8 *)(lVar20 + lVar23) = uVar26;
      *(undefined4 *)(lVar20 + 8 + lVar23) = uVar40;
      *(ulonglong *)(lVar20 + 0xc + lVar23) = CONCAT44(fVar49,fVar48);
      *(float *)(lVar20 + 0x14 + lVar23) = fVar47;
      *(undefined1 *)(lVar20 + 0x18 + lVar23) = plStack_148._0_1_;
      *(longlong *)(lVar16 + 0x30) = lVar41 + 1;
      *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
      bVar28 = *(byte *)((longlong)plStack_78 + 0x59);
joined_r0x000140bf10a1:
      if (((bVar28 & 8) == 0) || (2 < *puStack_140)) {
LAB_140bf11a5:
        *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
        param_3 = (longlong *)*param_8;
        lVar16 = param_3[6];
        lVar41 = param_3[8];
        if (lVar16 == param_3[4]) {
          pplStack_1d0 = (longlong **)0x140bf11c8;
          pdb_142d7e980(param_3 + 4);
        }
        lVar20 = param_3[5];
        uVar26 = 0x100000003;
      }
      else {
        *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
        param_3 = (longlong *)*param_8;
        lVar16 = param_3[6];
        lVar41 = param_3[8];
        if (lVar16 == param_3[4]) {
          pplStack_1d0 = (longlong **)0x140bf118d;
          pdb_142d7e980(param_3 + 4);
        }
        lVar20 = param_3[5];
        uVar26 = 0x100000002;
      }
      *(undefined8 *)(lVar20 + lVar16 * 0x10) = uVar26;
      *(longlong *)(lVar20 + 8 + lVar16 * 0x10) = lVar41;
      param_4 = (ulonglong *)(lVar16 + 1);
      param_3[6] = (longlong)param_4;
      param_3[8] = param_3[8] + 1;
      if (*(char *)((longlong)plStack_78 + 0x18) == '\x02') {
        bVar28 = *(byte *)((longlong)plStack_78 + 0x19);
        cVar15 = '\x03';
        if (1 < bVar28) {
          cVar15 = bVar28 - 2;
        }
        if (cVar15 == '\x01') {
          lVar16 = *(longlong *)((longlong)plStack_78 + 0x20);
          plStack_b8 = *(longlong **)(lVar16 + 0x50);
          plStack_c8 = *(longlong **)(lVar16 + 0x40);
          lStack_c0 = *(longlong *)(lVar16 + 0x48);
          *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
          param_3 = (longlong *)*param_9;
          lVar16 = param_3[6];
          lVar41 = param_3[8];
          if (lVar16 == param_3[4]) {
            pplStack_1d0 = (longlong **)0x140bf12c9;
            pdb_142d7e6e0(param_3 + 4);
          }
        }
        else {
          if (cVar15 != '\x03') goto LAB_140bf134a;
          if ((bVar28 & 1) == 0) {
            lVar16 = *(longlong *)((longlong)plStack_78 + 0x20);
            plStack_b8 = *(longlong **)(lVar16 + 0x68);
            plStack_c8 = *(longlong **)(lVar16 + 0x58);
            lStack_c0 = *(longlong *)(lVar16 + 0x60);
            *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
            param_3 = (longlong *)*param_9;
            lVar16 = param_3[6];
            lVar41 = param_3[8];
            if (lVar16 == param_3[4]) {
              pplStack_1d0 = (longlong **)0x140bf1310;
              pdb_142d7e6e0(param_3 + 4);
            }
          }
          else {
            lVar16 = *(longlong *)((longlong)plStack_78 + 0x20);
            plStack_b8 = *(longlong **)(lVar16 + 0x80);
            plStack_c8 = *(longlong **)(lVar16 + 0x70);
            lStack_c0 = *(longlong *)(lVar16 + 0x78);
            *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
            param_3 = (longlong *)*param_9;
            lVar16 = param_3[6];
            lVar41 = param_3[8];
            if (lVar16 == param_3[4]) {
              pplStack_1d0 = (longlong **)0x140bf127f;
              pdb_142d7e6e0(param_3 + 4);
            }
          }
        }
        lVar20 = param_3[5];
        lVar23 = lVar16 * 0x20;
        *(longlong **)(lVar20 + 0x10 + lVar23) = plStack_b8;
        *(undefined8 *)(lVar20 + lVar23) = plStack_c8;
        ((undefined8 *)(lVar20 + lVar23))[1] = lStack_c0;
        *(longlong *)(lVar20 + 0x18 + lVar23) = lVar41;
        param_4 = (ulonglong *)(lVar16 + 1);
        param_3[6] = (longlong)param_4;
        param_3[8] = param_3[8] + 1;
      }
LAB_140bf134a:
      *(undefined4 *)param_1 = uVar5;
      pplStack_1d0 = (longlong **)0x140bf1358;
      pdb_140cac1d0((longlong)plStack_78 + 0x98);
      if (lStack_178 == 0) {
        return;
      }
      pplStack_1d0 = (longlong **)0x140bf1365;
      plVar19 = (longlong *)pdb_140e97000();
      if ((char)plVar19[0xd] != '\x01') goto LAB_140bf13c5;
      do {
        if (*plVar19 == 0) {
          *plVar19 = -1;
          pplStack_1d0 = (longlong **)0x140bf138c;
          plStack_78 = plVar19;
          pdb_140e95370(plVar19 + 1,uStack_170);
          *plStack_78 = *plStack_78 + 1;
          return;
        }
LAB_140bf13b9:
        pplStack_1d0 = (longlong **)0x140bf13c5;
        plVar19 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140bf13c5:
        pplStack_1d0 = (longlong **)0x140bf13cf;
        plVar19 = (longlong *)pdb_142d8ec20(plVar19,0);
      } while (plVar19 != (longlong *)0x0);
LAB_140bf13e9:
      pplStack_1d0 = (longlong **)0x140bf13f5;
      pdb_142dc7890(&UNK_143326860);
LAB_140bf13f5:
      uStack_79 = 1;
      pplStack_1d0 = (longlong **)0x140bf1404;
      pdb_142dbbf50(param_4);
    } while( true );
  }
LAB_140bf147e:
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}

