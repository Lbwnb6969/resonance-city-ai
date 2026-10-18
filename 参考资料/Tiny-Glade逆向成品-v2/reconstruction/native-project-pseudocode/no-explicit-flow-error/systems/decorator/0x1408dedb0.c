// VA 0x1408dedb0, PDB extent 4093 bytes
// system_decorator::derive_decorator_subtype::derive_decorator_subtypes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/derive_decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::derive_decorator_subtype::derive_decorator_subtypes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/derive_decorator_subtype.rs
   Extent: 4093 */

void pdb_1408dedb0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined8 *param_4,undefined8 param_5,undefined8 *param_6)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [16];
  float *pfVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  uint uVar26;
  undefined *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined1 (**ppauVar30) [16];
  undefined1 (*unaff_R12) [16];
  undefined1 (*pauVar31) [16];
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  bool bVar34;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined1 (*pauStack_258) [16];
  undefined1 (*pauStack_250) [16];
  undefined *puStack_248;
  undefined *puStack_240;
  undefined1 (**ppauStack_238) [16];
  ulonglong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 *puStack_1f0;
  undefined1 (*pauStack_1e8) [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 (*pauStack_1c0) [16];
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  undefined1 (**ppauStack_1a8) [16];
  undefined1 (*pauStack_1a0) [16];
  undefined **ppuStack_198;
  code *pcStack_190;
  undefined8 *puStack_188;
  code *pcStack_180;
  undefined1 *puStack_178;
  code *pcStack_170;
  char *pcStack_168;
  code *pcStack_160;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined4 uStack_13c;
  undefined8 *puStack_138;
  undefined1 (*pauStack_130) [16];
  undefined8 *puStack_128;
  undefined1 (*pauStack_120) [16];
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined1 (**ppauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  char cStack_f4;
  char cStack_f3;
  undefined1 uStack_f2;
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 extraout_XMM0_Qb;
  
  uStack_f0 = 0xfffffffffffffffe;
  pauVar25 = param_2;
  cStack_f1 = pdb_140e94b40();
  pauVar31 = param_3;
  if (cStack_f1 == '\0') goto LAB_1408defbc;
  pauVar33 = (undefined1 (*) [16])0x45;
  lVar17 = pdb_1408dfdb0(0x45);
  unaff_R12 = (undefined1 (*) [16])&UNK_14301ade0;
  if (lVar17 != 1) goto LAB_1408dee9b;
  if (pauVar25 < (undefined1 (*) [16])0x46) {
    uVar18 = pdb_1408dfdb0(pauVar25);
    if ((uVar18 & 1) == 0) {
LAB_1408dee9b:
      puVar27 = &UNK_14301ac28;
      pauVar31 = (undefined1 (*) [16])&UNK_14301abf0;
      do {
        bVar5 = puVar27[-1];
        uVar14 = (uint)(char)bVar5;
        pauStack_100 = param_3;
        if ((char)bVar5 < '\0') {
          bVar6 = puVar27[-2];
          if ((char)bVar6 < -0x40) {
            bVar7 = puVar27[-3];
            if ((char)bVar7 < -0x40) {
              pbVar1 = puVar27 + -4;
              puVar27 = puVar27 + -4;
              uVar14 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar27 = puVar27 + -3;
              uVar14 = bVar7 & 0xf;
            }
            uVar14 = bVar6 & 0x3f | uVar14 << 6;
          }
          else {
            puVar27 = puVar27 + -2;
            uVar14 = bVar6 & 0x1f;
          }
          uVar14 = (uint)(bVar5 & 0x3f) | uVar14 << 6;
          if (uVar14 != 0x5c) goto LAB_1408def24;
LAB_1408def35:
          if ((undefined *)0x38 < puVar27 + -0x14301abef) goto LAB_1408dfa76;
          pauVar25 = (undefined1 (*) [16])(0x38 - (longlong)(puVar27 + -0x14301abef));
          pauVar31 = (undefined1 (*) [16])(puVar27 + 1);
          goto LAB_1408def57;
        }
        puVar27 = puVar27 + -1;
        if (uVar14 == 0x5c) goto LAB_1408def35;
LAB_1408def24:
        if (uVar14 == 0x2f) goto LAB_1408def35;
      } while (puVar27 != &UNK_14301abf0);
      pauVar25 = (undefined1 (*) [16])0x38;
LAB_1408def57:
      pauVar19 = (undefined1 (*) [16])pdb_140e97000();
      if (pauVar19[6][8] != '\x01') goto LAB_1408df919;
LAB_1408def66:
      if (*(longlong *)*pauVar19 == 0) {
        *(undefined8 *)*pauVar19 = 0xffffffffffffffff;
        pauStack_120 = pauVar19;
        uStack_1e0 = pdb_140e94f10(*pauVar19 + 8,unaff_R12,pauVar33,pauVar31,pauVar25,1,0);
        *(longlong *)*pauStack_120 = *(longlong *)*pauStack_120 + 1;
        pauVar31 = pauStack_100;
LAB_1408defbc:
        uStack_13c = *(undefined4 *)(param_1[1] + 0xc);
        puStack_1f0 = *(undefined4 **)param_1[1];
        *puStack_1f0 = uStack_13c;
        pauVar25 = *(undefined1 (**) [16])*param_1;
        if (*(longlong *)(pauVar25[1] + 8) != 0) {
          param_1 = *(undefined1 (**) [16])(*pauVar25 + 8);
          if (param_1 == (undefined1 (*) [16])0x0) {
            pauVar33 = (undefined1 (*) [16])0x0;
          }
          else {
            pub_142e32780(*(undefined8 *)*pauVar25,0xff,param_1[1] + 1);
            pauVar33 = (undefined1 (*) [16])
                       (((ulonglong)(*param_1 + 1) & 0xfffffffffffffff8) -
                       ((ulonglong)(*param_1 + 1) >> 3));
            if (param_1 < (undefined1 (*) [16])0x8) {
              pauVar33 = param_1;
            }
          }
          *(undefined8 *)(pauVar25[1] + 8) = 0;
          *(undefined1 (**) [16])pauVar25[1] = pauVar33;
        }
        puStack_148 = *(undefined **)*param_2;
        pauStack_120 = pauVar25;
        pdb_140c41140(&uStack_1c8);
        uStack_150 = CONCAT71(uStack_150._1_7_,(undefined1)uStack_1c8);
        puStack_128 = puStack_188;
        uStack_200 = *(undefined8 *)*pauVar31;
        uStack_1f8 = *param_4;
        pauVar19 = pauStack_1a0;
        pauVar23 = pauStack_1b8;
        puVar28 = (undefined8 *)((ulonglong)pcStack_190 & 0xffff);
        ppauVar30 = ppauStack_1a8;
        param_2 = pauStack_1c0;
        pauVar33 = pauStack_1b0;
LAB_1408df0aa:
        pauVar24 = pauVar33;
        if (pauVar23 == (undefined1 (*) [16])0x2) {
LAB_1408df1c7:
          if (((byte)uStack_150 & param_2 != (undefined1 (*) [16])0x0) == 0) goto LAB_1408df32c;
          pauStack_110 = (undefined1 (*) [16])0x2;
          pauStack_130 = (undefined1 (*) [16])0x0;
          pauVar31 = (undefined1 (*) [16])0x2;
          pauVar32 = param_2;
          puStack_138 = puVar28;
          pauStack_118 = pauVar24;
          ppauStack_108 = ppauVar30;
          pauStack_100 = pauVar19;
        }
        else {
          pauVar32 = pauVar23;
          if (ppauVar30 == (undefined1 (**) [16])0x0) {
joined_r0x0001408df1bf:
            if (pauVar32 == (undefined1 (*) [16])0x1) {
              ppauVar30 = (undefined1 (**) [16])0x0;
              pauVar24 = (undefined1 (*) [16])0x0;
              if (pauVar33 != (undefined1 (*) [16])0x0) {
                pauStack_110 = (undefined1 (*) [16])0x1;
                ppauStack_108 = (undefined1 (**) [16])0x0;
                pauStack_118 = (undefined1 (*) [16])0x0;
                pauVar31 = (undefined1 (*) [16])0x1;
                pauVar32 = pauVar33;
                puStack_138 = puVar28;
                pauStack_130 = param_2;
                pauStack_100 = pauVar19;
                goto LAB_1408df212;
              }
            }
            else {
              ppauVar30 = (undefined1 (**) [16])0x0;
            }
            goto LAB_1408df1c7;
          }
          if (puStack_128 == (undefined8 *)0x0) {
            puStack_128 = (undefined8 *)0x0;
            goto joined_r0x0001408df1bf;
          }
          if ((short)puVar28 == 0) {
            do {
              auVar37 = *pauVar19;
              ppauVar30 = ppauVar30 + -0x130;
              pauVar19 = pauVar19 + 1;
              uVar14 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) ^ 0xffff;
              puVar28 = (undefined8 *)(ulonglong)uVar14;
            } while (uVar14 == 0);
          }
          uVar14 = 0;
          uVar26 = (uint)puVar28;
          for (uVar9 = uVar26; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar18 = (ulonglong)uVar14;
          param_1 = (undefined1 (*) [16])(uVar18 * -0x98);
          pauStack_110 = pauVar23;
          ppauStack_108 = ppauVar30;
          pauStack_100 = pauVar19;
          pauVar31 = (undefined1 (*) [16])pdb_140c44590(ppauVar30 + uVar18 * -0x13 + -0x13);
          puVar29 = (undefined8 *)(ulonglong)(uVar26 - 1 & uVar26);
          puStack_128 = (undefined8 *)((longlong)puStack_128 + -1);
          pauVar19 = pauStack_100;
          param_4 = puVar28;
          puVar28 = puVar29;
          pauVar32 = pauStack_110;
          if (pauVar31 == (undefined1 (*) [16])0x3) goto joined_r0x0001408df1bf;
          pauVar32 = (undefined1 (*) [16])(ppauStack_108 + uVar18 * -0x13 + -0x12);
          pauVar25 = pauVar23;
          puStack_138 = puVar29;
          pauStack_130 = param_2;
          pauStack_118 = pauVar33;
        }
LAB_1408df212:
        unaff_R12 = *(undefined1 (**) [16])pauVar32[3];
        auVar37 = *unaff_R12;
        pauVar24 = unaff_R12 + 1;
        param_1 = (undefined1 (*) [16])
                  (ulonglong)
                  ~(uint)(ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar37[0xf] >> 7) << 0xf);
        param_4 = (undefined8 *)(*(longlong *)(pauVar32[4] + 8) + -1);
        pauVar19 = pauStack_100;
        pauVar23 = pauStack_110;
        puVar28 = puStack_138;
        ppauVar30 = ppauStack_108;
        param_2 = pauStack_130;
        pauVar33 = pauStack_118;
        pauStack_258 = pauVar31;
        pauStack_250 = pauVar25;
        if (*(longlong *)(pauVar32[4] + 8) != 0) {
          do {
            uVar14 = (uint)param_1;
            if ((short)param_1 == 0) {
              do {
                auVar37 = *pauVar24;
                unaff_R12 = unaff_R12 + -0x68;
                pauVar24 = pauVar24 + 1;
                uVar14 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar14 == 0);
            }
            uVar9 = 0;
            for (uVar26 = uVar14; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            puStack_240 = (undefined *)((longlong)unaff_R12 + (ulonglong)uVar9 * -0x68 + -0x60);
            uVar16 = *(undefined4 *)((longlong)unaff_R12 + (ulonglong)uVar9 * -0x68 + -0x68);
            uStack_1c8 = puStack_240;
            pauStack_1c0 = pauVar31;
            pauStack_1b8 = pauVar25;
            uStack_154 = uVar16;
            uVar15 = pdb_1408de710(&uStack_1c8,uStack_200,uStack_1f8,param_5);
            uStack_f2 = (undefined1)uVar15;
            *puStack_1f0 = uStack_13c;
            cStack_f4 = pdb_1414b4760(pauStack_120,uVar16,uVar15);
            if (cStack_f4 != '\x1a') {
              cStack_f3 = cStack_f4;
              pdb_140c41140(&uStack_1c8,puStack_148);
              pdb_1414f9930(&uStack_228,&uStack_1c8,&uStack_154);
              if (uStack_228 == (undefined *)0x3) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_14301ac70);
              }
              uStack_1d8 = uStack_228;
              uStack_1d0 = uStack_220;
              puStack_248 = puStack_218;
              if (*_DAT_143ca8e90 != 0) {
                pauStack_1c0 = (undefined1 (*) [16])pdb_1408e0230;
                pauStack_1b8 = (undefined1 (*) [16])&puStack_240;
                pauStack_1b0 = (undefined1 (*) [16])pdb_1414c2ef0;
                ppauStack_1a8 = &pauStack_258;
                pauStack_1a0 = (undefined1 (*) [16])pdb_1408de2d0;
                ppuStack_198 = &puStack_248;
                pcStack_190 = pdb_1414c2ef0;
                puStack_188 = &uStack_1d8;
                pcStack_180 = pdb_1408de2d0;
                puStack_178 = &uStack_f2;
                pcStack_170 = pdb_1408de2a0;
                pcStack_168 = &cStack_f4;
                pcStack_160 = pdb_1408de2a0;
                uStack_228 = &UNK_14301ad18;
                uStack_220 = 0x2a;
                puStack_218 = &UNK_14301ad18;
                uStack_210 = 0x2a;
                puStack_208 = &UNK_14301ad00;
                uStack_1c8 = (char *)&uStack_154;
                pdb_1400c9be0(&UNK_14301ac88,&uStack_1c8,1,&uStack_228);
              }
              uStack_1c8 = &cStack_f3;
              pauStack_1c0 = (undefined1 (*) [16])pdb_1408e01d0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14301ad42,&uStack_1c8,&UNK_14301ad60);
            }
            param_1 = (undefined1 (*) [16])(ulonglong)(uVar14 - 1 & uVar14);
            bVar34 = param_4 != (undefined8 *)0x0;
            param_4 = (undefined8 *)((longlong)param_4 + -1);
            cStack_f3 = '\x1a';
          } while (bVar34);
          param_4 = (undefined8 *)0xffffffffffffffff;
          pauVar19 = pauStack_100;
          pauVar23 = pauStack_110;
          puVar28 = puStack_138;
          ppauVar30 = ppauStack_108;
          param_2 = pauStack_130;
          pauVar33 = pauStack_118;
        }
        goto LAB_1408df0aa;
      }
      goto LAB_1408df90d;
    }
    if (*pauVar25 + 2 < (undefined *)0x46) {
      pauVar33 = (undefined1 (*) [16])(0x43 - (longlong)pauVar25);
      unaff_R12 = (undefined1 (*) [16])(pauVar25[0x14301ade] + 2);
      goto LAB_1408dee9b;
    }
    goto LAB_1408dfab9;
  }
  goto LAB_1408dfa99;
LAB_1408df32c:
  pdb_140a2fb40(&uStack_1c8,puStack_148);
  fVar10 = _DAT_142e36f50;
  pauStack_130 = (undefined1 (*) [16])*param_6;
  pauVar19 = pauStack_1c0;
  ppauVar30 = ppauStack_1a8;
  puVar27 = uStack_1c8;
  uVar18 = (ulonglong)pauStack_1b0 & 0xffff;
  while( true ) {
    uVar14 = (uint)uVar18;
    if (ppauVar30 == (undefined1 (**) [16])0x0) break;
    if ((short)uVar18 == 0) {
      do {
        auVar37 = *pauVar19;
        puVar27 = puVar27 + -0x980;
        pauVar19 = pauVar19 + 1;
        uVar14 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar14 == 0);
    }
    uVar9 = 0;
    for (uVar26 = uVar14; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar18 = (ulonglong)uVar9;
    uStack_230 = (ulonglong)(uVar14 - 1 & uVar14);
    puStack_128 = (undefined8 *)(puVar27 + uVar18 * -0x98);
    uStack_150 = *(undefined8 *)(puVar27 + (uVar18 * -0x13 + -0x13) * 8);
    param_1 = *(undefined1 (**) [16])(puVar27 + (uVar18 * -0x13 + -0xc) * 8);
    auVar37 = *param_1;
    pauVar25 = param_1 + 1;
    pauStack_118 = *(undefined1 (**) [16])(puVar27 + (uVar18 * -0x13 + -9) * 8);
    param_4 = (undefined8 *)
              (ulonglong)
              ~(uint)(ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar37[0xf] >> 7) << 0xf);
    ppauStack_238 = (undefined1 (**) [16])((longlong)ppauVar30 + -1);
    pauStack_1e8 = pauVar19;
    puStack_148 = puVar27;
    while (pauVar19 = pauStack_1e8, ppauVar30 = ppauStack_238, puVar27 = puStack_148,
          uVar18 = uStack_230, pauStack_118 != (undefined1 (*) [16])0x0) {
      if ((short)param_4 == 0) {
        do {
          auVar37 = *pauVar25;
          param_1 = param_1 + -0x68;
          pauVar25 = pauVar25 + 1;
          uVar14 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) ^ 0xffff;
          param_4 = (undefined8 *)(ulonglong)uVar14;
        } while (uVar14 == 0);
      }
      uVar26 = (uint)param_4;
      uVar14 = 0;
      for (uVar9 = uVar26; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar14 = uVar14 + 1;
      }
      param_4 = (undefined8 *)(ulonglong)(uVar26 - 1 & uVar26);
      lVar17 = (ulonglong)uVar14 * -0x68;
      pauStack_118 = (undefined1 (*) [16])(pauStack_118[-1] + 0xf);
      if ((*(int *)((longlong)param_1 + lVar17 + -0x60) == 3) &&
         (pauVar33 = (undefined1 (*) [16])((longlong)param_1 + lVar17), (byte)pauVar33[-3][2] < 2))
      {
        pauStack_110 = (undefined1 (*) [16])
                       CONCAT44(pauStack_110._4_4_,
                                *(undefined4 *)((longlong)param_1 + lVar17 + -0x68));
        fVar2 = *(float *)(pauVar33[-5] + 4);
        lVar17 = pdb_140b54f80(uStack_1f8,uStack_150,&UNK_14301ac28);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14301ac40);
        }
        auVar37._0_8_ = pdb_140930390(lVar17);
        auVar37._8_8_ = extraout_XMM0_Qb;
        pfVar20 = (float *)pdb_1409013a0(pauVar33[-3] + 8,&UNK_14301ac58);
        fVar3 = *pfVar20;
        uVar16 = pdb_14092f860(lVar17);
        fVar38 = (float)auVar37._0_8_ - fVar2;
        if (fVar38 <= 0.0) {
          fVar38 = 0.0;
        }
        fVar38 = fVar38 + _DAT_142e3788c;
        uStack_1c8 = (char *)CONCAT44(extraout_XMM0_Da,uVar16);
        uVar36 = pdb_140dea6c0(&uStack_1c8);
        uVar16 = pdb_14092f860(lVar17);
        puStack_138 = (undefined8 *)CONCAT44(puStack_138._4_4_,uVar16);
        uVar16 = pdb_14007ee60(uVar36);
        uStack_1c8 = (char *)CONCAT44(auVar37._0_4_,uVar16);
        pdb_140dea260(&uStack_228,&uStack_1c8,lVar17);
        fVar39 = (fVar38 + fVar3) * fVar10;
        pauVar33 = (undefined1 (*) [16])puStack_128[-0xc];
        auVar37 = *pauVar33;
        pauVar31 = pauVar33 + 1;
        unaff_R12 = (undefined1 (*) [16])
                    (ulonglong)
                    ~(uint)(ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar37[0xf] >> 7) << 0xf);
        fVar38 = uStack_228._4_4_;
        fVar11 = (float)uStack_220;
        fVar3 = (float)uStack_228;
        pauVar19 = (undefined1 (*) [16])puStack_128[-9];
        do {
          pauVar23 = (undefined1 (*) [16])(pauVar19[-1] + 0xf);
          if (pauVar19 == (undefined1 (*) [16])0x0) break;
          if ((short)unaff_R12 == 0) {
            do {
              auVar37 = *pauVar31;
              pauVar33 = pauVar33 + -0x68;
              pauVar31 = pauVar31 + 1;
              uVar14 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) ^ 0xffff;
              unaff_R12 = (undefined1 (*) [16])(ulonglong)uVar14;
            } while (uVar14 == 0);
          }
          uVar14 = 0;
          uVar26 = (uint)unaff_R12;
          for (uVar9 = uVar26; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          lVar21 = (ulonglong)uVar14 * -0x68;
          uVar14 = *(uint *)((longlong)pauVar33 + lVar21 + -0x68);
          uVar18 = (ulonglong)*(byte *)((longlong)pauVar33 + lVar21 + -0x2e);
          lVar17 = uVar18 - 1;
          if (uVar18 < 2) {
            lVar17 = 0;
          }
          pauStack_100 = pauVar23;
          if (lVar17 == 0) {
            uVar16 = *(undefined4 *)((longlong)pauVar33 + lVar21 + -0x50);
            fVar35 = *(float *)((longlong)pauVar33 + lVar21 + -0x4c);
            uVar13 = *(undefined *)((longlong)pauVar33 + lVar21 + -7);
            ppauStack_108 = (undefined1 (**) [16])CONCAT44(ppauStack_108._4_4_,uVar14);
            uVar12 = pdb_140901b40(uVar14,pauStack_120);
            uVar13 = pdb_140c44ba0(CONCAT71((int7)((ulonglong)param_2 >> 8),uVar13) & 0xffffffff);
            uStack_1d8._0_2_ = CONCAT11(uVar12,uVar13);
            lVar17 = pdb_141494370(uStack_200,&uStack_1d8);
            if (lVar17 == 0) {
              uStack_1c8 = (char *)&uStack_1d8;
              pauStack_1c0 = (undefined1 (*) [16])pdb_1414942d0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14330e2c6,&uStack_1c8,&UNK_14330e2f8);
            }
            fVar4 = *(float *)(lVar17 + 0x30);
            uStack_1c8 = (char *)CONCAT44(extraout_XMM0_Da_00,(int)puStack_138);
            if ((*(float *)(lVar17 + 0x3c) - *(float *)(lVar17 + 0x38)) * fVar10 + fVar39 <=
                (float)((uint)(fVar35 - (fVar2 + fVar39)) & _DAT_142e377e0)) {
              bVar34 = false;
            }
            else {
              fVar35 = (float)pdb_140dea770(&uStack_1c8,uVar16);
              bVar34 = fVar35 < fVar4 * fVar10 + _DAT_14301a560;
            }
            uVar14 = (uint)ppauStack_108;
          }
          else {
            if ((int)lVar17 != 1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_14301a8d8,0x28,&UNK_14301a930);
            }
            pdb_140c45db0(&uStack_1c8,pauStack_130,uVar14,&UNK_14301a918);
            bVar34 = SQRT((pauStack_1c0._0_4_ - fVar11) * (pauStack_1c0._0_4_ - fVar11) +
                          (uStack_1c8._4_4_ - fVar38) * (uStack_1c8._4_4_ - fVar38) +
                          ((float)uStack_1c8 - fVar3) * ((float)uStack_1c8 - fVar3)) <
                     _DAT_142e36f28;
          }
          param_2 = (undefined1 (*) [16])(ulonglong)uVar14;
          unaff_R12 = (undefined1 (*) [16])(ulonglong)(uVar26 - 1 & uVar26);
          pauVar19 = pauStack_100;
        } while (((uint)pauStack_110 == uVar14) || (!bVar34));
        *puStack_1f0 = uStack_13c;
        pdb_1414b4760(pauStack_120,(ulonglong)pauStack_110 & 0xffffffff);
      }
    }
  }
  if (cStack_f1 != '\0') {
    plVar22 = (longlong *)pdb_140e97000();
    if (((char)plVar22[0xd] != '\x01') &&
       (plVar22 = (longlong *)pdb_142dde6e0(plVar22,0), plVar22 == (longlong *)0x0))
    goto LAB_1408dfa6a;
    if (*plVar22 != 0) {
LAB_1408df90d:
      pauVar19 = (undefined1 (*) [16])pdb_142dc8090(&UNK_14330e608);
LAB_1408df919:
      pauVar19 = (undefined1 (*) [16])pdb_142dde6e0(pauVar19,0);
      if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1408dfa6a;
      goto LAB_1408def66;
    }
    *plVar22 = -1;
    pauStack_100 = (undefined1 (*) [16])plVar22;
    pdb_140e95370(plVar22 + 1,uStack_1e0);
    *(longlong *)pauStack_100 = *(longlong *)pauStack_100 + 1;
  }
  return;
LAB_1408dfa6a:
  pdb_142dc7890(&UNK_14330e598);
LAB_1408dfa76:
  pdb_142dc8070(&UNK_14301abf0,0x38);
LAB_1408dfa99:
  pdb_142dc8070(&UNK_14301ade0,0x45,0);
LAB_1408dfab9:
  pdb_142dc8070(&UNK_14301ade0,0x45);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

