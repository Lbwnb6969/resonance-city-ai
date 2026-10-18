// VA 0x14089e970, PDB extent 3138 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::classify_and_sag_rope_bridge_ranges
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::classify_and_sag_rope_bridge_ranges
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 3138 */

void pdb_14089e970(ulonglong ****param_1,char *param_2,char *param_3,undefined8 param_4)

{
  short *psVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong ****ppppuVar13;
  longlong lVar14;
  byte bVar15;
  ushort uVar16;
  ulonglong ****ppppuVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong ****ppppuVar20;
  byte bVar21;
  ulonglong ****ppppuVar22;
  ulonglong uVar23;
  byte *pbVar24;
  float *pfVar25;
  ulonglong ***pppuVar26;
  ulonglong ***pppuVar27;
  ulonglong ***pppuVar28;
  ulonglong ****ppppuVar29;
  byte bVar30;
  ulonglong uVar31;
  ulonglong ****ppppuVar32;
  ulonglong ****ppppuVar33;
  bool bVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar48;
  float fVar49;
  longlong lStack_1f8;
  byte *pbStack_1f0;
  ulonglong ***pppuStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  ulonglong ***pppuStack_1d0;
  ulonglong ***pppuStack_1c8;
  ulonglong **ppuStack_1c0;
  ulonglong ***pppuStack_1b8;
  undefined8 uStack_1b0;
  ulonglong uStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  undefined8 uStack_190;
  ulonglong uStack_188;
  undefined8 uStack_180;
  ulonglong ***pppuStack_178;
  ulonglong ***pppuStack_170;
  ulonglong ***pppuStack_168;
  ulonglong ***pppuStack_160;
  ulonglong ***pppuStack_158;
  ulonglong ***pppuStack_150;
  ulonglong ***pppuStack_148;
  ulonglong ***pppuStack_138;
  ulonglong **ppuStack_130;
  ulonglong **ppuStack_128;
  ulonglong ***pppuStack_120;
  ulonglong **ppuStack_118;
  byte *pbStack_110;
  ulonglong **ppuStack_108;
  ulonglong **ppuStack_100;
  ulonglong ***pppuStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (*param_2 == '\0') {
    bVar21 = 1;
    if (param_2[1] == '\0') {
      bVar21 = param_2[2];
    }
  }
  else {
    bVar21 = 0;
  }
  bVar30 = 1;
  if (*param_3 == '\0') {
    if (param_3[1] == '\0') {
      bVar30 = param_3[2] ^ 1;
    }
    else {
      bVar30 = 0;
    }
  }
  ppppuVar32 = (ulonglong ****)param_1[0x28];
  pppuStack_168 = (ulonglong ***)(param_1 + 0x26);
  pppuStack_160 = (ulonglong ***)ppppuVar32;
  ppppuVar33 = param_1 + 0x26;
  if ((ulonglong ****)0x1 < ppppuVar32) {
    ppppuVar32 = (ulonglong ****)param_1[0x27];
    ppppuVar33 = (ulonglong ****)param_1[0x26];
  }
  pppuStack_120 = param_1[0x26];
  pppuStack_f8 = (ulonglong ***)param_1;
  ppuStack_118 = (ulonglong **)param_1[0x23];
  ppppuVar29 = (ulonglong ****)((ulonglong)ppuStack_118 >> 3);
  ppuStack_128 = (ulonglong **)
                 ((longlong)ppppuVar29 + ((ulonglong)(ppppuVar29 == (ulonglong ****)0x0) - 1));
  ppuStack_1c0 = (ulonglong **)0x0;
  pppuStack_170 = (ulonglong ***)((longlong)ppppuVar33 + (longlong)ppppuVar32 * 4);
  pppuVar26 = (ulonglong ***)((ulonglong)param_1[0x22] & 0xfffffffffffffff8);
  pbStack_110 = (byte *)((ulonglong)((uint)ppuStack_118 & 7) +
                        (ulonglong)((uint)param_1[0x22] & 7) * 8);
  ppppuVar32 = (ulonglong ****)0x0;
  ppuStack_108 = (ulonglong **)CONCAT44(ppuStack_108._4_4_,(int)pbStack_110);
  ppuStack_100 = (ulonglong **)pppuVar26;
  uStack_1e0 = param_4;
  while (ppppuVar20 = ppppuVar33, ppppuVar20 != (ulonglong ****)pppuStack_170) {
    pppuStack_178 = (ulonglong ***)((longlong)ppppuVar20 + 4);
    ppuStack_130 = (ulonglong **)
                   CONCAT62(ppuStack_130._2_6_,*(undefined2 *)((longlong)ppppuVar20 + 2));
    uVar23 = 0;
    while( true ) {
      pppuVar27 = (ulonglong ***)ppuStack_100;
      ppppuVar33 = (ulonglong ****)pppuStack_178;
      if ((ushort)ppuStack_130 <= (ushort)uVar23) break;
      bVar10 = (bool)(ppppuVar32 == (ulonglong ****)0x0 & bVar21);
      if ((bVar30 | bVar10) != 1) {
        bVar10 = (ulonglong ***)((longlong)ppppuVar32 + 1) == (ulonglong ***)ppuStack_128;
      }
      pppuStack_158 = (ulonglong ***)ppppuVar32;
      if (ppppuVar29 <= ppppuVar32) {
        pdb_142d8dcc0(&pppuStack_158,ppuStack_118);
        goto LAB_14089f309;
      }
      if (((ulonglong)pppuVar26[(ulonglong)(pbStack_110 + (longlong)ppppuVar32) >> 6] >>
           ((ulonglong)(pbStack_110 + (longlong)ppppuVar32) & 0x3f) & 1) == 0) {
        pppuStack_158 = (ulonglong ***)((longlong)ppppuVar32 + 1);
        if (ppppuVar29 <= pppuStack_158) {
          pdb_142d8dcc0(&pppuStack_158,ppuStack_118);
          goto LAB_14089f309;
        }
        if ((bVar10 != false ||
             ((ulonglong)
              pppuVar26[(ulonglong)((longlong)pppuStack_158 + (longlong)pbStack_110) >> 6] >>
              ((byte)(byte *)((longlong)pppuStack_158 + (longlong)pbStack_110) & 0x3f) & 1) != 0) ||
           (3 < *(byte *)ppppuVar20)) goto LAB_14089eba0;
        uVar18 = 0x10005;
        uVar16 = 5;
      }
      else {
LAB_14089eba0:
        uVar16 = *(ushort *)ppppuVar20;
        ppuStack_108 = (ulonglong **)CONCAT44(ppuStack_108._4_4_,(uint)(uVar16 >> 8));
        uVar18 = uVar16 | 0x10000;
      }
      ppppuVar33 = &pppuStack_1d0;
      ppppuVar17 = (ulonglong ****)ppuStack_1c0;
      if ((ulonglong ****)0x1 < ppuStack_1c0) {
        ppppuVar33 = (ulonglong ****)pppuStack_1d0;
        ppppuVar17 = (ulonglong ****)pppuStack_1c8;
      }
      pppuStack_138 = (ulonglong ***)CONCAT44(pppuStack_138._4_4_,(int)uVar23 + 1);
      if ((ppppuVar17 == (ulonglong ****)0x0) ||
         (pbVar24 = (byte *)((longlong)ppppuVar33 + (longlong)ppppuVar17 * 4 + -4),
         pbVar24 == (byte *)0x0)) {
LAB_14089ec80:
        ppppuVar17 = &pppuStack_1c8;
        ppppuVar13 = (ulonglong ****)ppuStack_1c0;
        if (ppuStack_1c0 < (ulonglong ****)0x2) {
          ppppuVar13 = (ulonglong ****)0x1;
          ppppuVar17 = (ulonglong ****)&ppuStack_1c0;
        }
        ppppuVar22 = (ulonglong ****)(&pppuStack_1c8)[ppuStack_1c0 < (ulonglong ****)0x2];
        if ((ulonglong ****)(&pppuStack_1c8)[ppuStack_1c0 < (ulonglong ****)0x2] == ppppuVar13) {
          pdb_142de6980(&pppuStack_1d0);
          ppppuVar17 = &pppuStack_1c8;
          ppppuVar33 = (ulonglong ****)pppuStack_1d0;
          ppppuVar22 = (ulonglong ****)pppuStack_1c8;
        }
        *(uint *)((longlong)ppppuVar33 + (longlong)ppppuVar22 * 4) = uVar18;
        *ppppuVar17 = (ulonglong ***)((longlong)*ppppuVar17 + 1);
        pppuVar27 = pppuVar26;
      }
      else {
        bVar3 = *pbVar24;
        bVar34 = bVar3 < 2;
        bVar15 = (byte)uVar16;
        bVar10 = bVar3 == bVar15 && !bVar34;
        if (bVar15 < 2) {
          bVar10 = bVar34;
        }
        pppuVar26 = (ulonglong ***)ppuStack_100;
        if ((bVar3 == bVar15) && ((bool)(bVar34 & bVar10) != false)) {
          if (*(char *)((longlong)ppppuVar33 + (longlong)ppppuVar17 * 4 + -3) != (char)ppuStack_108)
          goto LAB_14089ec80;
        }
        else if (bVar10 == (bool)(bVar34 & bVar10)) goto LAB_14089ec80;
        psVar1 = (short *)((longlong)ppppuVar33 + (longlong)ppppuVar17 * 4 + -2);
        *psVar1 = *psVar1 + 1;
      }
      ppppuVar32 = (ulonglong ****)((longlong)ppppuVar32 + 1);
      uVar23 = (ulonglong)pppuStack_138 & 0xffffffff;
      pppuVar26 = pppuVar27;
    }
  }
  pppuStack_148 = (ulonglong ***)ppuStack_1c0;
  pppuStack_158 = pppuStack_1d0;
  pppuStack_150 = pppuStack_1c8;
  if ((ulonglong ****)0x1 < pppuStack_160) {
    pub_1406abac0((byte *)pppuStack_120,(longlong)pppuStack_160 << 2,2);
  }
  pppuStack_168[2] = (ulonglong **)pppuStack_148;
  *pppuStack_168 = (ulonglong **)pppuStack_158;
  pppuStack_168[1] = (ulonglong **)pppuStack_150;
  uVar23 = _DAT_143013290;
  fVar9 = _DAT_142e37adc;
  fVar8 = _DAT_142e36f28;
  pppuVar26 = (ulonglong ***)pppuStack_f8[0x28];
  if ((ulonglong ***)0x1 < pppuVar26) {
    pppuStack_168 = (ulonglong ***)pppuStack_f8[0x26];
    pppuVar26 = (ulonglong ***)pppuStack_f8[0x27];
  }
  pppuStack_160 = (ulonglong ***)((longlong)pppuStack_168 + (longlong)pppuVar26 * 4);
  pppuStack_178 = (ulonglong ***)pppuStack_f8[1];
  ppuStack_108 = pppuStack_f8[2];
  ppuStack_130 = pppuStack_f8[0xf];
  ppuStack_128 = pppuStack_f8[0xc];
  pppuStack_170 = (ulonglong ***)pppuStack_f8[0xe];
  ppuStack_100 = pppuStack_f8[9];
  ppuStack_118 = pppuStack_f8[8];
  lStack_1d8 = (longlong)ppuStack_118 + 4;
  uVar18 = (uint)_DAT_143013290;
  uVar7 = _DAT_143013290 >> 0x20;
  ppppuVar32 = (ulonglong ****)pppuStack_160;
  ppppuVar33 = (ulonglong ****)pppuStack_168;
  pppuVar26 = (ulonglong ***)0x0;
  pppuStack_168 = (ulonglong ***)pppuStack_f8[0xb];
  while( true ) {
    do {
      pppuVar27 = pppuVar26;
      if (ppppuVar33 == ppppuVar32) {
        return;
      }
      ppppuVar29 = (ulonglong ****)((longlong)ppppuVar33 + 4);
      uVar16 = *(ushort *)((longlong)ppppuVar33 + 2);
      pppuVar26 = (ulonglong ***)((longlong)pppuVar27 + (ulonglong)uVar16);
      cVar4 = *(char *)ppppuVar33;
      ppppuVar33 = ppppuVar29;
    } while (cVar4 != '\x05');
    pppuVar28 = pppuVar26;
    if (ppuStack_108 <= pppuVar26) break;
    pppuVar28 = (ulonglong ***)((longlong)pppuVar26 + 1);
    uVar31 = (longlong)pppuVar28 - (longlong)pppuVar27;
    if (pppuVar28 < pppuVar27) break;
    if (ppuStack_130 <= pppuVar26) goto LAB_14089f235;
    if (ppuStack_128 <= pppuVar26) goto LAB_14089f24b;
    ppuStack_1c0 = (ulonglong **)(pppuStack_170 + (longlong)pppuVar27);
    pppuStack_1b8 = pppuStack_170 + (longlong)pppuVar28;
    ppppuVar32 = (ulonglong ****)(pppuStack_178 + (longlong)pppuVar27);
    ppppuVar33 = (ulonglong ****)(pppuStack_178 + (longlong)pppuVar28);
    lStack_1a0 = (longlong)pppuStack_168 + (longlong)pppuVar27 * 4;
    lStack_198 = (longlong)pppuStack_168 + (longlong)pppuVar28 * 4;
    uStack_1b0 = 0;
    uStack_190 = 0;
    uStack_180 = uStack_1e0;
    pppuStack_1d0 = (ulonglong ***)ppppuVar32;
    pppuStack_1c8 = (ulonglong ***)ppppuVar33;
    uStack_1a8 = uVar31;
    uStack_188 = uVar31;
    pppuStack_138 = (ulonglong ***)ppppuVar29;
    pdb_141498a60(&lStack_1f8,&pppuStack_1d0);
    if (ppuStack_100 <= pppuVar26) goto LAB_14089f262;
    pbStack_110 = pbStack_1f0;
    if (2 < uVar31) {
      ppuStack_1c0 = (ulonglong **)((longlong)ppuStack_118 + (longlong)pppuVar27 * 4);
      pppuStack_120 = pppuStack_1e8;
      pppuStack_1b8 = (ulonglong ***)((longlong)pppuVar28 * 4 + (longlong)ppuStack_118);
      uStack_1b0 = 0;
      ppppuVar29 = &pppuStack_1d0;
      pppuStack_1d0 = (ulonglong ***)ppppuVar32;
      pppuStack_1c8 = (ulonglong ***)ppppuVar33;
      uStack_1a8 = uVar31;
      pdb_14017fb10(&pppuStack_158);
      pppuVar28 = pppuStack_148;
      pppuStack_1c8 = (ulonglong ***)((longlong)pppuStack_150 + (longlong)pppuStack_148 * 0xc);
      pppuStack_f8 = pppuStack_150;
      pppuStack_1d0 = pppuStack_150;
      ppuStack_1c0 = (ulonglong **)0x0;
      pfVar11 = (float *)pdb_141466f50(&pppuStack_1d0);
      fVar48 = _DAT_142e377f0;
      if (pfVar11 != (float *)0x0) {
        do {
          fVar39 = *pfVar11;
          fVar49 = pfVar11[1];
          fVar40 = pfVar11[2];
          fVar44 = *(float *)ppppuVar29;
          fVar47 = *(float *)((longlong)ppppuVar29 + 4);
          fVar2 = *(float *)(ppppuVar29 + 1);
          pfVar11 = (float *)pdb_141466f50(&pppuStack_1d0);
          fVar49 = fVar49 - fVar47;
          fVar48 = fVar48 + SQRT((fVar40 - fVar2) * (fVar40 - fVar2) +
                                 fVar49 * fVar49 + (fVar39 - fVar44) * (fVar39 - fVar44));
        } while (pfVar11 != (float *)0x0);
        if (_DAT_142e37934 < fVar48) {
          fVar39 = _DAT_142e36f50;
          if (_DAT_142e36f50 <= fVar48 * _DAT_142e3c608) {
            fVar39 = fVar48 * _DAT_142e3c608;
          }
          uVar36 = 0;
          uVar37 = 0;
          uVar38 = 0;
          fVar49 = _DAT_142e37830;
          if (fVar39 <= _DAT_142e37830) {
            fVar49 = fVar39;
          }
          lVar14 = (longlong)pppuVar28 +
                   (ulonglong)((ulonglong ****)pppuVar28 == (ulonglong ****)0x0);
          lVar12 = (longlong)pppuStack_120 +
                   (ulonglong)((ulonglong ****)pppuStack_120 == (ulonglong ****)0x0);
          pfVar11 = (float *)((longlong)pppuStack_f8 + 0x14);
          lVar19 = (longlong)pppuVar27 * 4 + lStack_1d8;
          ppppuVar33 = (ulonglong ****)((ulonglong)uVar16 - 1);
          fVar39 = 0.0;
          ppppuVar32 = (ulonglong ****)0x0;
          pfVar25 = pfVar11;
          do {
            if ((ulonglong ****)pppuVar28 == ppppuVar32) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(ppppuVar32,pppuVar28,&UNK_143013698);
            }
            if ((ulonglong ****)(lVar14 - 1U) == ppppuVar32) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(lVar14,pppuVar28,&UNK_1430136b0);
            }
            if ((ulonglong ****)(lVar12 - 1U) == ppppuVar32) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(lVar12,pppuStack_120,&UNK_1430136c8);
            }
            fVar40 = (float)*(undefined8 *)(pfVar25 + -5) - (float)*(undefined8 *)(pfVar25 + -2);
            fVar44 = (float)((ulonglong)*(undefined8 *)(pfVar25 + -5) >> 0x20) -
                     (float)((ulonglong)*(undefined8 *)(pfVar25 + -2) >> 0x20);
            fVar39 = fVar39 + SQRT((pfVar25[-3] - *pfVar25) * (pfVar25[-3] - *pfVar25) +
                                   fVar44 * fVar44 + fVar40 * fVar40);
            fVar40 = (fVar39 / fVar48) * fVar9 * (fVar8 - fVar39 / fVar48);
            auVar45._0_4_ =
                 *(float *)(lVar19 + (longlong)ppppuVar32 * 4) -
                 *(float *)(pbStack_110 + (longlong)ppppuVar32 * 4 + 4);
            auVar45._4_4_ = fVar40;
            auVar45._8_8_ = 0;
            auVar41._8_8_ = 0;
            auVar41._0_8_ = uVar23;
            auVar42 = maxps(auVar41,auVar45);
            uVar35 = -(uint)NAN(fVar40);
            auVar46._0_4_ = ~-(uint)NAN(auVar45._0_4_) & auVar42._0_4_;
            auVar46._4_4_ = ~uVar35 & auVar42._4_4_;
            auVar46._8_4_ = auVar42._8_4_;
            auVar46._12_4_ = auVar42._12_4_;
            auVar42._4_4_ = (uint)uVar7 & uVar35;
            auVar42._0_4_ = uVar18 & -(uint)NAN(auVar45._0_4_);
            auVar42._8_8_ = 0;
            auVar46 = auVar46 | auVar42;
            fVar47 = auVar46._4_4_;
            fVar44 = auVar46._0_4_ / fVar47;
            fVar40 = fVar44;
            if (fVar49 <= fVar44) {
              fVar40 = fVar49;
            }
            auVar43._0_4_ = ~-(uint)NAN(fVar49) & (uint)fVar40;
            auVar43._4_4_ = ~uVar36 & (uint)fVar47;
            auVar43._8_4_ = ~uVar37 & auVar46._8_4_;
            auVar43._12_4_ = ~uVar38 & auVar46._12_4_;
            auVar6._4_4_ = uVar36 & (uint)fVar47;
            auVar6._0_4_ = -(uint)NAN(fVar49) & (uint)fVar44;
            auVar6._8_4_ = uVar37 & auVar46._8_4_;
            auVar6._12_4_ = uVar38 & auVar46._12_4_;
            auVar43 = auVar43 | auVar6;
            fVar49 = auVar43._0_4_;
            uVar36 = auVar43._4_4_;
            uVar37 = auVar43._8_4_;
            uVar38 = auVar43._12_4_;
            pfVar25 = pfVar25 + 3;
            ppppuVar32 = (ulonglong ****)((longlong)ppppuVar32 + 1);
          } while (ppppuVar33 != ppppuVar32);
          fVar39 = 0.0;
          ppppuVar32 = (ulonglong ****)0x0;
          do {
            if ((ulonglong ****)pppuVar28 == ppppuVar32) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(ppppuVar32,pppuVar28,&UNK_143013668);
            }
            if ((ulonglong ****)(lVar14 - 1U) == ppppuVar32) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(lVar14,pppuVar28,&UNK_143013680);
            }
            fVar40 = (float)*(undefined8 *)(pfVar11 + -5) - (float)*(undefined8 *)(pfVar11 + -2);
            fVar44 = (float)((ulonglong)*(undefined8 *)(pfVar11 + -5) >> 0x20) -
                     (float)((ulonglong)*(undefined8 *)(pfVar11 + -2) >> 0x20);
            fVar39 = fVar39 + SQRT((pfVar11[-3] - *pfVar11) * (pfVar11[-3] - *pfVar11) +
                                   fVar44 * fVar44 + fVar40 * fVar40);
            *(float *)(lVar19 + (longlong)ppppuVar32 * 4) =
                 *(float *)(lVar19 + (longlong)ppppuVar32 * 4) -
                 (fVar8 - fVar39 / fVar48) * fVar49 * fVar9 * (fVar39 / fVar48);
            pfVar11 = pfVar11 + 3;
            ppppuVar32 = (ulonglong ****)((longlong)ppppuVar32 + 1);
          } while (ppppuVar33 != ppppuVar32);
        }
      }
      if ((ulonglong ****)pppuStack_158 != (ulonglong ****)0x0) {
        pub_1406abac0((byte *)pppuStack_f8,(longlong)pppuStack_158 * 0xc,4);
      }
    }
    ppppuVar32 = (ulonglong ****)pppuStack_160;
    ppppuVar33 = (ulonglong ****)pppuStack_138;
    if (lStack_1f8 != 0) {
      pub_1406abac0(pbStack_110,lStack_1f8 << 2,4);
      ppppuVar32 = (ulonglong ****)pppuStack_160;
      ppppuVar33 = (ulonglong ****)pppuStack_138;
    }
  }
  pdb_142dc8420(pppuVar27,pppuVar28,ppuStack_108,&UNK_143013968);
  pppuVar26 = pppuVar28;
LAB_14089f235:
  pdb_142dc8420(pppuVar27,pppuVar26,ppuStack_130,&UNK_143013980);
LAB_14089f24b:
  pdb_142dc8420(pppuVar27,pppuVar26,ppuStack_128,&UNK_143013998);
LAB_14089f262:
  pdb_142dc8420(pppuVar27,pppuVar26,ppuStack_100,&UNK_1430139b0);
LAB_14089f309:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

