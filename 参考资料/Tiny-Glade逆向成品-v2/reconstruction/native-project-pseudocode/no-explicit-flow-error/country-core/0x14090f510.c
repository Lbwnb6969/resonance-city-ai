// VA 0x14090f510, PDB extent 3753 bytes
// country_core::systems::prefab::update_prefabs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::prefab::update_prefabs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
   Extent: 3753 */

void pdb_14090f510(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  float *pfVar25;
  undefined8 *puVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  longlong lVar30;
  float *pfVar31;
  longlong lVar32;
  uint *puVar33;
  int iVar34;
  undefined *puVar35;
  uint *puVar36;
  ushort uVar37;
  undefined *puVar38;
  undefined *puVar39;
  byte bVar40;
  float fVar41;
  float fVar42;
  float fVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar48;
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 unaff_XMM11_Ba;
  undefined1 unaff_XMM11_Bb;
  undefined1 unaff_XMM11_Bc;
  undefined1 unaff_XMM11_Bd;
  undefined1 unaff_XMM11_Be;
  undefined1 unaff_XMM11_Bf;
  undefined1 unaff_XMM11_Bg;
  undefined1 unaff_XMM11_Bh;
  undefined1 unaff_XMM11_Bi;
  undefined1 unaff_XMM11_Bj;
  undefined1 unaff_XMM11_Bk;
  undefined1 unaff_XMM11_Bl;
  undefined1 unaff_XMM11_Bm;
  undefined1 unaff_XMM11_Bn;
  undefined1 unaff_XMM11_Bo;
  undefined1 unaff_XMM11_Bp;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  float fStack_1b8;
  longlong lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 *puStack_180;
  undefined4 *puStack_178;
  longlong lStack_170;
  longlong *plStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint *puStack_128;
  undefined8 uStack_120;
  float fStack_118;
  longlong lStack_110;
  longlong lStack_108;
  int iStack_100;
  uint uStack_fc;
  longlong *plStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong *plStack_e0;
  char cStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  cVar17 = pdb_140e94b40();
  if (cVar17 == '\0') {
    lStack_150 = 0;
  }
  else {
    puVar38 = &UNK_14301f667;
    lVar32 = 0x2d;
    uVar29 = 0x2d;
    lVar20 = pdb_1409135d0(&UNK_14301f667);
    if (lVar20 == 1) {
      if (0x2d < uVar29) {
LAB_140910096:
        pdb_142dc8070(&UNK_14301f667,0x2d,0);
LAB_1409100b6:
        pdb_142dc8070(&UNK_14301f667,0x2d);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar38 = &UNK_14301f667;
      uVar21 = pdb_1409135d0(&UNK_14301f667);
      if ((uVar21 & 1) != 0) {
        if (0x2d < uVar29 + 2) goto LAB_1409100b6;
        lVar32 = 0x2b - uVar29;
        puVar38 = &UNK_14301f669 + uVar29;
      }
    }
    puVar35 = &UNK_14301f36b;
    puVar39 = &UNK_14301f342;
    do {
      bVar40 = puVar35[-1];
      uVar18 = (uint)(char)bVar40;
      plStack_f8 = param_4;
      if ((char)bVar40 < '\0') {
        bVar3 = puVar35[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar35[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar35 + -4;
            puVar35 = puVar35 + -4;
            uVar18 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar35 = puVar35 + -3;
            uVar18 = bVar4 & 0xf;
          }
          uVar18 = bVar3 & 0x3f | uVar18 << 6;
        }
        else {
          puVar35 = puVar35 + -2;
          uVar18 = bVar3 & 0x1f;
        }
        uVar18 = (uint)(bVar40 & 0x3f) | uVar18 << 6;
        if (uVar18 != 0x5c) goto LAB_14090f684;
LAB_14090f69d:
        puVar39 = puVar35 + -0x14301f341;
        if (puVar39 < (undefined *)0x2a) {
          lVar20 = 0x29 - (longlong)puVar39;
          puVar39 = puVar35 + 1;
          goto LAB_14090f6c0;
        }
        pdb_142dc8070(&UNK_14301f342,0x29,puVar39,0x29,&UNK_14301f728);
        goto LAB_140910096;
      }
      puVar35 = puVar35 + -1;
      if (uVar18 == 0x5c) goto LAB_14090f69d;
LAB_14090f684:
      if (uVar18 == 0x2f) goto LAB_14090f69d;
    } while (puVar35 != &UNK_14301f342);
    lVar20 = 0x29;
LAB_14090f6c0:
    plVar22 = (longlong *)pdb_140e97000();
    if (((char)plVar22[0xd] != '\x01') &&
       (plVar22 = (longlong *)pdb_142d8ec20(plVar22,0), plVar22 == (longlong *)0x0))
    goto LAB_14091003e;
    if (*plVar22 != 0) goto LAB_14091000a;
    *plVar22 = -1;
    plStack_e0 = plVar22;
    uStack_148 = pdb_140e94f10(plVar22 + 1,puVar38,lVar32,puVar39,lVar20,1,0);
    *plStack_e0 = *plStack_e0 + 1;
    lStack_150 = 1;
    param_4 = plStack_f8;
  }
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  fVar16 = _UNK_142e378e4;
  uStack_190 = *param_2;
  lStack_108 = *param_1;
  plStack_e0 = (longlong *)param_1[1];
  iStack_100 = *(int *)((longlong)param_1 + 0x14);
  puVar33 = *(uint **)(lStack_108 + 0xf8);
  plStack_138 = (longlong *)*param_5;
  uStack_130 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_188 = *param_3;
  puStack_180 = (undefined4 *)param_3[2];
  uVar19 = iStack_100 - (int)param_1[2];
  uVar18 = 0xc233b000;
  if (uVar19 < 0xc233b000) {
    uVar18 = uVar19;
  }
  uStack_12c = *(undefined4 *)((longlong)param_4 + 0x1c);
  lStack_170 = *param_4;
  puStack_178 = (undefined4 *)param_4[2];
  iVar8 = -(uint)(CONCAT13(unaff_XMM11_Bd,
                           CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))) ==
                 CONCAT13(unaff_XMM11_Bd,
                          CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM11_Bh,
                           CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))) ==
                 CONCAT13(unaff_XMM11_Bh,
                          CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM11_Bl,
                            CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))) ==
                  CONCAT13(unaff_XMM11_Bl,
                           CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM11_Bp,
                            CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))) ==
                  CONCAT13(unaff_XMM11_Bp,
                           CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))));
  cStack_d1 = *(char *)(lStack_108 + 0x108);
  plStack_168 = plStack_138 + 4;
  lStack_140 = 8;
  lStack_f0 = 0;
  lStack_e8 = 0;
  lVar20 = 0;
  uVar19 = 0;
  puVar36 = puVar33 + *(longlong *)(lStack_108 + 0x100);
  lVar32 = 8;
  lVar23 = 0;
  while (puStack_128 = puVar36, uStack_fc = uVar18, cStack_d1 != '\0') {
    iVar34 = iStack_100;
    if (uVar19 != (uint)lVar20) goto LAB_14090faf8;
LAB_14090f9d0:
    do {
      if (puVar33 == puVar36) goto LAB_14090ff76;
      uVar18 = *puVar33;
      puVar33 = puVar33 + 1;
      lVar20 = *(longlong *)
                (*(longlong *)((longlong)plStack_e0 + 0x1a0) + 0x10 + (ulonglong)uVar18 * 0x48);
    } while (lVar20 == 0);
    lVar30 = *(longlong *)((longlong)plStack_e0 + 0x1a0) + (ulonglong)uVar18 * 0x48;
    uVar29 = *(ulonglong *)(lVar30 + 0x40);
    if ((*(ulonglong *)(lStack_108 + 0x110) < uVar29) &&
       (uVar21 = *(ulonglong *)
                  (*(longlong *)(lVar30 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
       uVar21 != 0)) {
      lStack_f0 = *(longlong *)(*(longlong *)(lVar30 + 0x18) + 0x10 + ~uVar21 * 0x30);
      uVar21 = *(ulonglong *)(lStack_108 + 0x118);
      if (uVar29 <= uVar21) goto LAB_14090fab0;
LAB_14090fa7e:
      uVar29 = *(ulonglong *)(*(longlong *)(lVar30 + 0x38) + uVar21 * 8);
      if (uVar29 == 0) goto LAB_14090fab0;
      lStack_e8 = *(longlong *)(*(longlong *)(lVar30 + 0x18) + 0x10 + ~uVar29 * 0x30);
    }
    else {
      lStack_f0 = 0;
      uVar21 = *(ulonglong *)(lStack_108 + 0x118);
      if (uVar21 < uVar29) goto LAB_14090fa7e;
LAB_14090fab0:
      lStack_e8 = 0;
    }
    lVar23 = pdb_140effb40(lVar30);
    lStack_140 = *(longlong *)(lVar30 + 8);
    uVar19 = 0;
    puVar36 = puStack_128;
    uVar18 = uStack_fc;
    iVar34 = iStack_100;
LAB_14090faf8:
    uVar21 = (ulonglong)uVar19;
    if (uVar18 <= (uint)(iVar34 - *(int *)(lVar23 + uVar21 * 4))) goto code_r0x00014090fb08;
    plVar22 = (longlong *)(lStack_140 + uVar21 * 8);
LAB_14090fb1e:
    lStack_110 = uVar21 * 0x58 + lStack_f0;
    pfVar31 = (float *)(uVar21 * 0x30 + lStack_e8);
    lVar30 = *plVar22;
    if ((int)lVar30 == 0) goto LAB_14090ff76;
    lStack_198 = lVar30;
    lStack_160 = lVar32;
    lStack_158 = lVar23;
    if (plStack_138[3] != 0) {
      uVar29 = pdb_1400af0a0(plStack_168,&lStack_198);
      bVar40 = (byte)(uVar29 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar40,bVar40));
      auVar43 = pshuflw(auVar43,auVar43,0);
      lVar32 = 0;
      do {
        uVar29 = uVar29 & plStack_138[1];
        auVar44 = *(undefined1 (*) [16])(*plStack_138 + uVar29);
        auVar51[0] = -(auVar44[0] == auVar43[0]);
        auVar51[1] = -(auVar44[1] == auVar43[1]);
        auVar51[2] = -(auVar44[2] == auVar43[2]);
        auVar51[3] = -(auVar44[3] == auVar43[3]);
        auVar51[4] = -(auVar44[4] == auVar43[4]);
        auVar51[5] = -(auVar44[5] == auVar43[5]);
        auVar51[6] = -(auVar44[6] == auVar43[6]);
        auVar51[7] = -(auVar44[7] == auVar43[7]);
        auVar51[8] = -(auVar44[8] == auVar43[0]);
        auVar51[9] = -(auVar44[9] == auVar43[1]);
        auVar51[10] = -(auVar44[10] == auVar43[2]);
        auVar51[0xb] = -(auVar44[0xb] == auVar43[3]);
        auVar51[0xc] = -(auVar44[0xc] == auVar43[4]);
        auVar51[0xd] = -(auVar44[0xd] == auVar43[5]);
        auVar51[0xe] = -(auVar44[0xe] == auVar43[6]);
        auVar51[0xf] = -(auVar44[0xf] == auVar43[7]);
        uVar37 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf
        ;
        uVar18 = (uint)uVar37;
        while (uVar37 != 0) {
          uVar6 = 0;
          for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          if (lVar30 == *(longlong *)(*plStack_138 + (uVar6 + uVar29 & plStack_138[1]) * -8 + -8))
          goto LAB_14090ff45;
          uVar37 = (ushort)(uVar18 - 1) & (ushort)uVar18;
          uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar37);
        }
        auVar49[0] = -(auVar44[0] == (char)iVar8);
        auVar49[1] = -(auVar44[1] == (char)((uint)iVar8 >> 8));
        auVar49[2] = -(auVar44[2] == (char)((uint)iVar8 >> 0x10));
        auVar49[3] = -(auVar44[3] == (char)((uint)iVar8 >> 0x18));
        auVar49[4] = -(auVar44[4] == (char)iVar9);
        auVar49[5] = -(auVar44[5] == (char)((uint)iVar9 >> 8));
        auVar49[6] = -(auVar44[6] == (char)((uint)iVar9 >> 0x10));
        auVar49[7] = -(auVar44[7] == (char)((uint)iVar9 >> 0x18));
        auVar49[8] = -(auVar44[8] == (char)iVar10);
        auVar49[9] = -(auVar44[9] == (char)((uint)iVar10 >> 8));
        auVar49[10] = -(auVar44[10] == (char)((uint)iVar10 >> 0x10));
        auVar49[0xb] = -(auVar44[0xb] == (char)((uint)iVar10 >> 0x18));
        auVar49[0xc] = -(auVar44[0xc] == (char)iVar11);
        auVar49[0xd] = -(auVar44[0xd] == (char)((uint)iVar11 >> 8));
        auVar49[0xe] = -(auVar44[0xe] == (char)((uint)iVar11 >> 0x10));
        auVar49[0xf] = -(auVar44[0xf] == (char)((uint)iVar11 >> 0x18));
        if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 || (SUB161(auVar49 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar49 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar49 >> 0x1f,0) & 1) != 0) || (SUB161(auVar49 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar49 >> 0x37,0) & 1) != 0) || (SUB161(auVar49 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar49 >> 0x47,0) & 1) != 0) || (SUB161(auVar49 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar49 >> 0x57,0) & 1) != 0) || (SUB161(auVar49 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar49 >> 0x67,0) & 1) != 0) || (SUB161(auVar49 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') break;
        uVar29 = uVar29 + lVar32 + 0x10;
        lVar32 = lVar32 + 0x10;
      } while( true );
    }
    lVar32 = *(longlong *)(lStack_110 + 8);
    lVar23 = *(longlong *)(lStack_110 + 0x10) * 0xc + lVar32;
    while (lVar32 != lVar23) {
      uVar29 = (ulonglong)*(byte *)(lVar32 + 8);
      plStack_f8 = (longlong *)pdb_1409d2d80(uStack_190,uVar29);
      fStack_1b8 = pfVar31[2];
      uStack_1c0 = *(undefined8 *)pfVar31;
      pdb_140954f80(uVar29,lVar32,&uStack_1c0,pfVar31[3],pfVar31,&UNK_14301f3f0);
      pdb_140e9a350(plStack_f8);
      pdb_140e9a350();
      lVar32 = lVar32 + 0xc;
      LOCK();
      lVar30 = *plStack_f8;
      if (lVar30 == 8) {
        *plStack_f8 = 0;
      }
      UNLOCK();
      if (lVar30 != 8) {
        pdb_142dbca40(plStack_f8,0);
      }
    }
    plVar22 = *(longlong **)(lStack_110 + 0x20);
    plStack_f8 = plVar22 + *(longlong *)(lStack_110 + 0x28) * 2;
LAB_14090fce0:
    if (plVar22 != plStack_f8) {
      lVar32 = *plVar22;
      lVar23 = plVar22[1];
      *puStack_180 = uStack_130;
      uVar28 = uStack_188;
      plVar24 = (longlong *)pdb_1418c4240(uStack_188,lVar32,lVar23);
      uVar27 = (undefined4)uVar28;
      plVar22 = plVar22 + 2;
      fVar41 = (float)pub_142e32b30();
      fVar42 = (float)pub_142e329e0();
      fVar52 = fVar41 * 0.0;
      fVar12 = *pfVar31;
      fVar13 = pfVar31[1];
      fVar14 = pfVar31[2];
      fVar15 = pfVar31[3];
      fVar50 = fVar52 + fVar52;
      fVar48 = fVar41 + fVar41;
      fVar54 = fVar52 * fVar50;
      fVar53 = fVar54 - fVar48 * fVar42;
      fVar60 = fVar42 * fVar50;
      fVar47 = fVar16 - (fVar54 + fVar41 * fVar48);
      fVar55 = fVar41 * fVar50 + fVar60;
      fVar56 = fVar15 * (fVar52 * fVar48 + fVar60);
      fVar57 = fVar15 * fVar53;
      fVar53 = fVar15 * fVar53;
      fVar2 = pfVar31[3];
      fVar52 = (fVar52 * fVar48 - fVar60) * fVar2;
      fVar58 = (fVar16 - (fVar54 + fVar54)) * fVar2;
      fVar59 = fVar55 * fVar2;
      fVar55 = fVar55 * fVar2;
      fVar42 = fVar2 * (fVar48 * fVar42 + fVar54);
      fVar41 = fVar2 * (fVar41 * fVar50 - fVar60);
      lVar32 = *plVar24;
      auVar43._4_4_ = -(uint)(*(float *)(lVar32 + 0x14) == fVar56);
      auVar43._0_4_ = -(uint)(*(float *)(lVar32 + 0x10) == fVar15 * fVar47);
      auVar43._8_4_ = -(uint)(*(float *)(lVar32 + 0x18) == fVar57);
      auVar43._12_4_ = -(uint)(*(float *)(lVar32 + 0x1c) == fVar53);
      uVar27 = movmskps(uVar27,auVar43);
      if ((~(byte)uVar27 & 7) == 0) goto code_r0x00014090fe05;
      goto LAB_14090fe40;
    }
    lVar32 = *(longlong *)(lStack_110 + 0x38);
    lVar23 = *(longlong *)(lStack_110 + 0x40) * 0x28 + lVar32;
    for (; lVar32 != lVar23; lVar32 = lVar32 + 0x28) {
      fStack_118 = pfVar31[3];
      uStack_120 = CONCAT44(fStack_118,fStack_118);
      pdb_140def100(&uStack_1c0,lVar32,&uStack_120);
      fStack_118 = pfVar31[2];
      uStack_120 = *(undefined8 *)pfVar31;
      pdb_140deecf0(&uStack_1d8,&uStack_1c0,&uStack_120);
      *puStack_178 = uStack_12c;
      if (*(char *)(lVar32 + 0x18) != '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(1,1,&UNK_14303ac10);
      }
      if (*(ulonglong *)(lStack_170 + 0x10) <= (ulonglong)*(uint *)(lVar32 + 0x24))
      goto LAB_14091004b;
      lVar30 = (ulonglong)*(uint *)(lVar32 + 0x24) * 0x1c;
      if (*(int *)(*(longlong *)(lStack_170 + 8) + 0x18 + lVar30) != *(int *)(lVar32 + 0x20))
      goto LAB_14091004b;
      puVar26 = (undefined8 *)(*(longlong *)(lStack_170 + 8) + lVar30);
      puVar26[2] = uStack_1c8;
      *puVar26 = uStack_1d8;
      puVar26[1] = uStack_1d0;
    }
LAB_14090ff45:
    uVar19 = uVar19 + 1;
    puVar36 = puStack_128;
    lVar32 = lStack_160;
    lVar23 = lStack_158;
    uVar18 = uStack_fc;
  }
  iVar34 = iStack_100;
  if (uVar19 != (uint)lVar20) goto LAB_14090f8f0;
  while (puVar33 != puVar36) {
    uVar18 = *puVar33;
    puVar33 = puVar33 + 1;
    lVar20 = *(longlong *)
              (*(longlong *)((longlong)plStack_e0 + 0x100) + 0x58 + (ulonglong)uVar18 * 0xa0);
    if (lVar20 != 0) {
      lVar30 = *(longlong *)((longlong)plStack_e0 + 0x100) + (ulonglong)uVar18 * 0xa0;
      uVar29 = (ulonglong)*(uint *)(lVar30 + 0x94);
      lVar32 = *(longlong *)((longlong)plStack_e0 + 0x1a0) + uVar29 * 0x48;
      uVar29 = *(ulonglong *)(*(longlong *)((longlong)plStack_e0 + 0x1a0) + 0x40 + uVar29 * 0x48);
      if ((*(ulonglong *)(lStack_108 + 0x110) < uVar29) &&
         (uVar21 = *(ulonglong *)
                    (*(longlong *)(lVar32 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
         uVar21 != 0)) {
        lStack_f0 = *(longlong *)(*(longlong *)(lVar32 + 0x18) + 0x10 + ~uVar21 * 0x30);
        uVar21 = *(ulonglong *)(lStack_108 + 0x118);
        if (uVar29 <= uVar21) goto LAB_14090f950;
LAB_14090f91e:
        uVar29 = *(ulonglong *)(*(longlong *)(lVar32 + 0x38) + uVar21 * 8);
        if (uVar29 == 0) goto LAB_14090f950;
        lStack_e8 = *(longlong *)(*(longlong *)(lVar32 + 0x18) + 0x10 + ~uVar29 * 0x30);
      }
      else {
        lStack_f0 = 0;
        uVar21 = *(ulonglong *)(lStack_108 + 0x118);
        if (uVar21 < uVar29) goto LAB_14090f91e;
LAB_14090f950:
        lStack_e8 = 0;
      }
      lVar23 = pdb_140effb40(lVar32,*(undefined8 *)(lStack_108 + 0x120));
      lVar32 = *(longlong *)(lVar30 + 0x50);
      uVar19 = 0;
      uVar29 = 0;
      puVar36 = puStack_128;
      uVar18 = uStack_fc;
      iVar34 = iStack_100;
      while( true ) {
        uVar21 = (ulonglong)~*(uint *)(lVar32 + 8 + uVar29 * 0x10);
        if ((uint)(iVar34 - *(int *)(lVar23 + uVar21 * 4)) < uVar18) {
          plVar22 = (longlong *)(uVar29 * 0x10 + lVar32);
          goto LAB_14090fb1e;
        }
        uVar19 = uVar19 + 1;
        if (uVar19 == (uint)lVar20) break;
LAB_14090f8f0:
        uVar29 = (ulonglong)uVar19;
      }
    }
  }
LAB_14090ff76:
  if (lStack_150 == 0) {
    return;
  }
  plVar22 = (longlong *)pdb_140e97000();
  if ((char)plVar22[0xd] != '\x01') goto LAB_140910016;
  do {
    if (*plVar22 == 0) {
      *plVar22 = -1;
      plStack_e0 = plVar22;
      pdb_140e95370(plVar22 + 1,uStack_148);
      *plStack_e0 = *plStack_e0 + 1;
      return;
    }
LAB_14091000a:
    plVar22 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140910016:
    plVar22 = (longlong *)pdb_142d8ec20(plVar22,0);
  } while (plVar22 != (longlong *)0x0);
LAB_14091003e:
  pdb_142dc7890(&UNK_143326860);
LAB_14091004b:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14303ac28);
code_r0x00014090fe05:
  auVar44._4_4_ = -(uint)(*(float *)(lVar32 + 0x24) == fVar58);
  auVar44._0_4_ = -(uint)(*(float *)(lVar32 + 0x20) == fVar52);
  auVar44._8_4_ = -(uint)(*(float *)(lVar32 + 0x28) == fVar59);
  auVar44._12_4_ = -(uint)(*(float *)(lVar32 + 0x2c) == fVar55);
  uVar27 = movmskps(CONCAT31((int3)((uint)uVar27 >> 8),~(byte)uVar27),auVar44);
  if ((((~(byte)uVar27 & 7) != 0) ||
      (auVar45._4_4_ = -(uint)(*(float *)(lVar32 + 0x34) == fVar41),
      auVar45._0_4_ = -(uint)(*(float *)(lVar32 + 0x30) == fVar42),
      auVar45._8_4_ = -(uint)(*(float *)(lVar32 + 0x38) == fVar2 * fVar47),
      auVar45._12_4_ = -(uint)(*(float *)(lVar32 + 0x3c) == fVar2 * fVar47),
      uVar27 = movmskps(CONCAT31((int3)((uint)uVar27 >> 8),~(byte)uVar27),auVar45),
      (~(byte)uVar27 & 7) != 0)) ||
     (auVar46._4_4_ = -(uint)(*(float *)(lVar32 + 0x44) == fVar13),
     auVar46._0_4_ = -(uint)(*(float *)(lVar32 + 0x40) == fVar12),
     auVar46._8_4_ = -(uint)(*(float *)(lVar32 + 0x48) == fVar14),
     auVar46._12_4_ = -(uint)(*(float *)(lVar32 + 0x4c) == fVar14),
     uVar27 = movmskps((int)lVar32,auVar46), (~(byte)uVar27 & 7) != 0)) {
LAB_14090fe40:
    pfVar25 = (float *)pdb_1418c4050(plVar24);
    *pfVar25 = fVar15 * fVar47;
    pfVar25[1] = fVar56;
    pfVar25[2] = fVar57;
    pfVar25[3] = fVar53;
    pfVar25[4] = fVar52;
    pfVar25[5] = fVar58;
    pfVar25[6] = fVar59;
    pfVar25[7] = fVar55;
    pfVar25[8] = fVar42;
    pfVar25[9] = fVar41;
    pfVar25[10] = fVar2 * fVar47;
    pfVar25[0xb] = fVar2 * fVar47;
    pfVar25[0xc] = fVar12;
    pfVar25[0xd] = fVar13;
    pfVar25[0xe] = fVar14;
    pfVar25[0xf] = fVar14;
  }
  goto LAB_14090fce0;
code_r0x00014090fb08:
  uVar19 = uVar19 + 1;
  if (uVar19 == (uint)lVar20) goto LAB_14090f9d0;
  goto LAB_14090faf8;
}

