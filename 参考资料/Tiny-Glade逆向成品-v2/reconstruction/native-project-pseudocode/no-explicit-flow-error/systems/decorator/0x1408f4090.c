// VA 0x1408f4090, PDB extent 7828 bytes
// system_decorator::blueprint::instantiate_blueprints
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::blueprint::instantiate_blueprints
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 7828 */

void pdb_1408f4090(undefined1 (**param_1) [16],ulonglong *param_2,undefined1 (*param_3) [16],
                  undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,
                  longlong *param_8,longlong *param_9,undefined8 *param_10,undefined8 *param_11,
                  undefined8 *param_12,longlong *param_13,undefined8 *param_14,undefined8 *param_15,
                  undefined8 *param_16)

{
  byte *pbVar1;
  float *pfVar2;
  float fVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  char cVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined1 (**ppauVar26) [16];
  uint uVar27;
  undefined1 (*pauVar28) [16];
  undefined *puVar29;
  undefined *puVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ushort uVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined1 (***pppauVar37) [16];
  undefined1 (**ppauVar38) [16];
  undefined4 uVar39;
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  longlong lStack_3a8;
  undefined1 auStack_3a0 [368];
  undefined4 *puStack_230;
  ulonglong uStack_228;
  undefined4 *puStack_220;
  undefined8 uStack_218;
  undefined4 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 (*pauStack_1f8) [16];
  undefined1 (*pauStack_1f0) [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  ulonglong uStack_1c8;
  longlong *plStack_1c0;
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  undefined1 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  longlong *plStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined1 (**ppauStack_150) [16];
  undefined4 *puStack_148;
  undefined4 *puStack_140;
  longlong *plStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined1 *puStack_118;
  undefined1 (*pauStack_110) [16];
  longlong *plStack_108;
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f8) [16];
  ulonglong uStack_f0;
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 auStack_d8 [16];
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 (*pauStack_98) [16];
  undefined1 (*pauStack_90) [16];
  char cStack_81;
  ulonglong *puStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puStack_160 = param_4;
  cStack_81 = pdb_140e94b40();
  if (cStack_81 == '\0') goto LAB_1408f4268;
  pppauVar37 = (undefined1 (***) [16])&UNK_14301d22e;
  pauVar40 = (undefined1 (*) [16])0x33;
  uVar24 = 0x33;
  lVar17 = pdb_1408f7870(&UNK_14301d22e);
  if (lVar17 == 1) {
    if (0x33 < uVar24) {
LAB_1408f5ae9:
      pdb_142dc8070(&UNK_14301d22e,0x33,0);
LAB_1408f5b09:
      pdb_142dc8070(&UNK_14301d22e,0x33);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pppauVar37 = (undefined1 (***) [16])&UNK_14301d22e;
    uVar18 = pdb_1408f7870(&UNK_14301d22e);
    if ((uVar18 & 1) != 0) {
      if (0x33 < uVar24 + 2) goto LAB_1408f5b09;
      pauVar40 = (undefined1 (*) [16])(0x31 - uVar24);
      pppauVar37 = (undefined1 (***) [16])(&UNK_14301d230 + uVar24);
    }
  }
  puVar29 = &UNK_14301ce21;
  ppauVar38 = (undefined1 (**) [16])&UNK_14301cdf8;
  do {
    bVar42 = puVar29[-1];
    uVar16 = (uint)(char)bVar42;
    if ((char)bVar42 < '\0') {
      bVar5 = puVar29[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar29[-3];
        if ((char)bVar6 < -0x40) {
          pbVar1 = puVar29 + -4;
          puVar29 = puVar29 + -4;
          uVar16 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar29 = puVar29 + -3;
          uVar16 = bVar6 & 0xf;
        }
        uVar16 = bVar5 & 0x3f | uVar16 << 6;
      }
      else {
        puVar29 = puVar29 + -2;
        uVar16 = bVar5 & 0x1f;
      }
      uVar16 = (uint)(bVar42 & 0x3f) | uVar16 << 6;
      if (uVar16 != 0x5c) goto LAB_1408f41d4;
LAB_1408f41e5:
      puVar30 = puVar29 + -0x14301cdf7;
      if ((undefined *)0x29 < puVar30) {
        pdb_142dc8070(&UNK_14301cdf8,0x29,puVar30,0x29,&UNK_14301d338);
        goto LAB_1408f5ae9;
      }
      ppauVar26 = (undefined1 (**) [16])(0x29 - (longlong)puVar30);
      ppauVar38 = (undefined1 (**) [16])(puVar29 + 1);
      goto LAB_1408f4207;
    }
    puVar29 = puVar29 + -1;
    if (uVar16 == 0x5c) goto LAB_1408f41e5;
LAB_1408f41d4:
    if (uVar16 == 0x2f) goto LAB_1408f41e5;
  } while (puVar29 != &UNK_14301cdf8);
  ppauVar26 = (undefined1 (**) [16])0x29;
LAB_1408f4207:
  plVar19 = (longlong *)pdb_140e97000();
  if ((char)plVar19[0xd] != '\x01') goto LAB_1408f59f3;
LAB_1408f4216:
  if (*plVar19 != 0) goto LAB_1408f59e7;
  *plVar19 = -1;
  puStack_80 = (ulonglong *)plVar19;
  uStack_158 = pdb_140e94f10(plVar19 + 1,pppauVar37,pauVar40,ppauVar38,ppauVar26,1,0);
  *puStack_80 = *puStack_80 + 1;
LAB_1408f4268:
  uStack_a4 = *(uint *)((longlong)param_1 + 0x1c);
  pauStack_f8 = param_1[2];
  *(uint *)*pauStack_f8 = uStack_a4;
  pauStack_90 = *param_1;
  *(undefined8 *)pauStack_90[1] = 0;
  *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
  uVar21 = *param_6;
  puVar8 = (undefined8 *)*param_10;
  plVar19 = (longlong *)*param_11;
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  puVar25 = puVar8;
  puStack_80 = param_2;
  pdb_1408f67f0(uVar21,puVar8,plVar19,*param_5);
  pauVar23 = (undefined1 (*) [16])*plVar19;
  lVar17 = plVar19[1];
  auVar43 = *pauVar23;
  pauVar40 = (undefined1 (*) [16])plVar19[3];
  puVar20 = (undefined8 *)pdb_140f3bda0();
  plStack_108 = plVar19;
  if (*(char *)(puVar20 + 2) == '\x01') {
    puStack_c8 = (undefined *)*puVar20;
    puVar25 = (undefined8 *)puVar20[1];
  }
  else {
    puStack_c8 = (undefined *)pdb_140f4fd10();
    *puVar20 = puStack_c8;
    puVar20[1] = puVar25;
    *(undefined1 *)(puVar20 + 2) = 1;
  }
  *puVar20 = puStack_c8 + 1;
  auStack_d8._8_8_ = _UNK_14301cda8;
  auStack_d8._0_8_ = _DAT_14301cda0;
  pauStack_e8 = _DAT_14301cd90;
  pauStack_e0 = _UNK_14301cd98;
  puStack_c0 = puVar25;
  if (pauVar40 != (undefined1 (*) [16])0x0) {
    pdb_142d96320(&pauStack_e8,pauVar40,&puStack_c8,1);
  }
  puStack_1a8 = *pauVar23 + lVar17 + 1;
  ppauStack_150 = &pauStack_e8;
  pauStack_1f8 = (undefined1 (*) [16])&ppauStack_150;
  pauStack_1b0 = pauVar23 + 1;
  puStack_1a0 = (undefined *)
                CONCAT62(puStack_1a0._2_6_,
                         ~((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar43[0xf] >> 7) << 0xf));
  pauStack_1b8 = pauVar23;
  pdb_1414ae280(&pauStack_1b8,pauVar40,&pauStack_1f8);
  auStack_1d8._8_8_ = puStack_c0;
  auStack_1d8._0_8_ = puStack_c8;
  pauStack_1f8 = pauStack_e8;
  pauStack_1f0 = pauStack_e0;
  auStack_1e8 = auStack_d8;
  pauStack_170 = (undefined1 (*) [16])*puVar8;
  auVar43 = *pauStack_170;
  uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
  uStack_180 = *(undefined4 *)((longlong)puStack_80 + 0x1c);
  uStack_228 = *puStack_80;
  puStack_220 = (undefined4 *)puStack_80[2];
  uStack_17c = *(undefined4 *)(param_3[1] + 0xc);
  uStack_218 = *(undefined8 *)*param_3;
  puStack_210 = *(undefined4 **)param_3[1];
  uStack_184 = *(undefined4 *)((longlong)param_7 + 0x1c);
  plStack_138 = (longlong *)*param_7;
  puStack_230 = (undefined4 *)param_7[2];
  uStack_f0 = *param_12;
  pauStack_110 = (undefined1 (*) [16])*param_13;
  pauStack_178 = (undefined1 (*) [16])*param_14;
  puStack_118 = (undefined1 *)*param_15;
  uStack_a0 = *(undefined4 *)((longlong)param_8 + 0x1c);
  lStack_128 = *param_8;
  puStack_148 = (undefined4 *)param_8[2];
  uStack_9c = *(undefined4 *)((longlong)param_9 + 0x1c);
  lStack_120 = *param_9;
  puStack_140 = (undefined4 *)param_9[2];
  pauVar23 = pauStack_170 + 1;
  plStack_168 = plStack_108 + 4;
  puStack_208 = pauStack_90[1] + 8;
  puStack_200 = pauStack_90[3] + 8;
  param_1 = (undefined1 (**) [16])(ulonglong)uStack_a4;
  puVar25 = puStack_160;
  plVar19 = plStack_108;
  uVar24 = puVar8[3];
LAB_1408f4540:
  do {
    if (uVar24 == 0) break;
    if ((short)uVar16 == 0) {
      do {
        auVar43 = *pauVar23;
        pauStack_170 = pauStack_170 + -0x10;
        pauVar23 = pauVar23 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar16 == 0);
    }
    iVar11 = 0;
    for (uVar27 = uVar16; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
      iVar11 = iVar11 + 1;
    }
    uVar27 = *(uint *)((longlong)pauStack_170 + (-0x10 - (ulonglong)(uint)(iVar11 << 4)));
    uStack_78 = *(ulonglong *)((longlong)pauStack_170 + (-8 - (ulonglong)(uint)(iVar11 << 4)));
    puStack_80 = (ulonglong *)CONCAT44(puStack_80._4_4_,uVar27);
    pauStack_e8 = (undefined1 (*) [16])CONCAT44(pauStack_e8._4_4_,uVar27);
    uVar18 = (ulonglong)uVar27;
    uStack_1c8 = uVar24;
    if (plVar19[3] != 0) {
      uVar18 = pdb_1400aede0(plStack_168,&pauStack_e8);
      bVar42 = (byte)(uVar18 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar43 = pshuflw(auVar43,auVar43,0);
      lVar17 = 0;
      while( true ) {
        uVar18 = uVar18 & plVar19[1];
        auVar4 = *(undefined1 (*) [16])(*plVar19 + uVar18);
        auVar48[0] = -(auVar4[0] == auVar43[0]);
        auVar48[1] = -(auVar4[1] == auVar43[1]);
        auVar48[2] = -(auVar4[2] == auVar43[2]);
        auVar48[3] = -(auVar4[3] == auVar43[3]);
        auVar48[4] = -(auVar4[4] == auVar43[4]);
        auVar48[5] = -(auVar4[5] == auVar43[5]);
        auVar48[6] = -(auVar4[6] == auVar43[6]);
        auVar48[7] = -(auVar4[7] == auVar43[7]);
        auVar48[8] = -(auVar4[8] == auVar43[0]);
        auVar48[9] = -(auVar4[9] == auVar43[1]);
        auVar48[10] = -(auVar4[10] == auVar43[2]);
        auVar48[0xb] = -(auVar4[0xb] == auVar43[3]);
        auVar48[0xc] = -(auVar4[0xc] == auVar43[4]);
        auVar48[0xd] = -(auVar4[0xd] == auVar43[5]);
        auVar48[0xe] = -(auVar4[0xe] == auVar43[6]);
        auVar48[0xf] = -(auVar4[0xf] == auVar43[7]);
        uVar34 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf
        ;
        uVar27 = (uint)uVar34;
        while (uVar34 != 0) {
          uVar12 = 0;
          for (uVar13 = uVar27; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          lVar35 = *plVar19 + (uVar12 + uVar18 & plVar19[1]) * -0x10;
          if ((int)puStack_80 == *(int *)(lVar35 + -0x10)) {
            uVar18 = uStack_78;
            if (*(ulonglong *)(lVar35 + -8) != uStack_78) goto LAB_1408f4681;
            pauStack_98 = (undefined1 (*) [16])((ulonglong)pauStack_98 & 0xffffffff00000000);
            goto LAB_1408f4689;
          }
          uVar34 = (ushort)(uVar27 - 1) & (ushort)uVar27;
          uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar34);
        }
        auVar44[0] = -(auVar4[0] == -1);
        auVar44[1] = -(auVar4[1] == -1);
        auVar44[2] = -(auVar4[2] == -1);
        auVar44[3] = -(auVar4[3] == -1);
        auVar44[4] = -(auVar4[4] == -1);
        auVar44[5] = -(auVar4[5] == -1);
        auVar44[6] = -(auVar4[6] == -1);
        auVar44[7] = -(auVar4[7] == -1);
        auVar44[8] = -(auVar4[8] == -1);
        auVar44[9] = -(auVar4[9] == -1);
        auVar44[10] = -(auVar4[10] == -1);
        auVar44[0xb] = -(auVar4[0xb] == -1);
        auVar44[0xc] = -(auVar4[0xc] == -1);
        auVar44[0xd] = -(auVar4[0xd] == -1);
        auVar44[0xe] = -(auVar4[0xe] == -1);
        auVar44[0xf] = -(auVar4[0xf] == -1);
        if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 || (SUB161(auVar44 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar44 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar44 >> 0x1f,0) & 1) != 0) || (SUB161(auVar44 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar44 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar44 >> 0x37,0) & 1) != 0) || (SUB161(auVar44 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar44 >> 0x47,0) & 1) != 0) || (SUB161(auVar44 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar44 >> 0x57,0) & 1) != 0) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar44 >> 0x67,0) & 1) != 0) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') break;
        uVar18 = uVar18 + lVar17 + 0x10;
        lVar17 = lVar17 + 0x10;
      }
    }
LAB_1408f4681:
    pauStack_98 = (undefined1 (*) [16])
                  CONCAT44(pauStack_98._4_4_,(int)CONCAT71((int7)(uVar18 >> 8),1));
LAB_1408f4689:
    uStack_188 = (int)puStack_80;
    uVar21 = pdb_1400aede0(auStack_1d8,&uStack_188);
    pdb_140ca8930(&pauStack_1f8,uVar21);
    if (*(longlong *)(uStack_78 + 0xe8) != 0) {
      uVar24 = pdb_140c413e0(uStack_78 + 0x50);
      if ((uVar24 & 1) == 0) {
        pdb_1408f5f30();
        goto LAB_1408f5ac4;
      }
      *puStack_220 = uStack_180;
      pdb_1414fcf70(uStack_228);
    }
    if (*(longlong *)(uStack_78 + 0x130) != 0) {
      uVar24 = pdb_140c413e0(uStack_78 + 0x50);
      if ((uVar24 & 1) == 0) {
        pdb_1408f5ff0();
LAB_1408f5ac4:
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      *puStack_210 = uStack_17c;
      pdb_1414fd210(uStack_218);
    }
    *puStack_230 = uStack_184;
    lVar17 = *(longlong *)(uStack_78 + 0x140);
    uVar24 = *(ulonglong *)(uStack_78 + 0x148);
    lVar35 = plStack_138[2];
    if ((ulonglong)(*plStack_138 - lVar35) < uVar24) {
      pdb_142d7f1b0(plStack_138,lVar35,uVar24,0x10,0x50);
      lVar35 = plStack_138[2];
LAB_1408f47cb:
      lVar22 = lVar35 * 0x50 + plStack_138[1];
      lVar31 = 0;
      lVar32 = 0;
      do {
        bVar42 = *(byte *)(lVar17 + lVar31);
        uVar18 = (ulonglong)bVar42;
        uVar39 = 0x4301d388;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar42) {
        case 1:
          plVar19 = (longlong *)(ulonglong)*(byte *)(lVar17 + 1 + lVar31);
          param_1 = (undefined1 (**) [16])(ulonglong)*(ushort *)(lVar17 + 2 + lVar31);
          uVar39 = *(undefined4 *)(lVar17 + 4 + lVar31);
          uVar18 = *(ulonglong *)(lVar17 + 8 + lVar31);
          break;
        case 2:
          plVar19 = (longlong *)(ulonglong)*(byte *)(lVar17 + 1 + lVar31);
          uVar39 = *(undefined4 *)(lVar17 + 4 + lVar31);
        }
        uVar21 = *(undefined8 *)(lVar17 + 0x40 + lVar31);
        uVar9 = *(undefined8 *)(lVar17 + 0x48 + lVar31);
        *(byte *)(lVar22 + lVar31) = bVar42;
        *(char *)(lVar22 + 1 + lVar31) = (char)plVar19;
        *(short *)(lVar22 + 2 + lVar31) = (short)param_1;
        *(undefined4 *)(lVar22 + 4 + lVar31) = uVar39;
        *(ulonglong *)(lVar22 + 8 + lVar31) = uVar18;
        puVar8 = (undefined8 *)(lVar17 + 0x10 + lVar31);
        uVar14 = puVar8[1];
        auVar43 = *(undefined1 (*) [16])(lVar17 + 0x20 + lVar31);
        auVar4 = *(undefined1 (*) [16])(lVar17 + 0x30 + lVar31);
        puVar25 = (undefined8 *)(lVar22 + 0x10 + lVar31);
        *puVar25 = *puVar8;
        puVar25[1] = uVar14;
        *(undefined1 (*) [16])(lVar22 + 0x20 + lVar31) = auVar43;
        *(undefined1 (*) [16])(lVar22 + 0x30 + lVar31) = auVar4;
        *(undefined8 *)(lVar22 + 0x40 + lVar31) = uVar21;
        *(undefined8 *)(lVar22 + 0x48 + lVar31) = uVar9;
        lVar32 = lVar32 + -1;
        lVar31 = lVar31 + 0x50;
      } while (-lVar32 != uVar24);
      lVar35 = lVar35 - lVar32;
      param_1 = (undefined1 (**) [16])(ulonglong)uStack_a4;
      puVar25 = puStack_160;
      uStack_130 = (ulonglong)uVar16;
    }
    else if (uVar24 != 0) goto LAB_1408f47cb;
    plStack_138[2] = lVar35;
    puVar8 = *(undefined8 **)(uStack_78 + 0x150);
    uVar39 = SUB84(param_1,0);
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined4 *)*pauStack_f8 = uVar39;
      uVar9 = puVar8[6];
      uVar7 = *(undefined4 *)(puVar8 + 8);
      uVar21 = puVar8[7];
      pauStack_e8 = (undefined1 (*) [16])*puVar8;
      pauStack_e0 = (undefined1 (*) [16])puVar8[1];
      auStack_d8 = *(undefined1 (*) [16])(puVar8 + 2);
      puStack_c8 = (undefined *)puVar8[4];
      puStack_c0 = (undefined8 *)puVar8[5];
      lVar17 = *(longlong *)pauStack_90[1];
      if (lVar17 == *(longlong *)*pauStack_90) {
        pdb_142d7eb40(pauStack_90);
      }
      lVar35 = *(longlong *)(*pauStack_90 + 8);
      lVar22 = lVar17 * 0x50;
      auVar43._8_8_ = puStack_c0;
      auVar43._0_8_ = puStack_c8;
      *(undefined1 (*) [16])(lVar35 + 0x20 + lVar22) = auVar43;
      *(undefined1 (*) [16])(lVar35 + 0x10 + lVar22) = auStack_d8;
      *(undefined8 *)(lVar35 + lVar22) = pauStack_e8;
      ((undefined8 *)(lVar35 + lVar22))[1] = pauStack_e0;
      *(undefined8 *)(lVar35 + 0x30 + lVar22) = uVar9;
      *(undefined8 *)(lVar35 + 0x38 + lVar22) = uVar21;
      *(undefined4 *)(lVar35 + 0x40 + lVar22) = uVar7;
      *(longlong *)pauStack_90[1] = lVar17 + 1;
    }
    plVar19 = plStack_108;
    pauStack_e8 = (undefined1 (*) [16])CONCAT44(pauStack_e8._4_4_,(int)puStack_80);
    if (plStack_108[3] != 0) {
      uVar24 = pdb_1400aede0(plStack_168,&pauStack_e8);
      bVar42 = (byte)(uVar24 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar43 = pshuflw(auVar43,auVar43,0);
      lVar17 = 0;
      while( true ) {
        uVar24 = uVar24 & plVar19[1];
        auVar4 = *(undefined1 (*) [16])(*plVar19 + uVar24);
        auVar49[0] = -(auVar4[0] == auVar43[0]);
        auVar49[1] = -(auVar4[1] == auVar43[1]);
        auVar49[2] = -(auVar4[2] == auVar43[2]);
        auVar49[3] = -(auVar4[3] == auVar43[3]);
        auVar49[4] = -(auVar4[4] == auVar43[4]);
        auVar49[5] = -(auVar4[5] == auVar43[5]);
        auVar49[6] = -(auVar4[6] == auVar43[6]);
        auVar49[7] = -(auVar4[7] == auVar43[7]);
        auVar49[8] = -(auVar4[8] == auVar43[0]);
        auVar49[9] = -(auVar4[9] == auVar43[1]);
        auVar49[10] = -(auVar4[10] == auVar43[2]);
        auVar49[0xb] = -(auVar4[0xb] == auVar43[3]);
        auVar49[0xc] = -(auVar4[0xc] == auVar43[4]);
        auVar49[0xd] = -(auVar4[0xd] == auVar43[5]);
        auVar49[0xe] = -(auVar4[0xe] == auVar43[6]);
        auVar49[0xf] = -(auVar4[0xf] == auVar43[7]);
        uVar34 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (ushort)(auVar49[0xf] >> 7) << 0xf
        ;
        uVar27 = (uint)uVar34;
        while (uVar34 != 0) {
          uVar12 = 0;
          for (uVar13 = uVar27; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          lVar35 = *plVar19 + (uVar12 + uVar24 & plVar19[1]) * -0x10;
          if ((int)puStack_80 == *(int *)(lVar35 + -0x10)) {
            pauVar41 = (undefined1 (*) [16])(*(longlong *)(lVar35 + -8) + 0x10);
            goto LAB_1408f4a58;
          }
          uVar34 = (ushort)(uVar27 - 1) & (ushort)uVar27;
          uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar34);
        }
        auVar45[0] = -(auVar4[0] == -1);
        auVar45[1] = -(auVar4[1] == -1);
        auVar45[2] = -(auVar4[2] == -1);
        auVar45[3] = -(auVar4[3] == -1);
        auVar45[4] = -(auVar4[4] == -1);
        auVar45[5] = -(auVar4[5] == -1);
        auVar45[6] = -(auVar4[6] == -1);
        auVar45[7] = -(auVar4[7] == -1);
        auVar45[8] = -(auVar4[8] == -1);
        auVar45[9] = -(auVar4[9] == -1);
        auVar45[10] = -(auVar4[10] == -1);
        auVar45[0xb] = -(auVar4[0xb] == -1);
        auVar45[0xc] = -(auVar4[0xc] == -1);
        auVar45[0xd] = -(auVar4[0xd] == -1);
        auVar45[0xe] = -(auVar4[0xe] == -1);
        auVar45[0xf] = -(auVar4[0xf] == -1);
        if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar45 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar45 >> 0x1f,0) & 1) != 0) || (SUB161(auVar45 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') break;
        uVar24 = uVar24 + lVar17 + 0x10;
        lVar17 = lVar17 + 0x10;
      }
    }
    pauVar41 = (undefined1 (*) [16])0x0;
LAB_1408f4a58:
    uVar16 = uVar16 - 1 & uVar16;
    uVar24 = uStack_1c8 - 1;
    pauVar40 = pauVar41;
    if ((char)pauStack_98 != '\0') {
      plStack_1c0 = (longlong *)(uStack_78 + 0x10);
      uStack_130 = uVar24;
      if (((((pauVar41 != (undefined1 (*) [16])0x0) &&
            (*(char *)(uStack_78 + 0x168) == pauVar41[0x15][8])) &&
           (*(char *)(uStack_78 + 0x169) == pauVar41[0x15][9])) &&
          ((*(longlong *)(uStack_78 + 0x50) == *(longlong *)pauVar41[4] &&
           ((*(longlong *)(uStack_78 + 0x50) != 0 ||
            (*(longlong *)(uStack_78 + 0x58) == *(longlong *)(pauVar41[4] + 8))))))) &&
         ((*(longlong *)(uStack_78 + 0xd0) == *(longlong *)pauVar41[0xc] &&
          ((cVar15 = pdb_141493940(*(undefined8 *)(uStack_78 + 200),
                                   *(undefined8 *)(pauVar41[0xb] + 8)), cVar15 != '\0' &&
           (lVar17 = *(longlong *)(uStack_78 + 0xe8), lVar17 == *(longlong *)(pauVar41[0xd] + 8)))))
         )) {
        if (lVar17 != 0) {
          lVar35 = *(longlong *)pauVar41[0xd];
          lVar22 = *(longlong *)(uStack_78 + 0xe0);
          lVar32 = 0x10;
          do {
            fVar3 = *(float *)(lVar22 + -0x10 + lVar32);
            pfVar2 = (float *)(lVar35 + -0x10 + lVar32);
            if (((((fVar3 != *pfVar2) || (NAN(fVar3) || NAN(*pfVar2))) ||
                 (fVar3 = *(float *)(lVar22 + -0xc + lVar32),
                 pfVar2 = (float *)(lVar35 + -0xc + lVar32), fVar3 != *pfVar2)) ||
                (((NAN(fVar3) || NAN(*pfVar2) ||
                  (fVar3 = *(float *)(lVar22 + -8 + lVar32),
                  pfVar2 = (float *)(lVar35 + -8 + lVar32), fVar3 != *pfVar2)) ||
                 ((NAN(fVar3) || NAN(*pfVar2) ||
                  ((fVar3 = *(float *)(lVar22 + -4 + lVar32),
                   pfVar2 = (float *)(lVar35 + -4 + lVar32), fVar3 != *pfVar2 ||
                   (NAN(fVar3) || NAN(*pfVar2))))))))) ||
               (*(char *)(lVar22 + lVar32) != *(char *)(lVar35 + lVar32))) goto LAB_1408f4e50;
            lVar32 = lVar32 + 0x14;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        lVar17 = *(longlong *)(uStack_78 + 0x100);
        if (lVar17 == *(longlong *)pauVar41[0xf]) {
          if (lVar17 != 0) {
            lVar35 = *(longlong *)(pauVar41[0xe] + 8);
            lVar22 = *(longlong *)(uStack_78 + 0xf8);
            lVar32 = 0x14;
            do {
              if (((((((*(int *)(lVar22 + -4 + lVar32) != *(int *)(lVar35 + -4 + lVar32)) ||
                      (fVar3 = *(float *)(lVar22 + -0x14 + lVar32),
                      pfVar2 = (float *)(lVar35 + -0x14 + lVar32), fVar3 != *pfVar2)) ||
                     (NAN(fVar3) || NAN(*pfVar2))) ||
                    ((fVar3 = *(float *)(lVar22 + -0x10 + lVar32),
                     pfVar2 = (float *)(lVar35 + -0x10 + lVar32), fVar3 != *pfVar2 ||
                     (NAN(fVar3) || NAN(*pfVar2))))) ||
                   (fVar3 = *(float *)(lVar22 + -0xc + lVar32),
                   pfVar2 = (float *)(lVar35 + -0xc + lVar32), fVar3 != *pfVar2)) ||
                  ((NAN(fVar3) || NAN(*pfVar2) ||
                   (fVar3 = *(float *)(lVar22 + -8 + lVar32),
                   pfVar2 = (float *)(lVar35 + -8 + lVar32), fVar3 != *pfVar2)))) ||
                 ((NAN(fVar3) || NAN(*pfVar2) ||
                  (*(longlong *)(lVar22 + lVar32) != *(longlong *)(lVar35 + lVar32) ||
                   *(int *)(lVar35 + 8 + lVar32) != *(int *)(lVar22 + 8 + lVar32)))))
              goto LAB_1408f4e50;
              lVar32 = lVar32 + 0x20;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
          }
          if ((((*(longlong *)(uStack_78 + 0x118) == *(longlong *)(pauVar41[0x10] + 8)) &&
               (cVar15 = pdb_1414fd580(*(undefined8 *)(uStack_78 + 0x110),
                                       *(undefined8 *)pauVar41[0x10]), cVar15 != '\0')) &&
              (*(longlong *)(uStack_78 + 0x130) == *(longlong *)pauVar41[0x12])) &&
             (((((cVar15 = pdb_1414fd4c0(*(undefined8 *)(uStack_78 + 0x128),
                                         *(undefined8 *)(pauVar41[0x11] + 8)), cVar15 != '\0' &&
                 (cVar15 = pdb_1408f7f00(uStack_78 + 0x60,pauVar41 + 5), cVar15 != '\0')) &&
                ((cVar15 = pdb_1408f7f00(uStack_78 + 0x90,pauVar41 + 8), cVar15 != '\0' &&
                 ((*(longlong *)(uStack_78 + 0x148) == *(longlong *)(pauVar41[0x13] + 8) &&
                  (cVar15 = pdb_1414fd690(*(undefined8 *)(uStack_78 + 0x140),
                                          *(undefined8 *)pauVar41[0x13]), plVar19 = plStack_108,
                  cVar15 != '\0')))))) &&
               (cVar15 = pdb_1408f7e50(*(undefined8 *)(uStack_78 + 0x150),
                                       *(undefined8 *)pauVar41[0x14]), cVar15 != '\0')) &&
              (((cVar15 = pdb_1408f7d10(*(undefined8 *)(uStack_78 + 0x158),
                                        *(undefined8 *)(pauVar41[0x14] + 8)), cVar15 != '\0' &&
                (cVar15 = pdb_1408f7dc0(*(undefined8 *)(uStack_78 + 0x160),
                                        *(undefined8 *)pauVar41[0x15]), cVar15 != '\0')) &&
               (cVar15 = pdb_1408f7c90(plStack_1c0,pauVar41), uVar24 = uStack_130, cVar15 != '\0')))
              ))) goto LAB_1408f4540;
        }
      }
LAB_1408f4e50:
      pauVar28 = pauStack_90;
      *(undefined4 *)*pauStack_f8 = uVar39;
      pauStack_1b8 = (undefined1 (*) [16])CONCAT44(pauStack_1b8._4_4_,(int)puStack_80);
      pauVar40 = (undefined1 (*) [16])&pauStack_1b8;
      uVar21 = pdb_1400aede0(pauStack_90[3] + 8,pauVar40);
      pdb_1414ae570(&pauStack_e8,pauVar28[1] + 8,uVar21,pauVar40);
      if ((int)pauStack_e0 != 2) {
        pauStack_100 = (undefined1 (*) [16])auStack_d8._0_8_;
        pauStack_98 = (undefined1 (*) [16])auStack_d8._8_8_;
        if (puStack_c8 != (undefined *)0x0) {
          pauVar28 = (undefined1 (*) [16])((longlong)puStack_c8 << 3);
          pauVar40 = (undefined1 (*) [16])0x0;
          do {
            if ((int)*(undefined1 (**) [16])(*pauVar40 + (longlong)*pauStack_98) == 0) break;
            puStack_c8 = (undefined *)puVar25[3];
            pauStack_e0 = (undefined1 (*) [16])*puVar25;
            auStack_d8 = *(undefined1 (*) [16])(puVar25 + 1);
            pauStack_e8 = *(undefined1 (**) [16])(*pauVar40 + (longlong)*pauStack_98);
            pdb_140f04aa0(&pauStack_e8,&UNK_14301d010);
            pauVar40 = (undefined1 (*) [16])(*pauVar40 + 8);
          } while (pauVar28 != pauVar40);
        }
        if (pauStack_100 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_98,(longlong)pauStack_100 << 3,8);
        }
      }
      pdb_1414959b0(&pauStack_e8,uStack_78 + 0xc0);
      pauStack_100 = pauStack_e8;
      pauStack_98 = pauStack_e0;
      if (auStack_d8._0_8_ != 0) {
        pauVar40 = pauStack_e0 + auStack_d8._0_8_ * 0x17;
        pauVar28 = pauStack_e0;
        do {
          if (*(longlong *)*pauVar28 == 2) break;
          lStack_3a8 = *(longlong *)*pauVar28;
          pub_142e32760(auStack_3a0,*pauVar28 + 8,0x168);
          uVar21 = pdb_140a92040(puStack_118);
          *(undefined4 *)*pauStack_f8 = uVar39;
          pdb_14148db00(&lStack_3a8,(ulonglong)puStack_80 & 0xffffffff,uStack_f0,pauStack_110,
                        pauStack_178,uVar21,puVar25,pauStack_90[1] + 8);
          pauVar28 = pauVar28 + 0x17;
        } while (pauVar28 != pauVar40);
      }
      if (pauStack_100 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_98,(longlong)pauStack_100 * 0x170,0x10);
      }
      pauVar28 = pauStack_90;
      *(undefined4 *)*pauStack_f8 = uVar39;
      pauStack_e8 = (undefined1 (*) [16])CONCAT44(pauStack_e8._4_4_,(int)puStack_80);
      if (*(longlong *)pauStack_90[3] != 0) {
        uVar18 = pdb_1400aede0(pauStack_90[3] + 8,&pauStack_e8);
        lVar17 = *(longlong *)(pauVar28[1] + 8);
        uVar24 = *(ulonglong *)pauVar28[2];
        bVar42 = (byte)(uVar18 >> 0x39);
        auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
        auVar43 = pshuflw(auVar43,auVar43,0);
        lVar35 = 0;
        while( true ) {
          uVar18 = uVar18 & uVar24;
          auVar4 = *(undefined1 (*) [16])(lVar17 + uVar18);
          auVar50[0] = -(auVar4[0] == auVar43[0]);
          auVar50[1] = -(auVar4[1] == auVar43[1]);
          auVar50[2] = -(auVar4[2] == auVar43[2]);
          auVar50[3] = -(auVar4[3] == auVar43[3]);
          auVar50[4] = -(auVar4[4] == auVar43[4]);
          auVar50[5] = -(auVar4[5] == auVar43[5]);
          auVar50[6] = -(auVar4[6] == auVar43[6]);
          auVar50[7] = -(auVar4[7] == auVar43[7]);
          auVar50[8] = -(auVar4[8] == auVar43[0]);
          auVar50[9] = -(auVar4[9] == auVar43[1]);
          auVar50[10] = -(auVar4[10] == auVar43[2]);
          auVar50[0xb] = -(auVar4[0xb] == auVar43[3]);
          auVar50[0xc] = -(auVar4[0xc] == auVar43[4]);
          auVar50[0xd] = -(auVar4[0xd] == auVar43[5]);
          auVar50[0xe] = -(auVar4[0xe] == auVar43[6]);
          auVar50[0xf] = -(auVar4[0xf] == auVar43[7]);
          uVar34 = (ushort)(SUB161(auVar50 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar50[0xf] >> 7) << 0xf;
          uVar27 = (uint)uVar34;
          while (uVar34 != 0) {
            uVar12 = 0;
            for (uVar13 = uVar27; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            uVar36 = uVar12 + uVar18 & uVar24;
            if ((int)puStack_80 == *(int *)(lVar17 + -0x28 + uVar36 * -0x28)) {
              lVar17 = lVar17 + uVar36 * -0x28;
              if (*(int *)(lVar17 + -0x20) == 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14301a428,0x53,&UNK_14301a458);
              }
              *(undefined8 *)(lVar17 + -0x20) = 1;
              goto LAB_1408f5141;
            }
            uVar34 = (ushort)(uVar27 - 1) & (ushort)uVar27;
            uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar34);
          }
          auVar46[0] = -(auVar4[0] == -1);
          auVar46[1] = -(auVar4[1] == -1);
          auVar46[2] = -(auVar4[2] == -1);
          auVar46[3] = -(auVar4[3] == -1);
          auVar46[4] = -(auVar4[4] == -1);
          auVar46[5] = -(auVar4[5] == -1);
          auVar46[6] = -(auVar4[6] == -1);
          auVar46[7] = -(auVar4[7] == -1);
          auVar46[8] = -(auVar4[8] == -1);
          auVar46[9] = -(auVar4[9] == -1);
          auVar46[10] = -(auVar4[10] == -1);
          auVar46[0xb] = -(auVar4[0xb] == -1);
          auVar46[0xc] = -(auVar4[0xc] == -1);
          auVar46[0xd] = -(auVar4[0xd] == -1);
          auVar46[0xe] = -(auVar4[0xe] == -1);
          auVar46[0xf] = -(auVar4[0xf] == -1);
          if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar46 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x2f,0) & 1) != 0) || (SUB161(auVar46 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') break;
          uVar18 = uVar18 + lVar35 + 0x10;
          lVar35 = lVar35 + 0x10;
        }
      }
LAB_1408f5141:
      if (*plStack_1c0 == 0 && plStack_1c0[1] == 0) {
        if (*_DAT_143ca8e90 != 0) {
          pauStack_e8 = (undefined1 (*) [16])&UNK_14301cfc8;
          pauStack_e0 = (undefined1 (*) [16])0x1b;
          auStack_d8._8_8_ = 0x1b;
          auStack_d8._0_8_ = &UNK_14301cfc8;
          puStack_c8 = &UNK_14301cfb0;
          pdb_1400c9be0(&UNK_14301cf40,0xd9,1,&pauStack_e8);
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14301cfe3,0xe,&UNK_14301cff8);
      }
      if (pauVar41 != (undefined1 (*) [16])0x0) {
        if (*(longlong *)(pauVar41[0x14] + 8) != 0) {
          *puStack_148 = uStack_a0;
          pdb_1414f7080(lStack_128,*(undefined8 *)pauVar41[4],*(undefined8 *)(pauVar41[4] + 8),
                        (ulonglong)puStack_80 & 0xffffffff);
        }
        if (*(longlong *)pauVar41[0x15] != 0) {
          *puStack_140 = uStack_9c;
          pdb_1414f6c80(lStack_120,*(undefined8 *)pauVar41[4],*(undefined8 *)(pauVar41[4] + 8),
                        (ulonglong)puStack_80 & 0xffffffff);
        }
      }
      puVar8 = *(undefined8 **)(uStack_78 + 0x158);
      if (puVar8 != (undefined8 *)0x0) {
        *puStack_148 = uStack_a0;
        puStack_c8 = (undefined *)puVar8[4];
        pauStack_e8 = (undefined1 (*) [16])*puVar8;
        pauStack_e0 = (undefined1 (*) [16])puVar8[1];
        auStack_d8 = *(undefined1 (*) [16])(puVar8 + 2);
        pdb_1414f6530(lStack_128,*(undefined8 *)(uStack_78 + 0x50),*(undefined8 *)(uStack_78 + 0x58)
                      ,(ulonglong)puStack_80 & 0xffffffff,&pauStack_e8);
      }
      puVar8 = *(undefined8 **)(uStack_78 + 0x160);
      plVar19 = plStack_108;
      uVar24 = uStack_130;
      if (puVar8 != (undefined8 *)0x0) {
        *puStack_140 = uStack_9c;
        pauStack_e8 = (undefined1 (*) [16])*puVar8;
        pauStack_e0 = (undefined1 (*) [16])puVar8[1];
        auStack_d8 = *(undefined1 (*) [16])(puVar8 + 2);
        pdb_1414f5df0(lStack_120,*(undefined8 *)(uStack_78 + 0x50),*(undefined8 *)(uStack_78 + 0x58)
                      ,(ulonglong)puStack_80 & 0xffffffff,&pauStack_e8);
        plVar19 = plStack_108;
        uVar24 = uStack_130;
      }
    }
  } while( true );
  auVar43 = *pauStack_1f8;
  pauStack_90 = pauStack_1f0;
  if (pauStack_1f0 == (undefined1 (*) [16])0x0) {
    uStack_f0 = 0;
  }
  else {
    uVar24 = (longlong)pauStack_1f0 * 4 + 0x13U & 0xfffffffffffffff0;
    puStack_118 = pauStack_1f0[1] + uVar24 + 1;
    pauStack_110 = (undefined1 (*) [16])((longlong)pauStack_1f8 - uVar24);
    uStack_f0 = 0x10;
  }
  pauVar23 = pauStack_1f8 + 1;
  param_3 = (undefined1 (*) [16])
            (ulonglong)
            ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
  uStack_1c8 = 0;
  pauVar41 = pauStack_1f8;
  lVar17 = auStack_1e8._8_8_;
LAB_1408f5382:
  if (lVar17 != 0) {
    if ((short)param_3 == 0) {
      do {
        auVar43 = *pauVar23;
        pauVar41 = pauVar41 + -4;
        pauVar23 = pauVar23 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
        param_3 = (undefined1 (*) [16])(ulonglong)uVar16;
      } while (uVar16 == 0);
    }
    iVar11 = 0;
    uVar27 = (uint)param_3;
    for (uVar16 = uVar27; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
      iVar11 = iVar11 + 1;
    }
    uVar16 = *(uint *)((longlong)pauVar41 + (-4 - (ulonglong)(uint)(iVar11 << 2)));
    pauVar40 = (undefined1 (*) [16])(ulonglong)uVar16;
    *(uint *)*pauStack_f8 = uStack_a4;
    pauStack_1b8 = (undefined1 (*) [16])CONCAT44(pauStack_1b8._4_4_,uVar16);
    uVar21 = pdb_1400aede0(puStack_200,&pauStack_1b8);
    pdb_1414ae570(&pauStack_e8,puStack_208,uVar21,&pauStack_1b8);
    if ((int)pauStack_e0 != 2) {
      uStack_78 = auStack_d8._0_8_;
      puStack_80 = (ulonglong *)auStack_d8._8_8_;
      if (puStack_c8 != (undefined *)0x0) {
        lVar22 = (longlong)puStack_c8 << 3;
        lVar35 = 0;
        do {
          if ((int)*(undefined1 (**) [16])((longlong)puStack_80 + lVar35) == 0) break;
          puStack_c8 = (undefined *)puStack_160[3];
          pauStack_e0 = (undefined1 (*) [16])*puStack_160;
          auStack_d8 = *(undefined1 (*) [16])(puStack_160 + 1);
          pauStack_e8 = *(undefined1 (**) [16])((longlong)puStack_80 + lVar35);
          pdb_140f04aa0(&pauStack_e8,&UNK_14301cf28);
          lVar35 = lVar35 + 8;
        } while (lVar22 != lVar35);
      }
      if (uStack_78 != 0) {
        pub_1406abac0((byte *)puStack_80,uStack_78 << 3,8);
      }
    }
    plVar19 = plStack_108;
    pauStack_e8 = (undefined1 (*) [16])CONCAT44(pauStack_e8._4_4_,uVar16);
    if (plStack_108[3] != 0) {
      param_3 = (undefined1 (*) [16])(ulonglong)(uVar27 - 1 & uVar27);
      lVar17 = lVar17 + -1;
      uVar18 = pdb_1400aede0(plStack_168,&pauStack_e8);
      lVar35 = *plVar19;
      uVar24 = plVar19[1];
      bVar42 = (byte)(uVar18 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar43 = pshuflw(auVar43,auVar43,0);
      lVar22 = 0;
      while( true ) {
        uVar18 = uVar18 & uVar24;
        auVar4 = *(undefined1 (*) [16])(lVar35 + uVar18);
        auVar51[0] = -(auVar4[0] == auVar43[0]);
        auVar51[1] = -(auVar4[1] == auVar43[1]);
        auVar51[2] = -(auVar4[2] == auVar43[2]);
        auVar51[3] = -(auVar4[3] == auVar43[3]);
        auVar51[4] = -(auVar4[4] == auVar43[4]);
        auVar51[5] = -(auVar4[5] == auVar43[5]);
        auVar51[6] = -(auVar4[6] == auVar43[6]);
        auVar51[7] = -(auVar4[7] == auVar43[7]);
        auVar51[8] = -(auVar4[8] == auVar43[0]);
        auVar51[9] = -(auVar4[9] == auVar43[1]);
        auVar51[10] = -(auVar4[10] == auVar43[2]);
        auVar51[0xb] = -(auVar4[0xb] == auVar43[3]);
        auVar51[0xc] = -(auVar4[0xc] == auVar43[4]);
        auVar51[0xd] = -(auVar4[0xd] == auVar43[5]);
        auVar51[0xe] = -(auVar4[0xe] == auVar43[6]);
        auVar51[0xf] = -(auVar4[0xf] == auVar43[7]);
        uVar34 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf
        ;
        uVar27 = (uint)uVar34;
        while (uVar34 != 0) {
          uVar12 = 0;
          for (uVar13 = uVar27; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          lVar32 = lVar35 + (uVar12 + uVar18 & uVar24) * -0x10;
          if (uVar16 == *(uint *)(lVar32 + -0x10)) {
            param_1 = *(undefined1 (***) [16])(lVar32 + -8);
            if (param_1[0x2b] != (undefined1 (*) [16])0x0) {
              *puStack_148 = uStack_a0;
              pdb_1414f7080(lStack_128,param_1[10],param_1[0xb],uVar16);
            }
            if (param_1[0x2c] != (undefined1 (*) [16])0x0) {
              *puStack_140 = uStack_9c;
              pdb_1414f6c80(lStack_120,param_1[10],param_1[0xb],uVar16);
            }
            goto LAB_1408f5382;
          }
          uVar34 = (ushort)(uVar27 - 1) & (ushort)uVar27;
          uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar34);
        }
        auVar47[0] = -(auVar4[0] == -1);
        auVar47[1] = -(auVar4[1] == -1);
        auVar47[2] = -(auVar4[2] == -1);
        auVar47[3] = -(auVar4[3] == -1);
        auVar47[4] = -(auVar4[4] == -1);
        auVar47[5] = -(auVar4[5] == -1);
        auVar47[6] = -(auVar4[6] == -1);
        auVar47[7] = -(auVar4[7] == -1);
        auVar47[8] = -(auVar4[8] == -1);
        auVar47[9] = -(auVar4[9] == -1);
        auVar47[10] = -(auVar4[10] == -1);
        auVar47[0xb] = -(auVar4[0xb] == -1);
        auVar47[0xc] = -(auVar4[0xc] == -1);
        auVar47[0xd] = -(auVar4[0xd] == -1);
        auVar47[0xe] = -(auVar4[0xe] == -1);
        auVar47[0xf] = -(auVar4[0xf] == -1);
        if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x1f,0) & 1) != 0) || (SUB161(auVar47 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x37,0) & 1) != 0) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') break;
        uVar18 = uVar18 + lVar22 + 0x10;
        lVar22 = lVar22 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14301cf10);
  }
  if ((pauStack_90 != (undefined1 (*) [16])0x0) && (puStack_118 != (undefined1 *)0x0)) {
    pub_1406abac0((byte *)pauStack_110,(ulonglong)puStack_118,uStack_f0);
  }
  param_2 = (ulonglong *)*param_16;
  lVar17 = param_16[1];
  uVar24 = *param_2;
  uVar36 = 0;
  uVar18 = uVar24 - *(ulonglong *)(lVar17 + 0x18);
  if (uVar24 < *(ulonglong *)(lVar17 + 0x18)) {
    uVar18 = uVar36;
  }
  uVar33 = uVar24 - *(ulonglong *)(lVar17 + 0x38);
  if (uVar24 < *(ulonglong *)(lVar17 + 0x38)) {
    uVar33 = uVar36;
  }
  pauVar23 = (undefined1 (*) [16])(uVar18 * 0x10 + *(longlong *)(lVar17 + 8));
  uVar24 = *(ulonglong *)(lVar17 + 0x10) - uVar18;
  if (*(ulonglong *)(lVar17 + 0x10) < uVar18) {
    pauVar23 = (undefined1 (*) [16])0x8;
    uVar24 = uVar36;
  }
  pauVar41 = (undefined1 (*) [16])(uVar33 * 0x10 + *(longlong *)(lVar17 + 0x28));
  uVar18 = *(ulonglong *)(lVar17 + 0x30) - uVar33;
  if (*(ulonglong *)(lVar17 + 0x30) < uVar33) {
    pauVar41 = (undefined1 (*) [16])0x8;
    uVar18 = uVar36;
  }
  *param_2 = (*(longlong *)(lVar17 + 0x40) - uVar18) - uVar24;
  pauStack_110 = pauVar23 + uVar24;
  pauStack_178 = pauVar41 + uVar18;
  puStack_80 = (ulonglong *)(lStack_128 + 0x20);
  ppauVar38 = &pauStack_e0;
  uStack_78 = lStack_128 + 0x50;
  pauStack_90 = (undefined1 (*) [16])(lStack_128 + 0x30);
  pauStack_f8 = (undefined1 (*) [16])(lStack_120 + 0x20);
  puStack_118 = (undefined1 *)(lStack_120 + 0x50);
  uStack_f0 = lStack_120 + 0x30;
  pppauVar37 = &ppauStack_150;
  ppauVar26 = &pauStack_e8;
  pauVar28 = pauVar41;
  if (pauVar23 == (undefined1 (*) [16])0x0) goto LAB_1408f5770;
LAB_1408f5750:
  pauVar28 = pauVar41;
  if (pauVar23 == pauStack_110) goto LAB_1408f5770;
  pauVar28 = pauVar23;
  pauVar23 = pauVar23 + 1;
  while( true ) {
    *param_2 = *param_2 + 1;
    *puStack_148 = uStack_a0;
    param_1 = *(undefined1 (***) [16])(*pauVar28 + 8);
    ppauStack_150 = param_1;
    uVar21 = pdb_1400af0a0(puStack_80,pppauVar37);
    pdb_140ca8d50(ppauVar26,lStack_128,uVar21,pppauVar37);
    if (pauStack_e0 != (undefined1 (*) [16])0x0) {
      pauStack_1b8 = pauStack_e0;
      pauStack_1b0 = (undefined1 (*) [16])auStack_d8._0_8_;
      puStack_198 = puStack_c0;
      uStack_190 = uStack_b8;
      puStack_1a8 = (undefined1 *)auStack_d8._8_8_;
      puStack_1a0 = puStack_c8;
      if (pauStack_e0 != (undefined1 (*) [16])0x0) {
        pdb_140266ac0(&pauStack_1b8,&puStack_198,0x20,0x10);
      }
    }
    uVar21 = pdb_1400af0a0(uStack_78,pppauVar37);
    pdb_140caa210(pauStack_90,uVar21,pppauVar37);
    *puStack_140 = uStack_9c;
    ppauStack_150 = param_1;
    uVar21 = pdb_1400af0a0(pauStack_f8,pppauVar37);
    pdb_140ca8d50(ppauVar26,lStack_120,uVar21,pppauVar37);
    if (pauStack_e0 != (undefined1 (*) [16])0x0) {
      pauStack_1b8 = pauStack_e0;
      pauStack_1b0 = (undefined1 (*) [16])auStack_d8._0_8_;
      puStack_198 = puStack_c0;
      uStack_190 = uStack_b8;
      puStack_1a8 = (undefined1 *)auStack_d8._8_8_;
      puStack_1a0 = puStack_c8;
      if (pauStack_e0 != (undefined1 (*) [16])0x0) {
        pdb_1402649b0(&pauStack_1b8,&puStack_198,0x20,0x10);
      }
    }
    uVar21 = pdb_1400af0a0(puStack_118,pppauVar37);
    pdb_140caa210(uStack_f0,uVar21,pppauVar37);
    pauVar28 = pauVar41;
    param_3 = pauVar41;
    pauVar40 = pauVar23;
    if (pauVar23 != (undefined1 (*) [16])0x0) goto LAB_1408f5750;
LAB_1408f5770:
    if ((pauVar28 == (undefined1 (*) [16])0x0) || (pauVar28 == pauStack_178)) break;
    pauVar41 = pauVar28 + 1;
    pauVar23 = (undefined1 (*) [16])0x0;
  }
  if (cStack_81 == '\0') {
    return;
  }
  plVar19 = (longlong *)pdb_140e97000();
  if ((char)plVar19[0xd] != '\x01') goto LAB_1408f5a12;
  while( true ) {
    if (*plVar19 == 0) {
      *plVar19 = -1;
      puStack_80 = (ulonglong *)plVar19;
      pdb_140e95370(plVar19 + 1);
      *puStack_80 = *puStack_80 + 1;
      return;
    }
LAB_1408f59e7:
    plVar19 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408f59f3:
    plVar19 = (longlong *)pdb_142dde6e0(plVar19,0);
    if (plVar19 != (longlong *)0x0) break;
    do {
      plVar19 = (longlong *)pdb_142dc7890(&UNK_14330e598);
LAB_1408f5a12:
      plVar19 = (longlong *)pdb_142dde6e0(plVar19,0);
    } while (plVar19 == (longlong *)0x0);
  }
  goto LAB_1408f4216;
}

