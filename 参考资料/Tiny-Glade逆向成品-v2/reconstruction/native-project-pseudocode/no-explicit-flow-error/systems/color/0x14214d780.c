// VA 0x14214d780, PDB extent 13996 bytes
// system_color::ui_stone_foundation_offset::ui_stone_foundation_offset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_stone_foundation_offset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_color::ui_stone_foundation_offset::ui_stone_foundation_offset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_stone_foundation_offset.rs
   Extent: 13996 */

void pdb_14214d780(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9,undefined8 *param_10,longlong *param_11,undefined8 *param_12,
                  char *param_13,ulonglong *param_14,undefined8 *param_15)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined1 auVar4 [16];
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  code *pcVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  ulonglong *puVar26;
  undefined8 uVar27;
  byte *pbVar28;
  ulonglong uVar29;
  int iVar30;
  ulonglong *puVar31;
  undefined7 uVar33;
  undefined1 *puVar32;
  uint uVar34;
  undefined1 (*pauVar35) [16];
  longlong lVar36;
  ulonglong uVar37;
  ulonglong *puVar38;
  byte bVar39;
  uint *puVar40;
  bool bVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  uint uVar45;
  uint uVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  ulonglong *puStack_538;
  float fStack_530;
  undefined4 uStack_52c;
  undefined1 auStack_528 [12];
  longlong lStack_510;
  undefined1 (*pauStack_508) [16];
  ushort uStack_4f8;
  longlong lStack_4f0;
  ulonglong uStack_4e8;
  undefined4 uStack_4e0;
  ulonglong *puStack_4d8;
  longlong lStack_4d0;
  undefined8 uStack_4c8;
  longlong lStack_4c0;
  undefined8 *puStack_4b8;
  longlong lStack_4b0;
  undefined8 uStack_4a8;
  undefined4 *puStack_4a0;
  undefined4 *puStack_498;
  longlong lStack_490;
  undefined8 uStack_488;
  longlong lStack_480;
  float fStack_478;
  longlong lStack_470;
  ulonglong *puStack_468;
  ulonglong *puStack_460;
  undefined1 uStack_458;
  undefined1 uStack_457;
  undefined2 uStack_456;
  float fStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  ulonglong *puStack_448;
  ulonglong *puStack_440;
  undefined8 *puStack_438;
  undefined4 *puStack_3f8;
  ulonglong *puStack_3f0;
  longlong lStack_3e8;
  ulonglong *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [16];
  float *pfStack_3b8;
  undefined1 auStack_328 [8];
  float fStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_20c;
  undefined4 uStack_208;
  float fStack_204;
  ulonglong uStack_200;
  ulonglong *puStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  ulonglong *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulonglong *puStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  ulonglong *puStack_1a0;
  undefined8 uStack_198;
  ulonglong *puStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  undefined8 *puStack_178;
  ulonglong *puStack_170;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  longlong lStack_150;
  ulonglong *puStack_148;
  byte *pbStack_140;
  undefined4 uStack_134;
  undefined4 uStack_130;
  byte bStack_129;
  byte *pbStack_128;
  ulonglong *puStack_120;
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  ulonglong *puStack_110;
  undefined1 uStack_101;
  ulonglong *puStack_100;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pcVar5 = (char *)*param_1;
  if (*pcVar5 != '\0') {
    if (*pcVar5 == '\a') {
      pbStack_140 = (byte *)*param_2;
      lVar21 = param_2[1];
      puVar40 = *(uint **)(pbStack_140 + 0xf8);
      lVar22 = *(longlong *)(pbStack_140 + 0x100);
      bVar39 = pbStack_140[0x108];
      lVar36 = 0;
      if (bVar39 == 0) {
        do {
          if (lVar22 * 4 - lVar36 == 0) goto LAB_14214d973;
          puVar2 = (uint *)((longlong)puVar40 + lVar36);
          lVar36 = lVar36 + 4;
        } while (*(longlong *)(*(longlong *)(lVar21 + 0x100) + 0x58 + (ulonglong)*puVar2 * 0xa0) ==
                 0);
      }
      else {
        do {
          if (lVar22 * 4 - lVar36 == 0) goto LAB_14214d973;
          puVar2 = (uint *)((longlong)puVar40 + lVar36);
          lVar36 = lVar36 + 4;
        } while (*(longlong *)(*(longlong *)(lVar21 + 0x1a0) + 0x10 + (ulonglong)*puVar2 * 0x48) ==
                 0);
      }
    }
LAB_14214d8ef:
    *(undefined4 *)param_14 = 0;
    param_13[0] = '\0';
    param_13[1] = '\0';
    param_13[2] = '\0';
    param_13[3] = '\0';
    param_13[4] = '\0';
    param_13[5] = '\0';
    param_13[6] = '\0';
    param_13[7] = '\0';
    param_13[0x10] = '\0';
    param_13[0x11] = '\0';
    param_13[0x12] = '\0';
    param_13[0x13] = '\0';
    param_13[0x18] = '\0';
    param_13[0x19] = '\0';
    param_13[0x1a] = '\0';
    param_13[0x1b] = '\0';
    param_13[0x20] = '\0';
    param_13[0x21] = '\0';
    param_13[0x22] = '\0';
    param_13[0x23] = '\0';
    return;
  }
  if (1 < *(int *)(pcVar5 + 8) - 1U) goto LAB_14214d8ef;
  puStack_1a0 = *(ulonglong **)(pcVar5 + 0x10);
  pbStack_140 = (byte *)*param_2;
  lVar21 = param_2[1];
  puVar40 = *(uint **)(pbStack_140 + 0xf8);
  lVar22 = *(longlong *)(pbStack_140 + 0x100);
  bVar39 = pbStack_140[0x108];
  uStack_134 = (undefined4)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  goto LAB_14214d983;
LAB_14214d973:
  *(undefined4 *)param_14 = 0;
  uStack_134 = 0;
LAB_14214d983:
  puVar2 = puVar40 + lVar22;
  uStack_158 = *param_3;
  lVar22 = 0;
  uStack_4c8 = param_4;
  if (bVar39 == 0) {
    lVar20 = 8;
    lVar36 = 0;
    uVar34 = 0;
    do {
      do {
        if (uVar34 == (uint)lVar22) {
          do {
            if (puVar40 == puVar2) goto LAB_14214dc87;
            uVar34 = *puVar40;
            puVar40 = puVar40 + 1;
            lVar22 = *(longlong *)(*(longlong *)(lVar21 + 0x100) + 0x58 + (ulonglong)uVar34 * 0xa0);
          } while (lVar22 == 0);
          lVar20 = *(longlong *)(lVar21 + 0x100) + (ulonglong)uVar34 * 0xa0;
          uVar19 = (ulonglong)*(uint *)(lVar20 + 0x94);
          if (*(ulonglong *)(pbStack_140 + 0x110) <
              *(ulonglong *)(*(longlong *)(lVar21 + 0x1a0) + 0x40 + uVar19 * 0x48)) {
            lVar36 = *(longlong *)(lVar21 + 0x1a0) + uVar19 * 0x48;
            uVar19 = *(ulonglong *)
                      (*(longlong *)(lVar36 + 0x38) + *(ulonglong *)(pbStack_140 + 0x110) * 8);
            if (uVar19 == 0) goto LAB_14214dbf9;
            lVar36 = *(longlong *)(*(longlong *)(lVar36 + 0x18) + 0x10 + ~uVar19 * 0x30);
          }
          else {
LAB_14214dbf9:
            lVar36 = 0;
          }
          lVar20 = *(longlong *)(lVar20 + 0x50);
          uVar34 = 0;
        }
        lVar23 = (ulonglong)~*(uint *)(lVar20 + 8 + (ulonglong)uVar34 * 0x10) * 0xd8;
        uVar34 = uVar34 + 1;
        uVar45 = *(uint *)(lVar36 + 0x38 + lVar23);
        iVar30 = uVar45 - 2;
        if (uVar45 < 2) {
          iVar30 = 0xe;
        }
      } while ((iVar30 != 9) && (iVar30 != 0));
      puStack_1d8 = *(ulonglong **)(lVar23 + lVar36 + 0x40);
      lVar23 = pdb_140b54f80(uStack_158,puStack_1d8,&UNK_1435afaf0);
    } while ((lVar23 == 0) || (pdb_140930110(auStack_328,lVar23), auStack_328._0_4_ == 2));
  }
  else {
    lVar36 = 0;
    uVar34 = 0;
    do {
      do {
        if (uVar34 == (uint)lVar22) {
          do {
            if (puVar40 == puVar2) goto LAB_14214dc87;
            uVar34 = *puVar40;
            puVar40 = puVar40 + 1;
            lVar22 = *(longlong *)(*(longlong *)(lVar21 + 0x1a0) + 0x10 + (ulonglong)uVar34 * 0x48);
          } while (lVar22 == 0);
          lVar36 = *(longlong *)(lVar21 + 0x1a0) + (ulonglong)uVar34 * 0x48;
          if ((*(ulonglong *)(pbStack_140 + 0x110) < *(ulonglong *)(lVar36 + 0x40)) &&
             (uVar19 = *(ulonglong *)
                        (*(longlong *)(lVar36 + 0x38) + *(ulonglong *)(pbStack_140 + 0x110) * 8),
             uVar19 != 0)) {
            lVar36 = *(longlong *)(*(longlong *)(lVar36 + 0x18) + 0x10 + ~uVar19 * 0x30);
          }
          else {
            lVar36 = 0;
          }
          uVar34 = 0;
        }
        uVar19 = (ulonglong)uVar34;
        uVar34 = uVar34 + 1;
        uVar45 = *(uint *)(lVar36 + 0x38 + uVar19 * 0xd8);
        iVar30 = uVar45 - 2;
        if (uVar45 < 2) {
          iVar30 = 0xe;
        }
      } while ((iVar30 != 9) && (iVar30 != 0));
      puStack_1d8 = *(ulonglong **)(uVar19 * 0xd8 + lVar36 + 0x40);
      lVar20 = pdb_140b54f80(uStack_158,puStack_1d8,&UNK_1435afaf0);
    } while ((lVar20 == 0) || (pdb_140930110(auStack_328,lVar20), auStack_328._0_4_ == 2));
  }
  uStack_1a8 = *param_8;
  uStack_458 = SUB81(puStack_1d8,0);
  uStack_457 = (undefined1)((ulonglong)puStack_1d8 >> 8);
  uStack_456 = (undefined2)((ulonglong)puStack_1d8 >> 0x10);
  fStack_454 = (float)((ulonglong)puStack_1d8 >> 0x20);
  uStack_3d8 = (ulonglong *)&uStack_458;
  uStack_3d0 = pdb_140c04ef0;
  pdb_140f60760(auStack_328,&UNK_143462da0,&uStack_3d8);
  pbStack_140 = (byte *)CONCAT44(uStack_31c,fStack_320);
  uStack_3d0 = (code *)CONCAT44(uStack_318._4_4_,(undefined4)uStack_318);
  lVar21 = pdb_140bbbcb0(&uStack_3d8);
  uVar19 = CONCAT44(auStack_328._4_4_,auStack_328._0_4_);
  if (uVar19 != 0) {
    pub_1406abac0(pbStack_140,uVar19,1);
  }
  lVar22 = pdb_14043b7e0(uStack_1a8);
  lVar36 = uVar19 * 0x38;
  do {
    uVar33 = (undefined7)(uVar19 >> 8);
    uStack_1ac = (undefined4)CONCAT71(uVar33,1);
    bVar41 = lVar36 == 0;
    uVar19 = CONCAT71(uVar33,bVar41);
    if (bVar41) break;
    lVar36 = lVar36 + -0x38;
    plVar1 = (longlong *)(lVar22 + 0x10);
    lVar22 = lVar22 + 0x38;
  } while (*plVar1 != lVar21);
LAB_14214dca5:
  uVar27 = uStack_158;
  pdb_140b55220(&lStack_510,uStack_158);
  fVar14 = _DAT_14301cb98;
  fVar13 = _DAT_142f60fec;
  fVar12 = _DAT_142e3b1d8;
  fVar11 = _DAT_142e37ae4;
  uVar10 = _DAT_142e36f50;
  fVar9 = _DAT_142e36f28;
  bStack_129 = bVar41 | (byte)uStack_134;
  lStack_4c0 = *param_11;
  uStack_1d0 = *param_10;
  uStack_1e4 = *(undefined4 *)((longlong)param_15 + 0x1c);
  uStack_488 = *param_15;
  puStack_498 = (undefined4 *)param_15[2];
  uStack_4a8 = *param_7;
  puStack_3f0 = (ulonglong *)*param_12;
  lStack_4b0 = param_12[1];
  uStack_1e8 = *(undefined4 *)((longlong)param_9 + 0x1c);
  lStack_3e8 = *param_9;
  puStack_4a0 = (undefined4 *)param_9[2];
  uStack_1e0 = *param_5;
  pbStack_140 = (byte *)*param_6;
  uVar34 = (uint)uStack_4f8;
  puStack_4b8 = (undefined8 *)((longlong)param_14 + 4);
  puStack_3f8 = (undefined4 *)(lStack_4c0 + 0x2c);
  lStack_490 = lStack_3e8 + 0x20;
  pauVar35 = pauStack_508;
  lVar21 = lStack_510;
  puVar26 = puStack_1a0;
  uVar47 = uStack_134;
  do {
    while( true ) {
      do {
        if (lStack_4f0 == 0) {
          return;
        }
        if ((short)uVar34 == 0) {
          do {
            auVar4 = *pauVar35;
            lVar21 = lVar21 + -0x2b00;
            pauVar35 = pauVar35 + 1;
            uVar34 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
          } while (uVar34 == 0);
        }
        uVar45 = 0;
        for (uVar46 = uVar34; (uVar46 & 1) == 0; uVar46 = uVar46 >> 1 | 0x80000000) {
          uVar45 = uVar45 + 1;
        }
        uVar34 = uVar34 - 1 & uVar34;
        lStack_4f0 = lStack_4f0 + -1;
        puVar31 = *(ulonglong **)(lVar21 + -0x2b0 + (ulonglong)uVar45 * -0x2b0);
      } while (((byte)uVar47 & puVar26 != puVar31) != 0);
      auStack_328 = (undefined1  [8])&uStack_3d8;
      fStack_320 = 6.009636;
      uStack_31c = 1;
      puStack_4d8 = puVar31;
      lStack_4d0 = lStack_4f0;
      uStack_3d8 = puVar31;
      pdb_140f60760(&uStack_200,&UNK_143462da0,auStack_328);
      bVar39 = puStack_1d8 == puVar31 & (byte)uStack_1ac;
      puStack_148 = puVar31;
      if (bStack_129 == 0 && bVar39 == 0) break;
LAB_14214df0e:
      uStack_f3 = 1;
      pbStack_128 = (byte *)pdb_140b54f80(uVar27,puStack_148,&UNK_143462cd8);
      if (pbStack_128 == (byte *)0x0) {
        uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143462cf0);
      }
      if (pbStack_128[0x2a1] != 0) goto LAB_14214df68;
      uStack_f3 = 1;
      pdb_140930110(auStack_328);
      if (auStack_328._0_4_ == 2) goto LAB_14214df68;
      puStack_538 = (ulonglong *)auStack_328;
      auVar4._4_4_ = (undefined4)uStack_318;
      auVar4._0_4_ = uStack_31c;
      auVar4._8_4_ = uStack_318._4_4_;
      auVar4._12_4_ = uStack_310;
      auStack_528 = auVar4._4_12_;
      fStack_530 = fStack_320;
      uStack_52c = uStack_31c;
      uStack_f3 = 1;
      lVar22 = pdb_140b54cf0(uVar27,puStack_148,uStack_4c8);
      if (lVar22 == 0) {
        uVar18 = 0;
      }
      else {
        uStack_f3 = 1;
        uVar18 = pdb_140b77b50(lVar22);
      }
      uStack_f3 = 1;
      fVar43 = (float)pdb_14092ff30(pbStack_128,uVar18);
      uStack_f3 = 1;
      fVar44 = (float)pdb_14092fab0(pbStack_128);
      fVar49 = fVar11;
      if (bVar39 == 0) {
        fVar48 = ((fVar43 + fVar14) - fVar44) + fVar13;
        fVar44 = fVar12;
        if (fVar12 <= fVar48) {
          fVar44 = fVar48;
        }
        if (fVar44 <= fVar11) {
          fVar49 = fVar44;
        }
      }
      uStack_198 = CONCAT44(uStack_198._4_4_,fVar43 + fVar14);
      uStack_f3 = 1;
      pdb_140a85120(&uStack_1c8,&puStack_538);
      uStack_f3 = 1;
      pdb_140a85190(auStack_328,&uStack_1c8);
      pdb_1428d2af0(&uStack_3d8,auStack_328);
      puStack_440 = (ulonglong *)((longlong)uStack_3d0 + auStack_3c8._0_8_ * 8);
      uStack_458 = SUB81(uStack_3d0,0);
      uStack_457 = (undefined1)((ulonglong)uStack_3d0 >> 8);
      uStack_456 = (undefined2)((ulonglong)uStack_3d0 >> 0x10);
      fStack_454 = (float)((ulonglong)uStack_3d0 >> 0x20);
      uStack_450 = SUB84(uStack_3d0,0);
      puStack_448 = uStack_3d8;
      puStack_438 = &uStack_198;
      uStack_44c = fStack_454;
      pdb_1420f3240(&lStack_470,&uStack_458);
      if (auStack_3c8._8_8_ != 0) {
        pub_1406abac0((byte *)pfStack_3b8,auStack_3c8._8_8_ << 2,4);
      }
      if (auStack_328 != (undefined1  [8])0x0) {
        pub_1406abac0((byte *)CONCAT44(uStack_31c,fStack_320),(longlong)auStack_328 << 3,4);
      }
      if (CONCAT44(uStack_30c,uStack_310) != 0) {
        pub_1406abac0((byte *)CONCAT44(fStack_304,fStack_308),CONCAT44(uStack_30c,uStack_310) << 2,4
                     );
      }
      puVar26 = puStack_468;
      if ((byte)uVar47 == 0) {
        uStack_188 = uStack_1f0;
        uStack_198 = uStack_200;
        puStack_190 = puStack_1f8;
        puStack_110 = puStack_468;
        uVar19 = (longlong)puStack_460 * 0xc;
        if ((ulonglong *)0xaaaaaaaaaaaaaaa < puStack_460) {
          uVar27 = 0;
LAB_14214f639:
          uStack_f4 = 1;
          pdb_142dc7e2a(uVar27,uVar19);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        puStack_120 = puStack_460;
        if (uVar19 == 0) {
          pbVar28 = (byte *)0x4;
          puVar26 = (ulonglong *)0x0;
          uStack_130 = uVar18;
        }
        else {
          uStack_130 = uVar18;
          pdb_14007ee60();
          uVar27 = 4;
          pbVar28 = pub_1406abab0(uVar19,4);
          puVar26 = puStack_120;
          if (pbVar28 == (byte *)0x0) goto LAB_14214f639;
        }
        if (puStack_120 != (ulonglong *)0x0) {
          pub_142e32760(pbVar28,puStack_110,uVar19);
        }
        auStack_3c8._8_8_ = puStack_120;
        auStack_3c8._0_8_ = pbVar28;
        uStack_3d8 = (ulonglong *)CONCAT44(fVar49,(undefined4)uStack_3d8);
        uStack_3d8 = (ulonglong *)CONCAT71(uStack_3d8._1_7_,1);
        uStack_457 = 2;
        uStack_44c = 0.0;
        fStack_454 = 0.0;
        uStack_450 = 0;
        uStack_458 = 2;
        uStack_f4 = 1;
        uStack_3d0 = (code *)puVar26;
        pdb_140c9dcb0(auStack_328,&uStack_3d8,&uStack_458);
        uStack_f4 = 1;
        pdb_140c9dbe0(&uStack_3d8,auStack_328,
                      CONCAT71((int7)((ulonglong)puVar31 >> 8),bVar39) & 0xffffffff ^ 1);
        uStack_111 = 1;
        pdb_140c9deb0(auStack_328);
        puStack_1c0 = (ulonglong *)0x1;
        uStack_1c8 = (ulonglong *)CONCAT44(uStack_1c8._4_4_,1);
        uStack_111 = 1;
        pdb_140c9de10(&uStack_458,auStack_328,&uStack_1c8);
        uStack_111 = 0;
        pdb_140c9dd20(auStack_328,&uStack_3d8,&uStack_458);
        uStack_f4 = 0;
        puVar25 = &uStack_198;
        uVar27 = pdb_1428b3ad0(uStack_1a8,puVar25,auStack_328);
        uStack_458 = (undefined1)uVar27;
        uStack_457 = (undefined1)((ulonglong)uVar27 >> 8);
        uStack_456 = (undefined2)((ulonglong)uVar27 >> 0x10);
        fStack_454 = (float)((ulonglong)uVar27 >> 0x20);
        uStack_450 = SUB84(puVar25,0);
        uStack_44c = (float)((ulonglong)puVar25 >> 0x20);
        if (bVar39 == 0) {
          puStack_100 = puStack_110;
          uStack_f1 = 1;
          uStack_f2 = 0;
          cVar15 = pdb_1408ffaf0(&uStack_458);
          if (cVar15 == '\0') {
            uVar47 = (undefined4)CONCAT71((int7)((ulonglong)&uStack_3d8 >> 8),1);
            goto LAB_14214efbe;
          }
        }
        lStack_150 = lStack_470;
        uStack_1c8 = puStack_148;
        uStack_198 = CONCAT44(uStack_198._4_4_,*puStack_3f8);
        auStack_328 = (undefined1  [8])&uStack_1c8;
        fStack_320 = 37.266235;
        uStack_31c = 1;
        uStack_318 = &uStack_198;
        uStack_310 = 0x40001000;
        uStack_30c = 1;
        uStack_115 = 0;
        pdb_140f60760(&uStack_3d8,&UNK_143462c50,auStack_328);
        puVar26 = (ulonglong *)uStack_3d0;
        puStack_170 = uStack_3d8;
        uVar27 = auStack_3c8._0_8_;
        pdb_14007ee60();
        pbVar28 = pub_1406abab0(0x28,8);
        puStack_3e0 = puVar26;
        if (pbVar28 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x28);
        }
        pbVar28[0] = 1;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        pbVar28[8] = 1;
        pbVar28[9] = 0;
        pbVar28[10] = 0;
        pbVar28[0xb] = 0;
        pbVar28[0xc] = 0;
        pbVar28[0xd] = 0;
        pbVar28[0xe] = 0;
        pbVar28[0xf] = 0;
        *(longlong *)(pbVar28 + 0x10) = lStack_150;
        *(ulonglong **)(pbVar28 + 0x18) = puStack_110;
        *(ulonglong **)(pbVar28 + 0x20) = puStack_120;
        pdb_1409baea0(auStack_328,puVar26,uVar27,pbVar28,&UNK_143462c70);
        pfStack_3b8 = (float *)CONCAT44(fStack_304,fStack_308);
        uStack_3d8 = (ulonglong *)auStack_328;
        uStack_3d0 = (code *)CONCAT44(uStack_31c,fStack_320);
        auStack_3c8._8_4_ = uStack_310;
        auStack_3c8._0_8_ = uStack_318;
        auStack_3c8._12_4_ = uStack_30c;
        pdb_140b133a0(uStack_1d0,&uStack_3d8);
        if (puStack_170 != (ulonglong *)0x0) {
          pub_1406abac0((byte *)puStack_3e0,(ulonglong)puStack_170,1);
        }
        uVar47 = 0;
      }
      else {
        if (puStack_460 == (ulonglong *)0x0) {
          puStack_100 = puStack_468;
          uStack_f1 = 1;
          uStack_f2 = 1;
          uStack_130 = uVar18;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143462d08);
        }
        puVar31 = puStack_468;
        uStack_130 = uVar18;
        if (puStack_460 != (ulonglong *)0x1) {
          puStack_110 = (ulonglong *)((longlong)puStack_468 + 0xc);
          puStack_120 = (ulonglong *)
                        (((longlong)puStack_460 * 0xc - 0xcU >> 2) * -0x5555555555555555);
          puVar38 = (ulonglong *)0x0;
          do {
            fStack_320 = (float)puVar31[1];
            auStack_328._0_4_ = (undefined4)*puVar31;
            auStack_328._4_4_ = (undefined4)(*puVar31 >> 0x20);
            puStack_100 = puVar26;
            uStack_f1 = 1;
            uStack_f2 = 1;
            pdb_140a6ad50(uStack_1e0);
            puStack_100 = puVar26;
            uStack_f1 = 1;
            uStack_f2 = 1;
            uVar45 = pdb_140c151e0(auStack_328);
            puVar3 = (ulonglong *)((longlong)puStack_110 + (longlong)puVar38 * 0xc);
            fStack_320 = (float)puVar3[1];
            auStack_328._0_4_ = (undefined4)*puVar3;
            auStack_328._4_4_ = (undefined4)(*puVar3 >> 0x20);
            puStack_100 = puVar26;
            uStack_f1 = 1;
            uStack_f2 = 1;
            pdb_140a6ad50(uStack_1e0);
            puStack_100 = puVar26;
            uStack_f1 = 1;
            uStack_f2 = 1;
            uVar46 = pdb_140c151e0(auStack_328);
            if ((int)((uint)((int)uVar45 >> 0x1f) >> 1 ^ uVar45) <=
                (int)((uint)((int)uVar46 >> 0x1f) >> 1 ^ uVar46)) {
              puVar31 = puVar3;
            }
            puVar38 = (ulonglong *)((longlong)puVar38 + 1);
          } while (puVar38 != puStack_120);
        }
        uStack_4e0 = (undefined4)puVar31[1];
        uStack_4e8 = *puVar31;
        uVar19 = *param_14;
        auStack_328._0_4_ = (undefined4)uVar19;
        auStack_328._4_4_ = (undefined4)(uVar19 >> 0x20);
        fStack_320 = (float)param_14[1];
        uStack_31c = (undefined4)(param_14[1] >> 0x20);
        uStack_3d0 = (code *)CONCAT44(uStack_3d0._4_4_,(int)puVar31[1]);
        uStack_3d8 = (ulonglong *)*puVar31;
        puVar25 = &uStack_3d8;
        if ((uVar19 & 1) != 0) {
          puVar25 = (undefined8 *)(auStack_328 + 4);
        }
        uVar27 = *puVar25;
        uStack_458 = (undefined1)uVar27;
        uStack_457 = (undefined1)((ulonglong)uVar27 >> 8);
        uStack_456 = (undefined2)((ulonglong)uVar27 >> 0x10);
        fStack_454 = (float)((ulonglong)uVar27 >> 0x20);
        uStack_450 = *(undefined4 *)(puVar25 + 1);
        puStack_100 = puVar26;
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_140de9a40(&fStack_20c,&uStack_458,&uStack_4e8);
        *(undefined4 *)param_14 = 1;
        *(float *)(puStack_4b8 + 1) = fStack_204;
        *puStack_4b8 = CONCAT44(uStack_208,fStack_20c);
        auStack_328._0_4_ = fStack_20c;
        auStack_328._4_4_ = fStack_204;
        puStack_100 = puVar26;
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_14092ff30(pbStack_128,uStack_130);
        puStack_100 = puVar26;
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_140df4540(&fStack_164,auStack_328);
        lStack_480 = CONCAT44(fStack_160,fStack_164);
        fStack_478 = fStack_15c;
        puStack_100 = puVar26;
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_140a34500(auStack_328,pbStack_140);
        puStack_110 = puVar26;
        fVar49 = (float)auStack_328._0_4_ - fStack_164;
        fVar43 = (float)auStack_328._4_4_ - fStack_160;
        fVar44 = fStack_320 - fStack_15c;
        fVar48 = fVar9 / SQRT(fVar44 * fVar44 + fVar43 * fVar43 + fVar49 * fVar49);
        uStack_188 = uStack_1f0;
        uStack_198 = uStack_200;
        puStack_190 = puStack_1f8;
        uStack_3d8 = (ulonglong *)
                     CONCAT44(_DAT_14305d850 + fVar9 * (fVar9 - 0.0) * _DAT_143462c40,
                              (undefined4)uStack_3d8);
        uStack_3d0 = (code *)CONCAT44(fStack_160 + fVar48 * fVar43 * _UNK_143462c48,
                                      fStack_164 + fVar48 * fVar49 * _UNK_143462c44);
        auStack_3c8._0_4_ = fStack_15c + fVar48 * fVar44 * _UNK_143462c4c;
        uStack_3d8 = (ulonglong *)((ulonglong)uStack_3d8 & 0xffffffffffffff00);
        uStack_458 = 0;
        uStack_101 = 1;
        pdb_140c9dcb0(auStack_328,&uStack_3d8,&uStack_458);
        pbVar28 = pbStack_128;
        uStack_112 = 1;
        pdb_140c9deb0(&uStack_3d8);
        puStack_1c0 = (ulonglong *)0x1;
        uStack_1c8 = (ulonglong *)CONCAT44(uStack_1c8._4_4_,1);
        uStack_112 = 1;
        pdb_140c9de10(&uStack_458,&uStack_3d8,&uStack_1c8);
        uStack_112 = 0;
        pdb_140c9dd20(&uStack_3d8,auStack_328,&uStack_458);
        uStack_101 = 1;
        pdb_140c9dbe0(auStack_328,&uStack_3d8,0);
        uStack_101 = 0;
        puVar25 = &uStack_198;
        lStack_180 = pdb_1428b3ad0(uStack_1a8,puVar25,auStack_328);
        puVar26 = puStack_110;
        puStack_100 = puStack_110;
        uStack_f1 = 1;
        uStack_f2 = 0;
        puStack_178 = puVar25;
        lStack_150 = lStack_180;
        pdb_14092fe00(&uStack_198,pbVar28,uStack_130);
        puStack_100 = puVar26;
        uStack_f1 = 1;
        uStack_f2 = 0;
        fVar49 = (float)pdb_14092fab0(pbStack_128);
        pdb_14007ee60();
        puVar26 = (ulonglong *)pub_1406abab0(0x18,4);
        pbVar28 = pbStack_128;
        if (puVar26 == (ulonglong *)0x0) {
          puStack_100 = puStack_110;
          uStack_f1 = 1;
          uStack_f2 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0x18);
        }
        uStack_1c8 = (ulonglong *)CONCAT44(fStack_15c,fStack_164);
        fVar48 = (float)uStack_198 + fVar49;
        fVar43 = *(float *)(pbStack_128 + 0x284);
        fVar44 = fVar43;
        if (fVar43 <= fVar48) {
          fVar44 = fVar48;
        }
        puStack_120 = puVar26;
        pdb_140df4540(&uStack_3d8,&uStack_1c8,
                      ~-(uint)NAN(fVar48) & (uint)fVar44 | -(uint)NAN(fVar48) & (uint)fVar43);
        uStack_458 = SUB41(fStack_164,0);
        uStack_457 = (undefined1)((uint)fStack_164 >> 8);
        uStack_456 = (undefined2)((uint)fStack_164 >> 0x10);
        fStack_454 = fStack_15c;
        fVar49 = fVar49 + uStack_198._4_4_;
        fVar43 = *(float *)(pbVar28 + 0x284);
        fVar44 = fVar43;
        if (fVar43 <= fVar49) {
          fVar44 = fVar49;
        }
        pdb_140df4540(auStack_328,&uStack_458,
                      ~-(uint)NAN(fVar49) & (uint)fVar44 | -(uint)NAN(fVar49) & (uint)fVar43);
        puVar26 = puStack_110;
        *(undefined4 *)(puStack_120 + 1) = (undefined4)uStack_3d0;
        *puStack_120 = (ulonglong)uStack_3d8;
        *(float *)((longlong)puStack_120 + 0x14) = fStack_320;
        *(ulonglong *)((longlong)puStack_120 + 0xc) = CONCAT44(auStack_328._4_4_,auStack_328._0_4_);
        uStack_3d8 = (ulonglong *)0x2;
        uStack_3d0 = (code *)puStack_120;
        auStack_3c8._0_8_ = 2;
        puStack_100 = puStack_110;
        uStack_f1 = 1;
        uStack_f2 = 0;
        pdb_140a89130(auStack_328,&uStack_3d8);
        puStack_100 = puVar26;
        uStack_f1 = 1;
        uStack_f2 = 0;
        pdb_140a89100(&uStack_3d8,auStack_328);
        uStack_113 = 1;
        uVar27 = pdb_14072cd40(&lStack_180);
        uStack_113 = 1;
        pdb_140b133e0(auStack_328,uStack_1d0,uVar27);
        uStack_113 = 0;
        pdb_140a891e0(&uStack_3d8,auStack_328);
        puVar26 = puStack_110;
        puStack_100 = puStack_110;
        uStack_f1 = 1;
        uStack_f2 = 0;
        uVar16 = pdb_1408ffad0(&lStack_180);
        auStack_328[0] = uVar16;
        puStack_100 = puVar26;
        uStack_f1 = 1;
        uStack_f2 = 0;
        cVar15 = pdb_1408ff980(auStack_328);
        puVar26 = puStack_110;
        if (cVar15 != '\0') {
          puStack_100 = puStack_110;
          uStack_f1 = 1;
          uStack_f2 = 0;
          uVar27 = pdb_14092f900(pbStack_128);
          puStack_100 = puVar26;
          uStack_f1 = 1;
          uStack_f2 = 0;
          pdb_140a85120(&uStack_458,uVar27);
          puStack_100 = puVar26;
          uStack_f1 = 1;
          uStack_f2 = 0;
          pdb_140a85190(auStack_328,&uStack_458);
          auStack_3c8._4_4_ = auStack_328._4_4_;
          auStack_3c8._0_4_ = auStack_328._0_4_;
          uStack_3d8 = (ulonglong *)CONCAT44(uStack_31c,fStack_320);
          auStack_3c8._8_8_ = (longlong)uStack_3d8 + (longlong)uStack_318 * 8;
          pfStack_3b8 = &fStack_160;
          uStack_3d0 = (code *)uStack_3d8;
          pdb_1420f3240(&uStack_1c8,&uStack_3d8);
          if (CONCAT44(uStack_30c,uStack_310) != 0) {
            pub_1406abac0((byte *)CONCAT44(fStack_304,fStack_308),
                          CONCAT44(uStack_30c,uStack_310) << 2,4);
          }
          puVar26 = puStack_110;
          auStack_3c8._0_8_ = uStack_1b8;
          uStack_3d8 = uStack_1c8;
          uStack_3d0 = (code *)puStack_1c0;
          puStack_100 = puStack_110;
          uStack_f1 = 1;
          uStack_f2 = 0;
          pdb_140a89130(auStack_328,&uStack_3d8);
          puStack_100 = puVar26;
          uStack_f1 = 1;
          uStack_f2 = 0;
          pdb_140a891b0(&uStack_3d8,auStack_328);
          puStack_100 = puVar26;
          uStack_f1 = 1;
          uStack_f2 = 0;
          pdb_140a89100(auStack_328,&uStack_3d8);
          uStack_114 = 1;
          uVar27 = pdb_14072cd40(&lStack_180);
          uStack_114 = 1;
          pdb_140b133e0(&uStack_3d8,uStack_1d0,uVar27);
          uStack_114 = 0;
          pdb_140a891e0(auStack_328,&uStack_3d8);
        }
        puStack_100 = puStack_110;
        uStack_f1 = 1;
        uStack_f2 = 0;
        cVar15 = pdb_1408ffaf0(&lStack_180);
        puVar26 = puStack_110;
        uVar47 = uVar10;
        if (cVar15 == '\0') {
          uVar47 = _DAT_142e3c658;
        }
        puStack_100 = puStack_110;
        uStack_f1 = 1;
        uStack_f2 = 0;
        uVar27 = pdb_14072cd40(&lStack_180);
        puStack_100 = puVar26;
        uStack_f1 = 1;
        uStack_f2 = 0;
        pdb_140b133e0(&uStack_458,uStack_1d0,uVar27);
        auStack_328 = (undefined1  [8])&puStack_4d8;
        fStack_320 = 6.009636;
        uStack_31c = 1;
        uStack_318._0_4_ = SUB84(puStack_3f8,0);
        uStack_318._4_4_ = (undefined4)((ulonglong)puStack_3f8 >> 0x20);
        uStack_310 = 0x40f71a50;
        uStack_30c = 1;
        puStack_100 = puVar26;
        uStack_f1 = 1;
        uStack_f2 = 0;
        pdb_140f60760(&uStack_3d8,&UNK_143462d20,auStack_328);
        uVar27 = auStack_3c8._0_8_;
        puVar26 = (ulonglong *)uStack_3d0;
        puStack_120 = uStack_3d8;
        fStack_320 = fStack_15c;
        auStack_328._0_4_ = fStack_164;
        auStack_328._4_4_ = fStack_160;
        pdb_14007ee60();
        pbVar28 = pub_1406abab0(0x20,8);
        puStack_170 = puVar26;
        if (pbVar28 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        pbVar28[0] = 1;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        pbVar28[8] = 1;
        pbVar28[9] = 0;
        pbVar28[10] = 0;
        pbVar28[0xb] = 0;
        pbVar28[0xc] = 0;
        pbVar28[0xd] = 0;
        pbVar28[0xe] = 0;
        pbVar28[0xf] = 0;
        *(ulonglong *)(pbVar28 + 0x10) = CONCAT44(auStack_328._4_4_,auStack_328._0_4_);
        *(float *)(pbVar28 + 0x18) = fStack_320;
        *(undefined4 *)(pbVar28 + 0x1c) = uVar47;
        pdb_1409baea0(auStack_328,puVar26,uVar27,pbVar28,&UNK_143462d40);
        pfStack_3b8 = (float *)CONCAT44(fStack_304,fStack_308);
        uStack_3d8 = (ulonglong *)CONCAT44(auStack_328._4_4_,auStack_328._0_4_);
        uStack_3d0 = (code *)CONCAT44(uStack_31c,fStack_320);
        auStack_3c8._4_4_ = uStack_318._4_4_;
        auStack_3c8._0_4_ = (undefined4)uStack_318;
        auStack_3c8._8_4_ = uStack_310;
        auStack_3c8._12_4_ = uStack_30c;
        pdb_140b133f0(&uStack_458,&uStack_3d8);
        if (puStack_120 != (ulonglong *)0x0) {
          pub_1406abac0((byte *)puStack_170,(ulonglong)puStack_120,1);
        }
        uStack_458 = (undefined1)lStack_150;
        uStack_457 = (undefined1)((ulonglong)lStack_150 >> 8);
        uStack_456 = (undefined2)((ulonglong)lStack_150 >> 0x10);
        fStack_454 = (float)((ulonglong)lStack_150 >> 0x20);
        uStack_450 = SUB84(puVar25,0);
        uStack_44c = (float)((ulonglong)puVar25 >> 0x20);
        uVar47 = (undefined4)CONCAT71((int7)((ulonglong)puVar26 >> 8),1);
      }
LAB_14214efbe:
      puVar26 = puStack_110;
      puStack_100 = puStack_110;
      uVar16 = (undefined1)uVar47;
      uStack_f2 = 0;
      uStack_f1 = uVar16;
      bVar39 = pdb_1408ffab0(&uStack_458);
      puStack_120 = (ulonglong *)CONCAT44(puStack_120._4_4_,uVar47);
      bVar17 = bVar39 - 2;
      if (bVar39 < 2) {
        bVar17 = 3;
      }
      puStack_110 = puVar26;
      if (bVar17 - 1 < 2) {
        uVar19 = *puStack_3f0;
        uVar37 = uVar19 - *(ulonglong *)(lStack_4b0 + 0x18);
        if (uVar19 < *(ulonglong *)(lStack_4b0 + 0x18)) {
          uVar37 = 0;
        }
        uVar29 = uVar19 - *(ulonglong *)(lStack_4b0 + 0x38);
        if (uVar19 < *(ulonglong *)(lStack_4b0 + 0x38)) {
          uVar29 = 0;
        }
        uVar19 = *(ulonglong *)(lStack_4b0 + 0x30);
        lVar22 = uVar19 - uVar29;
        bVar41 = lVar22 == 0;
        if (uVar19 < uVar29) {
          lVar22 = 0;
        }
        uVar6 = *(ulonglong *)(lStack_4b0 + 0x10);
        lVar36 = uVar6 - uVar37;
        bVar42 = lVar36 == 0;
        if (uVar6 < uVar37) {
          lVar36 = 0;
        }
        uVar7 = *(ulonglong *)(lStack_4b0 + 0x40);
        *puStack_3f0 = uVar7 - (lVar36 + lVar22);
        if ((uVar6 < uVar37 || bVar42) && (uVar19 < uVar29 || bVar41)) goto LAB_14214f2c7;
        *puStack_3f0 = uVar7;
        if ((char)uStack_134 == '\0') {
          puStack_100 = puVar26;
          uStack_f2 = 0;
          uStack_f1 = uVar16;
          pdb_1408ff9e0(auStack_328,&uStack_458);
          if (auStack_328[0] == '\0') {
            puStack_100 = puStack_110;
            uStack_f2 = 0;
            uStack_f1 = uVar16;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143462d88);
          }
          puStack_178 = (undefined8 *)CONCAT44(puStack_178._4_4_,uStack_31c);
          lStack_180 = CONCAT44(fStack_320,auStack_328._4_4_);
        }
        else {
          puStack_178 = (undefined8 *)CONCAT44(puStack_178._4_4_,fStack_478);
          lStack_180 = lStack_480;
        }
        puVar26 = puStack_110;
        uStack_f2 = 0;
        puStack_100 = puStack_110;
        uStack_f1 = uVar16;
        pdb_140bce520(&uStack_3d8,uStack_1e0);
        uStack_f2 = 0;
        puStack_100 = puVar26;
        uStack_f1 = uVar16;
        pdb_140bce550(&uStack_3d8);
        iVar30 = *(int *)(param_13 + 0x10);
        if (iVar30 == 0) {
          param_13[0] = '\x01';
          param_13[1] = '\0';
          param_13[2] = '\0';
          param_13[3] = '\0';
          param_13[4] = '\0';
          param_13[5] = '\0';
          param_13[6] = '\0';
          param_13[7] = '\0';
          *(ulonglong **)(param_13 + 8) = puStack_148;
          uVar47 = *(undefined4 *)(pbStack_128 + 0x294);
          param_13[0x18] = '\x01';
          param_13[0x19] = '\0';
          param_13[0x1a] = '\0';
          param_13[0x1b] = '\0';
          *(undefined4 *)(param_13 + 0x1c) = uVar47;
          param_13[0x20] = '\x01';
          param_13[0x21] = '\0';
          param_13[0x22] = '\0';
          param_13[0x23] = '\0';
          *(undefined4 *)(param_13 + 0x24) = uVar47;
        }
        fStack_320 = puStack_178._0_4_;
        auStack_328._0_4_ = (undefined4)lStack_180;
        auStack_328._4_4_ = (undefined4)((ulonglong)lStack_180 >> 0x20);
        uStack_31c = 0;
        uStack_318._0_4_ = 0x3f800000;
        uStack_318._4_4_ = 0;
        uStack_1c8 = _DAT_143008720;
        puStack_1c0 = (ulonglong *)((ulonglong)puStack_1c0 & 0xffffffffffffff00);
        puStack_100 = puStack_110;
        uStack_f2 = 0;
        uStack_f1 = uVar16;
        pdb_140bce5a0(&uStack_198);
        puVar26 = puStack_110;
        fVar49 = uStack_198._4_4_;
        if (iVar30 == 0) {
          puStack_100 = puStack_110;
          uStack_f2 = 0;
          uStack_f1 = uVar16;
          fVar43 = (float)pdb_14092fcf0();
          param_13[0x10] = '\x01';
          param_13[0x11] = '\0';
          param_13[0x12] = '\0';
          param_13[0x13] = '\0';
          *(float *)(param_13 + 0x14) = fVar43 - fVar49;
        }
        puStack_100 = puVar26;
        uStack_f2 = 0;
        uStack_f1 = uVar16;
        uVar47 = pdb_14092fcf0(pbStack_128);
        *puStack_4a0 = uStack_1e8;
        lVar22 = *(longlong *)(lStack_3e8 + 0x30);
        uVar27 = *(undefined8 *)(lStack_3e8 + 0x40);
        if (lVar22 == *(longlong *)(lStack_3e8 + 0x20)) {
          puStack_100 = puVar26;
          uStack_f2 = 0;
          uStack_f1 = uVar16;
          pdb_142d7e830(lStack_490);
        }
        lVar36 = *(longlong *)(lStack_3e8 + 0x28);
        *(undefined8 *)(lVar36 + lVar22 * 0x18) = uVar27;
        *(ulonglong **)(lVar36 + 8 + lVar22 * 0x18) = puStack_148;
        *(undefined4 *)(lVar36 + 0x10 + lVar22 * 0x18) = uVar47;
        *(undefined1 *)(lVar36 + 0x14 + lVar22 * 0x18) = 0;
        *(longlong *)(lStack_3e8 + 0x30) = lVar22 + 1;
        *(longlong *)(lStack_3e8 + 0x40) = *(longlong *)(lStack_3e8 + 0x40) + 1;
        param_13[0x20] = '\x01';
        param_13[0x21] = '\0';
        param_13[0x22] = '\0';
        param_13[0x23] = '\0';
        *(undefined4 *)(param_13 + 0x24) = uVar47;
        lStack_4f0 = lStack_4d0;
        puVar26 = puStack_1a0;
        uVar27 = uStack_158;
        uVar47 = uStack_134;
        puVar31 = puStack_110;
      }
      else {
        if (bVar17 != 0) {
          if (((*(uint *)(param_13 + 0x18) & *(uint *)(param_13 + 0x20)) != 0) &&
             (*param_13 != '\0')) {
            fVar49 = *(float *)(param_13 + 0x1c);
            fVar43 = *(float *)(param_13 + 0x24);
            if ((fVar49 != fVar43) || (NAN(fVar49) || NAN(fVar43))) {
              uVar27 = *(undefined8 *)(param_13 + 8);
              *puStack_498 = uStack_1e4;
              pdb_14007ee60();
              pbStack_128 = pub_1406abab0(0x18,8);
              if (pbStack_128 == (byte *)0x0) {
                puStack_100 = puStack_110;
                uStack_f1 = SUB81(puStack_120,0);
                uStack_f2 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(8,0x18);
              }
              pdb_14007ee60();
              puStack_148 = (ulonglong *)pub_1406abab0(8,8);
              puVar31 = puStack_110;
              puVar26 = puStack_120;
              if (puStack_148 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(8,8);
              }
              auStack_328._0_4_ = 1;
              auStack_328._4_4_ = 0;
              fStack_320 = 1.4013e-45;
              uStack_31c = 0;
              uStack_318._0_4_ = 10;
              uStack_318._4_4_ = 0x80000000;
              uStack_310 = (undefined4)uVar27;
              uStack_30c = (undefined4)((ulonglong)uVar27 >> 0x20);
              fStack_308 = fVar49;
              fStack_304 = fVar43;
              pdb_14007ee60();
              pbVar28 = pub_1406abab0(0x110,0x10);
              if (pbVar28 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(0x10,0x110);
              }
              puVar32 = auStack_328;
              pub_142e32760(pbVar28,auStack_328,0x110);
              *puStack_148 = (ulonglong)pbVar28;
              pbStack_128[0] = 1;
              pbStack_128[1] = 0;
              pbStack_128[2] = 0;
              pbStack_128[3] = 0;
              pbStack_128[4] = 0;
              pbStack_128[5] = 0;
              pbStack_128[6] = 0;
              pbStack_128[7] = 0;
              *(ulonglong **)(pbStack_128 + 8) = puStack_148;
              pbStack_128[0x10] = 1;
              pbStack_128[0x11] = 0;
              pbStack_128[0x12] = 0;
              pbStack_128[0x13] = 0;
              pbStack_128[0x14] = 0;
              pbStack_128[0x15] = 0;
              pbStack_128[0x16] = 0;
              pbStack_128[0x17] = 0;
              auStack_328._0_4_ = 1;
              auStack_328._4_4_ = 0;
              fStack_320 = SUB84(pbStack_128,0);
              uStack_31c = (undefined4)((ulonglong)pbStack_128 >> 0x20);
              uStack_318._0_4_ = 1;
              uStack_318._4_4_ = 0;
              puStack_100 = puVar31;
              uStack_f2 = 0;
              uStack_f1 = (char)puVar26;
              uVar27 = pdb_140a1ad50(auStack_328);
              fStack_320 = (float)uVar27;
              uStack_31c = (undefined4)((ulonglong)uVar27 >> 0x20);
              uStack_318._0_4_ = SUB84(puVar32,0);
              uStack_318._4_4_ = (undefined4)((ulonglong)puVar32 >> 0x20);
              auStack_328._0_4_ = 7;
              auStack_328._4_4_ = 0;
              puStack_100 = puVar31;
              uStack_f2 = 0;
              uStack_f1 = (char)puVar26;
              pdb_140ae5180(uStack_488,auStack_328,&UNK_143462d70);
            }
          }
          param_13[0] = '\0';
          param_13[1] = '\0';
          param_13[2] = '\0';
          param_13[3] = '\0';
          param_13[4] = '\0';
          param_13[5] = '\0';
          param_13[6] = '\0';
          param_13[7] = '\0';
          param_13[0x10] = '\0';
          param_13[0x11] = '\0';
          param_13[0x12] = '\0';
          param_13[0x13] = '\0';
          param_13[0x18] = '\0';
          param_13[0x19] = '\0';
          param_13[0x1a] = '\0';
          param_13[0x1b] = '\0';
          param_13[0x20] = '\0';
          param_13[0x21] = '\0';
          param_13[0x22] = '\0';
          param_13[0x23] = '\0';
        }
LAB_14214f2c7:
        lStack_4f0 = lStack_4d0;
        puVar26 = puStack_1a0;
        uVar27 = uStack_158;
        uVar47 = uStack_134;
        puVar31 = puStack_110;
      }
      puStack_1a0 = puVar26;
      uStack_158 = uVar27;
      uStack_134 = uVar47;
      puStack_110 = puVar31;
      if (((char)puStack_120 != '\0') && (lStack_470 != 0)) {
        uVar19 = lStack_470 * 0xc;
        uVar37 = 4;
        lStack_4d0 = lStack_4f0;
LAB_14214de00:
        pub_1406abac0((byte *)puVar31,uVar19,uVar37);
        lStack_4f0 = lStack_4d0;
      }
    }
    auStack_328._0_4_ = SUB84(puStack_1f8,0);
    auStack_328._4_4_ = (undefined4)((ulonglong)puStack_1f8 >> 0x20);
    fStack_320 = (float)uStack_1f0;
    uStack_31c = (undefined4)((ulonglong)uStack_1f0 >> 0x20);
    uStack_f3 = 1;
    uVar24 = pdb_140bbbcb0(auStack_328);
    uStack_f3 = 1;
    cVar15 = pdb_140900f90(uStack_1a8,uVar24);
    if (cVar15 != '\x02') goto LAB_14214df0e;
LAB_14214df68:
    lStack_4f0 = lStack_4d0;
  } while (uStack_200 == 0);
  uVar37 = 1;
  puVar31 = puStack_1f8;
  uVar19 = uStack_200;
  goto LAB_14214de00;
LAB_14214dc87:
  uStack_1a8 = *param_8;
  bVar41 = true;
  uStack_1ac = 0;
  goto LAB_14214dca5;
}

