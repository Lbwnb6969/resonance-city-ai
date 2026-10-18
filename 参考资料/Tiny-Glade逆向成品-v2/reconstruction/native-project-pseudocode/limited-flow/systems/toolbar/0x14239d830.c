// VA 0x14239d830, PDB extent 15717 bytes
// toolbar::menu::new_session::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/new_session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x00014239e6c8) overlaps instruction at (ram,0x00014239e6c3)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014239e236) */
/* WARNING: Removing unreachable block (ram,0x00014239e5c0) */
/* WARNING: Removing unreachable block (ram,0x00014239e674) */
/* WARNING: Removing unreachable block (ram,0x00014239e8ef) */
/* WARNING: Removing unreachable block (ram,0x00014239e67a) */
/* WARNING: Removing unreachable block (ram,0x00014239e6ab) */
/* WARNING: Removing unreachable block (ram,0x00014239e6b5) */
/* WARNING: Removing unreachable block (ram,0x00014239e6b9) */
/* WARNING: Removing unreachable block (ram,0x00014239e6c9) */
/* WARNING: Removing unreachable block (ram,0x00014239e8f7) */
/* WARNING: Removing unreachable block (ram,0x00014239e905) */
/* WARNING: Removing unreachable block (ram,0x00014239e909) */
/* WARNING: Removing unreachable block (ram,0x00014239e923) */
/* WARNING: Removing unreachable block (ram,0x00014239e5cd) */
/* WARNING: Removing unreachable block (ram,0x00014239e5d0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */
/* Matched PDB project procedure: toolbar::menu::new_session::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/new_session.rs
   Extent: 15717 */

void pdb_14239d830(undefined8 param_1,ulonglong *******param_2,ulonglong *******param_3,
                  ulonglong *******param_4,undefined8 *param_5,float *param_6,undefined8 *param_7,
                  undefined8 *param_8,undefined8 *param_9,undefined8 param_10,
                  ulonglong *******param_11,longlong *param_12,longlong *param_13,longlong *param_14
                  ,longlong *param_15)

{
  byte bVar1;
  code cVar2;
  ulonglong ******ppppppuVar3;
  ulonglong ******ppppppuVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong *****pppppuVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  byte *pbVar17;
  char *pcVar18;
  code *pcVar19;
  undefined4 uVar20;
  ulonglong *******pppppppuVar21;
  undefined8 uVar22;
  code *pcVar23;
  ulonglong *****pppppuVar24;
  undefined *puVar25;
  ulonglong *****pppppuVar26;
  int iVar27;
  ushort uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined1 uVar32;
  ulonglong *******unaff_R12;
  ulonglong *******unaff_R13;
  ulonglong *******unaff_R14;
  undefined8 unaff_R15;
  ulonglong *******pppppppuVar33;
  ulonglong *******pppppppuVar34;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
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
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
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
  float fVar68;
  undefined1 unaff_XMM8_Ba;
  undefined1 unaff_XMM8_Bb;
  char cVar69;
  undefined1 unaff_XMM8_Bc;
  char cVar70;
  undefined1 unaff_XMM8_Bd;
  char cVar71;
  undefined1 unaff_XMM8_Be;
  char cVar72;
  undefined1 unaff_XMM8_Bf;
  char cVar73;
  undefined1 unaff_XMM8_Bg;
  char cVar74;
  undefined1 unaff_XMM8_Bh;
  char cVar75;
  undefined1 unaff_XMM8_Bi;
  char cVar76;
  undefined1 unaff_XMM8_Bj;
  char cVar77;
  undefined1 unaff_XMM8_Bk;
  char cVar78;
  undefined1 unaff_XMM8_Bl;
  char cVar79;
  undefined1 unaff_XMM8_Bm;
  char cVar80;
  undefined1 unaff_XMM8_Bn;
  char cVar81;
  undefined1 unaff_XMM8_Bo;
  char cVar82;
  undefined1 unaff_XMM8_Bp;
  char cVar83;
  undefined8 in_stack_fffffffffffffbd8;
  undefined4 uVar84;
  undefined1 auStack_418 [56];
  ulonglong *****pppppuStack_3e0;
  ulonglong *******pppppppuStack_3d8;
  ulonglong *******pppppppuStack_3d0;
  ulonglong *******pppppppuStack_3c8;
  ulonglong *******pppppppuStack_3c0;
  ulonglong *******apppppppuStack_3b8 [2];
  longlong lStack_3a8;
  undefined8 uStack_3a0;
  ulonglong *******pppppppuStack_398;
  undefined8 uStack_390;
  byte *pbStack_380;
  ulonglong *******pppppppuStack_378;
  undefined1 auStack_370 [9];
  char acStack_367 [7];
  ulonglong *******apppppppuStack_360 [2];
  ulonglong *******pppppppuStack_350;
  undefined2 uStack_348;
  ulonglong *******pppppppuStack_340;
  ulonglong *******pppppppuStack_338;
  ulonglong *******pppppppuStack_330;
  undefined2 uStack_328;
  ulonglong *******pppppppuStack_320;
  ulonglong *******pppppppuStack_318;
  ulonglong *******pppppppuStack_310;
  undefined2 uStack_308;
  ulonglong *******pppppppuStack_300;
  byte *pbStack_2f8;
  ulonglong *******pppppppuStack_2f0;
  undefined2 uStack_2e8;
  ulonglong uStack_2e0;
  byte *pbStack_2d8;
  ulonglong uStack_2d0;
  undefined2 uStack_2c8;
  ulonglong uStack_2c0;
  ulonglong *******pppppppuStack_2b8;
  ulonglong uStack_2b0;
  ulonglong *******pppppppuStack_2a8;
  ulonglong *******pppppppuStack_288;
  ulonglong *******apppppppuStack_280 [2];
  ulonglong *******pppppppuStack_270;
  ulonglong *******pppppppuStack_268;
  ulonglong uStack_260;
  ulonglong *******pppppppuStack_258;
  ulonglong *******pppppppuStack_250;
  ulonglong *******pppppppuStack_248;
  ulonglong *******pppppppuStack_238;
  byte *pbStack_230;
  ulonglong *******pppppppuStack_228;
  ulonglong *******pppppppuStack_220;
  ulonglong *******pppppppuStack_218;
  undefined8 uStack_210;
  ulonglong ******ppppppuStack_208;
  undefined4 uStack_200;
  ulonglong *******pppppppuStack_1f8;
  ulonglong *******pppppppuStack_1f0;
  ulonglong *******pppppppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulonglong *******pppppppuStack_1c8;
  ulonglong *****pppppuStack_1c0;
  ulonglong *******pppppppuStack_1b8;
  ulonglong *******pppppppuStack_1b0;
  ulonglong *******pppppppuStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined8 uStack_194;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined8 uStack_188;
  char cStack_160;
  undefined4 *puStack_150;
  ulonglong *******pppppppuStack_148;
  longlong *plStack_140;
  ulonglong *******pppppppuStack_138;
  ulonglong *******pppppppuStack_130;
  ulonglong *******pppppppuStack_128;
  ulonglong *******pppppppuStack_120;
  ulonglong *******pppppppuStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  ulonglong *******pppppppuStack_f8;
  undefined4 uStack_ec;
  ulonglong *******pppppppuStack_e8;
  ulonglong *******pppppppuStack_e0;
  undefined1 uStack_d1;
  ulonglong *******pppppppuStack_d0;
  ulonglong *******pppppppuStack_c8;
  ulonglong *******pppppppuStack_c0;
  ulonglong *******pppppppuStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  pppppppuVar21 = param_2;
  pppppppuVar34 = param_4;
  uStack_b0 = param_3;
  uVar10 = pdb_140e94b40();
  pcVar23 = (code *)(ulonglong)uVar10;
  if ((char)uVar10 == '\0') {
    lStack_3a8 = 0;
LAB_14239da17:
    if (*(int *)*param_4 == 5) {
      uStack_ec = *(undefined4 *)((longlong)param_12 + 0x1c);
      puStack_150 = (undefined4 *)param_12[2];
      *puStack_150 = uStack_ec;
      pppppppuStack_130 = (ulonglong *******)*param_12;
      *(code *)((longlong)pppppppuStack_130 + 0x1cc) = (code)0x0;
      pppppppuVar34 = (ulonglong *******)(*param_2)[2];
      uStack_d1 = 0;
      pcVar23 = (code *)param_8[2];
      plStack_140 = (longlong *)
                    CONCAT44(plStack_140._4_4_,*(undefined4 *)((longlong)param_8 + 0x1c));
      *(undefined4 *)pcVar23 = *(undefined4 *)((longlong)param_8 + 0x1c);
      param_2 = (ulonglong *******)*param_8;
      pppppppuStack_378 = (ulonglong *******)&UNK_1434e1845;
      auStack_370._0_8_ = 4;
      uVar14 = pdb_140bbbcb0(&pppppppuStack_378);
      pppppppuVar33 = (ulonglong *******)(uVar14 ^ 0xb1695320004fb443);
      pppppppuVar21 = pppppppuVar33;
      lVar13 = pdb_14072c2d0(param_2);
      *(undefined1 *)(lVar13 + 0x5e) = 0;
      if (((ulonglong)pppppppuVar21 & 1) == 0) {
        ppppppuVar3 = param_2[2];
        if (ppppppuVar3 == *param_2) {
          pdb_142d7f080(param_2);
        }
        ppppppuVar4 = param_2[1];
        *(undefined4 *)(ppppppuVar4 + (longlong)ppppppuVar3 * 7) = 2;
        ppppppuVar4[(longlong)ppppppuVar3 * 7 + 6] = (ulonglong *****)pppppppuVar33;
        param_2[2] = (ulonglong ******)((longlong)ppppppuVar3 + 1);
      }
      pppppppuStack_1e8 = (ulonglong *******)0x0;
      pppppppuStack_1f8 = param_2;
      pppppppuStack_1f0 = pppppppuVar33;
      pdb_141174160(&pppppppuStack_378,&pppppppuStack_1f8,&UNK_1434e1849,9,0);
      pdb_14118f3b0(&pppppppuStack_378,&UNK_1434e1852,6,&uStack_d1,param_7);
      uVar84 = (undefined4)((ulonglong)in_stack_fffffffffffffbd8 >> 0x20);
      if (*(code *)param_11 == (code)0x0) {
        *(undefined4 *)pcVar23 = plStack_140._0_4_;
        pppppppuStack_1f8 = (ulonglong *******)&UNK_1434e1858;
        pppppppuStack_1f0 = (ulonglong *******)0xb;
        uVar14 = pdb_140bbbcb0(&pppppppuStack_1f8);
        pppppuVar24 = (ulonglong *****)(uVar14 ^ 0xb1695320004fb443);
        pppppuVar26 = pppppuVar24;
        lVar13 = pdb_14072c2d0(param_2);
        *(undefined1 *)(lVar13 + 0x5e) = 0;
        *(undefined1 *)(lVar13 + 0xcb) = 1;
        if (((ulonglong)pppppuVar26 & 1) == 0) {
          ppppppuVar3 = param_2[2];
          if (ppppppuVar3 == *param_2) {
            pdb_142d7f080(param_2);
          }
          ppppppuVar4 = param_2[1];
          *(undefined4 *)(ppppppuVar4 + (longlong)ppppppuVar3 * 7) = 1;
          ppppppuVar4[(longlong)ppppppuVar3 * 7 + 6] = pppppuVar24;
          param_2[2] = (ulonglong ******)((longlong)ppppppuVar3 + 1);
        }
        stack0xfffffffffffffc98 = (ulonglong *******)0x0;
        auStack_370._0_8_ = pppppuVar24;
        pppppppuStack_378 = param_2;
        pdb_141174160(&pppppppuStack_228,&pppppppuStack_378,&UNK_1434e1863,0x10,0);
        pdb_14118e830(&pppppppuStack_228,&UNK_1434e1873,6);
        pdb_14118d6c0(&pppppppuStack_228,&UNK_1434e1845,4,param_7);
        *param_6 = *(float *)(*uStack_b0 + 0xb) + *param_6;
        pdb_14118cfe0(&pppppppuStack_228,&UNK_1434e1879,9);
        pdb_141186290(&pppppppuStack_3c0,&pppppppuStack_228,&UNK_1434e1882);
        pppppppuVar21 = pppppppuStack_3c0;
        if (pppppppuStack_3c0[0x39] == (ulonglong ******)0x0) {
LAB_14239e40c:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa6b00);
        }
        uVar14 = pdb_1400af0a0(pppppppuStack_3c0 + 0x3a,apppppppuStack_3b8);
        ppppppuVar3 = pppppppuVar21[0x36];
        ppppppuVar4 = pppppppuVar21[0x37];
        bVar8 = (byte)(uVar14 >> 0x39);
        auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
        auVar36 = pshuflw(auVar36,auVar36,0);
        lVar13 = 0;
        do {
          uVar14 = uVar14 & (ulonglong)ppppppuVar4;
          auVar51 = *(undefined1 (*) [16])((longlong)ppppppuVar3 + uVar14);
          auVar60[0] = -(auVar51[0] == auVar36[0]);
          auVar60[1] = -(auVar51[1] == auVar36[1]);
          auVar60[2] = -(auVar51[2] == auVar36[2]);
          auVar60[3] = -(auVar51[3] == auVar36[3]);
          auVar60[4] = -(auVar51[4] == auVar36[4]);
          auVar60[5] = -(auVar51[5] == auVar36[5]);
          auVar60[6] = -(auVar51[6] == auVar36[6]);
          auVar60[7] = -(auVar51[7] == auVar36[7]);
          auVar60[8] = -(auVar51[8] == auVar36[0]);
          auVar60[9] = -(auVar51[9] == auVar36[1]);
          auVar60[10] = -(auVar51[10] == auVar36[2]);
          auVar60[0xb] = -(auVar51[0xb] == auVar36[3]);
          auVar60[0xc] = -(auVar51[0xc] == auVar36[4]);
          auVar60[0xd] = -(auVar51[0xd] == auVar36[5]);
          auVar60[0xe] = -(auVar51[0xe] == auVar36[6]);
          auVar60[0xf] = -(auVar51[0xf] == auVar36[7]);
          uVar28 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
          uVar10 = (uint)uVar28;
          while (uVar28 != 0) {
            uVar11 = 0;
            for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            uVar29 = uVar11 + uVar14 & (ulonglong)ppppppuVar4;
            if (apppppppuStack_3b8[0] == (ulonglong *******)ppppppuVar3[uVar29 * -0x1b + -0x1b]) {
              uStack_b0 = (ulonglong *******)
                          CONCAT44(uStack_b0._4_4_,
                                   (uint)*(byte *)((longlong)ppppppuVar3 + uVar29 * -0xd8 + -6));
              uVar14 = 0xf;
              uVar16 = pdb_140dc6290(&UNK_1434e1886);
              pppppppuVar21 = (ulonglong *******)*param_5;
              if ((!SBORROW8(0,(longlong)*pppppppuVar21)) &&
                 (cVar9 = pdb_140a82810(pppppppuVar21), cVar9 != '\0')) {
                uVar14 = 0x10;
                uVar16 = pdb_140dc6290(&UNK_1434e1895);
              }
              pppppppuVar33 = (ulonglong *******)0x10;
              uVar22 = pdb_140dc6290(&UNK_1434e18a5);
              if ((longlong)pppppppuVar33 < 0) {
                param_5 = (undefined8 *)0x0;
LAB_14239e0c9:
                pdb_142dc7e2a(param_5,pppppppuVar33);
                goto LAB_1423a09e5;
              }
              pppppppuStack_138 = (ulonglong *******)pcVar23;
              pppppppuStack_f8 = pppppppuVar33;
              pppppppuStack_d0 = pppppppuVar21;
              if (pppppppuVar33 == (ulonglong *******)0x0) {
                pppppppuStack_e0 = (ulonglong *******)0x1;
              }
              else {
                pdb_14007ee60();
                param_5 = (undefined8 *)0x1;
                pppppppuVar21 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar33,1);
                if (pppppppuVar21 == (ulonglong *******)0x0) goto LAB_14239e0c9;
                pppppppuStack_e0 = pppppppuVar21;
                pub_142e32760(pppppppuVar21,uVar22);
              }
              unaff_R14 = pppppppuStack_d0;
              pppppppuVar21 = (ulonglong *******)0x10;
              uVar22 = pdb_140dc6290(&UNK_1434e18b5);
              if ((longlong)pppppppuVar21 < 0) {
                param_5 = (undefined8 *)0x0;
LAB_14239e560:
                pdb_142dc7e2a(param_5,pppppppuVar21);
                goto LAB_1423a09e5;
              }
              pppppppuStack_e8 = pppppppuVar21;
              if (pppppppuVar21 == (ulonglong *******)0x0) {
                pppppppuStack_148 = (ulonglong *******)0x1;
              }
              else {
                pdb_14007ee60();
                param_5 = (undefined8 *)0x1;
                pppppppuVar33 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar21,1);
                if (pppppppuVar33 == (ulonglong *******)0x0) goto LAB_14239e560;
                pppppppuStack_148 = pppppppuVar33;
                pub_142e32760(pppppppuVar33,uVar22,pppppppuVar21);
                unaff_R14 = pppppppuStack_d0;
              }
              pppppppuVar21 = (ulonglong *******)0xf;
              uVar22 = pdb_140dc6290(&UNK_1434e18c5);
              if ((longlong)pppppppuVar21 < 0) {
                param_5 = (undefined8 *)0x0;
LAB_14239e60d:
                pdb_142dc7e2a(param_5,pppppppuVar21);
                goto LAB_1423a09e5;
              }
              pppppppuStack_270 = pppppppuVar21;
              if (pppppppuVar21 == (ulonglong *******)0x0) {
                pppppppuStack_238 = (ulonglong *******)0x1;
              }
              else {
                pdb_14007ee60();
                param_5 = (undefined8 *)0x1;
                pppppppuVar33 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar21,1);
                if (pppppppuVar33 == (ulonglong *******)0x0) goto LAB_14239e60d;
                pppppppuStack_238 = pppppppuVar33;
                pub_142e32760(pppppppuVar33,uVar22,pppppppuVar21);
                unaff_R14 = pppppppuStack_d0;
              }
              pppppppuVar21 = (ulonglong *******)0x11;
              uVar22 = pdb_140dc6290(&UNK_1434e18d4);
              if ((longlong)pppppppuVar21 < 0) {
                param_5 = (undefined8 *)0x0;
LAB_14239e7dc:
                pdb_142dc7e2a(param_5,pppppppuVar21);
                goto LAB_1423a09e5;
              }
              pppppppuStack_268 = pppppppuVar21;
              if (pppppppuVar21 == (ulonglong *******)0x0) {
                pbStack_230 = (byte *)0x1;
              }
              else {
                pdb_14007ee60();
                param_5 = (undefined8 *)0x1;
                pbVar17 = pub_1406abab0((ulonglong)pppppppuVar21,1);
                if (pbVar17 == (byte *)0x0) goto LAB_14239e7dc;
                pbStack_230 = pbVar17;
                pub_142e32760(pbVar17,uVar22,pppppppuVar21);
                unaff_R14 = pppppppuStack_d0;
              }
              uVar29 = 0x10;
              uVar22 = pdb_140dc6290(&UNK_1434e18e5);
              if ((longlong)uVar29 < 0) {
                param_5 = (undefined8 *)0x0;
LAB_14239e881:
                pdb_142dc7e2a(param_5,uVar29);
                goto LAB_1423a09e5;
              }
              uStack_260 = uVar29;
              if (uVar29 == 0) {
                pbStack_380 = (byte *)0x1;
                pppppppuVar21 = pppppppuStack_e8;
              }
              else {
                pdb_14007ee60();
                param_5 = (undefined8 *)0x1;
                pbVar17 = pub_1406abab0(uVar29,1);
                pppppppuVar21 = pppppppuStack_e8;
                if (pbVar17 == (byte *)0x0) goto LAB_14239e881;
                pbStack_380 = pbVar17;
                pub_142e32760(pbVar17,uVar22);
                unaff_R14 = pppppppuStack_d0;
              }
              if ((longlong)uVar14 < 0) {
                param_5 = (undefined8 *)0x0;
LAB_14239f1ed:
                pdb_142dc7e2a(param_5,uVar14);
                goto LAB_1423a09e5;
              }
              pppppppuStack_3c8 = pppppppuVar34;
              if (uVar14 == 0) {
                unaff_R13 = (ulonglong *******)0x1;
              }
              else {
                pdb_14007ee60();
                param_5 = (undefined8 *)0x1;
                unaff_R13 = (ulonglong *******)pub_1406abab0(uVar14,1);
                if (unaff_R13 == (ulonglong *******)0x0) goto LAB_14239f1ed;
                pub_142e32760(unaff_R13,uVar16,uVar14);
              }
              uVar20 = _DAT_14329e250;
              pppppuVar7 = _DAT_142fa5c30;
              uVar12 = _DAT_142f3e554;
              pppppuVar24 = _UNK_142e378f8;
              pppppuVar26 = _DAT_142e378f0;
              stack0xfffffffffffffc98 = 1;
              apppppppuStack_360[0] = pppppppuStack_f8;
              apppppppuStack_360[1] = pppppppuStack_e0;
              pppppppuStack_350 = pppppppuStack_f8;
              uStack_348 = 0x100;
              pppppppuStack_340 = pppppppuVar21;
              unaff_R12 = (ulonglong *******)&pppppppuStack_338;
              pppppppuStack_338 = pppppppuStack_148;
              pppppppuStack_330 = pppppppuVar21;
              uStack_328 = 0x300;
              pppppppuStack_320 = pppppppuStack_270;
              pppppppuStack_318 = pppppppuStack_238;
              pppppppuStack_310 = pppppppuStack_270;
              uStack_308 = 0x200;
              pppppppuStack_300 = pppppppuStack_268;
              pbStack_2f8 = pbStack_230;
              pppppppuStack_2f0 = pppppppuStack_268;
              uStack_2e8 = 0x400;
              uStack_2e0 = uStack_260;
              pbStack_2d8 = pbStack_380;
              uStack_2d0 = uStack_260;
              auStack_370._0_8_ = 6;
              uStack_2c8 = 0x500;
              uStack_2c0 = uVar14;
              pppppppuStack_2b8 = unaff_R13;
              uStack_2b0 = uVar14;
              param_4 = (ulonglong *******)CONCAT71((int7)((ulonglong)param_5 >> 8),6);
              param_3 = (ulonglong *******)0x5;
              iVar27 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                                        CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba)
                                                )) ==
                              CONCAT13(unaff_XMM8_Bd,
                                       CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))
                                      ));
              cVar9 = (char)iVar27;
              cVar69 = (char)((uint)iVar27 >> 8);
              cVar70 = (char)((uint)iVar27 >> 0x10);
              cVar71 = (char)((uint)iVar27 >> 0x18);
              iVar27 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                                        CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be)
                                                )) ==
                              CONCAT13(unaff_XMM8_Bh,
                                       CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))
                                      ));
              cVar72 = (char)iVar27;
              cVar73 = (char)((uint)iVar27 >> 8);
              cVar74 = (char)((uint)iVar27 >> 0x10);
              cVar75 = (char)((uint)iVar27 >> 0x18);
              iVar27 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                                        CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi)
                                                )) ==
                              CONCAT13(unaff_XMM8_Bl,
                                       CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))
                                      ));
              cVar76 = (char)iVar27;
              cVar77 = (char)((uint)iVar27 >> 8);
              cVar78 = (char)((uint)iVar27 >> 0x10);
              cVar79 = (char)((uint)iVar27 >> 0x18);
              iVar27 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                                        CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm)
                                                )) ==
                              CONCAT13(unaff_XMM8_Bp,
                                       CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))
                                      ));
              cVar80 = (char)iVar27;
              cVar81 = (char)((uint)iVar27 >> 8);
              cVar82 = (char)((uint)iVar27 >> 0x10);
              cVar83 = (char)((uint)iVar27 >> 0x18);
              pppppppuVar21 = (ulonglong *******)0x0;
              pcVar23 = (code *)(ulonglong *******)0x0;
              goto LAB_14239f373;
            }
            uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
            uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
          }
          auVar45[0] = -(auVar51[0] == -1);
          auVar45[1] = -(auVar51[1] == -1);
          auVar45[2] = -(auVar51[2] == -1);
          auVar45[3] = -(auVar51[3] == -1);
          auVar45[4] = -(auVar51[4] == -1);
          auVar45[5] = -(auVar51[5] == -1);
          auVar45[6] = -(auVar51[6] == -1);
          auVar45[7] = -(auVar51[7] == -1);
          auVar45[8] = -(auVar51[8] == -1);
          auVar45[9] = -(auVar51[9] == -1);
          auVar45[10] = -(auVar51[10] == -1);
          auVar45[0xb] = -(auVar51[0xb] == -1);
          auVar45[0xc] = -(auVar51[0xc] == -1);
          auVar45[0xd] = -(auVar51[0xd] == -1);
          auVar45[0xe] = -(auVar51[0xe] == -1);
          auVar45[0xf] = -(auVar51[0xf] == -1);
          if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar45 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar45 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar45 >> 0x2f,0) & 1) != 0) || (SUB161(auVar45 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') goto LAB_14239e40c;
          uVar14 = uVar14 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        } while( true );
      }
      *(undefined4 *)pcVar23 = plStack_140._0_4_;
      pppppppuStack_378 = (ulonglong *******)&UNK_1434e1a67;
      auStack_370._0_8_ = 0x11;
      uVar14 = pdb_140bbbcb0(&pppppppuStack_378);
      pppppppuVar33 = (ulonglong *******)(uVar14 ^ 0xb1695320004fb443);
      pppppppuVar21 = pppppppuVar33;
      lVar13 = pdb_14072c2d0(param_2);
      *(undefined1 *)(lVar13 + 0x5e) = 0;
      *(undefined1 *)(lVar13 + 0xcb) = 1;
      if (((ulonglong)pppppppuVar21 & 1) == 0) {
        ppppppuVar3 = param_2[2];
        if (ppppppuVar3 == *param_2) {
          pdb_142d7f080(param_2);
        }
        ppppppuVar4 = param_2[1];
        *(undefined4 *)(ppppppuVar4 + (longlong)ppppppuVar3 * 7) = 1;
        ppppppuVar4[(longlong)ppppppuVar3 * 7 + 6] = (ulonglong *****)pppppppuVar33;
        param_2[2] = (ulonglong ******)((longlong)ppppppuVar3 + 1);
      }
      pppppppuStack_118 = (ulonglong *******)0x0;
      pppppppuStack_378 = (ulonglong *******)0x0;
      ppppppuVar3 = _DAT_14329c330;
      pppppppuVar21 = _UNK_14329c338;
      pppppppuStack_128 = param_2;
      pppppppuStack_120 = pppppppuVar33;
      auStack_370._0_8_ = ppppppuVar3;
      unique0x10003bd5 = pppppppuVar21;
      auStack_370._0_8_ = pdb_1400affa0(&pppppppuStack_378);
      pppppppuStack_378 = pppppppuVar33;
      uVar16 = pdb_1400b0130(&pppppppuStack_378);
      pdb_14072caa0(&pppppppuStack_228,&pppppppuStack_128,uVar16);
      pppppppuVar33 = pppppppuStack_220;
      pppppppuStack_378 = (ulonglong *******)0x0;
      auStack_370._0_8_ = ppppppuVar3;
      unique0x10003bed = pppppppuVar21;
      auStack_370._0_8_ = pdb_1400affa0(&pppppppuStack_378);
      pppppppuStack_378 = pppppppuVar33;
      uVar16 = pdb_1400b0130(&pppppppuStack_378);
      pdb_14072caa0(&pppppppuStack_378,&pppppppuStack_228,uVar16);
      pdb_141174160(auStack_418,&pppppppuStack_378,&UNK_1434e1a78,0x16,0);
      pdb_141186520(&pppppppuStack_1f8,auStack_418,&UNK_1434e1a8e,6);
      uVar16 = pdb_140dc6290(&UNK_1434e1a94);
      pdb_1407339e0(&pppppppuStack_378,&pppppppuStack_1f8,uVar16);
      pppppppuVar21 = pppppppuStack_378;
      if (pppppppuStack_378[0x39] != (ulonglong ******)0x0) {
        uVar14 = pdb_1400af0a0(pppppppuStack_378 + 0x3a,auStack_370);
        ppppppuVar3 = pppppppuVar21[0x36];
        ppppppuVar4 = pppppppuVar21[0x37];
        bVar8 = (byte)(uVar14 >> 0x39);
        auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
        auVar36 = pshuflw(auVar36,auVar36,0);
        lVar13 = 0;
        while( true ) {
          uVar14 = uVar14 & (ulonglong)ppppppuVar4;
          auVar51 = *(undefined1 (*) [16])((longlong)ppppppuVar3 + uVar14);
          auVar59[0] = -(auVar51[0] == auVar36[0]);
          auVar59[1] = -(auVar51[1] == auVar36[1]);
          auVar59[2] = -(auVar51[2] == auVar36[2]);
          auVar59[3] = -(auVar51[3] == auVar36[3]);
          auVar59[4] = -(auVar51[4] == auVar36[4]);
          auVar59[5] = -(auVar51[5] == auVar36[5]);
          auVar59[6] = -(auVar51[6] == auVar36[6]);
          auVar59[7] = -(auVar51[7] == auVar36[7]);
          auVar59[8] = -(auVar51[8] == auVar36[0]);
          auVar59[9] = -(auVar51[9] == auVar36[1]);
          auVar59[10] = -(auVar51[10] == auVar36[2]);
          auVar59[0xb] = -(auVar51[0xb] == auVar36[3]);
          auVar59[0xc] = -(auVar51[0xc] == auVar36[4]);
          auVar59[0xd] = -(auVar51[0xd] == auVar36[5]);
          auVar59[0xe] = -(auVar51[0xe] == auVar36[6]);
          auVar59[0xf] = -(auVar51[0xf] == auVar36[7]);
          uVar28 = (ushort)(SUB161(auVar59 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar59[0xf] >> 7) << 0xf;
          uVar10 = (uint)uVar28;
          while (uVar28 != 0) {
            uVar11 = 0;
            for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            uVar29 = uVar11 + uVar14 & (ulonglong)ppppppuVar4;
            if ((ulonglong *****)auStack_370._0_8_ == ppppppuVar3[uVar29 * -0x1b + -0x1b]) {
              if ((*(byte *)((longlong)ppppppuVar3 + uVar29 * -0xd8 + -6) & 0x30) != 0) {
                *(code *)param_11 = (code)0x0;
              }
              uVar16 = pdb_140dc6290(&UNK_1434e1aa1);
              pdb_1407339e0(&pppppppuStack_378,&pppppppuStack_1f8,uVar16);
              pppppppuVar21 = pppppppuStack_378;
              if (pppppppuStack_378[0x39] != (ulonglong ******)0x0) {
                uVar14 = pdb_1400af0a0(pppppppuStack_378 + 0x3a,auStack_370);
                ppppppuVar3 = pppppppuVar21[0x36];
                ppppppuVar4 = pppppppuVar21[0x37];
                bVar8 = (byte)(uVar14 >> 0x39);
                auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
                auVar36 = pshuflw(auVar36,auVar36,0);
                lVar13 = 0;
                while( true ) {
                  uVar14 = uVar14 & (ulonglong)ppppppuVar4;
                  auVar51 = *(undefined1 (*) [16])((longlong)ppppppuVar3 + uVar14);
                  auVar61[0] = -(auVar51[0] == auVar36[0]);
                  auVar61[1] = -(auVar51[1] == auVar36[1]);
                  auVar61[2] = -(auVar51[2] == auVar36[2]);
                  auVar61[3] = -(auVar51[3] == auVar36[3]);
                  auVar61[4] = -(auVar51[4] == auVar36[4]);
                  auVar61[5] = -(auVar51[5] == auVar36[5]);
                  auVar61[6] = -(auVar51[6] == auVar36[6]);
                  auVar61[7] = -(auVar51[7] == auVar36[7]);
                  auVar61[8] = -(auVar51[8] == auVar36[0]);
                  auVar61[9] = -(auVar51[9] == auVar36[1]);
                  auVar61[10] = -(auVar51[10] == auVar36[2]);
                  auVar61[0xb] = -(auVar51[0xb] == auVar36[3]);
                  auVar61[0xc] = -(auVar51[0xc] == auVar36[4]);
                  auVar61[0xd] = -(auVar51[0xd] == auVar36[5]);
                  auVar61[0xe] = -(auVar51[0xe] == auVar36[6]);
                  auVar61[0xf] = -(auVar51[0xf] == auVar36[7]);
                  uVar28 = (ushort)(SUB161(auVar61 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar61[0xf] >> 7) << 0xf;
                  uVar10 = (uint)uVar28;
                  while (uVar28 != 0) {
                    uVar11 = 0;
                    for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                      uVar11 = uVar11 + 1;
                    }
                    uVar29 = uVar11 + uVar14 & (ulonglong)ppppppuVar4;
                    unaff_R13 = (ulonglong *******)(uVar29 * -0xd8);
                    if ((ulonglong *****)auStack_370._0_8_ == (ppppppuVar3 + -0x1b)[uVar29 * -0x1b])
                    {
                      if (((byte)*(code *)((longlong)unaff_R13 + ((longlong)ppppppuVar3 - 6U)) &
                          0x30) != 0) {
                        *(code *)param_11 = (code)0x0;
                        unaff_R12 = (ulonglong *******)0x0;
                        uStack_b0 = (ulonglong *******)((ulonglong)uStack_b0._4_4_ << 0x20);
                        *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
                        *(longlong *)(*param_13 + 1000) = *(longlong *)(*param_13 + 1000) + 1;
                        uStack_18b = SUB41(*(undefined4 *)((longlong)param_9 + 0x1c),0);
                        *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
                        *(undefined1 *)*param_9 = 2;
                        pppppppuStack_d0 = (ulonglong *******)0x8000000000000000;
                        pppppppuStack_1c8 = (ulonglong *******)0x8000000000000000;
                        pppppppuVar34 = (ulonglong *******)0x1;
                        pppppppuVar21 = (ulonglong *******)0x0;
                        pppppuVar26 = (ulonglong *****)auStack_370._0_8_;
                        cStack_160 = '\0';
                        goto LAB_14239e253;
                      }
                      uStack_b0 = (ulonglong *******)((ulonglong)uStack_b0._4_4_ << 0x20);
                      pppppppuVar21 = (ulonglong *******)pcVar23;
                      unaff_R12 = param_11;
                      unaff_R13 = pppppppuVar34;
                      goto LAB_14239e4d2;
                    }
                    uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
                    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
                  }
                  auVar46[0] = -(auVar51[0] == -1);
                  auVar46[1] = -(auVar51[1] == -1);
                  auVar46[2] = -(auVar51[2] == -1);
                  auVar46[3] = -(auVar51[3] == -1);
                  auVar46[4] = -(auVar51[4] == -1);
                  auVar46[5] = -(auVar51[5] == -1);
                  auVar46[6] = -(auVar51[6] == -1);
                  auVar46[7] = -(auVar51[7] == -1);
                  auVar46[8] = -(auVar51[8] == -1);
                  auVar46[9] = -(auVar51[9] == -1);
                  auVar46[10] = -(auVar51[10] == -1);
                  auVar46[0xb] = -(auVar51[0xb] == -1);
                  auVar46[0xc] = -(auVar51[0xc] == -1);
                  auVar46[0xd] = -(auVar51[0xd] == -1);
                  auVar46[0xe] = -(auVar51[0xe] == -1);
                  auVar46[0xf] = -(auVar51[0xf] == -1);
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
                  uVar14 = uVar14 + lVar13 + 0x10;
                  lVar13 = lVar13 + 0x10;
                }
              }
              pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
              goto LAB_1423a09e5;
            }
            uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
            uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
          }
          auVar44[0] = -(auVar51[0] == -1);
          auVar44[1] = -(auVar51[1] == -1);
          auVar44[2] = -(auVar51[2] == -1);
          auVar44[3] = -(auVar51[3] == -1);
          auVar44[4] = -(auVar51[4] == -1);
          auVar44[5] = -(auVar51[5] == -1);
          auVar44[6] = -(auVar51[6] == -1);
          auVar44[7] = -(auVar51[7] == -1);
          auVar44[8] = -(auVar51[8] == -1);
          auVar44[9] = -(auVar51[9] == -1);
          auVar44[10] = -(auVar51[10] == -1);
          auVar44[0xb] = -(auVar51[0xb] == -1);
          auVar44[0xc] = -(auVar51[0xc] == -1);
          auVar44[0xd] = -(auVar51[0xd] == -1);
          auVar44[0xe] = -(auVar51[0xe] == -1);
          auVar44[0xf] = -(auVar51[0xf] == -1);
          if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 || (SUB161(auVar44 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar44 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar44 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar44 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar44 >> 0x2f,0) & 1) != 0) || (SUB161(auVar44 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar44 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar44 >> 0x47,0) & 1) != 0) || (SUB161(auVar44 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar44 >> 0x57,0) & 1) != 0) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar44 >> 0x67,0) & 1) != 0) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') break;
          uVar14 = uVar14 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        }
      }
      pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
      goto LAB_1423a09e5;
    }
    *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
    *(undefined1 *)(*param_12 + 0x1cc) = 5;
    if ((char)uVar10 == '\0') {
      return;
    }
    plVar15 = (longlong *)pdb_140e97000();
    if (((char)plVar15[0xd] != '\x01') &&
       (plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0), plVar15 == (longlong *)0x0)) {
LAB_14239fd80:
      pdb_142dc7890(&UNK_1432a7ee8);
LAB_14239fd8c:
      uVar84 = (undefined4)((ulonglong)in_stack_fffffffffffffbd8 >> 0x20);
      if (pppppppuVar34 != (ulonglong *******)0x6) {
        do {
          if (unaff_R12[-1] != (ulonglong ******)0x0) {
            pub_1406abac0((byte *)*unaff_R12,(ulonglong)unaff_R12[-1],1);
          }
          uVar84 = (undefined4)((ulonglong)in_stack_fffffffffffffbd8 >> 0x20);
          unaff_R12 = unaff_R12 + 4;
          param_3 = (ulonglong *******)((longlong)param_3 + -1);
        } while (param_3 != (ulonglong *******)0x0);
      }
LAB_14239fd96:
      if ((*(char *)(param_6 + 1) == '\x05') && (((ulonglong)uStack_b0 & 1) != 0)) {
        if (*_DAT_143ca4500 == 1) {
          pdb_141186290(&pppppppuStack_1f8,&pppppppuStack_228,&UNK_1434e1930,10);
          pdb_141174160(&pppppppuStack_378,&pppppppuStack_1f8,&UNK_1434e1a0f,0x22,0);
          lVar13 = (longlong)stack0xfffffffffffffc98;
          if (*(longlong *)((longlong)stack0xfffffffffffffc98 + 0x1c8) != 0) {
            pcVar19 = (code *)pdb_1400af0a0((longlong)stack0xfffffffffffffc98 + 0x1d0,
                                            apppppppuStack_360);
            lVar5 = *(longlong *)(lVar13 + 0x1b0);
            uVar14 = *(ulonglong *)(lVar13 + 0x1b8);
            bVar8 = (byte)((ulonglong)pcVar19 >> 0x39);
            auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
            auVar36 = pshuflw(auVar36,auVar36,0);
            pppppppuVar34 = (ulonglong *******)0x0;
            while( true ) {
              uVar29 = (ulonglong)pcVar19 & uVar14;
              pcVar18 = (char *)(lVar5 + uVar29);
              auVar65[0] = -(*pcVar18 == auVar36[0]);
              auVar65[1] = -(pcVar18[1] == auVar36[1]);
              auVar65[2] = -(pcVar18[2] == auVar36[2]);
              auVar65[3] = -(pcVar18[3] == auVar36[3]);
              auVar65[4] = -(pcVar18[4] == auVar36[4]);
              auVar65[5] = -(pcVar18[5] == auVar36[5]);
              auVar65[6] = -(pcVar18[6] == auVar36[6]);
              auVar65[7] = -(pcVar18[7] == auVar36[7]);
              auVar65[8] = -(pcVar18[8] == auVar36[0]);
              auVar65[9] = -(pcVar18[9] == auVar36[1]);
              auVar65[10] = -(pcVar18[10] == auVar36[2]);
              auVar65[0xb] = -(pcVar18[0xb] == auVar36[3]);
              auVar65[0xc] = -(pcVar18[0xc] == auVar36[4]);
              auVar65[0xd] = -(pcVar18[0xd] == auVar36[5]);
              auVar65[0xe] = -(pcVar18[0xe] == auVar36[6]);
              auVar65[0xf] = -(pcVar18[0xf] == auVar36[7]);
              uVar28 = (ushort)(SUB161(auVar65 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
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
                       (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar65[0xf] >> 7) << 0xf;
              uVar10 = (uint)uVar28;
              while (uVar28 != 0) {
                uVar11 = 0;
                for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar11 = uVar11 + 1;
                }
                lVar13 = (uVar11 + uVar29 & uVar14) * -0xd8;
                if (apppppppuStack_360[0] == *(ulonglong ********)(lVar5 + -0xd8 + lVar13)) {
                  *(undefined4 *)(lVar5 + lVar13 + -0x14) = 0x40000000;
                  unaff_R14 = pppppppuStack_d0;
                  goto LAB_1423a0880;
                }
                uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
                uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
              }
              auVar56[0] = -(*pcVar18 == -1);
              auVar56[1] = -(pcVar18[1] == -1);
              auVar56[2] = -(pcVar18[2] == -1);
              auVar56[3] = -(pcVar18[3] == -1);
              auVar56[4] = -(pcVar18[4] == -1);
              auVar56[5] = -(pcVar18[5] == -1);
              auVar56[6] = -(pcVar18[6] == -1);
              auVar56[7] = -(pcVar18[7] == -1);
              auVar56[8] = -(pcVar18[8] == -1);
              auVar56[9] = -(pcVar18[9] == -1);
              auVar56[10] = -(pcVar18[10] == -1);
              auVar56[0xb] = -(pcVar18[0xb] == -1);
              auVar56[0xc] = -(pcVar18[0xc] == -1);
              auVar56[0xd] = -(pcVar18[0xd] == -1);
              auVar56[0xe] = -(pcVar18[0xe] == -1);
              auVar56[0xf] = -(pcVar18[0xf] == -1);
              if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x4f,0) & 1) != 0) || (SUB161(auVar56 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') break;
              pcVar19 = (code *)((longlong)pppppppuVar34 + uVar29 + 0x10);
              pppppppuVar34 = pppppppuVar34 + 2;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa6b48);
        }
        pppppppuVar34 = unaff_R14 + SBORROW8(0,(longlong)*unaff_R14);
        if (!SBORROW8(0,(longlong)*unaff_R14)) {
          bVar8 = pdb_140a92420(pppppppuVar34 + 3);
          pdb_141186290(&pppppppuStack_1f8,&pppppppuStack_228,&UNK_1434e1930,10);
          puVar25 = &UNK_1434e18f5;
          if (bVar8 != 0) {
            puVar25 = &UNK_1434e1910;
          }
          pdb_141174160(&pppppppuStack_378,&pppppppuStack_1f8,puVar25,(ulonglong)bVar8 * 5 + 0x1b,0)
          ;
          lVar13 = (longlong)stack0xfffffffffffffc98;
          if (*(longlong *)((longlong)stack0xfffffffffffffc98 + 0x1c8) != 0) {
            uVar29 = pdb_1400af0a0((longlong)stack0xfffffffffffffc98 + 0x1d0,apppppppuStack_360);
            lVar5 = *(longlong *)(lVar13 + 0x1b0);
            uVar14 = *(ulonglong *)(lVar13 + 0x1b8);
            bVar8 = (byte)(uVar29 >> 0x39);
            auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
            auVar36 = pshuflw(auVar36,auVar36,0);
            lVar13 = 0;
            while( true ) {
              uVar29 = uVar29 & uVar14;
              auVar51 = *(undefined1 (*) [16])(lVar5 + uVar29);
              auVar67[0] = -(auVar51[0] == auVar36[0]);
              auVar67[1] = -(auVar51[1] == auVar36[1]);
              auVar67[2] = -(auVar51[2] == auVar36[2]);
              auVar67[3] = -(auVar51[3] == auVar36[3]);
              auVar67[4] = -(auVar51[4] == auVar36[4]);
              auVar67[5] = -(auVar51[5] == auVar36[5]);
              auVar67[6] = -(auVar51[6] == auVar36[6]);
              auVar67[7] = -(auVar51[7] == auVar36[7]);
              auVar67[8] = -(auVar51[8] == auVar36[0]);
              auVar67[9] = -(auVar51[9] == auVar36[1]);
              auVar67[10] = -(auVar51[10] == auVar36[2]);
              auVar67[0xb] = -(auVar51[0xb] == auVar36[3]);
              auVar67[0xc] = -(auVar51[0xc] == auVar36[4]);
              auVar67[0xd] = -(auVar51[0xd] == auVar36[5]);
              auVar67[0xe] = -(auVar51[0xe] == auVar36[6]);
              auVar67[0xf] = -(auVar51[0xf] == auVar36[7]);
              uVar28 = (ushort)(SUB161(auVar67 >> 7,0) & 1) |
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
              uVar10 = (uint)uVar28;
              while (uVar28 != 0) {
                uVar11 = 0;
                for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar11 = uVar11 + 1;
                }
                lVar31 = (uVar11 + uVar29 & uVar14) * -0xd8;
                if (apppppppuStack_360[0] == *(ulonglong ********)(lVar5 + -0xd8 + lVar31)) {
                  *(undefined4 *)(lVar5 + lVar31 + -0x14) = 0x40000000;
                  cVar9 = pdb_140a82810(pppppppuVar34);
                  if (cVar9 == '\0') {
                    uVar22 = 0x11;
                    uVar16 = pdb_140dc6290(&UNK_1434e193a);
                  }
                  else {
                    uVar22 = 0x18;
                    uVar16 = pdb_140dc6290(&UNK_1434e194b);
                  }
                  pdb_14118e170(&pppppppuStack_378,&UNK_1434e1963,10,uVar16,uVar22);
                  uVar20 = 0x434e196d;
                  pdb_141188a70(&pppppppuStack_378,&UNK_1434e196d,10,pppppppuVar34);
                  uVar12 = pdb_140f3fd40();
                  pdb_140f3fcf0(&pppppppuStack_1f8,pppppppuVar34 + 0x25,uVar12,uVar20);
                  pppppppuVar34 = pppppppuStack_1f0;
                  if ((char)pppppppuStack_1f8 != '\0') {
                    pppppppuVar34 = (ulonglong *******)0x0;
                  }
                  pppppppuStack_c8 = (ulonglong *******)((ulonglong)pppppppuVar34 % 0x3c);
                  pppppppuStack_128 = (ulonglong *******)&pppppppuStack_c8;
                  pcVar23 = pdb_140f72a40;
                  pppppppuStack_120 = (ulonglong *******)pdb_140f72a40;
                  pdb_140f60760(&pppppppuStack_1f8,&UNK_1434e1977,&pppppppuStack_128);
                  pppppppuStack_c8 = pppppppuStack_1f8;
                  pppppppuStack_c0 = pppppppuStack_1f0;
                  pppppppuStack_b8 = pppppppuStack_1e8;
                  unaff_R12 = (ulonglong *******)(((ulonglong)pppppppuVar34 / 0xe10) % 0x18);
                  pppppuStack_3e0 = (ulonglong *****)((ulonglong)pppppppuVar34 / 0x15180);
                  unaff_R13 = (ulonglong *******)(((ulonglong)pppppppuVar34 / 0x3c) % 0x3c);
                  pppppppuStack_3d8 = unaff_R12;
                  pppppppuStack_3d0 = unaff_R13;
                  if (unaff_R13 != (ulonglong *******)0x0) {
                    pppppppuStack_1f8 = (ulonglong *******)&pppppppuStack_3d0;
                    pppppppuStack_1f0 = (ulonglong *******)pdb_140f72a40;
                    pppppppuStack_1e8 = (ulonglong *******)&pppppppuStack_c8;
                    uStack_1e0 = pdb_140001020;
                    pdb_140905540(&pppppppuStack_128,&UNK_1434e197b,&pppppppuStack_1f8);
                    pppppppuStack_1f8 = pppppppuStack_128;
                    pppppppuStack_1f0 = pppppppuStack_120;
                    pppppppuStack_1e8 = pppppppuStack_118;
                    if (pppppppuStack_c8 != (ulonglong *******)0x0) {
                      pub_1406abac0((byte *)pppppppuStack_c0,(ulonglong)pppppppuStack_c8,1);
                    }
                  }
                  pppppppuStack_c0 = pppppppuStack_1f0;
                  pppppppuStack_c8 = pppppppuStack_1f8;
                  pppppppuStack_b8 = pppppppuStack_1e8;
                  if (unaff_R12 != (ulonglong *******)0x0) {
                    pppppppuStack_1f0 = (ulonglong *******)pdb_140f72a40;
                    uStack_1e0 = pdb_140001020;
                    pppppppuStack_1f8 = (ulonglong *******)&pppppppuStack_3d8;
                    pppppppuStack_1e8 = (ulonglong *******)&pppppppuStack_c8;
                    pdb_140905540(&pppppppuStack_128,&UNK_1434e1983,&pppppppuStack_1f8);
                    pppppppuStack_1f8 = pppppppuStack_128;
                    pppppppuStack_1f0 = pppppppuStack_120;
                    pppppppuStack_1e8 = pppppppuStack_118;
                    if (pppppppuStack_c8 != (ulonglong *******)0x0) {
                      pub_1406abac0((byte *)pppppppuStack_c0,(ulonglong)pppppppuStack_c8,1);
                    }
                    pppppppuStack_b8 = pppppppuStack_1e8;
                    pppppppuStack_c8 = pppppppuStack_1f8;
                    pppppppuStack_c0 = pppppppuStack_1f0;
                  }
                  if ((ulonglong *******)0x1517f < pppppppuVar34) {
                    pppppppuStack_1f8 = (ulonglong *******)&pppppuStack_3e0;
                    pppppppuStack_1f0 = (ulonglong *******)pdb_140f72a40;
                    pppppppuStack_1e8 = (ulonglong *******)&pppppppuStack_c8;
                    uStack_1e0 = pdb_140001020;
                    pdb_140905540(&pppppppuStack_128,&UNK_1434e1989,&pppppppuStack_1f8);
                    pppppppuStack_1f8 = pppppppuStack_128;
                    pppppppuStack_1f0 = pppppppuStack_120;
                    pppppppuStack_1e8 = pppppppuStack_118;
                    if (pppppppuStack_c8 != (ulonglong *******)0x0) {
                      pub_1406abac0((byte *)pppppppuStack_c0,(ulonglong)pppppppuStack_c8,1);
                    }
                    pppppppuStack_b8 = pppppppuStack_1e8;
                    pppppppuStack_c8 = pppppppuStack_1f8;
                    pppppppuStack_c0 = pppppppuStack_1f0;
                  }
                  pppppppuVar34 = (ulonglong *******)&pppppppuStack_c8;
                  pppppppuStack_1f8 = pppppppuStack_c8;
                  pppppppuStack_1f0 = pppppppuStack_c0;
                  pppppppuStack_1e8 = pppppppuStack_b8;
                  pdb_141190210(&pppppppuStack_378,&UNK_1434e198f,0xd);
                  unaff_R14 = pppppppuStack_d0;
                  pppppppuVar21 = pppppppuStack_c8;
                  pppppppuVar33 = pppppppuStack_c0;
                  goto joined_r0x0001423a0659;
                }
                uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
                uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
              }
              auVar58[0] = -(auVar51[0] == -1);
              auVar58[1] = -(auVar51[1] == -1);
              auVar58[2] = -(auVar51[2] == -1);
              auVar58[3] = -(auVar51[3] == -1);
              auVar58[4] = -(auVar51[4] == -1);
              auVar58[5] = -(auVar51[5] == -1);
              auVar58[6] = -(auVar51[6] == -1);
              auVar58[7] = -(auVar51[7] == -1);
              auVar58[8] = -(auVar51[8] == -1);
              auVar58[9] = -(auVar51[9] == -1);
              auVar58[10] = -(auVar51[10] == -1);
              auVar58[0xb] = -(auVar51[0xb] == -1);
              auVar58[0xc] = -(auVar51[0xc] == -1);
              auVar58[0xd] = -(auVar51[0xd] == -1);
              auVar58[0xe] = -(auVar51[0xe] == -1);
              auVar58[0xf] = -(auVar51[0xf] == -1);
              if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar58 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar58 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar58 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x4f,0) & 1) != 0) || (SUB161(auVar58 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
              uVar29 = uVar29 + lVar13 + 0x10;
              lVar13 = lVar13 + 0x10;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa6b48);
        }
        pdb_141186290(&pppppppuStack_1f8,&pppppppuStack_228,&UNK_1434e1930,10);
        uVar14 = 1;
        if ((longlong)*pppppppuVar34 < 0) {
          uVar14 = (ulonglong)*pppppppuVar34 ^ 0x8000000000000000;
        }
        puVar25 = &UNK_1434e19be;
        if (uVar14 == 0) {
          puVar25 = &UNK_1434e199c;
        }
        pdb_141174160(&pppppppuStack_378,&pppppppuStack_1f8,puVar25,(uVar14 == 0) * '\x04' + '\x1e',
                      0);
        unaff_R13 = stack0xfffffffffffffc98;
        if (stack0xfffffffffffffc98[0x39] != (ulonglong ******)0x0) {
          uVar29 = pdb_1400af0a0(stack0xfffffffffffffc98 + 0x3a,apppppppuStack_360);
          ppppppuVar3 = unaff_R13[0x36];
          bVar8 = (byte)(uVar29 >> 0x39);
          auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
          auVar36 = pshuflw(auVar36,auVar36,0);
          lVar13 = 0;
          do {
            uVar29 = uVar29 & (ulonglong)unaff_R13[0x37];
            auVar51 = *(undefined1 (*) [16])((longlong)ppppppuVar3 + uVar29);
            auVar66[0] = -(auVar51[0] == auVar36[0]);
            auVar66[1] = -(auVar51[1] == auVar36[1]);
            auVar66[2] = -(auVar51[2] == auVar36[2]);
            auVar66[3] = -(auVar51[3] == auVar36[3]);
            auVar66[4] = -(auVar51[4] == auVar36[4]);
            auVar66[5] = -(auVar51[5] == auVar36[5]);
            auVar66[6] = -(auVar51[6] == auVar36[6]);
            auVar66[7] = -(auVar51[7] == auVar36[7]);
            auVar66[8] = -(auVar51[8] == auVar36[0]);
            auVar66[9] = -(auVar51[9] == auVar36[1]);
            auVar66[10] = -(auVar51[10] == auVar36[2]);
            auVar66[0xb] = -(auVar51[0xb] == auVar36[3]);
            auVar66[0xc] = -(auVar51[0xc] == auVar36[4]);
            auVar66[0xd] = -(auVar51[0xd] == auVar36[5]);
            auVar66[0xe] = -(auVar51[0xe] == auVar36[6]);
            auVar66[0xf] = -(auVar51[0xf] == auVar36[7]);
            uVar28 = (ushort)(SUB161(auVar66 >> 7,0) & 1) |
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
            uVar10 = (uint)uVar28;
joined_r0x00014239fff5:
            if (uVar28 != 0) {
              uVar11 = 0;
              for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar11 = uVar11 + 1;
              }
              uVar30 = uVar11 + uVar29 & (ulonglong)unaff_R13[0x37];
              if (apppppppuStack_360[0] != (ulonglong *******)ppppppuVar3[uVar30 * -0x1b + -0x1b])
              goto code_r0x0001423a001a;
              *(undefined4 *)((longlong)ppppppuVar3 + uVar30 * -0xd8 + -0x14) = 0x40000000;
              if (uVar14 == 0) {
                pppppppuStack_258 = (ulonglong *******)0x0;
                pppppppuStack_250 = (ulonglong *******)0x1;
                pppppppuStack_248 = (ulonglong *******)0x0;
              }
              else if (uVar14 == 1) {
                pppppppuVar21 = (ulonglong *******)0x13;
                pppppppuStack_288 = pppppppuVar34;
                pppppppuStack_c8 = (ulonglong *******)pdb_140dc6290(&UNK_1434e19dc);
                pppppppuStack_1f8 = (ulonglong *******)&pppppppuStack_c8;
                pppppppuStack_1f0 = (ulonglong *******)pdb_1402ed400;
                pppppppuStack_1e8 = (ulonglong *******)&pppppppuStack_288;
                uStack_1e0 = pdb_140493ec0;
                pppppppuStack_c0 = pppppppuVar21;
                pdb_140905540(&pppppppuStack_128,&UNK_1434e19ef,&pppppppuStack_1f8);
                pppppppuStack_258 = pppppppuStack_128;
                pppppppuStack_250 = pppppppuStack_120;
                pppppppuStack_248 = pppppppuStack_118;
              }
              else {
                uVar22 = 0x14;
                uVar16 = pdb_140dc6290(&UNK_1434e19f5,0x14);
                pdb_140576e90(&pppppppuStack_258,uVar16,uVar22);
              }
              pppppppuVar34 = (ulonglong *******)0x6;
              pdb_141186290(&pppppppuStack_128,&pppppppuStack_378,&UNK_1434e1a09);
              unaff_R12 = pppppppuStack_248;
              pppppppuVar33 = pppppppuStack_250;
              pppppppuStack_288 = pppppppuStack_250;
              apppppppuStack_280[0] = pppppppuStack_248;
              pppppppuStack_1f8 = (ulonglong *******)pdb_140bbbcb0(&pppppppuStack_288);
              pppppppuStack_1f0 = (ulonglong *******)_DAT_14329c260;
              pppppppuStack_1e8 = _UNK_14329c268;
              pppppppuStack_1f0 = (ulonglong *******)pdb_1400affa0(&pppppppuStack_1f8);
              pppppppuStack_1f8 = pppppppuStack_120;
              uVar16 = pdb_1400b0130(&pppppppuStack_1f8);
              pdb_14072caa0(&pppppppuStack_1f8,&pppppppuStack_128,uVar16);
              uVar16 = pdb_14116ee90(&pppppppuStack_1f8,0);
              pdb_14119b6b0(uVar16,pppppppuVar33,unaff_R12);
              pppppppuStack_b8 = pppppppuStack_1e8;
              pppppppuStack_c8 = pppppppuStack_1f8;
              pppppppuStack_c0 = pppppppuStack_1f0;
              uVar16 = pdb_14116e180(&pppppppuStack_c8);
              pdb_140cb68f0(uVar16,2);
              pppppppuStack_1e8 = pppppppuStack_b8;
              pppppppuStack_1f8 = pppppppuStack_c8;
              pppppppuStack_1f0 = pppppppuStack_c0;
              uVar16 = pdb_14116e180(&pppppppuStack_1f8);
              pdb_14119b2b0(uVar16,_DAT_142e37994);
              pppppppuStack_b8 = pppppppuStack_1e8;
              pppppppuStack_c8 = pppppppuStack_1f8;
              pppppppuStack_c0 = pppppppuStack_1f0;
              uVar16 = pdb_14116e180(&pppppppuStack_c8);
              pdb_140cb5a70(uVar16,0);
              pppppppuStack_1e8 = pppppppuStack_b8;
              pppppppuStack_1f8 = pppppppuStack_c8;
              pppppppuStack_1f0 = pppppppuStack_c0;
              uVar16 = pdb_14116e180(&pppppppuStack_1f8);
              pdb_140cb5df0(uVar16);
              unaff_R14 = pppppppuStack_d0;
              pppppppuVar21 = pppppppuStack_258;
joined_r0x0001423a0659:
              pppppppuStack_d0 = unaff_R14;
              if (pppppppuVar21 != (ulonglong *******)0x0) {
                pub_1406abac0((byte *)pppppppuVar33,(ulonglong)pppppppuVar21,1);
                unaff_R14 = pppppppuStack_d0;
              }
              goto LAB_1423a0880;
            }
            auVar57[0] = -(auVar51[0] == -1);
            auVar57[1] = -(auVar51[1] == -1);
            auVar57[2] = -(auVar51[2] == -1);
            auVar57[3] = -(auVar51[3] == -1);
            auVar57[4] = -(auVar51[4] == -1);
            auVar57[5] = -(auVar51[5] == -1);
            auVar57[6] = -(auVar51[6] == -1);
            auVar57[7] = -(auVar51[7] == -1);
            auVar57[8] = -(auVar51[8] == -1);
            auVar57[9] = -(auVar51[9] == -1);
            auVar57[10] = -(auVar51[10] == -1);
            auVar57[0xb] = -(auVar51[0xb] == -1);
            auVar57[0xc] = -(auVar51[0xc] == -1);
            auVar57[0xd] = -(auVar51[0xd] == -1);
            auVar57[0xe] = -(auVar51[0xe] == -1);
            auVar57[0xf] = -(auVar51[0xf] == -1);
            if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar57 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x3f,0) & 1) != 0) || (SUB161(auVar57 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
            uVar29 = uVar29 + lVar13 + 0x10;
            lVar13 = lVar13 + 0x10;
          } while( true );
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142fa6b48);
      }
LAB_1423a0880:
      cVar9 = (char)param_4;
      pppppppuVar21 = pppppppuStack_138;
      if (cVar9 == '\x06') {
LAB_14239e4d2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(*(undefined1 *)(param_6 + 1)) {
        case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          pppppppuStack_c8 = (ulonglong *******)0x8000000000000000;
          pcVar23 = (code *)pppppppuVar21;
        }
      }
      else {
        unaff_R12 = (ulonglong *******)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),cVar9 == '\x05');
        pppppppuVar21 = (ulonglong *******)((ulonglong)param_4 & 0xffffffff);
        iVar27 = *(int *)(&UNK_1434e1bc0 + ((ulonglong)param_4 & 0xff) * 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((ulonglong)param_4 & 0xff) {
        case 7:
          (&UNK_1434e1d8c)[iVar27] = 1;
          pppppppuStack_1f0 = (ulonglong *******)0x5;
          pppppppuStack_1f8 = (ulonglong *******)&UNK_1434e1b1d;
          break;
        case 8:
          (&UNK_1434e1d8c)[iVar27] = 4;
          pppppppuStack_1f0 = (ulonglong *******)0x6;
          pppppppuStack_1f8 = (ulonglong *******)&UNK_1434e1b22;
          break;
        case 9:
          (&UNK_1434e1d8c)[iVar27] = 2;
          pppppppuStack_1f0 = (ulonglong *******)0x7;
          pppppppuStack_1f8 = (ulonglong *******)&UNK_1434e1b16;
          break;
        case 10:
          UNK_1434e1bc0 = UNK_1434e1bc0 + (char)((ulonglong)param_4 >> 8);
          pbVar17 = &UNK_1434e1b49 + iVar27;
          *pbVar17 = *pbVar17 >> 1 | *pbVar17 << 7;
          pppppuVar26 = (ulonglong *****)
                        ((longlong)pppppppuVar34 + (longlong)(&UNK_1434e1bc0 + iVar27));
          pcVar18 = (char *)0x0;
          do {
            if ((code *)((longlong)unaff_R13 + (longlong)pcVar18) ==
                (code *)((longlong)unaff_R13 + (longlong)pppppppuVar21)) break;
            *(code *)((longlong)pppppuVar26 + (longlong)pcVar18) =
                 *(code *)((longlong)unaff_R13 + (longlong)pcVar18);
            pcVar18 = pcVar18 + 1;
          } while (pcVar18 != &UNK_1434e1bc0);
          cVar2 = (code)0xc0;
          if (SBORROW8(0,(longlong)*unaff_R14)) {
LAB_14239ea60:
            uStack_18b = cVar2;
            pppppppuStack_1c8 = (ulonglong *******)0x8000000000000000;
            cStack_160 = cVar9;
          }
          else {
            if (SBORROW8(0,(longlong)unaff_R14[9])) {
              pppppppuStack_1c8 = (ulonglong *******)0x8000000000000000;
              uStack_18b = (code)0xc0;
            }
            else {
              cVar2 = *(code *)(unaff_R14 + 0xe);
              pppppppuStack_e8 = pppppppuVar34;
              pppppppuStack_e0 = pppppppuVar21;
              pdb_140f60be0(&pppppppuStack_378,unaff_R14 + 9);
              pppppppuVar34 = pppppppuStack_350;
              pppppppuStack_350 = (ulonglong *******)CONCAT71(pppppppuStack_350._1_7_,cVar2);
              apppppppuStack_360[0] = (ulonglong *******)unaff_R14[0xc];
              apppppppuStack_360[1] = (ulonglong *******)unaff_R14[0xd];
              ppppppuStack_208 = unaff_R14[0xf];
              uStack_200 = *(undefined4 *)(unaff_R14 + 0x10);
              unaff_R13 = (ulonglong *******)(ulonglong)(byte)*(code *)((longlong)unaff_R14 + 0x84);
              uStack_18b = *(code *)((longlong)unaff_R14 + 0x85);
              pppppppuStack_228 = stack0xfffffffffffffc98;
              uStack_1e0._4_4_ = (undefined4)((ulonglong)pppppppuVar34 >> 0x20);
              uStack_210 = CONCAT44(uStack_1e0._4_4_,(int)pppppppuStack_350);
              pppppppuStack_1c8 = pppppppuStack_378;
              pppppppuVar21 = pppppppuStack_e0;
              pppppuVar26 = (ulonglong *****)auStack_370._0_8_;
              pppppppuVar34 = pppppppuStack_e8;
              pppppppuStack_220 = apppppppuStack_360[0];
              pppppppuStack_218 = apppppppuStack_360[1];
              cVar2 = uStack_18b;
              if (pppppppuStack_378 == (ulonglong *******)0x8000000000000001) goto LAB_14239ea60;
            }
            uStack_108 = SUB84(ppppppuStack_208,0);
            uStack_104 = (undefined4)((ulonglong)ppppppuStack_208 >> 0x20);
            uStack_100 = uStack_200;
            pppppppuStack_128 = pppppppuStack_228;
            pppppppuStack_120 = pppppppuStack_220;
            pppppppuStack_118 = pppppppuStack_218;
            uStack_110 = (undefined4)uStack_210;
            uStack_10c = (undefined4)((ulonglong)uStack_210 >> 0x20);
            cStack_160 = cVar9;
          }
LAB_14239e253:
          pppppppuStack_1b8 = pppppppuStack_128;
          pppppppuStack_1b0 = pppppppuStack_120;
          pppppppuStack_1a8 = pppppppuStack_118;
          uStack_1a0 = uStack_110;
          uStack_194 = CONCAT44(uStack_100,uStack_104);
          uStack_19c = uStack_10c;
          uStack_198 = uStack_108;
          uStack_18c = SUB81(unaff_R13,0);
          uStack_1e0 = (code *)0x0;
          uStack_1d8 = 8;
          uStack_1d0 = 0;
          uStack_188 = 0x8000000000000000;
          pppppppuStack_220 = pppppppuStack_f8;
          pppppppuStack_218 = pppppppuStack_398;
          uStack_210 = uStack_390;
          uStack_a2 = 0;
          pppppppuStack_228 = pppppppuStack_d0;
          pppppppuStack_1f8 = pppppppuVar21;
          pppppppuStack_1f0 = pppppppuVar34;
          pppppppuStack_1e8 = pppppppuVar21;
          pppppuStack_1c0 = pppppuVar26;
          pdb_140a92340(&pppppppuStack_378,&pppppppuStack_1f8,&pppppppuStack_228);
          uStack_a2 = 0;
          pdb_1411b0760(param_10,&pppppppuStack_378,&UNK_1434e1ab0);
          *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
          pppppppuStack_378 = (ulonglong *******)0x2;
          uStack_a2 = 0;
          pdb_140a003a0(*param_7,&pppppppuStack_378);
          *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
          lVar13 = *param_14;
          lVar5 = *(longlong *)(lVar13 + 0x30);
          unaff_R13 = *(ulonglong ********)(lVar13 + 0x40);
          if (lVar5 == *(longlong *)(lVar13 + 0x20)) {
            uStack_a2 = 0;
            pdb_142d7e8a0(lVar13 + 0x20);
          }
          *(ulonglong ********)(*(longlong *)(lVar13 + 0x28) + lVar5 * 8) = unaff_R13;
          *(longlong *)(lVar13 + 0x30) = lVar5 + 1;
          *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
          pppppppuVar21 = (ulonglong *******)pcVar23;
          if ((char)unaff_R12 != '\0') {
            *(undefined4 *)param_15[2] = *(undefined4 *)((longlong)param_15 + 0x1c);
            lVar13 = *param_15;
            lVar5 = *(longlong *)(lVar13 + 0x30);
            unaff_R12 = *(ulonglong ********)(lVar13 + 0x40);
            if (lVar5 == *(longlong *)(lVar13 + 0x20)) {
              uStack_a2 = 0;
              pdb_142d7e8a0(lVar13 + 0x20);
            }
            *(ulonglong ********)(*(longlong *)(lVar13 + 0x28) + lVar5 * 8) = unaff_R12;
            *(longlong *)(lVar13 + 0x30) = lVar5 + 1;
            *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
          }
          goto LAB_14239e4d2;
        case 0xb:
          (&UNK_1434e1d8c)[iVar27] = 3;
          pppppppuStack_1f0 = (ulonglong *******)0x6;
          pppppppuStack_1f8 = (ulonglong *******)&UNK_1434e1b10;
        }
        pppppppuStack_378 = (ulonglong *******)&pppppppuStack_1f8;
        auStack_370._0_8_ = pdb_1402ed400;
        pdb_140f60760(&pppppppuStack_c8,&UNK_1434e1b75,&pppppppuStack_378);
      }
      if (((ulonglong)uStack_b0 & 1) == 0) {
        pdb_14007ee60();
        pppppppuVar34 = (ulonglong *******)pub_1406abab0(0x10,1);
        if (pppppppuVar34 == (ulonglong *******)0x0) goto LAB_1423a09ce;
      }
      else {
        if (!SBORROW8(0,(longlong)pppppppuStack_c8)) {
          uStack_a4 = 1;
          pdb_140f60be0(&pppppppuStack_128,&pppppppuStack_c8);
          goto LAB_14239ebef;
        }
        pdb_14007ee60();
        pppppppuVar34 = (ulonglong *******)pub_1406abab0(0x10,1);
        if (pppppppuVar34 == (ulonglong *******)0x0) {
          uStack_a4 = 1;
          pdb_142dc7e2a(1,0x10);
          goto LAB_1423a09e5;
        }
      }
      ppppppuVar3 = _UNK_1434e1ad0;
      *pppppppuVar34 = _DAT_1434e1ac8;
      pppppppuVar34[1] = ppppppuVar3;
      pppppppuStack_128 = (ulonglong *******)0x10;
      pppppppuStack_118 = (ulonglong *******)0x10;
      pppppppuStack_120 = pppppppuVar34;
LAB_14239ebef:
      *(undefined4 *)pcVar23 = plStack_140._0_4_;
      pppppppuStack_1f8 = (ulonglong *******)&UNK_1434e1ad8;
      pppppppuStack_1f0 = (ulonglong *******)0x18;
      uStack_a1 = 1;
      uVar14 = pdb_140bbbcb0(&pppppppuStack_1f8);
      pppppuVar24 = (ulonglong *****)(uVar14 ^ 0xb1695320004fb443);
      uStack_a1 = 1;
      pppppuVar26 = pppppuVar24;
      lVar13 = pdb_14072c2d0(param_2);
      *(undefined1 *)(lVar13 + 0x5e) = 0;
      *(undefined1 *)(lVar13 + 0xcb) = 1;
      if (((ulonglong)pppppuVar26 & 1) == 0) {
        ppppppuVar3 = param_2[2];
        if (ppppppuVar3 == *param_2) {
          uStack_a1 = 1;
          pdb_142d7f080(param_2);
        }
        ppppppuVar4 = param_2[1];
        *(undefined4 *)(ppppppuVar4 + (longlong)ppppppuVar3 * 7) = 0;
        ppppppuVar4[(longlong)ppppppuVar3 * 7 + 6] = pppppuVar24;
        param_2[2] = (ulonglong ******)((longlong)ppppppuVar3 + 1);
      }
      param_4 = pppppppuStack_120;
      stack0xfffffffffffffc98 = (ulonglong *******)0x0;
      auStack_370._0_8_ = pppppuVar24;
      uStack_a1 = 1;
      in_stack_fffffffffffffbd8 = CONCAT44(uVar84,0x447a0000);
      pppppppuStack_378 = param_2;
      pdb_141173dd0(&pppppppuStack_1f8,&pppppppuStack_378,&UNK_1434e1af0,2,pppppppuStack_120,
                    pppppppuStack_118,in_stack_fffffffffffffbd8);
      uStack_a1 = 1;
      lVar13 = pdb_14116e440(&pppppppuStack_1f8);
      unaff_R14 = pppppppuStack_1f8;
      *(undefined1 *)(lVar13 + 0x44) = 1;
      pppppppuStack_218 = pppppppuStack_1e8;
      pppppppuStack_228 = pppppppuStack_1f8;
      pppppppuStack_220 = pppppppuStack_1f0;
      if (pppppppuStack_1f8[0x39] != (ulonglong ******)0x0) {
        uStack_a1 = 1;
        pcVar19 = (code *)pdb_1400af0a0(pppppppuStack_1f8 + 0x3a,&pppppppuStack_220);
        pppppppuVar21 = pppppppuStack_b8;
        uVar84 = (undefined4)((ulonglong)in_stack_fffffffffffffbd8 >> 0x20);
        ppppppuVar3 = unaff_R14[0x36];
        bVar8 = (byte)((ulonglong)pcVar19 >> 0x39);
        auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
        auVar36 = pshuflw(auVar36,auVar36,0);
        pppppppuVar34 = (ulonglong *******)0x0;
        while( true ) {
          uVar14 = (ulonglong)pcVar19 & (ulonglong)unaff_R14[0x37];
          auVar51 = *(undefined1 (*) [16])((longlong)ppppppuVar3 + uVar14);
          auVar62[0] = -(auVar51[0] == auVar36[0]);
          auVar62[1] = -(auVar51[1] == auVar36[1]);
          auVar62[2] = -(auVar51[2] == auVar36[2]);
          auVar62[3] = -(auVar51[3] == auVar36[3]);
          auVar62[4] = -(auVar51[4] == auVar36[4]);
          auVar62[5] = -(auVar51[5] == auVar36[5]);
          auVar62[6] = -(auVar51[6] == auVar36[6]);
          auVar62[7] = -(auVar51[7] == auVar36[7]);
          auVar62[8] = -(auVar51[8] == auVar36[0]);
          auVar62[9] = -(auVar51[9] == auVar36[1]);
          auVar62[10] = -(auVar51[10] == auVar36[2]);
          auVar62[0xb] = -(auVar51[0xb] == auVar36[3]);
          auVar62[0xc] = -(auVar51[0xc] == auVar36[4]);
          auVar62[0xd] = -(auVar51[0xd] == auVar36[5]);
          auVar62[0xe] = -(auVar51[0xe] == auVar36[6]);
          auVar62[0xf] = -(auVar51[0xf] == auVar36[7]);
          uVar28 = (ushort)(SUB161(auVar62 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar62[0xf] >> 7) << 0xf;
          uVar10 = (uint)uVar28;
          while (uVar28 != 0) {
            uVar11 = 0;
            for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            uVar29 = uVar11 + uVar14 & (ulonglong)unaff_R14[0x37];
            if (pppppppuStack_220 == (ulonglong *******)ppppppuVar3[uVar29 * -0x1b + -0x1b]) {
              *(undefined4 *)(ppppppuVar3 + uVar29 * -0x1b + -0x10) = 0x3f800000;
              param_3 = pppppppuStack_220;
              if (SBORROW8(0,(longlong)pppppppuStack_c8)) goto LAB_14239edfa;
              pppppppuStack_130 = pppppppuStack_c8;
              uStack_b0 = pppppppuStack_c0;
              *(undefined4 *)pcVar23 = plStack_140._0_4_;
              pppppppuStack_378 = (ulonglong *******)&UNK_1434e1af2;
              auStack_370._0_8_ = 0x18;
              uVar14 = pdb_140bbbcb0(&pppppppuStack_378);
              pcVar23 = (code *)(uVar14 ^ 0xb1695320004fb443);
              pppppppuVar34 = (ulonglong *******)pcVar23;
              lVar13 = pdb_14072c2d0(param_2);
              *(undefined1 *)(lVar13 + 0x5e) = 0;
              *(undefined1 *)(lVar13 + 0xcb) = 1;
              if (((ulonglong)pppppppuVar34 & 1) == 0) {
                ppppppuVar3 = param_2[2];
                if (ppppppuVar3 == *param_2) {
                  pdb_142d7f080(param_2);
                }
                ppppppuVar4 = param_2[1];
                *(undefined4 *)(ppppppuVar4 + (longlong)ppppppuVar3 * 7) = 0;
                ppppppuVar4[(longlong)ppppppuVar3 * 7 + 6] = (ulonglong *****)pcVar23;
                param_2[2] = (ulonglong ******)((longlong)ppppppuVar3 + 1);
              }
              pppppppuStack_218 = (ulonglong *******)0x0;
              pppppppuStack_228 = param_2;
              pppppppuStack_220 = (ulonglong *******)pcVar23;
              if (param_2[0x39] == (ulonglong ******)0x0) goto LAB_14239f1b2;
              uVar14 = pdb_1400af0a0(param_2 + 0x3a,&pppppppuStack_220);
              ppppppuVar3 = param_2[0x36];
              bVar8 = (byte)(uVar14 >> 0x39);
              auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
              auVar36 = pshuflw(auVar36,auVar36,0);
              lVar13 = 0;
              goto LAB_14239ef7d;
            }
            uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
            uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
          }
          auVar47[0] = -(auVar51[0] == -1);
          auVar47[1] = -(auVar51[1] == -1);
          auVar47[2] = -(auVar51[2] == -1);
          auVar47[3] = -(auVar51[3] == -1);
          auVar47[4] = -(auVar51[4] == -1);
          auVar47[5] = -(auVar51[5] == -1);
          auVar47[6] = -(auVar51[6] == -1);
          auVar47[7] = -(auVar51[7] == -1);
          auVar47[8] = -(auVar51[8] == -1);
          auVar47[9] = -(auVar51[9] == -1);
          auVar47[10] = -(auVar51[10] == -1);
          auVar47[0xb] = -(auVar51[0xb] == -1);
          auVar47[0xc] = -(auVar51[0xc] == -1);
          auVar47[0xd] = -(auVar51[0xd] == -1);
          auVar47[0xe] = -(auVar51[0xe] == -1);
          auVar47[0xf] = -(auVar51[0xf] == -1);
          if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar47 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x2f,0) & 1) != 0) || (SUB161(auVar47 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') break;
          pcVar19 = (code *)((longlong)pppppppuVar34 + uVar14 + 0x10);
          pppppppuVar34 = pppppppuVar34 + 2;
        }
      }
      uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14329c430);
    }
    if (*plVar15 == 0) {
      *plVar15 = -1;
      uStack_b0 = (ulonglong *******)plVar15;
      pdb_140e95370(plVar15 + 1,unaff_R15);
LAB_14239de07:
      *uStack_b0 = (ulonglong ******)((longlong)*uStack_b0 + 1);
      return;
    }
  }
  else {
    pppppppuVar33 = (ulonglong *******)0x1e;
    lVar13 = pdb_14239d410(0x1e);
    unaff_R12 = (ulonglong *******)&UNK_1434e1710;
    if (lVar13 == 1) {
      if ((ulonglong *******)0x1e < pppppppuVar21) {
LAB_1423a098b:
        pdb_142dc8070(&UNK_1434e1710,0x1e,0);
LAB_1423a09ab:
        pdb_142dc8070(&UNK_1434e1710,0x1e);
LAB_1423a09ce:
        uStack_a4 = 1;
        pdb_142dc7e2a(1,0x10);
        goto LAB_1423a09e5;
      }
      pppppppuVar34 = pppppppuVar21;
      uVar14 = pdb_14239d410(pppppppuVar21);
      if ((uVar14 & 1) != 0) {
        if ((code *)0x1e < (code *)((longlong)pppppppuVar21 + 2)) goto LAB_1423a09ab;
        pppppppuVar33 = (ulonglong *******)(0x1c - (longlong)pppppppuVar21);
        unaff_R12 = (ulonglong *******)((longlong)pppppppuVar21 + 0x1434e1712);
      }
    }
    puVar25 = &UNK_1434e1845;
    unaff_R13 = (ulonglong *******)&UNK_1434e1817;
    do {
      bVar8 = puVar25[-1];
      uVar11 = (uint)(char)bVar8;
      if ((char)bVar8 < '\0') {
        bVar35 = puVar25[-2];
        if ((char)bVar35 < -0x40) {
          bVar1 = puVar25[-3];
          if ((char)bVar1 < -0x40) {
            pbVar17 = puVar25 + -4;
            puVar25 = puVar25 + -4;
            uVar11 = (*pbVar17 & 7) << 6;
            pppppppuVar34 = (ulonglong *******)(ulonglong)uVar11;
            uVar11 = bVar1 & 0x3f | uVar11;
          }
          else {
            puVar25 = puVar25 + -3;
            uVar11 = bVar1 & 0xf;
          }
          uVar11 = bVar35 & 0x3f | uVar11 << 6;
        }
        else {
          puVar25 = puVar25 + -2;
          uVar11 = bVar35 & 0x1f;
        }
        uVar11 = (uint)(bVar8 & 0x3f) | uVar11 << 6;
        if (uVar11 != 0x5c) goto LAB_14239d974;
LAB_14239d98d:
        param_3 = (ulonglong *******)(puVar25 + -0x1434e1816);
        if ((ulonglong *******)0x2e < param_3) {
          pdb_142dc8070(&UNK_1434e1817,0x2e,param_3,0x2e,&UNK_1434e1798);
          goto LAB_1423a098b;
        }
        unaff_R14 = (ulonglong *******)(0x2e - (longlong)param_3);
        unaff_R13 = (ulonglong *******)(puVar25 + 1);
        goto LAB_14239d9b0;
      }
      puVar25 = puVar25 + -1;
      if (uVar11 == 0x5c) goto LAB_14239d98d;
LAB_14239d974:
      if (uVar11 == 0x2f) goto LAB_14239d98d;
    } while (puVar25 != &UNK_1434e1817);
    unaff_R14 = (ulonglong *******)0x2e;
    param_3 = (ulonglong *******)&UNK_1434e1817;
LAB_14239d9b0:
    plVar15 = (longlong *)pdb_140e97000();
    if (((char)plVar15[0xd] != '\x01') &&
       (plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0), plVar15 == (longlong *)0x0))
    goto LAB_14239fd80;
    if (*plVar15 == 0) {
      *plVar15 = -1;
      in_stack_fffffffffffffbd8 = 0;
      pppppppuVar34 = unaff_R13;
      plStack_140 = plVar15;
      unaff_R15 = pdb_140e94f10(plVar15 + 1,unaff_R12,pppppppuVar33,unaff_R13,unaff_R14,1,0);
      *plStack_140 = *plStack_140 + 1;
      lStack_3a8 = 1;
      param_3 = pppppppuVar33;
      uStack_3a0 = unaff_R15;
      goto LAB_14239da17;
    }
  }
LAB_14239fcfd:
  pdb_142dc8090(&UNK_1432a7f58);
LAB_14239fd0a:
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_1423a09e5:
                    /* WARNING: Does not return */
  pcVar23 = (code *)invalidInstructionException();
  (*pcVar23)();
LAB_14239f713:
  uVar14 = uVar14 & (ulonglong)ppppppuVar4;
  pcVar18 = (char *)((longlong)ppppppuVar3 + uVar14);
  auVar51[0] = -(*pcVar18 == auVar36[0]);
  auVar51[1] = -(pcVar18[1] == auVar36[1]);
  auVar51[2] = -(pcVar18[2] == auVar36[2]);
  auVar51[3] = -(pcVar18[3] == auVar36[3]);
  auVar51[4] = -(pcVar18[4] == auVar36[4]);
  auVar51[5] = -(pcVar18[5] == auVar36[5]);
  auVar51[6] = -(pcVar18[6] == auVar36[6]);
  auVar51[7] = -(pcVar18[7] == auVar36[7]);
  auVar51[8] = -(pcVar18[8] == auVar36[0]);
  auVar51[9] = -(pcVar18[9] == auVar36[1]);
  auVar51[10] = -(pcVar18[10] == auVar36[2]);
  auVar51[0xb] = -(pcVar18[0xb] == auVar36[3]);
  auVar51[0xc] = -(pcVar18[0xc] == auVar36[4]);
  auVar51[0xd] = -(pcVar18[0xd] == auVar36[5]);
  auVar51[0xe] = -(pcVar18[0xe] == auVar36[6]);
  auVar51[0xf] = -(pcVar18[0xf] == auVar36[7]);
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
  uVar10 = (uint)uVar28;
joined_r0x00014239f72b:
  if (uVar28 == 0) goto LAB_14239f759;
  uVar11 = 0;
  for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
    uVar11 = uVar11 + 1;
  }
  uVar29 = uVar11 + uVar14 & (ulonglong)ppppppuVar4;
  if (apppppppuStack_280[0] != (ulonglong *******)ppppppuVar3[uVar29 * -0x1b + -0x1b])
  goto code_r0x00014239f74c;
  pbVar17 = (byte *)((longlong)ppppppuVar3 + uVar29 * -0xd8 + -5);
  *pbVar17 = *pbVar17 | 4;
LAB_14239f780:
  unaff_R13 = pppppppuStack_288;
  if (pppppppuStack_288[0x39] == (ulonglong ******)0x0) {
LAB_14239fcdf:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
    goto LAB_1423a09e5;
  }
  pppppppuVar34 = pppppppuStack_288 + 0x3a;
  uVar14 = pdb_1400af0a0(pppppppuVar34,apppppppuStack_280);
  pppppppuVar21 = apppppppuStack_280[0];
  ppppppuVar3 = unaff_R13[0x36];
  bVar35 = (byte)(uVar14 >> 0x39);
  auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
  auVar36 = pshuflw(auVar36,auVar36,0);
  lVar13 = 0;
  while( true ) {
    uVar14 = uVar14 & (ulonglong)unaff_R13[0x37];
    auVar51 = *(undefined1 (*) [16])((longlong)ppppppuVar3 + uVar14);
    auVar52[0] = -(auVar51[0] == auVar36[0]);
    auVar52[1] = -(auVar51[1] == auVar36[1]);
    auVar52[2] = -(auVar51[2] == auVar36[2]);
    auVar52[3] = -(auVar51[3] == auVar36[3]);
    auVar52[4] = -(auVar51[4] == auVar36[4]);
    auVar52[5] = -(auVar51[5] == auVar36[5]);
    auVar52[6] = -(auVar51[6] == auVar36[6]);
    auVar52[7] = -(auVar51[7] == auVar36[7]);
    auVar52[8] = -(auVar51[8] == auVar36[0]);
    auVar52[9] = -(auVar51[9] == auVar36[1]);
    auVar52[10] = -(auVar51[10] == auVar36[2]);
    auVar52[0xb] = -(auVar51[0xb] == auVar36[3]);
    auVar52[0xc] = -(auVar51[0xc] == auVar36[4]);
    auVar52[0xd] = -(auVar51[0xd] == auVar36[5]);
    auVar52[0xe] = -(auVar51[0xe] == auVar36[6]);
    auVar52[0xf] = -(auVar51[0xf] == auVar36[7]);
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
    uVar10 = (uint)uVar28;
    if (uVar28 != 0) break;
LAB_14239f824:
    auVar39[0] = -(auVar51[0] == cVar9);
    auVar39[1] = -(auVar51[1] == cVar69);
    auVar39[2] = -(auVar51[2] == cVar70);
    auVar39[3] = -(auVar51[3] == cVar71);
    auVar39[4] = -(auVar51[4] == cVar72);
    auVar39[5] = -(auVar51[5] == cVar73);
    auVar39[6] = -(auVar51[6] == cVar74);
    auVar39[7] = -(auVar51[7] == cVar75);
    auVar39[8] = -(auVar51[8] == cVar76);
    auVar39[9] = -(auVar51[9] == cVar77);
    auVar39[10] = -(auVar51[10] == cVar78);
    auVar39[0xb] = -(auVar51[0xb] == cVar79);
    auVar39[0xc] = -(auVar51[0xc] == cVar80);
    auVar39[0xd] = -(auVar51[0xd] == cVar81);
    auVar39[0xe] = -(auVar51[0xe] == cVar82);
    auVar39[0xf] = -(auVar51[0xf] == cVar83);
    if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar39 >> 0x37,0) & 1) != 0) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') goto LAB_14239fcdf;
    uVar14 = uVar14 + lVar13 + 0x10;
    lVar13 = lVar13 + 0x10;
  }
  while( true ) {
    uVar11 = 0;
    for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    uVar29 = uVar11 + uVar14 & (ulonglong)unaff_R13[0x37];
    if (apppppppuStack_280[0] == (ulonglong *******)ppppppuVar3[uVar29 * -0x1b + -0x1b]) break;
    uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
    if (uVar28 == 0) goto LAB_14239f824;
  }
  if ((bVar8 & (*(byte *)((longlong)ppppppuVar3 + uVar29 * -0xd8 + -6) & 0x30) != 0) == 0) {
LAB_14239f880:
    uVar32 = SUB81(param_4,0);
  }
  else {
    uVar32 = (char)pppppppuStack_e8;
    if (((ulonglong *******)0x2 < pppppppuStack_3c8) && (*_DAT_143ca4500 != 0)) {
      *(code *)param_11 = (code)0x1;
      goto LAB_14239f880;
    }
  }
  if (unaff_R13[0x39] == (ulonglong ******)0x0) goto LAB_14239fd0a;
  uVar14 = pdb_1400af0a0(pppppppuVar34,apppppppuStack_280);
  ppppppuVar3 = unaff_R13[0x36];
  bVar8 = (byte)(uVar14 >> 0x39);
  auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
  auVar36 = pshuflw(auVar36,auVar36,0);
  lVar13 = 0;
  while( true ) {
    uVar14 = uVar14 & (ulonglong)unaff_R13[0x37];
    auVar51 = *(undefined1 (*) [16])((longlong)ppppppuVar3 + uVar14);
    auVar53[0] = -(auVar51[0] == auVar36[0]);
    auVar53[1] = -(auVar51[1] == auVar36[1]);
    auVar53[2] = -(auVar51[2] == auVar36[2]);
    auVar53[3] = -(auVar51[3] == auVar36[3]);
    auVar53[4] = -(auVar51[4] == auVar36[4]);
    auVar53[5] = -(auVar51[5] == auVar36[5]);
    auVar53[6] = -(auVar51[6] == auVar36[6]);
    auVar53[7] = -(auVar51[7] == auVar36[7]);
    auVar53[8] = -(auVar51[8] == auVar36[0]);
    auVar53[9] = -(auVar51[9] == auVar36[1]);
    auVar53[10] = -(auVar51[10] == auVar36[2]);
    auVar53[0xb] = -(auVar51[0xb] == auVar36[3]);
    auVar53[0xc] = -(auVar51[0xc] == auVar36[4]);
    auVar53[0xd] = -(auVar51[0xd] == auVar36[5]);
    auVar53[0xe] = -(auVar51[0xe] == auVar36[6]);
    auVar53[0xf] = -(auVar51[0xf] == auVar36[7]);
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
    uVar10 = (uint)uVar28;
    while (uVar28 != 0) {
      uVar11 = 0;
      for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      uVar29 = uVar11 + uVar14 & (ulonglong)unaff_R13[0x37];
      if (pppppppuVar21 == (ulonglong *******)ppppppuVar3[uVar29 * -0x1b + -0x1b]) {
        uVar10 = (uint)uStack_b0 & 0xff;
        if ((*(byte *)((longlong)ppppppuVar3 + uVar29 * -0xd8 + -6) & 0x40) != 0) {
          uVar10 = 1;
        }
        uStack_b0 = (ulonglong *******)CONCAT44(uStack_b0._4_4_,uVar10);
        if (unaff_R13[0x39] == (ulonglong ******)0x0) goto LAB_14239fd4f;
        uVar14 = pdb_1400af0a0(pppppppuVar34,apppppppuStack_280);
        pppppppuVar33 = pppppppuStack_3c0;
        uStack_260 = CONCAT71(uStack_260._1_7_,uVar32);
        ppppppuVar3 = unaff_R13[0x36];
        bVar8 = (byte)(uVar14 >> 0x39);
        auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
        auVar36 = pshuflw(auVar36,auVar36,0);
        lVar13 = 0;
        goto LAB_14239f9a0;
      }
      uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
      uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
    }
    auVar40[0] = -(auVar51[0] == cVar9);
    auVar40[1] = -(auVar51[1] == cVar69);
    auVar40[2] = -(auVar51[2] == cVar70);
    auVar40[3] = -(auVar51[3] == cVar71);
    auVar40[4] = -(auVar51[4] == cVar72);
    auVar40[5] = -(auVar51[5] == cVar73);
    auVar40[6] = -(auVar51[6] == cVar74);
    auVar40[7] = -(auVar51[7] == cVar75);
    auVar40[8] = -(auVar51[8] == cVar76);
    auVar40[9] = -(auVar51[9] == cVar77);
    auVar40[10] = -(auVar51[10] == cVar78);
    auVar40[0xb] = -(auVar51[0xb] == cVar79);
    auVar40[0xc] = -(auVar51[0xc] == cVar80);
    auVar40[0xd] = -(auVar51[0xd] == cVar81);
    auVar40[0xe] = -(auVar51[0xe] == cVar82);
    auVar40[0xf] = -(auVar51[0xf] == cVar83);
    if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar40 >> 0x37,0) & 1) != 0) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
    uVar14 = uVar14 + lVar13 + 0x10;
    lVar13 = lVar13 + 0x10;
  }
  goto LAB_14239fd0a;
LAB_14239f759:
  auVar38[0] = -(*pcVar18 == cVar9);
  auVar38[1] = -(pcVar18[1] == cVar69);
  auVar38[2] = -(pcVar18[2] == cVar70);
  auVar38[3] = -(pcVar18[3] == cVar71);
  auVar38[4] = -(pcVar18[4] == cVar72);
  auVar38[5] = -(pcVar18[5] == cVar73);
  auVar38[6] = -(pcVar18[6] == cVar74);
  auVar38[7] = -(pcVar18[7] == cVar75);
  auVar38[8] = -(pcVar18[8] == cVar76);
  auVar38[9] = -(pcVar18[9] == cVar77);
  auVar38[10] = -(pcVar18[10] == cVar78);
  auVar38[0xb] = -(pcVar18[0xb] == cVar79);
  auVar38[0xc] = -(pcVar18[0xc] == cVar80);
  auVar38[0xd] = -(pcVar18[0xd] == cVar81);
  auVar38[0xe] = -(pcVar18[0xe] == cVar82);
  auVar38[0xf] = -(pcVar18[0xf] == cVar83);
  if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') {
LAB_14239fd3d:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar14 = uVar14 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_14239f713;
code_r0x00014239f74c:
  uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
  uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
  goto joined_r0x00014239f72b;
LAB_14239f9a0:
  uVar14 = uVar14 & (ulonglong)unaff_R13[0x37];
  auVar51 = *(undefined1 (*) [16])((longlong)ppppppuVar3 + uVar14);
  auVar54[0] = -(auVar51[0] == auVar36[0]);
  auVar54[1] = -(auVar51[1] == auVar36[1]);
  auVar54[2] = -(auVar51[2] == auVar36[2]);
  auVar54[3] = -(auVar51[3] == auVar36[3]);
  auVar54[4] = -(auVar51[4] == auVar36[4]);
  auVar54[5] = -(auVar51[5] == auVar36[5]);
  auVar54[6] = -(auVar51[6] == auVar36[6]);
  auVar54[7] = -(auVar51[7] == auVar36[7]);
  auVar54[8] = -(auVar51[8] == auVar36[0]);
  auVar54[9] = -(auVar51[9] == auVar36[1]);
  auVar54[10] = -(auVar51[10] == auVar36[2]);
  auVar54[0xb] = -(auVar51[0xb] == auVar36[3]);
  auVar54[0xc] = -(auVar51[0xc] == auVar36[4]);
  auVar54[0xd] = -(auVar51[0xd] == auVar36[5]);
  auVar54[0xe] = -(auVar51[0xe] == auVar36[6]);
  auVar54[0xf] = -(auVar51[0xf] == auVar36[7]);
  uVar28 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf;
  pppppppuVar34 = (ulonglong *******)(ulonglong)uVar28;
  while (uVar28 != 0) {
    uVar10 = 0;
    for (uVar11 = (uint)pppppppuVar34; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    uVar29 = uVar10 + uVar14 & (ulonglong)unaff_R13[0x37];
    if (pppppppuVar21 == (ulonglong *******)ppppppuVar3[uVar29 * -0x1b + -0x1b]) {
      if ((*(byte *)((longlong)ppppppuVar3 + uVar29 * -0xd8 + -6) & 1) == 0) goto LAB_14239fc7e;
      *(char *)(param_6 + 1) = (char)pppppppuStack_e8;
      *param_6 = 0.0;
      if ((((char)pbStack_230 == '\0') || ((char)pppppppuStack_e8 == '\0')) ||
         ((char)pppppppuStack_e8 == '\x05')) goto LAB_14239fc7e;
      uVar14 = 0;
      lVar13 = pdb_14072c2d0(pppppppuStack_3c0);
      *(undefined1 *)(lVar13 + 0x5e) = 0;
      if ((uVar14 & 1) == 0) {
        ppppppuVar3 = pppppppuVar33[2];
        if (ppppppuVar3 == *pppppppuVar33) {
          pdb_142d7f080(pppppppuVar33);
        }
        ppppppuVar4 = pppppppuVar33[1];
        ppppppuVar4[(longlong)ppppppuVar3 * 7] = (ulonglong *****)0x3;
        ppppppuVar4[(longlong)ppppppuVar3 * 7 + 2] = (ulonglong *****)pppppppuVar21;
        ppppppuVar4[(longlong)ppppppuVar3 * 7 + 3] = pppppuVar26;
        (ppppppuVar4 + (longlong)ppppppuVar3 * 7 + 3)[1] = pppppuVar24;
        ppppppuVar4[(longlong)ppppppuVar3 * 7 + 5] = pppppuVar7;
        ppppppuVar4[(longlong)ppppppuVar3 * 7 + 6] = (ulonglong *****)0xb16953209e4336ba;
        pppppppuVar33[2] = (ulonglong ******)((longlong)ppppppuVar3 + 1);
      }
      pppppppuStack_258 = pppppppuVar33;
      pppppppuStack_250 = (ulonglong *******)0xb16953209e4336ba;
      pppppppuStack_248 = (ulonglong *******)0x0;
      pppppppuStack_1f8 = (ulonglong *******)0x0;
      pppppppuStack_1f0 = (ulonglong *******)_DAT_14329c330;
      pppppppuStack_1e8 = _UNK_14329c338;
      pppppppuStack_1f0 = (ulonglong *******)pdb_1400affa0(&pppppppuStack_1f8);
      pppppppuStack_1f8 = (ulonglong *******)0xb16953209e4336ba;
      uVar16 = pdb_1400b0130(&pppppppuStack_1f8);
      pdb_14072caa0(&pppppppuStack_c8,&pppppppuStack_258,uVar16);
      pppppppuVar34 = pppppppuStack_c8;
      if (pppppppuStack_c8[0x39] == (ulonglong ******)0x0) {
LAB_1423a028d:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142fa6b48);
      }
      uVar14 = pdb_1400af0a0(pppppppuStack_c8 + 0x3a,&pppppppuStack_c0);
      ppppppuVar3 = pppppppuVar34[0x36];
      ppppppuVar4 = pppppppuVar34[0x37];
      bVar8 = (byte)(uVar14 >> 0x39);
      auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
      auVar36 = pshuflw(auVar36,auVar36,0);
      lVar13 = 0;
      goto LAB_14239fbb1;
    }
    iVar27 = (uint)pppppppuVar34 - 1;
    uVar28 = (ushort)iVar27 & (ushort)pppppppuVar34;
    pppppppuVar34 = (ulonglong *******)(ulonglong)CONCAT22((short)((uint)iVar27 >> 0x10),uVar28);
  }
  auVar41[0] = -(auVar51[0] == cVar9);
  auVar41[1] = -(auVar51[1] == cVar69);
  auVar41[2] = -(auVar51[2] == cVar70);
  auVar41[3] = -(auVar51[3] == cVar71);
  auVar41[4] = -(auVar51[4] == cVar72);
  auVar41[5] = -(auVar51[5] == cVar73);
  auVar41[6] = -(auVar51[6] == cVar74);
  auVar41[7] = -(auVar51[7] == cVar75);
  auVar41[8] = -(auVar51[8] == cVar76);
  auVar41[9] = -(auVar51[9] == cVar77);
  auVar41[10] = -(auVar51[10] == cVar78);
  auVar41[0xb] = -(auVar51[0xb] == cVar79);
  auVar41[0xc] = -(auVar51[0xc] == cVar80);
  auVar41[0xd] = -(auVar51[0xd] == cVar81);
  auVar41[0xe] = -(auVar51[0xe] == cVar82);
  auVar41[0xf] = -(auVar51[0xf] == cVar83);
  if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') {
LAB_14239fd4f:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
    goto LAB_1423a09e5;
  }
  uVar14 = uVar14 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_14239f9a0;
LAB_14239fbb1:
  uVar14 = uVar14 & (ulonglong)ppppppuVar4;
  auVar51 = *(undefined1 (*) [16])((longlong)ppppppuVar3 + uVar14);
  auVar55[0] = -(auVar51[0] == auVar36[0]);
  auVar55[1] = -(auVar51[1] == auVar36[1]);
  auVar55[2] = -(auVar51[2] == auVar36[2]);
  auVar55[3] = -(auVar51[3] == auVar36[3]);
  auVar55[4] = -(auVar51[4] == auVar36[4]);
  auVar55[5] = -(auVar51[5] == auVar36[5]);
  auVar55[6] = -(auVar51[6] == auVar36[6]);
  auVar55[7] = -(auVar51[7] == auVar36[7]);
  auVar55[8] = -(auVar51[8] == auVar36[0]);
  auVar55[9] = -(auVar51[9] == auVar36[1]);
  auVar55[10] = -(auVar51[10] == auVar36[2]);
  auVar55[0xb] = -(auVar51[0xb] == auVar36[3]);
  auVar55[0xc] = -(auVar51[0xc] == auVar36[4]);
  auVar55[0xd] = -(auVar51[0xd] == auVar36[5]);
  auVar55[0xe] = -(auVar51[0xe] == auVar36[6]);
  auVar55[0xf] = -(auVar51[0xf] == auVar36[7]);
  uVar28 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf;
  uVar10 = (uint)uVar28;
  while( true ) {
    if (uVar28 == 0) goto LAB_14239fbf7;
    uVar11 = 0;
    for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    uVar29 = uVar11 + uVar14 & (ulonglong)ppppppuVar4;
    if (pppppppuStack_c0 == (ulonglong *******)ppppppuVar3[uVar29 * -0x1b + -0x1b]) break;
    uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
  }
  goto LAB_14239fc17;
LAB_14239fbf7:
  auVar42[0] = -(auVar51[0] == cVar9);
  auVar42[1] = -(auVar51[1] == cVar69);
  auVar42[2] = -(auVar51[2] == cVar70);
  auVar42[3] = -(auVar51[3] == cVar71);
  auVar42[4] = -(auVar51[4] == cVar72);
  auVar42[5] = -(auVar51[5] == cVar73);
  auVar42[6] = -(auVar51[6] == cVar74);
  auVar42[7] = -(auVar51[7] == cVar75);
  auVar42[8] = -(auVar51[8] == cVar76);
  auVar42[9] = -(auVar51[9] == cVar77);
  auVar42[10] = -(auVar51[10] == cVar78);
  auVar42[0xb] = -(auVar51[0xb] == cVar79);
  auVar42[0xc] = -(auVar51[0xc] == cVar80);
  auVar42[0xd] = -(auVar51[0xd] == cVar81);
  auVar42[0xe] = -(auVar51[0xe] == cVar82);
  auVar42[0xf] = -(auVar51[0xf] == cVar83);
  if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') goto LAB_1423a028d;
  uVar14 = uVar14 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_14239fbb1;
LAB_14239fc17:
  *(undefined4 *)((longlong)ppppppuVar3 + uVar29 * -0xd8 + -0x14) = 0x43480000;
  pppppppuStack_118 = pppppppuStack_b8;
  pppppppuStack_128 = pppppppuStack_c8;
  pppppppuStack_120 = pppppppuStack_c0;
  pppppppuVar34 = (ulonglong *******)0x1c;
  pdb_141174160(&pppppppuStack_1f8,&pppppppuStack_128,&UNK_1434e1a4b,0x1c,0);
  unaff_R14 = pppppppuStack_d0;
LAB_14239fc7e:
  pppppppuVar21 = pppppppuStack_148;
  if (pppppppuStack_e0 != (ulonglong *******)0x0) {
    pub_1406abac0((byte *)pppppppuStack_f8,(ulonglong)pppppppuStack_e0,1);
  }
  uVar84 = (undefined4)((ulonglong)in_stack_fffffffffffffbd8 >> 0x20);
  param_3 = (ulonglong *******)((longlong)pppppppuStack_270 + -1);
  unaff_R12 = pppppppuVar21 + 4;
  param_4 = (ulonglong *******)(uStack_260 & 0xff);
  pppppppuVar21 = pppppppuStack_238;
  pcVar23 = (code *)pppppppuStack_268;
  if (pppppppuStack_238 == (ulonglong *******)0x6) goto LAB_14239fd96;
  goto LAB_14239f373;
code_r0x0001423a001a:
  uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
  uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
  goto joined_r0x00014239fff5;
LAB_14239ef7d:
  uVar14 = uVar14 & (ulonglong)param_2[0x37];
  auVar51 = *(undefined1 (*) [16])((longlong)ppppppuVar3 + uVar14);
  auVar63[0] = -(auVar51[0] == auVar36[0]);
  auVar63[1] = -(auVar51[1] == auVar36[1]);
  auVar63[2] = -(auVar51[2] == auVar36[2]);
  auVar63[3] = -(auVar51[3] == auVar36[3]);
  auVar63[4] = -(auVar51[4] == auVar36[4]);
  auVar63[5] = -(auVar51[5] == auVar36[5]);
  auVar63[6] = -(auVar51[6] == auVar36[6]);
  auVar63[7] = -(auVar51[7] == auVar36[7]);
  auVar63[8] = -(auVar51[8] == auVar36[0]);
  auVar63[9] = -(auVar51[9] == auVar36[1]);
  auVar63[10] = -(auVar51[10] == auVar36[2]);
  auVar63[0xb] = -(auVar51[0xb] == auVar36[3]);
  auVar63[0xc] = -(auVar51[0xc] == auVar36[4]);
  auVar63[0xd] = -(auVar51[0xd] == auVar36[5]);
  auVar63[0xe] = -(auVar51[0xe] == auVar36[6]);
  auVar63[0xf] = -(auVar51[0xf] == auVar36[7]);
  uVar28 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
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
  uVar10 = (uint)uVar28;
  while (uVar28 != 0) {
    uVar11 = 0;
    for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    uVar29 = uVar11 + uVar14 & (ulonglong)param_2[0x37];
    if (pppppppuStack_220 == (ulonglong *******)ppppppuVar3[uVar29 * -0x1b + -0x1b]) {
      *(undefined4 *)((longlong)ppppppuVar3 + uVar29 * -0xd8 + -0x14) = 0x3f800000;
      in_stack_fffffffffffffbd8 = CONCAT44(uVar84,0x447a0000);
      pdb_141173dd0(&pppppppuStack_378,&pppppppuStack_228,&UNK_1434e1af0,2,uStack_b0,pppppppuVar21,
                    in_stack_fffffffffffffbd8);
      fVar43 = *param_6;
      lVar13 = pdb_14116e440(&pppppppuStack_378);
      fVar68 = (fVar43 * _DAT_142f69450 + _DAT_142e36f28) * _DAT_142e4fba0;
      fVar43 = 0.0;
      if (0.0 <= fVar68) {
        fVar43 = fVar68;
      }
      fVar68 = _DAT_142e4fba0;
      if (fVar43 <= _DAT_142e4fba0) {
        fVar68 = fVar43;
      }
      uVar10 = 0;
      if (0.0 <= fVar68) {
        uVar10 = (uint)(longlong)fVar68;
      }
      uVar11 = 0xffffffff;
      if (fVar68 <= _DAT_142e46a48) {
        uVar11 = uVar10;
      }
      *(uint *)(lVar13 + 0x40) = uVar11 | 0xffffff00;
      pppppppuStack_1e8 = stack0xfffffffffffffc98;
      pppppppuStack_1f8 = pppppppuStack_378;
      pppppppuStack_1f0 = (ulonglong *******)auStack_370._0_8_;
      lVar13 = pdb_14116e440(&pppppppuStack_1f8);
      param_2 = pppppppuStack_1f8;
      *(undefined1 *)(lVar13 + 0x44) = 1;
      pppppppuStack_378 = pppppppuStack_1f8;
      stack0xfffffffffffffc98 = pppppppuStack_1e8;
      auStack_370._0_8_ = pppppppuStack_1f0;
      if (pppppppuStack_1f8[0x39] == (ulonglong ******)0x0) goto LAB_14239f1c4;
      pcVar19 = (code *)pdb_1400af0a0(pppppppuStack_1f8 + 0x3a,auStack_370);
      ppppppuVar3 = param_2[0x36];
      bVar8 = (byte)((ulonglong)pcVar19 >> 0x39);
      auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
      auVar36 = pshuflw(auVar36,auVar36,0);
      pppppppuVar34 = (ulonglong *******)0x0;
      goto LAB_14239f120;
    }
    uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
  }
  auVar48[0] = -(auVar51[0] == -1);
  auVar48[1] = -(auVar51[1] == -1);
  auVar48[2] = -(auVar51[2] == -1);
  auVar48[3] = -(auVar51[3] == -1);
  auVar48[4] = -(auVar51[4] == -1);
  auVar48[5] = -(auVar51[5] == -1);
  auVar48[6] = -(auVar51[6] == -1);
  auVar48[7] = -(auVar51[7] == -1);
  auVar48[8] = -(auVar51[8] == -1);
  auVar48[9] = -(auVar51[9] == -1);
  auVar48[10] = -(auVar51[10] == -1);
  auVar48[0xb] = -(auVar51[0xb] == -1);
  auVar48[0xc] = -(auVar51[0xc] == -1);
  auVar48[0xd] = -(auVar51[0xd] == -1);
  auVar48[0xe] = -(auVar51[0xe] == -1);
  auVar48[0xf] = -(auVar51[0xf] == -1);
  if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 || (SUB161(auVar48 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar48 >> 0x17,0) & 1) != 0) || (SUB161(auVar48 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar48 >> 0x27,0) & 1) != 0) || (SUB161(auVar48 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar48 >> 0x37,0) & 1) != 0) || (SUB161(auVar48 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar48 >> 0x47,0) & 1) != 0) || (SUB161(auVar48 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar48 >> 0x57,0) & 1) != 0) || (SUB161(auVar48 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar48 >> 0x67,0) & 1) != 0) || (SUB161(auVar48 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar48 >> 0x77,0) & 1) != 0) || auVar48[0xf] < '\0') {
LAB_14239f1b2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar14 = uVar14 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_14239ef7d;
LAB_14239f120:
  uVar14 = (ulonglong)pcVar19 & (ulonglong)param_2[0x37];
  pcVar18 = (char *)((longlong)ppppppuVar3 + uVar14);
  auVar64[0] = -(*pcVar18 == auVar36[0]);
  auVar64[1] = -(pcVar18[1] == auVar36[1]);
  auVar64[2] = -(pcVar18[2] == auVar36[2]);
  auVar64[3] = -(pcVar18[3] == auVar36[3]);
  auVar64[4] = -(pcVar18[4] == auVar36[4]);
  auVar64[5] = -(pcVar18[5] == auVar36[5]);
  auVar64[6] = -(pcVar18[6] == auVar36[6]);
  auVar64[7] = -(pcVar18[7] == auVar36[7]);
  auVar64[8] = -(pcVar18[8] == auVar36[0]);
  auVar64[9] = -(pcVar18[9] == auVar36[1]);
  auVar64[10] = -(pcVar18[10] == auVar36[2]);
  auVar64[0xb] = -(pcVar18[0xb] == auVar36[3]);
  auVar64[0xc] = -(pcVar18[0xc] == auVar36[4]);
  auVar64[0xd] = -(pcVar18[0xd] == auVar36[5]);
  auVar64[0xe] = -(pcVar18[0xe] == auVar36[6]);
  auVar64[0xf] = -(pcVar18[0xf] == auVar36[7]);
  uVar28 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
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
  uVar10 = (uint)uVar28;
joined_r0x00014239f138:
  if (uVar28 == 0) goto LAB_14239f166;
  uVar11 = 0;
  for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
    uVar11 = uVar11 + 1;
  }
  uVar29 = uVar11 + uVar14 & (ulonglong)param_2[0x37];
  if ((ulonglong *****)auStack_370._0_8_ != ppppppuVar3[uVar29 * -0x1b + -0x1b])
  goto code_r0x00014239f159;
  *(undefined4 *)(ppppppuVar3 + uVar29 * -0x1b + -0x10) = 0x3f800000;
  param_3 = (ulonglong *******)auStack_370._0_8_;
  unaff_R14 = pppppppuVar21;
  if (pppppppuStack_130 != (ulonglong *******)0x0) {
    param_3 = (ulonglong *******)0x1;
    pub_1406abac0((byte *)uStack_b0,(ulonglong)pppppppuStack_130,1);
  }
LAB_14239edfa:
  if (pppppppuStack_128 != (ulonglong *******)0x0) {
    param_3 = (ulonglong *******)0x1;
    pub_1406abac0((byte *)param_4,(ulonglong)pppppppuStack_128,1);
  }
  if (lStack_3a8 == 0) {
    return;
  }
  plVar15 = (longlong *)pdb_140e97000();
  if (((char)plVar15[0xd] == '\x01') ||
     (plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0), plVar15 != (longlong *)0x0)) {
    if (*plVar15 == 0) {
      *plVar15 = -1;
      uStack_b0 = (ulonglong *******)plVar15;
      pdb_140e95370(plVar15 + 1,uStack_3a0);
      goto LAB_14239de07;
    }
    goto LAB_14239fcfd;
  }
  goto LAB_14239fd80;
LAB_14239f166:
  auVar49[0] = -(*pcVar18 == -1);
  auVar49[1] = -(pcVar18[1] == -1);
  auVar49[2] = -(pcVar18[2] == -1);
  auVar49[3] = -(pcVar18[3] == -1);
  auVar49[4] = -(pcVar18[4] == -1);
  auVar49[5] = -(pcVar18[5] == -1);
  auVar49[6] = -(pcVar18[6] == -1);
  auVar49[7] = -(pcVar18[7] == -1);
  auVar49[8] = -(pcVar18[8] == -1);
  auVar49[9] = -(pcVar18[9] == -1);
  auVar49[10] = -(pcVar18[10] == -1);
  auVar49[0xb] = -(pcVar18[0xb] == -1);
  auVar49[0xc] = -(pcVar18[0xc] == -1);
  auVar49[0xd] = -(pcVar18[0xd] == -1);
  auVar49[0xe] = -(pcVar18[0xe] == -1);
  auVar49[0xf] = -(pcVar18[0xf] == -1);
  if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 || (SUB161(auVar49 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar49 >> 0x17,0) & 1) != 0) || (SUB161(auVar49 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar49 >> 0x27,0) & 1) != 0) || (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar49 >> 0x37,0) & 1) != 0) || (SUB161(auVar49 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar49 >> 0x47,0) & 1) != 0) || (SUB161(auVar49 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar49 >> 0x57,0) & 1) != 0) || (SUB161(auVar49 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar49 >> 0x67,0) & 1) != 0) || (SUB161(auVar49 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') {
LAB_14239f1c4:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14329c430);
  }
  pcVar19 = (code *)((longlong)pppppppuVar34 + uVar14 + 0x10);
  pppppppuVar34 = pppppppuVar34 + 2;
  goto LAB_14239f120;
code_r0x00014239f159:
  uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
  uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
  goto joined_r0x00014239f138;
LAB_14239f373:
  pppppppuVar33 = apppppppuStack_3b8[0];
  pppppppuVar34 = (ulonglong *******)((longlong)pppppppuVar21 + 1);
  pppppppuStack_e0 = apppppppuStack_360[(longlong)pppppppuVar21 * 4];
  pppppppuStack_378 = pppppppuVar34;
  if (SBORROW8(0,(longlong)apppppppuStack_360[(longlong)pppppppuVar21 * 4])) goto LAB_14239fd8c;
  pppppppuStack_238 = pppppppuVar34;
  pppppppuStack_270 = param_3;
  pppppppuStack_148 = unaff_R12;
  pppppppuStack_f8 = apppppppuStack_360[(longlong)pppppppuVar21 * 4 + 1];
  pppppppuStack_2a8 = (ulonglong *******)((longlong)pcVar23 + 1);
  pppppppuStack_e8 =
       (ulonglong *******)
       CONCAT71(pppppppuStack_e8._1_7_,auStack_370[(longlong)pppppppuVar21 * 0x20 + 9]);
  pppppppuStack_268 = pppppppuStack_2a8;
  if (auStack_370[(longlong)pppppppuVar21 * 0x20 + 9] == '\x05') {
    pppppppuStack_1f8 = (ulonglong *******)0xc1ea527c35d;
    pppppppuStack_1f0 = (ulonglong *******)_DAT_14329c330;
    pppppppuStack_1e8 = _UNK_14329c338;
    uStack_a3 = 1;
    pppppppuStack_1f0 = (ulonglong *******)pdb_1400affa0(&pppppppuStack_1f8);
    pppppppuStack_1f8 = pppppppuVar33;
    uStack_a3 = 1;
    uVar16 = pdb_1400b0130(&pppppppuStack_1f8);
    uStack_a3 = 1;
    pdb_14072caa0(&pppppppuStack_128,&pppppppuStack_3c0,uVar16);
    uStack_a3 = 1;
    pdb_141174160(&pppppppuStack_1f8,&pppppppuStack_128,&UNK_1434e1a31,0x1a,0);
  }
  pbStack_230 = (byte *)CONCAT71(pbStack_230._1_7_,*_DAT_143ca4500);
  bVar8 = *_DAT_143ca4500 ^ 1 | (char)pppppppuStack_e8 == '\0';
  uVar32 = 0xe;
  if (bVar8 != 0) {
    uVar32 = 2;
  }
  pdb_1407339e0(&pppppppuStack_1f8,&pppppppuStack_3c0,pppppppuStack_f8);
  uVar16 = pdb_14116dd60(&pppppppuStack_1f8);
  pdb_14119b2b0(uVar16,uVar12);
  pppppppuStack_118 = pppppppuStack_1e8;
  pppppppuStack_128 = pppppppuStack_1f8;
  pppppppuStack_120 = pppppppuStack_1f0;
  lVar13 = pdb_14116dd60(&pppppppuStack_128);
  *(undefined4 *)(lVar13 + 600) = 0xffffffa0;
  pppppppuStack_1e8 = pppppppuStack_118;
  pppppppuStack_1f8 = pppppppuStack_128;
  pppppppuStack_1f0 = pppppppuStack_120;
  uVar16 = pdb_14116dd60(&pppppppuStack_1f8);
  pdb_140cb5df0(uVar16,uVar20);
  pppppppuStack_118 = pppppppuStack_1e8;
  pppppppuStack_128 = pppppppuStack_1f8;
  pppppppuStack_120 = pppppppuStack_1f0;
  uVar16 = pdb_14116dd60(&pppppppuStack_128);
  pdb_140cb68f0(uVar16,2);
  pppppppuVar34 = pppppppuStack_128;
  pppppppuStack_1e8 = pppppppuStack_118;
  pppppppuStack_1f8 = pppppppuStack_128;
  pppppppuStack_1f0 = pppppppuStack_120;
  if (pppppppuStack_128[0x39] != (ulonglong ******)0x0) {
    uVar14 = pdb_1400af0a0(pppppppuStack_128 + 0x3a,&pppppppuStack_1f0);
    ppppppuVar3 = pppppppuVar34[0x36];
    ppppppuVar4 = pppppppuVar34[0x37];
    bVar35 = (byte)(uVar14 >> 0x39);
    auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
    auVar36 = pshuflw(auVar36,auVar36,0);
    lVar13 = 0;
    while( true ) {
      uVar14 = uVar14 & (ulonglong)ppppppuVar4;
      auVar51 = *(undefined1 (*) [16])((longlong)ppppppuVar3 + uVar14);
      auVar50[0] = -(auVar51[0] == auVar36[0]);
      auVar50[1] = -(auVar51[1] == auVar36[1]);
      auVar50[2] = -(auVar51[2] == auVar36[2]);
      auVar50[3] = -(auVar51[3] == auVar36[3]);
      auVar50[4] = -(auVar51[4] == auVar36[4]);
      auVar50[5] = -(auVar51[5] == auVar36[5]);
      auVar50[6] = -(auVar51[6] == auVar36[6]);
      auVar50[7] = -(auVar51[7] == auVar36[7]);
      auVar50[8] = -(auVar51[8] == auVar36[0]);
      auVar50[9] = -(auVar51[9] == auVar36[1]);
      auVar50[10] = -(auVar51[10] == auVar36[2]);
      auVar50[0xb] = -(auVar51[0xb] == auVar36[3]);
      auVar50[0xc] = -(auVar51[0xc] == auVar36[4]);
      auVar50[0xd] = -(auVar51[0xd] == auVar36[5]);
      auVar50[0xe] = -(auVar51[0xe] == auVar36[6]);
      auVar50[0xf] = -(auVar51[0xf] == auVar36[7]);
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
      uVar10 = (uint)uVar28;
      while (uVar28 != 0) {
        uVar11 = 0;
        for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar29 = uVar11 + uVar14 & (ulonglong)ppppppuVar4;
        if (pppppppuStack_1f0 == (ulonglong *******)ppppppuVar3[uVar29 * -0x1b + -0x1b]) {
          *(undefined1 *)(ppppppuVar3 + uVar29 * -0x1b + -1) = 0;
          *(undefined1 *)((longlong)ppppppuVar3 + uVar29 * -0xd8 + -7) = uVar32;
          pppppppuStack_118 = pppppppuStack_1e8;
          pppppppuStack_128 = pppppppuStack_1f8;
          pppppppuStack_120 = pppppppuStack_1f0;
          pdb_140724ca0(&pppppppuStack_288,&pppppppuStack_128);
          pppppppuVar34 = pppppppuStack_288;
          if ((ulonglong *******)pcVar23 != (ulonglong *******)0x0) goto LAB_14239f780;
          if (pppppppuStack_288[0x39] == (ulonglong ******)0x0) goto LAB_14239fd3d;
          uVar14 = pdb_1400af0a0(pppppppuStack_288 + 0x3a,apppppppuStack_280);
          ppppppuVar3 = pppppppuVar34[0x36];
          ppppppuVar4 = pppppppuVar34[0x37];
          bVar35 = (byte)(uVar14 >> 0x39);
          auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
          auVar36 = pshuflw(auVar36,auVar36,0);
          lVar13 = 0;
          goto LAB_14239f713;
        }
        uVar28 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar28);
      }
      auVar37[0] = -(auVar51[0] == cVar9);
      auVar37[1] = -(auVar51[1] == cVar69);
      auVar37[2] = -(auVar51[2] == cVar70);
      auVar37[3] = -(auVar51[3] == cVar71);
      auVar37[4] = -(auVar51[4] == cVar72);
      auVar37[5] = -(auVar51[5] == cVar73);
      auVar37[6] = -(auVar51[6] == cVar74);
      auVar37[7] = -(auVar51[7] == cVar75);
      auVar37[8] = -(auVar51[8] == cVar76);
      auVar37[9] = -(auVar51[9] == cVar77);
      auVar37[10] = -(auVar51[10] == cVar78);
      auVar37[0xb] = -(auVar51[0xb] == cVar79);
      auVar37[0xc] = -(auVar51[0xc] == cVar80);
      auVar37[0xd] = -(auVar51[0xd] == cVar81);
      auVar37[0xe] = -(auVar51[0xe] == cVar82);
      auVar37[0xf] = -(auVar51[0xf] == cVar83);
      if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar37 >> 0x3f,0) & 1) != 0) || (SUB161(auVar37 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar37 >> 0x4f,0) & 1) != 0) || (SUB161(auVar37 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar37 >> 0x5f,0) & 1) != 0) || (SUB161(auVar37 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar37 >> 0x6f,0) & 1) != 0) || (SUB161(auVar37 >> 0x77,0) & 1) != 0) ||
          auVar37[0xf] < '\0') break;
      uVar14 = uVar14 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

