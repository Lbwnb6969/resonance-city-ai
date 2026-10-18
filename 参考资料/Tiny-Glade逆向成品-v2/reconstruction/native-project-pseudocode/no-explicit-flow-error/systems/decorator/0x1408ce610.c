// VA 0x1408ce610, PDB extent 7879 bytes
// system_decorator::decorator_visual::cottage_balcony_door::generate_cottage_balcony_doors
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_balcony_door.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_balcony_door::generate_cottage_balcony_doors
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_balcony_door.rs
   Extent: 7879 */

void pdb_1408ce610(undefined1 (*param_1) [16],longlong *param_2,undefined8 *param_3,
                  ulonglong param_4,undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  byte *pbVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  byte bVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  undefined1 auVar12 [12];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  char cVar20;
  byte bVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  longlong *unaff_RSI;
  undefined *puVar36;
  undefined *puVar37;
  ushort uVar38;
  longlong lVar39;
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  undefined4 extraout_XMM0_Da;
  undefined4 uVar42;
  float extraout_XMM0_Da_00;
  float fVar43;
  undefined4 extraout_XMM0_Da_01;
  float fVar45;
  float fVar46;
  undefined1 auVar44 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  char unaff_XMM10_Ba;
  char unaff_XMM10_Bb;
  char unaff_XMM10_Bc;
  char unaff_XMM10_Bd;
  char unaff_XMM10_Be;
  char unaff_XMM10_Bf;
  char unaff_XMM10_Bg;
  char unaff_XMM10_Bh;
  char unaff_XMM10_Bi;
  char unaff_XMM10_Bj;
  char unaff_XMM10_Bk;
  char unaff_XMM10_Bl;
  char unaff_XMM10_Bm;
  char unaff_XMM10_Bn;
  char unaff_XMM10_Bo;
  char unaff_XMM10_Bp;
  float fVar69;
  undefined8 uVar70;
  undefined8 uStack_2b0;
  longlong *plStack_2a8;
  undefined8 uStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  undefined4 *puStack_288;
  undefined8 uStack_280;
  longlong *plStack_278;
  longlong *plStack_270;
  longlong *plStack_268;
  longlong lStack_260;
  undefined8 uStack_258;
  longlong lStack_250;
  undefined1 (*pauStack_248) [16];
  undefined4 uStack_23c;
  float fStack_238;
  undefined4 uStack_234;
  ulonglong uStack_230;
  ulonglong uStack_228;
  longlong *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_204;
  longlong *plStack_200;
  longlong lStack_1f8;
  undefined1 (*pauStack_1f0) [16];
  ulonglong uStack_1e8;
  longlong lStack_1e0;
  float fStack_1d8;
  undefined8 uStack_1d0;
  longlong lStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong lStack_1a8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  longlong lStack_180;
  ulonglong uStack_178;
  longlong lStack_170;
  char cStack_168;
  char cStack_167;
  uint5 uStack_166;
  undefined1 uStack_161;
  float fStack_160;
  uint uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  float fStack_140;
  float fStack_13c;
  longlong lStack_138;
  ushort uStack_130;
  undefined2 uStack_12e;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *plStack_118;
  longlong *plStack_110;
  undefined1 (*pauStack_108) [16];
  longlong *plStack_100;
  char cStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar30 = param_2;
  cStack_f4 = pdb_140e94b40();
  pauVar41 = param_1;
  if (cStack_f4 == '\0') goto LAB_1408ce81e;
  pauVar40 = (undefined1 (*) [16])0x58;
  lVar23 = pdb_1408d04e0(0x58);
  unaff_RSI = (longlong *)&UNK_143018698;
  if (lVar23 == 1) {
    if ((longlong *)0x58 < plVar30) {
      pdb_142dc8070(&UNK_143018698,0x58,0,plVar30,&UNK_143018770);
LAB_1408d0095:
      pdb_142dc8070(&UNK_143018698,0x58);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar24 = pdb_1408d04e0(plVar30);
    if ((uVar24 & 1) != 0) {
      if ((undefined *)0x58 < (undefined *)((longlong)plVar30 + 2)) goto LAB_1408d0095;
      pauVar40 = (undefined1 (*) [16])(0x56 - (longlong)plVar30);
      unaff_RSI = (longlong *)((longlong)plVar30 + 0x14301869a);
    }
  }
  puVar36 = &UNK_1430184b8;
  pauVar41 = (undefined1 (*) [16])&UNK_143018473;
  do {
    bVar21 = puVar36[-1];
    uVar22 = (uint)(char)bVar21;
    pauStack_108 = param_1;
    if ((char)bVar21 < '\0') {
      bVar7 = puVar36[-2];
      if ((char)bVar7 < -0x40) {
        bVar8 = puVar36[-3];
        if ((char)bVar8 < -0x40) {
          pbVar1 = puVar36 + -4;
          puVar36 = puVar36 + -4;
          uVar22 = bVar8 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar36 = puVar36 + -3;
          uVar22 = bVar8 & 0xf;
        }
        uVar22 = bVar7 & 0x3f | uVar22 << 6;
      }
      else {
        puVar36 = puVar36 + -2;
        uVar22 = bVar7 & 0x1f;
      }
      uVar22 = (uint)(bVar21 & 0x3f) | uVar22 << 6;
      if (uVar22 != 0x5c) goto LAB_1408ce784;
LAB_1408ce796:
      puVar37 = puVar36 + -0x143018472;
      if ((undefined *)0x45 < puVar37) {
        pdb_142dc8070(&UNK_143018473,0x45,puVar37,0x45,&UNK_143018750);
LAB_1408d003c:
        uStack_148 = &cStack_168;
        fStack_140 = 12.578812;
        fStack_13c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14330e2c6,&uStack_148,&UNK_14330e310);
      }
      lVar23 = 0x45 - (longlong)puVar37;
      pauVar41 = (undefined1 (*) [16])(puVar36 + 1);
      goto LAB_1408ce7b9;
    }
    puVar36 = puVar36 + -1;
    if (uVar22 == 0x5c) goto LAB_1408ce796;
LAB_1408ce784:
    if (uVar22 == 0x2f) goto LAB_1408ce796;
  } while (puVar36 != &UNK_143018473);
  lVar23 = 0x45;
LAB_1408ce7b9:
  plVar25 = (longlong *)pdb_140e97000();
  if ((char)plVar25[0xd] != '\x01') goto LAB_1408cffab;
  do {
    if (*plVar25 == 0) {
      *plVar25 = -1;
      plVar30 = unaff_RSI;
      plStack_110 = plVar25;
      uStack_210 = pdb_140e94f10(plVar25 + 1,unaff_RSI,pauVar40,pauVar41,lVar23,1,0);
      *plStack_110 = *plStack_110 + 1;
      pauVar41 = pauStack_108;
LAB_1408ce81e:
      uStack_2b0 = pdb_140c47770(param_4);
      plStack_2a8 = plVar30;
      uStack_1d0 = uStack_2b0;
      plStack_110 = plVar30;
      pdb_140a2fb40(&uStack_148,*param_3);
      fVar17 = _UNK_142e36f64;
      fVar16 = _DAT_142e36f60;
      lVar23 = CONCAT44(uStack_148._4_4_,(float)uStack_148);
      pauVar40 = (undefined1 (*) [16])CONCAT44(fStack_13c,fStack_140);
      param_4 = (ulonglong)uStack_130;
      uStack_204 = *(undefined4 *)((longlong)param_5 + 0x1c);
      uStack_280 = *param_5;
      puStack_288 = (undefined4 *)param_5[2];
      plStack_278 = (longlong *)*param_2;
      plStack_270 = plStack_278 + 4;
      lStack_250 = *(longlong *)*pauVar41 + 0x98;
      plStack_220 = plStack_110 + 4;
      uStack_218 = *param_6;
      uStack_258 = *param_7;
      iVar11 = -(uint)(CONCAT13(unaff_XMM10_Bd,
                                CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba))) ==
                      CONCAT13(unaff_XMM10_Bd,
                               CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba))));
      unaff_XMM10_Ba = (char)iVar11;
      unaff_XMM10_Bb = (char)((uint)iVar11 >> 8);
      unaff_XMM10_Bc = (char)((uint)iVar11 >> 0x10);
      unaff_XMM10_Bd = (char)((uint)iVar11 >> 0x18);
      iVar11 = -(uint)(CONCAT13(unaff_XMM10_Bh,
                                CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be))) ==
                      CONCAT13(unaff_XMM10_Bh,
                               CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be))));
      unaff_XMM10_Be = (char)iVar11;
      unaff_XMM10_Bf = (char)((uint)iVar11 >> 8);
      unaff_XMM10_Bg = (char)((uint)iVar11 >> 0x10);
      unaff_XMM10_Bh = (char)((uint)iVar11 >> 0x18);
      iVar11 = -(uint)(CONCAT13(unaff_XMM10_Bl,
                                CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi))) ==
                      CONCAT13(unaff_XMM10_Bl,
                               CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi))));
      unaff_XMM10_Bi = (char)iVar11;
      unaff_XMM10_Bj = (char)((uint)iVar11 >> 8);
      unaff_XMM10_Bk = (char)((uint)iVar11 >> 0x10);
      unaff_XMM10_Bl = (char)((uint)iVar11 >> 0x18);
      iVar11 = -(uint)(CONCAT13(unaff_XMM10_Bp,
                                CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm))) ==
                      CONCAT13(unaff_XMM10_Bp,
                               CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm))));
      unaff_XMM10_Bm = (char)iVar11;
      unaff_XMM10_Bn = (char)((uint)iVar11 >> 8);
      unaff_XMM10_Bo = (char)((uint)iVar11 >> 0x10);
      unaff_XMM10_Bp = (char)((uint)iVar11 >> 0x18);
      plStack_268 = plStack_110 + 10;
      lVar32 = CONCAT44(uStack_124,uStack_128);
      if (CONCAT44(uStack_124,uStack_128) != 0) {
        do {
          lStack_260 = lVar32 + -1;
          uVar22 = (uint)param_4;
          if ((short)param_4 == 0) {
            do {
              auVar44 = *pauVar40;
              lVar23 = lVar23 + -0x980;
              pauVar40 = pauVar40 + 1;
              uVar22 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
                                (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar22 == 0);
          }
          uVar35 = 0;
          for (uVar10 = uVar22; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar35 = uVar35 + 1;
          }
          lStack_298 = *(longlong *)(lVar23 + ((ulonglong)uVar35 * -0x13 + -0x13) * 8);
          lStack_1c8 = lStack_298;
          pdb_140c3ba10(&uStack_148,lVar23 + ((ulonglong)uVar35 * -0x13 + -0x12) * 8);
          param_4 = (ulonglong)(uVar22 - 1 & uVar22);
          param_2 = (longlong *)CONCAT44(uStack_148._4_4_,(float)uStack_148);
          pauVar41 = (undefined1 (*) [16])CONCAT44(fStack_13c,fStack_140);
          unaff_RSI = (longlong *)(ulonglong)uStack_130;
          lStack_1f8 = CONCAT44(uStack_124,uStack_128);
          lStack_180 = CONCAT44(uStack_11c,uStack_120);
          lStack_290 = lStack_180 + 0x50;
LAB_1408ce9aa:
          if (lStack_1f8 != 0) {
            if ((short)unaff_RSI == 0) {
              do {
                auVar44 = *pauVar41;
                param_2 = param_2 + -8;
                pauVar41 = pauVar41 + 1;
                uVar22 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
                                  (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) ^ 0xffff;
                unaff_RSI = (longlong *)(ulonglong)uVar22;
              } while (uVar22 == 0);
            }
            iVar11 = 0;
            uVar35 = (uint)unaff_RSI;
            for (uVar22 = uVar35; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
              iVar11 = iVar11 + 1;
            }
            uStack_148._0_4_ = *(float *)((longlong)param_2 + (-4 - (ulonglong)(uint)(iVar11 << 2)))
            ;
            uStack_178 = CONCAT44(uStack_178._4_4_,(float)uStack_148);
            if (*(longlong *)(lStack_180 + 0x48) != 0) {
              unaff_RSI = (longlong *)(ulonglong)(uVar35 - 1 & uVar35);
              lVar32 = lStack_1f8 + -1;
              uVar24 = pdb_1400aede0(lStack_290,&uStack_148);
              pauStack_108 = *(undefined1 (**) [16])(lStack_180 + 0x30);
              bVar21 = (byte)(uVar24 >> 0x39);
              auVar44 = ZEXT216(CONCAT11(bVar21,bVar21));
              auVar44 = pshuflw(auVar44,auVar44,0);
              lVar39 = 0;
              while( true ) {
                uVar24 = uVar24 & *(ulonglong *)(lStack_180 + 0x38);
                auVar6 = *(undefined1 (*) [16])(*pauStack_108 + uVar24);
                auVar56[0] = -(auVar6[0] == auVar44[0]);
                auVar56[1] = -(auVar6[1] == auVar44[1]);
                auVar56[2] = -(auVar6[2] == auVar44[2]);
                auVar56[3] = -(auVar6[3] == auVar44[3]);
                auVar56[4] = -(auVar6[4] == auVar44[4]);
                auVar56[5] = -(auVar6[5] == auVar44[5]);
                auVar56[6] = -(auVar6[6] == auVar44[6]);
                auVar56[7] = -(auVar6[7] == auVar44[7]);
                auVar56[8] = -(auVar6[8] == auVar44[0]);
                auVar56[9] = -(auVar6[9] == auVar44[1]);
                auVar56[10] = -(auVar6[10] == auVar44[2]);
                auVar56[0xb] = -(auVar6[0xb] == auVar44[3]);
                auVar56[0xc] = -(auVar6[0xc] == auVar44[4]);
                auVar56[0xd] = -(auVar6[0xd] == auVar44[5]);
                auVar56[0xe] = -(auVar6[0xe] == auVar44[6]);
                auVar56[0xf] = -(auVar6[0xf] == auVar44[7]);
                uVar38 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar56[0xf] >> 7) << 0xf;
                uVar22 = (uint)uVar38;
                while (uVar38 != 0) {
                  uVar35 = 0;
                  for (uVar10 = uVar22; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                    uVar35 = uVar35 + 1;
                  }
                  lVar33 = (uVar35 + uVar24 & *(ulonglong *)(lStack_180 + 0x38)) * -0x68;
                  uVar27 = uStack_178 & 0xffffffff;
                  lStack_1f8 = lVar32;
                  if ((float)uStack_178 == (float)*(int *)((longlong)pauStack_108 + lVar33 + -0x68))
                  {
                    cVar20 = pdb_140c45920(&uStack_2b0);
                    if (cVar20 != '\x04') goto LAB_1408ce9aa;
                    *puStack_288 = uStack_204;
                    uVar26 = pdb_140947f90(lStack_1c8);
                    pauStack_108 = (undefined1 (*) [16])((longlong)pauStack_108 + lVar33);
                    uStack_f3 = pauStack_108[-1][8];
                    plStack_100 = (longlong *)
                                  pdb_1408f3750(uStack_280,uStack_178 & 0xffffffff,uVar26,uVar27,
                                                uStack_f3);
                    plVar30 = plStack_278;
                    if (plStack_278[3] == 0) goto LAB_1408cfec6;
                    pauStack_1f0 = pauStack_108 + -6;
                    uStack_1ac = *(undefined4 *)pauStack_108[-1];
                    uVar27 = pdb_1400af0a0(plStack_270,&lStack_298);
                    lVar32 = *plVar30;
                    uVar24 = plVar30[1];
                    bVar21 = (byte)(uVar27 >> 0x39);
                    auVar44 = ZEXT216(CONCAT11(bVar21,bVar21));
                    auVar44 = pshuflw(auVar44,auVar44,0);
                    lVar39 = 0;
                    goto LAB_1408ceba6;
                  }
                  uVar38 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                  uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar38);
                }
                auVar50[0] = -(auVar6[0] == unaff_XMM10_Ba);
                auVar50[1] = -(auVar6[1] == unaff_XMM10_Bb);
                auVar50[2] = -(auVar6[2] == unaff_XMM10_Bc);
                auVar50[3] = -(auVar6[3] == unaff_XMM10_Bd);
                auVar50[4] = -(auVar6[4] == unaff_XMM10_Be);
                auVar50[5] = -(auVar6[5] == unaff_XMM10_Bf);
                auVar50[6] = -(auVar6[6] == unaff_XMM10_Bg);
                auVar50[7] = -(auVar6[7] == unaff_XMM10_Bh);
                auVar50[8] = -(auVar6[8] == unaff_XMM10_Bi);
                auVar50[9] = -(auVar6[9] == unaff_XMM10_Bj);
                auVar50[10] = -(auVar6[10] == unaff_XMM10_Bk);
                auVar50[0xb] = -(auVar6[0xb] == unaff_XMM10_Bl);
                auVar50[0xc] = -(auVar6[0xc] == unaff_XMM10_Bm);
                auVar50[0xd] = -(auVar6[0xd] == unaff_XMM10_Bn);
                auVar50[0xe] = -(auVar6[0xe] == unaff_XMM10_Bo);
                auVar50[0xf] = -(auVar6[0xf] == unaff_XMM10_Bp);
                if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar50 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar50 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar50 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar50 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar50 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar50 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar50 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar50 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar50 >> 0x5f,0) & 1) != 0) || (SUB161(auVar50 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar50 >> 0x77,0) & 1) != 0) || auVar50[0xf] < '\0') break;
                uVar24 = uVar24 + lVar39 + 0x10;
                lVar39 = lVar39 + 0x10;
              }
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143018350);
          }
          param_3 = (undefined8 *)0x0;
          lVar32 = lStack_260;
          if (lStack_260 == 0) break;
        } while( true );
      }
      if (cStack_f4 == '\0') {
        return;
      }
      plVar30 = (longlong *)pdb_140e97000();
      if (((char)plVar30[0xd] != '\x01') &&
         (plVar30 = (longlong *)pdb_142dde6e0(plVar30,0), plVar30 == (longlong *)0x0)) break;
      if (*plVar30 == 0) {
        *plVar30 = -1;
        pauStack_108 = (undefined1 (*) [16])plVar30;
        pdb_140e95370(plVar30 + 1,uStack_210);
        *(longlong *)pauStack_108 = *(longlong *)pauStack_108 + 1;
        return;
      }
    }
    plVar25 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408cffab:
    plVar25 = (longlong *)pdb_142dde6e0(plVar25,0);
  } while (plVar25 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_1408cffcb:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
LAB_1408ceba6:
  uVar27 = uVar27 & uVar24;
  auVar6 = *(undefined1 (*) [16])(lVar32 + uVar27);
  auVar57[0] = -(auVar6[0] == auVar44[0]);
  auVar57[1] = -(auVar6[1] == auVar44[1]);
  auVar57[2] = -(auVar6[2] == auVar44[2]);
  auVar57[3] = -(auVar6[3] == auVar44[3]);
  auVar57[4] = -(auVar6[4] == auVar44[4]);
  auVar57[5] = -(auVar6[5] == auVar44[5]);
  auVar57[6] = -(auVar6[6] == auVar44[6]);
  auVar57[7] = -(auVar6[7] == auVar44[7]);
  auVar57[8] = -(auVar6[8] == auVar44[0]);
  auVar57[9] = -(auVar6[9] == auVar44[1]);
  auVar57[10] = -(auVar6[10] == auVar44[2]);
  auVar57[0xb] = -(auVar6[0xb] == auVar44[3]);
  auVar57[0xc] = -(auVar6[0xc] == auVar44[4]);
  auVar57[0xd] = -(auVar6[0xd] == auVar44[5]);
  auVar57[0xe] = -(auVar6[0xe] == auVar44[6]);
  auVar57[0xf] = -(auVar6[0xf] == auVar44[7]);
  uVar38 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf;
  uVar22 = (uint)uVar38;
  while (uVar38 != 0) {
    uVar35 = 0;
    for (uVar10 = uVar22; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar35 = uVar35 + 1;
    }
    lVar33 = (uVar35 + uVar27 & uVar24) * -0x2b0;
    if (lStack_1c8 == *(longlong *)(lVar32 + -0x2b0 + lVar33)) {
      pauStack_248 = pauStack_108 + -5;
      lStack_1a8 = lVar32;
      puVar28 = (ulonglong *)pdb_1409010b0();
      uVar24 = *puVar28;
      plStack_118 = (longlong *)(ulonglong)(byte)pauStack_108[-1][9];
      cVar20 = pdb_1409012c0(4,uStack_1d0);
      cStack_168 = pdb_140c44ba0(plStack_118);
      cStack_167 = cVar20;
      lVar32 = pdb_141494370(plStack_110,&cStack_168);
      if (lVar32 == 0) goto LAB_1408d003c;
      lStack_1a8 = lStack_1a8 + lVar33;
      lVar39 = lStack_1a8 + -0x2a8;
      fVar48 = *(float *)(lVar32 + 0x30);
      uStack_228 = uVar24;
      uStack_148._0_4_ = (float)pdb_14092f860(lVar39);
      auVar12._4_8_ = uVar24 >> 0x20;
      auVar12._0_4_ = (float)uVar24 - fVar48 * _DAT_142e36f50;
      uStack_148._4_4_ = (float)extraout_XMM0_Da;
      uVar42 = pdb_140dea610(&uStack_148,auVar12._0_8_);
      uStack_228 = CONCAT44(uStack_228._4_4_,uVar42);
      uStack_230 = uVar24;
      uStack_148._0_4_ = (float)pdb_14092f860(lVar39);
      uStack_148._4_4_ = extraout_XMM0_Da_00;
      uVar42 = pdb_140dea610(&uStack_148);
      uStack_230 = CONCAT44(uStack_230._4_4_,uVar42);
      pdb_140dea260(&uStack_148,&uStack_228,lVar39);
      fVar18 = fStack_140;
      fVar48 = (float)uStack_148;
      pdb_140dea260(&uStack_148,&uStack_230,lVar39);
      fVar61 = fStack_140;
      fVar62 = (float)uStack_148;
      uStack_2a0 = CONCAT44(fStack_140 * fVar17 + fVar18 * fVar17,
                            (float)uStack_148 * fVar16 + fVar48 * fVar16);
      pdb_140df4540(&lStack_1e0,&uStack_2a0);
      fVar61 = fVar61 - fVar18;
      fVar62 = fVar62 - fVar48;
      fVar48 = _DAT_142e36f28 / SQRT(fVar62 * fVar62 + fVar61 * fVar61);
      plStack_200 = (longlong *)
                    CONCAT44(fVar48 * fVar62,(float)((uint)fVar48 ^ _DAT_142e37820) * fVar61);
      pdb_140df4520(&cStack_168,&plStack_200);
      pdb_140de9ab0(&uStack_148,&cStack_168);
      fVar19 = fStack_13c;
      fVar61 = fStack_140;
      fVar18 = uStack_148._4_4_;
      fVar62 = (float)uStack_148;
      fVar48 = fStack_1d8;
      lVar32 = lStack_1e0;
      fVar69 = (float)lStack_1e0;
      uStack_1c0 = 0x3f8000003f800000;
      uStack_1b8 = 0x3f800000;
      cVar20 = pdb_1409012c0(4,uStack_1d0);
      cStack_168 = pdb_140c44ba0(plStack_118);
      cStack_167 = cVar20;
      if (plStack_110[3] == 0) goto LAB_1408cfee4;
      uVar27 = pdb_1413f0300(plStack_220,&cStack_168);
      uStack_1e8 = (ulonglong)plStack_118 & 0xff;
      lVar39 = *plStack_110;
      uVar24 = plStack_110[1];
      bVar21 = (byte)(uVar27 >> 0x39);
      auVar44 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar44 = pshuflw(auVar44,auVar44,0);
      lVar33 = 0;
      goto LAB_1408ceece;
    }
    uVar38 = (ushort)(uVar22 - 1) & (ushort)uVar22;
    uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar38);
  }
  auVar51[0] = -(auVar6[0] == unaff_XMM10_Ba);
  auVar51[1] = -(auVar6[1] == unaff_XMM10_Bb);
  auVar51[2] = -(auVar6[2] == unaff_XMM10_Bc);
  auVar51[3] = -(auVar6[3] == unaff_XMM10_Bd);
  auVar51[4] = -(auVar6[4] == unaff_XMM10_Be);
  auVar51[5] = -(auVar6[5] == unaff_XMM10_Bf);
  auVar51[6] = -(auVar6[6] == unaff_XMM10_Bg);
  auVar51[7] = -(auVar6[7] == unaff_XMM10_Bh);
  auVar51[8] = -(auVar6[8] == unaff_XMM10_Bi);
  auVar51[9] = -(auVar6[9] == unaff_XMM10_Bj);
  auVar51[10] = -(auVar6[10] == unaff_XMM10_Bk);
  auVar51[0xb] = -(auVar6[0xb] == unaff_XMM10_Bl);
  auVar51[0xc] = -(auVar6[0xc] == unaff_XMM10_Bm);
  auVar51[0xd] = -(auVar6[0xd] == unaff_XMM10_Bn);
  auVar51[0xe] = -(auVar6[0xe] == unaff_XMM10_Bo);
  auVar51[0xf] = -(auVar6[0xf] == unaff_XMM10_Bp);
  if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar51 >> 0x17,0) & 1) != 0) || (SUB161(auVar51 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar51 >> 0x27,0) & 1) != 0) || (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x37,0) & 1) != 0) || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x47,0) & 1) != 0) || (SUB161(auVar51 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar51 >> 0x57,0) & 1) != 0) || (SUB161(auVar51 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar51 >> 0x67,0) & 1) != 0) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') goto LAB_1408cfec6;
  uVar27 = uVar27 + lVar39 + 0x10;
  lVar39 = lVar39 + 0x10;
  goto LAB_1408ceba6;
LAB_1408ceece:
  uVar27 = uVar27 & uVar24;
  auVar6 = *(undefined1 (*) [16])(lVar39 + uVar27);
  auVar58[0] = -(auVar6[0] == auVar44[0]);
  auVar58[1] = -(auVar6[1] == auVar44[1]);
  auVar58[2] = -(auVar6[2] == auVar44[2]);
  auVar58[3] = -(auVar6[3] == auVar44[3]);
  auVar58[4] = -(auVar6[4] == auVar44[4]);
  auVar58[5] = -(auVar6[5] == auVar44[5]);
  auVar58[6] = -(auVar6[6] == auVar44[6]);
  auVar58[7] = -(auVar6[7] == auVar44[7]);
  auVar58[8] = -(auVar6[8] == auVar44[0]);
  auVar58[9] = -(auVar6[9] == auVar44[1]);
  auVar58[10] = -(auVar6[10] == auVar44[2]);
  auVar58[0xb] = -(auVar6[0xb] == auVar44[3]);
  auVar58[0xc] = -(auVar6[0xc] == auVar44[4]);
  auVar58[0xd] = -(auVar6[0xd] == auVar44[5]);
  auVar58[0xe] = -(auVar6[0xe] == auVar44[6]);
  auVar58[0xf] = -(auVar6[0xf] == auVar44[7]);
  uVar38 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf;
  uVar22 = (uint)uVar38;
  if (uVar38 != 0) {
    if (cStack_168 == '\x1a') {
      lStack_1a0 = CONCAT71(lStack_1a0._1_7_,0x1a);
      do {
        uVar35 = 0;
        for (uVar10 = uVar22; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar35 = uVar35 + 1;
        }
        uVar34 = uVar35 + uVar27 & uVar24;
        if (*(char *)(lVar39 + -0x48 + uVar34 * -0x48) == '\x1a') goto LAB_1408cefb6;
        uVar38 = (ushort)(uVar22 - 1) & (ushort)uVar22;
        uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar38);
      } while (uVar38 != 0);
    }
    else {
      uStack_198 = (longlong *)CONCAT71(uStack_198._1_7_,cStack_167);
      do {
        uVar35 = 0;
        for (uVar10 = uVar22; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar35 = uVar35 + 1;
        }
        uVar34 = uVar35 + uVar27 & uVar24;
        cVar20 = *(char *)(lVar39 + -0x48 + uVar34 * -0x48);
        lStack_170 = lVar33;
        if (((cVar20 != '\x1a') && (cStack_168 == cVar20)) &&
           (cStack_167 == *(char *)(lVar39 + uVar34 * -0x48 + -0x47))) goto LAB_1408cefb6;
        uVar38 = (ushort)(uVar22 - 1) & (ushort)uVar22;
        uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar38);
      } while (uVar38 != 0);
    }
  }
  auVar52[0] = -(auVar6[0] == unaff_XMM10_Ba);
  auVar52[1] = -(auVar6[1] == unaff_XMM10_Bb);
  auVar52[2] = -(auVar6[2] == unaff_XMM10_Bc);
  auVar52[3] = -(auVar6[3] == unaff_XMM10_Bd);
  auVar52[4] = -(auVar6[4] == unaff_XMM10_Be);
  auVar52[5] = -(auVar6[5] == unaff_XMM10_Bf);
  auVar52[6] = -(auVar6[6] == unaff_XMM10_Bg);
  auVar52[7] = -(auVar6[7] == unaff_XMM10_Bh);
  auVar52[8] = -(auVar6[8] == unaff_XMM10_Bi);
  auVar52[9] = -(auVar6[9] == unaff_XMM10_Bj);
  auVar52[10] = -(auVar6[10] == unaff_XMM10_Bk);
  auVar52[0xb] = -(auVar6[0xb] == unaff_XMM10_Bl);
  auVar52[0xc] = -(auVar6[0xc] == unaff_XMM10_Bm);
  auVar52[0xd] = -(auVar6[0xd] == unaff_XMM10_Bn);
  auVar52[0xe] = -(auVar6[0xe] == unaff_XMM10_Bo);
  auVar52[0xf] = -(auVar6[0xf] == unaff_XMM10_Bp);
  if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar52 >> 0x17,0) & 1) != 0) || (SUB161(auVar52 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar52 >> 0x27,0) & 1) != 0) || (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar52 >> 0x37,0) & 1) != 0) || (SUB161(auVar52 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar52 >> 0x47,0) & 1) != 0) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') {
LAB_1408cfee4:
    uStack_148 = &cStack_168;
    fStack_140 = 4.4026337;
    fStack_13c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1430183a5,&uStack_148,&UNK_1430183d8);
  }
  uVar27 = uVar27 + lVar33 + 0x10;
  lVar33 = lVar33 + 0x10;
  goto LAB_1408ceece;
LAB_1408cefb6:
  plVar30 = *(longlong **)(lVar39 + -0x28 + uVar34 * -0x48);
  LOCK();
  lVar33 = *plVar30;
  *plVar30 = *plVar30 + 1;
  UNLOCK();
  if (*plVar30 != 0 && SCARRY8(lVar33,1) == *plVar30 < 0) {
    uStack_f1 = 1;
    plStack_200 = plVar30;
    uStack_198 = plVar30;
    cVar20 = pdb_1409012c0(CONCAT71((int7)((ulonglong)lVar39 >> 8),4),uStack_1d0);
    uStack_f1 = 1;
    cStack_168 = pdb_140c44ba0(plStack_118);
    cStack_167 = cVar20;
    if (plStack_110[9] != 0) {
      uStack_f1 = 1;
      uVar27 = pdb_1413f0300(plStack_268,&cStack_168);
      plVar30 = plStack_100;
      lVar39 = plStack_110[6];
      uVar24 = plStack_110[7];
      bVar21 = (byte)(uVar27 >> 0x39);
      auVar44 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar44 = pshuflw(auVar44,auVar44,0);
      lVar33 = 0;
      while( true ) {
        uVar27 = uVar27 & uVar24;
        auVar6 = *(undefined1 (*) [16])(lVar39 + uVar27);
        auVar59[0] = -(auVar6[0] == auVar44[0]);
        auVar59[1] = -(auVar6[1] == auVar44[1]);
        auVar59[2] = -(auVar6[2] == auVar44[2]);
        auVar59[3] = -(auVar6[3] == auVar44[3]);
        auVar59[4] = -(auVar6[4] == auVar44[4]);
        auVar59[5] = -(auVar6[5] == auVar44[5]);
        auVar59[6] = -(auVar6[6] == auVar44[6]);
        auVar59[7] = -(auVar6[7] == auVar44[7]);
        auVar59[8] = -(auVar6[8] == auVar44[0]);
        auVar59[9] = -(auVar6[9] == auVar44[1]);
        auVar59[10] = -(auVar6[10] == auVar44[2]);
        auVar59[0xb] = -(auVar6[0xb] == auVar44[3]);
        auVar59[0xc] = -(auVar6[0xc] == auVar44[4]);
        auVar59[0xd] = -(auVar6[0xd] == auVar44[5]);
        auVar59[0xe] = -(auVar6[0xe] == auVar44[6]);
        auVar59[0xf] = -(auVar6[0xf] == auVar44[7]);
        uVar38 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf
        ;
        uVar22 = (uint)uVar38;
        if (uVar38 != 0) {
          if (cStack_168 == '\x1a') {
            do {
              uVar35 = 0;
              for (uVar10 = uVar22; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar35 = uVar35 + 1;
              }
              uVar34 = uVar35 + uVar27 & uVar24;
              uStack_f2 = 0x1a;
              if (*(char *)(lVar39 + -0x48 + uVar34 * -0x48) == '\x1a') goto LAB_1408cf15c;
              uVar38 = (ushort)(uVar22 - 1) & (ushort)uVar22;
              uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar38);
            } while (uVar38 != 0);
          }
          else {
            lStack_170 = CONCAT71(lStack_170._1_7_,cStack_167);
            do {
              uVar35 = 0;
              for (uVar10 = uVar22; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar35 = uVar35 + 1;
              }
              uVar34 = uVar35 + uVar27 & uVar24;
              cVar20 = *(char *)(lVar39 + -0x48 + uVar34 * -0x48);
              lStack_1a0 = lVar33;
              if (((cVar20 != '\x1a') && (cStack_168 == cVar20)) &&
                 (cStack_167 == *(char *)(lVar39 + uVar34 * -0x48 + -0x47))) goto LAB_1408cf15c;
              uVar38 = (ushort)(uVar22 - 1) & (ushort)uVar22;
              uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar38);
            } while (uVar38 != 0);
          }
        }
        auVar53[0] = -(auVar6[0] == unaff_XMM10_Ba);
        auVar53[1] = -(auVar6[1] == unaff_XMM10_Bb);
        auVar53[2] = -(auVar6[2] == unaff_XMM10_Bc);
        auVar53[3] = -(auVar6[3] == unaff_XMM10_Bd);
        auVar53[4] = -(auVar6[4] == unaff_XMM10_Be);
        auVar53[5] = -(auVar6[5] == unaff_XMM10_Bf);
        auVar53[6] = -(auVar6[6] == unaff_XMM10_Bg);
        auVar53[7] = -(auVar6[7] == unaff_XMM10_Bh);
        auVar53[8] = -(auVar6[8] == unaff_XMM10_Bi);
        auVar53[9] = -(auVar6[9] == unaff_XMM10_Bj);
        auVar53[10] = -(auVar6[10] == unaff_XMM10_Bk);
        auVar53[0xb] = -(auVar6[0xb] == unaff_XMM10_Bl);
        auVar53[0xc] = -(auVar6[0xc] == unaff_XMM10_Bm);
        auVar53[0xd] = -(auVar6[0xd] == unaff_XMM10_Bn);
        auVar53[0xe] = -(auVar6[0xe] == unaff_XMM10_Bo);
        auVar53[0xf] = -(auVar6[0xf] == unaff_XMM10_Bp);
        if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x1f,0) & 1) != 0) || (SUB161(auVar53 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar53 >> 0x37,0) & 1) != 0) || (SUB161(auVar53 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar53 >> 0x47,0) & 1) != 0) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') break;
        uVar27 = uVar27 + lVar33 + 0x10;
        lVar33 = lVar33 + 0x10;
      }
    }
    uStack_148 = &cStack_168;
    fStack_140 = 4.4026337;
    fStack_13c = 1.4013e-45;
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1430183a5,&uStack_148,&UNK_1430183f0);
  }
  goto LAB_1408d0073;
LAB_1408cf32d:
  uVar26 = *(undefined8 *)(lVar33 + -0x20);
  uVar13 = *(undefined8 *)(lVar33 + -0x18);
  uVar22 = (int)plStack_118 - 1;
  if (2 < (byte)uVar22) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1430185f1,0x28,&UNK_143018620);
  }
  uVar4 = *(undefined4 *)(lVar33 + -0x10);
  lStack_1a0 = CONCAT44(lStack_1a0._4_4_,*(undefined4 *)(lVar33 + -0xc));
  uVar5 = *(undefined8 *)(lVar33 + -8);
  lStack_170 = (longlong)*(int *)(&UNK_1430187d0 + (ulonglong)(uVar22 & 0xff) * 4);
  puVar29 = (undefined8 *)pdb_140901130(pauStack_1f0,&UNK_143018528);
  uStack_198 = (longlong *)*puVar29;
  uStack_190 = 0;
  lVar39 = plStack_100[0x1b];
  if (lVar39 == plStack_100[0x19]) {
    pdb_142d8d5c0(plStack_100 + 0x19);
  }
  lVar33 = plStack_100[0x1a];
  *(longlong **)(lVar33 + lVar39 * 0x14) = uStack_198;
  *(undefined4 *)(lVar33 + 8 + lVar39 * 0x14) = uVar4;
  *(float *)(lVar33 + 0xc + lVar39 * 0x14) = (float)((ulonglong)uVar5 >> 0x20) - (float)uVar5;
  *(undefined1 *)(lVar33 + 0x10 + lVar39 * 0x14) = 0;
  plStack_100[0x1b] = lVar39 + 1;
  cVar20 = pdb_1408ff980(lStack_1a8 + -9);
  if (cVar20 != '\0') {
    fVar49 = fVar18 * fVar18 + fVar62 * fVar62;
    fVar63 = (fVar19 * fVar19 - (fVar49 + fVar61 * fVar61)) * _DAT_142e378f0;
    fVar49 = (fVar19 * fVar19 - (fVar49 + fVar61 * fVar61)) * _UNK_142e378f8;
    fVar66 = fVar62 * _DAT_142e378f0;
    fVar67 = fVar18 * _UNK_142e378f4;
    fVar68 = fVar61 * _UNK_142e378f8;
    fVar64 = fVar18 * _DAT_142e37950;
    fVar65 = fVar62 * _UNK_142e37958;
    uStack_f2 = 1 < *(uint *)(lStack_1a8 + -0x50);
    lVar39 = plStack_100[0x24];
    if (lVar39 == plStack_100[0x22]) {
      pdb_142d8a7a0(plStack_100 + 0x22);
    }
    fVar68 = fVar68 + fVar67 + fVar66;
    fVar68 = fVar68 + fVar68;
    lVar33 = plStack_100[0x23];
    lVar31 = lVar39 * 0x20;
    puVar2 = (undefined4 *)(lVar33 + lVar31);
    *puVar2 = (undefined4)uStack_198;
    puVar2[1] = uStack_198._4_4_;
    puVar2[2] = (fVar19 + fVar19) * (fVar64 - fVar61 * 0.0) + fVar63 + fVar68 * fVar62;
    puVar2[3] = (fVar19 + fVar19) * (fVar65 - fVar18 * 0.0) + fVar49 + fVar68 * fVar61;
    *(longlong *)(lVar33 + 0x10 + lVar31) = lStack_1e0;
    *(float *)(lVar33 + 0x18 + lVar31) = fStack_1d8;
    *(byte *)(lVar33 + 0x1c + lVar31) = (byte)plStack_118 | 8;
    *(undefined1 *)(lVar33 + 0x1d + lVar31) = uStack_f2;
    plStack_100[0x24] = lVar39 + 1;
  }
  pdb_140901130(pauStack_1f0,&UNK_143018558);
  pdb_140901130(pauStack_1f0,&UNK_143018570);
  bVar21 = pdb_140c429a0(uStack_1e8);
  uVar24 = (ulonglong)bVar21;
  uVar70 = CONCAT44(uVar42,0x40280000);
  pdb_140c428a0(&uStack_148);
  lVar39 = plStack_100[0x1e];
  if (lVar39 == plStack_100[0x1c]) {
    pdb_142d8a7a0(plStack_100 + 0x1c);
  }
  lVar33 = plStack_100[0x1d];
  plVar30 = (longlong *)(lVar33 + 0x10 + lVar39 * 0x20);
  *plVar30 = lStack_138;
  plVar30[1] = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
  puVar29 = (undefined8 *)(lVar33 + lVar39 * 0x20);
  *puVar29 = CONCAT44(uStack_148._4_4_,(float)uStack_148);
  puVar29[1] = CONCAT44(fStack_13c,fStack_140);
  plStack_100[0x1e] = lVar39 + 1;
  plStack_118 = plStack_100 + 0x16;
  fStack_13c = (float)((uint)fStack_13c & 0xff000000);
  uStack_148._0_4_ = (float)((uint)(float)uStack_148 & 0xffffff);
  uStack_148._4_4_ = 0.0;
  fStack_140 = 0.0;
  fStack_160 = 0.0;
  uStack_15c = uStack_15c & 0xff000000;
  cStack_168 = SUB41((float)uStack_148,0);
  cStack_167 = (char)((uint)(float)uStack_148 >> 8);
  uStack_166 = (uint5)(ushort)((uint)(float)uStack_148 >> 0x10);
  uStack_161 = 0;
  lVar39 = plStack_100[0x18];
  if (lVar39 == plStack_100[0x16]) {
    pdb_142d8ddd0(plStack_118);
  }
  lVar33 = plStack_100[0x17];
  lVar31 = lVar39 * 0x170;
  *(undefined8 *)(lVar33 + lVar31) = 0;
  *(undefined8 *)(lVar33 + 0x10 + lVar31) = 0;
  *(undefined8 *)(lVar33 + 0x20 + lVar31) = 0;
  *(undefined8 *)(lVar33 + 0x30 + lVar31) = 0;
  *(undefined4 *)(lVar33 + 0x40 + lVar31) = 0;
  *(undefined4 *)(lVar33 + 0x50 + lVar31) = 0;
  *(undefined4 *)(lVar33 + 0x60 + lVar31) = 0;
  *(undefined4 *)(lVar33 + 0x70 + lVar31) = 2;
  *(undefined **)(lVar33 + 0x90 + lVar31) = &UNK_1430187d0 + lStack_170;
  *(undefined8 *)(lVar33 + 0x98 + lVar31) = 0x1d;
  *(undefined **)(lVar33 + 0xa0 + lVar31) = &UNK_14330dd11;
  *(undefined8 *)(lVar33 + 0xa8 + lVar31) = 0x1e;
  pfVar3 = (float *)(lVar33 + 0xb0 + lVar31);
  *pfVar3 = fVar62;
  pfVar3[1] = fVar18;
  pfVar3[2] = fVar61;
  pfVar3[3] = fVar19;
  *(longlong *)(lVar33 + 0xc0 + lVar31) = lVar32;
  *(float *)(lVar33 + 200 + lVar31) = fVar48;
  puVar29 = (undefined8 *)(lVar33 + 0xcc + lVar31);
  *puVar29 = uStack_1c0;
  puVar29[1] = CONCAT44(uStack_1b4,uStack_1b8);
  *(undefined4 *)(lVar33 + 0xdc + lVar31) = uStack_1b0;
  *(undefined4 *)(lVar33 + 0xe0 + lVar31) = 1;
  *(undefined4 *)(lVar33 + 0xe4 + lVar31) = uStack_1ac;
  *(undefined4 *)(lVar33 + 0xe8 + lVar31) = 0;
  *(undefined1 *)(lVar33 + 0x105 + lVar31) = 2;
  *(undefined4 *)(lVar33 + 0x108 + lVar31) = 0;
  *(undefined1 *)(lVar33 + 0x15c + lVar31) = 2;
  uVar15 = CONCAT35((undefined3)uStack_15c,CONCAT41(fStack_160,uStack_161));
  *(undefined8 *)(lVar33 + 0x164 + lVar31) = uVar15;
  *(ulonglong *)(lVar33 + 0x15d + lVar31) =
       CONCAT17(uStack_161,CONCAT52(uStack_166,CONCAT11(cStack_167,cStack_168)));
  *(undefined1 *)(lVar33 + 0x16c + lVar31) = 2;
  *(undefined1 *)(lVar33 + 0x16e + lVar31) = uStack_f3;
  *(undefined1 *)(lVar33 + 0x16f + lVar31) = 1;
  plStack_100[0x18] = lVar39 + 1;
  if (3 < (byte)pauStack_108[-1][10]) {
    lVar39 = pdb_140dedfe0(*(undefined4 *)(pauStack_108[-1] + 4),uStack_f3,uVar15,plStack_100,uVar70
                           ,uVar24);
    auVar44._8_8_ = 0;
    auVar44._0_8_ = lVar39 + 0xa0761d6478bd642fU ^ 0xe7037ed1a0b428db;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = lVar39 + 0xa0761d6478bd642fU;
    uVar22 = (uint)(SUB168(auVar44 * auVar6,0) >> 0x1e) ^ (uint)(SUB168(auVar44 * auVar6,8) >> 0x1e)
    ;
    fVar49 = (float)((ulonglong)lVar32 >> 0x20);
    if (((byte)uVar22 & 3) == 1) {
      fVar63 = fVar18 * _DAT_1430181c0;
      fVar64 = fVar61 * _UNK_1430181c4;
      fVar65 = fVar62 * _UNK_1430181c8;
      fVar66 = fVar61 * _DAT_143011f60;
      fVar68 = fVar62 * _UNK_143011f64;
      fVar67 = fVar18 * _UNK_143011f68;
      uStack_148._0_4_ = (float)uStack_178;
      fStack_140 = 129.51624;
      fStack_13c = 1.4013e-45;
      lStack_138 = 5;
      pauStack_108 = (undefined1 (*) [16])pdb_1414af4c0(&uStack_148);
      bVar21 = pdb_140901020(lStack_250);
      uStack_178 = plStack_100[0x27];
      if (uStack_178 == plStack_100[0x25]) {
        pdb_142d7eb40(plStack_100 + 0x25);
      }
      fVar46 = fVar61 * fVar61;
      fVar47 = fVar19 * fVar19;
      fVar55 = fVar18 * fVar18 + fVar62 * fVar62;
      fVar43 = (fVar47 - (fVar55 + fVar46)) * _DAT_1430181b0;
      fVar45 = (fVar47 - (fVar55 + fVar46)) * _UNK_1430181b4;
      fVar46 = (fVar47 - (fVar55 + fVar46)) * _UNK_1430181b8;
      fVar55 = fVar61 * _UNK_1430181b8 + fVar18 * _UNK_1430181b4 + fVar62 * _DAT_1430181b0;
      fVar55 = fVar55 + fVar55;
      fVar47 = fVar19 + fVar19;
      lVar39 = plStack_100[0x26];
      lVar33 = uStack_178 * 0x50;
      *(byte *)(lVar39 + lVar33) = bVar21 | 4;
      pfVar3 = (float *)(lVar39 + 0x10 + lVar33);
      *pfVar3 = fVar62;
      pfVar3[1] = fVar18;
      pfVar3[2] = fVar61;
      pfVar3[3] = fVar19;
      *(ulonglong *)(lVar39 + 0x20 + lVar33) =
           CONCAT44(fVar49 + fVar47 * (fVar64 - fVar68) + fVar55 * fVar18 + fVar45,
                    fVar69 + fVar47 * (fVar63 - fVar66) + fVar55 * fVar62 + fVar43);
      *(float *)(lVar39 + 0x28 + lVar33) =
           fVar47 * (fVar65 - fVar67) + fVar55 * fVar61 + fVar46 + fVar48;
      puVar29 = (undefined8 *)(lVar39 + 0x2c + lVar33);
      *puVar29 = uStack_1c0;
      puVar29[1] = CONCAT44(uStack_1b4,uStack_1b8);
      *(undefined4 *)(lVar39 + 0x3c + lVar33) = uStack_1b0;
      *(undefined1 (**) [16])(lVar39 + 0x40 + lVar33) = pauStack_108;
      *(longlong *)(lVar39 + 0x48 + lVar33) = lStack_1c8;
      plStack_100[0x27] = uStack_178 + 1;
    }
    else if ((uVar22 & 3) == 0) {
      fVar63 = fVar18 * _DAT_1430181e0;
      fVar64 = fVar61 * _UNK_1430181e4;
      fVar65 = fVar62 * _UNK_1430181e8;
      fVar66 = fVar61 * _DAT_1430181f0;
      fVar68 = fVar62 * _UNK_1430181f4;
      fVar67 = fVar18 * _UNK_1430181f8;
      uStack_148._0_4_ = (float)uStack_178;
      fStack_140 = 129.51611;
      fStack_13c = 1.4013e-45;
      lStack_138 = 8;
      pauStack_108 = (undefined1 (*) [16])pdb_1414af4c0(&uStack_148);
      lVar39 = plStack_100[0x27];
      if (lVar39 == plStack_100[0x25]) {
        pdb_142d7eb40(plStack_100 + 0x25);
      }
      fVar46 = fVar61 * fVar61;
      fVar47 = fVar19 * fVar19;
      fVar55 = fVar18 * fVar18 + fVar62 * fVar62;
      fVar43 = (fVar47 - (fVar55 + fVar46)) * _DAT_1430181d0;
      fVar45 = (fVar47 - (fVar55 + fVar46)) * _UNK_1430181d4;
      fVar46 = (fVar47 - (fVar55 + fVar46)) * _UNK_1430181d8;
      fVar55 = fVar61 * _UNK_1430181d8 + fVar18 * _UNK_1430181d4 + fVar62 * _DAT_1430181d0;
      fVar55 = fVar55 + fVar55;
      fVar47 = fVar19 + fVar19;
      lVar33 = plStack_100[0x26];
      lVar31 = lVar39 * 0x50;
      *(undefined1 *)(lVar33 + lVar31) = 3;
      pfVar3 = (float *)(lVar33 + 0x10 + lVar31);
      *pfVar3 = fVar62;
      pfVar3[1] = fVar18;
      pfVar3[2] = fVar61;
      pfVar3[3] = fVar19;
      *(ulonglong *)(lVar33 + 0x20 + lVar31) =
           CONCAT44(fVar49 + fVar47 * (fVar64 - fVar68) + fVar55 * fVar18 + fVar45,
                    fVar69 + fVar47 * (fVar63 - fVar66) + fVar55 * fVar62 + fVar43);
      *(float *)(lVar33 + 0x28 + lVar31) =
           fVar47 * (fVar65 - fVar67) + fVar55 * fVar61 + fVar46 + fVar48;
      puVar29 = (undefined8 *)(lVar33 + 0x2c + lVar31);
      *puVar29 = uStack_1c0;
      puVar29[1] = CONCAT44(uStack_1b4,uStack_1b8);
      *(undefined4 *)(lVar33 + 0x3c + lVar31) = uStack_1b0;
      *(undefined1 (**) [16])(lVar33 + 0x40 + lVar31) = pauStack_108;
      *(longlong *)(lVar33 + 0x48 + lVar31) = lStack_1c8;
      plStack_100[0x27] = lVar39 + 1;
    }
  }
  lVar39 = pdb_1409010b0(pauStack_248);
  if (*(char *)(lVar39 + 0x21) == '\x01') {
    lStack_138 = lVar32;
    uStack_130 = SUB42(fVar48,0);
    uStack_12e = (undefined2)((uint)fVar48 >> 0x10);
    uStack_11c = uStack_1b0;
    uStack_12c = (undefined4)uStack_1c0;
    uStack_128 = (undefined4)((ulonglong)uStack_1c0 >> 0x20);
    uStack_124 = uStack_1b8;
    uStack_120 = uStack_1b4;
    cStack_168 = (char)uVar26;
    cStack_167 = (char)((ulonglong)uVar26 >> 8);
    uStack_166 = (uint5)((ulonglong)uVar26 >> 0x10);
    uStack_161 = (undefined1)((ulonglong)uVar26 >> 0x38);
    fStack_160 = (float)uVar13;
    uStack_15c = (uint)((ulonglong)uVar13 >> 0x20);
    uStack_154 = (undefined4)lStack_1a0;
    uStack_158 = uVar4;
    uStack_150 = uVar5;
    uStack_148._0_4_ = fVar62;
    uStack_148._4_4_ = fVar18;
    fStack_140 = fVar61;
    fStack_13c = fVar19;
    cVar20 = pdb_1408cafc0(uStack_218,uStack_258,&uStack_148,&cStack_168,plStack_100);
    if (cVar20 == '\0') {
      lVar39 = lStack_1a8 + -0x270;
      uVar42 = pdb_14148d880();
      pdb_14148c4e0(&uStack_23c,lVar39,uVar42,extraout_XMM0_Da_01);
      fVar69 = fStack_238;
      fVar49 = (float)pdb_14021fc10(uStack_218,uStack_23c,uStack_234);
      if (fVar49 + _DAT_142e3c608 < fVar69) {
        pauStack_108 = *(undefined1 (**) [16])(&UNK_1430187d8 + uStack_1e8 * 8);
        fStack_13c = (float)((uint)fStack_13c & 0xff000000);
        uStack_148._0_4_ = (float)((uint)(float)uStack_148 & 0xffffff);
        uStack_148._4_4_ = 0.0;
        fStack_140 = 0.0;
        fStack_160 = 0.0;
        uStack_15c = uStack_15c & 0xff000000;
        cStack_168 = SUB41((float)uStack_148,0);
        cStack_167 = (char)((uint)(float)uStack_148 >> 8);
        uStack_166 = (uint5)(ushort)((uint)(float)uStack_148 >> 0x10);
        uStack_161 = 0;
        lVar39 = plStack_100[0x18];
        if (lVar39 == plStack_100[0x16]) {
          pdb_142d8ddd0(plStack_118);
        }
        lVar33 = plStack_100[0x17];
        lVar31 = lVar39 * 0x170;
        *(undefined8 *)(lVar33 + lVar31) = 0;
        *(undefined8 *)(lVar33 + 0x10 + lVar31) = 0;
        *(undefined8 *)(lVar33 + 0x20 + lVar31) = 0;
        *(undefined8 *)(lVar33 + 0x30 + lVar31) = 0;
        *(undefined4 *)(lVar33 + 0x40 + lVar31) = 0;
        *(undefined4 *)(lVar33 + 0x50 + lVar31) = 0;
        *(undefined4 *)(lVar33 + 0x60 + lVar31) = 0;
        *(undefined4 *)(lVar33 + 0x70 + lVar31) = 2;
        *(undefined1 (**) [16])(lVar33 + 0x90 + lVar31) = pauStack_108;
        *(undefined8 *)(lVar33 + 0x98 + lVar31) = 0x23;
        *(undefined **)(lVar33 + 0xa0 + lVar31) = &UNK_14330dc96;
        *(undefined8 *)(lVar33 + 0xa8 + lVar31) = 0x2b;
        pfVar3 = (float *)(lVar33 + 0xb0 + lVar31);
        *pfVar3 = fVar62;
        pfVar3[1] = fVar18;
        pfVar3[2] = fVar61;
        pfVar3[3] = fVar19;
        *(longlong *)(lVar33 + 0xc0 + lVar31) = lVar32;
        *(float *)(lVar33 + 200 + lVar31) = fVar48;
        auVar14._8_4_ = uStack_1b8;
        auVar14._0_8_ = uStack_1c0;
        auVar14._12_4_ = uStack_1b4;
        *(undefined1 (*) [16])(lVar33 + 0xcc + lVar31) = auVar14;
        *(undefined4 *)(lVar33 + 0xdc + lVar31) = uStack_1b0;
        *(undefined4 *)(lVar33 + 0xe0 + lVar31) = 1;
        *(undefined4 *)(lVar33 + 0xe4 + lVar31) = uStack_1ac;
        *(undefined4 *)(lVar33 + 0xe8 + lVar31) = 0;
        *(undefined1 *)(lVar33 + 0x105 + lVar31) = 2;
        *(undefined4 *)(lVar33 + 0x108 + lVar31) = 0;
        *(undefined1 *)(lVar33 + 0x15c + lVar31) = 2;
        *(ulonglong *)(lVar33 + 0x164 + lVar31) =
             CONCAT35((undefined3)uStack_15c,CONCAT41(fStack_160,uStack_161));
        *(ulonglong *)(lVar33 + 0x15d + lVar31) =
             CONCAT17(uStack_161,CONCAT52(uStack_166,CONCAT11(cStack_167,cStack_168)));
        *(undefined1 *)(lVar33 + 0x16c + lVar31) = 2;
        *(undefined1 *)(lVar33 + 0x16e + lVar31) = uStack_f3;
        *(undefined1 *)(lVar33 + 0x16f + lVar31) = 0;
        plStack_100[0x18] = lVar39 + 1;
      }
    }
  }
  goto LAB_1408ce9aa;
LAB_1408cfec6:
  pdb_142dc8110(&UNK_1430182f8,0x16,&UNK_1430184b8);
  goto LAB_1408d0073;
LAB_1408cf15c:
  plVar25 = *(longlong **)(lVar39 + -0x28 + uVar34 * -0x48);
  LOCK();
  lVar39 = *plVar25;
  *plVar25 = *plVar25 + 1;
  UNLOCK();
  if (*plVar25 != 0 && SCARRY8(lVar39,1) == *plVar25 < 0) {
    fStack_160 = fStack_1d8;
    cStack_168 = (char)lStack_1e0;
    cStack_167 = (char)((ulonglong)lStack_1e0 >> 8);
    uStack_166 = (uint5)((ulonglong)lStack_1e0 >> 0x10);
    uStack_161 = (undefined1)((ulonglong)lStack_1e0 >> 0x38);
    uStack_f1 = 0;
    puVar29 = &uStack_148;
    uStack_148._0_4_ = fVar62;
    uStack_148._4_4_ = fVar18;
    fStack_140 = fVar61;
    fStack_13c = fVar19;
    pdb_1408f3120(plStack_100,uStack_198,plVar25,&cStack_168,puVar29);
    uVar42 = (undefined4)((ulonglong)puVar29 >> 0x20);
    if (*plVar30 == 0 && plVar30[1] == 0) {
      plVar30[1] = 0;
      *plVar30 = 1;
      *(float *)(plVar30 + 2) = fVar62;
      *(float *)((longlong)plVar30 + 0x14) = fVar18;
      *(float *)(plVar30 + 3) = fVar61;
      *(float *)((longlong)plVar30 + 0x1c) = fVar19;
      plVar30[4] = lVar32;
      *(float *)(plVar30 + 5) = fVar48;
      *(undefined8 *)((longlong)plVar30 + 0x2c) = uStack_1c0;
      *(ulonglong *)((longlong)plVar30 + 0x34) = CONCAT44(uStack_1b4,uStack_1b8);
      *(undefined4 *)((longlong)plVar30 + 0x3c) = uStack_1b0;
      cStack_168 = '\x04';
      cStack_167 = (char)plStack_118;
      if (plStack_110[3] != 0) {
        uVar27 = pdb_1413f0300(plStack_220,&cStack_168);
        lVar39 = *plStack_110;
        uVar24 = plStack_110[1];
        bVar21 = (byte)(uVar27 >> 0x39);
        auVar44 = ZEXT216(CONCAT11(bVar21,bVar21));
        auVar44 = pshuflw(auVar44,auVar44,0);
        plVar30 = (longlong *)0x0;
        while( true ) {
          uVar27 = uVar27 & uVar24;
          auVar6 = *(undefined1 (*) [16])(lVar39 + uVar27);
          auVar60[0] = -(auVar6[0] == auVar44[0]);
          auVar60[1] = -(auVar6[1] == auVar44[1]);
          auVar60[2] = -(auVar6[2] == auVar44[2]);
          auVar60[3] = -(auVar6[3] == auVar44[3]);
          auVar60[4] = -(auVar6[4] == auVar44[4]);
          auVar60[5] = -(auVar6[5] == auVar44[5]);
          auVar60[6] = -(auVar6[6] == auVar44[6]);
          auVar60[7] = -(auVar6[7] == auVar44[7]);
          auVar60[8] = -(auVar6[8] == auVar44[0]);
          auVar60[9] = -(auVar6[9] == auVar44[1]);
          auVar60[10] = -(auVar6[10] == auVar44[2]);
          auVar60[0xb] = -(auVar6[0xb] == auVar44[3]);
          auVar60[0xc] = -(auVar6[0xc] == auVar44[4]);
          auVar60[0xd] = -(auVar6[0xd] == auVar44[5]);
          auVar60[0xe] = -(auVar6[0xe] == auVar44[6]);
          auVar60[0xf] = -(auVar6[0xf] == auVar44[7]);
          uVar38 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar60[0xf] >> 7) << 0xf;
          uVar22 = (uint)uVar38;
          if (uVar38 != 0) {
            if (cStack_168 == '\x1a') {
              do {
                uVar35 = 0;
                for (uVar10 = uVar22; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                  uVar35 = uVar35 + 1;
                }
                uVar34 = uVar35 + uVar27 & uVar24;
                if (*(char *)(lVar39 + -0x48 + uVar34 * -0x48) == '\x1a') {
                  lVar33 = lVar39 + uVar34 * -0x48;
                  goto LAB_1408cf32d;
                }
                uVar38 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar38);
              } while (uVar38 != 0);
            }
            else {
              do {
                uVar35 = 0;
                for (uVar10 = uVar22; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                  uVar35 = uVar35 + 1;
                }
                uVar34 = uVar35 + uVar27 & uVar24;
                cVar20 = *(char *)(lVar39 + -0x48 + uVar34 * -0x48);
                uStack_198 = plVar30;
                if (((cVar20 != '\x1a') && (cStack_168 == cVar20)) &&
                   (lVar33 = lVar39 + uVar34 * -0x48, cStack_167 == *(char *)(lVar33 + -0x47)))
                goto LAB_1408cf32d;
                uVar38 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar38);
              } while (uVar38 != 0);
            }
          }
          auVar54[0] = -(auVar6[0] == unaff_XMM10_Ba);
          auVar54[1] = -(auVar6[1] == unaff_XMM10_Bb);
          auVar54[2] = -(auVar6[2] == unaff_XMM10_Bc);
          auVar54[3] = -(auVar6[3] == unaff_XMM10_Bd);
          auVar54[4] = -(auVar6[4] == unaff_XMM10_Be);
          auVar54[5] = -(auVar6[5] == unaff_XMM10_Bf);
          auVar54[6] = -(auVar6[6] == unaff_XMM10_Bg);
          auVar54[7] = -(auVar6[7] == unaff_XMM10_Bh);
          auVar54[8] = -(auVar6[8] == unaff_XMM10_Bi);
          auVar54[9] = -(auVar6[9] == unaff_XMM10_Bj);
          auVar54[10] = -(auVar6[10] == unaff_XMM10_Bk);
          auVar54[0xb] = -(auVar6[0xb] == unaff_XMM10_Bl);
          auVar54[0xc] = -(auVar6[0xc] == unaff_XMM10_Bm);
          auVar54[0xd] = -(auVar6[0xd] == unaff_XMM10_Bn);
          auVar54[0xe] = -(auVar6[0xe] == unaff_XMM10_Bo);
          auVar54[0xf] = -(auVar6[0xf] == unaff_XMM10_Bp);
          if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar54 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar54 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar54 >> 0x2f,0) & 1) != 0) || (SUB161(auVar54 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') break;
          uVar27 = (longlong)plVar30 + uVar27 + 0x10;
          plVar30 = plVar30 + 2;
        }
      }
      uStack_148 = &cStack_168;
      fStack_140 = 4.4026337;
      fStack_13c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1430183a5,&uStack_148,&UNK_143018408);
    }
    goto LAB_1408cffcb;
  }
LAB_1408d0073:
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}

