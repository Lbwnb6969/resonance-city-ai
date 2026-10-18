// VA 0x1408d84d0, PDB extent 1607 bytes
// system_decorator::replay_decorator::replay_decorator
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/replay_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::replay_decorator::replay_decorator
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/replay_decorator.rs
   Extent: 1607 */

void pdb_1408d84d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  char cVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  undefined1 (*pauVar22) [16];
  char *pcVar23;
  longlong lVar24;
  longlong lVar25;
  char *pcVar26;
  char *pcVar27;
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  ulonglong *puStack_90;
  ulonglong uStack_88;
  ulonglong *puStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lVar15 = *param_2;
  pdb_140a6d970(lVar15);
  fVar2 = *(float *)(lVar15 + 0x28);
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar15 = pdb_140b6ae10(lVar15);
  if (lVar15 == 0) {
    return;
  }
  plVar6 = *(longlong **)(lVar15 + 0x18);
  lVar18 = *(longlong *)(lVar15 + 0x20);
  *(undefined8 *)(lVar15 + 0x18) = 0;
  if (plVar6 != (longlong *)0x0) {
    uStack_b8 = (undefined1)lVar18;
    uStack_b7 = (undefined7)((ulonglong)lVar18 >> 8);
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    if (lVar18 != 0) {
      lVar25 = *param_3;
      lVar24 = 0;
      do {
        pdb_1403b0de0(lVar25 + 0x30,*(undefined4 *)((longlong)plVar6 + lVar24 * 4 + 0x10));
        lVar24 = lVar24 + 1;
      } while (lVar18 != lVar24);
    }
    LOCK();
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      pdb_140c7b0f0();
    }
  }
  fVar13 = _DAT_142e37ad4;
  uStack_88 = 0;
  puStack_80 = (ulonglong *)0x8;
  uStack_78 = 0;
  pcVar26 = *(char **)(lVar15 + 8);
  pcVar23 = pcVar26 + *(longlong *)(lVar15 + 0x10) * 0x30;
  lVar18 = *param_1;
  uVar20 = 0;
  lVar25 = 0;
LAB_1408d85dc:
  uVar14 = uStack_88;
  lVar24 = 0;
  while (pcVar27 = pcVar26, pcVar27 != pcVar23) {
    pcVar26 = pcVar27 + 0x30;
    lVar24 = lVar24 + -1;
    if (*pcVar27 == '\a') goto code_r0x0001408d85fa;
  }
  uVar16 = uVar20 >> 1;
  if (uVar16 == 0) {
    puStack_90 = puStack_80;
    if (uVar20 != 0) goto LAB_1408d8787;
    goto LAB_1408d89a3;
  }
  if (uVar20 < 8) {
    uVar17 = 0;
    goto LAB_1408d8736;
  }
  uVar17 = uVar16 & 0xfffffffffffffffc;
  pauVar22 = (undefined1 (*) [16])(puStack_80 + 2);
  lVar18 = 0;
  do {
    auVar30 = pauVar22[-1];
    auVar4 = *pauVar22;
    auVar28 = *(undefined1 (*) [16])(puStack_80 + uVar20 + lVar18 + -4);
    auVar31 = *(undefined1 (*) [16])(puStack_80 + uVar20 + lVar18 + -2);
    auVar32._0_8_ = auVar31._8_8_;
    auVar32._8_4_ = auVar31._0_4_;
    auVar32._12_4_ = auVar31._4_4_;
    auVar31._0_8_ = auVar28._8_8_;
    auVar31._8_4_ = auVar28._0_4_;
    auVar31._12_4_ = auVar28._4_4_;
    pauVar22[-1] = auVar32;
    *pauVar22 = auVar31;
    auVar28._0_8_ = auVar30._8_8_;
    auVar28._8_4_ = auVar30._0_4_;
    auVar28._12_4_ = auVar30._4_4_;
    auVar30._0_8_ = auVar4._8_8_;
    auVar30._8_4_ = auVar4._0_4_;
    auVar30._12_4_ = auVar4._4_4_;
    *(undefined1 (*) [16])(puStack_80 + uVar20 + lVar18 + -2) = auVar28;
    *(undefined1 (*) [16])(puStack_80 + uVar20 + lVar18 + -4) = auVar30;
    lVar18 = lVar18 + -4;
    pauVar22 = pauVar22 + 2;
  } while (-lVar18 != (uVar16 & 0xfffffffffffffffc));
  if (uVar16 != uVar17) {
LAB_1408d8736:
    puVar19 = puStack_80 + uVar17;
    lVar18 = -uVar17;
    do {
      uVar17 = *puVar19;
      *puVar19 = puStack_80[uVar20 + lVar18 + -1];
      puStack_80[uVar20 + lVar18 + -1] = uVar17;
      lVar18 = lVar18 + -1;
      puVar19 = puVar19 + 1;
    } while (-lVar18 != uVar16);
  }
  puStack_90 = puStack_80;
  uVar20 = uStack_78;
  if (uStack_78 == 0) {
LAB_1408d89a3:
    if (uVar14 == 0) {
      return;
    }
    pub_1406abac0((byte *)puStack_90,uVar14 << 3,8);
    return;
  }
LAB_1408d8787:
  puStack_90 = puStack_80;
  puVar19 = puStack_80 + uVar20;
  puVar21 = puStack_80;
  while( true ) {
    uVar20 = *puVar21;
    uVar16 = *(ulonglong *)(lVar15 + 0x10);
    if (uVar16 <= uVar20) break;
    lVar18 = *(longlong *)(lVar15 + 8);
    lVar25 = uVar20 * 0x30;
    cVar5 = *(char *)(lVar18 + lVar25);
    puVar1 = (undefined8 *)(lVar18 + 1 + lVar25);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    puVar1 = (undefined8 *)(lVar18 + 0x11 + lVar25);
    uVar11 = *puVar1;
    uVar12 = puVar1[1];
    puVar1 = (undefined8 *)(lVar18 + 0x20 + lVar25);
    uVar8 = puVar1[1];
    uStack_e8 = (undefined7)((ulonglong)*puVar1 >> 8);
    uStack_e9 = (undefined1)((ulonglong)uVar12 >> 0x38);
    pub_142e32770(lVar18 + lVar25,lVar25 + lVar18 + 0x30,(~uVar20 + uVar16) * 0x30);
    uVar16 = uVar16 - 1;
    *(ulonglong *)(lVar15 + 0x10) = uVar16;
    if (cVar5 == '\f') break;
    uStack_9f = uStack_e8;
    uStack_af = (undefined7)uVar11;
    uStack_a8 = (undefined1)((ulonglong)uVar11 >> 0x38);
    uStack_a7 = (undefined7)uVar12;
    uStack_b8 = (undefined1)((ulonglong)uVar9 >> 0x38);
    uStack_b7 = (undefined7)uVar10;
    uStack_b0 = (undefined1)((ulonglong)uVar10 >> 0x38);
    uStack_a0 = uStack_e9;
    uStack_98 = uVar8;
    switch(cVar5) {
    case '\0':
      plVar6 = (longlong *)CONCAT71(uStack_af,uStack_b0);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140c7b830(&uStack_b0);
      }
      break;
    case '\x01':
      plVar6 = (longlong *)CONCAT71(uStack_af,uStack_b0);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140c7b830(&uStack_b0);
      }
      break;
    case '\x02':
      plVar6 = (longlong *)CONCAT71(uStack_af,uStack_b0);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140c7b830(&uStack_b0);
      }
      break;
    case '\x03':
      plVar6 = (longlong *)CONCAT71(uStack_b7,uStack_b8);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140c7a720(&uStack_b8);
      }
      break;
    case '\x04':
      pdb_14099a2e0(&uStack_b8);
      break;
    case '\x05':
      plVar6 = (longlong *)CONCAT71(uStack_af,uStack_b0);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140c7a0f0(&uStack_b0);
      }
      break;
    case '\x06':
      plVar6 = (longlong *)CONCAT71(uStack_af,uStack_b0);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140c7a030(&uStack_b0);
      }
      break;
    case '\a':
      plVar6 = (longlong *)CONCAT71(uStack_af,uStack_b0);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140c7a030(&uStack_b0);
      }
      break;
    case '\b':
      plVar6 = (longlong *)CONCAT71(uStack_af,uStack_b0);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140c7b150(&uStack_b0);
      }
      break;
    case '\t':
      plVar6 = (longlong *)CONCAT71(uStack_af,uStack_b0);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140315620(&uStack_b0);
      }
      break;
    case '\n':
      plVar6 = (longlong *)CONCAT71(uStack_af,uStack_b0);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140740180(&uStack_b0);
      }
      break;
    default:
      plVar6 = (longlong *)CONCAT71(uStack_b7,uStack_b8);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140c7bc60(&uStack_b8);
      }
    }
    puVar21 = puVar21 + 1;
    if (puVar21 == puVar19) goto LAB_1408d89a3;
  }
  pdb_142dc7ef8(uVar20,uVar16,&UNK_143019bf0);
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
code_r0x0001408d85fa:
  lVar25 = lVar25 - lVar24;
  if (pcVar27[8] == '\0') {
    if (uVar20 == uStack_88) {
      pdb_142d896b0();
    }
    puStack_80[uVar20] = lVar25 - 1U;
    uVar20 = uVar20 + 1;
    uStack_78 = uVar20;
  }
  else {
    fVar29 = *(float *)(pcVar27 + 0xc) / fVar2;
    fVar3 = *(float *)(pcVar27 + 0x18);
    if (fVar29 <= fVar13) {
      fVar29 = fVar13;
    }
    if (fVar29 < fVar3) {
      if (uVar20 == uStack_88) {
        pdb_142d896b0();
      }
      puStack_80[uVar20] = lVar25 - 1U;
      uVar20 = uVar20 + 1;
      fVar3 = *(float *)(pcVar27 + 0x18);
      uStack_78 = uVar20;
    }
    *(float *)(pcVar27 + 0x18) = fVar3 + *(float *)(lVar18 + 0x28);
  }
  goto LAB_1408d85dc;
}

