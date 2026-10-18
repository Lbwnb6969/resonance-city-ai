// VA 0x1422f6510, PDB extent 6325 bytes
// toolbar::mei::widgets::ScrollingListView::with_items<toolbar::menu::mod_checklist::replacement_mod_checklist::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::ScrollingListView::with_items<toolbar::menu::mod_checklist::replacement_mod_checklist::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 6325 */

void pdb_1422f6510(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  byte ***pppbVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *****pppppuVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  undefined8 uVar19;
  byte ***pppbVar20;
  byte ***pppbVar21;
  byte *pbVar22;
  byte ****ppppbVar23;
  longlong *plVar24;
  undefined4 uVar25;
  byte **ppbVar26;
  longlong lVar27;
  ushort uVar28;
  longlong lVar29;
  ulonglong uVar30;
  byte ****ppppbVar31;
  byte ****ppppbVar32;
  ulonglong uVar33;
  byte ****ppppbVar34;
  uint uVar35;
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  byte ****ppppbStack_268;
  byte ****ppppbStack_260;
  byte **ppbStack_258;
  byte ****ppppbStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong *plStack_230;
  byte **ppbStack_228;
  byte ***pppbStack_220;
  undefined8 uStack_218;
  byte ***pppbStack_210;
  byte *pbStack_208;
  byte ***pppbStack_200;
  byte ****ppppbStack_1f8;
  byte ****ppppbStack_1f0;
  byte **ppbStack_1e8;
  byte ****ppppbStack_1d8;
  byte ****ppppbStack_1d0;
  byte **ppbStack_1c8;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  undefined8 uStack_1a8;
  byte ****ppppbStack_1a0;
  ulonglong uStack_198;
  byte ****ppppbStack_190;
  byte ****ppppbStack_188;
  byte ****ppppbStack_180;
  byte **ppbStack_178;
  undefined8 uStack_168;
  byte *pbStack_160;
  byte ****ppppbStack_158;
  byte ****ppppbStack_150;
  byte **ppbStack_148;
  longlong *plStack_140;
  byte ****ppppbStack_138;
  undefined8 uStack_130;
  byte ****ppppbStack_128;
  byte **ppbStack_120;
  longlong *plStack_118;
  byte ****ppppbStack_110;
  byte ****ppppbStack_108;
  byte ****ppppbStack_100;
  byte **ppbStack_f8;
  byte ***pppbStack_f0;
  undefined *****pppppuStack_e8;
  byte ****ppppbStack_e0;
  undefined *****pppppuStack_d8;
  code *pcStack_d0;
  undefined *****pppppuStack_c8;
  code *pcStack_c0;
  byte ****ppppbStack_b0;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  lVar16 = pdb_14116e5a0();
  fVar39 = _DAT_142fa5b20;
  fVar54 = _DAT_142e37878;
  fVar36 = *(float *)(lVar16 + 0x28) + _DAT_142e37878;
  fVar38 = (float)*(ulonglong *)(lVar16 + 0x20) * fVar36 + _DAT_142fa5b20;
  if (fVar38 <= 0.0) {
    fVar38 = 0.0;
  }
  fVar38 = fVar38 - (fVar36 * (float)*(ulonglong *)(lVar16 + 0x18) + _DAT_142fa5b20);
  fVar36 = 0.0;
  if (0.0 <= *(float *)(lVar16 + 0x30)) {
    fVar36 = *(float *)(lVar16 + 0x30);
  }
  if (fVar38 <= 0.0) {
    fVar38 = 0.0;
  }
  if (fVar36 <= fVar38) {
    fVar38 = fVar36;
  }
  *(float *)(lVar16 + 0x30) = fVar38;
  pdb_140de9710(lVar16 + 0x2c);
  uVar35 = -(uint)((float)((uint)(*(float *)(lVar16 + 0x2c) - *(float *)(lVar16 + 0x30)) &
                          _DAT_142e377e0) < _DAT_142e3b1d8);
  ppppbVar31 = *(byte *****)(lVar16 + 0x20);
  fVar36 = (float)(~uVar35 & (uint)*(float *)(lVar16 + 0x2c) |
                  (uint)*(float *)(lVar16 + 0x30) & uVar35);
  fVar54 = fVar54 + *(float *)(lVar16 + 0x28);
  fVar38 = (float)ppppbVar31 * fVar54 + fVar39;
  if (fVar38 <= 0.0) {
    fVar38 = 0.0;
  }
  fVar39 = (float)*(ulonglong *)(lVar16 + 0x18) * fVar54 + fVar39;
  fVar38 = fVar38 - fVar39;
  if (fVar38 <= 0.0) {
    fVar38 = 0.0;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar36) {
    fVar7 = fVar36;
  }
  if (fVar7 <= fVar38) {
    fVar38 = fVar7;
  }
  *(float *)(lVar16 + 0x2c) = fVar38;
  fVar36 = fVar38 / fVar54;
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  uVar33 = (longlong)(fVar36 - _DAT_142e36f2c) & (longlong)fVar36 >> 0x3f | (longlong)fVar36;
  if (fVar36 < 0.0) {
    uVar33 = 0;
  }
  if (_DAT_142e36f30 < fVar36) {
    uVar33 = 0xffffffffffffffff;
  }
  ppppbVar34 = (byte ****)((uVar33 - 1) + (ulonglong)(uVar33 == 0));
  fVar39 = (fVar39 + fVar38) / fVar54;
  uVar33 = (longlong)(fVar39 - _DAT_142e36f2c) & (longlong)fVar39 >> 0x3f | (longlong)fVar39;
  if (fVar39 < 0.0) {
    uVar33 = 0;
  }
  if (_DAT_142e36f30 < fVar39) {
    uVar33 = 0xffffffffffffffff;
  }
  ppppbVar23 = (byte ****)(uVar33 + 2);
  if (ppppbVar31 < (byte ****)(uVar33 + 2)) {
    ppppbVar23 = ppppbVar31;
  }
  lVar17 = pdb_141172a70(param_1);
  lVar16 = *param_1;
  if (*(longlong *)(lVar16 + 0x1c8) != 0) {
    uVar2 = *(undefined4 *)(lVar17 + 0x28);
    plVar24 = param_1 + 1;
    uVar33 = pdb_1400af0a0(lVar16 + 0x1d0,plVar24);
    lVar17 = *(longlong *)(lVar16 + 0x1b0);
    bVar14 = (byte)(uVar33 >> 0x39);
    auVar37 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar37 = pshuflw(auVar37,auVar37,0);
    lVar27 = 0;
    while( true ) {
      uVar33 = uVar33 & *(ulonglong *)(lVar16 + 0x1b8);
      auVar52 = *(undefined1 (*) [16])(lVar17 + uVar33);
      auVar51[0] = -(auVar52[0] == auVar37[0]);
      auVar51[1] = -(auVar52[1] == auVar37[1]);
      auVar51[2] = -(auVar52[2] == auVar37[2]);
      auVar51[3] = -(auVar52[3] == auVar37[3]);
      auVar51[4] = -(auVar52[4] == auVar37[4]);
      auVar51[5] = -(auVar52[5] == auVar37[5]);
      auVar51[6] = -(auVar52[6] == auVar37[6]);
      auVar51[7] = -(auVar52[7] == auVar37[7]);
      auVar51[8] = -(auVar52[8] == auVar37[0]);
      auVar51[9] = -(auVar52[9] == auVar37[1]);
      auVar51[10] = -(auVar52[10] == auVar37[2]);
      auVar51[0xb] = -(auVar52[0xb] == auVar37[3]);
      auVar51[0xc] = -(auVar52[0xc] == auVar37[4]);
      auVar51[0xd] = -(auVar52[0xd] == auVar37[5]);
      auVar51[0xe] = -(auVar52[0xe] == auVar37[6]);
      auVar51[0xf] = -(auVar52[0xf] == auVar37[7]);
      uVar28 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf;
      uVar35 = (uint)uVar28;
      while (uVar28 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar35; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar29 = (uVar5 + uVar33 & *(ulonglong *)(lVar16 + 0x1b8)) * -0xd8;
        if (param_1[1] == *(longlong *)(lVar17 + -0xd8 + lVar29)) {
          lVar17 = lVar17 + lVar29;
          *(undefined4 *)(lVar17 + -0x7c) = 0;
          *(float *)(lVar17 + -0x78) = fVar54 * (float)ppppbVar34 - fVar38;
          piVar18 = (int *)pdb_141172a70(param_1);
          if (*piVar18 != 1) {
            lVar16 = *param_1;
            if (*(longlong *)(lVar16 + 0x1c8) == 0) goto LAB_1422f6a13;
            uVar33 = pdb_1400af0a0(lVar16 + 0x1d0,plVar24);
            lVar17 = *(longlong *)(lVar16 + 0x1b0);
            bVar14 = (byte)(uVar33 >> 0x39);
            auVar37 = ZEXT216(CONCAT11(bVar14,bVar14));
            auVar37 = pshuflw(auVar37,auVar37,0);
            lVar27 = 0;
            goto LAB_1422f69b2;
          }
          lVar16 = *param_1;
          if (*(longlong *)(lVar16 + 0x1c8) == 0) goto LAB_1422f6a13;
          ppppbVar31 = *(byte *****)(piVar18 + 2);
          uVar33 = pdb_1400af0a0(lVar16 + 0x1d0,plVar24);
          lVar17 = *(longlong *)(lVar16 + 0x1b0);
          bVar14 = (byte)(uVar33 >> 0x39);
          auVar37 = ZEXT216(CONCAT11(bVar14,bVar14));
          auVar37 = pshuflw(auVar37,auVar37,0);
          lVar27 = 0;
          goto LAB_1422f68f6;
        }
        uVar28 = (ushort)(uVar35 - 1) & (ushort)uVar35;
        uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar28);
      }
      auVar44[0] = -(auVar52[0] == -1);
      auVar44[1] = -(auVar52[1] == -1);
      auVar44[2] = -(auVar52[2] == -1);
      auVar44[3] = -(auVar52[3] == -1);
      auVar44[4] = -(auVar52[4] == -1);
      auVar44[5] = -(auVar52[5] == -1);
      auVar44[6] = -(auVar52[6] == -1);
      auVar44[7] = -(auVar52[7] == -1);
      auVar44[8] = -(auVar52[8] == -1);
      auVar44[9] = -(auVar52[9] == -1);
      auVar44[10] = -(auVar52[10] == -1);
      auVar44[0xb] = -(auVar52[0xb] == -1);
      auVar44[0xc] = -(auVar52[0xc] == -1);
      auVar44[0xd] = -(auVar52[0xd] == -1);
      auVar44[0xe] = -(auVar52[0xe] == -1);
      auVar44[0xf] = -(auVar52[0xf] == -1);
      if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 || (SUB161(auVar44 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar44 >> 0x17,0) & 1) != 0) || (SUB161(auVar44 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar44 >> 0x27,0) & 1) != 0) || (SUB161(auVar44 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar44 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar44 >> 0x3f,0) & 1) != 0) || (SUB161(auVar44 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar44 >> 0x4f,0) & 1) != 0) || (SUB161(auVar44 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar44 >> 0x5f,0) & 1) != 0) || (SUB161(auVar44 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar44 >> 0x6f,0) & 1) != 0) || (SUB161(auVar44 >> 0x77,0) & 1) != 0) ||
          auVar44[0xf] < '\0') break;
      uVar33 = uVar33 + lVar27 + 0x10;
      lVar27 = lVar27 + 0x10;
    }
  }
LAB_1422f6a13:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_1422f68f6:
  uVar33 = uVar33 & *(ulonglong *)(lVar16 + 0x1b8);
  pcVar1 = (char *)(lVar17 + uVar33);
  auVar52[0] = -(*pcVar1 == auVar37[0]);
  auVar52[1] = -(pcVar1[1] == auVar37[1]);
  auVar52[2] = -(pcVar1[2] == auVar37[2]);
  auVar52[3] = -(pcVar1[3] == auVar37[3]);
  auVar52[4] = -(pcVar1[4] == auVar37[4]);
  auVar52[5] = -(pcVar1[5] == auVar37[5]);
  auVar52[6] = -(pcVar1[6] == auVar37[6]);
  auVar52[7] = -(pcVar1[7] == auVar37[7]);
  auVar52[8] = -(pcVar1[8] == auVar37[0]);
  auVar52[9] = -(pcVar1[9] == auVar37[1]);
  auVar52[10] = -(pcVar1[10] == auVar37[2]);
  auVar52[0xb] = -(pcVar1[0xb] == auVar37[3]);
  auVar52[0xc] = -(pcVar1[0xc] == auVar37[4]);
  auVar52[0xd] = -(pcVar1[0xd] == auVar37[5]);
  auVar52[0xe] = -(pcVar1[0xe] == auVar37[6]);
  auVar52[0xf] = -(pcVar1[0xf] == auVar37[7]);
  uVar28 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf;
  uVar35 = (uint)uVar28;
  while (uVar28 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar35; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar29 = (uVar5 + uVar33 & *(ulonglong *)(lVar16 + 0x1b8)) * -0xd8;
    if (*plVar24 == *(longlong *)(lVar17 + -0xd8 + lVar29)) {
      lVar17 = lVar17 + lVar29;
      bVar14 = *(byte *)(lVar17 + -5);
      *(byte *)(lVar17 + -5) = bVar14 | 0xe0;
      if ((ppppbVar31 < ppppbVar34) || (ppppbVar23 <= ppppbVar31)) {
        *(byte *)(lVar17 + -5) = bVar14 | 0xe4;
      }
      goto LAB_1422f6a46;
    }
    uVar28 = (ushort)(uVar35 - 1) & (ushort)uVar35;
    uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar28);
  }
  auVar45[0] = -(*pcVar1 == -1);
  auVar45[1] = -(pcVar1[1] == -1);
  auVar45[2] = -(pcVar1[2] == -1);
  auVar45[3] = -(pcVar1[3] == -1);
  auVar45[4] = -(pcVar1[4] == -1);
  auVar45[5] = -(pcVar1[5] == -1);
  auVar45[6] = -(pcVar1[6] == -1);
  auVar45[7] = -(pcVar1[7] == -1);
  auVar45[8] = -(pcVar1[8] == -1);
  auVar45[9] = -(pcVar1[9] == -1);
  auVar45[10] = -(pcVar1[10] == -1);
  auVar45[0xb] = -(pcVar1[0xb] == -1);
  auVar45[0xc] = -(pcVar1[0xc] == -1);
  auVar45[0xd] = -(pcVar1[0xd] == -1);
  auVar45[0xe] = -(pcVar1[0xe] == -1);
  auVar45[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') goto LAB_1422f6a13;
  uVar33 = uVar33 + lVar27 + 0x10;
  lVar27 = lVar27 + 0x10;
  goto LAB_1422f68f6;
LAB_1422f69b2:
  uVar33 = uVar33 & *(ulonglong *)(lVar16 + 0x1b8);
  pcVar1 = (char *)(lVar17 + uVar33);
  auVar53[0] = -(*pcVar1 == auVar37[0]);
  auVar53[1] = -(pcVar1[1] == auVar37[1]);
  auVar53[2] = -(pcVar1[2] == auVar37[2]);
  auVar53[3] = -(pcVar1[3] == auVar37[3]);
  auVar53[4] = -(pcVar1[4] == auVar37[4]);
  auVar53[5] = -(pcVar1[5] == auVar37[5]);
  auVar53[6] = -(pcVar1[6] == auVar37[6]);
  auVar53[7] = -(pcVar1[7] == auVar37[7]);
  auVar53[8] = -(pcVar1[8] == auVar37[0]);
  auVar53[9] = -(pcVar1[9] == auVar37[1]);
  auVar53[10] = -(pcVar1[10] == auVar37[2]);
  auVar53[0xb] = -(pcVar1[0xb] == auVar37[3]);
  auVar53[0xc] = -(pcVar1[0xc] == auVar37[4]);
  auVar53[0xd] = -(pcVar1[0xd] == auVar37[5]);
  auVar53[0xe] = -(pcVar1[0xe] == auVar37[6]);
  auVar53[0xf] = -(pcVar1[0xf] == auVar37[7]);
  uVar28 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe | (ushort)(auVar53[0xf] >> 7) << 0xf;
  uVar35 = (uint)uVar28;
  while( true ) {
    if (uVar28 == 0) goto LAB_1422f69f8;
    uVar5 = 0;
    for (uVar6 = uVar35; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar29 = (uVar5 + uVar33 & *(ulonglong *)(lVar16 + 0x1b8)) * -0xd8;
    if (*plVar24 == *(longlong *)(lVar17 + -0xd8 + lVar29)) break;
    uVar28 = (ushort)(uVar35 - 1) & (ushort)uVar35;
    uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar28);
  }
  pbVar22 = (byte *)(lVar17 + lVar29 + -5);
  *pbVar22 = *pbVar22 & 0x5f;
LAB_1422f6a46:
  uVar12 = _DAT_1430241ac;
  uVar11 = _DAT_142e378c0;
  lStack_240 = *param_2;
  ppppbStack_1a0 = (byte ****)param_2[1];
  uStack_198 = param_2[4];
  lStack_238 = param_2[3];
  plStack_230 = (longlong *)param_2[2];
  plStack_118 = (longlong *)param_2[5];
  uStack_168 = 0;
  if (ppppbVar23 <= ppppbVar34) {
LAB_1422f7710:
    lVar16 = pdb_14116e5a0(param_1);
    if (((byte)uStack_168 & *(byte *)(lVar16 + 0x3a) & 1) != 0) {
      fVar54 = _DAT_142e37878 + *(float *)(lVar16 + 0x28);
      fVar38 = (float)ppppbStack_190 * fVar54;
      uStack_130._0_4_ =
           (*(float *)(lVar16 + 0x28) + fVar38) -
           (fVar54 * (float)*(ulonglong *)(lVar16 + 0x18) + _DAT_142fa5b20);
      if ((float)uStack_130 <= 0.0) {
        uStack_130._0_4_ = 0.0;
      }
      if (fVar38 < (float)uStack_130) {
        ppppbStack_108 = (byte ****)CONCAT44(ppppbStack_108._4_4_,fVar38);
        ppppbStack_e0 = (byte ****)pdb_140f705d0;
        pcStack_d0 = pdb_140f705d0;
        pppppuStack_e8 = (undefined *****)&uStack_130;
        pppppuStack_d8 = &ppppbStack_108;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142fa5c78,&pppppuStack_e8,&UNK_142fa5d18);
      }
      if ((float)uStack_130 <= *(float *)(lVar16 + 0x30)) {
        uStack_130._0_4_ = *(float *)(lVar16 + 0x30);
      }
      if ((float)uStack_130 <= fVar38) {
        fVar38 = (float)uStack_130;
      }
      *(float *)(lVar16 + 0x30) = fVar38;
    }
    return;
  }
LAB_1422f6ac1:
  ppppbStack_e0 = _DAT_14329c2b0;
  pppppuStack_d8 = (undefined *****)_UNK_14329c2b8;
  pppppuStack_e8 = (undefined *****)ppppbVar34;
  ppppbStack_e0 = (byte ****)pdb_1400affa0(&pppppuStack_e8);
  pppppuStack_e8 = (undefined *****)param_1[1];
  uVar19 = pdb_1400b0130(&pppppuStack_e8);
  pdb_14072caa0(&pppppuStack_e8,param_1,uVar19);
  pdb_14116f0d0(&pppppuStack_e8,0);
  pppppuVar13 = pppppuStack_e8;
  ppbStack_1e8 = (byte **)pppppuStack_d8;
  ppppbStack_1f8 = (byte ****)pppppuStack_e8;
  ppppbStack_1f0 = ppppbStack_e0;
  if (pppppuStack_e8[0x39] == (undefined ****)0x0) {
LAB_1422f769a:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_1422f76b2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14329c430);
  }
  ppppbStack_248 = (byte ****)((longlong)ppppbVar34 + 1);
  uVar33 = pdb_1400af0a0(pppppuStack_e8 + 0x3a,&ppppbStack_1f0);
  pppbVar20 = (byte ***)pppppuVar13[0x36];
  pppbVar21 = (byte ***)pppppuVar13[0x37];
  bVar14 = (byte)(uVar33 >> 0x39);
  auVar37 = ZEXT216(CONCAT11(bVar14,bVar14));
  auVar37 = pshuflw(auVar37,auVar37,0);
  lVar16 = 0;
  do {
    uVar33 = uVar33 & (ulonglong)pppbVar21;
    auVar52 = *(undefined1 (*) [16])((longlong)pppbVar20 + uVar33);
    auVar47[0] = -(auVar52[0] == auVar37[0]);
    auVar47[1] = -(auVar52[1] == auVar37[1]);
    auVar47[2] = -(auVar52[2] == auVar37[2]);
    auVar47[3] = -(auVar52[3] == auVar37[3]);
    auVar47[4] = -(auVar52[4] == auVar37[4]);
    auVar47[5] = -(auVar52[5] == auVar37[5]);
    auVar47[6] = -(auVar52[6] == auVar37[6]);
    auVar47[7] = -(auVar52[7] == auVar37[7]);
    auVar47[8] = -(auVar52[8] == auVar37[0]);
    auVar47[9] = -(auVar52[9] == auVar37[1]);
    auVar47[10] = -(auVar52[10] == auVar37[2]);
    auVar47[0xb] = -(auVar52[0xb] == auVar37[3]);
    auVar47[0xc] = -(auVar52[0xc] == auVar37[4]);
    auVar47[0xd] = -(auVar52[0xd] == auVar37[5]);
    auVar47[0xe] = -(auVar52[0xe] == auVar37[6]);
    auVar47[0xf] = -(auVar52[0xf] == auVar37[7]);
    uVar28 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
    uVar35 = (uint)uVar28;
    if (uVar28 != 0) {
      while( true ) {
        uVar5 = 0;
        for (uVar6 = uVar35; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar30 = uVar5 + uVar33 & (ulonglong)pppbVar21;
        if (ppppbStack_1f0 == (byte ****)pppbVar20[uVar30 * -0x1b + -0x1b]) break;
        uVar28 = (ushort)(uVar35 - 1) & (ushort)uVar35;
        uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar28);
        if (uVar28 == 0) goto LAB_1422f6bca;
      }
      uVar25 = 0xffffff40;
      if ((*(byte *)((longlong)pppbVar20 + uVar30 * -0xd8 + -6) & 1) == 0) {
        uVar25 = 0xffffff10;
      }
      plStack_140 = param_1;
      ppppbStack_138 = ppppbVar23;
      pdb_140a1aa60(&pppppuStack_e8);
      pdb_140cb8ed0(&ppppbStack_108,&pppppuStack_e8,uVar25);
      pdb_140cb8f80(&uStack_130,&ppppbStack_108,uVar12);
      pppppuStack_d8 = (undefined *****)ppbStack_1e8;
      pppppuStack_e8 = (undefined *****)ppppbStack_1f8;
      ppppbStack_e0 = ppppbStack_1f0;
      pppbVar20 = (byte ***)pdb_14116e700(&pppppuStack_e8);
      ppppbVar31 = (byte ****)pppbVar20[1];
      ppbVar26 = pppbVar20[2];
      if (ppbVar26 != (byte **)0x0) {
        ppppbVar23 = ppppbVar31 + 1;
        do {
          pppbVar21 = ppppbVar23[-1];
          if ((-1 < (longlong)pppbVar21) && (pppbVar21 != (byte ***)0x0)) {
            pub_1406abac0((byte *)*ppppbVar23,(ulonglong)pppbVar21,1);
          }
          ppppbVar23 = ppppbVar23 + 4;
          ppbVar26 = (byte **)((longlong)ppbVar26 + -1);
        } while (ppbVar26 != (byte **)0x0);
      }
      if (*pppbVar20 != (byte **)0x0) {
        pub_1406abac0((byte *)ppppbVar31,(longlong)*pppbVar20 << 5,8);
      }
      pppppuVar13 = pppppuStack_e8;
      pppbVar20[2] = ppbStack_120;
      *pppbVar20 = (byte **)CONCAT44(uStack_130._4_4_,(float)uStack_130);
      pppbVar20[1] = (byte **)ppppbStack_128;
      ppppbStack_1d8 = (byte ****)pppppuStack_e8;
      ppppbStack_1d0 = ppppbStack_e0;
      ppbStack_1c8 = (byte **)pppppuStack_d8;
      if (pppppuStack_e8[0x39] == (undefined ****)0x0) goto LAB_1422f76b2;
      uVar33 = pdb_1400af0a0(pppppuStack_e8 + 0x3a,&ppppbStack_e0);
      lVar16 = lStack_240;
      pppbVar21 = (byte ***)pppppuVar13[0x36];
      pppbVar3 = (byte ***)pppppuVar13[0x37];
      bVar14 = (byte)(uVar33 >> 0x39);
      auVar37 = ZEXT216(CONCAT11(bVar14,bVar14));
      auVar37 = pshuflw(auVar37,auVar37,0);
      lVar17 = 0;
      while( true ) {
        uVar33 = uVar33 & (ulonglong)pppbVar3;
        auVar52 = *(undefined1 (*) [16])((longlong)pppbVar21 + uVar33);
        auVar48[0] = -(auVar52[0] == auVar37[0]);
        auVar48[1] = -(auVar52[1] == auVar37[1]);
        auVar48[2] = -(auVar52[2] == auVar37[2]);
        auVar48[3] = -(auVar52[3] == auVar37[3]);
        auVar48[4] = -(auVar52[4] == auVar37[4]);
        auVar48[5] = -(auVar52[5] == auVar37[5]);
        auVar48[6] = -(auVar52[6] == auVar37[6]);
        auVar48[7] = -(auVar52[7] == auVar37[7]);
        auVar48[8] = -(auVar52[8] == auVar37[0]);
        auVar48[9] = -(auVar52[9] == auVar37[1]);
        auVar48[10] = -(auVar52[10] == auVar37[2]);
        auVar48[0xb] = -(auVar52[0xb] == auVar37[3]);
        auVar48[0xc] = -(auVar52[0xc] == auVar37[4]);
        auVar48[0xd] = -(auVar52[0xd] == auVar37[5]);
        auVar48[0xe] = -(auVar52[0xe] == auVar37[6]);
        auVar48[0xf] = -(auVar52[0xf] == auVar37[7]);
        uVar28 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf
        ;
        uVar35 = (uint)uVar28;
        if (uVar28 != 0) break;
LAB_1422f6db1:
        auVar41[0] = -(auVar52[0] == -1);
        auVar41[1] = -(auVar52[1] == -1);
        auVar41[2] = -(auVar52[2] == -1);
        auVar41[3] = -(auVar52[3] == -1);
        auVar41[4] = -(auVar52[4] == -1);
        auVar41[5] = -(auVar52[5] == -1);
        auVar41[6] = -(auVar52[6] == -1);
        auVar41[7] = -(auVar52[7] == -1);
        auVar41[8] = -(auVar52[8] == -1);
        auVar41[9] = -(auVar52[9] == -1);
        auVar41[10] = -(auVar52[10] == -1);
        auVar41[0xb] = -(auVar52[0xb] == -1);
        auVar41[0xc] = -(auVar52[0xc] == -1);
        auVar41[0xd] = -(auVar52[0xd] == -1);
        auVar41[0xe] = -(auVar52[0xe] == -1);
        auVar41[0xf] = -(auVar52[0xf] == -1);
        if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar41 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar41 >> 0x1f,0) & 1) != 0) || (SUB161(auVar41 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') goto LAB_1422f76b2;
        uVar33 = uVar33 + lVar17 + 0x10;
        lVar17 = lVar17 + 0x10;
      }
      while( true ) {
        uVar5 = 0;
        for (uVar6 = uVar35; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar30 = uVar5 + uVar33 & (ulonglong)pppbVar3;
        if (ppppbStack_e0 == (byte ****)pppbVar21[uVar30 * -0x1b + -0x1b]) break;
        uVar28 = (ushort)(uVar35 - 1) & (ushort)uVar35;
        uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar28);
        if (uVar28 == 0) goto LAB_1422f6db1;
      }
      *(undefined4 *)(pppbVar21 + uVar30 * -0x1b + -0x11) = 0;
      *(undefined4 *)((longlong)pppbVar21 + uVar30 * -0xd8 + -0x84) = uVar2;
      ppbStack_1c8 = (byte **)pppppuStack_d8;
      ppppbStack_1d8 = (byte ****)pppppuStack_e8;
      ppppbStack_1d0 = ppppbStack_e0;
      uVar33 = (longlong)ppppbVar34 - (longlong)ppppbStack_1a0;
      if (ppppbVar34 < ppppbStack_1a0) {
        lVar17 = (longlong)ppppbVar34 * 0xb0;
        ppppbVar31 = (byte ****)(lStack_240 + lVar17);
        pdb_141b4ac50(&pppppuStack_e8,lStack_240 + lVar17 + 0x10);
        if (*(int *)(lVar16 + lVar17) == 1) {
          if (*plStack_230 == 0) {
            pppbVar21 = (byte ***)0x0;
          }
          else {
            pppbVar20 = ppppbVar31[1];
            pppbVar21 = (byte ***)pdb_140a661f0();
          }
          if (pppbVar21 == (byte ***)0x0) {
            pppbVar21 = ppppbVar31[6];
            pppbVar20 = ppppbVar31[7];
          }
          if ((longlong)pppbVar20 < 0) {
            ppppbVar31 = (byte ****)0x0;
LAB_1422f76ff:
            pdb_142dc7e2a(ppppbVar31,pppbVar20);
            goto LAB_1422f787b;
          }
          if (pppbVar20 == (byte ***)0x0) {
            pbStack_208 = (byte *)0x1;
            pppbStack_210 = pppbVar20;
            pppbStack_200 = pppbVar20;
          }
          else {
            pdb_14007ee60();
            ppppbVar31 = (byte ****)0x1;
            pbVar22 = pub_1406abab0((ulonglong)pppbVar20,1);
            if (pbVar22 == (byte *)0x0) goto LAB_1422f76ff;
            pub_142e32760(pbVar22,pppbVar21,pppbVar20);
            pppbStack_210 = pppbVar20;
            pbStack_208 = pbVar22;
            pppbStack_200 = pppbVar20;
          }
        }
        else {
          ppppbVar31 = ppppbVar31 + 5;
          pdb_140f60be0(&pppbStack_210,ppppbVar31);
        }
        ppbStack_f8 = (byte **)pppppuStack_d8;
        ppppbStack_108 = (byte ****)pppppuStack_e8;
        ppppbStack_100 = ppppbStack_e0;
        plVar24 = plStack_118;
      }
      else {
        if (uStack_198 <= uVar33) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar33,uStack_198,&UNK_1434d6ee0);
        }
        lVar16 = lStack_238 + uVar33 * 0x18;
        pdb_140f60be0(&uStack_130,lVar16);
        pdb_140a27b90(&pppppuStack_e8,lVar16);
        pdb_140a27c50(&pppbStack_210,&pppppuStack_e8);
        plVar24 = plStack_118;
        ppbStack_f8 = ppbStack_120;
        ppppbStack_108 = (byte ****)CONCAT44(uStack_130._4_4_,(float)uStack_130);
        ppppbStack_100 = ppppbStack_128;
        if (ppppbStack_e0 != (byte ****)0x0) {
          pub_1406abac0((byte *)pppppuStack_d8,(ulonglong)ppppbStack_e0,1);
        }
      }
      ppbVar26 = ppbStack_f8;
      ppppbVar23 = ppppbStack_100;
      ppbStack_148 = ppbStack_f8;
      ppppbStack_158 = ppppbStack_108;
      ppppbStack_150 = ppppbStack_100;
      pppbStack_f0 = pppbStack_210;
      pbStack_160 = pbStack_208;
      ppppbStack_b0 = (byte ****)pppbStack_200;
      lVar16 = plVar24[2];
      if (lVar16 == 0) {
LAB_1422f7077:
        pppbStack_220 = (byte ***)&UNK_1434d6ef8;
        uStack_218 = 3;
        pbStack_1b8 = (byte *)0x0;
        pbStack_1b0 = (byte *)0x1;
        uStack_1a8 = 0;
        bVar8 = false;
      }
      else {
        lVar17 = plStack_118[1];
        ppppbVar31 = (byte ****)0x1;
        lVar27 = 0;
        while ((*(byte ***)(lVar17 + 0x10 + lVar27) != ppbVar26 ||
               (iVar15 = pub_142e32750(*(undefined8 *)(lVar17 + 8 + lVar27),ppppbVar23,ppbVar26),
               iVar15 != 0))) {
          ppppbVar31 = (byte ****)((longlong)ppppbVar31 + 1);
          lVar27 = lVar27 + 0x18;
          if (lVar16 * 0x18 == lVar27) goto LAB_1422f7077;
        }
        pppbStack_220 = (byte ***)&UNK_1434d6efb;
        uStack_218 = 6;
        pppppuStack_e8 = &ppppbStack_108;
        ppppbStack_e0 = (byte ****)pdb_140f72a40;
        uStack_a2 = 1;
        ppppbStack_108 = ppppbVar31;
        pdb_140f60760(&pbStack_1b8,&UNK_1434d6f28,&pppppuStack_e8);
        ppppbVar31 = (byte ****)((longlong)ppppbVar31 + -1);
        bVar8 = true;
      }
      ppppbVar23 = ppppbStack_1d0;
      pppppuStack_e8 = (undefined *****)0x0;
      ppppbStack_e0 = _DAT_14329c330;
      pppppuStack_d8 = (undefined *****)_UNK_14329c338;
      uStack_a1 = 1;
      ppppbStack_e0 = (byte ****)pdb_1400affa0(&pppppuStack_e8);
      pppppuStack_e8 = (undefined *****)ppppbVar23;
      uStack_a1 = 1;
      uVar19 = pdb_1400b0130(&pppppuStack_e8);
      uStack_a1 = 1;
      pdb_14072caa0(&ppppbStack_108,&ppppbStack_1d8,uVar19);
      ppppbVar23 = ppppbStack_108;
      if (ppppbStack_108[0x39] == (byte ***)0x0) {
LAB_1422f76be:
        uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142fa6b30);
      }
      uStack_a1 = 1;
      uVar33 = pdb_1400af0a0(ppppbStack_108 + 0x3a,&ppppbStack_100);
      pppbVar20 = ppppbVar23[0x36];
      pppbVar21 = ppppbVar23[0x37];
      bVar14 = (byte)(uVar33 >> 0x39);
      auVar37 = ZEXT216(CONCAT11(bVar14,bVar14));
      auVar37 = pshuflw(auVar37,auVar37,0);
      lVar16 = 0;
      do {
        uVar33 = uVar33 & (ulonglong)pppbVar21;
        auVar52 = *(undefined1 (*) [16])((longlong)pppbVar20 + uVar33);
        auVar49[0] = -(auVar52[0] == auVar37[0]);
        auVar49[1] = -(auVar52[1] == auVar37[1]);
        auVar49[2] = -(auVar52[2] == auVar37[2]);
        auVar49[3] = -(auVar52[3] == auVar37[3]);
        auVar49[4] = -(auVar52[4] == auVar37[4]);
        auVar49[5] = -(auVar52[5] == auVar37[5]);
        auVar49[6] = -(auVar52[6] == auVar37[6]);
        auVar49[7] = -(auVar52[7] == auVar37[7]);
        auVar49[8] = -(auVar52[8] == auVar37[0]);
        auVar49[9] = -(auVar52[9] == auVar37[1]);
        auVar49[10] = -(auVar52[10] == auVar37[2]);
        auVar49[0xb] = -(auVar52[0xb] == auVar37[3]);
        auVar49[0xc] = -(auVar52[0xc] == auVar37[4]);
        auVar49[0xd] = -(auVar52[0xd] == auVar37[5]);
        auVar49[0xe] = -(auVar52[0xe] == auVar37[6]);
        auVar49[0xf] = -(auVar52[0xf] == auVar37[7]);
        uVar28 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (ushort)(auVar49[0xf] >> 7) << 0xf
        ;
        uVar35 = (uint)uVar28;
        while (uVar28 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar35; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar30 = uVar5 + uVar33 & (ulonglong)pppbVar21;
          lVar17 = uVar30 * -0xd8;
          if (ppppbStack_100 == (byte ****)pppbVar20[uVar30 * -0x1b + -0x1b]) {
            *(undefined8 *)((longlong)pppbVar20 + lVar17 + -0x9c) = 0;
            *(undefined8 *)((longlong)pppbVar20 + lVar17 + -0x94) = 0;
            pppbVar20[uVar30 * -0x1b + -0x15] = (byte **)0x0;
            pppbVar20[uVar30 * -0x1b + -0x14] = (byte **)0x0;
            pppbVar20[uVar30 * -0x1b + -0x17] = (byte **)0x0;
            pppbVar20[uVar30 * -0x1b + -0x16] = (byte **)0x0;
            *(undefined4 *)((longlong)pppbVar20 + lVar17 + -0x8c) = 0x43d20000;
            pppbVar20[uVar30 * -0x1b + -0x11] = (byte **)0x0;
            pppbVar20[uVar30 * -0x1b + -0x10] = (byte **)0x0;
            *(undefined8 *)((longlong)pppbVar20 + lVar17 + -0x7a) = 0;
            *(undefined2 *)((longlong)pppbVar20 + lVar17 + -0x72) = 2;
            ppbStack_258 = ppbStack_f8;
            ppppbStack_268 = ppppbStack_108;
            ppppbStack_260 = ppppbStack_100;
            uStack_a1 = 1;
            pdb_140737280(&ppppbStack_108,pbStack_160,ppppbStack_b0,0x1a);
            pppppuStack_e8 = (undefined *****)&pppbStack_220;
            ppppbStack_e0 = (byte ****)pdb_1402ed400;
            pppppuStack_d8 = (undefined *****)&pbStack_1b8;
            pcStack_d0 = pdb_140001020;
            pcStack_c0 = pdb_140001020;
            pppppuStack_c8 = &ppppbStack_108;
            pdb_140f60760(&uStack_130,&UNK_1434d6f01,&pppppuStack_e8);
            if (ppppbStack_108 != (byte ****)0x0) {
              pub_1406abac0((byte *)ppppbStack_100,(ulonglong)ppppbStack_108,1);
            }
            ppbVar26 = ppbStack_120;
            ppppbVar23 = ppppbStack_128;
            ppppbStack_b0 = (byte ****)CONCAT44(uStack_130._4_4_,(float)uStack_130);
            uVar19 = pdb_141176dc0(&ppppbStack_158);
            ppppbStack_110 = ppppbVar23;
            pdb_1407341c0(&pppppuStack_e8,&ppppbStack_268,ppppbVar23,ppbVar26,uVar19);
            uVar19 = pdb_14116dd60(&pppppuStack_e8);
            pdb_14119b2b0(uVar19,uVar11);
            ppbStack_178 = (byte **)pppppuStack_d8;
            ppppbStack_188 = (byte ****)pppppuStack_e8;
            ppppbStack_180 = ppppbStack_e0;
            if (ppppbStack_b0 != (byte ****)0x0) {
              pub_1406abac0((byte *)ppppbStack_110,(ulonglong)ppppbStack_b0,1);
            }
            if (ppppbStack_1a0 <= ppppbVar34) {
              pppppuStack_d8 = (undefined *****)ppbStack_178;
              pppppuStack_e8 = (undefined *****)ppppbStack_188;
              ppppbStack_e0 = ppppbStack_180;
              uStack_a1 = 1;
              lVar16 = pdb_14116dd60(&pppppuStack_e8);
              *(undefined4 *)(lVar16 + 600) = 0xffffff50;
              ppbStack_178 = (byte **)pppppuStack_d8;
              ppppbStack_188 = (byte ****)pppppuStack_e8;
              ppppbStack_180 = ppppbStack_e0;
            }
            ppppbVar32 = ppppbStack_188;
            if (ppppbStack_188[0x39] == (byte ***)0x0) goto LAB_1422f76d7;
            uStack_a1 = 1;
            uVar33 = pdb_1400af0a0(ppppbStack_188 + 0x3a,&ppppbStack_180);
            plVar24 = plStack_118;
            ppppbVar23 = ppppbStack_138;
            param_1 = plStack_140;
            pppbVar20 = ppppbVar32[0x36];
            pppbVar21 = ppppbVar32[0x37];
            bVar14 = (byte)(uVar33 >> 0x39);
            auVar37 = ZEXT216(CONCAT11(bVar14,bVar14));
            auVar37 = pshuflw(auVar37,auVar37,0);
            lVar16 = 0;
            goto LAB_1422f7426;
          }
          uVar28 = (ushort)(uVar35 - 1) & (ushort)uVar35;
          uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar28);
        }
        auVar42[0] = -(auVar52[0] == -1);
        auVar42[1] = -(auVar52[1] == -1);
        auVar42[2] = -(auVar52[2] == -1);
        auVar42[3] = -(auVar52[3] == -1);
        auVar42[4] = -(auVar52[4] == -1);
        auVar42[5] = -(auVar52[5] == -1);
        auVar42[6] = -(auVar52[6] == -1);
        auVar42[7] = -(auVar52[7] == -1);
        auVar42[8] = -(auVar52[8] == -1);
        auVar42[9] = -(auVar52[9] == -1);
        auVar42[10] = -(auVar52[10] == -1);
        auVar42[0xb] = -(auVar52[0xb] == -1);
        auVar42[0xc] = -(auVar52[0xc] == -1);
        auVar42[0xd] = -(auVar52[0xd] == -1);
        auVar42[0xe] = -(auVar52[0xe] == -1);
        auVar42[0xf] = -(auVar52[0xf] == -1);
        if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar42 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar42 >> 0x1f,0) & 1) != 0) || (SUB161(auVar42 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') goto LAB_1422f76be;
        uVar33 = uVar33 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      } while( true );
    }
LAB_1422f6bca:
    auVar40[0] = -(auVar52[0] == -1);
    auVar40[1] = -(auVar52[1] == -1);
    auVar40[2] = -(auVar52[2] == -1);
    auVar40[3] = -(auVar52[3] == -1);
    auVar40[4] = -(auVar52[4] == -1);
    auVar40[5] = -(auVar52[5] == -1);
    auVar40[6] = -(auVar52[6] == -1);
    auVar40[7] = -(auVar52[7] == -1);
    auVar40[8] = -(auVar52[8] == -1);
    auVar40[9] = -(auVar52[9] == -1);
    auVar40[10] = -(auVar52[10] == -1);
    auVar40[0xb] = -(auVar52[0xb] == -1);
    auVar40[0xc] = -(auVar52[0xc] == -1);
    auVar40[0xd] = -(auVar52[0xd] == -1);
    auVar40[0xe] = -(auVar52[0xe] == -1);
    auVar40[0xf] = -(auVar52[0xf] == -1);
    if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar40 >> 0x37,0) & 1) != 0) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') goto LAB_1422f769a;
    uVar33 = uVar33 + lVar16 + 0x10;
    lVar16 = lVar16 + 0x10;
  } while( true );
LAB_1422f7426:
  uVar33 = uVar33 & (ulonglong)pppbVar21;
  auVar52 = *(undefined1 (*) [16])((longlong)pppbVar20 + uVar33);
  auVar50[0] = -(auVar52[0] == auVar37[0]);
  auVar50[1] = -(auVar52[1] == auVar37[1]);
  auVar50[2] = -(auVar52[2] == auVar37[2]);
  auVar50[3] = -(auVar52[3] == auVar37[3]);
  auVar50[4] = -(auVar52[4] == auVar37[4]);
  auVar50[5] = -(auVar52[5] == auVar37[5]);
  auVar50[6] = -(auVar52[6] == auVar37[6]);
  auVar50[7] = -(auVar52[7] == auVar37[7]);
  auVar50[8] = -(auVar52[8] == auVar37[0]);
  auVar50[9] = -(auVar52[9] == auVar37[1]);
  auVar50[10] = -(auVar52[10] == auVar37[2]);
  auVar50[0xb] = -(auVar52[0xb] == auVar37[3]);
  auVar50[0xc] = -(auVar52[0xc] == auVar37[4]);
  auVar50[0xd] = -(auVar52[0xd] == auVar37[5]);
  auVar50[0xe] = -(auVar52[0xe] == auVar37[6]);
  auVar50[0xf] = -(auVar52[0xf] == auVar37[7]);
  uVar28 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
  uVar35 = (uint)uVar28;
  while (uVar28 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar35; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar30 = uVar5 + uVar33 & (ulonglong)pppbVar21;
    if (ppppbStack_180 == (byte ****)pppbVar20[uVar30 * -0x1b + -0x1b]) {
      bVar10 = true;
      bVar9 = true;
      if ((*(byte *)((longlong)pppbVar20 + uVar30 * -0xd8 + -6) & 0x30) != 0) {
        if (bVar8) {
          ppppbVar32 = (byte ****)plStack_118[2];
          if (ppppbVar32 <= ppppbVar31) {
LAB_1422f7861:
            uStack_a1 = 1;
            pdb_142dc7ef8(ppppbVar31,ppppbVar32,&UNK_1434d6f10);
            goto LAB_1422f787b;
          }
          lVar16 = plStack_118[1];
          uVar33 = *(ulonglong *)(lVar16 + (longlong)ppppbVar31 * 0x18);
          ppppbStack_b0 = *(byte *****)(lVar16 + 8 + (longlong)ppppbVar31 * 0x18);
          pub_142e32770(lVar16 + (longlong)ppppbVar31 * 0x18,
                        lVar16 + (longlong)ppppbVar31 * 0x18 + 0x18,
                        (longlong)((longlong)ppppbVar32 + ~(ulonglong)ppppbVar31) * 0x18);
          ppppbVar32 = (byte ****)((longlong)ppppbVar32 + -1);
          plVar24[2] = (longlong)ppppbVar32;
          param_1 = plStack_140;
          ppppbVar23 = ppppbStack_138;
          if (uVar33 != 0) {
            if (SBORROW8(0,uVar33)) goto LAB_1422f7861;
            pub_1406abac0((byte *)ppppbStack_b0,uVar33,1);
            param_1 = plStack_140;
            ppppbVar23 = ppppbStack_138;
          }
        }
        else {
          ppppbStack_b0 = ppppbStack_158;
          ppppbStack_110 = ppppbStack_150;
          ppbStack_228 = ppbStack_148;
          lVar16 = plStack_118[2];
          if (lVar16 == *plStack_118) {
            pdb_142d7e830(plStack_118);
          }
          lVar17 = plVar24[1];
          *(byte *****)(lVar17 + lVar16 * 0x18) = ppppbStack_b0;
          *(byte *****)(lVar17 + 8 + lVar16 * 0x18) = ppppbStack_110;
          *(byte ***)(lVar17 + 0x10 + lVar16 * 0x18) = ppbStack_228;
          plVar24[2] = lVar16 + 1;
          bVar10 = false;
          bVar9 = false;
        }
      }
      if (pbStack_1b8 != (byte *)0x0) {
        pub_1406abac0(pbStack_1b0,(ulonglong)pbStack_1b8,1);
        bVar9 = bVar10;
      }
      if (pppbStack_f0 != (byte ***)0x0) {
        pub_1406abac0(pbStack_160,(ulonglong)pppbStack_f0,1);
      }
      if ((bVar9) && (ppppbStack_158 != (byte ****)0x0)) {
        pub_1406abac0((byte *)ppppbStack_150,(ulonglong)ppppbStack_158,1);
      }
      pppppuStack_e8 = (undefined *****)ppppbStack_1d8;
      bVar14 = pdb_141172f20(ppppbStack_1d8,ppppbStack_1d0,&pppppuStack_e8);
      if (bVar14 != 0) {
        ppppbStack_190 = ppppbVar34;
      }
      uStack_168 = CONCAT71((int7)((ulonglong)uStack_168 >> 8),(byte)uStack_168 | bVar14);
      ppppbVar34 = ppppbStack_248;
      if (ppppbVar23 <= ppppbStack_248) goto LAB_1422f7710;
      goto LAB_1422f6ac1;
    }
    uVar28 = (ushort)(uVar35 - 1) & (ushort)uVar35;
    uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar28);
  }
  auVar43[0] = -(auVar52[0] == -1);
  auVar43[1] = -(auVar52[1] == -1);
  auVar43[2] = -(auVar52[2] == -1);
  auVar43[3] = -(auVar52[3] == -1);
  auVar43[4] = -(auVar52[4] == -1);
  auVar43[5] = -(auVar52[5] == -1);
  auVar43[6] = -(auVar52[6] == -1);
  auVar43[7] = -(auVar52[7] == -1);
  auVar43[8] = -(auVar52[8] == -1);
  auVar43[9] = -(auVar52[9] == -1);
  auVar43[10] = -(auVar52[10] == -1);
  auVar43[0xb] = -(auVar52[0xb] == -1);
  auVar43[0xc] = -(auVar52[0xc] == -1);
  auVar43[0xd] = -(auVar52[0xd] == -1);
  auVar43[0xe] = -(auVar52[0xe] == -1);
  auVar43[0xf] = -(auVar52[0xf] == -1);
  if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar43 >> 0x17,0) & 1) != 0) || (SUB161(auVar43 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar43 >> 0x27,0) & 1) != 0) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') {
LAB_1422f76d7:
    uStack_a1 = 1;
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_1422f787b:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar33 = uVar33 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_1422f7426;
LAB_1422f69f8:
  auVar46[0] = -(*pcVar1 == -1);
  auVar46[1] = -(pcVar1[1] == -1);
  auVar46[2] = -(pcVar1[2] == -1);
  auVar46[3] = -(pcVar1[3] == -1);
  auVar46[4] = -(pcVar1[4] == -1);
  auVar46[5] = -(pcVar1[5] == -1);
  auVar46[6] = -(pcVar1[6] == -1);
  auVar46[7] = -(pcVar1[7] == -1);
  auVar46[8] = -(pcVar1[8] == -1);
  auVar46[9] = -(pcVar1[9] == -1);
  auVar46[10] = -(pcVar1[10] == -1);
  auVar46[0xb] = -(pcVar1[0xb] == -1);
  auVar46[0xc] = -(pcVar1[0xc] == -1);
  auVar46[0xd] = -(pcVar1[0xd] == -1);
  auVar46[0xe] = -(pcVar1[0xe] == -1);
  auVar46[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar46 >> 0x17,0) & 1) != 0) || (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar46 >> 0x27,0) & 1) != 0) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x37,0) & 1) != 0) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') goto LAB_1422f6a13;
  uVar33 = uVar33 + lVar27 + 0x10;
  lVar27 = lVar27 + 0x10;
  goto LAB_1422f69b2;
}

