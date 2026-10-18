// VA 0x14295dd90, PDB extent 3447 bytes
// system_critters::wren::update_decorator_bird_spots
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/wren.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::wren::update_decorator_bird_spots
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/wren.rs
   Extent: 3447 */

void pdb_14295dd90(longlong *param_1,float *param_2,longlong *param_3,byte *param_4,
                  undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  longlong *plVar16;
  char cVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  byte *pbVar21;
  int *piVar22;
  undefined8 uVar23;
  float *pfVar24;
  longlong lVar25;
  uint *puVar26;
  ulonglong uVar27;
  undefined *puVar28;
  ushort uVar29;
  longlong lVar30;
  undefined *unaff_R12;
  longlong *plVar31;
  uint *puVar32;
  byte bVar33;
  float fVar34;
  float fVar36;
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  char unaff_XMM8_Ba;
  char unaff_XMM8_Bb;
  char unaff_XMM8_Bc;
  char unaff_XMM8_Bd;
  char unaff_XMM8_Be;
  char unaff_XMM8_Bf;
  char unaff_XMM8_Bg;
  char unaff_XMM8_Bh;
  char unaff_XMM8_Bi;
  char unaff_XMM8_Bj;
  char unaff_XMM8_Bk;
  char unaff_XMM8_Bl;
  char unaff_XMM8_Bm;
  char unaff_XMM8_Bn;
  char unaff_XMM8_Bo;
  char unaff_XMM8_Bp;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_1d0 [24];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  float *pfStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  longlong *plStack_150;
  longlong lStack_148;
  byte *pbStack_140;
  float fStack_134;
  longlong lStack_130;
  longlong lStack_128;
  undefined *puStack_120;
  byte *pbStack_118;
  undefined *puStack_110;
  longlong lStack_108;
  int iStack_fc;
  longlong *plStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong *plStack_e0;
  char cStack_d2;
  char cStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  lVar25 = 0;
  pfVar24 = param_2;
  plStack_f8 = param_3;
  cStack_d1 = pdb_140e94b40();
  if (cStack_d1 == '\0') {
    uStack_1b8 = 0;
    goto LAB_14295dfaa;
  }
  plVar31 = (longlong *)0x32;
  lVar19 = pdb_14295eb10(0x32);
  unaff_R12 = &UNK_143604de0;
  if (lVar19 != 1) goto LAB_14295de71;
  if (pfVar24 < (float *)0x33) {
    uVar20 = pdb_14295eb10(pfVar24);
    if ((uVar20 & 1) == 0) {
LAB_14295de71:
      puVar28 = &UNK_143604d33;
      puVar32 = (uint *)&UNK_143604d10;
      do {
        bVar33 = puVar28[-1];
        uVar18 = (uint)(char)bVar33;
        plStack_e0 = plVar31;
        if ((char)bVar33 < '\0') {
          bVar5 = puVar28[-2];
          if ((char)bVar5 < -0x40) {
            bVar6 = puVar28[-3];
            if ((char)bVar6 < -0x40) {
              pbVar21 = puVar28 + -4;
              puVar28 = puVar28 + -4;
              uVar18 = bVar6 & 0x3f | (*pbVar21 & 7) << 6;
            }
            else {
              puVar28 = puVar28 + -3;
              uVar18 = bVar6 & 0xf;
            }
            uVar18 = bVar5 & 0x3f | uVar18 << 6;
          }
          else {
            puVar28 = puVar28 + -2;
            uVar18 = bVar5 & 0x1f;
          }
          uVar18 = (uint)(bVar33 & 0x3f) | uVar18 << 6;
          if (uVar18 != 0x5c) goto LAB_14295df04;
LAB_14295df1c:
          if ((undefined *)0x23 < puVar28 + -0x143604d0f) goto LAB_14295e843;
          puVar26 = (uint *)(0x23 - (longlong)(puVar28 + -0x143604d0f));
          puVar32 = (uint *)(puVar28 + 1);
          goto LAB_14295df3e;
        }
        puVar28 = puVar28 + -1;
        if (uVar18 == 0x5c) goto LAB_14295df1c;
LAB_14295df04:
        if (uVar18 == 0x2f) goto LAB_14295df1c;
      } while (puVar28 != &UNK_143604d10);
      puVar26 = (uint *)0x23;
LAB_14295df3e:
      plVar31 = (longlong *)pdb_140e97000();
      if ((char)plVar31[0xd] != '\x01') goto LAB_14295e80f;
LAB_14295df4d:
      plVar16 = plStack_e0;
      if (*plVar31 == 0) {
        *plVar31 = -1;
        plStack_e0 = plVar31;
        uStack_1b0 = pdb_140e94f10(plVar31 + 1,unaff_R12,plVar16,puVar32,puVar26,1,0);
        *plStack_e0 = *plStack_e0 + 1;
        uStack_1b8 = 1;
        uStack_188 = uStack_1b0;
LAB_14295dfaa:
        fVar15 = _DAT_142e36f28;
        puStack_120 = (undefined *)0x0;
        pbStack_118 = (byte *)0x4;
        puStack_110 = (undefined *)0x0;
        lStack_108 = *param_1;
        param_1 = (longlong *)param_1[1];
        puVar32 = *(uint **)(lStack_108 + 0xf8);
        puVar26 = puVar32 + *(longlong *)(lStack_108 + 0x100);
        cStack_d2 = *(char *)(lStack_108 + 0x108);
        plStack_150 = plStack_f8 + 4;
        lStack_128 = *(longlong *)param_4;
        lStack_130 = *(longlong *)(param_4 + 8);
        fStack_134 = param_2[7];
        uStack_158 = *(undefined8 *)param_2;
        pfStack_198 = *(float **)(param_2 + 4);
        pbStack_140 = (byte *)*param_5;
        uVar13 = param_5[1];
        uVar14 = param_5[2];
        iVar9 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                                 CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                       CONCAT13(unaff_XMM8_Bd,
                                CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
        unaff_XMM8_Ba = (char)iVar9;
        unaff_XMM8_Bb = (char)((uint)iVar9 >> 8);
        unaff_XMM8_Bc = (char)((uint)iVar9 >> 0x10);
        unaff_XMM8_Bd = (char)((uint)iVar9 >> 0x18);
        iVar9 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                                 CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                       CONCAT13(unaff_XMM8_Bh,
                                CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
        unaff_XMM8_Be = (char)iVar9;
        unaff_XMM8_Bf = (char)((uint)iVar9 >> 8);
        unaff_XMM8_Bg = (char)((uint)iVar9 >> 0x10);
        unaff_XMM8_Bh = (char)((uint)iVar9 >> 0x18);
        iVar9 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                                 CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                       CONCAT13(unaff_XMM8_Bl,
                                CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
        unaff_XMM8_Bi = (char)iVar9;
        unaff_XMM8_Bj = (char)((uint)iVar9 >> 8);
        unaff_XMM8_Bk = (char)((uint)iVar9 >> 0x10);
        unaff_XMM8_Bl = (char)((uint)iVar9 >> 0x18);
        iVar9 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                                 CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                       CONCAT13(unaff_XMM8_Bp,
                                CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
        unaff_XMM8_Bm = (char)iVar9;
        unaff_XMM8_Bn = (char)((uint)iVar9 >> 8);
        unaff_XMM8_Bo = (char)((uint)iVar9 >> 0x10);
        unaff_XMM8_Bp = (char)((uint)iVar9 >> 0x18);
        uStack_190 = param_5[3];
        lStack_148 = 8;
        lStack_f0 = 0;
        lStack_e8 = 0;
        plStack_e0 = (longlong *)((ulonglong)plStack_e0 & 0xffffffff00000000);
LAB_14295e077:
        do {
          puVar28 = puStack_110;
          if (cStack_d2 == '\0') {
            if ((uint)plStack_e0 == (uint)lVar25) {
              do {
                if (puVar32 == puVar26) goto LAB_14295e720;
                uVar18 = *puVar32;
                puVar32 = puVar32 + 1;
                lVar25 = *(longlong *)(param_1[0x20] + 0x58 + (ulonglong)uVar18 * 0xa0);
              } while (lVar25 == 0);
              lVar30 = param_1[0x20] + (ulonglong)uVar18 * 0xa0;
              uVar20 = (ulonglong)*(uint *)(lVar30 + 0x94);
              lVar19 = param_1[0x34] + uVar20 * 0x48;
              uVar20 = *(ulonglong *)(param_1[0x34] + 0x40 + uVar20 * 0x48);
              if ((*(ulonglong *)(lStack_108 + 0x110) < uVar20) &&
                 (uVar27 = *(ulonglong *)
                            (*(longlong *)(lVar19 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
                 uVar27 != 0)) {
                lStack_f0 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar27 * 0x30);
                uVar27 = *(ulonglong *)(lStack_108 + 0x118);
                if (uVar20 <= uVar27) goto LAB_14295e286;
LAB_14295e244:
                uVar20 = *(ulonglong *)(*(longlong *)(lVar19 + 0x38) + uVar27 * 8);
                if (uVar20 == 0) goto LAB_14295e286;
                lStack_e8 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar20 * 0x30);
              }
              else {
                lStack_f0 = 0;
                uVar27 = *(ulonglong *)(lStack_108 + 0x118);
                if (uVar27 < uVar20) goto LAB_14295e244;
LAB_14295e286:
                lStack_e8 = 0;
              }
              lStack_148 = *(longlong *)(lVar30 + 0x50);
              plStack_e0._0_4_ = 0;
            }
            uVar18 = ~*(uint *)(lStack_148 + 8 + (ulonglong)(uint)plStack_e0 * 0x10);
          }
          else {
            uVar18 = (uint)plStack_e0;
            if ((uint)plStack_e0 == (uint)lVar25) {
              do {
                if (puVar32 == puVar26) goto LAB_14295e720;
                uVar18 = *puVar32;
                puVar32 = puVar32 + 1;
                lVar25 = *(longlong *)(param_1[0x34] + 0x10 + (ulonglong)uVar18 * 0x48);
              } while (lVar25 == 0);
              lVar19 = param_1[0x34] + (ulonglong)uVar18 * 0x48;
              uVar20 = *(ulonglong *)(lVar19 + 0x40);
              if ((*(ulonglong *)(lStack_108 + 0x110) < uVar20) &&
                 (uVar27 = *(ulonglong *)
                            (*(longlong *)(lVar19 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
                 uVar27 != 0)) {
                lStack_f0 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar27 * 0x30);
                uVar27 = *(ulonglong *)(lStack_108 + 0x118);
                if (uVar20 <= uVar27) goto LAB_14295e26e;
LAB_14295e1fc:
                uVar20 = *(ulonglong *)(*(longlong *)(lVar19 + 0x38) + uVar27 * 8);
                if (uVar20 == 0) goto LAB_14295e26e;
                lStack_e8 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar20 * 0x30);
              }
              else {
                lStack_f0 = 0;
                uVar27 = *(ulonglong *)(lStack_108 + 0x118);
                if (uVar27 < uVar20) goto LAB_14295e1fc;
LAB_14295e26e:
                lStack_e8 = 0;
              }
              uVar18 = 0;
              plStack_e0._0_4_ = uVar18;
            }
          }
          param_4 = (byte *)((ulonglong)uVar18 * 0x10 + lStack_f0);
          param_2 = (float *)((ulonglong)uVar18 * 0x30 + lStack_e8);
          iStack_fc = *(int *)param_4;
          if (puStack_110 == puStack_120) {
            pdb_142d8d710(&puStack_120);
          }
          plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,(uint)plStack_e0 + 1);
          *(int *)(pbStack_118 + (longlong)puVar28 * 4) = iStack_fc;
          unaff_R12 = puVar28 + 1;
          fVar10 = *param_2;
          fVar11 = param_2[1];
          fVar12 = param_2[3];
          fVar43 = param_2[2];
          fVar45 = fVar43 + fVar43;
          fVar39 = fVar11 + fVar11;
          fVar41 = fVar10 * (fVar10 + fVar10);
          fVar40 = (fVar10 + fVar10) * fVar12;
          fVar44 = param_2[7];
          fVar34 = (float)*(undefined8 *)(param_2 + 8);
          fVar36 = (float)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
          fVar1 = *(float *)(param_4 + 4);
          fVar2 = *(float *)(param_4 + 8);
          fVar3 = *(float *)(param_4 + 0xc);
          fVar42 = fVar3 * fVar36 * (fVar39 * fVar12 + fVar45 * fVar10) +
                   fVar2 * fVar34 * (fVar39 * fVar10 - fVar12 * fVar45) +
                   fVar1 * fVar44 * (fVar15 - (fVar11 * fVar39 + fVar43 * fVar45)) + param_2[4];
          fVar43 = fVar3 * fVar36 * (fVar45 * fVar11 - fVar40) +
                   fVar2 * fVar34 * (fVar15 - (fVar43 * fVar45 + fVar41)) +
                   fVar1 * fVar44 * (fVar39 * fVar10 + fVar12 * fVar45) +
                   (float)*(undefined8 *)(param_2 + 5);
          fVar44 = fVar3 * fVar36 * (fVar15 - (fVar41 + fVar11 * fVar39)) +
                   fVar2 * fVar34 * (fVar40 + fVar45 * fVar11) +
                   fVar1 * fVar44 * (fVar45 * fVar10 - fVar39 * fVar12) +
                   (float)((ulonglong)*(undefined8 *)(param_2 + 5) >> 0x20);
          puStack_110 = unaff_R12;
          if (plStack_f8[3] != 0) {
            uVar20 = pdb_140fc4e90(plStack_150,param_4);
            bVar33 = (byte)(uVar20 >> 0x39);
            auVar35 = ZEXT216(CONCAT11(bVar33,bVar33));
            auVar35 = pshuflw(auVar35,auVar35,0);
            lVar19 = 0;
            do {
              uVar20 = uVar20 & plStack_f8[1];
              auVar4 = *(undefined1 (*) [16])(*plStack_f8 + uVar20);
              auVar38[0] = -(auVar4[0] == auVar35[0]);
              auVar38[1] = -(auVar4[1] == auVar35[1]);
              auVar38[2] = -(auVar4[2] == auVar35[2]);
              auVar38[3] = -(auVar4[3] == auVar35[3]);
              auVar38[4] = -(auVar4[4] == auVar35[4]);
              auVar38[5] = -(auVar4[5] == auVar35[5]);
              auVar38[6] = -(auVar4[6] == auVar35[6]);
              auVar38[7] = -(auVar4[7] == auVar35[7]);
              auVar38[8] = -(auVar4[8] == auVar35[0]);
              auVar38[9] = -(auVar4[9] == auVar35[1]);
              auVar38[10] = -(auVar4[10] == auVar35[2]);
              auVar38[0xb] = -(auVar4[0xb] == auVar35[3]);
              auVar38[0xc] = -(auVar4[0xc] == auVar35[4]);
              auVar38[0xd] = -(auVar4[0xd] == auVar35[5]);
              auVar38[0xe] = -(auVar4[0xe] == auVar35[6]);
              auVar38[0xf] = -(auVar4[0xf] == auVar35[7]);
              uVar29 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
              uVar18 = (uint)uVar29;
              if (uVar29 != 0) {
                do {
                  uVar7 = 0;
                  for (uVar8 = uVar18; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                    uVar7 = uVar7 + 1;
                  }
                  uVar27 = uVar7 + uVar20 & plStack_f8[1];
                  param_2 = (float *)(uVar27 * 0x10);
                  lVar30 = *plStack_f8 + uVar27 * -0x10;
                  if (*(int *)param_4 == *(int *)(lVar30 + -0x10)) {
                    uVar23 = *(undefined8 *)(lVar30 + -8);
                    uVar20 = (ulonglong)~(uint)uVar23;
                    if ((((uVar20 < *(ulonglong *)(lStack_130 + 0x10)) &&
                         (piVar22 = (int *)(uVar20 * 0x18 + *(longlong *)(lStack_130 + 8)),
                         piVar22[4] == (int)((ulonglong)uVar23 >> 0x20))) && (*piVar22 != 0)) &&
                       ((uVar20 = *(ulonglong *)(piVar22 + 2),
                        (uVar20 & 0xffffffff) < *(ulonglong *)(lStack_128 + 0x38) &&
                        ((*(ulonglong *)
                           (*(longlong *)(lStack_128 + 0x28) + (uVar20 >> 6 & 0x3ffffff) * 8) >>
                          (uVar20 & 0x3f) & 1) != 0)))) {
                      if (*(ulonglong *)(lStack_128 + 0x110) <
                          *(ulonglong *)
                           (*(longlong *)(lStack_130 + 0x1a0) + 0x40 + (uVar20 >> 0x20) * 0x48)) {
                        lVar19 = *(longlong *)(lStack_130 + 0x1a0) + (uVar20 >> 0x20) * 0x48;
                        uVar20 = *(ulonglong *)
                                  (*(longlong *)(lVar19 + 0x38) +
                                  *(ulonglong *)(lStack_128 + 0x110) * 8);
                        if (uVar20 == 0) goto LAB_14295e655;
                        lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar20 * 0x30)
                        ;
                      }
                      else {
LAB_14295e655:
                        lVar19 = 0;
                      }
                      if (*(longlong *)(lVar19 + 8 + (ulonglong)(uint)~piVar22[1] * 0x18) == 0)
                      goto LAB_14295e8aa;
                      lVar19 = *(longlong *)(lVar19 + (ulonglong)(uint)~piVar22[1] * 0x18);
                      if ((*(float *)(lVar19 + 8) == fVar42) &&
                         (!NAN(*(float *)(lVar19 + 8)) && !NAN(fVar42))) {
                        if ((*(float *)(lVar19 + 0xc) == fVar43) &&
                           (!NAN(*(float *)(lVar19 + 0xc)) && !NAN(fVar43))) {
                          if ((*(float *)(lVar19 + 0x10) == fVar44) &&
                             (!NAN(*(float *)(lVar19 + 0x10)) && !NAN(fVar44))) goto LAB_14295e077;
                        }
                      }
                    }
                    uVar23 = pdb_140fc4e90(plStack_150,param_4);
                    pdb_142275960(&pbStack_180,plStack_f8,uVar23,param_4);
                    param_4 = (byte *)0x0;
                    if ((int)pbStack_178 != 0) {
                      param_4 = pbStack_178;
                    }
                    if (((int)param_4 != 0) &&
                       (cVar17 = pdb_140ed63a0(pbStack_140,param_4), cVar17 != '\0')) {
                      pbStack_178 = pbStack_140;
                      uStack_160 = uStack_190;
                      pbStack_180 = param_4;
                      uStack_170 = uVar13;
                      uStack_168 = uVar14;
                      pdb_140f04aa0(&pbStack_180,&UNK_143604d50);
                    }
                    goto LAB_14295e077;
                  }
                  uVar29 = (ushort)(uVar18 - 1) & (ushort)uVar18;
                  uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar29);
                } while (uVar29 != 0);
              }
              auVar37[0] = -(auVar4[0] == unaff_XMM8_Ba);
              auVar37[1] = -(auVar4[1] == unaff_XMM8_Bb);
              auVar37[2] = -(auVar4[2] == unaff_XMM8_Bc);
              auVar37[3] = -(auVar4[3] == unaff_XMM8_Bd);
              auVar37[4] = -(auVar4[4] == unaff_XMM8_Be);
              auVar37[5] = -(auVar4[5] == unaff_XMM8_Bf);
              auVar37[6] = -(auVar4[6] == unaff_XMM8_Bg);
              auVar37[7] = -(auVar4[7] == unaff_XMM8_Bh);
              auVar37[8] = -(auVar4[8] == unaff_XMM8_Bi);
              auVar37[9] = -(auVar4[9] == unaff_XMM8_Bj);
              auVar37[10] = -(auVar4[10] == unaff_XMM8_Bk);
              auVar37[0xb] = -(auVar4[0xb] == unaff_XMM8_Bl);
              auVar37[0xc] = -(auVar4[0xc] == unaff_XMM8_Bm);
              auVar37[0xd] = -(auVar4[0xd] == unaff_XMM8_Bn);
              auVar37[0xe] = -(auVar4[0xe] == unaff_XMM8_Bo);
              auVar37[0xf] = -(auVar4[0xf] == unaff_XMM8_Bp);
              if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar37 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar37 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x4f,0) & 1) != 0) || (SUB161(auVar37 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
              uVar20 = uVar20 + lVar19 + 0x10;
              lVar19 = lVar19 + 0x10;
            } while( true );
          }
          *pfStack_198 = fStack_134;
          uVar18 = pdb_1411630c0(uStack_158);
          param_4 = (byte *)(ulonglong)uVar18;
          pdb_14007ee60();
          pbVar21 = pub_1406abab0(0x18,8);
          if (pbVar21 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x18);
          }
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          *(ulonglong *)(pbVar21 + 8) = CONCAT44(fVar43,fVar42);
          *(float *)(pbVar21 + 0x10) = fVar44;
          *(uint *)(pbVar21 + 0x14) = uVar18;
          pbStack_180 = (byte *)0x1;
          uStack_170 = 1;
          pbStack_178 = pbVar21;
          pdb_141162f00(auStack_1d0,uStack_158,&pbStack_180);
          pdb_14296c590(&pbStack_180,param_5,auStack_1d0,&UNK_143604d68);
          pdb_14229be60(plStack_f8,iStack_fc,pbStack_180);
        } while( true );
      }
      goto LAB_14295e803;
    }
    if ((longlong)pfVar24 + 2U < 0x33) {
      plVar31 = (longlong *)(0x30 - (longlong)pfVar24);
      unaff_R12 = &UNK_143604de2 + (longlong)pfVar24;
      goto LAB_14295de71;
    }
    goto LAB_14295e886;
  }
  goto LAB_14295e866;
LAB_14295e720:
  pdb_14229c4c0(plStack_f8,&puStack_120,param_5);
  if (puStack_120 != (undefined *)0x0) {
    pub_1406abac0(pbStack_118,(longlong)puStack_120 << 2,4);
  }
  if (cStack_d1 != '\0') {
    plVar31 = (longlong *)pdb_140e97000();
    if (((char)plVar31[0xd] != '\x01') &&
       (plVar31 = (longlong *)pdb_142e2d6a0(plVar31,0), plVar31 == (longlong *)0x0))
    goto LAB_14295e837;
    if (*plVar31 != 0) {
LAB_14295e803:
      plVar31 = (longlong *)pdb_142dc8090(&UNK_1436007f8);
LAB_14295e80f:
      plVar31 = (longlong *)pdb_142e2d6a0(plVar31,0);
      if (plVar31 == (longlong *)0x0) goto LAB_14295e837;
      goto LAB_14295df4d;
    }
    *plVar31 = -1;
    plStack_e0 = plVar31;
    pdb_140e95370(plVar31 + 1);
    *plStack_e0 = *plStack_e0 + 1;
  }
  return;
LAB_14295e837:
  pdb_142dc7890(&UNK_143600788);
LAB_14295e843:
  pdb_142dc8070(&UNK_143604d10,0x23);
LAB_14295e866:
  pdb_142dc8070(&UNK_143604de0,0x32,0);
LAB_14295e886:
  pdb_142dc8070(&UNK_143604de0,0x32);
LAB_14295e8aa:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(0,0,&UNK_143604d38);
}

