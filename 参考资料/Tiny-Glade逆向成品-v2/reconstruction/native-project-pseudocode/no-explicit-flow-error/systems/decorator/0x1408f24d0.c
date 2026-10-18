// VA 0x1408f24d0, PDB extent 3145 bytes
// system_decorator::blueprint::clear_blueprints
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::blueprint::clear_blueprints
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 3145 */

void pdb_1408f24d0(undefined8 *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  undefined *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined1 (*pauVar29) [16];
  longlong lVar30;
  undefined1 (*pauVar31) [16];
  undefined *puVar32;
  longlong lVar33;
  undefined1 (*pauVar34) [16];
  undefined *puVar35;
  bool bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uStack_138;
  ulonglong uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  longlong lStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined4 auStack_a8 [2];
  undefined1 (*pauStack_a0) [16];
  undefined4 uStack_94;
  longlong *plStack_90;
  byte bStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  cVar12 = pdb_140e94b40();
  if (cVar12 == '\0') {
    bVar13 = false;
    goto LAB_1408f26b4;
  }
  puVar32 = &UNK_14301d264;
  lVar24 = 0x2d;
  uVar21 = 0x2d;
  lVar15 = pdb_1408f7870(&UNK_14301d264);
  if (lVar15 != 1) {
LAB_1408f2583:
    puVar25 = &UNK_14301ce21;
    puVar35 = &UNK_14301cdf8;
    do {
      bVar2 = puVar25[-1];
      uVar14 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar25[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar25[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar25 + -4;
            puVar25 = puVar25 + -4;
            uVar14 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar25 = puVar25 + -3;
            uVar14 = bVar4 & 0xf;
          }
          uVar14 = bVar3 & 0x3f | uVar14 << 6;
        }
        else {
          puVar25 = puVar25 + -2;
          uVar14 = bVar3 & 0x1f;
        }
        uVar14 = (uint)(bVar2 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_1408f2614;
LAB_1408f262d:
        if ((undefined *)0x29 < puVar25 + -0x14301cdf7) goto LAB_1408f2f79;
        lVar15 = 0x29 - (longlong)(puVar25 + -0x14301cdf7);
        puVar35 = puVar25 + 1;
        goto LAB_1408f2650;
      }
      puVar25 = puVar25 + -1;
      if (uVar14 == 0x5c) goto LAB_1408f262d;
LAB_1408f2614:
      if (uVar14 == 0x2f) goto LAB_1408f262d;
    } while (puVar25 != &UNK_14301cdf8);
    lVar15 = 0x29;
LAB_1408f2650:
    plVar17 = (longlong *)pdb_140e97000();
    if (((char)plVar17[0xd] == '\x01') ||
       (plVar17 = (longlong *)pdb_142dde6e0(plVar17,0), plVar17 != (longlong *)0x0)) {
      if (*plVar17 != 0) goto LAB_1408f2f3d;
      *plVar17 = -1;
      plStack_90 = plVar17;
      uStack_138 = pdb_140e94f10(plVar17 + 1,puVar32,lVar24,puVar35,lVar15,1,0);
      *plStack_90 = *plStack_90 + 1;
      bVar13 = true;
LAB_1408f26b4:
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      uVar5 = *param_1;
      pdb_140c41300(auStack_f8);
      auVar11 = _DAT_142e378b0;
      auVar10 = _DAT_142e378a0;
      bStack_81 = auStack_f8[0];
      uStack_120 = uStack_c0 & 0xffff;
      lStack_108 = lStack_b8;
      plStack_90 = (longlong *)CONCAT44(plStack_90._4_4_,*(undefined4 *)((longlong)param_2 + 0x1c));
      lVar15 = *param_2;
      puVar6 = (undefined4 *)param_2[2];
      pauVar19 = (undefined1 (*) [16])auStack_d8._8_8_;
      lVar24 = auStack_e8._8_8_;
      lVar28 = auStack_f8._8_8_;
      lVar30 = auStack_e8._0_8_;
      lStack_100 = auStack_d8._0_8_;
      do {
        uVar14 = (uint)uStack_120;
        lStack_118 = lVar24;
        if (lVar30 == 2) {
LAB_1408f283f:
          if ((lVar28 != 0 & bStack_81) != 1) goto LAB_1408f2c70;
          lStack_b0 = 2;
          lStack_110 = 0;
          lVar24 = lVar28;
          pauStack_a0 = pauVar19;
        }
        else {
          lStack_110 = lVar28;
          if (lStack_100 == 0) {
joined_r0x0001408f2837:
            if (lVar30 == 1) {
              lStack_100 = 0;
              lStack_118 = 0;
              if (lVar24 != 0) {
                lStack_b0 = 1;
                lStack_100 = 0;
                lStack_118 = 0;
                pauStack_a0 = pauVar19;
                goto LAB_1408f2874;
              }
            }
            else {
              lStack_100 = 0;
            }
            goto LAB_1408f283f;
          }
          if (lStack_108 == 0) {
            lStack_108 = 0;
            goto joined_r0x0001408f2837;
          }
          if ((short)uStack_120 == 0) {
            do {
              auVar41 = *pauVar19;
              lStack_100 = lStack_100 + -0x980;
              pauVar19 = pauVar19 + 1;
              uVar14 = (ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar14 == 0);
          }
          uVar23 = 0;
          for (uVar9 = uVar14; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar23 = uVar23 + 1;
          }
          lStack_b0 = lVar30;
          pauStack_a0 = pauVar19;
          lVar18 = pdb_140c44590(lStack_100 + (ulonglong)uVar23 * -0x98 + -0x98);
          lStack_108 = lStack_108 + -1;
          uStack_120 = (ulonglong)(uVar14 - 1 & uVar14);
          pauVar19 = pauStack_a0;
          lVar30 = lStack_b0;
          if (lVar18 == 3) goto joined_r0x0001408f2837;
          lVar24 = (ulonglong)uVar23 * -0x98 + lStack_100 + -0x90;
        }
LAB_1408f2874:
        pdb_140c3ba50(auStack_f8,lVar24);
        uVar14 = (uint)(ushort)auStack_e8._8_2_;
        lVar28 = auStack_f8._0_8_;
        lVar30 = auStack_d8._0_8_;
        pauVar19 = (undefined1 (*) [16])auStack_f8._8_8_;
        while (bVar36 = lVar30 != 0, lVar30 = lVar30 + -1, bVar36) {
          if ((short)uVar14 == 0) {
            do {
              auVar41 = *pauVar19;
              lVar28 = lVar28 + -0x40;
              pauVar19 = pauVar19 + 1;
              uVar14 = (ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar14 == 0);
          }
          iVar8 = 0;
          for (uVar23 = uVar14; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
            iVar8 = iVar8 + 1;
          }
          auStack_a8[0] = *(undefined4 *)((lVar28 - (ulonglong)(uint)(iVar8 << 2)) + -4);
          *puVar6 = plStack_90._0_4_;
          auStack_d8 = *(undefined1 (*) [16])(lVar15 + 0x20);
          auVar37._0_8_ = auStack_d8._0_8_;
          auVar37._8_4_ = auStack_d8._0_4_;
          auVar37._12_4_ = auStack_d8._4_4_;
          auStack_f8 = auVar37 ^ auVar10;
          auVar38._0_8_ = auStack_d8._8_8_;
          auVar38._8_4_ = auStack_d8._8_4_;
          auVar38._12_4_ = auStack_d8._12_4_;
          auStack_e8 = auVar38 ^ auVar11;
          lStack_c8 = 0;
          uStack_c0 = 0;
          lStack_b8 = 0;
          uStack_94 = auStack_a8[0];
          pdb_1400b0640(auStack_f8,auStack_a8,4);
          uVar27 = lStack_c8 << 0x38 | uStack_c0;
          uVar21 = auStack_e8._8_8_ ^ uVar27;
          uVar22 = auStack_f8._0_8_ + auStack_e8._0_8_;
          uVar20 = (auStack_e8._0_8_ << 0xd | (ulonglong)auStack_e8._0_8_ >> 0x33) ^ uVar22;
          uVar16 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ auStack_f8._8_8_ + uVar21;
          uVar26 = auStack_f8._8_8_ + uVar21 + uVar20;
          uVar22 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar16;
          uVar20 = (uVar20 << 0x11 | uVar20 >> 0x2f) ^ uVar26;
          uVar21 = (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar22;
          uVar22 = (uVar22 ^ uVar27) + uVar20;
          uVar26 = ((uVar26 << 0x20 | uVar26 >> 0x20) ^ 0xff) + uVar21;
          uVar16 = (uVar20 << 0xd | uVar20 >> 0x33) ^ uVar22;
          uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar26;
          uVar26 = uVar26 + uVar16;
          uVar20 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar21;
          uVar16 = (uVar16 << 0x11 | uVar16 >> 0x2f) ^ uVar26;
          uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar20;
          uVar20 = uVar20 + uVar16;
          uVar22 = (uVar26 << 0x20 | uVar26 >> 0x20) + uVar21;
          uVar16 = (uVar16 << 0xd | uVar16 >> 0x33) ^ uVar20;
          uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar22;
          uVar22 = uVar22 + uVar16;
          uVar20 = (uVar20 << 0x20 | uVar20 >> 0x20) + uVar21;
          uVar16 = (uVar16 << 0x11 | uVar16 >> 0x2f) ^ uVar22;
          uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar20;
          uVar22 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar21;
          uVar16 = (uVar16 << 0xd | uVar16 >> 0x33) ^ uVar20 + uVar16;
          uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar22;
          uVar22 = uVar22 + uVar16;
          plVar17 = (longlong *)
                    ((uVar22 << 0x20 | uVar22 >> 0x20) ^ (uVar16 << 0x11 | uVar16 >> 0x2f) ^
                     (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar22);
          pdb_1414ae460(lVar15,plVar17,&uStack_94);
          auStack_f8._0_8_ = plVar17;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              pdb_1408f7f60(auStack_f8);
            }
          }
          uVar14 = uVar14 - 1 & uVar14;
        }
        pdb_140a2fb40(auStack_f8,lVar24);
        uVar14 = (uint)(ushort)auStack_e8._8_2_;
        pauVar29 = (undefined1 (*) [16])auStack_f8._8_8_;
        lVar18 = auStack_d8._0_8_;
        lVar33 = auStack_f8._0_8_;
        while (bVar36 = lVar18 != 0, lVar18 = lVar18 + -1, pauVar19 = pauStack_a0,
              lVar24 = lStack_118, lVar28 = lStack_110, lVar30 = lStack_b0, bVar36) {
          if ((short)uVar14 == 0) {
            do {
              auVar41 = *pauVar29;
              lVar33 = lVar33 + -0x40;
              pauVar29 = pauVar29 + 1;
              uVar14 = (ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar14 == 0);
          }
          iVar8 = 0;
          for (uVar23 = uVar14; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
            iVar8 = iVar8 + 1;
          }
          auStack_a8[0] = *(undefined4 *)((lVar33 - (ulonglong)(uint)(iVar8 << 2)) + -4);
          *puVar6 = plStack_90._0_4_;
          auStack_d8 = *(undefined1 (*) [16])(lVar15 + 0x20);
          auVar39._0_8_ = auStack_d8._0_8_;
          auVar39._8_4_ = auStack_d8._0_4_;
          auVar39._12_4_ = auStack_d8._4_4_;
          auStack_f8 = auVar39 ^ auVar10;
          auVar40._0_8_ = auStack_d8._8_8_;
          auVar40._8_4_ = auStack_d8._8_4_;
          auVar40._12_4_ = auStack_d8._12_4_;
          auStack_e8 = auVar40 ^ auVar11;
          lStack_c8 = 0;
          uStack_c0 = 0;
          lStack_b8 = 0;
          uStack_94 = auStack_a8[0];
          pdb_1400b0640(auStack_f8,auStack_a8,4);
          uVar27 = lStack_c8 << 0x38 | uStack_c0;
          uVar21 = auStack_e8._8_8_ ^ uVar27;
          uVar22 = auStack_f8._0_8_ + auStack_e8._0_8_;
          uVar20 = (auStack_e8._0_8_ << 0xd | (ulonglong)auStack_e8._0_8_ >> 0x33) ^ uVar22;
          uVar16 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ auStack_f8._8_8_ + uVar21;
          uVar26 = auStack_f8._8_8_ + uVar21 + uVar20;
          uVar22 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar16;
          uVar20 = (uVar20 << 0x11 | uVar20 >> 0x2f) ^ uVar26;
          uVar21 = (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar22;
          uVar22 = (uVar22 ^ uVar27) + uVar20;
          uVar26 = ((uVar26 << 0x20 | uVar26 >> 0x20) ^ 0xff) + uVar21;
          uVar16 = (uVar20 << 0xd | uVar20 >> 0x33) ^ uVar22;
          uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar26;
          uVar26 = uVar26 + uVar16;
          uVar20 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar21;
          uVar16 = (uVar16 << 0x11 | uVar16 >> 0x2f) ^ uVar26;
          uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar20;
          uVar20 = uVar20 + uVar16;
          uVar22 = (uVar26 << 0x20 | uVar26 >> 0x20) + uVar21;
          uVar16 = (uVar16 << 0xd | uVar16 >> 0x33) ^ uVar20;
          uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar22;
          uVar22 = uVar22 + uVar16;
          uVar20 = (uVar20 << 0x20 | uVar20 >> 0x20) + uVar21;
          uVar16 = (uVar16 << 0x11 | uVar16 >> 0x2f) ^ uVar22;
          uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar20;
          uVar22 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar21;
          uVar16 = (uVar16 << 0xd | uVar16 >> 0x33) ^ uVar20 + uVar16;
          uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar22;
          uVar22 = uVar22 + uVar16;
          plVar17 = (longlong *)
                    ((uVar22 << 0x20 | uVar22 >> 0x20) ^ (uVar16 << 0x11 | uVar16 >> 0x2f) ^
                     (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar22);
          pdb_1414ae460(lVar15,plVar17,&uStack_94);
          auStack_f8._0_8_ = plVar17;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              pdb_1408f7f60(auStack_f8);
            }
          }
          uVar14 = uVar14 - 1 & uVar14;
        }
      } while( true );
    }
    goto LAB_1408f2f6d;
  }
  if (uVar21 < 0x2e) {
    puVar32 = &UNK_14301d264;
    uVar16 = pdb_1408f7870(&UNK_14301d264);
    if ((uVar16 & 1) != 0) {
      if (0x2d < uVar21 + 2) goto LAB_1408f2fbc;
      lVar24 = 0x2b - uVar21;
      puVar32 = &UNK_14301d266 + uVar21;
    }
    goto LAB_1408f2583;
  }
  goto LAB_1408f2f9c;
LAB_1408f2c70:
  pdb_140a6a820(auStack_f8,uVar5);
  uVar14 = (uint)(ushort)auStack_e8._8_2_;
  lVar24 = auStack_d8._0_8_;
  pauVar19 = (undefined1 (*) [16])auStack_f8._0_8_;
  pauVar29 = (undefined1 (*) [16])auStack_f8._8_8_;
  while (lVar24 != 0) {
    if ((short)uVar14 == 0) {
      do {
        auVar41 = *pauVar29;
        pauVar19 = pauVar19 + -0x40;
        pauVar29 = pauVar29 + 1;
        uVar14 = (ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar14 == 0);
    }
    iVar8 = 0;
    for (uVar23 = uVar14; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
      iVar8 = iVar8 + 1;
    }
    uVar14 = uVar14 - 1 & uVar14;
    pauVar31 = *(undefined1 (**) [16])((longlong)pauVar19 + (-0x30 - (ulonglong)(uint)(iVar8 << 6)))
    ;
    lVar28 = *(longlong *)((longlong)pauVar19 + (-0x18 - (ulonglong)(uint)(iVar8 << 6)));
    auVar41 = *pauVar31;
    pauVar34 = pauVar31 + 1;
    uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar41[0xf] >> 7) << 0xf);
    lStack_b0 = lVar24 + -1;
    pauStack_a0 = pauVar19;
    while (bVar36 = lVar28 != 0, lVar28 = lVar28 + -1, lVar24 = lStack_b0, pauVar19 = pauStack_a0,
          bVar36) {
      if ((short)uVar23 == 0) {
        do {
          auVar41 = *pauVar34;
          pauVar31 = pauVar31 + -4;
          pauVar34 = pauVar34 + 1;
          uVar23 = (ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar23 == 0);
      }
      iVar8 = 0;
      for (uVar9 = uVar23; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        iVar8 = iVar8 + 1;
      }
      auStack_a8[0] = *(undefined4 *)((longlong)pauVar31 + (-4 - (ulonglong)(uint)(iVar8 << 2)));
      *puVar6 = plStack_90._0_4_;
      auStack_d8 = *(undefined1 (*) [16])(lVar15 + 0x20);
      auVar41._0_8_ = auStack_d8._0_8_;
      auVar41._8_4_ = auStack_d8._0_4_;
      auVar41._12_4_ = auStack_d8._4_4_;
      auStack_f8 = auVar41 ^ auVar10;
      auVar42._0_8_ = auStack_d8._8_8_;
      auVar42._8_4_ = auStack_d8._8_4_;
      auVar42._12_4_ = auStack_d8._12_4_;
      auStack_e8 = auVar42 ^ auVar11;
      lStack_c8 = 0;
      uStack_c0 = 0;
      lStack_b8 = 0;
      uStack_94 = auStack_a8[0];
      pdb_1400b0640(auStack_f8,auStack_a8,4);
      uVar27 = lStack_c8 << 0x38 | uStack_c0;
      uVar21 = auStack_e8._8_8_ ^ uVar27;
      uVar22 = auStack_f8._0_8_ + auStack_e8._0_8_;
      uVar20 = (auStack_e8._0_8_ << 0xd | (ulonglong)auStack_e8._0_8_ >> 0x33) ^ uVar22;
      uVar16 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ auStack_f8._8_8_ + uVar21;
      uVar26 = auStack_f8._8_8_ + uVar21 + uVar20;
      uVar22 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar16;
      uVar20 = (uVar20 << 0x11 | uVar20 >> 0x2f) ^ uVar26;
      uVar21 = (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar22;
      uVar22 = (uVar22 ^ uVar27) + uVar20;
      uVar26 = ((uVar26 << 0x20 | uVar26 >> 0x20) ^ 0xff) + uVar21;
      uVar16 = (uVar20 << 0xd | uVar20 >> 0x33) ^ uVar22;
      uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar26;
      uVar26 = uVar26 + uVar16;
      uVar20 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar21;
      uVar16 = (uVar16 << 0x11 | uVar16 >> 0x2f) ^ uVar26;
      uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar20;
      uVar20 = uVar20 + uVar16;
      uVar22 = (uVar26 << 0x20 | uVar26 >> 0x20) + uVar21;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x33) ^ uVar20;
      uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar22;
      uVar22 = uVar22 + uVar16;
      uVar20 = (uVar20 << 0x20 | uVar20 >> 0x20) + uVar21;
      uVar16 = (uVar16 << 0x11 | uVar16 >> 0x2f) ^ uVar22;
      uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar20;
      uVar22 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar21;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x33) ^ uVar20 + uVar16;
      uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar22;
      uVar22 = uVar22 + uVar16;
      plVar17 = (longlong *)
                ((uVar22 << 0x20 | uVar22 >> 0x20) ^ (uVar16 << 0x11 | uVar16 >> 0x2f) ^
                 (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar22);
      pdb_1414ae460(lVar15);
      auStack_f8._0_8_ = plVar17;
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          pdb_1408f7f60(auStack_f8);
        }
      }
      uVar23 = uVar23 - 1 & uVar23;
    }
  }
  if (!bVar13) {
    return;
  }
  plVar17 = (longlong *)pdb_140e97000();
  if ((char)plVar17[0xd] != '\x01') goto LAB_1408f2f49;
  do {
    if (*plVar17 == 0) {
      *plVar17 = -1;
      plStack_90 = plVar17;
      pdb_140e95370(plVar17 + 1,uStack_138);
      *plStack_90 = *plStack_90 + 1;
      return;
    }
LAB_1408f2f3d:
    plVar17 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408f2f49:
    plVar17 = (longlong *)pdb_142dde6e0(plVar17,0);
  } while (plVar17 != (longlong *)0x0);
LAB_1408f2f6d:
  pdb_142dc7890(&UNK_14330e598);
LAB_1408f2f79:
  pdb_142dc8070(&UNK_14301cdf8,0x29);
LAB_1408f2f9c:
  pdb_142dc8070(&UNK_14301d264,0x2d,0);
LAB_1408f2fbc:
  pdb_142dc8070(&UNK_14301d264,0x2d);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

