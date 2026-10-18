// VA 0x140bae900, PDB extent 6875 bytes
// country_core::systems::wall::eraser::bulldoze_params::BulldozeParams::queue_wall_bulldoze
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::eraser::bulldoze_params::BulldozeParams::queue_wall_bulldoze
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
   Extent: 6875 */

longlong ****
pdb_140bae900(longlong ****param_1,longlong *param_2,longlong ****param_3,longlong ****param_4,
             float param_5)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong ****pppplVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong ****pppplVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong **pplVar16;
  longlong **pplVar17;
  longlong **pplVar18;
  longlong **pplVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  longlong ***ppplVar24;
  undefined1 uVar25;
  longlong ****pppplVar26;
  ulonglong uVar27;
  byte *pbVar28;
  longlong ***ppplVar29;
  longlong ***ppplVar30;
  longlong ***ppplVar31;
  longlong lVar32;
  byte *pbVar33;
  byte *pbVar34;
  int *piVar35;
  byte *pbVar36;
  ulonglong uVar37;
  longlong ****pppplVar38;
  undefined8 uVar39;
  uint uVar40;
  undefined4 *puVar41;
  longlong ***ppplVar42;
  ushort uVar43;
  longlong lVar44;
  longlong *plVar45;
  longlong *plVar46;
  undefined8 uVar47;
  undefined1 uVar48;
  longlong lVar49;
  byte bVar50;
  float fVar51;
  undefined1 auVar52 [16];
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined4 uStack_2f8;
  undefined4 uStack_2ec;
  longlong **pplStack_2e8;
  longlong **pplStack_2e0;
  undefined4 uStack_2d8;
  longlong ****pppplStack_2b8;
  undefined4 uStack_2b0;
  int iStack_2ac;
  undefined4 uStack_2a8;
  uint uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong **pplStack_298;
  longlong **pplStack_290;
  longlong **pplStack_288;
  uint uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  longlong **pplStack_250;
  longlong ***ppplStack_248;
  undefined8 uStack_240;
  longlong ***ppplStack_238;
  longlong **pplStack_230;
  byte *pbStack_228;
  longlong **pplStack_220;
  undefined4 uStack_218;
  undefined4 uStack_210;
  undefined8 uStack_1f4;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined1 uStack_1de;
  undefined1 uStack_1dd;
  undefined1 uStack_1dc;
  undefined1 uStack_1db;
  undefined1 uStack_1da;
  undefined1 uStack_1d9;
  longlong ***ppplStack_1d8;
  undefined4 uStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  longlong ***ppplStack_1b8;
  longlong **pplStack_1b0;
  longlong ***ppplStack_1a8;
  longlong **pplStack_1a0;
  longlong **pplStack_198;
  longlong **pplStack_190;
  longlong **pplStack_188;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  longlong **pplStack_150;
  longlong ***ppplStack_148;
  byte *pbStack_140;
  longlong ***ppplStack_138;
  longlong **pplStack_130;
  byte *pbStack_128;
  longlong **pplStack_120;
  float fStack_118;
  uint uStack_110;
  longlong ***ppplStack_10c;
  byte *pbStack_104;
  longlong ***ppplStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  longlong ***ppplStack_d8;
  longlong ***ppplStack_d0;
  longlong **pplStack_c8;
  longlong ***ppplStack_c0;
  longlong ***ppplStack_b8;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  longlong *plStack_a8;
  byte *pbStack_a0;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  plVar46 = (longlong *)*param_2;
  pppplStack_2b8 = param_3;
  if (plVar46[3] == 0) {
LAB_140baea3c:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143061000);
  }
  uVar27 = pdb_1400af0a0(plVar46 + 4,&pppplStack_2b8);
  lVar49 = *plVar46;
  bVar50 = (byte)(uVar27 >> 0x39);
  auVar52 = ZEXT216(CONCAT11(bVar50,bVar50));
  auVar52 = pshuflw(auVar52,auVar52,0);
  lVar32 = 0;
  while( true ) {
    uVar27 = uVar27 & plVar46[1];
    auVar63 = *(undefined1 (*) [16])(lVar49 + uVar27);
    auVar60[0] = -(auVar63[0] == auVar52[0]);
    auVar60[1] = -(auVar63[1] == auVar52[1]);
    auVar60[2] = -(auVar63[2] == auVar52[2]);
    auVar60[3] = -(auVar63[3] == auVar52[3]);
    auVar60[4] = -(auVar63[4] == auVar52[4]);
    auVar60[5] = -(auVar63[5] == auVar52[5]);
    auVar60[6] = -(auVar63[6] == auVar52[6]);
    auVar60[7] = -(auVar63[7] == auVar52[7]);
    auVar60[8] = -(auVar63[8] == auVar52[0]);
    auVar60[9] = -(auVar63[9] == auVar52[1]);
    auVar60[10] = -(auVar63[10] == auVar52[2]);
    auVar60[0xb] = -(auVar63[0xb] == auVar52[3]);
    auVar60[0xc] = -(auVar63[0xc] == auVar52[4]);
    auVar60[0xd] = -(auVar63[0xd] == auVar52[5]);
    auVar60[0xe] = -(auVar63[0xe] == auVar52[6]);
    auVar60[0xf] = -(auVar63[0xf] == auVar52[7]);
    uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
    uVar40 = (uint)uVar43;
    if (uVar43 != 0) break;
LAB_140bae9e0:
    auVar54[0] = -(auVar63[0] == -1);
    auVar54[1] = -(auVar63[1] == -1);
    auVar54[2] = -(auVar63[2] == -1);
    auVar54[3] = -(auVar63[3] == -1);
    auVar54[4] = -(auVar63[4] == -1);
    auVar54[5] = -(auVar63[5] == -1);
    auVar54[6] = -(auVar63[6] == -1);
    auVar54[7] = -(auVar63[7] == -1);
    auVar54[8] = -(auVar63[8] == -1);
    auVar54[9] = -(auVar63[9] == -1);
    auVar54[10] = -(auVar63[10] == -1);
    auVar54[0xb] = -(auVar63[0xb] == -1);
    auVar54[0xc] = -(auVar63[0xc] == -1);
    auVar54[0xd] = -(auVar63[0xd] == -1);
    auVar54[0xe] = -(auVar63[0xe] == -1);
    auVar54[0xf] = -(auVar63[0xf] == -1);
    if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') goto LAB_140baea3c;
    uVar27 = uVar27 + lVar32 + 0x10;
    lVar32 = lVar32 + 0x10;
  }
  while( true ) {
    uVar11 = 0;
    for (uVar12 = uVar40; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    lVar44 = (uVar11 + uVar27 & plVar46[1]) * -0x78;
    if (param_3 == *(longlong *****)(lVar49 + -0x78 + lVar44)) break;
    uVar43 = (ushort)(uVar40 - 1) & (ushort)uVar40;
    uVar40 = CONCAT22((short)(uVar40 - 1 >> 0x10),uVar43);
    if (uVar43 == 0) goto LAB_140bae9e0;
  }
  lVar49 = lVar49 + lVar44;
  pppplVar6 = *(longlong *****)(lVar49 + -0x60);
  uVar27 = (longlong)pppplVar6 * 8;
  ppplStack_c0 = (longlong ***)param_4;
  if (0x7ffffffffffffffc < uVar27 || (ulonglong)pppplVar6 >> 0x3d != 0) {
    uVar39 = 0;
LAB_140baea31:
    pdb_142dc7e2a(uVar39,uVar27);
    goto LAB_140baea3c;
  }
  uVar7 = *(undefined8 *)(lVar49 + -0x68);
  plStack_a8 = param_2;
  if (uVar27 == 0) {
    pbStack_a0 = (byte *)0x4;
    ppplStack_b8 = (longlong ***)0x0;
  }
  else {
    pdb_14007ee60();
    uVar39 = 4;
    pbStack_a0 = pub_1406abab0(uVar27,4);
    ppplStack_b8 = (longlong ***)pppplVar6;
    if (pbStack_a0 == (byte *)0x0) goto LAB_140baea31;
  }
  if (pppplVar6 != (longlong ****)0x0) {
    pub_142e32760(pbStack_a0,uVar7,uVar27);
  }
  ppplVar29 = *(longlong ****)(lVar49 + -0x48);
  uVar27 = (longlong)ppplVar29 * 4;
  if (0x7ffffffffffffffc < uVar27 || (ulonglong)ppplVar29 >> 0x3e != 0) {
    uVar39 = 0;
LAB_140baeaca:
    pdb_142dc7e2a(uVar39,uVar27);
    goto LAB_140baff54;
  }
  if (uVar27 == 0) {
    pbVar28 = (byte *)0x4;
    pppplVar38 = param_3;
    goto LAB_140baec0b;
  }
  puVar8 = *(undefined4 **)(lVar49 + -0x50);
  ppplStack_d0 = (longlong ***)param_3;
  pdb_14007ee60();
  uVar39 = 4;
  pbVar28 = pub_1406abab0(uVar27,4);
  if (pbVar28 == (byte *)0x0) goto LAB_140baeaca;
  pppplVar38 = (longlong ****)ppplStack_d0;
  if (ppplVar29 == (longlong ***)0x0) goto LAB_140baec0b;
  ppplVar30 = (longlong ***)((longlong)ppplVar29 - 1U);
  if (ppplVar29 < (longlong ***)((longlong)ppplVar29 - 1U)) {
    ppplVar30 = ppplVar29;
  }
  if (ppplVar30 < (longlong ***)0x8) {
    lVar32 = 0;
    ppplVar30 = ppplVar29;
    puVar41 = puVar8;
  }
  else {
    uVar37 = (longlong)ppplVar30 + 1;
    uVar27 = 8;
    if ((uVar37 & 7) != 0) {
      uVar27 = (ulonglong)((uint)uVar37 & 7);
    }
    lVar32 = uVar37 - uVar27;
    ppplVar30 = (longlong ***)((longlong)ppplVar29 - lVar32);
    puVar41 = puVar8 + lVar32;
    lVar44 = 0;
    do {
      uVar39 = *(undefined8 *)((longlong)(puVar8 + lVar44) + 8);
      uVar7 = *(undefined8 *)(puVar8 + lVar44 + 4);
      uVar47 = *(undefined8 *)((longlong)(puVar8 + lVar44 + 4) + 8);
      *(undefined8 *)(pbVar28 + lVar44 * 4) = *(undefined8 *)(puVar8 + lVar44);
      *(undefined8 *)(pbVar28 + lVar44 * 4 + 8) = uVar39;
      *(undefined8 *)(pbVar28 + lVar44 * 4 + 0x10) = uVar7;
      *(undefined8 *)(pbVar28 + lVar44 * 4 + 0x10 + 8) = uVar47;
      lVar44 = lVar44 + 8;
    } while (lVar32 != lVar44);
  }
  pbVar33 = pbVar28 + lVar32 * 4;
  do {
    if (puVar41 == puVar8 + (longlong)ppplVar29) break;
    uVar3 = *puVar41;
    puVar41 = puVar41 + 1;
    *(undefined4 *)pbVar33 = uVar3;
    pbVar33 = pbVar33 + 4;
    ppplVar30 = (longlong ***)((longlong)ppplVar30 - 1);
  } while (ppplVar30 != (longlong ***)0x0);
LAB_140baec0b:
  pbVar33 = pbStack_a0;
  fStack_118 = *(float *)(lVar49 + -0x40);
  uStack_f4 = *(undefined4 *)(lVar49 + -0x1c);
  uVar40 = *(uint *)(lVar49 + -0x38);
  iVar13 = uVar40 - 2;
  if (uVar40 < 2) {
    iVar13 = 2;
  }
  uStack_110 = 2;
  if (iVar13 != 0) {
    if (iVar13 == 1) {
      uStack_110 = 3;
    }
    else {
      uStack_2a8 = (undefined4)*(undefined8 *)(lVar49 + -0x24);
      uStack_2a4 = (uint)((ulonglong)*(undefined8 *)(lVar49 + -0x24) >> 0x20);
      pppplStack_2b8 = *(longlong *****)(lVar49 + -0x34);
      uStack_2b0 = (undefined4)*(undefined8 *)(lVar49 + -0x2c);
      iStack_2ac = (int)((ulonglong)*(undefined8 *)(lVar49 + -0x2c) >> 0x20);
      uStack_110 = uVar40;
    }
  }
  pbStack_140 = pbStack_a0;
  pbStack_104 = (byte *)CONCAT44(iStack_2ac,uStack_2b0);
  ppplStack_10c = (longlong ***)pppplStack_2b8;
  ppplStack_fc = (longlong ***)CONCAT44(uStack_2a4,uStack_2a8);
  uStack_e0 = *(longlong ****)(lVar49 + -8);
  fVar53 = (_DAT_142e3787c / fStack_118) * _DAT_142e36f50;
  uStack_f0 = (undefined4)*(undefined8 *)(lVar49 + -0x18);
  uStack_ec = (undefined4)((ulonglong)*(undefined8 *)(lVar49 + -0x18) >> 0x20);
  uStack_e8 = (undefined4)*(undefined8 *)(lVar49 + -0x10);
  uStack_e4 = (undefined4)((ulonglong)*(undefined8 *)(lVar49 + -0x10) >> 0x20);
  fVar51 = param_5 - fVar53;
  fVar59 = 0.0;
  if (0.0 <= fVar51) {
    fVar59 = fVar51;
  }
  fVar51 = _DAT_142e36f28;
  if (fVar59 <= _DAT_142e36f28) {
    fVar51 = fVar59;
  }
  ppplStack_1b8 = (longlong ***)CONCAT44(ppplStack_1b8._4_4_,fVar51);
  ppplStack_148 = ppplStack_b8;
  ppplStack_138 = (longlong ***)pppplVar6;
  pplStack_130 = (longlong **)ppplVar29;
  pbStack_128 = pbVar28;
  pplStack_120 = (longlong **)ppplVar29;
  if ((fVar51 < 0.0) || (_DAT_142e36f28 < fVar51)) {
    pppplStack_2b8 = &ppplStack_1b8;
    uStack_2b0 = 0x40f70fc0;
    iStack_2ac = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14335ec38,&pppplStack_2b8,&UNK_143061018);
  }
  param_5 = param_5 + fVar53;
  fVar59 = 0.0;
  if (0.0 <= param_5) {
    fVar59 = param_5;
  }
  fVar53 = _DAT_142e36f28;
  if (fVar59 <= _DAT_142e36f28) {
    fVar53 = fVar59;
  }
  ppplStack_1b8 = (longlong ***)CONCAT44(ppplStack_1b8._4_4_,fVar53);
  if ((fVar53 < 0.0) || (_DAT_142e36f28 < fVar53)) {
    pppplStack_2b8 = &ppplStack_1b8;
    uStack_2b0 = 0x40f70fc0;
    iStack_2ac = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14335ec38,&pppplStack_2b8,&UNK_143061030);
  }
  *(undefined4 *)plStack_a8[10] = *(undefined4 *)((longlong)plStack_a8 + 0x5c);
  uVar27 = (longlong)pppplVar6 * 8;
  if (0x7ffffffffffffffc < uVar27 || (ulonglong)pppplVar6 >> 0x3d != 0) {
    uVar39 = 0;
LAB_140baed7a:
    pdb_142dc7e2a(uVar39,uVar27);
    goto LAB_140baff54;
  }
  pppplVar9 = (longlong ****)plStack_a8[8];
  if (uVar27 == 0) {
    pbStack_a0 = (byte *)0x4;
    pppplVar26 = (longlong ****)0x0;
    pbStack_140 = pbVar33;
  }
  else {
    pdb_14007ee60();
    uVar39 = 4;
    pbStack_a0 = pub_1406abab0(uVar27,4);
    pppplVar26 = pppplVar6;
    if (pbStack_a0 == (byte *)0x0) goto LAB_140baed7a;
  }
  ppplStack_d0 = (longlong ***)pppplVar9;
  if (pppplVar6 != (longlong ****)0x0) {
    pub_142e32760(pbStack_a0,pbVar33,uVar27);
  }
  pplVar16 = pplStack_120;
  pbVar28 = pbStack_128;
  uVar27 = (longlong)pplStack_120 * 4;
  ppplStack_b8 = (longlong ***)pppplVar26;
  if (0x7ffffffffffffffc < uVar27 || (ulonglong)pplStack_120 >> 0x3e != 0) {
    uVar39 = 0;
LAB_140baee19:
    pdb_142dc7e2a(uVar39,uVar27);
    goto LAB_140baff54;
  }
  if (uVar27 == 0) {
    ppplVar29 = (longlong ***)0x4;
  }
  else {
    pdb_14007ee60();
    uVar39 = 4;
    ppplVar29 = (longlong ***)pub_1406abab0(uVar27,4);
    if (ppplVar29 == (longlong ***)0x0) goto LAB_140baee19;
    if ((longlong ***)pplVar16 != (longlong ***)0x0) {
      ppplVar30 = (longlong ***)((longlong)pplVar16 - 1U);
      if (pplVar16 < (longlong ***)((longlong)pplVar16 - 1U)) {
        ppplVar30 = (longlong ***)pplVar16;
      }
      if (ppplVar30 < (longlong ***)0x8) {
        lVar49 = 0;
        ppplVar30 = (longlong ***)pplVar16;
        pbVar33 = pbVar28;
      }
      else {
        uVar37 = (longlong)ppplVar30 + 1;
        uVar27 = 8;
        if ((uVar37 & 7) != 0) {
          uVar27 = (ulonglong)((uint)uVar37 & 7);
        }
        lVar49 = uVar37 - uVar27;
        ppplVar30 = (longlong ***)((longlong)pplVar16 - lVar49);
        pbVar33 = pbVar28 + lVar49 * 4;
        lVar32 = 0;
        do {
          uVar39 = *(undefined8 *)(pbVar28 + lVar32 * 4 + 8);
          uVar7 = *(undefined8 *)(pbVar28 + lVar32 * 4 + 0x10);
          uVar47 = *(undefined8 *)(pbVar28 + lVar32 * 4 + 0x10 + 8);
          pbVar34 = (byte *)((longlong)ppplVar29 + lVar32 * 4);
          *(undefined8 *)pbVar34 = *(undefined8 *)(pbVar28 + lVar32 * 4);
          *(undefined8 *)(pbVar34 + 8) = uVar39;
          pbVar34 = (byte *)((longlong)ppplVar29 + lVar32 * 4 + 0x10);
          *(undefined8 *)pbVar34 = uVar7;
          *(undefined8 *)(pbVar34 + 8) = uVar47;
          lVar32 = lVar32 + 8;
        } while (lVar49 != lVar32);
      }
      pbVar34 = (byte *)((longlong)ppplVar29 + lVar49 * 4);
      do {
        if (pbVar33 == pbVar28 + (longlong)pplVar16 * 4) break;
        uVar3 = *(undefined4 *)pbVar33;
        pbVar33 = pbVar33 + 4;
        *(undefined4 *)pbVar34 = uVar3;
        pbVar34 = pbVar34 + 4;
        ppplVar30 = (longlong ***)((longlong)ppplVar30 - 1);
      } while (ppplVar30 != (longlong ***)0x0);
    }
  }
  plVar46 = plStack_a8;
  ppplVar30 = ppplStack_d0;
  iVar13 = uStack_110 - 2;
  if (uStack_110 < 2) {
    iVar13 = 2;
  }
  uStack_280 = 2;
  if (iVar13 != 0) {
    if (iVar13 == 1) {
      uStack_280 = 3;
    }
    else {
      ppplStack_1a8 = ppplStack_fc;
      ppplStack_1b8 = ppplStack_10c;
      pplStack_1b0 = (longlong **)pbStack_104;
      uStack_280 = uStack_110;
    }
  }
  uStack_26c = SUB84(ppplStack_1a8,0);
  uStack_268 = (uint)((ulonglong)ppplStack_1a8 >> 0x20);
  uStack_27c = SUB84(ppplStack_1b8,0);
  uStack_278 = (undefined4)((ulonglong)ppplStack_1b8 >> 0x20);
  uStack_274 = SUB84(pplStack_1b0,0);
  uStack_270 = (undefined4)((ulonglong)pplStack_1b0 >> 0x20);
  uStack_2b0 = SUB84(pbStack_a0,0);
  iStack_2ac = (int)((ulonglong)pbStack_a0 >> 0x20);
  uStack_2a8 = SUB84(pppplVar6,0);
  uStack_2a4 = (uint)((ulonglong)pppplVar6 >> 0x20);
  uStack_2a0 = SUB84(pplVar16,0);
  uStack_29c = (undefined4)((ulonglong)pplVar16 >> 0x20);
  pplStack_290 = pplVar16;
  pplStack_288 = (longlong **)CONCAT44(pplStack_288._4_4_,fStack_118);
  uStack_264 = uStack_f4;
  uStack_260 = CONCAT44(uStack_ec,uStack_f0);
  uStack_258 = CONCAT44(uStack_e4,uStack_e8);
  pplStack_250 = (longlong **)uStack_e0;
  uStack_240 = (byte *)CONCAT44(fVar53,fVar51);
  ppplStack_238 = (longlong ***)*ppplStack_c0;
  pplStack_230 = (longlong **)(ulonglong)*(uint *)(ppplStack_c0 + 1);
  pbStack_228 = (byte *)((ulonglong)pbStack_228 & 0xffffffffffffff00);
  ppplVar42 = (longlong ***)ppplStack_d0[2];
  pppplStack_2b8 = (longlong ****)ppplStack_b8;
  pplStack_298 = (longlong **)ppplVar29;
  ppplStack_248 = (longlong ***)pppplVar38;
  ppplStack_b8 = (longlong ***)param_1;
  if (ppplVar42 == (longlong ***)*ppplStack_d0) {
    ppplStack_b8 = (longlong ***)param_1;
    pdb_142d892c0(ppplStack_d0);
  }
  pub_142e32760(ppplVar30[1] + (longlong)ppplVar42 * 0x13,&pppplStack_2b8,0x98);
  ppplVar30[2] = (longlong **)((longlong)ppplVar42 + 1);
  *(undefined4 *)plVar46[0x39] = *(undefined4 *)((longlong)plVar46 + 0x1d4);
  lVar49 = plVar46[0x37];
  lVar32 = *(longlong *)(lVar49 + 0x30);
  uVar39 = *(undefined8 *)(lVar49 + 0x40);
  if (lVar32 == *(longlong *)(lVar49 + 0x20)) {
    pdb_142d7e8a0(lVar49 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar49 + 0x28) + lVar32 * 8) = uVar39;
  *(longlong *)(lVar49 + 0x30) = lVar32 + 1;
  *(longlong *)(lVar49 + 0x40) = *(longlong *)(lVar49 + 0x40) + 1;
  *(undefined4 *)plStack_a8[0x3d] = *(undefined4 *)((longlong)plStack_a8 + 500);
  lVar49 = plStack_a8[0x3b];
  lVar32 = *(longlong *)(lVar49 + 0x30);
  uVar39 = *(undefined8 *)(lVar49 + 0x40);
  if (lVar32 == *(longlong *)(lVar49 + 0x20)) {
    pdb_142d7e8a0(lVar49 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar49 + 0x28) + lVar32 * 8) = uVar39;
  *(longlong *)(lVar49 + 0x30) = lVar32 + 1;
  *(longlong *)(lVar49 + 0x40) = *(longlong *)(lVar49 + 0x40) + 1;
  *(undefined4 *)plStack_a8[0x21] = *(undefined4 *)((longlong)plStack_a8 + 0x114);
  lVar49 = plStack_a8[0x1b];
  pdb_140aa2f60(plStack_a8[0x1f],0,pppplVar38,lVar49,plStack_a8 + 0x13,&UNK_143061048,9);
  *(undefined4 *)plStack_a8[0x1d] = *(undefined4 *)((longlong)plStack_a8 + 0xf4);
  pdb_140c3d3c0(lVar49,0,pppplVar38);
  lVar49 = plStack_a8[4];
  pppplStack_2b8 = pppplVar38;
  if (*(longlong *)(lVar49 + 0x48) != 0) {
    uVar27 = pdb_1400af0a0(lVar49 + 0x50,&pppplStack_2b8);
    bVar50 = (byte)(uVar27 >> 0x39);
    auVar52 = ZEXT216(CONCAT11(bVar50,bVar50));
    auVar52 = pshuflw(auVar52,auVar52,0);
    lVar32 = 0;
    do {
      uVar27 = uVar27 & *(ulonglong *)(lVar49 + 0x38);
      auVar63 = *(undefined1 (*) [16])(*(longlong *)(lVar49 + 0x30) + uVar27);
      auVar61[0] = -(auVar63[0] == auVar52[0]);
      auVar61[1] = -(auVar63[1] == auVar52[1]);
      auVar61[2] = -(auVar63[2] == auVar52[2]);
      auVar61[3] = -(auVar63[3] == auVar52[3]);
      auVar61[4] = -(auVar63[4] == auVar52[4]);
      auVar61[5] = -(auVar63[5] == auVar52[5]);
      auVar61[6] = -(auVar63[6] == auVar52[6]);
      auVar61[7] = -(auVar63[7] == auVar52[7]);
      auVar61[8] = -(auVar63[8] == auVar52[0]);
      auVar61[9] = -(auVar63[9] == auVar52[1]);
      auVar61[10] = -(auVar63[10] == auVar52[2]);
      auVar61[0xb] = -(auVar63[0xb] == auVar52[3]);
      auVar61[0xc] = -(auVar63[0xc] == auVar52[4]);
      auVar61[0xd] = -(auVar63[0xd] == auVar52[5]);
      auVar61[0xe] = -(auVar63[0xe] == auVar52[6]);
      auVar61[0xf] = -(auVar63[0xf] == auVar52[7]);
      uVar43 = (ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf;
      uVar40 = (uint)uVar43;
      while (uVar43 != 0) {
        uVar11 = 0;
        for (uVar12 = uVar40; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        lVar44 = *(longlong *)(lVar49 + 0x30) +
                 (uVar11 + uVar27 & *(ulonglong *)(lVar49 + 0x38)) * -0x10;
        if (pppplVar38 == *(longlong *****)(lVar44 + -0x10)) {
          uVar27 = *(ulonglong *)(lVar44 + -8);
          if ((uVar27 & 0xffffffff) != 0) {
            *(undefined4 *)plStack_a8[0x45] = *(undefined4 *)((longlong)plStack_a8 + 0x234);
            lVar49 = plStack_a8[0x43];
            lVar32 = *(longlong *)(lVar49 + 0x30);
            uVar39 = *(undefined8 *)(lVar49 + 0x40);
            if (lVar32 == *(longlong *)(lVar49 + 0x20)) {
              pdb_142d7e830(lVar49 + 0x20);
            }
            lVar44 = *(longlong *)(lVar49 + 0x28);
            *(undefined8 *)(lVar44 + lVar32 * 0x18) = uVar39;
            *(longlong *****)(lVar44 + 8 + lVar32 * 0x18) = pppplVar38;
            *(undefined1 *)(lVar44 + 0x10 + lVar32 * 0x18) = 0;
            *(longlong *)(lVar49 + 0x30) = lVar32 + 1;
            *(longlong *)(lVar49 + 0x40) = *(longlong *)(lVar49 + 0x40) + 1;
            lVar49 = plStack_a8[0x11];
            uVar37 = uVar27 & 0xffffffff ^ 0xffffffff;
            pppplStack_2b8 = (longlong ****)0x1;
            iStack_2ac = (int)(uVar27 >> 0x20);
            if (((*(ulonglong *)(lVar49 + 0x10) <= uVar37) ||
                (piVar35 = (int *)(uVar37 * 0x18 + *(longlong *)(lVar49 + 8)),
                piVar35[4] != iStack_2ac)) || (*piVar35 == 0)) {
LAB_140baff23:
              uStack_2b0 = (undefined4)uVar27;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_1430610f0,0x2b,&pppplStack_2b8,&UNK_1430610d0,&UNK_143061058);
            }
            lVar32 = plStack_a8[0x10];
            uVar37 = *(ulonglong *)(piVar35 + 2);
            if ((*(ulonglong *)(lVar32 + 0x38) <= (uVar37 & 0xffffffff)) ||
               ((*(ulonglong *)(*(longlong *)(lVar32 + 0x28) + (uVar37 >> 6 & 0x3ffffff) * 8) >>
                 (uVar37 & 0x3f) & 1) == 0)) {
              pppplStack_2b8 = (longlong ****)(uVar37 << 0x20);
              goto LAB_140baff23;
            }
            lVar49 = *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar49 + 0x1a0) + 0x18 + (uVar37 >> 0x20) * 0x48)
                       + 0x10 + ~*(ulonglong *)
                                  (*(longlong *)
                                    (*(longlong *)(lVar49 + 0x1a0) + 0x38 + (uVar37 >> 0x20) * 0x48)
                                  + *(longlong *)(lVar32 + 0x110) * 8) * 0x30);
            lVar44 = (ulonglong)(uint)~piVar35[1] * 0x58;
            *(undefined4 *)plStack_a8[0xe] = *(undefined4 *)((longlong)plStack_a8 + 0x7c);
            lVar32 = plStack_a8[0xc];
            puVar2 = (undefined8 *)(lVar49 + 0x24 + lVar44);
            pppplStack_2b8 = (longlong ****)*puVar2;
            uVar7 = puVar2[1];
            puVar2 = (undefined8 *)(lVar49 + 0x30 + lVar44);
            uVar39 = puVar2[1];
            uStack_2a8 = (undefined4)((ulonglong)*puVar2 >> 0x20);
            uStack_2a4 = (uint)uVar39;
            uStack_2a0 = (undefined4)((ulonglong)uVar39 >> 0x20);
            uStack_2b0 = (undefined4)uVar7;
            iStack_2ac = (int)((ulonglong)uVar7 >> 0x20);
            uVar3 = *(undefined4 *)(lVar49 + 0x50 + lVar44);
            ppplStack_1b8 = *(longlong ****)(lVar49 + 0x40 + lVar44);
            pplStack_1b0 = (longlong **)
                           CONCAT44(pplStack_1b0._4_4_,*(undefined4 *)(lVar49 + 0x48 + lVar44));
            pdb_14007ee60();
            pbVar28 = pub_1406abab0(0x50,8);
            if (pbVar28 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x50);
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
            pbVar28[0x10] = 1;
            *(undefined4 *)(pbVar28 + 0x14) = uVar3;
            *(longlong ****)(pbVar28 + 0x18) = ppplStack_1b8;
            *(undefined4 *)(pbVar28 + 0x20) = pplStack_1b0._0_4_;
            *(longlong *****)(pbVar28 + 0x24) = pppplStack_2b8;
            *(ulonglong *)(pbVar28 + 0x2c) = CONCAT44(iStack_2ac,uStack_2b0);
            *(ulonglong *)(pbVar28 + 0x30) = CONCAT44(uStack_2a8,iStack_2ac);
            *(ulonglong *)(pbVar28 + 0x38) = CONCAT44(uStack_2a0,uStack_2a4);
            *(longlong *****)(pbVar28 + 0x40) = pppplVar38;
            uStack_2b0 = SUB84(pbVar28,0);
            iStack_2ac = (int)((ulonglong)pbVar28 >> 0x20);
            pppplStack_2b8 = (longlong ****)0x8;
            pdb_140ae5180(lVar32,&pppplStack_2b8,&UNK_143061070);
          }
          goto LAB_140baf408;
        }
        uVar43 = (ushort)(uVar40 - 1) & (ushort)uVar40;
        uVar40 = CONCAT22((short)(uVar40 - 1 >> 0x10),uVar43);
      }
      auVar55[0] = -(auVar63[0] == -1);
      auVar55[1] = -(auVar63[1] == -1);
      auVar55[2] = -(auVar63[2] == -1);
      auVar55[3] = -(auVar63[3] == -1);
      auVar55[4] = -(auVar63[4] == -1);
      auVar55[5] = -(auVar63[5] == -1);
      auVar55[6] = -(auVar63[6] == -1);
      auVar55[7] = -(auVar63[7] == -1);
      auVar55[8] = -(auVar63[8] == -1);
      auVar55[9] = -(auVar63[9] == -1);
      auVar55[10] = -(auVar63[10] == -1);
      auVar55[0xb] = -(auVar63[0xb] == -1);
      auVar55[0xc] = -(auVar63[0xc] == -1);
      auVar55[0xd] = -(auVar63[0xd] == -1);
      auVar55[0xe] = -(auVar63[0xe] == -1);
      auVar55[0xf] = -(auVar63[0xf] == -1);
      if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar55 >> 0x17,0) & 1) != 0) || (SUB161(auVar55 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar55 >> 0x27,0) & 1) != 0) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar55 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar55 >> 0x3f,0) & 1) != 0) || (SUB161(auVar55 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar55 >> 0x4f,0) & 1) != 0) || (SUB161(auVar55 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar55 >> 0x5f,0) & 1) != 0) || (SUB161(auVar55 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar55 >> 0x6f,0) & 1) != 0) || (SUB161(auVar55 >> 0x77,0) & 1) != 0) ||
          auVar55[0xf] < '\0') break;
      uVar27 = uVar27 + lVar32 + 0x10;
      lVar32 = lVar32 + 0x10;
    } while( true );
  }
LAB_140baf408:
  pdb_1419a77d0(&pppplStack_2b8,&ppplStack_148);
  ppplVar24 = uStack_e0;
  uVar23 = uStack_e4;
  uVar22 = uStack_e8;
  uVar21 = uStack_ec;
  uVar20 = uStack_f0;
  uVar3 = uStack_f4;
  ppplVar42 = ppplStack_138;
  pbVar28 = pbStack_140;
  pplVar18 = pplStack_288;
  pplVar17 = pplStack_290;
  pplVar16 = pplStack_298;
  uVar40 = uStack_2a4;
  pppplVar9 = pppplStack_2b8;
  uVar25 = uStack_e0._6_1_;
  uVar48 = uStack_e0._7_1_;
  uVar39 = CONCAT44(uStack_f0,uStack_f4);
  uVar7 = CONCAT44(uStack_e8,uStack_ec);
  ppplVar29 = (longlong ***)CONCAT44(iStack_2ac,uStack_2b0);
  pppplVar6 = (longlong ****)CONCAT44(uStack_2a4,uStack_2a8);
  ppplVar30 = (longlong ***)CONCAT44(uStack_29c,uStack_2a0);
  uVar27 = (longlong)ppplStack_138 * 8;
  if (0x7ffffffffffffffc < uVar27 || (ulonglong)ppplStack_138 >> 0x3d != 0) {
    uVar47 = 0;
LAB_140baf501:
    uStack_91 = 1;
    pdb_142dc7e2a(uVar47,uVar27);
    goto LAB_140baff54;
  }
  uStack_a9 = uStack_e0._5_1_;
  uStack_aa = uStack_e0._4_1_;
  uStack_ab = uStack_e0._3_1_;
  uStack_ac = uStack_e0._2_1_;
  uStack_ad = uStack_e0._1_1_;
  ppplStack_d0 = (longlong ***)CONCAT71(ppplStack_d0._1_7_,(undefined1)uStack_e0);
  if (uVar27 == 0) {
    pbStack_a0 = (byte *)0x4;
    ppplStack_c0 = (longlong ***)0x0;
  }
  else {
    pdb_14007ee60();
    uVar47 = 4;
    pbStack_a0 = pub_1406abab0(uVar27,4);
    if (pbStack_a0 == (byte *)0x0) goto LAB_140baf501;
    ppplStack_c0 = ppplVar42;
  }
  plVar46 = plStack_a8;
  if ((longlong ****)ppplVar42 != (longlong ****)0x0) {
    pub_142e32760(pbStack_a0,pbVar28,uVar27);
  }
  pplVar19 = pplStack_120;
  pbVar28 = pbStack_128;
  uVar27 = (longlong)pplStack_120 * 4;
  if (0x7ffffffffffffffc < uVar27 || (ulonglong)pplStack_120 >> 0x3e != 0) {
    uVar47 = 0;
LAB_140baf5df:
    pdb_142dc7e2a(uVar47,uVar27);
    goto LAB_140baff54;
  }
  if (uVar27 == 0) {
    pbVar33 = (byte *)0x4;
  }
  else {
    pplStack_c8 = (longlong **)CONCAT71(pplStack_c8._1_7_,uVar48);
    pdb_14007ee60();
    uVar47 = 4;
    pbVar33 = pub_1406abab0(uVar27,4);
    if (pbVar33 == (byte *)0x0) goto LAB_140baf5df;
    plVar46 = plStack_a8;
    uVar48 = pplStack_c8._0_1_;
    if ((longlong ***)pplVar19 != (longlong ***)0x0) {
      ppplVar31 = (longlong ***)((longlong)pplVar19 - 1U);
      if (pplVar19 < (longlong ***)((longlong)pplVar19 - 1U)) {
        ppplVar31 = (longlong ***)pplVar19;
      }
      if (ppplVar31 < (longlong ***)0x8) {
        lVar49 = 0;
        ppplVar31 = (longlong ***)pplVar19;
        pbVar34 = pbVar28;
      }
      else {
        uVar37 = (longlong)ppplVar31 + 1;
        uVar27 = 8;
        if ((uVar37 & 7) != 0) {
          uVar27 = (ulonglong)((uint)uVar37 & 7);
        }
        lVar49 = uVar37 - uVar27;
        ppplVar31 = (longlong ***)((longlong)pplVar19 - lVar49);
        pbVar34 = pbVar28 + lVar49 * 4;
        lVar32 = 0;
        do {
          uVar47 = *(undefined8 *)(pbVar28 + lVar32 * 4 + 8);
          uVar14 = *(undefined8 *)(pbVar28 + lVar32 * 4 + 0x10);
          uVar15 = *(undefined8 *)(pbVar28 + lVar32 * 4 + 0x10 + 8);
          *(undefined8 *)(pbVar33 + lVar32 * 4) = *(undefined8 *)(pbVar28 + lVar32 * 4);
          *(undefined8 *)(pbVar33 + lVar32 * 4 + 8) = uVar47;
          *(undefined8 *)(pbVar33 + lVar32 * 4 + 0x10) = uVar14;
          *(undefined8 *)(pbVar33 + lVar32 * 4 + 0x10 + 8) = uVar15;
          lVar32 = lVar32 + 8;
        } while (lVar49 != lVar32);
      }
      pbVar36 = pbVar33 + lVar49 * 4;
      do {
        if (pbVar34 == pbVar28 + (longlong)pplVar19 * 4) break;
        uVar4 = *(undefined4 *)pbVar34;
        pbVar34 = pbVar34 + 4;
        *(undefined4 *)pbVar36 = uVar4;
        pbVar36 = pbVar36 + 4;
        ppplVar31 = (longlong ***)((longlong)ppplVar31 - 1);
      } while (ppplVar31 != (longlong ***)0x0);
    }
  }
  ppplStack_1b8 = ppplStack_c0;
  iVar13 = uStack_110 - 2;
  if (uStack_110 < 2) {
    iVar13 = 2;
  }
  uStack_180 = 2;
  if (iVar13 != 0) {
    if (iVar13 == 1) {
      uStack_180 = 3;
    }
    else {
      uStack_2a8 = SUB84(ppplStack_fc,0);
      uStack_2a4 = (uint)((ulonglong)ppplStack_fc >> 0x20);
      pppplStack_2b8 = (longlong ****)ppplStack_10c;
      uStack_2b0 = SUB84(pbStack_104,0);
      iStack_2ac = (int)((ulonglong)pbStack_104 >> 0x20);
      uStack_180 = uStack_110;
    }
  }
  pplStack_1b0 = (longlong **)pbStack_a0;
  ppplStack_1a8 = ppplVar42;
  pplStack_1a0 = pplVar19;
  pplStack_190 = pplVar19;
  pplStack_188 = (longlong **)CONCAT44(pplStack_188._4_4_,fStack_118);
  uStack_164 = uStack_f4;
  uStack_17c = SUB84(pppplStack_2b8,0);
  uStack_178 = (undefined4)((ulonglong)pppplStack_2b8 >> 0x20);
  uStack_174 = uStack_2b0;
  uStack_170 = iStack_2ac;
  uStack_16c = uStack_2a8;
  uStack_168 = uStack_2a4;
  pplStack_150 = (longlong **)uStack_e0;
  uStack_160 = CONCAT44(uStack_ec,uStack_f0);
  uStack_158 = CONCAT44(uStack_e4,uStack_e8);
  uVar27 = (longlong)pppplVar6 * 8;
  pplStack_198 = (longlong **)pbVar33;
  if (0x7ffffffffffffffc < uVar27 || uVar40 >> 0x1d != 0) {
    uVar47 = 0;
LAB_140baf7ea:
    pdb_142dc7e2a(uVar47,uVar27);
    goto LAB_140baff54;
  }
  if (uVar27 == 0) {
    pbStack_a0 = (byte *)0x4;
    ppplStack_c0 = (longlong ***)0x0;
    ppplVar42 = ppplVar29;
    pppplVar26 = (longlong ****)ppplStack_c0;
  }
  else {
    pplStack_c8 = (longlong **)ppplVar29;
    pdb_14007ee60();
    uVar47 = 4;
    pbStack_a0 = pub_1406abab0(uVar27,4);
    ppplVar42 = (longlong ***)pplStack_c8;
    pppplVar26 = pppplVar6;
    if (pbStack_a0 == (byte *)0x0) goto LAB_140baf7ea;
  }
  ppplStack_c0 = (longlong ***)pppplVar26;
  if (pppplVar6 != (longlong ****)0x0) {
    pub_142e32760(pbStack_a0,ppplVar42,uVar27);
  }
  uVar27 = (longlong)pplVar17 * 4;
  if (0x7ffffffffffffffc < uVar27 || (ulonglong)pplVar17 >> 0x3e != 0) {
    uVar47 = 0;
LAB_140baf8a7:
    pdb_142dc7e2a(uVar47,uVar27);
LAB_140baff54:
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  if (uVar27 == 0) {
    pbVar28 = (byte *)0x4;
    uStack_1d9 = uVar48;
  }
  else {
    pplStack_c8 = (longlong **)CONCAT71(pplStack_c8._1_7_,uVar48);
    pdb_14007ee60();
    uVar47 = 4;
    pbVar28 = pub_1406abab0(uVar27,4);
    if (pbVar28 == (byte *)0x0) goto LAB_140baf8a7;
    plVar46 = plStack_a8;
    uStack_1d9 = pplStack_c8._0_1_;
    if ((longlong ***)pplVar17 != (longlong ***)0x0) {
      ppplVar42 = (longlong ***)((longlong)pplVar17 - 1U);
      if (pplVar17 < (longlong ***)((longlong)pplVar17 - 1U)) {
        ppplVar42 = (longlong ***)pplVar17;
      }
      if (ppplVar42 < (longlong ***)0x8) {
        lVar49 = 0;
        ppplVar31 = (longlong ***)pplVar17;
        ppplVar42 = (longlong ***)pplVar16;
      }
      else {
        uVar37 = (longlong)ppplVar42 + 1;
        uVar27 = 8;
        if ((uVar37 & 7) != 0) {
          uVar27 = (ulonglong)((uint)uVar37 & 7);
        }
        lVar49 = uVar37 - uVar27;
        ppplVar31 = (longlong ***)((longlong)pplVar17 - lVar49);
        ppplVar42 = (longlong ***)((longlong)pplVar16 + lVar49 * 4);
        lVar32 = 0;
        do {
          pbVar33 = (byte *)((longlong)pplVar16 + lVar32 * 4);
          uVar47 = *(undefined8 *)(pbVar33 + 8);
          pbVar34 = (byte *)((longlong)pplVar16 + lVar32 * 4 + 0x10);
          uVar14 = *(undefined8 *)pbVar34;
          uVar15 = *(undefined8 *)(pbVar34 + 8);
          *(undefined8 *)(pbVar28 + lVar32 * 4) = *(undefined8 *)pbVar33;
          *(undefined8 *)(pbVar28 + lVar32 * 4 + 8) = uVar47;
          *(undefined8 *)(pbVar28 + lVar32 * 4 + 0x10) = uVar14;
          *(undefined8 *)(pbVar28 + lVar32 * 4 + 0x10 + 8) = uVar15;
          lVar32 = lVar32 + 8;
        } while (lVar49 != lVar32);
      }
      pbVar33 = pbVar28 + lVar49 * 4;
      do {
        if (ppplVar42 == (longlong ***)((longlong)pplVar16 + (longlong)pplVar17 * 4)) break;
        uVar4 = *(undefined4 *)ppplVar42;
        ppplVar42 = (longlong ***)((longlong)ppplVar42 + 4);
        *(undefined4 *)pbVar33 = uVar4;
        pbVar33 = pbVar33 + 4;
        ppplVar31 = (longlong ***)((longlong)ppplVar31 - 1);
      } while (ppplVar31 != (longlong ***)0x0);
    }
  }
  ppplVar42 = ppplStack_b8;
  uVar4 = uStack_f4;
  uStack_2f8 = SUB84(pplVar18,0);
  ppplStack_248 = ppplStack_c0;
  uStack_240 = pbStack_a0;
  pplStack_230 = pplVar17;
  pplStack_220 = pplVar17;
  uStack_1d0 = 1;
  pppplStack_2b8 = (longlong ****)ppplStack_1b8;
  uStack_2b0 = SUB84(pplStack_1b0,0);
  iStack_2ac = (int)((ulonglong)pplStack_1b0 >> 0x20);
  uStack_2a8 = SUB84(ppplStack_1a8,0);
  uStack_2a4 = (uint)((ulonglong)ppplStack_1a8 >> 0x20);
  uStack_2a0 = SUB84(pplStack_1a0,0);
  uStack_29c = (undefined4)((ulonglong)pplStack_1a0 >> 0x20);
  pplStack_298 = pplStack_198;
  pplStack_290 = pplStack_190;
  pplStack_288 = pplStack_188;
  uStack_280 = uStack_180;
  uStack_27c = uStack_17c;
  uStack_278 = uStack_178;
  uStack_274 = uStack_174;
  uStack_270 = uStack_170;
  uStack_26c = uStack_16c;
  uStack_268 = uStack_168;
  uStack_264 = uStack_164;
  uStack_260 = uStack_160;
  uStack_258 = uStack_158;
  pplStack_250 = pplStack_150;
  uStack_218 = uStack_2f8;
  uStack_210 = 2;
  uStack_1e4 = uVar23;
  uStack_1e0 = ppplStack_d0._0_1_;
  uStack_1df = uStack_ad;
  uStack_1de = uStack_ac;
  uStack_1dd = uStack_ab;
  uStack_1dc = uStack_aa;
  uStack_1db = uStack_a9;
  uStack_1da = uVar25;
  uStack_158 = CONCAT44(uVar23,uVar22);
  pplStack_150 = (longlong **)ppplVar24;
  uStack_160 = CONCAT44(uVar21,uVar20);
  uStack_164 = uVar3;
  uStack_178 = SUB84(pplStack_2e8,0);
  uStack_174 = (undefined4)((ulonglong)pplStack_2e8 >> 0x20);
  uStack_170 = SUB84(pplStack_2e0,0);
  uStack_16c = (undefined4)((ulonglong)pplStack_2e0 >> 0x20);
  pplStack_188 = pplVar18;
  uStack_180 = 2;
  pplStack_198 = pplVar16;
  pplStack_190 = pplVar17;
  ppplStack_1b8 = (longlong ***)pppplVar9;
  ppplStack_238 = (longlong ***)pppplVar6;
  pbStack_228 = pbVar28;
  uStack_1f4 = uVar39;
  uStack_1ec = uVar7;
  ppplStack_1d8 = (longlong ***)pppplVar38;
  fStack_1cc = fVar51;
  fStack_1c8 = fVar53;
  pplStack_1b0 = (longlong **)ppplVar29;
  ppplStack_1a8 = (longlong ***)pppplVar6;
  pplStack_1a0 = (longlong **)ppplVar30;
  ppplStack_d8 = (longlong ***)pppplVar38;
  if (uStack_e0._2_1_ == '\0') {
    plVar45 = (longlong *)plVar46[0x23];
    if (plVar45[3] == 0) goto LAB_140bafcb0;
    uVar27 = pdb_1400af0a0(plVar45 + 4,&ppplStack_d8);
    bVar50 = (byte)(uVar27 >> 0x39);
    auVar52 = ZEXT216(CONCAT11(bVar50,bVar50));
    auVar52 = pshuflw(auVar52,auVar52,0);
    lVar49 = 0;
    while( true ) {
      uVar27 = uVar27 & plVar45[1];
      pcVar1 = (char *)(*plVar45 + uVar27);
      auVar63[0] = -(*pcVar1 == auVar52[0]);
      auVar63[1] = -(pcVar1[1] == auVar52[1]);
      auVar63[2] = -(pcVar1[2] == auVar52[2]);
      auVar63[3] = -(pcVar1[3] == auVar52[3]);
      auVar63[4] = -(pcVar1[4] == auVar52[4]);
      auVar63[5] = -(pcVar1[5] == auVar52[5]);
      auVar63[6] = -(pcVar1[6] == auVar52[6]);
      auVar63[7] = -(pcVar1[7] == auVar52[7]);
      auVar63[8] = -(pcVar1[8] == auVar52[0]);
      auVar63[9] = -(pcVar1[9] == auVar52[1]);
      auVar63[10] = -(pcVar1[10] == auVar52[2]);
      auVar63[0xb] = -(pcVar1[0xb] == auVar52[3]);
      auVar63[0xc] = -(pcVar1[0xc] == auVar52[4]);
      auVar63[0xd] = -(pcVar1[0xd] == auVar52[5]);
      auVar63[0xe] = -(pcVar1[0xe] == auVar52[6]);
      auVar63[0xf] = -(pcVar1[0xf] == auVar52[7]);
      uVar43 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(auVar63[0xf] >> 7) << 0xf;
      uVar40 = (uint)uVar43;
      if (uVar43 != 0) break;
LAB_140bafc95:
      auVar57[0] = -(*pcVar1 == -1);
      auVar57[1] = -(pcVar1[1] == -1);
      auVar57[2] = -(pcVar1[2] == -1);
      auVar57[3] = -(pcVar1[3] == -1);
      auVar57[4] = -(pcVar1[4] == -1);
      auVar57[5] = -(pcVar1[5] == -1);
      auVar57[6] = -(pcVar1[6] == -1);
      auVar57[7] = -(pcVar1[7] == -1);
      auVar57[8] = -(pcVar1[8] == -1);
      auVar57[9] = -(pcVar1[9] == -1);
      auVar57[10] = -(pcVar1[10] == -1);
      auVar57[0xb] = -(pcVar1[0xb] == -1);
      auVar57[0xc] = -(pcVar1[0xc] == -1);
      auVar57[0xd] = -(pcVar1[0xd] == -1);
      auVar57[0xe] = -(pcVar1[0xe] == -1);
      auVar57[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar57 >> 0x3f,0) & 1) != 0) || (SUB161(auVar57 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar57 >> 0x4f,0) & 1) != 0) || (SUB161(auVar57 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar57 >> 0x5f,0) & 1) != 0) || (SUB161(auVar57 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar57 >> 0x6f,0) & 1) != 0) || (SUB161(auVar57 >> 0x77,0) & 1) != 0) ||
          auVar57[0xf] < '\0') goto LAB_140bafcb0;
      uVar27 = uVar27 + lVar49 + 0x10;
      lVar49 = lVar49 + 0x10;
    }
    while( true ) {
      uVar11 = 0;
      for (uVar12 = uVar40; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      lVar32 = *plVar45 + (uVar11 + uVar27 & plVar45[1]) * -0x10;
      if (pppplVar38 == *(longlong *****)(lVar32 + -0x10)) break;
      uVar43 = (ushort)(uVar40 - 1) & (ushort)uVar40;
      uVar40 = CONCAT22((short)(uVar40 - 1 >> 0x10),uVar43);
      if (uVar43 == 0) goto LAB_140bafc95;
    }
    uVar5 = *(undefined4 *)(lVar32 + -8);
    plVar46 = (longlong *)plVar46[0x27];
    lVar49 = plVar46[3];
  }
  else {
    plVar45 = (longlong *)plVar46[0x2b];
    if (plVar45[3] == 0) {
LAB_140bafcb0:
      plVar45 = plVar45 + 6;
    }
    else {
      uVar27 = pdb_1400af0a0(plVar45 + 4,&ppplStack_d8);
      bVar50 = (byte)(uVar27 >> 0x39);
      auVar52 = ZEXT216(CONCAT11(bVar50,bVar50));
      auVar52 = pshuflw(auVar52,auVar52,0);
      lVar49 = 0;
      while( true ) {
        uVar27 = uVar27 & plVar45[1];
        pcVar1 = (char *)(*plVar45 + uVar27);
        auVar62[0] = -(*pcVar1 == auVar52[0]);
        auVar62[1] = -(pcVar1[1] == auVar52[1]);
        auVar62[2] = -(pcVar1[2] == auVar52[2]);
        auVar62[3] = -(pcVar1[3] == auVar52[3]);
        auVar62[4] = -(pcVar1[4] == auVar52[4]);
        auVar62[5] = -(pcVar1[5] == auVar52[5]);
        auVar62[6] = -(pcVar1[6] == auVar52[6]);
        auVar62[7] = -(pcVar1[7] == auVar52[7]);
        auVar62[8] = -(pcVar1[8] == auVar52[0]);
        auVar62[9] = -(pcVar1[9] == auVar52[1]);
        auVar62[10] = -(pcVar1[10] == auVar52[2]);
        auVar62[0xb] = -(pcVar1[0xb] == auVar52[3]);
        auVar62[0xc] = -(pcVar1[0xc] == auVar52[4]);
        auVar62[0xd] = -(pcVar1[0xd] == auVar52[5]);
        auVar62[0xe] = -(pcVar1[0xe] == auVar52[6]);
        auVar62[0xf] = -(pcVar1[0xf] == auVar52[7]);
        uVar43 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf
        ;
        uVar40 = (uint)uVar43;
        if (uVar43 != 0) break;
LAB_140bafbdd:
        auVar56[0] = -(*pcVar1 == -1);
        auVar56[1] = -(pcVar1[1] == -1);
        auVar56[2] = -(pcVar1[2] == -1);
        auVar56[3] = -(pcVar1[3] == -1);
        auVar56[4] = -(pcVar1[4] == -1);
        auVar56[5] = -(pcVar1[5] == -1);
        auVar56[6] = -(pcVar1[6] == -1);
        auVar56[7] = -(pcVar1[7] == -1);
        auVar56[8] = -(pcVar1[8] == -1);
        auVar56[9] = -(pcVar1[9] == -1);
        auVar56[10] = -(pcVar1[10] == -1);
        auVar56[0xb] = -(pcVar1[0xb] == -1);
        auVar56[0xc] = -(pcVar1[0xc] == -1);
        auVar56[0xd] = -(pcVar1[0xd] == -1);
        auVar56[0xe] = -(pcVar1[0xe] == -1);
        auVar56[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x1f,0) & 1) != 0) || (SUB161(auVar56 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') goto LAB_140bafcb0;
        uVar27 = uVar27 + lVar49 + 0x10;
        lVar49 = lVar49 + 0x10;
      }
      while( true ) {
        uVar11 = 0;
        for (uVar12 = uVar40; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        lVar32 = *plVar45 + (uVar11 + uVar27 & plVar45[1]) * -0x10;
        if (pppplVar38 == *(longlong *****)(lVar32 + -0x10)) break;
        uVar43 = (ushort)(uVar40 - 1) & (ushort)uVar40;
        uVar40 = CONCAT22((short)(uVar40 - 1 >> 0x10),uVar43);
        if (uVar43 == 0) goto LAB_140bafbdd;
      }
      plVar45 = (longlong *)(lVar32 + -8);
    }
    uVar5 = (undefined4)*plVar45;
    plVar46 = (longlong *)plVar46[0x27];
    lVar49 = plVar46[3];
  }
  ppplStack_d8 = (longlong ***)pppplVar38;
  if (lVar49 != 0) {
    uVar27 = pdb_1400af0a0(plVar46 + 4,&ppplStack_d8);
    bVar50 = (byte)(uVar27 >> 0x39);
    auVar52 = ZEXT216(CONCAT11(bVar50,bVar50));
    auVar52 = pshuflw(auVar52,auVar52,0);
    lVar49 = 0;
    while( true ) {
      uVar27 = uVar27 & plVar46[1];
      pcVar1 = (char *)(*plVar46 + uVar27);
      auVar64[0] = -(*pcVar1 == auVar52[0]);
      auVar64[1] = -(pcVar1[1] == auVar52[1]);
      auVar64[2] = -(pcVar1[2] == auVar52[2]);
      auVar64[3] = -(pcVar1[3] == auVar52[3]);
      auVar64[4] = -(pcVar1[4] == auVar52[4]);
      auVar64[5] = -(pcVar1[5] == auVar52[5]);
      auVar64[6] = -(pcVar1[6] == auVar52[6]);
      auVar64[7] = -(pcVar1[7] == auVar52[7]);
      auVar64[8] = -(pcVar1[8] == auVar52[0]);
      auVar64[9] = -(pcVar1[9] == auVar52[1]);
      auVar64[10] = -(pcVar1[10] == auVar52[2]);
      auVar64[0xb] = -(pcVar1[0xb] == auVar52[3]);
      auVar64[0xc] = -(pcVar1[0xc] == auVar52[4]);
      auVar64[0xd] = -(pcVar1[0xd] == auVar52[5]);
      auVar64[0xe] = -(pcVar1[0xe] == auVar52[6]);
      auVar64[0xf] = -(pcVar1[0xf] == auVar52[7]);
      uVar43 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
      uVar40 = (uint)uVar43;
      while (uVar43 != 0) {
        uVar11 = 0;
        for (uVar12 = uVar40; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        lVar32 = *plVar46 + (uVar11 + uVar27 & plVar46[1]) * -0x10;
        if (pppplVar38 == *(longlong *****)(lVar32 + -0x10)) {
          plVar46 = (longlong *)(lVar32 + -8);
          goto LAB_140bafd9d;
        }
        uVar43 = (ushort)(uVar40 - 1) & (ushort)uVar40;
        uVar40 = CONCAT22((short)(uVar40 - 1 >> 0x10),uVar43);
      }
      auVar58[0] = -(*pcVar1 == -1);
      auVar58[1] = -(pcVar1[1] == -1);
      auVar58[2] = -(pcVar1[2] == -1);
      auVar58[3] = -(pcVar1[3] == -1);
      auVar58[4] = -(pcVar1[4] == -1);
      auVar58[5] = -(pcVar1[5] == -1);
      auVar58[6] = -(pcVar1[6] == -1);
      auVar58[7] = -(pcVar1[7] == -1);
      auVar58[8] = -(pcVar1[8] == -1);
      auVar58[9] = -(pcVar1[9] == -1);
      auVar58[10] = -(pcVar1[10] == -1);
      auVar58[0xb] = -(pcVar1[0xb] == -1);
      auVar58[0xc] = -(pcVar1[0xc] == -1);
      auVar58[0xd] = -(pcVar1[0xd] == -1);
      auVar58[0xe] = -(pcVar1[0xe] == -1);
      auVar58[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar58 >> 0x17,0) & 1) != 0) || (SUB161(auVar58 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar58 >> 0x27,0) & 1) != 0) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar58 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar58 >> 0x3f,0) & 1) != 0) || (SUB161(auVar58 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar58 >> 0x4f,0) & 1) != 0) || (SUB161(auVar58 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar58 >> 0x5f,0) & 1) != 0) || (SUB161(auVar58 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar58 >> 0x6f,0) & 1) != 0) || (SUB161(auVar58 >> 0x77,0) & 1) != 0) ||
          auVar58[0xf] < '\0') break;
      uVar27 = uVar27 + lVar49 + 0x10;
      lVar49 = lVar49 + 0x10;
    }
  }
  plVar46 = plVar46 + 6;
LAB_140bafd9d:
  lVar49 = *plVar46;
  ppplVar42[0x2d] = (longlong **)CONCAT44(uVar23,uVar22);
  ppplVar42[0x2e] = (longlong **)ppplVar24;
  ppplVar42[0x2b] = (longlong **)CONCAT44(uVar3,uStack_2d8);
  ppplVar42[0x2c] = (longlong **)CONCAT44(uVar21,uVar20);
  ppplVar42[0x29] = pplStack_2e8;
  ppplVar42[0x2a] = pplStack_2e0;
  ppplVar42[0x27] = pplVar18;
  ppplVar42[0x28] = (longlong **)CONCAT44(uStack_2ec,2);
  ppplVar42[0x25] = pplVar16;
  ppplVar42[0x26] = pplVar17;
  ppplVar42[0x23] = (longlong **)pppplVar6;
  ppplVar42[0x24] = (longlong **)ppplVar30;
  ppplVar42[0x21] = (longlong **)pppplVar9;
  ppplVar42[0x22] = (longlong **)ppplVar29;
  pub_142e32760(ppplVar42,&pppplStack_2b8,0x100);
  ppplVar42[0x20] = (longlong **)0x8000000000000001;
  ppplVar42[0x2f] = (longlong **)pppplVar38;
  *(undefined4 *)(ppplVar42 + 0x30) = uVar4;
  *(undefined4 *)((longlong)ppplVar42 + 0x184) = uVar5;
  *(int *)(ppplVar42 + 0x31) = (int)lVar49;
  if ((longlong ****)ppplStack_148 != (longlong ****)0x0) {
    pub_1406abac0(pbStack_140,(longlong)ppplStack_148 << 3,4);
  }
  if ((longlong ***)pplStack_130 != (longlong ***)0x0) {
    pub_1406abac0(pbStack_128,(longlong)pplStack_130 << 2,4);
  }
  return (longlong ****)ppplVar42;
}

