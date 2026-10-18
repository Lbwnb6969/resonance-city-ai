// VA 0x1429633c0, PDB extent 4637 bytes
// system_critters::sheep::ui_pet_sheep::ui_pet_sheep
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/ui_pet_sheep.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::sheep::ui_pet_sheep::ui_pet_sheep
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/ui_pet_sheep.rs
   Extent: 4637 */

void pdb_1429633c0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7,float *param_8,
                  undefined8 *param_9,undefined8 *param_10,longlong *param_11)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  float fVar10;
  char cVar11;
  undefined1 uVar12;
  byte bVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  uint *puVar28;
  bool bVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  ulonglong uStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_378;
  undefined8 uStack_370;
  float fStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  float fStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined8 auStack_218 [3];
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  longlong lStack_1e8;
  undefined4 *puStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined4 *puStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  undefined4 *puStack_1a0;
  undefined4 *puStack_198;
  longlong lStack_190;
  longlong lStack_188;
  undefined8 uStack_180;
  ulonglong uStack_178;
  ulonglong *puStack_170;
  byte *pbStack_168;
  longlong lStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  ulonglong uStack_150;
  longlong lStack_148;
  uint *puStack_140;
  longlong lStack_138;
  longlong lStack_130;
  float *pfStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined4 uStack_104;
  longlong lStack_100;
  char cStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cVar11 = *(char *)*param_1;
  if (cVar11 == '\x10') {
    cVar11 = pdb_140a36620(*param_6);
    if (cVar11 == '\x03') goto LAB_142963482;
  }
  else if ((cVar11 != '\t') && ((cVar11 != '\x01' || (((char *)*param_1)[1] == '\0')))) {
LAB_142963482:
    fVar10 = _DAT_142e37834;
    lStack_110 = *param_3;
    lVar27 = param_3[1];
    uStack_104 = *(undefined4 *)((longlong)param_3 + 0x14);
    puVar28 = *(uint **)(lStack_110 + 0xf8);
    puVar25 = puVar28 + *(longlong *)(lStack_110 + 0x100);
    lStack_1b0 = *param_6;
    uStack_1f8 = *param_2;
    puStack_1f0 = (undefined8 *)*param_9;
    uStack_180 = *param_5;
    lStack_1e8 = *param_7 + 0x2c;
    uStack_158 = *(undefined4 *)((longlong)param_4 + 0x1c);
    lStack_190 = *param_4;
    puStack_1e0 = (undefined4 *)param_4[2];
    puStack_170 = (ulonglong *)*param_10;
    lStack_1d8 = param_10[1];
    uStack_154 = *(undefined4 *)((longlong)param_11 + 0x1c);
    lStack_160 = *param_11;
    puStack_1c8 = (undefined4 *)param_11[2];
    cStack_f3 = *(char *)(lStack_110 + 0x108);
    lStack_1d0 = lStack_190 + 0x20;
    lStack_1c0 = lStack_160 + 0x20;
    lStack_188 = 8;
    lStack_100 = 0;
    lStack_120 = 0;
    lStack_118 = 0;
    lVar26 = 0;
    uStack_150 = 0;
    lVar24 = lStack_1b0;
    fVar43 = _DAT_142e377f0;
    fVar31 = _DAT_143605350;
    fVar42 = _UNK_143605354;
    fVar45 = _UNK_143605358;
    fVar44 = _UNK_14360535c;
    fVar46 = _DAT_142e36f28;
    lStack_1b8 = lVar27;
    puStack_140 = puVar25;
    while( true ) {
      do {
        while( true ) {
          do {
            iVar21 = (int)uStack_150;
            if (cStack_f3 == '\0') {
              if (iVar21 == (int)lVar26) {
                if (puVar28 == puVar25) {
                  return;
                }
                while( true ) {
                  lVar26 = *(longlong *)
                            (*(longlong *)(lVar27 + 0x100) + 0x58 + (ulonglong)*puVar28 * 0xa0);
                  if (lVar26 != 0) break;
                  puVar28 = puVar28 + 1;
                  if (puVar28 == puVar25) {
                    return;
                  }
                }
                lVar14 = *(longlong *)(lVar27 + 0x100) + (ulonglong)*puVar28 * 0xa0;
                uVar18 = (ulonglong)*(uint *)(lVar14 + 0x94);
                lVar22 = *(longlong *)(lVar27 + 0x1a0);
                lVar20 = *(longlong *)(lVar22 + 0x18 + uVar18 * 0x48);
                lVar6 = *(longlong *)(lVar22 + 0x38 + uVar18 * 0x48);
                if ((*(ulonglong *)(lStack_110 + 0x118) <
                     *(ulonglong *)(lVar22 + 0x40 + uVar18 * 0x48)) &&
                   (uVar18 = *(ulonglong *)(lVar6 + *(ulonglong *)(lStack_110 + 0x118) * 8),
                   uVar18 != 0)) {
                  lStack_100 = *(longlong *)(lVar20 + 0x10 + ~uVar18 * 0x30);
                }
                else {
                  lStack_100 = 0;
                }
                lVar22 = ~*(ulonglong *)(lVar6 + *(longlong *)(lStack_110 + 0x110) * 8) * 0x30;
                lStack_120 = *(longlong *)(lVar20 + 0x10 + lVar22);
                lStack_138 = *(longlong *)(lVar20 + 0x28 + lVar22);
                puVar28 = puVar28 + 1;
                lVar22 = ~*(ulonglong *)(lVar6 + *(longlong *)(lStack_110 + 0x120) * 8) * 0x30;
                lStack_118 = *(longlong *)(lVar20 + 0x10 + lVar22);
                lStack_130 = *(longlong *)(lVar20 + 0x28 + lVar22);
                lStack_188 = *(longlong *)(lVar14 + 0x50);
                iVar21 = 0;
                uStack_150 = 0;
              }
              else {
                uStack_150 = uStack_150 & 0xffffffff;
              }
              uStack_150 = (ulonglong)~*(uint *)(lStack_188 + 8 + uStack_150 * 0x10);
            }
            else {
              if (iVar21 == (int)lVar26) {
                do {
                  if (puVar28 == puVar25) {
                    return;
                  }
                  uVar5 = *puVar28;
                  puVar28 = puVar28 + 1;
                  lVar26 = *(longlong *)
                            (*(longlong *)(lVar27 + 0x1a0) + 0x10 + (ulonglong)uVar5 * 0x48);
                } while (lVar26 == 0);
                lVar22 = *(longlong *)(lVar27 + 0x1a0) + (ulonglong)uVar5 * 0x48;
                lVar20 = *(longlong *)(lVar22 + 0x18);
                lVar6 = *(longlong *)(lVar22 + 0x38);
                if ((*(ulonglong *)(lStack_110 + 0x118) < *(ulonglong *)(lVar22 + 0x40)) &&
                   (uVar18 = *(ulonglong *)(lVar6 + *(ulonglong *)(lStack_110 + 0x118) * 8),
                   uVar18 != 0)) {
                  lStack_100 = *(longlong *)(lVar20 + 0x10 + ~uVar18 * 0x30);
                }
                else {
                  lStack_100 = 0;
                }
                lVar22 = ~*(ulonglong *)(lVar6 + *(longlong *)(lStack_110 + 0x110) * 8) * 0x30;
                lStack_120 = *(longlong *)(lVar20 + 0x10 + lVar22);
                lStack_138 = *(longlong *)(lVar20 + 0x28 + lVar22);
                lVar22 = ~*(ulonglong *)(lVar6 + *(longlong *)(lStack_110 + 0x120) * 8) * 0x30;
                lStack_118 = *(longlong *)(lVar20 + 0x10 + lVar22);
                lStack_130 = *(longlong *)(lVar20 + 0x28 + lVar22);
                uStack_150 = 0;
              }
              iVar21 = (int)uStack_150;
              uStack_150 = uStack_150 & 0xffffffff;
            }
            lStack_148 = uStack_150 * 0x68 + lStack_120;
            puStack_1a0 = (undefined4 *)(lStack_138 + uStack_150 * 4);
            pfStack_128 = (float *)(uStack_150 * 0x30 + lStack_100);
            lStack_1a8 = uStack_150 * 0x38 + lStack_118;
            puStack_198 = (undefined4 *)(lStack_130 + uStack_150 * 4);
            uStack_150 = (ulonglong)(iVar21 + 1);
            cVar11 = pdb_140a36620(lVar24);
          } while ((cVar11 == '\x03') &&
                  (pdb_140a34500(&fStack_2c8,lVar24),
                  fVar10 < SQRT((fStack_2c0 - pfStack_128[6]) * (fStack_2c0 - pfStack_128[6]) +
                                (fStack_2c4 - pfStack_128[5]) * (fStack_2c4 - pfStack_128[5]) +
                                (fStack_2c8 - pfStack_128[4]) * (fStack_2c8 - pfStack_128[4]))));
          uStack_378 = (undefined8 *)(lStack_148 + 0x20);
          uStack_370 = pdb_140f72a40;
          puStack_200 = uStack_378;
          pdb_140f60760(&fStack_2c8,&UNK_143605390,&uStack_378);
          auStack_218[0] = CONCAT44(fStack_2c4,fStack_2c8);
          uVar2 = *(undefined8 *)(pfStack_128 + 4);
          fVar1 = pfStack_128[6];
          fStack_368 = fVar1 + fVar44;
          uStack_378 = (undefined8 *)CONCAT44(fVar43 + fVar31,(float)uStack_378);
          uStack_370 = (code *)CONCAT44((float)((ulonglong)uVar2 >> 0x20) + fVar45,
                                        (float)uVar2 + fVar42);
          uStack_378 = (undefined8 *)((ulonglong)uStack_378 & 0xffffffffffffff00);
          uStack_3d8 = uStack_3d8 & 0xffffffffffffff00;
          uStack_f1 = 1;
          pdb_140c9dcb0(&fStack_2c8,&uStack_378,&uStack_3d8);
          uStack_f2 = 1;
          pdb_140c9dee0(&uStack_3d8);
          uStack_f2 = 0;
          pdb_140c9dd20(&uStack_378,&fStack_2c8,&uStack_3d8);
          uStack_f1 = 1;
          pdb_140c9dc40(&fStack_2c8,&uStack_378);
          uStack_f1 = 0;
          puVar23 = auStack_218;
          uStack_3d8 = pdb_142807c30(uStack_1f8,puVar23,&fStack_2c8);
          puStack_3d0 = puVar23;
          pdb_1408ff9a0(&fStack_2c8,&uStack_3d8);
          fVar34 = fStack_29c;
          fVar33 = fStack_2a0;
          fVar32 = fStack_2a4;
          if (fStack_2c8 != 2.8026e-45) {
            pdb_140a34500(&uStack_378,lVar24);
            *param_8 = SQRT((fVar34 - (float)uStack_370) * (fVar34 - (float)uStack_370) +
                            (fVar33 - uStack_378._4_4_) * (fVar33 - uStack_378._4_4_) +
                            (fVar32 - (float)uStack_378) * (fVar32 - (float)uStack_378));
          }
          cVar11 = pdb_1408ffaf0(&uStack_3d8);
          puVar25 = puStack_140;
          lVar27 = lStack_1b8;
          if (cVar11 != '\0') {
            fVar43 = *param_8;
            fVar31 = (float)pdb_1414c77e0(fVar43,lVar24);
            if (fVar31 <= _DAT_143006dc0) {
              fVar31 = _DAT_143006dc0;
            }
            fVar42 = _DAT_143061374 / fVar31;
            if (fVar46 <= _DAT_143061374 / fVar31) {
              fVar42 = fVar46;
            }
            fVar34 = *(float *)(lVar24 + 0xc4);
            fVar31 = *(float *)(lVar24 + 200);
            fVar35 = *(float *)(lVar24 + 0xd0);
            fVar45 = *(float *)(lVar24 + 0xd8);
            fVar32 = SUB164(*(undefined1 (*) [16])(lVar24 + 0xe0),0);
            fVar33 = SUB164(*(undefined1 (*) [16])(lVar24 + 0xe0),4);
            fVar44 = *(float *)(lVar24 + 0xe8);
            if (fVar44 <= 0.0) {
              fVar49 = *(float *)(lVar24 + 0xd4) - *(float *)(lVar24 + 0xc0);
              if (fVar49 <= 0.0) {
                fVar49 = (fVar46 - fVar44) - fVar49;
                fVar44 = _DAT_142e36f50 / SQRT(fVar49);
                fVar46 = fVar44 * fVar49;
                fVar38 = fVar44 * (*(float *)(lVar24 + 0xd8) - fVar33);
                fVar49 = fVar44 * (fVar34 + fVar35);
                fVar44 = fVar44 * (*(float *)(lVar24 + 200) + fVar32);
              }
              else {
                fVar49 = fVar49 + (fVar46 - fVar44);
                fVar44 = _DAT_142e36f50 / SQRT(fVar49);
                fVar46 = (fVar34 + fVar35) * fVar44;
                fVar38 = (fVar32 - fVar31) * fVar44;
                fVar49 = fVar49 * fVar44;
                fVar44 = (fVar45 + fVar33) * fVar44;
              }
            }
            else {
              fVar38 = *(float *)(lVar24 + 0xd4) + *(float *)(lVar24 + 0xc0);
              if (fVar38 <= 0.0) {
                fVar44 = (fVar44 + fVar46) - fVar38;
                fVar36 = _DAT_142e36f50 / SQRT(fVar44);
                fVar46 = fVar36 * (fVar31 + fVar32);
                fVar38 = fVar36 * (fVar34 - fVar35);
                fVar49 = fVar36 * (fVar45 + fVar33);
                fVar44 = fVar44 * fVar36;
              }
              else {
                fVar38 = fVar38 + fVar44 + fVar46;
                fVar44 = _DAT_142e36f50 / SQRT(fVar38);
                fVar46 = (fVar45 - fVar33) * fVar44;
                fVar38 = fVar38 * fVar44;
                fVar49 = (fVar32 - fVar31) * fVar44;
                fVar44 = (fVar34 - fVar35) * fVar44;
              }
            }
            fVar31 = *(float *)((longlong)puStack_1f0 + 0x14);
            uVar3 = *puStack_1f0;
            uVar4 = *(undefined8 *)((longlong)puStack_1f0 + 0xc);
            fVar45 = *(float *)(puStack_1f0 + 1);
            uStack_378 = (undefined8 *)lStack_1e8;
            uStack_370 = pdb_140f71a50;
            pdb_140f60760(&fStack_2c8,&UNK_14360539d,&uStack_378);
            uStack_178 = CONCAT44(fStack_2c4,fStack_2c8);
            pbVar17 = (byte *)CONCAT44(uStack_2bc,fStack_2c0);
            uVar9 = CONCAT44(uStack_2b4,fStack_2b8);
            pdb_14007ee60();
            pbVar15 = pub_1406abab0(0x30,0x10);
            if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(0x10,0x30);
            }
            fVar32 = fVar46 * _DAT_143314df0 * _DAT_142e377b0;
            fVar33 = fVar46 * _UNK_143314df4 * _UNK_142e377b4;
            fVar35 = fVar46 * _UNK_143314df8 * _UNK_142e377b8;
            fVar37 = fVar46 * _UNK_143314dfc * _UNK_142e377bc;
            fVar39 = fVar38 * _DAT_143314de0;
            fVar40 = fVar38 * _UNK_143314de4;
            fVar41 = fVar38 * _UNK_143314de8;
            fVar38 = fVar38 * _UNK_143314dec;
            fVar46 = fVar49 * _DAT_143314e00 * _DAT_142e377c0;
            fVar34 = fVar49 * _UNK_143314e04 * _UNK_142e377c4;
            fVar36 = fVar49 * _UNK_143314e08 * _UNK_142e377c8;
            fVar49 = fVar49 * _UNK_143314e0c * _UNK_142e377cc;
            fVar47 = fVar44 * _DAT_143314e10 * _DAT_142e377d0;
            fVar48 = fVar44 * _UNK_143314e14 * _UNK_142e377d4;
            fVar50 = fVar44 * _UNK_143314e18 * _UNK_142e377d8;
            fVar44 = fVar44 * _UNK_143314e1c * _UNK_142e377dc;
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
            *(float *)(pbVar15 + 0x10) = fVar47 + fVar46 + fVar39 + fVar32;
            *(float *)(pbVar15 + 0x14) = fVar48 + fVar34 + fVar40 + fVar33;
            *(float *)(pbVar15 + 0x18) = fVar50 + fVar36 + fVar41 + fVar35;
            *(float *)(pbVar15 + 0x1c) = fVar44 + fVar49 + fVar38 + fVar37;
            fVar46 = ((float)((ulonglong)uVar3 >> 0x20) + fVar43 * (float)((ulonglong)uVar4 >> 0x20)
                     ) * _UNK_143605364;
            fVar31 = (fVar31 * fVar43 + fVar45) * _UNK_143605368;
            fVar42 = fVar42 * _UNK_14360536c;
            *(float *)(pbVar15 + 0x20) = ((float)uVar3 + fVar43 * (float)uVar4) * _DAT_143605360;
            *(float *)(pbVar15 + 0x24) = fVar46;
            *(float *)(pbVar15 + 0x28) = fVar31;
            *(float *)(pbVar15 + 0x2c) = fVar42;
            pbStack_168 = pbVar17;
            pdb_1409baea0(&fStack_2c8,pbVar17,uVar9,pbVar15,&UNK_1436053a8);
            fStack_368 = fStack_2b8;
            uStack_364 = uStack_2b4;
            uStack_360 = uStack_2b0;
            uStack_35c = uStack_2ac;
            uStack_378 = (undefined8 *)CONCAT44(fStack_2c4,fStack_2c8);
            uStack_370 = (code *)CONCAT44(uStack_2bc,fStack_2c0);
            pdb_140b133a0(uStack_180,&uStack_378);
            lVar27 = lStack_1b8;
            fVar44 = _UNK_14360535c;
            fVar45 = _UNK_143605358;
            fVar42 = _UNK_143605354;
            fVar31 = _DAT_143605350;
            fVar43 = _DAT_142e377f0;
            fVar46 = _DAT_142e36f28;
            if (uStack_178 != 0) {
              pub_1406abac0(pbStack_168,uStack_178,1);
            }
          }
          uVar12 = pdb_1408ffab0(&uStack_3d8);
          fStack_2c8 = (float)CONCAT31(fStack_2c8._1_3_,uVar12);
          cVar11 = pdb_140901040(&fStack_2c8);
          if (cVar11 != '\0') {
            uVar3 = *puStack_200;
            *puStack_1e0 = uStack_158;
            lVar24 = *(longlong *)(lStack_190 + 0x30);
            uVar4 = *(undefined8 *)(lStack_190 + 0x40);
            if (lVar24 == *(longlong *)(lStack_190 + 0x20)) {
              pdb_142d7e980(lStack_1d0);
            }
            lVar22 = *(longlong *)(lStack_190 + 0x28);
            *(undefined8 *)(lVar22 + lVar24 * 0x10) = uVar4;
            *(undefined8 *)(lVar22 + 8 + lVar24 * 0x10) = uVar3;
            *(longlong *)(lStack_190 + 0x30) = lVar24 + 1;
            *(longlong *)(lStack_190 + 0x40) = *(longlong *)(lStack_190 + 0x40) + 1;
            puVar25 = puStack_140;
          }
          bVar13 = pdb_1408ffab0(&uStack_3d8);
          lVar22 = lStack_1a8;
          cVar11 = bVar13 - 2;
          if (bVar13 < 2) {
            cVar11 = '\x03';
          }
          lVar24 = lStack_1b0;
          if (cVar11 != '\x01') break;
          if (_DAT_142e36f50 < *(float *)(lStack_1a8 + 0x34)) {
            pdb_140a8a930(lStack_1a8);
            *puStack_198 = uStack_104;
            *(undefined4 *)(lVar22 + 0x34) = 0;
            lVar24 = lStack_1b0;
          }
        }
      } while (cVar11 != '\x02');
      uVar18 = *puStack_170;
      uVar19 = uVar18 - *(ulonglong *)(lStack_1d8 + 0x18);
      if (uVar18 < *(ulonglong *)(lStack_1d8 + 0x18)) {
        uVar19 = 0;
      }
      uVar16 = uVar18 - *(ulonglong *)(lStack_1d8 + 0x38);
      if (uVar18 < *(ulonglong *)(lStack_1d8 + 0x38)) {
        uVar16 = 0;
      }
      uVar18 = *(ulonglong *)(lStack_1d8 + 0x30);
      lVar24 = uVar18 - uVar16;
      bVar29 = lVar24 != 0;
      if (uVar18 < uVar16) {
        lVar24 = 0;
      }
      uVar7 = *(ulonglong *)(lStack_1d8 + 0x10);
      lVar22 = uVar7 - uVar19;
      bVar30 = lVar22 != 0;
      if (uVar7 < uVar19) {
        lVar22 = 0;
      }
      uVar8 = *(ulonglong *)(lStack_1d8 + 0x40);
      *puStack_170 = uVar8 - (lVar22 + lVar24);
      if (uVar7 >= uVar19 && bVar30 || uVar18 >= uVar16 && bVar29) {
        *puStack_170 = uVar8;
        cVar11 = pdb_140a36620(lStack_1b0);
        if (cVar11 == '\x03') {
          *puStack_1c8 = uStack_154;
          lVar24 = *(longlong *)(lStack_160 + 0x30);
          uVar3 = *(undefined8 *)(lStack_160 + 0x40);
          if (lVar24 == *(longlong *)(lStack_160 + 0x20)) {
            pdb_142d7e6e0(lStack_1c0);
          }
          lVar22 = *(longlong *)(lStack_160 + 0x28);
          lVar20 = lVar24 * 0x20;
          *(undefined8 *)(lVar22 + lVar20) = uVar3;
          *(undefined8 *)(lVar22 + 8 + lVar20) = uVar2;
          *(float *)(lVar22 + 0x10 + lVar20) = fVar1;
          *(undefined4 *)(lVar22 + 0x14 + lVar20) = 0x3f800000;
          *(undefined1 *)(lVar22 + 0x18 + lVar20) = 4;
          *(longlong *)(lStack_160 + 0x30) = lVar24 + 1;
          *(longlong *)(lStack_160 + 0x40) = *(longlong *)(lStack_160 + 0x40) + 1;
          puVar25 = puStack_140;
        }
      }
      fVar1 = pfStack_128[7];
      fVar38 = (float)*(undefined8 *)(pfStack_128 + 8);
      fVar36 = (float)((ulonglong)*(undefined8 *)(pfStack_128 + 8) >> 0x20);
      fVar33 = *pfStack_128;
      fVar34 = pfStack_128[1];
      fVar35 = pfStack_128[2];
      fVar49 = pfStack_128[3];
      fVar32 = pfStack_128[4];
      uVar2 = *(undefined8 *)(pfStack_128 + 5);
      pdb_14007ee60();
      pbVar17 = pub_1406abab0(0x20,8);
      fVar46 = _DAT_142e36f28;
      if (pbVar17 == (byte *)0x0) break;
      fVar41 = fVar35 + fVar35;
      fVar39 = fVar34 + fVar34;
      fVar50 = fVar33 * (fVar33 + fVar33);
      fVar40 = (fVar33 + fVar33) * fVar49;
      fVar48 = _DAT_142e36f28 - (fVar34 * fVar39 + fVar35 * fVar41);
      fVar37 = (fVar39 * fVar33 - fVar49 * fVar41) * fVar38 * _DAT_143605370;
      fVar35 = (_DAT_142e36f28 - (fVar35 * fVar41 + fVar50)) * fVar38 * _UNK_143605374;
      fVar38 = (fVar40 + fVar41 * fVar34) * fVar38 * _UNK_143605378;
      fVar47 = (fVar39 * fVar49 + fVar41 * fVar33) * fVar36 * _DAT_143605380;
      fVar40 = (fVar41 * fVar34 - fVar40) * fVar36 * _UNK_143605384;
      fVar34 = (_DAT_142e36f28 - (fVar50 + fVar34 * fVar39)) * fVar36 * _UNK_143605388;
      pbVar17[0] = 1;
      pbVar17[1] = 0;
      pbVar17[2] = 0;
      pbVar17[3] = 0;
      pbVar17[4] = 0;
      pbVar17[5] = 0;
      pbVar17[6] = 0;
      pbVar17[7] = 0;
      pbVar17[8] = 1;
      pbVar17[9] = 0;
      pbVar17[10] = 0;
      pbVar17[0xb] = 0;
      pbVar17[0xc] = 0;
      pbVar17[0xd] = 0;
      pbVar17[0xe] = 0;
      pbVar17[0xf] = 0;
      *(ulonglong *)(pbVar17 + 0x10) =
           CONCAT44(fVar40 + fVar35 + (fVar39 * fVar33 + fVar49 * fVar41) * fVar1 * 0.0 +
                    (float)uVar2,fVar47 + fVar37 + fVar48 * fVar1 * 0.0 + fVar32);
      *(float *)(pbVar17 + 0x18) =
           fVar34 + fVar38 + (fVar41 * fVar33 - fVar39 * fVar49) * fVar1 * 0.0 +
           (float)((ulonglong)uVar2 >> 0x20);
      pdb_1409baea0(&fStack_2c8,&UNK_143605408,9,pbVar17,&UNK_1436053d8);
      fStack_368 = fStack_2b8;
      uStack_364 = uStack_2b4;
      uStack_360 = uStack_2b0;
      uStack_35c = uStack_2ac;
      uStack_378 = (undefined8 *)CONCAT44(fStack_2c4,fStack_2c8);
      uStack_370 = (code *)CONCAT44(uStack_2bc,fStack_2c0);
      pdb_140b133a0(uStack_180,&uStack_378);
      *puStack_1a0 = uStack_104;
      *(undefined8 *)(lStack_148 + 8) = 0x40e0000000000001;
      lVar24 = lStack_1b0;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x20);
  }
  return;
}

