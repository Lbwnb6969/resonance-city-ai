// VA 0x1424e4590, PDB extent 2015 bytes
// system_decorator::merge_proposal_roof_decorators::find_best_roof_decorator_merge_position
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/merge_proposal_roof_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::merge_proposal_roof_decorators::find_best_roof_decorator_merge_position
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/merge_proposal_roof_decorators.rs
   Extent: 2015 */

undefined8 *
pdb_1424e4590(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             longlong *param_5,longlong param_6,longlong param_7,longlong param_8,longlong param_9,
             undefined8 *param_10)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined8 uVar24;
  float *pfVar25;
  longlong lVar26;
  undefined8 **ppuVar27;
  undefined8 **ppuVar28;
  longlong lVar29;
  ushort uVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint uVar33;
  byte bVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  float fVar40;
  float fVar41;
  int iStack_48c;
  longlong *plStack_488;
  longlong lStack_480;
  ulonglong uStack_478;
  longlong lStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  longlong lStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  ulonglong uStack_448;
  undefined8 *puStack_440;
  longlong lStack_438;
  longlong *plStack_430;
  longlong *plStack_428;
  ulonglong uStack_420;
  longlong lStack_418;
  longlong lStack_410;
  longlong lStack_408;
  undefined8 *puStack_400;
  longlong *plStack_3f8;
  longlong lStack_3f0;
  longlong *plStack_3e8;
  undefined8 *puStack_3e0;
  longlong lStack_3d8;
  longlong lStack_3d0;
  longlong lStack_3c8;
  longlong lStack_3b8;
  longlong lStack_3b0;
  longlong lStack_3a8;
  longlong lStack_3a0;
  longlong lStack_398;
  undefined8 uStack_388;
  longlong lStack_380;
  longlong lStack_378;
  undefined8 *puStack_2f8;
  code *pcStack_2f0;
  float fStack_274;
  undefined8 *puStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  undefined1 uStack_218;
  undefined1 uStack_217;
  undefined1 uStack_216;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  float fStack_208;
  float fStack_204;
  int iStack_1f0;
  float fStack_1ec;
  undefined8 *apuStack_1e8 [17];
  undefined8 *apuStack_160 [36];
  
  lStack_410 = param_7 + param_8 * 4;
  param_8 = param_8 << 2;
  uStack_388 = &lStack_408;
  lStack_408 = param_9;
  puStack_400 = param_10;
  lStack_3f0 = param_6;
  plStack_3e8 = param_5;
  puStack_3e0 = (undefined8 *)&uStack_450;
  uStack_450 = param_3;
  uStack_44c = param_4;
  plStack_3f8 = param_2;
  do {
    if (param_8 == 0) {
      *param_1 = 8;
      return param_1;
    }
    param_7 = param_7 + 4;
    lStack_418 = param_7;
    pdb_1424cbcd0(&puStack_2f8,&uStack_388);
    param_8 = param_8 + -4;
  } while ((int)puStack_2f8 == 8);
  ppuVar28 = apuStack_1e8;
  pub_142e32760(ppuVar28,&puStack_2f8,0x88);
  plVar16 = plStack_3f8;
  lVar31 = lStack_408;
  lVar26 = lStack_410;
  lVar29 = lStack_418;
  if (lStack_418 != lStack_410) {
    puStack_460 = puStack_400;
    lStack_438 = lStack_3f0;
    plStack_488 = plStack_3e8;
    puStack_440 = puStack_3e0;
    ppuVar28 = apuStack_160;
    pub_142e32760(ppuVar28,apuStack_1e8,0x88);
    fVar13 = _DAT_142e37ae4;
    uVar12 = _DAT_142e37820;
    fVar11 = _DAT_142e36f50;
    uStack_478 = (ulonglong)(lVar26 - lVar29) >> 2;
    plStack_428 = plVar16 + 2;
    plStack_430 = plVar16 + 7;
    uVar22 = 0;
    iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                   CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    lStack_470 = lVar29;
    lStack_458 = lVar31;
    puStack_468 = param_1;
LAB_1424e47bf:
    iVar3 = *(int *)(lVar29 + uVar22 * 4);
    iStack_48c = iVar3;
    uStack_420 = uVar22;
    if (*(longlong *)(lStack_458 + 0x48) != 0) {
      uVar22 = pdb_1400aede0(lStack_458 + 0x50,&iStack_48c);
      puVar1 = puStack_460;
      lVar29 = *(longlong *)(lStack_458 + 0x30);
      bVar34 = (byte)(uVar22 >> 0x39);
      auVar37 = ZEXT216(CONCAT11(bVar34,bVar34));
      auVar37 = pshuflw(auVar37,auVar37,0);
      lVar26 = 0;
      do {
        uVar22 = uVar22 & *(ulonglong *)(lStack_458 + 0x38);
        auVar2 = *(undefined1 (*) [16])(lVar29 + uVar22);
        auVar39[0] = -(auVar2[0] == auVar37[0]);
        auVar39[1] = -(auVar2[1] == auVar37[1]);
        auVar39[2] = -(auVar2[2] == auVar37[2]);
        auVar39[3] = -(auVar2[3] == auVar37[3]);
        auVar39[4] = -(auVar2[4] == auVar37[4]);
        auVar39[5] = -(auVar2[5] == auVar37[5]);
        auVar39[6] = -(auVar2[6] == auVar37[6]);
        auVar39[7] = -(auVar2[7] == auVar37[7]);
        auVar39[8] = -(auVar2[8] == auVar37[0]);
        auVar39[9] = -(auVar2[9] == auVar37[1]);
        auVar39[10] = -(auVar2[10] == auVar37[2]);
        auVar39[0xb] = -(auVar2[0xb] == auVar37[3]);
        auVar39[0xc] = -(auVar2[0xc] == auVar37[4]);
        auVar39[0xd] = -(auVar2[0xd] == auVar37[5]);
        auVar39[0xe] = -(auVar2[0xe] == auVar37[6]);
        auVar39[0xf] = -(auVar2[0xf] == auVar37[7]);
        uVar30 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf
        ;
        uVar33 = (uint)uVar30;
        while (uVar30 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar33; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          lVar31 = (uVar5 + uVar22 & *(ulonglong *)(lStack_458 + 0x38)) * -0x68;
          if (iVar3 == *(int *)(lVar29 + -0x68 + lVar31)) {
            lVar29 = lVar29 + lVar31;
            uVar21 = pdb_140c45920(puStack_460,iVar3);
            uVar18 = *(undefined1 *)(lVar29 + -7);
            uVar17 = pdb_1409012c0(uVar21,*puVar1);
            uVar24 = puVar1[1];
            uVar18 = pdb_140c44ba0(uVar18);
            uStack_388._0_2_ = CONCAT11(uVar17,uVar18);
            lVar26 = pdb_141494370(uVar24,&uStack_388);
            if (lVar26 == 0) goto LAB_1424e4d3b;
            puVar1 = (undefined8 *)(lVar29 + -0x60);
            fVar40 = *(float *)(lVar26 + 0x30);
            puVar4 = (undefined8 *)*plVar16;
            lVar26 = plVar16[1];
            ppuVar27 = ppuVar28;
            if (puVar4 == (undefined8 *)0x6) {
              if (((int)*puVar1 == 6) && (*(longlong *)(lVar29 + -0x58) == lVar26)) {
LAB_1424e4915:
                uVar32 = (ulonglong)*(byte *)(lVar29 + -7) +
                         (ulonglong)*(byte *)((longlong)plVar16 + 0x59);
                lStack_480 = lVar26;
                uVar22 = pdb_140901330(puVar4,lVar26);
                puVar15 = puStack_460;
                if (uVar32 <= uVar22) {
                  lStack_398 = plStack_428[4];
                  lStack_3b8 = *plStack_428;
                  lStack_3b0 = plStack_428[1];
                  lStack_3a8 = plStack_428[2];
                  lStack_3a0 = plStack_428[3];
                  uVar18 = (undefined1)plVar16[0xb];
                  uVar17 = *(undefined1 *)((longlong)plVar16 + 0x5a);
                  lVar29 = plVar16[10];
                  lStack_3c8 = plStack_430[2];
                  lStack_3d8 = *plStack_430;
                  lStack_3d0 = plStack_430[1];
                  uVar19 = pdb_1409012c0(uVar21,*puStack_460);
                  uVar24 = puVar15[1];
                  uStack_448 = uVar32;
                  uVar20 = pdb_140c44ba0(uVar32);
                  uStack_388._0_2_ = CONCAT11(uVar19,uVar20);
                  lVar26 = pdb_141494370(uVar24,&uStack_388);
                  plVar14 = plStack_488;
                  if (lVar26 == 0) {
LAB_1424e4d3b:
                    pcStack_2f0 = pdb_1414942d0;
                    puStack_2f8 = &uStack_388;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14330e2c6,&puStack_2f8,&UNK_14330e2f8);
                  }
                  fVar40 = (*(float *)(lVar26 + 0x30) - fVar40) * fVar11;
                  if (*(int *)(lStack_438 + 8) == 1) {
                    lStack_380 = CONCAT44(lStack_380._4_4_,(int)plStack_488[1]);
                    uStack_388 = (longlong *)*plStack_488;
                    pdb_140b77d90(&puStack_2f8,lStack_438,&uStack_388);
                    plVar23 = (longlong *)pdb_140a84d90(&puStack_2f8);
                    uStack_388 = (longlong *)*plVar23;
                    lStack_380 = plVar23[1];
                    lStack_378 = plVar23[2];
                    uVar24 = pdb_140df2280(&uStack_388,(int)*plVar14,(int)plVar14[1]);
                    fVar35 = (float)pdb_140df05b0(&uStack_388,uVar24);
                    fVar40 = (fVar40 / fVar35) * fVar13;
                  }
                  else {
                    lStack_380 = CONCAT44(lStack_380._4_4_,(int)plStack_488[1]);
                    uStack_388 = (longlong *)*plStack_488;
                    pdb_140b77d90(&puStack_2f8,lStack_438,&uStack_388);
                    fVar35 = (float)pdb_140a85220(&puStack_2f8);
                    fVar40 = fVar40 / fVar35;
                  }
                  lVar26 = pdb_1409010f0(puVar1,&UNK_143512130);
                  pfVar25 = (float *)pdb_1409010f0(puVar1,&UNK_143512148);
                  fVar35 = pfVar25[1];
                  uVar21 = *(undefined4 *)(lVar26 + 8);
                  fVar36 = (float)*puStack_440;
                  uVar33 = -(uint)(*pfVar25 < fVar36);
                  fVar41 = (float)(~uVar33 & ((uint)fVar40 ^ uVar12) | uVar33 & (uint)fVar40) +
                           *pfVar25;
                  fVar36 = fVar41 - fVar36;
                  fVar40 = fVar35 - (float)((ulonglong)*puStack_440 >> 0x20);
                  fVar40 = SQRT(fVar40 * fVar40 + fVar36 * fVar36);
                  pub_142e32760(&puStack_2f8,ppuVar28,0x88);
                  lStack_268 = lStack_480;
                  lStack_240 = lStack_398;
                  lStack_260 = lStack_3b8;
                  lStack_258 = lStack_3b0;
                  lStack_250 = lStack_3a8;
                  lStack_248 = lStack_3a0;
                  lStack_238 = lStack_3d8;
                  lStack_230 = lStack_3d0;
                  lStack_228 = lStack_3c8;
                  uStack_217 = (undefined1)uStack_448;
                  uStack_210 = 0;
                  puStack_270 = puVar4;
                  lStack_220 = lVar29;
                  uStack_218 = uVar18;
                  uStack_216 = uVar17;
                  uStack_20c = uVar21;
                  fStack_208 = fVar41;
                  fStack_204 = fVar35;
                  iStack_1f0 = iVar3;
                  fStack_1ec = fVar40;
                  if (NAN(fVar40) || NAN(fStack_274)) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143511460);
                  }
                  ppuVar27 = &puStack_270;
                  if (fStack_274 <= fVar40) {
                    ppuVar27 = &puStack_2f8;
                  }
                }
              }
            }
            else if ((int)*puVar1 == (int)puVar4) goto LAB_1424e4915;
            pub_142e32760(&uStack_388,ppuVar27,0x88);
            param_1 = puStack_468;
            lVar29 = lStack_470;
            uVar32 = uStack_478;
            pub_142e32760(ppuVar28,&uStack_388,0x88);
            uVar22 = uStack_420 + 1;
            if (uVar22 == uVar32) goto LAB_1424e4cb0;
            goto LAB_1424e47bf;
          }
          uVar30 = (ushort)(uVar33 - 1) & (ushort)uVar33;
          uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar30);
        }
        auVar38[0] = -(auVar2[0] == (char)iVar7);
        auVar38[1] = -(auVar2[1] == (char)((uint)iVar7 >> 8));
        auVar38[2] = -(auVar2[2] == (char)((uint)iVar7 >> 0x10));
        auVar38[3] = -(auVar2[3] == (char)((uint)iVar7 >> 0x18));
        auVar38[4] = -(auVar2[4] == (char)iVar8);
        auVar38[5] = -(auVar2[5] == (char)((uint)iVar8 >> 8));
        auVar38[6] = -(auVar2[6] == (char)((uint)iVar8 >> 0x10));
        auVar38[7] = -(auVar2[7] == (char)((uint)iVar8 >> 0x18));
        auVar38[8] = -(auVar2[8] == (char)iVar9);
        auVar38[9] = -(auVar2[9] == (char)((uint)iVar9 >> 8));
        auVar38[10] = -(auVar2[10] == (char)((uint)iVar9 >> 0x10));
        auVar38[0xb] = -(auVar2[0xb] == (char)((uint)iVar9 >> 0x18));
        auVar38[0xc] = -(auVar2[0xc] == (char)iVar10);
        auVar38[0xd] = -(auVar2[0xd] == (char)((uint)iVar10 >> 8));
        auVar38[0xe] = -(auVar2[0xe] == (char)((uint)iVar10 >> 0x10));
        auVar38[0xf] = -(auVar2[0xf] == (char)((uint)iVar10 >> 0x18));
        if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar38 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar38 >> 0x1f,0) & 1) != 0) || (SUB161(auVar38 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') break;
        uVar22 = uVar22 + lVar26 + 0x10;
        lVar26 = lVar26 + 0x10;
      } while( true );
    }
    pdb_142dc8110(&UNK_1435120be,0x16,&UNK_143512118);
  }
LAB_1424e4cb0:
  pub_142e32760(param_1,ppuVar28,0x88);
  return param_1;
}

