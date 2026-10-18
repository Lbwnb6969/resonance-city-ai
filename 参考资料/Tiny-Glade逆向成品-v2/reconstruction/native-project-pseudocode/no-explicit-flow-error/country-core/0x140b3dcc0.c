// VA 0x140b3dcc0, PDB extent 2939 bytes
// country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_orientation::ui_edit_rectangle_rotate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_edit_rectangle_orientation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_orientation::ui_edit_rectangle_rotate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_edit_rectangle_orientation.rs
   Extent: 2939 */

void pdb_140b3dcc0(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 *param_3,
                  undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,
                  undefined8 *param_8,undefined8 *param_9,longlong param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  longlong lVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *puVar18;
  longlong *plVar19;
  uint uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 (*unaff_RBX) [16];
  undefined1 (*pauVar24) [16];
  undefined8 *puVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*unaff_R12) [16];
  undefined *unaff_R13;
  undefined8 *puVar27;
  undefined1 (*unaff_R15) [16];
  undefined1 (*pauVar28) [16];
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float in_XMM1_Da;
  float fVar36;
  undefined1 (*pauStack_1d0) [16];
  undefined1 (*pauStack_1c8) [16];
  longlong *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 uStack_198;
  byte bStack_194;
  undefined8 *puStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  longlong lStack_f8;
  ulonglong uStack_f0;
  longlong *plStack_e8;
  undefined8 *puStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_ac;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined1 (*pauStack_98) [16];
  longlong *plStack_90;
  longlong *plStack_88;
  undefined8 uStack_80;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_80 = param_3;
  cVar15 = pdb_140e94b40();
  if (cVar15 == '\0') {
    lStack_a8 = 0;
    goto LAB_140b3deaf;
  }
  unaff_R12 = (undefined1 (*) [16])&UNK_1430589d0;
  unaff_R15 = (undefined1 (*) [16])0x67;
  uVar23 = 0x67;
  lVar16 = pdb_140b413c0(&UNK_1430589d0);
  if (lVar16 != 1) goto LAB_140b3dd75;
  if (uVar23 < 0x68) {
    unaff_R12 = (undefined1 (*) [16])&UNK_1430589d0;
    uVar17 = pdb_140b413c0(&UNK_1430589d0);
    if ((uVar17 & 1) == 0) {
LAB_140b3dd75:
      puVar18 = &UNK_1430585b5;
      unaff_R13 = &UNK_14305855f;
      do {
        pbVar1 = puVar18 + -1;
        uVar20 = (uint)(char)*pbVar1;
        if ((int)uVar20 < 0) {
          bVar5 = puVar18[-2];
          if ((char)bVar5 < -0x40) {
            bVar6 = puVar18[-3];
            if ((char)bVar6 < -0x40) {
              pbVar2 = puVar18 + -4;
              puVar18 = puVar18 + -4;
              uVar20 = bVar6 & 0x3f | (*pbVar2 & 7) << 6;
            }
            else {
              puVar18 = puVar18 + -3;
              uVar20 = bVar6 & 0xf;
            }
            uVar20 = bVar5 & 0x3f | uVar20 << 6;
          }
          else {
            puVar18 = puVar18 + -2;
            uVar20 = bVar5 & 0x1f;
          }
          uVar20 = (uint)(*pbVar1 & 0x3f) | uVar20 << 6;
          if (uVar20 != 0x5c) goto LAB_140b3de09;
LAB_140b3de25:
          if ((undefined *)0x56 < puVar18 + -0x14305855e) goto LAB_140b3e674;
          unaff_RBX = (undefined1 (*) [16])(0x55 - (longlong)(puVar18 + -0x14305855f));
          unaff_R13 = puVar18 + 1;
          goto LAB_140b3de48;
        }
        puVar18 = puVar18 + -1;
        if (uVar20 == 0x5c) goto LAB_140b3de25;
LAB_140b3de09:
        if (uVar20 == 0x2f) goto LAB_140b3de25;
      } while (puVar18 != &UNK_14305855f);
      unaff_RBX = (undefined1 (*) [16])0x56;
LAB_140b3de48:
      plVar19 = (longlong *)pdb_140e97000();
      if ((char)plVar19[0xd] != '\x01') goto LAB_140b3e62b;
LAB_140b3de57:
      if (*plVar19 == 0) {
        *plVar19 = -1;
        plStack_88 = plVar19;
        uStack_a0 = pdb_140e94f10(plVar19 + 1,unaff_R12,unaff_R15,unaff_R13,unaff_RBX,1,0);
        *plStack_88 = *plStack_88 + 1;
        lStack_a8 = 1;
LAB_140b3deaf:
        pcVar7 = (char *)*param_1;
        if (*pcVar7 == '\0') {
          uStack_ac = *(uint *)(pcVar7 + 8);
          uStack_f0 = (ulonglong)uStack_ac;
          plStack_158 = *(longlong **)(pcVar7 + 0x10);
          lVar16 = param_7[1];
          uVar23 = *(ulonglong *)*param_7;
          pauVar26 = (undefined1 (*) [16])0x0;
          pauVar24 = (undefined1 (*) [16])(uVar23 - *(ulonglong *)(lVar16 + 0x18));
          if (uVar23 < *(ulonglong *)(lVar16 + 0x18)) {
            pauVar24 = pauVar26;
          }
          pauVar28 = (undefined1 (*) [16])(uVar23 - *(ulonglong *)(lVar16 + 0x38));
          if (uVar23 < *(ulonglong *)(lVar16 + 0x38)) {
            pauVar28 = pauVar26;
          }
          bVar29 = pauVar28 <= *(undefined1 (**) [16])(lVar16 + 0x30);
          unaff_RBX = (undefined1 (*) [16])
                      ((longlong)*(undefined1 (**) [16])(lVar16 + 0x30) - (longlong)pauVar28);
          bVar31 = unaff_RBX != (undefined1 (*) [16])0x0;
          if (!bVar29) {
            unaff_RBX = pauVar26;
          }
          bVar30 = pauVar24 <= *(undefined1 (**) [16])(lVar16 + 0x10);
          pauVar28 = (undefined1 (*) [16])
                     ((longlong)*(undefined1 (**) [16])(lVar16 + 0x10) - (longlong)pauVar24);
          bVar32 = pauVar28 != (undefined1 (*) [16])0x0;
          if (!bVar30) {
            pauVar28 = pauVar26;
          }
          uStack_71 = bVar30 && bVar32 || bVar29 && bVar31;
          unaff_R15 = (undefined1 (*) [16])(*unaff_RBX + (longlong)*pauVar28);
          if (bVar30 && bVar32 || bVar29 && bVar31) {
            unaff_R15 = pauVar26;
          }
          *(ulonglong *)*param_7 = *(longlong *)(lVar16 + 0x40) - (longlong)unaff_R15;
          puVar12 = *param_2;
          param_2 = (undefined1 (*) [16])**(undefined8 **)puVar12;
          auVar4 = *param_2;
          unaff_R13 = (undefined *)
                      (ulonglong)
                      ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
          plStack_90 = *(longlong **)(param_10 + 8);
          if (plStack_90 == (longlong *)0x0) {
            plStack_90 = *(longlong **)(param_10 + 0x10);
          }
          lStack_f8 = (*(undefined8 **)puVar12)[3];
          unaff_R12 = param_2 + 1;
          uStack_150 = *param_6;
          uStack_148 = *param_5;
          pauStack_98 = (undefined1 (*) [16])*param_4;
          bStack_73 = (!bVar30 || !bVar32) && (!bVar29 || !bVar31);
          uStack_160 = *uStack_80;
          uStack_ac = uStack_ac - 1;
          puVar25 = (undefined8 *)CONCAT71((int7)((ulonglong)pauVar24 >> 8),uStack_71);
LAB_140b3dfe0:
          do {
            if (lStack_f8 == 0) goto LAB_140b3e47c;
            if ((short)unaff_R13 == 0) {
              do {
                auVar4 = *unaff_R12;
                param_2 = param_2 + -0x2b0;
                unaff_R12 = unaff_R12 + 1;
                uVar20 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) ^ 0xffff;
                unaff_R13 = (undefined *)(ulonglong)uVar20;
              } while (uVar20 == 0);
            }
            uVar11 = (uint)unaff_R13;
            uVar20 = 0;
            for (uVar10 = uVar11; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar20 = uVar20 + 1;
            }
            uVar23 = (ulonglong)uVar20;
            unaff_R13 = (undefined *)(ulonglong)(uVar11 - 1 & uVar11);
            param_1 = (undefined8 *)(uVar23 * -0x2b0);
            lStack_f8 = lStack_f8 + -1;
            puVar25 = param_1;
            if (*(int *)(param_2 + -5)[uVar23 * -0x2b] == 1) {
              unaff_RBX = param_2 + uVar23 * -0x2b;
              auStack_118 = *(undefined1 (*) [16])(unaff_RBX[-5] + 4);
              uStack_108 = *(undefined8 *)(unaff_RBX[-4] + 4);
              if (uStack_ac < 2) {
                uStack_80 = (longlong *)
                            CONCAT44(uStack_80._4_4_,
                                     (int)CONCAT71((int7)((ulonglong)uStack_108 >> 8),1));
                if (plStack_158 != *(longlong **)(param_2 + -0x2b)[uVar23 * -0x2b])
                goto LAB_140b3dfe0;
              }
              else {
                if ((int)uStack_f0 != 0) {
LAB_140b3e5b5:
                  if (lStack_a8 == 0) {
                    return;
                  }
                  plVar19 = (longlong *)pdb_140e97000();
                  if (((char)plVar19[0xd] != '\x01') &&
                     (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 == (longlong *)0x0))
                  goto LAB_140b3e668;
                  if (*plVar19 != 0) goto LAB_140b3e61f;
                  *plVar19 = -1;
                  uStack_80 = plVar19;
                  pdb_140e95370(plVar19 + 1,uStack_a0);
                  goto LAB_140b3e5f3;
                }
                uStack_80 = (longlong *)((ulonglong)uStack_80._4_4_ << 0x20);
              }
              plStack_88 = *(longlong **)(param_2 + -0x2b)[uVar23 * -0x2b];
              pdb_140df3450(&plStack_1c0,auStack_118);
              pdb_1409f1340(&plStack_e8,uStack_150);
              uVar33 = pdb_140deea90(&plStack_1c0,&plStack_e8);
              uStack_138 = CONCAT44(in_XMM1_Da,uVar33);
              bStack_72 = pdb_140dee720(&uStack_138);
              if ((*(byte *)(param_8 + 1) & (byte)uStack_80) == 0) {
                puStack_180 = (undefined8 *)*param_8;
              }
              else {
                pdb_140e08f50(&plStack_e8,uStack_148);
                fVar13 = plStack_e8._0_4_;
                fVar14 = puStack_e0._0_4_;
                pdb_140df0010(&plStack_e8,auStack_118);
                fVar34 = SUB84(plStack_e8,0) - fVar13;
                fVar35 = (float)((ulonglong)plStack_e8 >> 0x20) - fVar14;
                fVar35 = SQRT(fVar35 * fVar35 + fVar34 * fVar34);
                fVar34 = SUB84(puStack_e0,0) - fVar13;
                fVar36 = (float)((ulonglong)puStack_e0 >> 0x20) - fVar14;
                fVar34 = SQRT(fVar36 * fVar36 + fVar34 * fVar34);
                puStack_180 = (undefined8 *)(ulonglong)(fVar34 < fVar35);
                if (fVar35 <= fVar34) {
                  fVar34 = fVar35;
                }
                fVar35 = SQRT((fStack_d4 - fVar14) * (fStack_d4 - fVar14) +
                              (fStack_d8 - fVar13) * (fStack_d8 - fVar13));
                if (fVar35 < fVar34) {
                  puStack_180 = (undefined8 *)0x2;
                  fVar34 = fVar35;
                }
                in_XMM1_Da = SQRT((fStack_cc - fVar14) * (fStack_cc - fVar14) +
                                  (fStack_d0 - fVar13) * (fStack_d0 - fVar13));
                if (in_XMM1_Da < fVar34) {
                  puStack_180 = (undefined8 *)0x3;
                }
                *param_8 = puStack_180;
              }
              puStack_178 = (param_2 + uVar23 * -0x2b)[-0x2b] + 8;
              uStack_170 = *(undefined8 *)(unaff_RBX[-0x1d] + 8);
              uStack_168 = *(undefined8 *)unaff_RBX[-0x1c];
              bStack_72 = bStack_72 | (byte)uStack_80;
              bStack_74 = (byte)uStack_80 | bStack_73;
              puVar21 = puStack_180;
              puVar27 = (undefined8 *)0x0;
LAB_140b3e224:
              param_1 = puVar27;
              param_4 = param_1;
              if (param_1 < (undefined8 *)0x4) {
                puVar27 = (undefined8 *)((longlong)param_1 + 1);
                puVar25 = param_1;
                if (((byte)uStack_80 & puVar21 != param_1) == 0) {
                  uStack_1a8 = uStack_108;
                  uStack_1b8 = auStack_118._0_8_;
                  uStack_1b0 = auStack_118._8_8_;
                  plStack_1c0 = plStack_88;
                  uStack_198 = 0;
                  puStack_1a0 = param_1;
                  bStack_194 = (byte)uStack_80;
                  if (bStack_72 == 0) {
                    plStack_e8 = plStack_88;
                    puStack_e0 = param_1;
                    uVar23 = pdb_1400b0130(&plStack_e8);
                    puVar21 = puStack_180;
                    if (((pauStack_98[1][8] == '\0') ||
                        ((uVar23 ^ *(ulonglong *)(pauStack_98[3] + 8)) != 0xa8f64de710aa4d92)) ||
                       (*(int *)(pauStack_98[2] + 8) == 2)) goto LAB_140b3e224;
                  }
                  unaff_RBX = pauStack_98;
                  unaff_R15 = (undefined1 (*) [16])
                              pdb_140c66a90(&plStack_1c0,pauStack_98,puStack_178,uStack_170,
                                            uStack_168,uStack_71);
                  pauStack_1d0 = unaff_R15;
                  pauStack_1c8 = unaff_RBX;
                  if ((bStack_74 != 0) ||
                     (((puVar21 = puStack_180, unaff_R15[1][8] == '\x02' &&
                       (*(undefined1 (**) [16])(unaff_R15[3] + 8) == unaff_RBX)) &&
                      (unaff_R15[1][9] != '\x02')))) {
                    pdb_140c67060(&plStack_1c0,&pauStack_1d0,uStack_160);
                    if ((((byte)uStack_80 == '\0') && (unaff_R15[1][8] == '\x01')) &&
                       ((*(undefined1 (**) [16])(unaff_R15[3] + 8) == unaff_RBX &&
                        (unaff_R15[1][9] == '\x01')))) {
                      lVar16 = plStack_90[2];
                      if ((ulonglong)(*plStack_90 - lVar16) < 0x18) {
                        lStack_140 = lVar16;
                        pdb_142d7f1b0(plStack_90,lVar16,0x18,1,1);
                        lVar16 = lStack_140;
                      }
                      lVar8 = plStack_90[1];
                      *(code **)(lVar8 + lVar16) = pdb_1416099f0;
                      *(longlong **)(lVar8 + 8 + lVar16) = plStack_88;
                      *(undefined1 *)(lVar8 + 0x10 + lVar16) = 2;
                      plStack_90[2] = lVar16 + 0x18;
                    }
                    cVar15 = unaff_R15[1][8];
                    puVar21 = puStack_180;
                    if (cVar15 == '\x02') {
                      pauVar24 = *(undefined1 (**) [16])(unaff_R15[3] + 8);
                      bVar29 = true;
                      if (pauVar24 == unaff_RBX) {
                        bVar29 = unaff_R15[1][9] == '\x02';
                      }
                      *(bool *)(param_8 + 1) = bVar29;
                    }
                    else {
                      *(undefined1 *)(param_8 + 1) = 1;
                      if (cVar15 == '\0') goto LAB_140b3e224;
                      pauVar24 = *(undefined1 (**) [16])(unaff_R15[3] + 8);
                    }
                    if (pauVar24 == unaff_RBX) {
                      uVar20 = *(uint *)(unaff_R15[2] + 8);
                      unaff_RBX = (undefined1 (*) [16])(ulonglong)uVar20;
                      if (uVar20 != 2) {
                        param_2 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)param_2 >> 8),2);
                        if (cVar15 == '\x02') {
                          param_2 = (undefined1 (*) [16])(ulonglong)(byte)unaff_R15[1][9];
                        }
                        uStack_b8 = *(undefined4 *)(unaff_R15[5] + 0xc);
                        plStack_e8 = *(longlong **)(unaff_R15[2] + 0xc);
                        puStack_e0 = *(undefined8 **)(unaff_R15[3] + 4);
                        fStack_d8 = *(float *)(unaff_R15[3] + 0xc);
                        fStack_d4 = *(float *)unaff_R15[4];
                        fStack_d0 = *(float *)(unaff_R15[4] + 4);
                        fStack_cc = *(float *)(unaff_R15[4] + 8);
                        uStack_c8 = *(undefined4 *)(unaff_R15[4] + 0xc);
                        uStack_c4 = *(undefined4 *)unaff_R15[5];
                        uStack_c0 = *(undefined4 *)(unaff_R15[5] + 4);
                        uStack_bc = *(undefined4 *)(unaff_R15[5] + 8);
                        uStack_138 = auStack_118._0_8_;
                        uStack_130 = auStack_118._8_8_;
                        uStack_128 = uStack_108;
                        *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
                        param_4 = (undefined8 *)*param_9;
                        lVar16 = param_4[6];
                        unaff_R12 = (undefined1 (*) [16])param_4[8];
                        if (lVar16 == param_4[4]) {
                          pdb_142d8a810(param_4 + 4);
                        }
                        lVar8 = param_4[5];
                        lVar22 = lVar16 * 0x70;
                        *(uint *)(lVar8 + lVar22) = uVar20;
                        puVar25 = (undefined8 *)(lVar8 + 4 + lVar22);
                        *puVar25 = plStack_e8;
                        puVar25[1] = puStack_e0;
                        pfVar3 = (float *)(lVar8 + 0x14 + lVar22);
                        *pfVar3 = fStack_d8;
                        pfVar3[1] = fStack_d4;
                        pfVar3[2] = fStack_d0;
                        pfVar3[3] = fStack_cc;
                        puVar25 = (undefined8 *)(lVar8 + 0x24 + lVar22);
                        *puVar25 = CONCAT44(uStack_c4,uStack_c8);
                        puVar25[1] = CONCAT44(uStack_bc,uStack_c0);
                        *(undefined4 *)(lVar8 + 0x34 + lVar22) = uStack_b8;
                        *(longlong **)(lVar8 + 0x38 + lVar22) = plStack_88;
                        puVar25 = (undefined8 *)(lVar8 + 0x40 + lVar22);
                        *puVar25 = uStack_138;
                        puVar25[1] = uStack_130;
                        *(undefined8 *)(lVar8 + 0x50 + lVar22) = uStack_128;
                        *(undefined8 **)(lVar8 + 0x58 + lVar22) = param_1;
                        *(char *)(lVar8 + 0x60 + lVar22) = (char)param_2;
                        *(undefined1 (**) [16])(lVar8 + 0x68 + lVar22) = unaff_R12;
                        unaff_R15 = (undefined1 (*) [16])(lVar16 + 1);
                        param_4[6] = unaff_R15;
                        param_4[8] = param_4[8] + 1;
                        in_XMM1_Da = fStack_d8;
                        goto LAB_140b3e5b5;
                      }
                    }
                  }
                }
                goto LAB_140b3e224;
              }
            }
          } while( true );
        }
        *(undefined1 *)(param_8 + 1) = 1;
        if (lStack_a8 == 0) {
          return;
        }
        goto LAB_140b3e48c;
      }
      goto LAB_140b3e61f;
    }
    if (uVar23 + 2 < 0x68) {
      unaff_R15 = (undefined1 (*) [16])(0x65 - uVar23);
      unaff_R12 = (undefined1 (*) [16])(&UNK_1430589d2 + uVar23);
      goto LAB_140b3dd75;
    }
    goto LAB_140b3e6b7;
  }
  goto LAB_140b3e697;
LAB_140b3e47c:
  param_1 = puVar25;
  if (lStack_a8 != 0) {
LAB_140b3e48c:
    plVar19 = (longlong *)pdb_140e97000();
    if (((char)plVar19[0xd] != '\x01') &&
       (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 == (longlong *)0x0))
    goto LAB_140b3e668;
    if (*plVar19 != 0) {
LAB_140b3e61f:
      plVar19 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b3e62b:
      plVar19 = (longlong *)pdb_142d8ec20(plVar19,0);
      if (plVar19 == (longlong *)0x0) goto LAB_140b3e668;
      goto LAB_140b3de57;
    }
    *plVar19 = -1;
    uStack_80 = plVar19;
    pdb_140e95370(plVar19 + 1,uStack_a0);
LAB_140b3e5f3:
    *uStack_80 = *uStack_80 + 1;
  }
  return;
LAB_140b3e668:
  pdb_142dc7890(&UNK_143326860);
LAB_140b3e674:
  pdb_142dc8070(&UNK_14305855f,0x56);
LAB_140b3e697:
  pdb_142dc8070(&UNK_1430589d0,0x67,0);
LAB_140b3e6b7:
  pdb_142dc8070(&UNK_1430589d0,0x67);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

