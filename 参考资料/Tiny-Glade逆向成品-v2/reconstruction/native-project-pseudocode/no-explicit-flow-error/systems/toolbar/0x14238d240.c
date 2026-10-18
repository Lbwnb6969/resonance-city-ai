// VA 0x14238d240, PDB extent 4771 bytes
// toolbar::demo_stuff::demo_show_full_glade_size::demo_show_full_glade_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/demo_stuff/demo_show_full_glade_size.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::demo_stuff::demo_show_full_glade_size::demo_show_full_glade_size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/demo_stuff/demo_show_full_glade_size.rs
   Extent: 4771 */

void pdb_14238d240(uint *****param_1,uint *******param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  uint *******param_9,undefined8 *param_10)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  uint ******ppppppuVar6;
  code *pcVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint ******ppppppuVar13;
  longlong *plVar14;
  byte *pbVar15;
  undefined8 uVar16;
  uint *******pppppppuVar17;
  uint *****pppppuVar18;
  longlong unaff_RSI;
  undefined *puVar19;
  ulonglong unaff_R12;
  uint *******unaff_R14;
  uint *****unaff_R15;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  ulonglong in_stack_fffffffffffffdb8;
  ulonglong in_stack_fffffffffffffdc0;
  ulonglong in_stack_fffffffffffffdc8;
  undefined1 auStack_21c [24];
  undefined1 auStack_204 [12];
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  uint ******ppppppuStack_1d8;
  uint uStack_1d0;
  uint *******pppppppuStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  undefined8 uStack_1a0;
  uint uStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint *******pppppppuStack_188;
  undefined4 uStack_180;
  uint *******pppppppuStack_17c;
  undefined4 uStack_174;
  undefined4 uStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  uint *******pppppppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  byte *pbStack_128;
  uint *******pppppppuStack_118;
  byte *pbStack_110;
  undefined1 auStack_108 [8];
  float fStack_100;
  uint uStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  byte *pbStack_e8;
  uint *******pppppppuStack_c8;
  uint ******ppppppuStack_c0;
  char cStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  if (*_DAT_143ca4500 != '\x01') {
    return;
  }
  pppppppuVar17 = param_2;
  puStack_150 = param_3;
  cStack_b2 = pdb_140e94b40();
  if (cStack_b2 == '\0') {
    uStack_1f8 = 0;
    cVar9 = *(char *)*param_1;
    goto joined_r0x00014238d3c2;
  }
  unaff_RSI = 0x49;
  lVar11 = pdb_14238ce20(0x49);
  unaff_R14 = (uint *******)&UNK_1434df770;
  if (lVar11 == 1) {
    if (pppppppuVar17 < (uint *******)0x4a) {
      uVar12 = pdb_14238ce20(pppppppuVar17);
      if ((uVar12 & 1) != 0) {
        if (0x49 < (longlong)pppppppuVar17 + 2U) goto LAB_14238df16;
        unaff_RSI = 0x47 - (longlong)pppppppuVar17;
        unaff_R14 = (uint *******)((longlong)pppppppuVar17 + 0x1434df772);
      }
      goto LAB_14238d31c;
    }
  }
  else {
LAB_14238d31c:
    puVar19 = &UNK_1434df8f5;
    unaff_R15 = (uint *****)&UNK_1434df8b3;
    do {
      bVar2 = puVar19[-1];
      uVar10 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar19[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar19[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar19 + -4;
            puVar19 = puVar19 + -4;
            uVar10 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar19 = puVar19 + -3;
            uVar10 = bVar4 & 0xf;
          }
          uVar10 = bVar3 & 0x3f | uVar10 << 6;
        }
        else {
          puVar19 = puVar19 + -2;
          uVar10 = bVar3 & 0x1f;
        }
        uVar10 = (uint)(bVar2 & 0x3f) | uVar10 << 6;
        if (uVar10 != 0x5c) goto LAB_14238d3a4;
LAB_14238d3cd:
        if ((undefined *)0x42 < puVar19 + -0x1434df8b2) goto LAB_14238ded3;
        unaff_R12 = 0x42 - (longlong)(puVar19 + -0x1434df8b2);
        unaff_R15 = (uint *****)(puVar19 + 1);
        goto LAB_14238d3f0;
      }
      puVar19 = puVar19 + -1;
      if (uVar10 == 0x5c) goto LAB_14238d3cd;
LAB_14238d3a4:
      if (uVar10 == 0x2f) goto LAB_14238d3cd;
    } while (puVar19 != &UNK_1434df8b3);
    unaff_R12 = 0x42;
LAB_14238d3f0:
    ppppppuVar13 = (uint ******)pdb_140e97000();
    if (*(char *)(ppppppuVar13 + 0xd) != '\x01') goto LAB_14238de78;
    do {
      if (*ppppppuVar13 == (uint *****)0x0) {
        *ppppppuVar13 = (uint *****)0xffffffffffffffff;
        in_stack_fffffffffffffdc8 = 0;
        in_stack_fffffffffffffdc0 = 0;
        in_stack_fffffffffffffdb8 = unaff_R12;
        ppppppuStack_c0 = ppppppuVar13;
        unaff_RSI = pdb_140e94f10(ppppppuVar13 + 1,unaff_R14,unaff_RSI,unaff_R15,unaff_R12,1,0);
        *ppppppuStack_c0 = (uint *****)((longlong)*ppppppuStack_c0 + 1);
        uStack_1f8 = 1;
        cVar9 = *(char *)*param_1;
        lStack_1f0 = unaff_RSI;
joined_r0x00014238d3c2:
        if ((cVar9 == '\x10') || (cVar9 = pdb_140a00340(*param_10), cVar9 != '\0')) {
          if (cStack_b2 == '\0') {
            return;
          }
          plVar14 = (longlong *)pdb_140e97000();
          if (((char)plVar14[0xd] != '\x01') &&
             (plVar14 = (longlong *)pdb_142dcf3a0(plVar14,0), plVar14 == (longlong *)0x0)) break;
          if (*plVar14 == 0) {
            *plVar14 = -1;
            ppppppuStack_c0 = (uint ******)plVar14;
            pdb_140e95370(plVar14 + 1,unaff_RSI);
            goto LAB_14238de20;
          }
        }
        else {
          ppppppuStack_c0 = *param_2;
          pdb_140a34500(&fStack_164);
          pdb_140a344f0(&uStack_170,ppppppuStack_c0);
          fStack_16c = fStack_16c + _DAT_142f60fec;
          fStack_100 = fStack_15c;
          pppppppuStack_148 = (uint *******)CONCAT44(fStack_160,fStack_164);
          uStack_fc = uStack_170;
          uStack_f4 = uStack_168;
          uStack_140 = (code *)CONCAT44(uStack_170,fStack_15c);
          uStack_138 = CONCAT44(uStack_168,fStack_16c);
          auStack_108 = (undefined1  [8])pppppppuStack_148;
          fStack_f8 = fStack_16c;
          pdb_140bf25f0(&fStack_194,&pppppppuStack_148,0);
          fVar20 = SQRT((fStack_15c - fStack_18c) * (fStack_15c - fStack_18c) +
                        (fStack_160 - fStack_190) * (fStack_160 - fStack_190) +
                        (fStack_164 - fStack_194) * (fStack_164 - fStack_194));
          if (fVar20 <= _DAT_142f9515c) {
            *(uint *)param_9 = 0;
          }
          if (_DAT_142f9515c < fVar20) {
            pdb_140df3380(auStack_21c,_DAT_143006a28,_DAT_143006a28,_DAT_142e36f28,
                          in_stack_fffffffffffffdb8 & 0xffffffff00000000,
                          in_stack_fffffffffffffdc0 & 0xffffffff00000000,
                          in_stack_fffffffffffffdc8 & 0xffffffff00000000,&UNK_1434df8f8);
            pdb_140df3ac0(auStack_108,auStack_21c,0);
            pppppppuStack_118 = (uint *******)auStack_108;
            uStack_158 = CONCAT44(uStack_fc,fStack_100);
            uVar16 = CONCAT44(uStack_f4,fStack_f8);
            lStack_1b0 = unaff_RSI;
            if (CONCAT44(uStack_ec,uStack_f0) != 0) {
              pub_1406abac0(pbStack_e8,CONCAT44(uStack_ec,uStack_f0) << 2,4);
            }
            uStack_b1 = 1;
            fVar20 = (float)pdb_140df3ee0(auStack_21c);
            uVar5 = *param_5;
            lVar11 = *param_6;
            pppppppuStack_148 = (uint *******)(lVar11 + 0x2c);
            uStack_140 = pdb_140f71a50;
            uStack_b1 = 1;
            pdb_140f60760(auStack_108,&UNK_1434df910,&pppppppuStack_148);
            pppppppuStack_c8 = (uint *******)auStack_108;
            pbVar1 = (byte *)CONCAT44(uStack_fc,fStack_100);
            uVar8 = CONCAT44(uStack_f4,fStack_f8);
            pdb_14007ee60();
            pbVar15 = pub_1406abab0(0x30,8);
            pbStack_110 = pbVar1;
            if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x30);
            }
            fVar20 = fVar20 * _DAT_142e37988;
            pbVar15[0] = 1;
            pbVar15[1] = 0;
            pbVar15[2] = 0;
            pbVar15[3] = 0;
            pbVar15[4] = 0;
            pbVar15[5] = 0;
            pbVar15[6] = 0;
            pbVar15[7] = 0;
            pbVar15[8] = 1;
            pbVar15[9] = 0;
            pbVar15[10] = 0;
            pbVar15[0xb] = 0;
            pbVar15[0xc] = 0;
            pbVar15[0xd] = 0;
            pbVar15[0xe] = 0;
            pbVar15[0xf] = 0;
            *(uint ********)(pbVar15 + 0x10) = pppppppuStack_118;
            *(undefined8 *)(pbVar15 + 0x18) = uStack_158;
            *(undefined8 *)(pbVar15 + 0x20) = uVar16;
            *(float *)(pbVar15 + 0x28) = fVar20;
            pbVar15[0x2c] = 0;
            pbVar15[0x2d] = 0;
            pbVar15[0x2e] = 0xa0;
            pbVar15[0x2f] = 0x40;
            pdb_1409baea0(auStack_108,pbVar1,uVar8,pbVar15,&UNK_1434df928);
            pbStack_128 = pbStack_e8;
            uStack_138 = CONCAT44(uStack_f4,fStack_f8);
            uStack_130 = uStack_f0;
            uStack_12c = uStack_ec;
            pppppppuStack_148 = (uint *******)auStack_108;
            uStack_140 = (code *)CONCAT44(uStack_fc,fStack_100);
            fVar20 = fStack_f8;
            pdb_140b133a0(uVar5,&pppppppuStack_148);
            if (pppppppuStack_c8 != (uint *******)0x0) {
              pub_1406abac0(pbStack_110,(ulonglong)pppppppuStack_c8,1);
            }
            uStack_b1 = 0;
            uVar16 = pdb_140a85160(*param_4);
            fVar28 = _DAT_142e36f28;
            uStack_b1 = 0;
            pdb_140defcd0(auStack_108,uVar16);
            pppppppuStack_c8 = (uint *******)auStack_108;
            pbVar15 = (byte *)CONCAT44(uStack_fc,fStack_100);
            pbVar1 = pbVar15 + CONCAT44(uStack_f4,fStack_f8) * 8;
            unaff_R15 = (uint *****)*param_8;
            param_1 = (uint *****)*puStack_150;
            puStack_150 = (undefined8 *)((ulonglong)puStack_150 & 0xffffffff00000000);
            unaff_R14 = (uint *******)&pppppppuStack_148;
            fVar26 = (float)_DAT_143014b70;
            uVar12 = (ulonglong)_DAT_143014b70 >> 0x20;
            pbStack_110 = pbVar15;
            fVar25 = _DAT_14300c7a0;
            lStack_1a8 = lVar11;
            while (pbVar15 != pbVar1) {
              uStack_1b8 = *(undefined8 *)pbVar15;
              uVar27 = (undefined4)uStack_1b8;
              uVar21 = pdb_14140ce00(unaff_R15,uVar27,(int)((ulonglong)uStack_1b8 >> 0x20));
              pdb_140df4540(&pppppppuStack_17c,&uStack_1b8,uVar21);
              fVar22 = (float)pdb_140a6ad50(param_1);
              uStack_140 = (code *)CONCAT44(uStack_140._4_4_,uStack_174);
              pppppppuStack_148 = pppppppuStack_17c;
              fVar23 = (float)pdb_140c151e0(unaff_R14,fVar22,uVar27,ppppppuStack_c0);
              pbVar15 = pbVar15 + 8;
              fVar20 = fVar22;
              if ((((0.0 <= fVar23) && (fVar23 <= (float)*(uint *)param_1)) && (0.0 <= fVar22)) &&
                 (fVar22 <= (float)*(uint *)((longlong)param_1 + 4))) {
                fVar24 = (float)pdb_140a6ad50(param_1);
                fVar23 = fVar23 + fVar24 * fVar26;
                fVar22 = fVar22 + fVar20 * (float)uVar12;
                fVar22 = SQRT(fVar22 * fVar22 + fVar23 * fVar23);
                if (fVar22 < fVar25) {
                  uStack_180 = uStack_174;
                  pppppppuStack_188 = pppppppuStack_17c;
                  puStack_150 = (undefined8 *)
                                CONCAT44(puStack_150._4_4_,
                                         (int)CONCAT71((int7)((ulonglong)pppppppuStack_17c >> 8),1))
                  ;
                  fVar25 = fVar22;
                }
              }
            }
            if (pppppppuStack_c8 != (uint *******)0x0) {
              pub_1406abac0(pbStack_110,(longlong)pppppppuStack_c8 << 3,4);
            }
            if (CONCAT44(uStack_ec,uStack_f0) != 0) {
              pub_1406abac0(pbStack_e8,CONCAT44(uStack_ec,uStack_f0) << 2,4);
            }
            unaff_R12 = 0xb1695320004fb443;
            param_4 = param_7;
            if (((ulonglong)puStack_150 & 1) == 0) {
              unaff_RSI = lStack_1b0;
              param_2 = param_9;
              if (*(uint *)param_9 != 1) goto LAB_14238dde7;
            }
            else {
              uStack_1c0 = uStack_180;
              pppppppuStack_1c8 = pppppppuStack_188;
              auStack_108 = (undefined1  [8])*param_9;
              fStack_100 = (float)*(uint *)(param_9 + 1);
              uStack_fc = *(uint *)((longlong)param_9 + 0xc);
              uStack_140 = (code *)CONCAT44(uStack_140._4_4_,uStack_180);
              pppppppuStack_148 = pppppppuStack_188;
              if (((ulonglong)*param_9 & 1) != 0) {
                unaff_R14 = (uint *******)(auStack_108 + 4);
              }
              ppppppuStack_1d8 = *unaff_R14;
              uStack_1d0 = *(uint *)(unaff_R14 + 1);
              uStack_b1 = 0;
              pdb_140de9a40(&uStack_1a0,&ppppppuStack_1d8,&pppppppuStack_1c8,
                            *(undefined4 *)(lStack_1a8 + 0x28),0x40a00000);
              *(uint *)param_9 = 1;
              *(undefined8 *)((longlong)param_9 + 4) = uStack_1a0;
              *(uint *)((longlong)param_9 + 0xc) = uStack_198;
              uStack_b1 = 0;
              fVar25 = (float)pdb_140a6ad50(param_1);
              uStack_b1 = 0;
              fVar26 = (float)pdb_140c151e0(&uStack_1a0,fVar25,fVar20,ppppppuStack_c0);
              uStack_b1 = 0;
              fVar20 = fVar25;
              pdb_140a6ad50(param_1);
              *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
              unaff_R14 = (uint *******)*param_7;
              auStack_108 = (undefined1  [8])&UNK_1434df958;
              fStack_100 = 2.38221e-44;
              uStack_fc = 0;
              uStack_b1 = 0;
              uVar12 = pdb_140bbbcb0(auStack_108);
              unaff_R15 = (uint *****)(uVar12 ^ 0xb1695320004fb443);
              uStack_b1 = 0;
              pppppuVar18 = unaff_R15;
              lVar11 = pdb_14072c2d0(unaff_R14);
              *(undefined1 *)(lVar11 + 0x5e) = 0;
              if (((ulonglong)pppppuVar18 & 1) == 0) {
                ppppppuVar13 = unaff_R14[2];
                if (ppppppuVar13 == *unaff_R14) {
                  uStack_b1 = 0;
                  pdb_142d7f080(unaff_R14);
                }
                fVar20 = fVar20 / _DAT_142e4bfe4;
                fVar25 = fVar25 / fVar20 + _DAT_1434df668;
                ppppppuVar6 = unaff_R14[1];
                *(undefined4 *)(ppppppuVar6 + (longlong)ppppppuVar13 * 7) = 4;
                *(float *)((longlong)ppppppuVar6 + ((longlong)ppppppuVar13 * 0xe + 1) * 4) =
                     fVar26 / fVar20;
                *(float *)(ppppppuVar6 + (longlong)ppppppuVar13 * 7 + 1) = fVar25;
                *(undefined8 *)((longlong)ppppppuVar6 + ((longlong)ppppppuVar13 * 0xe + 3) * 4) =
                     _DAT_142e37960;
                *(undefined4 *)((longlong)ppppppuVar6 + ((longlong)ppppppuVar13 * 0xe + 5) * 4) = 1;
                ppppppuVar6[(longlong)ppppppuVar13 * 7 + 3] = _DAT_1434d9b00;
                ppppppuVar6[(longlong)ppppppuVar13 * 7 + 6] = unaff_R15;
                unaff_R14[2] = (uint ******)((longlong)ppppppuVar13 + 1);
              }
              uStack_138 = 0;
              uStack_b1 = 0;
              pppppppuStack_148 = unaff_R14;
              uStack_140 = (code *)unaff_R15;
              pdb_141174160(auStack_108,&pppppppuStack_148,&UNK_1434df969,0xf,0);
              uStack_b1 = 0;
              pdb_141191ac0(auStack_108,&UNK_1434df978,4);
            }
            fVar20 = *(float *)((longlong)param_9 + 4);
            fVar25 = *(float *)((longlong)param_9 + 0xc);
            fVar28 = fVar28 / SQRT(fVar25 * fVar25 + fVar20 * fVar20);
            fVar20 = fVar28 * fVar20 * _DAT_1434df670 * _DAT_142e36f60;
            auStack_108 = (undefined1  [8])
                          CONCAT44(fVar28 * fVar25 * _UNK_1434df674 * _UNK_142e36f64,fVar20);
            uStack_b1 = 0;
            pdb_140df4520(auStack_204,auStack_108);
            uStack_b1 = 0;
            fVar28 = (float)pdb_140a6ad50(param_1);
            uStack_b1 = 0;
            fVar25 = (float)pdb_140c151e0(auStack_204,fVar28,fVar20,ppppppuStack_c0);
            uStack_b1 = 0;
            fVar20 = fVar28;
            pdb_140a6ad50(param_1);
            *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
            param_2 = (uint *******)*param_7;
            auStack_108 = (undefined1  [8])&UNK_1434df97c;
            fStack_100 = 3.08286e-44;
            uStack_fc = 0;
            uStack_b1 = 0;
            uVar12 = pdb_140bbbcb0(auStack_108);
            param_1 = (uint *****)(uVar12 ^ 0xb1695320004fb443);
            uStack_b1 = 0;
            pppppuVar18 = param_1;
            lVar11 = pdb_14072c2d0(param_2);
            *(undefined1 *)(lVar11 + 0x5e) = 0;
            if (((ulonglong)pppppuVar18 & 1) == 0) {
              ppppppuVar13 = param_2[2];
              if (ppppppuVar13 == *param_2) {
                uStack_b1 = 0;
                pdb_142d7f080(param_2);
              }
              fVar20 = fVar20 / _DAT_142e4bfe4;
              fVar28 = fVar28 / fVar20 + _DAT_1434df680;
              ppppppuVar6 = param_2[1];
              *(undefined4 *)(ppppppuVar6 + (longlong)ppppppuVar13 * 7) = 4;
              *(float *)((longlong)ppppppuVar6 + ((longlong)ppppppuVar13 * 0xe + 1) * 4) =
                   fVar25 / fVar20;
              *(float *)(ppppppuVar6 + (longlong)ppppppuVar13 * 7 + 1) = fVar28;
              *(undefined8 *)((longlong)ppppppuVar6 + ((longlong)ppppppuVar13 * 0xe + 3) * 4) =
                   _DAT_142e37960;
              *(undefined4 *)((longlong)ppppppuVar6 + ((longlong)ppppppuVar13 * 0xe + 5) * 4) = 1;
              ppppppuVar6[(longlong)ppppppuVar13 * 7 + 3] = _DAT_1434d9b00;
              ppppppuVar6[(longlong)ppppppuVar13 * 7 + 6] = param_1;
              param_2[2] = (uint ******)((longlong)ppppppuVar13 + 1);
            }
            uStack_138 = 0;
            uStack_b1 = 0;
            pppppppuStack_148 = param_2;
            uStack_140 = (code *)param_1;
            pdb_141174160(auStack_108,&pppppppuStack_148,&UNK_1434df969,0xf,0);
            uStack_b1 = 0;
            pdb_1411877c0(auStack_108,&UNK_1434df978,4);
            unaff_RSI = lStack_1b0;
          }
LAB_14238dde7:
          if (cStack_b2 == '\0') {
            return;
          }
          plVar14 = (longlong *)pdb_140e97000();
          if (((char)plVar14[0xd] != '\x01') &&
             (plVar14 = (longlong *)pdb_142dcf3a0(plVar14,0), plVar14 == (longlong *)0x0)) break;
          if (*plVar14 == 0) {
            *plVar14 = -1;
            ppppppuStack_c0 = (uint ******)plVar14;
            pdb_140e95370(plVar14 + 1,unaff_RSI);
LAB_14238de20:
            *ppppppuStack_c0 = (uint *****)((longlong)*ppppppuStack_c0 + 1);
            return;
          }
        }
      }
      ppppppuVar13 = (uint ******)pdb_142dc8090(&UNK_1432a7f58);
LAB_14238de78:
      ppppppuVar13 = (uint ******)pdb_142dcf3a0(ppppppuVar13,0);
    } while (ppppppuVar13 != (uint ******)0x0);
    pdb_142dc7890(&UNK_1432a7ee8);
LAB_14238ded3:
    pdb_142dc8070(&UNK_1434df8b3,0x42);
  }
  pdb_142dc8070(&UNK_1434df770,0x49,0);
LAB_14238df16:
  pdb_142dc8070(&UNK_1434df770,0x49);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

