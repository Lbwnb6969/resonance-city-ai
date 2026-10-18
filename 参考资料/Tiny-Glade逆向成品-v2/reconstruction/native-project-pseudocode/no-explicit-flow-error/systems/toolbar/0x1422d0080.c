// VA 0x1422d0080, PDB extent 4844 bytes
// toolbar::menu::credits::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::credits::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
   Extent: 4844 */

void pdb_1422d0080(float *param_1,float *param_2,undefined8 param_3,ulonglong *param_4,
                  undefined8 *param_5,float *param_6)

{
  byte *pbVar1;
  char *pcVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  float *pfVar19;
  float *pfVar20;
  ulonglong *puVar21;
  undefined *puVar22;
  longlong lVar23;
  uint uVar24;
  ushort uVar25;
  longlong lVar26;
  undefined *puVar27;
  ulonglong *puVar28;
  float *pfVar29;
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar46;
  float *pfStack_1a8;
  float *pfStack_1a0;
  ulonglong *puStack_198;
  ulonglong uStack_178;
  float *pfStack_170;
  ulonglong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong *puStack_150;
  undefined8 uStack_148;
  ulonglong *puStack_140;
  float *pfStack_138;
  float *pfStack_130;
  ulonglong *puStack_128;
  float *pfStack_118;
  ulonglong uStack_110;
  undefined8 uStack_108;
  ulonglong *puStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  float *pfStack_e8;
  float *pfStack_e0;
  undefined8 uStack_d8;
  float *pfStack_c8;
  float fStack_c0;
  float fStack_bc;
  longlong *plStack_b8;
  float *pfStack_b0;
  float *pfStack_a8;
  float *pfStack_a0;
  ulonglong *puStack_98;
  float *pfStack_88;
  float *pfStack_80;
  ulonglong *puStack_78;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_148 = param_3;
  pfStack_b0 = param_2;
  cVar11 = pdb_140e94b40();
  if (cVar11 == '\0') {
    uStack_158 = 0;
    cVar11 = '\0';
    puVar28 = param_4;
    puVar21 = puStack_100;
    if (**(int **)param_1 != 9) {
      return;
    }
LAB_1422d026a:
    puStack_100 = puVar21;
    plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,cVar11);
    uStack_178 = 0x8000000000000000;
    uVar12 = *(uint *)((longlong)param_5 + 0x1c);
    param_4 = (ulonglong *)(ulonglong)uVar12;
    puVar6 = (uint *)param_5[2];
    *puVar6 = uVar12;
    param_1 = (float *)*param_5;
    pfStack_88 = (float *)&UNK_1434d20be;
    pfStack_80 = (float *)0x7;
    uStack_61 = 1;
    puStack_140 = puVar28;
    uVar16 = pdb_140bbbcb0(&pfStack_88);
    uVar16 = uVar16 ^ 0xb1695320004fb443;
    uStack_61 = 1;
    uVar14 = uVar16;
    lVar13 = pdb_14072c2d0(param_1);
    *(undefined1 *)(lVar13 + 0x5e) = 0;
    if ((uVar14 & 1) == 0) {
      lVar13 = *(longlong *)(param_1 + 4);
      if (lVar13 == *(longlong *)param_1) {
        uStack_61 = 1;
        pdb_142d7f080(param_1);
      }
      lVar23 = *(longlong *)(param_1 + 2);
      *(undefined4 *)(lVar23 + lVar13 * 0x38) = 0;
      *(ulonglong *)(lVar23 + 0x30 + lVar13 * 0x38) = uVar16;
      *(longlong *)(param_1 + 4) = lVar13 + 1;
    }
    uStack_108 = 0;
    uStack_61 = 1;
    pfStack_118 = param_1;
    uStack_110 = uVar16;
    pdb_141174e40(&pfStack_88,&pfStack_118,0);
    uStack_61 = 1;
    puVar17 = (undefined8 *)pdb_14116e860(&pfStack_88);
    *puVar17 = 0xb000000001;
    puStack_128 = puStack_78;
    pfStack_138 = pfStack_88;
    pfStack_130 = pfStack_80;
    fVar3 = *param_6;
    uStack_61 = 1;
    lVar13 = pdb_14116e860(&pfStack_138);
    *(float *)(lVar13 + 0x1c) = fVar3;
    puStack_198 = puStack_128;
    pfStack_1a8 = pfStack_138;
    pfStack_1a0 = pfStack_130;
    uStack_61 = 1;
    lVar13 = pdb_141172390(&pfStack_1a8);
    pfVar20 = pfStack_138;
    uVar46 = *(uint *)(lVar13 + 8);
    fStack_bc = 3.4028235e+38;
    fStack_c0 = -3.4028235e+38;
    pfStack_88 = pfStack_138;
    pfStack_80 = pfStack_130;
    puStack_78 = puStack_128;
    if (*(longlong *)(pfStack_138 + 0x72) != 0) {
      uStack_61 = 1;
      uVar14 = pdb_1400af0a0(pfStack_138 + 0x74,&pfStack_80);
      uVar10 = _UNK_1434d1e78;
      uVar18 = _DAT_1434d1e70;
      lVar13 = *(longlong *)(pfVar20 + 0x6c);
      bVar30 = (byte)(uVar14 >> 0x39);
      auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
      auVar31 = pshuflw(auVar31,auVar31,0);
      lVar23 = 0;
      while( true ) {
        uVar14 = uVar14 & *(ulonglong *)(pfVar20 + 0x6e);
        auVar45 = *(undefined1 (*) [16])(lVar13 + uVar14);
        auVar39[0] = -(auVar45[0] == auVar31[0]);
        auVar39[1] = -(auVar45[1] == auVar31[1]);
        auVar39[2] = -(auVar45[2] == auVar31[2]);
        auVar39[3] = -(auVar45[3] == auVar31[3]);
        auVar39[4] = -(auVar45[4] == auVar31[4]);
        auVar39[5] = -(auVar45[5] == auVar31[5]);
        auVar39[6] = -(auVar45[6] == auVar31[6]);
        auVar39[7] = -(auVar45[7] == auVar31[7]);
        auVar39[8] = -(auVar45[8] == auVar31[0]);
        auVar39[9] = -(auVar45[9] == auVar31[1]);
        auVar39[10] = -(auVar45[10] == auVar31[2]);
        auVar39[0xb] = -(auVar45[0xb] == auVar31[3]);
        auVar39[0xc] = -(auVar45[0xc] == auVar31[4]);
        auVar39[0xd] = -(auVar45[0xd] == auVar31[5]);
        auVar39[0xe] = -(auVar45[0xe] == auVar31[6]);
        auVar39[0xf] = -(auVar45[0xf] == auVar31[7]);
        uVar25 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf
        ;
        uVar24 = (uint)uVar25;
        while (uVar25 != 0) {
          uVar8 = 0;
          for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar26 = (uVar8 + uVar14 & *(ulonglong *)(pfVar20 + 0x6e)) * -0xd8;
          if (pfStack_80 == *(float **)(lVar13 + -0xd8 + lVar26)) {
            lVar13 = lVar13 + lVar26;
            *(undefined8 *)(lVar13 + -0xb8) = _DAT_1434d1e70;
            *(undefined8 *)(lVar13 + -0xb0) = uVar10;
            *(undefined8 *)(lVar13 + -0xa8) = uVar18;
            *(undefined8 *)(lVar13 + -0xa0) = uVar10;
            *(undefined8 *)(lVar13 + -0x98) = 0;
            *(undefined8 *)(lVar13 + -0x90) = 0;
            *(undefined8 *)(lVar13 + -0x88) = 0;
            *(undefined4 *)(lVar13 + -0x80) = 0x3f800000;
            *(undefined8 *)(lVar13 + -0x7c) = 0;
            *(undefined4 *)(lVar13 + -0x74) = 0x20001;
            puStack_98 = puStack_78;
            pfStack_a8 = pfStack_88;
            pfStack_a0 = pfStack_80;
            pfStack_88 = &fStack_bc;
            pfStack_80 = &fStack_c0;
            puStack_78 = &uStack_178;
            uStack_61 = 1;
            pdb_14116f5c0(&pfStack_e8,&pfStack_a8,&pfStack_88);
            pfVar29 = pfStack_e8;
            if (fStack_bc < fStack_c0) {
              *param_6 = (fStack_c0 - fStack_bc) + _DAT_1434d1e80;
            }
            if (*(longlong *)(pfStack_e8 + 0x72) == 0) goto LAB_1422d0861;
            uStack_61 = 1;
            uVar16 = pdb_1400af0a0(pfStack_e8 + 0x74,&pfStack_e0);
            uVar18 = uStack_160;
            lVar13 = *(longlong *)(pfVar29 + 0x6c);
            uVar14 = *(ulonglong *)(pfVar29 + 0x6e);
            bVar30 = (byte)(uVar16 >> 0x39);
            auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
            auVar31 = pshuflw(auVar31,auVar31,0);
            lVar23 = 0;
            goto LAB_1422d05fc;
          }
          uVar25 = (ushort)(uVar24 - 1) & (ushort)uVar24;
          uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar25);
        }
        auVar32[0] = -(auVar45[0] == -1);
        auVar32[1] = -(auVar45[1] == -1);
        auVar32[2] = -(auVar45[2] == -1);
        auVar32[3] = -(auVar45[3] == -1);
        auVar32[4] = -(auVar45[4] == -1);
        auVar32[5] = -(auVar45[5] == -1);
        auVar32[6] = -(auVar45[6] == -1);
        auVar32[7] = -(auVar45[7] == -1);
        auVar32[8] = -(auVar45[8] == -1);
        auVar32[9] = -(auVar45[9] == -1);
        auVar32[10] = -(auVar45[10] == -1);
        auVar32[0xb] = -(auVar45[0xb] == -1);
        auVar32[0xc] = -(auVar45[0xc] == -1);
        auVar32[0xd] = -(auVar45[0xd] == -1);
        auVar32[0xe] = -(auVar45[0xe] == -1);
        auVar32[0xf] = -(auVar45[0xf] == -1);
        if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar32 >> 0x1f,0) & 1) != 0) || (SUB161(auVar32 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') break;
        uVar14 = uVar14 + lVar23 + 0x10;
        lVar23 = lVar23 + 0x10;
      }
    }
    uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  pfVar20 = (float *)0x1a;
  lVar13 = pdb_1422cfc60(0x1a);
  pfVar29 = (float *)&UNK_1434d1f98;
  if (lVar13 == 1) {
    if ((float *)0x1a < param_2) {
LAB_1422d10e3:
      pdb_142dc8070(&UNK_1434d1f98,0x1a,0);
LAB_1422d1103:
      pdb_142dc8070(&UNK_1434d1f98,0x1a);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar14 = pdb_1422cfc60(param_2);
    if ((uVar14 & 1) != 0) {
      if (0x1a < (longlong)param_2 + 2U) goto LAB_1422d1103;
      pfVar20 = (float *)(0x18 - (longlong)param_2);
      pfVar29 = (float *)(&UNK_1434d1f9a + (longlong)param_2);
    }
  }
  puVar22 = &UNK_1434d20be;
  puVar27 = &UNK_1434d2094;
  do {
    bVar30 = puVar22[-1];
    uVar12 = (uint)(char)bVar30;
    if ((char)bVar30 < '\0') {
      bVar4 = puVar22[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar22[-3];
        if ((char)bVar5 < -0x40) {
          pbVar1 = puVar22 + -4;
          puVar22 = puVar22 + -4;
          uVar12 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar22 = puVar22 + -3;
          uVar12 = bVar5 & 0xf;
        }
        uVar12 = bVar4 & 0x3f | uVar12 << 6;
      }
      else {
        puVar22 = puVar22 + -2;
        uVar12 = bVar4 & 0x1f;
      }
      uVar12 = (uint)(bVar30 & 0x3f) | uVar12 << 6;
      if (uVar12 != 0x5c) goto LAB_1422d01a4;
LAB_1422d01ce:
      puVar27 = puVar22 + -0x1434d2093;
      if (puVar27 < (undefined *)0x2b) {
        puVar21 = (ulonglong *)(0x2a - (longlong)puVar27);
        puVar27 = puVar22 + 1;
        goto LAB_1422d01f0;
      }
      pdb_142dc8070(&UNK_1434d2094,0x2a,puVar27,0x2a,&UNK_1434d2018);
      goto LAB_1422d10e3;
    }
    puVar22 = puVar22 + -1;
    if (uVar12 == 0x5c) goto LAB_1422d01ce;
LAB_1422d01a4:
    if (uVar12 == 0x2f) goto LAB_1422d01ce;
  } while (puVar22 != &UNK_1434d2094);
  puVar21 = (ulonglong *)0x2a;
LAB_1422d01f0:
  plVar15 = (longlong *)pdb_140e97000();
  if ((char)plVar15[0xd] != '\x01') goto LAB_1422d1073;
  do {
    if (*plVar15 == 0) {
      *plVar15 = -1;
      plStack_b8 = plVar15;
      puVar21 = (ulonglong *)pdb_140e94f10(plVar15 + 1,pfVar29,pfVar20,puVar27,puVar21,1,0);
      *plStack_b8 = *plStack_b8 + 1;
      uStack_158 = 1;
      puVar28 = param_4;
      puStack_150 = puVar21;
      if (**(int **)param_1 == 9) goto LAB_1422d026a;
      plVar15 = (longlong *)pdb_140e97000();
      if (((char)plVar15[0xd] != '\x01') &&
         (plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0), plVar15 == (longlong *)0x0))
      goto LAB_1422d109b;
      if (*plVar15 == 0) {
        *plVar15 = -1;
        pfStack_b0 = (float *)plVar15;
        pdb_140e95370(plVar15 + 1,puVar21);
LAB_1422d0699:
        *(longlong *)pfStack_b0 = *(longlong *)pfStack_b0 + 1;
        return;
      }
    }
    while( true ) {
      plVar15 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_1422d1073:
      plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0);
      if (plVar15 != (longlong *)0x0) break;
LAB_1422d109b:
      do {
        plVar15 = (longlong *)pdb_142dc7890(&UNK_1432a7ee8);
LAB_1422d10a7:
        plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0);
      } while (plVar15 == (longlong *)0x0);
LAB_1422d0d83:
      if (*plVar15 == 0) {
        *plVar15 = -1;
        pfStack_b0 = (float *)plVar15;
        pdb_140e95370(plVar15 + 1);
        goto LAB_1422d0699;
      }
    }
  } while( true );
LAB_1422d05fc:
  uVar16 = uVar16 & uVar14;
  auVar45 = *(undefined1 (*) [16])(lVar13 + uVar16);
  auVar40[0] = -(auVar45[0] == auVar31[0]);
  auVar40[1] = -(auVar45[1] == auVar31[1]);
  auVar40[2] = -(auVar45[2] == auVar31[2]);
  auVar40[3] = -(auVar45[3] == auVar31[3]);
  auVar40[4] = -(auVar45[4] == auVar31[4]);
  auVar40[5] = -(auVar45[5] == auVar31[5]);
  auVar40[6] = -(auVar45[6] == auVar31[6]);
  auVar40[7] = -(auVar45[7] == auVar31[7]);
  auVar40[8] = -(auVar45[8] == auVar31[0]);
  auVar40[9] = -(auVar45[9] == auVar31[1]);
  auVar40[10] = -(auVar45[10] == auVar31[2]);
  auVar40[0xb] = -(auVar45[0xb] == auVar31[3]);
  auVar40[0xc] = -(auVar45[0xc] == auVar31[4]);
  auVar40[0xd] = -(auVar45[0xd] == auVar31[5]);
  auVar40[0xe] = -(auVar45[0xe] == auVar31[6]);
  auVar40[0xf] = -(auVar45[0xf] == auVar31[7]);
  uVar25 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar25;
  while (uVar25 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar26 = (uVar8 + uVar16 & uVar14) * -0xd8;
    if (pfStack_e0 == *(float **)(lVar13 + -0xd8 + lVar26)) {
      lVar13 = lVar13 + lVar26;
      uVar46 = uVar46 ^ _DAT_142e37820;
      *(undefined4 *)(lVar13 + -0x7c) = 0;
      *(uint *)(lVar13 + -0x78) = uVar46;
      cVar11 = SBORROW8(0,uStack_178);
      if ((bool)cVar11) goto LAB_1422d06e8;
      uStack_f8 = uStack_178;
      pfStack_c8 = pfStack_170;
      uStack_f0 = uStack_168;
      *puVar6 = uVar12;
      pfStack_a8 = (float *)&UNK_1434d20c5;
      pfStack_a0 = (float *)0xf;
      uVar14 = pdb_140bbbcb0(&pfStack_a8);
      pfVar29 = (float *)(uVar14 ^ 0xb1695320004fb443);
      pfVar20 = pfVar29;
      lVar13 = pdb_14072c2d0(param_1);
      *(undefined1 *)(lVar13 + 0x5e) = 0;
      if (((ulonglong)pfVar20 & 1) == 0) {
        lVar13 = *(longlong *)(param_1 + 4);
        if (lVar13 == *(longlong *)param_1) {
          pdb_142d7f080(param_1);
        }
        lVar23 = *(longlong *)(param_1 + 2);
        lVar26 = lVar13 * 0x38;
        *(undefined8 *)(lVar23 + lVar26) = 0x100000003;
        *(undefined8 *)(lVar23 + 8 + lVar26) = 0;
        *(undefined8 *)(lVar23 + 0x10 + lVar26) = uVar18;
        uVar18 = _UNK_1434d1e98;
        puVar17 = (undefined8 *)(lVar23 + 0x18 + lVar26);
        *puVar17 = _DAT_1434d1e90;
        puVar17[1] = uVar18;
        *(undefined8 *)(lVar23 + 0x28 + lVar26) = _DAT_142fa5c30;
        *(float **)(lVar23 + 0x30 + lVar26) = pfVar29;
        *(longlong *)(param_1 + 4) = lVar13 + 1;
      }
      puStack_78 = (ulonglong *)0x0;
      pfStack_88 = param_1;
      pfStack_80 = pfVar29;
      if (*(longlong *)(param_1 + 0x72) == 0) goto LAB_1422d0ff9;
      uVar14 = pdb_1400af0a0(param_1 + 0x74,&pfStack_80);
      pfVar20 = pfStack_88;
      lVar13 = *(longlong *)(param_1 + 0x6c);
      bVar30 = (byte)(uVar14 >> 0x39);
      auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
      auVar31 = pshuflw(auVar31,auVar31,0);
      lVar23 = 0;
      goto LAB_1422d09a9;
    }
    uVar25 = (ushort)(uVar24 - 1) & (ushort)uVar24;
    uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar25);
  }
  auVar33[0] = -(auVar45[0] == -1);
  auVar33[1] = -(auVar45[1] == -1);
  auVar33[2] = -(auVar45[2] == -1);
  auVar33[3] = -(auVar45[3] == -1);
  auVar33[4] = -(auVar45[4] == -1);
  auVar33[5] = -(auVar45[5] == -1);
  auVar33[6] = -(auVar45[6] == -1);
  auVar33[7] = -(auVar45[7] == -1);
  auVar33[8] = -(auVar45[8] == -1);
  auVar33[9] = -(auVar45[9] == -1);
  auVar33[10] = -(auVar45[10] == -1);
  auVar33[0xb] = -(auVar45[0xb] == -1);
  auVar33[0xc] = -(auVar45[0xc] == -1);
  auVar33[0xd] = -(auVar45[0xd] == -1);
  auVar33[0xe] = -(auVar45[0xe] == -1);
  auVar33[0xf] = -(auVar45[0xf] == -1);
  if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar33 >> 0x37,0) & 1) != 0) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') {
LAB_1422d0861:
    uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar16 = uVar16 + lVar23 + 0x10;
  lVar23 = lVar23 + 0x10;
  goto LAB_1422d05fc;
LAB_1422d09a9:
  uVar14 = uVar14 & *(ulonglong *)(param_1 + 0x6e);
  auVar45 = *(undefined1 (*) [16])(lVar13 + uVar14);
  auVar42[0] = -(auVar45[0] == auVar31[0]);
  auVar42[1] = -(auVar45[1] == auVar31[1]);
  auVar42[2] = -(auVar45[2] == auVar31[2]);
  auVar42[3] = -(auVar45[3] == auVar31[3]);
  auVar42[4] = -(auVar45[4] == auVar31[4]);
  auVar42[5] = -(auVar45[5] == auVar31[5]);
  auVar42[6] = -(auVar45[6] == auVar31[6]);
  auVar42[7] = -(auVar45[7] == auVar31[7]);
  auVar42[8] = -(auVar45[8] == auVar31[0]);
  auVar42[9] = -(auVar45[9] == auVar31[1]);
  auVar42[10] = -(auVar45[10] == auVar31[2]);
  auVar42[0xb] = -(auVar45[0xb] == auVar31[3]);
  auVar42[0xc] = -(auVar45[0xc] == auVar31[4]);
  auVar42[0xd] = -(auVar45[0xd] == auVar31[5]);
  auVar42[0xe] = -(auVar45[0xe] == auVar31[6]);
  auVar42[0xf] = -(auVar45[0xf] == auVar31[7]);
  uVar25 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
  uVar46 = (uint)uVar25;
  while (uVar25 != 0) {
    uVar24 = 0;
    for (uVar8 = uVar46; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar24 = uVar24 + 1;
    }
    lVar26 = (uVar24 + uVar14 & *(ulonglong *)(param_1 + 0x6e)) * -0xd8;
    if (pfVar29 == *(float **)(lVar13 + -0xd8 + lVar26)) {
      lVar13 = lVar13 + lVar26;
      *(undefined1 (*) [16])(lVar13 + -0x88) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar13 + -0x98) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar13 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar13 + -0xb8) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar13 + -0x7a) = 0;
      *(undefined2 *)(lVar13 + -0x72) = 2;
      uStack_d8 = puStack_78;
      pfStack_e8 = pfStack_88;
      pfStack_e0 = pfStack_80;
      if (*(longlong *)(pfStack_88 + 0x72) == 0) goto LAB_1422d1049;
      uVar16 = pdb_1400af0a0(pfStack_88 + 0x74,&pfStack_e0);
      lVar13 = *(longlong *)(pfVar20 + 0x6c);
      uVar14 = *(ulonglong *)(pfVar20 + 0x6e);
      bVar30 = (byte)(uVar16 >> 0x39);
      auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
      auVar31 = pshuflw(auVar31,auVar31,0);
      lVar23 = 0;
      goto LAB_1422d0c60;
    }
    uVar25 = (ushort)(uVar46 - 1) & (ushort)uVar46;
    uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar25);
  }
  auVar35[0] = -(auVar45[0] == -1);
  auVar35[1] = -(auVar45[1] == -1);
  auVar35[2] = -(auVar45[2] == -1);
  auVar35[3] = -(auVar45[3] == -1);
  auVar35[4] = -(auVar45[4] == -1);
  auVar35[5] = -(auVar45[5] == -1);
  auVar35[6] = -(auVar45[6] == -1);
  auVar35[7] = -(auVar45[7] == -1);
  auVar35[8] = -(auVar45[8] == -1);
  auVar35[9] = -(auVar45[9] == -1);
  auVar35[10] = -(auVar45[10] == -1);
  auVar35[0xb] = -(auVar45[0xb] == -1);
  auVar35[0xc] = -(auVar45[0xc] == -1);
  auVar35[0xd] = -(auVar45[0xd] == -1);
  auVar35[0xe] = -(auVar45[0xe] == -1);
  auVar35[0xf] = -(auVar45[0xf] == -1);
  if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') {
LAB_1422d0ff9:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  uVar14 = uVar14 + lVar23 + 0x10;
  lVar23 = lVar23 + 0x10;
  goto LAB_1422d09a9;
LAB_1422d0c60:
  uVar16 = uVar16 & uVar14;
  auVar45 = *(undefined1 (*) [16])(lVar13 + uVar16);
  auVar44[0] = -(auVar45[0] == auVar31[0]);
  auVar44[1] = -(auVar45[1] == auVar31[1]);
  auVar44[2] = -(auVar45[2] == auVar31[2]);
  auVar44[3] = -(auVar45[3] == auVar31[3]);
  auVar44[4] = -(auVar45[4] == auVar31[4]);
  auVar44[5] = -(auVar45[5] == auVar31[5]);
  auVar44[6] = -(auVar45[6] == auVar31[6]);
  auVar44[7] = -(auVar45[7] == auVar31[7]);
  auVar44[8] = -(auVar45[8] == auVar31[0]);
  auVar44[9] = -(auVar45[9] == auVar31[1]);
  auVar44[10] = -(auVar45[10] == auVar31[2]);
  auVar44[0xb] = -(auVar45[0xb] == auVar31[3]);
  auVar44[0xc] = -(auVar45[0xc] == auVar31[4]);
  auVar44[0xd] = -(auVar45[0xd] == auVar31[5]);
  auVar44[0xe] = -(auVar45[0xe] == auVar31[6]);
  auVar44[0xf] = -(auVar45[0xf] == auVar31[7]);
  uVar25 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
  uVar46 = (uint)uVar25;
  while (uVar25 != 0) {
    uVar24 = 0;
    for (uVar8 = uVar46; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar24 = uVar24 + 1;
    }
    lVar26 = (uVar24 + uVar16 & uVar14) * -0xd8;
    if (pfStack_e0 == *(float **)(lVar13 + -0xd8 + lVar26)) {
      *(undefined4 *)(lVar13 + lVar26 + -0x14) = 0x40400000;
      pfStack_118 = pfStack_c8;
      uStack_110 = uStack_f0;
      pfStack_88 = (float *)pdb_140bbbcb0(&pfStack_118);
      pfStack_80 = _DAT_14329c260;
      puStack_78 = _UNK_14329c268;
      pfStack_80 = (float *)pdb_1400affa0(&pfStack_88);
      pfStack_88 = pfStack_e0;
      uVar18 = pdb_1400b0130(&pfStack_88);
      pdb_14072caa0(&pfStack_88,&pfStack_e8,uVar18);
      uVar18 = pdb_14116ee90(&pfStack_88,0);
      pdb_14119b6b0(uVar18,pfStack_c8,uStack_f0);
      puStack_98 = puStack_78;
      pfStack_a8 = pfStack_88;
      pfStack_a0 = pfStack_80;
      uVar18 = pdb_14116e180(&pfStack_a8);
      pdb_14119b2b0(uVar18);
      puStack_78 = puStack_98;
      pfStack_88 = pfStack_a8;
      pfStack_80 = pfStack_a0;
      uVar18 = pdb_14116e180(&pfStack_88);
      pdb_140cb5a70(uVar18,1);
      puStack_98 = puStack_78;
      pfStack_a8 = pfStack_88;
      pfStack_a0 = pfStack_80;
      lVar13 = pdb_14116e180(&pfStack_a8);
      pfVar20 = pfStack_a8;
      *(undefined4 *)(lVar13 + 600) = 0xfffffff0;
      pfStack_88 = pfStack_a8;
      pfStack_80 = pfStack_a0;
      puStack_78 = puStack_98;
      if (*(longlong *)(pfStack_a8 + 0x72) == 0) goto LAB_1422d1058;
      uVar14 = pdb_1400af0a0(pfStack_a8 + 0x74,&pfStack_80);
      lVar13 = *(longlong *)(pfVar20 + 0x6c);
      bVar30 = (byte)(uVar14 >> 0x39);
      auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
      auVar31 = pshuflw(auVar31,auVar31,0);
      lVar23 = 0;
      do {
        uVar14 = uVar14 & *(ulonglong *)(pfVar20 + 0x6e);
        pcVar2 = (char *)(lVar13 + uVar14);
        auVar45[0] = -(*pcVar2 == auVar31[0]);
        auVar45[1] = -(pcVar2[1] == auVar31[1]);
        auVar45[2] = -(pcVar2[2] == auVar31[2]);
        auVar45[3] = -(pcVar2[3] == auVar31[3]);
        auVar45[4] = -(pcVar2[4] == auVar31[4]);
        auVar45[5] = -(pcVar2[5] == auVar31[5]);
        auVar45[6] = -(pcVar2[6] == auVar31[6]);
        auVar45[7] = -(pcVar2[7] == auVar31[7]);
        auVar45[8] = -(pcVar2[8] == auVar31[0]);
        auVar45[9] = -(pcVar2[9] == auVar31[1]);
        auVar45[10] = -(pcVar2[10] == auVar31[2]);
        auVar45[0xb] = -(pcVar2[0xb] == auVar31[3]);
        auVar45[0xc] = -(pcVar2[0xc] == auVar31[4]);
        auVar45[0xd] = -(pcVar2[0xd] == auVar31[5]);
        auVar45[0xe] = -(pcVar2[0xe] == auVar31[6]);
        auVar45[0xf] = -(pcVar2[0xf] == auVar31[7]);
        uVar25 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf
        ;
        uVar46 = (uint)uVar25;
        while (uVar25 != 0) {
          uVar24 = 0;
          for (uVar8 = uVar46; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar24 = uVar24 + 1;
          }
          lVar26 = (uVar24 + uVar14 & *(ulonglong *)(pfVar20 + 0x6e)) * -0xd8;
          if (pfStack_80 == *(float **)(lVar13 + -0xd8 + lVar26)) {
            pbVar1 = (byte *)(lVar13 + lVar26 + -5);
            *pbVar1 = *pbVar1 | 2;
            if (uStack_f8 != 0) {
              pub_1406abac0((byte *)pfStack_c8,uStack_f8,1);
            }
LAB_1422d06e8:
            puVar27 = (undefined *)0xb1695320004fb443;
            *puVar6 = uVar12;
            pfStack_a8 = (float *)&UNK_1434d20d4;
            pfStack_a0 = (float *)0xc;
            uStack_61 = cVar11;
            uVar14 = pdb_140bbbcb0(&pfStack_a8);
            pfVar29 = (float *)(uVar14 ^ 0xb1695320004fb443);
            pfVar19 = pfVar29;
            uStack_61 = cVar11;
            lVar13 = pdb_14072c2d0(param_1);
            *(undefined1 *)(lVar13 + 0x5e) = 0;
            if (((ulonglong)pfVar19 & 1) == 0) {
              lVar13 = *(longlong *)(param_1 + 4);
              if (lVar13 == *(longlong *)param_1) {
                uStack_61 = cVar11;
                pdb_142d7f080(param_1);
              }
              lVar23 = *(longlong *)(param_1 + 2);
              *(undefined4 *)(lVar23 + lVar13 * 0x38) = 1;
              *(float **)(lVar23 + 0x30 + lVar13 * 0x38) = pfVar29;
              *(longlong *)(param_1 + 4) = lVar13 + 1;
            }
            puStack_78 = (ulonglong *)0x0;
            pfStack_88 = param_1;
            pfStack_80 = pfVar29;
            if (*(longlong *)(param_1 + 0x72) != 0) {
              uStack_61 = cVar11;
              uVar14 = pdb_1400af0a0(param_1 + 0x74,&pfStack_80);
              pfVar19 = pfStack_80;
              uVar10 = _UNK_1434d1ea8;
              uVar18 = _DAT_1434d1ea0;
              lVar13 = *(longlong *)(param_1 + 0x6c);
              bVar30 = (byte)(uVar14 >> 0x39);
              auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
              auVar31 = pshuflw(auVar31,auVar31,0);
              lVar23 = 0;
              while( true ) {
                uVar14 = uVar14 & *(ulonglong *)(param_1 + 0x6e);
                auVar45 = *(undefined1 (*) [16])(lVar13 + uVar14);
                auVar41[0] = -(auVar45[0] == auVar31[0]);
                auVar41[1] = -(auVar45[1] == auVar31[1]);
                auVar41[2] = -(auVar45[2] == auVar31[2]);
                auVar41[3] = -(auVar45[3] == auVar31[3]);
                auVar41[4] = -(auVar45[4] == auVar31[4]);
                auVar41[5] = -(auVar45[5] == auVar31[5]);
                auVar41[6] = -(auVar45[6] == auVar31[6]);
                auVar41[7] = -(auVar45[7] == auVar31[7]);
                auVar41[8] = -(auVar45[8] == auVar31[0]);
                auVar41[9] = -(auVar45[9] == auVar31[1]);
                auVar41[10] = -(auVar45[10] == auVar31[2]);
                auVar41[0xb] = -(auVar45[0xb] == auVar31[3]);
                auVar41[0xc] = -(auVar45[0xc] == auVar31[4]);
                auVar41[0xd] = -(auVar45[0xd] == auVar31[5]);
                auVar41[0xe] = -(auVar45[0xe] == auVar31[6]);
                auVar41[0xf] = -(auVar45[0xf] == auVar31[7]);
                uVar25 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar41[0xf] >> 7) << 0xf;
                uVar12 = (uint)uVar25;
                while (uVar25 != 0) {
                  uVar46 = 0;
                  for (uVar24 = uVar12; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
                    uVar46 = uVar46 + 1;
                  }
                  lVar26 = (uVar46 + uVar14 & *(ulonglong *)(param_1 + 0x6e)) * -0xd8;
                  if (pfVar29 == *(float **)(lVar13 + -0xd8 + lVar26)) {
                    lVar13 = lVar13 + lVar26;
                    *(undefined8 *)(lVar13 + -0xb8) = _DAT_1434d1ea0;
                    *(undefined8 *)(lVar13 + -0xb0) = uVar10;
                    *(undefined8 *)(lVar13 + -0xa8) = uVar18;
                    *(undefined8 *)(lVar13 + -0xa0) = uVar10;
                    *(undefined8 *)(lVar13 + -0x98) = 0;
                    *(undefined8 *)(lVar13 + -0x90) = 0;
                    *(undefined8 *)(lVar13 + -0x88) = 0;
                    *(undefined8 *)(lVar13 + -0x80) = 0;
                    *(undefined8 *)(lVar13 + -0x7a) = 0;
                    *(undefined2 *)(lVar13 + -0x72) = 3;
                    puStack_98 = puStack_78;
                    pfStack_a8 = pfStack_88;
                    pfStack_a0 = pfStack_80;
                    pfStack_88 = (float *)0x0;
                    pfStack_80 = _DAT_14329c330;
                    puStack_78 = (ulonglong *)_UNK_14329c338;
                    uStack_61 = cVar11;
                    pfStack_80 = (float *)pdb_1400affa0(&pfStack_88);
                    pfStack_88 = pfVar19;
                    uStack_61 = cVar11;
                    uVar18 = pdb_1400b0130(&pfStack_88);
                    uStack_61 = cVar11;
                    pdb_14072caa0(&pfStack_88,&pfStack_a8,uVar18);
                    pfVar19 = pfStack_88;
                    if (*(longlong *)(pfStack_88 + 0x72) != 0) {
                      uStack_61 = cVar11;
                      uVar16 = pdb_1400af0a0(pfStack_88 + 0x74,&pfStack_80);
                      puVar21 = puStack_140;
                      lVar13 = *(longlong *)(pfVar19 + 0x6c);
                      uVar14 = *(ulonglong *)(pfVar19 + 0x6e);
                      bVar30 = (byte)(uVar16 >> 0x39);
                      auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
                      auVar31 = pshuflw(auVar31,auVar31,0);
                      lVar23 = 0;
                      while( true ) {
                        uVar16 = uVar16 & uVar14;
                        auVar45 = *(undefined1 (*) [16])(lVar13 + uVar16);
                        auVar43[0] = -(auVar45[0] == auVar31[0]);
                        auVar43[1] = -(auVar45[1] == auVar31[1]);
                        auVar43[2] = -(auVar45[2] == auVar31[2]);
                        auVar43[3] = -(auVar45[3] == auVar31[3]);
                        auVar43[4] = -(auVar45[4] == auVar31[4]);
                        auVar43[5] = -(auVar45[5] == auVar31[5]);
                        auVar43[6] = -(auVar45[6] == auVar31[6]);
                        auVar43[7] = -(auVar45[7] == auVar31[7]);
                        auVar43[8] = -(auVar45[8] == auVar31[0]);
                        auVar43[9] = -(auVar45[9] == auVar31[1]);
                        auVar43[10] = -(auVar45[10] == auVar31[2]);
                        auVar43[0xb] = -(auVar45[0xb] == auVar31[3]);
                        auVar43[0xc] = -(auVar45[0xc] == auVar31[4]);
                        auVar43[0xd] = -(auVar45[0xd] == auVar31[5]);
                        auVar43[0xe] = -(auVar45[0xe] == auVar31[6]);
                        auVar43[0xf] = -(auVar45[0xf] == auVar31[7]);
                        uVar25 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(auVar43[0xf] >> 7) << 0xf;
                        uVar12 = (uint)uVar25;
                        while (uVar25 != 0) {
                          uVar46 = 0;
                          for (uVar24 = uVar12; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000
                              ) {
                            uVar46 = uVar46 + 1;
                          }
                          lVar26 = (uVar46 + uVar16 & uVar14) * -0xd8;
                          if (pfStack_80 == *(float **)(lVar13 + -0xd8 + lVar26)) {
                            lVar13 = lVar13 + lVar26;
                            *(undefined1 (*) [16])(lVar13 + -0xa8) = (undefined1  [16])0x0;
                            *(undefined1 (*) [16])(lVar13 + -0xb8) = (undefined1  [16])0x0;
                            *(undefined8 *)(lVar13 + -0x98) = 0x41f0000000000000;
                            *(undefined1 (*) [16])(lVar13 + -0x90) = (undefined1  [16])0x0;
                            *(undefined1 (*) [16])(lVar13 + -0x84) = (undefined1  [16])0x0;
                            *(undefined4 *)(lVar13 + -0x74) = 0x4000001;
                            uStack_d8 = puStack_78;
                            pfStack_e8 = pfStack_88;
                            pfStack_e0 = pfStack_80;
                            pfStack_88 = pfStack_b0;
                            pfStack_80 = (float *)&uStack_148;
                            puStack_78 = puStack_140;
                            uStack_61 = cVar11;
                            pdb_141170a10(&pfStack_118,&pfStack_e8,&pfStack_88);
                            if ((char)plStack_b8 == '\0') {
                              return;
                            }
                            plVar15 = (longlong *)pdb_140e97000();
                            if ((char)plVar15[0xd] != '\x01') goto LAB_1422d10a7;
                            goto LAB_1422d0d83;
                          }
                          uVar25 = (ushort)(uVar12 - 1) & (ushort)uVar12;
                          uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar25);
                        }
                        auVar36[0] = -(auVar45[0] == -1);
                        auVar36[1] = -(auVar45[1] == -1);
                        auVar36[2] = -(auVar45[2] == -1);
                        auVar36[3] = -(auVar45[3] == -1);
                        auVar36[4] = -(auVar45[4] == -1);
                        auVar36[5] = -(auVar45[5] == -1);
                        auVar36[6] = -(auVar45[6] == -1);
                        auVar36[7] = -(auVar45[7] == -1);
                        auVar36[8] = -(auVar45[8] == -1);
                        auVar36[9] = -(auVar45[9] == -1);
                        auVar36[10] = -(auVar45[10] == -1);
                        auVar36[0xb] = -(auVar45[0xb] == -1);
                        auVar36[0xc] = -(auVar45[0xc] == -1);
                        auVar36[0xd] = -(auVar45[0xd] == -1);
                        auVar36[0xe] = -(auVar45[0xe] == -1);
                        auVar36[0xf] = -(auVar45[0xf] == -1);
                        if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                                         (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                                        (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                                       (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                                      (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                                     (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                                    (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                                   (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
                                  (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
                                 (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
                                (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
                               (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
                              (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
                             (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
                        uVar16 = uVar16 + lVar23 + 0x10;
                        lVar23 = lVar23 + 0x10;
                      }
                    }
                    uStack_61 = cVar11;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_142fa6b30);
                  }
                  uVar25 = (ushort)(uVar12 - 1) & (ushort)uVar12;
                  uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar25);
                }
                auVar34[0] = -(auVar45[0] == -1);
                auVar34[1] = -(auVar45[1] == -1);
                auVar34[2] = -(auVar45[2] == -1);
                auVar34[3] = -(auVar45[3] == -1);
                auVar34[4] = -(auVar45[4] == -1);
                auVar34[5] = -(auVar45[5] == -1);
                auVar34[6] = -(auVar45[6] == -1);
                auVar34[7] = -(auVar45[7] == -1);
                auVar34[8] = -(auVar45[8] == -1);
                auVar34[9] = -(auVar45[9] == -1);
                auVar34[10] = -(auVar45[10] == -1);
                auVar34[0xb] = -(auVar45[0xb] == -1);
                auVar34[0xc] = -(auVar45[0xc] == -1);
                auVar34[0xd] = -(auVar45[0xd] == -1);
                auVar34[0xe] = -(auVar45[0xe] == -1);
                auVar34[0xf] = -(auVar45[0xf] == -1);
                if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x5f,0) & 1) != 0) || (SUB161(auVar34 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
                uVar14 = uVar14 + lVar23 + 0x10;
                lVar23 = lVar23 + 0x10;
              }
            }
            uStack_61 = cVar11;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_142fa6b30);
          }
          uVar25 = (ushort)(uVar46 - 1) & (ushort)uVar46;
          uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar25);
        }
        auVar38[0] = -(*pcVar2 == -1);
        auVar38[1] = -(pcVar2[1] == -1);
        auVar38[2] = -(pcVar2[2] == -1);
        auVar38[3] = -(pcVar2[3] == -1);
        auVar38[4] = -(pcVar2[4] == -1);
        auVar38[5] = -(pcVar2[5] == -1);
        auVar38[6] = -(pcVar2[6] == -1);
        auVar38[7] = -(pcVar2[7] == -1);
        auVar38[8] = -(pcVar2[8] == -1);
        auVar38[9] = -(pcVar2[9] == -1);
        auVar38[10] = -(pcVar2[10] == -1);
        auVar38[0xb] = -(pcVar2[0xb] == -1);
        auVar38[0xc] = -(pcVar2[0xc] == -1);
        auVar38[0xd] = -(pcVar2[0xd] == -1);
        auVar38[0xe] = -(pcVar2[0xe] == -1);
        auVar38[0xf] = -(pcVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar38 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar38 >> 0x1f,0) & 1) != 0) || (SUB161(auVar38 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') {
LAB_1422d1058:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa6b48);
        }
        uVar14 = uVar14 + lVar23 + 0x10;
        lVar23 = lVar23 + 0x10;
      } while( true );
    }
    uVar25 = (ushort)(uVar46 - 1) & (ushort)uVar46;
    uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar25);
  }
  auVar37[0] = -(auVar45[0] == -1);
  auVar37[1] = -(auVar45[1] == -1);
  auVar37[2] = -(auVar45[2] == -1);
  auVar37[3] = -(auVar45[3] == -1);
  auVar37[4] = -(auVar45[4] == -1);
  auVar37[5] = -(auVar45[5] == -1);
  auVar37[6] = -(auVar45[6] == -1);
  auVar37[7] = -(auVar45[7] == -1);
  auVar37[8] = -(auVar45[8] == -1);
  auVar37[9] = -(auVar45[9] == -1);
  auVar37[10] = -(auVar45[10] == -1);
  auVar37[0xb] = -(auVar45[0xb] == -1);
  auVar37[0xc] = -(auVar45[0xc] == -1);
  auVar37[0xd] = -(auVar45[0xd] == -1);
  auVar37[0xe] = -(auVar45[0xe] == -1);
  auVar37[0xf] = -(auVar45[0xf] == -1);
  if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') {
LAB_1422d1049:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar16 = uVar16 + lVar23 + 0x10;
  lVar23 = lVar23 + 0x10;
  goto LAB_1422d0c60;
}

