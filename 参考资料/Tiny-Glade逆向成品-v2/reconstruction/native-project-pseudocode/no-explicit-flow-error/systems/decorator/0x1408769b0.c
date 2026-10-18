// VA 0x1408769b0, PDB extent 3125 bytes
// system_decorator::window_lights::window_lights
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/window_lights.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::window_lights::window_lights
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/window_lights.rs
   Extent: 3125 */

void pdb_1408769b0(undefined8 *param_1,longlong *param_2,longlong *param_3,uint *param_4,
                  longlong *param_5,undefined8 *param_6)

{
  byte *pbVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  byte bVar22;
  undefined1 (*pauVar23) [16];
  longlong lVar24;
  undefined *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ushort uVar30;
  longlong lVar31;
  undefined *puVar32;
  undefined *puVar33;
  uint *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong *plVar37;
  bool bVar38;
  bool bVar39;
  byte bVar40;
  int iVar41;
  float fVar42;
  undefined4 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uStack_108;
  longlong lStack_100;
  int iStack_ec;
  longlong lStack_e0;
  byte *pbStack_d8;
  longlong lStack_d0;
  uint *puStack_c8;
  undefined4 *puStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined4 uStack_94;
  longlong *plStack_90;
  char cStack_82;
  char cStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  plVar16 = param_2;
  cVar11 = pdb_140e94b40();
  puStack_c8 = param_4;
  plStack_b8 = param_3;
  plStack_b0 = param_2;
  uStack_a8 = param_1;
  if (cVar11 == '\0') {
    bVar12 = false;
    goto LAB_140876b8e;
  }
  lVar24 = 0x2e;
  lVar14 = pdb_1408775f0(0x2e);
  puVar32 = &UNK_14300e9c8;
  if (lVar14 != 1) {
LAB_140876a65:
    puVar25 = &UNK_14300e965;
    puVar33 = &UNK_14300e938;
    do {
      bVar22 = puVar25[-1];
      uVar13 = (uint)(char)bVar22;
      if ((char)bVar22 < '\0') {
        bVar40 = puVar25[-2];
        if ((char)bVar40 < -0x40) {
          bVar4 = puVar25[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar25 + -4;
            puVar25 = puVar25 + -4;
            uVar13 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar25 = puVar25 + -3;
            uVar13 = bVar4 & 0xf;
          }
          uVar13 = bVar40 & 0x3f | uVar13 << 6;
        }
        else {
          puVar25 = puVar25 + -2;
          uVar13 = bVar40 & 0x1f;
        }
        uVar13 = (uint)(bVar22 & 0x3f) | uVar13 << 6;
        if (uVar13 != 0x5c) goto LAB_140876af4;
LAB_140876b0d:
        if ((undefined *)0x2d < puVar25 + -0x14300e937) goto LAB_1408773cd;
        lVar14 = 0x2d - (longlong)(puVar25 + -0x14300e937);
        puVar33 = puVar25 + 1;
        goto LAB_140876b30;
      }
      puVar25 = puVar25 + -1;
      if (uVar13 == 0x5c) goto LAB_140876b0d;
LAB_140876af4:
      if (uVar13 == 0x2f) goto LAB_140876b0d;
    } while (puVar25 != &UNK_14300e938);
    lVar14 = 0x2d;
LAB_140876b30:
    plVar16 = (longlong *)pdb_140e97000();
    if (((char)plVar16[0xd] == '\x01') ||
       (plVar16 = (longlong *)pdb_142dde6e0(plVar16,0), plVar16 != (longlong *)0x0)) {
      if (*plVar16 != 0) goto LAB_140877391;
      *plVar16 = -1;
      plStack_90 = plVar16;
      uStack_108 = pdb_140e94f10(plVar16 + 1,puVar32,lVar24,puVar33,lVar14,1,0);
      *plStack_90 = *plStack_90 + 1;
      bVar12 = true;
LAB_140876b8e:
      puVar5 = (ulonglong *)*param_6;
      lVar14 = param_6[1];
      uVar15 = *puVar5;
      uVar17 = 0;
      uVar28 = uVar15 - *(ulonglong *)(lVar14 + 0x18);
      if (uVar15 < *(ulonglong *)(lVar14 + 0x18)) {
        uVar28 = uVar17;
      }
      uVar18 = uVar15 - *(ulonglong *)(lVar14 + 0x38);
      if (uVar15 < *(ulonglong *)(lVar14 + 0x38)) {
        uVar18 = uVar17;
      }
      uVar15 = *(ulonglong *)(lVar14 + 0x10);
      uVar6 = *(ulonglong *)(lVar14 + 0x30);
      bVar38 = uVar18 <= uVar6;
      uVar26 = uVar6 - uVar18;
      uVar27 = uVar26;
      if (!bVar38) {
        uVar27 = uVar17;
      }
      bVar39 = uVar28 <= uVar15;
      uVar35 = uVar15 - uVar28;
      uVar36 = uVar35;
      if (!bVar39) {
        uVar36 = uVar17;
      }
      uVar17 = *(ulonglong *)(lVar14 + 0x40);
      lVar24 = *(longlong *)(lVar14 + 8);
      lVar14 = *(longlong *)(lVar14 + 0x28);
      *puVar5 = (uVar17 - uVar27) - uVar36;
      cStack_81 = bVar39 && uVar35 != 0 || bVar38 && uVar26 != 0;
      if (bVar39 && uVar35 != 0 || bVar38 && uVar26 != 0) {
        lVar14 = lVar14 + uVar18 * 0x10;
        lVar24 = lVar24 + uVar28 * 0x10;
        if (uVar15 < uVar28) {
          lVar24 = 8;
        }
        lVar31 = 0;
        if (uVar28 < uVar15) {
          lVar31 = lVar24 + -0x10 + uVar36 * 0x10;
        }
        if (uVar6 < uVar18) {
          lVar14 = 8;
        }
        lVar14 = lVar14 + -0x10 + uVar27 * 0x10;
        if (uVar6 <= uVar18) {
          lVar14 = lVar31;
        }
        *puVar5 = uVar17;
        iStack_ec = *(int *)(lVar14 + 8);
      }
      cVar11 = pdb_140a937c0(*param_5 + 0x98);
      fVar42 = _DAT_14300e8a4;
      if (cVar11 == '\0') {
        fVar42 = _DAT_14300e8a8;
      }
      iVar41 = -(uint)(fVar42 <= *(float *)(*plStack_b8 + 8) &&
                      *(float *)(*plStack_b8 + 8) < _DAT_14300bbe4);
      uStack_94 = *(undefined4 *)((longlong)uStack_a8 + 0x1c);
      plStack_90 = (longlong *)*uStack_a8;
      puStack_c0 = (undefined4 *)uStack_a8[2];
      uStack_a8 = (longlong *)(CONCAT44(uStack_a8._4_4_,iVar41) & 0xffffffffffffff01);
      *(byte *)(plStack_90 + 6) = (byte)iVar41 & 1;
      *puStack_c0 = uStack_94;
      pauVar23 = (undefined1 (*) [16])*plStack_90;
      lVar24 = plStack_90[3];
      auVar44 = *pauVar23;
      pauVar21 = pauVar23 + 1;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar44[0xf] >> 7) << 0xf);
      lVar31 = *(longlong *)puStack_c8;
      lVar14 = 0;
      while (lStack_e0 = lVar14, uVar10 = _UNK_142e47bfc, uVar43 = _UNK_142e47bf8, lVar24 != 0) {
        if ((short)uVar13 == 0) {
          do {
            auVar44 = *pauVar21;
            pauVar23 = pauVar23 + -0x18;
            pauVar21 = pauVar21 + 1;
            uVar13 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar13 == 0);
        }
        uVar19 = 0;
        for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar19 = uVar19 + 1;
        }
        uVar15 = (ulonglong)uVar19;
        uVar13 = uVar13 - 1 & uVar13;
        lVar24 = lVar24 + -1;
        lVar14 = lStack_e0 + 1;
        if (*(char *)((longlong)pauVar23 + uVar15 * -0x18 + -7) != (char)uStack_a8) {
          lStack_e0 = lStack_e0 + (ulonglong)*(uint *)(lVar31 + 0x2c);
          fVar42 = (float)pdb_140e02880(&lStack_e0);
          *(float *)((longlong)pauVar23 + uVar15 * -0x18 + -0xc) = fVar42 + fVar42;
          *(char *)((longlong)pauVar23 + uVar15 * -0x18 + -7) = (char)uStack_a8;
        }
      }
      lStack_e0 = 0;
      pbStack_d8 = (byte *)0x8;
      lStack_d0 = 0;
      lVar14 = *plStack_b0;
      plStack_b8 = (longlong *)plStack_b0[1];
      puVar34 = *(uint **)(lVar14 + 0xf8);
      puStack_c8 = puVar34 + *(longlong *)(lVar14 + 0x100);
      cStack_82 = *(char *)(lVar14 + 0x108);
      plVar16 = plStack_90 + 4;
      lVar24 = 0;
      lStack_100 = 8;
      lStack_a0 = 0;
      uVar13 = 0;
LAB_140876de7:
      do {
        lVar20 = lStack_d0;
        if (cStack_82 == '\0') {
          if (uVar13 == (uint)lVar24) {
            do {
              if (puVar34 == puStack_c8) goto LAB_14087720d;
              uVar13 = *puVar34;
              puVar34 = puVar34 + 1;
              lVar24 = *(longlong *)(plStack_b8[0x20] + 0x58 + (ulonglong)uVar13 * 0xa0);
            } while (lVar24 == 0);
            lVar29 = plStack_b8[0x20] + (ulonglong)uVar13 * 0xa0;
            uVar15 = (ulonglong)*(uint *)(lVar29 + 0x94);
            if (*(ulonglong *)(lVar14 + 0x110) <
                *(ulonglong *)(plStack_b8[0x34] + 0x40 + uVar15 * 0x48)) {
              lVar2 = plStack_b8[0x34] + uVar15 * 0x48;
              uVar15 = *(ulonglong *)
                        (*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lVar14 + 0x110) * 8);
              if (uVar15 == 0) goto LAB_140876f27;
              lStack_a0 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar15 * 0x30);
            }
            else {
LAB_140876f27:
              lStack_a0 = 0;
            }
            lStack_100 = *(longlong *)(lVar29 + 0x50);
            uVar13 = 0;
          }
          uVar19 = ~*(uint *)(lStack_100 + 8 + (ulonglong)uVar13 * 0x10);
        }
        else {
          uVar19 = uVar13;
          if (uVar13 == (uint)lVar24) {
            do {
              if (puVar34 == puStack_c8) goto LAB_14087720d;
              uVar13 = *puVar34;
              puVar34 = puVar34 + 1;
              lVar24 = *(longlong *)(plStack_b8[0x34] + 0x10 + (ulonglong)uVar13 * 0x48);
            } while (lVar24 == 0);
            lVar29 = plStack_b8[0x34] + (ulonglong)uVar13 * 0x48;
            if ((*(ulonglong *)(lVar14 + 0x110) < *(ulonglong *)(lVar29 + 0x40)) &&
               (uVar15 = *(ulonglong *)
                          (*(longlong *)(lVar29 + 0x38) + *(ulonglong *)(lVar14 + 0x110) * 8),
               uVar15 != 0)) {
              lStack_a0 = *(longlong *)(*(longlong *)(lVar29 + 0x18) + 0x10 + ~uVar15 * 0x30);
            }
            else {
              lStack_a0 = 0;
            }
            uVar19 = 0;
            uVar13 = uVar19;
          }
        }
        plVar37 = (longlong *)((ulonglong)uVar19 * 0x10 + lStack_a0);
        lVar29 = *plVar37;
        plStack_b0._0_4_ = uVar13;
        if (lStack_d0 == lStack_e0) {
          pdb_142d896b0(&lStack_e0);
        }
        *(longlong *)(pbStack_d8 + lVar20 * 8) = lVar29;
        lStack_d0 = lVar20 + 1;
        *puStack_c0 = uStack_94;
        uVar17 = pdb_1400af0a0(plVar16);
        plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,(uint)plStack_b0 + 1);
        uVar15 = plStack_90[1];
        bVar22 = (byte)(uVar17 >> 0x38);
        bVar40 = bVar22 >> 1;
        auVar44 = ZEXT216(CONCAT11(bVar40,bVar40));
        auVar44 = pshuflw(auVar44,auVar44,0);
        lVar20 = 0;
        uVar28 = uVar17;
        while( true ) {
          uVar28 = uVar28 & uVar15;
          pcVar3 = (char *)(*plStack_90 + uVar28);
          auVar47[0] = -(*pcVar3 == auVar44[0]);
          auVar47[1] = -(pcVar3[1] == auVar44[1]);
          auVar47[2] = -(pcVar3[2] == auVar44[2]);
          auVar47[3] = -(pcVar3[3] == auVar44[3]);
          auVar47[4] = -(pcVar3[4] == auVar44[4]);
          auVar47[5] = -(pcVar3[5] == auVar44[5]);
          auVar47[6] = -(pcVar3[6] == auVar44[6]);
          auVar47[7] = -(pcVar3[7] == auVar44[7]);
          auVar47[8] = -(pcVar3[8] == auVar44[0]);
          auVar47[9] = -(pcVar3[9] == auVar44[1]);
          auVar47[10] = -(pcVar3[10] == auVar44[2]);
          auVar47[0xb] = -(pcVar3[0xb] == auVar44[3]);
          auVar47[0xc] = -(pcVar3[0xc] == auVar44[4]);
          auVar47[0xd] = -(pcVar3[0xd] == auVar44[5]);
          auVar47[0xe] = -(pcVar3[0xe] == auVar44[6]);
          auVar47[0xf] = -(pcVar3[0xf] == auVar44[7]);
          uVar30 = (ushort)(SUB161(auVar47 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar47[0xf] >> 7) << 0xf;
          uVar13 = (uint)uVar30;
          while (uVar30 != 0) {
            uVar19 = 0;
            for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar19 = uVar19 + 1;
            }
            if (*(longlong *)(*plStack_90 + -0x18 + (uVar19 + uVar28 & uVar15) * -0x18) == lVar29)
            goto LAB_1408770d2;
            uVar30 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar30);
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
          uVar30 = (ushort)(SUB161(auVar45 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar45[0xf] >> 7) << 0xf;
          if (uVar30 != 0) break;
          uVar28 = uVar28 + lVar20 + 0x10;
          lVar20 = lVar20 + 0x10;
        }
        if (plStack_90[2] == 0) {
          pdb_142dd97b0(plStack_90,1,plVar16,CONCAT71((uint7)(byte)(uVar30 >> 8),1));
          uVar15 = plStack_90[1];
        }
        pauVar21 = (undefined1 (*) [16])*plStack_90;
        uVar17 = uVar17 & uVar15;
        auVar44 = *(undefined1 (*) [16])(*pauVar21 + uVar17);
        uVar30 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar44[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar30;
        if (uVar30 == 0) {
          lVar20 = 0x10;
          do {
            uVar17 = uVar17 + lVar20 & uVar15;
            auVar44 = *(undefined1 (*) [16])(*pauVar21 + uVar17);
            lVar20 = lVar20 + 0x10;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar44[0xf] >> 7) << 0xf);
          } while (uVar13 == 0);
        }
        uVar19 = 0;
        for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar19 = uVar19 + 1;
        }
        uVar28 = uVar19 + uVar17 & uVar15;
        bVar40 = (*pauVar21)[uVar28];
        if (-1 < (char)bVar40) {
          auVar44 = *pauVar21;
          uVar13 = 0;
          for (uVar19 = (uint)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar44[0xf] >> 7) << 0xf); (uVar19 & 1) == 0;
              uVar19 = uVar19 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          uVar28 = (ulonglong)uVar13;
          bVar40 = (*pauVar21)[uVar28];
        }
        bVar22 = bVar22 >> 1;
        (*pauVar21)[uVar28] = bVar22;
        pauVar21[1][uVar28 - 0x10 & uVar15] = bVar22;
        *(longlong *)((longlong)pauVar21 + uVar28 * -0x18 + -0x18) = lVar29;
        *(undefined8 *)((longlong)pauVar21 + uVar28 * -0x18 + -0x10) = 0;
        *(char *)((longlong)pauVar21 + uVar28 * -0x18 + -8) = (char)uStack_a8;
        *(char *)((longlong)pauVar21 + uVar28 * -0x18 + -7) = (char)uStack_a8;
        auVar44._0_8_ = CONCAT71(0,bVar40 & 1);
        auVar44._8_4_ = uVar43;
        auVar44._12_4_ = uVar10;
        plStack_90[2] = plStack_90[2] - auVar44._0_8_;
        plStack_90[3] = plStack_90[3] - auVar44._8_8_;
LAB_1408770d2:
        uVar13 = (uint)plStack_b0;
        if ((cStack_81 == '\x01' && iStack_ec == (int)plVar37[1]) &&
           (*puStack_c0 = uStack_94, plStack_90[3] != 0)) {
          uVar15 = pdb_1400af0a0(plVar16,plVar37);
          lVar20 = *plStack_90;
          bVar22 = (byte)(uVar15 >> 0x39);
          auVar44 = ZEXT216(CONCAT11(bVar22,bVar22));
          auVar44 = pshuflw(auVar44,auVar44,0);
          lVar29 = 0;
          while( true ) {
            uVar15 = uVar15 & plStack_90[1];
            pcVar3 = (char *)(lVar20 + uVar15);
            auVar48[0] = -(*pcVar3 == auVar44[0]);
            auVar48[1] = -(pcVar3[1] == auVar44[1]);
            auVar48[2] = -(pcVar3[2] == auVar44[2]);
            auVar48[3] = -(pcVar3[3] == auVar44[3]);
            auVar48[4] = -(pcVar3[4] == auVar44[4]);
            auVar48[5] = -(pcVar3[5] == auVar44[5]);
            auVar48[6] = -(pcVar3[6] == auVar44[6]);
            auVar48[7] = -(pcVar3[7] == auVar44[7]);
            auVar48[8] = -(pcVar3[8] == auVar44[0]);
            auVar48[9] = -(pcVar3[9] == auVar44[1]);
            auVar48[10] = -(pcVar3[10] == auVar44[2]);
            auVar48[0xb] = -(pcVar3[0xb] == auVar44[3]);
            auVar48[0xc] = -(pcVar3[0xc] == auVar44[4]);
            auVar48[0xd] = -(pcVar3[0xd] == auVar44[5]);
            auVar48[0xe] = -(pcVar3[0xe] == auVar44[6]);
            auVar48[0xf] = -(pcVar3[0xf] == auVar44[7]);
            uVar30 = (ushort)(SUB161(auVar48 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar48[0xf] >> 7) << 0xf;
            uVar19 = (uint)uVar30;
            while (uVar13 = (uint)plStack_b0, uVar30 != 0) {
              uVar8 = 0;
              for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              uVar28 = uVar8 + uVar15 & plStack_90[1];
              if (*plVar37 == *(longlong *)(lVar20 + -0x18 + uVar28 * -0x18)) {
                lVar20 = lVar20 + uVar28 * -0x18;
                *(undefined4 *)(lVar20 + -0x10) = 0x3f800000;
                *(undefined1 *)(lVar20 + -7) = 1;
                goto LAB_140876de7;
              }
              uVar30 = (ushort)(uVar19 - 1) & (ushort)uVar19;
              uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar30);
            }
            auVar46[0] = -(*pcVar3 == -1);
            auVar46[1] = -(pcVar3[1] == -1);
            auVar46[2] = -(pcVar3[2] == -1);
            auVar46[3] = -(pcVar3[3] == -1);
            auVar46[4] = -(pcVar3[4] == -1);
            auVar46[5] = -(pcVar3[5] == -1);
            auVar46[6] = -(pcVar3[6] == -1);
            auVar46[7] = -(pcVar3[7] == -1);
            auVar46[8] = -(pcVar3[8] == -1);
            auVar46[9] = -(pcVar3[9] == -1);
            auVar46[10] = -(pcVar3[10] == -1);
            auVar46[0xb] = -(pcVar3[0xb] == -1);
            auVar46[0xc] = -(pcVar3[0xc] == -1);
            auVar46[0xd] = -(pcVar3[0xd] == -1);
            auVar46[0xe] = -(pcVar3[0xe] == -1);
            auVar46[0xf] = -(pcVar3[0xf] == -1);
            if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar46 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar46 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x3f,0) & 1) != 0) || (SUB161(auVar46 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') break;
            uVar15 = uVar15 + lVar29 + 0x10;
            lVar29 = lVar29 + 0x10;
          }
        }
      } while( true );
    }
    goto LAB_1408773c1;
  }
  if (plVar16 < (longlong *)0x2f) {
    uVar15 = pdb_1408775f0(plVar16);
    if ((uVar15 & 1) != 0) {
      if (0x2e < (longlong)plVar16 + 2U) goto LAB_140877410;
      lVar24 = 0x2c - (longlong)plVar16;
      puVar32 = &UNK_14300e9ca + (longlong)plVar16;
    }
    goto LAB_140876a65;
  }
  goto LAB_1408773f0;
LAB_14087720d:
  *puStack_c0 = uStack_94;
  pdb_1414b6dd0(plStack_90,&lStack_e0);
  *puStack_c0 = uStack_94;
  pauVar23 = (undefined1 (*) [16])*plStack_90;
  lVar14 = plStack_90[3];
  auVar44 = *pauVar23;
  pauVar21 = pauVar23 + 1;
  uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar44[0xf] >> 7) << 0xf);
  while (lVar14 != 0) {
    lVar14 = lVar14 + -1;
    if ((short)uVar13 == 0) {
      do {
        auVar44 = *pauVar21;
        pauVar23 = pauVar23 + -0x18;
        pauVar21 = pauVar21 + 1;
        uVar13 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar13 == 0);
    }
    uVar19 = 0;
    for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar19 = uVar19 + 1;
    }
    uVar15 = (ulonglong)uVar19;
    fVar42 = *(float *)((longlong)pauVar23 + uVar15 * -0x18 + -0xc);
    if (0.0 < fVar42) {
      fVar42 = fVar42 - *(float *)(lVar31 + 0x28);
      if (fVar42 <= 0.0) {
        fVar42 = 0.0;
      }
      *(float *)((longlong)pauVar23 + uVar15 * -0x18 + -0xc) = fVar42;
      if ((fVar42 == 0.0) && (!NAN(fVar42))) {
        *(undefined1 *)((longlong)pauVar23 + uVar15 * -0x18 + -8) =
             *(undefined1 *)((longlong)pauVar23 + uVar15 * -0x18 + -7);
      }
    }
    uVar43 = pdb_140de93b0();
    uVar13 = uVar13 - 1 & uVar13;
    *(undefined4 *)((longlong)pauVar23 + uVar15 * -0x18 + -0x10) = uVar43;
  }
  if (lStack_e0 != 0) {
    pub_1406abac0(pbStack_d8,lStack_e0 << 3,8);
  }
  if (!bVar12) {
    return;
  }
  plVar16 = (longlong *)pdb_140e97000();
  if ((char)plVar16[0xd] != '\x01') goto LAB_14087739d;
  do {
    if (*plVar16 == 0) {
      *plVar16 = -1;
      uStack_a8 = plVar16;
      pdb_140e95370(plVar16 + 1,uStack_108);
      *uStack_a8 = *uStack_a8 + 1;
      return;
    }
LAB_140877391:
    plVar16 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_14087739d:
    plVar16 = (longlong *)pdb_142dde6e0(plVar16,0);
  } while (plVar16 != (longlong *)0x0);
LAB_1408773c1:
  pdb_142dc7890(&UNK_14330e598);
LAB_1408773cd:
  pdb_142dc8070(&UNK_14300e938,0x2d);
LAB_1408773f0:
  pdb_142dc8070(&UNK_14300e9c8,0x2e,0);
LAB_140877410:
  pdb_142dc8070(&UNK_14300e9c8,0x2e);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

