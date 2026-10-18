// VA 0x141196e50, PDB extent 11669 bytes
// toolbar::menu::load::ui::closure$9
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::load::ui::closure$9
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
   Extent: 11669 */

void pdb_141196e50(undefined8 *param_1,longlong *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *******pppppppbVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  byte ******ppppppbVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  byte *****pppppbVar13;
  byte *****pppppbVar14;
  byte *****pppppbVar15;
  char cVar16;
  int iVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  byte ******ppppppbVar20;
  longlong lVar21;
  byte *******pppppppbVar22;
  undefined4 uVar23;
  uint uVar24;
  byte *******pppppppbVar25;
  byte ******ppppppbVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  ushort uVar30;
  longlong lVar31;
  ulonglong uVar32;
  byte bVar33;
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
  undefined1 auVar46 [16];
  undefined1 unaff_XMM7_Ba;
  char cVar47;
  undefined1 unaff_XMM7_Bb;
  char cVar48;
  undefined1 unaff_XMM7_Bc;
  char cVar49;
  undefined1 unaff_XMM7_Bd;
  char cVar50;
  undefined1 unaff_XMM7_Be;
  char cVar51;
  undefined1 unaff_XMM7_Bf;
  char cVar52;
  undefined1 unaff_XMM7_Bg;
  char cVar53;
  undefined1 unaff_XMM7_Bh;
  char cVar54;
  undefined1 unaff_XMM7_Bi;
  char cVar55;
  undefined1 unaff_XMM7_Bj;
  char cVar56;
  undefined1 unaff_XMM7_Bk;
  char cVar57;
  undefined1 unaff_XMM7_Bl;
  char cVar58;
  undefined1 unaff_XMM7_Bm;
  char cVar59;
  undefined1 unaff_XMM7_Bn;
  char cVar60;
  undefined1 unaff_XMM7_Bo;
  char cVar61;
  undefined1 unaff_XMM7_Bp;
  char cVar62;
  byte ******in_stack_fffffffffffffb08;
  undefined1 auStack_4f0 [40];
  byte *******pppppppbStack_4c8;
  byte *******pppppppbStack_4c0;
  undefined8 uStack_4b8;
  byte ******ppppppbStack_4a8;
  ulonglong uStack_4a0;
  ulonglong uStack_498;
  ulonglong uStack_490;
  ulonglong uStack_480;
  byte *pbStack_478;
  undefined8 uStack_470;
  longlong lStack_460;
  longlong *plStack_458;
  longlong *plStack_450;
  ulonglong *puStack_448;
  undefined1 *puStack_440;
  undefined8 uStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  byte *******pppppppbStack_420;
  byte *******pppppppbStack_418;
  byte ******ppppppbStack_410;
  byte bStack_408;
  undefined7 uStack_407;
  code *pcStack_400;
  byte *******pppppppbStack_3f8;
  byte ******ppppppbStack_3f0;
  byte ******ppppppbStack_3e8;
  char cStack_3e0;
  char cStack_3df;
  undefined6 uStack_3de;
  byte *******pppppppbStack_3d8;
  byte ******ppppppbStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  byte *******pppppppbStack_3b8;
  byte *******pppppppbStack_3b0;
  byte ******ppppppbStack_3a8;
  code *pcStack_3a0;
  byte *******pppppppbStack_398;
  byte ******ppppppbStack_390;
  byte ******ppppppbStack_388;
  code *pcStack_380;
  byte *******pppppppbStack_378;
  byte ******ppppppbStack_370;
  ulonglong uStack_368;
  ulonglong uStack_360;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined4 uStack_2c8;
  undefined8 uStack_2c4;
  ushort uStack_2bc;
  byte bStack_2ba;
  byte *******pppppppbStack_2b8;
  byte ******appppppbStack_2b0 [3];
  byte *******pppppppbStack_298;
  undefined8 *puStack_290;
  byte *******pppppppbStack_288;
  byte *******pppppppbStack_280;
  undefined8 uStack_278;
  byte *******pppppppbStack_268;
  longlong *plStack_260;
  undefined4 uStack_258;
  undefined3 uStack_254;
  ulonglong *puStack_250;
  byte *******pppppppbStack_248;
  byte ******ppppppbStack_240;
  byte ******ppppppbStack_238;
  code *pcStack_230;
  byte *******pppppppbStack_228;
  byte ******ppppppbStack_220;
  undefined8 uStack_218;
  char cStack_210;
  char cStack_20f;
  undefined6 uStack_20e;
  byte *******pppppppbStack_208;
  byte *******pppppppbStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  int iStack_1ec;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  byte ******ppppppbStack_1e0;
  undefined1 auStack_1d8 [16];
  byte ******ppppppbStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  byte *******pppppppbStack_1b0;
  ulonglong uStack_150;
  byte ******ppppppbStack_148;
  undefined8 uStack_130;
  undefined1 uStack_128;
  byte ******ppppppbStack_120;
  byte ******ppppppbStack_118;
  byte ******ppppppbStack_110;
  undefined8 uStack_100;
  byte *******pppppppbStack_f8;
  byte *******pppppppbStack_f0;
  byte *****pppppbStack_e8;
  byte ******ppppppbStack_e0;
  longlong lStack_d8;
  undefined4 uStack_cc;
  byte ******ppppppbStack_c8;
  byte *******pppppppbStack_c0;
  byte bStack_b2;
  undefined1 uStack_b1;
  byte *******pppppppbStack_b0;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  char cStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  lVar21 = *param_2;
  if (*(longlong *)(lVar21 + 0x1c8) != 0) {
    uVar18 = pdb_1400af0a0(lVar21 + 0x1d0,param_2 + 1);
    lVar27 = *(longlong *)(lVar21 + 0x1b0);
    bVar33 = (byte)(uVar18 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar34 = pshuflw(auVar34,auVar34,0);
    lVar29 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar21 + 0x1b8);
      pcVar2 = (char *)(lVar27 + uVar18);
      auVar46[0] = -(*pcVar2 == auVar34[0]);
      auVar46[1] = -(pcVar2[1] == auVar34[1]);
      auVar46[2] = -(pcVar2[2] == auVar34[2]);
      auVar46[3] = -(pcVar2[3] == auVar34[3]);
      auVar46[4] = -(pcVar2[4] == auVar34[4]);
      auVar46[5] = -(pcVar2[5] == auVar34[5]);
      auVar46[6] = -(pcVar2[6] == auVar34[6]);
      auVar46[7] = -(pcVar2[7] == auVar34[7]);
      auVar46[8] = -(pcVar2[8] == auVar34[0]);
      auVar46[9] = -(pcVar2[9] == auVar34[1]);
      auVar46[10] = -(pcVar2[10] == auVar34[2]);
      auVar46[0xb] = -(pcVar2[0xb] == auVar34[3]);
      auVar46[0xc] = -(pcVar2[0xc] == auVar34[4]);
      auVar46[0xd] = -(pcVar2[0xd] == auVar34[5]);
      auVar46[0xe] = -(pcVar2[0xe] == auVar34[6]);
      auVar46[0xf] = -(pcVar2[0xf] == auVar34[7]);
      uVar30 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
      uVar28 = (uint)uVar30;
      while (uVar30 != 0) {
        uVar24 = 0;
        for (uVar10 = uVar28; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
        lVar31 = (uVar24 + uVar18 & *(ulonglong *)(lVar21 + 0x1b8)) * -0xd8;
        if (param_2[1] == *(longlong *)(lVar27 + -0xd8 + lVar31)) {
          pbVar1 = (byte *)(lVar27 + lVar31 + -5);
          *pbVar1 = *pbVar1 | 4;
          pppppbVar15 = _UNK_14329e288;
          pppppbVar14 = _DAT_14329e280;
          pppppbVar13 = _DAT_142f61040;
          uVar12 = _DAT_142e37994;
          plStack_450 = (longlong *)*param_1;
          puStack_250 = (ulonglong *)param_1[1];
          lVar21 = *plStack_450;
          lVar27 = plStack_450[1] * 0x30 + lVar21;
          puStack_290 = (undefined8 *)param_1[2];
          plStack_458 = (longlong *)param_1[3];
          puStack_448 = (ulonglong *)param_1[4];
          puStack_440 = (undefined1 *)param_1[5];
          uStack_438 = param_1[6];
          puStack_430 = (undefined8 *)param_1[7];
          puStack_428 = (undefined8 *)param_1[8];
          plStack_260 = (longlong *)param_1[9];
          iVar17 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                    CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba)))
                          == CONCAT13(unaff_XMM7_Bd,
                                      CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba)))
                          );
          cVar47 = (char)iVar17;
          cVar48 = (char)((uint)iVar17 >> 8);
          cVar49 = (char)((uint)iVar17 >> 0x10);
          cVar50 = (char)((uint)iVar17 >> 0x18);
          iVar17 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                    CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be)))
                          == CONCAT13(unaff_XMM7_Bh,
                                      CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be)))
                          );
          cVar51 = (char)iVar17;
          cVar52 = (char)((uint)iVar17 >> 8);
          cVar53 = (char)((uint)iVar17 >> 0x10);
          cVar54 = (char)((uint)iVar17 >> 0x18);
          iVar17 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                    CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi)))
                          == CONCAT13(unaff_XMM7_Bl,
                                      CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi)))
                          );
          cVar55 = (char)iVar17;
          cVar56 = (char)((uint)iVar17 >> 8);
          cVar57 = (char)((uint)iVar17 >> 0x10);
          cVar58 = (char)((uint)iVar17 >> 0x18);
          iVar17 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                    CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)))
                          == CONCAT13(unaff_XMM7_Bp,
                                      CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)))
                          );
          cVar59 = (char)iVar17;
          cVar60 = (char)((uint)iVar17 >> 8);
          cVar61 = (char)((uint)iVar17 >> 0x10);
          cVar62 = (char)((uint)iVar17 >> 0x18);
          goto code_r0x00014119700f;
        }
        uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
        uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
      }
      auVar40[0] = -(*pcVar2 == -1);
      auVar40[1] = -(pcVar2[1] == -1);
      auVar40[2] = -(pcVar2[2] == -1);
      auVar40[3] = -(pcVar2[3] == -1);
      auVar40[4] = -(pcVar2[4] == -1);
      auVar40[5] = -(pcVar2[5] == -1);
      auVar40[6] = -(pcVar2[6] == -1);
      auVar40[7] = -(pcVar2[7] == -1);
      auVar40[8] = -(pcVar2[8] == -1);
      auVar40[9] = -(pcVar2[9] == -1);
      auVar40[10] = -(pcVar2[10] == -1);
      auVar40[0xb] = -(pcVar2[0xb] == -1);
      auVar40[0xc] = -(pcVar2[0xc] == -1);
      auVar40[0xd] = -(pcVar2[0xd] == -1);
      auVar40[0xe] = -(pcVar2[0xe] == -1);
      auVar40[0xf] = -(pcVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar40 >> 0x3f,0) & 1) != 0) || (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || (SUB161(auVar40 >> 0x77,0) & 1) != 0) ||
          auVar40[0xf] < '\0') break;
      uVar18 = uVar18 + lVar29 + 0x10;
      lVar29 = lVar29 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6a88);
LAB_14119728c:
  uVar18 = uVar18 & (ulonglong)ppppppbVar26;
  auVar46 = *(undefined1 (*) [16])((longlong)ppppppbVar20 + uVar18);
  auVar42[0] = -(auVar46[0] == auVar34[0]);
  auVar42[1] = -(auVar46[1] == auVar34[1]);
  auVar42[2] = -(auVar46[2] == auVar34[2]);
  auVar42[3] = -(auVar46[3] == auVar34[3]);
  auVar42[4] = -(auVar46[4] == auVar34[4]);
  auVar42[5] = -(auVar46[5] == auVar34[5]);
  auVar42[6] = -(auVar46[6] == auVar34[6]);
  auVar42[7] = -(auVar46[7] == auVar34[7]);
  auVar42[8] = -(auVar46[8] == auVar34[0]);
  auVar42[9] = -(auVar46[9] == auVar34[1]);
  auVar42[10] = -(auVar46[10] == auVar34[2]);
  auVar42[0xb] = -(auVar46[0xb] == auVar34[3]);
  auVar42[0xc] = -(auVar46[0xc] == auVar34[4]);
  auVar42[0xd] = -(auVar46[0xd] == auVar34[5]);
  auVar42[0xe] = -(auVar46[0xe] == auVar34[6]);
  auVar42[0xf] = -(auVar46[0xf] == auVar34[7]);
  uVar30 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
  uVar28 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar24 = 0;
    for (uVar10 = uVar28; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar24 = uVar24 + 1;
    }
    uVar32 = uVar24 + uVar18 & (ulonglong)ppppppbVar26;
    if (pppppppbStack_280 == (byte *******)ppppppbVar20[uVar32 * -0x1b + -0x1b]) {
      bStack_b2 = *(byte *)((longlong)ppppppbVar20 + uVar32 * -0xd8 + -6);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(lVar21 + 0x28)) {
      case 0:
        uVar19 = 0x13;
        lStack_d8 = pdb_140dc6290(&UNK_14329f638);
        pppppbStack_e8 = (byte *****)0x6;
        ppppppbStack_e0 = (byte ******)&UNK_14329f64b;
        uStack_100 = uVar19;
        break;
      case 1:
        ppppppbStack_e0 = (byte ******)0x1;
        lStack_d8 = 0;
        pppppbStack_e8 = (byte *****)0x0;
        break;
      case 2:
        uVar19 = 0x1d;
        lStack_d8 = pdb_140dc6290(&UNK_14329f651);
        pppppbStack_e8 = (byte *****)0x4;
        ppppppbStack_e0 = (byte ******)&UNK_14329f66e;
        uStack_100 = uVar19;
        break;
      case 3:
        uVar19 = 0x15;
        lStack_d8 = pdb_140dc6290(&UNK_14329f672);
        pppppbStack_e8 = (byte *****)0x4;
        ppppppbStack_e0 = (byte ******)&UNK_14329f687;
        uStack_100 = uVar19;
        break;
      case 4:
        uVar19 = 0x18;
        lStack_d8 = pdb_140dc6290(&UNK_14329f68b);
        pppppbStack_e8 = (byte *****)0x4;
        ppppppbStack_e0 = (byte ******)&UNK_14329f6a3;
        uStack_100 = uVar19;
        break;
      case 5:
        uVar19 = 0x22;
        lStack_d8 = pdb_140dc6290(&UNK_14329f6a7);
        pppppbStack_e8 = (byte *****)0x4;
        ppppppbStack_e0 = (byte ******)&UNK_14329f6c9;
        uStack_100 = uVar19;
        break;
      case 6:
        uVar19 = 0x1c;
        lStack_d8 = pdb_140dc6290(&UNK_14329f6cd);
        pppppbStack_e8 = (byte *****)0x4;
        ppppppbStack_e0 = (byte ******)&UNK_14329f6e9;
        uStack_100 = uVar19;
      }
      pdb_1407339e0(&pppppppbStack_208,&pppppppbStack_288,pppppppbStack_268);
      lVar29 = pdb_14116dd60(&pppppppbStack_208);
      pppppppbVar25 = pppppppbStack_208;
      *(undefined4 *)(lVar29 + 600) = 0x7b5a51a0;
      pppppppbStack_3b8 = pppppppbStack_208;
      pppppppbStack_3b0 = pppppppbStack_200;
      ppppppbStack_3a8 = (byte ******)CONCAT44(uStack_1f4,uStack_1f8);
      if (pppppppbStack_208[0x39] == (byte ******)0x0) goto code_r0x000141198c47;
      uVar18 = pdb_1400af0a0(pppppppbStack_208 + 0x3a,&pppppppbStack_3b0);
      ppppppbVar20 = pppppppbVar25[0x36];
      ppppppbVar26 = pppppppbVar25[0x37];
      bVar33 = (byte)(uVar18 >> 0x39);
      auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
      auVar34 = pshuflw(auVar34,auVar34,0);
      lVar29 = 0;
      goto code_r0x000141197545;
    }
    uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
    uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
  }
  auVar36[0] = -(auVar46[0] == cVar47);
  auVar36[1] = -(auVar46[1] == cVar48);
  auVar36[2] = -(auVar46[2] == cVar49);
  auVar36[3] = -(auVar46[3] == cVar50);
  auVar36[4] = -(auVar46[4] == cVar51);
  auVar36[5] = -(auVar46[5] == cVar52);
  auVar36[6] = -(auVar46[6] == cVar53);
  auVar36[7] = -(auVar46[7] == cVar54);
  auVar36[8] = -(auVar46[8] == cVar55);
  auVar36[9] = -(auVar46[9] == cVar56);
  auVar36[10] = -(auVar46[10] == cVar57);
  auVar36[0xb] = -(auVar46[0xb] == cVar58);
  auVar36[0xc] = -(auVar46[0xc] == cVar59);
  auVar36[0xd] = -(auVar46[0xd] == cVar60);
  auVar36[0xe] = -(auVar46[0xe] == cVar61);
  auVar36[0xf] = -(auVar46[0xf] == cVar62);
  if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar36 >> 0x37,0) & 1) != 0) || (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar36 >> 0x47,0) & 1) != 0) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') {
LAB_141198c35:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b00);
  }
  uVar18 = uVar18 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto LAB_14119728c;
code_r0x000141197545:
  uVar18 = uVar18 & (ulonglong)ppppppbVar26;
  auVar46 = *(undefined1 (*) [16])((longlong)ppppppbVar20 + uVar18);
  auVar43[0] = -(auVar46[0] == auVar34[0]);
  auVar43[1] = -(auVar46[1] == auVar34[1]);
  auVar43[2] = -(auVar46[2] == auVar34[2]);
  auVar43[3] = -(auVar46[3] == auVar34[3]);
  auVar43[4] = -(auVar46[4] == auVar34[4]);
  auVar43[5] = -(auVar46[5] == auVar34[5]);
  auVar43[6] = -(auVar46[6] == auVar34[6]);
  auVar43[7] = -(auVar46[7] == auVar34[7]);
  auVar43[8] = -(auVar46[8] == auVar34[0]);
  auVar43[9] = -(auVar46[9] == auVar34[1]);
  auVar43[10] = -(auVar46[10] == auVar34[2]);
  auVar43[0xb] = -(auVar46[0xb] == auVar34[3]);
  auVar43[0xc] = -(auVar46[0xc] == auVar34[4]);
  auVar43[0xd] = -(auVar46[0xd] == auVar34[5]);
  auVar43[0xe] = -(auVar46[0xe] == auVar34[6]);
  auVar43[0xf] = -(auVar46[0xf] == auVar34[7]);
  uVar30 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
  uVar28 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar24 = 0;
    for (uVar10 = uVar28; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar24 = uVar24 + 1;
    }
    uVar32 = uVar24 + uVar18 & (ulonglong)ppppppbVar26;
    if (pppppppbStack_3b0 == (byte *******)ppppppbVar20[uVar32 * -0x1b + -0x1b]) {
      if ((*(byte *)((longlong)ppppppbVar20 + uVar32 * -0xd8 + -6) & 0x30) == 0)
      goto code_r0x0001411985ce;
      pppppppbStack_208 = (byte *******)*puStack_250;
      pppppppbStack_200 = (byte *******)puStack_250[1];
      cVar16 = pdb_140b7e530(&pppppppbStack_208,*puStack_290);
      if (cVar16 == '\0') {
        *(undefined4 *)plStack_458[2] = *(undefined4 *)((longlong)plStack_458 + 0x1c);
        lVar29 = *plStack_458;
        lVar31 = *(longlong *)(lVar29 + 0x30);
        uVar19 = *(undefined8 *)(lVar29 + 0x40);
        if (lVar31 == *(longlong *)(lVar29 + 0x20)) {
          pdb_142d7e980(lVar29 + 0x20);
        }
        lVar3 = *(longlong *)(lVar29 + 0x28);
        *(undefined8 *)(lVar3 + lVar31 * 0x10) = uVar19;
        *(undefined1 *)(lVar3 + 8 + lVar31 * 0x10) = 0xe;
        *(longlong *)(lVar29 + 0x30) = lVar31 + 1;
        *(longlong *)(lVar29 + 0x40) = *(longlong *)(lVar29 + 0x40) + 1;
        goto code_r0x0001411985ce;
      }
      pdb_140a937d0(&pppppppbStack_208,puStack_250);
      in_stack_fffffffffffffb08 = (byte ******)0x0;
      pppppppbStack_b0 = pppppppbStack_200;
      pdb_140f3e9e0(&uStack_480,pppppppbStack_200,CONCAT44(uStack_1f4,uStack_1f8),&UNK_14329f6ed,0xc
                   );
      if (pppppppbStack_208 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_b0,(ulonglong)pppppppbStack_208,1);
      }
      uStack_498 = *puStack_250;
      uStack_490 = puStack_250[1];
      pppppppbStack_3b8 = (byte *******)*puStack_250;
      pppppppbStack_3b0 = (byte *******)puStack_250[1];
      pdb_142322590(&pppppppbStack_208,&pppppppbStack_3b8);
      if (SBORROW8(0,(longlong)pppppppbStack_208)) {
        pdb_140a93e70(&pppppppbStack_3b8);
        pdb_140f36c40(&pppppppbStack_200);
      }
      else {
        pub_142e32760(&pppppppbStack_3b8,&pppppppbStack_208,0xa0);
      }
      pdb_140a923d0(&pppppppbStack_208,&pppppppbStack_3b8);
      pdb_140c5d220(auStack_4f0,&pppppppbStack_208);
      pdb_1404cc180(&pppppppbStack_3b8);
      pdb_141920a00(&pppppppbStack_418,*(undefined8 *)(lVar21 + 8),*(undefined8 *)(lVar21 + 0x10),
                    auStack_4f0);
      if (!SBORROW8(0,(longlong)pppppppbStack_418)) {
        ppppppbStack_238 = (byte ******)CONCAT71(uStack_407,bStack_408);
        pppppppbStack_228 = pppppppbStack_3f8;
        ppppppbStack_220 = ppppppbStack_3f0;
        pcStack_230 = pcStack_400;
        pppppppbStack_248 = pppppppbStack_418;
        ppppppbStack_240 = ppppppbStack_410;
        uStack_a5 = 1;
        pdb_140a939a0(&pppppppbStack_208,puStack_250);
        pppppppbStack_b0 = pppppppbStack_200;
        uVar19 = CONCAT44(uStack_1f4,uStack_1f8);
        pdb_140dee3a0(&pppppppbStack_3b8);
        appppppbStack_2b0[0] = (byte ******)pdb_140001020;
        pppppppbStack_2b8 = (byte *******)&pppppppbStack_3b8;
        pdb_140f60760(&ppppppbStack_120,&UNK_14329f6f9,&pppppppbStack_2b8);
        if (pppppppbStack_3b8 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_3b0,(ulonglong)pppppppbStack_3b8,1);
        }
        ppppppbStack_c8 = ppppppbStack_120;
        pppppppbStack_c0 = (byte *******)ppppppbStack_118;
        in_stack_fffffffffffffb08 = ppppppbStack_110;
        pdb_140f3e9e0(&pppppppbStack_3d8,pppppppbStack_b0,uVar19,ppppppbStack_118,ppppppbStack_110);
        if (ppppppbStack_c8 != (byte ******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_c0,(ulonglong)ppppppbStack_c8,1);
        }
        if (pppppppbStack_208 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_b0,(ulonglong)pppppppbStack_208,1);
        }
        pppppppbVar5 = (byte *******)*plStack_450;
        lVar29 = plStack_450[1];
        pppppppbStack_b0 = (byte *******)*puStack_448;
        pppppppbVar25 = pppppppbVar5;
        goto code_r0x000141197a1e;
      }
      ppppppbStack_120 = ppppppbStack_410;
      if (*_DAT_143ca8e90 != 0) {
        pppppppbStack_3b0 = (byte *******)pdb_140f36c20;
        pppppppbStack_208 = (byte *******)0x0;
        pppppppbStack_200 = (byte *******)&UNK_14329f733;
        uStack_1f8 = 0x13;
        uStack_1f4 = 0;
        uStack_1f0 = 0;
        iStack_1ec = 0;
        uStack_1e8 = 0xe;
        uStack_1e7 = 0x14329f5;
        ppppppbStack_1e0 = (byte ******)0x27;
        auStack_1d8._8_8_ = &UNK_14329f733;
        auStack_1d8._0_8_ = 1;
        ppppppbStack_1c8 = (byte ******)0x13;
        uStack_1c0 = 0x24200000001;
        puStack_1b8 = &UNK_14329f788;
        pppppppbStack_1b0 = (byte *******)&pppppppbStack_3b8;
        pppppppbStack_3b8 = &ppppppbStack_120;
        pdb_140f332f0(&uStack_a4,&pppppppbStack_208);
      }
      pppppppbVar25 = *(byte ********)(lVar21 + 0x10);
      pppppppbStack_b0 = pppppppbVar25;
      if ((longlong)pppppppbVar25 < 0) {
        uVar19 = 0;
code_r0x000141198ca9:
        pdb_142dc7e2a(uVar19,pppppppbVar25);
        goto code_r0x000141198d6a;
      }
      if (pppppppbVar25 == (byte *******)0x0) {
        ppppppbVar20 = (byte ******)0x1;
      }
      else {
        uVar4 = *(undefined8 *)(lVar21 + 8);
        pdb_14007ee60();
        pppppppbVar25 = pppppppbStack_b0;
        uVar19 = 1;
        ppppppbVar20 = (byte ******)pub_1406abab0((ulonglong)pppppppbStack_b0,1);
        if (ppppppbVar20 == (byte ******)0x0) goto code_r0x000141198ca9;
        pub_142e32760(ppppppbVar20,uVar4,pppppppbVar25);
      }
      uStack_b1 = *(undefined1 *)(lVar21 + 0x18);
      uStack_a3 = 1;
      ppppppbStack_c8 = ppppppbVar20;
      lVar29 = pdb_140f3ecf0(ppppppbVar20,pppppppbVar25);
      if (lVar29 == 0) {
        uStack_a3 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14329f7a8);
      }
      uStack_a3 = 1;
      pdb_140f69110(&pppppppbStack_208,lVar29,pppppppbVar25);
      if ((int)pppppppbStack_208 == 1) {
        uStack_a3 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14329f7c0);
      }
      uStack_4a0 = CONCAT44(uStack_1f4,uStack_1f8);
      ppppppbStack_4a8 = (byte ******)pppppppbStack_200;
      if ((uStack_4a0 < 10) ||
         (pppppppbVar25 = (byte *******)0x6574707572726f63,
         *(short *)(pppppppbStack_200 + 1) != 0x2d64 ||
         *pppppppbStack_200 != (byte ******)0x6574707572726f63)) {
        uStack_a3 = 1;
        pppppppbVar25 = pppppppbStack_b0;
        lVar29 = pdb_140f3eaf0(ppppppbStack_c8,pppppppbStack_b0);
        if (lVar29 == 0) {
          uStack_a3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14329f7d8);
        }
        pppppppbStack_248 = &ppppppbStack_4a8;
        ppppppbStack_240 = (byte ******)pdb_1402ed400;
        uStack_a3 = 1;
        pdb_140f60760(&pppppppbStack_3b8,&UNK_14329f7f0,&pppppppbStack_248);
        pppppppbStack_c0 = pppppppbStack_3b8;
        pppppppbStack_f0 = pppppppbStack_3b0;
        in_stack_fffffffffffffb08 = ppppppbStack_3a8;
        pdb_140f3e9e0(&pppppppbStack_208,lVar29,pppppppbVar25,pppppppbStack_3b0,ppppppbStack_3a8);
        if (pppppppbStack_c0 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_f0,(ulonglong)pppppppbStack_c0,1);
        }
        pppppppbStack_f0 = (byte *******)CONCAT44(uStack_1f4,uStack_1f8);
        pppppppbStack_c0 = pppppppbStack_200;
        pppppppbVar25 = pppppppbStack_b0;
        pppppppbStack_3b8 = (byte *******)pdb_140f4f450(ppppppbStack_c8);
        uVar23 = SUB84(pppppppbVar25,0);
        if (pppppppbStack_3b8 != (byte *******)0x0) {
          pdb_1404b38e0(&pppppppbStack_3b8);
          pppppppbVar25 = pppppppbStack_208;
          if (pppppppbStack_208 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbStack_c0,(ulonglong)pppppppbStack_208,1);
          }
          goto code_r0x000141198356;
        }
        pppppppbStack_f8 = pppppppbStack_208;
        uStack_b1 = (undefined1)uStack_1f0;
        uStack_258 = CONCAT13((undefined1)iStack_1ec,uStack_1f0._1_3_);
        uStack_254 = (undefined3)((uint)iStack_1ec >> 8);
        uStack_cc = (undefined4)
                    CONCAT71((uint7)(uint3)(CONCAT13((undefined1)iStack_1ec,uStack_1f0._1_3_) >> 8),
                             1);
      }
      else {
code_r0x000141198356:
        uVar23 = SUB84(pppppppbVar25,0);
        uStack_cc = 0;
        pppppppbStack_f8 = pppppppbStack_b0;
        pppppppbStack_c0 = (byte *******)ppppppbStack_c8;
        pppppppbStack_f0 = pppppppbStack_b0;
      }
      uVar19 = pdb_140f3c9d0();
      uVar32 = pdb_140f5a1d0(uVar19);
      pppppppbStack_3b8 = &ppppppbStack_120;
      pppppppbStack_3b0 = (byte *******)pdb_140f36c20;
      pdb_140f60760(&pppppppbStack_208,&UNK_14329f7fd,&pppppppbStack_3b8);
      pppppppbStack_3b8 = pppppppbStack_208;
      pppppppbStack_3b0 = pppppppbStack_200;
      ppppppbStack_3a8 = (byte ******)CONCAT44(uStack_1f4,uStack_1f8);
      puVar6 = (ulonglong *)*plStack_260;
      uVar18 = *puVar6;
      if (!SBORROW8(0,uVar18)) {
        if (uVar18 != 0) {
          pub_1406abac0((byte *)puVar6[1],uVar18,1);
        }
        if (puVar6[4] != 0) {
          pub_1406abac0((byte *)puVar6[5],puVar6[4],1);
        }
      }
      *puVar6 = (ulonglong)pppppppbStack_f8;
      puVar6[1] = (ulonglong)pppppppbStack_c0;
      puVar6[2] = (ulonglong)pppppppbStack_f0;
      *(undefined1 *)(puVar6 + 3) = uStack_b1;
      *(undefined4 *)((longlong)puVar6 + 0x19) = uStack_258;
      *(uint *)((longlong)puVar6 + 0x1c) = CONCAT31(uStack_254,uStack_258._3_1_);
      puVar6[4] = (ulonglong)pppppppbStack_3b8;
      puVar6[5] = (ulonglong)pppppppbStack_3b0;
      puVar6[6] = (ulonglong)ppppppbStack_3a8;
      puVar6[7] = uVar32;
      *(undefined4 *)(puVar6 + 8) = uVar23;
      if (((byte)uStack_cc & pppppppbStack_b0 != (byte *******)0x0) != 0) {
        pub_1406abac0((byte *)ppppppbStack_c8,(ulonglong)pppppppbStack_b0,1);
      }
      pdb_140f36c40(&ppppppbStack_120);
      goto code_r0x0001411985b6;
    }
    uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
    uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
  }
  auVar37[0] = -(auVar46[0] == cVar47);
  auVar37[1] = -(auVar46[1] == cVar48);
  auVar37[2] = -(auVar46[2] == cVar49);
  auVar37[3] = -(auVar46[3] == cVar50);
  auVar37[4] = -(auVar46[4] == cVar51);
  auVar37[5] = -(auVar46[5] == cVar52);
  auVar37[6] = -(auVar46[6] == cVar53);
  auVar37[7] = -(auVar46[7] == cVar54);
  auVar37[8] = -(auVar46[8] == cVar55);
  auVar37[9] = -(auVar46[9] == cVar56);
  auVar37[10] = -(auVar46[10] == cVar57);
  auVar37[0xb] = -(auVar46[0xb] == cVar58);
  auVar37[0xc] = -(auVar46[0xc] == cVar59);
  auVar37[0xd] = -(auVar46[0xd] == cVar60);
  auVar37[0xe] = -(auVar46[0xe] == cVar61);
  auVar37[0xf] = -(auVar46[0xf] == cVar62);
  if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') {
code_r0x000141198c47:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
code_r0x000141198d6a:
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  uVar18 = uVar18 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto code_r0x000141197545;
  while( true ) {
    cStack_a1 = 1;
    uStack_a2 = 1;
    uVar18 = pdb_142326530(ppppppbVar20);
    if ((uVar18 & 1) != 0) {
      ppppppbStack_120 = ppppppbVar20;
      if (3 < *_DAT_143ca8e90) {
        pppppppbStack_3b0 = (byte *******)pdb_140f58250;
        ppppppbStack_3a8 = (byte ******)&ppppppbStack_120;
        pcStack_3a0 = pdb_140f36c20;
        pppppppbStack_208 = (byte *******)0x0;
        pppppppbStack_200 = (byte *******)&UNK_14329f733;
        uStack_1f8 = 0x13;
        uStack_1f4 = 0;
        uStack_1f0 = 0;
        iStack_1ec = 0;
        uStack_1e8 = 0xe;
        uStack_1e7 = 0x14329f5;
        ppppppbStack_1e0 = (byte ******)0x27;
        auStack_1d8._8_8_ = &UNK_14329f733;
        auStack_1d8._0_8_ = 4;
        ppppppbStack_1c8 = (byte ******)0x13;
        uStack_1c0 = 0x20700000001;
        puStack_1b8 = &UNK_14329f83a;
        pppppppbStack_1b0 = (byte *******)&pppppppbStack_3b8;
        pppppppbStack_3b8 = pppppppbVar22;
        pdb_140f332f0(&uStack_a4,&pppppppbStack_208);
      }
      ppppppbVar20 = (byte ******)pdb_1418c0450(pppppppbVar22[1],pppppppbVar22[2]);
      cStack_a1 = 1;
      uStack_a2 = 1;
      pdb_140f36c40(&ppppppbStack_120);
    }
    if (ppppppbVar20 == *(byte *******)((longlong)pppppppbStack_b0 + 0x60)) break;
code_r0x000141197a1e:
    do {
      pppppppbVar22 = pppppppbVar25;
      if (pppppppbVar22 == pppppppbVar5 + lVar29 * 6) {
        if (2 < *_DAT_143ca8e90) {
          cStack_a1 = 1;
          uStack_a2 = 1;
          pdb_141b1e240(&pppppppbStack_2b8,pbStack_478,uStack_470,3);
          pdb_141b1e240(&ppppppbStack_120,ppppppbStack_3d0,uStack_3c8,3);
          pppppppbStack_3b8 = (byte *******)&pppppppbStack_2b8;
          pppppppbStack_3b0 = (byte *******)pdb_140f58250;
          pcStack_3a0 = pdb_140f58250;
          pppppppbStack_208 = (byte *******)0x0;
          pppppppbStack_200 = (byte *******)&UNK_14329f733;
          uStack_1f8 = 0x13;
          uStack_1f4 = 0;
          uStack_1f0 = 0;
          iStack_1ec = 0;
          uStack_1e8 = 0xe;
          uStack_1e7 = 0x14329f5;
          ppppppbStack_1e0 = (byte ******)0x27;
          auStack_1d8._8_8_ = &UNK_14329f733;
          auStack_1d8._0_8_ = 3;
          ppppppbStack_1c8 = (byte ******)0x13;
          uStack_1c0 = 0x22500000001;
          puStack_1b8 = &UNK_14329f711;
          pppppppbStack_1b0 = (byte *******)&pppppppbStack_3b8;
          ppppppbStack_3a8 = (byte ******)&ppppppbStack_120;
          pdb_140f332f0(&uStack_a4,&pppppppbStack_208);
          if (ppppppbStack_120 != (byte ******)0x0) {
            pub_1406abac0((byte *)ppppppbStack_118,(ulonglong)ppppppbStack_120,1);
          }
          if (pppppppbStack_2b8 != (byte *******)0x0) {
            pub_1406abac0((byte *)appppppbStack_2b0[0],(ulonglong)pppppppbStack_2b8,1);
          }
        }
        uStack_1f8 = (undefined4)uStack_3c8;
        uStack_1f4 = (undefined4)((ulonglong)uStack_3c8 >> 0x20);
        uStack_1f0 = (undefined4)uStack_3c0;
        iStack_1ec = (int)((ulonglong)uStack_3c0 >> 0x20);
        pppppppbStack_208 = pppppppbStack_3d8;
        pppppppbStack_200 = (byte *******)ppppppbStack_3d0;
        cStack_a1 = 0;
        uStack_a2 = 1;
        ppppppbVar20 = (byte ******)pdb_142326db0(*puStack_290,&uStack_498,&pppppppbStack_208);
        if (ppppppbVar20 == (byte ******)0x0) {
          pppppppbStack_b0 = (byte *******)((ulonglong)pppppppbStack_b0 & 0xffffffff00000000);
          goto code_r0x000141198041;
        }
        ppppppbStack_120 = ppppppbVar20;
        if (*_DAT_143ca8e90 != 0) {
          pppppppbStack_3b0 = (byte *******)pdb_140f36c20;
          pppppppbStack_208 = (byte *******)0x0;
          pppppppbStack_200 = (byte *******)&UNK_14329f733;
          uStack_1f8 = 0x13;
          uStack_1f4 = 0;
          uStack_1f0 = 0;
          iStack_1ec = 0;
          uStack_1e8 = 0xe;
          uStack_1e7 = 0x14329f5;
          ppppppbStack_1e0 = (byte ******)0x27;
          auStack_1d8._8_8_ = &UNK_14329f733;
          auStack_1d8._0_8_ = 1;
          ppppppbStack_1c8 = (byte ******)0x13;
          uStack_1c0 = 0x22e00000001;
          puStack_1b8 = &UNK_14329f746;
          pppppppbStack_1b0 = (byte *******)&pppppppbStack_3b8;
          pppppppbStack_3b8 = &ppppppbStack_120;
          pdb_140f332f0(&uStack_a4,&pppppppbStack_208);
        }
        cStack_a1 = '\0';
        uStack_a2 = 1;
        pdb_140f36c40(&ppppppbStack_120);
        pppppppbStack_b0 = pppppppbStack_228;
        pdb_141180fc0();
        pub_1406abac0((byte *)pppppppbStack_b0,0x140,8);
        if (pppppppbStack_248 != (byte *******)0x0) {
          pub_1406abac0((byte *)ppppppbStack_240,(ulonglong)pppppppbStack_248,1);
        }
        goto code_r0x0001411985b6;
      }
      cStack_a1 = 1;
      uStack_a2 = 1;
      cVar16 = pdb_140a3d910(pppppppbVar22 + 5);
      pppppppbVar25 = pppppppbVar22 + 6;
    } while (cVar16 != '\0');
    pppppppbStack_208 = (byte *******)((ulonglong)pppppppbStack_208 & 0xffffffff00000000);
    pppppppbStack_200 = (byte *******)0x0;
    uStack_1f8 = 7;
    iStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 1;
    ppppppbVar20 = pppppppbVar22[1];
    cStack_a1 = 1;
    uStack_a2 = 1;
    pppppppbStack_2b8 =
         (byte *******)pdb_140f4a2a0(&pppppppbStack_208,ppppppbVar20,pppppppbVar22[2]);
    appppppbStack_2b0[0] = ppppppbVar20;
    if (((ulonglong)pppppppbStack_2b8 & 1) != 0) {
      cStack_a1 = 1;
      uStack_a2 = 1;
      pdb_1404b38e0(appppppbStack_2b0);
      goto code_r0x000141197a1e;
    }
  }
  uVar18 = *_DAT_143ca8e90;
  if (2 < uVar18) {
    ppppppbVar20 = pppppppbVar22[2];
    cStack_a1 = 1;
    uStack_a2 = 1;
    ppppppbStack_120 = (byte ******)pdb_140f3ecf0(pppppppbVar22[1]);
    pppppppbStack_3b8 = &ppppppbStack_120;
    pppppppbStack_3b0 = (byte *******)pdb_141186230;
    pppppppbStack_208 = (byte *******)0x0;
    pppppppbStack_200 = (byte *******)&UNK_14329f733;
    uStack_1f8 = 0x13;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    iStack_1ec = 0;
    uStack_1e8 = 0xe;
    uStack_1e7 = 0x14329f5;
    ppppppbStack_1e0 = (byte ******)0x27;
    auStack_1d8._8_8_ = &UNK_14329f733;
    auStack_1d8._0_8_ = 3;
    ppppppbStack_1c8 = (byte ******)0x13;
    uStack_1c0 = 0x21700000001;
    puStack_1b8 = &UNK_14329f861;
    pppppppbStack_1b0 = (byte *******)&pppppppbStack_3b8;
    cStack_a1 = 1;
    uStack_a2 = 1;
    ppppppbStack_118 = ppppppbVar20;
    uVar18 = pdb_140f332f0(&uStack_a4,&pppppppbStack_208);
  }
  pppppppbStack_b0 =
       (byte *******)CONCAT44(pppppppbStack_b0._4_4_,(int)CONCAT71((int7)(uVar18 >> 8),1));
code_r0x000141198041:
  *puStack_440 = 1;
  pppppppbStack_378 = pppppppbStack_228;
  ppppppbStack_370 = ppppppbStack_220;
  ppppppbStack_388 = ppppppbStack_238;
  pcStack_380 = pcStack_230;
  pppppppbStack_398 = pppppppbStack_248;
  ppppppbStack_390 = ppppppbStack_240;
  uStack_368 = uStack_498;
  uStack_360 = uStack_490;
  uStack_1f0 = 0;
  iStack_1ec = -0x80000000;
  pppppppbStack_208 = (byte *******)0x0;
  pppppppbStack_200 = (byte *******)0x8;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  pcStack_3a0 = (code *)0x8000000000000003;
  pppppppbStack_3b8 = (byte *******)0x0;
  pppppppbStack_3b0 = (byte *******)0x8;
  ppppppbStack_3a8 = (byte ******)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  pdb_1411b0760(uStack_438,&pppppppbStack_3b8,&UNK_14329f770);
  uVar18 = CONCAT44(iStack_1ec,uStack_1f0) ^ 0x8000000000000000;
  if (-1 < iStack_1ec) {
    uVar18 = 4;
  }
  if (2 < uVar18) {
    if (uVar18 == 3) {
      ppppppbStack_c8 = ppppppbStack_1c8;
      pdb_141180fc0();
      pub_1406abac0((byte *)ppppppbStack_c8,0x140,8);
      uVar18 = CONCAT71(uStack_1e7,uStack_1e8);
      ppppppbVar20 = ppppppbStack_1e0;
    }
    else {
      pdb_1404cc180(&uStack_1f0);
      uVar18 = uStack_150;
      ppppppbVar20 = ppppppbStack_148;
      if (SBORROW8(0,uStack_150)) goto code_r0x000141198542;
    }
    if (uVar18 != 0) {
      pub_1406abac0((byte *)ppppppbVar20,uVar18,1);
    }
  }
code_r0x000141198542:
  *(undefined4 *)puStack_430[2] = *(undefined4 *)((longlong)puStack_430 + 0x1c);
  *(undefined1 *)*puStack_430 = 2;
  *(undefined4 *)puStack_428[2] = *(undefined4 *)((longlong)puStack_428 + 0x1c);
  pppppppbStack_208 = (byte *******)0x2;
  cVar16 = (char)pppppppbStack_b0;
  uStack_a2 = 0;
  cStack_a1 = cVar16;
  pdb_140a003a0(*puStack_428,&pppppppbStack_208);
  if ((cVar16 != '\0') && (pppppppbStack_3d8 != (byte *******)0x0)) {
    pub_1406abac0((byte *)ppppppbStack_3d0,(ulonglong)pppppppbStack_3d8,1);
  }
code_r0x0001411985b6:
  if (uStack_480 != 0) {
    pub_1406abac0(pbStack_478,uStack_480,1);
  }
code_r0x0001411985ce:
  plVar7 = (longlong *)*plStack_260;
  if (SBORROW8(0,*plVar7)) goto code_r0x000141198ab0;
  uVar19 = *(undefined8 *)(lVar21 + 8);
  uVar4 = *(undefined8 *)(lVar21 + 0x10);
  pdb_140f3ddd0(&pppppppbStack_418,plVar7[1],plVar7[2]);
  pdb_140f3ddd0(&pppppppbStack_248,uVar19,uVar4);
  if ((((ppppppbStack_410 == ppppppbStack_240) && (cStack_3e0 == cStack_210)) &&
      (cStack_3df == '\x02')) &&
     ((cStack_20f == '\x02' && ((byte)ppppppbStack_238 < 3 == bStack_408 < 3)))) {
    pppppppbVar25 = pppppppbStack_248;
    iVar17 = pub_142e32750(pppppppbStack_418);
    uVar28 = (uint)pppppppbVar25;
    if (iVar17 != 0) goto code_r0x000141198679;
  }
  else {
code_r0x000141198679:
    ppppppbStack_3a8 = (byte ******)CONCAT71(uStack_407,bStack_408);
    pcStack_380 = (code *)CONCAT62(uStack_3de,CONCAT11(cStack_3df,cStack_3e0));
    ppppppbStack_388 = ppppppbStack_3e8;
    pppppppbStack_398 = pppppppbStack_3f8;
    ppppppbStack_390 = ppppppbStack_3f0;
    pcStack_3a0 = pcStack_400;
    pppppppbStack_3b8 = pppppppbStack_418;
    pppppppbStack_3b0 = (byte *******)ppppppbStack_410;
    auStack_1d8[8] = cStack_210;
    auStack_1d8._0_8_ = uStack_218;
    auStack_1d8[9] = cStack_20f;
    auStack_1d8._10_6_ = uStack_20e;
    uStack_1e8 = SUB81(pppppppbStack_228,0);
    uStack_1e7 = (undefined7)((ulonglong)pppppppbStack_228 >> 8);
    ppppppbStack_1e0 = ppppppbStack_220;
    uStack_1f8 = SUB84(ppppppbStack_238,0);
    uStack_1f4 = (undefined4)((ulonglong)ppppppbStack_238 >> 0x20);
    uStack_1f0 = SUB84(pcStack_230,0);
    iStack_1ec = (int)((ulonglong)pcStack_230 >> 0x20);
    pppppppbStack_208 = pppppppbStack_248;
    pppppppbStack_200 = (byte *******)ppppppbStack_240;
    uVar28 = (uint)&pppppppbStack_208;
    cVar16 = pdb_1411a4c10(&pppppppbStack_3b8);
    if (cVar16 == '\0') goto code_r0x000141198ab0;
  }
  uVar18 = pdb_140f3c9d0();
  pppppppbVar25 = pppppppbStack_288;
  bVar11 = uVar18 < (ulonglong)plVar7[7];
  if (plVar7[7] == uVar18) {
    bVar11 = uVar28 < *(uint *)(plVar7 + 8);
  }
  if (bVar11) {
    pppppppbStack_208 = (byte *******)&UNK_14329f7ff;
    pppppppbStack_200 = (byte *******)0xf;
    uVar18 = pdb_140bbbcb0(&pppppppbStack_208);
    ppppppbVar26 = (byte ******)(uVar18 ^ 0xb1695320004fb443);
    ppppppbVar20 = ppppppbVar26;
    lVar21 = pdb_14072c2d0(pppppppbVar25);
    *(undefined1 *)(lVar21 + 0x5e) = 0;
    *(undefined1 *)(lVar21 + 0xcb) = 1;
    if (((ulonglong)ppppppbVar20 & 1) == 0) {
      ppppppbVar20 = pppppppbVar25[2];
      if (ppppppbVar20 == *pppppppbVar25) {
        pdb_142d7f080(pppppppbVar25);
      }
      ppppppbVar8 = pppppppbVar25[1];
      ppppppbVar8[(longlong)ppppppbVar20 * 7] = (byte *****)0x3;
      ppppppbVar8[(longlong)ppppppbVar20 * 7 + 2] = (byte *****)pppppppbStack_420;
      ppppppbVar8[(longlong)ppppppbVar20 * 7 + 3] = pppppbVar14;
      (ppppppbVar8 + (longlong)ppppppbVar20 * 7 + 3)[1] = pppppbVar15;
      ppppppbVar8[(longlong)ppppppbVar20 * 7 + 5] = pppppbVar13;
      ppppppbVar8[(longlong)ppppppbVar20 * 7 + 6] = (byte *****)ppppppbVar26;
      pppppppbVar25[2] = (byte ******)((longlong)ppppppbVar20 + 1);
    }
    pppppppbStack_248 = pppppppbVar25;
    ppppppbStack_238 = (byte ******)0x0;
    ppppppbStack_240 = ppppppbVar26;
    if (pppppppbVar25[0x39] != (byte ******)0x0) {
      uVar18 = pdb_1400af0a0(pppppppbVar25 + 0x3a,&ppppppbStack_240);
      pppppppbVar5 = pppppppbStack_248;
      ppppppbVar20 = pppppppbVar25[0x36];
      pppppppbVar25 = (byte *******)pppppppbVar25[0x37];
      bVar33 = (byte)(uVar18 >> 0x39);
      auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
      auVar34 = pshuflw(auVar34,auVar34,0);
      lVar21 = 0;
      while( true ) {
        uVar18 = uVar18 & (ulonglong)pppppppbVar25;
        auVar46 = *(undefined1 (*) [16])((longlong)ppppppbVar20 + uVar18);
        auVar44[0] = -(auVar46[0] == auVar34[0]);
        auVar44[1] = -(auVar46[1] == auVar34[1]);
        auVar44[2] = -(auVar46[2] == auVar34[2]);
        auVar44[3] = -(auVar46[3] == auVar34[3]);
        auVar44[4] = -(auVar46[4] == auVar34[4]);
        auVar44[5] = -(auVar46[5] == auVar34[5]);
        auVar44[6] = -(auVar46[6] == auVar34[6]);
        auVar44[7] = -(auVar46[7] == auVar34[7]);
        auVar44[8] = -(auVar46[8] == auVar34[0]);
        auVar44[9] = -(auVar46[9] == auVar34[1]);
        auVar44[10] = -(auVar46[10] == auVar34[2]);
        auVar44[0xb] = -(auVar46[0xb] == auVar34[3]);
        auVar44[0xc] = -(auVar46[0xc] == auVar34[4]);
        auVar44[0xd] = -(auVar46[0xd] == auVar34[5]);
        auVar44[0xe] = -(auVar46[0xe] == auVar34[6]);
        auVar44[0xf] = -(auVar46[0xf] == auVar34[7]);
        uVar30 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf
        ;
        uVar28 = (uint)uVar30;
        while (uVar30 != 0) {
          uVar24 = 0;
          for (uVar10 = uVar28; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar24 = uVar24 + 1;
          }
          uVar32 = uVar24 + uVar18 & (ulonglong)pppppppbVar25;
          if (ppppppbVar26 == (byte ******)ppppppbVar20[uVar32 * -0x1b + -0x1b]) {
            pppppppbVar22 = (byte *******)(ppppppbVar20 + uVar32 * -0x1b);
            *(undefined4 *)((longlong)pppppppbVar22 + -0x14) = 0x42c80000;
            if ((bStack_b2 & 1) != 0) goto code_r0x0001411989d9;
            if (pppppppbStack_248[0x39] == (byte ******)0x0) goto code_r0x000141198ccc;
            uVar18 = pdb_1400af0a0(pppppppbStack_248 + 0x3a,&ppppppbStack_240);
            ppppppbVar20 = pppppppbVar5[0x36];
            ppppppbVar26 = pppppppbVar5[0x37];
            bVar33 = (byte)(uVar18 >> 0x39);
            auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
            auVar34 = pshuflw(auVar34,auVar34,0);
            lVar21 = 0;
            goto code_r0x00014119895b;
          }
          uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
          uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
        }
        auVar38[0] = -(auVar46[0] == cVar47);
        auVar38[1] = -(auVar46[1] == cVar48);
        auVar38[2] = -(auVar46[2] == cVar49);
        auVar38[3] = -(auVar46[3] == cVar50);
        auVar38[4] = -(auVar46[4] == cVar51);
        auVar38[5] = -(auVar46[5] == cVar52);
        auVar38[6] = -(auVar46[6] == cVar53);
        auVar38[7] = -(auVar46[7] == cVar54);
        auVar38[8] = -(auVar46[8] == cVar55);
        auVar38[9] = -(auVar46[9] == cVar56);
        auVar38[10] = -(auVar46[10] == cVar57);
        auVar38[0xb] = -(auVar46[0xb] == cVar58);
        auVar38[0xc] = -(auVar46[0xc] == cVar59);
        auVar38[0xd] = -(auVar46[0xd] == cVar60);
        auVar38[0xe] = -(auVar46[0xe] == cVar61);
        auVar38[0xf] = -(auVar46[0xf] == cVar62);
        if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar38 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar38 >> 0x1f,0) & 1) != 0) || (SUB161(auVar38 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') break;
        uVar18 = uVar18 + lVar21 + 0x10;
        lVar21 = lVar21 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  puVar6 = (ulonglong *)*plStack_260;
  uVar18 = *puVar6;
  if (!SBORROW8(0,uVar18)) {
    if (uVar18 != 0) {
      pub_1406abac0((byte *)puVar6[1],uVar18,1);
    }
    if (puVar6[4] != 0) {
      pub_1406abac0((byte *)puVar6[5],puVar6[4],1);
    }
  }
  *puVar6 = 0x8000000000000000;
code_r0x000141198ab0:
  pppppppbStack_248 = (byte *******)ppppppbStack_e0;
  ppppppbStack_240 = (byte ******)pppppbStack_e8;
  pppppppbStack_208 = (byte *******)pdb_140bbbcb0(&pppppppbStack_248);
  pppppppbStack_200 = (byte *******)_DAT_14329c260;
  uStack_1f8 = (undefined4)_UNK_14329c268;
  uStack_1f4 = (undefined4)((ulonglong)_UNK_14329c268 >> 0x20);
  pppppppbStack_200 = (byte *******)pdb_1400affa0(&pppppppbStack_208);
  pppppppbStack_208 = pppppppbStack_280;
  uVar19 = pdb_1400b0130(&pppppppbStack_208);
  pdb_14072caa0(&pppppppbStack_208,&pppppppbStack_288,uVar19);
  uVar19 = pdb_14116ee90(&pppppppbStack_208,0);
  pdb_14119b6b0(uVar19,ppppppbStack_e0,pppppbStack_e8);
  ppppppbStack_3a8 = (byte ******)CONCAT44(uStack_1f4,uStack_1f8);
  pppppppbStack_3b8 = pppppppbStack_208;
  pppppppbStack_3b0 = pppppppbStack_200;
  uVar19 = pdb_14116e180(&pppppppbStack_3b8);
  pdb_14119b2b0(uVar19,uVar12);
  uStack_4b8 = ppppppbStack_3a8;
  pppppppbStack_4c8 = pppppppbStack_3b8;
  pppppppbStack_4c0 = pppppppbStack_3b0;
  if (lStack_d8 != 0) {
    pdb_140726690(&pppppppbStack_4c8,lStack_d8,uStack_100);
  }
  lVar21 = lStack_460;
  if (pppppppbStack_298 != (byte *******)0x0) {
    pub_1406abac0((byte *)pppppppbStack_268,(ulonglong)pppppppbStack_298,1);
  }
  goto code_r0x00014119700f;
code_r0x00014119895b:
  uVar18 = uVar18 & (ulonglong)ppppppbVar26;
  auVar46 = *(undefined1 (*) [16])((longlong)ppppppbVar20 + uVar18);
  auVar45[0] = -(auVar46[0] == auVar34[0]);
  auVar45[1] = -(auVar46[1] == auVar34[1]);
  auVar45[2] = -(auVar46[2] == auVar34[2]);
  auVar45[3] = -(auVar46[3] == auVar34[3]);
  auVar45[4] = -(auVar46[4] == auVar34[4]);
  auVar45[5] = -(auVar46[5] == auVar34[5]);
  auVar45[6] = -(auVar46[6] == auVar34[6]);
  auVar45[7] = -(auVar46[7] == auVar34[7]);
  auVar45[8] = -(auVar46[8] == auVar34[0]);
  auVar45[9] = -(auVar46[9] == auVar34[1]);
  auVar45[10] = -(auVar46[10] == auVar34[2]);
  auVar45[0xb] = -(auVar46[0xb] == auVar34[3]);
  auVar45[0xc] = -(auVar46[0xc] == auVar34[4]);
  auVar45[0xd] = -(auVar46[0xd] == auVar34[5]);
  auVar45[0xe] = -(auVar46[0xe] == auVar34[6]);
  auVar45[0xf] = -(auVar46[0xf] == auVar34[7]);
  uVar30 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
  uVar28 = (uint)uVar30;
  pppppppbVar22 = (byte *******)&pppppppbStack_208;
  pppppppbVar25 = (byte *******)&pppppppbStack_3b8;
  if (uVar30 != 0) {
code_r0x000141198984:
    uVar24 = 0;
    for (uVar10 = uVar28; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar24 = uVar24 + 1;
    }
    uVar32 = uVar24 + uVar18 & (ulonglong)ppppppbVar26;
    if (ppppppbStack_240 != (byte ******)ppppppbVar20[uVar32 * -0x1b + -0x1b])
    goto code_r0x0001411989a3;
    if ((*(byte *)((longlong)ppppppbVar20 + uVar32 * -0xd8 + -6) & 1) != 0) {
code_r0x0001411989d9:
      uVar24 = (uint)pppppppbVar25;
      uVar18 = plVar7[7];
      uVar28 = *(uint *)(plVar7 + 8);
      uVar19 = pdb_140f3c9d0(pppppppbVar22);
      uVar32 = pdb_140f5a1d0(uVar19);
      bVar11 = uVar24 < uVar28;
      if (uVar32 != uVar18) {
        bVar11 = uVar32 < uVar18;
      }
      if (bVar11) {
        uVar32 = uVar18;
        uVar24 = uVar28;
      }
      plVar7[7] = uVar32;
      *(uint *)(plVar7 + 8) = uVar24;
    }
    ppppppbStack_3a8 = ppppppbStack_238;
    pppppppbStack_3b8 = pppppppbStack_248;
    pppppppbStack_3b0 = (byte *******)ppppppbStack_240;
    pppppppbStack_418 = (byte *******)plVar7[5];
    ppppppbStack_410 = (byte ******)plVar7[6];
    in_stack_fffffffffffffb08 = (byte ******)0x0;
    pdb_141174160(&pppppppbStack_208,&pppppppbStack_3b8,&UNK_1434d9d1b,0x16,0);
    pdb_14118f670(&pppppppbStack_208,&UNK_1434d9d31,6);
    pdb_14118e580(&pppppppbStack_208,&UNK_1434d9d37,5,&pppppppbStack_418);
    goto code_r0x000141198ab0;
  }
code_r0x0001411989b0:
  auVar39[0] = -(auVar46[0] == cVar47);
  auVar39[1] = -(auVar46[1] == cVar48);
  auVar39[2] = -(auVar46[2] == cVar49);
  auVar39[3] = -(auVar46[3] == cVar50);
  auVar39[4] = -(auVar46[4] == cVar51);
  auVar39[5] = -(auVar46[5] == cVar52);
  auVar39[6] = -(auVar46[6] == cVar53);
  auVar39[7] = -(auVar46[7] == cVar54);
  auVar39[8] = -(auVar46[8] == cVar55);
  auVar39[9] = -(auVar46[9] == cVar56);
  auVar39[10] = -(auVar46[10] == cVar57);
  auVar39[0xb] = -(auVar46[0xb] == cVar58);
  auVar39[0xc] = -(auVar46[0xc] == cVar59);
  auVar39[0xd] = -(auVar46[0xd] == cVar60);
  auVar39[0xe] = -(auVar46[0xe] == cVar61);
  auVar39[0xf] = -(auVar46[0xf] == cVar62);
  if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x37,0) & 1) != 0) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') {
code_r0x000141198ccc:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b00);
  }
  uVar18 = uVar18 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto code_r0x00014119895b;
code_r0x0001411989a3:
  uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
  uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
  if (uVar30 == 0) goto code_r0x0001411989b0;
  goto code_r0x000141198984;
code_r0x00014119700f:
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffb08 >> 0x20);
  if (lVar21 == lVar27) {
    return;
  }
  pdb_140dea010(&uStack_2c8,*(undefined4 *)(lVar21 + 0x20),*(undefined4 *)(lVar21 + 0x24));
  in_stack_fffffffffffffb08 =
       (byte ******)CONCAT44(uVar23,(uint)uStack_2bc * 0x100 + (uint)bStack_2ba * 0x1000000 + 1);
  pdb_142321560(&pppppppbStack_208,&UNK_14329f2d8,uStack_2c8,uStack_2c4,in_stack_fffffffffffffb08);
  if ((int)pppppppbStack_208 == 1) {
    ppppppbStack_3a8 = (byte ******)CONCAT44(iStack_1ec,uStack_1f0);
    pppppppbStack_3b0 = (byte *******)CONCAT44(uStack_1f4,uStack_1f8);
    pppppppbStack_3b8 = pppppppbStack_200;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14329eaa8,0x2b,&pppppppbStack_3b8,&UNK_14329ea88,&UNK_14329f620);
  }
  pppppppbStack_298 = pppppppbStack_200;
  pppppppbStack_268 = (byte *******)CONCAT44(uStack_1f4,uStack_1f8);
  ppppppbStack_240 = (byte ******)CONCAT44(iStack_1ec,uStack_1f0);
  pppppppbVar25 = (byte *******)param_2[1];
  pppppppbStack_248 = pppppppbStack_268;
  pppppppbStack_208 = (byte *******)pdb_140bbbcb0(&pppppppbStack_248);
  pppppppbStack_200 = (byte *******)_DAT_14329c330;
  uStack_1f8 = (undefined4)_UNK_14329c338;
  uStack_1f4 = (undefined4)((ulonglong)_UNK_14329c338 >> 0x20);
  pppppppbStack_200 = (byte *******)pdb_1400affa0(&pppppppbStack_208);
  pppppppbStack_208 = pppppppbVar25;
  uVar19 = pdb_1400b0130(&pppppppbStack_208);
  pdb_14072caa0(&pppppppbStack_3b8,param_2,uVar19);
  pppppppbVar25 = pppppppbStack_3b8;
  if (pppppppbStack_3b8[0x39] != (byte ******)0x0) {
    uVar18 = pdb_1400af0a0(pppppppbStack_3b8 + 0x3a,&pppppppbStack_3b0);
    pppppppbVar5 = pppppppbStack_3b8;
    lStack_460 = lVar21 + 0x30;
    ppppppbVar20 = pppppppbVar25[0x36];
    ppppppbVar26 = pppppppbVar25[0x37];
    bVar33 = (byte)(uVar18 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar34 = pshuflw(auVar34,auVar34,0);
    lVar29 = 0;
    while( true ) {
      uVar18 = uVar18 & (ulonglong)ppppppbVar26;
      auVar46 = *(undefined1 (*) [16])((longlong)ppppppbVar20 + uVar18);
      auVar41[0] = -(auVar46[0] == auVar34[0]);
      auVar41[1] = -(auVar46[1] == auVar34[1]);
      auVar41[2] = -(auVar46[2] == auVar34[2]);
      auVar41[3] = -(auVar46[3] == auVar34[3]);
      auVar41[4] = -(auVar46[4] == auVar34[4]);
      auVar41[5] = -(auVar46[5] == auVar34[5]);
      auVar41[6] = -(auVar46[6] == auVar34[6]);
      auVar41[7] = -(auVar46[7] == auVar34[7]);
      auVar41[8] = -(auVar46[8] == auVar34[0]);
      auVar41[9] = -(auVar46[9] == auVar34[1]);
      auVar41[10] = -(auVar46[10] == auVar34[2]);
      auVar41[0xb] = -(auVar46[0xb] == auVar34[3]);
      auVar41[0xc] = -(auVar46[0xc] == auVar34[4]);
      auVar41[0xd] = -(auVar46[0xd] == auVar34[5]);
      auVar41[0xe] = -(auVar46[0xe] == auVar34[6]);
      auVar41[0xf] = -(auVar46[0xf] == auVar34[7]);
      uVar30 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
      uVar28 = (uint)uVar30;
      while (uVar30 != 0) {
        uVar24 = 0;
        for (uVar10 = uVar28; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
        uVar32 = uVar24 + uVar18 & (ulonglong)ppppppbVar26;
        lVar31 = uVar32 * -0xd8;
        if (pppppppbStack_3b0 == (byte *******)ppppppbVar20[uVar32 * -0x1b + -0x1b]) {
          ppppppbVar20[uVar32 * -0x1b + -0x15] = (byte *****)0x0;
          ppppppbVar20[uVar32 * -0x1b + -0x14] = (byte *****)0x0;
          ppppppbVar20[uVar32 * -0x1b + -0x17] = (byte *****)0x0;
          ppppppbVar20[uVar32 * -0x1b + -0x16] = (byte *****)0x0;
          ppppppbVar20[uVar32 * -0x1b + -0x13] = (byte *****)0x4120000000000000;
          ppppppbVar20[uVar32 * -0x1b + -0x12] = (byte *****)0x0;
          ppppppbVar20[uVar32 * -0x1b + -0x11] = (byte *****)0x0;
          *(undefined8 *)((longlong)ppppppbVar20 + lVar31 + -0x81) = 0;
          *(undefined8 *)((longlong)ppppppbVar20 + lVar31 + -0x79) = 0;
          *(undefined1 *)((longlong)ppppppbVar20 + lVar31 + -0x71) = 4;
          uStack_278 = ppppppbStack_3a8;
          pppppppbStack_288 = pppppppbStack_3b8;
          pppppppbStack_280 = pppppppbStack_3b0;
          if (pppppppbStack_3b8[0x39] == (byte ******)0x0) goto LAB_141198c35;
          pppppppbStack_420 = pppppppbStack_3b0;
          uVar18 = pdb_1400af0a0(pppppppbStack_3b8 + 0x3a,&pppppppbStack_280);
          ppppppbVar20 = pppppppbVar5[0x36];
          ppppppbVar26 = pppppppbVar5[0x37];
          bVar33 = (byte)(uVar18 >> 0x39);
          auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
          auVar34 = pshuflw(auVar34,auVar34,0);
          lVar29 = 0;
          goto LAB_14119728c;
        }
        uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
        uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
      }
      auVar35[0] = -(auVar46[0] == cVar47);
      auVar35[1] = -(auVar46[1] == cVar48);
      auVar35[2] = -(auVar46[2] == cVar49);
      auVar35[3] = -(auVar46[3] == cVar50);
      auVar35[4] = -(auVar46[4] == cVar51);
      auVar35[5] = -(auVar46[5] == cVar52);
      auVar35[6] = -(auVar46[6] == cVar53);
      auVar35[7] = -(auVar46[7] == cVar54);
      auVar35[8] = -(auVar46[8] == cVar55);
      auVar35[9] = -(auVar46[9] == cVar56);
      auVar35[10] = -(auVar46[10] == cVar57);
      auVar35[0xb] = -(auVar46[0xb] == cVar58);
      auVar35[0xc] = -(auVar46[0xc] == cVar59);
      auVar35[0xd] = -(auVar46[0xd] == cVar60);
      auVar35[0xe] = -(auVar46[0xe] == cVar61);
      auVar35[0xf] = -(auVar46[0xf] == cVar62);
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      uVar18 = uVar18 + lVar29 + 0x10;
      lVar29 = lVar29 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
}

