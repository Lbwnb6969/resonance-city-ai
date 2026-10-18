// VA 0x140a02670, PDB extent 8582 bytes
// country_core::systems::ui_raise_shape::ui_raise_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_raise_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui_raise_shape::ui_raise_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_raise_shape.rs
   Extent: 8582 */

void pdb_140a02670(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],longlong *param_5,longlong *param_6)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  bool bVar15;
  float fVar16;
  undefined1 (*pauVar17) [16];
  char cVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined *puVar21;
  byte *pbVar22;
  longlong *plVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  uint uVar26;
  undefined8 uVar27;
  undefined1 (*pauVar28) [16];
  undefined4 *puVar29;
  ulonglong uVar30;
  undefined1 (**ppauVar31) [16];
  longlong lVar32;
  undefined4 *puVar33;
  undefined1 (*unaff_RSI) [16];
  ushort uVar34;
  uint uVar35;
  longlong lVar36;
  longlong lVar37;
  undefined1 (*pauVar38) [16];
  undefined *puVar39;
  undefined8 uVar40;
  undefined1 (*unaff_R13) [16];
  undefined1 (*unaff_R15) [16];
  byte bVar41;
  float extraout_XMM0_Da;
  float fVar42;
  float fVar44;
  undefined1 auVar43 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  char cVar55;
  undefined1 unaff_XMM6_Bd;
  char cVar56;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  char cVar57;
  undefined1 unaff_XMM6_Bg;
  char cVar58;
  undefined1 unaff_XMM6_Bh;
  char cVar59;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  char cVar60;
  undefined1 unaff_XMM6_Bk;
  char cVar61;
  undefined1 unaff_XMM6_Bl;
  char cVar62;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  char cVar63;
  undefined1 unaff_XMM6_Bo;
  char cVar64;
  undefined1 unaff_XMM6_Bp;
  char cVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  ulonglong uStack_280;
  byte *pbStack_278;
  undefined1 (*pauStack_270) [16];
  undefined1 (*pauStack_258) [16];
  ulonglong uStack_250;
  undefined1 (*pauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  undefined1 (*pauStack_238) [16];
  undefined1 (*pauStack_230) [16];
  undefined1 (*pauStack_228) [16];
  undefined1 (*pauStack_220) [16];
  undefined *puStack_218;
  undefined4 uStack_200;
  undefined4 uStack_1e8;
  undefined1 uStack_1d0;
  undefined1 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 (*pauStack_1b8) [16];
  byte *pbStack_1b0;
  undefined1 (*pauStack_1a8) [16];
  undefined2 uStack_1a0;
  undefined1 (*pauStack_198) [16];
  longlong lStack_190;
  undefined8 uStack_188;
  undefined1 (**ppauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined4 uStack_148;
  byte *pbStack_138;
  undefined1 (*pauStack_130) [16];
  byte *pbStack_128;
  ulonglong uStack_120;
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  byte *pbStack_108;
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  pauStack_e8 = param_3;
  cVar18 = pdb_140e94b40();
  if (cVar18 == '\0') {
    bVar15 = false;
    lStack_190 = 0;
    pcVar4 = (char *)*param_1;
    cVar18 = *pcVar4;
    fVar16 = _DAT_142e3788c;
  }
  else {
    puVar39 = &UNK_143035a7d;
    unaff_R15 = (undefined1 (*) [16])0x35;
    uVar30 = 0x35;
    lVar19 = pdb_140a0a4c0(&UNK_143035a7d);
    if (lVar19 == 1) {
      if (0x35 < uVar30) {
LAB_140a03b9d:
        pdb_142dc8070(&UNK_143035a7d,0x35,0);
LAB_140a03bbd:
        pdb_142dc8070(&UNK_143035a7d,0x35);
LAB_140a03be0:
        uStack_d1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430351b0);
      }
      puVar39 = &UNK_143035a7d;
      uVar20 = pdb_140a0a4c0(&UNK_143035a7d);
      if ((uVar20 & 1) != 0) {
        if (0x35 < uVar30 + 2) goto LAB_140a03bbd;
        unaff_R15 = (undefined1 (*) [16])(0x33 - uVar30);
        puVar39 = &UNK_143035a7f + uVar30;
      }
    }
    puVar21 = &UNK_14303512a;
    unaff_R13 = (undefined1 (*) [16])&UNK_1430350f9;
    do {
      pbVar22 = puVar21 + -1;
      uVar26 = (uint)(char)*pbVar22;
      if ((int)uVar26 < 0) {
        bVar41 = puVar21[-2];
        if ((char)bVar41 < -0x40) {
          bVar3 = puVar21[-3];
          if ((char)bVar3 < -0x40) {
            pbVar1 = puVar21 + -4;
            puVar21 = puVar21 + -4;
            uVar26 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar21 = puVar21 + -3;
            uVar26 = bVar3 & 0xf;
          }
          uVar26 = bVar41 & 0x3f | uVar26 << 6;
        }
        else {
          puVar21 = puVar21 + -2;
          uVar26 = bVar41 & 0x1f;
        }
        uVar26 = (uint)(*pbVar22 & 0x3f) | uVar26 << 6;
        if (uVar26 != 0x5c) goto LAB_140a027e9;
LAB_140a02821:
        if (puVar21 + -0x1430350f8 < (undefined *)0x32) {
          unaff_RSI = (undefined1 (*) [16])(0x30 - (longlong)(puVar21 + -0x1430350f9));
          unaff_R13 = (undefined1 (*) [16])(puVar21 + 1);
          goto LAB_140a02844;
        }
        pdb_142dc8070(&UNK_1430350f9,0x31,puVar21 + -0x1430350f8,0x31,&UNK_143035b18);
        goto LAB_140a03b9d;
      }
      puVar21 = puVar21 + -1;
      if (uVar26 == 0x5c) goto LAB_140a02821;
LAB_140a027e9:
      if (uVar26 == 0x2f) goto LAB_140a02821;
    } while (puVar21 != &UNK_1430350f9);
    unaff_RSI = (undefined1 (*) [16])0x31;
LAB_140a02844:
    pbVar22 = (byte *)pdb_140e97000();
    if ((pbVar22[0x68] != 1) && (pbVar22 = (byte *)pdb_142d8ec20(pbVar22,0), pbVar22 == (byte *)0x0)
       ) goto LAB_140a031ff;
    if (*(longlong *)pbVar22 != 0) goto LAB_140a031ac;
    pbVar22[0] = 0xff;
    pbVar22[1] = 0xff;
    pbVar22[2] = 0xff;
    pbVar22[3] = 0xff;
    pbVar22[4] = 0xff;
    pbVar22[5] = 0xff;
    pbVar22[6] = 0xff;
    pbVar22[7] = 0xff;
    pbStack_108 = pbVar22;
    uStack_188 = pdb_140e94f10(pbVar22 + 8,puVar39,unaff_R15,unaff_R13,unaff_RSI,1,0);
    *(longlong *)pbStack_108 = *(longlong *)pbStack_108 + 1;
    bVar15 = true;
    lStack_190 = 1;
    pcVar4 = (char *)*param_1;
    cVar18 = *pcVar4;
    fVar16 = _DAT_142e3788c;
  }
  _DAT_142e3788c = fVar16;
  if (cVar18 == '\0') {
    if (*(int *)(pcVar4 + 8) == 0) {
      unaff_R15 = *(undefined1 (**) [16])*param_2;
      pauVar38 = *(undefined1 (**) [16])*unaff_R15;
      lVar19 = *(longlong *)(unaff_R15[1] + 8);
      auVar43 = *pauVar38;
      unaff_R13 = pauVar38 + 1;
      uVar26 = ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                              (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
      pauStack_100 = *(undefined1 (**) [16])*param_4;
      iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                      CONCAT13(unaff_XMM6_Bd,
                               CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
      cVar18 = (char)((uint)iVar10 >> 8);
      cVar55 = (char)((uint)iVar10 >> 0x10);
      cVar56 = (char)((uint)iVar10 >> 0x18);
      iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                      CONCAT13(unaff_XMM6_Bh,
                               CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
      cVar57 = (char)((uint)iVar11 >> 8);
      cVar58 = (char)((uint)iVar11 >> 0x10);
      cVar59 = (char)((uint)iVar11 >> 0x18);
      iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                      CONCAT13(unaff_XMM6_Bl,
                               CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
      cVar60 = (char)((uint)iVar12 >> 8);
      cVar61 = (char)((uint)iVar12 >> 0x10);
      cVar62 = (char)((uint)iVar12 >> 0x18);
      iVar13 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                      CONCAT13(unaff_XMM6_Bp,
                               CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
      cVar63 = (char)((uint)iVar13 >> 8);
      cVar64 = (char)((uint)iVar13 >> 0x10);
      cVar65 = (char)((uint)iVar13 >> 0x18);
      fVar66 = (float)_DAT_143007800;
      fVar67 = (float)((ulonglong)_DAT_143007800 >> 0x20);
      pbStack_108 = (byte *)0x0;
LAB_140a029b3:
      if (lVar19 != 0) {
        if ((short)uVar26 == 0) {
          do {
            auVar43 = *unaff_R13;
            pauVar38 = pauVar38 + -0x2b0;
            unaff_R13 = unaff_R13 + 1;
            uVar26 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar26 == 0);
        }
        uVar35 = 0;
        for (uVar9 = uVar26; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar35 = uVar35 + 1;
        }
        param_4 = *(undefined1 (**) [16])pauVar38[(ulonglong)uVar35 * -0x2b + -0x2b];
        pauStack_258 = param_4;
        pauStack_248 = param_4;
        if (*(longlong *)(unaff_R15[1] + 8) != 0) {
          uVar30 = pdb_1400af0a0(unaff_R15 + 2,&pauStack_248);
          uVar26 = uVar26 - 1 & uVar26;
          lVar19 = lVar19 + -1;
          lVar32 = *(longlong *)*unaff_R15;
          bVar41 = (byte)(uVar30 >> 0x39);
          auVar43 = ZEXT216(CONCAT11(bVar41,bVar41));
          auVar43 = pshuflw(auVar43,auVar43,0);
          lVar36 = 0;
          while( true ) {
            uVar30 = uVar30 & *(ulonglong *)(*unaff_R15 + 8);
            auVar48 = *(undefined1 (*) [16])(lVar32 + uVar30);
            auVar49[0] = -(auVar48[0] == auVar43[0]);
            auVar49[1] = -(auVar48[1] == auVar43[1]);
            auVar49[2] = -(auVar48[2] == auVar43[2]);
            auVar49[3] = -(auVar48[3] == auVar43[3]);
            auVar49[4] = -(auVar48[4] == auVar43[4]);
            auVar49[5] = -(auVar48[5] == auVar43[5]);
            auVar49[6] = -(auVar48[6] == auVar43[6]);
            auVar49[7] = -(auVar48[7] == auVar43[7]);
            auVar49[8] = -(auVar48[8] == auVar43[0]);
            auVar49[9] = -(auVar48[9] == auVar43[1]);
            auVar49[10] = -(auVar48[10] == auVar43[2]);
            auVar49[0xb] = -(auVar48[0xb] == auVar43[3]);
            auVar49[0xc] = -(auVar48[0xc] == auVar43[4]);
            auVar49[0xd] = -(auVar48[0xd] == auVar43[5]);
            auVar49[0xe] = -(auVar48[0xe] == auVar43[6]);
            auVar49[0xf] = -(auVar48[0xf] == auVar43[7]);
            uVar34 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar49[0xf] >> 7) << 0xf;
            uVar35 = (uint)uVar34;
            while (uVar34 != 0) {
              uVar9 = 0;
              for (uVar8 = uVar35; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar9 = uVar9 + 1;
              }
              lVar37 = (uVar9 + uVar30 & *(ulonglong *)(*unaff_R15 + 8)) * -0x2b0;
              if (param_4 == *(undefined1 (**) [16])(lVar32 + -0x2b0 + lVar37)) {
                lVar32 = lVar32 + lVar37;
                if ((*(ulonglong *)(lVar32 + -0x298) < 2) || (*(float *)(lVar32 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143035240);
                }
                if (1 < *(uint *)(lVar32 + -0x50)) goto LAB_140a029b3;
                pauStack_248 = param_4;
                if (*(longlong *)(unaff_R15[1] + 8) == 0) goto LAB_140a03054;
                uVar30 = pdb_1400af0a0(unaff_R15 + 2,&pauStack_248);
                lVar32 = *(longlong *)*unaff_R15;
                bVar41 = (byte)(uVar30 >> 0x39);
                auVar43 = ZEXT216(CONCAT11(bVar41,bVar41));
                auVar43 = pshuflw(auVar43,auVar43,0);
                lVar36 = 0;
                goto LAB_140a02b2d;
              }
              uVar34 = (ushort)(uVar35 - 1) & (ushort)uVar35;
              uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar34);
            }
            auVar46[0] = -(auVar48[0] == (char)iVar10);
            auVar46[1] = -(auVar48[1] == cVar18);
            auVar46[2] = -(auVar48[2] == cVar55);
            auVar46[3] = -(auVar48[3] == cVar56);
            auVar46[4] = -(auVar48[4] == (char)iVar11);
            auVar46[5] = -(auVar48[5] == cVar57);
            auVar46[6] = -(auVar48[6] == cVar58);
            auVar46[7] = -(auVar48[7] == cVar59);
            auVar46[8] = -(auVar48[8] == (char)iVar12);
            auVar46[9] = -(auVar48[9] == cVar60);
            auVar46[10] = -(auVar48[10] == cVar61);
            auVar46[0xb] = -(auVar48[0xb] == cVar62);
            auVar46[0xc] = -(auVar48[0xc] == (char)iVar13);
            auVar46[0xd] = -(auVar48[0xd] == cVar63);
            auVar46[0xe] = -(auVar48[0xe] == cVar64);
            auVar46[0xf] = -(auVar48[0xf] == cVar65);
            if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar46 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar46 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x3f,0) & 1) != 0) || (SUB161(auVar46 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') break;
            uVar30 = uVar30 + lVar36 + 0x10;
            lVar36 = lVar36 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143035258);
      }
      param_2 = (undefined1 (*) [16])0x0;
      if (((ulonglong)pbStack_108 & 1) == 0) goto LAB_140a028c8;
      pauStack_248 = unaff_RSI;
      pauStack_198 = unaff_RSI;
      if (*(longlong *)(unaff_R15[1] + 8) != 0) {
        uVar30 = pdb_1400af0a0(unaff_R15 + 2,&pauStack_248);
        lVar19 = *(longlong *)*unaff_R15;
        bVar41 = (byte)(uVar30 >> 0x39);
        auVar43 = ZEXT216(CONCAT11(bVar41,bVar41));
        auVar43 = pshuflw(auVar43,auVar43,0);
        lVar32 = 0;
        do {
          uVar30 = uVar30 & *(ulonglong *)(*unaff_R15 + 8);
          auVar48 = *(undefined1 (*) [16])(lVar19 + uVar30);
          auVar53[0] = -(auVar48[0] == auVar43[0]);
          auVar53[1] = -(auVar48[1] == auVar43[1]);
          auVar53[2] = -(auVar48[2] == auVar43[2]);
          auVar53[3] = -(auVar48[3] == auVar43[3]);
          auVar53[4] = -(auVar48[4] == auVar43[4]);
          auVar53[5] = -(auVar48[5] == auVar43[5]);
          auVar53[6] = -(auVar48[6] == auVar43[6]);
          auVar53[7] = -(auVar48[7] == auVar43[7]);
          auVar53[8] = -(auVar48[8] == auVar43[0]);
          auVar53[9] = -(auVar48[9] == auVar43[1]);
          auVar53[10] = -(auVar48[10] == auVar43[2]);
          auVar53[0xb] = -(auVar48[0xb] == auVar43[3]);
          auVar53[0xc] = -(auVar48[0xc] == auVar43[4]);
          auVar53[0xd] = -(auVar48[0xd] == auVar43[5]);
          auVar53[0xe] = -(auVar48[0xe] == auVar43[6]);
          auVar53[0xf] = -(auVar48[0xf] == auVar43[7]);
          uVar34 = (ushort)(SUB161(auVar53 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar53[0xf] >> 7) << 0xf;
          uVar26 = (uint)uVar34;
          while (uVar34 != 0) {
            uVar35 = 0;
            for (uVar9 = uVar26; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar35 = uVar35 + 1;
            }
            lVar36 = (uVar35 + uVar30 & *(ulonglong *)(*unaff_R15 + 8)) * -0x2b0;
            if (unaff_RSI == *(undefined1 (**) [16])(lVar19 + -0x2b0 + lVar36)) {
              lVar19 = lVar19 + lVar36;
              if ((*(ulonglong *)(lVar19 + -0x298) < 2) || (*(float *)(lVar19 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143035130);
              }
              param_4 = *(undefined1 (**) [16])(lVar19 + -0x210);
              uVar30 = (longlong)param_4 * 0xc;
              if (param_4 < (undefined1 (*) [16])0xaaaaaaaaaaaaaab) {
                uVar27 = *(undefined8 *)(lVar19 + -0x218);
                if (uVar30 == 0) {
                  pbStack_108 = (byte *)0x4;
                  pauStack_f0 = (undefined1 (*) [16])0x0;
                  pauVar38 = pauStack_f0;
                }
                else {
                  pdb_14007ee60();
                  uVar40 = 4;
                  pbStack_108 = pub_1406abab0(uVar30,4);
                  pauVar38 = param_4;
                  if (pbStack_108 == (byte *)0x0) goto LAB_140a03043;
                }
                pauStack_f0 = pauVar38;
                if (param_4 != (undefined1 (*) [16])0x0) {
                  pub_142e32760(pbStack_108,uVar27,uVar30);
                }
                pauVar38 = *(undefined1 (**) [16])(lVar19 + -0x1f8);
                uVar30 = (longlong)pauVar38 * 4;
                if (uVar30 < 0x7ffffffffffffffd && (ulonglong)pauVar38 >> 0x3e == 0) {
                  uStack_250 = uVar30;
                  pauStack_118 = unaff_RSI;
                  pauStack_f8 = pauVar38;
                  if (uVar30 == 0) goto LAB_140a031b8;
                  pauVar25 = *(undefined1 (**) [16])(lVar19 + -0x200);
                  pdb_14007ee60();
                  uVar27 = 4;
                  pbVar22 = pub_1406abab0(uVar30,4);
                  if (pbVar22 != (byte *)0x0) {
                    pbStack_138 = pbVar22;
                    if (pauVar38 == (undefined1 (*) [16])0x0) goto LAB_140a0327d;
                    pauVar28 = (undefined1 (*) [16])(pauVar38[-1] + 0xf);
                    if (pauVar38 < (undefined1 (*) [16])(pauVar38[-1] + 0xf)) {
                      pauVar28 = pauVar38;
                    }
                    param_2 = pauVar25;
                    unaff_R13 = pauVar38;
                    if ((undefined1 (*) [16])0x7 < pauVar28) goto LAB_140a0320b;
                    lVar19 = 0;
                    goto LAB_140a0324d;
                  }
                }
                else {
                  uVar27 = 0;
                }
                pdb_142dc7e2a(uVar27,uVar30);
              }
              else {
                uVar40 = 0;
LAB_140a03043:
                pdb_142dc7e2a(uVar40,uVar30);
              }
              goto LAB_140a03c5f;
            }
            uVar34 = (ushort)(uVar26 - 1) & (ushort)uVar26;
            uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar34);
          }
          auVar51[0] = -(auVar48[0] == -1);
          auVar51[1] = -(auVar48[1] == -1);
          auVar51[2] = -(auVar48[2] == -1);
          auVar51[3] = -(auVar48[3] == -1);
          auVar51[4] = -(auVar48[4] == -1);
          auVar51[5] = -(auVar48[5] == -1);
          auVar51[6] = -(auVar48[6] == -1);
          auVar51[7] = -(auVar48[7] == -1);
          auVar51[8] = -(auVar48[8] == -1);
          auVar51[9] = -(auVar48[9] == -1);
          auVar51[10] = -(auVar48[10] == -1);
          auVar51[0xb] = -(auVar48[0xb] == -1);
          auVar51[0xc] = -(auVar48[0xc] == -1);
          auVar51[0xd] = -(auVar48[0xd] == -1);
          auVar51[0xe] = -(auVar48[0xe] == -1);
          auVar51[0xf] = -(auVar48[0xf] == -1);
          if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar51 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar51 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar51 >> 0x2f,0) & 1) != 0) || (SUB161(auVar51 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar51 >> 0x47,0) & 1) != 0) || (SUB161(auVar51 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar51 >> 0x57,0) & 1) != 0) || (SUB161(auVar51 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar51 >> 0x67,0) & 1) != 0) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') break;
          uVar30 = uVar30 + lVar32 + 0x10;
          lVar32 = lVar32 + 0x10;
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143035148);
    }
LAB_140a028c8:
    if (lStack_190 != 0) {
LAB_140a028d4:
      plVar23 = (longlong *)pdb_140e97000();
      if (((char)plVar23[0xd] == '\x01') ||
         (plVar23 = (longlong *)pdb_142d8ec20(plVar23,0), plVar23 != (longlong *)0x0)) {
        if (*plVar23 == 0) {
          *plVar23 = -1;
          pauStack_e8 = (undefined1 (*) [16])plVar23;
          pdb_140e95370(plVar23 + 1,uStack_188);
          *(longlong *)pauStack_e8 = *(longlong *)pauStack_e8 + 1;
          return;
        }
LAB_140a031ac:
        pdb_142dc8090(&UNK_143326a50);
LAB_140a031b8:
        pbStack_138 = (byte *)0x4;
      }
      else {
LAB_140a031ff:
        pauVar28 = (undefined1 (*) [16])&UNK_143326860;
        pbVar22 = (byte *)pdb_142dc7890();
LAB_140a0320b:
        puVar39 = *pauVar28 + 1;
        uVar30 = 8;
        if (((ulonglong)puVar39 & 7) != 0) {
          uVar30 = (ulonglong)((uint)puVar39 & 7);
        }
        lVar19 = (longlong)puVar39 - uVar30;
        pauVar38 = (undefined1 (*) [16])((longlong)unaff_R13 - lVar19);
        pauVar25 = (undefined1 (*) [16])((longlong)param_2 + lVar19 * 4);
        lVar32 = 0;
        do {
          uVar27 = *(undefined8 *)((longlong)(*param_2 + lVar32 * 4) + 8);
          auVar43 = *(undefined1 (*) [16])(param_2[1] + lVar32 * 4);
          *(undefined8 *)(pbVar22 + lVar32 * 4) = *(undefined8 *)(*param_2 + lVar32 * 4);
          *(undefined8 *)(pbVar22 + lVar32 * 4 + 8) = uVar27;
          *(undefined1 (*) [16])(pbVar22 + lVar32 * 4 + 0x10) = auVar43;
          lVar32 = lVar32 + 8;
        } while (lVar19 != lVar32);
LAB_140a0324d:
        pbVar22 = pbVar22 + lVar19 * 4;
        do {
          if (pauVar25 == (undefined1 (*) [16])(*param_2 + (longlong)unaff_R13 * 4)) break;
          puVar39 = *pauVar25;
          pauVar25 = (undefined1 (*) [16])(*pauVar25 + 4);
          *(undefined4 *)pbVar22 = *(undefined4 *)puVar39;
          pbVar22 = pbVar22 + 4;
          pauVar38 = (undefined1 (*) [16])(pauVar38[-1] + 0xf);
        } while (pauVar38 != (undefined1 (*) [16])0x0);
      }
LAB_140a0327d:
      uVar27 = *(undefined8 *)*pauStack_e8;
      param_2 = (undefined1 (*) [16])(*param_5 + 0x2c);
      pauStack_248 = (undefined1 (*) [16])&pauStack_198;
      pauStack_240 = (undefined1 (*) [16])pdb_140c04ef0;
      pauStack_230 = (undefined1 (*) [16])pdb_140f71a50;
      uStack_d1 = 0;
      pauStack_238 = param_2;
      pdb_140f60760(&pauStack_178,&UNK_143035160,&pauStack_248);
      pauVar38 = pauStack_168;
      pauStack_e8 = pauStack_178;
      pauStack_e0 = pauStack_170;
      pdb_14007ee60();
      pauVar25 = (undefined1 (*) [16])pub_1406abab0(0x30,8);
      if (pauVar25 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      *(undefined8 *)*pauVar25 = 1;
      *(undefined8 *)(*pauVar25 + 8) = 1;
      *(undefined1 (**) [16])pauVar25[1] = pauStack_f0;
      *(byte **)(pauVar25[1] + 8) = pbStack_108;
      *(undefined1 (**) [16])pauVar25[2] = param_4;
      *(undefined4 *)(pauVar25[2] + 8) = 0x40400000;
      pauStack_240 = (undefined1 (*) [16])&UNK_143035180;
      pauStack_248 = pauVar25;
      if ((longlong)pauVar38 < 0) {
        uVar40 = 0;
        pauStack_110 = pauVar25;
LAB_140a0335c:
        pdb_142dc7e2a(uVar40,pauVar38);
LAB_140a03c5f:
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if (pauVar38 == (undefined1 (*) [16])0x0) {
        unaff_R13 = (undefined1 (*) [16])0x1;
      }
      else {
        pauStack_110 = pauVar25;
        pdb_14007ee60();
        uVar40 = 1;
        unaff_R13 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar38,1);
        if (unaff_R13 == (undefined1 (*) [16])0x0) goto LAB_140a0335c;
        pub_142e32760(unaff_R13,pauStack_e0,pauVar38);
        pauVar25 = pauStack_110;
      }
      pauStack_240 = (undefined1 (*) [16])CONCAT71(pauStack_240._1_7_,2);
      pauStack_238 = pauVar38;
      pauStack_228 = pauVar38;
      puStack_218 = &UNK_143035180;
      pauStack_230 = unaff_R13;
      pauStack_220 = pauVar25;
      pdb_141a88350(uVar27,&pauStack_248);
      param_4 = pauStack_100;
      if (pauStack_e8 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_e0,(ulonglong)pauStack_e8,1);
      }
      if (((param_4[1][8] != '\0') && (*(undefined1 (***) [16])(param_4[3] + 8) == ppauStack_180))
         && (*(int *)(param_4[2] + 8) != 2)) {
        pauStack_248 = pauStack_118;
        if (*(longlong *)(unaff_R15[1] + 8) == 0) {
LAB_140a03592:
          uStack_d1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430351c8);
        }
        uStack_d1 = 1;
        uVar30 = pdb_1400af0a0(unaff_R15 + 2,&pauStack_248);
        lVar19 = *(longlong *)*unaff_R15;
        bVar41 = (byte)(uVar30 >> 0x39);
        auVar43 = ZEXT216(CONCAT11(bVar41,bVar41));
        auVar43 = pshuflw(auVar43,auVar43,0);
        lVar32 = 0;
        while( true ) {
          uVar30 = uVar30 & *(ulonglong *)(*unaff_R15 + 8);
          auVar48 = *(undefined1 (*) [16])(lVar19 + uVar30);
          auVar54[0] = -(auVar48[0] == auVar43[0]);
          auVar54[1] = -(auVar48[1] == auVar43[1]);
          auVar54[2] = -(auVar48[2] == auVar43[2]);
          auVar54[3] = -(auVar48[3] == auVar43[3]);
          auVar54[4] = -(auVar48[4] == auVar43[4]);
          auVar54[5] = -(auVar48[5] == auVar43[5]);
          auVar54[6] = -(auVar48[6] == auVar43[6]);
          auVar54[7] = -(auVar48[7] == auVar43[7]);
          auVar54[8] = -(auVar48[8] == auVar43[0]);
          auVar54[9] = -(auVar48[9] == auVar43[1]);
          auVar54[10] = -(auVar48[10] == auVar43[2]);
          auVar54[0xb] = -(auVar48[0xb] == auVar43[3]);
          auVar54[0xc] = -(auVar48[0xc] == auVar43[4]);
          auVar54[0xd] = -(auVar48[0xd] == auVar43[5]);
          auVar54[0xe] = -(auVar48[0xe] == auVar43[6]);
          auVar54[0xf] = -(auVar48[0xf] == auVar43[7]);
          uVar34 = (ushort)(SUB161(auVar54 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar54[0xf] >> 7) << 0xf;
          uVar26 = (uint)uVar34;
          if (uVar34 != 0) break;
LAB_140a03510:
          auVar52[0] = -(auVar48[0] == -1);
          auVar52[1] = -(auVar48[1] == -1);
          auVar52[2] = -(auVar48[2] == -1);
          auVar52[3] = -(auVar48[3] == -1);
          auVar52[4] = -(auVar48[4] == -1);
          auVar52[5] = -(auVar48[5] == -1);
          auVar52[6] = -(auVar48[6] == -1);
          auVar52[7] = -(auVar48[7] == -1);
          auVar52[8] = -(auVar48[8] == -1);
          auVar52[9] = -(auVar48[9] == -1);
          auVar52[10] = -(auVar48[10] == -1);
          auVar52[0xb] = -(auVar48[0xb] == -1);
          auVar52[0xc] = -(auVar48[0xc] == -1);
          auVar52[0xd] = -(auVar48[0xd] == -1);
          auVar52[0xe] = -(auVar48[0xe] == -1);
          auVar52[0xf] = -(auVar48[0xf] == -1);
          if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar52 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar52 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar52 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar52 >> 0x2f,0) & 1) != 0) || (SUB161(auVar52 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar52 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar52 >> 0x47,0) & 1) != 0) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') goto LAB_140a03592;
          uVar30 = uVar30 + lVar32 + 0x10;
          lVar32 = lVar32 + 0x10;
        }
LAB_140a034e4:
        uVar35 = 0;
        for (uVar9 = uVar26; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar35 = uVar35 + 1;
        }
        lVar36 = (uVar35 + uVar30 & *(ulonglong *)(*unaff_R15 + 8)) * -0x2b0;
        if (pauStack_118 != *(undefined1 (**) [16])(lVar19 + -0x2b0 + lVar36))
        goto code_r0x000140a03503;
        lVar19 = lVar19 + lVar36;
        if ((*(ulonglong *)(lVar19 + -0x298) < 2) || (*(float *)(lVar19 + -0x278) <= 0.0))
        goto LAB_140a03be0;
        pauVar38 = *(undefined1 (**) [16])(lVar19 + -0x210);
        uVar30 = (longlong)pauVar38 * 0xc;
        if ((undefined1 (*) [16])0xaaaaaaaaaaaaaaa < pauVar38) {
          uVar40 = 0;
LAB_140a0357a:
          uStack_d1 = 1;
          pdb_142dc7e2a(uVar40,uVar30);
          goto LAB_140a03c5f;
        }
        uVar5 = *(undefined8 *)(lVar19 + -0x218);
        if (uVar30 == 0) {
          pauStack_e8 = (undefined1 (*) [16])0x4;
          pauStack_e0 = (undefined1 (*) [16])0x0;
          pauVar25 = pauStack_e0;
        }
        else {
          pdb_14007ee60();
          uVar40 = 4;
          pauStack_e8 = (undefined1 (*) [16])pub_1406abab0(uVar30,4);
          pauVar25 = pauVar38;
          if (pauStack_e8 == (undefined1 (*) [16])0x0) goto LAB_140a0357a;
        }
        pauStack_e0 = pauVar25;
        if (pauVar38 != (undefined1 (*) [16])0x0) {
          pub_142e32760(pauStack_e8,uVar5);
        }
        pauStack_100 = *(undefined1 (**) [16])(lVar19 + -0x1f8);
        pauStack_110 = (undefined1 (*) [16])((longlong)pauStack_100 * 4);
        if ((undefined1 (*) [16])0x7ffffffffffffffc < pauStack_110 ||
            (ulonglong)pauStack_100 >> 0x3e != 0) {
          uVar40 = 0;
LAB_140a0364f:
          pdb_142dc7e2a(uVar40,pauStack_110);
          goto LAB_140a03c5f;
        }
        if (((ulonglong)pauStack_100 & 0x3fffffffffffffff) == 0) {
          unaff_R13 = (undefined1 (*) [16])0x4;
          goto LAB_140a0377e;
        }
        puVar6 = *(undefined4 **)(lVar19 + -0x200);
        pdb_14007ee60();
        uVar40 = 4;
        unaff_R13 = (undefined1 (*) [16])pub_1406abab0((longlong)pauStack_100 * 4,4);
        if (unaff_R13 == (undefined1 (*) [16])0x0) goto LAB_140a0364f;
        if (pauStack_100 == (undefined1 (*) [16])0x0) goto LAB_140a0377e;
        pauVar25 = (undefined1 (*) [16])(pauStack_100[-1] + 0xf);
        if (pauStack_100 < (undefined1 (*) [16])(pauStack_100[-1] + 0xf)) {
          pauVar25 = pauStack_100;
        }
        if (pauVar25 < (undefined1 (*) [16])0x8) {
          lVar32 = 0;
          pauVar25 = pauStack_100;
          puVar33 = puVar6;
        }
        else {
          puVar39 = *pauVar25 + 1;
          uVar30 = 8;
          if (((ulonglong)puVar39 & 7) != 0) {
            uVar30 = (ulonglong)((uint)puVar39 & 7);
          }
          lVar32 = (longlong)puVar39 - uVar30;
          pauVar25 = (undefined1 (*) [16])((longlong)pauStack_100 - lVar32);
          puVar33 = puVar6 + lVar32;
          lVar36 = 0;
          do {
            uVar40 = *(undefined8 *)((longlong)(puVar6 + lVar36) + 8);
            uVar5 = *(undefined8 *)(puVar6 + lVar36 + 4);
            uVar14 = *(undefined8 *)((longlong)(puVar6 + lVar36 + 4) + 8);
            *(undefined8 *)(*unaff_R13 + lVar36 * 4) = *(undefined8 *)(puVar6 + lVar36);
            *(undefined8 *)((longlong)(*unaff_R13 + lVar36 * 4) + 8) = uVar40;
            *(undefined8 *)(unaff_R13[1] + lVar36 * 4) = uVar5;
            *(undefined8 *)((longlong)(unaff_R13[1] + lVar36 * 4) + 8) = uVar14;
            lVar36 = lVar36 + 8;
          } while (lVar32 != lVar36);
        }
        puVar29 = (undefined4 *)(*unaff_R13 + lVar32 * 4);
        do {
          if (puVar33 == puVar6 + (longlong)pauStack_100) break;
          uVar2 = *puVar33;
          puVar33 = puVar33 + 1;
          *puVar29 = uVar2;
          puVar29 = puVar29 + 1;
          pauVar25 = (undefined1 (*) [16])(pauVar25[-1] + 0xf);
        } while (pauVar25 != (undefined1 (*) [16])0x0);
LAB_140a0377e:
        uStack_148 = *(undefined4 *)(lVar19 + -0x1f0);
        pauStack_178 = pauStack_e0;
        pauStack_170 = pauStack_e8;
        pauStack_160 = pauStack_100;
        pauStack_150 = pauStack_100;
        pauStack_168 = pauVar38;
        pauStack_158 = unaff_R13;
        pdb_1419aa990(&pauStack_178);
        fVar16 = _DAT_142e36f28;
        uVar26 = pdb_1419a9060(&pauStack_178);
        pauVar25 = (undefined1 (*) [16])(ulonglong)uVar26;
        if (pauVar38 <= pauVar25) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pauVar25,pauVar38,&UNK_14335e4e0);
        }
        puVar39 = *pauVar25;
        if (pauVar38 <= (undefined1 (*) [16])(puVar39 + 1)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2((undefined1 (*) [16])(puVar39 + 1),pauVar38,&UNK_14335e4f8);
        }
        fVar68 = fVar16 - extraout_XMM0_Da;
        fVar66 = *(float *)(*pauStack_e8 + (longlong)pauVar25 * 0xc + 8);
        uVar40 = *(undefined8 *)(*pauStack_e8 + (longlong)pauVar25 * 0xc);
        uVar5 = *(undefined8 *)(*pauStack_e8 + (longlong)puVar39 * 0xc + 0xc);
        fVar67 = *(float *)(pauStack_e8[1] + (longlong)puVar39 * 0xc + 4);
        uVar26 = pdb_1419a9060(&pauStack_178);
        uVar30 = (ulonglong)uVar26;
        if (pauVar38 <= (undefined1 (*) [16])(uVar30 + 1)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2((undefined1 (*) [16])(uVar30 + 1),pauVar38,&UNK_14335e510);
        }
        fVar45 = *(float *)(pauStack_e8[1] + uVar30 * 0xc + 4) -
                 *(float *)(*pauStack_e8 + uVar30 * 0xc + 8);
        fVar42 = (float)*(undefined8 *)(*pauStack_e8 + uVar30 * 0xc + 0xc) -
                 (float)*(undefined8 *)(*pauStack_e8 + uVar30 * 0xc);
        fVar44 = (float)((ulonglong)*(undefined8 *)(*pauStack_e8 + uVar30 * 0xc + 0xc) >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)(*pauStack_e8 + uVar30 * 0xc) >> 0x20);
        fVar44 = fVar16 / SQRT(fVar45 * fVar45 + fVar44 * fVar44 + fVar42 * fVar42);
        fVar42 = fVar42 * fVar44;
        fVar44 = fVar44 * fVar45;
        auVar43._0_4_ = (float)(_DAT_142e37820 ^ (uint)fVar44);
        auVar43._4_4_ = _UNK_142e37824;
        auVar43._8_4_ = _UNK_142e37828;
        auVar43._12_4_ = _UNK_142e3782c;
        auVar48._4_12_ = auVar43._4_12_;
        auVar48._0_4_ = auVar43._0_4_ * (fVar16 / SQRT(fVar42 * fVar42 + fVar44 * fVar44));
        pdb_140de88f0(&pauStack_248,auVar48._0_8_);
        pauVar28 = pauStack_240;
        pauVar25 = pauStack_248;
        pauStack_248 = (undefined1 (*) [16])&pauStack_198;
        pauStack_240 = (undefined1 (*) [16])pdb_140c04ef0;
        pauStack_230 = (undefined1 (*) [16])pdb_140f71a50;
        pauStack_238 = param_2;
        pdb_140f60760(&uStack_280,&UNK_1430351f8,&pauStack_248);
        pauVar38 = pauStack_270;
        uStack_120 = uStack_280;
        pbStack_128 = pbStack_278;
        pdb_14007ee60();
        pauStack_130 = (undefined1 (*) [16])pub_1406abab0(0x30,0x10);
        if (pauStack_130 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(0x10,0x30);
        }
        *(undefined8 *)*pauStack_130 = 1;
        *(undefined8 *)(*pauStack_130 + 8) = 1;
        *(undefined1 (**) [16])pauStack_130[1] = pauVar25;
        *(undefined1 (**) [16])(pauStack_130[1] + 8) = pauVar28;
        *(ulonglong *)pauStack_130[2] =
             CONCAT44(extraout_XMM0_Da * (float)((ulonglong)uVar5 >> 0x20) +
                      fVar68 * (float)((ulonglong)uVar40 >> 0x20),
                      extraout_XMM0_Da * (float)uVar5 + fVar68 * (float)uVar40);
        *(float *)(pauStack_130[2] + 8) = fVar66 * fVar68 + fVar67 * extraout_XMM0_Da;
        pauStack_240 = (undefined1 (*) [16])&UNK_143035210;
        pauStack_248 = pauStack_130;
        if ((longlong)pauVar38 < 0) {
          uVar40 = 0;
LAB_140a039e3:
          pdb_142dc7e2a(uVar40,pauVar38);
          goto LAB_140a03c5f;
        }
        if (pauVar38 == (undefined1 (*) [16])0x0) {
          unaff_R15 = (undefined1 (*) [16])0x1;
        }
        else {
          pdb_14007ee60();
          uVar40 = 1;
          unaff_R15 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar38,1);
          if (unaff_R15 == (undefined1 (*) [16])0x0) goto LAB_140a039e3;
          pub_142e32760(unaff_R15,pbStack_128,pauVar38);
        }
        pauStack_240 = (undefined1 (*) [16])CONCAT71(pauStack_240._1_7_,2);
        pauStack_238 = pauVar38;
        pauStack_228 = pauVar38;
        pauStack_220 = pauStack_130;
        puStack_218 = &UNK_143035210;
        pauStack_230 = unaff_R15;
        pdb_141a88350(uVar27,&pauStack_248);
        if (uStack_120 != 0) {
          pub_1406abac0(pbStack_128,uStack_120,1);
        }
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        lVar19 = *param_6;
        lVar32 = *(longlong *)(lVar19 + 0x30);
        param_2 = *(undefined1 (**) [16])(lVar19 + 0x40);
        if (lVar32 == *(longlong *)(lVar19 + 0x20)) {
          pdb_142d7e830(lVar19 + 0x20);
        }
        lVar36 = *(longlong *)(lVar19 + 0x28);
        *(undefined1 (***) [16])(lVar36 + lVar32 * 0x18) = ppauStack_180;
        *(undefined1 (**) [16])(lVar36 + 8 + lVar32 * 0x18) = pauStack_118;
        *(undefined1 (**) [16])(lVar36 + 0x10 + lVar32 * 0x18) = param_2;
        param_4 = (undefined1 (*) [16])(lVar32 + 1);
        *(undefined1 (**) [16])(lVar19 + 0x30) = param_4;
        *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
        if (pauStack_e0 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_e8,(longlong)pauStack_e0 * 0xc,4);
        }
        if (pauStack_100 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)unaff_R13,(ulonglong)pauStack_110,4);
        }
      }
      if (pauStack_f8 != (undefined1 (*) [16])0x0) {
        pub_1406abac0(pbStack_138,(longlong)pauStack_f8 * 4,4);
      }
      goto LAB_140a028c8;
    }
  }
  else if (bVar15) goto LAB_140a028d4;
  return;
LAB_140a02b2d:
  uVar30 = uVar30 & *(ulonglong *)(*unaff_R15 + 8);
  auVar48 = *(undefined1 (*) [16])(lVar32 + uVar30);
  auVar50[0] = -(auVar48[0] == auVar43[0]);
  auVar50[1] = -(auVar48[1] == auVar43[1]);
  auVar50[2] = -(auVar48[2] == auVar43[2]);
  auVar50[3] = -(auVar48[3] == auVar43[3]);
  auVar50[4] = -(auVar48[4] == auVar43[4]);
  auVar50[5] = -(auVar48[5] == auVar43[5]);
  auVar50[6] = -(auVar48[6] == auVar43[6]);
  auVar50[7] = -(auVar48[7] == auVar43[7]);
  auVar50[8] = -(auVar48[8] == auVar43[0]);
  auVar50[9] = -(auVar48[9] == auVar43[1]);
  auVar50[10] = -(auVar48[10] == auVar43[2]);
  auVar50[0xb] = -(auVar48[0xb] == auVar43[3]);
  auVar50[0xc] = -(auVar48[0xc] == auVar43[4]);
  auVar50[0xd] = -(auVar48[0xd] == auVar43[5]);
  auVar50[0xe] = -(auVar48[0xe] == auVar43[6]);
  auVar50[0xf] = -(auVar48[0xf] == auVar43[7]);
  uVar34 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
  uVar35 = (uint)uVar34;
  while( true ) {
    if (uVar34 == 0) goto LAB_140a02b73;
    uVar9 = 0;
    for (uVar8 = uVar35; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    lVar37 = (uVar9 + uVar30 & *(ulonglong *)(*unaff_R15 + 8)) * -0x2b0;
    if (param_4 == *(undefined1 (**) [16])(lVar32 + -0x2b0 + lVar37)) break;
    uVar34 = (ushort)(uVar35 - 1) & (ushort)uVar35;
    uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar34);
  }
  goto LAB_140a02b92;
LAB_140a02b73:
  auVar47[0] = -(auVar48[0] == (char)iVar10);
  auVar47[1] = -(auVar48[1] == cVar18);
  auVar47[2] = -(auVar48[2] == cVar55);
  auVar47[3] = -(auVar48[3] == cVar56);
  auVar47[4] = -(auVar48[4] == (char)iVar11);
  auVar47[5] = -(auVar48[5] == cVar57);
  auVar47[6] = -(auVar48[6] == cVar58);
  auVar47[7] = -(auVar48[7] == cVar59);
  auVar47[8] = -(auVar48[8] == (char)iVar12);
  auVar47[9] = -(auVar48[9] == cVar60);
  auVar47[10] = -(auVar48[10] == cVar61);
  auVar47[0xb] = -(auVar48[0xb] == cVar62);
  auVar47[0xc] = -(auVar48[0xc] == (char)iVar13);
  auVar47[0xd] = -(auVar48[0xd] == cVar63);
  auVar47[0xe] = -(auVar48[0xe] == cVar64);
  auVar47[0xf] = -(auVar48[0xf] == cVar65);
  if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar47 >> 0x17,0) & 1) != 0) || (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar47 >> 0x27,0) & 1) != 0) || (SUB161(auVar47 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x37,0) & 1) != 0) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') {
LAB_140a03054:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143035288);
  }
  uVar30 = uVar30 + lVar36 + 0x10;
  lVar36 = lVar36 + 0x10;
  goto LAB_140a02b2d;
LAB_140a02b92:
  lVar32 = lVar32 + lVar37;
  if ((*(ulonglong *)(lVar32 + -0x298) < 2) || (*(float *)(lVar32 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143035270);
  }
  if (fVar16 < *(float *)(lVar32 + -0x20) || fVar16 == *(float *)(lVar32 + -0x20)) {
    pauVar25 = *(undefined1 (**) [16])(lVar32 + -0x260);
    pauVar28 = (undefined1 (*) [16])((longlong)pauVar25 * 0xc);
    if ((undefined1 (*) [16])0xaaaaaaaaaaaaaaa < pauVar25) {
      uVar27 = 0;
      pauStack_118 = unaff_RSI;
LAB_140a030ca:
      pdb_142dc7e2a(uVar27,pauVar28);
      goto LAB_140a03c5f;
    }
    pauStack_e0 = *(undefined1 (**) [16])(lVar32 + -0x268);
    if (pauVar28 == (undefined1 (*) [16])0x0) {
      pauVar24 = (undefined1 (*) [16])0x4;
      pauStack_f8 = (undefined1 (*) [16])0x0;
      pauStack_118 = unaff_RSI;
      pauVar17 = pauStack_f8;
    }
    else {
      pauStack_118 = unaff_RSI;
      pauStack_f0 = pauVar28;
      pdb_14007ee60();
      pauVar24 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauStack_f0,4);
      uVar27 = 4;
      pauVar28 = pauStack_f0;
      pauVar17 = pauVar25;
      if (pauVar24 == (undefined1 (*) [16])0x0) goto LAB_140a030ca;
    }
    pauStack_f8 = pauVar17;
    if (pauVar25 == (undefined1 (*) [16])0x0) {
      pauStack_f0 = (undefined1 (*) [16])0x0;
      pauStack_e0 = pauVar24;
    }
    else {
      pauStack_f0 = pauVar25;
      pauVar25 = pauStack_e0;
      pauStack_e0 = pauVar24;
      pub_142e32760(pauVar24,pauVar25);
    }
  }
  else {
    pauStack_f0 = *(undefined1 (**) [16])(lVar32 + -0x260);
    if (pauStack_f0 == (undefined1 (*) [16])0x0) {
      pauStack_e0 = (undefined1 (*) [16])0x4;
      pauStack_f0 = (undefined1 (*) [16])0x0;
      pauStack_f8 = (undefined1 (*) [16])0x0;
      pauStack_118 = unaff_RSI;
      goto LAB_140a02d93;
    }
    lVar32 = *(longlong *)(lVar32 + -0x268);
    pauStack_f8 = (undefined1 (*) [16])((longlong)pauStack_f0 * 0xc);
    pauStack_118 = unaff_RSI;
    pdb_14007ee60();
    pauVar25 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauStack_f8,4);
    if (pauVar25 == (undefined1 (*) [16])0x0) {
      pdb_142dc7e2a(4,pauStack_f8);
      goto LAB_140a03c5f;
    }
    if (pauStack_f0 == (undefined1 (*) [16])0x1) {
      uVar30 = 0;
      goto LAB_140a02d31;
    }
    lVar36 = 0x14;
    uVar30 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar32 + -0xc + lVar36);
      uVar27 = *(undefined8 *)(lVar32 + -0x14 + lVar36);
      *(ulonglong *)(pauVar25[-2] + lVar36 + 0xc) =
           CONCAT44((float)((ulonglong)uVar27 >> 0x20) + fVar67,(float)uVar27 + fVar66);
      *(undefined4 *)(pauVar25[-1] + lVar36 + 4) = uVar2;
      uVar2 = *(undefined4 *)(lVar32 + lVar36);
      uVar27 = *(undefined8 *)(lVar32 + -8 + lVar36);
      *(ulonglong *)(pauVar25[-1] + lVar36 + 8) =
           CONCAT44((float)((ulonglong)uVar27 >> 0x20) + fVar67,(float)uVar27 + fVar66);
      *(undefined4 *)(*pauVar25 + lVar36) = uVar2;
      uVar30 = uVar30 + 2;
      lVar36 = lVar36 + 0x18;
    } while (((ulonglong)pauStack_f0 & 0xfffffffffffffffe) != uVar30);
    if (((ulonglong)pauStack_f0 & 1) != 0) {
LAB_140a02d31:
      lVar36 = uVar30 * 0xc;
      uVar2 = *(undefined4 *)(lVar32 + 8 + lVar36);
      *(ulonglong *)(*pauVar25 + lVar36) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar32 + lVar36) >> 0x20) + fVar67,
                    (float)*(undefined8 *)(lVar32 + lVar36) + fVar66);
      *(undefined4 *)(*pauVar25 + lVar36 + 8) = uVar2;
    }
    pauStack_f8 = pauStack_f0;
    pauStack_e0 = pauVar25;
  }
LAB_140a02d93:
  pauStack_178 = (undefined1 (*) [16])&pauStack_258;
  pauStack_170 = (undefined1 (*) [16])pdb_140c04ef0;
  pdb_140f60760(&pauStack_248,&UNK_1430352a0,&pauStack_178);
  pauStack_178 = pauStack_248;
  pauStack_170 = pauStack_240;
  pauStack_168 = pauStack_238;
  uVar30 = (longlong)pauStack_f0 * 0xc;
  if ((undefined1 (*) [16])0xaaaaaaaaaaaaaaa < pauStack_f0) {
    uVar27 = 0;
LAB_140a030b3:
    uStack_d2 = 1;
    pdb_142dc7e2a(uVar27,uVar30);
    goto LAB_140a03c5f;
  }
  if (pauStack_f0 == (undefined1 (*) [16])0x0) {
    pbVar22 = (byte *)0x4;
  }
  else {
    pdb_14007ee60();
    pbVar22 = pub_1406abab0(uVar30,4);
    uVar27 = 4;
    if (pbVar22 == (byte *)0x0) goto LAB_140a030b3;
    pub_142e32760(pbVar22,pauStack_e0);
  }
  pauStack_248 = (undefined1 (*) [16])0x0;
  pauStack_240 = (undefined1 (*) [16])0x8;
  pauStack_238 = (undefined1 (*) [16])0x0;
  pauStack_230 = (undefined1 (*) [16])CONCAT44(pauStack_230._4_4_,1);
  pauStack_228 = (undefined1 (*) [16])0x1;
  puStack_218 = (undefined *)CONCAT44(puStack_218._4_4_,2);
  uStack_200 = 3;
  uStack_1e8 = 3;
  uStack_1d0 = 0;
  uStack_1c0 = 1;
  uStack_1bc = 0x3f000000;
  pauStack_1b8 = pauStack_f0;
  pauStack_1a8 = pauStack_f0;
  uStack_1a0 = 0x101;
  uStack_d2 = 0;
  ppauVar31 = &pauStack_178;
  pbStack_1b0 = pbVar22;
  lVar32 = pdb_1409008d0(pauStack_100,ppauVar31,&pauStack_248);
  unaff_RSI = pauStack_118;
  if (((*(char *)(lVar32 + 0x18) != '\0') && (*(undefined1 (***) [16])(lVar32 + 0x38) == ppauVar31))
     && (*(int *)(lVar32 + 0x28) != 2)) {
    pbStack_108 = (byte *)CONCAT71((int7)((ulonglong)lVar32 >> 8),1);
    unaff_RSI = param_4;
    ppauStack_180 = ppauVar31;
  }
  if (pauStack_f8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_e0,(longlong)pauStack_f8 * 0xc,4);
  }
  goto LAB_140a029b3;
code_r0x000140a03503:
  uVar34 = (ushort)(uVar26 - 1) & (ushort)uVar26;
  uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar34);
  if (uVar34 == 0) goto LAB_140a03510;
  goto LAB_140a034e4;
}

