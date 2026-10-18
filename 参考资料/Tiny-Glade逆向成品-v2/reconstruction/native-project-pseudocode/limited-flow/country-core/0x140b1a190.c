// VA 0x140b1a190, PDB extent 15653 bytes
// country_core::startup::load_mesh_atlases::load_grass2_lod0_meshes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140b1bfbb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_mesh_atlases::load_grass2_lod0_meshes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
   Extent: 15653 */

void pdb_140b1a190(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  longlong *plVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  undefined8 *puVar19;
  ushort uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  undefined8 uVar24;
  undefined1 (*pauVar25) [16];
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  byte bVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  int iVar34;
  int iVar35;
  undefined1 auVar33 [16];
  int iVar36;
  float fVar37;
  float fVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  float fVar61;
  float fVar62;
  uint uVar63;
  float fVar64;
  uint uVar65;
  int iVar66;
  int iVar67;
  float fVar68;
  int iVar69;
  int iVar70;
  float fVar71;
  ulonglong uStack_3f8;
  byte *pbStack_3f0;
  undefined1 (*pauStack_3d8) [16];
  undefined1 (*pauStack_3d0) [16];
  undefined1 (*pauStack_3c8) [16];
  undefined1 (*pauStack_3c0) [16];
  undefined1 (*pauStack_3b8) [16];
  undefined1 (*pauStack_3b0) [16];
  longlong lStack_3a8;
  longlong lStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  longlong lStack_380;
  undefined1 (*pauStack_378) [16];
  undefined1 (*pauStack_370) [16];
  undefined1 auStack_368 [32];
  undefined1 (*pauStack_348) [16];
  undefined1 (*pauStack_340) [16];
  undefined1 (*pauStack_338) [16];
  undefined1 (*pauStack_330) [16];
  undefined1 (*pauStack_328) [16];
  undefined1 (*pauStack_320) [16];
  undefined8 uStack_318;
  undefined1 (*pauStack_310) [16];
  undefined1 (*pauStack_308) [16];
  undefined1 (*pauStack_300) [16];
  undefined1 (*pauStack_2f8) [16];
  undefined1 (*pauStack_2f0) [16];
  undefined1 (*pauStack_2e8) [16];
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  longlong lStack_2c0;
  undefined1 (*pauStack_2b8) [16];
  undefined1 (*pauStack_2b0) [16];
  undefined1 (*pauStack_2a8) [16];
  undefined1 (*pauStack_2a0) [16];
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_290) [16];
  undefined1 (*pauStack_288) [16];
  undefined1 (*pauStack_280) [16];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 (*pauStack_258) [16];
  undefined1 (*pauStack_250) [16];
  undefined1 (*pauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  undefined1 (*pauStack_238) [16];
  undefined1 (*pauStack_230) [16];
  ushort uStack_228;
  undefined6 uStack_226;
  undefined1 (*pauStack_220) [16];
  undefined1 (*pauStack_218) [16];
  undefined1 (*pauStack_210) [16];
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  undefined1 (*pauStack_1f8) [16];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1d0) [16];
  undefined1 (*pauStack_1c8) [16];
  undefined1 (*pauStack_1c0) [16];
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined1 (*pauStack_100) [16];
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pdb_140dca300(&uStack_3f8,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  fVar8 = _DAT_142e36f28;
  lVar13 = *(longlong *)(param_1 + 0x68) + *(longlong *)(param_1 + 0x70) * 0x48;
  lVar22 = 0;
  lVar26 = *(longlong *)(param_1 + 0x68);
  iVar30 = _DAT_143034280;
  iVar34 = _UNK_143034284;
  iVar35 = _UNK_143034288;
  iVar36 = _UNK_14303428c;
  fVar31 = _DAT_142e36f28;
  uVar28 = _DAT_142e378e0;
  uVar63 = _UNK_142e378e4;
  iVar57 = _DAT_143034290;
  iVar58 = _UNK_143034294;
  iVar59 = _UNK_143034298;
  iVar60 = _UNK_14303429c;
  fVar64 = _DAT_142e36f24;
  fVar45 = _DAT_143007998;
  iVar66 = _DAT_1430342a0;
  iVar67 = _UNK_1430342a4;
  iVar69 = _UNK_1430342a8;
  iVar70 = _UNK_1430342ac;
  uVar27 = _DAT_142e377e0;
LAB_140b1a2c0:
  do {
    lVar14 = lVar26;
    if (lVar14 == lVar13) {
      if (uStack_3f8 != 0) {
        pub_1406abac0(pbStack_3f0,uStack_3f8,1);
      }
      return;
    }
    lVar26 = lVar14 + 0x48;
  } while (*(longlong *)(lVar14 + 0x28) == 0);
  puVar19 = *(undefined8 **)(lVar14 + 0x20);
  puStack_398 = puVar19 + *(longlong *)(lVar14 + 0x28) * 0x1a;
LAB_140b1a2e4:
  lStack_3a8 = lVar22;
  lStack_3a0 = lVar22;
  puStack_390 = puVar19;
  pdb_1417fc880(&pauStack_258,&uStack_3f8,*puVar19,puVar19[1]);
  if (SBORROW8(0,(longlong)pauStack_258)) {
    pauStack_348 = pauStack_250;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143055818,0x21,&pauStack_348,&UNK_1430561c0,&UNK_143055840);
  }
  pauStack_3b8 = pauStack_238;
  pauStack_3b0 = pauStack_230;
  pauStack_3c8 = pauStack_248;
  pauStack_3c0 = pauStack_240;
  pauStack_3d8 = pauStack_258;
  pauStack_3d0 = pauStack_250;
  plVar9 = (longlong *)pdb_14008d710(0);
  pauVar12 = pauStack_3c8;
  pauVar25 = pauStack_3d0;
  if (plVar9 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_143326860);
    goto LAB_140b1c67a;
  }
  pauStack_200 = (undefined1 (*) [16])*plVar9;
  pauStack_1f8 = (undefined1 (*) [16])plVar9[1];
  *plVar9 = *plVar9 + 1;
  pauStack_210 = _DAT_143046120;
  pauStack_208 = _UNK_143046128;
  pauStack_220 = _DAT_143046110;
  pauStack_218 = _UNK_143046118;
  pauStack_258 = (undefined1 (*) [16])0x0;
  pauStack_250 = (undefined1 (*) [16])0x4;
  pauStack_248 = (undefined1 (*) [16])0x0;
  pauStack_240 = (undefined1 (*) [16])0x8000000000000000;
  puStack_1f0 = &UNK_143055877;
  uStack_1e8 = 10;
  uStack_1e0 = 0;
  uVar16 = (longlong)pauStack_3c8 * 4;
  if (0x7ffffffffffffffc < uVar16 || (ulonglong)pauStack_3c8 >> 0x3e != 0) {
    uVar24 = 0;
LAB_140b1c34c:
    pdb_142dc7e2a(uVar24,uVar16);
    goto LAB_140b1c67a;
  }
  uStack_388 = param_2;
  lStack_380 = lVar13;
  if (uVar16 == 0) {
    pauVar10 = (undefined1 (*) [16])0x4;
    pauVar23 = (undefined1 (*) [16])0x0;
  }
  else {
    pdb_14007ee60();
    uVar24 = 4;
    pauVar10 = (undefined1 (*) [16])pub_1406abab0(uVar16,4);
    pauVar23 = pauVar12;
    if (pauVar10 == (undefined1 (*) [16])0x0) goto LAB_140b1c34c;
  }
  if (pauVar12 != (undefined1 (*) [16])0x0) {
    pub_142e32760(pauVar10,pauVar25,uVar16);
  }
  if (pauStack_258 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_250,(longlong)pauStack_258 << 2,4);
  }
  pauStack_248 = pauVar12;
  pauStack_258 = pauVar23;
  pauStack_250 = pauVar10;
  if (pauStack_3b0 != (undefined1 (*) [16])0x0) {
    pauStack_100 = (undefined1 (*) [16])((longlong)pauStack_3b0 * 0x38 + (longlong)pauStack_3b8);
    puVar19 = (undefined8 *)(pauStack_3b8[1] + 8);
    do {
      if (puVar19[-3] == 0) {
        pauVar25 = (undefined1 (*) [16])*puVar19;
        uVar16 = (longlong)pauVar25 * 4;
        if (0x7ffffffffffffffc < uVar16 || (ulonglong)pauVar25 >> 0x3e != 0) {
          uVar24 = 0;
LAB_140b1c3ee:
          pdb_142dc7e2a(uVar24,uVar16);
          goto LAB_140b1c67a;
        }
        uVar15 = puVar19[-1];
        if (uVar16 == 0) {
          pauVar10 = (undefined1 (*) [16])0x4;
          pauVar12 = (undefined1 (*) [16])0x0;
          pauVar23 = (undefined1 (*) [16])0x2;
        }
        else {
          pdb_14007ee60(0x7fffffffffffff00,uVar15);
          uVar24 = 4;
          pauVar10 = (undefined1 (*) [16])pub_1406abab0(uVar16,4);
          if (pauVar10 == (undefined1 (*) [16])0x0) goto LAB_140b1c3ee;
          pauVar23 = (undefined1 (*) [16])0x2;
          pauVar12 = pauVar25;
        }
      }
      else if ((int)puVar19[-3] == 1) {
        pauVar25 = (undefined1 (*) [16])*puVar19;
        uVar16 = (longlong)pauVar25 * 8;
        if (0x7ffffffffffffffc < uVar16 || (ulonglong)pauVar25 >> 0x3d != 0) {
          uVar24 = 0;
LAB_140b1c3da:
          pdb_142dc7e2a(uVar24,uVar16);
          goto LAB_140b1c67a;
        }
        uVar15 = puVar19[-1];
        if (uVar16 == 0) {
          pauVar10 = (undefined1 (*) [16])0x4;
          pauVar23 = (undefined1 (*) [16])0x3;
          pauVar12 = (undefined1 (*) [16])0x0;
        }
        else {
          pdb_14007ee60(0x7fffffffffffff00,uVar15);
          uVar24 = 4;
          pauVar10 = (undefined1 (*) [16])pub_1406abab0(uVar16,4);
          if (pauVar10 == (undefined1 (*) [16])0x0) goto LAB_140b1c3da;
          pauVar23 = (undefined1 (*) [16])0x3;
          pauVar12 = pauVar25;
        }
      }
      else {
        pauVar25 = (undefined1 (*) [16])*puVar19;
        uVar16 = (longlong)pauVar25 * 0xc;
        if ((undefined1 (*) [16])0xaaaaaaaaaaaaaaa < pauVar25) {
          uVar24 = 0;
LAB_140b1c402:
          pdb_142dc7e2a(uVar24,uVar16);
          goto LAB_140b1c67a;
        }
        uVar15 = puVar19[-1];
        pauVar23 = (undefined1 (*) [16])0x4;
        if (uVar16 == 0) {
          pauVar10 = (undefined1 (*) [16])0x4;
          pauVar12 = (undefined1 (*) [16])0x0;
        }
        else {
          pdb_14007ee60(0x7ffffffffffffffc,uVar15);
          uVar24 = 4;
          pauVar10 = (undefined1 (*) [16])pub_1406abab0(uVar16,4);
          if (pauVar10 == (undefined1 (*) [16])0x0) goto LAB_140b1c402;
          pauVar23 = (undefined1 (*) [16])0x4;
          pauVar12 = pauVar25;
        }
      }
      if (pauVar25 != (undefined1 (*) [16])0x0) {
        pub_142e32760(pauVar10,uVar15,uVar16);
      }
      uStack_101 = 1;
      pauStack_168 = pauVar23;
      pauStack_160 = pauVar12;
      pauStack_158 = pauVar10;
      pauStack_150 = pauVar25;
      pdb_140f60be0(auStack_368,puVar19 + 1);
      pauStack_1c8 = pauStack_158;
      pauStack_1c0 = pauStack_150;
      pauStack_1d8 = pauStack_168;
      pauStack_1d0 = pauStack_160;
      uStack_101 = 0;
      pdb_1417bbba0(&pauStack_2a8,&pauStack_220,auStack_368,&pauStack_1d8);
      switch(pauStack_2a8) {
      case (undefined1 (*) [16])0x0:
      case (undefined1 (*) [16])0x2:
        if (pauStack_2a0 != (undefined1 (*) [16])0x0) {
          uVar16 = (longlong)pauStack_2a0 << 2;
LAB_140b1a766:
          uVar21 = 4;
code_r0x000140b1a76c:
          pub_1406abac0((byte *)pauStack_298,uVar16,uVar21);
        }
        break;
      case (undefined1 (*) [16])0x1:
        if (pauStack_2a0 != (undefined1 (*) [16])0x0) {
          uVar16 = (longlong)pauStack_2a0 << 3;
          uVar21 = 2;
          goto code_r0x000140b1a76c;
        }
        break;
      case (undefined1 (*) [16])0x3:
        if (pauStack_2a0 != (undefined1 (*) [16])0x0) {
          uVar16 = (longlong)pauStack_2a0 << 3;
          goto LAB_140b1a766;
        }
        break;
      case (undefined1 (*) [16])0x4:
        if (pauStack_2a0 != (undefined1 (*) [16])0x0) {
          uVar16 = (longlong)pauStack_2a0 * 0xc;
          goto LAB_140b1a766;
        }
        break;
      default:
        if (pauStack_2a0 != (undefined1 (*) [16])0x0) {
          uVar16 = (longlong)pauStack_2a0 << 4;
          goto LAB_140b1a766;
        }
        break;
      case (undefined1 (*) [16])0x6:
        break;
      }
      pauVar25 = (undefined1 (*) [16])(puVar19 + 4);
      puVar19 = puVar19 + 7;
    } while (pauVar25 != pauStack_100);
  }
  uStack_2d0 = CONCAT71(uStack_1df,uStack_1e0);
  uStack_2d8 = uStack_1e8;
  pauStack_2e8 = pauStack_1f8;
  puStack_2e0 = puStack_1f0;
  pauStack_2f8 = pauStack_208;
  pauStack_2f0 = pauStack_200;
  pauStack_308 = pauStack_218;
  pauStack_300 = pauStack_210;
  uStack_318 = CONCAT62(uStack_226,uStack_228);
  pauStack_310 = pauStack_220;
  pauStack_328 = pauStack_238;
  pauStack_320 = pauStack_230;
  pauStack_338 = pauStack_248;
  pauStack_330 = pauStack_240;
  pauStack_348 = pauStack_258;
  pauStack_340 = pauStack_250;
  pauVar25 = pauStack_248;
  if (pauStack_208 != (undefined1 (*) [16])0x0) {
    uVar16 = pdb_1400af950(&pauStack_2f0,&UNK_143055975,10);
    pauVar10 = pauStack_308;
    pauVar12 = pauStack_310;
    bVar29 = (byte)(uVar16 >> 0x39);
    auVar33 = ZEXT216(CONCAT11(bVar29,bVar29));
    auVar33 = pshuflw(auVar33,auVar33,0);
    lVar13 = 0;
    while( true ) {
      uVar16 = uVar16 & (ulonglong)pauStack_308;
      auVar3 = *(undefined1 (*) [16])(*pauStack_310 + uVar16);
      auVar46[0] = -(auVar3[0] == auVar33[0]);
      auVar46[1] = -(auVar3[1] == auVar33[1]);
      auVar46[2] = -(auVar3[2] == auVar33[2]);
      auVar46[3] = -(auVar3[3] == auVar33[3]);
      auVar46[4] = -(auVar3[4] == auVar33[4]);
      auVar46[5] = -(auVar3[5] == auVar33[5]);
      auVar46[6] = -(auVar3[6] == auVar33[6]);
      auVar46[7] = -(auVar3[7] == auVar33[7]);
      auVar46[8] = -(auVar3[8] == auVar33[0]);
      auVar46[9] = -(auVar3[9] == auVar33[1]);
      auVar46[10] = -(auVar3[10] == auVar33[2]);
      auVar46[0xb] = -(auVar3[0xb] == auVar33[3]);
      auVar46[0xc] = -(auVar3[0xc] == auVar33[4]);
      auVar46[0xd] = -(auVar3[0xd] == auVar33[5]);
      auVar46[0xe] = -(auVar3[0xe] == auVar33[6]);
      auVar46[0xf] = -(auVar3[0xf] == auVar33[7]);
      uVar20 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
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
      uVar18 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar65 = 0;
        for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar65 = uVar65 + 1;
        }
        lVar22 = (uVar65 + uVar16 & (ulonglong)pauStack_308) * -0x38;
        if ((*(longlong *)((longlong)pauStack_310 + lVar22 + -0x28) == 10) &&
           (plVar9 = *(longlong **)((longlong)pauStack_310 + lVar22 + -0x30),
           (short)plVar9[1] == 0x7564 && *plVar9 == 0x70445f64656b6142)) {
          uVar16 = pdb_1400af950(&pauStack_2f0,&UNK_14305597f,10);
          bVar29 = (byte)(uVar16 >> 0x39);
          auVar33 = ZEXT216(CONCAT11(bVar29,bVar29));
          auVar33 = pshuflw(auVar33,auVar33,0);
          lVar13 = 0;
          goto LAB_140b1a932;
        }
        uVar20 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar20);
      }
      auVar38[0] = -(auVar3[0] == -1);
      auVar38[1] = -(auVar3[1] == -1);
      auVar38[2] = -(auVar3[2] == -1);
      auVar38[3] = -(auVar3[3] == -1);
      auVar38[4] = -(auVar3[4] == -1);
      auVar38[5] = -(auVar3[5] == -1);
      auVar38[6] = -(auVar3[6] == -1);
      auVar38[7] = -(auVar3[7] == -1);
      auVar38[8] = -(auVar3[8] == -1);
      auVar38[9] = -(auVar3[9] == -1);
      auVar38[10] = -(auVar3[10] == -1);
      auVar38[0xb] = -(auVar3[0xb] == -1);
      auVar38[0xc] = -(auVar3[0xc] == -1);
      auVar38[0xd] = -(auVar3[0xd] == -1);
      auVar38[0xe] = -(auVar3[0xe] == -1);
      auVar38[0xf] = -(auVar3[0xf] == -1);
      uVar20 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
      pauVar25 = (undefined1 (*) [16])(ulonglong)uVar20;
      if (uVar20 != 0) break;
      uVar16 = uVar16 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_140b1a9c0:
  pauVar12 = pauStack_338;
  pauStack_180 = pauStack_348;
  pauStack_110 = pauStack_340;
  pauStack_348 = (undefined1 (*) [16])0x0;
  pauStack_340 = (undefined1 (*) [16])0x4;
  pauStack_338 = (undefined1 (*) [16])0x0;
  plVar9 = (longlong *)pdb_140f3bda0();
  if ((char)plVar9[2] == '\x01') {
    pauVar10 = (undefined1 (*) [16])*plVar9;
    pauVar25 = (undefined1 (*) [16])plVar9[1];
  }
  else {
    pauVar10 = (undefined1 (*) [16])pdb_140f4fd10();
    *plVar9 = (longlong)pauVar10;
    plVar9[1] = (longlong)pauVar25;
    *(undefined1 *)(plVar9 + 2) = 1;
  }
  pauVar23 = pauStack_2f8;
  *plVar9 = (longlong)(*pauVar10 + 1);
  pauStack_288 = pauStack_2f0;
  pauStack_280 = pauStack_2e8;
  pauStack_298 = pauStack_300;
  pauStack_290 = pauStack_2f8;
  pauStack_2a8 = pauStack_310;
  pauStack_2a0 = pauStack_308;
  pauStack_310 = _DAT_1430561a0;
  pauStack_308 = _UNK_1430561a8;
  pauStack_300 = _DAT_1430561b0;
  pauStack_2f8 = _UNK_1430561b8;
  uStack_f2 = 1;
  pauStack_2f0 = pauVar10;
  pauStack_2e8 = pauVar25;
  plVar9 = (longlong *)pdb_140f3bda0();
  if ((char)plVar9[2] == '\x01') {
    pauVar10 = (undefined1 (*) [16])*plVar9;
    pauVar25 = (undefined1 (*) [16])plVar9[1];
  }
  else {
    uStack_f2 = 1;
    pauVar10 = (undefined1 (*) [16])pdb_140f4fd10();
    *plVar9 = (longlong)pauVar10;
    plVar9[1] = (longlong)pauVar25;
    *(undefined1 *)(plVar9 + 2) = 1;
  }
  *plVar9 = (longlong)(*pauVar10 + 1);
  uStack_f2 = 1;
  pauVar17 = (undefined1 (*) [16])0x38;
  pauVar11 = (undefined1 (*) [16])&pauStack_258;
  pdb_140ca7a40();
  pauStack_1c8 = pauStack_248;
  pauStack_1c0 = pauStack_240;
  pauStack_1d8 = pauStack_258;
  pauStack_1d0 = pauStack_250;
  if (pauStack_2a0 == (undefined1 (*) [16])0x0) {
    pauStack_258 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar16 = (longlong)pauStack_2a0 * 0x38 + 0x47U & 0xfffffffffffffff0;
    pauVar11 = (undefined1 (*) [16])((longlong)pauStack_2a0[1] + uVar16 + 1);
    pauVar17 = (undefined1 (*) [16])((longlong)pauStack_2a8 - uVar16);
    pauStack_258 = (undefined1 (*) [16])0x10;
  }
  auVar33 = *pauStack_2a8;
  pauStack_238 = pauStack_2a8 + 1;
  pauStack_230 = (undefined1 (*) [16])(*pauStack_2a8 + (longlong)((longlong)*pauStack_2a0 + 1));
  pauStack_240 = pauStack_2a8;
  uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
  uStack_228 = (ushort)uVar18;
  pauStack_220 = pauVar23;
  pauStack_118 = (undefined1 (*) [16])((longlong)*pauStack_110 + (longlong)pauVar12 * 4);
  pauStack_250 = pauVar11;
  pauStack_248 = pauVar17;
  pauStack_1b8 = pauVar10;
  pauStack_1b0 = pauVar25;
  pauStack_188 = pauStack_258;
  if (pauVar23 != (undefined1 (*) [16])0x0) {
    if (uStack_228 == 0) {
      do {
        auVar33 = *pauStack_238;
        pauStack_240 = pauStack_240 + -0x38;
        pauStack_238 = pauStack_238 + 1;
        uVar18 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
                         (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar18 == 0);
    }
    uStack_228 = (ushort)uVar18;
    uVar27 = 0;
    for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
      uVar27 = uVar27 + 1;
    }
    uStack_228 = uStack_228 - 1 & uStack_228;
    lVar13 = (ulonglong)uVar27 * -0x38;
    pauStack_220 = (undefined1 (*) [16])(pauVar23[-1] + 0xf);
    pauStack_100 = *(undefined1 (**) [16])((longlong)pauStack_240 + lVar13 + -0x38);
    pauStack_140 = *(undefined1 (**) [16])((longlong)pauStack_240 + lVar13 + -0x30);
    uStack_268 = *(undefined8 *)((longlong)pauStack_240 + lVar13 + -8);
    puVar19 = (undefined8 *)((longlong)pauStack_240 + lVar13 + -0x18);
    uStack_278 = *puVar19;
    uStack_270 = puVar19[1];
                    /* WARNING: Could not recover jumptable at 0x000140b1ac49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1430567c4 +
              *(int *)(&UNK_1430567c4 + *(longlong *)((longlong)pauStack_240 + lVar13 + -0x20) * 4))
    )();
    return;
  }
  if ((pauStack_258 != (undefined1 (*) [16])0x0) && (pauVar11 != (undefined1 (*) [16])0x0)) {
    pub_1406abac0((byte *)pauVar17,(ulonglong)pauVar11,(ulonglong)pauStack_258);
  }
  pauVar25 = (undefined1 (*) [16])((ulonglong)pauVar12 & 0xffffffff);
  if (pauVar25 == (undefined1 (*) [16])0x0) {
    pauVar10 = (undefined1 (*) [16])0x4;
    pauVar23 = (undefined1 (*) [16])0x0;
  }
  else {
    pdb_14007ee60();
    pauVar10 = (undefined1 (*) [16])pub_1406abab0((longlong)pauVar25 * 4,4);
    if (pauVar10 == (undefined1 (*) [16])0x0) {
      uStack_f3 = 1;
      pdb_142dc7e2a(4,(longlong)pauVar25 * 4);
      goto LAB_140b1c67a;
    }
    pauVar23 = (undefined1 (*) [16])((ulonglong)pauVar12 & 0xffffffff);
    if (pauVar23 < (undefined1 (*) [16])0x8) {
      pauVar17 = (undefined1 (*) [16])0x0;
    }
    else {
      uVar18 = (uint)pauVar12 & 0xfffffff8;
      pauVar17 = (undefined1 (*) [16])(ulonglong)uVar18;
      pauVar11 = (undefined1 (*) [16])0x0;
      do {
        piVar1 = (int *)(*pauVar10 + (longlong)pauVar11 * 4);
        *piVar1 = iVar30;
        piVar1[1] = iVar34;
        piVar1[2] = iVar35;
        piVar1[3] = iVar36;
        piVar1 = (int *)(pauVar10[1] + (longlong)pauVar11 * 4);
        *piVar1 = iVar30 + iVar57;
        piVar1[1] = iVar34 + iVar58;
        piVar1[2] = iVar35 + iVar59;
        piVar1[3] = iVar36 + iVar60;
        pauVar11 = (undefined1 (*) [16])((longlong)*pauVar11 + 8);
        iVar30 = iVar30 + iVar66;
        iVar34 = iVar34 + iVar67;
        iVar35 = iVar35 + iVar69;
        iVar36 = iVar36 + iVar70;
      } while (pauVar17 != pauVar11);
      if ((uint)pauVar12 == uVar18) goto LAB_140b1b2ab;
    }
    do {
      *(int *)(*pauVar10 + (longlong)pauVar17 * 4) = (int)pauVar17;
      pauVar17 = (undefined1 (*) [16])((longlong)*pauVar17 + 1);
    } while (pauVar25 != pauVar17);
  }
LAB_140b1b2ab:
  if (pauStack_348 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_340,(longlong)pauStack_348 << 2,4);
  }
  pauVar12 = pauStack_308;
  pauStack_238 = pauStack_1b8;
  pauStack_230 = pauStack_1b0;
  pauStack_248 = pauStack_1c8;
  pauStack_240 = pauStack_1c0;
  pauStack_258 = pauStack_1d8;
  pauStack_250 = pauStack_1d0;
  pauStack_348 = pauVar25;
  pauStack_340 = pauVar10;
  pauStack_338 = pauVar23;
  if (pauStack_308 != (undefined1 (*) [16])0x0) {
    if (pauStack_2f8 != (undefined1 (*) [16])0x0) {
      auVar33 = *pauStack_310;
      pauVar25 = pauStack_310 + 1;
      uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
      pauVar10 = pauStack_310;
      pauVar23 = pauStack_2f8;
      do {
        if ((short)uVar18 == 0) {
          do {
            auVar33 = *pauVar25;
            pauVar10 = pauVar10 + -0x38;
            pauVar25 = pauVar25 + 1;
            uVar18 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar18 == 0);
        }
        uVar65 = 0;
        for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar65 = uVar65 + 1;
        }
        pdb_140ca28a0((undefined1 *)((longlong)pauVar10 + (ulonglong)uVar65 * -0x38 + -0x38));
        uVar18 = uVar18 - 1 & uVar18;
        pauVar23 = (undefined1 (*) [16])(pauVar23[-1] + 0xf);
      } while (pauVar23 != (undefined1 (*) [16])0x0);
    }
    uVar16 = (longlong)pauVar12 * 0x38 + 0x47U & 0xfffffffffffffff0;
    uVar21 = (longlong)pauVar12[1] + uVar16 + 1;
    if (uVar21 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_310 - uVar16),uVar21,0x10);
    }
  }
  pauStack_2f0 = pauStack_238;
  pauStack_2e8 = pauStack_230;
  pauStack_300 = pauStack_248;
  pauStack_2f8 = pauStack_240;
  pauStack_310 = pauStack_258;
  pauStack_308 = pauStack_250;
  if (pauStack_180 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_110,(longlong)pauStack_180 << 2,4);
  }
  if (pauStack_2f8 != (undefined1 (*) [16])0x0) {
    uVar16 = pdb_1400af950(&pauStack_2f0,&UNK_143055989,0xe);
    bVar29 = (byte)(uVar16 >> 0x39);
    auVar33 = ZEXT216(CONCAT11(bVar29,bVar29));
    auVar33 = pshuflw(auVar33,auVar33,0);
    lVar13 = 0;
    while( true ) {
      uVar16 = uVar16 & (ulonglong)pauStack_308;
      auVar3 = *(undefined1 (*) [16])((longlong)*pauStack_310 + uVar16);
      auVar48[0] = -(auVar3[0] == auVar33[0]);
      auVar48[1] = -(auVar3[1] == auVar33[1]);
      auVar48[2] = -(auVar3[2] == auVar33[2]);
      auVar48[3] = -(auVar3[3] == auVar33[3]);
      auVar48[4] = -(auVar3[4] == auVar33[4]);
      auVar48[5] = -(auVar3[5] == auVar33[5]);
      auVar48[6] = -(auVar3[6] == auVar33[6]);
      auVar48[7] = -(auVar3[7] == auVar33[7]);
      auVar48[8] = -(auVar3[8] == auVar33[0]);
      auVar48[9] = -(auVar3[9] == auVar33[1]);
      auVar48[10] = -(auVar3[10] == auVar33[2]);
      auVar48[0xb] = -(auVar3[0xb] == auVar33[3]);
      auVar48[0xc] = -(auVar3[0xc] == auVar33[4]);
      auVar48[0xd] = -(auVar3[0xd] == auVar33[5]);
      auVar48[0xe] = -(auVar3[0xe] == auVar33[6]);
      auVar48[0xf] = -(auVar3[0xf] == auVar33[7]);
      uVar20 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar65 = 0;
        for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar65 = uVar65 + 1;
        }
        lVar22 = (uVar65 + uVar16 & (ulonglong)pauStack_308) * -0x38;
        if ((*(longlong *)((longlong)pauStack_310 + lVar22 + -0x28) == 0xe) &&
           (plVar9 = *(longlong **)((longlong)pauStack_310 + lVar22 + -0x30),
           *(longlong *)((longlong)plVar9 + 6) == 0x6e6f697469736f50 &&
           *plVar9 == 0x6f505f64656b6142)) {
          pauVar25 = pauStack_310;
          lVar13 = pdb_140e4d980((undefined1 *)((longlong)pauStack_310 + lVar22 + -0x20));
          pauStack_110 = pauVar25;
          if (pauStack_2f8 == (undefined1 (*) [16])0x0) goto LAB_140b1c431;
          uVar16 = pdb_1400af950(&pauStack_2f0,&UNK_1430559b0,0xc);
          bVar29 = (byte)(uVar16 >> 0x39);
          auVar33 = ZEXT216(CONCAT11(bVar29,bVar29));
          auVar33 = pshuflw(auVar33,auVar33,0);
          lVar22 = 0;
          goto LAB_140b1b55f;
        }
        uVar20 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar20);
      }
      auVar40[0] = -(auVar3[0] == -1);
      auVar40[1] = -(auVar3[1] == -1);
      auVar40[2] = -(auVar3[2] == -1);
      auVar40[3] = -(auVar3[3] == -1);
      auVar40[4] = -(auVar3[4] == -1);
      auVar40[5] = -(auVar3[5] == -1);
      auVar40[6] = -(auVar3[6] == -1);
      auVar40[7] = -(auVar3[7] == -1);
      auVar40[8] = -(auVar3[8] == -1);
      auVar40[9] = -(auVar3[9] == -1);
      auVar40[10] = -(auVar3[10] == -1);
      auVar40[0xb] = -(auVar3[0xb] == -1);
      auVar40[0xc] = -(auVar3[0xc] == -1);
      auVar40[0xd] = -(auVar3[0xd] == -1);
      auVar40[0xe] = -(auVar3[0xe] == -1);
      auVar40[0xf] = -(auVar3[0xf] == -1);
      if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar40 >> 0x3f,0) & 1) != 0) || (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || (SUB161(auVar40 >> 0x77,0) & 1) != 0) ||
          auVar40[0xf] < '\0') break;
      uVar16 = uVar16 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_1430556b0,0x16,&UNK_143055998);
  goto LAB_140b1c67a;
LAB_140b1a932:
  uVar16 = uVar16 & (ulonglong)pauVar10;
  auVar3 = *(undefined1 (*) [16])(*pauVar12 + uVar16);
  auVar47[0] = -(auVar3[0] == auVar33[0]);
  auVar47[1] = -(auVar3[1] == auVar33[1]);
  auVar47[2] = -(auVar3[2] == auVar33[2]);
  auVar47[3] = -(auVar3[3] == auVar33[3]);
  auVar47[4] = -(auVar3[4] == auVar33[4]);
  auVar47[5] = -(auVar3[5] == auVar33[5]);
  auVar47[6] = -(auVar3[6] == auVar33[6]);
  auVar47[7] = -(auVar3[7] == auVar33[7]);
  auVar47[8] = -(auVar3[8] == auVar33[0]);
  auVar47[9] = -(auVar3[9] == auVar33[1]);
  auVar47[10] = -(auVar3[10] == auVar33[2]);
  auVar47[0xb] = -(auVar3[0xb] == auVar33[3]);
  auVar47[0xc] = -(auVar3[0xc] == auVar33[4]);
  auVar47[0xd] = -(auVar3[0xd] == auVar33[5]);
  auVar47[0xe] = -(auVar3[0xe] == auVar33[6]);
  auVar47[0xf] = -(auVar3[0xf] == auVar33[7]);
  uVar20 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar65 = 0;
    for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar65 = uVar65 + 1;
    }
    lVar22 = (uVar65 + uVar16 & (ulonglong)pauVar10) * -0x38;
    if ((*(longlong *)((longlong)pauVar12 + lVar22 + -0x28) == 10) &&
       (plVar9 = *(longlong **)((longlong)pauVar12 + lVar22 + -0x30),
       (short)plVar9[1] == 0x7664 && *plVar9 == 0x70445f64656b6142)) goto LAB_140b1c273;
    uVar20 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar20);
  }
  auVar39[0] = -(auVar3[0] == -1);
  auVar39[1] = -(auVar3[1] == -1);
  auVar39[2] = -(auVar3[2] == -1);
  auVar39[3] = -(auVar3[3] == -1);
  auVar39[4] = -(auVar3[4] == -1);
  auVar39[5] = -(auVar3[5] == -1);
  auVar39[6] = -(auVar3[6] == -1);
  auVar39[7] = -(auVar3[7] == -1);
  auVar39[8] = -(auVar3[8] == -1);
  auVar39[9] = -(auVar3[9] == -1);
  auVar39[10] = -(auVar3[10] == -1);
  auVar39[0xb] = -(auVar3[0xb] == -1);
  auVar39[0xc] = -(auVar3[0xc] == -1);
  auVar39[0xd] = -(auVar3[0xd] == -1);
  auVar39[0xe] = -(auVar3[0xe] == -1);
  auVar39[0xf] = -(auVar3[0xf] == -1);
  uVar20 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
  pauVar25 = (undefined1 (*) [16])(ulonglong)uVar20;
  if (uVar20 != 0) goto LAB_140b1a9c0;
  uVar16 = uVar16 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_140b1a932;
LAB_140b1b55f:
  uVar16 = uVar16 & (ulonglong)pauStack_308;
  auVar3 = *(undefined1 (*) [16])((longlong)*pauStack_310 + uVar16);
  auVar49[0] = -(auVar3[0] == auVar33[0]);
  auVar49[1] = -(auVar3[1] == auVar33[1]);
  auVar49[2] = -(auVar3[2] == auVar33[2]);
  auVar49[3] = -(auVar3[3] == auVar33[3]);
  auVar49[4] = -(auVar3[4] == auVar33[4]);
  auVar49[5] = -(auVar3[5] == auVar33[5]);
  auVar49[6] = -(auVar3[6] == auVar33[6]);
  auVar49[7] = -(auVar3[7] == auVar33[7]);
  auVar49[8] = -(auVar3[8] == auVar33[0]);
  auVar49[9] = -(auVar3[9] == auVar33[1]);
  auVar49[10] = -(auVar3[10] == auVar33[2]);
  auVar49[0xb] = -(auVar3[0xb] == auVar33[3]);
  auVar49[0xc] = -(auVar3[0xc] == auVar33[4]);
  auVar49[0xd] = -(auVar3[0xd] == auVar33[5]);
  auVar49[0xe] = -(auVar3[0xe] == auVar33[6]);
  auVar49[0xf] = -(auVar3[0xf] == auVar33[7]);
  uVar20 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (ushort)(auVar49[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar65 = 0;
    for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar65 = uVar65 + 1;
    }
    lVar14 = (uVar65 + uVar16 & (ulonglong)pauStack_308) * -0x38;
    if ((*(longlong *)((longlong)pauStack_310 + lVar14 + -0x28) == 0xc) &&
       (plVar9 = *(longlong **)((longlong)pauStack_310 + lVar14 + -0x30),
       (int)plVar9[1] == 0x6c616d72 && *plVar9 == 0x6f4e5f64656b6142)) {
      pauVar25 = pauStack_310;
      pauStack_188 = (undefined1 (*) [16])pdb_140e4d980((longlong)pauStack_310 + lVar14 + -0x20);
      pauStack_180 = pauVar25;
      if (pauStack_2f8 == (undefined1 (*) [16])0x0) goto LAB_140b1c44f;
      uVar16 = pdb_1400af950(&pauStack_2f0,&UNK_1430559d8,9);
      bVar29 = (byte)(uVar16 >> 0x39);
      auVar33 = ZEXT216(CONCAT11(bVar29,bVar29));
      auVar33 = pshuflw(auVar33,auVar33,0);
      lVar22 = 0;
      goto LAB_140b1b653;
    }
    uVar20 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar20);
  }
  auVar41[0] = -(auVar3[0] == -1);
  auVar41[1] = -(auVar3[1] == -1);
  auVar41[2] = -(auVar3[2] == -1);
  auVar41[3] = -(auVar3[3] == -1);
  auVar41[4] = -(auVar3[4] == -1);
  auVar41[5] = -(auVar3[5] == -1);
  auVar41[6] = -(auVar3[6] == -1);
  auVar41[7] = -(auVar3[7] == -1);
  auVar41[8] = -(auVar3[8] == -1);
  auVar41[9] = -(auVar3[9] == -1);
  auVar41[10] = -(auVar3[10] == -1);
  auVar41[0xb] = -(auVar3[0xb] == -1);
  auVar41[0xc] = -(auVar3[0xc] == -1);
  auVar41[0xd] = -(auVar3[0xd] == -1);
  auVar41[0xe] = -(auVar3[0xe] == -1);
  auVar41[0xf] = -(auVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') goto LAB_140b1c431;
  uVar16 = uVar16 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_140b1b55f;
LAB_140b1b653:
  uVar16 = uVar16 & (ulonglong)pauStack_308;
  auVar3 = *(undefined1 (*) [16])((longlong)*pauStack_310 + uVar16);
  auVar50[0] = -(auVar3[0] == auVar33[0]);
  auVar50[1] = -(auVar3[1] == auVar33[1]);
  auVar50[2] = -(auVar3[2] == auVar33[2]);
  auVar50[3] = -(auVar3[3] == auVar33[3]);
  auVar50[4] = -(auVar3[4] == auVar33[4]);
  auVar50[5] = -(auVar3[5] == auVar33[5]);
  auVar50[6] = -(auVar3[6] == auVar33[6]);
  auVar50[7] = -(auVar3[7] == auVar33[7]);
  auVar50[8] = -(auVar3[8] == auVar33[0]);
  auVar50[9] = -(auVar3[9] == auVar33[1]);
  auVar50[10] = -(auVar3[10] == auVar33[2]);
  auVar50[0xb] = -(auVar3[0xb] == auVar33[3]);
  auVar50[0xc] = -(auVar3[0xc] == auVar33[4]);
  auVar50[0xd] = -(auVar3[0xd] == auVar33[5]);
  auVar50[0xe] = -(auVar3[0xe] == auVar33[6]);
  auVar50[0xf] = -(auVar3[0xf] == auVar33[7]);
  uVar20 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
  uVar18 = (uint)uVar20;
  while( true ) {
    if (uVar20 == 0) goto LAB_140b1b6b9;
    uVar65 = 0;
    for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar65 = uVar65 + 1;
    }
    lVar14 = (uVar65 + uVar16 & (ulonglong)pauStack_308) * -0x38;
    if ((*(longlong *)((longlong)pauStack_310 + lVar14 + -0x28) == 9) &&
       (plVar9 = *(longlong **)((longlong)pauStack_310 + lVar14 + -0x30),
       (char)plVar9[1] == 'V' && *plVar9 == 0x555f786574726556)) break;
    uVar20 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar20);
  }
  goto LAB_140b1b6dd;
LAB_140b1b6b9:
  auVar42[0] = -(auVar3[0] == -1);
  auVar42[1] = -(auVar3[1] == -1);
  auVar42[2] = -(auVar3[2] == -1);
  auVar42[3] = -(auVar3[3] == -1);
  auVar42[4] = -(auVar3[4] == -1);
  auVar42[5] = -(auVar3[5] == -1);
  auVar42[6] = -(auVar3[6] == -1);
  auVar42[7] = -(auVar3[7] == -1);
  auVar42[8] = -(auVar3[8] == -1);
  auVar42[9] = -(auVar3[9] == -1);
  auVar42[10] = -(auVar3[10] == -1);
  auVar42[0xb] = -(auVar3[0xb] == -1);
  auVar42[0xc] = -(auVar3[0xc] == -1);
  auVar42[0xd] = -(auVar3[0xd] == -1);
  auVar42[0xe] = -(auVar3[0xe] == -1);
  auVar42[0xf] = -(auVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') goto LAB_140b1c44f;
  uVar16 = uVar16 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_140b1b653;
LAB_140b1c44f:
  pdb_142dc8110(&UNK_1430556b0,0x16,&UNK_1430559e8);
  goto LAB_140b1c67a;
LAB_140b1c431:
  pdb_142dc8110(&UNK_1430556b0,0x16,&UNK_1430559c0);
  goto LAB_140b1c67a;
LAB_140b1b6dd:
  pauVar10 = pauStack_310;
  lVar22 = pdb_140e4d950((longlong)pauStack_310 + lVar14 + -0x20);
  pauVar12 = pauStack_340;
  pauVar25 = (undefined1 (*) [16])((longlong)pauStack_110 * 0xc);
  lStack_2c0 = lVar13;
  pauStack_118 = pauVar25;
  if ((undefined1 (*) [16])0xaaaaaaaaaaaaaaa < pauStack_110) {
    uVar24 = 0;
LAB_140b1c470:
    pdb_142dc7e2a(uVar24,pauStack_118);
    goto LAB_140b1c67a;
  }
  pauStack_2b0 = pauStack_338;
  if (pauVar25 == (undefined1 (*) [16])0x0) {
    pauStack_140 = (undefined1 (*) [16])0x4;
    pauVar25 = (undefined1 (*) [16])0x0;
  }
  else {
    pdb_14007ee60();
    uVar24 = 4;
    pauStack_140 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar25,4);
    pauVar25 = pauStack_110;
    if (pauStack_140 == (undefined1 (*) [16])0x0) goto LAB_140b1c470;
  }
  pauVar11 = pauStack_118;
  pauVar23 = pauStack_140;
  pauStack_2b8 = pauVar25;
  if (pauStack_110 < (undefined1 (*) [16])0x2) {
    if (pauStack_110 != (undefined1 (*) [16])0x0) goto LAB_140b1b874;
    uVar16 = ((ulonglong)pauStack_2b0 / 3) * 3;
    if (2 < uVar16) {
      pauStack_100 = (undefined1 (*) [16])0x4;
      pauStack_148 = (undefined1 (*) [16])0x0;
      lVar13 = lStack_2c0;
      pauVar25 = pauStack_110;
      goto LAB_140b1bada;
    }
    pauStack_1d8 = (undefined1 (*) [16])0x0;
    pauStack_1d0 = (undefined1 (*) [16])0x4;
    pauStack_1c8 = (undefined1 (*) [16])0x0;
    pauStack_100 = (undefined1 (*) [16])0x4;
    pauStack_148 = (undefined1 (*) [16])0x0;
    pauVar12 = (undefined1 (*) [16])0x4;
    pauVar25 = pauStack_118;
    goto LAB_140b1bdb3;
  }
  uVar16 = (longlong)pauStack_110[-1] + 0xf;
  uVar21 = (ulonglong)((uint)uVar16 & 7);
  if ((longlong)pauStack_110[-1] + 0xeU < 7) goto LAB_140b1b84b;
  uVar16 = uVar16 & 0xfffffffffffffff8;
  do {
    *(undefined4 *)(*pauVar23 + 8) = 0;
    *(undefined8 *)*pauVar23 = 0;
    *(undefined8 *)(*pauVar23 + 0xc) = 0;
    *(undefined4 *)(pauVar23[1] + 4) = 0;
    *(undefined8 *)(pauVar23[1] + 8) = 0;
    *(undefined4 *)pauVar23[2] = 0;
    *(undefined8 *)(pauVar23[2] + 4) = 0;
    *(undefined4 *)(pauVar23[2] + 0xc) = 0;
    *(undefined8 *)pauVar23[3] = 0;
    *(undefined4 *)(pauVar23[3] + 8) = 0;
    *(undefined8 *)(pauVar23[3] + 0xc) = 0;
    *(undefined4 *)(pauVar23[4] + 4) = 0;
    *(undefined8 *)(pauVar23[4] + 8) = 0;
    *(undefined4 *)pauVar23[5] = 0;
    *(undefined4 *)(pauVar23[5] + 0xc) = 0;
    *(undefined8 *)(pauVar23[5] + 4) = 0;
    pauVar23 = pauVar23 + 6;
    uVar16 = uVar16 - 8;
  } while (uVar16 != 0);
  for (; uVar21 != 0; uVar21 = uVar21 - 1) {
LAB_140b1b84b:
    *(undefined4 *)(*pauVar23 + 8) = 0;
    *(undefined8 *)*pauVar23 = 0;
    pauVar23 = (undefined1 (*) [16])(*pauVar23 + 0xc);
  }
LAB_140b1b874:
  *(undefined4 *)(*pauVar23 + 8) = 0;
  *(undefined8 *)*pauVar23 = 0;
  if (pauStack_118 == (undefined1 (*) [16])0x0) {
    pauStack_100 = (undefined1 (*) [16])0x4;
    pauStack_148 = (undefined1 (*) [16])0x0;
  }
  else {
    pdb_14007ee60();
    pauStack_100 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar11,4);
    if (pauStack_100 == (undefined1 (*) [16])0x0) {
      pdb_142dc7e2a(4,pauStack_118);
      goto LAB_140b1c67a;
    }
    pauStack_148 = pauStack_110;
  }
  if (pauStack_110 < (undefined1 (*) [16])0x2) {
    *(undefined4 *)((longlong)*pauStack_100 + 8) = 0;
    *(undefined8 *)*pauStack_100 = 0;
  }
  else {
    uVar16 = (longlong)pauStack_110[-1] + 0xf;
    uVar21 = (ulonglong)((uint)uVar16 & 7);
    pauVar25 = pauStack_100;
    if ((longlong)pauStack_110[-1] + 0xeU < 7) goto LAB_140b1b99b;
    uVar16 = uVar16 & 0xfffffffffffffff8;
    do {
      *(undefined4 *)((longlong)*pauVar25 + 8) = 0;
      *(undefined8 *)*pauVar25 = 0;
      *(undefined8 *)((longlong)*pauVar25 + 0xc) = 0;
      *(undefined4 *)((longlong)pauVar25[1] + 4) = 0;
      *(undefined8 *)((longlong)pauVar25[1] + 8) = 0;
      *(undefined4 *)pauVar25[2] = 0;
      *(undefined8 *)((longlong)pauVar25[2] + 4) = 0;
      *(undefined4 *)((longlong)pauVar25[2] + 0xc) = 0;
      *(undefined8 *)pauVar25[3] = 0;
      *(undefined4 *)((longlong)pauVar25[3] + 8) = 0;
      *(undefined8 *)((longlong)pauVar25[3] + 0xc) = 0;
      *(undefined4 *)((longlong)pauVar25[4] + 4) = 0;
      *(undefined8 *)((longlong)pauVar25[4] + 8) = 0;
      *(undefined4 *)pauVar25[5] = 0;
      *(undefined4 *)((longlong)pauVar25[5] + 0xc) = 0;
      *(undefined8 *)((longlong)pauVar25[5] + 4) = 0;
      pauVar25 = pauVar25 + 6;
      uVar16 = uVar16 - 8;
    } while (uVar16 != 0);
    for (; uVar21 != 0; uVar21 = uVar21 - 1) {
LAB_140b1b99b:
      *(undefined4 *)((longlong)*pauVar25 + 8) = 0;
      *(undefined8 *)*pauVar25 = 0;
      pauVar25 = (undefined1 (*) [16])((longlong)*pauVar25 + 0xc);
    }
    *(undefined4 *)((longlong)*pauVar25 + 8) = 0;
    *(undefined8 *)*pauVar25 = 0;
  }
  lVar13 = lStack_2c0;
  pauVar25 = pauStack_110;
  for (uVar16 = ((ulonglong)pauStack_2b0 / 3) * 3; 2 < uVar16; uVar16 = uVar16 - 3) {
LAB_140b1bada:
    pauVar23 = (undefined1 (*) [16])(ulonglong)*(uint *)*pauVar12;
    if (pauVar25 <= pauVar23) {
      pauStack_170 = pauStack_148;
      pauStack_178 = pauStack_100;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pauVar23,pauVar25,&UNK_143055788);
    }
    pauVar11 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)*pauVar12 + 4);
    if (pauVar25 <= pauVar11) {
      pauStack_170 = pauStack_148;
      pauStack_178 = pauStack_100;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pauVar11,pauVar25,&UNK_1430557a0);
    }
    pauVar17 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)*pauVar12 + 8);
    if (pauVar25 <= pauVar17) {
      pauStack_170 = pauStack_148;
      pauStack_178 = pauStack_100;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pauVar17,pauVar25,&UNK_1430557b8);
    }
    if (pauVar10 <= pauVar23) {
      pauStack_170 = pauStack_148;
      pauStack_178 = pauStack_100;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pauVar23,pauVar10,&UNK_1430557d0);
    }
    if (pauVar10 <= pauVar11) {
      pauStack_170 = pauStack_148;
      pauStack_178 = pauStack_100;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pauVar11,pauVar10,&UNK_1430557e8);
    }
    if (pauVar10 <= pauVar17) {
      pauStack_170 = pauStack_148;
      pauStack_178 = pauStack_100;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pauVar17,pauVar10,&UNK_143055800);
    }
    uVar24 = *(undefined8 *)(lVar22 + (longlong)pauVar23 * 8);
    fVar44 = (float)uVar24;
    fVar51 = (float)((ulonglong)uVar24 >> 0x20);
    uVar15 = *(undefined8 *)(lVar22 + (longlong)pauVar11 * 8);
    uVar24 = *(undefined8 *)(lVar22 + (longlong)pauVar17 * 8);
    fVar55 = (float)((ulonglong)uVar15 >> 0x20) - fVar51;
    fVar56 = (float)uVar15 - fVar44;
    fVar44 = (float)uVar24 - fVar44;
    fVar51 = (float)((ulonglong)uVar24 >> 0x20) - fVar51;
    fVar52 = fVar56 * fVar51 - fVar55 * fVar44;
    if (fVar64 <= (float)((uint)fVar52 & uVar27)) {
      uVar24 = *(undefined8 *)(lVar13 + (longlong)pauVar23 * 0xc);
      fVar64 = *(float *)(lVar13 + 8 + (longlong)pauVar23 * 0xc);
      uVar15 = *(undefined8 *)(lVar13 + (longlong)pauVar11 * 0xc);
      uVar2 = *(undefined8 *)(lVar13 + (longlong)pauVar17 * 0xc);
      fVar31 = *(float *)(lVar13 + 8 + (longlong)pauVar17 * 0xc) - fVar64;
      fVar61 = (float)uVar24;
      fVar37 = (float)uVar2 - fVar61;
      fVar62 = (float)((ulonglong)uVar24 >> 0x20);
      fVar43 = (float)((ulonglong)uVar2 >> 0x20) - fVar62;
      fVar64 = *(float *)(lVar13 + 8 + (longlong)pauVar11 * 0xc) - fVar64;
      fVar61 = (float)uVar15 - fVar61;
      fVar62 = (float)((ulonglong)uVar15 >> 0x20) - fVar62;
      fVar52 = fVar8 / fVar52;
      fVar53 = (fVar64 * fVar51 - fVar31 * fVar55) * fVar52;
      fVar32 = (fVar31 * fVar56 - fVar64 * fVar44) * fVar52;
      lVar14 = (longlong)pauVar23 * 0xc;
      *(float *)(*pauStack_140 + lVar14 + 8) = *(float *)(*pauStack_140 + lVar14 + 8) + fVar53;
      uVar27 = _DAT_142e377e0;
      lVar6 = (longlong)pauVar11 * 0xc;
      lVar7 = (longlong)pauVar17 * 0xc;
      fVar54 = (fVar51 * fVar61 - fVar55 * fVar37) * fVar52;
      fVar55 = (fVar51 * fVar62 - fVar55 * fVar43) * fVar52;
      *(ulonglong *)(*pauStack_140 + lVar14) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(*pauStack_140 + lVar14) >> 0x20) + fVar55,
                    (float)*(undefined8 *)(*pauStack_140 + lVar14) + fVar54);
      *(float *)((longlong)*pauStack_100 + lVar14 + 8) =
           *(float *)((longlong)*pauStack_100 + lVar14 + 8) + fVar32;
      fVar31 = _DAT_142e36f28;
      fVar64 = _DAT_142e36f24;
      fVar51 = (fVar37 * fVar56 - fVar44 * fVar61) * fVar52;
      fVar52 = (fVar43 * fVar56 - fVar44 * fVar62) * fVar52;
      uVar24 = *(undefined8 *)((longlong)*pauStack_100 + lVar14);
      *(ulonglong *)((longlong)*pauStack_100 + lVar14) =
           CONCAT44((float)((ulonglong)uVar24 >> 0x20) + fVar52,(float)uVar24 + fVar51);
      *(ulonglong *)(*pauStack_140 + lVar6) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(*pauStack_140 + lVar6) >> 0x20) + fVar55,
                    (float)*(undefined8 *)(*pauStack_140 + lVar6) + fVar54);
      *(float *)(*pauStack_140 + lVar6 + 8) = *(float *)(*pauStack_140 + lVar6 + 8) + fVar53;
      uVar24 = *(undefined8 *)((longlong)*pauStack_100 + lVar6);
      *(ulonglong *)((longlong)*pauStack_100 + lVar6) =
           CONCAT44((float)((ulonglong)uVar24 >> 0x20) + fVar52,(float)uVar24 + fVar51);
      *(float *)((longlong)*pauStack_100 + lVar6 + 8) =
           *(float *)((longlong)*pauStack_100 + lVar6 + 8) + fVar32;
      *(ulonglong *)(*pauStack_140 + lVar7) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(*pauStack_140 + lVar7) >> 0x20) + fVar55,
                    (float)*(undefined8 *)(*pauStack_140 + lVar7) + fVar54);
      *(float *)(*pauStack_140 + lVar7 + 8) = fVar53 + *(float *)(*pauStack_140 + lVar7 + 8);
      uVar24 = *(undefined8 *)((longlong)*pauStack_100 + lVar7);
      *(ulonglong *)((longlong)*pauStack_100 + lVar7) =
           CONCAT44((float)((ulonglong)uVar24 >> 0x20) + fVar52,(float)uVar24 + fVar51);
      *(float *)((longlong)*pauStack_100 + lVar7 + 8) =
           fVar32 + *(float *)((longlong)*pauStack_100 + lVar7 + 8);
    }
    pauVar12 = (undefined1 (*) [16])((longlong)*pauVar12 + 0xc);
  }
  pdb_14007ee60();
  pauVar25 = pauStack_118;
  pauVar12 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauStack_118,4);
  if (pauVar12 == (undefined1 (*) [16])0x0) {
    pauStack_170 = pauStack_148;
    pauStack_178 = pauStack_100;
    pdb_142dc7e2a(4,pauVar25);
    goto LAB_140b1c67a;
  }
  pauStack_1d8 = pauStack_110;
  pauStack_1c8 = (undefined1 (*) [16])0x0;
  pauStack_1d0 = pauVar12;
  pdb_14007ee60();
  pauVar12 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar25,4);
  if (pauVar12 != (undefined1 (*) [16])0x0) {
LAB_140b1bdb3:
    pauVar10 = pauStack_188;
    pauVar23 = (undefined1 (*) [16])(((ulonglong)pauVar25 >> 2) * -0x5555555555555555);
    if (pauStack_180 <= pauVar23) {
      pauVar23 = pauStack_180;
    }
    pauStack_248 = (undefined1 (*) [16])0x0;
    pauVar25 = (undefined1 (*) [16])(((ulonglong)pauVar25 >> 2) * -0x5555555555555555);
    if (pauVar23 <= pauVar25) {
      pauVar25 = pauVar23;
    }
    pauStack_250 = pauVar12;
    if (pauVar25 != (undefined1 (*) [16])0x0) {
      lVar13 = 0;
      pauStack_258 = pauStack_110;
      do {
        pauVar12 = pauStack_1c8;
        fVar64 = *(float *)(*pauStack_140 + lVar13);
        fVar44 = *(float *)((longlong)*pauVar10 + lVar13);
        uVar24 = *(undefined8 *)((longlong)*pauVar10 + lVar13 + 4);
        fVar51 = (float)uVar24;
        fVar55 = (float)((ulonglong)uVar24 >> 0x20);
        fVar52 = fVar8 / SQRT(fVar55 * fVar55 + fVar44 * fVar44 + fVar51 * fVar51);
        uVar18 = (uint)((int)fVar52 - 1U < 0x7fffff ||
                       (int)ABS(fVar52) - 0x800000U < 0x7f000000 && -1 < (int)fVar52);
        uVar65 = (int)(uVar18 << 0x1f) >> 0x1f;
        uVar18 = (int)(uVar18 << 0x1f) >> 0x1f;
        fVar53 = (float)((uint)(fVar55 * fVar52) & uVar18);
        fVar43 = (float)((uint)(fVar51 * fVar52) & uVar65 | ~uVar65 & (uint)fVar31);
        fVar61 = (float)(uVar65 & (uint)(fVar55 * fVar52));
        fVar54 = (float)(uVar18 & (uint)(fVar44 * fVar52));
        uVar27 = (uint)((float)((uint)fVar43 & uVar27) < fVar45);
        uVar18 = (int)(uVar27 << 0x1f) >> 0x1f;
        fVar37 = (float)((int)(uVar27 << 0x1f) >> 0x1f & uVar63);
        fVar45 = (float)(uVar18 & uVar28 | ~uVar18 & (uint)fVar31);
        fVar52 = fVar43 * fVar45;
        fVar55 = fVar52 - fVar54 * fVar37;
        fVar56 = fVar53 * fVar37 - fVar43 * 0.0;
        fVar32 = fVar54 * 0.0 - fVar45 * fVar61;
        fVar71 = fVar8 / SQRT(fVar56 * fVar56 + fVar32 * fVar32 + fVar55 * fVar55);
        fVar44 = (float)*(undefined8 *)(*pauStack_140 + lVar13 + 4);
        fVar51 = (float)((ulonglong)*(undefined8 *)(*pauStack_140 + lVar13 + 4) >> 0x20);
        uVar24 = *(undefined8 *)((longlong)*pauStack_100 + lVar13);
        fVar62 = (float)uVar24;
        fVar68 = (float)((ulonglong)uVar24 >> 0x20);
        fVar45 = *(float *)((longlong)*pauStack_100 + lVar13 + 8);
        uVar27 = -(uint)(_DAT_143055650 < fVar45 * fVar45 + fVar68 * fVar68 + fVar62 * fVar62);
        uVar28 = -(uint)(_UNK_143055654 < fVar51 * fVar51 + fVar44 * fVar44 + fVar64 * fVar64);
        fVar55 = (float)((uint)fVar51 & uVar28 | ~uVar28 & (uint)(fVar55 * fVar71));
        fVar64 = (float)((uint)fVar64 & uVar28 | ~uVar28 & (uint)(fVar56 * fVar71));
        uVar16 = CONCAT44(~uVar28 & (uint)((fVar52 - fVar37 * fVar54) * fVar71),
                          ~uVar28 & (uint)(fVar32 * fVar71)) |
                 CONCAT44((uint)fVar51 & uVar28,(uint)fVar44 & uVar28);
        fVar44 = (float)uVar16;
        if ((uVar27 & 1) == 0) {
          fVar45 = fVar54 * fVar44 - fVar43 * fVar64;
        }
        if (pauStack_1c8 == pauStack_1d8) {
          pdb_142d7f010(&pauStack_1d8);
        }
        pauVar23 = pauStack_248;
        *(float *)((longlong)*pauStack_1d0 + (longlong)pauVar12 * 0xc) = fVar64;
        *(float *)((longlong)*pauStack_1d0 + (longlong)pauVar12 * 0xc + 4) = fVar44;
        *(float *)((longlong)*pauStack_1d0 + (longlong)pauVar12 * 0xc + 8) = fVar55;
        pauStack_1c8 = (undefined1 (*) [16])(*pauVar12 + 1);
        if (pauStack_248 == pauStack_258) {
          pdb_142d7f010(&pauStack_258);
        }
        *(ulonglong *)((longlong)*pauStack_250 + (longlong)pauVar23 * 0xc) =
             CONCAT44(~uVar27 & (uint)(fVar53 * fVar64 - fVar54 * (float)(uVar16 >> 0x20)),
                      ~uVar27 & (uint)(fVar43 * fVar55 - fVar61 * fVar44)) |
             CONCAT44((uint)fVar68 & uVar27,(uint)fVar62 & uVar27);
        *(float *)((longlong)*pauStack_250 + (longlong)pauVar23 * 0xc + 8) = fVar45;
        pauStack_248 = (undefined1 (*) [16])((longlong)*pauVar23 + 1);
        lVar13 = lVar13 + 0xc;
        pauVar25 = (undefined1 (*) [16])((longlong)pauVar25[-1] + 0xf);
        uVar28 = _DAT_142e378e0;
        uVar63 = _UNK_142e378e4;
        fVar45 = _DAT_143007998;
        uVar27 = _DAT_142e377e0;
      } while (pauVar25 != (undefined1 (*) [16])0x0);
      pauStack_110 = pauStack_258;
      fVar64 = _DAT_142e36f24;
    }
    pauVar25 = pauStack_248;
    iVar70 = _UNK_1430342ac;
    iVar69 = _UNK_1430342a8;
    iVar67 = _UNK_1430342a4;
    iVar66 = _DAT_1430342a0;
    iVar60 = _UNK_14303429c;
    iVar59 = _UNK_143034298;
    iVar58 = _UNK_143034294;
    iVar57 = _DAT_143034290;
    iVar36 = _UNK_14303428c;
    iVar35 = _UNK_143034288;
    iVar34 = _UNK_143034284;
    iVar30 = _DAT_143034280;
    pauStack_298 = pauStack_1c8;
    pauStack_2a8 = pauStack_1d8;
    pauStack_2a0 = pauStack_1d0;
    pauStack_258 = pauStack_110;
    pauStack_118 = pauStack_250;
    if (pauStack_148 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_100,(longlong)pauStack_148 * 0xc,4);
    }
    fVar31 = _DAT_142e36f28;
    if (pauStack_2b8 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_140,(longlong)pauStack_2b8 * 0xc,4);
    }
    pauStack_1c8 = pauStack_298;
    pauStack_1d8 = pauStack_2a8;
    pauStack_1d0 = pauStack_2a0;
    uStack_102 = 0;
    pdb_140c93200(&pauStack_348,&UNK_143055975,10,&pauStack_1d8);
    pauStack_258 = pauStack_110;
    pauStack_250 = pauStack_118;
    uStack_102 = 1;
    pauStack_248 = pauVar25;
    pdb_140c93200(&pauStack_348,&UNK_14305597f,10,&pauStack_258);
LAB_140b1c273:
    pauStack_1d0 = (undefined1 (*) [16])pdb_140f72a40;
    pauStack_1d8 = (undefined1 (*) [16])&lStack_3a8;
    pdb_140f60760(&pauStack_258,&UNK_143055858,&pauStack_1d8);
    param_2 = uStack_388;
    pauStack_100 = pauStack_258;
    pauStack_140 = pauStack_250;
    pdb_140a58820(uStack_388,0x1c,pauStack_250,pauStack_248,&pauStack_348);
    lVar13 = lStack_380;
    if (pauStack_100 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_140,(ulonglong)pauStack_100,1);
    }
    pdb_14098a960(&pauStack_348);
    pdb_1409875c0(&pauStack_3d8);
    puVar19 = puStack_390 + 0x1a;
    lVar22 = lStack_3a0 + 1;
    if ((puVar19 == (undefined8 *)0x0) || (puVar19 == puStack_398)) goto LAB_140b1a2c0;
    goto LAB_140b1a2e4;
  }
  pauStack_370 = pauStack_148;
  pauStack_378 = pauStack_100;
  pdb_142dc7e2a(4,pauVar25);
LAB_140b1c67a:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

