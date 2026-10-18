// VA 0x142810770, PDB extent 9460 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_current_decorators_in_storage<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_current_decorators_in_storage<ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 9460 */

void pdb_142810770(longlong *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined8 param_4,undefined8 *param_5,undefined1 (*param_6) [16],
                  longlong *param_7)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  uint uVar8;
  code *pcVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  byte *pbVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 (*pauVar18) [16];
  code *unaff_RBX;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  undefined1 *puVar21;
  code *pcVar22;
  ushort uVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte unaff_R15B;
  byte bVar26;
  undefined8 uVar27;
  bool bVar28;
  byte bVar29;
  undefined1 auVar30 [16];
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
  undefined8 unaff_XMM6_Qa;
  longlong unaff_XMM6_Qb;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined1 (*pauStack_308) [16];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  longlong lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  longlong lStack_2d0;
  ulonglong uStack_2c8;
  undefined1 (*pauStack_2c0) [16];
  undefined1 (*pauStack_2b8) [16];
  code *pcStack_2b0;
  undefined8 uStack_2a8;
  longlong lStack_2a0;
  ulonglong uStack_298;
  undefined1 (*pauStack_290) [16];
  undefined1 (*pauStack_288) [16];
  code *pcStack_280;
  undefined8 uStack_278;
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  int iStack_258;
  int iStack_254;
  undefined8 uStack_250;
  char cStack_248;
  undefined2 uStack_247;
  undefined1 uStack_245;
  undefined8 uStack_240;
  char cStack_238;
  undefined2 uStack_237;
  undefined1 uStack_235;
  longlong *plStack_230;
  undefined8 uStack_228;
  longlong *plStack_220;
  undefined1 (*pauStack_218) [16];
  code *pcStack_210;
  undefined8 uStack_208;
  longlong lStack_200;
  ulonglong uStack_1f8;
  undefined1 (*pauStack_1f0) [16];
  undefined1 (*pauStack_1e8) [16];
  code *pcStack_1e0;
  undefined8 uStack_1d8;
  longlong lStack_1d0;
  ulonglong uStack_1c8;
  undefined1 (*pauStack_1c0) [16];
  undefined1 (*pauStack_1b8) [16];
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  ulonglong uStack_198;
  undefined1 (*pauStack_190) [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong *plStack_150;
  undefined1 (*pauStack_148) [16];
  code *pcStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined1 (*pauStack_120) [16];
  undefined1 (*pauStack_118) [16];
  code *pcStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  code *pcStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined1 (*pauStack_a8) [16];
  longlong *plStack_a0;
  byte bStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  pauVar18 = param_2;
  pcVar9 = (code *)pdb_140c41030(param_4);
  if (pcVar9 == (code *)0x0) {
    if (-1 < (longlong)param_7) {
      if (param_7 == (longlong *)0x0) {
        pbVar12 = (byte *)0x1;
      }
      else {
        pdb_14007ee60();
        uVar27 = 1;
        pbVar12 = pub_1406abab0((ulonglong)param_7,1);
        if (pbVar12 == (byte *)0x0) goto LAB_14281094b;
        pub_142e32760(pbVar12,param_6,param_7);
        pauVar18 = param_6;
      }
      plStack_230 = param_7;
      plStack_220 = param_7;
      uStack_228 = pbVar12;
      puVar10 = (ulonglong *)pdb_14008d710(0);
      if (puVar10 == (ulonglong *)0x0) {
        pdb_142dc7890(&UNK_14359bf00);
        goto LAB_1428120f8;
      }
      uStack_1c8 = *puVar10;
      pauStack_1c0 = (undefined1 (*) [16])puVar10[1];
      *puVar10 = *puVar10 + 1;
      lVar25 = _UNK_1436471c8;
      uVar27 = _DAT_1436471c0;
      uStack_1d8 = _DAT_1436471c0;
      lStack_1d0 = _UNK_1436471c8;
      pauVar19 = (undefined1 (*) [16])CONCAT44(_UNK_1436471b4,_DAT_1436471b0);
      pcVar9 = (code *)CONCAT44(_UNK_1436471bc,_UNK_1436471b8);
      pauStack_1e8 = pauVar19;
      pcStack_1e0 = pcVar9;
      puVar10 = (ulonglong *)pdb_140f3bda0();
      if ((char)puVar10[2] == '\x01') {
        uStack_128 = *puVar10;
        pauVar18 = (undefined1 (*) [16])puVar10[1];
      }
      else {
        uStack_128 = pdb_140f4fd10();
        *puVar10 = uStack_128;
        puVar10[1] = (ulonglong)pauVar18;
        *(undefined1 *)(puVar10 + 2) = 1;
      }
      *puVar10 = uStack_128 + 1;
      lVar3 = _UNK_14359cbc8;
      uVar7 = _DAT_14359cbc0;
      pcVar22 = _UNK_14359cbb8;
      pauVar6 = _DAT_14359cbb0;
      uStack_138 = _DAT_14359cbc0;
      lStack_130 = _UNK_14359cbc8;
      pauStack_148 = _DAT_14359cbb0;
      pcStack_140 = _UNK_14359cbb8;
      pauStack_120 = pauVar18;
      plVar13 = (longlong *)pdb_14008d710(0);
      if (plVar13 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14359bf00);
        goto LAB_1428120f8;
      }
      lStack_268 = *plVar13;
      lStack_260 = plVar13[1];
      *plVar13 = *plVar13 + 1;
      uStack_298 = uStack_1c8;
      pauStack_290 = pauStack_1c0;
      uStack_2a8 = uStack_1d8;
      lStack_2a0 = lStack_1d0;
      pauStack_2b8 = pauStack_1e8;
      pcStack_2b0 = pcStack_1e0;
      uStack_2e8 = pauStack_148;
      uStack_2e0 = pcStack_140;
      uStack_2d8 = uStack_138;
      lStack_2d0 = lStack_130;
      uStack_2c8 = uStack_128;
      pauStack_2c0 = pauStack_120;
      uStack_278 = uVar27;
      lStack_270 = lVar25;
      pauStack_1e8 = (undefined1 (*) [16])&plStack_230;
      pcStack_1e0 = pdb_140001020;
      pauStack_288 = pauVar19;
      pcStack_280 = pcVar9;
      pdb_140f60760(&pauStack_148,&UNK_14359cb90,&pauStack_1e8);
      uStack_b8 = *param_5;
      plVar13 = (longlong *)param_5[4];
      if (param_2 == (undefined1 (*) [16])0x2) {
        if (param_1[0x2a] == 0) {
          pcStack_b0 = pcStack_140;
          pauStack_a8 = pauStack_148;
          pauVar18 = pauStack_148;
          puVar10 = (ulonglong *)pdb_14008d710(0);
          if (puVar10 == (ulonglong *)0x0) {
            pdb_142dc7890(&UNK_14359bf00);
            goto LAB_1428120f8;
          }
          uStack_1f8 = *puVar10;
          pauStack_1f0 = (undefined1 (*) [16])puVar10[1];
          *puVar10 = *puVar10 + 1;
          uStack_208 = uVar27;
          lStack_200 = lVar25;
          pauStack_218 = pauVar19;
          pcStack_210 = pcVar9;
          puVar10 = (ulonglong *)pdb_140f3bda0();
          if ((char)puVar10[2] == '\x01') {
            uStack_1c8 = *puVar10;
            pauVar18 = (undefined1 (*) [16])puVar10[1];
          }
          else {
            uStack_1c8 = pdb_140f4fd10();
            *puVar10 = uStack_1c8;
            puVar10[1] = (ulonglong)pauVar18;
            *(undefined1 *)(puVar10 + 2) = 1;
          }
          *puVar10 = uStack_1c8 + 1;
          uStack_1d8 = uVar7;
          lStack_1d0 = lVar3;
          pauStack_1e8 = pauVar6;
          pcStack_1e0 = pcVar22;
          pauStack_1c0 = pauVar18;
          plVar11 = (longlong *)pdb_14008d710(0);
          if (plVar11 == (longlong *)0x0) {
            pdb_142dc7890(&UNK_14359bf00);
            goto LAB_1428120f8;
          }
          lStack_c8 = *plVar11;
          lStack_c0 = plVar11[1];
          *plVar11 = *plVar11 + 1;
          uStack_f8 = uStack_1f8;
          pauStack_f0 = pauStack_1f0;
          uStack_108 = uStack_208;
          lStack_100 = lStack_200;
          pauStack_118 = pauStack_218;
          pcStack_110 = pcStack_210;
          pauStack_148 = pauStack_1e8;
          pcStack_140 = pcStack_1e0;
          uStack_138 = uStack_1d8;
          lStack_130 = lStack_1d0;
          uStack_128 = uStack_1c8;
          pauStack_120 = pauStack_1c0;
          uStack_d8 = uVar27;
          lStack_d0 = lVar25;
          pauStack_e8 = pauVar19;
          pcStack_e0 = pcVar9;
          pdb_142b0fb10(&pauStack_148,&uStack_2e8);
          plVar11 = param_1 + 0x2a;
          goto LAB_142811722;
        }
LAB_142811510:
        pcVar9 = pcStack_140;
        pauVar18 = pauStack_148;
        if (pauStack_148 == (undefined1 (*) [16])0x0) goto LAB_142811e19;
      }
      else {
        if (param_2 == (undefined1 (*) [16])0x1) {
          if (param_1[0x18] != 0) goto LAB_142811510;
          pcStack_b0 = pcStack_140;
          pauStack_a8 = pauStack_148;
          pauVar18 = pauStack_148;
          puVar10 = (ulonglong *)pdb_14008d710(0);
          if (puVar10 == (ulonglong *)0x0) {
            pdb_142dc7890(&UNK_14359bf00);
            goto LAB_1428120f8;
          }
          uStack_1f8 = *puVar10;
          pauStack_1f0 = (undefined1 (*) [16])puVar10[1];
          *puVar10 = *puVar10 + 1;
          uStack_208 = uVar27;
          lStack_200 = lVar25;
          pauStack_218 = pauVar19;
          pcStack_210 = pcVar9;
          puVar10 = (ulonglong *)pdb_140f3bda0();
          if ((char)puVar10[2] == '\x01') {
            uStack_1c8 = *puVar10;
            pauVar18 = (undefined1 (*) [16])puVar10[1];
          }
          else {
            uStack_1c8 = pdb_140f4fd10();
            *puVar10 = uStack_1c8;
            puVar10[1] = (ulonglong)pauVar18;
            *(undefined1 *)(puVar10 + 2) = 1;
          }
          *puVar10 = uStack_1c8 + 1;
          uStack_1d8 = uVar7;
          lStack_1d0 = lVar3;
          pauStack_1e8 = pauVar6;
          pcStack_1e0 = pcVar22;
          pauStack_1c0 = pauVar18;
          plVar11 = (longlong *)pdb_14008d710(0);
          if (plVar11 == (longlong *)0x0) {
            pdb_142dc7890(&UNK_14359bf00);
            goto LAB_1428120f8;
          }
          lStack_c8 = *plVar11;
          lStack_c0 = plVar11[1];
          *plVar11 = *plVar11 + 1;
          uStack_f8 = uStack_1f8;
          pauStack_f0 = pauStack_1f0;
          uStack_108 = uStack_208;
          lStack_100 = lStack_200;
          pauStack_118 = pauStack_218;
          pcStack_110 = pcStack_210;
          pauStack_148 = pauStack_1e8;
          pcStack_140 = pcStack_1e0;
          uStack_138 = uStack_1d8;
          lStack_130 = lStack_1d0;
          uStack_128 = uStack_1c8;
          pauStack_120 = pauStack_1c0;
          uStack_d8 = uVar27;
          lStack_d0 = lVar25;
          pauStack_e8 = pauVar19;
          pcStack_e0 = pcVar9;
          pdb_142b0fb10(&pauStack_148,&uStack_2e8);
          plVar11 = param_1 + 0x18;
LAB_142811722:
          plStack_a0 = param_1;
          pub_142e32760(&pauStack_1e8,&pauStack_148,0x90);
          if (pauStack_a8 != (undefined1 (*) [16])0x0) {
            pub_1406abac0((byte *)pcStack_b0,(ulonglong)pauStack_a8,1);
          }
          pub_142e32760(plVar11,&pauStack_1e8,0x90);
          bVar26 = 0;
        }
        else {
          pcStack_b0 = pcStack_140;
          pauStack_a8 = pauStack_148;
          bStack_91 = 1;
          pauStack_148 = param_3;
          plStack_a0 = param_1;
          puVar15 = (undefined1 *)pdb_140fc4ba0(param_1 + 4);
          bVar26 = (byte)((ulonglong)puVar15 >> 0x38);
          bVar29 = bVar26 >> 1;
          auVar30 = ZEXT216(CONCAT11(bVar29,bVar29));
          auVar30 = pshuflw(auVar30,auVar30,0);
          pauVar18 = (undefined1 (*) [16])0x0;
          puVar21 = puVar15;
          while( true ) {
            uVar14 = (ulonglong)puVar21 & plStack_a0[1];
            pcVar1 = (char *)(*plStack_a0 + uVar14);
            auVar42[0] = -(*pcVar1 == auVar30[0]);
            auVar42[1] = -(pcVar1[1] == auVar30[1]);
            auVar42[2] = -(pcVar1[2] == auVar30[2]);
            auVar42[3] = -(pcVar1[3] == auVar30[3]);
            auVar42[4] = -(pcVar1[4] == auVar30[4]);
            auVar42[5] = -(pcVar1[5] == auVar30[5]);
            auVar42[6] = -(pcVar1[6] == auVar30[6]);
            auVar42[7] = -(pcVar1[7] == auVar30[7]);
            auVar42[8] = -(pcVar1[8] == auVar30[0]);
            auVar42[9] = -(pcVar1[9] == auVar30[1]);
            auVar42[10] = -(pcVar1[10] == auVar30[2]);
            auVar42[0xb] = -(pcVar1[0xb] == auVar30[3]);
            auVar42[0xc] = -(pcVar1[0xc] == auVar30[4]);
            auVar42[0xd] = -(pcVar1[0xd] == auVar30[5]);
            auVar42[0xe] = -(pcVar1[0xe] == auVar30[6]);
            auVar42[0xf] = -(pcVar1[0xf] == auVar30[7]);
            uVar23 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar42[0xf] >> 7) << 0xf;
            uVar8 = (uint)uVar23;
            while (uVar23 != 0) {
              uVar17 = 0;
              for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar17 = uVar17 + 1;
              }
              if (*(undefined1 (**) [16])
                   (*plStack_a0 + -0x98 + (uVar17 + uVar14 & plStack_a0[1]) * -0x98) == param_3) {
                bVar28 = pauStack_a8 == (undefined1 (*) [16])0x0;
                goto LAB_142811e04;
              }
              uVar23 = (ushort)(uVar8 - 1) & (ushort)uVar8;
              uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar23);
            }
            auVar38[0] = -(*pcVar1 == -1);
            auVar38[1] = -(pcVar1[1] == -1);
            auVar38[2] = -(pcVar1[2] == -1);
            auVar38[3] = -(pcVar1[3] == -1);
            auVar38[4] = -(pcVar1[4] == -1);
            auVar38[5] = -(pcVar1[5] == -1);
            auVar38[6] = -(pcVar1[6] == -1);
            auVar38[7] = -(pcVar1[7] == -1);
            auVar38[8] = -(pcVar1[8] == -1);
            auVar38[9] = -(pcVar1[9] == -1);
            auVar38[10] = -(pcVar1[10] == -1);
            auVar38[0xb] = -(pcVar1[0xb] == -1);
            auVar38[0xc] = -(pcVar1[0xc] == -1);
            auVar38[0xd] = -(pcVar1[0xd] == -1);
            auVar38[0xe] = -(pcVar1[0xe] == -1);
            auVar38[0xf] = -(pcVar1[0xf] == -1);
            uVar23 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar38[0xf] >> 7) << 0xf;
            if (uVar23 != 0) break;
            puVar21 = pauVar18[1] + uVar14;
            pauVar18 = pauVar18 + 1;
          }
          if (plStack_a0[2] == 0) {
            bStack_91 = 1;
            pauVar18 = (undefined1 (*) [16])0x1;
            pdb_142dadf10(plStack_a0,1,param_1 + 4,CONCAT71((uint7)(byte)(uVar23 >> 8),1));
          }
          bStack_91 = 1;
          puVar10 = (ulonglong *)pdb_14008d710(0);
          if (puVar10 == (ulonglong *)0x0) {
            bStack_91 = 1;
            pdb_142dc7890(&UNK_14359bf00);
            goto LAB_1428120f8;
          }
          uStack_1f8 = *puVar10;
          pauStack_1f0 = (undefined1 (*) [16])puVar10[1];
          *puVar10 = *puVar10 + 1;
          uStack_208 = uVar27;
          lStack_200 = lVar25;
          pauStack_218 = pauVar19;
          pcStack_210 = pcVar9;
          puVar10 = (ulonglong *)pdb_140f3bda0();
          plVar11 = plStack_a0;
          if ((char)puVar10[2] == '\x01') {
            uStack_128 = *puVar10;
            pauVar18 = (undefined1 (*) [16])puVar10[1];
          }
          else {
            uStack_128 = pdb_140f4fd10();
            *puVar10 = uStack_128;
            puVar10[1] = (ulonglong)pauVar18;
            *(undefined1 *)(puVar10 + 2) = 1;
          }
          *puVar10 = uStack_128 + 1;
          uStack_138 = uVar7;
          lStack_130 = lVar3;
          pauStack_148 = pauVar6;
          pcStack_140 = pcVar22;
          pauStack_120 = pauVar18;
          plVar16 = (longlong *)pdb_14008d710(0);
          if (plVar16 == (longlong *)0x0) {
            pdb_142dc7890(&UNK_14359bf00);
            goto LAB_1428120f8;
          }
          lStack_168 = *plVar16;
          lStack_160 = plVar16[1];
          *plVar16 = *plVar16 + 1;
          uStack_198 = uStack_1f8;
          pauStack_190 = pauStack_1f0;
          uStack_1a8 = uStack_208;
          lStack_1a0 = lStack_200;
          pauStack_1b8 = pauStack_218;
          pcStack_1b0 = pcStack_210;
          pauStack_1e8 = pauStack_148;
          pcStack_1e0 = pcStack_140;
          uStack_1d8 = uStack_138;
          lStack_1d0 = lStack_130;
          uStack_1c8 = uStack_128;
          pauStack_1c0 = pauStack_120;
          uStack_178 = uVar27;
          lStack_170 = lVar25;
          uStack_188 = pauVar19;
          uStack_180 = pcVar9;
          pdb_142b0fb10(&pauStack_1e8,&uStack_2e8);
          pub_142e32760(&pauStack_148,&pauStack_1e8,0x90);
          pauVar18 = (undefined1 (*) [16])*plVar11;
          uVar14 = plVar11[1];
          uVar24 = (ulonglong)puVar15 & uVar14;
          auVar30 = *(undefined1 (*) [16])(*pauVar18 + uVar24);
          uVar23 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
          uVar8 = (uint)uVar23;
          if (uVar23 == 0) {
            lVar25 = 0x10;
            do {
              uVar24 = uVar24 + lVar25 & uVar14;
              auVar30 = *(undefined1 (*) [16])(*pauVar18 + uVar24);
              lVar25 = lVar25 + 0x10;
              uVar8 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
            } while (uVar8 == 0);
          }
          uVar17 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          uVar24 = uVar17 + uVar24 & uVar14;
          bVar29 = (*pauVar18)[uVar24];
          if (-1 < (char)bVar29) {
            auVar30 = *pauVar18;
            uVar8 = 0;
            for (uVar17 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                         (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                         (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                         (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                         (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                         (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                         (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                         (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                         (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                        (ushort)(byte)(auVar30[0xf] >> 7) << 0xf); (uVar17 & 1) == 0
                ; uVar17 = uVar17 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            uVar24 = (ulonglong)uVar8;
            bVar29 = (*pauVar18)[uVar24];
          }
          bVar26 = bVar26 >> 1;
          (*pauVar18)[uVar24] = bVar26;
          pauVar18[1][uVar24 - 0x10 & uVar14] = bVar26;
          *(undefined1 (**) [16])((longlong)pauVar18 + uVar24 * -0x98 + -0x98) = param_3;
          pub_142e32760((longlong)pauVar18 + uVar24 * -0x98 + -0x90,&pauStack_148,0x90);
          lVar25 = plVar11[3] - _UNK_142e47bf8;
          plVar11[2] = plVar11[2] - (ulonglong)(bVar29 & 1);
          plVar11[3] = lVar25;
          bVar26 = 1;
        }
        auVar30 = *pauStack_2b8;
        pauVar18 = pauStack_2b8 + 1;
        uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
        plStack_150 = plStack_a0 + 0xc;
        pauVar19 = pauStack_2b8;
        lVar25 = lStack_2a0;
LAB_142811b00:
        if (lVar25 != 0) {
          if ((short)uVar8 == 0) {
            do {
              auVar30 = *pauVar18;
              pauVar19 = pauVar19 + -0x68;
              pauVar18 = pauVar18 + 1;
              uVar8 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar8 == 0);
          }
          uVar17 = 0;
          for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          uVar8 = uVar8 - 1 & uVar8;
          lVar25 = lVar25 + -1;
          iVar2 = *(int *)((longlong)pauVar19 + (ulonglong)uVar17 * -0x68 + -0x68);
          iStack_254 = iVar2;
          if (plVar13[3] != 0) {
            bStack_91 = bVar26;
            uVar14 = pdb_140fc4e90(plVar13 + 4,&iStack_254);
            lVar3 = *plVar13;
            bVar29 = (byte)(uVar14 >> 0x39);
            auVar30 = ZEXT216(CONCAT11(bVar29,bVar29));
            auVar30 = pshuflw(auVar30,auVar30,0);
            lVar20 = 0;
            while( true ) {
              uVar14 = uVar14 & plVar13[1];
              auVar42 = *(undefined1 (*) [16])(lVar3 + uVar14);
              auVar39[0] = -(auVar42[0] == auVar30[0]);
              auVar39[1] = -(auVar42[1] == auVar30[1]);
              auVar39[2] = -(auVar42[2] == auVar30[2]);
              auVar39[3] = -(auVar42[3] == auVar30[3]);
              auVar39[4] = -(auVar42[4] == auVar30[4]);
              auVar39[5] = -(auVar42[5] == auVar30[5]);
              auVar39[6] = -(auVar42[6] == auVar30[6]);
              auVar39[7] = -(auVar42[7] == auVar30[7]);
              auVar39[8] = -(auVar42[8] == auVar30[0]);
              auVar39[9] = -(auVar42[9] == auVar30[1]);
              auVar39[10] = -(auVar42[10] == auVar30[2]);
              auVar39[0xb] = -(auVar42[0xb] == auVar30[3]);
              auVar39[0xc] = -(auVar42[0xc] == auVar30[4]);
              auVar39[0xd] = -(auVar42[0xd] == auVar30[5]);
              auVar39[0xe] = -(auVar42[0xe] == auVar30[6]);
              auVar39[0xf] = -(auVar42[0xf] == auVar30[7]);
              uVar23 = (ushort)(SUB161(auVar39 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
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
                       (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar39[0xf] >> 7) << 0xf;
              uVar17 = (uint)uVar23;
              while (uVar23 != 0) {
                uVar5 = 0;
                for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                uVar24 = uVar5 + uVar14 & plVar13[1];
                if (iVar2 == *(int *)(lVar3 + -0x18 + uVar24 * -0x18)) {
                  lVar3 = lVar3 + uVar24 * -0x18;
                  if (*(char *)(lVar3 + -4) == '\x11') goto LAB_142811b00;
                  uStack_240 = *(undefined8 *)(lVar3 + -0xc);
                  uStack_235 = *(undefined1 *)(lVar3 + -1);
                  uStack_237 = *(undefined2 *)(lVar3 + -3);
                  cStack_238 = *(char *)(lVar3 + -4);
                  bStack_91 = bVar26;
                  pdb_1409ed9b0(&pauStack_148,uStack_b8,&uStack_240);
                  if ((int)uStack_128 == 0) {
                    bStack_91 = bVar26;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14359caf0,99,&UNK_14359cb78);
                  }
                  uStack_2f8 = uStack_138;
                  lStack_2f0 = lStack_130;
                  pauStack_308 = pauStack_148;
                  uStack_300 = pcStack_140;
                  bStack_91 = bVar26;
                  puVar10 = (ulonglong *)
                            pdb_1409ef0f0(uStack_b8,uStack_128 & 0xffffffff,uStack_128._4_4_);
                  pcVar9 = (code *)puVar10[3];
                  LOCK();
                  lVar3 = *(longlong *)pcVar9;
                  *(longlong *)pcVar9 = *(longlong *)pcVar9 + 1;
                  UNLOCK();
                  if (*(longlong *)pcVar9 == 0 || SCARRY8(lVar3,1) != *(longlong *)pcVar9 < 0)
                  goto LAB_1428120f8;
                  pauStack_118 = (undefined1 (*) [16])puVar10[2];
                  uStack_128 = *puVar10;
                  pauStack_120 = (undefined1 (*) [16])puVar10[1];
                  uStack_138 = uStack_2f8;
                  lStack_130 = lStack_2f0;
                  pauStack_148 = pauStack_308;
                  pcStack_140 = uStack_300;
                  pcStack_110 = pcVar9;
                  bStack_91 = bVar26;
                  pdb_141f12bd0(&pauStack_1e8,plStack_150,iVar2,&pauStack_148);
                  if ((char)uStack_1c8 != '\x11') {
                    LOCK();
                    *(longlong *)pcStack_1b0 = *(longlong *)pcStack_1b0 + -1;
                    UNLOCK();
                    if (*(longlong *)pcStack_1b0 == 0) {
                      bStack_91 = bVar26;
                      pdb_140c7b7a0(&pcStack_1b0);
                    }
                  }
                  goto LAB_142811b00;
                }
                uVar23 = (ushort)(uVar17 - 1) & (ushort)uVar17;
                uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar23);
              }
              auVar33[0] = -(auVar42[0] == -1);
              auVar33[1] = -(auVar42[1] == -1);
              auVar33[2] = -(auVar42[2] == -1);
              auVar33[3] = -(auVar42[3] == -1);
              auVar33[4] = -(auVar42[4] == -1);
              auVar33[5] = -(auVar42[5] == -1);
              auVar33[6] = -(auVar42[6] == -1);
              auVar33[7] = -(auVar42[7] == -1);
              auVar33[8] = -(auVar42[8] == -1);
              auVar33[9] = -(auVar42[9] == -1);
              auVar33[10] = -(auVar42[10] == -1);
              auVar33[0xb] = -(auVar42[0xb] == -1);
              auVar33[0xc] = -(auVar42[0xc] == -1);
              auVar33[0xd] = -(auVar42[0xd] == -1);
              auVar33[0xe] = -(auVar42[0xe] == -1);
              auVar33[0xf] = -(auVar42[0xf] == -1);
              if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar33 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar33 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar33 >> 0x4f,0) & 1) != 0) || (SUB161(auVar33 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') break;
              uVar14 = uVar14 + lVar20 + 0x10;
              lVar20 = lVar20 + 0x10;
            }
          }
          goto LAB_142811b00;
        }
        auVar30 = *pauStack_2b8;
        pauVar18 = pauStack_2b8 + 1;
        uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
        plStack_a0 = plStack_a0 + 0x12;
        lVar25 = lStack_2a0;
        pauVar19 = pauStack_2b8;
LAB_142811d60:
        if (lVar25 != 0) {
          if ((short)uVar8 == 0) {
            do {
              auVar30 = *pauVar18;
              pauVar19 = pauVar19 + -0x68;
              pauVar18 = pauVar18 + 1;
              uVar8 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar8 == 0);
          }
          uVar17 = 0;
          for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          uVar8 = uVar8 - 1 & uVar8;
          lVar25 = lVar25 + -1;
          iVar2 = *(int *)((longlong)pauVar19 + (ulonglong)uVar17 * -0x68 + -0x68);
          iStack_258 = iVar2;
          if (plVar13[9] != 0) {
            bStack_91 = bVar26;
            uVar14 = pdb_140fc4e90(plVar13 + 10,&iStack_258);
            lVar3 = plVar13[6];
            bVar29 = (byte)(uVar14 >> 0x39);
            auVar30 = ZEXT216(CONCAT11(bVar29,bVar29));
            auVar30 = pshuflw(auVar30,auVar30,0);
            lVar20 = 0;
            while( true ) {
              uVar14 = uVar14 & plVar13[7];
              auVar42 = *(undefined1 (*) [16])(lVar3 + uVar14);
              auVar40[0] = -(auVar42[0] == auVar30[0]);
              auVar40[1] = -(auVar42[1] == auVar30[1]);
              auVar40[2] = -(auVar42[2] == auVar30[2]);
              auVar40[3] = -(auVar42[3] == auVar30[3]);
              auVar40[4] = -(auVar42[4] == auVar30[4]);
              auVar40[5] = -(auVar42[5] == auVar30[5]);
              auVar40[6] = -(auVar42[6] == auVar30[6]);
              auVar40[7] = -(auVar42[7] == auVar30[7]);
              auVar40[8] = -(auVar42[8] == auVar30[0]);
              auVar40[9] = -(auVar42[9] == auVar30[1]);
              auVar40[10] = -(auVar42[10] == auVar30[2]);
              auVar40[0xb] = -(auVar42[0xb] == auVar30[3]);
              auVar40[0xc] = -(auVar42[0xc] == auVar30[4]);
              auVar40[0xd] = -(auVar42[0xd] == auVar30[5]);
              auVar40[0xe] = -(auVar42[0xe] == auVar30[6]);
              auVar40[0xf] = -(auVar42[0xf] == auVar30[7]);
              uVar23 = (ushort)(SUB161(auVar40 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar40[0xf] >> 7) << 0xf;
              uVar17 = (uint)uVar23;
              while (uVar23 != 0) {
                uVar5 = 0;
                for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                uVar24 = uVar5 + uVar14 & plVar13[7];
                if (iVar2 == *(int *)(lVar3 + -0x18 + uVar24 * -0x18)) {
                  lVar3 = lVar3 + uVar24 * -0x18;
                  if (*(char *)(lVar3 + -4) == '\x11') goto LAB_142811d60;
                  uStack_250 = *(undefined8 *)(lVar3 + -0xc);
                  uStack_245 = *(undefined1 *)(lVar3 + -1);
                  uStack_247 = *(undefined2 *)(lVar3 + -3);
                  cStack_248 = *(char *)(lVar3 + -4);
                  bStack_91 = bVar26;
                  pdb_1409ed9b0(&pauStack_148,uStack_b8,&uStack_250);
                  if ((int)uStack_128 == 0) {
                    bStack_91 = bVar26;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14359caf0,99,&UNK_14359cb60);
                  }
                  uStack_208 = uStack_138;
                  lStack_200 = lStack_130;
                  pauStack_218 = pauStack_148;
                  pcStack_210 = pcStack_140;
                  bStack_91 = bVar26;
                  puVar10 = (ulonglong *)
                            pdb_1409ef0f0(uStack_b8,uStack_128 & 0xffffffff,uStack_128._4_4_);
                  pcVar9 = (code *)puVar10[3];
                  LOCK();
                  lVar3 = *(longlong *)pcVar9;
                  *(longlong *)pcVar9 = *(longlong *)pcVar9 + 1;
                  UNLOCK();
                  if (*(longlong *)pcVar9 == 0 || SCARRY8(lVar3,1) != *(longlong *)pcVar9 < 0)
                  goto LAB_1428120f8;
                  pauStack_118 = (undefined1 (*) [16])puVar10[2];
                  uStack_128 = *puVar10;
                  pauStack_120 = (undefined1 (*) [16])puVar10[1];
                  uStack_138 = uStack_208;
                  lStack_130 = lStack_200;
                  pauStack_148 = pauStack_218;
                  pcStack_140 = pcStack_210;
                  pcStack_110 = pcVar9;
                  bStack_91 = bVar26;
                  pdb_141f12bd0(&pauStack_1e8,plStack_a0,iVar2,&pauStack_148);
                  if ((char)uStack_1c8 != '\x11') {
                    LOCK();
                    *(longlong *)pcStack_1b0 = *(longlong *)pcStack_1b0 + -1;
                    UNLOCK();
                    if (*(longlong *)pcStack_1b0 == 0) {
                      bStack_91 = bVar26;
                      pdb_140c7b7a0(&pcStack_1b0);
                    }
                  }
                  goto LAB_142811d60;
                }
                uVar23 = (ushort)(uVar17 - 1) & (ushort)uVar17;
                uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar23);
              }
              auVar34[0] = -(auVar42[0] == -1);
              auVar34[1] = -(auVar42[1] == -1);
              auVar34[2] = -(auVar42[2] == -1);
              auVar34[3] = -(auVar42[3] == -1);
              auVar34[4] = -(auVar42[4] == -1);
              auVar34[5] = -(auVar42[5] == -1);
              auVar34[6] = -(auVar42[6] == -1);
              auVar34[7] = -(auVar42[7] == -1);
              auVar34[8] = -(auVar42[8] == -1);
              auVar34[9] = -(auVar42[9] == -1);
              auVar34[10] = -(auVar42[10] == -1);
              auVar34[0xb] = -(auVar42[0xb] == -1);
              auVar34[0xc] = -(auVar42[0xc] == -1);
              auVar34[0xd] = -(auVar42[0xd] == -1);
              auVar34[0xe] = -(auVar42[0xe] == -1);
              auVar34[0xf] = -(auVar42[0xf] == -1);
              if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x4f,0) & 1) != 0) || (SUB161(auVar34 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
              uVar14 = uVar14 + lVar20 + 0x10;
              lVar20 = lVar20 + 0x10;
            }
          }
          goto LAB_142811d60;
        }
        bVar28 = (bVar26 & pauStack_a8 != (undefined1 (*) [16])0x0) == 0;
LAB_142811e04:
        pcVar9 = pcStack_b0;
        pauVar18 = pauStack_a8;
        if (bVar28) goto LAB_142811e19;
      }
      pub_1406abac0((byte *)pcVar9,(ulonglong)pauVar18,1);
LAB_142811e19:
      pdb_1404d6920(&uStack_2e8);
      if (plStack_230 == (longlong *)0x0) {
        return;
      }
      pub_1406abac0(uStack_228,(ulonglong)plStack_230,1);
      return;
    }
    uVar27 = 0;
LAB_14281094b:
    pdb_142dc7e2a(uVar27,param_7);
LAB_142810956:
    param_2 = (undefined1 (*) [16])(param_1 + 4);
    pauStack_148 = param_3;
    pcVar9 = (code *)pdb_140fc4ba0(param_2,&pauStack_148);
    bVar26 = (byte)((ulonglong)pcVar9 >> 0x38);
    unaff_R15B = bVar26 >> 1;
    bVar29 = bVar26 >> 1;
    pauVar18 = (undefined1 (*) [16])param_1[1];
    auVar30 = ZEXT216(CONCAT11(bVar26 >> 1,bVar26 >> 1));
    auVar30 = pshuflw(auVar30,auVar30,0);
    lVar25 = 0;
    pcVar22 = pcVar9;
    while( true ) {
      uVar14 = (ulonglong)pcVar22 & (ulonglong)pauVar18;
      pcVar1 = (char *)(*param_1 + uVar14);
      auVar41[0] = -(*pcVar1 == auVar30[0]);
      auVar41[1] = -(pcVar1[1] == auVar30[1]);
      auVar41[2] = -(pcVar1[2] == auVar30[2]);
      auVar41[3] = -(pcVar1[3] == auVar30[3]);
      auVar41[4] = -(pcVar1[4] == auVar30[4]);
      auVar41[5] = -(pcVar1[5] == auVar30[5]);
      auVar41[6] = -(pcVar1[6] == auVar30[6]);
      auVar41[7] = -(pcVar1[7] == auVar30[7]);
      auVar41[8] = -(pcVar1[8] == auVar30[0]);
      auVar41[9] = -(pcVar1[9] == auVar30[1]);
      auVar41[10] = -(pcVar1[10] == auVar30[2]);
      auVar41[0xb] = -(pcVar1[0xb] == auVar30[3]);
      auVar41[0xc] = -(pcVar1[0xc] == auVar30[4]);
      auVar41[0xd] = -(pcVar1[0xd] == auVar30[5]);
      auVar41[0xe] = -(pcVar1[0xe] == auVar30[6]);
      auVar41[0xf] = -(pcVar1[0xf] == auVar30[7]);
      uVar23 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar23;
      while (uVar23 != 0) {
        uVar17 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar17 = uVar17 + 1;
        }
        if (*(undefined1 (**) [16])
             (*param_1 + -0x98 + (uVar17 + uVar14 & (ulonglong)pauVar18) * -0x98) == param_3) {
          return;
        }
        uVar23 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar23);
      }
      auVar35[0] = -(*pcVar1 == -1);
      auVar35[1] = -(pcVar1[1] == -1);
      auVar35[2] = -(pcVar1[2] == -1);
      auVar35[3] = -(pcVar1[3] == -1);
      auVar35[4] = -(pcVar1[4] == -1);
      auVar35[5] = -(pcVar1[5] == -1);
      auVar35[6] = -(pcVar1[6] == -1);
      auVar35[7] = -(pcVar1[7] == -1);
      auVar35[8] = -(pcVar1[8] == -1);
      auVar35[9] = -(pcVar1[9] == -1);
      auVar35[10] = -(pcVar1[10] == -1);
      auVar35[0xb] = -(pcVar1[0xb] == -1);
      auVar35[0xc] = -(pcVar1[0xc] == -1);
      auVar35[0xd] = -(pcVar1[0xd] == -1);
      auVar35[0xe] = -(pcVar1[0xe] == -1);
      auVar35[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      pcVar22 = (code *)(uVar14 + lVar25 + 0x10);
      lVar25 = lVar25 + 0x10;
    }
    if (param_1[2] == 0) {
      pauVar18 = (undefined1 (*) [16])0x1;
      pdb_142dadf10(param_1,1,param_2,CONCAT71((int7)(uVar14 >> 8),1));
      puVar10 = (ulonglong *)pdb_14008d710(0);
      if (puVar10 != (ulonglong *)0x0) goto LAB_142810bdb;
      goto LAB_142811ef8;
    }
    puVar10 = (ulonglong *)pdb_14008d710(0);
    if (puVar10 == (ulonglong *)0x0) goto LAB_142811ef8;
LAB_142810bdb:
    uStack_2c8 = *puVar10;
    pauStack_2c0 = (undefined1 (*) [16])puVar10[1];
    *puVar10 = *puVar10 + 1;
    unaff_XMM6_Qb = _UNK_1436471c8;
    unaff_XMM6_Qa = _DAT_1436471c0;
    unaff_XMM7_Dd = _UNK_1436471bc;
    unaff_XMM7_Dc = _UNK_1436471b8;
    unaff_XMM7_Db = _UNK_1436471b4;
    unaff_XMM7_Da = _DAT_1436471b0;
    uStack_2d8 = _DAT_1436471c0;
    lStack_2d0 = _UNK_1436471c8;
    uStack_2e8 = (undefined1 (*) [16])CONCAT44(_UNK_1436471b4,_DAT_1436471b0);
    uStack_2e0 = (code *)CONCAT44(_UNK_1436471bc,_UNK_1436471b8);
    param_2 = (undefined1 (*) [16])pdb_140f3bda0();
    unaff_R15B = bVar26 >> 1;
    if (param_2[1][0] != '\x01') goto LAB_142811f05;
    uStack_128 = *(ulonglong *)*param_2;
    pauVar18 = *(undefined1 (**) [16])(*param_2 + 8);
  }
  else {
    uStack_b8 = *param_5;
    param_7 = (longlong *)param_5[4];
    unaff_RBX = pcVar9;
    if (param_2 == (undefined1 (*) [16])0x0) goto LAB_142810956;
    if (param_2 != (undefined1 (*) [16])0x1) {
      if (param_1[0x2a] != 0) {
        return;
      }
      plStack_a0 = param_1;
      puVar10 = (ulonglong *)pdb_14008d710(0);
      if (puVar10 == (ulonglong *)0x0) goto LAB_142811ef8;
      uStack_2c8 = *puVar10;
      pauStack_2c0 = (undefined1 (*) [16])puVar10[1];
      *puVar10 = *puVar10 + 1;
      lVar25 = _UNK_1436471c8;
      uVar27 = _DAT_1436471c0;
      uStack_2d8 = _DAT_1436471c0;
      lStack_2d0 = _UNK_1436471c8;
      pauVar19 = (undefined1 (*) [16])CONCAT44(_UNK_1436471b4,_DAT_1436471b0);
      pcVar22 = (code *)CONCAT44(_UNK_1436471bc,_UNK_1436471b8);
      uStack_2e8 = pauVar19;
      uStack_2e0 = pcVar22;
      puVar10 = (ulonglong *)pdb_140f3bda0();
      plVar13 = plStack_a0;
      if ((char)puVar10[2] == '\x01') {
        uStack_1c8 = *puVar10;
        pauVar18 = (undefined1 (*) [16])puVar10[1];
      }
      else {
        uStack_1c8 = pdb_140f4fd10();
        *puVar10 = uStack_1c8;
        puVar10[1] = (ulonglong)pauVar18;
        *(undefined1 *)(puVar10 + 2) = 1;
      }
      *puVar10 = uStack_1c8 + 1;
      uStack_1d8 = _DAT_14359cbc0;
      lStack_1d0 = _UNK_14359cbc8;
      pauStack_1e8 = _DAT_14359cbb0;
      pcStack_1e0 = _UNK_14359cbb8;
      pauStack_1c0 = pauVar18;
      plVar11 = (longlong *)pdb_14008d710(0);
      if (plVar11 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14359bf00);
        goto LAB_1428120f8;
      }
      lStack_c8 = *plVar11;
      lStack_c0 = plVar11[1];
      *plVar11 = *plVar11 + 1;
      uStack_f8 = uStack_2c8;
      pauStack_f0 = pauStack_2c0;
      uStack_108 = uStack_2d8;
      lStack_100 = lStack_2d0;
      pauStack_118 = uStack_2e8;
      pcStack_110 = uStack_2e0;
      pauStack_148 = pauStack_1e8;
      pcStack_140 = pcStack_1e0;
      uStack_138 = uStack_1d8;
      lStack_130 = lStack_1d0;
      uStack_128 = uStack_1c8;
      pauStack_120 = pauStack_1c0;
      uStack_d8 = uVar27;
      lStack_d0 = lVar25;
      pauStack_e8 = pauVar19;
      pcStack_e0 = pcVar22;
      pdb_142b0fb10(&pauStack_148,pcVar9);
      plVar13 = plVar13 + 0x2a;
LAB_142810b3c:
      pub_142e32760(&pauStack_1e8,&pauStack_148,0x90);
      pub_142e32760(plVar13,&pauStack_1e8,0x90);
      lVar25 = *(longlong *)(pcVar9 + 0x48);
      pcStack_b0 = pcVar9;
      goto joined_r0x000142810d91;
    }
    if (param_1[0x18] != 0) {
      return;
    }
    plStack_a0 = param_1;
    puVar10 = (ulonglong *)pdb_14008d710(0);
    if (puVar10 != (ulonglong *)0x0) {
      uStack_2c8 = *puVar10;
      pauStack_2c0 = (undefined1 (*) [16])puVar10[1];
      *puVar10 = *puVar10 + 1;
      lVar25 = _UNK_1436471c8;
      uVar27 = _DAT_1436471c0;
      uStack_2d8 = _DAT_1436471c0;
      lStack_2d0 = _UNK_1436471c8;
      pauVar19 = (undefined1 (*) [16])CONCAT44(_UNK_1436471b4,_DAT_1436471b0);
      pcVar22 = (code *)CONCAT44(_UNK_1436471bc,_UNK_1436471b8);
      uStack_2e8 = pauVar19;
      uStack_2e0 = pcVar22;
      puVar10 = (ulonglong *)pdb_140f3bda0();
      plVar13 = plStack_a0;
      if ((char)puVar10[2] == '\x01') {
        uStack_1c8 = *puVar10;
        pauVar18 = (undefined1 (*) [16])puVar10[1];
      }
      else {
        uStack_1c8 = pdb_140f4fd10();
        *puVar10 = uStack_1c8;
        puVar10[1] = (ulonglong)pauVar18;
        *(undefined1 *)(puVar10 + 2) = 1;
      }
      *puVar10 = uStack_1c8 + 1;
      uStack_1d8 = _DAT_14359cbc0;
      lStack_1d0 = _UNK_14359cbc8;
      pauStack_1e8 = _DAT_14359cbb0;
      pcStack_1e0 = _UNK_14359cbb8;
      pauStack_1c0 = pauVar18;
      plVar11 = (longlong *)pdb_14008d710(0);
      if (plVar11 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14359bf00);
        goto LAB_1428120f8;
      }
      lStack_c8 = *plVar11;
      lStack_c0 = plVar11[1];
      *plVar11 = *plVar11 + 1;
      uStack_f8 = uStack_2c8;
      pauStack_f0 = pauStack_2c0;
      uStack_108 = uStack_2d8;
      lStack_100 = lStack_2d0;
      pauStack_118 = uStack_2e8;
      pcStack_110 = uStack_2e0;
      pauStack_148 = pauStack_1e8;
      pcStack_140 = pcStack_1e0;
      uStack_138 = uStack_1d8;
      lStack_130 = lStack_1d0;
      uStack_128 = uStack_1c8;
      pauStack_120 = pauStack_1c0;
      uStack_d8 = uVar27;
      lStack_d0 = lVar25;
      pauStack_e8 = pauVar19;
      pcStack_e0 = pcVar22;
      pdb_142b0fb10(&pauStack_148,pcVar9);
      plVar13 = plVar13 + 0x18;
      goto LAB_142810b3c;
    }
LAB_142811ef8:
    pdb_142dc7890(&UNK_14359bf00);
LAB_142811f05:
    bVar29 = unaff_R15B;
    uStack_128 = pdb_140f4fd10();
    *(ulonglong *)*param_2 = uStack_128;
    *(undefined1 (**) [16])(*param_2 + 8) = pauVar18;
    param_2[1][0] = 1;
  }
  *(ulonglong *)*param_2 = uStack_128 + 1;
  uStack_138 = _DAT_14359cbc0;
  lStack_130 = _UNK_14359cbc8;
  pauStack_148 = _DAT_14359cbb0;
  pcStack_140 = _UNK_14359cbb8;
  pauStack_120 = pauVar18;
  plVar13 = (longlong *)pdb_14008d710(0);
  if (plVar13 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_14359bf00);
LAB_1428120f8:
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  lStack_168 = *plVar13;
  lStack_160 = plVar13[1];
  *plVar13 = *plVar13 + 1;
  uStack_198 = uStack_2c8;
  pauStack_190 = pauStack_2c0;
  uStack_1a8 = uStack_2d8;
  lStack_1a0 = lStack_2d0;
  pauStack_1b8 = uStack_2e8;
  pcStack_1b0 = uStack_2e0;
  pauStack_1e8 = pauStack_148;
  pcStack_1e0 = pcStack_140;
  uStack_1d8 = uStack_138;
  lStack_1d0 = lStack_130;
  uStack_1c8 = uStack_128;
  pauStack_1c0 = pauStack_120;
  uStack_188 = (undefined1 (*) [16])CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  uStack_180 = (code *)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  uStack_178 = unaff_XMM6_Qa;
  lStack_170 = unaff_XMM6_Qb;
  pdb_142b0fb10(&pauStack_1e8,unaff_RBX);
  pub_142e32760(&pauStack_148,&pauStack_1e8,0x90);
  pauVar18 = (undefined1 (*) [16])*param_1;
  uVar14 = param_1[1];
  uVar24 = (ulonglong)pcVar9 & uVar14;
  auVar30 = *(undefined1 (*) [16])(*pauVar18 + uVar24);
  uVar23 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar30[0xf] >> 7) << 0xf
  ;
  uVar8 = (uint)uVar23;
  if (uVar23 == 0) {
    lVar25 = 0x10;
    do {
      uVar24 = uVar24 + lVar25 & uVar14;
      auVar30 = *(undefined1 (*) [16])(*pauVar18 + uVar24);
      lVar25 = lVar25 + 0x10;
      uVar8 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
    } while (uVar8 == 0);
  }
  uVar17 = 0;
  for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
    uVar17 = uVar17 + 1;
  }
  uVar24 = uVar17 + uVar24 & uVar14;
  bVar26 = (*pauVar18)[uVar24];
  if (-1 < (char)bVar26) {
    auVar30 = *pauVar18;
    uVar8 = 0;
    for (uVar17 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar30[0xf] >> 7) << 0xf); (uVar17 & 1) == 0;
        uVar17 = uVar17 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar24 = (ulonglong)uVar8;
    bVar26 = (*pauVar18)[uVar24];
  }
  (*pauVar18)[uVar24] = bVar29;
  pauVar18[1][uVar24 - 0x10 & uVar14] = bVar29;
  *(undefined1 (**) [16])((longlong)pauVar18 + uVar24 * -0x98 + -0x98) = param_3;
  pub_142e32760((longlong)pauVar18 + uVar24 * -0x98 + -0x90,&pauStack_148,0x90);
  lVar25 = param_1[3] - _UNK_142e47bf8;
  param_1[2] = param_1[2] - (ulonglong)(bVar26 & 1);
  param_1[3] = lVar25;
  lVar25 = *(longlong *)(unaff_RBX + 0x48);
  pcStack_b0 = unaff_RBX;
  plStack_a0 = param_1;
joined_r0x000142810d91:
  if (lVar25 != 0) {
    pauStack_a8 = (undefined1 (*) [16])(plStack_a0 + 0xc);
    pauVar19 = *(undefined1 (**) [16])(pcStack_b0 + 0x30);
    auVar30 = *pauVar19;
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
    pauVar18 = pauVar19 + 1;
    plVar13 = param_7 + 4;
    plStack_150 = param_7;
    do {
      if ((short)uVar8 == 0) {
        do {
          auVar30 = *pauVar18;
          pauVar19 = pauVar19 + -0x68;
          pauVar18 = pauVar18 + 1;
          uVar8 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar8 == 0);
      }
      uVar17 = 0;
      for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar17 = uVar17 + 1;
      }
      iVar2 = *(int *)((longlong)pauVar19 + (ulonglong)uVar17 * -0x68 + -0x68);
      uStack_240 = CONCAT44(uStack_240._4_4_,iVar2);
      if (param_7[3] != 0) {
        uVar14 = pdb_140fc4e90(plVar13,&uStack_240);
        uVar27 = uStack_b8;
        lVar3 = *param_7;
        bVar26 = (byte)(uVar14 >> 0x39);
        auVar30 = ZEXT216(CONCAT11(bVar26,bVar26));
        auVar30 = pshuflw(auVar30,auVar30,0);
        lVar20 = 0;
        while( true ) {
          uVar14 = uVar14 & param_7[1];
          auVar42 = *(undefined1 (*) [16])(lVar3 + uVar14);
          auVar36[0] = -(auVar42[0] == auVar30[0]);
          auVar36[1] = -(auVar42[1] == auVar30[1]);
          auVar36[2] = -(auVar42[2] == auVar30[2]);
          auVar36[3] = -(auVar42[3] == auVar30[3]);
          auVar36[4] = -(auVar42[4] == auVar30[4]);
          auVar36[5] = -(auVar42[5] == auVar30[5]);
          auVar36[6] = -(auVar42[6] == auVar30[6]);
          auVar36[7] = -(auVar42[7] == auVar30[7]);
          auVar36[8] = -(auVar42[8] == auVar30[0]);
          auVar36[9] = -(auVar42[9] == auVar30[1]);
          auVar36[10] = -(auVar42[10] == auVar30[2]);
          auVar36[0xb] = -(auVar42[0xb] == auVar30[3]);
          auVar36[0xc] = -(auVar42[0xc] == auVar30[4]);
          auVar36[0xd] = -(auVar42[0xd] == auVar30[5]);
          auVar36[0xe] = -(auVar42[0xe] == auVar30[6]);
          auVar36[0xf] = -(auVar42[0xf] == auVar30[7]);
          uVar23 = (ushort)(SUB161(auVar36 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar36[0xf] >> 7) << 0xf;
          uVar17 = (uint)uVar23;
          while (uVar23 != 0) {
            uVar5 = 0;
            for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar24 = uVar5 + uVar14 & param_7[1];
            if (iVar2 == *(int *)(lVar3 + -0x18 + uVar24 * -0x18)) {
              lVar3 = lVar3 + uVar24 * -0x18;
              if (*(char *)(lVar3 + -4) == '\x11') goto LAB_142810ff0;
              plStack_230 = *(longlong **)(lVar3 + -0xc);
              uStack_228 = (byte *)CONCAT53(CONCAT41(uStack_228._4_4_,*(undefined1 *)(lVar3 + -1)),
                                            CONCAT21(*(undefined2 *)(lVar3 + -3),
                                                     *(char *)(lVar3 + -4)));
              pdb_1409ed9b0(&pauStack_148,uStack_b8,&plStack_230);
              if ((int)uStack_128 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14359caf0,99,&UNK_14359cb78);
              }
              uStack_208 = uStack_138;
              lStack_200 = lStack_130;
              pauStack_218 = pauStack_148;
              pcStack_210 = pcStack_140;
              puVar10 = (ulonglong *)pdb_1409ef0f0(uVar27,uStack_128 & 0xffffffff,uStack_128._4_4_);
              pcVar9 = (code *)puVar10[3];
              LOCK();
              lVar3 = *(longlong *)pcVar9;
              *(longlong *)pcVar9 = *(longlong *)pcVar9 + 1;
              UNLOCK();
              if (*(longlong *)pcVar9 == 0 || SCARRY8(lVar3,1) != *(longlong *)pcVar9 < 0)
              goto LAB_1428120f8;
              pauStack_118 = (undefined1 (*) [16])puVar10[2];
              uStack_128 = *puVar10;
              pauStack_120 = (undefined1 (*) [16])puVar10[1];
              uStack_138 = uStack_208;
              lStack_130 = lStack_200;
              pauStack_148 = pauStack_218;
              pcStack_140 = pcStack_210;
              pcStack_110 = pcVar9;
              pdb_141f12bd0(&pauStack_1e8,pauStack_a8,iVar2,&pauStack_148);
              param_7 = plStack_150;
              if ((char)uStack_1c8 != '\x11') {
                LOCK();
                *(longlong *)pcStack_1b0 = *(longlong *)pcStack_1b0 + -1;
                UNLOCK();
                if (*(longlong *)pcStack_1b0 == 0) {
                  pdb_140c7b7a0(&pcStack_1b0);
                  param_7 = plStack_150;
                }
              }
              goto LAB_142810ff0;
            }
            uVar23 = (ushort)(uVar17 - 1) & (ushort)uVar17;
            uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar23);
          }
          auVar31[0] = -(auVar42[0] == -1);
          auVar31[1] = -(auVar42[1] == -1);
          auVar31[2] = -(auVar42[2] == -1);
          auVar31[3] = -(auVar42[3] == -1);
          auVar31[4] = -(auVar42[4] == -1);
          auVar31[5] = -(auVar42[5] == -1);
          auVar31[6] = -(auVar42[6] == -1);
          auVar31[7] = -(auVar42[7] == -1);
          auVar31[8] = -(auVar42[8] == -1);
          auVar31[9] = -(auVar42[9] == -1);
          auVar31[10] = -(auVar42[10] == -1);
          auVar31[0xb] = -(auVar42[0xb] == -1);
          auVar31[0xc] = -(auVar42[0xc] == -1);
          auVar31[0xd] = -(auVar42[0xd] == -1);
          auVar31[0xe] = -(auVar42[0xe] == -1);
          auVar31[0xf] = -(auVar42[0xf] == -1);
          if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar31 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x2f,0) & 1) != 0) || (SUB161(auVar31 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') break;
          uVar14 = uVar14 + lVar20 + 0x10;
          lVar20 = lVar20 + 0x10;
        }
      }
LAB_142810ff0:
      uVar8 = uVar8 - 1 & uVar8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = *(longlong *)(pcStack_b0 + 0x48);
    if (lVar25 != 0) {
      plStack_a0 = plStack_a0 + 0x12;
      pauVar19 = *(undefined1 (**) [16])(pcStack_b0 + 0x30);
      auVar30 = *pauVar19;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
      pauVar18 = pauVar19 + 1;
      plVar13 = param_7 + 10;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar30 = *pauVar18;
            pauVar19 = pauVar19 + -0x68;
            pauVar18 = pauVar18 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar8 == 0);
        }
        uVar17 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar17 = uVar17 + 1;
        }
        iVar2 = *(int *)((longlong)pauVar19 + (ulonglong)uVar17 * -0x68 + -0x68);
        uStack_250 = CONCAT44(uStack_250._4_4_,iVar2);
        if (param_7[9] != 0) {
          uVar14 = pdb_140fc4e90(plVar13,&uStack_250);
          uVar27 = uStack_b8;
          lVar3 = param_7[6];
          bVar26 = (byte)(uVar14 >> 0x39);
          auVar30 = ZEXT216(CONCAT11(bVar26,bVar26));
          auVar30 = pshuflw(auVar30,auVar30,0);
          lVar20 = 0;
          while( true ) {
            uVar14 = uVar14 & param_7[7];
            auVar42 = *(undefined1 (*) [16])(lVar3 + uVar14);
            auVar37[0] = -(auVar42[0] == auVar30[0]);
            auVar37[1] = -(auVar42[1] == auVar30[1]);
            auVar37[2] = -(auVar42[2] == auVar30[2]);
            auVar37[3] = -(auVar42[3] == auVar30[3]);
            auVar37[4] = -(auVar42[4] == auVar30[4]);
            auVar37[5] = -(auVar42[5] == auVar30[5]);
            auVar37[6] = -(auVar42[6] == auVar30[6]);
            auVar37[7] = -(auVar42[7] == auVar30[7]);
            auVar37[8] = -(auVar42[8] == auVar30[0]);
            auVar37[9] = -(auVar42[9] == auVar30[1]);
            auVar37[10] = -(auVar42[10] == auVar30[2]);
            auVar37[0xb] = -(auVar42[0xb] == auVar30[3]);
            auVar37[0xc] = -(auVar42[0xc] == auVar30[4]);
            auVar37[0xd] = -(auVar42[0xd] == auVar30[5]);
            auVar37[0xe] = -(auVar42[0xe] == auVar30[6]);
            auVar37[0xf] = -(auVar42[0xf] == auVar30[7]);
            uVar23 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar37[0xf] >> 7) << 0xf;
            uVar17 = (uint)uVar23;
            while (uVar23 != 0) {
              uVar5 = 0;
              for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              uVar24 = uVar5 + uVar14 & param_7[7];
              if (iVar2 == *(int *)(lVar3 + -0x18 + uVar24 * -0x18)) {
                lVar3 = lVar3 + uVar24 * -0x18;
                if (*(char *)(lVar3 + -4) == '\x11') goto LAB_142811240;
                pauStack_308 = *(undefined1 (**) [16])(lVar3 + -0xc);
                uStack_300 = (code *)CONCAT53(CONCAT41(uStack_300._4_4_,*(undefined1 *)(lVar3 + -1))
                                              ,CONCAT21(*(undefined2 *)(lVar3 + -3),
                                                        *(char *)(lVar3 + -4)));
                pdb_1409ed9b0(&pauStack_148,uStack_b8,&pauStack_308);
                if ((int)uStack_128 == 0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_14359caf0,99,&UNK_14359cb60);
                }
                uStack_2d8 = uStack_138;
                lStack_2d0 = lStack_130;
                uStack_2e8 = pauStack_148;
                uStack_2e0 = pcStack_140;
                puVar10 = (ulonglong *)
                          pdb_1409ef0f0(uVar27,uStack_128 & 0xffffffff,uStack_128._4_4_);
                pcVar9 = (code *)puVar10[3];
                LOCK();
                lVar3 = *(longlong *)pcVar9;
                *(longlong *)pcVar9 = *(longlong *)pcVar9 + 1;
                UNLOCK();
                if (*(longlong *)pcVar9 == 0 || SCARRY8(lVar3,1) != *(longlong *)pcVar9 < 0)
                goto LAB_1428120f8;
                pauStack_118 = (undefined1 (*) [16])puVar10[2];
                uStack_128 = *puVar10;
                pauStack_120 = (undefined1 (*) [16])puVar10[1];
                uStack_138 = uStack_2d8;
                lStack_130 = lStack_2d0;
                pauStack_148 = uStack_2e8;
                pcStack_140 = uStack_2e0;
                pcStack_110 = pcVar9;
                pdb_141f12bd0(&pauStack_1e8,plStack_a0,iVar2,&pauStack_148);
                param_7 = plStack_150;
                if ((char)uStack_1c8 != '\x11') {
                  LOCK();
                  *(longlong *)pcStack_1b0 = *(longlong *)pcStack_1b0 + -1;
                  UNLOCK();
                  if (*(longlong *)pcStack_1b0 == 0) {
                    pdb_140c7b7a0(&pcStack_1b0);
                    param_7 = plStack_150;
                  }
                }
                goto LAB_142811240;
              }
              uVar23 = (ushort)(uVar17 - 1) & (ushort)uVar17;
              uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar23);
            }
            auVar32[0] = -(auVar42[0] == -1);
            auVar32[1] = -(auVar42[1] == -1);
            auVar32[2] = -(auVar42[2] == -1);
            auVar32[3] = -(auVar42[3] == -1);
            auVar32[4] = -(auVar42[4] == -1);
            auVar32[5] = -(auVar42[5] == -1);
            auVar32[6] = -(auVar42[6] == -1);
            auVar32[7] = -(auVar42[7] == -1);
            auVar32[8] = -(auVar42[8] == -1);
            auVar32[9] = -(auVar42[9] == -1);
            auVar32[10] = -(auVar42[10] == -1);
            auVar32[0xb] = -(auVar42[0xb] == -1);
            auVar32[0xc] = -(auVar42[0xc] == -1);
            auVar32[0xd] = -(auVar42[0xd] == -1);
            auVar32[0xe] = -(auVar42[0xe] == -1);
            auVar32[0xf] = -(auVar42[0xf] == -1);
            if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar32 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar32 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar32 >> 0x3f,0) & 1) != 0) || (SUB161(auVar32 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') break;
            uVar14 = uVar14 + lVar20 + 0x10;
            lVar20 = lVar20 + 0x10;
          }
        }
LAB_142811240:
        uVar8 = uVar8 - 1 & uVar8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
  }
  return;
}

