// VA 0x14072d1d0, PDB extent 7446 bytes
// toolbar::mei::core::mei_pre_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::core::mei_pre_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 7446 */

void pdb_14072d1d0(longlong *param_1,undefined8 *param_2,longlong *param_3,byte *param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10)

{
  byte *pbVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 (*pauVar16) [16];
  undefined8 uVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong lVar24;
  byte bVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  undefined8 ***pppuVar30;
  undefined8 *puVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  undefined *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  undefined *puVar39;
  ulonglong uVar40;
  undefined8 *puVar41;
  undefined *puVar42;
  byte *pbVar43;
  longlong lVar44;
  bool bVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  float fVar50;
  float fVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined4 unaff_XMM8_Dc;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auStack_4f8 [384];
  undefined8 **ppuStack_378;
  undefined1 auStack_370 [16];
  ulonglong uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  longlong *plStack_338;
  ulonglong uStack_330;
  ulonglong uStack_328;
  ulonglong *puStack_2c8;
  ulonglong *puStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_258;
  undefined8 ***pppuStack_250;
  undefined8 *puStack_248;
  longlong lStack_240;
  longlong lStack_238;
  undefined4 *puStack_230;
  longlong lStack_228;
  undefined8 uStack_220;
  undefined4 *puStack_218;
  byte *pbStack_210;
  undefined8 **ppuStack_208;
  byte *pbStack_200;
  ulonglong uStack_1f8;
  undefined8 **ppuStack_1e8;
  byte *pbStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *plStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  uint uStack_190;
  undefined8 **ppuStack_18c;
  byte *pbStack_184;
  undefined4 uStack_17c;
  uint uStack_12c;
  longlong lStack_128;
  longlong lStack_120;
  byte *pbStack_118;
  ulonglong uStack_110;
  byte *pbStack_108;
  undefined4 uStack_fc;
  longlong *plStack_f8;
  ulonglong *puStack_f0;
  ulonglong uStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined8 *puStack_d0;
  byte *pbStack_c8;
  longlong *plStack_c0;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  pbStack_c8 = param_4;
  cVar18 = pdb_140e94b40();
  plStack_f8 = param_3;
  puStack_d0 = param_2;
  if (cVar18 == '\0') {
    lVar21 = 0;
LAB_14072d3e7:
    puVar8 = (undefined4 *)param_1[2];
    *puVar8 = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar44 = *param_1;
    *(undefined4 *)(lVar44 + 0x280) = *(undefined4 *)(*param_5 + 0x58);
    plStack_c0 = (longlong *)(lVar44 + 0x1e0);
    lStack_228 = lVar21;
    if (*(longlong *)(lVar44 + 0x1f8) != 0) {
      uVar27 = *(ulonglong *)(lVar44 + 0x1e8);
      if (uVar27 == 0) {
        uVar22 = 0;
      }
      else {
        pub_142e32780(*(undefined8 *)(lVar44 + 0x1e0),CONCAT71((int7)((ulonglong)puVar8 >> 8),0xff),
                      uVar27 + 0x11);
        uVar22 = (uVar27 + 1 & 0xfffffffffffffff8) - (uVar27 + 1 >> 3);
        if (uVar27 < 8) {
          uVar22 = uVar27;
        }
      }
      *(undefined8 *)(lVar44 + 0x1f8) = 0;
      *(ulonglong *)(lVar44 + 0x1f0) = uVar22;
    }
    puStack_f0 = (ulonglong *)(lVar44 + 0x278);
    lStack_238 = lVar44 + 0x1b0;
    pauVar32 = *(undefined1 (**) [16])(lVar44 + 0x1b0);
    auVar52 = *pauVar32;
    pauVar33 = pauVar32 + 1;
    uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar52[0xf] >> 7) << 0xf);
    lVar28 = *(longlong *)(lVar44 + 0x1c8);
    lStack_d8 = lVar44;
    while (lVar28 != 0) {
      if ((short)uVar19 == 0) {
        do {
          auVar52 = *pauVar33;
          pauVar32 = pauVar32 + -0xd8;
          pauVar33 = pauVar33 + 1;
          uVar19 = (ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar52[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar19 == 0);
      }
      uVar46 = 0;
      for (uVar47 = uVar19; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
        uVar46 = uVar46 + 1;
      }
      uVar19 = uVar19 - 1 & uVar19;
      lVar24 = (ulonglong)uVar46 * -0xd8;
      lVar28 = lVar28 + -1;
      lVar44 = *(longlong *)((longlong)pauVar32 + lVar24 + -0xc0);
      if (lVar44 != 0) {
        uVar9 = *(undefined8 *)((longlong)pauVar32 + lVar24 + -0xd8);
        puVar31 = *(undefined8 **)((longlong)pauVar32 + lVar24 + -200);
        puVar41 = puVar31 + lVar44;
        lStack_e0 = lVar28;
        do {
          lStack_128 = lVar21;
          pdb_1411a35b0(plStack_c0,*puVar31,uVar9);
          puVar31 = puVar31 + 1;
          lVar28 = lStack_e0;
        } while (puVar31 != puVar41);
      }
    }
    fVar60 = 0.0;
    fVar61 = 0.0;
    fVar62 = 0.0;
    fVar63 = 0.0;
    if ((undefined8 *)*param_8 != (undefined8 *)0x0) {
      uVar9 = *(undefined8 *)*param_8;
      fVar62 = (float)uVar9;
      fVar63 = (float)((ulonglong)uVar9 >> 0x20);
    }
    puVar10 = (ulonglong *)*puStack_d0;
    lVar44 = puStack_d0[1];
    uVar27 = *puVar10;
    uVar40 = 0;
    uVar22 = uVar27 - *(ulonglong *)(lVar44 + 0x18);
    if (uVar27 < *(ulonglong *)(lVar44 + 0x18)) {
      uVar22 = uVar40;
    }
    uVar19 = *(uint *)(*(longlong *)pbStack_c8 + 4);
    uVar26 = uVar27 - *(ulonglong *)(lVar44 + 0x38);
    if (uVar27 < *(ulonglong *)(lVar44 + 0x38)) {
      uVar26 = uVar40;
    }
    lVar28 = uVar22 * 0x20 + *(longlong *)(lVar44 + 8);
    uVar27 = *(ulonglong *)(lVar44 + 0x10);
    lVar24 = uVar26 * 0x20 + *(longlong *)(lVar44 + 0x28);
    uVar35 = uVar27 - uVar22;
    if (uVar27 < uVar22) {
      uVar35 = uVar40;
    }
    uVar11 = *(ulonglong *)(lVar44 + 0x30);
    if (uVar27 < uVar22) {
      lVar28 = 8;
      uVar22 = uVar27;
    }
    uVar36 = uVar11 - uVar26;
    if (uVar11 < uVar26) {
      lVar24 = 8;
      uVar36 = uVar40;
    }
    lVar44 = *(longlong *)(lVar44 + 0x40);
    if (uVar11 < uVar26) {
      uVar26 = uVar11;
    }
    *puVar10 = (lVar44 - uVar36) - uVar35;
    uVar27 = ((uVar26 + lVar44 + uVar22) - uVar11) - uVar27;
    lVar44 = lVar24;
    lVar37 = lVar28;
    do {
      uVar27 = uVar27 + 1;
      if ((lVar37 == 0) || (lVar37 == uVar35 * 0x20 + lVar28)) {
        if ((lVar44 == 0) || (lVar44 == uVar36 * 0x20 + lVar24)) goto LAB_14072d666;
        lVar38 = 0;
        lVar29 = lVar44 + 0x20;
        lVar37 = lVar44;
      }
      else {
        lVar38 = lVar37 + 0x20;
        lVar29 = lVar44;
      }
      *puVar10 = uVar27;
      fVar60 = fVar60 + (float)*(undefined8 *)(lVar37 + 0x10);
      fVar61 = fVar61 + (float)((ulonglong)*(undefined8 *)(lVar37 + 0x10) >> 0x20);
      lVar44 = lVar29;
      lVar37 = lVar38;
    } while( true );
  }
  puVar39 = &UNK_142fa671b;
  lVar44 = 0x22;
  uVar27 = 0x22;
  lVar21 = pdb_14072a8a0(&UNK_142fa671b);
  if (lVar21 == 1) {
    if (0x22 < uVar27) {
LAB_14072e555:
      pdb_142dc8070(&UNK_142fa671b,0x22,0);
LAB_14072e575:
      pdb_142dc8070(&UNK_142fa671b,0x22);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    puVar39 = &UNK_142fa671b;
    uVar22 = pdb_14072a8a0(&UNK_142fa671b);
    if ((uVar22 & 1) != 0) {
      if (0x22 < uVar27 + 2) goto LAB_14072e575;
      lVar44 = 0x20 - uVar27;
      puVar39 = &UNK_142fa671d + uVar27;
    }
  }
  puVar34 = &UNK_142fa6b9e;
  puVar42 = &UNK_142fa6b78;
  do {
    bVar25 = puVar34[-1];
    uVar19 = (uint)(char)bVar25;
    if ((char)bVar25 < '\0') {
      bVar5 = puVar34[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar34[-3];
        if ((char)bVar6 < -0x40) {
          pbVar1 = puVar34 + -4;
          puVar34 = puVar34 + -4;
          uVar19 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar34 = puVar34 + -3;
          uVar19 = bVar6 & 0xf;
        }
        uVar19 = bVar5 & 0x3f | uVar19 << 6;
      }
      else {
        puVar34 = puVar34 + -2;
        uVar19 = bVar5 & 0x1f;
      }
      uVar19 = (uint)(bVar25 & 0x3f) | uVar19 << 6;
      if (uVar19 != 0x5c) goto LAB_14072d344;
LAB_14072d35d:
      puVar42 = puVar34 + -0x142fa6b77;
      if (puVar42 < (undefined *)0x27) {
        lVar21 = 0x26 - (longlong)puVar42;
        puVar42 = puVar34 + 1;
        goto LAB_14072d37f;
      }
      pdb_142dc8070(&UNK_142fa6b78,0x26,puVar42,0x26,&UNK_142fa67c8);
      goto LAB_14072e555;
    }
    puVar34 = puVar34 + -1;
    if (uVar19 == 0x5c) goto LAB_14072d35d;
LAB_14072d344:
    if (uVar19 == 0x2f) goto LAB_14072d35d;
  } while (puVar34 != &UNK_142fa6b78);
  lVar21 = 0x26;
LAB_14072d37f:
  plVar23 = (longlong *)pdb_140e97000();
  if (((char)plVar23[0xd] == '\x01') ||
     (plVar23 = (longlong *)pdb_142dcf3a0(plVar23,0), plVar23 != (longlong *)0x0)) {
    if (*plVar23 != 0) goto LAB_14072e4e2;
    *plVar23 = -1;
    plStack_c0 = plVar23;
    uStack_220 = pdb_140e94f10(plVar23 + 1,puVar39,lVar44,puVar42,lVar21,1,0);
    *plStack_c0 = *plStack_c0 + 1;
    lVar21 = 1;
    goto LAB_14072d3e7;
  }
  goto LAB_14072e516;
code_r0x00014072d72d:
  uVar22 = uVar40;
  if (uVar40 == uVar27) goto LAB_14072d747;
  goto LAB_14072d710;
LAB_14072d666:
  puStack_230 = (undefined4 *)*param_6;
  lStack_128 = lVar21;
  pdb_140938bc0(&lStack_120);
  uVar27 = uStack_110;
  pbVar1 = pbStack_118;
  fVar64 = (float)uVar19 / _DAT_142e4bfe4;
  auVar51._4_4_ = fVar63;
  auVar51._0_4_ = fVar62;
  auVar51._8_8_ = 0;
  auVar52._4_4_ = fVar64;
  auVar52._0_4_ = fVar64;
  auVar52._8_4_ = unaff_XMM8_Dc;
  auVar52._12_4_ = unaff_XMM8_Dc;
  auVar52 = divps(auVar51,auVar52);
  *puStack_f0 = auVar52._0_8_;
  plStack_c0 = (longlong *)*plStack_f8;
  if ((*(int *)((longlong)plStack_c0 + 0x10) == 2) && (uStack_110 != 0)) {
    uVar9 = *(undefined8 *)((longlong)plStack_c0 + 0x18);
    lVar21 = -uStack_110;
    puVar41 = (undefined8 *)(uStack_110 * 0xc);
    uVar22 = 0;
    pbVar43 = pbStack_118;
LAB_14072d710:
    pbVar43 = pbVar43 + 0xc;
    puVar41 = (undefined8 *)((longlong)puVar41 + -0xc);
    lVar21 = lVar21 + 1;
    cVar18 = pdb_140732500(lStack_d8,uVar9,pbVar1 + uVar22 * 0xc);
    lVar44 = lStack_d8;
    uVar40 = uVar22 + 1;
    if (cVar18 == '\0') goto code_r0x00014072d72d;
    uStack_e8 = uVar22;
    if (uVar40 < uVar27) {
      pbStack_108 = pbVar1;
      do {
        lStack_e0 = lVar21;
        puStack_d0 = puVar41;
        pbStack_c8 = pbVar43;
        cVar18 = pdb_140732500(lVar44,uVar9,pbVar43);
        if (cVar18 == '\0') {
          *(undefined4 *)(pbVar1 + uStack_e8 * 0xc + 8) = *(undefined4 *)(pbStack_c8 + 8);
          *(longlong *)(pbVar1 + uStack_e8 * 0xc) = *(longlong *)pbStack_c8;
          uStack_e8 = uStack_e8 + 1;
        }
        lVar21 = lStack_e0 + 1;
        pbVar43 = pbStack_c8 + 0xc;
        puVar41 = (undefined8 *)((longlong)puStack_d0 + -0xc);
      } while (lVar21 != 0);
    }
    uStack_110 = uStack_e8;
  }
LAB_14072d747:
  puStack_2c8 = (ulonglong *)
                CONCAT71(puStack_2c8._1_7_,*(undefined1 *)((longlong)plStack_c0 + 0x30));
  ppuStack_378 = (undefined8 **)((ulonglong)ppuStack_378 & 0xffffffffffffff00);
  pppuVar30 = &ppuStack_378;
  pdb_1411b2b80(&lStack_120,pppuVar30,&puStack_2c8);
  iVar20 = (int)pppuVar30;
  if ((char)ppuStack_378 == '\x01') {
    ppuStack_1e8 = (undefined8 **)pdb_140f3c9d0();
    *(undefined4 *)plStack_f8[2] = *(undefined4 *)((longlong)plStack_f8 + 0x1c);
    *(undefined8 ***)((longlong)plStack_c0 + 0x20) = ppuStack_1e8;
    *(int *)((longlong)plStack_c0 + 0x28) = iVar20;
LAB_14072d7c5:
    pbStack_1e0 = (byte *)CONCAT44(pbStack_1e0._4_4_,iVar20);
    uVar27 = pdb_140f3cb70(&ppuStack_1e8);
    bVar45 = uVar27 < 0x78;
  }
  else {
    iVar20 = *(int *)((longlong)plStack_c0 + 0x28);
    if (iVar20 != 1000000000) {
      ppuStack_1e8 = *(undefined8 ***)((longlong)plStack_c0 + 0x20);
      goto LAB_14072d7c5;
    }
    bVar45 = false;
  }
  *(undefined4 *)plStack_f8[2] = *(undefined4 *)((longlong)plStack_f8 + 0x1c);
  *(bool *)((longlong)plStack_c0 + 0x30) = bVar45;
  pdb_140939c60(auStack_4f8,pbStack_118,uStack_110);
  lVar21 = lStack_d8;
  pbVar1 = (byte *)(lStack_d8 + 0x30);
  pub_142e32760(pbVar1,auStack_4f8,0x180);
  pauVar32 = *(undefined1 (**) [16])(lVar21 + 0x1b0);
  lVar21 = *(longlong *)(lVar21 + 0x1c8);
  auVar52 = *pauVar32;
  pauVar33 = pauVar32 + 1;
  uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar52[0xf] >> 7) << 0xf);
  while (lVar21 != 0) {
    if ((short)uVar19 == 0) {
      do {
        auVar52 = *pauVar33;
        pauVar32 = pauVar32 + -0xd8;
        pauVar33 = pauVar33 + 1;
        uVar19 = (ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar52[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar19 == 0);
    }
    uVar46 = 0;
    for (uVar47 = uVar19; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
      uVar46 = uVar46 + 1;
    }
    uVar19 = uVar19 - 1 & uVar19;
    lVar28 = (ulonglong)uVar46 * -0xd8;
    lVar21 = lVar21 + -1;
    lVar44 = *(longlong *)((longlong)pauVar32 + lVar28 + -0x38);
    if (lVar44 != 0) {
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(int)puStack_f0[1]);
      uStack_1d8 = *puStack_f0;
      ppuStack_1e8 = (undefined8 **)((longlong)pauVar32 + lVar28 + -6);
      pbStack_1e0 = pbVar1;
      (**(code **)(*(longlong *)((longlong)pauVar32 + lVar28 + -0x30) + 0x58))(lVar44,&ppuStack_1e8)
      ;
    }
  }
  lStack_e0 = *param_7;
  if (lStack_e0 == 0) {
    uStack_12c = 0;
  }
  else {
    pdb_1408ffdd0(&ppuStack_1e8);
    uStack_12c = (uint)((uStack_1b8._1_1_ & 0x10) >> 4 & (int)ppuStack_1e8 != 2);
  }
  *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
  *(char *)*param_10 = (char)uStack_12c;
  pauVar32 = *(undefined1 (**) [16])(lStack_d8 + 0x1b0);
  auVar52 = *pauVar32;
  pauVar33 = pauVar32 + 1;
  uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar52[0xf] >> 7) << 0xf);
  lStack_240 = lStack_d8 + 0x18;
  pbStack_108 = (byte *)CONCAT44(pbStack_108._4_4_,-(uint)(fVar61 == 0.0 && fVar60 == 0.0));
  uStack_fc = *(undefined4 *)((longlong)param_9 + 0x1c);
  pbStack_c8 = (byte *)*param_9;
  puStack_218 = (undefined4 *)param_9[2];
  pbStack_210 = pbStack_c8 + 0x20;
  plVar23 = *(longlong **)(lStack_d8 + 0x1c8);
  while (plVar23 != (longlong *)0x0) {
    if ((short)uVar19 == 0) {
      do {
        auVar52 = *pauVar33;
        pauVar32 = pauVar32 + -0xd8;
        pauVar33 = pauVar33 + 1;
        uVar19 = (ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar52[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar19 == 0);
    }
    uVar46 = 0;
    for (uVar47 = uVar19; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
      uVar46 = uVar46 + 1;
    }
    lVar21 = (ulonglong)uVar46 * -0xd8;
    puVar41 = *(undefined8 **)((longlong)pauVar32 + lVar21 + -0xd8);
    uVar7 = *(undefined1 *)((longlong)pauVar32 + lVar21 + -6);
    bVar25 = *(byte *)((longlong)pauVar32 + lVar21 + -5);
    puStack_248 = puVar41;
    if ((bVar25 & 2) == 0) {
      cVar18 = '\x01';
      if ((bVar25 & 1) == 0) {
        if (*(longlong *)((longlong)pauVar32 + lVar21 + -0x38) == 0) goto LAB_14072da90;
        cVar18 = (**(code **)(*(longlong *)((longlong)pauVar32 + lVar21 + -0x30) + 0x40))();
      }
    }
    else {
LAB_14072da90:
      cVar18 = '\0';
    }
    uVar9 = *(undefined8 *)((longlong)pauVar32 + lVar21 + -0x40);
    fVar50 = (float)uVar9 * fVar64;
    fVar53 = (float)((ulonglong)uVar9 >> 0x20) * fVar64;
    auVar66._4_4_ = fVar53;
    auVar66._0_4_ = fVar50;
    uVar9 = *(undefined8 *)((longlong)pauVar32 + lVar21 + -0x48);
    fVar54 = (float)uVar9 * fVar64 + fVar50;
    fVar55 = (float)((ulonglong)uVar9 >> 0x20) * fVar64 + fVar53;
    auVar66._12_4_ = fVar55;
    auVar66._8_4_ = fVar54;
    if (*(int *)((longlong)pauVar32 + lVar21 + -0x60) == 1) {
      fVar56 = *(float *)((longlong)pauVar32 + lVar21 + -0x5c) * fVar64;
      fVar57 = *(float *)((longlong)pauVar32 + lVar21 + -0x58) * fVar64;
      fVar58 = *(float *)((longlong)pauVar32 + lVar21 + -0x54) * fVar64;
      fVar59 = *(float *)((longlong)pauVar32 + lVar21 + -0x50) * fVar64;
      uVar46 = -(uint)(fVar56 < fVar50);
      uVar47 = -(uint)(fVar57 < fVar53);
      uVar48 = -(uint)(fVar54 < fVar58);
      uVar49 = -(uint)(fVar55 < fVar59);
      auVar65._0_4_ = (uint)fVar50 & uVar46;
      auVar65._4_4_ = (uint)fVar53 & uVar47;
      auVar65._8_4_ = (uint)fVar54 & uVar48;
      auVar65._12_4_ = (uint)fVar55 & uVar49;
      auVar13._4_4_ = ~uVar47 & (uint)fVar57;
      auVar13._0_4_ = ~uVar46 & (uint)fVar56;
      auVar13._8_4_ = ~uVar48 & (uint)fVar58;
      auVar13._12_4_ = ~uVar49 & (uint)fVar59;
      auVar66 = auVar65 | auVar13;
    }
    fVar53 = auVar66._4_4_;
    fVar54 = auVar66._8_4_;
    fVar55 = auVar66._12_4_;
    fVar50 = auVar66._0_4_;
    if (((fVar50 <= fVar62 && fVar62 <= fVar54) && (fVar63 <= fVar55 && fVar53 <= fVar63)) ||
       (((*(int *)((longlong)plStack_c0 + 0x10) == 2 &&
         (*(undefined8 **)((longlong)plStack_c0 + 0x18) == puVar41)) &&
        (*(char *)((longlong)plStack_c0 + 0x30) != '\0')))) {
      bVar25 = *(byte *)((longlong)pauVar32 + lVar21 + -6) | 1;
    }
    else {
      bVar25 = *(byte *)((longlong)pauVar32 + lVar21 + -6) & 0xfe;
    }
    uVar19 = uVar19 - 1 & uVar19;
    plVar23 = (longlong *)((longlong)plVar23 + -1);
    *(byte *)((longlong)pauVar32 + lVar21 + -6) = bVar25;
    if (cVar18 != '\0') {
      if (fVar55 <= fVar53 || fVar54 <= fVar50) {
        *(byte *)((longlong)pauVar32 + lVar21 + -6) = bVar25 & 0xf1;
      }
      else {
        uStack_e8 = (longlong)pauVar32 + lVar21 + -0x38;
        plStack_f8 = plVar23;
        puStack_d0 = puVar41;
        if (lStack_e0 == 0) goto LAB_14072e523;
        ppuStack_378 = &puStack_248;
        auStack_370._0_8_ = pdb_140f71410;
        pdb_140f60760(&ppuStack_1e8,&UNK_142fa6b9e);
        puStack_f0 = (ulonglong *)CONCAT71(puStack_f0._1_7_,uVar7);
        ppuStack_208 = ppuStack_1e8;
        pbStack_200 = pbStack_1e0;
        uStack_1f8 = uStack_1d8;
        uVar9 = CONCAT44(*(undefined4 *)((longlong)pauVar32 + lVar21 + -0x10),ppuStack_378._0_4_);
        ppuStack_378 = (undefined8 **)CONCAT71((uint7)((ulonglong)uVar9 >> 8) ^ 0x80000000000000,3);
        puStack_2c8 = (ulonglong *)((ulonglong)puStack_2c8 & 0xffffffffffffff00);
        uStack_b1 = 1;
        auStack_370 = auVar66;
        pdb_140c9dcb0(&ppuStack_1e8,&ppuStack_378,&puStack_2c8);
        uStack_b1 = 1;
        pdb_140c9dc40(&ppuStack_378,&ppuStack_1e8);
        uStack_b1 = 1;
        pdb_140c9dbe0(&ppuStack_1e8,&ppuStack_378,0);
        uStack_b1 = 1;
        pdb_140c9dc70(&ppuStack_378,&ppuStack_1e8,1);
        uStack_b1 = 1;
        pdb_140c9dc10(&ppuStack_1e8,&ppuStack_378);
        uStack_b3 = 1;
        pdb_140c9dee0(&puStack_2c8);
        uStack_b3 = 0;
        pdb_140c9dd20(&ppuStack_378,&ppuStack_1e8,&puStack_2c8);
        uStack_b1 = 0;
        pppuVar30 = &ppuStack_208;
        uStack_258 = pdb_1409008d0(lStack_e0,pppuVar30,&ppuStack_378);
        pppuStack_250 = pppuVar30;
        uStack_b2 = pdb_1408ffab0(&uStack_258);
        puVar10 = puStack_f0;
        cVar18 = pdb_140901040(&uStack_b2);
        *(byte *)((longlong)pauVar32 + lVar21 + -6) =
             cVar18 << 2 | *(byte *)((longlong)pauVar32 + lVar21 + -6) & 0xfb;
        cVar18 = pdb_140901020(&uStack_b2);
        *(byte *)((longlong)pauVar32 + lVar21 + -6) =
             cVar18 * '\x02' | *(byte *)((longlong)pauVar32 + lVar21 + -6) & 0xfd;
        cVar18 = pdb_140901030(&uStack_b2);
        *(byte *)((longlong)pauVar32 + lVar21 + -6) =
             cVar18 << 3 | *(byte *)((longlong)pauVar32 + lVar21 + -6) & 0xf7;
        cVar18 = pdb_1408ffa90(&uStack_258);
        if ((cVar18 != '\0') ||
           (((*(int *)((longlong)plStack_c0 + 0x10) == 2 &&
             (*(undefined8 **)((longlong)plStack_c0 + 0x18) == puStack_d0)) &&
            (cVar18 = pdb_140938b60(*(undefined4 *)(lStack_d8 + 0xd8)), cVar18 != '\0')))) {
          pbVar1 = (byte *)((longlong)pauVar32 + lVar21 + -6);
          *pbVar1 = *pbVar1 | 0x10;
        }
        if (*(longlong *)((longlong)pauVar32 + lVar21 + -0x38) != 0) {
          if ((*(byte *)((longlong)pauVar32 + lVar21 + -6) & 0x40) != 0) {
            puStack_2c8 = *(ulonglong **)(lStack_d8 + 0x20);
            lStack_2b0 = *(longlong *)(lStack_d8 + 0x28);
            *(undefined8 *)(lStack_d8 + 0x28) = 0;
            puStack_2c0 = puStack_2c8 + lStack_2b0 * 0xe;
            lStack_2b8 = lStack_240;
            uStack_2a8 = 0;
            while (puStack_2c8 != puStack_2c0) {
              puVar2 = puStack_2c8 + 0xe;
              ppuStack_378 = (undefined8 **)*puStack_2c8;
              pauVar16 = (undefined1 (*) [16])(puStack_2c8 + 1);
              puVar3 = puStack_2c8 + 2;
              auStack_370 = *pauVar16;
              uStack_360 = puStack_2c8[3];
              uStack_358 = puStack_2c8[4];
              uStack_350 = puStack_2c8[5];
              uStack_348 = puStack_2c8[6];
              uStack_340 = puStack_2c8[7];
              plStack_338 = (longlong *)puStack_2c8[8];
              uStack_330 = puStack_2c8[9];
              uStack_328 = puStack_2c8[10];
              puVar4 = puStack_2c8 + 0xb;
              puVar8 = (undefined4 *)((longlong)puStack_2c8 + 0x6c);
              uStack_1f8 = CONCAT44(uStack_1f8._4_4_,*puVar8);
              ppuStack_208 = *(undefined8 ***)((longlong)puStack_2c8 + 0x5c);
              pbStack_200 = *(byte **)((longlong)puStack_2c8 + 100);
              puStack_2c8 = puVar2;
              if ((uint)*puVar4 == 0xc6) break;
              uStack_358._4_4_ = (undefined4)(uStack_358 >> 0x20);
              uStack_350._4_4_ = (undefined4)(uStack_350 >> 0x20);
              uStack_348._4_4_ = (undefined4)(uStack_348 >> 0x20);
              uStack_340._4_4_ = (undefined4)(uStack_340 >> 0x20);
              uStack_1b8 = (undefined4)uStack_348;
              uStack_1b4 = uStack_348._4_4_;
              uStack_1b0 = (undefined4)uStack_340;
              uStack_1ac = uStack_340._4_4_;
              uStack_1c8 = (undefined4)uStack_358;
              uStack_1c4 = uStack_358._4_4_;
              uStack_1c0 = (undefined4)uStack_350;
              uStack_1bc = uStack_350._4_4_;
              ppuStack_1e8 = ppuStack_378;
              pbStack_1e0 = *(byte **)*pauVar16;
              uStack_1d8 = *puVar3;
              uStack_1d0 = uStack_360;
              plStack_1a8 = plStack_338;
              uStack_1a0 = uStack_330;
              uStack_198 = uStack_328;
              uStack_190 = (uint)*puVar4;
              ppuStack_18c = ppuStack_208;
              pbStack_184 = pbStack_200;
              uStack_17c = *puVar8;
              (**(code **)(*(longlong *)((longlong)pauVar32 + lVar21 + -0x30) + 0x48))
                        (*(undefined8 *)((longlong)pauVar32 + lVar21 + -0x38));
              iVar20 = uStack_190 - 0xc3;
              if (uStack_190 < 0xc3) {
                iVar20 = 1;
              }
              if (iVar20 != 0) {
                if (iVar20 == 1) {
                  if ((((int)uStack_1d0 == 0) ||
                      (((int)uStack_1d0 == 1 && ((byte)uStack_1c8 < 0x1b)))) &&
                     ((byte)uStack_1c8 == 0x18)) {
                    plVar23 = (longlong *)CONCAT44(uStack_1bc,uStack_1c0);
                    LOCK();
                    *plVar23 = *plVar23 + -1;
                    UNLOCK();
                    if (*plVar23 == 0) {
                      pdb_1406ed6a0(&uStack_1c0);
                    }
                  }
                  if (((char)uStack_1b0 != '\x1b') && ((char)uStack_1b0 == '\x18')) {
                    LOCK();
                    *plStack_1a8 = *plStack_1a8 + -1;
                    UNLOCK();
                    if (*plStack_1a8 == 0) {
                      pdb_1406ed6a0(&plStack_1a8);
                    }
                  }
                  if (((char)ppuStack_1e8 != '\x1b') && ((char)ppuStack_1e8 == '\x18')) {
                    LOCK();
                    *(longlong *)pbStack_1e0 = *(longlong *)pbStack_1e0 + -1;
                    UNLOCK();
                    if (*(longlong *)pbStack_1e0 == 0) {
                      pdb_1406ed6a0(&pbStack_1e0);
                    }
                  }
                }
                else if (ppuStack_1e8 != (undefined8 **)0x0) {
                  pub_1406abac0(pbStack_1e0,(ulonglong)ppuStack_1e8,1);
                }
              }
            }
            pdb_141181ed0(&puStack_2c8);
          }
          if (((fVar50 <= fVar62 && fVar62 <= fVar54) && (fVar63 <= fVar55 && fVar53 <= fVar63)) &&
              ((ulonglong)pbStack_108 & 1) == 0) {
            ppuStack_1e8 = (undefined8 **)CONCAT44(fVar61,fVar60);
            uStack_190 = 0xc3;
            (**(code **)(*(longlong *)((longlong)pauVar32 + lVar21 + -0x30) + 0x48))
                      (*(undefined8 *)((longlong)pauVar32 + lVar21 + -0x38));
            iVar20 = uStack_190 - 0xc3;
            if (uStack_190 < 0xc3) {
              iVar20 = 1;
            }
            if (iVar20 != 0) {
              if (iVar20 == 1) {
                if ((((int)uStack_1d0 == 0) || (((int)uStack_1d0 == 1 && ((byte)uStack_1c8 < 0x1b)))
                    ) && ((byte)uStack_1c8 == 0x18)) {
                  plVar23 = (longlong *)CONCAT44(uStack_1bc,uStack_1c0);
                  LOCK();
                  *plVar23 = *plVar23 + -1;
                  UNLOCK();
                  if (*plVar23 == 0) {
                    pdb_1406ed6a0(&uStack_1c0);
                  }
                }
                if (((char)uStack_1b0 != '\x1b') && ((char)uStack_1b0 == '\x18')) {
                  LOCK();
                  *plStack_1a8 = *plStack_1a8 + -1;
                  UNLOCK();
                  if (*plStack_1a8 == 0) {
                    pdb_1406ed6a0(&plStack_1a8);
                  }
                }
                if (((char)ppuStack_1e8 != '\x1b') && ((char)ppuStack_1e8 == '\x18')) {
                  LOCK();
                  *(longlong *)pbStack_1e0 = *(longlong *)pbStack_1e0 + -1;
                  UNLOCK();
                  if (*(longlong *)pbStack_1e0 == 0) {
                    pdb_1406ed6a0(&pbStack_1e0);
                  }
                }
              }
              else if (ppuStack_1e8 != (undefined8 **)0x0) {
                pub_1406abac0(pbStack_1e0,(ulonglong)ppuStack_1e8,1);
              }
            }
          }
        }
        bVar25 = *(byte *)((longlong)pauVar32 + lVar21 + -6);
        if (((((ulonglong)puVar10 & 1) == 0 & bVar25) != 0) &&
           (cVar18 = *(char *)((longlong)pauVar32 + lVar21 + -8), cVar18 != '\x0f')) {
          puStack_f0 = (ulonglong *)CONCAT71(puStack_f0._1_7_,cVar18);
          *puStack_218 = uStack_fc;
          lVar44 = *(longlong *)(pbStack_c8 + 0x30);
          puStack_d0 = *(undefined8 **)(pbStack_c8 + 0x40);
          if (lVar44 == *(longlong *)(pbStack_c8 + 0x20)) {
            pdb_142d7e980(pbStack_210);
          }
          lVar28 = *(longlong *)(pbStack_c8 + 0x28);
          *(undefined8 **)(lVar28 + lVar44 * 0x10) = puStack_d0;
          *(undefined1 *)(lVar28 + 8 + lVar44 * 0x10) = puStack_f0._0_1_;
          *(longlong *)(pbStack_c8 + 0x30) = lVar44 + 1;
          *(longlong *)(pbStack_c8 + 0x40) = *(longlong *)(pbStack_c8 + 0x40) + 1;
        }
        plVar23 = plStack_f8;
        if ((((ulonglong)puVar10 & 0x30) == 0 && (bVar25 & 0x30) != 0) &&
           (cVar18 = *(char *)((longlong)pauVar32 + lVar21 + -7), cVar18 != '\x0f')) {
          *puStack_218 = uStack_fc;
          lVar21 = *(longlong *)(pbStack_c8 + 0x30);
          lVar44 = *(longlong *)(pbStack_c8 + 0x40);
          if (lVar21 == *(longlong *)(pbStack_c8 + 0x20)) {
            pdb_142d7e980(pbStack_210);
          }
          lVar28 = *(longlong *)(pbStack_c8 + 0x28);
          *(longlong *)(lVar28 + lVar21 * 0x10) = lVar44;
          *(char *)(lVar28 + 8 + lVar21 * 0x10) = cVar18;
          *(longlong *)(pbStack_c8 + 0x30) = lVar21 + 1;
          *(longlong *)(pbStack_c8 + 0x40) = *(longlong *)(pbStack_c8 + 0x40) + 1;
          plVar23 = plStack_f8;
        }
      }
    }
  }
  if ((char)uStack_12c != '\0') {
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    *puStack_230 = 4;
    puStack_230[2] = 4;
  }
  *(undefined8 *)(lStack_d8 + 0x10) = 0;
  uVar14 = *(undefined4 *)(lStack_d8 + 0x210);
  uVar15 = *(undefined4 *)(lStack_d8 + 0x218);
  *(undefined8 *)(lStack_d8 + 0x210) = *(undefined8 *)(lStack_d8 + 0x1b0);
  *(undefined8 *)(lStack_d8 + 0x218) = *(undefined8 *)(lStack_d8 + 0x1b8);
  *(undefined4 *)(lStack_d8 + 0x1b0) = uVar14;
  *(undefined4 *)(lStack_d8 + 0x1b4) = *(undefined4 *)(lStack_d8 + 0x214);
  *(undefined4 *)(lStack_d8 + 0x1b8) = uVar15;
  *(undefined4 *)(lStack_d8 + 0x1bc) = *(undefined4 *)(lStack_d8 + 0x21c);
  uVar9 = *(undefined8 *)(lStack_d8 + 0x220);
  uVar17 = *(undefined8 *)(lStack_d8 + 0x228);
  *(undefined8 *)(lStack_d8 + 0x220) = *(undefined8 *)(lStack_d8 + 0x1c0);
  *(undefined8 *)(lStack_d8 + 0x228) = *(undefined8 *)(lStack_d8 + 0x1c8);
  *(undefined8 *)(lStack_d8 + 0x1c0) = uVar9;
  *(undefined8 *)(lStack_d8 + 0x1c8) = uVar17;
  uVar9 = *(undefined8 *)(lStack_d8 + 0x230);
  uVar17 = *(undefined8 *)(lStack_d8 + 0x238);
  *(undefined4 *)(lStack_d8 + 0x230) = *(undefined4 *)(lStack_d8 + 0x1d0);
  *(undefined4 *)(lStack_d8 + 0x234) = *(undefined4 *)(lStack_d8 + 0x1d4);
  *(undefined4 *)(lStack_d8 + 0x238) = *(undefined4 *)(lStack_d8 + 0x1d8);
  *(undefined4 *)(lStack_d8 + 0x23c) = *(undefined4 *)(lStack_d8 + 0x1dc);
  *(undefined8 *)(lStack_d8 + 0x1d0) = uVar9;
  *(undefined8 *)(lStack_d8 + 0x1d8) = uVar17;
  pdb_1411ae530(lStack_238);
  if (lStack_120 != 0) {
    pub_1406abac0(pbStack_118,lStack_120 * 0xc,4);
  }
  if (lStack_228 == 0) {
    return;
  }
  plVar23 = (longlong *)pdb_140e97000();
  if ((char)plVar23[0xd] != '\x01') goto LAB_14072e4ee;
  do {
    if (*plVar23 == 0) {
      *plVar23 = -1;
      plStack_c0 = plVar23;
      pdb_140e95370(plVar23 + 1,uStack_220);
      *plStack_c0 = *plStack_c0 + 1;
      return;
    }
LAB_14072e4e2:
    plVar23 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_14072e4ee:
    plVar23 = (longlong *)pdb_142dcf3a0(plVar23,0);
  } while (plVar23 != (longlong *)0x0);
LAB_14072e516:
  pdb_142dc7890(&UNK_1432a7ee8);
LAB_14072e523:
  pdb_142d8a750(uStack_e8);
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}

