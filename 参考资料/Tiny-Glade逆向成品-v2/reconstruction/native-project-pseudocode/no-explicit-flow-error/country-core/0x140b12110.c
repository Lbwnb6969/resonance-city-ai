// VA 0x140b12110, PDB extent 4740 bytes
// country_core::systems::ui::signifiers::signifier_create::signifier_create
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/signifier_create.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::signifier_create::signifier_create
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/signifier_create.rs
   Extent: 4740 */

void pdb_140b12110(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined8 *param_5,longlong param_6,
                  undefined8 *param_7,undefined8 *param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 (*pauVar10) [16];
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  undefined1 (*pauVar15) [16];
  longlong *plVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  longlong lVar19;
  undefined1 (*extraout_RAX) [16];
  uint uVar20;
  undefined1 (**ppauVar21) [16];
  uint uVar22;
  undefined1 (*pauVar23) [16];
  byte bVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  ushort uVar28;
  int iVar29;
  byte bVar30;
  undefined1 (*unaff_R14) [16];
  undefined1 (*pauVar31) [16];
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 (*apauStack_388 [4]) [16];
  undefined1 (*pauStack_368) [16];
  undefined1 (*pauStack_360) [16];
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  undefined1 (*pauStack_228) [16];
  undefined1 (*pauStack_218) [16];
  undefined1 (*pauStack_210) [16];
  longlong lStack_208;
  undefined1 (*apauStack_200 [3]) [16];
  undefined1 (*pauStack_1e8) [16];
  undefined1 (*pauStack_1e0) [16];
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1d0) [16];
  undefined1 (*pauStack_1c8) [16];
  longlong lStack_1c0;
  longlong lStack_1b8;
  undefined1 (*pauStack_1b0) [16];
  undefined1 (*pauStack_1a8) [16];
  undefined1 (*pauStack_1a0) [16];
  undefined1 (*pauStack_198) [16];
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  undefined1 (*pauStack_160) [16];
  undefined *puStack_158;
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  undefined *puStack_130;
  longlong lStack_128;
  undefined1 (*pauStack_120) [16];
  undefined1 (*pauStack_118) [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  longlong lStack_e0;
  longlong lStack_d8;
  undefined1 (*pauStack_d0) [16];
  undefined1 (*pauStack_c0) [16];
  undefined8 uStack_b8;
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined8 uStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  pauVar31 = param_2;
  pauStack_b0 = param_4;
  pauStack_90 = param_1;
  cVar11 = pdb_140e94b40();
  pauStack_88 = param_3;
  if (cVar11 == '\0') {
    pauVar15 = (undefined1 (*) [16])0x0;
  }
  else {
    pauVar31 = (undefined1 (*) [16])&UNK_1430553ee;
    pauVar25 = (undefined1 (*) [16])0x49;
    pauVar23 = (undefined1 (*) [16])0x49;
    lVar12 = pdb_140b15a20(&UNK_1430553ee);
    pauVar27 = param_4;
    if (lVar12 == 1) {
      if ((undefined1 (*) [16])0x49 < pauVar23) {
LAB_140b12fc6:
        pdb_142dc8070(&UNK_1430553ee,0x49,0);
LAB_140b12fe6:
        pdb_142dc8070(&UNK_1430553ee,0x49);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pauVar31 = (undefined1 (*) [16])&UNK_1430553ee;
      pauVar27 = pauVar23;
      uVar13 = pdb_140b15a20(&UNK_1430553ee);
      if ((uVar13 & 1) != 0) {
        if ((undefined *)0x49 < *pauVar23 + 2) goto LAB_140b12fe6;
        pauVar25 = (undefined1 (*) [16])(0x47 - (longlong)pauVar23);
        pauVar31 = pauVar23 + 0x1430553f;
      }
    }
    puVar14 = &UNK_143054ff3;
    param_4 = (undefined1 (*) [16])&UNK_143054fb2;
    do {
      pbVar1 = puVar14 + -1;
      uVar20 = (uint)(char)*pbVar1;
      if ((int)uVar20 < 0) {
        bVar24 = puVar14[-2];
        if ((char)bVar24 < -0x40) {
          bVar30 = puVar14[-3];
          if ((char)bVar30 < -0x40) {
            pbVar2 = puVar14 + -4;
            puVar14 = puVar14 + -4;
            uVar20 = (*pbVar2 & 7) << 6;
            pauVar27 = (undefined1 (*) [16])(ulonglong)uVar20;
            uVar20 = bVar30 & 0x3f | uVar20;
          }
          else {
            puVar14 = puVar14 + -3;
            uVar20 = bVar30 & 0xf;
          }
          uVar20 = bVar24 & 0x3f | uVar20 << 6;
        }
        else {
          puVar14 = puVar14 + -2;
          uVar20 = bVar24 & 0x1f;
        }
        pauVar23 = (undefined1 (*) [16])(ulonglong)(uVar20 << 6);
        uVar20 = (uint)(*pbVar1 & 0x3f) | uVar20 << 6;
        if (uVar20 != 0x5c) goto LAB_140b12259;
LAB_140b12276:
        if ((undefined *)0x41 < puVar14 + -0x143054fb1) {
          pdb_142dc8070(&UNK_143054fb2,0x41,puVar14 + -0x143054fb1,0x41,&UNK_1430554a0);
          goto LAB_140b12fc6;
        }
        pauVar26 = (undefined1 (*) [16])(0x40 - (longlong)(puVar14 + -0x143054fb2));
        param_4 = (undefined1 (*) [16])(puVar14 + 1);
        goto LAB_140b12299;
      }
      puVar14 = puVar14 + -1;
      if (uVar20 == 0x5c) goto LAB_140b12276;
LAB_140b12259:
      if (uVar20 == 0x2f) goto LAB_140b12276;
    } while (puVar14 != &UNK_143054fb2);
    pauVar26 = (undefined1 (*) [16])0x41;
LAB_140b12299:
    pauVar15 = (undefined1 (*) [16])pdb_140e97000();
    if (pauVar15[6][8] != '\x01') {
      pauVar23 = (undefined1 (*) [16])0x0;
      pauVar15 = (undefined1 (*) [16])pdb_142d8ec20(pauVar15);
      if (pauVar15 == (undefined1 (*) [16])0x0) {
LAB_140b12f7c:
        pdb_142dc7890(&UNK_143326860);
LAB_140b12f88:
        uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2();
      }
    }
    if (*(longlong *)*pauVar15 != 0) goto LAB_140b12ed7;
    *(undefined8 *)*pauVar15 = 0xffffffffffffffff;
    uStack_80 = pauVar15;
    uStack_b8 = pdb_140e94f10(*pauVar15 + 8,pauVar31,pauVar25,param_4,pauVar26,1,0);
    *(longlong *)*uStack_80 = *(longlong *)*uStack_80 + 1;
    pauVar15 = (undefined1 (*) [16])0x1;
  }
  pauVar25 = (undefined1 (*) [16])*param_7;
  unaff_R14 = (undefined1 (*) [16])param_7[1];
  pauVar26 = *(undefined1 (**) [16])(pauVar25[0xf] + 8);
  pauVar4 = *(undefined1 (**) [16])pauVar25[0x10];
  param_3 = (undefined1 (*) [16])(ulonglong)(byte)pauVar25[0x10][8];
  pauStack_c0 = pauVar15;
  pauStack_a0 = pauVar15;
  plVar16 = (longlong *)pdb_140f3bda0();
  pauVar23 = pauVar31;
  pauVar27 = param_4;
  pauVar31 = pauVar4;
  pauStack_a8 = param_2;
  uStack_80 = pauVar15;
  if ((char)plVar16[2] != '\x01') goto LAB_140b12ee3;
  lStack_d8 = *plVar16;
  pauVar23 = (undefined1 (*) [16])plVar16[1];
LAB_140b12356:
  pauVar31 = (undefined1 (*) [16])(*pauVar26 + (longlong)pauVar31 * 4);
  param_4 = (undefined1 (*) [16])(unaff_R14[0xf] + 8);
  *plVar16 = lStack_d8 + 1;
  lVar12 = _UNK_143054a38;
  pauVar10 = _DAT_143054a30;
  pauVar4 = _UNK_143054a28;
  pauVar15 = _DAT_143054a20;
  pauStack_e8 = _DAT_143054a30;
  lStack_e0 = _UNK_143054a38;
  pauStack_f8 = _DAT_143054a20;
  pauStack_f0 = _UNK_143054a28;
  puStack_130 = (undefined *)0x8;
  lStack_128 = 0;
  pauStack_120 = (undefined1 (*) [16])0x8;
  pauStack_118 = (undefined1 (*) [16])0x0;
  uStack_110 = 0;
  uStack_108 = 0;
  pauStack_160 = unaff_R14;
  puStack_158 = unaff_R14[0x19] + 8;
  pauStack_150 = param_4;
  pauStack_148 = pauVar25;
  pauStack_140 = pauVar26;
  pauStack_138 = pauVar31;
  uStack_100 = (char)param_3;
  pauStack_d0 = pauVar23;
  pdb_1415234f0(apauStack_388,&pauStack_160);
  if (pauStack_e8 < apauStack_388[0]) {
    pauVar27 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)pauVar27 >> 8),1);
    pdb_142d974a0(&pauStack_f8,apauStack_388[0],&lStack_d8);
  }
  uStack_358 = 8;
  uStack_350 = 0;
  uStack_348 = 8;
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  apauStack_388[0] = unaff_R14;
  apauStack_388[1] = (undefined1 (*) [16])(unaff_R14[0x19] + 8);
  apauStack_388[2] = param_4;
  apauStack_388[3] = pauVar25;
  pauStack_368 = pauVar26;
  pauStack_360 = pauVar31;
  uStack_328 = (char)param_3;
  pdb_1419b3df0(apauStack_388,&pauStack_f8);
  pauStack_1d8 = pauStack_f8;
  pauStack_1d0 = pauStack_f0;
  pauStack_1c8 = pauStack_e8;
  lStack_1c0 = lStack_e0;
  lStack_1b8 = lStack_d8;
  pauStack_1b0 = pauStack_d0;
  *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
  uVar5 = *param_8;
  pub_142e32760(apauStack_388,uVar5,0x170);
  uStack_80 = (undefined1 (*) [16])((ulonglong)uStack_80 & 0xffffffff00000000);
  puVar14 = (undefined *)0x170;
  lVar19 = 0;
  pub_142e32780(uVar5);
  pauVar25 = *(undefined1 (**) [16])*pauStack_90;
  if (pauVar25[1][8] == '\x02') {
    if (pauVar25[1][9] == '\x04') {
      uStack_80 = (undefined1 (*) [16])
                  CONCAT44(uStack_80._4_4_,
                           (int)CONCAT71((int7)((ulonglong)pauStack_90 >> 8),
                                         _DAT_14301e000 <= *(float *)(pauVar25[0xc] + 8)));
      pauStack_98 = *(undefined1 (**) [16])(pauVar25[3] + 8);
    }
    else {
      uStack_80 = (undefined1 (*) [16])((ulonglong)uStack_80._4_4_ << 0x20);
    }
  }
  plVar16 = (longlong *)pdb_140f3bda0();
  if ((char)plVar16[2] == '\x01') {
    lStack_178 = *plVar16;
    lVar19 = plVar16[1];
  }
  else {
    lStack_178 = pdb_140f4fd10();
    *plVar16 = lStack_178;
    plVar16[1] = lVar19;
    *(undefined1 *)(plVar16 + 2) = 1;
  }
  unaff_R14 = pauStack_228;
  *plVar16 = lStack_178 + 1;
  uVar9 = _UNK_142e47bfc;
  uVar8 = _UNK_142e47bf8;
  pauStack_188 = pauVar10;
  lStack_180 = lVar12;
  pauStack_198 = pauVar15;
  pauStack_190 = pauVar4;
  lStack_170 = lVar19;
  pauVar15 = (undefined1 (*) [16])0x0;
  pauStack_1a0 = pauVar25;
LAB_140b12604:
  pauVar26 = pauStack_a8;
  if (pauVar15 < unaff_R14) {
    puVar18 = *pauVar15 + 8;
    lVar12 = 0x3f;
    if (puVar18 != (undefined *)0x0) {
      for (; (ulonglong)puVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar20 = ((uint)lVar12 ^ 0xffffffc0) + 0x3d;
    if (0x2b < uVar20) goto LAB_140b12f88;
    puVar17 = (undefined8 *)
              ((longlong)apauStack_388[uVar20] +
              (longlong)puVar18 * 0x38 + (-8L << ((byte)uVar20 & 0x3f)) * 0x38);
    if (puVar17 == (undefined8 *)0x0) goto LAB_140b127b1;
    pauVar15 = (undefined1 (*) [16])(*pauVar15 + 1);
    if (*(byte *)(puVar17 + 1) != 2) {
      pauVar31 = (undefined1 (*) [16])*puVar17;
      bVar24 = 1;
      if ((*(byte *)(puVar17 + 1) & 1) == 0) {
        bVar24 = pauStack_98 != pauVar31 & (byte)uStack_80;
      }
      pauStack_160 = pauVar31;
      puVar18 = (undefined *)pdb_1400af0a0(&lStack_178);
      param_4 = (undefined1 (*) [16])((ulonglong)puVar18 >> 0x39);
      bVar30 = (byte)((ulonglong)puVar18 >> 0x38);
      bVar32 = bVar30 >> 1;
      auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
      auVar33 = pshuflw(auVar33,auVar33,0);
      lVar12 = 0;
      puVar14 = puVar18;
      while( true ) {
        puVar14 = (undefined *)((ulonglong)puVar14 & (ulonglong)pauStack_190);
        pcVar3 = *pauStack_198 + (longlong)puVar14;
        auVar36[0] = -(*pcVar3 == auVar33[0]);
        auVar36[1] = -(pcVar3[1] == auVar33[1]);
        auVar36[2] = -(pcVar3[2] == auVar33[2]);
        auVar36[3] = -(pcVar3[3] == auVar33[3]);
        auVar36[4] = -(pcVar3[4] == auVar33[4]);
        auVar36[5] = -(pcVar3[5] == auVar33[5]);
        auVar36[6] = -(pcVar3[6] == auVar33[6]);
        auVar36[7] = -(pcVar3[7] == auVar33[7]);
        auVar36[8] = -(pcVar3[8] == auVar33[0]);
        auVar36[9] = -(pcVar3[9] == auVar33[1]);
        auVar36[10] = -(pcVar3[10] == auVar33[2]);
        auVar36[0xb] = -(pcVar3[0xb] == auVar33[3]);
        auVar36[0xc] = -(pcVar3[0xc] == auVar33[4]);
        auVar36[0xd] = -(pcVar3[0xd] == auVar33[5]);
        auVar36[0xe] = -(pcVar3[0xe] == auVar33[6]);
        auVar36[0xf] = -(pcVar3[0xf] == auVar33[7]);
        uVar28 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf
        ;
        pauVar27 = (undefined1 (*) [16])(ulonglong)uVar28;
        while (uVar28 != 0) {
          uVar20 = 0;
          for (uVar22 = (uint)pauVar27; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
            uVar20 = uVar20 + 1;
          }
          if (*(undefined1 (**) [16])
               pauStack_198[-1 - ((ulonglong)(puVar14 + uVar20) & (ulonglong)pauStack_190)] ==
              pauVar31) {
            pauStack_198[-1 - ((ulonglong)(puVar14 + uVar20) & (ulonglong)pauStack_190)][8] =
                 pauStack_198[-1 - ((ulonglong)(puVar14 + uVar20) & (ulonglong)pauStack_190)][8] |
                 bVar24;
            goto LAB_140b12604;
          }
          iVar29 = (uint)pauVar27 - 1;
          uVar28 = (ushort)iVar29 & (ushort)pauVar27;
          pauVar27 = (undefined1 (*) [16])(ulonglong)CONCAT22((short)((uint)iVar29 >> 0x10),uVar28);
        }
        auVar34[0] = -(*pcVar3 == -1);
        auVar34[1] = -(pcVar3[1] == -1);
        auVar34[2] = -(pcVar3[2] == -1);
        auVar34[3] = -(pcVar3[3] == -1);
        auVar34[4] = -(pcVar3[4] == -1);
        auVar34[5] = -(pcVar3[5] == -1);
        auVar34[6] = -(pcVar3[6] == -1);
        auVar34[7] = -(pcVar3[7] == -1);
        auVar34[8] = -(pcVar3[8] == -1);
        auVar34[9] = -(pcVar3[9] == -1);
        auVar34[10] = -(pcVar3[10] == -1);
        auVar34[0xb] = -(pcVar3[0xb] == -1);
        auVar34[0xc] = -(pcVar3[0xc] == -1);
        auVar34[0xd] = -(pcVar3[0xd] == -1);
        auVar34[0xe] = -(pcVar3[0xe] == -1);
        auVar34[0xf] = -(pcVar3[0xf] == -1);
        uVar28 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf
        ;
        if (uVar28 != 0) break;
        puVar14 = puVar14 + lVar12 + 0x10;
        lVar12 = lVar12 + 0x10;
      }
      if (pauStack_188 == (undefined1 (*) [16])0x0) {
        uStack_71 = 1;
        pdb_142d97920(&pauStack_198,1,&lStack_178,CONCAT71((uint7)(byte)(uVar28 >> 8),1));
      }
      uVar13 = (ulonglong)puVar18 & (ulonglong)pauStack_190;
      auVar33 = *(undefined1 (*) [16])(*pauStack_198 + uVar13);
      uVar28 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar33[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar28;
      if (uVar28 == 0) {
        lVar12 = 0x10;
        do {
          uVar13 = uVar13 + lVar12 & (ulonglong)pauStack_190;
          auVar33 = *(undefined1 (*) [16])(*pauStack_198 + uVar13);
          lVar12 = lVar12 + 0x10;
          uVar20 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
        } while (uVar20 == 0);
      }
      uVar22 = 0;
      for (; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
        uVar22 = uVar22 + 1;
      }
      uVar13 = uVar22 + uVar13 & (ulonglong)pauStack_190;
      bVar32 = (*pauStack_198)[uVar13];
      if (-1 < (char)bVar32) {
        auVar33 = *pauStack_198;
        uVar20 = 0;
        for (uVar22 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar33[0xf] >> 7) << 0xf); (uVar22 & 1) == 0;
            uVar22 = uVar22 >> 1 | 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        uVar13 = (ulonglong)uVar20;
        bVar32 = (*pauStack_198)[uVar13];
      }
      pauVar27 = (undefined1 (*) [16])(uVar13 - 0x10 & (ulonglong)pauStack_190);
      bVar30 = bVar30 >> 1;
      (*pauStack_198)[uVar13] = bVar30;
      (*pauVar27)[(longlong)pauStack_198[1]] = bVar30;
      puVar14 = (undefined *)((ulonglong)bVar32 & 0xffffffffffffff01);
      *(undefined1 (**) [16])pauStack_198[-1 - uVar13] = pauVar31;
      pauStack_198[-1 - uVar13][8] = 0;
      auVar33._8_4_ = uVar8;
      auVar33._0_8_ = puVar14;
      auVar33._12_4_ = uVar9;
      pauStack_188 = (undefined1 (*) [16])((longlong)pauStack_188 - (longlong)puVar14);
      lStack_180 = lStack_180 - auVar33._8_8_;
      pauStack_198[-1 - uVar13][8] = pauStack_198[-1 - uVar13][8] | bVar24;
    }
    goto LAB_140b12604;
  }
LAB_140b127b1:
  auVar33 = *pauStack_198;
  if (pauStack_190 == (undefined1 (*) [16])0x0) {
    pauStack_160 = (undefined1 (*) [16])0x0;
  }
  else {
    puVar14 = (undefined *)((longlong)pauStack_190 * 0x11 + 0x21);
    pauVar27 = pauStack_198 + (-1 - (longlong)pauStack_190);
    pauStack_160 = (undefined1 (*) [16])0x10;
  }
  pauStack_140 = pauStack_198 + 1;
  pauStack_138 = (undefined1 (*) [16])(*pauStack_198 + 1 + (longlong)pauStack_190);
  pauStack_148 = pauStack_198;
  puStack_130 = (undefined *)
                CONCAT62(puStack_130._2_6_,
                         ~((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar33[0xf] >> 7) << 0xf));
  lStack_128 = lStack_180;
  pauStack_120 = pauStack_a8;
  pauStack_118 = pauStack_88;
  uStack_71 = 0;
  puStack_158 = puVar14;
  pauStack_150 = pauVar27;
  pdb_141a32db0(&pauStack_f8,&pauStack_160);
  **(undefined4 **)pauVar26[1] = *(undefined4 *)(pauVar26[1] + 0xc);
  pauVar25 = *(undefined1 (**) [16])*pauVar26;
  lVar12 = *(longlong *)(*pauVar25 + 8);
  if (lVar12 != 0) {
    lVar19 = lVar12 * 0x10 + 0x10;
    uVar13 = lVar12 + lVar19 + 0x11;
    if (uVar13 != 0) {
      pub_1406abac0((byte *)(*(longlong *)*pauVar25 - lVar19),uVar13,0x10);
    }
  }
  param_3 = pauStack_1a0;
  auVar7._8_8_ = lStack_e0;
  auVar7._0_8_ = pauStack_e8;
  *(longlong *)pauVar25[2] = lStack_d8;
  *(undefined1 (**) [16])(pauVar25[2] + 8) = pauStack_d0;
  pauVar25[1] = auVar7;
  *(undefined1 (**) [16])*pauVar25 = pauStack_f8;
  *(undefined1 (**) [16])(*pauVar25 + 8) = pauStack_f0;
  **(undefined4 **)pauStack_90[1] = *(undefined4 *)(pauStack_90[1] + 0xc);
  pauStack_1e0 = pauStack_1a0 + 6;
  if (*(longlong *)(pauStack_1a0[7] + 8) != 0) {
    pauVar25 = *(undefined1 (**) [16])(pauStack_1a0[6] + 8);
    if (pauVar25 == (undefined1 (*) [16])0x0) {
      pauVar15 = (undefined1 (*) [16])0x0;
    }
    else {
      pub_142e32780(*(undefined8 *)pauStack_1a0[6],0xff,pauVar25[1] + 1);
      pauVar15 = (undefined1 (*) [16])
                 (((ulonglong)(*pauVar25 + 1) & 0xfffffffffffffff8) -
                 ((ulonglong)(*pauVar25 + 1) >> 3));
      if (pauVar25 < (undefined1 (*) [16])0x8) {
        pauVar15 = pauVar25;
      }
    }
    *(undefined8 *)(param_3[7] + 8) = 0;
    *(undefined1 (**) [16])param_3[7] = pauVar15;
  }
  if (param_3[1][8] != '\0') {
    puStack_130 = param_3[2] + 8;
    pauStack_140 = *(undefined1 (**) [16])(*(longlong *)param_3[2] + 0x18);
    pauStack_138 = (undefined1 (*) [16])
                   ((longlong)pauStack_140 + *(longlong *)(*(longlong *)param_3[2] + 0x20) * 0x28);
    pauStack_160 = (undefined1 (*) [16])apauStack_388;
    puStack_158 = (undefined *)0x0;
    pauStack_150 = pauStack_228;
    pauStack_148 = pauVar26;
    pauStack_a8 = *(undefined1 (**) [16])*pauStack_b0;
    pauVar15 = (undefined1 (*) [16])*param_5;
    pauStack_b0 = pauVar15;
LAB_140b12a50:
    pauVar31 = pauStack_140;
    pauVar25 = (undefined1 (*) [16])&pauStack_f8;
    if (pauStack_140 == (undefined1 (*) [16])0x0) {
      pauVar15 = (undefined1 (*) [16])0x2;
      ppauVar21 = &pauStack_1a8;
    }
    else {
      if (pauStack_140 == pauStack_138) {
        pauStack_1a8 = (undefined1 (*) [16])0x2;
        pauStack_140 = (undefined1 (*) [16])0x0;
      }
      else {
        pauStack_140 = (undefined1 (*) [16])(pauStack_140[2] + 8);
        pauVar15 = *(undefined1 (**) [16])(puStack_130 + 0x10);
        pauStack_1a8 = (undefined1 (*) [16])0x1;
      }
      ppauVar21 = apauStack_200;
    }
    *ppauVar21 = pauVar15;
    uStack_80 = pauStack_1a8;
    pauVar15 = apauStack_200[0];
    pauVar23 = pauVar31;
    if (pauStack_1a8 == (undefined1 (*) [16])0x2) {
      if (pauStack_160 == (undefined1 (*) [16])0x0) goto LAB_140b12da5;
      uStack_71 = 0;
      pdb_1419b7650(pauVar25,&pauStack_160,&pauStack_148);
      uStack_80 = pauStack_f0;
      pauVar15 = pauStack_e8;
      pauVar23 = pauStack_f8;
      if (pauStack_f0 == (undefined1 (*) [16])0x2) goto LAB_140b12da5;
    }
    param_3 = *(undefined1 (**) [16])(pauStack_1a0[3] + 8);
    pauStack_f0 = *(undefined1 (**) [16])(*pauVar23 + 8);
    pauStack_e8 = *(undefined1 (**) [16])pauVar23[1];
    uStack_71 = 0;
    pauStack_f8 = param_3;
    pauStack_90 = pauVar15;
    unaff_R14 = (undefined1 (*) [16])pdb_140bbb1c0(pauVar25);
    uStack_71 = 0;
    pauStack_1e8 = unaff_R14;
    pdb_1403b05d0(pauStack_1e0,unaff_R14);
    if (lStack_1c0 != 0) {
      uStack_71 = 0;
      puVar14 = (undefined *)pdb_1400af0a0(&lStack_1b8,&pauStack_1e8);
      bVar24 = (byte)((ulonglong)puVar14 >> 0x39);
      auVar33 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar33 = pshuflw(auVar33,auVar33,0);
      lVar12 = 0;
      while( true ) {
        pauVar15 = (undefined1 (*) [16])((ulonglong)puVar14 & (ulonglong)pauStack_1d0);
        auVar36 = *(undefined1 (*) [16])(*pauVar15 + (longlong)*pauStack_1d8);
        auVar37[0] = -(auVar36[0] == auVar33[0]);
        auVar37[1] = -(auVar36[1] == auVar33[1]);
        auVar37[2] = -(auVar36[2] == auVar33[2]);
        auVar37[3] = -(auVar36[3] == auVar33[3]);
        auVar37[4] = -(auVar36[4] == auVar33[4]);
        auVar37[5] = -(auVar36[5] == auVar33[5]);
        auVar37[6] = -(auVar36[6] == auVar33[6]);
        auVar37[7] = -(auVar36[7] == auVar33[7]);
        auVar37[8] = -(auVar36[8] == auVar33[0]);
        auVar37[9] = -(auVar36[9] == auVar33[1]);
        auVar37[10] = -(auVar36[10] == auVar33[2]);
        auVar37[0xb] = -(auVar36[0xb] == auVar33[3]);
        auVar37[0xc] = -(auVar36[0xc] == auVar33[4]);
        auVar37[0xd] = -(auVar36[0xd] == auVar33[5]);
        auVar37[0xe] = -(auVar36[0xe] == auVar33[6]);
        auVar37[0xf] = -(auVar36[0xf] == auVar33[7]);
        uVar28 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf
        ;
        pauVar27 = (undefined1 (*) [16])(ulonglong)uVar28;
        while (uVar28 != 0) {
          uVar20 = 0;
          for (uVar22 = (uint)pauVar27; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
            uVar20 = uVar20 + 1;
          }
          if (unaff_R14 ==
              *(undefined1 (**) [16])
               ((longlong)pauStack_1d8 +
               ((ulonglong)(*pauVar15 + uVar20) & (ulonglong)pauStack_1d0) * -8 + -8))
          goto LAB_140b12a50;
          iVar29 = (uint)pauVar27 - 1;
          uVar28 = (ushort)iVar29 & (ushort)pauVar27;
          pauVar27 = (undefined1 (*) [16])(ulonglong)CONCAT22((short)((uint)iVar29 >> 0x10),uVar28);
        }
        auVar35[0] = -(auVar36[0] == -1);
        auVar35[1] = -(auVar36[1] == -1);
        auVar35[2] = -(auVar36[2] == -1);
        auVar35[3] = -(auVar36[3] == -1);
        auVar35[4] = -(auVar36[4] == -1);
        auVar35[5] = -(auVar36[5] == -1);
        auVar35[6] = -(auVar36[6] == -1);
        auVar35[7] = -(auVar36[7] == -1);
        auVar35[8] = -(auVar36[8] == -1);
        auVar35[9] = -(auVar36[9] == -1);
        auVar35[10] = -(auVar36[10] == -1);
        auVar35[0xb] = -(auVar36[0xb] == -1);
        auVar35[0xc] = -(auVar36[0xc] == -1);
        auVar35[0xd] = -(auVar36[0xd] == -1);
        auVar35[0xe] = -(auVar36[0xe] == -1);
        auVar35[0xf] = -(auVar36[0xf] == -1);
        if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x1f,0) & 1) != 0) || (SUB161(auVar35 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') break;
        puVar14 = pauVar15[1] + lVar12;
        lVar12 = lVar12 + 0x10;
      }
    }
    uStack_71 = 0;
    pauVar27 = pauStack_b0;
    (**(code **)(*(longlong *)pauVar23[2] + 0x28))
              (&pauStack_218,
               (*(longlong *)(*(longlong *)pauVar23[2] + 0x10) - 1U & 0xfffffffffffffff0) +
               *(longlong *)(pauVar23[1] + 8) + 0x10,pauStack_a8,pauStack_b0,param_6);
    pauStack_88 = pauStack_218;
    pauStack_98 = pauStack_210;
    pauVar15 = pauStack_210;
    if (lStack_208 != 0) {
      pauVar31 = (undefined1 (*) [16])(lStack_208 << 3);
      pauVar26 = (undefined1 (*) [16])0x0;
      do {
        param_4 = *(undefined1 (**) [16])(*pauVar26 + (longlong)*pauStack_98);
        pauVar15 = pauStack_98;
        if ((int)param_4 == 0) break;
        plVar16 = *(longlong **)(param_6 + 8);
        if (plVar16 == (longlong *)0x0) {
          plVar16 = *(longlong **)(param_6 + 0x10);
        }
        lVar12 = plVar16[2];
        if ((ulonglong)(*plVar16 - lVar12) < 0x28) {
          pauVar27 = (undefined1 (*) [16])0x1;
          pdb_142d7f1b0(plVar16,lVar12,0x28,1,1);
        }
        pauVar15 = (undefined1 (*) [16])plVar16[1];
        *(code **)(*pauVar15 + lVar12) = pdb_14160d1f0;
        *(undefined1 (**) [16])(*pauVar15 + lVar12 + 8) = param_4;
        *(undefined1 (**) [16])(pauVar15[1] + lVar12) = unaff_R14;
        *(undefined1 (**) [16])(pauVar15[1] + lVar12 + 8) = param_3;
        pauVar15[2][lVar12] = 0;
        lVar19 = lVar12 + 0x28;
        plVar16[2] = lVar19;
        if (((ulonglong)uStack_80 & 1) != 0) {
          if ((ulonglong)(*plVar16 - lVar19) < 0x20) {
            pauVar27 = (undefined1 (*) [16])0x1;
            pdb_142d7f1b0(plVar16,lVar19,0x20,1,1);
          }
          pauVar15 = (undefined1 (*) [16])plVar16[1];
          *(code **)(pauVar15[2] + lVar12 + 8) = pdb_14160a130;
          *(undefined1 (**) [16])(pauVar15[3] + lVar12) = param_4;
          *(undefined1 (**) [16])(pauVar15[3] + lVar12 + 8) = pauStack_90;
          pauVar15[4][lVar12] = 0;
          plVar16[2] = lVar12 + 0x48;
        }
        pauVar26 = (undefined1 (*) [16])(*pauVar26 + 8);
      } while (pauVar31 != pauVar26);
    }
    if (pauStack_88 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_98,(longlong)pauStack_88 << 3,8);
      pauVar15 = extraout_RAX;
    }
    goto LAB_140b12a50;
  }
  pdb_140983b10(apauStack_388);
  pauVar23 = (undefined1 (*) [16])0x0;
  if (pauStack_1d0 != (undefined1 (*) [16])0x0) {
    uVar13 = (longlong)pauStack_1d0 * 8 + 0x17U & 0xfffffffffffffff0;
    pauVar23 = (undefined1 (*) [16])(pauStack_1d0[1] + uVar13 + 1);
    if (pauVar23 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)((longlong)pauStack_1d8 - uVar13),(ulonglong)pauVar23,0x10);
    }
  }
  if (pauStack_c0 == (undefined1 (*) [16])0x0) {
    return;
  }
  plVar16 = (longlong *)pdb_140e97000();
  if ((char)plVar16[0xd] != '\x01') {
    pauVar23 = (undefined1 (*) [16])0x0;
    plVar16 = (longlong *)pdb_142d8ec20(plVar16);
    if (plVar16 == (longlong *)0x0) goto LAB_140b12f7c;
  }
  if (*plVar16 != 0) goto LAB_140b12ed7;
  *plVar16 = -1;
  uStack_80 = (undefined1 (*) [16])plVar16;
  pdb_140e95370(plVar16 + 1,uStack_b8);
  goto LAB_140b12eab;
LAB_140b12da5:
  pdb_140983b10(apauStack_388);
  pauVar23 = (undefined1 (*) [16])0x0;
  if (pauStack_1d0 != (undefined1 (*) [16])0x0) {
    uVar13 = (longlong)pauStack_1d0 * 8 + 0x17U & 0xfffffffffffffff0;
    pauVar23 = (undefined1 (*) [16])(pauStack_1d0[1] + uVar13 + 1);
    if (pauVar23 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)((longlong)pauStack_1d8 - uVar13),(ulonglong)pauVar23,0x10);
    }
  }
  if (pauStack_c0 == (undefined1 (*) [16])0x0) {
    return;
  }
  plVar16 = (longlong *)pdb_140e97000();
  if ((char)plVar16[0xd] != '\x01') {
    pauVar23 = (undefined1 (*) [16])0x0;
    plVar16 = (longlong *)pdb_142d8ec20(plVar16);
    if (plVar16 == (longlong *)0x0) goto LAB_140b12f7c;
  }
  if (*plVar16 == 0) {
    *plVar16 = -1;
    uStack_80 = (undefined1 (*) [16])plVar16;
    pdb_140e95370(plVar16 + 1,uStack_b8);
LAB_140b12eab:
    *(longlong *)uStack_80 = *(longlong *)uStack_80 + 1;
    return;
  }
LAB_140b12ed7:
  plVar16 = (longlong *)pdb_142dc8090(&UNK_143326a50);
  pauVar15 = param_4;
LAB_140b12ee3:
  pauStack_a0 = pauVar15;
  lStack_d8 = pdb_140f4fd10();
  *plVar16 = lStack_d8;
  plVar16[1] = (longlong)pauVar23;
  *(undefined1 *)(plVar16 + 2) = 1;
  goto LAB_140b12356;
}

