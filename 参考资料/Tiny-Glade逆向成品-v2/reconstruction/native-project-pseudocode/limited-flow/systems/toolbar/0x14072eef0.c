// VA 0x14072eef0, PDB extent 13831 bytes
// toolbar::mei::core::mei_post_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::core::mei_post_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 13831 */

void pdb_14072eef0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
                  undefined8 *param_9)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 (**ppauVar15) [16];
  longlong *plVar16;
  char cVar17;
  undefined1 uVar18;
  byte bVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined1 (*pauVar25) [16];
  undefined8 uVar26;
  longlong lVar27;
  undefined1 (*pauVar28) [16];
  undefined8 *puVar29;
  ulonglong uVar30;
  undefined1 (*pauVar31) [16];
  undefined8 **ppuVar32;
  byte bVar33;
  longlong lVar34;
  undefined1 (*pauVar35) [16];
  byte bVar36;
  undefined8 uVar37;
  undefined *puVar38;
  longlong lVar39;
  uint uVar40;
  ulonglong uVar41;
  longlong lVar42;
  ushort uVar43;
  int iVar44;
  longlong lVar45;
  byte bVar46;
  longlong *plVar47;
  undefined *puVar48;
  undefined *puVar49;
  bool bVar50;
  float fVar51;
  undefined4 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  undefined8 uStack_260;
  undefined4 uStack_254;
  undefined1 (*pauStack_250) [16];
  ulonglong uStack_248;
  longlong lStack_240;
  undefined1 auStack_231 [9];
  undefined1 (*pauStack_228) [16];
  undefined1 (*pauStack_220) [16];
  undefined8 *puStack_218;
  longlong lStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong lStack_1f8;
  undefined8 uStack_1e8;
  undefined1 (*pauStack_1e0) [16];
  longlong lStack_1d8;
  undefined1 (*pauStack_1d0) [16];
  undefined1 (**ppauStack_1c8) [16];
  uint uStack_1c0;
  uint uStack_1bc;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ushort uStack_1a0;
  undefined2 uStack_19e;
  float fStack_19c;
  undefined1 (*pauStack_198) [16];
  float fStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  longlong lStack_180;
  float fStack_178;
  longlong lStack_174;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined1 (**ppauStack_160) [16];
  undefined1 auStack_158 [16];
  uint uStack_13c;
  longlong *plStack_138;
  undefined1 (*pauStack_130) [16];
  uint uStack_124;
  undefined1 (*pauStack_120) [16];
  undefined1 (*pauStack_118) [16];
  undefined1 uStack_109;
  undefined1 (*pauStack_108) [16];
  longlong lStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cVar17 = pdb_140e94b40();
  if (cVar17 != '\0') {
    puVar49 = &UNK_142fa6740;
    plVar47 = (longlong *)0x23;
    uVar30 = 0x23;
    lVar21 = pdb_14072a8a0(&UNK_142fa6740);
    if (lVar21 == 1) {
      if (0x23 < uVar30) {
LAB_1407313b0:
        pdb_142dc8070(&UNK_142fa6740,0x23,0);
LAB_1407313d1:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142fa6908);
      }
      puVar49 = &UNK_142fa6740;
      uVar22 = pdb_14072a8a0(&UNK_142fa6740);
      if ((uVar22 & 1) != 0) {
        if (0x23 < uVar30 + 2) {
          pdb_142dc8070(&UNK_142fa6740,0x23,uVar30 + 2,0x23,&UNK_142fa6800);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa6890);
        }
        plVar47 = (longlong *)(0x21 - uVar30);
        puVar49 = &UNK_142fa6742 + uVar30;
      }
    }
    puVar38 = &UNK_142fa6b9e;
    puVar48 = &UNK_142fa6b78;
    do {
      bVar46 = puVar38[-1];
      uVar20 = (uint)(char)bVar46;
      plStack_138 = plVar47;
      if ((char)bVar46 < '\0') {
        bVar19 = puVar38[-2];
        if ((char)bVar19 < -0x40) {
          bVar33 = puVar38[-3];
          if ((char)bVar33 < -0x40) {
            pbVar1 = puVar38 + -4;
            puVar38 = puVar38 + -4;
            uVar20 = bVar33 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar38 = puVar38 + -3;
            uVar20 = bVar33 & 0xf;
          }
          uVar20 = bVar19 & 0x3f | uVar20 << 6;
        }
        else {
          puVar38 = puVar38 + -2;
          uVar20 = bVar19 & 0x1f;
        }
        uVar20 = (uint)(bVar46 & 0x3f) | uVar20 << 6;
        if (uVar20 != 0x5c) goto LAB_14072f074;
LAB_14072f090:
        puVar48 = puVar38 + -0x142fa6b77;
        if ((undefined *)0x26 < puVar48) {
          pdb_142dc8070(&UNK_142fa6b78,0x26,puVar48,0x26,&UNK_142fa67c8);
          goto LAB_1407313b0;
        }
        lVar21 = 0x26 - (longlong)puVar48;
        puVar48 = puVar38 + 1;
        goto LAB_14072f0b6;
      }
      puVar38 = puVar38 + -1;
      if (uVar20 == 0x5c) goto LAB_14072f090;
LAB_14072f074:
      if (uVar20 == 0x2f) goto LAB_14072f090;
    } while (puVar38 != &UNK_142fa6b78);
    lVar21 = 0x26;
LAB_14072f0b6:
    plVar47 = (longlong *)pdb_140e97000();
    if (((char)plVar47[0xd] == '\x01') ||
       (plVar47 = (longlong *)pdb_142dcf3a0(plVar47,0), plVar47 != (longlong *)0x0)) {
      plVar16 = plStack_138;
      if (*plVar47 == 0) {
        *plVar47 = -1;
        plStack_138 = plVar47;
        uStack_260 = pdb_140e94f10(plVar47 + 1,puVar49,plVar16,puVar48,lVar21,1,0);
        *plStack_138 = *plStack_138 + 1;
        bVar14 = true;
        goto LAB_14072f11e;
      }
    }
    else {
      pdb_142dc7890(&UNK_1432a7ee8);
    }
    pdb_142dc8090(&UNK_1432a7f58);
LAB_140730260:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6878);
LAB_1407314da:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  bVar14 = false;
LAB_14072f11e:
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  lStack_100 = *param_1;
  fVar51 = (float)pdb_140a6ad50(*param_6);
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  lStack_1d8 = *param_2;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  pauStack_108 = (undefined1 (*) [16])*param_4;
  pauStack_118 = (undefined1 (*) [16])pdb_140a92040(*param_5);
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  auStack_231._1_8_ = *param_3;
  uVar18 = pdb_140a82300(*param_9);
  puStack_1b8._0_4_ = CONCAT31(puStack_1b8._1_3_,uVar18);
  cVar17 = pdb_1408ff980(&puStack_1b8);
  pauStack_120 = (undefined1 (*) [16])*param_8;
  uVar26 = 0;
  if (pauStack_120 != (undefined1 (*) [16])0x0) {
    uVar26 = *param_7;
  }
  uVar37 = 0;
  if (cVar17 != '\0') {
    uVar37 = uVar26;
  }
  fVar80 = in_XMM1._0_4_ / _DAT_142e4bfe4;
  lStack_210 = lStack_100 + 0x1b0;
  pauVar31 = *(undefined1 (**) [16])(lStack_100 + 0x1b0);
  lVar21 = *(longlong *)(lStack_100 + 0x1c8);
  auVar53 = *pauVar31;
  pauVar28 = pauVar31 + 1;
  uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar53[0xf] >> 7) << 0xf);
  pauStack_1e0 = (undefined1 (*) [16])(lStack_100 + 0x30);
  plStack_138 = (longlong *)(lStack_100 + 0x278);
  while (lVar21 != 0) {
    if ((short)uVar20 == 0) {
      do {
        auVar53 = *pauVar28;
        pauVar31 = pauVar31 + -0xd8;
        pauVar28 = pauVar28 + 1;
        uVar20 = (ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar20 == 0);
    }
    uVar40 = 0;
    for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar40 = uVar40 + 1;
    }
    uVar20 = uVar20 - 1 & uVar20;
    lVar34 = (ulonglong)uVar40 * -0xd8;
    lVar21 = lVar21 + -1;
    lVar39 = *(longlong *)((longlong)pauVar31 + lVar34 + -0x38);
    if (lVar39 == 0) {
      uStack_168._0_4_ = 2;
    }
    else {
      lVar27 = (longlong)pauVar31 + lVar34 + -6;
      uStack_16c = (undefined4)plStack_138[1];
      lStack_174 = *plStack_138;
      puStack_1b8._0_4_ = (uint)lStack_1d8;
      puStack_1b8._4_4_ = (undefined4)((ulonglong)lStack_1d8 >> 0x20);
      uStack_1b0._0_4_ = SUB84(pauStack_118,0);
      uStack_1b0._4_4_ = (float)((ulonglong)pauStack_118 >> 0x20);
      uStack_1a8._0_4_ = SUB84(pauStack_108,0);
      uStack_1a8._4_4_ = (float)((ulonglong)pauStack_108 >> 0x20);
      uStack_18c = 0x447a0000;
      uStack_1a0 = (ushort)lVar27;
      uStack_19e = (undefined2)((ulonglong)lVar27 >> 0x10);
      fStack_19c = (float)((ulonglong)lVar27 >> 0x20);
      pauStack_198 = pauStack_1e0;
      lStack_180 = (longlong)pauStack_120;
      fStack_190 = fVar51 / fVar80;
      uStack_188 = uVar37;
      fStack_178 = fVar80;
      (**(code **)(*(longlong *)((longlong)pauVar31 + lVar34 + -0x30) + 0x60))
                (&uStack_168,lVar39,&puStack_1b8);
      if ((int)uStack_168 != 2) {
        auVar53._4_4_ = uStack_168._4_4_;
        auVar53._0_4_ = (int)uStack_168;
        auVar53._8_8_ = ppauStack_160;
        *(undefined1 (*) [16])((longlong)pauVar31 + lVar34 + -0x70) = auVar53;
      }
    }
  }
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_200 = 8;
  uStack_1fc = 0;
  lStack_1f8 = 0;
  pdb_140f33350(&pauStack_228);
  uStack_168._0_4_ = 8;
  uStack_168._4_4_ = 0;
  auStack_158 = (undefined1  [16])0x0;
  puVar24 = *(undefined8 **)(lStack_100 + 8);
  lVar21 = *(longlong *)(lStack_100 + 0x10);
  pauStack_108 = (undefined1 (*) [16])(lStack_100 + 0x1d0);
  uVar30 = 0;
  puVar29 = puVar24;
  ppauStack_160 = &pauStack_228;
LAB_14072f442:
  lVar39 = lStack_100;
  if (puVar29 != puVar24 + lVar21 * 7) {
    if (*(longlong *)(lStack_100 + 0x1c8) != 0) {
      lVar34 = puVar29[6];
      uVar23 = pdb_1400af0a0(pauStack_108,puVar29 + 6);
      lVar27 = *(longlong *)(lVar39 + 0x1b0);
      uVar22 = *(ulonglong *)(lVar39 + 0x1b8);
      bVar46 = (byte)(uVar23 >> 0x39);
      auVar53 = ZEXT216(CONCAT11(bVar46,bVar46));
      auVar53 = pshuflw(auVar53,auVar53,0);
      lVar39 = 0;
      while( true ) {
        uVar23 = uVar23 & uVar22;
        pcVar2 = (char *)(lVar27 + uVar23);
        auVar58[0] = -(*pcVar2 == auVar53[0]);
        auVar58[1] = -(pcVar2[1] == auVar53[1]);
        auVar58[2] = -(pcVar2[2] == auVar53[2]);
        auVar58[3] = -(pcVar2[3] == auVar53[3]);
        auVar58[4] = -(pcVar2[4] == auVar53[4]);
        auVar58[5] = -(pcVar2[5] == auVar53[5]);
        auVar58[6] = -(pcVar2[6] == auVar53[6]);
        auVar58[7] = -(pcVar2[7] == auVar53[7]);
        auVar58[8] = -(pcVar2[8] == auVar53[0]);
        auVar58[9] = -(pcVar2[9] == auVar53[1]);
        auVar58[10] = -(pcVar2[10] == auVar53[2]);
        auVar58[0xb] = -(pcVar2[0xb] == auVar53[3]);
        auVar58[0xc] = -(pcVar2[0xc] == auVar53[4]);
        auVar58[0xd] = -(pcVar2[0xd] == auVar53[5]);
        auVar58[0xe] = -(pcVar2[0xe] == auVar53[6]);
        auVar58[0xf] = -(pcVar2[0xf] == auVar53[7]);
        uVar43 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf
        ;
        uVar41 = (ulonglong)uVar43;
        while (uVar43 != 0) {
          uVar20 = 0;
          for (uVar40 = (uint)uVar41; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x80000000) {
            uVar20 = uVar20 + 1;
          }
          lVar45 = (uVar20 + uVar23 & uVar22) * -0xd8;
          if (lVar34 == *(longlong *)(lVar27 + -0xd8 + lVar45)) {
            bVar46 = *(byte *)(lVar27 + lVar45 + -5);
            uVar26 = puVar29[2];
            pauStack_198 = (undefined1 (*) [16])puVar29[3];
            uStack_188 = puVar29[5];
            fStack_190 = (float)puVar29[4];
            uStack_18c = (undefined4)((ulonglong)puVar29[4] >> 0x20);
            uStack_1a0 = (ushort)uVar26;
            uStack_19e = (undefined2)((ulonglong)uVar26 >> 0x10);
            fStack_19c = (float)((ulonglong)uVar26 >> 0x20);
            uStack_1b0._0_4_ = (float)*puVar29;
            uStack_1b0._4_4_ = (float)((ulonglong)*puVar29 >> 0x20);
            uStack_1a8._0_4_ = (float)puVar29[1];
            uStack_1a8._4_4_ = (float)((ulonglong)puVar29[1] >> 0x20);
            if (uVar30 == auStack_158._0_8_) {
              pdb_1411b4db0(&uStack_168,uVar30,1,CONCAT71((int7)(uVar41 >> 8),1));
              uVar30 = auStack_158._8_8_;
            }
            lVar39 = CONCAT44(uStack_168._4_4_,(int)uStack_168);
            lVar27 = uVar30 * 0x50;
            *(undefined8 *)(lVar39 + lVar27) = 0;
            auVar5._4_4_ = uStack_1a8._4_4_;
            auVar5._0_4_ = (float)uStack_1a8;
            auVar5._8_2_ = uStack_1a0;
            auVar5._10_2_ = uStack_19e;
            auVar5._12_4_ = fStack_19c;
            auVar6._8_4_ = fStack_190;
            auVar6._0_8_ = pauStack_198;
            auVar6._12_4_ = uStack_18c;
            puVar3 = (undefined8 *)(lVar39 + 8 + lVar27);
            *puVar3 = CONCAT44(puStack_1b8._4_4_,(uint)puStack_1b8);
            puVar3[1] = CONCAT44(uStack_1b0._4_4_,(float)uStack_1b0);
            *(undefined1 (*) [16])(lVar39 + 0x18 + lVar27) = auVar5;
            *(undefined1 (*) [16])(lVar39 + 0x28 + lVar27) = auVar6;
            *(undefined8 *)(lVar39 + 0x38 + lVar27) = uStack_188;
            *(longlong *)(lVar39 + 0x40 + lVar27) = lVar34;
            *(undefined4 *)(lVar39 + 0x48 + lVar27) = 0x3f800000;
            *(byte *)(lVar39 + 0x4c + lVar27) = bVar46 & 2;
            uVar30 = auStack_158._8_8_ + 1;
            auStack_158._8_8_ = uVar30;
            puVar29 = puVar29 + 7;
            goto LAB_14072f442;
          }
          iVar44 = (uint)uVar41 - 1;
          uVar43 = (ushort)iVar44 & (ushort)uVar41;
          uVar41 = (ulonglong)CONCAT22((short)((uint)iVar44 >> 0x10),uVar43);
        }
        auVar55[0] = -(*pcVar2 == -1);
        auVar55[1] = -(pcVar2[1] == -1);
        auVar55[2] = -(pcVar2[2] == -1);
        auVar55[3] = -(pcVar2[3] == -1);
        auVar55[4] = -(pcVar2[4] == -1);
        auVar55[5] = -(pcVar2[5] == -1);
        auVar55[6] = -(pcVar2[6] == -1);
        auVar55[7] = -(pcVar2[7] == -1);
        auVar55[8] = -(pcVar2[8] == -1);
        auVar55[9] = -(pcVar2[9] == -1);
        auVar55[10] = -(pcVar2[10] == -1);
        auVar55[0xb] = -(pcVar2[0xb] == -1);
        auVar55[0xc] = -(pcVar2[0xc] == -1);
        auVar55[0xd] = -(pcVar2[0xd] == -1);
        auVar55[0xe] = -(pcVar2[0xe] == -1);
        auVar55[0xf] = -(pcVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x1f,0) & 1) != 0) || (SUB161(auVar55 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x37,0) & 1) != 0) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
        uVar23 = uVar23 + lVar39 + 0x10;
        lVar39 = lVar39 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa69b0);
  }
  uVar22 = uVar30 >> 1;
  if (uVar22 != 0) {
    pauVar31 = (undefined1 (*) [16])
               (uVar30 * 0x50 + CONCAT44(uStack_168._4_4_,(int)uStack_168) + -0x10);
    pauVar28 = (undefined1 (*) [16])(CONCAT44(uStack_168._4_4_,(int)uStack_168) + 0x40);
    do {
      uVar26 = *(undefined8 *)pauVar28[-4];
      uVar37 = *(undefined8 *)(pauVar28[-4] + 8);
      uVar13 = *(undefined8 *)(pauVar31[-4] + 8);
      *(undefined8 *)pauVar28[-4] = *(undefined8 *)pauVar31[-4];
      *(undefined8 *)(pauVar28[-4] + 8) = uVar13;
      *(undefined8 *)pauVar31[-4] = uVar26;
      *(undefined8 *)(pauVar31[-4] + 8) = uVar37;
      uVar26 = *(undefined8 *)pauVar28[-3];
      uVar37 = *(undefined8 *)(pauVar28[-3] + 8);
      uVar13 = *(undefined8 *)(pauVar31[-3] + 8);
      *(undefined8 *)pauVar28[-3] = *(undefined8 *)pauVar31[-3];
      *(undefined8 *)(pauVar28[-3] + 8) = uVar13;
      *(undefined8 *)pauVar31[-3] = uVar26;
      *(undefined8 *)(pauVar31[-3] + 8) = uVar37;
      uVar26 = *(undefined8 *)pauVar28[-2];
      uVar37 = *(undefined8 *)(pauVar28[-2] + 8);
      uVar13 = *(undefined8 *)(pauVar31[-2] + 8);
      *(undefined8 *)pauVar28[-2] = *(undefined8 *)pauVar31[-2];
      *(undefined8 *)(pauVar28[-2] + 8) = uVar13;
      *(undefined8 *)pauVar31[-2] = uVar26;
      *(undefined8 *)(pauVar31[-2] + 8) = uVar37;
      uVar26 = *(undefined8 *)pauVar28[-1];
      uVar37 = *(undefined8 *)(pauVar28[-1] + 8);
      uVar13 = *(undefined8 *)(pauVar31[-1] + 8);
      *(undefined8 *)pauVar28[-1] = *(undefined8 *)pauVar31[-1];
      *(undefined8 *)(pauVar28[-1] + 8) = uVar13;
      *(undefined8 *)pauVar31[-1] = uVar26;
      *(undefined8 *)(pauVar31[-1] + 8) = uVar37;
      uVar26 = *(undefined8 *)(*pauVar28 + 8);
      *pauVar28 = *pauVar31;
      *(undefined8 *)*pauVar31 = *(undefined8 *)*pauVar28;
      *(undefined8 *)(*pauVar31 + 8) = uVar26;
      pauVar28 = pauVar28 + 5;
      pauVar31 = pauVar31 + -5;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  fVar51 = _DAT_142e36f28;
  while (lVar21 = lStack_1f8, auStack_158._8_8_ != 0) {
    lVar34 = auStack_158._8_8_ + -1;
    auStack_158._8_8_ = lVar34;
    lVar39 = CONCAT44(uStack_168._4_4_,(int)uStack_168);
    lVar34 = lVar34 * 0x50;
    if (*(longlong *)(lVar39 + lVar34) == 2) break;
    lVar27 = lVar39 + lVar34;
    uVar26 = *(undefined8 *)(lVar39 + lVar34);
    uVar37 = ((undefined8 *)(lVar39 + lVar34))[1];
    lVar45 = *(longlong *)(lVar39 + 0x40 + lVar34);
    fVar4 = *(float *)(lVar39 + 0x48 + lVar34);
    bVar46 = *(byte *)(lVar39 + 0x4c + lVar34);
    uVar13 = *(undefined8 *)(lVar27 + 0x28);
    pauStack_198 = *(undefined1 (**) [16])(lVar27 + 0x30);
    fStack_190 = (float)*(undefined8 *)(lVar27 + 0x38);
    uStack_18c = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 0x38) >> 0x20);
    uStack_1a8._0_4_ = (float)*(undefined8 *)(lVar27 + 0x20);
    uStack_1a8._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar27 + 0x20) >> 0x20);
    uStack_1a0 = (ushort)uVar13;
    uStack_19e = (undefined2)((ulonglong)uVar13 >> 0x10);
    fStack_19c = (float)((ulonglong)uVar13 >> 0x20);
    puStack_1b8._0_4_ = (uint)*(undefined8 *)(lVar27 + 0x10);
    puStack_1b8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 0x10) >> 0x20);
    uStack_1b0._0_4_ = (float)*(undefined8 *)(lVar27 + 0x18);
    uStack_1b0._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar27 + 0x18) >> 0x20);
    lStack_240 = lVar45;
    if (lStack_1f8 == CONCAT44(uStack_204,uStack_208)) {
      pdb_142d7eec0(&uStack_208);
    }
    lVar34 = lStack_100;
    lVar39 = CONCAT44(uStack_1fc,uStack_200);
    plVar47 = (longlong *)(lVar39 + 0x20 + lVar21 * 0x48);
    *plVar47 = (longlong)pauStack_198;
    plVar47[1] = CONCAT44(uStack_18c,fStack_190);
    puVar24 = (undefined8 *)(lVar39 + 0x10 + lVar21 * 0x48);
    *puVar24 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
    puVar24[1] = CONCAT44(fStack_19c,CONCAT22(uStack_19e,uStack_1a0));
    puVar24 = (undefined8 *)(lVar39 + lVar21 * 0x48);
    *puVar24 = CONCAT44(puStack_1b8._4_4_,(uint)puStack_1b8);
    puVar24[1] = CONCAT44(uStack_1b0._4_4_,(float)uStack_1b0);
    *(longlong *)(lVar39 + 0x30 + lVar21 * 0x48) = lVar45;
    puVar24 = (undefined8 *)(lVar39 + 0x38 + lVar21 * 0x48);
    *puVar24 = uVar26;
    puVar24[1] = uVar37;
    lStack_1f8 = lVar21 + 1;
    if (*(longlong *)(lStack_100 + 0x1c8) == 0) {
LAB_14072f845:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142fa6998);
    }
    uVar22 = pdb_1400af0a0(pauStack_108,&lStack_240);
    lVar21 = *(longlong *)(lVar34 + 0x1b0);
    uVar30 = *(ulonglong *)(lVar34 + 0x1b8);
    bVar19 = (byte)(uVar22 >> 0x39);
    auVar53 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar53 = pshuflw(auVar53,auVar53,0);
    lVar39 = 0;
    while( true ) {
      uVar22 = uVar22 & uVar30;
      auVar58 = *(undefined1 (*) [16])(lVar21 + uVar22);
      auVar66[0] = -(auVar58[0] == auVar53[0]);
      auVar66[1] = -(auVar58[1] == auVar53[1]);
      auVar66[2] = -(auVar58[2] == auVar53[2]);
      auVar66[3] = -(auVar58[3] == auVar53[3]);
      auVar66[4] = -(auVar58[4] == auVar53[4]);
      auVar66[5] = -(auVar58[5] == auVar53[5]);
      auVar66[6] = -(auVar58[6] == auVar53[6]);
      auVar66[7] = -(auVar58[7] == auVar53[7]);
      auVar66[8] = -(auVar58[8] == auVar53[0]);
      auVar66[9] = -(auVar58[9] == auVar53[1]);
      auVar66[10] = -(auVar58[10] == auVar53[2]);
      auVar66[0xb] = -(auVar58[0xb] == auVar53[3]);
      auVar66[0xc] = -(auVar58[0xc] == auVar53[4]);
      auVar66[0xd] = -(auVar58[0xd] == auVar53[5]);
      auVar66[0xe] = -(auVar58[0xe] == auVar53[6]);
      auVar66[0xf] = -(auVar58[0xf] == auVar53[7]);
      uVar43 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar43;
      if (uVar43 != 0) break;
LAB_14072f764:
      auVar56[0] = -(auVar58[0] == -1);
      auVar56[1] = -(auVar58[1] == -1);
      auVar56[2] = -(auVar58[2] == -1);
      auVar56[3] = -(auVar58[3] == -1);
      auVar56[4] = -(auVar58[4] == -1);
      auVar56[5] = -(auVar58[5] == -1);
      auVar56[6] = -(auVar58[6] == -1);
      auVar56[7] = -(auVar58[7] == -1);
      auVar56[8] = -(auVar58[8] == -1);
      auVar56[9] = -(auVar58[9] == -1);
      auVar56[10] = -(auVar58[10] == -1);
      auVar56[0xb] = -(auVar58[0xb] == -1);
      auVar56[0xc] = -(auVar58[0xc] == -1);
      auVar56[0xd] = -(auVar58[0xd] == -1);
      auVar56[0xe] = -(auVar58[0xe] == -1);
      auVar56[0xf] = -(auVar58[0xf] == -1);
      if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar56 >> 0x17,0) & 1) != 0) || (SUB161(auVar56 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar56 >> 0x27,0) & 1) != 0) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar56 >> 0x3f,0) & 1) != 0) || (SUB161(auVar56 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar56 >> 0x4f,0) & 1) != 0) || (SUB161(auVar56 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar56 >> 0x5f,0) & 1) != 0) || (SUB161(auVar56 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar56 >> 0x6f,0) & 1) != 0) || (SUB161(auVar56 >> 0x77,0) & 1) != 0) ||
          auVar56[0xf] < '\0') goto LAB_14072f845;
      uVar22 = uVar22 + lVar39 + 0x10;
      lVar39 = lVar39 + 0x10;
    }
    while( true ) {
      uVar40 = 0;
      for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar40 = uVar40 + 1;
      }
      lVar34 = (uVar40 + uVar22 & uVar30) * -0xd8;
      if (lVar45 == *(longlong *)(lVar21 + -0xd8 + lVar34)) break;
      uVar43 = (ushort)(uVar20 - 1) & (ushort)uVar20;
      uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar43);
      if (uVar43 == 0) goto LAB_14072f764;
    }
    lVar21 = lVar21 + lVar34;
    *(float *)(lVar21 + -0x10) = fVar4 + *(float *)(lVar21 + -0x14);
    bVar19 = *(byte *)(lVar21 + -5);
    *(byte *)(lVar21 + -5) = bVar19 | bVar46;
    puVar29 = *(undefined8 **)(lVar21 + -200);
    puVar24 = puVar29 + *(longlong *)(lVar21 + -0xc0);
    for (; puVar29 != puVar24; puVar29 = puVar29 + 1) {
      uVar26 = *puVar29;
      fVar4 = *(float *)(lVar21 + -0x10);
      if (auStack_158._8_8_ == auStack_158._0_8_) {
        pdb_1411b4db0(&uStack_168,auStack_158._8_8_,1,1);
      }
      lVar39 = CONCAT44(uStack_168._4_4_,(int)uStack_168);
      lVar34 = auStack_158._8_8_ * 0x50;
      *(undefined8 *)(lVar39 + lVar34) = 1;
      *(longlong *)(lVar39 + 8 + lVar34) = lVar45;
      *(undefined4 *)(lVar39 + 0x10 + lVar34) = 5;
      *(undefined8 *)(lVar39 + 0x40 + lVar34) = uVar26;
      *(float *)(lVar39 + 0x48 + lVar34) = fVar4 + fVar51;
      *(byte *)(lVar39 + 0x4c + lVar34) = bVar19 & 2 | bVar46;
      auStack_158._8_8_ = auStack_158._8_8_ + 1;
    }
  }
  if (auStack_158._0_8_ != 0) {
    lVar39 = *(longlong *)ppauStack_160[2][2];
    if (lVar39 == CONCAT44(uStack_168._4_4_,(int)uStack_168)) {
      *(longlong *)ppauStack_160[2][2] = lVar39 + auStack_158._0_8_ * 0x50;
    }
  }
  puVar29 = _DAT_143ca8ec8;
  pauStack_120 = (undefined1 (*) [16])CONCAT44(uStack_204,uStack_208);
  pauVar28 = (undefined1 (*) [16])CONCAT44(uStack_1fc,uStack_200);
  puVar24 = puStack_218;
  lVar39 = lStack_210;
  lVar34 = lStack_100;
  while (lStack_210 = lVar39, lStack_100 = lVar34, puVar24 != puVar29) {
    puVar3 = (undefined8 *)puVar24[3];
    pub_1406abac0((byte *)*puVar24,puVar24[2],puVar24[1]);
    puVar24 = puVar3;
    lVar39 = lStack_210;
    lVar34 = lStack_100;
  }
  pauVar35 = (undefined1 (*) [16])(lVar21 * 0x48 + (longlong)pauVar28);
  pauVar31 = pauVar35;
  pauStack_118 = pauVar28;
  if (pauVar28 != pauVar35) {
LAB_14072f918:
    if (*(longlong *)pauVar31[-1] != 2) {
      pauVar28 = *(undefined1 (**) [16])(pauVar31[-2] + 8);
      pauStack_228 = pauVar28;
      if (*(longlong *)(lVar34 + 0x1c8) != 0) {
        pauVar31 = (undefined1 (*) [16])(pauVar31[-5] + 8);
        uVar30 = pdb_1400af0a0(pauStack_108,&pauStack_228);
        lVar21 = *(longlong *)(lVar34 + 0x1b0);
        bVar46 = (byte)(uVar30 >> 0x39);
        auVar53 = ZEXT216(CONCAT11(bVar46,bVar46));
        auVar53 = pshuflw(auVar53,auVar53,0);
        lVar27 = 0;
        while( true ) {
          uVar30 = uVar30 & *(ulonglong *)(lVar34 + 0x1b8);
          auVar58 = *(undefined1 (*) [16])(lVar21 + uVar30);
          auVar67[0] = -(auVar58[0] == auVar53[0]);
          auVar67[1] = -(auVar58[1] == auVar53[1]);
          auVar67[2] = -(auVar58[2] == auVar53[2]);
          auVar67[3] = -(auVar58[3] == auVar53[3]);
          auVar67[4] = -(auVar58[4] == auVar53[4]);
          auVar67[5] = -(auVar58[5] == auVar53[5]);
          auVar67[6] = -(auVar58[6] == auVar53[6]);
          auVar67[7] = -(auVar58[7] == auVar53[7]);
          auVar67[8] = -(auVar58[8] == auVar53[0]);
          auVar67[9] = -(auVar58[9] == auVar53[1]);
          auVar67[10] = -(auVar58[10] == auVar53[2]);
          auVar67[0xb] = -(auVar58[0xb] == auVar53[3]);
          auVar67[0xc] = -(auVar58[0xc] == auVar53[4]);
          auVar67[0xd] = -(auVar58[0xd] == auVar53[5]);
          auVar67[0xe] = -(auVar58[0xe] == auVar53[6]);
          auVar67[0xf] = -(auVar58[0xf] == auVar53[7]);
          uVar43 = (ushort)(SUB161(auVar67 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar67[0xf] >> 7) << 0xf;
          uVar20 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar40 = 0;
            for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar40 = uVar40 + 1;
            }
            lVar45 = (uVar40 + uVar30 & *(ulonglong *)(lVar34 + 0x1b8)) * -0xd8;
            if (pauVar28 == *(undefined1 (**) [16])(lVar21 + -0xd8 + lVar45)) {
              lVar21 = lVar21 + lVar45;
              ppauStack_160 = *(undefined1 (***) [16])(lVar21 + -0x68);
              uStack_168._0_4_ = (int)*(undefined8 *)(lVar21 + -0x70);
              uStack_168._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + -0x70) >> 0x20);
              lVar27 = *(longlong *)(lVar21 + -200);
              uStack_1b0 = (undefined1 (*) [16])(lVar27 + *(longlong *)(lVar21 + -0xc0) * 8);
              puStack_1b8._0_4_ = (uint)lVar27;
              puStack_1b8._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
              uStack_1a8._0_4_ = (float)lVar39;
              uStack_1a8._4_4_ = (float)((ulonglong)lVar39 >> 0x20);
              uVar52 = pdb_1411b6260(lVar21 + -0xb8,&uStack_168,&puStack_1b8);
              if (*(longlong *)(lVar34 + 0x1c8) == 0) goto LAB_1407301f2;
              uVar30 = pdb_1400af0a0(pauStack_108,&pauStack_228);
              lVar21 = *(longlong *)(lVar34 + 0x1b0);
              bVar46 = (byte)(uVar30 >> 0x39);
              auVar53 = ZEXT216(CONCAT11(bVar46,bVar46));
              auVar53 = pshuflw(auVar53,auVar53,0);
              lVar27 = 0;
              goto LAB_14072fa76;
            }
            uVar43 = (ushort)(uVar20 - 1) & (ushort)uVar20;
            uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar43);
          }
          auVar57[0] = -(auVar58[0] == -1);
          auVar57[1] = -(auVar58[1] == -1);
          auVar57[2] = -(auVar58[2] == -1);
          auVar57[3] = -(auVar58[3] == -1);
          auVar57[4] = -(auVar58[4] == -1);
          auVar57[5] = -(auVar58[5] == -1);
          auVar57[6] = -(auVar58[6] == -1);
          auVar57[7] = -(auVar58[7] == -1);
          auVar57[8] = -(auVar58[8] == -1);
          auVar57[9] = -(auVar58[9] == -1);
          auVar57[10] = -(auVar58[10] == -1);
          auVar57[0xb] = -(auVar58[0xb] == -1);
          auVar57[0xc] = -(auVar58[0xc] == -1);
          auVar57[0xd] = -(auVar58[0xd] == -1);
          auVar57[0xe] = -(auVar58[0xe] == -1);
          auVar57[0xf] = -(auVar58[0xf] == -1);
          if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar57 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x2f,0) & 1) != 0) || (SUB161(auVar57 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
          uVar30 = uVar30 + lVar27 + 0x10;
          lVar27 = lVar27 + 0x10;
        }
      }
      pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6950);
      goto LAB_1407314da;
    }
  }
LAB_14072fafb:
  pauStack_228 = (undefined1 (*) [16])0x0;
  pauStack_220 = (undefined1 (*) [16])0x8;
  puStack_218 = (undefined8 *)0x0;
  pauVar28 = pauStack_118;
  pauStack_1d0 = pauVar35;
  if (pauStack_118 != pauVar35) {
    while( true ) {
      lVar21 = *(longlong *)(pauVar28[3] + 8);
      if (lVar21 == 2) break;
      uVar20 = *(uint *)*pauVar28;
      lVar27 = *(longlong *)pauVar28[1];
      lVar45 = *(longlong *)pauVar28[3];
      uVar26 = *(undefined8 *)pauVar28[4];
      uStack_1e8 = lVar45;
      if (uVar20 == 3) {
        puStack_1b8._0_4_ = (uint)lVar27;
        puStack_1b8._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
        if (*(longlong *)(lVar34 + 0x1c8) != 0) {
          uVar30 = pdb_1400af0a0(pauStack_108,&puStack_1b8,uVar26);
          lVar21 = *(longlong *)(lVar34 + 0x1b0);
          bVar46 = (byte)(uVar30 >> 0x39);
          auVar53 = ZEXT216(CONCAT11(bVar46,bVar46));
          auVar53 = pshuflw(auVar53,auVar53,0);
          lVar39 = 0;
          while( true ) {
            uVar30 = uVar30 & *(ulonglong *)(lVar34 + 0x1b8);
            pcVar2 = (char *)(lVar21 + uVar30);
            auVar69[0] = -(*pcVar2 == auVar53[0]);
            auVar69[1] = -(pcVar2[1] == auVar53[1]);
            auVar69[2] = -(pcVar2[2] == auVar53[2]);
            auVar69[3] = -(pcVar2[3] == auVar53[3]);
            auVar69[4] = -(pcVar2[4] == auVar53[4]);
            auVar69[5] = -(pcVar2[5] == auVar53[5]);
            auVar69[6] = -(pcVar2[6] == auVar53[6]);
            auVar69[7] = -(pcVar2[7] == auVar53[7]);
            auVar69[8] = -(pcVar2[8] == auVar53[0]);
            auVar69[9] = -(pcVar2[9] == auVar53[1]);
            auVar69[10] = -(pcVar2[10] == auVar53[2]);
            auVar69[0xb] = -(pcVar2[0xb] == auVar53[3]);
            auVar69[0xc] = -(pcVar2[0xc] == auVar53[4]);
            auVar69[0xd] = -(pcVar2[0xd] == auVar53[5]);
            auVar69[0xe] = -(pcVar2[0xe] == auVar53[6]);
            auVar69[0xf] = -(pcVar2[0xf] == auVar53[7]);
            uVar43 = (ushort)(SUB161(auVar69 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar69[0xf] >> 7) << 0xf;
            uVar40 = (uint)uVar43;
            while (uVar43 != 0) {
              uVar9 = 0;
              for (uVar10 = uVar40; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar9 = uVar9 + 1;
              }
              lVar45 = (uVar9 + uVar30 & *(ulonglong *)(lVar34 + 0x1b8)) * -0xd8;
              if (lVar27 == *(longlong *)(lVar21 + -0xd8 + lVar45)) {
                lVar21 = lVar21 + lVar45;
                lStack_1f8 = CONCAT44(lStack_1f8._4_4_,*(undefined4 *)(lVar21 + -0x50));
                uStack_208 = (undefined4)*(undefined8 *)(lVar21 + -0x60);
                uStack_204 = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + -0x60) >> 0x20);
                uStack_200 = (undefined4)*(undefined8 *)(lVar21 + -0x58);
                uStack_1fc = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + -0x58) >> 0x20);
                goto LAB_14072fc83;
              }
              uVar43 = (ushort)(uVar40 - 1) & (ushort)uVar40;
              uVar40 = CONCAT22((short)(uVar40 - 1 >> 0x10),uVar43);
            }
            auVar60[0] = -(*pcVar2 == -1);
            auVar60[1] = -(pcVar2[1] == -1);
            auVar60[2] = -(pcVar2[2] == -1);
            auVar60[3] = -(pcVar2[3] == -1);
            auVar60[4] = -(pcVar2[4] == -1);
            auVar60[5] = -(pcVar2[5] == -1);
            auVar60[6] = -(pcVar2[6] == -1);
            auVar60[7] = -(pcVar2[7] == -1);
            auVar60[8] = -(pcVar2[8] == -1);
            auVar60[9] = -(pcVar2[9] == -1);
            auVar60[10] = -(pcVar2[10] == -1);
            auVar60[0xb] = -(pcVar2[0xb] == -1);
            auVar60[0xc] = -(pcVar2[0xc] == -1);
            auVar60[0xd] = -(pcVar2[0xd] == -1);
            auVar60[0xe] = -(pcVar2[0xe] == -1);
            auVar60[0xf] = -(pcVar2[0xf] == -1);
            if ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar60 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar60 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar60 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar60 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar60 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar60 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar60 >> 0x3f,0) & 1) != 0) || (SUB161(auVar60 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar60 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar60 >> 0x57,0) & 1) != 0) || (SUB161(auVar60 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar60 >> 0x67,0) & 1) != 0) || (SUB161(auVar60 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar60 >> 0x77,0) & 1) != 0) || auVar60[0xf] < '\0') break;
            uVar30 = uVar30 + lVar39 + 0x10;
            lVar39 = lVar39 + 0x10;
          }
        }
        goto LAB_140730260;
      }
      if (uVar20 != 5) {
        pdb_14072acf0(&uStack_208,lVar21,uVar26,lVar39);
LAB_14072fc83:
                    /* WARNING: Could not recover jumptable at 0x00014072fc93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_142fa6eac + *(int *)(&UNK_142fa6eac + (ulonglong)uVar20 * 4)))();
        return;
      }
      pdb_14072acf0(&uStack_208,lVar21,uVar26,lVar39);
      lVar21 = pdb_1411a3e40(lVar39,&uStack_1e8);
      if (lVar21 == 0) goto LAB_1407313d1;
      fVar51 = fVar51 * *(float *)(lVar21 + 0xc4);
      *(float *)(lVar21 + 0x84) = fVar51;
      *(undefined4 *)(lVar21 + 0x80) = (undefined4)lStack_1f8;
      *(ulonglong *)(lVar21 + 0x70) = CONCAT44(uStack_204,uStack_208);
      *(ulonglong *)(lVar21 + 0x78) = CONCAT44(uStack_1fc,uStack_200);
      if (*(longlong *)(lVar34 + 0x1c8) == 0) {
LAB_140730204:
        pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6920);
        goto LAB_1407314da;
      }
      pauVar28 = (undefined1 (*) [16])(pauVar28[4] + 8);
      uVar30 = pdb_1400af0a0(pauStack_108,&uStack_1e8);
      lVar21 = *(longlong *)(lVar34 + 0x1b0);
      bVar46 = (byte)(uVar30 >> 0x39);
      auVar53 = ZEXT216(CONCAT11(bVar46,bVar46));
      auVar53 = pshuflw(auVar53,auVar53,0);
      lVar27 = 0;
      while( true ) {
        uVar30 = uVar30 & *(ulonglong *)(lVar34 + 0x1b8);
        auVar58 = *(undefined1 (*) [16])(lVar21 + uVar30);
        auVar70[0] = -(auVar58[0] == auVar53[0]);
        auVar70[1] = -(auVar58[1] == auVar53[1]);
        auVar70[2] = -(auVar58[2] == auVar53[2]);
        auVar70[3] = -(auVar58[3] == auVar53[3]);
        auVar70[4] = -(auVar58[4] == auVar53[4]);
        auVar70[5] = -(auVar58[5] == auVar53[5]);
        auVar70[6] = -(auVar58[6] == auVar53[6]);
        auVar70[7] = -(auVar58[7] == auVar53[7]);
        auVar70[8] = -(auVar58[8] == auVar53[0]);
        auVar70[9] = -(auVar58[9] == auVar53[1]);
        auVar70[10] = -(auVar58[10] == auVar53[2]);
        auVar70[0xb] = -(auVar58[0xb] == auVar53[3]);
        auVar70[0xc] = -(auVar58[0xc] == auVar53[4]);
        auVar70[0xd] = -(auVar58[0xd] == auVar53[5]);
        auVar70[0xe] = -(auVar58[0xe] == auVar53[6]);
        auVar70[0xf] = -(auVar58[0xf] == auVar53[7]);
        uVar43 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(auVar70[0xf] >> 7) << 0xf
        ;
        uVar20 = (uint)uVar43;
        if (uVar43 != 0) break;
LAB_14072ff55:
        auVar61[0] = -(auVar58[0] == -1);
        auVar61[1] = -(auVar58[1] == -1);
        auVar61[2] = -(auVar58[2] == -1);
        auVar61[3] = -(auVar58[3] == -1);
        auVar61[4] = -(auVar58[4] == -1);
        auVar61[5] = -(auVar58[5] == -1);
        auVar61[6] = -(auVar58[6] == -1);
        auVar61[7] = -(auVar58[7] == -1);
        auVar61[8] = -(auVar58[8] == -1);
        auVar61[9] = -(auVar58[9] == -1);
        auVar61[10] = -(auVar58[10] == -1);
        auVar61[0xb] = -(auVar58[0xb] == -1);
        auVar61[0xc] = -(auVar58[0xc] == -1);
        auVar61[0xd] = -(auVar58[0xd] == -1);
        auVar61[0xe] = -(auVar58[0xe] == -1);
        auVar61[0xf] = -(auVar58[0xf] == -1);
        if ((((((((((((((((SUB161(auVar61 >> 7,0) & 1) != 0 || (SUB161(auVar61 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar61 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar61 >> 0x1f,0) & 1) != 0) || (SUB161(auVar61 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar61 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar61 >> 0x37,0) & 1) != 0) || (SUB161(auVar61 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar61 >> 0x47,0) & 1) != 0) || (SUB161(auVar61 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar61 >> 0x57,0) & 1) != 0) || (SUB161(auVar61 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar61 >> 0x67,0) & 1) != 0) || (SUB161(auVar61 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar61 >> 0x77,0) & 1) != 0) || auVar61[0xf] < '\0') goto LAB_140730204;
        uVar30 = uVar30 + lVar27 + 0x10;
        lVar27 = lVar27 + 0x10;
      }
LAB_14072ff29:
      uVar40 = 0;
      for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar40 = uVar40 + 1;
      }
      lVar42 = (uVar40 + uVar30 & *(ulonglong *)(lVar34 + 0x1b8)) * -0xd8;
      if (lVar45 != *(longlong *)(lVar21 + -0xd8 + lVar42)) goto code_r0x00014072ff48;
      lVar21 = lVar21 + lVar42;
      lVar34 = *(longlong *)(lVar21 + -200);
      uStack_1b0 = (undefined1 (*) [16])(lVar34 + *(longlong *)(lVar21 + -0xc0) * 8);
      puStack_1b8._0_4_ = (uint)lVar34;
      puStack_1b8._4_4_ = (undefined4)((ulonglong)lVar34 >> 0x20);
      uStack_1a8._0_4_ = (float)lVar39;
      uStack_1a8._4_4_ = (float)((ulonglong)lVar39 >> 0x20);
      pdb_1411b38b0(&uStack_168,&puStack_1b8);
      ppauStack_1c8 = ppauStack_160;
      pdb_140737470(&puStack_1b8,lVar21 + -0xb8,lVar21 + -0x48,ppauStack_160,auStack_158._0_8_);
      puStack_218 = (undefined8 *)0x0;
      uStack_109 = 1;
      pdb_1411b3740(&pauStack_228,*(longlong *)(lVar21 + -200),
                    *(longlong *)(lVar21 + -200) + *(longlong *)(lVar21 + -0xc0) * 8);
      pauStack_130 = (undefined1 (*) [16])CONCAT44(puStack_1b8._4_4_,(uint)puStack_1b8);
      pauStack_1e0 = uStack_1b0;
      if (puStack_218 != (undefined8 *)0x0) {
        pauStack_250 = (undefined1 (*) [16])(*pauStack_220 + (longlong)puStack_218 * 8);
        pauVar25 = uStack_1b0 + CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
        pauVar31 = pauStack_220;
        pauVar35 = uStack_1b0;
LAB_1407300b8:
        lVar21 = lStack_100;
        if (pauVar35 != pauVar25) {
          lVar39 = *(longlong *)*pauVar31;
          lStack_240 = lVar39;
          if (*(longlong *)(lStack_100 + 0x1c8) != 0) {
            pauVar31 = (undefined1 (*) [16])(*pauVar31 + 8);
            uVar22 = pdb_1400af0a0(pauStack_108,&lStack_240);
            lVar34 = *(longlong *)(lVar21 + 0x1b0);
            uVar30 = *(ulonglong *)(lVar21 + 0x1b8);
            bVar46 = (byte)(uVar22 >> 0x39);
            auVar53 = ZEXT216(CONCAT11(bVar46,bVar46));
            auVar53 = pshuflw(auVar53,auVar53,0);
            lVar21 = 0;
            while( true ) {
              uVar22 = uVar22 & uVar30;
              auVar58 = *(undefined1 (*) [16])(lVar34 + uVar22);
              auVar71[0] = -(auVar58[0] == auVar53[0]);
              auVar71[1] = -(auVar58[1] == auVar53[1]);
              auVar71[2] = -(auVar58[2] == auVar53[2]);
              auVar71[3] = -(auVar58[3] == auVar53[3]);
              auVar71[4] = -(auVar58[4] == auVar53[4]);
              auVar71[5] = -(auVar58[5] == auVar53[5]);
              auVar71[6] = -(auVar58[6] == auVar53[6]);
              auVar71[7] = -(auVar58[7] == auVar53[7]);
              auVar71[8] = -(auVar58[8] == auVar53[0]);
              auVar71[9] = -(auVar58[9] == auVar53[1]);
              auVar71[10] = -(auVar58[10] == auVar53[2]);
              auVar71[0xb] = -(auVar58[0xb] == auVar53[3]);
              auVar71[0xc] = -(auVar58[0xc] == auVar53[4]);
              auVar71[0xd] = -(auVar58[0xd] == auVar53[5]);
              auVar71[0xe] = -(auVar58[0xe] == auVar53[6]);
              auVar71[0xf] = -(auVar58[0xf] == auVar53[7]);
              uVar43 = (ushort)(SUB161(auVar71 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar71[0xf] >> 7) << 0xf;
              uVar20 = (uint)uVar43;
              while (uVar43 != 0) {
                uVar40 = 0;
                for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar40 = uVar40 + 1;
                }
                lVar27 = (uVar40 + uVar22 & uVar30) * -0xd8;
                if (lVar39 == *(longlong *)(lVar34 + -0xd8 + lVar27)) {
                  lVar34 = lVar34 + lVar27;
                  uVar26 = *(undefined8 *)(*pauVar35 + 8);
                  *(undefined8 *)(lVar34 + -0x48) = *(undefined8 *)*pauVar35;
                  *(undefined8 *)(lVar34 + -0x40) = uVar26;
                  pauVar35 = pauVar35 + 1;
                  if (pauVar31 == pauStack_250) goto LAB_140730121;
                  goto LAB_1407300b8;
                }
                uVar43 = (ushort)(uVar20 - 1) & (ushort)uVar20;
                uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar43);
              }
              auVar62[0] = -(auVar58[0] == -1);
              auVar62[1] = -(auVar58[1] == -1);
              auVar62[2] = -(auVar58[2] == -1);
              auVar62[3] = -(auVar58[3] == -1);
              auVar62[4] = -(auVar58[4] == -1);
              auVar62[5] = -(auVar58[5] == -1);
              auVar62[6] = -(auVar58[6] == -1);
              auVar62[7] = -(auVar58[7] == -1);
              auVar62[8] = -(auVar58[8] == -1);
              auVar62[9] = -(auVar58[9] == -1);
              auVar62[10] = -(auVar58[10] == -1);
              auVar62[0xb] = -(auVar58[0xb] == -1);
              auVar62[0xc] = -(auVar58[0xc] == -1);
              auVar62[0xd] = -(auVar58[0xd] == -1);
              auVar62[0xe] = -(auVar58[0xe] == -1);
              auVar62[0xf] = -(auVar58[0xf] == -1);
              if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar62 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar62 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar62 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar62 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar62 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar62 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar62 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar62 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar62 >> 0x4f,0) & 1) != 0) || (SUB161(auVar62 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar62 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar62 >> 0x67,0) & 1) != 0) || (SUB161(auVar62 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar62 >> 0x77,0) & 1) != 0) || auVar62[0xf] < '\0') break;
              uVar22 = uVar22 + lVar21 + 0x10;
              lVar21 = lVar21 + 0x10;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa6938);
        }
      }
LAB_140730121:
      if (pauStack_130 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_1e0,(longlong)pauStack_130 << 4,4);
      }
      lVar34 = lStack_100;
      pauVar31 = pauStack_1d0;
      if (CONCAT44(uStack_168._4_4_,(int)uStack_168) != 0) {
        pub_1406abac0((byte *)ppauStack_1c8,CONCAT44(uStack_168._4_4_,(int)uStack_168) * 0x18,8);
      }
      lVar39 = lStack_210;
      if (pauVar28 == pauVar31) break;
    }
  }
  if (pauStack_228 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_220,(longlong)pauStack_228 << 3,8);
  }
  if (pauStack_120 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_118,(longlong)pauStack_120 * 0x48,8);
  }
  uStack_1b0 = *(undefined1 (**) [16])(lStack_100 + 0x1b0);
  uStack_1a8 = (undefined1 (*) [16])(*uStack_1b0 + *(longlong *)(lStack_100 + 0x1b8) + 1);
  auVar53 = *uStack_1b0;
  uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar53[0xf] >> 7) << 0xf);
  pauVar28 = (undefined1 (*) [16])(ulonglong)uVar20;
  pauStack_198 = *(undefined1 (**) [16])(lStack_100 + 0x1c8);
  puStack_1b8._0_4_ = (uint)uStack_1b0;
  puStack_1b8._4_4_ = (undefined4)((ulonglong)uStack_1b0 >> 0x20);
  uStack_1b0 = uStack_1b0 + 1;
  uStack_1a0 = (ushort)uVar20;
  while( true ) {
    lVar21 = pdb_14119f580(&puStack_1b8);
    if ((lVar21 == 0) || (pauVar28 == (undefined1 (*) [16])0x0)) break;
    pauVar28[0xc][10] = pauVar28[0xc][10] & 0xbf;
  }
  pauVar31 = (undefined1 (*) [16])(auStack_231._1_8_ + 0x10);
  ppauStack_1c8 = *(undefined1 (***) [16])(auStack_231._1_8_ + 0x10);
  if (ppauStack_1c8 == (undefined1 (**) [16])0x2) {
    puStack_1b8._0_4_ = (uint)*(undefined8 *)(auStack_231._1_8_ + 0x18);
    puStack_1b8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(auStack_231._1_8_ + 0x18) >> 0x20);
    pauVar28 = (undefined1 (*) [16])&puStack_1b8;
    cVar17 = pdb_1411a23d0(lStack_210);
    ppauStack_1c8 = (undefined1 (**) [16])0x2;
    if (cVar17 == '\0') {
      *(undefined8 *)*pauVar31 = 0;
      ppauStack_1c8 = (undefined1 (**) [16])0x0;
    }
  }
  cVar17 = pdb_140c9dda0(pauVar31);
  pauStack_1d0 = pauVar31;
  if (cVar17 == '\0') {
    cVar17 = pdb_140938b60(*(undefined4 *)(lStack_100 + 0xe0));
    if (cVar17 == '\0') {
      uStack_124 = 0;
    }
    else {
      uStack_124 = pdb_140938b60(*(undefined4 *)(lStack_100 + 0xe8));
      uStack_124 = uStack_124 ^ 1;
    }
    cVar17 = pdb_140938b60(*(undefined4 *)(lStack_100 + 0xe8));
    if (cVar17 == '\0') {
      uStack_1c0 = 0;
    }
    else {
      uStack_1c0 = pdb_140938b60(*(undefined4 *)(lStack_100 + 0xe0));
      uStack_1c0 = uStack_1c0 ^ 1;
    }
    cVar17 = pdb_140938b60(*(undefined4 *)(lStack_100 + 0xf0));
    if (cVar17 == '\0') {
      uStack_1bc = 0;
    }
    else {
      uStack_1bc = pdb_140938b60(*(undefined4 *)(lStack_100 + 0xf8));
      uStack_1bc = uStack_1bc ^ 1;
    }
    cVar17 = pdb_140938b60(*(undefined4 *)(lStack_100 + 0xf8));
    if (cVar17 == '\0') {
      uStack_13c = 0;
    }
    else {
      uStack_13c = pdb_140938b60(*(undefined4 *)(lStack_100 + 0xf0));
      uStack_13c = uStack_13c ^ 1;
    }
    ppauVar15 = ppauStack_1c8;
    uStack_1e8 = CONCAT44((float)(uStack_1bc & 0xff) - (float)(uStack_13c & 0xff),
                          (float)(uStack_1c0 & 0xff) + (0.0 - (float)(uStack_124 & 0xff)));
    lStack_240 = 0;
    uStack_1b0 = *(undefined1 (**) [16])(lStack_100 + 0x1b0);
    uStack_1a8 = (undefined1 (*) [16])(*uStack_1b0 + *(longlong *)(lStack_100 + 0x1b8) + 1);
    auVar53 = *uStack_1b0;
    uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar53[0xf] >> 7) << 0xf);
    pauStack_198 = *(undefined1 (**) [16])(lStack_100 + 0x1c8);
    puStack_1b8._0_4_ = (uint)uStack_1b0;
    puStack_1b8._4_4_ = (undefined4)((ulonglong)uStack_1b0 >> 0x20);
    uStack_1b0 = uStack_1b0 + 1;
    uStack_1a0 = (ushort)uVar20;
    pauStack_118 = *(undefined1 (**) [16])(auStack_231._1_8_ + 0x18);
    bVar50 = false;
    bVar46 = 0;
    uStack_248 = 0;
    pauStack_120 = (undefined1 (*) [16])0x0;
    pauStack_130 = (undefined1 (*) [16])0x0;
    pauVar31 = (undefined1 (*) [16])(ulonglong)uVar20;
    while( true ) {
      pauVar28 = pauVar31;
      puVar24 = (undefined8 *)pdb_14119f580(&puStack_1b8);
      if (puVar24 == (undefined8 *)0x0) break;
      pauVar35 = (undefined1 (*) [16])*puVar24;
      bVar19 = pauVar28[0xc][0xb];
      pauVar25 = (undefined1 (*) [16])0x0;
      pauVar31 = pauVar28;
      if ((bVar19 & 8) == 0) {
        if ((pauVar28[0xc][10] & 0x10) == 0) {
          if ((bVar19 & 4) != 0) {
            bVar36 = 0;
LAB_140730633:
            pauVar25 = (undefined1 (*) [16])pdb_1409cb300(pauStack_1d0);
            bVar33 = bVar46;
            if (bVar36 != 0 || (char)pauVar25 != '\0') goto LAB_140730645;
          }
        }
        else {
          bVar36 = bVar19 >> 5 & 1;
          bVar46 = bVar46 | bVar36;
          if ((bVar19 & 4) != 0) goto LAB_140730633;
          bVar33 = 1;
          if ((bVar19 & 0x20) != 0) goto LAB_140730645;
        }
      }
      else {
        bVar33 = 1;
        if ((bVar19 & 4) != 0) {
          pauVar25 = (undefined1 (*) [16])pdb_1409cb300(pauStack_1d0);
        }
LAB_140730645:
        pauVar25 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)pauVar25 >> 8),1);
        pauStack_1e0 = pauVar35;
        pauStack_120 = pauVar25;
        bVar46 = bVar33;
      }
      if (bVar50) {
        bVar50 = true;
      }
      else if ((pauVar28[0xc][0xb] & 0x20) == 0) {
        bVar50 = false;
      }
      else {
        pauVar25 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)pauVar25 >> 8),1);
        bVar50 = true;
        pauStack_250 = pauVar35;
        pauStack_130 = pauVar25;
      }
      if (pauVar35 == pauStack_118 && ppauVar15 == (undefined1 (**) [16])0x2) {
        lStack_240 = CONCAT44((float)((ulonglong)*(undefined8 *)(pauVar28[8] + 8) >> 0x20) *
                              _UNK_142e36f64 +
                              (float)((ulonglong)*(undefined8 *)pauVar28[9] >> 0x20),
                              (float)*(undefined8 *)(pauVar28[8] + 8) * _DAT_142e36f60 +
                              (float)*(undefined8 *)pauVar28[9]);
        uStack_248 = CONCAT71((int7)((ulonglong)pauVar25 >> 8),1);
      }
    }
    if ((uStack_248 & 1) == 0) {
      *(undefined8 *)*pauStack_1d0 = 0;
      ppauStack_1c8 = (undefined1 (**) [16])0x0;
    }
    if (((ulonglong)pauStack_120 & 1) != 0) {
      puStack_1b8._0_4_ = (uint)lStack_210;
      puStack_1b8._4_4_ = (undefined4)((ulonglong)lStack_210 >> 0x20);
      pauVar28 = pauStack_1e0;
      uVar30 = pdb_141173140(lStack_100,pauStack_1e0,&puStack_1b8);
      if ((uVar30 & 1) != 0) {
        *(undefined8 *)(auStack_231._1_8_ + 0x10) = 2;
        *(undefined1 (**) [16])(auStack_231._1_8_ + 0x18) = pauVar28;
        ppauStack_1c8 = (undefined1 (**) [16])0x2;
        pauStack_118 = pauVar28;
      }
    }
    bVar19 = pdb_1409cb300(pauStack_1d0);
    if (((byte)pauStack_130 & bVar19) != 0) {
      *(undefined8 *)(auStack_231._1_8_ + 0x10) = 2;
      *(undefined1 (**) [16])(auStack_231._1_8_ + 0x18) = pauStack_250;
      ppauStack_1c8 = (undefined1 (**) [16])0x2;
      pauStack_118 = pauStack_250;
    }
    if (((byte)uStack_248 & ~bVar46 & 1) != 0) {
      bVar46 = (byte)uStack_1c0 | (byte)uStack_124;
      bVar19 = ((byte)uStack_1bc | (byte)uStack_13c | bVar46) & (int)ppauStack_1c8 == 2;
      pauVar28 = (undefined1 (*) [16])(ulonglong)CONCAT31((int3)(uStack_1bc >> 8),bVar19);
      if (bVar19 != 0) {
        uStack_208 = SUB84(pauStack_118,0);
        uStack_204 = (undefined4)((ulonglong)pauStack_118 >> 0x20);
        if (*(longlong *)(lStack_100 + 0x1c8) != 0) {
          uVar30 = pdb_1400af0a0(pauStack_108,&uStack_208);
          lVar21 = *(longlong *)(lStack_100 + 0x1b0);
          pauVar28 = *(undefined1 (**) [16])(lStack_100 + 0x1b8);
          bVar19 = (byte)(uVar30 >> 0x39);
          auVar53 = ZEXT216(CONCAT11(bVar19,bVar19));
          auVar53 = pshuflw(auVar53,auVar53,0);
          lVar39 = 0;
          while( true ) {
            uVar30 = uVar30 & (ulonglong)pauVar28;
            pcVar2 = (char *)(lVar21 + uVar30);
            auVar77[0] = -(*pcVar2 == auVar53[0]);
            auVar77[1] = -(pcVar2[1] == auVar53[1]);
            auVar77[2] = -(pcVar2[2] == auVar53[2]);
            auVar77[3] = -(pcVar2[3] == auVar53[3]);
            auVar77[4] = -(pcVar2[4] == auVar53[4]);
            auVar77[5] = -(pcVar2[5] == auVar53[5]);
            auVar77[6] = -(pcVar2[6] == auVar53[6]);
            auVar77[7] = -(pcVar2[7] == auVar53[7]);
            auVar77[8] = -(pcVar2[8] == auVar53[0]);
            auVar77[9] = -(pcVar2[9] == auVar53[1]);
            auVar77[10] = -(pcVar2[10] == auVar53[2]);
            auVar77[0xb] = -(pcVar2[0xb] == auVar53[3]);
            auVar77[0xc] = -(pcVar2[0xc] == auVar53[4]);
            auVar77[0xd] = -(pcVar2[0xd] == auVar53[5]);
            auVar77[0xe] = -(pcVar2[0xe] == auVar53[6]);
            auVar77[0xf] = -(pcVar2[0xf] == auVar53[7]);
            uVar43 = (ushort)(SUB161(auVar77 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar77[0xf] >> 7) << 0xf;
            uVar20 = (uint)uVar43;
            while (uVar43 != 0) {
              uVar40 = 0;
              for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar40 = uVar40 + 1;
              }
              lVar34 = (uVar40 + uVar30 & (ulonglong)pauVar28) * -0xd8;
              if (pauStack_118 == *(undefined1 (**) [16])(lVar21 + -0xd8 + lVar34)) {
                if (*(char *)(lVar21 + lVar34 + -5) < '\0') goto LAB_140730deb;
                if (*(longlong *)(lStack_100 + 0x1f8) == 0) goto LAB_140730cdc;
                pauStack_1e0 = (undefined1 (*) [16])(lStack_100 + 0x200);
                uStack_124 = CONCAT31((int3)(uStack_124 >> 8),(byte)uStack_124 | (byte)uStack_13c);
                goto LAB_1407308a0;
              }
              uVar43 = (ushort)(uVar20 - 1) & (ushort)uVar20;
              uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar43);
            }
            auVar72[0] = -(*pcVar2 == -1);
            auVar72[1] = -(pcVar2[1] == -1);
            auVar72[2] = -(pcVar2[2] == -1);
            auVar72[3] = -(pcVar2[3] == -1);
            auVar72[4] = -(pcVar2[4] == -1);
            auVar72[5] = -(pcVar2[5] == -1);
            auVar72[6] = -(pcVar2[6] == -1);
            auVar72[7] = -(pcVar2[7] == -1);
            auVar72[8] = -(pcVar2[8] == -1);
            auVar72[9] = -(pcVar2[9] == -1);
            auVar72[10] = -(pcVar2[10] == -1);
            auVar72[0xb] = -(pcVar2[0xb] == -1);
            auVar72[0xc] = -(pcVar2[0xc] == -1);
            auVar72[0xd] = -(pcVar2[0xd] == -1);
            auVar72[0xe] = -(pcVar2[0xe] == -1);
            auVar72[0xf] = -(pcVar2[0xf] == -1);
            if ((((((((((((((((SUB161(auVar72 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar72 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar72 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar72 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar72 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar72 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar72 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar72 >> 0x3f,0) & 1) != 0) || (SUB161(auVar72 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar72 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar72 >> 0x57,0) & 1) != 0) || (SUB161(auVar72 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar72 >> 0x67,0) & 1) != 0) || (SUB161(auVar72 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar72 >> 0x77,0) & 1) != 0) || auVar72[0xf] < '\0') break;
            uVar30 = uVar30 + lVar39 + 0x10;
            lVar39 = lVar39 + 0x10;
          }
        }
        pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa69e0);
        goto LAB_1407314da;
      }
    }
  }
LAB_140730deb:
  lVar21 = pdb_140c9ddb0(pauStack_1d0);
  if (lVar21 == 1) {
    puStack_1b8._0_4_ = (uint)pauVar28;
    puStack_1b8._4_4_ = (undefined4)((ulonglong)pauVar28 >> 0x20);
    lVar21 = pdb_1411a3e40(lStack_210,&puStack_1b8);
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142fa6850);
    }
    *(byte *)(lVar21 + 0xca) = *(byte *)(lVar21 + 0xca) | 0x40;
  }
  uStack_1b0 = *(undefined1 (**) [16])(lStack_100 + 0x1b0);
  uStack_1a8 = (undefined1 (*) [16])(*uStack_1b0 + *(longlong *)(lStack_100 + 0x1b8) + 1);
  auVar53 = *uStack_1b0;
  uStack_1a0 = ~((ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar53[0xf] >> 7) << 0xf);
  pauStack_198 = *(undefined1 (**) [16])(lStack_100 + 0x1c8);
  puStack_1b8._0_4_ = (uint)uStack_1b0;
  puStack_1b8._4_4_ = (undefined4)((ulonglong)uStack_1b0 >> 0x20);
  uStack_1b0 = uStack_1b0 + 1;
  pdb_1411b3bb0(&pauStack_228,&puStack_1b8);
  puVar24 = puStack_218;
  pauStack_108 = pauStack_220;
  puStack_1b8 = (undefined8 *)auStack_231;
  if (puStack_218 < (undefined8 *)0x2) {
    pauVar28 = pauStack_228;
    puVar7 = *uStack_1a8;
    if (puStack_218 == (undefined8 *)0x0) goto LAB_140730f96;
  }
  else if (puStack_218 < (undefined8 *)0x15) {
    uStack_f1 = 1;
    pdb_1411b81a0(pauStack_220,puStack_218,1,&puStack_1b8);
  }
  else {
    uStack_f1 = 1;
    pdb_1411b8a80(pauStack_220,puStack_218,&puStack_1b8);
  }
  lVar21 = lStack_1d8;
  fVar4 = _UNK_142e36f64;
  fVar51 = _DAT_142e36f60;
  pauStack_118 = pauStack_228;
  lVar39 = 0;
  puVar29 = puStack_1b8;
  puVar7 = *uStack_1a8;
  do {
    uStack_1a8._4_4_ = (float)((ulonglong)puVar7 >> 0x20);
    uStack_1a8._0_4_ = SUB84(puVar7,0);
    puStack_1b8._4_4_ = (undefined4)((ulonglong)puVar29 >> 0x20);
    lVar34 = *(longlong *)(*pauStack_108 + lVar39);
    if (*(longlong *)(lVar34 + 0x98) != 0) {
      fVar11 = *(float *)(lVar34 + 0x88);
      fVar12 = *(float *)(lVar34 + 0x8c);
      bVar50 = *(int *)(lVar34 + 0x70) == 1;
      if (bVar50) {
        puStack_1b8._4_4_ = (undefined4)*(undefined8 *)(lVar34 + 0x74);
        uStack_1b0._0_4_ = (float)((ulonglong)*(undefined8 *)(lVar34 + 0x74) >> 0x20);
        uStack_1b0._4_4_ = (float)*(undefined8 *)(lVar34 + 0x7c);
        uStack_1a8._0_4_ = (float)((ulonglong)*(undefined8 *)(lVar34 + 0x7c) >> 0x20);
      }
      puStack_1b8._0_4_ = (uint)bVar50;
      uVar26 = *(undefined8 *)(lVar34 + 0x90);
      pdb_140cb6950(lVar21,&puStack_1b8);
      uStack_1b0._0_4_ = (float)uVar26 + fVar11 * fVar51;
      uStack_1b0._4_4_ = (float)((ulonglong)uVar26 >> 0x20) + fVar12 * fVar4;
      fStack_190 = *(float *)(plStack_138 + 1);
      pauStack_198 = (undefined1 (*) [16])*plStack_138;
      puStack_1b8._0_4_ = (uint)lVar21;
      puStack_1b8._4_4_ = (undefined4)((ulonglong)lVar21 >> 0x20);
      uStack_1a0 = (ushort)*(undefined4 *)(lVar34 + 0x84);
      uStack_19e = (undefined2)((uint)*(undefined4 *)(lVar34 + 0x84) >> 0x10);
      uStack_18c = CONCAT31(uStack_18c._1_3_,*(undefined1 *)(lVar34 + 0xca));
      uStack_1a8._0_4_ = fVar11;
      uStack_1a8._4_4_ = fVar12;
      fStack_19c = fVar80;
      (**(code **)(*(longlong *)(lVar34 + 0xa0) + 0x68))
                (*(undefined8 *)(lVar34 + 0x98),&puStack_1b8);
      puVar7 = (undefined1 *)CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
      puVar29 = (undefined8 *)CONCAT44(puStack_1b8._4_4_,(uint)puStack_1b8);
    }
    puStack_1b8 = puVar29;
    lVar39 = lVar39 + 8;
    pauVar28 = pauStack_118;
    puVar29 = puStack_1b8;
  } while ((longlong)puVar24 << 3 != lVar39);
LAB_140730f96:
  uStack_1a8._4_4_ = (float)((ulonglong)puVar7 >> 0x20);
  if (pauVar28 != (undefined1 (*) [16])0x0) {
    uStack_1a8 = (undefined1 (*) [16])puVar7;
    pub_1406abac0((byte *)pauStack_108,(longlong)pauVar28 << 3,8);
  }
  uStack_208 = 0;
  uStack_1a8._0_4_ = (float)(undefined4)lStack_1f8;
  puStack_1b8._0_4_ = 0;
  puStack_1b8._4_4_ = uStack_204;
  uStack_1b0._0_4_ = (float)uStack_200;
  uStack_1b0._4_4_ = (float)uStack_1fc;
  uStack_f1 = 0;
  ppuVar32 = &puStack_1b8;
  pdb_140cb6950(lStack_1d8);
  puStack_1b8._0_4_ = (uint)_DAT_142fa6868;
  puStack_1b8._4_4_ = (undefined4)((ulonglong)_DAT_142fa6868 >> 0x20);
  uStack_1b0._0_4_ = (float)_UNK_142fa6870;
  uStack_1b0._4_4_ = (float)((ulonglong)_UNK_142fa6870 >> 0x20);
  uStack_f1 = 0;
  uVar52 = pdb_140de83f0(&puStack_1b8);
  uStack_f1 = 0;
  lVar21 = pdb_140c9ddb0(pauStack_1d0);
  if (lVar21 == 1) {
    puStack_1b8._0_4_ = (uint)ppuVar32;
    puStack_1b8._4_4_ = (undefined4)((ulonglong)ppuVar32 >> 0x20);
    uStack_f1 = 0;
    lVar21 = pdb_1411a3e40(lStack_210,&puStack_1b8);
    if (((lVar21 != 0) && ((*(byte *)(lVar21 + 0xcb) & 0x40) == 0)) &&
       (*(char *)(auStack_231._1_8_ + 0x30) != '\0')) {
      bVar50 = *(int *)(lVar21 + 0x70) == 1;
      if (bVar50) {
        puStack_1b8._4_4_ = (undefined4)*(undefined8 *)(lVar21 + 0x74);
        uStack_1b0._0_4_ = (float)((ulonglong)*(undefined8 *)(lVar21 + 0x74) >> 0x20);
        uStack_1b0._4_4_ = (float)*(undefined8 *)(lVar21 + 0x7c);
        uStack_1a8._0_4_ = (float)((ulonglong)*(undefined8 *)(lVar21 + 0x7c) >> 0x20);
      }
      puStack_1b8._0_4_ = (uint)bVar50;
      uStack_f1 = 0;
      pdb_140cb6950(lStack_1d8,&puStack_1b8);
      uVar26 = *(undefined8 *)(lVar21 + 0x88);
      uVar37 = *(undefined8 *)(lVar21 + 0x90);
      uStack_f1 = 0;
      pdb_140a1aa60(&puStack_1b8);
      uStack_f1 = 0;
      pdb_140cb8ed0(&uStack_168,&puStack_1b8,uVar52);
      uStack_f1 = 0;
      pdb_140cb8f80(&puStack_1b8,&uStack_168,_DAT_142e3788c);
      pdb_140cb9030(&uStack_168,&puStack_1b8);
      pdb_140cb8180(lStack_1d8,uVar37,uVar26);
      if (CONCAT44(uStack_168._4_4_,(int)uStack_168) != 0) {
        pub_1406abac0((byte *)ppauStack_160,CONCAT44(uStack_168._4_4_,(int)uStack_168) << 2,4);
      }
      uStack_f1 = 0;
      pdb_1404bf650(&puStack_1b8);
      uStack_f1 = 0;
      pdb_140cb6950(lStack_1d8,&uStack_208);
    }
  }
  lStack_1d8 = *(longlong *)(lStack_100 + 0x20);
  pauStack_108 = *(undefined1 (**) [16])(lStack_100 + 0x28);
  *(undefined8 *)(lStack_100 + 0x28) = 0;
  plStack_138 = (longlong *)0x0;
  while ((undefined1 (*) [16])plStack_138 != pauStack_108) {
    lVar21 = (longlong)plStack_138 * 0x70;
    plStack_138 = (longlong *)((longlong)plStack_138 + 1);
    uVar20 = *(uint *)(lStack_1d8 + 0x58 + lVar21);
    iVar44 = uVar20 - 0xc3;
    if (uVar20 < 0xc3) {
      iVar44 = 1;
    }
    if (iVar44 != 0) {
      pauVar28 = (undefined1 (*) [16])(lVar21 + lStack_1d8);
      if (iVar44 == 1) {
        pauStack_118 = pauVar28;
        pdb_1404bf870(pauVar28[1] + 8);
        if (((*pauStack_118)[0] != '\x1b') && ((*pauStack_118)[0] == '\x18')) {
          plVar47 = *(longlong **)(*pauStack_118 + 8);
          LOCK();
          *plVar47 = *plVar47 + -1;
          UNLOCK();
          if (*plVar47 == 0) {
            pdb_1406ed6a0(*pauStack_118 + 8);
          }
        }
      }
      else if (*(ulonglong *)*pauVar28 != 0) {
        pub_1406abac0(*(byte **)(*pauVar28 + 8),*(ulonglong *)*pauVar28,1);
      }
    }
  }
  uStack_1b0 = *(undefined1 (**) [16])(lStack_100 + 0x1b0);
  uStack_1a8 = (undefined1 (*) [16])(*uStack_1b0 + *(longlong *)(lStack_100 + 0x1b8) + 1);
  auVar53 = *uStack_1b0;
  uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar53[0xf] >> 7) << 0xf);
  uVar30 = (ulonglong)uVar20;
  pauStack_198 = *(undefined1 (**) [16])(lStack_100 + 0x1c8);
  puStack_1b8._0_4_ = (uint)uStack_1b0;
  puStack_1b8._4_4_ = (undefined4)((ulonglong)uStack_1b0 >> 0x20);
  uStack_1b0 = uStack_1b0 + 1;
  uStack_1a0 = (ushort)uVar20;
  while( true ) {
    uStack_f1 = 0;
    lVar21 = pdb_14119f580(&puStack_1b8);
    if ((lVar21 == 0) || (uVar30 == 0)) break;
    *(byte *)(uVar30 + 0xca) = *(byte *)(uVar30 + 0xca) & 0xcf;
  }
  if (bVar14) {
    uStack_168 = &uStack_260;
    puStack_1b8 = &uStack_168;
    pdb_1411b4ce0(&UNK_142fa6768,&puStack_1b8);
  }
  return;
LAB_14072fa76:
  uVar30 = uVar30 & *(ulonglong *)(lVar34 + 0x1b8);
  auVar5 = *(undefined1 (*) [16])(lVar21 + uVar30);
  auVar68[0] = -(auVar5[0] == auVar53[0]);
  auVar68[1] = -(auVar5[1] == auVar53[1]);
  auVar68[2] = -(auVar5[2] == auVar53[2]);
  auVar68[3] = -(auVar5[3] == auVar53[3]);
  auVar68[4] = -(auVar5[4] == auVar53[4]);
  auVar68[5] = -(auVar5[5] == auVar53[5]);
  auVar68[6] = -(auVar5[6] == auVar53[6]);
  auVar68[7] = -(auVar5[7] == auVar53[7]);
  auVar68[8] = -(auVar5[8] == auVar53[0]);
  auVar68[9] = -(auVar5[9] == auVar53[1]);
  auVar68[10] = -(auVar5[10] == auVar53[2]);
  auVar68[0xb] = -(auVar5[0xb] == auVar53[3]);
  auVar68[0xc] = -(auVar5[0xc] == auVar53[4]);
  auVar68[0xd] = -(auVar5[0xd] == auVar53[5]);
  auVar68[0xe] = -(auVar5[0xe] == auVar53[6]);
  auVar68[0xf] = -(auVar5[0xf] == auVar53[7]);
  uVar43 = (ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf;
  uVar20 = (uint)uVar43;
  while (uVar43 != 0) {
    uVar40 = 0;
    for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar40 = uVar40 + 1;
    }
    lVar45 = (uVar40 + uVar30 & *(ulonglong *)(lVar34 + 0x1b8)) * -0xd8;
    if (pauVar28 == *(undefined1 (**) [16])(lVar21 + -0xd8 + lVar45)) {
      lVar21 = lVar21 + lVar45;
      *(undefined4 *)(lVar21 + -0x48) = uVar52;
      *(int *)(lVar21 + -0x44) = auVar58._0_4_;
      if (pauStack_118 != pauVar31) goto LAB_14072f918;
      goto LAB_14072fafb;
    }
    uVar43 = (ushort)(uVar20 - 1) & (ushort)uVar20;
    uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar43);
  }
  auVar59[0] = -(auVar5[0] == -1);
  auVar59[1] = -(auVar5[1] == -1);
  auVar59[2] = -(auVar5[2] == -1);
  auVar59[3] = -(auVar5[3] == -1);
  auVar59[4] = -(auVar5[4] == -1);
  auVar59[5] = -(auVar5[5] == -1);
  auVar59[6] = -(auVar5[6] == -1);
  auVar59[7] = -(auVar5[7] == -1);
  auVar59[8] = -(auVar5[8] == -1);
  auVar59[9] = -(auVar5[9] == -1);
  auVar59[10] = -(auVar5[10] == -1);
  auVar59[0xb] = -(auVar5[0xb] == -1);
  auVar59[0xc] = -(auVar5[0xc] == -1);
  auVar59[0xd] = -(auVar5[0xd] == -1);
  auVar59[0xe] = -(auVar5[0xe] == -1);
  auVar59[0xf] = -(auVar5[0xf] == -1);
  if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar59 >> 0x17,0) & 1) != 0) || (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar59 >> 0x27,0) & 1) != 0) || (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar59 >> 0x37,0) & 1) != 0) || (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar59 >> 0x47,0) & 1) != 0) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') {
LAB_1407301f2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6968);
  }
  uVar30 = uVar30 + lVar27 + 0x10;
  lVar27 = lVar27 + 0x10;
  goto LAB_14072fa76;
code_r0x00014072ff48:
  uVar43 = (ushort)(uVar20 - 1) & (ushort)uVar20;
  uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar43);
  if (uVar43 == 0) goto LAB_14072ff55;
  goto LAB_14072ff29;
LAB_1407308a0:
  pauVar31 = pauStack_118;
  uVar30 = pdb_1400af0a0(pauStack_1e0,&uStack_208);
  pauVar28 = *(undefined1 (**) [16])(lStack_100 + 0x1e8);
  bVar19 = (byte)(uVar30 >> 0x39);
  auVar53 = ZEXT216(CONCAT11(bVar19,bVar19));
  auVar53 = pshuflw(auVar53,auVar53,0);
  lVar21 = 0;
  while( true ) {
    uVar30 = uVar30 & (ulonglong)pauVar28;
    auVar58 = *(undefined1 (*) [16])(*(longlong *)(lStack_100 + 0x1e0) + uVar30);
    auVar73[0] = -(auVar58[0] == auVar53[0]);
    auVar73[1] = -(auVar58[1] == auVar53[1]);
    auVar73[2] = -(auVar58[2] == auVar53[2]);
    auVar73[3] = -(auVar58[3] == auVar53[3]);
    auVar73[4] = -(auVar58[4] == auVar53[4]);
    auVar73[5] = -(auVar58[5] == auVar53[5]);
    auVar73[6] = -(auVar58[6] == auVar53[6]);
    auVar73[7] = -(auVar58[7] == auVar53[7]);
    auVar73[8] = -(auVar58[8] == auVar53[0]);
    auVar73[9] = -(auVar58[9] == auVar53[1]);
    auVar73[10] = -(auVar58[10] == auVar53[2]);
    auVar73[0xb] = -(auVar58[0xb] == auVar53[3]);
    auVar73[0xc] = -(auVar58[0xc] == auVar53[4]);
    auVar73[0xd] = -(auVar58[0xd] == auVar53[5]);
    auVar73[0xe] = -(auVar58[0xe] == auVar53[6]);
    auVar73[0xf] = -(auVar58[0xf] == auVar53[7]);
    uVar43 = (ushort)(SUB161(auVar73 >> 7,0) & 1) | (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe | (ushort)(auVar73[0xf] >> 7) << 0xf;
    uVar20 = (uint)uVar43;
    while (uVar43 != 0) {
      uVar40 = 0;
      for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar40 = uVar40 + 1;
      }
      lVar39 = *(longlong *)(lStack_100 + 0x1e0) + (uVar40 + uVar30 & (ulonglong)pauVar28) * -0x10;
      if (pauVar31 == *(undefined1 (**) [16])(lVar39 + -0x10)) {
        pauStack_228 = *(undefined1 (**) [16])(lVar39 + -8);
        pauStack_118 = pauStack_228;
        if (*(longlong *)(lStack_100 + 0x1c8) == 0) goto LAB_140730cdc;
        uVar30 = pdb_1400af0a0(pauStack_108,&pauStack_228);
        lVar21 = *(longlong *)(lStack_100 + 0x1b0);
        pauVar28 = *(undefined1 (**) [16])(lStack_100 + 0x1b8);
        bVar19 = (byte)(uVar30 >> 0x39);
        auVar53 = ZEXT216(CONCAT11(bVar19,bVar19));
        auVar53 = pshuflw(auVar53,auVar53,0);
        lVar39 = 0;
        goto LAB_1407309ac;
      }
      uVar43 = (ushort)(uVar20 - 1) & (ushort)uVar20;
      uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar43);
    }
    auVar63[0] = -(auVar58[0] == -1);
    auVar63[1] = -(auVar58[1] == -1);
    auVar63[2] = -(auVar58[2] == -1);
    auVar63[3] = -(auVar58[3] == -1);
    auVar63[4] = -(auVar58[4] == -1);
    auVar63[5] = -(auVar58[5] == -1);
    auVar63[6] = -(auVar58[6] == -1);
    auVar63[7] = -(auVar58[7] == -1);
    auVar63[8] = -(auVar58[8] == -1);
    auVar63[9] = -(auVar58[9] == -1);
    auVar63[10] = -(auVar58[10] == -1);
    auVar63[0xb] = -(auVar58[0xb] == -1);
    auVar63[0xc] = -(auVar58[0xc] == -1);
    auVar63[0xd] = -(auVar58[0xd] == -1);
    auVar63[0xe] = -(auVar58[0xe] == -1);
    auVar63[0xf] = -(auVar58[0xf] == -1);
    if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 || (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar63 >> 0x17,0) & 1) != 0) || (SUB161(auVar63 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar63 >> 0x27,0) & 1) != 0) || (SUB161(auVar63 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar63 >> 0x37,0) & 1) != 0) || (SUB161(auVar63 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar63 >> 0x47,0) & 1) != 0) || (SUB161(auVar63 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar63 >> 0x57,0) & 1) != 0) || (SUB161(auVar63 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar63 >> 0x67,0) & 1) != 0) || (SUB161(auVar63 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar63 >> 0x77,0) & 1) != 0) || auVar63[0xf] < '\0') break;
    uVar30 = uVar30 + lVar21 + 0x10;
    lVar21 = lVar21 + 0x10;
  }
  goto LAB_140730cdc;
LAB_1407309ac:
  uVar30 = uVar30 & (ulonglong)pauVar28;
  auVar58 = *(undefined1 (*) [16])(lVar21 + uVar30);
  auVar74[0] = -(auVar58[0] == auVar53[0]);
  auVar74[1] = -(auVar58[1] == auVar53[1]);
  auVar74[2] = -(auVar58[2] == auVar53[2]);
  auVar74[3] = -(auVar58[3] == auVar53[3]);
  auVar74[4] = -(auVar58[4] == auVar53[4]);
  auVar74[5] = -(auVar58[5] == auVar53[5]);
  auVar74[6] = -(auVar58[6] == auVar53[6]);
  auVar74[7] = -(auVar58[7] == auVar53[7]);
  auVar74[8] = -(auVar58[8] == auVar53[0]);
  auVar74[9] = -(auVar58[9] == auVar53[1]);
  auVar74[10] = -(auVar58[10] == auVar53[2]);
  auVar74[0xb] = -(auVar58[0xb] == auVar53[3]);
  auVar74[0xc] = -(auVar58[0xc] == auVar53[4]);
  auVar74[0xd] = -(auVar58[0xd] == auVar53[5]);
  auVar74[0xe] = -(auVar58[0xe] == auVar53[6]);
  auVar74[0xf] = -(auVar58[0xf] == auVar53[7]);
  uVar43 = (ushort)(SUB161(auVar74 >> 7,0) & 1) | (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe | (ushort)(auVar74[0xf] >> 7) << 0xf;
  uVar20 = (uint)uVar43;
  while( true ) {
    if (uVar43 == 0) goto LAB_1407309f9;
    uVar40 = 0;
    for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar40 = uVar40 + 1;
    }
    lVar34 = (uVar40 + uVar30 & (ulonglong)pauVar28) * -0xd8;
    if (pauStack_118 == *(undefined1 (**) [16])(lVar21 + -0xd8 + lVar34)) break;
    uVar43 = (ushort)(uVar20 - 1) & (ushort)uVar20;
    uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar43);
  }
  goto LAB_140730a18;
LAB_1407309f9:
  auVar64[0] = -(auVar58[0] == -1);
  auVar64[1] = -(auVar58[1] == -1);
  auVar64[2] = -(auVar58[2] == -1);
  auVar64[3] = -(auVar58[3] == -1);
  auVar64[4] = -(auVar58[4] == -1);
  auVar64[5] = -(auVar58[5] == -1);
  auVar64[6] = -(auVar58[6] == -1);
  auVar64[7] = -(auVar58[7] == -1);
  auVar64[8] = -(auVar58[8] == -1);
  auVar64[9] = -(auVar58[9] == -1);
  auVar64[10] = -(auVar58[10] == -1);
  auVar64[0xb] = -(auVar58[0xb] == -1);
  auVar64[0xc] = -(auVar58[0xc] == -1);
  auVar64[0xd] = -(auVar58[0xd] == -1);
  auVar64[0xe] = -(auVar58[0xe] == -1);
  auVar64[0xf] = -(auVar58[0xf] == -1);
  if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x37,0) & 1) != 0) || (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') goto LAB_140730cdc;
  uVar30 = uVar30 + lVar39 + 0x10;
  lVar39 = lVar39 + 0x10;
  goto LAB_1407309ac;
LAB_140730a18:
  lVar21 = lVar21 + lVar34;
  if ((bool)bVar46 != (*(char *)(lVar21 + -0x74) == '\0')) goto LAB_140730cbc;
  puVar7 = *(undefined1 **)(lVar21 + -0xc0);
  if (puVar7 == (undefined1 *)0x0) goto LAB_1407314cd;
  puVar24 = *(undefined8 **)(lVar21 + -200);
  lVar39 = -2;
  lVar21 = -1;
  pauVar35 = (undefined1 (*) [16])0x0;
  puVar29 = puVar24;
  while ((undefined1 (*) [16])*puVar29 != pauVar31) {
    puVar29 = puVar29 + 1;
    pauVar35 = (undefined1 (*) [16])(*pauVar35 + 1);
    lVar39 = lVar39 + 1;
    lVar21 = lVar21 + 1;
    if (puVar29 == puVar24 + (longlong)puVar7) {
LAB_1407314cd:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142fa69f8);
    }
  }
  if ((byte)uStack_124 == '\0') {
    pauVar31 = (undefined1 (*) [16])(puVar7 + -(longlong)(*pauVar35 + 1));
    pauVar28 = pauVar31;
    pdb_140225b90(&puStack_1b8,pauVar31,0,8,8);
    pauStack_130 = uStack_1b0;
    if ((uint)puStack_1b8 == 1) {
      pdb_142dc7e2a(uStack_1b0,uStack_1a8);
      goto LAB_1407314da;
    }
    pauStack_120 = uStack_1a8;
    if (puVar7 == *pauVar35 + 1) goto LAB_140730c95;
    lVar34 = (longlong)pauVar31 * 8;
    pub_142e32760(uStack_1a8,puVar24 + (longlong)(*pauVar35 + 1),lVar34);
  }
  else {
    pauVar28 = pauVar35;
    pdb_140225b90(&puStack_1b8,pauVar35,0,8,8);
    pauStack_130 = uStack_1b0;
    if ((uint)puStack_1b8 == 1) {
      pdb_142dc7e2a(uStack_1b0,uStack_1a8);
      goto LAB_1407314da;
    }
    pauStack_120 = uStack_1a8;
    if (pauVar35 == (undefined1 (*) [16])0x0) goto LAB_140730c95;
    lVar34 = (longlong)pauVar35 * 8;
    pub_142e32760(uStack_1a8,puVar24);
    uVar30 = (ulonglong)pauVar35 >> 1;
    if (uVar30 != 0) {
      if (pauVar35 < (undefined1 (*) [16])0x8) {
        uVar22 = 0;
      }
      else {
        uVar22 = uVar30 & 0x3ffffffffffffffc;
        uVar23 = 0;
        do {
          auVar53 = *(undefined1 (*) [16])(*pauStack_120 + uVar23 * 8);
          auVar58 = *(undefined1 (*) [16])(pauStack_120[1] + uVar23 * 8);
          auVar5 = *(undefined1 (*) [16])(pauStack_120[-1] + lVar39 * 8);
          auVar6 = *(undefined1 (*) [16])(*pauStack_120 + lVar39 * 8);
          auVar78._0_8_ = auVar6._8_8_;
          auVar78._8_4_ = auVar6._0_4_;
          auVar78._12_4_ = auVar6._4_4_;
          auVar75._0_8_ = auVar5._8_8_;
          auVar75._8_4_ = auVar5._0_4_;
          auVar75._12_4_ = auVar5._4_4_;
          *(undefined1 (*) [16])(*pauStack_120 + uVar23 * 8) = auVar78;
          *(undefined1 (*) [16])(pauStack_120[1] + uVar23 * 8) = auVar75;
          auVar54._0_8_ = auVar53._8_8_;
          auVar54._8_4_ = auVar53._0_4_;
          auVar54._12_4_ = auVar53._4_4_;
          auVar65._0_8_ = auVar58._8_8_;
          auVar65._8_4_ = auVar58._0_4_;
          auVar65._12_4_ = auVar58._4_4_;
          *(undefined1 (*) [16])(*pauStack_120 + lVar39 * 8) = auVar54;
          *(undefined1 (*) [16])(pauStack_120[-1] + lVar39 * 8) = auVar65;
          uVar23 = uVar23 + 4;
          lVar39 = lVar39 + -4;
        } while ((uVar30 & 0xfffffffffffffffc) != uVar23);
        if (uVar30 == uVar22) goto LAB_140730c1b;
      }
      lVar21 = lVar21 - uVar22;
      do {
        uVar26 = *(undefined8 *)(*pauStack_120 + uVar22 * 8);
        *(undefined8 *)(*pauStack_120 + uVar22 * 8) = *(undefined8 *)(*pauStack_120 + lVar21 * 8);
        *(undefined8 *)(*pauStack_120 + lVar21 * 8) = uVar26;
        uVar22 = uVar22 + 1;
        lVar21 = lVar21 + -1;
      } while (uVar30 != uVar22);
    }
  }
LAB_140730c1b:
  lVar21 = 0;
  do {
    pauVar28 = *(undefined1 (**) [16])(*pauStack_120 + lVar21);
    uStack_168._0_4_ = 0;
    uStack_168._4_4_ = 0;
    uStack_254 = 0x7f7fffff;
    puStack_1b8._0_4_ = (uint)lStack_210;
    puStack_1b8._4_4_ = (undefined4)((ulonglong)lStack_210 >> 0x20);
    uStack_1b0 = (undefined1 (*) [16])&lStack_240;
    uStack_1a8 = (undefined1 (*) [16])&uStack_1e8;
    uStack_1a0 = (ushort)&uStack_254;
    uStack_19e = (undefined2)((ulonglong)&uStack_254 >> 0x10);
    fStack_19c = (float)((ulonglong)&uStack_254 >> 0x20);
    pauStack_198 = (undefined1 (*) [16])&uStack_168;
    pdb_141172bd0(lStack_100,pauVar28,&puStack_1b8);
    if ((int)uStack_168 == 1) {
      *(undefined8 *)(auStack_231._1_8_ + 0x10) = 2;
      *(undefined1 (***) [16])(auStack_231._1_8_ + 0x18) = ppauStack_160;
      if (pauStack_130 != (undefined1 (*) [16])0x0) {
        pauVar28 = (undefined1 (*) [16])((longlong)pauStack_130 << 3);
        pub_1406abac0((byte *)pauStack_120,(ulonglong)pauVar28,8);
      }
      goto LAB_140730deb;
    }
    lVar21 = lVar21 + 8;
  } while (lVar34 != lVar21);
LAB_140730c95:
  if (pauStack_130 != (undefined1 (*) [16])0x0) {
    pauVar28 = (undefined1 (*) [16])((longlong)pauStack_130 << 3);
    pub_1406abac0((byte *)pauStack_120,(ulonglong)pauVar28,8);
  }
LAB_140730cbc:
  uStack_208 = SUB84(pauStack_118,0);
  uStack_204 = (undefined4)((ulonglong)pauStack_118 >> 0x20);
  if (*(longlong *)(lStack_100 + 0x1f8) == 0) {
LAB_140730cdc:
    uVar30 = pdb_140c9ddb0(pauStack_1d0);
    if ((uVar30 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142fa6a10);
    }
    puStack_1b8._0_4_ = (uint)pauVar28;
    puStack_1b8._4_4_ = (undefined4)((ulonglong)pauVar28 >> 0x20);
    if (*(longlong *)(lStack_100 + 0x1c8) != 0) {
      uVar30 = pdb_1400af0a0(pauStack_108,&puStack_1b8);
      lVar21 = *(longlong *)(lStack_100 + 0x1b0);
      pauVar31 = *(undefined1 (**) [16])(lStack_100 + 0x1b8);
      bVar46 = (byte)(uVar30 >> 0x39);
      auVar53 = ZEXT216(CONCAT11(bVar46,bVar46));
      auVar53 = pshuflw(auVar53,auVar53,0);
      lVar39 = 0;
      while( true ) {
        uVar30 = uVar30 & (ulonglong)pauVar31;
        pcVar2 = (char *)(lVar21 + uVar30);
        auVar79[0] = -(*pcVar2 == auVar53[0]);
        auVar79[1] = -(pcVar2[1] == auVar53[1]);
        auVar79[2] = -(pcVar2[2] == auVar53[2]);
        auVar79[3] = -(pcVar2[3] == auVar53[3]);
        auVar79[4] = -(pcVar2[4] == auVar53[4]);
        auVar79[5] = -(pcVar2[5] == auVar53[5]);
        auVar79[6] = -(pcVar2[6] == auVar53[6]);
        auVar79[7] = -(pcVar2[7] == auVar53[7]);
        auVar79[8] = -(pcVar2[8] == auVar53[0]);
        auVar79[9] = -(pcVar2[9] == auVar53[1]);
        auVar79[10] = -(pcVar2[10] == auVar53[2]);
        auVar79[0xb] = -(pcVar2[0xb] == auVar53[3]);
        auVar79[0xc] = -(pcVar2[0xc] == auVar53[4]);
        auVar79[0xd] = -(pcVar2[0xd] == auVar53[5]);
        auVar79[0xe] = -(pcVar2[0xe] == auVar53[6]);
        auVar79[0xf] = -(pcVar2[0xf] == auVar53[7]);
        uVar43 = (ushort)(SUB161(auVar79 >> 7,0) & 1) | (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe | (ushort)(auVar79[0xf] >> 7) << 0xf
        ;
        uVar20 = (uint)uVar43;
        while (uVar43 != 0) {
          uVar40 = 0;
          for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar40 = uVar40 + 1;
          }
          lVar34 = (uVar40 + uVar30 & (ulonglong)pauVar31) * -0xd8;
          if (pauVar28 == *(undefined1 (**) [16])(lVar21 + -0xd8 + lVar34)) {
            pauVar28 = pauVar31;
            if ((*(byte *)(lVar21 + lVar34 + -5) & 0x10) != 0) {
              *(undefined8 *)*pauStack_1d0 = 0;
            }
            goto LAB_140730deb;
          }
          uVar43 = (ushort)(uVar20 - 1) & (ushort)uVar20;
          uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar43);
        }
        auVar76[0] = -(*pcVar2 == -1);
        auVar76[1] = -(pcVar2[1] == -1);
        auVar76[2] = -(pcVar2[2] == -1);
        auVar76[3] = -(pcVar2[3] == -1);
        auVar76[4] = -(pcVar2[4] == -1);
        auVar76[5] = -(pcVar2[5] == -1);
        auVar76[6] = -(pcVar2[6] == -1);
        auVar76[7] = -(pcVar2[7] == -1);
        auVar76[8] = -(pcVar2[8] == -1);
        auVar76[9] = -(pcVar2[9] == -1);
        auVar76[10] = -(pcVar2[10] == -1);
        auVar76[0xb] = -(pcVar2[0xb] == -1);
        auVar76[0xc] = -(pcVar2[0xc] == -1);
        auVar76[0xd] = -(pcVar2[0xd] == -1);
        auVar76[0xe] = -(pcVar2[0xe] == -1);
        auVar76[0xf] = -(pcVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar76 >> 7,0) & 1) != 0 || (SUB161(auVar76 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar76 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar76 >> 0x1f,0) & 1) != 0) || (SUB161(auVar76 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar76 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar76 >> 0x37,0) & 1) != 0) || (SUB161(auVar76 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar76 >> 0x47,0) & 1) != 0) || (SUB161(auVar76 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar76 >> 0x57,0) & 1) != 0) || (SUB161(auVar76 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar76 >> 0x67,0) & 1) != 0) || (SUB161(auVar76 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar76 >> 0x77,0) & 1) != 0) || auVar76[0xf] < '\0') break;
        uVar30 = uVar30 + lVar39 + 0x10;
        lVar39 = lVar39 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6a28);
  }
  goto LAB_1407308a0;
}

