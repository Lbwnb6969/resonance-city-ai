// VA 0x140a891f0, PDB extent 5271 bytes
// country_core::utils::load_json::load_json_str_as_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::utils::load_json::load_json_str_as_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
   Extent: 5271 */

undefined8 *
pdb_140a891f0(undefined8 *param_1,uint ******param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint ******ppppppuVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *******pppppppuVar8;
  ulonglong uVar9;
  uint *******pppppppuVar10;
  char *pcVar11;
  undefined8 uVar12;
  byte bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *******pppppppuStack_2c0;
  uint *******pppppppuStack_2b8;
  uint *******pppppppuStack_2b0;
  uint *******pppppppuStack_2a8;
  uint *******pppppppuStack_2a0;
  uint *******pppppppuStack_298;
  uint *******pppppppuStack_290;
  uint *******pppppppuStack_288;
  uint *******pppppppuStack_280;
  uint ******ppppppuStack_278;
  uint ******ppppppuStack_270;
  uint ******ppppppuStack_268;
  undefined8 uStack_260;
  uint *******pppppppuStack_258;
  uint *******pppppppuStack_250;
  uint *******pppppppuStack_248;
  uint ******ppppppuStack_240;
  uint ******ppppppuStack_238;
  uint *******pppppppuStack_230;
  uint *******pppppppuStack_228;
  uint *******pppppppuStack_220;
  uint *******pppppppuStack_218;
  uint *******pppppppuStack_210;
  uint *******pppppppuStack_208;
  ulonglong uStack_200;
  byte *pbStack_1f8;
  uint *******pppppppuStack_1f0;
  uint *******pppppppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined4 uStack_19f;
  undefined2 uStack_19b;
  undefined1 uStack_199;
  uint *******pppppppuStack_198;
  uint *******pppppppuStack_190;
  uint *******pppppppuStack_188;
  uint ******ppppppuStack_180;
  uint *******pppppppuStack_178;
  uint *******pppppppuStack_170;
  ulonglong uStack_160;
  byte *pbStack_158;
  longlong lStack_150;
  uint uStack_144;
  uint *******pppppppuStack_140;
  uint *******pppppppuStack_138;
  byte bStack_130;
  undefined4 uStack_12f;
  undefined3 uStack_12b;
  byte *pbStack_128;
  uint *******pppppppuStack_120;
  uint *******pppppppuStack_118;
  uint *******pppppppuStack_110;
  uint uStack_104;
  uint *******pppppppuStack_100;
  uint *******pppppppuStack_f8;
  uint *******pppppppuStack_f0;
  uint *******pppppppuStack_e8;
  uint *******pppppppuStack_e0;
  uint *******pppppppuStack_d8;
  uint *******pppppppuStack_d0;
  uint *******pppppppuStack_c8;
  uint *******pppppppuStack_c0;
  uint *******pppppppuStack_b8;
  code *pcStack_b0;
  uint *******pppppppuStack_a0;
  undefined8 uStack_98;
  uint *******pppppppuStack_90;
  uint *******pppppppuStack_88;
  uint *******pppppppuStack_80;
  uint *******pppppppuStack_78;
  code *pcStack_70;
  uint *puStack_68;
  code *pcStack_60;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppppppuStack_268 = param_2;
  uStack_260 = param_3;
  pdb_14164f410(&pppppppuStack_218,param_6,param_7);
  pdb_141705f40(&uStack_98,&pppppppuStack_218,&ppppppuStack_268);
  bVar13 = (byte)uStack_98;
  if ((byte)uStack_98 == 6) {
    param_1[1] = pppppppuStack_90;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  uStack_12b = (undefined3)((ulonglong)uStack_98 >> 0x28);
  uStack_12f = uStack_98._1_4_;
  pppppppuStack_120 = pppppppuStack_88;
  pppppppuStack_118 = pppppppuStack_80;
  bStack_130 = (byte)uStack_98;
  pbStack_128 = (byte *)pppppppuStack_90;
  lVar6 = pdb_140e940b0(param_2,param_3);
  uVar12 = *(undefined8 *)(lVar6 + -8);
  plVar7 = (longlong *)pdb_14008d710(0);
  if (plVar7 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_143326860);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lStack_1c0 = *plVar7;
  lStack_1b8 = plVar7[1];
  *plVar7 = *plVar7 + 1;
  uStack_1d0 = _DAT_143046120;
  uStack_1c8 = _UNK_143046128;
  uStack_1e0 = _DAT_143046110;
  uStack_1d8 = _UNK_143046118;
  pppppppuStack_218 = (uint *******)0x0;
  pppppppuStack_210 = (uint *******)0x4;
  pppppppuStack_208 = (uint *******)0x0;
  uStack_200 = 0x8000000000000000;
  bStack_1a0 = 0;
  lStack_1b0 = lVar6;
  uStack_1a8 = uVar12;
  if (param_4 != 0) {
    pdb_140f3e010(&uStack_98,param_4,param_5);
    if ((!SBORROW8(0,uStack_200)) && (uStack_200 != 0)) {
      pub_1406abac0(pbStack_1f8,uStack_200,1);
    }
    pppppppuStack_1f0 = pppppppuStack_88;
    pppppppuStack_1e8 = pppppppuStack_80;
    uStack_200 = (ulonglong)uStack_98;
    pbStack_1f8 = (byte *)pppppppuStack_90;
  }
  pppppppuVar8 = (uint *******)pdb_141c0c220(&UNK_143043b28,7,&bStack_130);
  if (pppppppuVar8 == (uint *******)0x0) {
    pppppppuVar8 = _DAT_143cad928;
  }
  pppppppuVar8 = (uint *******)pdb_141c0c220(&UNK_143043b5a,6,pppppppuVar8);
  if (pppppppuVar8 == (uint *******)0x0) {
    pppppppuVar8 = _DAT_143cad928;
  }
  if (*(byte *)pppppppuVar8 == 4) {
    uStack_98 = (uint *******)pppppppuVar8[2];
    pppppppuStack_90 = uStack_98 + (longlong)pppppppuVar8[3] * 4;
    pppppppuStack_100 = (uint *******)0x0;
    pppppppuStack_88 = &ppppppuStack_268;
    pppppppuStack_80 = (uint *******)&pppppppuStack_100;
    pdb_1415fddb0(&pppppppuStack_d8,&uStack_98);
    pppppppuVar10 = pppppppuStack_c8;
    pppppppuVar8 = pppppppuStack_100;
    if (pppppppuStack_100 == (uint *******)0x0) {
      pppppppuStack_e0 = pppppppuStack_d8;
      pppppppuVar8 = pppppppuStack_d0;
      if (!SBORROW8(0,(longlong)pppppppuStack_d8)) {
        if (pppppppuStack_c8 == (uint *******)0x0) {
          uStack_144 = 0xffffffff;
        }
        else {
          uStack_144 = *(uint *)pppppppuStack_d0;
          if (pppppppuStack_c8 != (uint *******)0x1) {
            uVar9 = (longlong)pppppppuStack_c8 + 0x3fffffffffffffffU & 0x3fffffffffffffff;
            if (7 < uVar9) {
              uVar14 = (ulonglong)((longlong)pppppppuStack_c8 + 0x3fffffffffffffffU) &
                       0x3ffffffffffffff8;
              uVar15 = 0;
              uVar20 = uStack_144;
              uVar21 = uStack_144;
              uVar24 = uStack_144;
              uVar23 = uStack_144;
              uVar25 = uStack_144;
              uVar26 = uStack_144;
              uVar22 = uStack_144;
              do {
                puVar1 = (uint *)((longlong)pppppppuStack_d0 + (uVar15 + 1) * 4);
                puVar2 = (uint *)((longlong)pppppppuStack_d0 + (uVar15 + 5) * 4);
                uVar16 = -(uint)((int)*puVar1 < (int)uStack_144);
                uVar17 = -(uint)((int)puVar1[1] < (int)uVar20);
                uVar18 = -(uint)((int)puVar1[2] < (int)uVar21);
                uVar19 = -(uint)((int)puVar1[3] < (int)uVar24);
                uStack_144 = ~uVar16 & *puVar1 | uStack_144 & uVar16;
                uVar20 = ~uVar17 & puVar1[1] | uVar20 & uVar17;
                uVar21 = ~uVar18 & puVar1[2] | uVar21 & uVar18;
                uVar24 = ~uVar19 & puVar1[3] | uVar24 & uVar19;
                uVar16 = -(uint)((int)*puVar2 < (int)uVar23);
                uVar17 = -(uint)((int)puVar2[1] < (int)uVar25);
                uVar18 = -(uint)((int)puVar2[2] < (int)uVar26);
                uVar19 = -(uint)((int)puVar2[3] < (int)uVar22);
                uVar23 = ~uVar16 & *puVar2 | uVar23 & uVar16;
                uVar25 = ~uVar17 & puVar2[1] | uVar25 & uVar17;
                uVar26 = ~uVar18 & puVar2[2] | uVar26 & uVar18;
                uVar22 = ~uVar19 & puVar2[3] | uVar22 & uVar19;
                uVar15 = uVar15 + 8;
              } while (uVar14 != uVar15);
              uVar23 = ~-(uint)((int)uVar23 < (int)uStack_144) & uVar23 |
                       uStack_144 & -(uint)((int)uVar23 < (int)uStack_144);
              uVar25 = ~-(uint)((int)uVar25 < (int)uVar20) & uVar25 |
                       uVar20 & -(uint)((int)uVar25 < (int)uVar20);
              uVar26 = ~-(uint)((int)uVar26 < (int)uVar21) & uVar26 |
                       uVar21 & -(uint)((int)uVar26 < (int)uVar21);
              uVar24 = ~-(uint)((int)uVar22 < (int)uVar24) & uVar22 |
                       uVar24 & -(uint)((int)uVar22 < (int)uVar24);
              uVar20 = -(uint)((int)uVar26 < (int)uVar23);
              uVar21 = -(uint)((int)uVar24 < (int)uVar25);
              uVar20 = ~uVar20 & uVar26 | uVar23 & uVar20;
              uVar21 = ~uVar21 & uVar24 | uVar25 & uVar21;
              uVar24 = -(uint)((int)uVar21 < (int)uVar20);
              uStack_144 = ~uVar24 & uVar21 | uVar20 & uVar24;
              goto LAB_140a896ed;
            }
            uVar14 = 0;
            do {
              uVar20 = *(uint *)((longlong)pppppppuStack_d0 + (uVar14 + 1) * 4);
              if ((int)uVar20 < (int)uStack_144) {
                uVar20 = uStack_144;
              }
              uStack_144 = uVar20;
              uVar14 = uVar14 + 1;
LAB_140a896ed:
            } while (uVar9 != uVar14);
          }
        }
        pppppppuStack_140 = pppppppuStack_d0;
        uStack_49 = 1;
        uStack_104 = uStack_144;
        lVar6 = pdb_141c0c220(&UNK_143043b60,0xc,&bStack_130);
        uStack_49 = 1;
        cVar5 = pdb_141c0cd60(param_8,lVar6 != 0);
        if (cVar5 != '\0') {
          uStack_49 = 1;
          pdb_141c0cc90(pppppppuStack_140,pppppppuVar10);
        }
        if (pppppppuStack_218 != (uint *******)0x0) {
          pub_1406abac0((byte *)pppppppuStack_210,(longlong)pppppppuStack_218 << 2,4);
        }
        pppppppuStack_218 = pppppppuStack_e0;
        pppppppuStack_210 = pppppppuStack_140;
        pppppppuStack_208 = pppppppuVar10;
        uStack_49 = 0;
        pppppppuVar8 = (uint *******)pdb_141c0c220(&UNK_143043b6c,10,&bStack_130);
        if (pppppppuVar8 == (uint *******)0x0) {
          pppppppuVar8 = _DAT_143cad928;
        }
        if (*(byte *)pppppppuVar8 == 4) {
          uStack_98 = (uint *******)pppppppuVar8[2];
          pppppppuStack_90 = uStack_98 + (longlong)pppppppuVar8[3] * 4;
          pppppppuStack_100 = (uint *******)0x0;
          pppppppuStack_88 = &ppppppuStack_268;
          pppppppuStack_80 = (uint *******)&pppppppuStack_100;
          pdb_1415efa30(&pppppppuStack_d8,&uStack_98);
          pppppppuVar8 = pppppppuStack_100;
          if (pppppppuStack_100 == (uint *******)0x0) {
            pppppppuStack_110 = pppppppuStack_d8;
            pppppppuVar8 = pppppppuStack_d0;
            if (!SBORROW8(0,(longlong)pppppppuStack_d8)) {
              pppppppuStack_228 = pppppppuStack_d0 + (longlong)pppppppuStack_c8 * 2;
              pppppppuStack_138 = pppppppuStack_d0;
              if (pppppppuStack_d0 != pppppppuStack_228) {
                do {
                  ppppppuStack_278 = *pppppppuVar8;
                  ppppppuVar3 = pppppppuVar8[1];
                  ppppppuStack_270 = ppppppuVar3;
                  ppppppuStack_240 = ppppppuStack_278;
                  ppppppuStack_238 = ppppppuVar3;
                  pppppppuStack_230 = pppppppuVar8;
                  ppppppuStack_180 = ppppppuStack_278;
                  pppppppuVar8 = (uint *******)
                                 pdb_141c0c220(ppppppuStack_278,ppppppuVar3,&bStack_130);
                  if (pppppppuVar8 == (uint *******)0x0) {
                    pppppppuVar8 = _DAT_143cad928;
                  }
                  pppppppuVar8 = (uint *******)pdb_141c0c220(&UNK_143043b5a,6,pppppppuVar8);
                  if (pppppppuVar8 == (uint *******)0x0) {
                    pppppppuVar8 = _DAT_143cad928;
                  }
                  if (*(byte *)pppppppuVar8 != 4) {
                    pdb_140f3f5b0(&uStack_98);
                    pppppppuVar8 = (uint *******)pdb_142dea6e0(&UNK_143043bac,0x18,&uStack_98);
LAB_140a8a112:
                    pppppppuStack_90 = (uint *******)pdb_1402ed420;
                    pppppppuStack_88 = &ppppppuStack_240;
                    pppppppuStack_80 = (uint *******)pdb_1402ed400;
                    uStack_4c = 1;
                    pppppppuStack_258 = pppppppuVar8;
                    uStack_98 = &ppppppuStack_268;
                    pdb_140f60760(&pppppppuStack_198,&UNK_143326fb5,&uStack_98);
                    pppppppuStack_c8 = pppppppuStack_188;
                    pppppppuStack_d8 = pppppppuStack_198;
                    pppppppuStack_d0 = pppppppuStack_190;
                    uStack_98 = (uint *******)0x3;
                    uStack_4c = 0;
                    pppppppuStack_c0 = pppppppuVar8;
                    uVar12 = pdb_142de9850(&pppppppuStack_d8,&uStack_98);
                    param_1[1] = uVar12;
                    *param_1 = 0x8000000000000000;
LAB_140a8a1b8:
                    if (pppppppuStack_110 != (uint *******)0x0) {
                      pub_1406abac0((byte *)pppppppuStack_138,(longlong)pppppppuStack_110 << 4,8);
                    }
                    goto LAB_140a89538;
                  }
                  pppppppuVar10 =
                       (uint *******)pdb_141c0c220(ppppppuStack_180,ppppppuVar3,&bStack_130);
                  if (pppppppuVar10 == (uint *******)0x0) {
                    pppppppuVar10 = _DAT_143cad928;
                  }
                  uStack_98 = (uint *******)pdb_141c0c220(&UNK_143043bc4,4,pppppppuVar10);
                  if (uStack_98 == (uint *******)0x0) {
                    uStack_98 = _DAT_143cad928;
                  }
                  pppppppuStack_90 = (uint *******)pdb_140de0ce0;
                  pdb_140f60760(&uStack_160,&UNK_143043bc8,&uStack_98);
                  if (lStack_150 == 9) {
                    if (pbStack_158[8] == 0x5d && *(longlong *)pbStack_158 == 0x312c22746e69225b) {
                      uStack_98 = (uint *******)pppppppuVar8[2];
                      pppppppuStack_90 = uStack_98 + (longlong)pppppppuVar8[3] * 4;
                      pppppppuStack_a0 = (uint *******)0x0;
                      pppppppuStack_88 = (uint *******)&pppppppuStack_a0;
                      pdb_1415f8aa0(&pppppppuStack_d8,&uStack_98);
                      if (pppppppuStack_a0 == (uint *******)0x0) {
                        pppppppuVar8 = pppppppuStack_d0;
                        if (!SBORROW8(0,(longlong)pppppppuStack_d8)) {
                          pppppppuStack_258 = pppppppuStack_d8;
                          pppppppuStack_250 = pppppppuStack_d0;
                          pppppppuStack_248 = pppppppuStack_c8;
                          pdb_140e46910(&uStack_98,&pppppppuStack_258,&UNK_143043c20);
                          goto LAB_140a89de2;
                        }
                      }
                      else {
                        pppppppuVar8 = pppppppuStack_a0;
                        if (pppppppuStack_d8 != (uint *******)0x0) {
                          uVar9 = (longlong)pppppppuStack_d8 << 2;
LAB_140a8a0e9:
                          pppppppuVar8 = pppppppuStack_a0;
                          pub_1406abac0((byte *)pppppppuStack_d0,uVar9,4);
                        }
                      }
                      goto LAB_140a8a0f4;
                    }
LAB_140a89b4f:
                    uStack_98 = &ppppppuStack_278;
                    pppppppuStack_90 = (uint *******)pdb_1402ed400;
                    pppppppuStack_88 = (uint *******)&uStack_160;
                    pppppppuStack_80 = (uint *******)pdb_140001020;
                    pdb_140f60760(&pppppppuStack_d8,&UNK_143043bca,&uStack_98);
                    uStack_98 = pppppppuStack_d8;
                    pppppppuStack_90 = pppppppuStack_d0;
                    pppppppuStack_88 = pppppppuStack_c8;
                    pppppppuVar8 = (uint *******)pdb_142de92b0(&uStack_98);
                    pppppppuVar10 = (uint *******)0x6;
                  }
                  else {
                    if (lStack_150 != 0xb) goto LAB_140a89b4f;
                    if (*(longlong *)(pbStack_158 + 3) == 0x5d342c2274616f6c &&
                        *(longlong *)pbStack_158 == 0x2274616f6c66225b) {
                      uStack_98 = (uint *******)pppppppuVar8[2];
                      pppppppuStack_90 = uStack_98 + (longlong)pppppppuVar8[3] * 4;
                      pppppppuStack_a0 = (uint *******)0x0;
                      pppppppuStack_88 = (uint *******)&pppppppuStack_a0;
                      pdb_141603350(&pppppppuStack_d8,&uStack_98);
                      if (pppppppuStack_a0 == (uint *******)0x0) {
                        pppppppuVar8 = pppppppuStack_d0;
                        if (!SBORROW8(0,(longlong)pppppppuStack_d8)) {
                          pppppppuStack_290 = pppppppuStack_d8;
                          pppppppuStack_288 = pppppppuStack_d0;
                          pppppppuStack_280 = pppppppuStack_c8;
                          pdb_140e46bb0(&uStack_98,&pppppppuStack_290,&UNK_143043c68);
                          goto LAB_140a89de2;
                        }
                      }
                      else {
                        pppppppuVar8 = pppppppuStack_a0;
                        if (pppppppuStack_d8 != (uint *******)0x0) {
                          uVar9 = (longlong)pppppppuStack_d8 << 4;
                          goto LAB_140a8a0e9;
                        }
                      }
LAB_140a8a0f4:
                      if (uStack_160 != 0) {
                        pub_1406abac0(pbStack_158,uStack_160,1);
                      }
                      goto LAB_140a8a112;
                    }
                    if (*(longlong *)(pbStack_158 + 3) == 0x5d332c2274616f6c &&
                        *(longlong *)pbStack_158 == 0x2274616f6c66225b) {
                      pdb_140af3bf0(&uStack_98,pppppppuVar8[2],
                                    pppppppuVar8[2] + (longlong)pppppppuVar8[3] * 4);
                      pppppppuVar8 = pppppppuStack_90;
                      if (SBORROW8(0,(longlong)uStack_98)) goto LAB_140a8a0f4;
                      pppppppuStack_2a8 = uStack_98;
                      pppppppuStack_2a0 = pppppppuStack_90;
                      pppppppuStack_298 = pppppppuStack_88;
                      pdb_140e46b40(&uStack_98,&pppppppuStack_2a8,&UNK_143043c50);
                    }
                    else if (*(longlong *)(pbStack_158 + 3) == 0x5d322c2274616f6c &&
                             *(longlong *)pbStack_158 == 0x2274616f6c66225b) {
                      pdb_140af3cc0(&uStack_98,pppppppuVar8[2],
                                    pppppppuVar8[2] + (longlong)pppppppuVar8[3] * 4);
                      pppppppuVar8 = pppppppuStack_90;
                      if (SBORROW8(0,(longlong)uStack_98)) goto LAB_140a8a0f4;
                      pppppppuStack_2c0 = uStack_98;
                      pppppppuStack_2b8 = pppppppuStack_90;
                      pppppppuStack_2b0 = pppppppuStack_88;
                      pdb_140e46ad0(&uStack_98,&pppppppuStack_2c0,&UNK_143043c38);
                    }
                    else {
                      if (*(longlong *)(pbStack_158 + 3) != 0x5d312c2274616f6c ||
                          *(longlong *)pbStack_158 != 0x2274616f6c66225b) goto LAB_140a89b4f;
                      pdb_140af3b30(&uStack_98,pppppppuVar8[2],
                                    pppppppuVar8[2] + (longlong)pppppppuVar8[3] * 4);
                      pppppppuVar8 = pppppppuStack_90;
                      if (SBORROW8(0,(longlong)uStack_98)) goto LAB_140a8a0f4;
                      pppppppuStack_198 = uStack_98;
                      pppppppuStack_190 = pppppppuStack_90;
                      pppppppuStack_188 = pppppppuStack_88;
                      pdb_140e468a0(&uStack_98,&pppppppuStack_198,&UNK_143043c08);
                    }
LAB_140a89de2:
                    pppppppuStack_178 = pppppppuStack_88;
                    pppppppuStack_170 = pppppppuStack_80;
                    pppppppuVar10 = uStack_98;
                    pppppppuVar8 = pppppppuStack_90;
                  }
                  if (uStack_160 != 0) {
                    pub_1406abac0(pbStack_158,uStack_160,1);
                  }
                  if (pppppppuVar10 == (uint *******)0x6) goto LAB_140a8a112;
                  pppppppuStack_f0 = pppppppuStack_178;
                  pppppppuStack_e8 = pppppppuStack_170;
                  pppppppuStack_220 = pppppppuStack_170;
                  pppppppuStack_100 = pppppppuVar10;
                  pppppppuStack_f8 = pppppppuVar8;
                  if ((int)pppppppuStack_170 <= (int)uStack_104) {
                    pppppppuStack_198 = pppppppuStack_170;
                    pppppppuStack_90 = (uint *******)pdb_1402ed420;
                    pppppppuStack_88 = &ppppppuStack_240;
                    pppppppuStack_80 = (uint *******)pdb_1402ed400;
                    pppppppuStack_78 = (uint *******)&pppppppuStack_198;
                    pcStack_70 = pdb_140f72a40;
                    puStack_68 = &uStack_144;
                    pcStack_60 = pdb_140f71c50;
                    uStack_98 = &ppppppuStack_268;
                    pdb_140a87b90(&pppppppuStack_d8,&uStack_98);
                    uStack_98 = pppppppuStack_d8;
                    pppppppuStack_90 = pppppppuStack_d0;
                    pppppppuStack_88 = pppppppuStack_c8;
                    uVar12 = pdb_142de92b0(&uStack_98);
                    param_1[1] = uVar12;
                    *param_1 = 0x8000000000000000;
                    pdb_140a8f680(&pppppppuStack_100);
                    goto LAB_140a8a1b8;
                  }
                  pppppppuStack_88 = pppppppuStack_178;
                  pppppppuStack_80 = pppppppuStack_170;
                  uStack_98 = pppppppuVar10;
                  pppppppuStack_90 = pppppppuVar8;
                  pdb_140c92e80(&pppppppuStack_218,ppppppuStack_180,ppppppuVar3,&uStack_98);
                  pppppppuVar8 = pppppppuStack_230 + 2;
                } while (pppppppuVar8 != pppppppuStack_228);
              }
              if (pppppppuStack_110 != (uint *******)0x0) {
                pub_1406abac0((byte *)pppppppuStack_138,(longlong)pppppppuStack_110 << 4,8);
              }
              uStack_49 = 0;
              pcVar11 = (char *)pdb_141c0c220(&UNK_143043b60,0xc,&bStack_130);
              if (pcVar11 == (char *)0x0) {
                bStack_1a0 = 1;
              }
              else {
                bVar13 = 2;
                if (*pcVar11 == '\x01') {
                  bVar13 = pcVar11[1];
                }
                bStack_1a0 = 1;
                if (bVar13 != 2) {
                  bStack_1a0 = bVar13 & 1;
                }
              }
              param_1[0xc] = lStack_1b8;
              param_1[0xd] = lStack_1b0;
              param_1[10] = uStack_1c8;
              param_1[0xb] = lStack_1c0;
              param_1[8] = uStack_1d8;
              param_1[9] = uStack_1d0;
              param_1[6] = pppppppuStack_1e8;
              param_1[7] = uStack_1e0;
              param_1[4] = pbStack_1f8;
              param_1[5] = pppppppuStack_1f0;
              param_1[2] = pppppppuStack_208;
              param_1[3] = uStack_200;
              *param_1 = pppppppuStack_218;
              param_1[1] = pppppppuStack_210;
              param_1[0xe] = uStack_1a8;
              *(byte *)(param_1 + 0xf) = bStack_1a0;
              *(undefined4 *)((longlong)param_1 + 0x79) = uStack_19f;
              *(undefined2 *)((longlong)param_1 + 0x7d) = uStack_19b;
              *(undefined1 *)((longlong)param_1 + 0x7f) = uStack_199;
              pdb_140a7a6f0(&bStack_130);
              return param_1;
            }
          }
          else if (pppppppuStack_d8 != (uint *******)0x0) {
            pub_1406abac0((byte *)pppppppuStack_d0,(longlong)pppppppuStack_d8 << 4,8);
          }
          param_1[1] = pppppppuVar8;
          goto LAB_140a89535;
        }
        pppppppuStack_90 = (uint *******)pdb_1402ed420;
        uStack_49 = 0;
        uStack_98 = &ppppppuStack_268;
        pdb_140f60760(&pppppppuStack_100,&UNK_14307258d,&uStack_98);
        uStack_4b = 1;
        pdb_140f3f5b0(&uStack_98);
        pppppppuStack_b8 = pppppppuStack_78;
        pcStack_b0 = pcStack_70;
        pppppppuStack_c8 = pppppppuStack_88;
        pppppppuStack_c0 = pppppppuStack_80;
        pppppppuStack_d8 = uStack_98;
        pppppppuStack_d0 = pppppppuStack_90;
        uStack_4b = 0;
        uVar12 = pdb_142de9770(&pppppppuStack_100,&pppppppuStack_d8);
        goto LAB_140a8950d;
      }
    }
    else if (pppppppuStack_d8 != (uint *******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_d0,(longlong)pppppppuStack_d8 << 2,4);
    }
    param_1[1] = pppppppuVar8;
  }
  else {
    pppppppuStack_90 = (uint *******)pdb_1402ed420;
    uStack_98 = &ppppppuStack_268;
    pdb_140f60760(&pppppppuStack_100,&UNK_143072568,&uStack_98);
    uStack_4a = 1;
    pdb_140f3f5b0(&uStack_98);
    pppppppuStack_b8 = pppppppuStack_78;
    pcStack_b0 = pcStack_70;
    pppppppuStack_c8 = pppppppuStack_88;
    pppppppuStack_c0 = pppppppuStack_80;
    pppppppuStack_d8 = uStack_98;
    pppppppuStack_d0 = pppppppuStack_90;
    uStack_4a = 0;
    uVar12 = pdb_142de9770(&pppppppuStack_100,&pppppppuStack_d8);
LAB_140a8950d:
    param_1[1] = uVar12;
  }
LAB_140a89535:
  *param_1 = 0x8000000000000000;
LAB_140a89538:
  pdb_14098a960(&pppppppuStack_218);
  if (2 < bVar13) {
    if (bVar13 == 3) {
      if (pbStack_128 != (byte *)0x0) {
        pub_1406abac0((byte *)pppppppuStack_120,(ulonglong)pbStack_128,1);
      }
    }
    else if (bVar13 == 4) {
      pppppppuStack_e0 = pppppppuStack_120;
      pdb_14098ae50(pppppppuStack_120,pppppppuStack_118);
      if (pbStack_128 != (byte *)0x0) {
        pub_1406abac0((byte *)pppppppuStack_e0,(longlong)pbStack_128 << 5,8);
      }
    }
    else {
      pdb_1409a45e0(&pbStack_128);
    }
  }
  return param_1;
}

