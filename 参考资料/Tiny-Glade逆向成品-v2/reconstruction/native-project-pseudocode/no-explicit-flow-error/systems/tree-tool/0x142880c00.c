// VA 0x142880c00, PDB extent 6287 bytes
// system_tree::hide_trees::hide_trees
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/hide_trees.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::hide_trees::hide_trees
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/hide_trees.rs
   Extent: 6287 */

void pdb_142880c00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  ulonglong uVar6;
  char *pcVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 (*pauVar13) [16];
  float fVar14;
  undefined4 uVar15;
  byte **ppbVar16;
  char cVar17;
  uint uVar18;
  ulonglong uVar19;
  char *pcVar20;
  ulonglong uVar21;
  int *piVar22;
  longlong lVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  byte **ppbVar29;
  undefined8 *puVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  byte *pbVar33;
  ulonglong uVar34;
  longlong lVar35;
  byte *pbVar36;
  longlong lVar37;
  byte *pbVar38;
  byte **ppbVar39;
  byte **ppbVar40;
  undefined1 (*pauVar41) [16];
  byte *pbVar42;
  longlong lVar43;
  byte *pbVar44;
  ulonglong *puVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  byte **ppbStack_268;
  byte **ppbStack_260;
  undefined4 auStack_254 [2];
  undefined4 uStack_24c;
  undefined8 *puStack_248;
  undefined1 (*pauStack_240) [16];
  undefined4 uStack_238;
  undefined4 uStack_234;
  uint uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 *puStack_218;
  undefined4 *puStack_210;
  byte **ppbStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  longlong lStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  ushort uStack_1d0;
  undefined2 uStack_1ce;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  byte **ppbStack_1b8;
  undefined4 uStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  byte **ppbStack_1a0;
  longlong lStack_198;
  byte *pbStack_190;
  longlong lStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 *puStack_178;
  byte **ppbStack_170;
  byte **ppbStack_168;
  byte *pbStack_160;
  ulonglong *puStack_158;
  byte *pbStack_150;
  byte **ppbStack_148;
  ulonglong *puStack_140;
  undefined8 uStack_130;
  ulonglong *puStack_128;
  byte **ppbStack_120;
  byte **ppbStack_118;
  byte *pbStack_110;
  longlong *plStack_108;
  ulonglong *puStack_100;
  byte **ppbStack_f8;
  byte **ppbStack_f0;
  byte *pbStack_e8;
  byte **ppbStack_e0;
  longlong lStack_d8;
  byte **ppbStack_d0;
  byte *pbStack_c8;
  byte **ppbStack_c0;
  char cStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  lVar35 = param_5[1];
  uVar25 = *(ulonglong *)*param_5;
  pbVar36 = (byte *)0x0;
  pbVar44 = (byte *)(uVar25 - *(ulonglong *)(lVar35 + 0x18));
  if (uVar25 < *(ulonglong *)(lVar35 + 0x18)) {
    pbVar44 = pbVar36;
  }
  pbVar42 = (byte *)(uVar25 - *(ulonglong *)(lVar35 + 0x38));
  if (uVar25 < *(ulonglong *)(lVar35 + 0x38)) {
    pbVar42 = pbVar36;
  }
  lVar37 = (longlong)pbVar44 * 0x28 + *(longlong *)(lVar35 + 8);
  lVar43 = (longlong)pbVar42 * 0x28 + *(longlong *)(lVar35 + 0x28);
  bVar46 = *(byte **)(lVar35 + 0x10) < pbVar44;
  pbVar44 = *(byte **)(lVar35 + 0x10) + -(longlong)pbVar44;
  bVar48 = pbVar44 == (byte *)0x0;
  if (bVar46) {
    lVar37 = 8;
    pbVar44 = pbVar36;
  }
  pbVar38 = (byte *)(lVar37 + -0x28 + (longlong)pbVar44 * 0x28);
  if (bVar46 || bVar48) {
    pbVar38 = pbVar36;
  }
  bVar47 = *(byte **)(lVar35 + 0x30) < pbVar42;
  pbVar42 = *(byte **)(lVar35 + 0x30) + -(longlong)pbVar42;
  bVar49 = pbVar42 == (byte *)0x0;
  if (bVar47) {
    lVar43 = 8;
    pbVar42 = pbVar36;
  }
  pbVar33 = (byte *)(lVar43 + -0x28 + (longlong)pbVar42 * 0x28);
  if (bVar47 || bVar49) {
    pbVar33 = pbVar38;
  }
  pbVar44 = pbVar42 + (longlong)pbVar44;
  if (!bVar46 && !bVar48 || !bVar47 && !bVar49) {
    pbVar44 = pbVar36;
  }
  *(ulonglong *)*param_5 = *(longlong *)(lVar35 + 0x40) - (longlong)pbVar44;
  if ((bVar46 || bVar48) && (bVar47 || bVar49)) {
    puStack_140 = (ulonglong *)*param_4;
    lVar35 = param_4[1];
    uVar25 = *puStack_140;
    uVar19 = 0;
    uVar21 = uVar25 - *(ulonglong *)(lVar35 + 0x18);
    if (uVar25 < *(ulonglong *)(lVar35 + 0x18)) {
      uVar21 = uVar19;
    }
    uVar34 = uVar25 - *(ulonglong *)(lVar35 + 0x38);
    if (uVar25 < *(ulonglong *)(lVar35 + 0x38)) {
      uVar34 = uVar19;
    }
    ppbVar39 = (byte **)(uVar21 * 0x18 + *(longlong *)(lVar35 + 8));
    uVar25 = *(ulonglong *)(lVar35 + 0x10) - uVar21;
    if (*(ulonglong *)(lVar35 + 0x10) < uVar21) {
      ppbVar39 = (byte **)0x8;
      uVar25 = uVar19;
    }
    ppbStack_d0 = (byte **)(uVar34 * 0x18 + *(longlong *)(lVar35 + 0x28));
    uVar21 = *(ulonglong *)(lVar35 + 0x30) - uVar34;
    if (*(ulonglong *)(lVar35 + 0x30) < uVar34) {
      ppbStack_d0 = (byte **)0x8;
      uVar21 = uVar19;
    }
    *puStack_140 = (*(longlong *)(lVar35 + 0x40) - uVar21) - uVar25;
    uVar11 = _DAT_142e3798c;
    ppbStack_268 = ppbVar39 + uVar25 * 3;
    ppbStack_260 = ppbStack_d0 + uVar21 * 3;
    puStack_178 = (undefined8 *)*param_2;
    ppbStack_f0 = (byte **)*param_6;
    uStack_180 = *(undefined4 *)((longlong)param_8 + 0x1c);
    uStack_200 = *param_8;
    puStack_218 = (undefined4 *)param_8[2];
    puVar26 = (ulonglong *)*param_1;
    ppbVar29 = (byte **)param_1[1];
    uStack_130 = CONCAT44(uStack_130._4_4_,*(undefined4 *)((longlong)param_1 + 0x14));
    uStack_17c = *(undefined4 *)((longlong)param_7 + 0x1c);
    ppbStack_1a0 = (byte **)*param_7;
    puStack_210 = (undefined4 *)param_7[2];
    ppbStack_208 = ppbStack_1a0 + 4;
    ppbStack_170 = (byte **)param_3;
    ppbStack_120 = ppbVar29;
    puStack_100 = puVar26;
    do {
      do {
        if ((ppbVar39 == (byte **)0x0) || (ppbVar39 == ppbStack_268)) {
          if ((ppbStack_d0 == (byte **)0x0) || (ppbStack_d0 == ppbStack_260)) {
            puStack_128 = (ulonglong *)*ppbStack_170;
            lVar35 = (longlong)ppbStack_170[1];
            uVar25 = *puStack_128;
            uVar19 = 0;
            uVar21 = uVar25 - *(ulonglong *)(lVar35 + 0x18);
            if (uVar25 < *(ulonglong *)(lVar35 + 0x18)) {
              uVar21 = uVar19;
            }
            uVar34 = uVar25 - *(ulonglong *)(lVar35 + 0x38);
            if (uVar25 < *(ulonglong *)(lVar35 + 0x38)) {
              uVar34 = uVar19;
            }
            ppbStack_148 = (byte **)(uVar21 * 0x30 + *(longlong *)(lVar35 + 8));
            uVar25 = *(ulonglong *)(lVar35 + 0x10) - uVar21;
            if (*(ulonglong *)(lVar35 + 0x10) < uVar21) {
              ppbStack_148 = (byte **)0x8;
              uVar25 = uVar19;
            }
            ppbVar39 = (byte **)(uVar34 * 0x30 + *(longlong *)(lVar35 + 0x28));
            uVar21 = *(ulonglong *)(lVar35 + 0x30) - uVar34;
            if (*(ulonglong *)(lVar35 + 0x30) < uVar34) {
              ppbVar39 = (byte **)0x8;
              uVar21 = uVar19;
            }
            *puStack_128 = (*(longlong *)(lVar35 + 0x40) - uVar21) - uVar25;
            fVar12 = _DAT_142e37adc;
            ppbStack_170 = ppbStack_148 + uVar25 * 6;
            ppbStack_120 = ppbVar39 + uVar21 * 6;
            do {
              do {
                if ((ppbStack_148 == (byte **)0x0) || (ppbStack_148 == ppbStack_170)) {
                  if (ppbVar39 == (byte **)0x0) {
                    return;
                  }
                  if (ppbVar39 == ppbStack_120) {
                    return;
                  }
                  ppbStack_148 = (byte **)0x0;
                  ppbVar40 = ppbVar39 + 6;
                  ppbVar16 = ppbStack_148;
                  ppbStack_d0 = ppbVar39;
                }
                else {
                  ppbVar40 = ppbVar39;
                  ppbVar16 = ppbStack_148 + 6;
                  ppbStack_d0 = ppbStack_148;
                }
                ppbStack_148 = ppbVar16;
                ppbVar39 = ppbVar40;
                *puStack_128 = *puStack_128 + 1;
                pdb_140a2fb40(&puStack_248,puStack_178);
                param_2 = (undefined8 *)CONCAT44(uStack_224,uStack_228);
              } while (param_2 == (undefined8 *)0x0);
              pbStack_e8 = (byte *)((longlong)ppbStack_d0 + 4);
              uVar18 = uStack_230 & 0xffff;
              param_8 = puStack_248;
              pauVar41 = pauStack_240;
              ppbStack_e0 = ppbVar39;
              do {
                if ((short)uVar18 == 0) {
                  do {
                    auVar4 = *pauVar41;
                    param_8 = param_8 + -0x20;
                    pauVar41 = pauVar41 + 1;
                    uVar18 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
                  } while (uVar18 == 0);
                }
                iVar9 = 0;
                for (uVar10 = uVar18; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                  iVar9 = iVar9 + 1;
                }
                uVar24 = *(undefined8 *)((longlong)param_8 + (-8 - (ulonglong)(uint)(iVar9 << 4)));
                uVar25 = (ulonglong)~(uint)uVar24;
                if ((((uVar25 < ppbVar29[2]) &&
                     (piVar22 = (int *)(uVar25 * 0x18 + (longlong)ppbVar29[1]),
                     piVar22[4] == (int)((ulonglong)uVar24 >> 0x20))) && (*piVar22 != 0)) &&
                   ((uVar25 = *(ulonglong *)(piVar22 + 2), (uVar25 & 0xffffffff) < puVar26[7] &&
                    ((*(ulonglong *)(puVar26[5] + (uVar25 >> 6 & 0x3ffffff) * 8) >> (uVar25 & 0x3f)
                     & 1) != 0)))) {
                  uVar25 = uVar25 >> 0x20;
                  uVar21 = (ulonglong)ppbVar29[0x34];
                  uVar19 = *(ulonglong *)(uVar21 + 0x40 + uVar25 * 0x48);
                  lVar35 = *(longlong *)(uVar21 + 0x18 + uVar25 * 0x48);
                  lVar43 = *(longlong *)(uVar21 + 0x38 + uVar25 * 0x48);
                  if ((puVar26[0x23] < uVar19) &&
                     (uVar25 = *(ulonglong *)(lVar43 + puVar26[0x23] * 8), uVar25 != 0)) {
                    lVar37 = *(longlong *)(lVar35 + 0x10 + ~uVar25 * 0x30);
                    uVar25 = puVar26[0x24];
                    if (uVar19 <= uVar25) goto LAB_142881cdc;
LAB_142881cba:
                    uVar25 = *(ulonglong *)(lVar43 + uVar25 * 8);
                    if (uVar25 == 0) goto LAB_142881cdc;
                    lStack_d8 = *(longlong *)(lVar35 + 0x10 + ~uVar25 * 0x30);
                  }
                  else {
                    lVar37 = 0;
                    uVar25 = puVar26[0x24];
                    if (uVar25 < uVar19) goto LAB_142881cba;
LAB_142881cdc:
                    lStack_d8 = 0;
                  }
                  lVar23 = ~*(ulonglong *)(lVar43 + puVar26[0x22] * 8) * 0x30;
                  pbStack_c8 = *(byte **)(lVar35 + 0x10 + lVar23);
                  ppbStack_c0 = *(byte ***)(lVar35 + 0x28 + lVar23);
                  if ((puVar26[0x25] < uVar19) &&
                     (uVar25 = *(ulonglong *)(lVar43 + puVar26[0x25] * 8), uVar25 != 0)) {
                    ppbStack_f8 = *(byte ***)(lVar35 + 0x10 + ~uVar25 * 0x30);
                  }
                  else {
                    ppbStack_f8 = (byte **)0x0;
                  }
                  puStack_140 = *(ulonglong **)
                                 ((longlong)param_8 + (-0x10 - (ulonglong)(uint)(iVar9 << 4)));
                  uVar25 = (ulonglong)(uint)~piVar22[1];
                  lVar43 = uVar25 * 0x30;
                  *(undefined4 *)((longlong)ppbStack_c0 + uVar25 * 4) = (undefined4)uStack_130;
                  pbStack_c8[uVar25 * 0x10 + 0xc] = 0;
                  lStack_1e8 = *(longlong *)(lVar37 + lVar43);
                  lVar35 = ((longlong *)(lVar37 + lVar43))[1];
                  puVar2 = (undefined4 *)(lVar37 + 0x10 + lVar43);
                  uStack_1d8 = *puVar2;
                  uStack_1d4 = puVar2[1];
                  uStack_1cc = puVar2[3];
                  puVar3 = (undefined4 *)(lVar37 + 0x20 + lVar43);
                  uStack_1c8 = *puVar3;
                  uStack_1c4 = puVar3[1];
                  uStack_1c0 = puVar3[2];
                  uStack_1bc = puVar3[3];
                  uStack_1d0 = (ushort)puVar2[2];
                  uStack_1ce = (undefined2)((uint)puVar2[2] >> 0x10);
                  uStack_1e0 = (undefined4)lVar35;
                  uStack_1dc = (undefined4)((ulonglong)lVar35 >> 0x20);
                  pdb_140b40d00(&uStack_1f4,&lStack_1e8);
                  if ((*(float *)((longlong)ppbStack_d0 + 0x1c) <= 0.0) ||
                     (ppbVar39 = ppbStack_e0, puVar26 = puStack_100,
                     *(float *)((longlong)ppbStack_d0 + 0x1c) - fStack_1f0 <= fVar12)) {
                    if (*(byte *)ppbStack_d0 == 0) {
                      pdb_140def9f0(&ppbStack_118,pbStack_e8,
                                    *(float *)(ppbStack_d0 + 4) + *(float *)(ppbStack_d0 + 4));
                      cVar17 = pdb_140def450(&ppbStack_118,uStack_1f4,uStack_1ec);
                      pbVar44 = pbStack_c8;
                      ppbVar40 = ppbStack_c0;
                    }
                    else {
                      pdb_140df2190(&ppbStack_118,pbStack_e8,*(undefined4 *)(ppbStack_d0 + 4),
                                    *(undefined4 *)(ppbStack_d0 + 4));
                      cVar17 = pdb_140df1700(&ppbStack_118,uStack_1f4,uStack_1ec);
                      pbVar44 = pbStack_c8;
                      ppbVar40 = ppbStack_c0;
                    }
                    ppbVar39 = ppbStack_e0;
                    puVar26 = puStack_100;
                    pbStack_c8 = pbVar44;
                    ppbStack_c0 = ppbVar40;
                    if (cVar17 != '\0') {
                      *(undefined4 *)((longlong)ppbVar40 + uVar25 * 4) = (undefined4)uStack_130;
                      pbVar44[uVar25 * 0x10 + 0xc] = 1;
                      if (*(byte *)((longlong)ppbStack_d0 + 0x24) == 1) {
                        *puStack_210 = uStack_17c;
                        ppbStack_c0 = (byte **)ppbStack_1a0[6];
                        pbStack_c8 = ppbStack_1a0[8];
                        pbVar36 = pbStack_c8;
                        ppbVar39 = ppbStack_c0;
                        if (ppbStack_c0 == (byte **)ppbStack_1a0[4]) {
                          pdb_142d7e980(ppbStack_208);
                          pbVar36 = pbStack_c8;
                          ppbVar39 = ppbStack_c0;
                          pbVar44 = pbStack_c8;
                          ppbVar40 = ppbStack_c0;
                        }
                        ppbStack_c0 = ppbVar40;
                        pbStack_c8 = pbVar44;
                        ppbVar40 = ppbStack_f8;
                        uVar32 = uStack_1d4;
                        uVar11 = uStack_1d8;
                        lVar35 = lStack_1e8;
                        pbVar44 = ppbStack_1a0[5];
                        *(byte **)(pbVar44 + (longlong)ppbVar39 * 0x10) = pbVar36;
                        *(ulonglong **)(pbVar44 + (longlong)ppbVar39 * 0x10 + 8) = puStack_140;
                        ppbStack_1a0[6] = (byte *)((longlong)ppbVar39 + 1);
                        ppbStack_1a0[8] = ppbStack_1a0[8] + 1;
                        *puStack_218 = uStack_180;
                        uVar24 = CONCAT44(uStack_1dc,uStack_1e0);
                        ppbVar39 = ppbStack_1a0;
                        pbVar44 = (byte *)pdb_1418bded0(lStack_d8 + uVar25 * 0x58 + 0x48);
                        if ((longlong)ppbVar39 < 0) {
                          ppbVar39 = ppbStack_f0;
                          pdb_142dc7e2a(0);
                          goto LAB_142882042;
                        }
                        ppbStack_c0 = ppbVar39;
                        if (ppbVar39 == (byte **)0x0) {
                          ppbStack_f0 = (byte **)0x1;
                        }
                        else {
                          ppbStack_f8 = (byte **)CONCAT44(ppbStack_f8._4_4_,uVar32);
                          pbStack_c8 = pbVar44;
                          pdb_14007ee60();
                          ppbVar39 = ppbStack_c0;
                          ppbStack_f0 = (byte **)pub_1406abab0((ulonglong)ppbStack_c0,1);
                          if (ppbStack_f0 == (byte **)0x0) {
                            ppbStack_f0 = ppbVar39;
                            pdb_142dc7e2a(1,ppbVar39);
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          pub_142e32760(ppbStack_f0,pbStack_c8,ppbVar39);
                          uVar32 = ppbStack_f8._0_4_;
                        }
                        bVar5 = *(byte *)(ppbVar40 + uVar25 * 2 + 1);
                        pdb_14007ee60();
                        pbVar44 = pub_1406abab0(0x58,8);
                        if (pbVar44 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc7e11(8,0x58);
                        }
                        pbVar44[0] = 1;
                        pbVar44[1] = 0;
                        pbVar44[2] = 0;
                        pbVar44[3] = 0;
                        pbVar44[4] = 0;
                        pbVar44[5] = 0;
                        pbVar44[6] = 0;
                        pbVar44[7] = 0;
                        pbVar44[8] = 1;
                        pbVar44[9] = 0;
                        pbVar44[10] = 0;
                        pbVar44[0xb] = 0;
                        pbVar44[0xc] = 0;
                        pbVar44[0xd] = 0;
                        pbVar44[0xe] = 0;
                        pbVar44[0xf] = 0;
                        pbVar44[0x10] = 2;
                        pbVar44[0x11] = 0;
                        pbVar44[0x12] = 0;
                        pbVar44[0x13] = 0;
                        *(ulonglong **)(pbVar44 + 0x18) = puStack_140;
                        *(byte ***)(pbVar44 + 0x20) = ppbStack_c0;
                        *(byte ***)(pbVar44 + 0x28) = ppbStack_f0;
                        *(byte ***)(pbVar44 + 0x30) = ppbStack_c0;
                        *(longlong *)(pbVar44 + 0x38) = lVar35;
                        *(undefined8 *)(pbVar44 + 0x40) = uVar24;
                        *(undefined4 *)(pbVar44 + 0x48) = uVar11;
                        *(undefined4 *)(pbVar44 + 0x4c) = uVar32;
                        pbVar44[0x50] = bVar5;
                        ppbStack_118 = (byte **)0xc;
                        pbStack_110 = pbVar44;
                        pdb_140ae5180(uStack_200,&ppbStack_118,&UNK_1435aa478);
                        ppbVar39 = ppbStack_e0;
                        puVar26 = puStack_100;
                      }
                    }
                  }
                }
                uVar18 = uVar18 - 1 & uVar18;
                param_2 = (undefined8 *)((longlong)param_2 + -1);
              } while (param_2 != (undefined8 *)0x0);
            } while( true );
          }
          ppbStack_c0 = (byte **)0x0;
          ppbVar40 = ppbStack_d0;
          ppbStack_d0 = ppbStack_d0 + 3;
        }
        else {
          ppbStack_c0 = ppbVar39 + 3;
          ppbVar40 = ppbVar39;
        }
        *puStack_140 = *puStack_140 + 1;
        pdb_140a2fb40(&puStack_248);
        puVar45 = (ulonglong *)CONCAT44(uStack_224,uStack_228);
        ppbVar39 = ppbStack_c0;
      } while (puVar45 == (ulonglong *)0x0);
      ppbStack_148 = ppbVar40 + 1;
      uVar18 = uStack_230 & 0xffff;
      pauVar41 = pauStack_240;
      puVar30 = puStack_248;
      ppbStack_f8 = ppbVar40;
      do {
        if ((short)uVar18 == 0) {
          do {
            auVar4 = *pauVar41;
            puVar30 = puVar30 + -0x20;
            pauVar41 = pauVar41 + 1;
            uVar18 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
          } while (uVar18 == 0);
        }
        iVar9 = 0;
        for (uVar10 = uVar18; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          iVar9 = iVar9 + 1;
        }
        uVar24 = *(undefined8 *)((longlong)puVar30 + (-8 - (ulonglong)(uint)(iVar9 << 4)));
        uVar25 = (ulonglong)~(uint)uVar24;
        if ((((uVar25 < ppbVar29[2]) &&
             (piVar22 = (int *)(uVar25 * 0x18 + (longlong)ppbVar29[1]),
             piVar22[4] == (int)((ulonglong)uVar24 >> 0x20))) && (*piVar22 != 0)) &&
           ((uVar25 = *(ulonglong *)(piVar22 + 2), (uVar25 & 0xffffffff) < puVar26[7] &&
            ((*(ulonglong *)(puVar26[5] + (uVar25 >> 6 & 0x3ffffff) * 8) >> (uVar25 & 0x3f) & 1) !=
             0)))) {
          uVar25 = uVar25 >> 0x20;
          uVar21 = (ulonglong)ppbVar29[0x34];
          uVar19 = *(ulonglong *)(uVar21 + 0x40 + uVar25 * 0x48);
          lVar35 = *(longlong *)(uVar21 + 0x18 + uVar25 * 0x48);
          lVar43 = *(longlong *)(uVar21 + 0x38 + uVar25 * 0x48);
          if ((puVar26[0x23] < uVar19) &&
             (uVar25 = *(ulonglong *)(lVar43 + puVar26[0x23] * 8), uVar25 != 0)) {
            lVar37 = *(longlong *)(lVar35 + 0x10 + ~uVar25 * 0x30);
            uVar25 = puVar26[0x24];
            if (uVar19 <= uVar25) goto LAB_142880ffd;
LAB_142880fdb:
            uVar25 = *(ulonglong *)(lVar43 + uVar25 * 8);
            if (uVar25 == 0) goto LAB_142880ffd;
            lStack_d8 = *(longlong *)(lVar35 + 0x10 + ~uVar25 * 0x30);
          }
          else {
            lVar37 = 0;
            uVar25 = puVar26[0x24];
            if (uVar25 < uVar19) goto LAB_142880fdb;
LAB_142880ffd:
            lStack_d8 = 0;
          }
          lVar23 = ~*(ulonglong *)(lVar43 + puVar26[0x22] * 8) * 0x30;
          ppbStack_e0 = *(byte ***)(lVar35 + 0x10 + lVar23);
          pbVar44 = *(byte **)(lVar35 + 0x28 + lVar23);
          if ((puVar26[0x25] < uVar19) &&
             (uVar25 = *(ulonglong *)(lVar43 + puVar26[0x25] * 8), uVar25 != 0)) {
            pbStack_c8 = *(byte **)(lVar35 + 0x10 + ~uVar25 * 0x30);
          }
          else {
            pbStack_c8 = (byte *)0x0;
          }
          puStack_128 = *(ulonglong **)((longlong)puVar30 + (-0x10 - (ulonglong)(uint)(iVar9 << 4)))
          ;
          uVar25 = (ulonglong)(uint)~piVar22[1];
          lVar23 = uVar25 * 0x10;
          lVar43 = uVar25 * 0x30;
          *(undefined4 *)(pbVar44 + uVar25 * 4) = (undefined4)uStack_130;
          *(byte *)((longlong)ppbStack_e0 + lVar23 + 0xc) = 0;
          lStack_1e8 = *(longlong *)(lVar37 + lVar43);
          lVar35 = ((longlong *)(lVar37 + lVar43))[1];
          puVar2 = (undefined4 *)(lVar37 + 0x10 + lVar43);
          uStack_1d8 = *puVar2;
          uStack_1d4 = puVar2[1];
          uStack_1cc = puVar2[3];
          puVar3 = (undefined4 *)(lVar37 + 0x20 + lVar43);
          uStack_1c8 = *puVar3;
          uStack_1c4 = puVar3[1];
          uStack_1c0 = puVar3[2];
          uStack_1bc = puVar3[3];
          uStack_1d0 = (ushort)puVar2[2];
          uStack_1ce = (undefined2)((uint)puVar2[2] >> 0x10);
          uStack_1e0 = (undefined4)lVar35;
          uStack_1dc = (undefined4)((ulonglong)lVar35 >> 0x20);
          pdb_140b40d00(auStack_254,&lStack_1e8);
          lStack_198 = CONCAT71(lStack_198._1_7_,1);
          pbStack_e8 = pbVar44;
          pdb_140defa80(auStack_288,auStack_254[0],uStack_24c,uVar11);
          ppbStack_118 = ppbStack_148;
          pbStack_110 = (byte *)auStack_254;
          plStack_108 = &lStack_198;
          pdb_142b248e0(ppbStack_f0,auStack_288,&ppbStack_118);
          ppbVar29 = ppbStack_120;
          puVar26 = puStack_100;
          if ((char)lStack_198 == '\0') {
            *(undefined4 *)(pbStack_e8 + uVar25 * 4) = (undefined4)uStack_130;
            *(byte *)((longlong)ppbStack_e0 + lVar23 + 0xc) = 1;
            if (*(byte *)(ppbStack_f8 + 2) != 0) {
              *puStack_210 = uStack_17c;
              ppbVar39 = (byte **)ppbStack_1a0[6];
              pbVar44 = ppbStack_1a0[8];
              if (ppbVar39 == (byte **)ppbStack_1a0[4]) {
                pbStack_e8 = ppbStack_1a0[8];
                ppbStack_e0 = ppbVar39;
                pdb_142d7e980(ppbStack_208);
                pbVar44 = pbStack_e8;
                ppbVar39 = ppbStack_e0;
              }
              uVar31 = uStack_1d4;
              uVar32 = uStack_1d8;
              lVar35 = lStack_1e8;
              pbVar42 = pbStack_c8 + lVar23;
              pbVar36 = ppbStack_1a0[5];
              *(byte **)(pbVar36 + (longlong)ppbVar39 * 0x10) = pbVar44;
              *(ulonglong **)(pbVar36 + (longlong)ppbVar39 * 0x10 + 8) = puStack_128;
              ppbStack_1a0[6] = (byte *)((longlong)ppbVar39 + 1);
              ppbStack_1a0[8] = ppbStack_1a0[8] + 1;
              *puStack_218 = uStack_180;
              uVar24 = CONCAT44(uStack_1dc,uStack_1e0);
              ppbVar39 = ppbStack_1a0;
              pbVar44 = (byte *)pdb_1418bded0(lStack_d8 + uVar25 * 0x58 + 0x48);
              if ((longlong)ppbVar39 < 0) {
                pdb_142dc7e2a(0,ppbStack_168);
                goto LAB_1428819bd;
              }
              ppbStack_e0 = ppbVar39;
              if (ppbVar39 == (byte **)0x0) {
                ppbStack_168 = (byte **)0x1;
              }
              else {
                lStack_d8 = CONCAT44(lStack_d8._4_4_,uVar31);
                pbStack_e8 = pbVar44;
                pbStack_c8 = pbVar42;
                pdb_14007ee60();
                ppbVar39 = ppbStack_e0;
                ppbStack_168 = (byte **)pub_1406abab0((ulonglong)ppbStack_e0,1);
                if (ppbStack_168 == (byte **)0x0) {
                  ppbStack_168 = ppbVar39;
                  pdb_142dc7e2a(1,ppbVar39);
                  goto LAB_1428820f9;
                }
                pub_142e32760(ppbStack_168,pbStack_e8,ppbVar39);
                pbVar42 = pbStack_c8;
                uVar31 = (undefined4)lStack_d8;
              }
              bVar5 = pbVar42[8];
              pdb_14007ee60();
              pbVar44 = pub_1406abab0(0x58,8);
              if (pbVar44 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(8,0x58);
              }
              pbVar44[0] = 1;
              pbVar44[1] = 0;
              pbVar44[2] = 0;
              pbVar44[3] = 0;
              pbVar44[4] = 0;
              pbVar44[5] = 0;
              pbVar44[6] = 0;
              pbVar44[7] = 0;
              pbVar44[8] = 1;
              pbVar44[9] = 0;
              pbVar44[10] = 0;
              pbVar44[0xb] = 0;
              pbVar44[0xc] = 0;
              pbVar44[0xd] = 0;
              pbVar44[0xe] = 0;
              pbVar44[0xf] = 0;
              pbVar44[0x10] = 2;
              pbVar44[0x11] = 0;
              pbVar44[0x12] = 0;
              pbVar44[0x13] = 0;
              *(ulonglong **)(pbVar44 + 0x18) = puStack_128;
              *(byte ***)(pbVar44 + 0x20) = ppbStack_e0;
              *(byte ***)(pbVar44 + 0x28) = ppbStack_168;
              *(byte ***)(pbVar44 + 0x30) = ppbStack_e0;
              *(longlong *)(pbVar44 + 0x38) = lVar35;
              *(undefined8 *)(pbVar44 + 0x40) = uVar24;
              *(undefined4 *)(pbVar44 + 0x48) = uVar32;
              *(undefined4 *)(pbVar44 + 0x4c) = uVar31;
              pbVar44[0x50] = bVar5;
              ppbStack_118 = (byte **)0xc;
              pbStack_110 = pbVar44;
              pdb_140ae5180(uStack_200,&ppbStack_118,&UNK_1435aa490);
              puVar26 = puStack_100;
            }
          }
        }
        uVar18 = uVar18 - 1 & uVar18;
        puVar45 = (ulonglong *)((longlong)puVar45 + -1);
        ppbVar39 = ppbStack_c0;
      } while (puVar45 != (ulonglong *)0x0);
    } while( true );
  }
  lVar35 = param_3[1];
  uVar25 = *(ulonglong *)*param_3;
  uVar19 = 0;
  uVar21 = uVar25 - *(ulonglong *)(lVar35 + 0x18);
  if (uVar25 < *(ulonglong *)(lVar35 + 0x18)) {
    uVar21 = uVar19;
  }
  uVar34 = uVar25 - *(ulonglong *)(lVar35 + 0x38);
  if (uVar25 < *(ulonglong *)(lVar35 + 0x38)) {
    uVar34 = uVar19;
  }
  uVar25 = *(ulonglong *)(lVar35 + 0x10);
  uVar6 = *(ulonglong *)(lVar35 + 0x30);
  uVar28 = uVar25 - uVar21;
  if (uVar25 < uVar21) {
    uVar28 = uVar19;
  }
  uVar27 = uVar6 - uVar34;
  if (uVar6 < uVar34) {
    uVar27 = uVar19;
  }
  uVar28 = uVar27 + uVar28;
  if (uVar34 < uVar6) {
    uVar28 = uVar19;
  }
  if (uVar21 < uVar25) {
    uVar28 = uVar19;
  }
  *(ulonglong *)*param_3 = *(longlong *)(lVar35 + 0x40) - uVar28;
  lVar35 = param_4[1];
  uVar25 = *(ulonglong *)*param_4;
  uVar21 = uVar25 - *(ulonglong *)(lVar35 + 0x18);
  if (uVar25 < *(ulonglong *)(lVar35 + 0x18)) {
    uVar21 = uVar19;
  }
  uVar34 = uVar25 - *(ulonglong *)(lVar35 + 0x38);
  if (uVar25 < *(ulonglong *)(lVar35 + 0x38)) {
    uVar34 = uVar19;
  }
  uVar25 = *(ulonglong *)(lVar35 + 0x10);
  uVar6 = *(ulonglong *)(lVar35 + 0x30);
  uVar28 = uVar25 - uVar21;
  if (uVar25 < uVar21) {
    uVar28 = uVar19;
  }
  uVar27 = uVar6 - uVar34;
  if (uVar6 < uVar34) {
    uVar27 = uVar19;
  }
  uVar28 = uVar27 + uVar28;
  if (uVar34 < uVar6) {
    uVar28 = uVar19;
  }
  if (uVar21 < uVar25) {
    uVar28 = uVar19;
  }
  *(ulonglong *)*param_4 = *(longlong *)(lVar35 + 0x40) - uVar28;
  pbStack_160 = (byte *)0x0;
  puStack_158 = (ulonglong *)0x8;
  pbStack_150 = (byte *)0x0;
  lStack_198 = 0;
  pbStack_190 = (byte *)0x4;
  lStack_188 = 0;
  pcVar7 = *(char **)(pbVar33 + 8);
  pcVar1 = pcVar7 + *(longlong *)(pbVar33 + 0x10) * 0x28;
  pbStack_c8 = pbVar33;
  puStack_178 = param_1;
  while (pcVar20 = pcVar7, pcVar7 != pcVar1) {
    while (pbVar44 = pbStack_150, lVar35 = lStack_188, pcVar7 = pcVar20 + 0x28, *pcVar20 == '\0') {
      uVar25 = *(ulonglong *)(pcVar20 + 8);
      if (pbStack_150 == pbStack_160) {
        pdb_142d7e8a0(&pbStack_160);
      }
      puStack_158[(longlong)pbVar44] = uVar25;
      pbStack_150 = pbVar44 + 1;
      pcVar20 = pcVar7;
      if (pcVar7 == pcVar1) goto LAB_14288144e;
    }
    lStack_1e8 = *(longlong *)(pcVar20 + 0xc);
    uStack_1d8 = *(undefined4 *)(pcVar20 + 0x1c);
    uStack_1d4 = *(undefined4 *)(pcVar20 + 0x20);
    uStack_1d0 = (ushort)*(undefined4 *)(pcVar20 + 0x24);
    uStack_1ce = (undefined2)((uint)*(undefined4 *)(pcVar20 + 0x24) >> 0x10);
    uStack_1e0 = (undefined4)*(undefined8 *)(pcVar20 + 0x14);
    uStack_1dc = (undefined4)((ulonglong)*(undefined8 *)(pcVar20 + 0x14) >> 0x20);
    uVar24 = *(undefined8 *)(pcVar20 + 4);
    if (lStack_188 == lStack_198) {
      pdb_142d91b00(&lStack_198);
    }
    *(ulonglong *)(pbStack_190 + lVar35 * 0x24 + 0xc) = CONCAT44(uStack_1d8,uStack_1dc);
    *(ulonglong *)(pbStack_190 + lVar35 * 0x24 + 0xc + 8) =
         CONCAT26(uStack_1ce,CONCAT24(uStack_1d0,uStack_1d4));
    *(longlong *)(pbStack_190 + lVar35 * 0x24) = lStack_1e8;
    *(longlong *)(pbStack_190 + lVar35 * 0x24 + 8) = CONCAT44(uStack_1dc,uStack_1e0);
    *(undefined8 *)(pbStack_190 + lVar35 * 0x24 + 0x1c) = uVar24;
    lStack_188 = lVar35 + 1;
  }
LAB_14288144e:
  ppbVar39 = (byte **)pbStack_150;
  pbVar44 = pbStack_150;
  if ((byte *)0x1 < pbStack_150) {
LAB_142882042:
    if (ppbVar39 < (byte *)0x15) {
      puVar26 = puStack_158 + 1;
      lVar35 = 8;
      do {
        uVar21 = puVar26[-1];
        uVar25 = *puVar26;
        lVar43 = lVar35;
        if (uVar25 < uVar21) {
          do {
            *(ulonglong *)((longlong)puStack_158 + lVar43) = uVar21;
            puVar45 = puStack_158;
            if (lVar43 == 8) goto LAB_142882066;
            uVar21 = *(ulonglong *)((longlong)puStack_158 + lVar43 + -0x10);
            lVar43 = lVar43 + -8;
          } while (uVar25 < uVar21);
          puVar45 = (ulonglong *)(lVar43 + (longlong)puStack_158);
LAB_142882066:
          *puVar45 = uVar25;
        }
        puVar26 = puVar26 + 1;
        lVar35 = lVar35 + 8;
      } while (puVar26 != puStack_158 + (longlong)ppbVar39);
    }
    else {
      pdb_140a91360();
    }
    pbVar44 = pbStack_150;
    if ((byte *)0x1 < pbStack_150) {
      pbVar36 = (byte *)0x0;
      do {
        if (puStack_158[(longlong)(pbVar36 + 1)] == puStack_158[(longlong)pbVar36]) {
          pbVar42 = pbVar36 + 2;
          pbVar44 = pbVar36 + 1;
          if (pbVar42 < pbStack_150) {
            if (((int)pbStack_150 - (int)pbVar36 & 1U) != 0) {
              if (puStack_158[(longlong)(pbVar36 + 2)] != puStack_158[(longlong)pbVar36]) {
                puStack_158[(longlong)(pbVar36 + 1)] = puStack_158[(longlong)(pbVar36 + 2)];
                pbVar44 = pbVar36 + 2;
              }
              pbVar42 = pbVar36 + 3;
            }
            if (pbStack_150 + -3 != pbVar36) goto LAB_14288219d;
          }
          break;
        }
        pbVar36 = pbVar36 + 1;
      } while (pbStack_150 + -1 != pbVar36);
    }
  }
  goto LAB_14288145f;
LAB_14288219d:
  do {
    if (puStack_158[(longlong)pbVar42] == puStack_158[(longlong)(pbVar44 + -1)]) {
      uVar25 = puStack_158[(longlong)(pbVar42 + 1)];
      if (uVar25 != puStack_158[(longlong)(pbVar44 + -1)]) {
LAB_1428821c9:
        puStack_158[(longlong)pbVar44] = uVar25;
        pbVar44 = pbVar44 + 1;
      }
    }
    else {
      puStack_158[(longlong)pbVar44] = puStack_158[(longlong)pbVar42];
      pbVar44 = pbVar44 + 1;
      uVar25 = puStack_158[(longlong)(pbVar42 + 1)];
      if (uVar25 != puStack_158[(longlong)(pbVar44 + -1)]) goto LAB_1428821c9;
    }
    pbVar42 = pbVar42 + 2;
  } while (pbStack_150 != pbVar42);
LAB_14288145f:
  pbStack_150 = pbVar44;
  pdb_140a2fb40(&lStack_1e8,*param_2);
  fVar12 = _DAT_142e37adc;
  uVar11 = _DAT_142e3798c;
  pauVar41 = (undefined1 (*) [16])CONCAT44(uStack_1dc,uStack_1e0);
  uVar18 = (uint)uStack_1d0;
  pbStack_e8 = (byte *)*param_6;
  lStack_d8 = CONCAT44(lStack_d8._4_4_,*(undefined4 *)((longlong)param_8 + 0x1c));
  ppbStack_f0 = (byte **)*param_8;
  ppbStack_170 = (byte **)param_8[2];
  puStack_140 = (ulonglong *)CONCAT44(puStack_140._4_4_,*(undefined4 *)((longlong)param_7 + 0x1c));
  puStack_128 = (ulonglong *)*param_7;
  ppbStack_f8 = (byte **)param_7[2];
  ppbStack_120 = (byte **)(puStack_128 + 4);
  ppbVar39 = (byte **)CONCAT44(uStack_1c4,uStack_1c8);
  puVar30 = puStack_178;
  lVar35 = lStack_1e8;
LAB_1428815e5:
  if (ppbVar39 == (byte **)0x0) {
    if (lStack_198 != 0) {
      pub_1406abac0(pbStack_190,lStack_198 * 0x24,4);
    }
    if (pbStack_160 != (byte *)0x0) {
      pub_1406abac0((byte *)puStack_158,(longlong)pbStack_160 << 3,8);
    }
    return;
  }
  if ((short)uVar18 == 0) {
    do {
      auVar4 = *pauVar41;
      lVar35 = lVar35 + -0x100;
      pauVar41 = pauVar41 + 1;
      uVar18 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
    } while (uVar18 == 0);
  }
  iVar9 = 0;
  for (uVar10 = uVar18; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
    iVar9 = iVar9 + 1;
  }
  lVar43 = lVar35 - (ulonglong)(uint)(iVar9 << 4);
  uVar24 = *(undefined8 *)(lVar43 + -0x10);
  ppbStack_d0 = (byte **)((longlong)ppbVar39 + -1);
  pdb_142882490(&lStack_1e8,puVar30,*(undefined8 *)(lVar43 + -8));
  uVar32 = uStack_1cc;
  lVar43 = lStack_1e8;
  if (lStack_1e8 != 0) {
    ppbStack_c0 = (byte **)CONCAT44(uStack_1d4,uStack_1d8);
    puVar30 = (undefined8 *)CONCAT44(uStack_1c4,uStack_1c8);
    ppbStack_148 = (byte **)CONCAT44(uStack_1bc,uStack_1c0);
    ppbStack_e0 = ppbStack_1b8;
    *(undefined4 *)ppbStack_c0 = uStack_1cc;
    *(undefined1 *)(lStack_1e8 + 0xc) = 0;
    puStack_248 = (undefined8 *)*puVar30;
    pauStack_240 = (undefined1 (*) [16])puVar30[1];
    uStack_238 = *(undefined4 *)(puVar30 + 2);
    uStack_234 = *(undefined4 *)((longlong)puVar30 + 0x14);
    uStack_230 = *(uint *)(puVar30 + 3);
    uStack_22c = *(undefined4 *)((longlong)puVar30 + 0x1c);
    uStack_228 = *(undefined4 *)(puVar30 + 4);
    uStack_224 = *(undefined4 *)((longlong)puVar30 + 0x24);
    uStack_220 = *(undefined4 *)(puVar30 + 5);
    uStack_21c = *(undefined4 *)((longlong)puVar30 + 0x2c);
    uStack_130 = uVar24;
    pdb_140b40d00(&uStack_1ac,&puStack_248);
    cStack_b1 = '\0';
    if (pbStack_150 != (byte *)0x0) {
      pdb_140defa80(auStack_278,uStack_1ac,uStack_1a4,uVar11);
      ppbStack_118 = &pbStack_160;
      pbStack_110 = (byte *)&uStack_1ac;
      plStack_108 = (longlong *)&cStack_b1;
      pdb_142b24480(pbStack_e8,auStack_278,&ppbStack_118);
      if (cStack_b1 != '\0') {
LAB_14288171d:
        *(undefined4 *)ppbStack_c0 = uVar32;
        *(undefined1 *)(lVar43 + 0xc) = 1;
        puVar30 = puStack_178;
        if (pbStack_c8[0x18] == 1) {
          *(undefined4 *)ppbStack_f8 = puStack_140._0_4_;
          uVar25 = puStack_128[6];
          uVar21 = puStack_128[8];
          if (uVar25 == puStack_128[4]) {
            pdb_142d7e980(ppbStack_120);
          }
          uVar31 = uStack_234;
          uVar32 = uStack_238;
          pauVar13 = pauStack_240;
          puVar30 = puStack_248;
          uVar19 = puStack_128[5];
          *(ulonglong *)(uVar19 + uVar25 * 0x10) = uVar21;
          *(undefined8 *)(uVar19 + 8 + uVar25 * 0x10) = uStack_130;
          puStack_128[6] = uVar25 + 1;
          puStack_128[8] = puStack_128[8] + 1;
          *(undefined4 *)ppbStack_170 = (undefined4)lStack_d8;
          puVar45 = puStack_128;
          uVar24 = pdb_1418bded0(ppbStack_148 + 9);
          if (-1 < (longlong)puVar45) {
            if (puVar45 == (ulonglong *)0x0) {
              puStack_100 = (ulonglong *)0x1;
            }
            else {
              pdb_14007ee60();
              puStack_100 = (ulonglong *)pub_1406abab0((ulonglong)puVar45,1);
              if (puStack_100 == (ulonglong *)0x0) goto LAB_1428820f9;
              pub_142e32760(puStack_100,uVar24,puVar45);
            }
            bVar5 = *(byte *)(ppbStack_e0 + 1);
            pdb_14007ee60();
            pbVar44 = pub_1406abab0(0x58,8);
            if (pbVar44 == (byte *)0x0) {
              ppbStack_d0 = (byte **)puVar45;
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x58);
            }
            pbVar44[0] = 1;
            pbVar44[1] = 0;
            pbVar44[2] = 0;
            pbVar44[3] = 0;
            pbVar44[4] = 0;
            pbVar44[5] = 0;
            pbVar44[6] = 0;
            pbVar44[7] = 0;
            pbVar44[8] = 1;
            pbVar44[9] = 0;
            pbVar44[10] = 0;
            pbVar44[0xb] = 0;
            pbVar44[0xc] = 0;
            pbVar44[0xd] = 0;
            pbVar44[0xe] = 0;
            pbVar44[0xf] = 0;
            pbVar44[0x10] = 2;
            pbVar44[0x11] = 0;
            pbVar44[0x12] = 0;
            pbVar44[0x13] = 0;
            *(undefined8 *)(pbVar44 + 0x18) = uStack_130;
            *(ulonglong **)(pbVar44 + 0x20) = puVar45;
            *(ulonglong **)(pbVar44 + 0x28) = puStack_100;
            *(ulonglong **)(pbVar44 + 0x30) = puVar45;
            *(undefined8 **)(pbVar44 + 0x38) = puVar30;
            *(undefined1 (**) [16])(pbVar44 + 0x40) = pauVar13;
            *(undefined4 *)(pbVar44 + 0x48) = uVar32;
            *(undefined4 *)(pbVar44 + 0x4c) = uVar31;
            pbVar44[0x50] = bVar5;
            ppbStack_118 = (byte **)0xc;
            pbStack_110 = pbVar44;
            pdb_140ae5180(ppbStack_f0,&ppbStack_118,&UNK_1435aa460);
            puVar30 = puStack_178;
            goto LAB_1428815d7;
          }
LAB_1428819bd:
          uVar24 = 0;
LAB_1428819bf:
          pdb_142dc7e2a(uVar24,puStack_100);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        goto LAB_1428815d7;
      }
    }
    uVar15 = uStack_1a4;
    fVar14 = fStack_1a8;
    uVar31 = uStack_1ac;
    puVar30 = puStack_178;
    if (lStack_188 != 0) {
      pbVar44 = pbStack_190 + lStack_188 * 0x24;
      pbVar36 = pbStack_190;
      do {
        if ((*(float *)(pbVar36 + 0x1c) <= 0.0) || (*(float *)(pbVar36 + 0x1c) - fVar14 <= fVar12))
        {
          if (*(int *)pbVar36 == 1) {
            pdb_140df2190(&ppbStack_118,pbVar36 + 4,*(int *)(pbVar36 + 0x20),
                          *(int *)(pbVar36 + 0x20));
            cVar17 = pdb_140df1700(&ppbStack_118,uVar31,uVar15);
          }
          else {
            pdb_140def9f0(&ppbStack_118,pbVar36 + 4,
                          *(float *)(pbVar36 + 0x20) + *(float *)(pbVar36 + 0x20));
            cVar17 = pdb_140def450(&ppbStack_118,uVar31,uVar15);
          }
          if (cVar17 != '\0') goto LAB_14288171d;
        }
        pbVar36 = pbVar36 + 0x24;
        puVar30 = puStack_178;
      } while (pbVar36 != pbVar44);
    }
  }
LAB_1428815d7:
  uVar18 = uVar18 - 1 & uVar18;
  ppbVar39 = ppbStack_d0;
  goto LAB_1428815e5;
LAB_1428820f9:
  uVar24 = 1;
  puStack_100 = puVar45;
  goto LAB_1428819bf;
}

