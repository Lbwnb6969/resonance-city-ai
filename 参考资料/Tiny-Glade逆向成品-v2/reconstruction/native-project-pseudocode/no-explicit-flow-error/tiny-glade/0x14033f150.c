// VA 0x14033f150, PDB extent 4924 bytes
// tiny_glade::gui::wall_selection_tags::wall_selection_tags
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/wall_selection_tags.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::wall_selection_tags::wall_selection_tags
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/wall_selection_tags.rs
   Extent: 4924 */

void pdb_14033f150(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10)

{
  undefined4 *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  char *pcVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  char cVar14;
  byte bVar15;
  byte *pbVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  longlong lVar24;
  undefined4 *puVar25;
  longlong lVar26;
  undefined8 uVar27;
  code *pcVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  code *pcVar32;
  undefined4 *puVar33;
  float fVar34;
  undefined4 uVar35;
  undefined1 auStack_398 [72];
  undefined1 auStack_350 [72];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [8];
  undefined *puStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [24];
  longlong lStack_290;
  longlong lStack_288;
  longlong lStack_280;
  longlong lStack_278;
  undefined8 uStack_270;
  undefined4 *puStack_268;
  undefined4 *puStack_260;
  longlong lStack_258;
  longlong lStack_250;
  undefined8 uStack_248;
  char cStack_240;
  char cStack_23f;
  ulonglong *puStack_230;
  byte *pbStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong *plStack_208;
  code *pcStack_200;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong uStack_168;
  ulonglong uStack_160;
  longlong lStack_158;
  byte *pbStack_150;
  undefined *puStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined4 *puStack_130;
  longlong *plStack_128;
  undefined8 *puStack_120;
  longlong *plStack_118;
  longlong lStack_110;
  byte *pbStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  pcVar6 = (char *)*param_3;
  if (*pcVar6 != '\0') {
    return;
  }
  lStack_280 = *param_10;
  lStack_278 = param_10[4];
  puStack_230 = (ulonglong *)param_10[8];
  uVar5 = *(uint *)(pcVar6 + 8);
  uVar30 = (ulonglong)uVar5;
  plStack_128 = param_1;
  puStack_120 = param_4;
  if (uVar5 - 1 < 2) {
    uVar21 = *(undefined8 *)(pcVar6 + 0x10);
    pdb_14007ee60();
    pbVar16 = pub_1406abab0(8,8);
    if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
    *(undefined8 *)pbVar16 = uVar21;
    uVar30 = 1;
    uStack_168 = 1;
    plStack_118 = param_2;
LAB_14033f2a3:
    uStack_270 = *(undefined8 *)pbVar16;
    lStack_110 = 0;
    pbStack_108 = (byte *)0x8;
    lStack_100 = 0;
    uStack_f8 = *param_6;
    pbStack_f0 = pbVar16;
    if (uVar30 != 1) {
      uStack_e1 = 1;
      lVar17 = pdb_140b43550(uStack_f8,pbVar16);
      lVar18 = lStack_100;
      if (lVar17 == 0) {
        if (lStack_100 == lStack_110) {
          uStack_e1 = 1;
          pdb_142d7e830(&lStack_110);
        }
        pbStack_108[lVar18 * 0x18] = 0;
        lStack_100 = lVar18 + 1;
      }
    }
    uStack_e1 = 1;
    puStack_130 = (undefined4 *)pdb_140a1a890(uStack_f8);
    uStack_138 = *param_5;
    puVar1 = (undefined4 *)0x0;
LAB_14033f3b4:
    while (puVar33 = puVar1, puVar33 < puStack_130) {
      uStack_e1 = 1;
      puVar25 = puVar33;
      lVar18 = pdb_140b43530(uStack_f8);
      if (lVar18 == 0) {
        uStack_e1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f3e890);
      }
      uStack_e1 = 1;
      plVar19 = (longlong *)pdb_14043b7e0(lVar18);
      puVar1 = (undefined4 *)((longlong)puVar33 + 1);
      if (puVar25 != (undefined4 *)0x0) {
        plVar3 = plVar19 + (longlong)puVar25;
        do {
          lVar26 = *plVar19;
          lVar17 = 0;
          while (uVar30 * 8 != lVar17) {
            pbVar16 = pbStack_f0 + lVar17;
            lVar17 = lVar17 + 8;
            if (*(longlong *)pbVar16 == lVar26) {
              uStack_e1 = 1;
              plVar19 = (longlong *)pdb_14043b7e0(lVar18);
              pbStack_140 = (byte *)CONCAT44(pbStack_140._4_4_,
                                             (int)CONCAT71((int7)((ulonglong)plVar19 >> 8),1));
              lVar17 = 0;
              if (lVar26 == 0) goto LAB_14033f4ea;
              plVar3 = plVar19 + lVar26;
              goto LAB_14033f489;
            }
          }
          plVar19 = plVar19 + 1;
        } while (plVar19 != plVar3);
      }
    }
    if (lStack_100 == 0) {
      pbVar16 = pbStack_f0;
      uVar29 = uStack_168;
      if (lStack_110 != 0) {
        pub_1406abac0(pbStack_108,lStack_110 * 0x18,8);
        pbVar16 = pbStack_f0;
        uVar29 = uStack_168;
      }
      goto LAB_14033ffb9;
    }
    cVar14 = *(char *)(*plStack_118 + 0xf0);
    uStack_e1 = 1;
    pdb_140737410(&uStack_1b8);
    uStack_e1 = 1;
    pdb_140737610(&plStack_208,&uStack_1b8);
    uStack_e1 = 1;
    pdb_1407374e0(&uStack_1b8,&plStack_208);
    plStack_208 = (longlong *)0x0;
    pcStack_200 = (code *)0x0;
    lStack_1f8 = (ulonglong)*(uint *)(&UNK_142f3e568 + (ulonglong)((byte)(cVar14 - 1U) < 2) * 4) <<
                 0x20;
    uStack_1f0 = 0;
    uStack_e1 = 1;
    pdb_1407375d0(auStack_350,&uStack_1b8,&plStack_208);
    uStack_e1 = 1;
    pdb_140737660(&uStack_1b8);
    uStack_e1 = 1;
    pdb_140737510(&plStack_208,&uStack_1b8,0,_DAT_142e37ad8);
    uStack_e1 = 1;
    pdb_140737440(&uStack_1b8,&plStack_208);
    uStack_e1 = 1;
    pdb_1407374e0(auStack_398,&uStack_1b8);
    *(undefined4 *)plStack_128[2] = *(undefined4 *)((longlong)plStack_128 + 0x1c);
    plVar19 = (longlong *)*plStack_128;
    plStack_208 = (longlong *)&UNK_142f3e7ef;
    pcStack_200 = (code *)0x13;
    uStack_e1 = 1;
    uVar20 = pdb_14072aeb0(&plStack_208);
    uVar20 = uVar20 ^ 0xb1695320004fb443;
    uStack_e1 = 1;
    uVar30 = uVar20;
    lVar18 = pdb_14072c2d0(plVar19);
    *(undefined1 *)(lVar18 + 0x5e) = 0;
    if ((uVar30 & 1) == 0) {
      lVar18 = plVar19[2];
      if (lVar18 == *plVar19) {
        uStack_e1 = 1;
        pdb_142d7f080(plVar19);
      }
      lVar17 = plVar19[1];
      *(undefined4 *)(lVar17 + lVar18 * 0x38) = 0;
      *(ulonglong *)(lVar17 + 0x30 + lVar18 * 0x38) = uVar20;
      plVar19[2] = lVar18 + 1;
    }
    uStack_1a8 = 0;
    uStack_e1 = 1;
    uStack_1b8 = plVar19;
    uStack_1b0 = (byte *)uVar20;
    pdb_14072cf30(auStack_2f0,&uStack_1b8,auStack_350);
    plStack_208 = (longlong *)&UNK_142f3e802;
    pcStack_200 = (code *)0x4;
    uStack_e1 = 1;
    uStack_1b8 = (longlong *)pdb_14072aeb0(&plStack_208);
    uStack_1b0 = (byte *)CONCAT44(_UNK_142f3b4f4,_DAT_142f3b4f0);
    uStack_1a8 = CONCAT44(_UNK_142f3b4fc,_UNK_142f3b4f8);
    uStack_e1 = 1;
    uStack_1b0 = (byte *)pdb_1400affa0(&uStack_1b8);
    uStack_1b8 = (longlong *)puStack_2e8;
    uStack_e1 = 1;
    uVar21 = pdb_1400b0130(&uStack_1b8);
    uStack_e1 = 1;
    pdb_14072caa0(&uStack_1b8,auStack_2f0,uVar21);
    uStack_e1 = 1;
    pdb_14072cf30(auStack_2a8,&uStack_1b8,auStack_398);
    uVar13 = _UNK_142f3e588;
    uVar31 = _DAT_142f3e580;
    fVar12 = _DAT_142f3e570;
    fVar11 = _DAT_142e46a44;
    fVar10 = _DAT_142e37988;
    uVar21 = _DAT_142e378e0;
    fVar9 = _DAT_142e3783c;
    uVar8 = _DAT_142e37834;
    fVar7 = _DAT_142e36f50;
    pbStack_140 = pbStack_108 + lStack_100 * 0x18;
    uStack_138 = CONCAT44(uStack_138._4_4_,*(undefined4 *)((longlong)param_6 + 0x1c));
    puStack_130 = (undefined4 *)param_6[2];
    plStack_128 = (longlong *)*puStack_120;
    puStack_120 = (undefined8 *)
                  CONCAT44(puStack_120._4_4_,*(undefined4 *)((longlong)param_9 + 0x1c));
    lVar18 = *param_9;
    plStack_118 = (longlong *)param_9[2];
    uStack_170 = *(undefined4 *)((longlong)param_7 + 0x1c);
    lStack_220 = *param_7;
    puStack_268 = (undefined4 *)param_7[2];
    uStack_16c = *(undefined4 *)((longlong)param_8 + 0x1c);
    lStack_218 = *param_8;
    puStack_260 = (undefined4 *)param_8[2];
    lStack_158 = lStack_110;
    lStack_258 = lStack_220 + 0x20;
    lStack_250 = lStack_218 + 0x20;
    uStack_160 = 0;
    pbStack_228 = pbStack_108;
    pbVar16 = pbStack_108;
    while( true ) {
      while( true ) {
        if (pbVar16 == pbStack_140) goto LAB_14033ff2a;
        pbVar2 = pbVar16 + 0x18;
        if (*pbVar16 != 0) break;
        uVar22 = pdb_140a1a890(uStack_f8);
        uVar27 = 0xe;
        uVar23 = pdb_140dc6290(&UNK_142f3e806);
        uVar35 = 0;
        pdb_14055c290(&uStack_248,auStack_2a8,uVar22,&UNK_142f3e814,4,&UNK_142f3e818,3,uVar23,uVar27
                      ,0);
        if (cStack_23f == '\x01') {
          *puStack_130 = (undefined4)uStack_138;
          lVar17 = pdb_140b435e0(uStack_f8,plStack_128);
          if (lVar17 != 0) {
            *(undefined4 *)plStack_118 = puStack_120._0_4_;
            lVar17 = *(longlong *)(lVar18 + 0x30);
            uVar22 = *(undefined8 *)(lVar18 + 0x40);
            if (lVar17 == *(longlong *)(lVar18 + 0x20)) {
              pdb_142d7e8a0(lVar18 + 0x20);
            }
            *(undefined8 *)(*(longlong *)(lVar18 + 0x28) + lVar17 * 8) = uVar22;
            *(longlong *)(lVar18 + 0x30) = lVar17 + 1;
            *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
          }
        }
        pbVar16 = pbVar2;
        if ((*(char *)(lStack_280 + 0x418) == '\0') && (lStack_278 == 0)) {
          fVar34 = (float)pub_142e32b30(((float)(int)puStack_230[1] / fVar11 + (float)*puStack_230)
                                        * fVar12);
          plVar19 = (longlong *)pdb_140315970(auStack_2a8);
          uVar22 = uStack_248;
          uStack_1b8 = (longlong *)&UNK_142f3e81b;
          uStack_1b0 = (byte *)0x17;
          uVar30 = pdb_14072aeb0(&uStack_1b8);
          pcVar32 = (code *)(uVar30 ^ 0xb1695320004fb443);
          pcVar28 = pcVar32;
          lVar17 = pdb_14072c2d0(plVar19);
          *(undefined1 *)(lVar17 + 0x5e) = 0;
          if (((ulonglong)pcVar28 & 1) == 0) {
            lVar17 = plVar19[2];
            if (lVar17 == *plVar19) {
              pdb_142d7f080(plVar19);
            }
            lVar26 = plVar19[1];
            lVar24 = lVar17 * 0x38;
            *(undefined8 *)(lVar26 + lVar24) = 3;
            *(undefined8 *)(lVar26 + 0x10 + lVar24) = uVar22;
            puVar4 = (undefined8 *)(lVar26 + 0x18 + lVar24);
            *puVar4 = uVar31;
            puVar4[1] = uVar13;
            *(undefined8 *)(lVar26 + 0x28 + lVar24) = uVar21;
            *(code **)(lVar26 + 0x30 + lVar24) = pcVar32;
            plVar19[2] = lVar17 + 1;
          }
          lStack_1f8 = 0;
          plStack_208 = plVar19;
          pcStack_200 = pcVar32;
          pdb_140306cd0(&uStack_1b8,&plStack_208,&UNK_142f3e832,5,&UNK_142f3e837,0xf,
                        CONCAT44(uVar35,0x43000000));
          uVar22 = pdb_140725a70(&uStack_1b8);
          pdb_140732b00(uVar22);
          lVar17 = pdb_140725a70(&uStack_1b8);
          fVar34 = fVar34 * fVar7 + fVar7;
          *(float *)(lVar17 + 0xc4) = fVar34 * fVar34 * fVar9 + fVar10;
        }
      }
      if (*pbVar16 == 2) break;
      lVar17 = *(longlong *)(pbVar16 + 8);
      lStack_290 = *(longlong *)(pbVar16 + 0x10);
      bVar15 = pbVar16[1];
      plStack_208 = &lStack_290;
      pcStack_200 = pdb_140f72a40;
      lStack_288 = lVar17;
      pdb_140f60760(&uStack_1b8,&UNK_142f3e846,&plStack_208);
      uVar22 = uStack_1a8;
      puStack_148 = (undefined *)uStack_1b8;
      pbStack_150 = uStack_1b0;
      plStack_208 = &lStack_288;
      pcStack_200 = pdb_140f72a40;
      pdb_140f60760(&uStack_1b8,&UNK_142f3e848,&plStack_208);
      uStack_2d8 = (undefined4)uStack_1b8;
      uStack_2d4 = uStack_1b8._4_4_;
      uStack_2d0 = (undefined4)uStack_1b0;
      uStack_2cc = uStack_1b0._4_4_;
      uStack_2c8 = uStack_1a8;
      pdb_140306080(&uStack_248,auStack_2a8,&uStack_2d8);
      pdb_140737410(&uStack_1b8);
      pdb_140737510(&plStack_208,&uStack_1b8,0,uVar8);
      pdb_14072cf30(auStack_308,&uStack_248,&plStack_208);
      uVar27 = 0x12;
      uVar23 = pdb_140dc6290(&UNK_142f3e852);
      pdb_14055c700(&uStack_248,auStack_308,lVar17,0,pbStack_150,uVar22,uVar23,uVar27,bVar15);
      uVar35 = (undefined4)((ulonglong)uVar23 >> 0x20);
      if (cStack_240 != '\0') {
        *puStack_268 = uStack_170;
        lVar26 = *(longlong *)(lStack_220 + 0x30);
        uVar22 = *(undefined8 *)(lStack_220 + 0x40);
        if (lVar26 == *(longlong *)(lStack_220 + 0x20)) {
          pdb_142d7e980(lStack_258);
        }
        lVar24 = *(longlong *)(lStack_220 + 0x28);
        *(undefined8 *)(lVar24 + lVar26 * 0x10) = uVar22;
        *(longlong *)(lVar24 + 8 + lVar26 * 0x10) = lVar17;
        *(longlong *)(lStack_220 + 0x30) = lVar26 + 1;
        *(longlong *)(lStack_220 + 0x40) = *(longlong *)(lStack_220 + 0x40) + 1;
      }
      if (cStack_23f != '\0') {
        *puStack_260 = uStack_16c;
        lVar26 = *(longlong *)(lStack_218 + 0x30);
        uVar22 = *(undefined8 *)(lStack_218 + 0x40);
        if (lVar26 == *(longlong *)(lStack_218 + 0x20)) {
          pdb_142d7e830(lStack_250);
        }
        lVar24 = *(longlong *)(lStack_218 + 0x28);
        *(longlong *)(lVar24 + lVar26 * 0x18) = lVar17;
        *(undefined8 *)(lVar24 + 8 + lVar26 * 0x18) = uStack_270;
        *(undefined8 *)(lVar24 + 0x10 + lVar26 * 0x18) = uVar22;
        *(longlong *)(lStack_218 + 0x30) = lVar26 + 1;
        *(longlong *)(lStack_218 + 0x40) = *(longlong *)(lStack_218 + 0x40) + 1;
      }
      pdb_140306cd0(&uStack_2c0,auStack_308,&UNK_142f3e864,10,&UNK_142f3e86e,0xf,
                    CONCAT44(uVar35,0x41800000));
      uVar22 = pdb_140725900(&uStack_2c0);
      bVar15 = pdb_140732b50(uVar22);
      if (bVar15 != 0) {
        lStack_210 = lVar17;
      }
      uStack_1a8 = uStack_2b0;
      uStack_1b8 = (longlong *)CONCAT44(uStack_2bc,uStack_2c0);
      uStack_1b0 = (byte *)CONCAT44(uStack_2b4,uStack_2b8);
      pdb_1406ccf20(&plStack_208,&uStack_1b8);
      uVar23 = 0xc;
      uVar22 = pdb_140dc6290(&UNK_142f3e87d,0xc);
      pdb_140726690(&plStack_208,uVar22,uVar23);
      if (puStack_148 != (undefined *)0x0) {
        pub_1406abac0(pbStack_150,(ulonglong)puStack_148,1);
      }
      uStack_160 = CONCAT71((int7)(uStack_160 >> 8),(byte)uStack_160 | bVar15);
      pbVar16 = pbVar2;
    }
  }
  else {
    if (uVar5 != 3) {
      return;
    }
    uVar21 = pdb_14043b7e0(*param_4);
    uVar20 = uVar30 * 8;
    if (uVar20 < 0x7ffffffffffffff9 && uVar30 >> 0x3d == 0) {
      if (uVar20 == 0) {
        pbVar16 = (byte *)0x8;
        uVar29 = 0;
      }
      else {
        pdb_14007ee60();
        uVar31 = 8;
        pbVar16 = pub_1406abab0(uVar20,8);
        uVar29 = uVar30;
        if (pbVar16 == (byte *)0x0) goto LAB_14033ff1f;
      }
      if (uVar30 == 0) goto LAB_14033ffb9;
      uStack_168 = uVar29;
      plStack_118 = param_2;
      pub_142e32760(pbVar16,uVar21);
      goto LAB_14033f2a3;
    }
    uVar31 = 0;
LAB_14033ff1f:
    pdb_142dc7e2a(uVar31,uVar20);
  }
LAB_14033ff2a:
  if (lStack_158 != 0) {
    pub_1406abac0(pbStack_228,lStack_158 * 0x18,8);
  }
  pbVar16 = pbStack_f0;
  uVar29 = uStack_168;
  if ((uStack_160 & 1) != 0) {
    *puStack_130 = (undefined4)uStack_138;
    uStack_e1 = 0;
    pdb_140b43750(uStack_f8,lStack_210);
    pbVar16 = pbStack_f0;
    uVar29 = uStack_168;
  }
LAB_14033ffb9:
  if (uVar29 != 0) {
    pub_1406abac0(pbVar16,uVar29 << 3,8);
  }
  return;
LAB_14033f489:
  do {
    lVar26 = *plVar19;
    uStack_e1 = 1;
    lVar17 = lVar26;
    cVar14 = pdb_140b0ea90(uStack_138);
    if (cVar14 != '\0') {
      lVar24 = 0;
      do {
        if (uVar30 * 8 == lVar24) {
          pbStack_140 = (byte *)((ulonglong)pbStack_140 & 0xffffffff00000000);
          goto LAB_14033f4ea;
        }
        pbVar16 = pbStack_f0 + lVar24;
        lVar24 = lVar24 + 8;
      } while (*(longlong *)pbVar16 != lVar26);
    }
    plVar19 = plVar19 + 1;
  } while (plVar19 != plVar3);
LAB_14033f4ea:
  uStack_e1 = 1;
  pdb_14043b7e0(lVar18);
  lVar18 = lStack_100;
  if (lStack_100 == lStack_110) {
    uStack_e1 = 1;
    pdb_142d7e830(&lStack_110);
  }
  pbStack_108[lVar18 * 0x18] = 1;
  pbStack_108[lVar18 * 0x18 + 1] = (byte)pbStack_140;
  *(undefined4 **)(pbStack_108 + lVar18 * 0x18 + 8) = puVar33;
  *(longlong *)(pbStack_108 + lVar18 * 0x18 + 0x10) = lVar17;
  lStack_100 = lVar18 + 1;
  goto LAB_14033f3b4;
}

