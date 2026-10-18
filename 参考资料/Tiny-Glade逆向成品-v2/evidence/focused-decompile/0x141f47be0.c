// Matched PDB: system_roof::replay_roof::replay_roof
// VA 0x141f47be0, PDB extent 1357 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: system_roof::replay_roof::replay_roof
   Extent: 1357 bytes. No whole-program auto-analysis. */

void pdb_141f47be0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 auVar4 [16];
  char cVar5;
  char *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  char *pcStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong *puStack_78;
  ulonglong uStack_70;
  ulonglong *puStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar15 = *param_1;
  puStack_68 = (ulonglong *)param_4;
  pdb_140a6d970(lVar15);
  fVar3 = *(float *)(lVar15 + 0x28);
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar15 = pdb_140b6ae10(lVar15);
  if (lVar15 == 0) {
    return;
  }
  uStack_80 = 0;
  puStack_78 = (ulonglong *)0x8;
  uStack_70 = 0;
  pcVar6 = *(char **)(lVar15 + 8);
  lVar16 = *(longlong *)(lVar15 + 0x10);
  lVar17 = *param_2;
  uVar21 = 0;
  pcVar1 = pcVar6;
  while (pcStack_90 = pcVar1, uVar22 = uVar21, pcStack_90 != pcVar6 + lVar16 * 0x30) {
    pcVar1 = pcStack_90 + 0x30;
    uVar21 = uVar22 + 1;
    if ((*pcStack_90 == '\x05') &&
       (pdb_1428182a0(pcStack_90 + 8,*(float *)(lVar17 + 0x28) * fVar3,param_3,puStack_68,param_5,
                      param_6,param_7), uVar14 = uStack_70, pcStack_90[0x1d] == '\x01')) {
      if (uStack_70 == uStack_80) {
        pdb_142d896b0(&uStack_80);
      }
      puStack_78[uVar14] = uVar22;
      uStack_70 = uVar14 + 1;
    }
  }
  uVar21 = uStack_70 >> 1;
  if (uVar21 != 0) {
    if (uStack_70 < 8) {
      uVar22 = 0;
    }
    else {
      uVar22 = uVar21 & 0xfffffffffffffffc;
      pauVar20 = (undefined1 (*) [16])(puStack_78 + 2);
      lVar16 = 0;
      do {
        auVar24 = pauVar20[-1];
        auVar4 = *pauVar20;
        auVar23 = *(undefined1 (*) [16])(puStack_78 + uStack_70 + lVar16 + -4);
        auVar25 = *(undefined1 (*) [16])(puStack_78 + uStack_70 + lVar16 + -2);
        auVar26._0_8_ = auVar25._8_8_;
        auVar26._8_4_ = auVar25._0_4_;
        auVar26._12_4_ = auVar25._4_4_;
        auVar25._0_8_ = auVar23._8_8_;
        auVar25._8_4_ = auVar23._0_4_;
        auVar25._12_4_ = auVar23._4_4_;
        pauVar20[-1] = auVar26;
        *pauVar20 = auVar25;
        auVar23._0_8_ = auVar24._8_8_;
        auVar23._8_4_ = auVar24._0_4_;
        auVar23._12_4_ = auVar24._4_4_;
        auVar24._0_8_ = auVar4._8_8_;
        auVar24._8_4_ = auVar4._0_4_;
        auVar24._12_4_ = auVar4._4_4_;
        *(undefined1 (*) [16])(puStack_78 + uStack_70 + lVar16 + -2) = auVar23;
        *(undefined1 (*) [16])(puStack_78 + uStack_70 + lVar16 + -4) = auVar24;
        lVar16 = lVar16 + -4;
        pauVar20 = pauVar20 + 2;
      } while (-lVar16 != (uVar21 & 0xfffffffffffffffc));
      if (uVar21 == uVar22) goto joined_r0x000141f47d3d;
    }
    puVar19 = puStack_78 + uVar22;
    lVar16 = -uVar22;
    do {
      uVar22 = *puVar19;
      *puVar19 = puStack_78[uStack_70 + lVar16 + -1];
      puStack_78[uStack_70 + lVar16 + -1] = uVar22;
      lVar16 = lVar16 + -1;
      puVar19 = puVar19 + 1;
    } while (-lVar16 != uVar21);
  }
joined_r0x000141f47d3d:
  uStack_88 = uStack_80;
  puStack_68 = puStack_78;
  if (uStack_70 != 0) {
    puVar19 = puStack_78 + uStack_70;
    puVar18 = puStack_78;
    do {
      uVar21 = *puVar18;
      uVar22 = *(ulonglong *)(lVar15 + 0x10);
      if (uVar22 <= uVar21) {
LAB_141f48059:
        pdb_142dc7ef8(uVar21,uVar22,&UNK_143432168);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      lVar16 = *(longlong *)(lVar15 + 8);
      lVar17 = uVar21 * 0x30;
      cVar5 = *(char *)(lVar16 + lVar17);
      puVar2 = (undefined8 *)(lVar16 + 1 + lVar17);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar16 + 0x11 + lVar17);
      uVar11 = *puVar2;
      uVar12 = puVar2[1];
      puVar2 = (undefined8 *)(lVar16 + 0x20 + lVar17);
      uVar8 = puVar2[1];
      uStack_d8 = (undefined7)((ulonglong)*puVar2 >> 8);
      uStack_d9 = (undefined1)((ulonglong)uVar12 >> 0x38);
      func_0x000142e32770(lVar16 + lVar17,lVar17 + lVar16 + 0x30,(~uVar21 + uVar22) * 0x30);
      uVar22 = uVar22 - 1;
      *(ulonglong *)(lVar15 + 0x10) = uVar22;
      if (cVar5 == '\f') goto LAB_141f48059;
      uStack_9f = uStack_d8;
      uStack_af = (undefined7)uVar11;
      uStack_a8 = (undefined1)((ulonglong)uVar11 >> 0x38);
      uStack_a7 = (undefined7)uVar12;
      uStack_b8 = (undefined1)((ulonglong)uVar9 >> 0x38);
      uStack_b7 = (undefined7)uVar10;
      uStack_b0 = (undefined1)((ulonglong)uVar10 >> 0x38);
      uStack_a0 = uStack_d9;
      uStack_98 = uVar8;
      switch(cVar5) {
      case '\0':
        plVar13 = (longlong *)CONCAT71(uStack_af,uStack_b0);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          pdb_140c7b830(&uStack_b0);
        }
        break;
      case '\x01':
        plVar13 = (longlong *)CONCAT71(uStack_af,uStack_b0);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          pdb_140c7b830(&uStack_b0);
        }
        break;
      case '\x02':
        plVar13 = (longlong *)CONCAT71(uStack_af,uStack_b0);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          pdb_140c7b830(&uStack_b0);
        }
        break;
      case '\x03':
        plVar13 = (longlong *)CONCAT71(uStack_b7,uStack_b8);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          pdb_140c7a720(&uStack_b8);
        }
        break;
      case '\x04':
        pdb_14099a2e0(&uStack_b8);
        break;
      case '\x05':
        plVar13 = (longlong *)CONCAT71(uStack_af,uStack_b0);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          pdb_140c7a0f0(&uStack_b0);
        }
        break;
      case '\x06':
        plVar13 = (longlong *)CONCAT71(uStack_af,uStack_b0);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          pdb_140c7a030(&uStack_b0);
        }
        break;
      case '\a':
        plVar13 = (longlong *)CONCAT71(uStack_af,uStack_b0);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          pdb_140c7a030(&uStack_b0);
        }
        break;
      case '\b':
        plVar13 = (longlong *)CONCAT71(uStack_af,uStack_b0);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          pdb_140c7b150(&uStack_b0);
        }
        break;
      case '\t':
        plVar13 = (longlong *)CONCAT71(uStack_af,uStack_b0);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          pdb_140315620(&uStack_b0);
        }
        break;
      case '\n':
        plVar13 = (longlong *)CONCAT71(uStack_af,uStack_b0);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          pdb_140740180(&uStack_b0);
        }
        break;
      default:
        plVar13 = (longlong *)CONCAT71(uStack_b7,uStack_b8);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          pdb_140c7bc60(&uStack_b8);
        }
      }
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar19);
  }
  if (uStack_88 != 0) {
    func_0x0001406abac0(puStack_68,uStack_88 << 3,8);
  }
  return;
}

