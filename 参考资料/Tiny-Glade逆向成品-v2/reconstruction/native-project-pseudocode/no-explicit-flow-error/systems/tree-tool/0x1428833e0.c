// VA 0x1428833e0, PDB extent 4283 bytes
// system_tree::convert_preplaced_trees::convert_preplaced_trees
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/convert_preplaced_trees.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::convert_preplaced_trees::convert_preplaced_trees
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/convert_preplaced_trees.rs
   Extent: 4283 */

void pdb_1428833e0(undefined8 *param_1,longlong *param_2,ulonglong *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10,undefined8 *param_11)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int *piVar18;
  undefined8 uVar19;
  byte *arg0;
  ulonglong uVar20;
  byte *pbVar21;
  ulonglong uVar22;
  byte *pbVar23;
  ulonglong uVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  byte *pbVar30;
  undefined4 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 auStack_234 [2];
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  longlong lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  byte *pbStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1ac;
  ulonglong uStack_1a8;
  longlong lStack_1a0;
  byte *pbStack_198;
  undefined1 (*pauStack_190) [16];
  longlong *plStack_188;
  longlong lStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  byte **ppbStack_140;
  longlong lStack_130;
  undefined4 *puStack_128;
  longlong lStack_120;
  byte *pbStack_118;
  longlong lStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar3 = (ulonglong *)*param_1;
  lVar13 = param_1[1];
  uVar17 = *puVar3;
  uVar28 = 0;
  uVar22 = uVar17 - *(ulonglong *)(lVar13 + 0x18);
  if (uVar17 < *(ulonglong *)(lVar13 + 0x18)) {
    uVar22 = uVar28;
  }
  uVar26 = uVar17 - *(ulonglong *)(lVar13 + 0x38);
  if (uVar17 < *(ulonglong *)(lVar13 + 0x38)) {
    uVar26 = uVar28;
  }
  uVar17 = *(ulonglong *)(lVar13 + 0x30);
  uVar24 = uVar17 - uVar26;
  if (uVar26 > uVar17) {
    uVar24 = uVar28;
  }
  uVar4 = *(ulonglong *)(lVar13 + 0x10);
  uVar20 = uVar4 - uVar22;
  if (uVar22 > uVar4) {
    uVar20 = uVar28;
  }
  uVar28 = *(ulonglong *)(lVar13 + 0x40);
  *puVar3 = uVar28 - (uVar20 + uVar24);
  if (uVar22 <= uVar4 && uVar4 - uVar22 != 0 || uVar26 <= uVar17 && uVar17 - uVar26 != 0) {
    *puVar3 = uVar28;
    *(undefined1 *)(param_3 + 1) = 1;
    *param_3 = 1;
  }
  else if (((char)param_3[1] == '\x01') &&
          (uVar17 = *param_3, *param_3 = uVar17 + 1, 2 < uVar17 + 1)) {
    *(undefined1 *)(param_3 + 1) = 0;
    if (2 < *_DAT_143ca8e90) {
      pbStack_198 = (byte *)0x0;
      pauStack_190 = (undefined1 (*) [16])&UNK_1435aa6ec;
      plStack_188 = (longlong *)0x24;
      lStack_180 = 0;
      pbStack_178 = &UNK_1435aa6b4;
      uStack_170 = 0x37;
      uStack_168 = 3;
      puStack_160 = &UNK_1435aa6ec;
      uStack_158 = 0x24;
      uStack_150 = 0x3f00000001;
      puStack_148 = &UNK_1435aa688;
      ppbStack_140 = (byte **)0x59;
      pdb_140f332f0(&uStack_f2,&pbStack_198);
    }
    lStack_120 = 0;
    pbStack_118 = (byte *)0x8;
    lStack_110 = 0;
    lVar13 = pdb_1406d0830(*param_5);
    puVar15 = (undefined8 *)(lVar13 + 0x20);
    puVar14 = (undefined8 *)(lVar13 + 0x28);
    if (*(char *)(lVar13 + 0x298) == '\0') {
      puVar14 = (undefined8 *)(lVar13 + 0x10);
      puVar15 = (undefined8 *)(lVar13 + 8);
    }
    uStack_240 = *puVar14;
    uStack_248 = *puVar15;
    pdb_140bfabf0(auStack_2a8,param_4);
    lVar13 = pdb_1406d0830(*param_6);
    puVar15 = (undefined8 *)(lVar13 + 0x20);
    puVar14 = (undefined8 *)(lVar13 + 0x28);
    if (*(char *)(lVar13 + 0x298) == '\0') {
      puVar14 = (undefined8 *)(lVar13 + 0x10);
      puVar15 = (undefined8 *)(lVar13 + 8);
    }
    uStack_250 = *puVar14;
    uStack_258 = *puVar15;
    puVar15 = (undefined8 *)pdb_142b24f50(*param_8,&UNK_14366a0e0);
    if ((puVar15 == (undefined8 *)0x0) ||
       (lVar13 = (**(code **)(puVar15[1] + 0x18))(*puVar15), lVar13 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1435aa710);
    }
    uStack_220 = *(undefined8 *)(lVar13 + 8);
    uStack_218 = *(undefined8 *)(lVar13 + 0x10);
    pdb_140a2fb40(&pbStack_198,*param_9);
    uVar10 = _DAT_143006a28;
    fVar9 = _DAT_142e36f28;
    uVar29 = (uint)(ushort)lStack_180;
    lVar13 = *param_10;
    lVar5 = param_10[1];
    uStack_208 = *param_7;
    uStack_1ac = *(undefined4 *)((longlong)param_2 + 0x1c);
    lStack_130 = *param_2;
    lStack_210 = lStack_130 + 0x20;
    pbVar21 = pbStack_178;
    pbVar23 = pbStack_198;
    pauVar25 = pauStack_190;
    puVar31 = (undefined4 *)param_2[2];
LAB_142883700:
    lVar16 = lStack_110;
    if (pbVar21 != (undefined *)0x0) {
      if ((short)uVar29 == 0) {
        do {
          auVar1 = *pauVar25;
          pbVar23 = pbVar23 + -0x100;
          pauVar25 = pauVar25 + 1;
          uVar29 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar29 == 0);
      }
      iVar7 = 0;
      for (uVar8 = uVar29; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        iVar7 = iVar7 + 1;
      }
      uVar29 = uVar29 - 1 & uVar29;
      pbVar21 = pbVar21 + -1;
      uVar17 = (ulonglong)~(uint)*(undefined8 *)(pbVar23 + (-8 - (ulonglong)(uint)(iVar7 << 4)));
      if ((((uVar17 < *(ulonglong *)(lVar5 + 0x10)) &&
           (piVar18 = (int *)(uVar17 * 0x18 + *(longlong *)(lVar5 + 8)),
           piVar18[4] ==
           (int)((ulonglong)*(undefined8 *)(pbVar23 + (-8 - (ulonglong)(uint)(iVar7 << 4))) >> 0x20)
           )) && (*piVar18 != 0)) &&
         ((uVar17 = *(ulonglong *)(piVar18 + 2),
          (uVar17 & 0xffffffff) < *(ulonglong *)(lVar13 + 0x38) &&
          ((*(ulonglong *)(*(longlong *)(lVar13 + 0x28) + (uVar17 >> 6 & 0x3ffffff) * 8) >>
            (uVar17 & 0x3f) & 1) != 0)))) {
        lVar16 = *(longlong *)(lVar5 + 0x1a0) + (uVar17 >> 0x20) * 0x48;
        uVar17 = *(ulonglong *)(*(longlong *)(lVar5 + 0x1a0) + 0x40 + (uVar17 >> 0x20) * 0x48);
        if ((*(ulonglong *)(lVar13 + 0x110) < uVar17) &&
           (uVar22 = *(ulonglong *)
                      (*(longlong *)(lVar16 + 0x38) + *(ulonglong *)(lVar13 + 0x110) * 8),
           uVar22 != 0)) {
          lVar27 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar22 * 0x30);
        }
        else {
          lVar27 = 0;
        }
        if ((*(ulonglong *)(lVar13 + 0x118) < uVar17) &&
           (uVar17 = *(ulonglong *)
                      (*(longlong *)(lVar16 + 0x38) + *(ulonglong *)(lVar13 + 0x118) * 8),
           uVar17 != 0)) {
          pbStack_100 = *(byte **)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar17 * 0x30);
        }
        else {
          pbStack_100 = (byte *)0x0;
        }
        uStack_200 = *(undefined8 *)(pbVar23 + (-0x10 - (ulonglong)(uint)(iVar7 << 4)));
        uStack_1a8 = (ulonglong)(uint)~piVar18[1];
        pbVar30 = (byte *)(lVar27 + uStack_1a8 * 0x30);
        puStack_128 = puVar31;
        pdb_140b40d00(auStack_234,pbVar30);
        uVar11 = uStack_22c;
        uVar2 = auStack_234[0];
        fVar32 = (float)pdb_140a7d8d0(auStack_2a8,auStack_234[0],uStack_22c,uVar10,0x43020000);
        fVar33 = (float)pdb_140a7d8d0(auStack_298,uVar2,uVar11,uVar10,0x43020000);
        fVar34 = (float)pdb_140a7d8d0(auStack_288,uVar2,uVar11,uVar10,0x43020000);
        fVar35 = (float)pdb_140a7d8d0(auStack_278,uVar2,uVar11,uVar10,0x43020000);
        fVar36 = (float)pdb_140a7d8d0(&uStack_248,uVar2,uVar11,uVar10,0x43020000);
        fVar37 = (float)pdb_140a7d8d0(&uStack_258,uVar2,uVar11,uVar10,0x43020000);
        if ((0.0 < fVar36) || (0.0 < fVar37)) {
          pbStack_1c8 = (byte *)((ulonglong)pbStack_1c8 & 0xffffffffffffff00);
        }
        else {
          bVar12 = pdb_1419c1e90(uStack_220,uStack_218,uVar2,uVar11);
          fVar35 = fVar32 + fVar33 + fVar34 + fVar35;
          fVar32 = 0.0;
          if (0.0 <= fVar35) {
            fVar32 = fVar35;
          }
          fVar33 = fVar9;
          if (fVar32 <= fVar9) {
            fVar33 = fVar32;
          }
          bVar12 = (bVar12 ^ 1) & fVar33 <= 0.0;
          pbStack_1c8 = (byte *)CONCAT71(pbStack_1c8._1_7_,bVar12);
          if (bVar12 != 0) {
            pdb_140defa80(auStack_268,uVar2,uVar11,_DAT_142f3e570);
            pdb_142b24190(uStack_208,auStack_268,&pbStack_1c8);
            if ((char)pbStack_1c8 != '\0') {
              arg0 = pbVar30;
              pdb_140b40d00(&pbStack_198);
              uVar19 = *(undefined8 *)(pbVar30 + 0xc);
              uVar2 = *(undefined4 *)(pbVar30 + 0x14);
              lVar16 = pdb_1418bded0(pbStack_100 + uStack_1a8 * 0x10);
              if ((longlong)arg0 < 0) {
                uVar19 = 0;
LAB_142883ed5:
                pdb_142dc7e2a(uVar19,pbStack_108);
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
              uStack_1a8 = CONCAT44(uStack_1a8._4_4_,uVar2);
              pbStack_100 = arg0;
              if (arg0 == (byte *)0x0) {
                pbStack_108 = (byte *)0x1;
                puVar31 = puStack_128;
              }
              else {
                lStack_1a0 = lVar16;
                pdb_14007ee60();
                pbStack_108 = pub_1406abab0((ulonglong)arg0,1);
                puVar31 = puStack_128;
                if (pbStack_108 == (byte *)0x0) {
                  pbStack_108 = pbStack_100;
                  uVar19 = 1;
                  goto LAB_142883ed5;
                }
                pub_142e32760(pbStack_108,lStack_1a0,pbStack_100);
              }
              pcStack_1f0 = (code *)CONCAT44(pcStack_1f0._4_4_,pauStack_190._0_4_);
              pbStack_1f8 = pbStack_198;
              lStack_1a0 = lStack_110;
              if (lStack_110 == lStack_120) {
                pdb_142d7eec0(&lStack_120);
              }
              pbVar30 = pbStack_118 + lStack_1a0 * 0x48;
              pbVar30[0] = 0;
              pbVar30[1] = 0;
              pbVar30[2] = 0;
              pbVar30[3] = 0;
              *(undefined8 *)(pbStack_118 + lStack_1a0 * 0x48 + 8) = uStack_200;
              *(byte **)(pbStack_118 + lStack_1a0 * 0x48 + 0x10) = pbStack_100;
              *(byte **)(pbStack_118 + lStack_1a0 * 0x48 + 0x18) = pbStack_108;
              *(byte **)(pbStack_118 + lStack_1a0 * 0x48 + 0x20) = pbStack_100;
              *(byte **)(pbStack_118 + lStack_1a0 * 0x48 + 0x28) = pbStack_1f8;
              *(undefined4 *)(pbStack_118 + lStack_1a0 * 0x48 + 0x30) = pcStack_1f0._0_4_;
              *(undefined8 *)(pbStack_118 + lStack_1a0 * 0x48 + 0x34) = uVar19;
              *(undefined4 *)(pbStack_118 + lStack_1a0 * 0x48 + 0x3c) = (undefined4)uStack_1a8;
              pbStack_118[lStack_1a0 * 0x48 + 0x40] = 1;
              lStack_110 = lStack_1a0 + 1;
              goto LAB_142883700;
            }
          }
        }
        *puStack_128 = uStack_1ac;
        lVar16 = *(longlong *)(lStack_130 + 0x30);
        pbStack_100 = *(byte **)(lStack_130 + 0x40);
        if (lVar16 == *(longlong *)(lStack_130 + 0x20)) {
          pdb_142d7e980(lStack_210);
        }
        lVar27 = *(longlong *)(lStack_130 + 0x28);
        *(byte **)(lVar27 + lVar16 * 0x10) = pbStack_100;
        *(undefined8 *)(lVar27 + 8 + lVar16 * 0x10) = uStack_200;
        *(longlong *)(lStack_130 + 0x30) = lVar16 + 1;
        *(longlong *)(lStack_130 + 0x40) = *(longlong *)(lStack_130 + 0x40) + 1;
        puVar31 = puStack_128;
      }
      goto LAB_142883700;
    }
    lStack_110 = 0;
    pauStack_190 = (undefined1 (*) [16])(pbStack_118 + lVar16 * 0x48);
    pbStack_198 = pbStack_118;
    plStack_188 = &lStack_120;
    lStack_180 = lVar16;
    pbStack_178 = (byte *)0x0;
    pdb_14207cd40(&pbStack_1c8,&pbStack_198);
    pbStack_198 = (byte *)0x0;
    pauStack_190 = (undefined1 (*) [16])0x8;
    plStack_188 = (longlong *)0x0;
    uVar19 = pdb_142b25220();
    pbStack_1f8 = (byte *)uVar19;
    pdb_14007ee60();
    pbStack_1d8 = pub_1406abab0(0x60,8);
    if (pbStack_1d8 == (byte *)0x0) {
      lStack_130 = uVar19;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x60);
    }
    pbStack_1d8[0x40] = 0;
    pbStack_1d8[0x41] = 0;
    pbStack_1d8[0x42] = 0;
    pbStack_1d8[0x43] = 0;
    pbStack_1d8[0x44] = 0;
    pbStack_1d8[0x45] = 0;
    pbStack_1d8[0x46] = 0;
    pbStack_1d8[0x47] = 0;
    pbStack_1d8[0x48] = 0;
    pbStack_1d8[0x49] = 0;
    pbStack_1d8[0x4a] = 0;
    pbStack_1d8[0x4b] = 0;
    pbStack_1d8[0x4c] = 0;
    pbStack_1d8[0x4d] = 0;
    pbStack_1d8[0x4e] = 0;
    pbStack_1d8[0x4f] = 0;
    pbStack_1d8[0] = 1;
    pbStack_1d8[1] = 0;
    pbStack_1d8[2] = 0;
    pbStack_1d8[3] = 0;
    pbStack_1d8[4] = 0;
    pbStack_1d8[5] = 0;
    pbStack_1d8[6] = 0;
    pbStack_1d8[7] = 0;
    pbStack_1d8[8] = 1;
    pbStack_1d8[9] = 0;
    pbStack_1d8[10] = 0;
    pbStack_1d8[0xb] = 0;
    pbStack_1d8[0xc] = 0;
    pbStack_1d8[0xd] = 0;
    pbStack_1d8[0xe] = 0;
    pbStack_1d8[0xf] = 0;
    pbStack_1d8[0x10] = 0;
    pbStack_1d8[0x11] = 0;
    pbStack_1d8[0x12] = 0;
    pbStack_1d8[0x13] = 0;
    pbStack_1d8[0x14] = 0;
    pbStack_1d8[0x15] = 0;
    pbStack_1d8[0x16] = 0;
    pbStack_1d8[0x17] = 0;
    pbStack_1d8[0x20] = 0;
    pbStack_1d8[0x21] = 0;
    pbStack_1d8[0x22] = 0;
    pbStack_1d8[0x23] = 0;
    pbStack_1d8[0x24] = 0;
    pbStack_1d8[0x25] = 0;
    pbStack_1d8[0x26] = 0;
    pbStack_1d8[0x27] = 0;
    pbStack_1d8[0x30] = 0;
    pbStack_1d8[0x31] = 0;
    pbStack_1d8[0x32] = 0;
    pbStack_1d8[0x33] = 0;
    pbStack_1d8[0x34] = 0;
    pbStack_1d8[0x35] = 0;
    pbStack_1d8[0x36] = 0;
    pbStack_1d8[0x37] = 0;
    pbStack_1d8[0x38] = 4;
    pbStack_1d8[0x39] = 0;
    pbStack_1d8[0x3a] = 0;
    pbStack_1d8[0x3b] = 0;
    pbStack_1d8[0x3c] = 0;
    pbStack_1d8[0x3d] = 0;
    pbStack_1d8[0x3e] = 0;
    pbStack_1d8[0x3f] = 0;
    pbStack_1d8[0x50] = 4;
    pbStack_1d8[0x51] = 0;
    pbStack_1d8[0x52] = 0;
    pbStack_1d8[0x53] = 0;
    pbStack_1d8[0x54] = 0;
    pbStack_1d8[0x55] = 0;
    pbStack_1d8[0x56] = 0;
    pbStack_1d8[0x57] = 0;
    pbStack_1d8[0x58] = 0;
    pbStack_1d8[0x59] = 0;
    pbStack_1d8[0x5a] = 0;
    pbStack_1d8[0x5b] = 0;
    pbStack_1d8[0x5c] = 0;
    pbStack_1d8[0x5d] = 0;
    pbStack_1d8[0x5e] = 0;
    pbStack_1d8[0x5f] = 0;
    pbStack_1f8 = pbStack_1c8;
    pcStack_1f0 = pcStack_1c0;
    uStack_1e8 = uStack_1b8;
    uStack_1e0 = uVar19;
    if (2 < *_DAT_143ca8e90) {
      uStack_228 = uStack_1b8;
      pbStack_1c8 = (byte *)&uStack_228;
      pcStack_1c0 = pdb_140f72a40;
      pbStack_198 = (byte *)0x0;
      pauStack_190 = (undefined1 (*) [16])&UNK_1435aa6ec;
      plStack_188 = (longlong *)0x24;
      lStack_180 = 0;
      pbStack_178 = &UNK_1435aa6b4;
      uStack_170 = 0x37;
      uStack_168 = 3;
      puStack_160 = &UNK_1435aa6ec;
      uStack_158 = 0x24;
      uStack_150 = 0x8500000001;
      puStack_148 = &UNK_1435aa728;
      uStack_f1 = 1;
      ppbStack_140 = &pbStack_1c8;
      pdb_140f332f0(&uStack_f2,&pbStack_198);
    }
    *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
    pbStack_178 = pbStack_1d8;
    plStack_188 = (longlong *)uStack_1e8;
    lStack_180 = uStack_1e0;
    pbStack_198 = pbStack_1f8;
    pauStack_190 = (undefined1 (*) [16])pcStack_1f0;
    uStack_f1 = 0;
    pdb_140ae3ff0(*param_11,&pbStack_198);
    pbVar21 = pbStack_118;
    if (lStack_110 != 0) {
      pbVar23 = pbStack_118 + 0x18;
      lVar13 = lStack_110;
      do {
        if ((*(int *)(pbVar23 + -0x18) != 1) && (*(ulonglong *)(pbVar23 + -8) != 0)) {
          pub_1406abac0(*(byte **)pbVar23,*(ulonglong *)(pbVar23 + -8),1);
        }
        pbVar23 = pbVar23 + 0x48;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (lStack_120 != 0) {
      pub_1406abac0(pbVar21,lStack_120 * 0x48,8);
    }
  }
  return;
}

