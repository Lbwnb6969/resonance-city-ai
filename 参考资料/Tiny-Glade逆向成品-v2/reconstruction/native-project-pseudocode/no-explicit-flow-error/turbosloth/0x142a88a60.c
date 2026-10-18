// VA 0x142a88a60, PDB extent 13980 bytes
// redb::tree_store::btree_mutator::MutateHelper::insert_helper<ref$<str$>,u64>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   redb::tree_store::btree_mutator::MutateHelper::insert_helper<ref$<str$>,u64>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
   Extent: 13980 */

void pdb_142a88a60(undefined8 *param_1,ulonglong param_2,byte *param_3,byte *param_4,
                  undefined8 param_5,undefined8 param_6,byte *param_7,undefined8 param_8)

{
  ushort uVar1;
  longlong *plVar2;
  byte *pbVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  int iVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  undefined4 uVar23;
  byte *pbVar24;
  byte *pbStack_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  byte *pbStack_5b0;
  longlong lStack_5a8;
  undefined4 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined8 uStack_588;
  undefined4 uStack_580;
  longlong lStack_578;
  undefined4 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  byte *pbStack_550;
  byte *pbStack_548;
  byte *pbStack_540;
  byte *pbStack_538;
  ulonglong uStack_530;
  byte *pbStack_528;
  byte *pbStack_520;
  byte *pbStack_518;
  byte *pbStack_510;
  byte *pbStack_508;
  byte *pbStack_500;
  byte *pbStack_4f8;
  byte *pbStack_4f0;
  byte *pbStack_4e8;
  byte *pbStack_4e0;
  undefined8 uStack_4d0;
  undefined4 uStack_4c8;
  longlong lStack_4c0;
  byte *pbStack_4b8;
  int iStack_4b0;
  int iStack_4ac;
  undefined8 uStack_4a8;
  byte *pbStack_4a0;
  byte *pbStack_498;
  byte *pbStack_490;
  int iStack_488;
  int iStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  byte *pbStack_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  int iStack_44c;
  byte *pbStack_448;
  byte *pbStack_440;
  byte *pbStack_438;
  byte *pbStack_430;
  undefined4 uStack_428;
  byte *pbStack_420;
  undefined4 uStack_418;
  ulonglong uStack_410;
  undefined8 uStack_408;
  int iStack_400;
  int iStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  int iStack_3cc;
  byte *pbStack_3c8;
  byte *pbStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  ulonglong uStack_3a8;
  byte *pbStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  byte *pbStack_368;
  byte *pbStack_360;
  byte *pbStack_358;
  byte *pbStack_350;
  byte *pbStack_348;
  byte *pbStack_340;
  byte *pbStack_338;
  undefined8 uStack_330;
  longlong lStack_328;
  longlong lStack_320;
  int iStack_318;
  int iStack_314;
  int iStack_310;
  byte *pbStack_308;
  int iStack_300;
  longlong lStack_2f8;
  int iStack_2f0;
  longlong lStack_2e8;
  undefined4 uStack_2e0;
  byte *pbStack_2d8;
  undefined4 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  byte *pbStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  int iStack_28c;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  byte *pbStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  undefined8 uStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  undefined4 uStack_230;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  undefined1 uStack_218;
  undefined2 uStack_217;
  undefined1 uStack_215;
  undefined4 uStack_214;
  byte *pbStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  undefined8 uStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  ulonglong uStack_1b8;
  byte *pbStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  byte *pbStack_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined2 uStack_8c;
  undefined1 uStack_8a;
  byte *pbStack_88;
  undefined8 *puStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  byte bStack_62;
  undefined1 uStack_61;
  byte *pbStack_60;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar13 = *(ulonglong *)(param_3 + 8);
  uStack_78 = param_2;
  pbStack_60 = param_3;
  if (uVar13 == 0) {
    uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_1436352f0);
  }
  lVar9 = *(longlong *)param_3;
  puStack_80 = param_1;
  if (*(char *)(lVar9 + 0x10) == '\x01') {
    uStack_49 = 1;
    uVar7 = 1;
    pdb_141aa92e0(&iStack_488,lVar9 + 0x10,uVar13,0);
    pbVar12 = (byte *)CONCAT44(uStack_454,uStack_458);
    if (pbVar12 == (byte *)0x0) {
      pbVar11 = (byte *)0x0;
      pbStack_70 = (byte *)0x0;
LAB_142a89235:
      lVar9 = *(longlong *)(uStack_78 + 8);
LAB_142a89247:
      lStack_d0 = lVar9 + 0x10;
      iStack_220 = *(int *)(pbStack_60 + 0x18);
      iStack_228 = (int)*(longlong *)(pbStack_60 + 0x10);
      iStack_224 = (int)((ulonglong)*(longlong *)(pbStack_60 + 0x10) >> 0x20);
      uStack_49 = 1;
      bVar6 = pdb_141e0a540(lStack_d0,&iStack_228);
      pbStack_88 = pbStack_60 + 0x10;
      bStack_62 = *(byte *)(uStack_78 + 0x20);
      if ((bVar6 & bStack_62) == 1) {
        if ((char)pbStack_70 == '\0') {
          lVar9 = *(longlong *)(pbStack_60 + 8);
          uStack_49 = 1;
          uVar7 = 1;
          pdb_141aa92e0(&iStack_228,*(longlong *)pbStack_60 + 0x10,lVar9,0);
          if ((pbStack_60[0x18] == 0) || (uStack_1f8 <= pbVar11)) {
            uStack_49 = 1;
            lVar8 = pdb_141aa8e60(&iStack_228);
            if (param_7 + 0xc <= (byte *)(lVar9 - lVar8)) {
              uStack_2e0 = *(undefined4 *)(pbStack_88 + 8);
              lStack_2e8 = *(longlong *)pbStack_88;
              iStack_228 = 3;
              goto LAB_142a8ae03;
            }
          }
        }
        else {
          uStack_49 = 1;
          uVar7 = 8;
          cVar5 = pdb_142621af0(pbStack_60,pbVar11,0);
          if (cVar5 != '\0') {
            uStack_2e0 = *(undefined4 *)(pbStack_88 + 8);
            lStack_2e8 = *(longlong *)pbStack_88;
            uStack_49 = 1;
            pdb_141aa9340(&uStack_408,&iStack_488,pbVar11);
            pbVar12 = uStack_3f0;
            if (uStack_408 == (byte *)0x0) {
              uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_1436353c8);
            }
            if (-1 < (longlong)uStack_3f0) {
              if (uStack_3f0 == (byte *)0x0) {
                pbVar10 = (byte *)0x1;
              }
              else {
                uVar21 = CONCAT44(uStack_3f4,uStack_3f8);
                pdb_14007ee60();
                uVar7 = 1;
                pbVar10 = pub_1406abab0((ulonglong)pbVar12,1);
                if (pbVar10 == (byte *)0x0) goto LAB_142a8934f;
                pub_142e32760(pbVar10,uVar21,pbVar12);
              }
              iStack_228 = 2;
              pbStack_210 = (byte *)0x2;
              uStack_208 = pbVar12;
              uStack_1f8 = pbVar12;
              pbStack_1d8 = (byte *)0x0;
              uStack_1d0 = pbVar12;
              uStack_200 = pbVar10;
LAB_142a8ae03:
              iStack_224 = 0;
              uStack_408 = *(byte **)pbStack_60;
              iStack_400 = *(int *)(pbStack_60 + 8);
              iStack_3fc = *(int *)(pbStack_60 + 0xc);
              uStack_3f8 = *(undefined4 *)(pbStack_60 + 0x10);
              uStack_3f4 = *(undefined4 *)(pbStack_60 + 0x14);
              uStack_3f0 = *(byte **)(pbStack_60 + 0x18);
              LOCK();
              *(longlong *)uStack_408 = *(longlong *)uStack_408 + -1;
              UNLOCK();
              if (*(longlong *)uStack_408 == 0) {
                pdb_1406ed6a0(&uStack_408);
              }
              uStack_c0 = (byte *)CONCAT44(uStack_c0._4_4_,uStack_2e0);
              uStack_c8 = (byte *)lStack_2e8;
              lVar9 = lStack_d0;
              pdb_141e0ac60(&uStack_408,lStack_d0,&uStack_c8);
              uStack_2c8 = (byte *)CONCAT44(iStack_3fc,iStack_400);
              uStack_2c0 = (byte *)CONCAT44(uStack_3f4,uStack_3f8);
              uStack_2b8 = uStack_3f0;
              if (uStack_408 == (byte *)0x0) {
                puStack_80[3] = uStack_3f0;
                *(int *)(puStack_80 + 1) = iStack_400;
                *(int *)((longlong)puStack_80 + 0xc) = iStack_3fc;
                *(undefined4 *)(puStack_80 + 2) = uStack_3f8;
                *(undefined4 *)((longlong)puStack_80 + 0x14) = uStack_3f4;
                *puStack_80 = 4;
                if (iStack_228 == 3) {
                  return;
                }
                uStack_49 = 0;
                pdb_141ac4dd0(&iStack_228);
                return;
              }
              uStack_108 = (byte *)CONCAT44(uStack_3e4,uStack_3e8);
              uStack_100 = (byte *)CONCAT44(uStack_3dc,uStack_3e0);
              uStack_120 = (byte *)CONCAT44(iStack_3fc,iStack_400);
              uStack_118 = (byte *)CONCAT44(uStack_3f4,uStack_3f8);
              uStack_110 = uStack_3f0;
              uStack_128 = uStack_408;
              uVar7 = pdb_141aa2d90(&uStack_128);
              uVar21 = 8;
              pdb_141aa7550(&uStack_2c8,uVar7,lVar9,0);
              if ((char)pbStack_70 == '\0') {
                pdb_141aa75c0(&uStack_2c8,pbVar11,param_6,param_7,param_8,8,uVar21);
              }
              else {
                pdb_141aa85a0(&uStack_2c8,pbVar11,param_8,8);
              }
              pdb_141aa92e0(&uStack_408,(longlong)uStack_120 + 0x10,uStack_118,0);
              lVar9 = pdb_141aa9260(&uStack_408);
              if (lVar9 == 1) {
                puStack_80[0x18] = uStack_108;
                puStack_80[0x19] = uStack_100;
                puStack_80[0x16] = uStack_118;
                puStack_80[0x17] = uStack_110;
                puStack_80[0x14] = uStack_128;
                puStack_80[0x15] = uStack_120;
                *puStack_80 = CONCAT44(iStack_224,iStack_228);
                puStack_80[1] = CONCAT44(iStack_21c,iStack_220);
                puStack_80[2] =
                     CONCAT44(uStack_214,CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218)));
                puStack_80[3] = pbStack_210;
                puStack_80[4] = uStack_208;
                puStack_80[5] = uStack_200;
                puStack_80[6] = uStack_1f8;
                puStack_80[7] = uStack_1f0;
                puStack_80[8] = pbStack_1e8;
                puStack_80[9] = pbStack_1e0;
                puStack_80[10] = pbStack_1d8;
                puStack_80[0xb] = uStack_1d0;
                puStack_80[0x1e] = lStack_2e8;
                *(undefined4 *)(puStack_80 + 0x1f) = uStack_2e0;
                puStack_80[0xc] = 0x8000000000000000;
                puStack_80[0x1a] = pbVar11;
                puStack_80[0x1b] = 8;
                puStack_80[0x1d] = 0;
                puStack_80[0x1c] = 999;
                return;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_1436353e0);
            }
            uVar7 = 0;
LAB_142a8934f:
            uStack_49 = 1;
            pdb_142dc7e2a(uVar7,pbVar12);
            goto LAB_142a8b772;
          }
        }
      }
      lStack_4c0 = *(longlong *)(uStack_78 + 0x18) + 0x10;
      uStack_49 = 1;
      pbVar24 = (byte *)0x0;
      pdb_141aa6a20(&uStack_2c8,lStack_d0,lStack_4c0,pbVar12 + 1,0,uVar7,1,8);
      piVar19 = &iStack_488;
      pbVar10 = (byte *)0x0;
LAB_142a89450:
      pbVar15 = pbVar10;
      if (pbVar15 < pbVar12) {
        pbVar10 = pbVar15 + 1;
        if (pbVar15 == pbVar11) goto code_r0x000142a89464;
        goto LAB_142a894a2;
      }
      if (pbVar12 == pbVar11) {
        uStack_4d = 1;
        uStack_4e = 1;
        pbVar24 = (byte *)0x8;
        pdb_141aa6b00(&uStack_2c8,param_6,param_7,param_8,8);
      }
      uStack_4d = 1;
      uStack_4e = 1;
      cVar5 = pdb_141aa68d0(&uStack_2c8);
      if (cVar5 == '\0') {
        pbStack_1d8 = pbStack_278;
        pbStack_1e8 = pbStack_288;
        pbStack_1e0 = pbStack_280;
        uStack_1f8 = (byte *)CONCAT44(uStack_294,uStack_298);
        uStack_1f0 = CONCAT44(iStack_28c,uStack_290);
        uStack_208 = uStack_2a8;
        uStack_200 = uStack_2a0;
        uStack_218 = SUB81(uStack_2b8,0);
        uStack_217 = (undefined2)((ulonglong)uStack_2b8 >> 8);
        uStack_215 = (undefined1)((ulonglong)uStack_2b8 >> 0x18);
        uStack_214 = uStack_2b8._4_4_;
        pbStack_210 = pbStack_2b0;
        iStack_228 = (int)uStack_2c8;
        iStack_224 = uStack_2c8._4_4_;
        iStack_220 = (int)uStack_2c0;
        iStack_21c = uStack_2c0._4_4_;
        uStack_4d = 1;
        uStack_4e = 0;
        pdb_141aa6b70(&uStack_408,&iStack_228);
        uStack_c8 = (byte *)CONCAT44(iStack_3fc,iStack_400);
        uStack_c0 = (byte *)CONCAT44(uStack_3f4,uStack_3f8);
        pbStack_b8 = uStack_3f0;
        if (uStack_408 == (byte *)0x0) goto LAB_142a89c64;
        uStack_108 = (byte *)CONCAT44(uStack_3e4,uStack_3e8);
        uStack_100 = (byte *)CONCAT44(uStack_3dc,uStack_3e0);
        uStack_120 = (byte *)CONCAT44(iStack_3fc,iStack_400);
        uStack_118 = (byte *)CONCAT44(uStack_3f4,uStack_3f8);
        uStack_110 = uStack_3f0;
        uStack_128 = uStack_408;
        lStack_2f8 = *(longlong *)pbStack_88;
        iStack_2f0 = *(int *)(pbStack_88 + 8);
        if ((char)pbStack_70 == '\0') {
          iStack_228 = *(int *)pbStack_60;
          iStack_224 = *(int *)(pbStack_60 + 4);
          plVar2 = *(longlong **)pbStack_60;
          iStack_220 = *(int *)(pbStack_60 + 8);
          iStack_21c = *(int *)(pbStack_60 + 0xc);
          uVar23 = *(undefined4 *)(pbStack_60 + 0x10);
          uStack_214 = *(undefined4 *)(pbStack_60 + 0x14);
          pbStack_210 = *(byte **)(pbStack_60 + 0x18);
          uStack_218 = (undefined1)uVar23;
          uStack_217 = (undefined2)((uint)uVar23 >> 8);
          uStack_215 = (undefined1)((uint)uVar23 >> 0x18);
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            uStack_4f = 0;
            pdb_1406ed6a0(&iStack_228);
          }
          uStack_4f = 0;
          pdb_142a8f7d0(uStack_78,&lStack_2f8);
          iStack_228 = 3;
          iStack_224 = 0;
        }
        else {
          uStack_4f = 1;
          pdb_141aa8ab0(&iStack_228,&iStack_488,pbVar11);
          if (iStack_228 != 1) {
            uStack_4f = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143635308);
          }
          pbVar12 = (byte *)CONCAT44(iStack_21c,iStack_220);
          pbVar10 = (byte *)CONCAT44(uStack_214,CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218))
                                    );
          if ((bStack_62 & 1) != 0) {
            iStack_220 = iStack_2f0;
            iStack_228 = (int)lStack_2f8;
            iStack_224 = (int)((ulonglong)lStack_2f8 >> 0x20);
            uStack_4f = 1;
            cVar5 = pdb_141e0a540(lStack_d0,&iStack_228);
            if (cVar5 != '\0') {
              pbVar15 = *(byte **)pbStack_60;
              pbVar3 = *(byte **)(pbStack_60 + 8);
              LOCK();
              lVar9 = *(longlong *)pbVar15;
              *(longlong *)pbVar15 = *(longlong *)pbVar15 + 1;
              UNLOCK();
              if (*(longlong *)pbVar15 == 0 || SCARRY8(lVar9,1) != *(longlong *)pbVar15 < 0)
              goto LAB_142a8b772;
              iStack_228 = *(int *)pbStack_60;
              iStack_224 = *(int *)(pbStack_60 + 4);
              plVar2 = *(longlong **)pbStack_60;
              iStack_220 = *(int *)(pbStack_60 + 8);
              iStack_21c = *(int *)(pbStack_60 + 0xc);
              uVar23 = *(undefined4 *)(pbStack_60 + 0x10);
              uStack_214 = *(undefined4 *)(pbStack_60 + 0x14);
              pbStack_210 = *(byte **)(pbStack_60 + 0x18);
              uStack_218 = (undefined1)uVar23;
              uStack_217 = (undefined2)((uint)uVar23 >> 8);
              uStack_215 = (undefined1)((uint)uVar23 >> 0x18);
              LOCK();
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              uStack_c8 = pbVar15;
              uStack_c0 = pbVar3;
              if (*plVar2 == 0) {
                uStack_53 = 1;
                pdb_1406ed6a0(&iStack_228);
              }
              uStack_53 = 1;
              pdb_1400f0d40(&iStack_228,lStack_4c0);
              if (iStack_228 == 1) {
                uStack_408 = (byte *)CONCAT44(iStack_21c,iStack_220);
                iStack_400 = CONCAT31(iStack_400._1_3_,uStack_218);
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_143635230,0x2b,&uStack_408,&UNK_143635210,&UNK_143635320);
              }
              pbStack_88 = (byte *)CONCAT44(iStack_21c,iStack_220);
              uStack_78 = CONCAT71(uStack_78._1_7_,uStack_218);
              pdb_141e110c0(lStack_d0,&lStack_2f8,pbStack_88 + 8);
              uStack_1d0 = (byte *)0x0;
              if (pbVar12 <= pbVar10) {
                uStack_1d0 = pbVar10 + -(longlong)pbVar12;
              }
              iStack_228 = 2;
              iStack_224 = 0;
              pbStack_210 = (byte *)0x3;
              uStack_208 = uStack_c8;
              uStack_53 = 0;
              uStack_200 = pbVar3;
              pbStack_1d8 = pbVar12;
              pdb_140008470(pbStack_88,uStack_78 & 0xff);
              goto LAB_142a89ddf;
            }
          }
          plVar2 = *(longlong **)(uStack_78 + 0x10);
          lVar9 = plVar2[2];
          if (lVar9 == *plVar2) {
            uStack_4f = 1;
            pdb_142db85a0(plVar2);
          }
          lVar8 = plVar2[1];
          *(int *)(lVar8 + 8 + lVar9 * 0xc) = iStack_2f0;
          *(longlong *)(lVar8 + lVar9 * 0xc) = lStack_2f8;
          plVar2[2] = lVar9 + 1;
          uStack_208 = *(byte **)pbStack_60;
          uStack_200 = *(byte **)(pbStack_60 + 8);
          uStack_1f8 = *(byte **)(pbStack_60 + 0x10);
          uStack_1f0 = *(ulonglong *)(pbStack_60 + 0x18);
          uStack_1d0 = (byte *)0x0;
          if (pbVar12 <= pbVar10) {
            uStack_1d0 = pbVar10 + -(longlong)pbVar12;
          }
          iStack_228 = 2;
          iStack_224 = 0;
          pbStack_210 = (byte *)0x0;
          pbStack_1d8 = pbVar12;
        }
LAB_142a89ddf:
        pbVar12 = uStack_118;
        pdb_141aa92e0(&uStack_408,uStack_120 + 0x10,uStack_118,0,pbVar24,1,8);
        lVar9 = pdb_141aa9260(&uStack_408);
        if (lVar9 != 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143635338);
        }
        pbStack_4e8 = uStack_108;
        pbStack_4e0 = uStack_100;
        pbStack_4f8 = uStack_118;
        pbStack_4f0 = uStack_110;
        pbStack_508 = uStack_128;
        pbStack_500 = uStack_120;
        pbStack_518 = pbStack_1d8;
        pbStack_510 = uStack_1d0;
        pbStack_528 = pbStack_1e8;
        pbStack_520 = pbStack_1e0;
        uStack_568 = CONCAT44(iStack_224,iStack_228);
        uStack_560 = CONCAT44(iStack_21c,iStack_220);
        uStack_558 = CONCAT44(uStack_214,CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218)));
        pbStack_538 = uStack_1f8;
        uStack_530 = uStack_1f0;
        pbStack_548 = uStack_208;
        pbStack_540 = uStack_200;
        pbStack_550 = pbStack_210;
        uStack_230 = (undefined4)uStack_100;
        pbStack_238 = uStack_108;
        pbVar10 = pbVar11;
        pbStack_1c0 = pbVar12;
        uVar13 = 0x8000000000000000;
      }
      else {
        uStack_3b8 = pbStack_278;
        pbStack_3c8 = pbStack_288;
        pbStack_3c0 = pbStack_280;
        uStack_3d8 = uStack_298;
        uStack_3d4 = uStack_294;
        uStack_3d0 = uStack_290;
        iStack_3cc = iStack_28c;
        uStack_3e8 = (undefined4)uStack_2a8;
        uStack_3e4 = uStack_2a8._4_4_;
        uStack_3e0 = (undefined4)uStack_2a0;
        uStack_3dc = uStack_2a0._4_4_;
        uStack_3f8 = (undefined4)uStack_2b8;
        uStack_3f4 = uStack_2b8._4_4_;
        uStack_3f0 = pbStack_2b0;
        uStack_408 = uStack_2c8;
        iStack_400 = (int)uStack_2c0;
        iStack_3fc = uStack_2c0._4_4_;
        uStack_4d = 1;
        uStack_4e = 0;
        pdb_141aa5cf0(&iStack_228,&uStack_408);
        pbVar15 = pbStack_60;
        uVar13 = uStack_1f0;
        pbVar10 = uStack_1f8;
        pbVar12 = (byte *)CONCAT44(iStack_224,iStack_228);
        uStack_128 = (byte *)CONCAT44(iStack_21c,iStack_220);
        uVar23 = CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218));
        uStack_120 = (byte *)CONCAT44(uStack_214,uVar23);
        uStack_118 = pbStack_210;
        if (pbVar12 == (byte *)0x0) goto LAB_142a8969b;
        pbStack_498 = uStack_208;
        pbStack_490 = uStack_200;
        pbStack_a8 = pbStack_1c8;
        pbStack_a0 = pbStack_1c0;
        pbStack_b8 = pbStack_1d8;
        pbStack_b0 = uStack_1d0;
        uStack_c8 = pbStack_1e8;
        uStack_c0 = pbStack_1e0;
        iStack_4b0 = iStack_220;
        iStack_4ac = iStack_21c;
        uStack_4a8 = (byte *)CONCAT44(uStack_214,uVar23);
        pbStack_4a0 = pbStack_210;
        pbStack_4b8 = pbVar12;
        if ((longlong)uStack_1f0 < 0) {
          uVar7 = 0;
LAB_142a89683:
          uStack_63 = 1;
          pdb_142dc7e2a(uVar7,uVar13);
LAB_142a8b772:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (uStack_1f0 == 0) {
          pbStack_240 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          uVar7 = 1;
          pbVar12 = pub_1406abab0(uVar13,1);
          if (pbVar12 == (byte *)0x0) goto LAB_142a89683;
          pbStack_240 = pbVar12;
          pub_142e32760(pbVar12,pbVar10,uVar13);
        }
        uStack_410 = uVar13;
        iStack_300 = *(int *)(pbStack_88 + 8);
        pbStack_308 = *(byte **)pbStack_88;
        if ((char)pbStack_70 == '\0') {
          uStack_408 = *(byte **)pbVar15;
          iStack_400 = *(int *)(pbVar15 + 8);
          iStack_3fc = *(int *)(pbVar15 + 0xc);
          uStack_3f8 = *(undefined4 *)(pbVar15 + 0x10);
          uStack_3f4 = *(undefined4 *)(pbVar15 + 0x14);
          uStack_3f0 = *(byte **)(pbVar15 + 0x18);
          LOCK();
          *(longlong *)uStack_408 = *(longlong *)uStack_408 + -1;
          UNLOCK();
          if (*(longlong *)uStack_408 == 0) {
            uStack_50 = 0;
            pdb_1406ed6a0(&uStack_408);
          }
          uStack_50 = 0;
          pdb_142a8f7d0(uStack_78,&pbStack_308);
          iStack_228 = 3;
          iStack_224 = 0;
        }
        else {
          uStack_50 = 1;
          pdb_141aa8ab0(&uStack_408,&iStack_488,pbVar11);
          if ((int)uStack_408 != 1) {
            uStack_50 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143635350);
          }
          pbVar12 = (byte *)CONCAT44(iStack_3fc,iStack_400);
          pbVar10 = (byte *)CONCAT44(uStack_3f4,uStack_3f8);
          if ((bStack_62 & 1) != 0) {
            iStack_400 = iStack_300;
            uStack_408 = pbStack_308;
            uStack_50 = 1;
            cVar5 = pdb_141e0a540(lStack_d0,&uStack_408);
            if (cVar5 != '\0') {
              pbVar15 = *(byte **)pbStack_60;
              pbVar3 = *(byte **)(pbStack_60 + 8);
              LOCK();
              lVar9 = *(longlong *)pbVar15;
              *(longlong *)pbVar15 = *(longlong *)pbVar15 + 1;
              UNLOCK();
              if (*(longlong *)pbVar15 == 0 || SCARRY8(lVar9,1) != *(longlong *)pbVar15 < 0)
              goto LAB_142a8b772;
              uStack_408 = *(byte **)pbStack_60;
              iStack_400 = *(int *)(pbStack_60 + 8);
              iStack_3fc = *(int *)(pbStack_60 + 0xc);
              uStack_3f8 = *(undefined4 *)(pbStack_60 + 0x10);
              uStack_3f4 = *(undefined4 *)(pbStack_60 + 0x14);
              uStack_3f0 = *(byte **)(pbStack_60 + 0x18);
              LOCK();
              *(longlong *)uStack_408 = *(longlong *)uStack_408 + -1;
              UNLOCK();
              uStack_258 = pbVar15;
              pbStack_250 = pbVar3;
              if (*(longlong *)uStack_408 == 0) {
                uStack_54 = 1;
                pdb_1406ed6a0(&uStack_408);
              }
              uStack_54 = 1;
              pdb_1400f0d40(&uStack_408,lStack_4c0);
              if ((int)uStack_408 == 1) {
                uStack_128 = (byte *)CONCAT44(iStack_3fc,iStack_400);
                uStack_120 = (byte *)CONCAT71(uStack_120._1_7_,(undefined1)uStack_3f8);
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_143635230,0x2b,&uStack_128,&UNK_143635210,&UNK_143635368);
              }
              pbStack_88 = (byte *)CONCAT44(iStack_3fc,iStack_400);
              uStack_78 = CONCAT71(uStack_78._1_7_,(undefined1)uStack_3f8);
              pdb_141e110c0(lStack_d0,&pbStack_308,pbStack_88 + 8);
              uStack_1d0 = (byte *)0x0;
              if (pbVar12 <= pbVar10) {
                uStack_1d0 = pbVar10 + -(longlong)pbVar12;
              }
              iStack_228 = 2;
              iStack_224 = 0;
              pbStack_210 = (byte *)0x3;
              uStack_208 = uStack_258;
              uStack_54 = 0;
              uStack_200 = pbVar3;
              pbStack_1d8 = pbVar12;
              pdb_140008470(pbStack_88,uStack_78 & 0xff);
              goto LAB_142a8a898;
            }
          }
          plVar2 = *(longlong **)(uStack_78 + 0x10);
          lVar9 = plVar2[2];
          if (lVar9 == *plVar2) {
            uStack_50 = 1;
            pdb_142db85a0(plVar2);
          }
          lVar8 = plVar2[1];
          *(int *)(lVar8 + 8 + lVar9 * 0xc) = iStack_300;
          *(byte **)(lVar8 + lVar9 * 0xc) = pbStack_308;
          plVar2[2] = lVar9 + 1;
          uStack_208 = *(byte **)pbStack_60;
          uStack_200 = *(byte **)(pbStack_60 + 8);
          uStack_1f8 = *(byte **)(pbStack_60 + 0x10);
          uStack_1f0 = *(ulonglong *)(pbStack_60 + 0x18);
          uStack_1d0 = (byte *)0x0;
          if (pbVar12 <= pbVar10) {
            uStack_1d0 = pbVar10 + -(longlong)pbVar12;
          }
          iStack_228 = 2;
          iStack_224 = 0;
          pbStack_210 = (byte *)0x0;
          pbStack_1d8 = pbVar12;
        }
LAB_142a8a898:
        uStack_418 = pbStack_490._0_4_;
        pbStack_420 = pbStack_498;
        pbStack_430 = pbStack_a8;
        uStack_428 = pbStack_a0._0_4_;
        pdb_141aa92e0(&uStack_128,CONCAT44(iStack_4ac,iStack_4b0) + 0x10,uStack_4a8,0,pbVar24,1,8);
        pbVar10 = pbVar11 + -CONCAT44(uStack_f4,uStack_f8);
        if (pbVar11 < (byte *)CONCAT44(uStack_f4,uStack_f8)) {
          pdb_141aa92e0(&uStack_408,CONCAT44(iStack_4ac,iStack_4b0) + 0x10,uStack_4a8,0,pbVar24,1,8)
          ;
          lVar9 = pdb_141aa9260(&uStack_408);
          if (lVar9 != 1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143635398);
          }
          pbStack_238 = pbStack_420;
          uStack_230 = uStack_418;
          pbStack_2d8 = pbStack_430;
          uStack_2d0 = uStack_428;
          pbStack_500 = (byte *)CONCAT44(iStack_4ac,iStack_4b0);
          pbStack_508 = pbStack_4b8;
          pbStack_4f8 = uStack_4a8;
          pbStack_4f0 = pbStack_4a0;
          pbStack_4e8 = pbStack_498;
          pbStack_4e0 = pbStack_490;
          uStack_568 = CONCAT44(iStack_224,iStack_228);
          uStack_560 = CONCAT44(iStack_21c,iStack_220);
          uStack_558 = CONCAT44(uStack_214,CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218)));
          pbStack_550 = pbStack_210;
          pbStack_548 = uStack_208;
          pbStack_540 = uStack_200;
          pbStack_538 = uStack_1f8;
          uStack_530 = uStack_1f0;
          pbStack_528 = pbStack_1e8;
          pbStack_520 = pbStack_1e0;
          pbStack_518 = pbStack_1d8;
          pbStack_510 = uStack_1d0;
          uStack_64 = 0;
          uStack_65 = 0;
          pdb_1409987a0(&uStack_c8);
          pbVar10 = pbVar11;
          pbStack_1c0 = pbStack_240;
          uVar13 = uStack_410;
        }
        else {
          pdb_141aa92e0(&uStack_408,uStack_c0 + 0x10,pbStack_b8,0,pbVar24,1,8);
          uVar13 = pdb_141aa9260(&uStack_408);
          if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143635380);
          }
          pbStack_238 = pbStack_420;
          uStack_230 = uStack_418;
          pbStack_2d8 = pbStack_430;
          uStack_2d0 = uStack_428;
          pbStack_508 = uStack_c8;
          pbStack_500 = uStack_c0;
          pbStack_4f8 = pbStack_b8;
          pbStack_4f0 = pbStack_b0;
          pbStack_4e8 = pbStack_a8;
          pbStack_4e0 = pbStack_a0;
          uStack_568 = CONCAT44(iStack_224,iStack_228);
          uStack_560 = CONCAT44(iStack_21c,iStack_220);
          uStack_558 = CONCAT44(uStack_214,CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218)));
          pbStack_550 = pbStack_210;
          pbStack_548 = uStack_208;
          pbStack_540 = uStack_200;
          pbStack_538 = uStack_1f8;
          uStack_530 = uStack_1f0;
          pbStack_528 = pbStack_1e8;
          pbStack_520 = pbStack_1e0;
          pbStack_518 = pbStack_1d8;
          pbStack_510 = uStack_1d0;
          uStack_4d = 0;
          uStack_4e = 0;
          pdb_1409987a0(&pbStack_4b8);
          pbStack_1c0 = pbStack_240;
          uVar13 = uStack_410;
        }
      }
      uVar7 = 999;
      uVar20 = 8;
      uVar21 = 0;
      uStack_1b8 = uVar13;
LAB_142a8ab4a:
      puStack_80[10] = pbStack_518;
      puStack_80[0xb] = pbStack_510;
      puStack_80[8] = pbStack_528;
      puStack_80[9] = pbStack_520;
      puStack_80[6] = pbStack_538;
      puStack_80[7] = uStack_530;
      puStack_80[4] = pbStack_548;
      puStack_80[5] = pbStack_540;
      puStack_80[2] = uStack_558;
      puStack_80[3] = pbStack_550;
      *puStack_80 = uStack_568;
      puStack_80[1] = uStack_560;
      puStack_80[0xc] = uVar13;
      puStack_80[0xd] = pbStack_1c0;
      puStack_80[0xe] = uStack_1b8;
      puStack_80[0xf] = pbStack_2d8;
      *(undefined4 *)(puStack_80 + 0x10) = uStack_2d0;
      *(undefined8 *)((longlong)puStack_80 + 0x84) = uStack_4d0;
      *(undefined4 *)((longlong)puStack_80 + 0x8c) = uStack_4c8;
      puStack_80[0x13] = uVar21;
      puStack_80[0x12] = uVar7;
      puStack_80[0x14] = pbStack_508;
      puStack_80[0x15] = pbStack_500;
      puStack_80[0x16] = pbStack_4f8;
      puStack_80[0x17] = pbStack_4f0;
      puStack_80[0x18] = pbStack_4e8;
      puStack_80[0x19] = pbStack_4e0;
      puStack_80[0x1a] = pbVar10;
      puStack_80[0x1b] = uVar20;
      puStack_80[0x1d] = 0;
      puStack_80[0x1c] = 999;
      *(undefined4 *)(puStack_80 + 0x1f) = uStack_230;
      puStack_80[0x1e] = pbStack_238;
      *(int *)((longlong)puStack_80 + 0xfc) = (int)piVar19;
      return;
    }
    pbVar11 = (byte *)0x0;
    pbVar10 = pbVar12;
    do {
      while( true ) {
        pbVar15 = (byte *)((((ulonglong)pbVar10 ^ (ulonglong)pbVar11) >> 1) +
                          ((ulonglong)pbVar10 & (ulonglong)pbVar11));
        uStack_49 = 1;
        pbVar24 = pbVar15;
        uVar21 = pdb_141aa8f10(&iStack_488,pbVar15);
        uStack_49 = 1;
        cVar5 = pdb_141c8a6d0(param_6,param_7,uVar21,pbVar24);
        if (cVar5 == '\x01') break;
        if (cVar5 != -1) {
          pbStack_70 = (byte *)0x1;
          pbVar11 = pbVar15;
          goto joined_r0x000142a891d7;
        }
        pbVar10 = pbVar15;
        if (pbVar15 <= pbVar11) goto LAB_142a88d9b;
      }
      pbVar11 = pbVar15 + 1;
    } while (pbVar11 < pbVar10);
LAB_142a88d9b:
    pbStack_70 = (byte *)0x0;
joined_r0x000142a891d7:
    if (pbVar12 != (byte *)0x1) goto LAB_142a89235;
    uStack_49 = 1;
    uVar13 = pdb_141aa8e60(&iStack_488);
    lVar9 = *(longlong *)(uStack_78 + 8);
    uStack_49 = 1;
    uVar17 = pdb_141e0b320(lVar9 + 0x10);
    if ((~(byte)pbStack_70 & uVar17 <= uVar13) == 0) goto LAB_142a89247;
    uStack_49 = 1;
    pdb_141aa6a20(&uStack_408,lVar9 + 0x10,*(longlong *)(uStack_78 + 0x18) + 0x10,1,0,uVar7,1,8);
    uStack_55 = 1;
    uVar7 = 8;
    pdb_141aa6b00(&uStack_408,param_6,param_7,param_8,8);
    pbStack_1d8 = uStack_3b8;
    pbStack_1e8 = pbStack_3c8;
    pbStack_1e0 = pbStack_3c0;
    uStack_1f8 = (byte *)CONCAT44(uStack_3d4,uStack_3d8);
    uStack_1f0 = CONCAT44(iStack_3cc,uStack_3d0);
    uStack_208 = (byte *)CONCAT44(uStack_3e4,uStack_3e8);
    uStack_200 = (byte *)CONCAT44(uStack_3dc,uStack_3e0);
    uStack_218 = (undefined1)uStack_3f8;
    uStack_217 = (undefined2)((uint)uStack_3f8 >> 8);
    uStack_215 = (undefined1)((uint)uStack_3f8 >> 0x18);
    uStack_214 = uStack_3f4;
    pbStack_210 = uStack_3f0;
    iStack_228 = (int)uStack_408;
    iStack_224 = uStack_408._4_4_;
    iStack_220 = iStack_400;
    iStack_21c = iStack_3fc;
    uStack_55 = 0;
    pdb_141aa6b70(&uStack_2c8,&iStack_228);
    uStack_c8 = uStack_2c0;
    uStack_c0 = uStack_2b8;
    pbStack_b8 = pbStack_2b0;
    if (uStack_2c8 != (byte *)0x0) {
      uStack_108 = uStack_2a8;
      uStack_100 = uStack_2a0;
      uStack_120 = uStack_2c0;
      uStack_118 = uStack_2b8;
      uStack_110 = pbStack_2b0;
      uStack_128 = uStack_2c8;
      uStack_61 = 1;
      pdb_141aa92e0(&uStack_2c8,uStack_2c0 + 0x10,uStack_2b8,0,uVar7,1,8);
      uStack_61 = 1;
      uStack_1f8 = (byte *)pdb_141aa9270(&uStack_2c8);
      uStack_208 = uStack_108;
      uStack_200 = uStack_100;
      uStack_218 = SUB81(uStack_118,0);
      uStack_217 = (undefined2)((ulonglong)uStack_118 >> 8);
      uStack_215 = (undefined1)((ulonglong)uStack_118 >> 0x18);
      uStack_214 = uStack_118._4_4_;
      pbStack_210 = uStack_110;
      iStack_228 = (int)uStack_128;
      iStack_224 = uStack_128._4_4_;
      iStack_220 = (int)uStack_120;
      iStack_21c = uStack_120._4_4_;
      uStack_1f0 = 8;
      if (pbVar11 == (byte *)0x0) {
        if (param_7 == (byte *)0x0) {
          pbVar11 = (byte *)0x1;
          puVar16 = puStack_80;
          pbVar12 = pbStack_60;
        }
        else {
          pdb_14007ee60();
          pbVar11 = pub_1406abab0((ulonglong)param_7,1);
          pbVar12 = pbStack_60;
          puVar16 = puStack_80;
          if (pbVar11 == (byte *)0x0) {
            pdb_142dc7e2a(1,param_7);
            goto LAB_142a8b772;
          }
          pub_142e32760(pbVar11,param_6);
        }
        *(undefined4 *)(puVar16 + 0x10) = *(undefined4 *)(pbVar12 + 0x18);
        puVar16[0xf] = *(longlong *)(pbVar12 + 0x10);
        *(int *)(puVar16 + 0x14) = iStack_228;
        *(int *)((longlong)puVar16 + 0xa4) = iStack_224;
        *(int *)(puVar16 + 0x15) = iStack_220;
        *(int *)((longlong)puVar16 + 0xac) = iStack_21c;
        puVar16[0x16] = CONCAT44(uStack_214,CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218)));
        puVar16[0x17] = pbStack_210;
        puVar16[0x18] = uStack_208;
        puVar16[0x19] = uStack_200;
        puVar16[0x1a] = uStack_1f8;
        puVar16[0x1b] = uStack_1f0;
        puVar16[0x1e] = uStack_108;
        *(undefined4 *)(puVar16 + 0x1f) = (undefined4)uStack_100;
        pbVar24 = (byte *)0x3e7;
        uVar21 = 0;
        pbVar10 = param_4;
        uVar7 = param_5;
      }
      else {
        pdb_141aa8a60(&uStack_c8,&iStack_488);
        pbVar12 = pbStack_60;
        param_7 = uStack_c0;
        pbVar10 = uStack_c8;
        if ((longlong)uStack_c0 < 0) {
          uVar7 = 0;
LAB_142a89c53:
          pdb_142dc7e2a(uVar7,param_7);
          goto LAB_142a8b772;
        }
        if (uStack_c0 == (byte *)0x0) {
          pbVar11 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          uVar7 = 1;
          pbVar11 = pub_1406abab0((ulonglong)param_7,1);
          if (pbVar11 == (byte *)0x0) goto LAB_142a89c53;
          pub_142e32760(pbVar11,pbVar10,param_7);
        }
        *(undefined4 *)(puStack_80 + 0x1f) = *(undefined4 *)(pbVar12 + 0x18);
        puStack_80[0x1e] = *(longlong *)(pbVar12 + 0x10);
        puStack_80[0xf] = uStack_108;
        *(undefined4 *)(puStack_80 + 0x10) = (undefined4)uStack_100;
        *(int *)(puStack_80 + 0x14) = iStack_228;
        *(int *)((longlong)puStack_80 + 0xa4) = iStack_224;
        *(int *)(puStack_80 + 0x15) = iStack_220;
        *(int *)((longlong)puStack_80 + 0xac) = iStack_21c;
        puStack_80[0x16] = CONCAT44(uStack_214,CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218)))
        ;
        puStack_80[0x17] = pbStack_210;
        puStack_80[0x18] = uStack_208;
        puStack_80[0x19] = uStack_200;
        puStack_80[0x1a] = uStack_1f8;
        puStack_80[0x1b] = uStack_1f0;
        pbVar10 = (byte *)0x3e7;
        uVar7 = 0;
        puVar16 = puStack_80;
        uVar21 = param_5;
        pbVar24 = param_4;
      }
      *puVar16 = 3;
      puVar16[0xc] = param_7;
      puVar16[0xd] = pbVar11;
      puVar16[0xe] = param_7;
      puVar16[0x12] = pbVar10;
      puVar16[0x13] = uVar7;
      puVar16[0x1c] = pbVar24;
      puVar16[0x1d] = uVar21;
      goto LAB_142a89c8f;
    }
LAB_142a89c64:
    puStack_80[3] = pbStack_b8;
    iVar14 = (int)uStack_c8;
    iVar22 = uStack_c8._4_4_;
    uStack_480 = (undefined4)uStack_c0;
    uVar23 = uStack_c0._4_4_;
  }
  else {
    if (*(char *)(lVar9 + 0x10) != '\x02') {
      uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1436352c4,0x28,&UNK_143635428);
    }
    if (uVar13 < 4) {
      uStack_49 = 1;
      pdb_142dc8420(2,4,uVar13,&UNK_1435584a8);
      goto LAB_142a8b772;
    }
    uVar1 = *(ushort *)(lVar9 + 0x12);
    pbVar10 = (byte *)(ulonglong)uVar1;
    pbStack_4b8 = (byte *)0x0;
    uStack_49 = 1;
    uStack_4a8 = param_3;
    pbStack_4a0 = pbVar10;
    pbStack_88 = param_4;
    pdb_142621dd0(&iStack_228,&pbStack_4b8,param_6);
    pbVar11 = uStack_c0;
    iVar22 = iStack_21c;
    iVar14 = iStack_220;
    pbVar12 = (byte *)CONCAT44(iStack_224,iStack_228);
    uStack_8c = uStack_217;
    uStack_8a = uStack_215;
    if (pbVar10 < pbVar12) {
      uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1436353f8);
    }
    lVar9 = (longlong)pbVar12 * 0x10 + 8;
    uVar13 = (longlong)pbVar12 * 0x10 + 0x18;
    if (*(ulonglong *)(pbStack_60 + 8) < uVar13) {
      uStack_49 = 1;
      pdb_142dc8420(lVar9,uVar13,*(ulonglong *)(pbStack_60 + 8),&UNK_143558478);
      goto LAB_142a8b772;
    }
    lVar8 = *(longlong *)(*(longlong *)pbStack_60 + 0x10 + lVar9);
    lVar9 = *(longlong *)(*(longlong *)pbStack_60 + 0x18 + lVar9);
    lVar18 = *(longlong *)(uStack_78 + 8) + 0x10;
    uStack_c8 = (byte *)CONCAT44(iStack_21c,iStack_220);
    lStack_d0 = CONCAT71(lStack_d0._1_7_,uStack_218);
    uStack_c0._4_4_ = SUB84(pbVar11,4);
    uStack_c0._0_4_ = CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218));
    uStack_49 = 1;
    pbStack_70 = pbVar12;
    pdb_141e12d10(&uStack_2c8,lVar18,&uStack_c8,0);
    uStack_128 = uStack_2c0;
    pbVar12 = uStack_128;
    uStack_120 = uStack_2b8;
    pbVar11 = uStack_120;
    uStack_118 = pbStack_2b0;
    if (uStack_2c8 == (byte *)0x0) {
LAB_142a8969b:
      puStack_80[3] = uStack_118;
      iVar14 = (int)uStack_128;
      iVar22 = uStack_128._4_4_;
      uStack_480 = (int)uStack_120;
      uVar23 = uStack_120._4_4_;
    }
    else {
      pbStack_5c8 = uStack_2c8;
      uStack_128._0_4_ = (int)uStack_2c0;
      uStack_128._4_4_ = (int)((ulonglong)uStack_2c0 >> 0x20);
      uStack_120._0_4_ = (int)uStack_2b8;
      uStack_120._4_4_ = (int)((ulonglong)uStack_2b8 >> 0x20);
      uStack_5c0 = (int)uStack_128;
      uStack_5bc = uStack_128._4_4_;
      uStack_5b8 = (int)uStack_120;
      uStack_5b4 = uStack_120._4_4_;
      pbStack_5b0 = pbStack_2b0;
      uStack_49 = 1;
      uStack_128 = pbVar12;
      uStack_120 = pbVar11;
      pdb_142a88a60(&iStack_228,uStack_78,&pbStack_5c8,lVar8,lVar9,param_6,param_7,param_8);
      uStack_408 = (byte *)CONCAT44(iStack_224,iStack_228);
      uStack_480 = CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218));
      iStack_488 = iStack_220;
      iStack_484 = iStack_21c;
      uStack_47c = uStack_214;
      pbStack_478 = pbStack_210;
      if (uStack_408 != (byte *)0x4) {
        pub_142e32760(&uStack_3e8,&uStack_208,0xe0);
        iStack_400 = iStack_488;
        iStack_3fc = iStack_484;
        uStack_3f8 = uStack_480;
        uStack_3f4 = uStack_47c;
        uStack_3f0 = pbStack_478;
        if (((SBORROW8(0,uStack_3a8)) && (iStack_318 == iVar14)) && (iStack_314 == iVar22)) {
          if (((char)iStack_310 == (char)lStack_d0) && (lVar9 == lStack_320 && lVar8 == lStack_328))
          {
            *(undefined4 *)(puStack_80 + 0x1f) = *(undefined4 *)(pbStack_60 + 0x18);
            puStack_80[0x1e] = *(longlong *)(pbStack_60 + 0x10);
            puStack_80[0x14] = pbStack_368;
            puStack_80[0x15] = pbStack_360;
            puStack_80[0x16] = pbStack_358;
            puStack_80[0x17] = pbStack_350;
            puStack_80[0x18] = pbStack_348;
            puStack_80[0x19] = pbStack_340;
            puStack_80[0x1a] = pbStack_338;
            puStack_80[0x1b] = uStack_330;
            puStack_80[8] = pbStack_3c8;
            puStack_80[9] = pbStack_3c0;
            puStack_80[6] = CONCAT44(uStack_3d4,uStack_3d8);
            puStack_80[7] = CONCAT44(iStack_3cc,uStack_3d0);
            puStack_80[4] = CONCAT44(uStack_3e4,uStack_3e8);
            puStack_80[5] = CONCAT44(uStack_3dc,uStack_3e0);
            puStack_80[2] = CONCAT44(uStack_47c,uStack_480);
            puStack_80[3] = pbStack_478;
            *puStack_80 = uStack_408;
            puStack_80[1] = CONCAT44(iStack_484,iStack_488);
            *(undefined4 *)(puStack_80 + 10) = (undefined4)uStack_3b8;
            *(undefined4 *)((longlong)puStack_80 + 0x54) = uStack_3b8._4_4_;
            *(undefined4 *)(puStack_80 + 0xb) = uStack_3b0;
            *(undefined4 *)((longlong)puStack_80 + 0x5c) = uStack_3ac;
            puStack_80[0xc] = 0x8000000000000000;
            puStack_80[0x1c] = pbStack_88;
            puStack_80[0x1d] = param_5;
            pbVar12 = pbStack_60;
            goto LAB_142a89c8f;
          }
        }
        if ((!SBORROW8(0,uStack_3a8)) || (*(char *)(uStack_78 + 0x20) == '\0')) {
LAB_142a8994f:
          uStack_51 = 1;
          uStack_52 = 1;
          pdb_141aaa350(&iStack_488,lVar18,*(longlong *)(uStack_78 + 0x18) + 0x10,pbVar10 + 2,0);
          iVar14 = uVar1 + 1;
          if (pbStack_70 == (byte *)0x0) {
            iStack_220 = iStack_310;
            iStack_228 = iStack_318;
            iStack_224 = iStack_314;
            uStack_4a = 1;
            uStack_4b = 1;
            uStack_4c = 1;
            pdb_141aa9580(&iStack_488,&iStack_228,lStack_328,lStack_320);
            uVar21 = uStack_370;
            uVar7 = uStack_378;
            if (!SBORROW8(0,uStack_3a8)) {
              uStack_580 = uStack_388;
              uStack_588 = uStack_390;
              uStack_4a = 1;
              uStack_4b = 1;
              uStack_4c = 1;
              pdb_141aaae20(&iStack_488,pbStack_3a0,uStack_398);
              uStack_4a = 1;
              uStack_4b = 1;
              uStack_4c = 1;
              pdb_141aa9580(&iStack_488,&uStack_588,uVar7,uVar21);
            }
          }
          else {
            uVar13 = (ulonglong)(uint)(iVar14 * 0x10);
            if (*(ulonglong *)(pbStack_60 + 8) <= uVar13 + 0xf) {
              uStack_4a = 1;
              uStack_4b = 1;
              uStack_4c = 1;
              pdb_142dc8420(uVar13 + 8,uVar13 + 0x10,*(ulonglong *)(pbStack_60 + 8),&UNK_143558400);
              goto LAB_142a8b772;
            }
            uStack_4a = 1;
            uStack_4b = 1;
            uStack_4c = 1;
            pdb_141aa2d60(&iStack_224,*(undefined8 *)(*(longlong *)pbStack_60 + 0x10 + uVar13 + 8));
            uStack_2c0 = (byte *)CONCAT44(uStack_2c0._4_4_,iStack_21c);
            uStack_2c8 = (byte *)CONCAT44(iStack_220,iStack_224);
            if (*(ulonglong *)(pbStack_60 + 8) < 0x18) {
              uStack_4a = 1;
              uStack_4b = 1;
              uStack_4c = 1;
              pdb_142dc8420(8,0x18,*(ulonglong *)(pbStack_60 + 8),&UNK_143558478);
              goto LAB_142a8b772;
            }
            uStack_4a = 1;
            uStack_4b = 1;
            uStack_4c = 1;
            pdb_141aa9580(&iStack_488,&uStack_2c8,*(undefined8 *)(*(longlong *)pbStack_60 + 0x18),
                          *(undefined8 *)(*(longlong *)pbStack_60 + 0x20));
          }
          uVar13 = (ulonglong)(uint)(iVar14 * 0x10) | 8;
          pbVar12 = (byte *)0x1;
          while (pbVar12 <= pbVar10) {
            pbVar11 = pbVar12 + -1;
            uStack_4a = 1;
            uStack_4b = 1;
            uStack_4c = 1;
            lVar9 = pdb_142621f60(&pbStack_4b8,pbVar11);
            if (lVar9 == 0) {
              uStack_4a = 1;
              uStack_4b = 1;
              uStack_4c = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_1436352c4,0x28,&UNK_143635410);
            }
            uStack_4a = 1;
            uStack_4b = 1;
            uStack_4c = 1;
            pdb_141aaae20(&iStack_488,lVar9,pbVar11);
            pbVar11 = pbVar12 + 1;
            if (pbVar12 == pbStack_70) {
              iStack_220 = iStack_310;
              iStack_228 = iStack_318;
              iStack_224 = iStack_314;
              uStack_4a = 1;
              uStack_4b = 1;
              uStack_4c = 1;
              pdb_141aa9580(&iStack_488,&iStack_228,lStack_328,lStack_320);
              uVar21 = uStack_370;
              uVar7 = uStack_378;
              pbVar12 = pbVar11;
              if (!SBORROW8(0,uStack_3a8)) {
                uStack_590 = uStack_388;
                uStack_598 = uStack_390;
                uStack_4a = 1;
                uStack_4b = 1;
                uStack_4c = 1;
                pdb_141aaae20(&iStack_488,pbStack_3a0,uStack_398);
                uStack_4a = 1;
                uStack_4b = 1;
                uStack_4c = 1;
                pdb_141aa9580(&iStack_488,&uStack_598,uVar7,uVar21);
              }
            }
            else {
              lVar9 = uVar13 + (longlong)pbVar12 * 8;
              if (*(ulonglong *)(pbStack_60 + 8) <= uVar13 + (longlong)pbVar12 * 8 + 7) {
                uStack_4a = 1;
                uStack_4b = 1;
                uStack_4c = 1;
                pdb_142dc8420(lVar9,lVar9 + 8,*(ulonglong *)(pbStack_60 + 8),&UNK_143558400);
                goto LAB_142a8b772;
              }
              uStack_4a = 1;
              uStack_4b = 1;
              uStack_4c = 1;
              pdb_141aa2d60(&iStack_224,*(undefined8 *)(*(longlong *)pbStack_60 + 0x10 + lVar9));
              uStack_2c0 = (byte *)CONCAT44(uStack_2c0._4_4_,iStack_21c);
              uStack_2c8 = (byte *)CONCAT44(iStack_220,iStack_224);
              lVar9 = (longlong)pbVar12 * 0x10 + 8;
              uVar17 = (longlong)pbVar12 * 0x10 + 0x18;
              if (*(ulonglong *)(pbStack_60 + 8) < uVar17) {
                uStack_4a = 1;
                uStack_4b = 1;
                uStack_4c = 1;
                pdb_142dc8420(lVar9,uVar17,*(ulonglong *)(pbStack_60 + 8),&UNK_143558478);
                goto LAB_142a8b772;
              }
              uStack_4a = 1;
              uStack_4b = 1;
              uStack_4c = 1;
              pdb_141aa9580(&iStack_488,&uStack_2c8,
                            *(undefined8 *)(*(longlong *)pbStack_60 + 0x10 + lVar9),
                            *(undefined8 *)(*(longlong *)pbStack_60 + 0x18 + lVar9));
              pbVar12 = pbVar11;
            }
          }
          uStack_4a = 1;
          uStack_4b = 1;
          uStack_4c = 1;
          cVar5 = pdb_141aaa310(&iStack_488);
          if (cVar5 == '\0') {
            pbStack_278 = pbStack_438;
            pbStack_288 = pbStack_448;
            pbStack_280 = pbStack_440;
            uStack_298 = uStack_458;
            uStack_294 = uStack_454;
            uStack_290 = uStack_450;
            iStack_28c = iStack_44c;
            uStack_2b8 = pbStack_478;
            uStack_2c8 = (byte *)CONCAT44(iStack_484,iStack_488);
            uStack_2c0 = (byte *)CONCAT44(uStack_47c,uStack_480);
            uStack_4a = 1;
            uStack_4b = 1;
            uStack_4c = 0;
            pdb_141aaa500(&uStack_128,&uStack_2c8);
            uStack_258 = uStack_120;
            pbStack_250 = uStack_118;
            pbStack_248 = uStack_110;
            if (uStack_128 == (byte *)0x0) goto LAB_142a8a504;
            pbStack_a8 = uStack_108;
            pbStack_a0 = uStack_100;
            pbVar12 = pbStack_a0;
            uStack_c0 = uStack_120;
            pbStack_b8 = uStack_118;
            pbStack_b0 = uStack_110;
            uStack_c8 = uStack_128;
            pbStack_138 = uStack_108;
            pbStack_a0._0_4_ = SUB84(uStack_100,0);
            uStack_130 = pbStack_a0._0_4_;
            pbStack_188 = pbStack_368;
            pbStack_180 = pbStack_360;
            pbStack_178 = pbStack_358;
            pbStack_170 = pbStack_350;
            pbStack_168 = pbStack_348;
            pbStack_160 = pbStack_340;
            pbStack_158 = pbStack_338;
            uStack_150 = uStack_330;
            uStack_1d0 = (byte *)CONCAT44(uStack_3ac,uStack_3b0);
            pbStack_1d8 = uStack_3b8;
            pbStack_1e8 = pbStack_3c8;
            pbStack_1e0 = pbStack_3c0;
            uStack_1f8 = (byte *)CONCAT44(uStack_3d4,uStack_3d8);
            uStack_1f0 = CONCAT44(iStack_3cc,uStack_3d0);
            uStack_208 = (byte *)CONCAT44(uStack_3e4,uStack_3e8);
            uStack_200 = (byte *)CONCAT44(uStack_3dc,uStack_3e0);
            uStack_218 = (undefined1)uStack_3f8;
            uStack_217 = (undefined2)((uint)uStack_3f8 >> 8);
            uStack_215 = (undefined1)((uint)uStack_3f8 >> 0x18);
            uStack_214 = uStack_3f4;
            pbStack_210 = uStack_3f0;
            iStack_228 = (int)uStack_408;
            iStack_224 = uStack_408._4_4_;
            iStack_220 = iStack_400;
            iStack_21c = iStack_3fc;
            uStack_140 = 0;
            uStack_148 = 999;
            uVar13 = 0x8000000000000000;
            pbStack_1c8 = (byte *)0x8000000000000000;
            uStack_4a = 0;
            uStack_4b = 1;
            uStack_4c = 0;
            pbStack_a0 = pbVar12;
            pdb_1409987a0(&uStack_c8);
          }
          else {
            pbStack_d8 = pbStack_438;
            pbStack_e8 = pbStack_448;
            pbStack_e0 = pbStack_440;
            uStack_f8 = uStack_458;
            uStack_f4 = uStack_454;
            uStack_f0 = uStack_450;
            iStack_ec = iStack_44c;
            uStack_108 = (byte *)CONCAT44(uStack_464,uStack_468);
            uStack_100 = (byte *)CONCAT44(uStack_45c,uStack_460);
            uStack_118 = pbStack_478;
            uStack_110 = (byte *)CONCAT44(uStack_46c,uStack_470);
            uStack_128 = (byte *)CONCAT44(iStack_484,iStack_488);
            uStack_120 = (byte *)CONCAT44(uStack_47c,uStack_480);
            uStack_4a = 1;
            uStack_4b = 1;
            uStack_4c = 0;
            pdb_141aa95f0(&uStack_2c8,&uStack_128);
            uStack_258 = uStack_2c0;
            pbVar12 = uStack_258;
            pbStack_250 = uStack_2b8;
            pbStack_248 = pbStack_2b0;
            if (uStack_2c8 == (byte *)0x0) {
LAB_142a8a504:
              puStack_80[3] = pbStack_248;
              puStack_80[1] = uStack_258;
              puStack_80[2] = pbStack_250;
              *puStack_80 = 4;
              pbStack_70 = (byte *)CONCAT44(pbStack_70._4_4_,
                                            (int)CONCAT71((int7)((ulonglong)pbStack_248 >> 8),1));
              if ((!SBORROW8(0,uStack_3a8)) && (uStack_3a8 != 0)) {
                pub_1406abac0(pbStack_3a0,uStack_3a8,1);
              }
              goto LAB_142a8ad72;
            }
            pbStack_a8 = uStack_2a8;
            pbStack_a0 = uStack_2a0;
            pbVar11 = pbStack_a0;
            uVar7 = CONCAT44(uStack_294,uStack_298);
            uVar13 = CONCAT44(iStack_28c,uStack_290);
            uStack_108 = pbStack_268;
            uStack_100 = pbStack_260;
            uStack_118 = pbStack_278;
            uStack_110 = pbStack_270;
            uStack_128 = pbStack_288;
            uStack_120 = pbStack_280;
            uStack_258._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
            uStack_c0 = uStack_2c0;
            pbStack_b8 = uStack_2b8;
            pbStack_b0 = pbStack_2b0;
            uStack_c8 = uStack_2c8;
            pbStack_a0._0_4_ = SUB84(uStack_2a0,0);
            uStack_2c0 = (byte *)CONCAT44(uStack_258._4_4_,pbStack_a0._0_4_);
            uStack_2c8 = uStack_2a8;
            uStack_258 = pbVar12;
            pbStack_a0 = pbVar11;
            if (iStack_28c < 0) {
              uVar21 = 0;
LAB_142a8a325:
              pdb_142dc7e2a(uVar21,uVar13);
              goto LAB_142a8b772;
            }
            if (uVar13 == 0) {
              pbVar12 = (byte *)0x1;
            }
            else {
              pdb_14007ee60();
              uVar21 = 1;
              pbVar12 = pub_1406abab0(uVar13,1);
              if (pbVar12 == (byte *)0x0) goto LAB_142a8a325;
              pub_142e32760(pbVar12,uVar7,uVar13);
            }
            uStack_1a8 = (undefined4)uStack_100;
            pbStack_1b0 = uStack_108;
            pbStack_188 = pbStack_368;
            pbStack_180 = pbStack_360;
            pbStack_178 = pbStack_358;
            pbStack_170 = pbStack_350;
            pbStack_168 = pbStack_348;
            pbStack_160 = pbStack_340;
            pbStack_158 = pbStack_338;
            uStack_150 = uStack_330;
            iStack_228 = (int)uStack_408;
            iStack_224 = (int)((ulonglong)uStack_408 >> 0x20);
            iStack_220 = iStack_400;
            iStack_21c = iStack_3fc;
            uStack_218 = (undefined1)uStack_3f8;
            uStack_217 = (undefined2)((uint)uStack_3f8 >> 8);
            uStack_215 = (undefined1)((uint)uStack_3f8 >> 0x18);
            uStack_214 = uStack_3f4;
            pbStack_210 = uStack_3f0;
            uStack_208 = (byte *)CONCAT44(uStack_3e4,uStack_3e8);
            uStack_200 = (byte *)CONCAT44(uStack_3dc,uStack_3e0);
            uStack_1f8 = (byte *)CONCAT44(uStack_3d4,uStack_3d8);
            uStack_1f0 = CONCAT44(iStack_3cc,uStack_3d0);
            pbStack_1e8 = pbStack_3c8;
            pbStack_1e0 = pbStack_3c0;
            pbStack_1d8 = uStack_3b8;
            uStack_1d0 = (byte *)CONCAT44(uStack_3ac,uStack_3b0);
            uStack_130 = (int)uStack_2c0;
            pbStack_138 = uStack_2c8;
            uStack_148 = 999;
            uStack_140 = 0;
            uStack_198 = 999;
            uStack_190 = 0;
            uStack_66 = 0;
            pbStack_1c8 = (byte *)uVar13;
            pbStack_1c0 = pbVar12;
            uStack_1b8 = uVar13;
            pdb_1409987a0(&uStack_128);
            uStack_4a = 0;
            uStack_4b = 1;
            uStack_4c = 0;
            pdb_1409987a0(&uStack_c8);
          }
          uStack_5a0 = *(undefined4 *)(pbStack_60 + 0x18);
          lStack_5a8 = *(longlong *)(pbStack_60 + 0x10);
          uStack_2c8 = *(byte **)pbStack_60;
          uStack_2c0 = *(byte **)(pbStack_60 + 8);
          uStack_2b8 = *(byte **)(pbStack_60 + 0x10);
          pbStack_2b0 = *(byte **)(pbStack_60 + 0x18);
          LOCK();
          *(longlong *)uStack_2c8 = *(longlong *)uStack_2c8 + -1;
          UNLOCK();
          if (*(longlong *)uStack_2c8 == 0) {
            pdb_1406ed6a0(&uStack_2c8);
          }
          pdb_142a8f7d0(uStack_78,&lStack_5a8);
          uVar20 = uStack_150;
          pbVar10 = pbStack_158;
          uVar21 = uStack_190;
          uVar7 = uStack_198;
          pbStack_518 = pbStack_1d8;
          pbStack_510 = uStack_1d0;
          pbStack_528 = pbStack_1e8;
          pbStack_520 = pbStack_1e0;
          uStack_568 = CONCAT44(iStack_224,iStack_228);
          uStack_560 = CONCAT44(iStack_21c,iStack_220);
          uStack_558 = CONCAT44(uStack_214,CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218)));
          pbStack_550 = pbStack_210;
          pbStack_548 = uStack_208;
          pbStack_540 = uStack_200;
          pbStack_538 = uStack_1f8;
          uStack_530 = uStack_1f0;
          pbStack_2d8 = pbStack_1b0;
          uStack_2d0 = uStack_1a8;
          uStack_4c8 = uStack_19c;
          uStack_4d0 = uStack_1a4;
          pbStack_508 = pbStack_188;
          pbStack_500 = pbStack_180;
          pbStack_4f8 = pbStack_178;
          pbStack_4f0 = pbStack_170;
          pbStack_4e8 = pbStack_168;
          pbStack_4e0 = pbStack_160;
          pbStack_238 = pbStack_138;
          uStack_230 = uStack_130;
          piVar19 = (int *)(ulonglong)uStack_12c;
          if ((!SBORROW8(0,uStack_3a8)) && (uStack_3a8 != 0)) {
            pbStack_240 = pbStack_1c0;
            pub_1406abac0(pbStack_3a0,uStack_3a8,1);
            pbStack_1c0 = pbStack_240;
          }
          goto LAB_142a8ab4a;
        }
        iStack_220 = *(int *)(pbStack_60 + 0x18);
        iStack_228 = (int)*(longlong *)(pbStack_60 + 0x10);
        iStack_224 = (int)((ulonglong)*(longlong *)(pbStack_60 + 0x10) >> 0x20);
        uStack_51 = 1;
        uStack_52 = 1;
        cVar5 = pdb_141e0a540(lVar18,&iStack_228);
        if (cVar5 == '\0') goto LAB_142a8994f;
        uStack_570 = *(undefined4 *)(pbStack_60 + 0x18);
        lStack_578 = *(longlong *)(pbStack_60 + 0x10);
        iStack_228 = *(int *)pbStack_60;
        iStack_224 = *(int *)(pbStack_60 + 4);
        plVar2 = *(longlong **)pbStack_60;
        iStack_220 = *(int *)(pbStack_60 + 8);
        iStack_21c = *(int *)(pbStack_60 + 0xc);
        uVar23 = *(undefined4 *)(pbStack_60 + 0x10);
        uStack_214 = *(undefined4 *)(pbStack_60 + 0x14);
        pbStack_210 = *(byte **)(pbStack_60 + 0x18);
        uStack_218 = (undefined1)uVar23;
        uStack_217 = (undefined2)((uint)uVar23 >> 8);
        uStack_215 = (undefined1)((uint)uVar23 >> 0x18);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          uStack_51 = 1;
          uStack_52 = 0;
          pdb_1406ed6a0(&iStack_228);
        }
        uStack_51 = 1;
        uStack_52 = 0;
        pdb_141e0ac60(&iStack_228,lVar18,&lStack_578);
        uStack_128 = (byte *)CONCAT44(iStack_21c,iStack_220);
        uVar23 = CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_218));
        uStack_120 = (byte *)CONCAT44(uStack_214,uVar23);
        uStack_118 = pbStack_210;
        if (CONCAT44(iStack_224,iStack_228) != 0) {
          uStack_2a8 = uStack_208;
          uStack_2a0 = uStack_200;
          uStack_2c0 = (byte *)CONCAT44(iStack_21c,iStack_220);
          uStack_2b8 = (byte *)CONCAT44(uStack_214,uVar23);
          pbStack_2b0 = pbStack_210;
          uStack_2c8 = (byte *)CONCAT44(iStack_224,iStack_228);
          uVar7 = pdb_141aa2d90(&uStack_2c8);
          puVar16 = puStack_80;
          uVar7 = pdb_141aaaf40(uVar7);
          iStack_228 = (int)uVar7;
          iStack_224 = (int)((ulonglong)uVar7 >> 0x20);
          iStack_220 = (int)lVar18;
          iStack_21c = (int)((ulonglong)lVar18 >> 0x20);
          uStack_120 = (byte *)CONCAT44(uStack_120._4_4_,iStack_310);
          pdb_141aaae70(&iStack_228,pbStack_70,&uStack_128,lStack_328,lStack_320);
          *(undefined4 *)(puVar16 + 0x1f) = (undefined4)uStack_2a0;
          puVar16[0x1e] = uStack_2a8;
          puVar16[0x14] = pbStack_368;
          puVar16[0x15] = pbStack_360;
          puVar16[0x16] = pbStack_358;
          puVar16[0x17] = pbStack_350;
          puVar16[0x18] = pbStack_348;
          puVar16[0x19] = pbStack_340;
          puVar16[0x1a] = pbStack_338;
          puVar16[0x1b] = uStack_330;
          puVar16[8] = pbStack_3c8;
          puVar16[9] = pbStack_3c0;
          *(undefined4 *)(puVar16 + 6) = uStack_3d8;
          *(undefined4 *)((longlong)puVar16 + 0x34) = uStack_3d4;
          *(undefined4 *)(puVar16 + 7) = uStack_3d0;
          *(int *)((longlong)puVar16 + 0x3c) = iStack_3cc;
          *(undefined4 *)(puVar16 + 4) = uStack_3e8;
          *(undefined4 *)((longlong)puVar16 + 0x24) = uStack_3e4;
          *(undefined4 *)(puVar16 + 5) = uStack_3e0;
          *(undefined4 *)((longlong)puVar16 + 0x2c) = uStack_3dc;
          *(undefined4 *)(puVar16 + 2) = uStack_3f8;
          *(undefined4 *)((longlong)puVar16 + 0x14) = uStack_3f4;
          *(undefined4 *)(puVar16 + 3) = (undefined4)uStack_3f0;
          *(undefined4 *)((longlong)puVar16 + 0x1c) = uStack_3f0._4_4_;
          *puVar16 = uStack_408;
          puVar16[1] = CONCAT44(iStack_3fc,iStack_400);
          *(undefined4 *)(puVar16 + 10) = (undefined4)uStack_3b8;
          *(undefined4 *)((longlong)puVar16 + 0x54) = uStack_3b8._4_4_;
          *(undefined4 *)(puVar16 + 0xb) = uStack_3b0;
          *(undefined4 *)((longlong)puVar16 + 0x5c) = uStack_3ac;
          puVar16[0xc] = 0x8000000000000000;
          puVar16[0x1c] = 999;
          puVar16[0x1d] = 0;
          uStack_51 = 0;
          uStack_52 = 0;
          pdb_1409987a0(&uStack_2c8);
          if (SBORROW8(0,uStack_3a8)) {
            return;
          }
          if (uStack_3a8 == 0) {
            return;
          }
          pub_1406abac0(pbStack_3a0,uStack_3a8,1);
          return;
        }
        puStack_80[3] = pbStack_210;
        puStack_80[1] = uStack_128;
        puStack_80[2] = uStack_120;
        *puStack_80 = 4;
        if ((!SBORROW8(0,uStack_3a8)) && (uStack_3a8 != 0)) {
          pub_1406abac0(pbStack_3a0,uStack_3a8,1);
        }
        pbStack_70 = (byte *)((ulonglong)pbStack_70 & 0xffffffff00000000);
LAB_142a8ad72:
        pdb_1409987a0(&pbStack_368);
        if ((int)uStack_408 != 3) {
          uStack_49 = SUB81(pbStack_70,0);
          pdb_141ac4dd0(&uStack_408);
        }
        pbVar12 = pbStack_60;
        if ((char)pbStack_70 == '\0') {
          return;
        }
        goto LAB_142a89c8f;
      }
      puStack_80[3] = pbStack_210;
      iVar14 = iStack_220;
      iVar22 = iStack_21c;
      uVar23 = uStack_214;
    }
  }
  *(int *)(puStack_80 + 1) = iVar14;
  *(int *)((longlong)puStack_80 + 0xc) = iVar22;
  *(undefined4 *)(puStack_80 + 2) = uStack_480;
  *(undefined4 *)((longlong)puStack_80 + 0x14) = uVar23;
  *puStack_80 = 4;
  pbVar12 = pbStack_60;
LAB_142a89c8f:
  plVar2 = *(longlong **)pbVar12;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    pdb_1406ed6a0();
  }
  return;
code_r0x000142a89464:
  uStack_4d = 1;
  uStack_4e = 1;
  pbVar24 = (byte *)0x8;
  pdb_141aa6b00(&uStack_2c8,param_6,param_7);
  if ((char)pbStack_70 == '\0') {
LAB_142a894a2:
    uStack_4d = 1;
    uStack_4e = 1;
    pdb_141aa9340(&iStack_228,piVar19,pbVar15);
    if (CONCAT44(iStack_224,iStack_228) == 0) {
      uStack_4d = 1;
      uStack_4e = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1436353b0);
    }
    uStack_4d = 1;
    uStack_4e = 1;
    pbVar24 = pbStack_210;
    pdb_141aa6b00(&uStack_2c8,CONCAT44(iStack_224,iStack_228),CONCAT44(iStack_21c,iStack_220));
  }
  goto LAB_142a89450;
}

