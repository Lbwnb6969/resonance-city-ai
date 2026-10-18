// VA 0x14088fda0, PDB extent 7963 bytes
// system_decorator::decorator_visual::flag_connections::generate_flag_connections
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/flag_connections.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140890863) overlaps instruction at (ram,0x000140890862)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::flag_connections::generate_flag_connections
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/flag_connections.rs
   Extent: 7963 */

void pdb_14088fda0(undefined8 *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  int *piVar24;
  char *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  longlong lVar30;
  undefined8 *puVar31;
  undefined1 (*pauVar32) [16];
  undefined8 *puVar33;
  longlong lVar34;
  undefined *puVar35;
  ushort uVar36;
  uint uVar37;
  ulonglong unaff_R12;
  undefined4 unaff_R13D;
  undefined *puVar38;
  ulonglong *puVar39;
  undefined1 (*pauVar40) [16];
  float *pfVar41;
  byte bVar42;
  float fVar43;
  float fVar45;
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar49;
  float fVar50;
  undefined1 auVar48 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 unaff_XMM6_Ba;
  undefined1 uVar61;
  undefined1 unaff_XMM6_Bb;
  undefined1 uVar62;
  undefined1 unaff_XMM6_Bc;
  undefined1 uVar63;
  undefined1 unaff_XMM6_Bd;
  undefined1 uVar64;
  undefined1 unaff_XMM6_Be;
  undefined1 uVar65;
  undefined1 unaff_XMM6_Bf;
  undefined1 uVar66;
  undefined1 unaff_XMM6_Bg;
  undefined1 uVar67;
  undefined1 unaff_XMM6_Bh;
  undefined1 uVar68;
  undefined1 unaff_XMM6_Bi;
  undefined1 uVar69;
  undefined1 unaff_XMM6_Bj;
  undefined1 uVar70;
  undefined1 unaff_XMM6_Bk;
  undefined1 uVar71;
  undefined1 unaff_XMM6_Bl;
  undefined1 uVar72;
  undefined1 unaff_XMM6_Bm;
  undefined1 uVar73;
  undefined1 unaff_XMM6_Bn;
  undefined1 uVar74;
  undefined1 unaff_XMM6_Bo;
  undefined1 uVar75;
  undefined1 unaff_XMM6_Bp;
  undefined1 uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  longlong *in_stack_00000068;
  undefined4 uVar91;
  undefined8 uVar90;
  undefined8 auStack_348 [13];
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [8];
  longlong lStack_288;
  longlong lStack_280;
  longlong lStack_278;
  longlong lStack_270;
  undefined8 uStack_268;
  ushort uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  byte abStack_1a0 [8];
  undefined *puStack_198;
  longlong lStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  undefined8 uStack_138;
  longlong *plStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  puVar31 = auStack_348;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_2a0 = param_4;
  uStack_298 = param_3;
  puStack_198 = param_2;
  cVar16 = pdb_140e94b40();
  if (cVar16 == '\0') {
    uStack_248 = 0;
    goto LAB_14088ffc7;
  }
  param_2 = &UNK_1430127e9;
  lVar34 = 0x4f;
  uVar28 = 0x4f;
  lVar19 = pdb_140892540(&UNK_1430127e9);
  if (lVar19 != 1) {
LAB_14088fe9c:
    puVar35 = &UNK_14301261b;
    puVar38 = &UNK_1430125da;
    do {
      bVar42 = puVar35[-1];
      uVar17 = (uint)(char)bVar42;
      if ((char)bVar42 < '\0') {
        bVar5 = puVar35[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar35[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar35 + -4;
            puVar35 = puVar35 + -4;
            uVar17 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar35 = puVar35 + -3;
            uVar17 = bVar6 & 0xf;
          }
          uVar17 = bVar5 & 0x3f | uVar17 << 6;
        }
        else {
          puVar35 = puVar35 + -2;
          uVar17 = bVar5 & 0x1f;
        }
        uVar17 = (uint)(bVar42 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_14088ff24;
LAB_14088ff3d:
        if ((undefined *)0x41 < puVar35 + -0x1430125d9) goto LAB_140891406;
        lVar19 = 0x41 - (longlong)(puVar35 + -0x1430125d9);
        puVar38 = puVar35 + 1;
        goto LAB_14088ff60;
      }
      puVar35 = puVar35 + -1;
      if (uVar17 == 0x5c) goto LAB_14088ff3d;
LAB_14088ff24:
      if (uVar17 == 0x2f) goto LAB_14088ff3d;
    } while (puVar35 != &UNK_1430125da);
    lVar19 = 0x41;
LAB_14088ff60:
    plVar21 = (longlong *)pdb_140e97000();
    if (((char)plVar21[0xd] == '\x01') ||
       (plVar21 = (longlong *)pdb_142dde6e0(plVar21,0), plVar21 != (longlong *)0x0)) {
      if (*plVar21 == 0) {
        *plVar21 = -1;
        plStack_100 = plVar21;
        uStack_240 = pdb_140e94f10(plVar21 + 1,param_2,lVar34,puVar38,lVar19,1,0);
        *plStack_100 = *plStack_100 + 1;
        uStack_248 = 1;
LAB_14088ffc7:
        uVar29 = *param_1;
        uStack_2e0 = pdb_140c47770(in_stack_00000040);
        uStack_1c0 = 0;
        uStack_1b8 = 0x10;
        uStack_1b0 = 0;
        uStack_1d8 = 0;
        uStack_1d0 = 0x10;
        uStack_1c8 = 0;
        uStack_f1 = 1;
        puStack_2d8 = param_2;
        pdb_140c41140(auStack_290,uVar29);
        fVar81 = _UNK_14301247c;
        fVar79 = _UNK_143012478;
        fVar78 = _UNK_143012474;
        fVar77 = _DAT_143012470;
        fVar59 = _UNK_14301246c;
        fVar58 = _UNK_143012468;
        fVar56 = _UNK_143012464;
        fVar54 = _DAT_143012460;
        fVar80 = _UNK_14301245c;
        fVar57 = _UNK_143012458;
        fVar50 = _UNK_143012454;
        fVar49 = _DAT_143012450;
        fVar47 = _UNK_14301244c;
        fVar55 = _UNK_143012448;
        fVar53 = _UNK_143012444;
        fVar52 = _DAT_143012440;
        uVar7 = _DAT_142e37950;
        fVar43 = _UNK_142e377dc;
        fVar51 = _UNK_142e377d8;
        fVar60 = _UNK_142e377d4;
        fVar86 = _DAT_142e377d0;
        fVar85 = _UNK_142e377cc;
        fVar84 = _UNK_142e377c8;
        fVar45 = _UNK_142e377c4;
        fVar83 = _DAT_142e377c0;
        abStack_1a0[0] = auStack_290[0];
        uStack_138 = *in_stack_00000048;
        iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                  CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                        CONCAT13(unaff_XMM6_Bd,
                                 CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
        iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                  CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                        CONCAT13(unaff_XMM6_Bh,
                                 CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
        iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                  CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                        CONCAT13(unaff_XMM6_Bl,
                                 CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
        iVar13 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                  CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                        CONCAT13(unaff_XMM6_Bp,
                                 CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
        uVar28 = (ulonglong)uStack_258;
        uStack_160 = uStack_250;
        uStack_188 = *in_stack_00000068;
        lStack_190 = *in_stack_00000068 + 0x20;
        uVar29 = uStack_268;
        lVar19 = lStack_288;
        do {
          puVar31[0x48] = uVar29;
          lVar34 = lStack_278;
          if (lStack_280 == 2) {
LAB_140890273:
            if ((*(byte *)(puVar31 + 0x35) & lVar19 != 0) == 0) goto LAB_14089096f;
            puVar31[0x45] = lVar34;
            puVar31[0x44] = uVar28;
            puVar31[0x43] = lStack_270;
            lVar22 = 2;
            puVar31[0x47] = 2;
            puVar31[0x46] = 0;
          }
          else {
            pauVar23 = (undefined1 (*) [16])puVar31[0x48];
            if (lStack_270 == 0) {
LAB_1408901fe:
              puVar31[0x48] = pauVar23;
joined_r0x00014089026b:
              if (lStack_280 == 1) {
                lStack_270 = 0;
                lVar34 = 0;
                if (lStack_278 != 0) {
                  puVar31[0x44] = uVar28;
                  puVar31[0x47] = 1;
                  puVar31[0x43] = 0;
                  puVar31[0x45] = 0;
                  puVar31[0x46] = lVar19;
                  lVar22 = 1;
                  lVar19 = lStack_278;
                  goto LAB_1408902b1;
                }
              }
              else {
                lStack_270 = 0;
              }
              goto LAB_140890273;
            }
            if (puVar31[0x3d] == 0) {
              puVar31[0x3d] = 0;
              puVar31[0x48] = pauVar23;
              goto joined_r0x00014089026b;
            }
            puVar31[0x47] = lStack_280;
            if ((short)uVar28 == 0) {
              do {
                auVar44 = *pauVar23;
                lStack_270 = lStack_270 + -0x980;
                pauVar23 = pauVar23 + 1;
                uVar17 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
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
                uVar28 = (ulonglong)uVar17;
              } while (uVar17 == 0);
              puVar31[0x48] = pauVar23;
            }
            uVar17 = 0;
            uVar37 = (uint)uVar28;
            for (uVar18 = uVar37; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
              uVar17 = uVar17 + 1;
            }
            puVar31[0x43] = lStack_270;
            *(undefined1 *)((longlong)puVar31 + 599) = 1;
            lVar22 = pdb_140c44590(lStack_270 + (ulonglong)uVar17 * -0x98 + -0x98);
            uVar28 = (ulonglong)(uVar37 - 1 & uVar37);
            puVar31[0x3d] = puVar31[0x3d] + -1;
            if (lVar22 == 3) {
              pauVar23 = (undefined1 (*) [16])puVar31[0x48];
              lStack_280 = puVar31[0x47];
              goto LAB_1408901fe;
            }
            puVar31[0x44] = uVar28;
            puVar31[0x46] = lVar19;
            lVar19 = puVar31[0x43] + (ulonglong)uVar17 * -0x98 + -0x90;
            puVar31[0x45] = lStack_278;
            puVar31[0x34] = uVar29;
          }
LAB_1408902b1:
          puVar31[0x17] = lVar22;
          puVar31[0x18] = puVar31[0x34];
          pauVar40 = *(undefined1 (**) [16])(lVar19 + 0x30);
          auVar44 = *pauVar40;
          unaff_R12 = (ulonglong)
                      ~(uint)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar44[0xf] >> 7) << 0xf);
          pauVar23 = pauVar40 + 1;
          lVar19 = *(longlong *)(lVar19 + 0x48);
LAB_140890870:
          if (lVar19 != 0) {
            pauVar32 = pauVar23;
            if ((short)unaff_R12 == 0) {
              do {
                auVar44 = *pauVar23;
                pauVar40 = pauVar40 + -0x68;
                pauVar23 = pauVar23 + 1;
                uVar17 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
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
                unaff_R12 = (ulonglong)uVar17;
                pauVar32 = pauVar23;
              } while (uVar17 == 0);
            }
            uVar37 = (uint)unaff_R12;
            uVar17 = 0;
            for (uVar18 = uVar37; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
              uVar17 = uVar17 + 1;
            }
            unaff_R12 = (ulonglong)(uVar37 - 1 & uVar37);
            lVar34 = (ulonglong)uVar17 * -0x68;
            lVar19 = lVar19 + -1;
            pauVar23 = pauVar32;
            if (*(int *)((longlong)pauVar40 + lVar34 + -0x60) == 5) {
              uVar91 = *(undefined4 *)((longlong)pauVar40 + lVar34 + -0x68);
              *(undefined4 *)(puVar31 + 0x22) = uVar91;
              if (*(longlong *)(puVar31[0x38] + 0x18) != 0) {
                *(undefined4 *)(puVar31 + 0x49) = uVar91;
                puVar31[0x3e] = lVar19;
                *(undefined1 *)((longlong)puVar31 + 599) = 1;
                uVar20 = pdb_1400aede0(puVar31[0x37],puVar31 + 0x22);
                lVar34 = lVar34 + (longlong)pauVar40;
                uVar17 = *(uint *)(puVar31 + 0x49);
                lVar22 = *(longlong *)puVar31[0x38];
                uVar28 = ((longlong *)puVar31[0x38])[1];
                bVar42 = (byte)(uVar20 >> 0x39);
                auVar44 = ZEXT216(CONCAT11(bVar42,bVar42));
                auVar44 = pshuflw(auVar44,auVar44,0);
                lVar30 = 0;
                do {
                  uVar20 = uVar20 & uVar28;
                  auVar4 = *(undefined1 (*) [16])(lVar22 + uVar20);
                  auVar48[0] = -(auVar4[0] == auVar44[0]);
                  auVar48[1] = -(auVar4[1] == auVar44[1]);
                  auVar48[2] = -(auVar4[2] == auVar44[2]);
                  auVar48[3] = -(auVar4[3] == auVar44[3]);
                  auVar48[4] = -(auVar4[4] == auVar44[4]);
                  auVar48[5] = -(auVar4[5] == auVar44[5]);
                  auVar48[6] = -(auVar4[6] == auVar44[6]);
                  auVar48[7] = -(auVar4[7] == auVar44[7]);
                  auVar48[8] = -(auVar4[8] == auVar44[0]);
                  auVar48[9] = -(auVar4[9] == auVar44[1]);
                  auVar48[10] = -(auVar4[10] == auVar44[2]);
                  auVar48[0xb] = -(auVar4[0xb] == auVar44[3]);
                  auVar48[0xc] = -(auVar4[0xc] == auVar44[4]);
                  auVar48[0xd] = -(auVar4[0xd] == auVar44[5]);
                  auVar48[0xe] = -(auVar4[0xe] == auVar44[6]);
                  auVar48[0xf] = -(auVar4[0xf] == auVar44[7]);
                  uVar36 = (ushort)(SUB161(auVar48 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
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
                           (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar48[0xf] >> 7) << 0xf;
                  uVar18 = (uint)uVar36;
                  while (uVar36 != 0) {
                    uVar37 = 0;
                    for (uVar9 = uVar18; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                      uVar37 = uVar37 + 1;
                    }
                    if (uVar17 == *(uint *)(lVar22 + (uVar37 + uVar20 & uVar28) * -0x10 + -0x10)) {
                      puVar31[0x41] = (ulonglong)uVar17;
                      *(undefined1 *)((longlong)puVar31 + 599) = 1;
                      pdb_140c45ec0(puVar31 + 0x28,puVar31[0x42],uVar17,&UNK_1430126d8);
                      *(undefined1 *)((longlong)puVar31 + 599) = 1;
                      piVar24 = (int *)pdb_140c45920(puVar31 + 0xd,*(undefined4 *)(puVar31 + 0x49));
                      bVar42 = *(byte *)(lVar34 + -0x2e);
                      uVar28 = (ulonglong)bVar42 - 1;
                      if ((ulonglong)bVar42 < 2) {
                        uVar28 = 0;
                      }
                      puVar31[0x3a] = uVar28;
                      puVar35 = &UNK_1430128f0 + *(int *)(&UNK_1430128f0 + uVar28 * 4);
                      cVar16 = (char)puVar35;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                      switch(bVar42) {
                      case 3:
                        fVar82 = *(float *)(puVar31 + 0x28);
                        fVar87 = *(float *)((longlong)puVar31 + 0x144);
                        fVar88 = *(float *)(puVar31 + 0x29);
                        fVar89 = *(float *)((longlong)puVar31 + 0x14c);
                        fVar83 = fVar88 * fVar77 * fVar86 + fVar87 * fVar54 * fVar83 +
                                 fVar82 * fVar49 * _DAT_142e377b0 + fVar89 * fVar52;
                        fVar45 = fVar88 * fVar78 * fVar60 + fVar87 * fVar56 * fVar45 +
                                 fVar82 * fVar50 * _UNK_142e377b4 + fVar89 * fVar53;
                        fVar84 = fVar88 * fVar79 * fVar51 + fVar87 * fVar58 * fVar84 +
                                 fVar82 * fVar57 * _UNK_142e377b8 + fVar89 * fVar55;
                        fVar85 = fVar88 * fVar81 * fVar43 + fVar87 * fVar59 * fVar85 +
                                 fVar82 * fVar80 * _UNK_142e377bc + fVar89 * fVar47;
                        *(float *)(puVar31 + 0x28) = fVar83;
                        *(float *)((longlong)puVar31 + 0x144) = fVar45;
                        *(float *)(puVar31 + 0x29) = fVar84;
                        *(float *)((longlong)puVar31 + 0x14c) = fVar85;
                        fVar60 = fVar84 * fVar84;
                        fVar51 = fVar85 * fVar85;
                        fVar43 = fVar45 * fVar45 + fVar83 * fVar83;
                        fVar86 = fVar84 * 0.0 + fVar45 * 0.0 + fVar83 * _DAT_143007998;
                        fVar86 = fVar86 + fVar86;
                        fVar85 = fVar85 + fVar85;
                        puVar31[0x2a] =
                             CONCAT44((float)((ulonglong)puVar31[0x2a] >> 0x20) + _UNK_1430124a4 +
                                      fVar85 * (fVar84 * _UNK_143012484 - fVar83 * _UNK_143012494) +
                                      fVar86 * fVar45 + (fVar51 - (fVar43 + fVar60)) * 0.0,
                                      (float)puVar31[0x2a] + _DAT_1430124a0 +
                                      fVar85 * (fVar45 * _DAT_143012480 - fVar84 * _DAT_143012490) +
                                      fVar86 * fVar83 +
                                      (fVar51 - (fVar43 + fVar60)) * _DAT_143007998);
                        *(float *)(puVar31 + 0x2b) =
                             fVar85 * (fVar83 * _UNK_143012488 - fVar45 * _UNK_143012498) +
                             fVar86 * fVar84 + (fVar51 - (fVar43 + fVar60)) * 0.0 +
                             *(float *)(puVar31 + 0x2b);
                      case 2:
                      case 4:
                        *(undefined1 *)((longlong)puVar31 + 599) = 1;
                        pdb_140901440(lVar34 + -0x28,&UNK_1430126f0);
                        puVar35 = &UNK_143012900;
                        piVar24 = (int *)puVar31[0x3a];
                      case 5:
                    /* WARNING: Could not recover jumptable at 0x000140890715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*(code *)(puVar35 + *(int *)(puVar35 + (longlong)piVar24 * 4)))();
                        return;
                      default:
                        *piVar24 = *piVar24 + (int)piVar24;
                        pcVar25 = (char *)(lVar30 + -0x73 + (longlong)puVar35 * 4);
                        *pcVar25 = *pcVar25 + cVar16;
                        LOCK();
                        *piVar24 = *piVar24 + (int)piVar24;
                        UNLOCK();
                        (*pauVar32)[0xf] = (*pauVar32)[0xf] + (char)((ulonglong)piVar24 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                      case 7:
                        uVar18 = (uint)(short)piVar24;
                        piVar24 = (int *)(ulonglong)uVar18;
                        *piVar24 = *piVar24 + uVar18;
                        pcVar25 = (char *)(lVar30 + -0x73 + (longlong)puVar35 * 4);
                        *pcVar25 = *pcVar25 + cVar16;
                        LOCK();
                        *piVar24 = *piVar24 + uVar18;
                        UNLOCK();
                        pauVar23 = (undefined1 (*) [16])(*pauVar32 + 4);
                        pcVar25 = (char *)(ulonglong)*(uint *)*pauVar32;
                        *pcVar25 = *pcVar25 + (char)*(uint *)*pauVar32;
                        pcVar25[-0x75] = pcVar25[-0x75] + cVar16 + (char)((ulonglong)puVar35 >> 8);
                        puVar31 = (undefined8 *)0x180;
                        if (lVar34 == lRam00000000000002f0) {
                          uRam00000000000003d7 = 1;
                          bRam0000000000000350 = (byte)uVar28;
                          pdb_142d7eb40(0x2f0);
                          uVar28 = (ulonglong)bRam0000000000000350;
                        }
                        lVar19 = lRam00000000000002f8;
                        uVar27 = uRam00000000000002d8;
                        uVar90 = uRam00000000000002d0;
                        uVar26 = uRam00000000000002c8;
                        uVar29 = uRam00000000000002c0;
                        lVar22 = lVar34 * 0x50;
                        *(undefined1 (*) [16])(lRam00000000000002f8 + 0x20 + lVar22) =
                             auRam00000000000002e0;
                        puVar33 = (undefined8 *)(lVar19 + 0x10 + lVar22);
                        *puVar33 = uVar90;
                        puVar33[1] = uVar27;
                        *(undefined8 *)(lVar19 + lVar22) = uVar29;
                        ((undefined8 *)(lVar19 + lVar22))[1] = uVar26;
                        *(undefined8 *)(lVar19 + 0x30 + lVar22) = uRam0000000000000388;
                        *(undefined8 *)(lVar19 + 0x38 + lVar22) = uVar7;
                        *(undefined4 *)(lVar19 + 0x40 + lVar22) = uRam00000000000003c8;
                        *(uint *)(lVar19 + 0x44 + lVar22) = uVar17;
                        *(undefined4 *)(lVar19 + 0x48 + lVar22) = unaff_R13D;
                        *(char *)(lVar19 + 0x4c + lVar22) = (char)lVar30;
                        *(char *)(lVar19 + 0x4d + lVar22) = (char)uVar28;
                        lRam0000000000000300 = lVar34 + 1;
                        lVar19 = lRam0000000000000370;
                      }
                      goto LAB_140890870;
                    }
                    uVar36 = (ushort)(uVar18 - 1) & (ushort)uVar18;
                    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar36);
                  }
                  auVar46[0] = -(auVar4[0] == (char)iVar10);
                  auVar46[1] = -(auVar4[1] == (char)((uint)iVar10 >> 8));
                  auVar46[2] = -(auVar4[2] == (char)((uint)iVar10 >> 0x10));
                  auVar46[3] = -(auVar4[3] == (char)((uint)iVar10 >> 0x18));
                  auVar46[4] = -(auVar4[4] == (char)iVar11);
                  auVar46[5] = -(auVar4[5] == (char)((uint)iVar11 >> 8));
                  auVar46[6] = -(auVar4[6] == (char)((uint)iVar11 >> 0x10));
                  auVar46[7] = -(auVar4[7] == (char)((uint)iVar11 >> 0x18));
                  auVar46[8] = -(auVar4[8] == (char)iVar12);
                  auVar46[9] = -(auVar4[9] == (char)((uint)iVar12 >> 8));
                  auVar46[10] = -(auVar4[10] == (char)((uint)iVar12 >> 0x10));
                  auVar46[0xb] = -(auVar4[0xb] == (char)((uint)iVar12 >> 0x18));
                  auVar46[0xc] = -(auVar4[0xc] == (char)iVar13);
                  auVar46[0xd] = -(auVar4[0xd] == (char)((uint)iVar13 >> 8));
                  auVar46[0xe] = -(auVar4[0xe] == (char)((uint)iVar13 >> 0x10));
                  auVar46[0xf] = -(auVar4[0xf] == (char)((uint)iVar13 >> 0x18));
                  lVar19 = puVar31[0x3e];
                  if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar46 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar46 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar46 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar46 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar46 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar46 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x6f,0) & 1) != 0) || (SUB161(auVar46 >> 0x77,0) & 1) != 0
                      ) || auVar46[0xf] < '\0') break;
                  uVar20 = uVar20 + lVar30 + 0x10;
                  lVar30 = lVar30 + 0x10;
                } while( true );
              }
            }
            goto LAB_140890870;
          }
          lStack_278 = puVar31[0x45];
          lVar19 = puVar31[0x46];
          uVar29 = puVar31[0x48];
          lStack_280 = puVar31[0x47];
          lStack_270 = puVar31[0x43];
          uVar28 = puVar31[0x44];
        } while( true );
      }
LAB_14089139e:
      uVar20 = pdb_142dc8090(&UNK_14330e608);
LAB_1408913ab:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar20,unaff_R12,&UNK_143012680);
    }
    goto LAB_1408913fa;
  }
  if (uVar28 < 0x50) {
    param_2 = &UNK_1430127e9;
    uVar20 = pdb_140892540(&UNK_1430127e9);
    if ((uVar20 & 1) != 0) {
      if (0x4f < uVar28 + 2) goto LAB_140891449;
      lVar34 = 0x4d - uVar28;
      param_2 = &UNK_1430127eb + uVar28;
    }
    goto LAB_14088fe9c;
  }
  goto LAB_140891429;
LAB_14089096f:
  puVar31[0x24] = puVar31[0x33];
  puVar31[0x22] = puVar31[0x31];
  puVar31[0x23] = puVar31[0x32];
  puVar31[0x25] = puVar31[0x2e];
  puVar31[0x26] = puVar31[0x2f];
  puVar31[0x27] = puVar31[0x30];
  puVar31[0x1d] = puVar31[0x26];
  puVar31[0x1e] = puVar31[0x27];
  puVar31[0x1b] = puVar31[0x24];
  puVar31[0x1c] = puVar31[0x25];
  puVar31[0x19] = puVar31[0x31];
  puVar31[0x1a] = puVar31[0x32];
  puVar31[0x18] = 2;
  puVar31[0x34] = *(undefined8 *)puVar31[0x75];
  puVar31[0x35] = *(undefined8 *)puVar31[0x73];
  puVar33 = (undefined8 *)puVar31[0x36];
  *(undefined4 *)(puVar31 + 0x3d) = *(undefined4 *)((longlong)puVar33 + 0x1c);
  puVar31[0x14] = *puVar33;
  puVar31[0x36] = puVar33[2];
  puVar31[0x48] = *(undefined8 *)puVar31[0x16];
  puVar31[0x47] = *(undefined8 *)puVar31[0x15];
  uVar29 = *(undefined8 *)puVar31[0x6e];
  uVar7 = *(undefined8 *)puVar31[0x6f];
  lVar19 = 0;
  lVar34 = 2;
  while (lVar34 != lVar19) {
    puVar31[0x17] = lVar19 + 1;
    if (SBORROW8(0,puVar31[lVar19 * 3 + 0x19])) {
      lVar34 = lVar34 - (lVar19 + 1);
      if (lVar34 != 0) {
        puVar33 = puVar31 + lVar19 * 3 + 0x1d;
        do {
          if (puVar33[-1] != 0) {
            pub_1406abac0((byte *)*puVar33,puVar33[-1] * 0x50,0x10);
          }
          puVar33 = puVar33 + 3;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
      }
      break;
    }
    puVar31[0x44] = puVar31[lVar19 * 3 + 0x19];
    uVar26 = puVar31[lVar19 * 3 + 0x1a];
    unaff_R12 = puVar31[lVar19 * 3 + 0x1b];
    uVar90 = 0;
    puVar31[0x42] = uVar26;
    pdb_14088ed80(puVar31 + 0x22,uVar26,unaff_R12,puVar31[0x34],2,1,0x41200000,0x40b00000,0x40000000
                 );
    puVar31[0x45] = puVar31[0x22];
    puVar39 = (ulonglong *)puVar31[0x23];
    lVar19 = puVar31[0x24];
    if (puVar31[0x25] != 0) {
      pub_1406abac0((byte *)puVar31[0x26],puVar31[0x25] << 3,8);
    }
    *(undefined4 *)puVar31[0x36] = *(undefined4 *)(puVar31 + 0x3d);
    puVar31[0x22] = puVar31[0x74];
    puVar31[0x23] = puVar31[0x35];
    puVar31[0x24] = puVar31[0x14];
    puVar31[0x43] = puVar39 + lVar19 * 2;
    puVar31[0x46] = puVar39;
    if (puVar39 != (ulonglong *)puVar31[0x43]) {
      do {
        uVar91 = (undefined4)((ulonglong)uVar90 >> 0x20);
        uVar28 = *puVar39;
        if (unaff_R12 <= uVar28) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar28,unaff_R12,&UNK_143012668);
        }
        uVar20 = puVar39[1];
        if (unaff_R12 <= uVar20) goto LAB_1408913ab;
        lVar19 = puVar31[0x42];
        pfVar41 = (float *)(uVar28 * 0x50 + lVar19);
        lVar34 = uVar20 * 0x50;
        fVar83 = pfVar41[6];
        fVar45 = *(float *)(lVar19 + 0x18 + lVar34);
        fVar85 = *pfVar41;
        fVar86 = pfVar41[1];
        fVar60 = pfVar41[2];
        fVar51 = pfVar41[3];
        fVar53 = fVar60 * fVar60;
        fVar55 = fVar51 * fVar51;
        fVar57 = fVar86 * fVar86 + fVar85 * fVar85;
        fVar43 = fVar60 * 0.0 + fVar86 * 0.0 + fVar85 * _DAT_142e36f50;
        fVar43 = fVar43 + fVar43;
        fVar84 = (float)((ulonglong)_DAT_142f89640 >> 0x20);
        fVar52 = fVar51 + fVar51;
        fVar47 = fVar52 * (fVar86 * (float)_DAT_142f89640 - fVar60 * _DAT_143012430) +
                 fVar43 * fVar85 + (fVar55 - (fVar57 + fVar53)) * _DAT_142e36f50;
        fVar49 = fVar52 * (fVar60 * fVar84 - fVar85 * _UNK_143012434) +
                 fVar43 * fVar86 + (fVar55 - (fVar57 + fVar53)) * 0.0;
        fVar50 = fVar52 * (fVar85 * 0.0 - fVar86 * _UNK_143012438) +
                 fVar43 * fVar60 + (fVar55 - (fVar57 + fVar53)) * 0.0;
        fVar52 = fVar52 * (fVar51 * 0.0 - fVar51 * _UNK_14301243c) +
                 fVar43 * fVar51 + (fVar55 - (fVar57 + fVar53)) * 0.0;
        pfVar2 = (float *)(lVar19 + lVar34);
        fVar85 = *pfVar2;
        fVar86 = pfVar2[1];
        fVar60 = pfVar2[2];
        fVar51 = pfVar2[3];
        fVar53 = fVar60 * fVar60;
        fVar55 = fVar51 * fVar51;
        fVar57 = fVar86 * fVar86 + fVar85 * fVar85;
        fVar43 = fVar60 * 0.0 + fVar86 * 0.0 + fVar85 * _DAT_142e36f50;
        fVar43 = fVar43 + fVar43;
        fVar80 = fVar51 + fVar51;
        fVar77 = fVar80 * (fVar86 * (float)_DAT_142f89640 - fVar60 * _DAT_143012430) +
                 fVar43 * fVar85 + (fVar55 - (fVar57 + fVar53)) * _DAT_142e36f50;
        fVar78 = fVar80 * (fVar60 * fVar84 - fVar85 * _UNK_143012434) +
                 fVar43 * fVar86 + (fVar55 - (fVar57 + fVar53)) * 0.0;
        fVar79 = fVar80 * (fVar85 * 0.0 - fVar86 * _UNK_143012438) +
                 fVar43 * fVar60 + (fVar55 - (fVar57 + fVar53)) * 0.0;
        fVar81 = fVar80 * (fVar51 * 0.0 - fVar51 * _UNK_14301243c) +
                 fVar43 * fVar51 + (fVar55 - (fVar57 + fVar53)) * 0.0;
        uVar26 = *(undefined8 *)(pfVar41 + 4);
        fVar53 = (float)uVar26;
        fVar55 = (float)((ulonglong)uVar26 >> 0x20);
        fVar57 = fVar53 - fVar47;
        fVar80 = fVar55 - fVar49;
        fVar54 = 0.0 - fVar50;
        fVar56 = 0.0 - fVar52;
        fVar43 = fVar83 - fVar50;
        uVar90 = *(undefined8 *)(lVar19 + 0x10 + lVar34);
        fVar58 = (float)uVar90;
        fVar59 = (float)((ulonglong)uVar90 >> 0x20);
        fVar88 = fVar58 - fVar77;
        fVar89 = fVar59 - fVar78;
        fVar87 = fVar45 - fVar79;
        fVar82 = SQRT((fVar43 - fVar87) * (fVar43 - fVar87) +
                      (fVar80 - fVar89) * (fVar80 - fVar89) + (fVar57 - fVar88) * (fVar57 - fVar88))
        ;
        *(float *)(puVar31 + 0x41) = fVar83;
        *(float *)(puVar31 + 0x49) = fVar45;
        uVar61 = (undefined1)uVar26;
        uVar62 = (undefined1)((ulonglong)uVar26 >> 8);
        uVar63 = (undefined1)((ulonglong)uVar26 >> 0x10);
        uVar64 = (undefined1)((ulonglong)uVar26 >> 0x18);
        uVar65 = (undefined1)((ulonglong)uVar26 >> 0x20);
        uVar66 = (undefined1)((ulonglong)uVar26 >> 0x28);
        uVar67 = (undefined1)((ulonglong)uVar26 >> 0x30);
        uVar68 = (undefined1)((ulonglong)uVar26 >> 0x38);
        uVar69 = 0;
        uVar70 = 0;
        uVar71 = 0;
        uVar72 = 0;
        uVar73 = 0;
        uVar74 = 0;
        uVar75 = 0;
        uVar76 = 0;
        fVar84 = fVar58;
        fVar85 = fVar59;
        fVar86 = 0.0;
        fVar60 = 0.0;
        fVar51 = _DAT_14300c7a0;
        if (fVar82 < _DAT_14300c7a0) {
          *(float *)(puVar31 + 0x49) = fVar87;
          uVar61 = SUB41(fVar57,0);
          uVar62 = (undefined1)((uint)fVar57 >> 8);
          uVar63 = (undefined1)((uint)fVar57 >> 0x10);
          uVar64 = (undefined1)((uint)fVar57 >> 0x18);
          uVar65 = SUB41(fVar80,0);
          uVar66 = (undefined1)((uint)fVar80 >> 8);
          uVar67 = (undefined1)((uint)fVar80 >> 0x10);
          uVar68 = (undefined1)((uint)fVar80 >> 0x18);
          uVar69 = SUB41(fVar54,0);
          uVar70 = (undefined1)((uint)fVar54 >> 8);
          uVar71 = (undefined1)((uint)fVar54 >> 0x10);
          uVar72 = (undefined1)((uint)fVar54 >> 0x18);
          uVar73 = SUB41(fVar56,0);
          uVar74 = (undefined1)((uint)fVar56 >> 8);
          uVar75 = (undefined1)((uint)fVar56 >> 0x10);
          uVar76 = (undefined1)((uint)fVar56 >> 0x18);
          fVar84 = fVar88;
          fVar85 = fVar89;
          fVar86 = 0.0 - fVar79;
          fVar60 = 0.0 - fVar81;
          fVar51 = fVar82;
          fVar83 = fVar43;
        }
        *(float *)(puVar31 + 0x3a) = fVar88;
        *(float *)((longlong)puVar31 + 0x1d4) = fVar89;
        *(float *)(puVar31 + 0x3b) = 0.0 - fVar79;
        *(float *)((longlong)puVar31 + 0x1dc) = 0.0 - fVar81;
        *(float *)(puVar31 + 0x3e) = fVar84;
        *(float *)((longlong)puVar31 + 500) = fVar85;
        *(float *)(puVar31 + 0x3f) = fVar86;
        *(float *)((longlong)puVar31 + 0x1fc) = fVar60;
        *(undefined1 *)(puVar31 + 0x38) = uVar61;
        *(undefined1 *)((longlong)puVar31 + 0x1c1) = uVar62;
        *(undefined1 *)((longlong)puVar31 + 0x1c2) = uVar63;
        *(undefined1 *)((longlong)puVar31 + 0x1c3) = uVar64;
        *(undefined1 *)((longlong)puVar31 + 0x1c4) = uVar65;
        *(undefined1 *)((longlong)puVar31 + 0x1c5) = uVar66;
        *(undefined1 *)((longlong)puVar31 + 0x1c6) = uVar67;
        *(undefined1 *)((longlong)puVar31 + 0x1c7) = uVar68;
        *(undefined1 *)(puVar31 + 0x39) = uVar69;
        *(undefined1 *)((longlong)puVar31 + 0x1c9) = uVar70;
        *(undefined1 *)((longlong)puVar31 + 0x1ca) = uVar71;
        *(undefined1 *)((longlong)puVar31 + 0x1cb) = uVar72;
        *(undefined1 *)((longlong)puVar31 + 0x1cc) = uVar73;
        *(undefined1 *)((longlong)puVar31 + 0x1cd) = uVar74;
        *(undefined1 *)((longlong)puVar31 + 0x1ce) = uVar75;
        *(undefined1 *)((longlong)puVar31 + 0x1cf) = uVar76;
        *(float *)(puVar31 + 0x37) = fVar83;
        fVar83 = fVar58 + fVar77;
        fVar84 = fVar59 + fVar78;
        fVar85 = fVar45 + fVar79;
        fVar86 = SQRT((fVar43 - fVar85) * (fVar43 - fVar85) +
                      (fVar80 - fVar84) * (fVar80 - fVar84) + (fVar57 - fVar83) * (fVar57 - fVar83))
        ;
        if (fVar86 < fVar51) {
          *(float *)(puVar31 + 0x37) = fVar43;
          *(float *)(puVar31 + 0x49) = fVar85;
          *(float *)(puVar31 + 0x38) = fVar57;
          *(float *)((longlong)puVar31 + 0x1c4) = fVar80;
          *(float *)(puVar31 + 0x39) = fVar54;
          *(float *)((longlong)puVar31 + 0x1cc) = fVar56;
          *(float *)(puVar31 + 0x3e) = fVar83;
          *(float *)((longlong)puVar31 + 500) = fVar84;
          *(float *)(puVar31 + 0x3f) = fVar79 + 0.0;
          *(float *)((longlong)puVar31 + 0x1fc) = fVar81 + 0.0;
          fVar51 = fVar86;
        }
        fVar58 = fVar58 + fVar77 * 0.0;
        fVar59 = fVar59 + fVar78 * 0.0;
        fVar86 = fVar79 * 0.0 + 0.0;
        fVar60 = fVar81 * 0.0 + 0.0;
        fVar45 = fVar45 + fVar79 * 0.0;
        fVar77 = SQRT((fVar43 - fVar45) * (fVar43 - fVar45) +
                      (fVar80 - fVar59) * (fVar80 - fVar59) + (fVar57 - fVar58) * (fVar57 - fVar58))
        ;
        uVar3 = *(undefined4 *)(puVar31 + 0x37);
        uVar61 = (undefined1)uVar3;
        uVar62 = (undefined1)((uint)uVar3 >> 8);
        uVar63 = (undefined1)((uint)uVar3 >> 0x10);
        uVar64 = (undefined1)((uint)uVar3 >> 0x18);
        if (fVar77 < fVar51) {
          uVar61 = SUB41(fVar43,0);
          uVar62 = (undefined1)((uint)fVar43 >> 8);
          uVar63 = (undefined1)((uint)fVar43 >> 0x10);
          uVar64 = (undefined1)((uint)fVar43 >> 0x18);
          *(float *)(puVar31 + 0x49) = fVar45;
          *(float *)(puVar31 + 0x38) = fVar57;
          *(float *)((longlong)puVar31 + 0x1c4) = fVar80;
          *(float *)(puVar31 + 0x39) = fVar54;
          *(float *)((longlong)puVar31 + 0x1cc) = fVar56;
          *(float *)(puVar31 + 0x3e) = fVar58;
          *(float *)((longlong)puVar31 + 500) = fVar59;
          *(float *)(puVar31 + 0x3f) = fVar86;
          *(float *)((longlong)puVar31 + 0x1fc) = fVar60;
          fVar51 = fVar77;
        }
        fVar43 = fVar53 + fVar47;
        fVar57 = fVar55 + fVar49;
        fVar80 = fVar50 + 0.0;
        fVar52 = fVar52 + 0.0;
        fVar54 = *(float *)(puVar31 + 0x41) + fVar50;
        fVar56 = fVar57 - *(float *)((longlong)puVar31 + 0x1d4);
        fVar56 = SQRT((fVar54 - fVar87) * (fVar54 - fVar87) +
                      fVar56 * fVar56 +
                      (fVar43 - *(float *)(puVar31 + 0x3a)) * (fVar43 - *(float *)(puVar31 + 0x3a)))
        ;
        uVar65 = SUB41(fVar54,0);
        uVar66 = (undefined1)((uint)fVar54 >> 8);
        uVar67 = (undefined1)((uint)fVar54 >> 0x10);
        uVar68 = (undefined1)((uint)fVar54 >> 0x18);
        if (fVar56 < fVar51) {
          *(float *)(puVar31 + 0x49) = fVar87;
          *(float *)(puVar31 + 0x38) = fVar43;
          *(float *)((longlong)puVar31 + 0x1c4) = fVar57;
          *(float *)(puVar31 + 0x39) = fVar80;
          *(float *)((longlong)puVar31 + 0x1cc) = fVar52;
          puVar31[0x3e] = puVar31[0x3a];
          puVar31[0x3f] = puVar31[0x3b];
          uVar61 = uVar65;
          uVar62 = uVar66;
          uVar63 = uVar67;
          uVar64 = uVar68;
          fVar51 = fVar56;
        }
        fVar56 = SQRT((fVar54 - fVar85) * (fVar54 - fVar85) +
                      (fVar57 - fVar84) * (fVar57 - fVar84) + (fVar43 - fVar83) * (fVar43 - fVar83))
        ;
        if (fVar56 < fVar51) {
          *(float *)(puVar31 + 0x49) = fVar85;
          *(float *)(puVar31 + 0x38) = fVar43;
          *(float *)((longlong)puVar31 + 0x1c4) = fVar57;
          *(float *)(puVar31 + 0x39) = fVar80;
          *(float *)((longlong)puVar31 + 0x1cc) = fVar52;
          *(float *)(puVar31 + 0x3e) = fVar83;
          *(float *)((longlong)puVar31 + 500) = fVar84;
          *(float *)(puVar31 + 0x3f) = fVar79 + 0.0;
          *(float *)((longlong)puVar31 + 0x1fc) = fVar81 + 0.0;
          uVar61 = uVar65;
          uVar62 = uVar66;
          uVar63 = uVar67;
          uVar64 = uVar68;
          fVar51 = fVar56;
        }
        fVar56 = SQRT((fVar54 - fVar45) * (fVar54 - fVar45) +
                      (fVar57 - fVar59) * (fVar57 - fVar59) + (fVar43 - fVar58) * (fVar43 - fVar58))
        ;
        fVar54 = *(float *)(puVar31 + 0x49);
        if (fVar56 < fVar51) {
          *(float *)(puVar31 + 0x38) = fVar43;
          *(float *)((longlong)puVar31 + 0x1c4) = fVar57;
          *(float *)(puVar31 + 0x39) = fVar80;
          *(float *)((longlong)puVar31 + 0x1cc) = fVar52;
          *(float *)(puVar31 + 0x3e) = fVar58;
          *(float *)((longlong)puVar31 + 500) = fVar59;
          *(float *)(puVar31 + 0x3f) = fVar86;
          *(float *)((longlong)puVar31 + 0x1fc) = fVar60;
          uVar61 = uVar65;
          uVar62 = uVar66;
          uVar63 = uVar67;
          uVar64 = uVar68;
          fVar51 = fVar56;
          fVar54 = fVar45;
        }
        fVar53 = fVar53 + fVar47 * 0.0;
        fVar55 = fVar55 + fVar49 * 0.0;
        fVar49 = *(float *)(puVar31 + 0x41) + fVar50 * 0.0;
        fVar86 = fVar53 - *(float *)(puVar31 + 0x3a);
        fVar60 = fVar55 - *(float *)((longlong)puVar31 + 0x1d4);
        fVar47 = SQRT((fVar49 - fVar87) * (fVar49 - fVar87) + fVar60 * fVar60 + fVar86 * fVar86);
        uVar65 = SUB41(fVar49,0);
        uVar66 = (undefined1)((uint)fVar49 >> 8);
        uVar67 = (undefined1)((uint)fVar49 >> 0x10);
        uVar68 = (undefined1)((uint)fVar49 >> 0x18);
        fVar86 = *(float *)(puVar31 + 0x38);
        fVar60 = *(float *)((longlong)puVar31 + 0x1c4);
        fVar43 = *(float *)(puVar31 + 0x3e);
        fVar52 = *(float *)((longlong)puVar31 + 500);
        if (fVar47 < fVar51) {
          uVar61 = uVar65;
          uVar62 = uVar66;
          uVar63 = uVar67;
          uVar64 = uVar68;
          fVar86 = fVar53;
          fVar60 = fVar55;
          fVar43 = *(float *)(puVar31 + 0x3a);
          fVar52 = *(float *)((longlong)puVar31 + 0x1d4);
          fVar51 = fVar47;
          fVar54 = fVar87;
        }
        fVar47 = SQRT((fVar49 - fVar85) * (fVar49 - fVar85) +
                      (fVar55 - fVar84) * (fVar55 - fVar84) + (fVar53 - fVar83) * (fVar53 - fVar83))
        ;
        if (fVar47 < fVar51) {
          uVar61 = uVar65;
          uVar62 = uVar66;
          uVar63 = uVar67;
          uVar64 = uVar68;
          fVar86 = fVar53;
          fVar60 = fVar55;
          fVar43 = fVar83;
          fVar52 = fVar84;
          fVar51 = fVar47;
          fVar54 = fVar85;
        }
        if (SQRT((fVar49 - fVar45) * (fVar49 - fVar45) +
                 (fVar55 - fVar59) * (fVar55 - fVar59) + (fVar53 - fVar58) * (fVar53 - fVar58)) <
            fVar51) {
          uVar61 = uVar65;
          uVar62 = uVar66;
          uVar63 = uVar67;
          uVar64 = uVar68;
          fVar86 = fVar53;
          fVar60 = fVar55;
          fVar43 = fVar58;
          fVar52 = fVar59;
          fVar54 = fVar45;
        }
        puVar33 = (undefined8 *)(lVar34 + puVar31[0x42]);
        uVar26 = *(undefined8 *)pfVar41;
        uVar90 = *(undefined8 *)(pfVar41 + 2);
        uVar27 = *(undefined8 *)(pfVar41 + 6);
        uVar14 = *(undefined8 *)(pfVar41 + 8);
        uVar15 = *(undefined8 *)(pfVar41 + 10);
        puVar31[8] = *(undefined8 *)(pfVar41 + 4);
        puVar31[9] = uVar27;
        puVar31[10] = uVar14;
        puVar31[0xb] = uVar15;
        puVar31[6] = uVar26;
        puVar31[7] = uVar90;
        puVar31[8] = CONCAT44(fVar60,fVar86);
        *(uint *)(puVar31 + 9) = CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61)));
        uVar26 = *puVar33;
        uVar90 = puVar33[1];
        uVar27 = puVar33[3];
        uVar14 = puVar33[4];
        uVar15 = puVar33[5];
        puVar31[2] = puVar33[2];
        puVar31[3] = uVar27;
        *puVar31 = uVar26;
        puVar31[1] = uVar90;
        puVar31[4] = uVar14;
        puVar31[5] = uVar15;
        puVar31[2] = CONCAT44(fVar52,fVar43);
        *(float *)(puVar31 + 3) = fVar54;
        fVar83 = pfVar41[0x10];
        uVar26 = pdb_140a92040(uVar7);
        *(undefined4 *)((longlong)puVar31 + 0x7c) = 0;
        uVar90 = CONCAT44(uVar91,0x3f800000);
        pdb_140891cc0(&UNK_143012698,0x27,_DAT_142e37988,1,uVar90,puVar31 + 6,puVar31,fVar83,
                      puVar31[0x48],puVar31[0x47],uVar29,uVar26,0,(longlong)puVar31 + 0x7c,
                      puVar31 + 0x22);
        uVar91 = (undefined4)((ulonglong)uVar90 >> 0x20);
        uVar27 = pdb_140a92040(uVar7);
        uVar26 = *(undefined8 *)((longlong)puVar33 + 0x44);
        puVar31[0x10] = *(undefined8 *)(pfVar41 + 0x11);
        puVar31[0x11] = uVar26;
        *(undefined4 *)((longlong)puVar31 + 0x7c) = 1;
        uVar90 = CONCAT44(uVar91,0x3f800000);
        pdb_140891cc0(&UNK_1430126bf,0x14,_DAT_142e37990,0,uVar90,puVar31 + 6,puVar31,fVar83,
                      puVar31[0x48],puVar31[0x47],uVar29,uVar27,0x3f800000,(longlong)puVar31 + 0x7c,
                      puVar31 + 0x22);
        puVar39 = puVar39 + 2;
      } while (puVar39 != (ulonglong *)puVar31[0x43]);
    }
    if (puVar31[0x45] != 0) {
      pub_1406abac0((byte *)puVar31[0x46],puVar31[0x45] << 4,8);
    }
    if (puVar31[0x44] != 0) {
      pub_1406abac0((byte *)puVar31[0x42],puVar31[0x44] * 0x50,0x10);
    }
    lVar19 = puVar31[0x17];
    lVar34 = puVar31[0x18];
  }
  if (puVar31[0x20] == 0) {
    return;
  }
  plVar21 = (longlong *)pdb_140e97000();
  if (((char)plVar21[0xd] == '\x01') ||
     (plVar21 = (longlong *)pdb_142dde6e0(plVar21,0), plVar21 != (longlong *)0x0)) {
    if (*plVar21 == 0) {
      *plVar21 = -1;
      puVar31[0x49] = plVar21;
      pdb_140e95370(plVar21 + 1,puVar31[0x21]);
      *(longlong *)puVar31[0x49] = *(longlong *)puVar31[0x49] + 1;
      return;
    }
    goto LAB_14089139e;
  }
LAB_1408913fa:
  pdb_142dc7890(&UNK_14330e598);
LAB_140891406:
  pdb_142dc8070(&UNK_1430125da,0x41);
LAB_140891429:
  pdb_142dc8070(&UNK_1430127e9,0x4f,0);
LAB_140891449:
  pdb_142dc8070(&UNK_1430127e9,0x4f);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

