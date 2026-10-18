// VA 0x140a6f970, PDB extent 8453 bytes
// country_core::systems::ivy::ivy_pruner::ivy_pruner
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_pruner.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ivy::ivy_pruner::ivy_pruner
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_pruner.rs
   Extent: 8453 */

void pdb_140a6f970(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  float fVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined1 (*pauVar7) [16];
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  char cVar22;
  char cVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined *puVar26;
  longlong *plVar27;
  float *pfVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  uint uVar33;
  float *pfVar34;
  undefined1 (*pauVar35) [16];
  longlong lVar36;
  undefined1 (*pauVar37) [16];
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  undefined1 (**ppauVar40) [16];
  longlong *plVar41;
  longlong lVar42;
  undefined4 *puVar43;
  undefined1 (*pauVar44) [16];
  ushort uVar45;
  longlong lVar46;
  ulonglong uVar47;
  float *pfVar48;
  float *pfVar49;
  undefined8 *puVar50;
  uint uVar51;
  undefined *puVar52;
  undefined1 (*pauVar53) [16];
  longlong lVar54;
  byte bVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  char unaff_XMM8_Ba;
  char unaff_XMM8_Bb;
  char cVar72;
  char unaff_XMM8_Bc;
  char cVar73;
  char unaff_XMM8_Bd;
  char cVar74;
  char unaff_XMM8_Be;
  char cVar75;
  char unaff_XMM8_Bf;
  char cVar76;
  char unaff_XMM8_Bg;
  char cVar77;
  char unaff_XMM8_Bh;
  char cVar78;
  char unaff_XMM8_Bi;
  char cVar79;
  char unaff_XMM8_Bj;
  char cVar80;
  char unaff_XMM8_Bk;
  char cVar81;
  char unaff_XMM8_Bl;
  char cVar82;
  char unaff_XMM8_Bm;
  char cVar83;
  char unaff_XMM8_Bn;
  char cVar84;
  char unaff_XMM8_Bo;
  char cVar85;
  char unaff_XMM8_Bp;
  char cVar86;
  undefined1 (*pauStack_2b8) [16];
  longlong *plStack_2b0;
  byte *pbStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  ulonglong uStack_290;
  undefined1 (*pauStack_288) [16];
  longlong *plStack_280;
  byte *pbStack_278;
  longlong lStack_270;
  longlong lStack_268;
  ulonglong uStack_260;
  undefined1 (*pauStack_258) [16];
  longlong *plStack_250;
  byte *pbStack_248;
  longlong lStack_240;
  undefined1 (*pauStack_238) [16];
  undefined1 (*pauStack_230) [16];
  longlong lStack_210;
  undefined4 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  longlong *plStack_1f0;
  byte *pbStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  undefined1 (*pauStack_1d0) [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined1 (*pauStack_150) [16];
  ulonglong *puStack_148;
  float *pfStack_140;
  undefined1 (*pauStack_138) [16];
  longlong *plStack_130;
  undefined4 *puStack_128;
  longlong *plStack_120;
  undefined1 (*pauStack_118) [16];
  undefined8 *puStack_110;
  longlong *plStack_108;
  byte *pbStack_100;
  float *pfStack_f8;
  undefined4 uStack_ec;
  ulonglong uStack_e8;
  longlong *plStack_e0;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  pauVar53 = param_2;
  puStack_200 = param_4;
  cVar22 = pdb_140e94b40();
  if (cVar22 == '\0') {
    lStack_160 = 0;
  }
  else {
    pauVar53 = (undefined1 (*) [16])&UNK_14304198d;
    ppauVar40 = (undefined1 (**) [16])0x32;
    pauVar35 = (undefined1 (*) [16])0x32;
    lVar24 = pdb_140a76ad0(&UNK_14304198d);
    if (lVar24 == 1) {
      if ((undefined1 (*) [16])0x32 < pauVar35) {
LAB_140a713d1:
        pdb_142dc8070(&UNK_14304198d,0x32,0);
LAB_140a713f1:
        pdb_142dc8070(&UNK_14304198d,0x32);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pauVar53 = (undefined1 (*) [16])&UNK_14304198d;
      uVar25 = pdb_140a76ad0(&UNK_14304198d);
      if ((uVar25 & 1) != 0) {
        if ((undefined *)0x32 < (undefined *)((longlong)*pauVar35 + 2)) goto LAB_140a713f1;
        ppauVar40 = (undefined1 (**) [16])(0x30 - (longlong)pauVar35);
        pauVar53 = (undefined1 (*) [16])((longlong)pauVar35[0x14304198] + 0xf);
      }
    }
    puVar26 = &UNK_1430412a6;
    puVar52 = &UNK_143041275;
    do {
      pbVar1 = puVar26 + -1;
      uVar33 = (uint)(char)*pbVar1;
      if ((int)uVar33 < 0) {
        bVar55 = puVar26[-2];
        if ((char)bVar55 < -0x40) {
          bVar5 = puVar26[-3];
          if ((char)bVar5 < -0x40) {
            pbVar2 = puVar26 + -4;
            puVar26 = puVar26 + -4;
            uVar33 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar26 = puVar26 + -3;
            uVar33 = bVar5 & 0xf;
          }
          uVar33 = bVar55 & 0x3f | uVar33 << 6;
        }
        else {
          puVar26 = puVar26 + -2;
          uVar33 = bVar55 & 0x1f;
        }
        pauVar35 = (undefined1 (*) [16])(ulonglong)(uVar33 << 6);
        uVar33 = (uint)(*pbVar1 & 0x3f) | uVar33 << 6;
        if (uVar33 != 0x5c) goto LAB_140a6fad9;
LAB_140a6faf5:
        if ((undefined *)0x31 < puVar26 + -0x143041274) {
          pdb_142dc8070(&UNK_143041275,0x31,puVar26 + -0x143041274,0x31,&UNK_143041a68);
          goto LAB_140a713d1;
        }
        lVar24 = 0x30 - (longlong)(puVar26 + -0x143041275);
        puVar52 = puVar26 + 1;
        goto LAB_140a6fb18;
      }
      puVar26 = puVar26 + -1;
      if (uVar33 == 0x5c) goto LAB_140a6faf5;
LAB_140a6fad9:
      if (uVar33 == 0x2f) goto LAB_140a6faf5;
    } while (puVar26 != &UNK_143041275);
    lVar24 = 0x31;
LAB_140a6fb18:
    plVar27 = (longlong *)pdb_140e97000();
    if ((char)plVar27[0xd] != '\x01') {
      pauVar35 = (undefined1 (*) [16])0x0;
      plVar27 = (longlong *)pdb_142d8ec20(plVar27);
      if (plVar27 == (longlong *)0x0) {
LAB_140a71360:
        pdb_142dc7890(&UNK_143326860);
LAB_140a7136c:
        uStack_d1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430661b0);
      }
    }
    if (*plVar27 != 0) goto LAB_140a712d7;
    *plVar27 = -1;
    plStack_e0 = plVar27;
    uStack_158 = pdb_140e94f10(plVar27 + 1,pauVar53,ppauVar40,puVar52,lVar24,1,0);
    *plStack_e0 = *plStack_e0 + 1;
    lStack_160 = 1;
  }
  ppauVar40 = (undefined1 (**) [16])pdb_140f3bda0();
  pauVar35 = pauVar53;
  if (*(char *)(ppauVar40 + 2) != '\x01') goto LAB_140a712e4;
  pauVar53 = *ppauVar40;
  pauVar35 = ppauVar40[1];
LAB_140a6fba0:
  lVar21 = _UNK_143041068;
  pbVar1 = _DAT_143041060;
  plVar27 = _UNK_143041058;
  pauVar20 = _DAT_143041050;
  *ppauVar40 = (undefined1 (*) [16])(*pauVar53 + 1);
  pbStack_248 = _DAT_143041060;
  lStack_240 = _UNK_143041068;
  pauStack_258 = _DAT_143041050;
  plStack_250 = _UNK_143041058;
  puStack_148 = (ulonglong *)*param_6;
  lVar24 = param_6[1];
  uVar25 = *puStack_148;
  uVar29 = 0;
  uVar31 = uVar25 - *(ulonglong *)(lVar24 + 0x18);
  if (uVar25 < *(ulonglong *)(lVar24 + 0x18)) {
    uVar31 = uVar29;
  }
  uVar47 = uVar25 - *(ulonglong *)(lVar24 + 0x38);
  if (uVar25 < *(ulonglong *)(lVar24 + 0x38)) {
    uVar47 = uVar29;
  }
  pfVar28 = (float *)(uVar31 * 0x10 + *(longlong *)(lVar24 + 8));
  uVar25 = *(ulonglong *)(lVar24 + 0x10) - uVar31;
  if (*(ulonglong *)(lVar24 + 0x10) < uVar31) {
    pfVar28 = (float *)0x8;
    uVar25 = uVar29;
  }
  pfVar34 = (float *)(uVar47 * 0x10 + *(longlong *)(lVar24 + 0x28));
  uVar31 = *(ulonglong *)(lVar24 + 0x30) - uVar47;
  if (*(ulonglong *)(lVar24 + 0x30) < uVar47) {
    pfVar34 = (float *)0x8;
    uVar31 = uVar29;
  }
  *puStack_148 = (*(longlong *)(lVar24 + 0x40) - uVar31) - uVar25;
  fVar16 = _DAT_142e37838;
  pauStack_138 = (undefined1 (*) [16])(pfVar28 + uVar25 * 4);
  pauStack_118 = (undefined1 (*) [16])(pfVar34 + uVar31 * 4);
  plStack_108 = *(longlong **)*param_3;
  uStack_ec = *(undefined4 *)((longlong)param_1 + 0x1c);
  puStack_110 = (undefined8 *)*param_1;
  puStack_128 = (undefined4 *)param_1[2];
  uStack_e8 = CONCAT44(uStack_e8._4_4_,*(undefined4 *)((longlong)param_2[1] + 0xc));
  plStack_e0 = *(longlong **)*param_2;
  pbStack_100 = *(byte **)param_2[1];
  iVar11 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  cVar22 = (char)iVar11;
  cVar72 = (char)((uint)iVar11 >> 8);
  cVar73 = (char)((uint)iVar11 >> 0x10);
  cVar74 = (char)((uint)iVar11 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  cVar75 = (char)iVar11;
  cVar76 = (char)((uint)iVar11 >> 8);
  cVar77 = (char)((uint)iVar11 >> 0x10);
  cVar78 = (char)((uint)iVar11 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  cVar79 = (char)iVar11;
  cVar80 = (char)((uint)iVar11 >> 8);
  cVar81 = (char)((uint)iVar11 >> 0x10);
  cVar82 = (char)((uint)iVar11 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  cVar83 = (char)iVar11;
  cVar84 = (char)((uint)iVar11 >> 8);
  cVar85 = (char)((uint)iVar11 >> 0x10);
  cVar86 = (char)((uint)iVar11 >> 0x18);
  plStack_130 = plStack_108 + 4;
  plStack_120 = plStack_e0 + 4;
  pauStack_238 = pauVar53;
  pauStack_230 = pauVar35;
LAB_140a70000:
  do {
    if ((pfVar28 == (float *)0x0) || ((undefined1 (*) [16])pfVar28 == pauStack_138)) {
      if ((pfVar34 == (float *)0x0) || ((undefined1 (*) [16])pfVar34 == pauStack_118)) break;
      pfVar48 = pfVar34 + 4;
      pfVar49 = (float *)0x0;
      pfVar28 = pfVar34;
    }
    else {
      pfVar49 = pfVar28 + 4;
      pfVar48 = pfVar34;
    }
    *puStack_148 = *puStack_148 + 1;
    pauVar53 = *(undefined1 (**) [16])(pfVar28 + 2);
    pfVar28 = pfVar49;
    pfVar34 = pfVar48;
    uStack_1f8 = pauVar53;
    if (plStack_108[3] != 0) {
      uStack_d2 = 1;
      pfStack_140 = pfVar49;
      pfStack_f8 = pfVar48;
      uVar25 = pdb_1400af0a0(plStack_130,&uStack_1f8);
      lVar24 = *plStack_108;
      bVar55 = (byte)(uVar25 >> 0x39);
      auVar57 = ZEXT216(CONCAT11(bVar55,bVar55));
      auVar57 = pshuflw(auVar57,auVar57,0);
      lVar36 = 0;
      while( true ) {
        uVar25 = uVar25 & plStack_108[1];
        auVar68 = *(undefined1 (*) [16])(lVar24 + uVar25);
        auVar65[0] = -(auVar68[0] == auVar57[0]);
        auVar65[1] = -(auVar68[1] == auVar57[1]);
        auVar65[2] = -(auVar68[2] == auVar57[2]);
        auVar65[3] = -(auVar68[3] == auVar57[3]);
        auVar65[4] = -(auVar68[4] == auVar57[4]);
        auVar65[5] = -(auVar68[5] == auVar57[5]);
        auVar65[6] = -(auVar68[6] == auVar57[6]);
        auVar65[7] = -(auVar68[7] == auVar57[7]);
        auVar65[8] = -(auVar68[8] == auVar57[0]);
        auVar65[9] = -(auVar68[9] == auVar57[1]);
        auVar65[10] = -(auVar68[10] == auVar57[2]);
        auVar65[0xb] = -(auVar68[0xb] == auVar57[3]);
        auVar65[0xc] = -(auVar68[0xc] == auVar57[4]);
        auVar65[0xd] = -(auVar68[0xd] == auVar57[5]);
        auVar65[0xe] = -(auVar68[0xe] == auVar57[6]);
        auVar65[0xf] = -(auVar68[0xf] == auVar57[7]);
        uVar45 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf
        ;
        uVar33 = (uint)uVar45;
        while (pfVar28 = pfStack_140, pfVar34 = pfStack_f8, uVar45 != 0) {
          uVar51 = 0;
          for (uVar9 = uVar33; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar51 = uVar51 + 1;
          }
          lVar46 = (uVar51 + uVar25 & plStack_108[1]) * -0x2b0;
          if (pauVar53 == *(undefined1 (**) [16])(lVar24 + -0x2b0 + lVar46)) {
            lVar24 = lVar24 + lVar46;
            if ((*(ulonglong *)(lVar24 + -0x298) < 2) || (*(float *)(lVar24 + -0x278) <= 0.0)) {
              uStack_d2 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430412a8);
            }
            if ((1 < *(uint *)(lVar24 + -0x50)) ||
               (fVar16 < *(float *)(lVar24 + -0x24) || fVar16 == *(float *)(lVar24 + -0x24)))
            goto LAB_140a70000;
            *puStack_128 = uStack_ec;
            param_3 = (undefined1 (*) [16])*puStack_110;
            lVar46 = puStack_110[3];
            auVar57 = *param_3;
            pauVar53 = param_3 + 1;
            uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar57[0xf] >> 7) << 0xf);
            lVar36 = lVar24 + -0x4c;
            goto LAB_140a6fe50;
          }
          uVar45 = (ushort)(uVar33 - 1) & (ushort)uVar33;
          uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar45);
        }
        auVar58[0] = -(auVar68[0] == cVar22);
        auVar58[1] = -(auVar68[1] == cVar72);
        auVar58[2] = -(auVar68[2] == cVar73);
        auVar58[3] = -(auVar68[3] == cVar74);
        auVar58[4] = -(auVar68[4] == cVar75);
        auVar58[5] = -(auVar68[5] == cVar76);
        auVar58[6] = -(auVar68[6] == cVar77);
        auVar58[7] = -(auVar68[7] == cVar78);
        auVar58[8] = -(auVar68[8] == cVar79);
        auVar58[9] = -(auVar68[9] == cVar80);
        auVar58[10] = -(auVar68[10] == cVar81);
        auVar58[0xb] = -(auVar68[0xb] == cVar82);
        auVar58[0xc] = -(auVar68[0xc] == cVar83);
        auVar58[0xd] = -(auVar68[0xd] == cVar84);
        auVar58[0xe] = -(auVar68[0xe] == cVar85);
        auVar58[0xf] = -(auVar68[0xf] == cVar86);
        if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x1f,0) & 1) != 0) || (SUB161(auVar58 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
        uVar25 = uVar25 + lVar36 + 0x10;
        lVar36 = lVar36 + 0x10;
      }
    }
  } while( true );
  param_2 = (undefined1 (*) [16])*param_7;
  lVar24 = param_7[1];
  uVar25 = *(ulonglong *)*param_2;
  uVar29 = 0;
  uVar31 = uVar25 - *(ulonglong *)(lVar24 + 0x18);
  if (uVar25 < *(ulonglong *)(lVar24 + 0x18)) {
    uVar31 = uVar29;
  }
  uVar47 = uVar25 - *(ulonglong *)(lVar24 + 0x38);
  if (uVar25 < *(ulonglong *)(lVar24 + 0x38)) {
    uVar47 = uVar29;
  }
  plVar41 = (longlong *)(uVar31 * 0x20 + *(longlong *)(lVar24 + 8));
  uVar25 = *(ulonglong *)(lVar24 + 0x10) - uVar31;
  if (*(ulonglong *)(lVar24 + 0x10) < uVar31) {
    plVar41 = (longlong *)0x8;
    uVar25 = uVar29;
  }
  lVar36 = uVar47 * 0x20 + *(longlong *)(lVar24 + 0x28);
  uVar31 = *(ulonglong *)(lVar24 + 0x30) - uVar47;
  if (*(ulonglong *)(lVar24 + 0x30) < uVar47) {
    lVar36 = 8;
    uVar31 = uVar29;
  }
  *(longlong *)*param_2 = *(longlong *)(lVar24 + 0x40) - (longlong)(uVar31 + uVar25);
  uStack_d2 = 1;
  pauVar53 = (undefined1 (*) [16])pdb_140f3bda0();
  if (pauVar53[1][0] == '\x01') {
    lStack_298 = *(longlong *)*pauVar53;
    uVar47 = *(ulonglong *)(*pauVar53 + 8);
  }
  else {
    uStack_d2 = 1;
    lStack_298 = pdb_140f4fd10();
    *(longlong *)*pauVar53 = lStack_298;
    *(ulonglong *)(*pauVar53 + 8) = uVar47;
    pauVar53[1][0] = 1;
    param_3 = pauVar53;
  }
  pbStack_1e8 = (byte *)(plVar41 + uVar25 * 4);
  lStack_1d8 = lVar36 + uVar31 * 0x20;
  *(longlong *)*pauVar53 = lStack_298 + 1;
  pbStack_2a8 = pbVar1;
  lStack_2a0 = lVar21;
  pauStack_2b8 = pauVar20;
  plStack_2b0 = plVar27;
  uStack_1c8 = 0;
  uStack_1b8 = 0;
  uStack_290 = uVar47;
  uStack_1f8 = param_2;
  plStack_1f0 = plVar41;
  lStack_1e0 = lVar36;
  pauStack_1d0 = (undefined1 (*) [16])(uVar31 + uVar25);
  pdb_1417a6f60(&pauStack_2b8,&uStack_1f8);
  pbStack_278 = pbStack_2a8;
  lStack_270 = lStack_2a0;
  pauStack_288 = pauStack_2b8;
  plStack_280 = plStack_2b0;
  lStack_268 = lStack_298;
  uStack_260 = uStack_290;
  if (lStack_2a0 != 0) {
    *puStack_128 = uStack_ec;
    pauVar53 = (undefined1 (*) [16])*puStack_110;
    lVar24 = puStack_110[3];
    auVar57 = *pauVar53;
    param_3 = pauVar53 + 1;
    uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar57[0xf] >> 7) << 0xf);
    cVar22 = -1;
    cVar72 = -1;
    cVar73 = -1;
    cVar74 = -1;
    cVar75 = -1;
    cVar76 = -1;
    cVar77 = -1;
    cVar78 = -1;
    cVar79 = -1;
    cVar80 = -1;
    cVar81 = -1;
    cVar82 = -1;
    cVar83 = -1;
    cVar84 = -1;
    cVar85 = -1;
    cVar86 = -1;
LAB_140a703d0:
    if (lVar24 != 0) {
      uVar51 = uVar33;
      if ((short)uVar33 == 0) {
        do {
          auVar57 = *param_3;
          pauVar53 = pauVar53 + -0x98;
          param_3 = param_3 + 1;
          uVar51 = (ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar51 == 0);
      }
      uVar33 = uVar51 - 1 & uVar51;
      lVar24 = lVar24 + -1;
      if (lStack_270 != 0) {
        uVar9 = 0;
        for (; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        lVar46 = (ulonglong)uVar9 * -0x98;
        param_2 = (undefined1 (*) [16])((longlong)pauVar53 + lVar46 + -0x30);
        uStack_d1 = 1;
        uVar25 = pdb_1400af0a0(&lStack_268,param_2);
        bVar55 = (byte)(uVar25 >> 0x39);
        auVar57 = ZEXT216(CONCAT11(bVar55,bVar55));
        auVar57 = pshuflw(auVar57,auVar57,0);
        puVar50 = (undefined8 *)*param_2;
        lVar36 = 0;
        while( true ) {
          uVar25 = uVar25 & (ulonglong)plStack_280;
          auVar68 = *(undefined1 (*) [16])((longlong)*pauStack_288 + uVar25);
          auVar67[0] = -(auVar68[0] == auVar57[0]);
          auVar67[1] = -(auVar68[1] == auVar57[1]);
          auVar67[2] = -(auVar68[2] == auVar57[2]);
          auVar67[3] = -(auVar68[3] == auVar57[3]);
          auVar67[4] = -(auVar68[4] == auVar57[4]);
          auVar67[5] = -(auVar68[5] == auVar57[5]);
          auVar67[6] = -(auVar68[6] == auVar57[6]);
          auVar67[7] = -(auVar68[7] == auVar57[7]);
          auVar67[8] = -(auVar68[8] == auVar57[0]);
          auVar67[9] = -(auVar68[9] == auVar57[1]);
          auVar67[10] = -(auVar68[10] == auVar57[2]);
          auVar67[0xb] = -(auVar68[0xb] == auVar57[3]);
          auVar67[0xc] = -(auVar68[0xc] == auVar57[4]);
          auVar67[0xd] = -(auVar68[0xd] == auVar57[5]);
          auVar67[0xe] = -(auVar68[0xe] == auVar57[6]);
          auVar67[0xf] = -(auVar68[0xf] == auVar57[7]);
          uVar45 = (ushort)(SUB161(auVar67 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar67[0xf] >> 7) << 0xf;
          uVar51 = (uint)uVar45;
          while (uVar45 != 0) {
            uVar9 = 0;
            for (uVar10 = uVar51; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            param_2 = (undefined1 (*) [16])
                      ((longlong)pauStack_288 + (uVar9 + uVar25 & (ulonglong)plStack_280) * -8);
            if (*puVar50 == *(longlong *)((longlong)param_2[-1] + 8)) {
              uStack_d1 = 1;
              cVar23 = pdb_1417b7c60(&pauStack_258,
                                     *(undefined8 *)((longlong)pauVar53 + lVar46 + -0x70));
              if (cVar23 != '\0') goto LAB_140a703d0;
              *(undefined4 *)pbStack_100 = (undefined4)uStack_e8;
              param_2 = *(undefined1 (**) [16])((longlong)pauVar53 + lVar46 + -0x70);
              uStack_1f8 = param_2;
              if (plStack_e0[3] == 0) goto LAB_140a703d0;
              uStack_d1 = 1;
              uVar25 = pdb_1400af0a0(plStack_120,&uStack_1f8);
              bVar55 = (byte)(uVar25 >> 0x39);
              auVar57 = ZEXT216(CONCAT11(bVar55,bVar55));
              auVar57 = pshuflw(auVar57,auVar57,0);
              lVar36 = 0;
              goto LAB_140a7034f;
            }
            uVar45 = (ushort)(uVar51 - 1) & (ushort)uVar51;
            uVar51 = CONCAT22((short)(uVar51 - 1 >> 0x10),uVar45);
          }
          auVar60[0] = -(auVar68[0] == -1);
          auVar60[1] = -(auVar68[1] == -1);
          auVar60[2] = -(auVar68[2] == -1);
          auVar60[3] = -(auVar68[3] == -1);
          auVar60[4] = -(auVar68[4] == -1);
          auVar60[5] = -(auVar68[5] == -1);
          auVar60[6] = -(auVar68[6] == -1);
          auVar60[7] = -(auVar68[7] == -1);
          auVar60[8] = -(auVar68[8] == -1);
          auVar60[9] = -(auVar68[9] == -1);
          auVar60[10] = -(auVar68[10] == -1);
          auVar60[0xb] = -(auVar68[0xb] == -1);
          auVar60[0xc] = -(auVar68[0xc] == -1);
          auVar60[0xd] = -(auVar68[0xd] == -1);
          auVar60[0xe] = -(auVar68[0xe] == -1);
          auVar60[0xf] = -(auVar68[0xf] == -1);
          if ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 || (SUB161(auVar60 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar60 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar60 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar60 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar60 >> 0x2f,0) & 1) != 0) || (SUB161(auVar60 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar60 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar60 >> 0x47,0) & 1) != 0) || (SUB161(auVar60 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar60 >> 0x57,0) & 1) != 0) || (SUB161(auVar60 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar60 >> 0x67,0) & 1) != 0) || (SUB161(auVar60 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar60 >> 0x77,0) & 1) != 0) || auVar60[0xf] < '\0') break;
          uVar25 = uVar25 + lVar36 + 0x10;
          lVar36 = lVar36 + 0x10;
        }
      }
      goto LAB_140a703d0;
    }
  }
  *puStack_128 = uStack_ec;
  fVar19 = _DAT_14300b368;
  fVar18 = _DAT_142e42360;
  fVar17 = _DAT_142e3c604;
  fVar16 = _DAT_142e3787c;
  pauStack_118 = (undefined1 (*) [16])*puStack_110;
  plStack_130 = (longlong *)puStack_110[3];
  auVar57 = *pauStack_118;
  pauStack_150 = pauStack_118 + 1;
  ppauVar40 = (undefined1 (**) [16])
              (ulonglong)
              ~(uint)(ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar57[0xf] >> 7) << 0xf);
  pauVar53 = (undefined1 (*) [16])*puStack_200;
  puStack_148 = (ulonglong *)*param_5;
  iVar11 = -(uint)(CONCAT13(cVar74,CONCAT12(cVar73,CONCAT11(cVar72,cVar22))) ==
                  CONCAT13(cVar74,CONCAT12(cVar73,CONCAT11(cVar72,cVar22))));
  unaff_XMM8_Ba = (char)iVar11;
  unaff_XMM8_Bb = (char)((uint)iVar11 >> 8);
  unaff_XMM8_Bc = (char)((uint)iVar11 >> 0x10);
  unaff_XMM8_Bd = (char)((uint)iVar11 >> 0x18);
  iVar11 = -(uint)(CONCAT13(cVar78,CONCAT12(cVar77,CONCAT11(cVar76,cVar75))) ==
                  CONCAT13(cVar78,CONCAT12(cVar77,CONCAT11(cVar76,cVar75))));
  unaff_XMM8_Be = (char)iVar11;
  unaff_XMM8_Bf = (char)((uint)iVar11 >> 8);
  unaff_XMM8_Bg = (char)((uint)iVar11 >> 0x10);
  unaff_XMM8_Bh = (char)((uint)iVar11 >> 0x18);
  iVar11 = -(uint)(CONCAT13(cVar82,CONCAT12(cVar81,CONCAT11(cVar80,cVar79))) ==
                  CONCAT13(cVar82,CONCAT12(cVar81,CONCAT11(cVar80,cVar79))));
  unaff_XMM8_Bi = (char)iVar11;
  unaff_XMM8_Bj = (char)((uint)iVar11 >> 8);
  unaff_XMM8_Bk = (char)((uint)iVar11 >> 0x10);
  unaff_XMM8_Bl = (char)((uint)iVar11 >> 0x18);
  iVar11 = -(uint)(CONCAT13(cVar86,CONCAT12(cVar85,CONCAT11(cVar84,cVar83))) ==
                  CONCAT13(cVar86,CONCAT12(cVar85,CONCAT11(cVar84,cVar83))));
  unaff_XMM8_Bm = (char)iVar11;
  unaff_XMM8_Bn = (char)((uint)iVar11 >> 8);
  unaff_XMM8_Bo = (char)((uint)iVar11 >> 0x10);
  unaff_XMM8_Bp = (char)((uint)iVar11 >> 0x18);
  pauStack_138 = pauVar53;
  while (plStack_130 != (longlong *)0x0) {
    pauVar35 = pauStack_118;
    if ((short)ppauVar40 == 0) {
      do {
        auVar57 = *pauStack_150;
        pauStack_118 = pauStack_118 + -0x98;
        pauStack_150 = pauStack_150 + 1;
        uVar33 = (ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) ^ 0xffff;
        ppauVar40 = (undefined1 (**) [16])(ulonglong)uVar33;
        pauVar35 = pauStack_118;
      } while (uVar33 == 0);
    }
    uVar9 = (uint)ppauVar40;
    uVar33 = 0;
    for (uVar51 = uVar9; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x80000000) {
      uVar33 = uVar33 + 1;
    }
    ppauVar40 = (undefined1 (**) [16])(ulonglong)(uVar9 - 1 & uVar9);
    lVar24 = (ulonglong)uVar33 * -0x98;
    plStack_130 = (longlong *)((longlong)plStack_130 + -1);
    pfStack_f8 = (float *)((longlong)pauVar35 + lVar24 + -0x18);
    pfStack_140 = (float *)((longlong)pauVar35 + lVar24 + -0x14);
    pauStack_118 = pauVar35;
LAB_140a70710:
    lVar36 = *(longlong *)((longlong)pauVar35 + lVar24 + -0x78);
    pauVar39 = (undefined1 (*) [16])0x0;
    if (lVar36 != 0) {
      pfVar28 = pfStack_f8;
      pfVar34 = pfStack_140;
      puVar43 = (undefined4 *)((longlong)pauVar35 + lVar24 + -0x10);
      if (*(char *)((longlong)pauVar35 + lVar24 + -0x28) == '\0') {
        uVar29 = (*(longlong *)((longlong)pauVar35 + lVar24 + -0x80) + lVar36) - 1;
        uVar25 = *(ulonglong *)((longlong)pauVar35 + lVar24 + -0x90);
        lVar36 = *(longlong *)((longlong)pauVar35 + lVar24 + -0x88);
        uVar31 = 0;
        if (uVar25 <= uVar29) {
          uVar31 = uVar25;
        }
        lVar46 = uVar29 - uVar31;
        pfVar28 = (float *)(lVar36 + lVar46 * 0x28 + 8);
        pfVar34 = (float *)(lVar36 + lVar46 * 0x28 + 0xc);
        puVar43 = (undefined4 *)(lVar36 + lVar46 * 0x28 + 0x10);
      }
      fVar4 = *pfVar34;
      uStack_1f8 = (undefined1 (*) [16])CONCAT44(fVar4,*pfVar28);
      plStack_1f0 = (longlong *)CONCAT44(plStack_1f0._4_4_,*puVar43);
      uStack_d1 = 1;
      pauVar39 = pauVar53;
      lVar36 = pdb_140a72010(&uStack_1f8,pauVar53,plStack_108);
      if (lVar36 == 0) {
        lVar36 = *(longlong *)((longlong)pauVar35 + lVar24 + -0x78);
        if (lVar36 == 0) goto LAB_140a7136c;
        lVar36 = lVar36 + -1;
        *(longlong *)((longlong)pauVar35 + lVar24 + -0x78) = lVar36;
        uVar29 = lVar36 + *(longlong *)((longlong)pauVar35 + lVar24 + -0x80);
        uVar25 = *(ulonglong *)((longlong)pauVar35 + lVar24 + -0x90);
        uVar31 = 0;
        if (uVar25 <= uVar29) {
          uVar31 = uVar25;
        }
        param_2 = *(undefined1 (**) [16])
                   (*(longlong *)((longlong)pauVar35 + lVar24 + -0x88) + (uVar29 - uVar31) * 0x28);
        *(undefined4 *)((longlong)pauVar35 + lVar24 + -0xc) = 0;
        *(undefined4 *)((longlong)pauVar35 + lVar24 + -0x28) = 0;
        *(undefined4 *)pbStack_100 = (undefined4)uStack_e8;
        pauVar39 = *(undefined1 (**) [16])((longlong)pauVar35 + lVar24 + -0x70);
        uStack_1f8 = pauVar39;
        if (plStack_e0[3] != 0) {
          uStack_d1 = 1;
          uVar25 = pdb_1400af0a0(plStack_120,&uStack_1f8);
          bVar55 = (byte)(uVar25 >> 0x39);
          auVar57 = ZEXT216(CONCAT11(bVar55,bVar55));
          auVar57 = pshuflw(auVar57,auVar57,0);
          lVar36 = 0;
          while( true ) {
            uVar25 = uVar25 & plStack_e0[1];
            pcVar3 = (char *)(*plStack_e0 + uVar25);
            auVar70[0] = -(*pcVar3 == auVar57[0]);
            auVar70[1] = -(pcVar3[1] == auVar57[1]);
            auVar70[2] = -(pcVar3[2] == auVar57[2]);
            auVar70[3] = -(pcVar3[3] == auVar57[3]);
            auVar70[4] = -(pcVar3[4] == auVar57[4]);
            auVar70[5] = -(pcVar3[5] == auVar57[5]);
            auVar70[6] = -(pcVar3[6] == auVar57[6]);
            auVar70[7] = -(pcVar3[7] == auVar57[7]);
            auVar70[8] = -(pcVar3[8] == auVar57[0]);
            auVar70[9] = -(pcVar3[9] == auVar57[1]);
            auVar70[10] = -(pcVar3[10] == auVar57[2]);
            auVar70[0xb] = -(pcVar3[0xb] == auVar57[3]);
            auVar70[0xc] = -(pcVar3[0xc] == auVar57[4]);
            auVar70[0xd] = -(pcVar3[0xd] == auVar57[5]);
            auVar70[0xe] = -(pcVar3[0xe] == auVar57[6]);
            auVar70[0xf] = -(pcVar3[0xf] == auVar57[7]);
            uVar45 = (ushort)(SUB161(auVar70 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar70[0xf] >> 7) << 0xf;
            uVar33 = (uint)uVar45;
            while (uVar45 != 0) {
              uVar51 = 0;
              for (uVar9 = uVar33; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar51 = uVar51 + 1;
              }
              lVar46 = *plStack_e0 + (uVar51 + uVar25 & plStack_e0[1]) * -0x20;
              if (pauVar39 == *(undefined1 (**) [16])(lVar46 + -0x20)) {
                uVar25 = *(ulonglong *)(lVar46 + -8);
                if (uVar25 == 0) goto LAB_140a70710;
                pauVar39 = *(undefined1 (**) [16])(lVar46 + -0x10);
                puVar50 = (undefined8 *)(*pauVar39 + 8);
                uVar29 = 0;
                pauVar38 = pauVar39;
                uVar31 = uVar25;
                goto LAB_140a70a50;
              }
              uVar45 = (ushort)(uVar33 - 1) & (ushort)uVar33;
              uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar45);
            }
            auVar63[0] = -(*pcVar3 == unaff_XMM8_Ba);
            auVar63[1] = -(pcVar3[1] == unaff_XMM8_Bb);
            auVar63[2] = -(pcVar3[2] == unaff_XMM8_Bc);
            auVar63[3] = -(pcVar3[3] == unaff_XMM8_Bd);
            auVar63[4] = -(pcVar3[4] == unaff_XMM8_Be);
            auVar63[5] = -(pcVar3[5] == unaff_XMM8_Bf);
            auVar63[6] = -(pcVar3[6] == unaff_XMM8_Bg);
            auVar63[7] = -(pcVar3[7] == unaff_XMM8_Bh);
            auVar63[8] = -(pcVar3[8] == unaff_XMM8_Bi);
            auVar63[9] = -(pcVar3[9] == unaff_XMM8_Bj);
            auVar63[10] = -(pcVar3[10] == unaff_XMM8_Bk);
            auVar63[0xb] = -(pcVar3[0xb] == unaff_XMM8_Bl);
            auVar63[0xc] = -(pcVar3[0xc] == unaff_XMM8_Bm);
            auVar63[0xd] = -(pcVar3[0xd] == unaff_XMM8_Bn);
            auVar63[0xe] = -(pcVar3[0xe] == unaff_XMM8_Bo);
            auVar63[0xf] = -(pcVar3[0xf] == unaff_XMM8_Bp);
            if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar63 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar63 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar63 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar63 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar63 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar63 >> 0x3f,0) & 1) != 0) || (SUB161(auVar63 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar63 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar63 >> 0x57,0) & 1) != 0) || (SUB161(auVar63 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar63 >> 0x67,0) & 1) != 0) || (SUB161(auVar63 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar63 >> 0x77,0) & 1) != 0) || auVar63[0xf] < '\0') break;
            uVar25 = uVar25 + lVar36 + 0x10;
            lVar36 = lVar36 + 0x10;
          }
        }
      }
      else {
        if (*(char *)(lVar36 + 0x2a0) == '\x01') {
          fVar56 = *(float *)(lVar36 + 0x288) + fVar16;
        }
        else if (*(uint *)(lVar36 + 600) < 2) {
          fVar56 = *(float *)(lVar36 + 0x288) + fVar17 + fVar18;
        }
        else {
          fVar56 = *(float *)(lVar36 + 0x288) + fVar19;
        }
        if (fVar4 < fVar56) goto LAB_140a70b00;
        lVar36 = *(longlong *)((longlong)pauVar35 + lVar24 + -0x78);
        if (lVar36 == 0) {
          uStack_d1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430661b0);
        }
        lVar36 = lVar36 + -1;
        *(longlong *)((longlong)pauVar35 + lVar24 + -0x78) = lVar36;
        uVar29 = lVar36 + *(longlong *)((longlong)pauVar35 + lVar24 + -0x80);
        uVar25 = *(ulonglong *)((longlong)pauVar35 + lVar24 + -0x90);
        uVar31 = 0;
        if (uVar25 <= uVar29) {
          uVar31 = uVar25;
        }
        param_2 = *(undefined1 (**) [16])
                   (*(longlong *)((longlong)pauVar35 + lVar24 + -0x88) + (uVar29 - uVar31) * 0x28);
        *(undefined4 *)((longlong)pauVar35 + lVar24 + -0xc) = 0;
        *(undefined4 *)((longlong)pauVar35 + lVar24 + -0x28) = 0;
        *(undefined4 *)pbStack_100 = (undefined4)uStack_e8;
        pauVar39 = *(undefined1 (**) [16])((longlong)pauVar35 + lVar24 + -0x70);
        uStack_1f8 = pauVar39;
        if (plStack_e0[3] != 0) {
          uStack_d1 = 1;
          uVar25 = pdb_1400af0a0(plStack_120,&uStack_1f8);
          bVar55 = (byte)(uVar25 >> 0x39);
          auVar57 = ZEXT216(CONCAT11(bVar55,bVar55));
          auVar57 = pshuflw(auVar57,auVar57,0);
          lVar36 = 0;
          while( true ) {
            uVar25 = uVar25 & plStack_e0[1];
            pcVar3 = (char *)(*plStack_e0 + uVar25);
            auVar69[0] = -(*pcVar3 == auVar57[0]);
            auVar69[1] = -(pcVar3[1] == auVar57[1]);
            auVar69[2] = -(pcVar3[2] == auVar57[2]);
            auVar69[3] = -(pcVar3[3] == auVar57[3]);
            auVar69[4] = -(pcVar3[4] == auVar57[4]);
            auVar69[5] = -(pcVar3[5] == auVar57[5]);
            auVar69[6] = -(pcVar3[6] == auVar57[6]);
            auVar69[7] = -(pcVar3[7] == auVar57[7]);
            auVar69[8] = -(pcVar3[8] == auVar57[0]);
            auVar69[9] = -(pcVar3[9] == auVar57[1]);
            auVar69[10] = -(pcVar3[10] == auVar57[2]);
            auVar69[0xb] = -(pcVar3[0xb] == auVar57[3]);
            auVar69[0xc] = -(pcVar3[0xc] == auVar57[4]);
            auVar69[0xd] = -(pcVar3[0xd] == auVar57[5]);
            auVar69[0xe] = -(pcVar3[0xe] == auVar57[6]);
            auVar69[0xf] = -(pcVar3[0xf] == auVar57[7]);
            uVar45 = (ushort)(SUB161(auVar69 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar69[0xf] >> 7) << 0xf;
            uVar33 = (uint)uVar45;
            while (uVar45 != 0) {
              uVar51 = 0;
              for (uVar9 = uVar33; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar51 = uVar51 + 1;
              }
              lVar46 = *plStack_e0 + (uVar51 + uVar25 & plStack_e0[1]) * -0x20;
              if (pauVar39 == *(undefined1 (**) [16])(lVar46 + -0x20)) {
                uVar25 = *(ulonglong *)(lVar46 + -8);
                if (uVar25 == 0) goto LAB_140a70710;
                pauVar39 = *(undefined1 (**) [16])(lVar46 + -0x10);
                puVar50 = (undefined8 *)(*pauVar39 + 8);
                uVar29 = 0;
                pauVar38 = pauVar39;
                uVar31 = uVar25;
                goto LAB_140a70660;
              }
              uVar45 = (ushort)(uVar33 - 1) & (ushort)uVar33;
              uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar45);
            }
            auVar62[0] = -(*pcVar3 == unaff_XMM8_Ba);
            auVar62[1] = -(pcVar3[1] == unaff_XMM8_Bb);
            auVar62[2] = -(pcVar3[2] == unaff_XMM8_Bc);
            auVar62[3] = -(pcVar3[3] == unaff_XMM8_Bd);
            auVar62[4] = -(pcVar3[4] == unaff_XMM8_Be);
            auVar62[5] = -(pcVar3[5] == unaff_XMM8_Bf);
            auVar62[6] = -(pcVar3[6] == unaff_XMM8_Bg);
            auVar62[7] = -(pcVar3[7] == unaff_XMM8_Bh);
            auVar62[8] = -(pcVar3[8] == unaff_XMM8_Bi);
            auVar62[9] = -(pcVar3[9] == unaff_XMM8_Bj);
            auVar62[10] = -(pcVar3[10] == unaff_XMM8_Bk);
            auVar62[0xb] = -(pcVar3[0xb] == unaff_XMM8_Bl);
            auVar62[0xc] = -(pcVar3[0xc] == unaff_XMM8_Bm);
            auVar62[0xd] = -(pcVar3[0xd] == unaff_XMM8_Bn);
            auVar62[0xe] = -(pcVar3[0xe] == unaff_XMM8_Bo);
            auVar62[0xf] = -(pcVar3[0xf] == unaff_XMM8_Bp);
            if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar62 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar62 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar62 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar62 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar62 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar62 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar62 >> 0x3f,0) & 1) != 0) || (SUB161(auVar62 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar62 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar62 >> 0x57,0) & 1) != 0) || (SUB161(auVar62 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar62 >> 0x67,0) & 1) != 0) || (SUB161(auVar62 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar62 >> 0x77,0) & 1) != 0) || auVar62[0xf] < '\0') break;
            uVar25 = uVar25 + lVar36 + 0x10;
            lVar36 = lVar36 + 0x10;
          }
        }
      }
      goto LAB_140a70710;
    }
LAB_140a70b00:
    uVar25 = 0;
LAB_140a70c50:
    param_3 = (undefined1 (*) [16])((longlong)pauVar35 + lVar24 + -0x60);
    lVar36 = *(longlong *)((longlong)pauVar35 + lVar24 + -0x78);
    if ((uVar25 & 1) == 0) {
      if (lVar36 == 0) goto LAB_140a70500;
      uStack_208 = *(undefined4 *)((longlong)pauVar35 + lVar24 + -0x58);
      lStack_210 = *(longlong *)*param_3;
      uStack_d1 = 1;
      plVar41 = (longlong *)pdb_140f3bda0();
      if ((char)plVar41[2] == '\x01') {
        lStack_1d8 = *plVar41;
        pauVar39 = (undefined1 (*) [16])plVar41[1];
      }
      else {
        uStack_d1 = 1;
        lStack_1d8 = pdb_140f4fd10();
        *plVar41 = lStack_1d8;
        plVar41[1] = (longlong)pauVar39;
        *(undefined1 *)(plVar41 + 2) = 1;
      }
      *plVar41 = lStack_1d8 + 1;
      pbStack_1e8 = pbVar1;
      lStack_1e0 = lVar21;
      uStack_1f8 = pauVar20;
      plStack_1f0 = plVar27;
      pauVar38 = pauVar53;
      pauStack_1d0 = pauVar39;
      lVar36 = pdb_140a72010(&lStack_210,pauVar53,plStack_108,&uStack_1f8);
      plVar41 = plStack_1f0;
      uVar25 = CONCAT71((int7)(uVar25 >> 8),lVar36 != 0);
      if (lVar36 == 0) {
        if (plStack_1f0 != (longlong *)0x0) {
          pfStack_f8 = (float *)CONCAT44(pfStack_f8._4_4_,(int)uVar25);
          if (lStack_1e0 != 0) {
            auVar57 = *uStack_1f8;
            pauVar53 = uStack_1f8 + 1;
            uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar57[0xf] >> 7) << 0xf);
            pauVar39 = uStack_1f8;
            lVar36 = lStack_1e0;
            do {
              if ((short)uVar33 == 0) {
                do {
                  auVar57 = *pauVar53;
                  pauVar39 = pauVar39 + -0x28;
                  pauVar53 = pauVar53 + 1;
                  uVar33 = (ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar33 == 0);
              }
              uVar51 = 0;
              for (uVar9 = uVar33; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar51 = uVar51 + 1;
              }
              lVar46 = *(longlong *)((longlong)pauVar39 + (ulonglong)uVar51 * -0x28 + -0x20);
              if (lVar46 != 0) {
                pub_1406abac0(*(byte **)((longlong)pauVar39 + (ulonglong)uVar51 * -0x28 + -0x18),
                              lVar46 * 0x14,4);
              }
              uVar33 = uVar33 - 1 & uVar33;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
          }
          pauVar53 = pauStack_138;
          uVar31 = (longlong)plVar41 * 0x28 + 0x37U & 0xfffffffffffffff0;
          uVar29 = (longlong)plVar41 + uVar31 + 0x11;
          uVar25 = (ulonglong)pfStack_f8 & 0xffffffff;
          if (uVar29 != 0) {
            pub_1406abac0((byte *)((longlong)uStack_1f8 - uVar31),uVar29,0x10);
          }
        }
        lVar36 = *(longlong *)((longlong)pauVar35 + lVar24 + -0x78);
        if (lVar36 == 0) {
          uStack_d1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143066198);
        }
        lVar46 = *(longlong *)((longlong)pauVar35 + lVar24 + -0x80);
        uVar31 = *(ulonglong *)((longlong)pauVar35 + lVar24 + -0x90);
        uVar29 = uVar31;
        if (lVar46 + 1U < uVar31) {
          uVar29 = 0;
        }
        lVar42 = *(longlong *)((longlong)pauVar35 + lVar24 + -0x88);
        uVar29 = (lVar46 - uVar29) + 1;
        *(ulonglong *)((longlong)pauVar35 + lVar24 + -0x80) = uVar29;
        lVar36 = lVar36 + -1;
        *(longlong *)((longlong)pauVar35 + lVar24 + -0x78) = lVar36;
        pauVar39 = (undefined1 (*) [16])(lVar46 * 5);
        param_2 = *(undefined1 (**) [16])(lVar42 + lVar46 * 0x28);
        if (lVar36 != 0) {
          uVar47 = 0;
          if (uVar31 <= uVar29) {
            uVar47 = uVar31;
          }
          lVar36 = uVar29 - uVar47;
          uVar6 = *(undefined4 *)(lVar42 + 0x20 + lVar36 * 0x28);
          *(undefined8 *)((longlong)pauVar35 + lVar24 + -0x68) =
               *(undefined8 *)(lVar42 + lVar36 * 0x28);
          *(undefined4 *)((longlong)pauVar35 + lVar24 + -0x58) =
               *(undefined4 *)(lVar42 + 0x10 + lVar36 * 0x28);
          *(undefined8 *)((longlong)pauVar35 + lVar24 + -0x60) =
               *(undefined8 *)(lVar42 + 8 + lVar36 * 0x28);
          uVar33 = *(uint *)(lVar42 + 0x1c + lVar36 * 0x28);
          pauVar39 = (undefined1 (*) [16])(ulonglong)uVar33;
          *(uint *)((longlong)pauVar35 + lVar24 + -0x4c) = uVar33;
          *(undefined8 *)((longlong)pauVar35 + lVar24 + -0x54) =
               *(undefined8 *)(lVar42 + 0x14 + lVar36 * 0x28);
          *(undefined4 *)((longlong)pauVar35 + lVar24 + -0x48) = uVar6;
        }
        *(undefined4 *)pbStack_100 = (undefined4)uStack_e8;
        pauVar38 = *(undefined1 (**) [16])((longlong)pauVar35 + lVar24 + -0x70);
        uStack_1f8 = pauVar38;
        if (plStack_e0[3] != 0) {
          uStack_d1 = 1;
          uVar31 = pdb_1400af0a0(plStack_120,&uStack_1f8);
          pauVar7 = (undefined1 (*) [16])*plStack_e0;
          bVar55 = (byte)(uVar31 >> 0x39);
          auVar57 = ZEXT216(CONCAT11(bVar55,bVar55));
          auVar57 = pshuflw(auVar57,auVar57,0);
          lVar36 = 0;
          while( true ) {
            uVar31 = uVar31 & plStack_e0[1];
            pcVar3 = (char *)((longlong)*pauVar7 + uVar31);
            auVar71[0] = -(*pcVar3 == auVar57[0]);
            auVar71[1] = -(pcVar3[1] == auVar57[1]);
            auVar71[2] = -(pcVar3[2] == auVar57[2]);
            auVar71[3] = -(pcVar3[3] == auVar57[3]);
            auVar71[4] = -(pcVar3[4] == auVar57[4]);
            auVar71[5] = -(pcVar3[5] == auVar57[5]);
            auVar71[6] = -(pcVar3[6] == auVar57[6]);
            auVar71[7] = -(pcVar3[7] == auVar57[7]);
            auVar71[8] = -(pcVar3[8] == auVar57[0]);
            auVar71[9] = -(pcVar3[9] == auVar57[1]);
            auVar71[10] = -(pcVar3[10] == auVar57[2]);
            auVar71[0xb] = -(pcVar3[0xb] == auVar57[3]);
            auVar71[0xc] = -(pcVar3[0xc] == auVar57[4]);
            auVar71[0xd] = -(pcVar3[0xd] == auVar57[5]);
            auVar71[0xe] = -(pcVar3[0xe] == auVar57[6]);
            auVar71[0xf] = -(pcVar3[0xf] == auVar57[7]);
            uVar45 = (ushort)(SUB161(auVar71 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar71[0xf] >> 7) << 0xf;
            uVar33 = (uint)uVar45;
            while (pauVar39 = pauVar7, uVar45 != 0) {
              uVar51 = 0;
              for (uVar9 = uVar33; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar51 = uVar51 + 1;
              }
              uVar29 = uVar51 + uVar31 & plStack_e0[1];
              if (pauVar38 == *(undefined1 (**) [16])pauVar7[uVar29 * -2 + -2]) {
                uVar31 = *(ulonglong *)((longlong)pauVar7[uVar29 * -2 + -1] + 8);
                if (uVar31 == 0) goto LAB_140a70c50;
                pauVar38 = *(undefined1 (**) [16])pauVar7[uVar29 * -2 + -1];
                puVar50 = (undefined8 *)(*pauVar38 + 8);
                uVar47 = 0;
                pauVar37 = (undefined1 (*) [16])(uVar31 - 1);
                pauVar44 = pauVar38;
                goto LAB_140a70ba0;
              }
              uVar45 = (ushort)(uVar33 - 1) & (ushort)uVar33;
              uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar45);
            }
            auVar64[0] = -(*pcVar3 == unaff_XMM8_Ba);
            auVar64[1] = -(pcVar3[1] == unaff_XMM8_Bb);
            auVar64[2] = -(pcVar3[2] == unaff_XMM8_Bc);
            auVar64[3] = -(pcVar3[3] == unaff_XMM8_Bd);
            auVar64[4] = -(pcVar3[4] == unaff_XMM8_Be);
            auVar64[5] = -(pcVar3[5] == unaff_XMM8_Bf);
            auVar64[6] = -(pcVar3[6] == unaff_XMM8_Bg);
            auVar64[7] = -(pcVar3[7] == unaff_XMM8_Bh);
            auVar64[8] = -(pcVar3[8] == unaff_XMM8_Bi);
            auVar64[9] = -(pcVar3[9] == unaff_XMM8_Bj);
            auVar64[10] = -(pcVar3[10] == unaff_XMM8_Bk);
            auVar64[0xb] = -(pcVar3[0xb] == unaff_XMM8_Bl);
            auVar64[0xc] = -(pcVar3[0xc] == unaff_XMM8_Bm);
            auVar64[0xd] = -(pcVar3[0xd] == unaff_XMM8_Bn);
            auVar64[0xe] = -(pcVar3[0xe] == unaff_XMM8_Bo);
            auVar64[0xf] = -(pcVar3[0xf] == unaff_XMM8_Bp);
            if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar64 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar64 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar64 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar64 >> 0x3f,0) & 1) != 0) || (SUB161(auVar64 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') break;
            uVar31 = uVar31 + lVar36 + 0x10;
            lVar36 = lVar36 + 0x10;
          }
        }
      }
      else {
        param_2 = (undefined1 (*) [16])0x0;
        pauVar39 = pauVar38;
        if (plStack_1f0 != (longlong *)0x0) {
          pfStack_f8 = (float *)CONCAT44(pfStack_f8._4_4_,(int)uVar25);
          if (lStack_1e0 != 0) {
            auVar57 = *uStack_1f8;
            pauVar53 = uStack_1f8 + 1;
            uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar57[0xf] >> 7) << 0xf);
            pauVar39 = uStack_1f8;
            lVar36 = lStack_1e0;
            do {
              if ((short)uVar33 == 0) {
                do {
                  auVar57 = *pauVar53;
                  pauVar39 = pauVar39 + -0x28;
                  pauVar53 = pauVar53 + 1;
                  uVar33 = (ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar33 == 0);
              }
              uVar51 = 0;
              for (uVar9 = uVar33; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar51 = uVar51 + 1;
              }
              lVar46 = *(longlong *)((longlong)pauVar39 + (ulonglong)uVar51 * -0x28 + -0x20);
              if (lVar46 != 0) {
                pauVar38 = (undefined1 (*) [16])(lVar46 * 0x14);
                pub_1406abac0(*(byte **)((longlong)pauVar39 + (ulonglong)uVar51 * -0x28 + -0x18),
                              (ulonglong)pauVar38,4);
              }
              uVar33 = uVar33 - 1 & uVar33;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
          }
          pauVar53 = pauStack_138;
          uVar31 = (longlong)plVar41 * 0x28 + 0x37U & 0xfffffffffffffff0;
          param_2 = (undefined1 (*) [16])((longlong)plVar41 + uVar31 + 0x11);
          uVar25 = (ulonglong)pfStack_f8 & 0xffffffff;
          pauVar39 = pauVar38;
          if (param_2 != (undefined1 (*) [16])0x0) {
            pauVar39 = param_2;
            pub_1406abac0((byte *)((longlong)uStack_1f8 - uVar31),(ulonglong)param_2,0x10);
          }
        }
      }
      goto LAB_140a70c50;
    }
    if (lVar36 == 0) {
LAB_140a70500:
      uStack_d1 = 1;
      pdb_1417b7c60(&pauStack_258,*(undefined8 *)((longlong)pauVar35 + lVar24 + -0x70));
    }
  }
  plStack_e0 = plStack_250;
  if (plStack_250 == (longlong *)0x0) {
    uStack_e8 = 0;
  }
  else {
    uVar25 = (longlong)plStack_250 * 8 + 0x17U & 0xfffffffffffffff0;
    plStack_108 = (longlong *)((longlong)plStack_250 + uVar25 + 0x11);
    pbStack_100 = (byte *)((longlong)pauStack_258 - uVar25);
    uStack_e8 = 0x10;
  }
  if (lStack_240 != 0) {
    auVar57 = *pauStack_258;
    uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar57[0xf] >> 7) << 0xf);
    pauVar53 = pauStack_258 + 1;
    param_2 = (undefined1 (*) [16])(puStack_110 + 4);
    ppauVar40 = &pauStack_2b8;
    pauVar35 = pauStack_258;
    lVar24 = lStack_240;
    do {
      if ((short)uVar33 == 0) {
        do {
          auVar57 = *pauVar53;
          pauVar35 = pauVar35 + -8;
          pauVar53 = pauVar53 + 1;
          uVar33 = (ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar33 == 0);
      }
      param_3 = (undefined1 (*) [16])(ulonglong)uVar33;
      iVar11 = 0;
      for (uVar51 = uVar33; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x80000000) {
        iVar11 = iVar11 + 1;
      }
      pauStack_2b8 = *(undefined1 (**) [16])
                      ((longlong)pauVar35 + (-8 - (ulonglong)(uint)(iVar11 << 3)));
      *puStack_128 = uStack_ec;
      uVar32 = pdb_1400af0a0(param_2,ppauVar40);
      pdb_140caa470(&uStack_1f8,puStack_110,uVar32,ppauVar40);
      if ((!SBORROW8(0,(longlong)plStack_1f0)) && (plStack_1f0 != (longlong *)0x0)) {
        pub_1406abac0(pbStack_1e8,(longlong)plStack_1f0 * 0x28,8);
      }
      uVar33 = uVar33 - 1 & uVar33;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  param_1 = (undefined8 *)0x0;
  if ((plStack_e0 != (longlong *)0x0) && (plStack_108 != (longlong *)0x0)) {
    pub_1406abac0(pbStack_100,(ulonglong)plStack_108,uStack_e8);
  }
  pauVar35 = (undefined1 (*) [16])0x0;
  if (plStack_280 != (longlong *)0x0) {
    uVar25 = (longlong)plStack_280 * 8 + 0x17U & 0xfffffffffffffff0;
    pauVar35 = (undefined1 (*) [16])((longlong)plStack_280 + uVar25 + 0x11);
    if (pauVar35 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)((longlong)pauStack_288 - uVar25),(ulonglong)pauVar35,0x10);
    }
  }
  if (lStack_160 == 0) {
    return;
  }
  plVar27 = (longlong *)pdb_140e97000();
  if ((char)plVar27[0xd] != '\x01') {
    pauVar35 = (undefined1 (*) [16])0x0;
    plVar27 = (longlong *)pdb_142d8ec20(plVar27);
    if (plVar27 == (longlong *)0x0) goto LAB_140a71360;
  }
  if (*plVar27 == 0) {
    *plVar27 = -1;
    plStack_e0 = plVar27;
    pdb_140e95370(plVar27 + 1,uStack_158);
    *plStack_e0 = *plStack_e0 + 1;
    return;
  }
LAB_140a712d7:
  pdb_142dc8090(&UNK_143326a50);
LAB_140a712e4:
  pauVar53 = (undefined1 (*) [16])pdb_140f4fd10();
  *ppauVar40 = pauVar53;
  ppauVar40[1] = pauVar35;
  *(undefined1 *)(ppauVar40 + 2) = 1;
  goto LAB_140a6fba0;
LAB_140a7034f:
  uVar25 = uVar25 & plStack_e0[1];
  pcVar3 = (char *)(*plStack_e0 + uVar25);
  auVar68[0] = -(*pcVar3 == auVar57[0]);
  auVar68[1] = -(pcVar3[1] == auVar57[1]);
  auVar68[2] = -(pcVar3[2] == auVar57[2]);
  auVar68[3] = -(pcVar3[3] == auVar57[3]);
  auVar68[4] = -(pcVar3[4] == auVar57[4]);
  auVar68[5] = -(pcVar3[5] == auVar57[5]);
  auVar68[6] = -(pcVar3[6] == auVar57[6]);
  auVar68[7] = -(pcVar3[7] == auVar57[7]);
  auVar68[8] = -(pcVar3[8] == auVar57[0]);
  auVar68[9] = -(pcVar3[9] == auVar57[1]);
  auVar68[10] = -(pcVar3[10] == auVar57[2]);
  auVar68[0xb] = -(pcVar3[0xb] == auVar57[3]);
  auVar68[0xc] = -(pcVar3[0xc] == auVar57[4]);
  auVar68[0xd] = -(pcVar3[0xd] == auVar57[5]);
  auVar68[0xe] = -(pcVar3[0xe] == auVar57[6]);
  auVar68[0xf] = -(pcVar3[0xf] == auVar57[7]);
  uVar45 = (ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf;
  uVar51 = (uint)uVar45;
  while (uVar45 != 0) {
    uVar9 = 0;
    for (uVar10 = uVar51; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    lVar46 = *plStack_e0 + (uVar9 + uVar25 & plStack_e0[1]) * -0x20;
    if (param_2 == *(undefined1 (**) [16])(lVar46 + -0x20)) {
      *(undefined8 *)(lVar46 + -8) = 0;
      goto LAB_140a703d0;
    }
    uVar45 = (ushort)(uVar51 - 1) & (ushort)uVar51;
    uVar51 = CONCAT22((short)(uVar51 - 1 >> 0x10),uVar45);
  }
  auVar61[0] = -(*pcVar3 == -1);
  auVar61[1] = -(pcVar3[1] == -1);
  auVar61[2] = -(pcVar3[2] == -1);
  auVar61[3] = -(pcVar3[3] == -1);
  auVar61[4] = -(pcVar3[4] == -1);
  auVar61[5] = -(pcVar3[5] == -1);
  auVar61[6] = -(pcVar3[6] == -1);
  auVar61[7] = -(pcVar3[7] == -1);
  auVar61[8] = -(pcVar3[8] == -1);
  auVar61[9] = -(pcVar3[9] == -1);
  auVar61[10] = -(pcVar3[10] == -1);
  auVar61[0xb] = -(pcVar3[0xb] == -1);
  auVar61[0xc] = -(pcVar3[0xc] == -1);
  auVar61[0xd] = -(pcVar3[0xd] == -1);
  auVar61[0xe] = -(pcVar3[0xe] == -1);
  auVar61[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar61 >> 7,0) & 1) != 0 || (SUB161(auVar61 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar61 >> 0x17,0) & 1) != 0) || (SUB161(auVar61 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar61 >> 0x27,0) & 1) != 0) || (SUB161(auVar61 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar61 >> 0x37,0) & 1) != 0) || (SUB161(auVar61 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar61 >> 0x47,0) & 1) != 0) || (SUB161(auVar61 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar61 >> 0x57,0) & 1) != 0) || (SUB161(auVar61 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar61 >> 0x67,0) & 1) != 0) || (SUB161(auVar61 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar61 >> 0x77,0) & 1) != 0) || auVar61[0xf] < '\0') goto LAB_140a703d0;
  uVar25 = uVar25 + lVar36 + 0x10;
  lVar36 = lVar36 + 0x10;
  goto LAB_140a7034f;
LAB_140a70a50:
  uVar31 = uVar31 - 1;
  pauVar38 = (undefined1 (*) [16])(pauVar38[6] + 8);
  if (((undefined1 (*) [16])puVar50[-1] != param_2) && ((undefined1 (*) [16])*puVar50 != param_2)) {
    uVar29 = uVar29 + 1;
    puVar50 = puVar50 + 0xd;
    if (uVar25 == uVar29) goto LAB_140a70710;
    goto LAB_140a70a50;
  }
  if (uVar29 + 1 < uVar25) {
    do {
      if ((*(undefined1 (**) [16])*pauVar38 != param_2) &&
         (*(undefined1 (**) [16])(*pauVar38 + 8) != param_2)) {
        lVar36 = uVar29 * 0x68;
        *(undefined8 *)((longlong)pauVar39 + lVar36 + 0x60) = *(undefined8 *)pauVar38[6];
        uVar32 = *(undefined8 *)(pauVar38[5] + 8);
        puVar50 = (undefined8 *)((longlong)pauVar39 + lVar36 + 0x50);
        *puVar50 = *(undefined8 *)pauVar38[5];
        puVar50[1] = uVar32;
        uVar32 = *(undefined8 *)(pauVar38[4] + 8);
        puVar50 = (undefined8 *)((longlong)pauVar39 + lVar36 + 0x40);
        *puVar50 = *(undefined8 *)pauVar38[4];
        puVar50[1] = uVar32;
        auVar57 = *pauVar38;
        uVar32 = *(undefined8 *)pauVar38[1];
        uVar12 = *(undefined8 *)(pauVar38[1] + 8);
        uVar13 = *(undefined8 *)pauVar38[2];
        uVar14 = *(undefined8 *)(pauVar38[2] + 8);
        uVar15 = *(undefined8 *)(pauVar38[3] + 8);
        puVar50 = (undefined8 *)((longlong)pauVar39 + lVar36 + 0x30);
        *puVar50 = *(undefined8 *)pauVar38[3];
        puVar50[1] = uVar15;
        puVar50 = (undefined8 *)((longlong)pauVar39 + lVar36 + 0x20);
        *puVar50 = uVar13;
        puVar50[1] = uVar14;
        puVar50 = (undefined8 *)((longlong)pauVar39 + lVar36 + 0x10);
        *puVar50 = uVar32;
        puVar50[1] = uVar12;
        *(undefined1 (*) [16])((longlong)pauVar39 + lVar36) = auVar57;
        uVar29 = uVar29 + 1;
      }
      pauVar38 = (undefined1 (*) [16])(pauVar38[6] + 8);
      uVar31 = uVar31 - 1;
    } while (uVar31 != 0);
  }
  *(ulonglong *)(lVar46 + -8) = uVar29;
  goto LAB_140a70710;
LAB_140a70660:
  uVar31 = uVar31 - 1;
  pauVar38 = (undefined1 (*) [16])(pauVar38[6] + 8);
  if (((undefined1 (*) [16])puVar50[-1] != param_2) && ((undefined1 (*) [16])*puVar50 != param_2)) {
    uVar29 = uVar29 + 1;
    puVar50 = puVar50 + 0xd;
    if (uVar25 == uVar29) goto LAB_140a70710;
    goto LAB_140a70660;
  }
  if (uVar29 + 1 < uVar25) {
    do {
      if ((*(undefined1 (**) [16])*pauVar38 != param_2) &&
         (*(undefined1 (**) [16])(*pauVar38 + 8) != param_2)) {
        lVar36 = uVar29 * 0x68;
        *(undefined8 *)((longlong)pauVar39 + lVar36 + 0x60) = *(undefined8 *)pauVar38[6];
        uVar32 = *(undefined8 *)(pauVar38[5] + 8);
        puVar50 = (undefined8 *)((longlong)pauVar39 + lVar36 + 0x50);
        *puVar50 = *(undefined8 *)pauVar38[5];
        puVar50[1] = uVar32;
        uVar32 = *(undefined8 *)(pauVar38[4] + 8);
        puVar50 = (undefined8 *)((longlong)pauVar39 + lVar36 + 0x40);
        *puVar50 = *(undefined8 *)pauVar38[4];
        puVar50[1] = uVar32;
        auVar57 = *pauVar38;
        uVar32 = *(undefined8 *)pauVar38[1];
        uVar12 = *(undefined8 *)(pauVar38[1] + 8);
        uVar13 = *(undefined8 *)pauVar38[2];
        uVar14 = *(undefined8 *)(pauVar38[2] + 8);
        uVar15 = *(undefined8 *)(pauVar38[3] + 8);
        puVar50 = (undefined8 *)((longlong)pauVar39 + lVar36 + 0x30);
        *puVar50 = *(undefined8 *)pauVar38[3];
        puVar50[1] = uVar15;
        puVar50 = (undefined8 *)((longlong)pauVar39 + lVar36 + 0x20);
        *puVar50 = uVar13;
        puVar50[1] = uVar14;
        puVar50 = (undefined8 *)((longlong)pauVar39 + lVar36 + 0x10);
        *puVar50 = uVar32;
        puVar50[1] = uVar12;
        *(undefined1 (*) [16])((longlong)pauVar39 + lVar36) = auVar57;
        uVar29 = uVar29 + 1;
      }
      pauVar38 = (undefined1 (*) [16])(pauVar38[6] + 8);
      uVar31 = uVar31 - 1;
    } while (uVar31 != 0);
  }
  *(ulonglong *)(lVar46 + -8) = uVar29;
  goto LAB_140a70710;
LAB_140a70ba0:
  pauVar44 = (undefined1 (*) [16])(pauVar44[6] + 8);
  if (((undefined1 (*) [16])puVar50[-1] != param_2) && ((undefined1 (*) [16])*puVar50 != param_2)) {
    uVar47 = uVar47 + 1;
    puVar50 = puVar50 + 0xd;
    pauVar39 = (undefined1 (*) [16])((longlong)pauVar37[-1] + 0xf);
    pauVar37 = pauVar39;
    if (uVar31 == uVar47) goto LAB_140a70c50;
    goto LAB_140a70ba0;
  }
  pauVar39 = pauVar37;
  if (uVar47 + 1 < uVar31) {
    do {
      if ((*(undefined1 (**) [16])*pauVar44 != param_2) &&
         (*(undefined1 (**) [16])(*pauVar44 + 8) != param_2)) {
        lVar36 = uVar47 * 0x68;
        *(undefined8 *)((longlong)pauVar38 + lVar36 + 0x60) = *(undefined8 *)pauVar44[6];
        uVar32 = *(undefined8 *)(pauVar44[5] + 8);
        puVar50 = (undefined8 *)((longlong)pauVar38 + lVar36 + 0x50);
        *puVar50 = *(undefined8 *)pauVar44[5];
        puVar50[1] = uVar32;
        uVar32 = *(undefined8 *)(pauVar44[4] + 8);
        puVar50 = (undefined8 *)((longlong)pauVar38 + lVar36 + 0x40);
        *puVar50 = *(undefined8 *)pauVar44[4];
        puVar50[1] = uVar32;
        auVar57 = *pauVar44;
        uVar32 = *(undefined8 *)pauVar44[1];
        uVar12 = *(undefined8 *)(pauVar44[1] + 8);
        uVar13 = *(undefined8 *)pauVar44[2];
        uVar14 = *(undefined8 *)(pauVar44[2] + 8);
        uVar15 = *(undefined8 *)(pauVar44[3] + 8);
        puVar50 = (undefined8 *)((longlong)pauVar38 + lVar36 + 0x30);
        *puVar50 = *(undefined8 *)pauVar44[3];
        puVar50[1] = uVar15;
        puVar50 = (undefined8 *)((longlong)pauVar38 + lVar36 + 0x20);
        *puVar50 = uVar13;
        puVar50[1] = uVar14;
        puVar50 = (undefined8 *)((longlong)pauVar38 + lVar36 + 0x10);
        *puVar50 = uVar32;
        puVar50[1] = uVar12;
        *(undefined1 (*) [16])((longlong)pauVar38 + lVar36) = auVar57;
        uVar47 = uVar47 + 1;
      }
      pauVar44 = (undefined1 (*) [16])(pauVar44[6] + 8);
      pauVar37 = (undefined1 (*) [16])((longlong)pauVar37[-1] + 0xf);
      pauVar39 = (undefined1 (*) [16])0x0;
    } while (pauVar37 != (undefined1 (*) [16])0x0);
  }
  *(ulonglong *)((longlong)pauVar7[uVar29 * -2 + -1] + 8) = uVar47;
  goto LAB_140a70c50;
LAB_140a6fe50:
  pfVar28 = pfStack_140;
  pfVar34 = pfStack_f8;
  if (lVar46 != 0) {
    if ((short)uVar33 == 0) {
      do {
        auVar57 = *pauVar53;
        param_3 = param_3 + -0x98;
        pauVar53 = pauVar53 + 1;
        uVar33 = (ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar33 == 0);
    }
    uVar51 = 0;
    for (uVar9 = uVar33; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar51 = uVar51 + 1;
    }
    lVar54 = (ulonglong)uVar51 * -0x98;
    lVar42 = *(longlong *)((longlong)param_3 + lVar54 + -0x78);
    if (lVar42 == 0) {
      uStack_d2 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143066180);
    }
    uVar29 = (lVar42 + *(longlong *)((longlong)param_3 + lVar54 + -0x80)) - 1;
    uVar25 = *(ulonglong *)((longlong)param_3 + lVar54 + -0x90);
    lVar42 = *(longlong *)((longlong)param_3 + lVar54 + -0x88);
    uVar31 = 0;
    if (uVar25 <= uVar29) {
      uVar31 = uVar25;
    }
    lVar30 = uVar29 - uVar31;
    if (*(int *)(lVar24 + -0x50) == 1) {
      uStack_d2 = 1;
      cVar23 = pdb_140df1700(lVar36,*(undefined4 *)(lVar42 + 8 + lVar30 * 0x28),
                             *(undefined4 *)(lVar42 + 0x10 + lVar30 * 0x28));
    }
    else {
      uStack_d2 = 1;
      cVar23 = pdb_140def450(lVar36);
    }
    uVar33 = uVar33 - 1 & uVar33;
    lVar46 = lVar46 + -1;
    if (cVar23 == '\0') goto code_r0x000140a6ff0e;
    goto LAB_140a6ff58;
  }
  goto LAB_140a70000;
code_r0x000140a6ff0e:
  if (*(int *)(lVar24 + -0x50) == 1) {
    uStack_d2 = 1;
    cVar23 = pdb_140df1700(lVar36,*(undefined4 *)((longlong)param_3 + lVar54 + -0x60),
                           *(undefined4 *)((longlong)param_3 + lVar54 + -0x58));
  }
  else {
    uStack_d2 = 1;
    cVar23 = pdb_140def450(lVar36);
  }
  if (cVar23 != '\0') {
LAB_140a6ff58:
    uStack_d2 = 1;
    cVar23 = pdb_1417b7c60(&pauStack_258,*(undefined8 *)((longlong)param_3 + lVar54 + -0x70));
    if (cVar23 == '\0') {
      *(undefined4 *)pbStack_100 = (undefined4)uStack_e8;
      pauVar35 = *(undefined1 (**) [16])((longlong)param_3 + lVar54 + -0x70);
      uStack_1f8 = pauVar35;
      if (plStack_e0[3] != 0) {
        uStack_d2 = 1;
        uVar25 = pdb_1400af0a0(plStack_120,&uStack_1f8);
        bVar55 = (byte)(uVar25 >> 0x39);
        auVar57 = ZEXT216(CONCAT11(bVar55,bVar55));
        auVar57 = pshuflw(auVar57,auVar57,0);
        lVar42 = 0;
        while( true ) {
          uVar25 = uVar25 & plStack_e0[1];
          pcVar3 = (char *)(*plStack_e0 + uVar25);
          auVar66[0] = -(*pcVar3 == auVar57[0]);
          auVar66[1] = -(pcVar3[1] == auVar57[1]);
          auVar66[2] = -(pcVar3[2] == auVar57[2]);
          auVar66[3] = -(pcVar3[3] == auVar57[3]);
          auVar66[4] = -(pcVar3[4] == auVar57[4]);
          auVar66[5] = -(pcVar3[5] == auVar57[5]);
          auVar66[6] = -(pcVar3[6] == auVar57[6]);
          auVar66[7] = -(pcVar3[7] == auVar57[7]);
          auVar66[8] = -(pcVar3[8] == auVar57[0]);
          auVar66[9] = -(pcVar3[9] == auVar57[1]);
          auVar66[10] = -(pcVar3[10] == auVar57[2]);
          auVar66[0xb] = -(pcVar3[0xb] == auVar57[3]);
          auVar66[0xc] = -(pcVar3[0xc] == auVar57[4]);
          auVar66[0xd] = -(pcVar3[0xd] == auVar57[5]);
          auVar66[0xe] = -(pcVar3[0xe] == auVar57[6]);
          auVar66[0xf] = -(pcVar3[0xf] == auVar57[7]);
          uVar45 = (ushort)(SUB161(auVar66 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar66[0xf] >> 7) << 0xf;
          uVar51 = (uint)uVar45;
          while (uVar45 != 0) {
            uVar9 = 0;
            for (uVar10 = uVar51; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            lVar54 = *plStack_e0 + (uVar9 + uVar25 & plStack_e0[1]) * -0x20;
            if (pauVar35 == *(undefined1 (**) [16])(lVar54 + -0x20)) {
              *(undefined8 *)(lVar54 + -8) = 0;
              goto LAB_140a6fe50;
            }
            uVar45 = (ushort)(uVar51 - 1) & (ushort)uVar51;
            uVar51 = CONCAT22((short)(uVar51 - 1 >> 0x10),uVar45);
          }
          auVar59[0] = -(*pcVar3 == cVar22);
          auVar59[1] = -(pcVar3[1] == cVar72);
          auVar59[2] = -(pcVar3[2] == cVar73);
          auVar59[3] = -(pcVar3[3] == cVar74);
          auVar59[4] = -(pcVar3[4] == cVar75);
          auVar59[5] = -(pcVar3[5] == cVar76);
          auVar59[6] = -(pcVar3[6] == cVar77);
          auVar59[7] = -(pcVar3[7] == cVar78);
          auVar59[8] = -(pcVar3[8] == cVar79);
          auVar59[9] = -(pcVar3[9] == cVar80);
          auVar59[10] = -(pcVar3[10] == cVar81);
          auVar59[0xb] = -(pcVar3[0xb] == cVar82);
          auVar59[0xc] = -(pcVar3[0xc] == cVar83);
          auVar59[0xd] = -(pcVar3[0xd] == cVar84);
          auVar59[0xe] = -(pcVar3[0xe] == cVar85);
          auVar59[0xf] = -(pcVar3[0xf] == cVar86);
          if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar59 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar59 >> 0x2f,0) & 1) != 0) || (SUB161(auVar59 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x47,0) & 1) != 0) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
          uVar25 = uVar25 + lVar42 + 0x10;
          lVar42 = lVar42 + 0x10;
        }
      }
    }
  }
  goto LAB_140a6fe50;
}

