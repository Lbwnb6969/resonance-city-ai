// VA 0x142067e40, PDB extent 2770 bytes
// system_tree::replay_tree::replay_tree
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/replay_tree.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::replay_tree::replay_tree
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/replay_tree.rs
   Extent: 2770 */

void pdb_142067e40(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  char *pcVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  float fVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  undefined8 uVar31;
  longlong lVar32;
  ulonglong *puVar33;
  ulonglong *puVar34;
  undefined1 (*pauVar35) [16];
  ulonglong uVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined8 uStack_108;
  char cStack_100;
  undefined7 uStack_ff;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  ulonglong uStack_c8;
  ulonglong *puStack_c0;
  ulonglong uStack_b8;
  ulonglong *puStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  lVar26 = *param_1;
  pdb_140a6d970(lVar26);
  fVar3 = *(float *)(lVar26 + 0x28);
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar26 = pdb_140b6ae10(lVar26);
  fVar25 = _DAT_142e37ad4;
  if (lVar26 == 0) {
    return;
  }
  uStack_c8 = 0;
  puStack_c0 = (ulonglong *)0x8;
  uStack_b8 = 0;
  pcVar12 = *(char **)(lVar26 + 8);
  lVar29 = *(longlong *)(lVar26 + 0x10);
  puStack_b0 = (ulonglong *)*param_5;
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_a0 = *param_4;
  puVar13 = (undefined4 *)param_4[2];
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar30 = *param_2;
  puVar14 = (undefined4 *)param_2[2];
  uVar10 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar15 = *param_3;
  puVar16 = (undefined4 *)param_3[2];
  lVar27 = uStack_a0 + 0x20;
  uVar36 = 0;
  pcVar1 = pcVar12;
  while (pcStack_98 = pcVar1, uVar38 = uVar36, pcStack_98 != pcVar12 + lVar29 * 0x30) {
    pcVar1 = pcStack_98 + 0x30;
    uVar36 = uVar38 + 1;
    if (*pcStack_98 == '\b') {
      lVar32 = *(longlong *)(pcStack_98 + 0x10);
      if (*(int *)(lVar32 + 0x10) == 0) {
        if ((*(float *)(pcStack_98 + 0x18) != 0.0) || (NAN(*(float *)(pcStack_98 + 0x18))))
        goto LAB_142068294;
        if (pcStack_98[0x1c] != '\x01') {
          uVar37 = *(undefined8 *)(lVar32 + 0x18);
          uStack_e0 = *(undefined4 *)(lVar32 + 0x40);
          uStack_e8 = (undefined1)*(undefined8 *)(lVar32 + 0x38);
          uStack_e7 = (undefined7)((ulonglong)*(undefined8 *)(lVar32 + 0x38) >> 8);
          uVar31 = *(undefined8 *)(lVar32 + 0x44);
          uVar11 = *(undefined4 *)(lVar32 + 0x4c);
          pdb_140f60be0(&cStack_100,lVar32 + 0x20);
          uStack_d0 = *(undefined1 *)(lVar32 + 0x50);
          uStack_dc = (undefined4)uVar31;
          uStack_d8 = (undefined4)((ulonglong)uVar31 >> 0x20);
          uStack_a8 = CONCAT71(uStack_ff,cStack_100);
          uStack_108 = CONCAT44(uStack_f4,uStack_f8);
          uStack_158 = CONCAT71(uStack_ef,uStack_f0);
          uStack_150 = CONCAT71(uStack_e7,uStack_e8);
          uStack_148 = CONCAT44(uStack_dc,uStack_e0);
          uStack_140 = (undefined7)CONCAT44(uVar11,uStack_d8);
          uStack_139 = (undefined1)((uint)uVar11 >> 0x18);
          uStack_138 = (undefined7)CONCAT71(uStack_cf,uStack_d0);
          uStack_131 = (undefined1)((uint7)uStack_cf >> 0x30);
          *puVar14 = uVar9;
          lVar32 = *(longlong *)(lVar30 + 0x30);
          uVar31 = *(undefined8 *)(lVar30 + 0x40);
          uStack_d4 = uVar11;
          if (lVar32 == *(longlong *)(lVar30 + 0x20)) {
            pdb_142d7eec0(lVar30 + 0x20);
          }
          goto LAB_14206823d;
        }
        uVar31 = *(undefined8 *)(lVar32 + 0x18);
        *puVar13 = uVar8;
        lVar32 = *(longlong *)(uStack_a0 + 0x30);
        uVar37 = *(undefined8 *)(uStack_a0 + 0x40);
        if (lVar32 == *(longlong *)(uStack_a0 + 0x20)) {
          pdb_142d7e980(lVar27);
        }
LAB_142068306:
        lVar17 = *(longlong *)(uStack_a0 + 0x28);
        *(undefined8 *)(lVar17 + lVar32 * 0x10) = uVar37;
        *(undefined8 *)(lVar17 + 8 + lVar32 * 0x10) = uVar31;
        *(longlong *)(uStack_a0 + 0x30) = lVar32 + 1;
        *(longlong *)(uStack_a0 + 0x40) = *(longlong *)(uStack_a0 + 0x40) + 1;
        cVar7 = pcStack_98[8];
        uVar24 = uStack_b8;
      }
      else {
        if (*(int *)(lVar32 + 0x10) == 1) {
          if ((*(float *)(pcStack_98 + 0x18) == 0.0) && (!NAN(*(float *)(pcStack_98 + 0x18)))) {
            if (pcStack_98[0x1c] == '\x01') {
              uVar31 = *(undefined8 *)(lVar32 + 0x30);
              uStack_f8 = *(undefined4 *)(lVar32 + 0x1c);
              cStack_100 = (char)*(undefined8 *)(lVar32 + 0x14);
              uStack_ff = (undefined7)((ulonglong)*(undefined8 *)(lVar32 + 0x14) >> 8);
              *puVar16 = uVar10;
              lVar32 = *(longlong *)(lVar15 + 0x30);
              uVar37 = *(undefined8 *)(lVar15 + 0x40);
              if (lVar32 == *(longlong *)(lVar15 + 0x20)) {
                pdb_142d7e6e0(lVar15 + 0x20);
              }
            }
            else {
              uVar31 = *(undefined8 *)(lVar32 + 0x30);
              uStack_f8 = *(undefined4 *)(lVar32 + 0x28);
              cStack_100 = (char)*(undefined8 *)(lVar32 + 0x20);
              uStack_ff = (undefined7)((ulonglong)*(undefined8 *)(lVar32 + 0x20) >> 8);
              *puVar16 = uVar10;
              lVar32 = *(longlong *)(lVar15 + 0x30);
              uVar37 = *(undefined8 *)(lVar15 + 0x40);
              if (lVar32 == *(longlong *)(lVar15 + 0x20)) {
                pdb_142d7e6e0(lVar15 + 0x20);
              }
            }
            lVar17 = *(longlong *)(lVar15 + 0x28);
            lVar28 = lVar32 * 0x20;
            *(undefined8 *)(lVar17 + lVar28) = uVar37;
            *(undefined8 *)(lVar17 + 8 + lVar28) = uVar31;
            *(undefined4 *)(lVar17 + 0x18 + lVar28) = uStack_f8;
            *(ulonglong *)(lVar17 + 0x10 + lVar28) = CONCAT71(uStack_ff,cStack_100);
            *(longlong *)(lVar15 + 0x30) = lVar32 + 1;
            lVar32 = lVar15;
LAB_142068289:
            *(longlong *)(lVar32 + 0x40) = *(longlong *)(lVar32 + 0x40) + 1;
          }
        }
        else if ((*(float *)(pcStack_98 + 0x18) == 0.0) && (!NAN(*(float *)(pcStack_98 + 0x18)))) {
          if (pcStack_98[0x1c] != '\x01') {
            uVar31 = *(undefined8 *)(lVar32 + 0x18);
            *puVar13 = uVar8;
            lVar32 = *(longlong *)(uStack_a0 + 0x30);
            uVar37 = *(undefined8 *)(uStack_a0 + 0x40);
            if (lVar32 == *(longlong *)(uStack_a0 + 0x20)) {
              pdb_142d7e980(lVar27);
            }
            goto LAB_142068306;
          }
          uVar37 = *(undefined8 *)(lVar32 + 0x18);
          uStack_e0 = *(undefined4 *)(lVar32 + 0x40);
          uStack_e8 = (undefined1)*(undefined8 *)(lVar32 + 0x38);
          uStack_e7 = (undefined7)((ulonglong)*(undefined8 *)(lVar32 + 0x38) >> 8);
          uVar31 = *(undefined8 *)(lVar32 + 0x44);
          uVar11 = *(undefined4 *)(lVar32 + 0x4c);
          pdb_140f60be0(&cStack_100,lVar32 + 0x20);
          uStack_d0 = *(undefined1 *)(lVar32 + 0x50);
          uStack_dc = (undefined4)uVar31;
          uStack_d8 = (undefined4)((ulonglong)uVar31 >> 0x20);
          uStack_a8 = CONCAT71(uStack_ff,cStack_100);
          uStack_108 = CONCAT44(uStack_f4,uStack_f8);
          uStack_158 = CONCAT71(uStack_ef,uStack_f0);
          uStack_150 = CONCAT71(uStack_e7,uStack_e8);
          uStack_148 = CONCAT44(uStack_dc,uStack_e0);
          uStack_140 = (undefined7)CONCAT44(uVar11,uStack_d8);
          uStack_139 = (undefined1)((uint)uVar11 >> 0x18);
          uStack_138 = (undefined7)CONCAT71(uStack_cf,uStack_d0);
          uStack_131 = (undefined1)((uint7)uStack_cf >> 0x30);
          *puVar14 = uVar9;
          lVar32 = *(longlong *)(lVar30 + 0x30);
          uVar31 = *(undefined8 *)(lVar30 + 0x40);
          uStack_d4 = uVar11;
          if (lVar32 == *(longlong *)(lVar30 + 0x20)) {
            pdb_142d7eec0(lVar30 + 0x20);
          }
LAB_14206823d:
          lVar17 = *(longlong *)(lVar30 + 0x28);
          *(undefined8 *)(lVar17 + lVar32 * 0x48) = uStack_a8;
          *(undefined8 *)(lVar17 + 8 + lVar32 * 0x48) = uStack_108;
          auVar5._8_8_ = uStack_150;
          auVar5._0_8_ = uStack_158;
          auVar6._8_7_ = uStack_140;
          auVar6._0_8_ = uStack_148;
          auVar6[0xf] = uStack_139;
          *(undefined1 (*) [16])(lVar17 + 0x10 + lVar32 * 0x48) = auVar5;
          *(undefined1 (*) [16])(lVar17 + 0x20 + lVar32 * 0x48) = auVar6;
          *(ulonglong *)(lVar17 + 0x30 + lVar32 * 0x48) = CONCAT17(uStack_131,uStack_138);
          *(undefined8 *)(lVar17 + 0x38 + lVar32 * 0x48) = uVar37;
          *(undefined8 *)(lVar17 + 0x40 + lVar32 * 0x48) = uVar31;
          *(longlong *)(lVar30 + 0x30) = lVar32 + 1;
          lVar32 = lVar30;
          goto LAB_142068289;
        }
LAB_142068294:
        cVar7 = pcStack_98[8];
        uVar24 = uStack_b8;
      }
      uStack_b8 = uVar24;
      if (cVar7 == '\0') {
        if (uVar24 == uStack_c8) {
          pdb_142d896b0(&uStack_c8);
        }
        puStack_c0[uVar24] = uVar38;
        uStack_b8 = uVar24 + 1;
      }
      else {
        fVar40 = *(float *)(pcStack_98 + 0xc) / fVar3;
        fVar4 = *(float *)(pcStack_98 + 0x18);
        if (fVar40 <= fVar25) {
          fVar40 = fVar25;
        }
        if (fVar40 < fVar4) {
          if (uVar24 == uStack_c8) {
            pdb_142d896b0(&uStack_c8);
          }
          puStack_c0[uVar24] = uVar38;
          uStack_b8 = uVar24 + 1;
          fVar4 = *(float *)(pcStack_98 + 0x18);
        }
        *(float *)(pcStack_98 + 0x18) = fVar4 + *(float *)((longlong)puStack_b0 + 0x28);
      }
    }
  }
  uVar36 = uStack_b8 >> 1;
  if (uVar36 != 0) {
    if (uStack_b8 < 8) {
      uVar38 = 0;
    }
    else {
      uVar38 = uVar36 & 0xfffffffffffffffc;
      pauVar35 = (undefined1 (*) [16])(puStack_c0 + 2);
      lVar29 = 0;
      do {
        auVar5 = pauVar35[-1];
        auVar6 = *pauVar35;
        auVar39 = *(undefined1 (*) [16])(puStack_c0 + uStack_b8 + lVar29 + -4);
        auVar41 = *(undefined1 (*) [16])(puStack_c0 + uStack_b8 + lVar29 + -2);
        auVar43._0_8_ = auVar41._8_8_;
        auVar43._8_4_ = auVar41._0_4_;
        auVar43._12_4_ = auVar41._4_4_;
        auVar42._0_8_ = auVar39._8_8_;
        auVar42._8_4_ = auVar39._0_4_;
        auVar42._12_4_ = auVar39._4_4_;
        pauVar35[-1] = auVar43;
        *pauVar35 = auVar42;
        auVar39._0_8_ = auVar5._8_8_;
        auVar39._8_4_ = auVar5._0_4_;
        auVar39._12_4_ = auVar5._4_4_;
        auVar41._0_8_ = auVar6._8_8_;
        auVar41._8_4_ = auVar6._0_4_;
        auVar41._12_4_ = auVar6._4_4_;
        *(undefined1 (*) [16])(puStack_c0 + uStack_b8 + lVar29 + -2) = auVar39;
        *(undefined1 (*) [16])(puStack_c0 + uStack_b8 + lVar29 + -4) = auVar41;
        lVar29 = lVar29 + -4;
        pauVar35 = pauVar35 + 2;
      } while (-lVar29 != (uVar36 & 0xfffffffffffffffc));
      if (uVar36 == uVar38) goto joined_r0x0001420683a7;
    }
    puVar34 = puStack_c0 + uVar38;
    lVar29 = -uVar38;
    do {
      uVar38 = *puVar34;
      *puVar34 = puStack_c0[uStack_b8 + lVar29 + -1];
      puStack_c0[uStack_b8 + lVar29 + -1] = uVar38;
      lVar29 = lVar29 + -1;
      puVar34 = puVar34 + 1;
    } while (-lVar29 != uVar36);
  }
joined_r0x0001420683a7:
  uStack_a0 = uStack_c8;
  puStack_b0 = puStack_c0;
  if (uStack_b8 != 0) {
    puVar34 = puStack_c0 + uStack_b8;
    puVar33 = puStack_c0;
    do {
      uVar36 = *puVar33;
      uVar38 = *(ulonglong *)(lVar26 + 0x10);
      if (uVar38 <= uVar36) {
LAB_1420686f7:
        pdb_142dc7ef8(uVar36,uVar38,&UNK_14344a9d0);
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      lVar29 = *(longlong *)(lVar26 + 8);
      lVar30 = uVar36 * 0x30;
      cVar7 = *(char *)(lVar29 + lVar30);
      puVar2 = (undefined8 *)(lVar29 + 1 + lVar30);
      uVar19 = *puVar2;
      uVar20 = puVar2[1];
      puVar2 = (undefined8 *)(lVar29 + 0x11 + lVar30);
      uVar21 = *puVar2;
      uVar22 = puVar2[1];
      puVar2 = (undefined8 *)(lVar29 + 0x20 + lVar30);
      uVar31 = *puVar2;
      uVar37 = puVar2[1];
      uStack_139 = (undefined1)((ulonglong)uVar22 >> 0x38);
      pub_142e32770(lVar29 + lVar30,lVar30 + lVar29 + 0x30,(~uVar36 + uVar38) * 0x30);
      uVar38 = uVar38 - 1;
      *(ulonglong *)(lVar26 + 0x10) = uVar38;
      if (cVar7 == '\f') goto LAB_1420686f7;
      uStack_dc = (undefined4)((ulonglong)uVar31 >> 0x20);
      uStack_d8 = (undefined4)uVar37;
      uStack_d4 = (undefined4)((ulonglong)uVar37 >> 0x20);
      uStack_ef = (undefined7)uVar21;
      uStack_e8 = (undefined1)((ulonglong)uVar21 >> 0x38);
      uStack_e7 = (undefined7)uVar22;
      uStack_e0 = CONCAT31((int3)((ulonglong)uVar31 >> 8),uStack_139);
      uStack_ff = (undefined7)uVar19;
      uStack_f8._0_1_ = (undefined1)((ulonglong)uVar19 >> 0x38);
      uStack_f8._1_3_ = (undefined3)uVar20;
      uStack_f4 = (undefined4)((ulonglong)uVar20 >> 0x18);
      uStack_f0 = (undefined1)((ulonglong)uVar20 >> 0x38);
      cStack_100 = cVar7;
      switch(cVar7) {
      case '\0':
        plVar23 = (longlong *)CONCAT71(uStack_ef,uStack_f0);
        LOCK();
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          pdb_140c7b830(&uStack_f0);
        }
        break;
      case '\x01':
        plVar23 = (longlong *)CONCAT71(uStack_ef,uStack_f0);
        LOCK();
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          pdb_140c7b830(&uStack_f0);
        }
        break;
      case '\x02':
        plVar23 = (longlong *)CONCAT71(uStack_ef,uStack_f0);
        LOCK();
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          pdb_140c7b830(&uStack_f0);
        }
        break;
      case '\x03':
        plVar23 = (longlong *)CONCAT44(uStack_f4,uStack_f8);
        LOCK();
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          pdb_140c7a720(&uStack_f8);
        }
        break;
      case '\x04':
        pdb_14099a2e0(&uStack_f8);
        break;
      case '\x05':
        plVar23 = (longlong *)CONCAT71(uStack_ef,uStack_f0);
        LOCK();
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          pdb_140c7a0f0(&uStack_f0);
        }
        break;
      case '\x06':
        plVar23 = (longlong *)CONCAT71(uStack_ef,uStack_f0);
        LOCK();
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          pdb_140c7a030(&uStack_f0);
        }
        break;
      case '\a':
        plVar23 = (longlong *)CONCAT71(uStack_ef,uStack_f0);
        LOCK();
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          pdb_140c7a030(&uStack_f0);
        }
        break;
      case '\b':
        plVar23 = (longlong *)CONCAT71(uStack_ef,uStack_f0);
        LOCK();
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          pdb_140c7b150(&uStack_f0);
        }
        break;
      case '\t':
        plVar23 = (longlong *)CONCAT71(uStack_ef,uStack_f0);
        LOCK();
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          pdb_140315620(&uStack_f0);
        }
        break;
      case '\n':
        plVar23 = (longlong *)CONCAT71(uStack_ef,uStack_f0);
        LOCK();
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          pdb_140740180(&uStack_f0);
        }
        break;
      default:
        plVar23 = (longlong *)CONCAT44(uStack_f4,uStack_f8);
        LOCK();
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          pdb_140c7bc60(&uStack_f8);
        }
      }
      puVar33 = puVar33 + 1;
    } while (puVar33 != puVar34);
  }
  if (uStack_a0 != 0) {
    pub_1406abac0((byte *)puStack_b0,uStack_a0 << 3,8);
  }
  return;
}

