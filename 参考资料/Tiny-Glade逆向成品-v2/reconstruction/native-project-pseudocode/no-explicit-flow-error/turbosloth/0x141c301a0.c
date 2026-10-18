// VA 0x141c301a0, PDB extent 13829 bytes
// turbosloth::store::DiskStore::recipe_outcome_if_fresh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::DiskStore::recipe_outcome_if_fresh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 13829 */

undefined1 (*) [16]
pdb_141c301a0(undefined1 (*param_1) [16],ulonglong *******param_2,ulonglong *******param_3,
             ulonglong *****param_4,undefined8 param_5)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *****pppppuVar4;
  ulonglong *****pppppuVar5;
  undefined *puVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  ulonglong *puVar10;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  undefined8 uVar16;
  ulonglong ******ppppppuVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  ulonglong *******pppppppuVar22;
  ushort uVar23;
  longlong lVar24;
  ulonglong uVar25;
  bool bVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulonglong *******pppppppuVar33;
  ulonglong *******pppppppuStack_448;
  ulonglong uStack_440;
  undefined8 uStack_438;
  ulonglong *******pppppppuStack_430;
  ulonglong uStack_428;
  longlong lStack_420;
  ulonglong *******pppppppuStack_418;
  ulonglong uStack_410;
  longlong lStack_408;
  ulonglong *******pppppppuStack_400;
  ulonglong uStack_3f8;
  longlong lStack_3f0;
  undefined8 *******pppppppuStack_3e8;
  ulonglong *******pppppppuStack_3e0;
  undefined *puStack_3d8;
  ulonglong *******pppppppuStack_3d0;
  ulonglong uStack_3c8;
  longlong lStack_3c0;
  undefined8 *******pppppppuStack_3b8;
  ulonglong *******pppppppuStack_3b0;
  undefined *puStack_3a8;
  undefined8 *******pppppppuStack_3a0;
  ulonglong *******pppppppuStack_398;
  undefined *puStack_390;
  undefined8 *******pppppppuStack_388;
  ulonglong *******pppppppuStack_380;
  undefined *puStack_378;
  undefined8 *******pppppppuStack_370;
  undefined8 uStack_368;
  longlong lStack_360;
  undefined8 *******pppppppuStack_358;
  ulonglong *******pppppppuStack_350;
  undefined *puStack_348;
  ulonglong *******pppppppuStack_340;
  undefined8 uStack_338;
  ulonglong *******pppppppuStack_330;
  ulonglong uStack_328;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2e8;
  longlong lStack_2e0;
  ulonglong *******pppppppuStack_2d0;
  longlong lStack_2c8;
  ulonglong uStack_2c0;
  char cStack_2b8;
  ulonglong *******pppppppuStack_2a8;
  ulonglong ******ppppppuStack_2a0;
  ulonglong *******pppppppuStack_298;
  ulonglong *******pppppppuStack_290;
  ulonglong *******pppppppuStack_288;
  ulonglong uStack_280;
  undefined8 uStack_278;
  ulonglong *******pppppppuStack_270;
  ulonglong *******pppppppuStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  ulonglong *******pppppppuStack_240;
  ulonglong *******pppppppuStack_238;
  undefined *puStack_230;
  ulonglong *******pppppppuStack_228;
  ulonglong *******pppppppuStack_220;
  undefined *puStack_218;
  ulonglong *******pppppppuStack_210;
  ulonglong *******pppppppuStack_208;
  undefined *puStack_200;
  ulonglong *******pppppppuStack_1a8;
  undefined1 (*pauStack_1a0) [16];
  ulonglong *******pppppppuStack_198;
  ulonglong *****pppppuStack_190;
  ulonglong *******pppppppuStack_188;
  ulonglong *******pppppppuStack_180;
  undefined *puStack_178;
  ulonglong *******pppppppuStack_170;
  ulonglong *******pppppppuStack_168;
  undefined *puStack_160;
  ulonglong *******pppppppuStack_158;
  ulonglong *******pppppppuStack_150;
  undefined *puStack_148;
  ulonglong *******pppppppuStack_140;
  ulonglong *******pppppppuStack_138;
  ulonglong *******pppppppuStack_130;
  ulonglong uStack_128;
  longlong lStack_120;
  ulonglong *******pppppppuStack_118;
  ulonglong uStack_110;
  undefined8 *******pppppppuStack_108;
  ulonglong *******pppppppuStack_100;
  undefined *puStack_f8;
  ulonglong *******pppppppuStack_f0;
  undefined8 uStack_e8;
  ulonglong *******pppppppuStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  undefined8 *******pppppppuStack_b8;
  ulonglong *******pppppppuStack_b0;
  undefined *puStack_a8;
  ulonglong *******pppppppuStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_88;
  ulonglong *******pppppppuStack_80;
  undefined *puStack_78;
  ulonglong *******pppppppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pppppppuVar33 = param_2 + 0xd;
  LOCK();
  bVar26 = *(char *)(param_2 + 0xd) == '\0';
  if (bVar26) {
    *(char *)(param_2 + 0xd) = '\x01';
  }
  UNLOCK();
  pppppppuStack_198 = param_3;
  pppppuStack_190 = param_4;
  if (!bVar26) {
    pdb_142dc6be0(pppppppuVar33);
  }
  puVar10 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bVar14 = 0;
    cVar13 = *(char *)((longlong)param_2 + 0x69);
  }
  else {
    bVar14 = pdb_142dc79e0();
    bVar14 = bVar14 ^ 1;
    cVar13 = *(char *)((longlong)param_2 + 0x69);
  }
  if (cVar13 != '\0') {
    uVar19 = (ulonglong)uStack_250 >> 8;
    uStack_250 = (ulonglong *******)CONCAT71((int7)uVar19,bVar14);
    uStack_258 = pppppppuVar33;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339fb38,0x2b,&uStack_258,&UNK_14339fc88,&UNK_14339f818);
  }
  if (param_2[0x11] != (ulonglong ******)0x0) {
    ppppppuVar17 = param_2[0xe];
    bVar27 = (byte)((ulonglong)pppppppuStack_198 >> 0x39);
    auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
    auVar28 = pshuflw(auVar28,auVar28,0);
    lVar24 = 0;
    pppppppuVar20 = pppppppuStack_198;
    while( true ) {
      uVar19 = (ulonglong)pppppppuVar20 & (ulonglong)param_2[0xf];
      auVar30 = *(undefined1 (*) [16])((longlong)ppppppuVar17 + uVar19);
      auVar32[0] = -(auVar30[0] == auVar28[0]);
      auVar32[1] = -(auVar30[1] == auVar28[1]);
      auVar32[2] = -(auVar30[2] == auVar28[2]);
      auVar32[3] = -(auVar30[3] == auVar28[3]);
      auVar32[4] = -(auVar30[4] == auVar28[4]);
      auVar32[5] = -(auVar30[5] == auVar28[5]);
      auVar32[6] = -(auVar30[6] == auVar28[6]);
      auVar32[7] = -(auVar30[7] == auVar28[7]);
      auVar32[8] = -(auVar30[8] == auVar28[0]);
      auVar32[9] = -(auVar30[9] == auVar28[1]);
      auVar32[10] = -(auVar30[10] == auVar28[2]);
      auVar32[0xb] = -(auVar30[0xb] == auVar28[3]);
      auVar32[0xc] = -(auVar30[0xc] == auVar28[4]);
      auVar32[0xd] = -(auVar30[0xd] == auVar28[5]);
      auVar32[0xe] = -(auVar30[0xe] == auVar28[6]);
      auVar32[0xf] = -(auVar30[0xf] == auVar28[7]);
      uVar23 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar23;
      while (uVar23 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar15; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        uVar25 = uVar2 + uVar19 & (ulonglong)param_2[0xf];
        pppppppuStack_298 = pppppppuVar33;
        pppppppuStack_290 = param_2;
        if ((ulonglong *******)ppppppuVar17[uVar25 * -4 + -4] == pppppppuStack_198 &&
            ppppppuVar17[uVar25 * -4 + -3] == pppppuStack_190) {
          pppppuVar4 = ppppppuVar17[uVar25 * -4 + -2];
          pppppuVar5 = ppppppuVar17[uVar25 * -4 + -1];
          *param_1 = (undefined1  [16])0x0;
          *(ulonglong ******)param_1[1] = pppppuVar4;
          *(ulonglong ******)(param_1[1] + 8) = pppppuVar5;
          pppppppuStack_270 = param_3;
          if (((bVar14 == 0) && ((*puVar10 & 0x7fffffffffffffff) != 0)) &&
             (cVar13 = pdb_142dc79e0(), cVar13 == '\0')) {
            *(undefined1 *)((longlong)pppppppuStack_290 + 0x69) = 1;
          }
          LOCK();
          cVar13 = *(char *)pppppppuStack_298;
          *(char *)pppppppuStack_298 = '\0';
          UNLOCK();
          if (cVar13 != '\x02') {
            return param_1;
          }
          pdb_142dc6ca0();
          return param_1;
        }
        uVar23 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar23);
      }
      auVar31[0] = -(auVar30[0] == -1);
      auVar31[1] = -(auVar30[1] == -1);
      auVar31[2] = -(auVar30[2] == -1);
      auVar31[3] = -(auVar30[3] == -1);
      auVar31[4] = -(auVar30[4] == -1);
      auVar31[5] = -(auVar30[5] == -1);
      auVar31[6] = -(auVar30[6] == -1);
      auVar31[7] = -(auVar30[7] == -1);
      auVar31[8] = -(auVar30[8] == -1);
      auVar31[9] = -(auVar30[9] == -1);
      auVar31[10] = -(auVar30[10] == -1);
      auVar31[0xb] = -(auVar30[0xb] == -1);
      auVar31[0xc] = -(auVar30[0xc] == -1);
      auVar31[0xd] = -(auVar30[0xd] == -1);
      auVar31[0xe] = -(auVar30[0xe] == -1);
      auVar31[0xf] = -(auVar30[0xf] == -1);
      pppppppuStack_270 = param_3;
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      pppppppuVar20 = (ulonglong *******)(uVar19 + lVar24 + 0x10);
      lVar24 = lVar24 + 0x10;
    }
  }
  if (((bVar14 == 0) && ((*puVar10 & 0x7fffffffffffffff) != 0)) &&
     (cVar13 = pdb_142dc79e0(), cVar13 == '\0')) {
    *(undefined1 *)((longlong)param_2 + 0x69) = 1;
  }
  LOCK();
  cVar13 = *(char *)pppppppuVar33;
  *(char *)pppppppuVar33 = '\0';
  UNLOCK();
  if (cVar13 == '\x02') {
    pdb_142dc6ca0(pppppppuVar33);
  }
  pppppppuVar20 = param_2;
  pdb_141c2f990(&uStack_258,param_2,param_3,param_4);
  auVar28[0] = -((char)uStack_258 == DAT_14300c7d0);
  auVar28[1] = -(uStack_258._1_1_ == UNK_14300c7d1);
  auVar28[2] = -(uStack_258._2_1_ == UNK_14300c7d2);
  auVar28[3] = -(uStack_258._3_1_ == UNK_14300c7d3);
  auVar28[4] = -(uStack_258._4_1_ == UNK_14300c7d4);
  auVar28[5] = -(uStack_258._5_1_ == UNK_14300c7d5);
  auVar28[6] = -(uStack_258._6_1_ == UNK_14300c7d6);
  auVar28[7] = -(uStack_258._7_1_ == UNK_14300c7d7);
  auVar28[8] = -((char)uStack_250 == UNK_14300c7d8);
  auVar28[9] = -(uStack_250._1_1_ == UNK_14300c7d9);
  auVar28[10] = -(uStack_250._2_1_ == UNK_14300c7da);
  auVar28[0xb] = -(uStack_250._3_1_ == UNK_14300c7db);
  auVar28[0xc] = -(uStack_250._4_1_ == UNK_14300c7dc);
  auVar28[0xd] = -(uStack_250._5_1_ == UNK_14300c7dd);
  auVar28[0xe] = -(uStack_250._6_1_ == UNK_14300c7de);
  auVar28[0xf] = -(uStack_250._7_1_ == UNK_14300c7df);
  if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf)
      == 0xffff) {
    if (*_DAT_143ca4b08 < 2) {
      pppppppuVar20 = (ulonglong *******)(ulonglong)DAT_143cad9d8;
      if (2 < DAT_143cad9d8) {
        uVar15 = pdb_142db8070(&DAT_143cad9c8);
        pppppppuVar20 = (ulonglong *******)(ulonglong)uVar15;
        if ((char)uVar15 != '\0') goto LAB_141c303aa;
        goto LAB_141c311f2;
      }
      if (DAT_143cad9d8 == 0) goto LAB_141c311f2;
LAB_141c303aa:
      cVar13 = pdb_140dd7f60(_DAT_143cad9c8);
      if (cVar13 == '\0') goto LAB_141c311f2;
      pppppppuStack_350 = *(ulonglong ********)(_DAT_143cad9c8 + 0x38);
      if (pppppppuStack_350 != (ulonglong *******)0x0) {
        pppppppuStack_358 = *(undefined8 ********)(_DAT_143cad9c8 + 0x30);
        puStack_348 = *(undefined **)(_DAT_143cad9c8 + 0x40);
        pppppppuStack_340 = *(ulonglong ********)(_DAT_143cad9c8 + 0x48);
        pppppppuStack_168 = (ulonglong *******)0x0;
        pppppppuStack_d8 = (ulonglong *******)&UNK_14339fab0;
        uStack_d0 = 0x3b;
        pppppppuStack_188 = pppppppuStack_358;
        pppppppuStack_180 = pppppppuStack_350;
        puStack_178 = puStack_348;
        pppppppuStack_170 = pppppppuStack_340;
        if (pppppppuStack_350 == (ulonglong *******)0x1) goto LAB_141c32f60;
        puStack_f8 = (undefined *)(_DAT_143cad9c8 + 0x30);
        uStack_338 = 1;
        pppppppuStack_130 = (ulonglong *******)&pppppppuStack_198;
        uStack_258 = (ulonglong *******)&pppppppuStack_188;
        uStack_250 = (ulonglong *******)&pppppppuStack_d8;
        puStack_248 = &UNK_14339f0f8;
        pppppppuStack_240 = (ulonglong *******)&pppppppuStack_358;
        pppppppuStack_238 = (ulonglong *******)&pppppppuStack_130;
        puStack_230 = &UNK_14339f118;
        pppppppuStack_100 = (ulonglong *******)0x2;
        pppppppuVar33 = (ulonglong *******)&pppppppuStack_108;
        pppppppuVar20 = pppppppuVar33;
        pppppppuStack_108 = (undefined8 *******)&uStack_258;
        pdb_140dd9020();
        lVar24 = _DAT_143cad9c8;
        if ((*_DAT_143ca4ab0 != '\0') || (*_DAT_143ca8e90 < 4)) goto LAB_141c313a7;
        pppppppuStack_b0 = *(ulonglong ********)(_DAT_143cad9c8 + 0x20);
        puStack_a8 = *(undefined **)(_DAT_143cad9c8 + 0x28);
        pppppppuStack_b8 = (undefined8 *******)0x4;
        uVar16 = pdb_140f33290();
        cVar13 = (*(code *)pppppppuVar20[3])(uVar16,&pppppppuStack_b8);
        if (cVar13 == '\0') goto LAB_141c313a7;
        puStack_78 = puStack_a8;
        pppppppuStack_88 = pppppppuStack_b8;
        pppppppuStack_80 = pppppppuStack_b0;
LAB_141c31392:
        pdb_140dd7f80(lVar24,uVar16,pppppppuVar20,&pppppppuStack_88,pppppppuVar33);
LAB_141c313a7:
        *(undefined8 *)(*param_1 + 8) = 0;
        *(undefined8 *)*param_1 = 2;
        return param_1;
      }
    }
    else {
LAB_141c311f2:
      lVar24 = _DAT_143cad9c8;
      if ((*_DAT_143ca4ab0 != '\0') || (*_DAT_143ca8e90 < 4)) goto LAB_141c313a7;
      uStack_368 = *(undefined8 *)(_DAT_143cad9c8 + 0x20);
      lStack_360 = *(longlong *)(_DAT_143cad9c8 + 0x28);
      pppppppuStack_370 = (undefined8 *******)0x4;
      uVar16 = pdb_140f33290();
      cVar13 = (*(code *)pppppppuVar20[3])(uVar16,&pppppppuStack_370);
      if (cVar13 == '\0') goto LAB_141c313a7;
      pppppppuStack_350 = *(ulonglong ********)(_DAT_143cad9c8 + 0x38);
      if (pppppppuStack_350 != (ulonglong *******)0x0) {
        pppppppuStack_358 = *(undefined8 ********)(_DAT_143cad9c8 + 0x30);
        puStack_348 = *(undefined **)(_DAT_143cad9c8 + 0x40);
        pppppppuStack_340 = *(ulonglong ********)(_DAT_143cad9c8 + 0x48);
        pppppppuStack_168 = (ulonglong *******)0x0;
        pppppppuStack_108 = (undefined8 *******)&UNK_14339fab0;
        pppppppuStack_100 = (ulonglong *******)0x3b;
        pppppppuStack_188 = pppppppuStack_358;
        pppppppuStack_180 = pppppppuStack_350;
        puStack_178 = puStack_348;
        pppppppuStack_170 = pppppppuStack_340;
        if (pppppppuStack_350 != (ulonglong *******)0x1) {
          puStack_a8 = (undefined *)(_DAT_143cad9c8 + 0x30);
          uStack_338 = 1;
          pppppppuStack_d8 = (ulonglong *******)&pppppppuStack_198;
          uStack_258 = (ulonglong *******)&pppppppuStack_188;
          uStack_250 = (ulonglong *******)&pppppppuStack_108;
          puStack_248 = &UNK_14339f0f8;
          pppppppuStack_240 = (ulonglong *******)&pppppppuStack_358;
          pppppppuStack_238 = (ulonglong *******)&pppppppuStack_d8;
          puStack_230 = &UNK_14339f118;
          pppppppuStack_b0 = (ulonglong *******)0x2;
          puStack_78 = (undefined *)lStack_360;
          pppppppuStack_88 = pppppppuStack_370;
          pppppppuStack_80 = (ulonglong *******)uStack_368;
          pppppppuVar33 = (ulonglong *******)&pppppppuStack_b8;
          pppppppuStack_b8 = (undefined8 *******)&uStack_258;
          goto LAB_141c31392;
        }
      }
    }
LAB_141c32f60:
    pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa98);
LAB_141c32f79:
    pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f830);
LAB_141c335bc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pauStack_1a0 = param_1;
  pub_142e32760(&pppppppuStack_358,&uStack_258,0xb0);
  if (pppppppuStack_358 == (undefined8 *******)0x0 && pppppppuStack_350 == (ulonglong *******)0x0) {
    pdb_141c2e960(&pppppppuStack_88,param_2,param_3,param_4);
    pppppppuStack_270 = pppppppuStack_80;
    pdb_140f4f620(&uStack_258,pppppppuStack_80,puStack_78);
    if ((int)uStack_258 == 2) {
      pppppppuStack_188 = (undefined8 *******)0x2;
    }
    else {
      pppppppuStack_188 = uStack_258;
      pppppppuStack_180 = uStack_250;
      puStack_178 = puStack_248;
      pppppppuStack_170 = pppppppuStack_240;
      pppppppuStack_168 = pppppppuStack_238;
      puStack_160 = puStack_230;
      pppppppuStack_158 = pppppppuStack_228;
      pppppppuStack_150 = pppppppuStack_220;
      pppppppuStack_138 = pppppppuStack_208;
      puStack_148 = puStack_218;
      pppppppuStack_140 = pppppppuStack_210;
      if (uStack_258 != (undefined8 *******)0x2) {
        if (pppppppuStack_88 != (undefined8 *******)0x0) {
          pub_1406abac0((byte *)pppppppuStack_270,(ulonglong)pppppppuStack_88,1);
        }
        goto LAB_141c305db;
      }
    }
    pppppppuStack_180 = uStack_250;
    pdb_1404b38e0(&pppppppuStack_180);
    pppppppuVar21 = pppppppuStack_88;
    if (pppppppuStack_88 != (undefined8 *******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_270,(ulonglong)pppppppuStack_88,1);
    }
    if (*_DAT_143ca4b08 < 2) {
      pppppppuVar21 = (undefined8 *******)(ulonglong)DAT_143cad9a8;
      if (2 < DAT_143cad9a8) {
        uVar15 = pdb_142db8070(&DAT_143cad998);
        pppppppuVar21 = (undefined8 *******)(ulonglong)uVar15;
        if ((char)uVar15 != '\0') goto LAB_141c30c38;
        goto LAB_141c313d2;
      }
      if (DAT_143cad9a8 == 0) goto LAB_141c313d2;
LAB_141c30c38:
      cVar13 = pdb_140dd7f60(_DAT_143cad998);
      if (cVar13 == '\0') goto LAB_141c313d2;
      pppppppuVar33 = *(ulonglong ********)(_DAT_143cad998 + 0x38);
      if (pppppppuVar33 != (ulonglong *******)0x0) {
        pppppppuStack_88 = *(undefined8 ********)(_DAT_143cad998 + 0x30);
        puStack_78 = *(undefined **)(_DAT_143cad998 + 0x40);
        pppppppuStack_70 = *(ulonglong ********)(_DAT_143cad998 + 0x48);
        uStack_68 = 0;
        pppppppuStack_108 = (undefined8 *******)&UNK_14339f848;
        pppppppuStack_100 = (ulonglong *******)0x33;
        pppppppuStack_80 = pppppppuVar33;
        if (pppppppuVar33 == (ulonglong *******)0x1) {
          pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f830);
          goto LAB_141c335bc;
        }
        puStack_a8 = (undefined *)(_DAT_143cad998 + 0x30);
        pppppppuStack_168 = (ulonglong *******)0x1;
        pppppppuStack_d8 = (ulonglong *******)&pppppppuStack_198;
        uStack_250 = (ulonglong *******)&pppppppuStack_108;
        puStack_248 = &UNK_14339f0f8;
        pppppppuStack_240 = (ulonglong *******)&pppppppuStack_188;
        pppppppuStack_238 = (ulonglong *******)&pppppppuStack_d8;
        puStack_230 = &UNK_14339f118;
        pppppppuStack_b0 = (ulonglong *******)0x2;
        uStack_258 = (ulonglong *******)&pppppppuStack_88;
        pppppppuStack_188 = pppppppuStack_88;
        pppppppuStack_180 = pppppppuVar33;
        puStack_178 = puStack_78;
        pppppppuStack_170 = pppppppuStack_70;
        pppppppuStack_b8 = (undefined8 *******)&uStack_258;
        pdb_141c339c0(&pppppppuStack_b8);
        goto LAB_141c32f20;
      }
      goto LAB_141c32f79;
    }
LAB_141c313d2:
    lVar24 = _DAT_143cad998;
    if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
      pppppppuStack_380 = *(ulonglong ********)(_DAT_143cad998 + 0x20);
      puStack_378 = *(undefined **)(_DAT_143cad998 + 0x28);
      pppppppuStack_388 = (undefined8 *******)0x4;
      uVar16 = pdb_140f33290();
      cVar13 = (*(code *)pppppppuVar21[3])(uVar16,&pppppppuStack_388);
      if (cVar13 != '\0') {
        pppppppuVar33 = *(ulonglong ********)(_DAT_143cad998 + 0x38);
        if (pppppppuVar33 == (ulonglong *******)0x0) {
          pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f830);
          goto LAB_141c335bc;
        }
        pppppppuStack_88 = *(undefined8 ********)(_DAT_143cad998 + 0x30);
        puStack_78 = *(undefined **)(_DAT_143cad998 + 0x40);
        pppppppuStack_70 = *(ulonglong ********)(_DAT_143cad998 + 0x48);
        uStack_68 = 0;
        pppppppuStack_d8 = (ulonglong *******)&UNK_14339f848;
        uStack_d0 = 0x33;
        pppppppuStack_80 = pppppppuVar33;
        if (pppppppuVar33 == (ulonglong *******)0x1) {
          pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f830);
          goto LAB_141c335bc;
        }
        puStack_f8 = (undefined *)(_DAT_143cad998 + 0x30);
        pppppppuStack_168 = (ulonglong *******)0x1;
        pppppppuStack_130 = (ulonglong *******)&pppppppuStack_198;
        uStack_250 = (ulonglong *******)&pppppppuStack_d8;
        puStack_248 = &UNK_14339f0f8;
        pppppppuStack_240 = (ulonglong *******)&pppppppuStack_188;
        pppppppuStack_238 = (ulonglong *******)&pppppppuStack_130;
        puStack_230 = &UNK_14339f118;
        pppppppuStack_100 = (ulonglong *******)0x2;
        puStack_a8 = puStack_378;
        pppppppuStack_b8 = pppppppuStack_388;
        pppppppuStack_b0 = pppppppuStack_380;
        uStack_258 = (ulonglong *******)&pppppppuStack_88;
        pppppppuStack_188 = pppppppuStack_88;
        pppppppuStack_180 = pppppppuVar33;
        puStack_178 = puStack_78;
        pppppppuStack_170 = pppppppuStack_70;
        pppppppuStack_108 = (undefined8 *******)&uStack_258;
        pdb_140dd7f80(lVar24,uVar16,pppppppuVar21,&pppppppuStack_b8,&pppppppuStack_108);
      }
    }
  }
  else {
LAB_141c305db:
    if (cStack_2b8 == '\0') {
      uVar19 = uStack_328;
      lVar24 = pdb_142565cc0(pppppppuStack_330);
      if (lVar24 == 1) {
        if (uVar19 == uStack_2c0) goto LAB_141c305e8;
        if (*_DAT_143ca4b08 < 3) {
          uVar19 = (ulonglong)DAT_143cada20;
          bVar14 = DAT_143cada20;
          if (2 < DAT_143cada20) {
            uVar15 = pdb_142db8070(&DAT_143cada10);
            uVar19 = (ulonglong)uVar15;
            bVar14 = (byte)uVar15;
          }
          if ((bVar14 != 0) && (cVar13 = pdb_140dd7f60(_DAT_143cada10), cVar13 != '\0')) {
            pppppppuVar33 = *(ulonglong ********)(_DAT_143cada10 + 0x38);
            if (pppppppuVar33 == (ulonglong *******)0x0) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f8d8);
              goto LAB_141c335bc;
            }
            pppppppuStack_b8 = *(undefined8 ********)(_DAT_143cada10 + 0x30);
            puStack_a8 = *(undefined **)(_DAT_143cada10 + 0x40);
            pppppppuStack_a0 = *(ulonglong ********)(_DAT_143cada10 + 0x48);
            uStack_98 = 0;
            pppppppuStack_130 = (ulonglong *******)&UNK_14339f8f0;
            uStack_128 = 0x39;
            pppppppuStack_b0 = pppppppuVar33;
            if (pppppppuVar33 == (ulonglong *******)0x1) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f8d8);
              goto LAB_141c335bc;
            }
            uStack_68 = 1;
            pppppppuStack_288 = (ulonglong *******)&pppppppuStack_198;
            pppppppuStack_88 = pppppppuStack_b8;
            pppppppuStack_80 = pppppppuVar33;
            puStack_78 = puStack_a8;
            pppppppuStack_70 = pppppppuStack_a0;
            if (pppppppuVar33 < (ulonglong *******)0x3) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f8d8);
              goto LAB_141c335bc;
            }
            puStack_f8 = (undefined *)(_DAT_143cada10 + 0x30);
            pppppppuStack_168 = (ulonglong *******)0x2;
            pppppppuStack_d8 = pppppppuStack_330;
            uStack_d0 = uStack_328;
            uStack_258 = (ulonglong *******)&pppppppuStack_b8;
            uStack_250 = (ulonglong *******)&pppppppuStack_130;
            puStack_248 = &UNK_14339f0f8;
            pppppppuStack_240 = (ulonglong *******)&pppppppuStack_88;
            pppppppuStack_238 = (ulonglong *******)&pppppppuStack_288;
            puStack_230 = &UNK_14339f118;
            pppppppuStack_228 = (ulonglong *******)&pppppppuStack_188;
            pppppppuStack_220 = (ulonglong *******)&pppppppuStack_d8;
            puStack_218 = &UNK_14339f8b8;
            pppppppuStack_108 = (undefined8 *******)&uStack_258;
            pppppppuStack_100 = (ulonglong *******)0x3;
            pppppppuStack_188 = pppppppuStack_b8;
            pppppppuStack_180 = pppppppuVar33;
            puStack_178 = puStack_a8;
            pppppppuStack_170 = pppppppuStack_a0;
            pdb_141c33bd0(&pppppppuStack_108);
            goto LAB_141c32f20;
          }
        }
        lVar24 = _DAT_143cada10;
        if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
          pppppppuStack_398 = *(ulonglong ********)(_DAT_143cada10 + 0x20);
          puStack_390 = *(undefined **)(_DAT_143cada10 + 0x28);
          pppppppuStack_3a0 = (undefined8 *******)0x3;
          uVar16 = pdb_140f33290();
          cVar13 = (**(code **)(uVar19 + 0x18))(uVar16,&pppppppuStack_3a0);
          if (cVar13 != '\0') {
            pppppppuVar33 = *(ulonglong ********)(_DAT_143cada10 + 0x38);
            if (pppppppuVar33 == (ulonglong *******)0x0) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f8d8);
              goto LAB_141c335bc;
            }
            pppppppuStack_b8 = *(undefined8 ********)(_DAT_143cada10 + 0x30);
            puStack_a8 = *(undefined **)(_DAT_143cada10 + 0x40);
            pppppppuStack_a0 = *(ulonglong ********)(_DAT_143cada10 + 0x48);
            uStack_98 = 0;
            pppppppuStack_288 = (ulonglong *******)&UNK_14339f8f0;
            uStack_280 = 0x39;
            pppppppuStack_b0 = pppppppuVar33;
            if (pppppppuVar33 == (ulonglong *******)0x1) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f8d8);
              goto LAB_141c335bc;
            }
            uStack_68 = 1;
            pppppppuStack_118 = (ulonglong *******)&pppppppuStack_198;
            pppppppuStack_88 = pppppppuStack_b8;
            pppppppuStack_80 = pppppppuVar33;
            puStack_78 = puStack_a8;
            pppppppuStack_70 = pppppppuStack_a0;
            if (pppppppuVar33 < (ulonglong *******)0x3) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f8d8);
              goto LAB_141c335bc;
            }
            lStack_c8 = _DAT_143cada10 + 0x30;
            pppppppuStack_168 = (ulonglong *******)0x2;
            pppppppuStack_130 = pppppppuStack_330;
            uStack_128 = uStack_328;
            uStack_258 = (ulonglong *******)&pppppppuStack_b8;
            uStack_250 = (ulonglong *******)&pppppppuStack_288;
            puStack_248 = &UNK_14339f0f8;
            pppppppuStack_240 = (ulonglong *******)&pppppppuStack_88;
            pppppppuStack_238 = (ulonglong *******)&pppppppuStack_118;
            puStack_230 = &UNK_14339f118;
            pppppppuStack_228 = (ulonglong *******)&pppppppuStack_188;
            pppppppuStack_220 = (ulonglong *******)&pppppppuStack_130;
            puStack_218 = &UNK_14339f8b8;
            pppppppuStack_d8 = (ulonglong *******)&uStack_258;
            uStack_d0 = 3;
            puStack_f8 = puStack_390;
            pppppppuStack_108 = pppppppuStack_3a0;
            pppppppuStack_100 = pppppppuStack_398;
            pppppppuStack_188 = pppppppuStack_b8;
            pppppppuStack_180 = pppppppuVar33;
            puStack_178 = puStack_a8;
            pppppppuStack_170 = pppppppuStack_a0;
            pdb_140dd7f80(lVar24,uVar16,uVar19,&pppppppuStack_108,&pppppppuStack_d8);
          }
        }
      }
      else {
        if (*_DAT_143ca4b08 < 3) {
          uVar19 = (ulonglong)DAT_143cad990;
          bVar14 = DAT_143cad990;
          if (2 < DAT_143cad990) {
            uVar15 = pdb_142db8070(&DAT_143cad980);
            uVar19 = (ulonglong)uVar15;
            bVar14 = (byte)uVar15;
          }
          if ((bVar14 != 0) && (cVar13 = pdb_140dd7f60(_DAT_143cad980), cVar13 != '\0')) {
            pppppppuVar33 = *(ulonglong ********)(_DAT_143cad980 + 0x38);
            if (pppppppuVar33 == (ulonglong *******)0x0) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f868);
              goto LAB_141c335bc;
            }
            pppppppuStack_b8 = *(undefined8 ********)(_DAT_143cad980 + 0x30);
            puStack_a8 = *(undefined **)(_DAT_143cad980 + 0x40);
            pppppppuStack_a0 = *(ulonglong ********)(_DAT_143cad980 + 0x48);
            uStack_98 = 0;
            pppppppuStack_130 = (ulonglong *******)&UNK_14339f880;
            uStack_128 = 0x6b;
            pppppppuStack_b0 = pppppppuVar33;
            if (pppppppuVar33 == (ulonglong *******)0x1) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f868);
              goto LAB_141c335bc;
            }
            uStack_68 = 1;
            pppppppuStack_288 = (ulonglong *******)&pppppppuStack_198;
            pppppppuStack_88 = pppppppuStack_b8;
            pppppppuStack_80 = pppppppuVar33;
            puStack_78 = puStack_a8;
            pppppppuStack_70 = pppppppuStack_a0;
            if (pppppppuVar33 < (ulonglong *******)0x3) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f868);
              goto LAB_141c335bc;
            }
            puStack_f8 = (undefined *)(_DAT_143cad980 + 0x30);
            pppppppuStack_168 = (ulonglong *******)0x2;
            pppppppuStack_d8 = pppppppuStack_330;
            uStack_d0 = uStack_328;
            uStack_258 = (ulonglong *******)&pppppppuStack_b8;
            uStack_250 = (ulonglong *******)&pppppppuStack_130;
            puStack_248 = &UNK_14339f0f8;
            pppppppuStack_240 = (ulonglong *******)&pppppppuStack_88;
            pppppppuStack_238 = (ulonglong *******)&pppppppuStack_288;
            puStack_230 = &UNK_14339f118;
            pppppppuStack_228 = (ulonglong *******)&pppppppuStack_188;
            pppppppuStack_220 = (ulonglong *******)&pppppppuStack_d8;
            puStack_218 = &UNK_14339f8b8;
            pppppppuStack_108 = (undefined8 *******)&uStack_258;
            pppppppuStack_100 = (ulonglong *******)0x3;
            pppppppuStack_188 = pppppppuStack_b8;
            pppppppuStack_180 = pppppppuVar33;
            puStack_178 = puStack_a8;
            pppppppuStack_170 = pppppppuStack_a0;
            pdb_141c33910(&pppppppuStack_108);
            goto LAB_141c32f20;
          }
        }
        lVar24 = _DAT_143cad980;
        if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
          pppppppuStack_3b0 = *(ulonglong ********)(_DAT_143cad980 + 0x20);
          puStack_3a8 = *(undefined **)(_DAT_143cad980 + 0x28);
          pppppppuStack_3b8 = (undefined8 *******)0x3;
          uVar16 = pdb_140f33290();
          cVar13 = (**(code **)(uVar19 + 0x18))(uVar16,&pppppppuStack_3b8);
          if (cVar13 != '\0') {
            pppppppuVar33 = *(ulonglong ********)(_DAT_143cad980 + 0x38);
            if (pppppppuVar33 == (ulonglong *******)0x0) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f868);
              goto LAB_141c335bc;
            }
            pppppppuStack_b8 = *(undefined8 ********)(_DAT_143cad980 + 0x30);
            puStack_a8 = *(undefined **)(_DAT_143cad980 + 0x40);
            pppppppuStack_a0 = *(ulonglong ********)(_DAT_143cad980 + 0x48);
            uStack_98 = 0;
            pppppppuStack_288 = (ulonglong *******)&UNK_14339f880;
            uStack_280 = 0x6b;
            pppppppuStack_b0 = pppppppuVar33;
            if (pppppppuVar33 == (ulonglong *******)0x1) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f868);
              goto LAB_141c335bc;
            }
            uStack_68 = 1;
            pppppppuStack_118 = (ulonglong *******)&pppppppuStack_198;
            pppppppuStack_88 = pppppppuStack_b8;
            pppppppuStack_80 = pppppppuVar33;
            puStack_78 = puStack_a8;
            pppppppuStack_70 = pppppppuStack_a0;
            if (pppppppuVar33 < (ulonglong *******)0x3) {
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f868);
              goto LAB_141c335bc;
            }
            lStack_c8 = _DAT_143cad980 + 0x30;
            pppppppuStack_168 = (ulonglong *******)0x2;
            pppppppuStack_130 = pppppppuStack_330;
            uStack_128 = uStack_328;
            uStack_258 = (ulonglong *******)&pppppppuStack_b8;
            uStack_250 = (ulonglong *******)&pppppppuStack_288;
            puStack_248 = &UNK_14339f0f8;
            pppppppuStack_240 = (ulonglong *******)&pppppppuStack_88;
            pppppppuStack_238 = (ulonglong *******)&pppppppuStack_118;
            puStack_230 = &UNK_14339f118;
            pppppppuStack_228 = (ulonglong *******)&pppppppuStack_188;
            pppppppuStack_220 = (ulonglong *******)&pppppppuStack_130;
            puStack_218 = &UNK_14339f8b8;
            pppppppuStack_d8 = (ulonglong *******)&uStack_258;
            uStack_d0 = 3;
            puStack_f8 = puStack_3a8;
            pppppppuStack_108 = pppppppuStack_3b8;
            pppppppuStack_100 = pppppppuStack_3b0;
            pppppppuStack_188 = pppppppuStack_b8;
            pppppppuStack_180 = pppppppuVar33;
            puStack_178 = puStack_a8;
            pppppppuStack_170 = pppppppuStack_a0;
            pdb_140dd7f80(lVar24,uVar16,uVar19,&pppppppuStack_108,&pppppppuStack_d8);
          }
        }
      }
    }
    else {
LAB_141c305e8:
      pppppppuStack_270 = param_3;
      cVar13 = pdb_142566bd0(param_5,param_3,param_4);
      if (cVar13 != '\0') {
        *(undefined8 ********)*pauStack_1a0 = pppppppuStack_358;
        *(ulonglong ********)(*pauStack_1a0 + 8) = pppppppuStack_350;
        *(undefined **)pauStack_1a0[1] = puStack_348;
        *(ulonglong ********)(pauStack_1a0[1] + 8) = pppppppuStack_340;
        goto LAB_141c32f36;
      }
      pppppppuVar20 = param_2;
      pdb_141c34660(&pppppppuStack_288,param_2,uStack_300,uStack_2f8);
      uVar19 = 1;
      if ((longlong)pppppppuStack_288 < 0) {
        uVar19 = (ulonglong)pppppppuStack_288 ^ 0x8000000000000000;
      }
      if (uVar19 != 0) {
        if (uVar19 != 1) {
          if (*_DAT_143ca4b08 < 3) {
            pppppppuVar20 = (ulonglong *******)(ulonglong)DAT_143cada08;
            bVar14 = DAT_143cada08;
            if (2 < DAT_143cada08) {
              uVar15 = pdb_142db8070(&DAT_143cad9f8);
              pppppppuVar20 = (ulonglong *******)(ulonglong)uVar15;
              bVar14 = (byte)uVar15;
            }
            if ((bVar14 != 0) && (cVar13 = pdb_140dd7f60(_DAT_143cad9f8), cVar13 != '\0')) {
              pppppppuVar33 = *(ulonglong ********)(_DAT_143cad9f8 + 0x38);
              if (pppppppuVar33 == (ulonglong *******)0x0) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa60);
                goto LAB_141c335bc;
              }
              pppppppuStack_b8 = *(undefined8 ********)(_DAT_143cad9f8 + 0x30);
              puStack_a8 = *(undefined **)(_DAT_143cad9f8 + 0x40);
              pppppppuStack_a0 = *(ulonglong ********)(_DAT_143cad9f8 + 0x48);
              uStack_98 = 0;
              pppppppuStack_130 = (ulonglong *******)&UNK_14339fa78;
              uStack_128 = 0x3b;
              pppppppuStack_b0 = pppppppuVar33;
              if (pppppppuVar33 == (ulonglong *******)0x1) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa60);
                goto LAB_141c335bc;
              }
              uStack_68 = 1;
              pppppppuStack_118 = (ulonglong *******)&pppppppuStack_198;
              pppppppuStack_88 = pppppppuStack_b8;
              pppppppuStack_80 = pppppppuVar33;
              puStack_78 = puStack_a8;
              pppppppuStack_70 = pppppppuStack_a0;
              if (pppppppuVar33 < (ulonglong *******)0x3) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa60);
                goto LAB_141c335bc;
              }
              puStack_f8 = (undefined *)(_DAT_143cad9f8 + 0x30);
              pppppppuStack_168 = (ulonglong *******)0x2;
              pppppppuStack_d8 = pppppppuStack_330;
              uStack_d0 = uStack_328;
              uStack_258 = (ulonglong *******)&pppppppuStack_b8;
              uStack_250 = (ulonglong *******)&pppppppuStack_130;
              puStack_248 = &UNK_14339f0f8;
              pppppppuStack_240 = (ulonglong *******)&pppppppuStack_88;
              pppppppuStack_238 = (ulonglong *******)&pppppppuStack_118;
              puStack_230 = &UNK_14339f118;
              pppppppuStack_228 = (ulonglong *******)&pppppppuStack_188;
              pppppppuStack_220 = (ulonglong *******)&pppppppuStack_d8;
              puStack_218 = &UNK_14339f8b8;
              pppppppuStack_108 = (undefined8 *******)&uStack_258;
              pppppppuStack_100 = (ulonglong *******)0x3;
              pppppppuStack_188 = pppppppuStack_b8;
              pppppppuStack_180 = pppppppuVar33;
              puStack_178 = puStack_a8;
              pppppppuStack_170 = pppppppuStack_a0;
              pdb_141c33c80(&pppppppuStack_108);
              goto LAB_141c32f20;
            }
          }
          lVar24 = _DAT_143cad9f8;
          if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
            pppppppuStack_3e0 = *(ulonglong ********)(_DAT_143cad9f8 + 0x20);
            puStack_3d8 = *(undefined **)(_DAT_143cad9f8 + 0x28);
            pppppppuStack_3e8 = (undefined8 *******)0x3;
            uVar16 = pdb_140f33290();
            cVar13 = (*(code *)pppppppuVar20[3])(uVar16,&pppppppuStack_3e8);
            if (cVar13 != '\0') {
              pppppppuVar33 = *(ulonglong ********)(_DAT_143cad9f8 + 0x38);
              if (pppppppuVar33 == (ulonglong *******)0x0) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa60);
                goto LAB_141c335bc;
              }
              pppppppuStack_b8 = *(undefined8 ********)(_DAT_143cad9f8 + 0x30);
              puStack_a8 = *(undefined **)(_DAT_143cad9f8 + 0x40);
              pppppppuStack_a0 = *(ulonglong ********)(_DAT_143cad9f8 + 0x48);
              uStack_98 = 0;
              pppppppuStack_118 = (ulonglong *******)&UNK_14339fa78;
              uStack_110 = 0x3b;
              pppppppuStack_b0 = pppppppuVar33;
              if (pppppppuVar33 == (ulonglong *******)0x1) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa60);
                goto LAB_141c335bc;
              }
              uStack_68 = 1;
              pppppppuStack_268 = (ulonglong *******)&pppppppuStack_198;
              pppppppuStack_88 = pppppppuStack_b8;
              pppppppuStack_80 = pppppppuVar33;
              puStack_78 = puStack_a8;
              pppppppuStack_70 = pppppppuStack_a0;
              if (pppppppuVar33 < (ulonglong *******)0x3) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa60);
                goto LAB_141c335bc;
              }
              lStack_c8 = _DAT_143cad9f8 + 0x30;
              pppppppuStack_168 = (ulonglong *******)0x2;
              pppppppuStack_130 = pppppppuStack_330;
              uStack_128 = uStack_328;
              uStack_258 = (ulonglong *******)&pppppppuStack_b8;
              uStack_250 = (ulonglong *******)&pppppppuStack_118;
              puStack_248 = &UNK_14339f0f8;
              pppppppuStack_240 = (ulonglong *******)&pppppppuStack_88;
              pppppppuStack_238 = (ulonglong *******)&pppppppuStack_268;
              puStack_230 = &UNK_14339f118;
              pppppppuStack_228 = (ulonglong *******)&pppppppuStack_188;
              pppppppuStack_220 = (ulonglong *******)&pppppppuStack_130;
              puStack_218 = &UNK_14339f8b8;
              pppppppuStack_d8 = (ulonglong *******)&uStack_258;
              uStack_d0 = 3;
              puStack_f8 = puStack_3d8;
              pppppppuStack_108 = pppppppuStack_3e8;
              pppppppuStack_100 = pppppppuStack_3e0;
              pppppppuStack_188 = pppppppuStack_b8;
              pppppppuStack_180 = pppppppuVar33;
              puStack_178 = puStack_a8;
              pppppppuStack_170 = pppppppuStack_a0;
              pdb_140dd7f80(lVar24,uVar16,pppppppuVar20,&pppppppuStack_108,&pppppppuStack_d8);
            }
          }
          goto LAB_141c32f20;
        }
        uStack_438 = uStack_278;
        pppppppuStack_448 = pppppppuStack_288;
        uStack_440 = uStack_280;
        pppppppuVar20 = pppppppuStack_270;
        ppppppuVar17 = (ulonglong ******)
                       pdb_141c33d30(param_2,pppppppuStack_270,param_4,&pppppppuStack_448);
        if (ppppppuVar17 == (ulonglong ******)0x0) goto LAB_141c31ec4;
        ppppppuStack_2a0 = ppppppuVar17;
        if (*_DAT_143ca4b08 < 2) {
          pppppppuVar20 = (ulonglong *******)(ulonglong)DAT_143cad9c0;
          if (2 < DAT_143cad9c0) {
            uVar15 = pdb_142db8070(&DAT_143cad9b0);
            pppppppuVar20 = (ulonglong *******)(ulonglong)uVar15;
            if ((char)uVar15 != '\0') goto LAB_141c30965;
            goto LAB_141c31c34;
          }
          if (DAT_143cad9c0 == 0) goto LAB_141c31c34;
LAB_141c30965:
          cVar13 = pdb_140dd7f60(_DAT_143cad9b0);
          if (cVar13 == '\0') goto LAB_141c31c34;
          pppppppuVar20 = *(ulonglong ********)(_DAT_143cad9b0 + 0x38);
          if (pppppppuVar20 == (ulonglong *******)0x0) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f910);
            goto LAB_141c335bc;
          }
          pppppppuStack_108 = *(undefined8 ********)(_DAT_143cad9b0 + 0x30);
          puStack_f8 = *(undefined **)(_DAT_143cad9b0 + 0x40);
          pppppppuStack_f0 = *(ulonglong ********)(_DAT_143cad9b0 + 0x48);
          uStack_e8 = 0;
          pppppppuStack_118 = (ulonglong *******)&UNK_14339f928;
          uStack_110 = 0x5d;
          pppppppuStack_100 = pppppppuVar20;
          if (pppppppuVar20 == (ulonglong *******)0x1) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f910);
            goto LAB_141c335bc;
          }
          uStack_98 = 1;
          pppppppuStack_1a8 = (ulonglong *******)&pppppppuStack_198;
          pppppppuStack_b8 = pppppppuStack_108;
          pppppppuStack_b0 = pppppppuVar20;
          puStack_a8 = puStack_f8;
          pppppppuStack_a0 = pppppppuStack_f0;
          if (pppppppuVar20 < (ulonglong *******)0x3) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f910);
            goto LAB_141c335bc;
          }
          uStack_68 = 2;
          pppppppuStack_130 = pppppppuStack_330;
          uStack_128 = uStack_328;
          pppppppuStack_88 = pppppppuStack_108;
          pppppppuStack_80 = pppppppuVar20;
          puStack_78 = puStack_f8;
          pppppppuStack_70 = pppppppuStack_f0;
          if (pppppppuVar20 == (ulonglong *******)0x3) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f910);
            goto LAB_141c335bc;
          }
          lStack_c8 = _DAT_143cad9b0 + 0x30;
          pppppppuStack_168 = (ulonglong *******)0x3;
          pppppppuStack_268 = &ppppppuStack_2a0;
          uStack_258 = (ulonglong *******)&pppppppuStack_108;
          uStack_250 = (ulonglong *******)&pppppppuStack_118;
          puStack_248 = &UNK_14339f0f8;
          pppppppuStack_240 = (ulonglong *******)&pppppppuStack_b8;
          pppppppuStack_238 = (ulonglong *******)&pppppppuStack_1a8;
          puStack_230 = &UNK_14339f118;
          pppppppuStack_228 = (ulonglong *******)&pppppppuStack_88;
          pppppppuStack_220 = (ulonglong *******)&pppppppuStack_130;
          puStack_218 = &UNK_14339f8b8;
          pppppppuStack_210 = (ulonglong *******)&pppppppuStack_188;
          pppppppuStack_208 = (ulonglong *******)&pppppppuStack_268;
          puStack_200 = &UNK_14339f958;
          pppppppuStack_d8 = (ulonglong *******)&uStack_258;
          uStack_d0 = 4;
          pppppppuStack_188 = pppppppuStack_108;
          pppppppuStack_180 = pppppppuVar20;
          puStack_178 = puStack_f8;
          pppppppuStack_170 = pppppppuStack_f0;
          pdb_141c33a70(&pppppppuStack_d8);
        }
        else {
LAB_141c31c34:
          lVar24 = _DAT_143cad9b0;
          if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
            uStack_3c8 = *(ulonglong *)(_DAT_143cad9b0 + 0x20);
            lStack_3c0 = *(longlong *)(_DAT_143cad9b0 + 0x28);
            pppppppuStack_3d0 = (ulonglong *******)0x4;
            uVar16 = pdb_140f33290();
            cVar13 = (*(code *)pppppppuVar20[3])(uVar16,&pppppppuStack_3d0);
            if (cVar13 != '\0') {
              pppppppuVar22 = *(ulonglong ********)(_DAT_143cad9b0 + 0x38);
              if (pppppppuVar22 == (ulonglong *******)0x0) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f910);
                goto LAB_141c335bc;
              }
              pppppppuStack_108 = *(undefined8 ********)(_DAT_143cad9b0 + 0x30);
              puStack_f8 = *(undefined **)(_DAT_143cad9b0 + 0x40);
              pppppppuStack_f0 = *(ulonglong ********)(_DAT_143cad9b0 + 0x48);
              uStack_e8 = 0;
              pppppppuStack_268 = (ulonglong *******)&UNK_14339f928;
              uStack_260 = 0x5d;
              pppppppuStack_100 = pppppppuVar22;
              if (pppppppuVar22 == (ulonglong *******)0x1) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f910);
                goto LAB_141c335bc;
              }
              uStack_98 = 1;
              pppppppuStack_2a8 = (ulonglong *******)&pppppppuStack_198;
              pppppppuStack_b8 = pppppppuStack_108;
              pppppppuStack_b0 = pppppppuVar22;
              puStack_a8 = puStack_f8;
              pppppppuStack_a0 = pppppppuStack_f0;
              if (pppppppuVar22 < (ulonglong *******)0x3) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f910);
                goto LAB_141c335bc;
              }
              uStack_68 = 2;
              pppppppuStack_118 = pppppppuStack_330;
              uStack_110 = uStack_328;
              pppppppuStack_88 = pppppppuStack_108;
              pppppppuStack_80 = pppppppuVar22;
              puStack_78 = puStack_f8;
              pppppppuStack_70 = pppppppuStack_f0;
              if (pppppppuVar22 == (ulonglong *******)0x3) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f910);
                goto LAB_141c335bc;
              }
              lStack_120 = _DAT_143cad9b0 + 0x30;
              pppppppuStack_168 = (ulonglong *******)0x3;
              pppppppuStack_1a8 = &ppppppuStack_2a0;
              uStack_258 = (ulonglong *******)&pppppppuStack_108;
              uStack_250 = (ulonglong *******)&pppppppuStack_268;
              puStack_248 = &UNK_14339f0f8;
              pppppppuStack_240 = (ulonglong *******)&pppppppuStack_b8;
              pppppppuStack_238 = (ulonglong *******)&pppppppuStack_2a8;
              puStack_230 = &UNK_14339f118;
              pppppppuStack_228 = (ulonglong *******)&pppppppuStack_88;
              pppppppuStack_220 = (ulonglong *******)&pppppppuStack_118;
              puStack_218 = &UNK_14339f8b8;
              pppppppuStack_210 = (ulonglong *******)&pppppppuStack_188;
              pppppppuStack_208 = (ulonglong *******)&pppppppuStack_1a8;
              puStack_200 = &UNK_14339f958;
              pppppppuStack_130 = (ulonglong *******)&uStack_258;
              uStack_128 = 4;
              lStack_c8 = lStack_3c0;
              pppppppuStack_d8 = pppppppuStack_3d0;
              uStack_d0 = uStack_3c8;
              pppppppuStack_188 = pppppppuStack_108;
              pppppppuStack_180 = pppppppuVar22;
              puStack_178 = puStack_f8;
              pppppppuStack_170 = pppppppuStack_f0;
              pdb_140dd7f80(lVar24,uVar16,pppppppuVar20,&pppppppuStack_d8,&pppppppuStack_130);
            }
          }
        }
        pdb_1404b38e0(&ppppppuStack_2a0);
      }
LAB_141c31ec4:
      cVar9 = UNK_14300c813;
      cVar8 = UNK_14300c812;
      cVar7 = UNK_14300c811;
      cVar13 = DAT_14300c810;
      puVar12 = puStack_2e8;
      do {
        puVar18 = puVar12;
        if (puVar18 == puStack_2e8 + lStack_2e0 * 6) {
          puVar6 = puStack_348;
          pppppppuVar20 = pppppppuStack_340;
          pppppppuVar22 = pppppppuStack_2d0;
          goto joined_r0x000141c321cc;
        }
        pppppppuVar22 = param_2;
        pdb_141c301a0(&uStack_258,param_2,puVar18[4],puVar18[5],param_5);
        pppppppuVar20 = (ulonglong *******)(puVar18 + 4);
        auVar29[0] = -((char)uStack_258 == cVar13);
        auVar29[1] = -(uStack_258._1_1_ == cVar7);
        auVar29[2] = -(uStack_258._2_1_ == cVar8);
        auVar29[3] = -(uStack_258._3_1_ == cVar9);
        auVar29[4] = -(uStack_258._4_1_ == '\0');
        auVar29[5] = -(uStack_258._5_1_ == '\0');
        auVar29[6] = -(uStack_258._6_1_ == '\0');
        auVar29[7] = -(uStack_258._7_1_ == '\0');
        auVar29[8] = -((char)uStack_250 == '\0');
        auVar29[9] = -(uStack_250._1_1_ == '\0');
        auVar29[10] = -(uStack_250._2_1_ == '\0');
        auVar29[0xb] = -(uStack_250._3_1_ == '\0');
        auVar29[0xc] = -(uStack_250._4_1_ == '\0');
        auVar29[0xd] = -(uStack_250._5_1_ == '\0');
        auVar29[0xe] = -(uStack_250._6_1_ == '\0');
        auVar29[0xf] = -(uStack_250._7_1_ == '\0');
        if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
          if (*_DAT_143ca4b08 < 3) {
            pppppppuVar22 = (ulonglong *******)(ulonglong)DAT_143cad978;
            bVar14 = DAT_143cad978;
            if (2 < DAT_143cad978) {
              uVar15 = pdb_142db8070(&DAT_143cad968);
              pppppppuVar22 = (ulonglong *******)(ulonglong)uVar15;
              bVar14 = (byte)uVar15;
            }
            if ((bVar14 != 0) && (cVar13 = pdb_140dd7f60(_DAT_143cad968), cVar13 != '\0')) {
              pppppppuVar33 = *(ulonglong ********)(_DAT_143cad968 + 0x38);
              if (pppppppuVar33 == (ulonglong *******)0x0) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa28);
                goto LAB_141c335bc;
              }
              pppppppuStack_108 = *(undefined8 ********)(_DAT_143cad968 + 0x30);
              puStack_f8 = *(undefined **)(_DAT_143cad968 + 0x40);
              pppppppuStack_f0 = *(ulonglong ********)(_DAT_143cad968 + 0x48);
              uStack_e8 = 0;
              pppppppuStack_288 = (ulonglong *******)&UNK_14339fa40;
              uStack_280 = 0x3d;
              pppppppuStack_100 = pppppppuVar33;
              if (pppppppuVar33 == (ulonglong *******)0x1) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa28);
                goto LAB_141c335bc;
              }
              uStack_98 = 1;
              pppppppuStack_268 = (ulonglong *******)&pppppppuStack_198;
              pppppppuStack_b8 = pppppppuStack_108;
              pppppppuStack_b0 = pppppppuVar33;
              puStack_a8 = puStack_f8;
              pppppppuStack_a0 = pppppppuStack_f0;
              if (pppppppuVar33 < (ulonglong *******)0x3) {
                pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa28);
                goto LAB_141c335bc;
              }
              uStack_68 = 2;
              pppppppuStack_88 = pppppppuStack_108;
              pppppppuStack_80 = pppppppuVar33;
              puStack_78 = puStack_f8;
              pppppppuStack_70 = pppppppuStack_f0;
              if (pppppppuVar33 != (ulonglong *******)0x3) {
                lStack_c8 = _DAT_143cad968 + 0x30;
                pppppppuStack_168 = (ulonglong *******)0x3;
                pppppppuStack_130 = pppppppuStack_330;
                uStack_128 = uStack_328;
                uStack_258 = (ulonglong *******)&pppppppuStack_108;
                puStack_248 = &UNK_14339f0f8;
                pppppppuStack_240 = (ulonglong *******)&pppppppuStack_b8;
                pppppppuStack_238 = (ulonglong *******)&pppppppuStack_268;
                puStack_230 = &UNK_14339f118;
                pppppppuStack_228 = (ulonglong *******)&pppppppuStack_88;
                pppppppuStack_220 = (ulonglong *******)&pppppppuStack_118;
                puStack_218 = &UNK_14339f118;
                pppppppuStack_210 = (ulonglong *******)&pppppppuStack_188;
                pppppppuStack_208 = (ulonglong *******)&pppppppuStack_130;
                puStack_200 = &UNK_14339f8b8;
                pppppppuStack_d8 = (ulonglong *******)&uStack_258;
                uStack_d0 = 4;
                uStack_250 = (ulonglong *******)&pppppppuStack_288;
                pppppppuStack_188 = pppppppuStack_108;
                pppppppuStack_180 = pppppppuVar33;
                puStack_178 = puStack_f8;
                pppppppuStack_170 = pppppppuStack_f0;
                pppppppuStack_118 = pppppppuVar20;
                pdb_141c337b0(&pppppppuStack_d8);
                goto LAB_141c32f20;
              }
              pppppppuStack_118 = pppppppuVar20;
              pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa28);
              goto LAB_141c335bc;
            }
          }
          lVar24 = _DAT_143cad968;
          if ((*_DAT_143ca4ab0 != '\0') || (*_DAT_143ca8e90 < 3)) goto LAB_141c32f20;
          uStack_3f8 = *(ulonglong *)(_DAT_143cad968 + 0x20);
          lStack_3f0 = *(longlong *)(_DAT_143cad968 + 0x28);
          pppppppuStack_400 = (ulonglong *******)0x3;
          uVar16 = pdb_140f33290();
          cVar13 = (*(code *)pppppppuVar22[3])(uVar16,&pppppppuStack_400);
          if (cVar13 == '\0') goto LAB_141c32f20;
          pppppppuVar33 = *(ulonglong ********)(_DAT_143cad968 + 0x38);
          if (pppppppuVar33 == (ulonglong *******)0x0) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa28);
            goto LAB_141c335bc;
          }
          pppppppuStack_108 = *(undefined8 ********)(_DAT_143cad968 + 0x30);
          puStack_f8 = *(undefined **)(_DAT_143cad968 + 0x40);
          pppppppuStack_f0 = *(ulonglong ********)(_DAT_143cad968 + 0x48);
          uStack_e8 = 0;
          pppppppuStack_118 = (ulonglong *******)&UNK_14339fa40;
          uStack_110 = 0x3d;
          pppppppuStack_100 = pppppppuVar33;
          if (pppppppuVar33 == (ulonglong *******)0x1) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa28);
            goto LAB_141c335bc;
          }
          uStack_98 = 1;
          pppppppuStack_1a8 = (ulonglong *******)&pppppppuStack_198;
          pppppppuStack_b8 = pppppppuStack_108;
          pppppppuStack_b0 = pppppppuVar33;
          puStack_a8 = puStack_f8;
          pppppppuStack_a0 = pppppppuStack_f0;
          if (pppppppuVar33 < (ulonglong *******)0x3) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa28);
            goto LAB_141c335bc;
          }
          uStack_68 = 2;
          pppppppuStack_88 = pppppppuStack_108;
          pppppppuStack_80 = pppppppuVar33;
          puStack_78 = puStack_f8;
          pppppppuStack_70 = pppppppuStack_f0;
          if (pppppppuVar33 != (ulonglong *******)0x3) {
            lStack_120 = _DAT_143cad968 + 0x30;
            pppppppuStack_168 = (ulonglong *******)0x3;
            pppppppuStack_288 = pppppppuStack_330;
            uStack_280 = uStack_328;
            uStack_258 = (ulonglong *******)&pppppppuStack_108;
            uStack_250 = (ulonglong *******)&pppppppuStack_118;
            puStack_248 = &UNK_14339f0f8;
            pppppppuStack_240 = (ulonglong *******)&pppppppuStack_b8;
            pppppppuStack_238 = (ulonglong *******)&pppppppuStack_1a8;
            puStack_230 = &UNK_14339f118;
            pppppppuStack_228 = (ulonglong *******)&pppppppuStack_88;
            pppppppuStack_220 = (ulonglong *******)&pppppppuStack_268;
            puStack_218 = &UNK_14339f118;
            pppppppuStack_210 = (ulonglong *******)&pppppppuStack_188;
            puStack_200 = &UNK_14339f8b8;
            pppppppuStack_130 = (ulonglong *******)&uStack_258;
            uStack_128 = 4;
            lStack_c8 = lStack_3f0;
            pppppppuStack_d8 = pppppppuStack_400;
            uStack_d0 = uStack_3f8;
            pppppppuStack_268 = pppppppuVar20;
            pppppppuStack_208 = (ulonglong *******)&pppppppuStack_288;
            pppppppuStack_188 = pppppppuStack_108;
            pppppppuStack_180 = pppppppuVar33;
            puStack_178 = puStack_f8;
            pppppppuStack_170 = pppppppuStack_f0;
            pdb_140dd7f80(lVar24,uVar16,pppppppuVar22,&pppppppuStack_d8,&pppppppuStack_130);
            goto LAB_141c32f20;
          }
          pppppppuStack_268 = pppppppuVar20;
          pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339fa28);
          goto LAB_141c335bc;
        }
        pppppppuVar21 = uStack_258;
      } while ((uStack_258 == (undefined8 *******)*puVar18) &&
              ((puVar12 = puVar18 + 6,
               (uStack_250 != (ulonglong *******)0x0 || puVar18[1] != 0) ||
               ((undefined8 *******)*puVar18 != (undefined8 *******)0x0 ||
               uStack_258 != (undefined8 *******)0x0) ||
               (pppppppuVar21 =
                     (undefined8 *******)
                     (puVar18[3] ^ (ulonglong)pppppppuStack_240 |
                     puVar18[2] ^ (ulonglong)puStack_248), pppppppuVar21 == (undefined8 *******)0x0)
               )));
      if (*_DAT_143ca4b08 < 3) {
        pppppppuVar21 = (undefined8 *******)(ulonglong)DAT_143cad9f0;
        bVar14 = DAT_143cad9f0;
        if (2 < DAT_143cad9f0) {
          uVar15 = pdb_142db8070(&DAT_143cad9e0);
          pppppppuVar21 = (undefined8 *******)(ulonglong)uVar15;
          bVar14 = (byte)uVar15;
        }
        if ((bVar14 != 0) && (cVar13 = pdb_140dd7f60(_DAT_143cad9e0), cVar13 != '\0')) {
          pppppppuVar33 = *(ulonglong ********)(_DAT_143cad9e0 + 0x38);
          if (pppppppuVar33 == (ulonglong *******)0x0) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f9e8);
            goto LAB_141c335bc;
          }
          pppppppuStack_108 = *(undefined8 ********)(_DAT_143cad9e0 + 0x30);
          puStack_f8 = *(undefined **)(_DAT_143cad9e0 + 0x40);
          pppppppuStack_f0 = *(ulonglong ********)(_DAT_143cad9e0 + 0x48);
          uStack_e8 = 0;
          pppppppuStack_288 = (ulonglong *******)&UNK_14339fa00;
          uStack_280 = 0x4d;
          pppppppuStack_100 = pppppppuVar33;
          if (pppppppuVar33 == (ulonglong *******)0x1) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f9e8);
            goto LAB_141c335bc;
          }
          uStack_98 = 1;
          pppppppuStack_268 = (ulonglong *******)&pppppppuStack_198;
          pppppppuStack_b8 = pppppppuStack_108;
          pppppppuStack_b0 = pppppppuVar33;
          puStack_a8 = puStack_f8;
          pppppppuStack_a0 = pppppppuStack_f0;
          if (pppppppuVar33 < (ulonglong *******)0x3) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f9e8);
            goto LAB_141c335bc;
          }
          uStack_68 = 2;
          pppppppuStack_88 = pppppppuStack_108;
          pppppppuStack_80 = pppppppuVar33;
          puStack_78 = puStack_f8;
          pppppppuStack_70 = pppppppuStack_f0;
          if (pppppppuVar33 == (ulonglong *******)0x3) {
            pppppppuStack_118 = pppppppuVar20;
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f9e8);
            goto LAB_141c335bc;
          }
          lStack_c8 = _DAT_143cad9e0 + 0x30;
          pppppppuStack_168 = (ulonglong *******)0x3;
          pppppppuStack_130 = pppppppuStack_330;
          uStack_128 = uStack_328;
          uStack_258 = (ulonglong *******)&pppppppuStack_108;
          puStack_248 = &UNK_14339f0f8;
          pppppppuStack_240 = (ulonglong *******)&pppppppuStack_b8;
          pppppppuStack_238 = (ulonglong *******)&pppppppuStack_268;
          puStack_230 = &UNK_14339f118;
          pppppppuStack_228 = (ulonglong *******)&pppppppuStack_88;
          pppppppuStack_220 = (ulonglong *******)&pppppppuStack_118;
          puStack_218 = &UNK_14339f118;
          pppppppuStack_210 = (ulonglong *******)&pppppppuStack_188;
          pppppppuStack_208 = (ulonglong *******)&pppppppuStack_130;
          puStack_200 = &UNK_14339f8b8;
          pppppppuStack_d8 = (ulonglong *******)&uStack_258;
          uStack_d0 = 4;
          uStack_250 = (ulonglong *******)&pppppppuStack_288;
          pppppppuStack_188 = pppppppuStack_108;
          pppppppuStack_180 = pppppppuVar33;
          puStack_178 = puStack_f8;
          pppppppuStack_170 = pppppppuStack_f0;
          pppppppuStack_118 = pppppppuVar20;
          pdb_141c33860(&pppppppuStack_d8);
          goto LAB_141c32f20;
        }
      }
      lVar24 = _DAT_143cad9e0;
      if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
        uStack_410 = *(ulonglong *)(_DAT_143cad9e0 + 0x20);
        lStack_408 = *(longlong *)(_DAT_143cad9e0 + 0x28);
        pppppppuStack_418 = (ulonglong *******)0x3;
        uVar16 = pdb_140f33290();
        cVar13 = (*(code *)pppppppuVar21[3])(uVar16,&pppppppuStack_418);
        if (cVar13 != '\0') {
          pppppppuVar33 = *(ulonglong ********)(_DAT_143cad9e0 + 0x38);
          if (pppppppuVar33 == (ulonglong *******)0x0) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f9e8);
            goto LAB_141c335bc;
          }
          pppppppuStack_108 = *(undefined8 ********)(_DAT_143cad9e0 + 0x30);
          puStack_f8 = *(undefined **)(_DAT_143cad9e0 + 0x40);
          pppppppuStack_f0 = *(ulonglong ********)(_DAT_143cad9e0 + 0x48);
          uStack_e8 = 0;
          pppppppuStack_118 = (ulonglong *******)&UNK_14339fa00;
          uStack_110 = 0x4d;
          pppppppuStack_100 = pppppppuVar33;
          if (pppppppuVar33 == (ulonglong *******)0x1) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f9e8);
            goto LAB_141c335bc;
          }
          uStack_98 = 1;
          pppppppuStack_1a8 = (ulonglong *******)&pppppppuStack_198;
          pppppppuStack_b8 = pppppppuStack_108;
          pppppppuStack_b0 = pppppppuVar33;
          puStack_a8 = puStack_f8;
          pppppppuStack_a0 = pppppppuStack_f0;
          if (pppppppuVar33 < (ulonglong *******)0x3) {
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f9e8);
            goto LAB_141c335bc;
          }
          uStack_68 = 2;
          pppppppuStack_88 = pppppppuStack_108;
          pppppppuStack_80 = pppppppuVar33;
          puStack_78 = puStack_f8;
          pppppppuStack_70 = pppppppuStack_f0;
          if (pppppppuVar33 == (ulonglong *******)0x3) {
            pppppppuStack_268 = pppppppuVar20;
            pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f9e8);
            goto LAB_141c335bc;
          }
          lStack_120 = _DAT_143cad9e0 + 0x30;
          pppppppuStack_168 = (ulonglong *******)0x3;
          pppppppuStack_288 = pppppppuStack_330;
          uStack_280 = uStack_328;
          uStack_258 = (ulonglong *******)&pppppppuStack_108;
          uStack_250 = (ulonglong *******)&pppppppuStack_118;
          puStack_248 = &UNK_14339f0f8;
          pppppppuStack_240 = (ulonglong *******)&pppppppuStack_b8;
          pppppppuStack_238 = (ulonglong *******)&pppppppuStack_1a8;
          puStack_230 = &UNK_14339f118;
          pppppppuStack_228 = (ulonglong *******)&pppppppuStack_88;
          pppppppuStack_220 = (ulonglong *******)&pppppppuStack_268;
          puStack_218 = &UNK_14339f118;
          pppppppuStack_210 = (ulonglong *******)&pppppppuStack_188;
          puStack_200 = &UNK_14339f8b8;
          pppppppuStack_130 = (ulonglong *******)&uStack_258;
          uStack_128 = 4;
          lStack_c8 = lStack_408;
          pppppppuStack_d8 = pppppppuStack_418;
          uStack_d0 = uStack_410;
          pppppppuStack_268 = pppppppuVar20;
          pppppppuStack_208 = (ulonglong *******)&pppppppuStack_288;
          pppppppuStack_188 = pppppppuStack_108;
          pppppppuStack_180 = pppppppuVar33;
          puStack_178 = puStack_f8;
          pppppppuStack_170 = pppppppuStack_f0;
          pdb_140dd7f80(lVar24,uVar16,pppppppuVar21,&pppppppuStack_d8,&pppppppuStack_130);
        }
      }
    }
  }
LAB_141c32f20:
  *(undefined8 *)(*pauStack_1a0 + 8) = 0;
  *(undefined8 *)*pauStack_1a0 = 2;
LAB_141c32f36:
  pauVar11 = pauStack_1a0;
  pdb_14098b650(&pppppppuStack_358);
  return pauVar11;
joined_r0x000141c321cc:
  puStack_348 = puVar6;
  pppppppuStack_340 = pppppppuVar20;
  if (pppppppuVar22 == pppppppuStack_2d0 + lStack_2c8 * 2) goto LAB_141c32218;
  pppppppuVar20 = param_2;
  pppppppuStack_2a8 = pppppppuVar22;
  pdb_141c301a0(&uStack_258,param_2,*pppppppuVar22,pppppppuVar22[1],param_5);
  auVar30[0] = -((char)uStack_258 == cVar13);
  auVar30[1] = -(uStack_258._1_1_ == cVar7);
  auVar30[2] = -(uStack_258._2_1_ == cVar8);
  auVar30[3] = -(uStack_258._3_1_ == cVar9);
  auVar30[4] = -(uStack_258._4_1_ == '\0');
  auVar30[5] = -(uStack_258._5_1_ == '\0');
  auVar30[6] = -(uStack_258._6_1_ == '\0');
  auVar30[7] = -(uStack_258._7_1_ == '\0');
  auVar30[8] = -((char)uStack_250 == '\0');
  auVar30[9] = -(uStack_250._1_1_ == '\0');
  auVar30[10] = -(uStack_250._2_1_ == '\0');
  auVar30[0xb] = -(uStack_250._3_1_ == '\0');
  auVar30[0xc] = -(uStack_250._4_1_ == '\0');
  auVar30[0xd] = -(uStack_250._5_1_ == '\0');
  auVar30[0xe] = -(uStack_250._6_1_ == '\0');
  auVar30[0xf] = -(uStack_250._7_1_ == '\0');
  if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf)
      == 0xffff) {
    if (*_DAT_143ca4b08 < 3) {
      pppppppuVar20 = (ulonglong *******)(ulonglong)DAT_143cad960;
      bVar14 = DAT_143cad960;
      if (2 < DAT_143cad960) {
        uVar15 = pdb_142db8070(&DAT_143cad950);
        pppppppuVar20 = (ulonglong *******)(ulonglong)uVar15;
        bVar14 = (byte)uVar15;
      }
      if ((bVar14 != 0) && (cVar13 = pdb_140dd7f60(_DAT_143cad950), cVar13 != '\0')) {
        pppppppuVar33 = *(ulonglong ********)(_DAT_143cad950 + 0x38);
        if (pppppppuVar33 == (ulonglong *******)0x0) {
          pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f990);
          goto LAB_141c335bc;
        }
        pppppppuStack_108 = *(undefined8 ********)(_DAT_143cad950 + 0x30);
        puStack_f8 = *(undefined **)(_DAT_143cad950 + 0x40);
        pppppppuStack_f0 = *(ulonglong ********)(_DAT_143cad950 + 0x48);
        uStack_e8 = 0;
        pppppppuStack_288 = (ulonglong *******)&UNK_14339f9a8;
        uStack_280 = 0x41;
        pppppppuStack_100 = pppppppuVar33;
        if (pppppppuVar33 == (ulonglong *******)0x1) {
          pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f990);
          goto LAB_141c335bc;
        }
        uStack_98 = 1;
        pppppppuStack_268 = (ulonglong *******)&pppppppuStack_198;
        pppppppuStack_b8 = pppppppuStack_108;
        pppppppuStack_b0 = pppppppuVar33;
        puStack_a8 = puStack_f8;
        pppppppuStack_a0 = pppppppuStack_f0;
        if (pppppppuVar33 < (ulonglong *******)0x3) {
          pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f990);
          goto LAB_141c335bc;
        }
        uStack_68 = 2;
        pppppppuStack_118 = (ulonglong *******)&pppppppuStack_2a8;
        pppppppuStack_88 = pppppppuStack_108;
        pppppppuStack_80 = pppppppuVar33;
        puStack_78 = puStack_f8;
        pppppppuStack_70 = pppppppuStack_f0;
        if (pppppppuVar33 != (ulonglong *******)0x3) {
          lStack_c8 = _DAT_143cad950 + 0x30;
          pppppppuStack_168 = (ulonglong *******)0x3;
          pppppppuStack_130 = pppppppuStack_330;
          uStack_128 = uStack_328;
          uStack_258 = (ulonglong *******)&pppppppuStack_108;
          puStack_248 = &UNK_14339f0f8;
          pppppppuStack_240 = (ulonglong *******)&pppppppuStack_b8;
          pppppppuStack_238 = (ulonglong *******)&pppppppuStack_268;
          puStack_230 = &UNK_14339f118;
          pppppppuStack_228 = (ulonglong *******)&pppppppuStack_88;
          pppppppuStack_220 = (ulonglong *******)&pppppppuStack_118;
          puStack_218 = &UNK_14339f9c8;
          pppppppuStack_210 = (ulonglong *******)&pppppppuStack_188;
          pppppppuStack_208 = (ulonglong *******)&pppppppuStack_130;
          puStack_200 = &UNK_14339f8b8;
          uStack_d0 = 4;
          uStack_250 = (ulonglong *******)&pppppppuStack_288;
          pppppppuStack_188 = pppppppuStack_108;
          pppppppuStack_180 = pppppppuVar33;
          puStack_178 = puStack_f8;
          pppppppuStack_170 = pppppppuStack_f0;
          pppppppuStack_d8 = (ulonglong *******)&uStack_258;
          pdb_141c33b20(&pppppppuStack_d8);
          goto LAB_141c32f20;
        }
        pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f990);
        goto LAB_141c335bc;
      }
    }
    lVar24 = _DAT_143cad950;
    if ((*_DAT_143ca4ab0 != '\0') || (*_DAT_143ca8e90 < 3)) goto LAB_141c32f20;
    uStack_428 = *(ulonglong *)(_DAT_143cad950 + 0x20);
    lStack_420 = *(longlong *)(_DAT_143cad950 + 0x28);
    pppppppuStack_430 = (ulonglong *******)0x3;
    uVar16 = pdb_140f33290();
    cVar13 = (*(code *)pppppppuVar20[3])(uVar16,&pppppppuStack_430);
    if (cVar13 == '\0') goto LAB_141c32f20;
    pppppppuVar33 = *(ulonglong ********)(_DAT_143cad950 + 0x38);
    if (pppppppuVar33 == (ulonglong *******)0x0) {
      pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f990);
      goto LAB_141c335bc;
    }
    pppppppuStack_108 = *(undefined8 ********)(_DAT_143cad950 + 0x30);
    puStack_f8 = *(undefined **)(_DAT_143cad950 + 0x40);
    pppppppuStack_f0 = *(ulonglong ********)(_DAT_143cad950 + 0x48);
    uStack_e8 = 0;
    pppppppuStack_118 = (ulonglong *******)&UNK_14339f9a8;
    uStack_110 = 0x41;
    pppppppuStack_100 = pppppppuVar33;
    if (pppppppuVar33 == (ulonglong *******)0x1) {
      pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f990);
      goto LAB_141c335bc;
    }
    uStack_98 = 1;
    pppppppuStack_1a8 = (ulonglong *******)&pppppppuStack_198;
    pppppppuStack_b8 = pppppppuStack_108;
    pppppppuStack_b0 = pppppppuVar33;
    puStack_a8 = puStack_f8;
    pppppppuStack_a0 = pppppppuStack_f0;
    if (pppppppuVar33 < (ulonglong *******)0x3) {
      pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f990);
      goto LAB_141c335bc;
    }
    uStack_68 = 2;
    pppppppuStack_268 = (ulonglong *******)&pppppppuStack_2a8;
    pppppppuStack_88 = pppppppuStack_108;
    pppppppuStack_80 = pppppppuVar33;
    puStack_78 = puStack_f8;
    pppppppuStack_70 = pppppppuStack_f0;
    if (pppppppuVar33 != (ulonglong *******)0x3) {
      lStack_120 = _DAT_143cad950 + 0x30;
      pppppppuStack_168 = (ulonglong *******)0x3;
      pppppppuStack_288 = pppppppuStack_330;
      uStack_280 = uStack_328;
      uStack_258 = (ulonglong *******)&pppppppuStack_108;
      uStack_250 = (ulonglong *******)&pppppppuStack_118;
      puStack_248 = &UNK_14339f0f8;
      pppppppuStack_240 = (ulonglong *******)&pppppppuStack_b8;
      pppppppuStack_238 = (ulonglong *******)&pppppppuStack_1a8;
      puStack_230 = &UNK_14339f118;
      pppppppuStack_228 = (ulonglong *******)&pppppppuStack_88;
      pppppppuStack_220 = (ulonglong *******)&pppppppuStack_268;
      puStack_218 = &UNK_14339f9c8;
      pppppppuStack_210 = (ulonglong *******)&pppppppuStack_188;
      puStack_200 = &UNK_14339f8b8;
      uStack_128 = 4;
      lStack_c8 = lStack_420;
      pppppppuStack_d8 = pppppppuStack_430;
      uStack_d0 = uStack_428;
      pppppppuStack_208 = (ulonglong *******)&pppppppuStack_288;
      pppppppuStack_188 = pppppppuStack_108;
      pppppppuStack_180 = pppppppuVar33;
      puStack_178 = puStack_f8;
      pppppppuStack_170 = pppppppuStack_f0;
      pppppppuStack_130 = (ulonglong *******)&uStack_258;
      pdb_140dd7f80(lVar24,uVar16,pppppppuVar20,&pppppppuStack_d8,&pppppppuStack_130);
      goto LAB_141c32f20;
    }
    pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f990);
    goto LAB_141c335bc;
  }
  pppppppuVar22 = pppppppuVar22 + 2;
  puVar6 = puStack_348;
  pppppppuVar20 = pppppppuStack_340;
  goto joined_r0x000141c321cc;
LAB_141c32218:
  if (((ulonglong)pppppppuStack_358 & 1) == 0) {
    pdb_1400f0d40(&uStack_258,pppppppuVar33);
    if ((int)uStack_258 == 1) {
      pppppppuStack_188 = uStack_250;
      pppppppuStack_180 = (ulonglong *******)CONCAT71(pppppppuStack_180._1_7_,puStack_248._0_1_);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14339fb38,0x2b,&pppppppuStack_188,&UNK_14339fc88,&UNK_14339f978);
    }
    pppppppuStack_298 = (ulonglong *******)CONCAT71(pppppppuStack_298._1_7_,puStack_248._0_1_);
    pppppppuStack_290 = uStack_250;
    pdb_142566380(&uStack_258,uStack_250 + 1,pppppppuStack_270,param_4,puVar6,pppppppuVar20);
    pdb_140008470(pppppppuStack_290,(ulonglong)pppppppuStack_298 & 0xff);
  }
  else {
    pppppppuStack_358 = (undefined8 *******)0x1;
    pppppppuStack_350 = (ulonglong *******)0x0;
  }
  *(undefined8 ********)*pauStack_1a0 = pppppppuStack_358;
  *(ulonglong ********)(*pauStack_1a0 + 8) = pppppppuStack_350;
  *(undefined **)pauStack_1a0[1] = puStack_348;
  *(ulonglong ********)(pauStack_1a0[1] + 8) = pppppppuStack_340;
  goto LAB_141c32f36;
}

