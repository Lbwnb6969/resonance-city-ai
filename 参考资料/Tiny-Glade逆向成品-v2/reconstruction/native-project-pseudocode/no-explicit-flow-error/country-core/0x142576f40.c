// VA 0x142576f40, PDB extent 3441 bytes
// country_core::render::nani::systems::nani_update_plaster
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_plaster
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 3441 */

void pdb_142576f40(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  byte *pbVar1;
  uint *puVar2;
  char *pcVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined4 uVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  int iVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  uint uVar25;
  undefined *puVar26;
  ushort uVar27;
  longlong lVar28;
  undefined4 uVar29;
  longlong lVar30;
  undefined4 *puVar31;
  undefined *puVar32;
  longlong lVar33;
  longlong lVar34;
  undefined *puVar35;
  uint *puVar36;
  longlong lVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  char cVar44;
  undefined1 unaff_XMM7_Bd;
  char cVar45;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  char cVar46;
  undefined1 unaff_XMM7_Bg;
  char cVar47;
  undefined1 unaff_XMM7_Bh;
  char cVar48;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  char cVar49;
  undefined1 unaff_XMM7_Bk;
  char cVar50;
  undefined1 unaff_XMM7_Bl;
  char cVar51;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  char cVar52;
  undefined1 unaff_XMM7_Bo;
  char cVar53;
  undefined1 unaff_XMM7_Bp;
  char cVar54;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  float fStack_1a4;
  uint uStack_1a0;
  int iStack_19c;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong lStack_178;
  undefined8 uStack_170;
  longlong *plStack_168;
  longlong *plStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  longlong *plStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  int iStack_c4;
  longlong *plStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  uint uStack_a4;
  longlong *plStack_a0;
  char cStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  cVar16 = pdb_140e94b40();
  if (cVar16 == '\0') {
    lStack_128 = 0;
  }
  else {
    puVar32 = &UNK_14351c67d;
    lVar37 = 0x38;
    uVar23 = 0x38;
    plStack_a0 = param_2;
    lVar18 = pdb_142585200(&UNK_14351c67d);
    if (lVar18 == 1) {
      if (0x38 < uVar23) {
LAB_142577a98:
        pdb_142dc8070(&UNK_14351c67d,0x38,0);
LAB_142577ab8:
        pdb_142dc8070(&UNK_14351c67d,0x38);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar32 = &UNK_14351c67d;
      uVar19 = pdb_142585200(&UNK_14351c67d);
      if ((uVar19 & 1) != 0) {
        if (0x38 < uVar23 + 2) goto LAB_142577ab8;
        lVar37 = 0x36 - uVar23;
        puVar32 = &UNK_14351c67f + uVar23;
      }
    }
    puVar26 = &UNK_14351bdcd;
    puVar35 = &UNK_14351bd9f;
    do {
      bVar38 = puVar26[-1];
      uVar17 = (uint)(char)bVar38;
      if ((char)bVar38 < '\0') {
        bVar5 = puVar26[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar26[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar26 + -4;
            puVar26 = puVar26 + -4;
            uVar17 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar26 = puVar26 + -3;
            uVar17 = bVar6 & 0xf;
          }
          uVar17 = bVar5 & 0x3f | uVar17 << 6;
        }
        else {
          puVar26 = puVar26 + -2;
          uVar17 = bVar5 & 0x1f;
        }
        uVar17 = (uint)(bVar38 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_142577094;
LAB_1425770af:
        puVar35 = puVar26 + -0x14351bd9e;
        if ((undefined *)0x2e < puVar35) {
          pdb_142dc8070(&UNK_14351bd9f,0x2e,puVar35,0x2e,&UNK_14351c9b8);
          goto LAB_142577a98;
        }
        lVar18 = 0x2e - (longlong)puVar35;
        puVar35 = puVar26 + 1;
        goto LAB_1425770d4;
      }
      puVar26 = puVar26 + -1;
      if (uVar17 == 0x5c) goto LAB_1425770af;
LAB_142577094:
      if (uVar17 == 0x2f) goto LAB_1425770af;
    } while (puVar26 != &UNK_14351bd9f);
    lVar18 = 0x2e;
LAB_1425770d4:
    plVar20 = (longlong *)pdb_140e97000();
    if (((char)plVar20[0xd] != '\x01') &&
       (plVar20 = (longlong *)pdb_142d8ec20(plVar20,0), plVar20 == (longlong *)0x0))
    goto LAB_142577a4d;
    if (*plVar20 != 0) goto LAB_142577a19;
    *plVar20 = -1;
    plStack_c0 = plVar20;
    uStack_120 = pdb_140e94f10(plVar20 + 1,puVar32,lVar37,puVar35,lVar18,1,0);
    *plStack_c0 = *plStack_c0 + 1;
    lStack_128 = 1;
    param_2 = plStack_a0;
  }
  uVar15 = _DAT_142e36f28;
  lStack_e0 = *param_1;
  lVar18 = param_1[1];
  puVar36 = *(uint **)(lStack_e0 + 0xf8);
  puVar2 = puVar36 + *(longlong *)(lStack_e0 + 0x100);
  cStack_91 = *(char *)(lStack_e0 + 0x108);
  uStack_170 = *param_3;
  plStack_168 = (longlong *)*param_2;
  plStack_158 = (longlong *)*param_4;
  plStack_150 = plStack_158 + 4;
  plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,*(int *)((longlong)param_1 + 0x14));
  uVar17 = *(int *)((longlong)param_1 + 0x14) - (int)param_1[2];
  uStack_a4 = 0xc233b000;
  if (uVar17 < 0xc233b000) {
    uStack_a4 = uVar17;
  }
  plStack_160 = plStack_168 + 4;
  lStack_f0 = 8;
  iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                  CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  cVar16 = (char)((uint)iVar10 >> 8);
  cVar44 = (char)((uint)iVar10 >> 0x10);
  cVar45 = (char)((uint)iVar10 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                  CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  cVar46 = (char)((uint)iVar11 >> 8);
  cVar47 = (char)((uint)iVar11 >> 0x10);
  cVar48 = (char)((uint)iVar11 >> 0x18);
  iVar12 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                  CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  cVar49 = (char)((uint)iVar12 >> 8);
  cVar50 = (char)((uint)iVar12 >> 0x10);
  cVar51 = (char)((uint)iVar12 >> 0x18);
  iVar13 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                  CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  cVar52 = (char)((uint)iVar13 >> 8);
  cVar53 = (char)((uint)iVar13 >> 0x10);
  cVar54 = (char)((uint)iVar13 >> 0x18);
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_d8 = 0;
  plStack_a0 = (longlong *)((ulonglong)plStack_a0 & 0xffffffff00000000);
  lStack_d0 = 0;
  bVar14 = false;
  lVar37 = 0;
  uVar17 = 0;
LAB_142577212:
  lVar30 = lStack_f0;
  if (cStack_91 != '\0') {
    do {
      if (uVar17 == (uint)lVar37) {
        do {
          if (puVar36 == puVar2) goto LAB_14257799a;
          uVar17 = *puVar36;
          puVar36 = puVar36 + 1;
          lVar37 = *(longlong *)(*(longlong *)(lVar18 + 0x1a0) + 0x10 + (ulonglong)uVar17 * 0x48);
        } while (lVar37 == 0);
        lVar30 = *(longlong *)(lVar18 + 0x1a0) + (ulonglong)uVar17 * 0x48;
        uVar23 = *(ulonglong *)(lVar30 + 0x40);
        if ((*(ulonglong *)(lStack_e0 + 0x110) < uVar23) &&
           (uVar19 = *(ulonglong *)
                      (*(longlong *)(lVar30 + 0x38) + *(ulonglong *)(lStack_e0 + 0x110) * 8),
           uVar19 != 0)) {
          lStack_b8 = *(longlong *)(*(longlong *)(lVar30 + 0x18) + 0x10 + ~uVar19 * 0x30);
          uVar19 = *(ulonglong *)(lStack_e0 + 0x118);
          if (uVar23 <= uVar19) goto LAB_142577320;
LAB_1425772e7:
          uVar19 = *(ulonglong *)(*(longlong *)(lVar30 + 0x38) + uVar19 * 8);
          if (uVar19 == 0) goto LAB_142577320;
          lStack_b0 = *(longlong *)(*(longlong *)(lVar30 + 0x18) + 0x10 + ~uVar19 * 0x30);
          uVar19 = *(ulonglong *)(lStack_e0 + 0x128);
          if (uVar19 < uVar23) goto LAB_142577337;
LAB_142577380:
          plStack_a0 = (longlong *)((ulonglong)plStack_a0 & 0xffffffff00000000);
          uVar19 = *(ulonglong *)(lStack_e0 + 0x130);
          if (uVar19 < uVar23) {
LAB_142577398:
            uVar17 = 0;
            if (*(longlong *)(*(longlong *)(lVar30 + 0x38) + uVar19 * 8) != 0) {
              lStack_d0 = pdb_140effb40(lVar30);
              bVar14 = true;
              goto LAB_1425773c0;
            }
          }
        }
        else {
          lStack_b8 = 0;
          uVar19 = *(ulonglong *)(lStack_e0 + 0x118);
          if (uVar19 < uVar23) goto LAB_1425772e7;
LAB_142577320:
          lStack_b0 = 0;
          uVar19 = *(ulonglong *)(lStack_e0 + 0x128);
          if (uVar23 <= uVar19) goto LAB_142577380;
LAB_142577337:
          if (*(longlong *)(*(longlong *)(lVar30 + 0x38) + uVar19 * 8) == 0) goto LAB_142577380;
          lVar33 = lVar30;
          lStack_d8 = pdb_140effb40(lVar30);
          plStack_a0 = (longlong *)
                       CONCAT44(plStack_a0._4_4_,(int)CONCAT71((int7)((ulonglong)lVar33 >> 8),1));
          uVar19 = *(ulonglong *)(lStack_e0 + 0x130);
          if (uVar19 < *(ulonglong *)(lVar30 + 0x40)) goto LAB_142577398;
        }
        uVar17 = 0;
        bVar14 = false;
        uVar23 = 0;
        if ((char)plStack_a0 != '\0') {
LAB_1425773dd:
          if ((uint)((int)plStack_c0 - *(int *)(lStack_d8 + uVar23 * 4)) < uStack_a4)
          goto LAB_142577694;
        }
      }
      else {
LAB_1425773c0:
        uVar23 = (ulonglong)uVar17;
        if (((ulonglong)plStack_a0 & 1) != 0) goto LAB_1425773dd;
      }
      if ((bVar14) && ((uint)((int)plStack_c0 - *(int *)(lStack_d0 + uVar23 * 4)) < uStack_a4))
      goto LAB_142577686;
      uVar17 = uVar17 + 1;
    } while( true );
  }
  do {
    if (uVar17 == (uint)lVar37) {
      do {
        if (puVar36 == puVar2) goto LAB_14257799a;
        uVar17 = *puVar36;
        puVar36 = puVar36 + 1;
        lVar37 = *(longlong *)(*(longlong *)(lVar18 + 0x100) + 0x58 + (ulonglong)uVar17 * 0xa0);
      } while (lVar37 == 0);
      lVar33 = *(longlong *)(lVar18 + 0x100) + (ulonglong)uVar17 * 0xa0;
      lVar30 = *(longlong *)(lVar18 + 0x1a0) + (ulonglong)*(uint *)(lVar33 + 0x94) * 0x48;
      uVar23 = *(ulonglong *)
                (*(longlong *)(lVar18 + 0x1a0) + 0x40 + (ulonglong)*(uint *)(lVar33 + 0x94) * 0x48);
      if ((*(ulonglong *)(lStack_e0 + 0x110) < uVar23) &&
         (uVar19 = *(ulonglong *)
                    (*(longlong *)(lVar30 + 0x38) + *(ulonglong *)(lStack_e0 + 0x110) * 8),
         uVar19 != 0)) {
        lStack_b8 = *(longlong *)(*(longlong *)(lVar30 + 0x18) + 0x10 + ~uVar19 * 0x30);
        uVar19 = *(ulonglong *)(lStack_e0 + 0x118);
        if (uVar23 <= uVar19) goto LAB_142577570;
LAB_142577527:
        uVar23 = *(ulonglong *)(*(longlong *)(lVar30 + 0x38) + uVar19 * 8);
        if (uVar23 == 0) goto LAB_142577570;
        lStack_b0 = *(longlong *)(*(longlong *)(lVar30 + 0x18) + 0x10 + ~uVar23 * 0x30);
        uVar23 = *(ulonglong *)(lStack_e0 + 0x128);
        uVar19 = *(ulonglong *)(lVar33 + 0x88);
        if (uVar23 < uVar19) goto LAB_14257758f;
LAB_1425775e0:
        plStack_a0 = (longlong *)((ulonglong)plStack_a0 & 0xffffffff00000000);
        uVar23 = *(ulonglong *)(lStack_e0 + 0x130);
        if (uVar19 <= uVar23) goto LAB_142577620;
LAB_1425775f8:
        if (*(longlong *)(*(longlong *)(lVar33 + 0x80) + uVar23 * 8) == 0) goto LAB_142577620;
        lStack_d0 = pdb_140effb40(lVar30);
        bVar14 = true;
      }
      else {
        lStack_b8 = 0;
        uVar19 = *(ulonglong *)(lStack_e0 + 0x118);
        if (uVar19 < uVar23) goto LAB_142577527;
LAB_142577570:
        lStack_b0 = 0;
        uVar23 = *(ulonglong *)(lStack_e0 + 0x128);
        uVar19 = *(ulonglong *)(lVar33 + 0x88);
        if (uVar19 <= uVar23) goto LAB_1425775e0;
LAB_14257758f:
        if (*(longlong *)(*(longlong *)(lVar33 + 0x80) + uVar23 * 8) == 0) goto LAB_1425775e0;
        lVar34 = lVar30;
        lStack_d8 = pdb_140effb40(lVar30);
        plStack_a0 = (longlong *)
                     CONCAT44(plStack_a0._4_4_,(int)CONCAT71((int7)((ulonglong)lVar34 >> 8),1));
        uVar23 = *(ulonglong *)(lStack_e0 + 0x130);
        if (uVar23 < *(ulonglong *)(lVar33 + 0x88)) goto LAB_1425775f8;
LAB_142577620:
        bVar14 = false;
      }
      uVar17 = 0;
      uVar25 = *(uint *)(*(longlong *)(lVar33 + 0x50) + 8);
      lVar30 = *(longlong *)(lVar33 + 0x50);
      lVar33 = lStack_f0;
    }
    else {
      uVar25 = *(uint *)(lVar30 + 8 + (ulonglong)uVar17 * 0x10);
      lVar33 = lStack_f0;
    }
    lStack_f0 = lVar30;
    if ((((ulonglong)plStack_a0 & 1) != 0) &&
       (uVar23 = (ulonglong)~uVar25,
       (uint)((int)plStack_c0 - *(int *)(lStack_d8 + uVar23 * 4)) < uStack_a4)) goto LAB_142577694;
    if ((bVar14) &&
       (uVar23 = (ulonglong)~uVar25,
       (uint)((int)plStack_c0 - *(int *)(lStack_d0 + uVar23 * 4)) < uStack_a4)) {
LAB_142577686:
      bVar14 = true;
LAB_142577694:
      lStack_100 = lStack_b8 + uVar23 * 0xc;
      lVar30 = lStack_b0 + uVar23 * 0x28;
      uVar24 = CONCAT71((int7)((ulonglong)lStack_b8 >> 8),0x10);
      plStack_110 = (longlong *)pdb_1409d2d80(uStack_170);
      plVar20 = plStack_168;
      lStack_1b8 = *(longlong *)(lVar30 + 0x20);
      lStack_178 = lStack_1b8;
      uStack_148 = uVar24;
      lStack_e8 = lVar30;
      if (plStack_168[3] != 0) {
        uVar17 = uVar17 + 1;
        lStack_118 = lStack_1b8;
        uVar19 = pdb_1400af0a0(plStack_160,&lStack_1b8);
        lVar33 = lStack_e8;
        lVar30 = *plVar20;
        uVar23 = plVar20[1];
        bVar38 = (byte)(uVar19 >> 0x39);
        auVar39 = ZEXT216(CONCAT11(bVar38,bVar38));
        auVar39 = pshuflw(auVar39,auVar39,0);
        lVar34 = 0;
        while( true ) {
          uVar19 = uVar19 & uVar23;
          auVar43 = *(undefined1 (*) [16])(lVar30 + uVar19);
          auVar42[0] = -(auVar43[0] == auVar39[0]);
          auVar42[1] = -(auVar43[1] == auVar39[1]);
          auVar42[2] = -(auVar43[2] == auVar39[2]);
          auVar42[3] = -(auVar43[3] == auVar39[3]);
          auVar42[4] = -(auVar43[4] == auVar39[4]);
          auVar42[5] = -(auVar43[5] == auVar39[5]);
          auVar42[6] = -(auVar43[6] == auVar39[6]);
          auVar42[7] = -(auVar43[7] == auVar39[7]);
          auVar42[8] = -(auVar43[8] == auVar39[0]);
          auVar42[9] = -(auVar43[9] == auVar39[1]);
          auVar42[10] = -(auVar43[10] == auVar39[2]);
          auVar42[0xb] = -(auVar43[0xb] == auVar39[3]);
          auVar42[0xc] = -(auVar43[0xc] == auVar39[4]);
          auVar42[0xd] = -(auVar43[0xd] == auVar39[5]);
          auVar42[0xe] = -(auVar43[0xe] == auVar39[6]);
          auVar42[0xf] = -(auVar43[0xf] == auVar39[7]);
          uVar27 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
          uVar25 = (uint)uVar27;
          while (uVar27 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar25; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            lVar28 = (uVar8 + uVar19 & uVar23) * -0x2b0;
            if (lStack_118 == *(longlong *)(lVar30 + -0x2b0 + lVar28)) {
              lVar30 = lVar30 + lVar28;
              if ((*(ulonglong *)(lVar30 + -0x298) < 2) ||
                 (fVar4 = *(float *)(lVar30 + -0x278), fVar4 <= 0.0)) goto LAB_142577a5a;
              iStack_c4 = *(int *)(lVar30 + -0x50);
              lStack_108 = lVar30;
              pdb_140fb49c0(&lStack_138);
              plVar20 = plStack_158;
              uVar25 = (uint)(iStack_c4 != 2);
              iVar22 = *(int *)(lVar33 + 0x18);
              uVar24 = *(undefined8 *)(lVar33 + 0x10);
              uVar29 = *(undefined4 *)(lStack_108 + -0x34);
              if (plStack_158[3] == 0) {
                puVar21 = (undefined4 *)0x0;
                uStack_190 = *(undefined4 *)(lVar33 + 0x1c);
                goto LAB_1425778ed;
              }
              lStack_e8 = CONCAT44(lStack_e8._4_4_,uVar25);
              uStack_140 = uVar24;
              uStack_f8 = *(undefined4 *)(lVar33 + 0x1c);
              uStack_f4 = uVar29;
              iStack_c4 = iVar22;
              uVar19 = pdb_1400af0a0(plStack_150,&lStack_178);
              lVar30 = *plVar20;
              uVar23 = plVar20[1];
              bVar38 = (byte)(uVar19 >> 0x39);
              auVar39 = ZEXT216(CONCAT11(bVar38,bVar38));
              auVar39 = pshuflw(auVar39,auVar39,0);
              lVar33 = 0;
              goto LAB_142577858;
            }
            uVar27 = (ushort)(uVar25 - 1) & (ushort)uVar25;
            uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar27);
          }
          auVar40[0] = -(auVar43[0] == (char)iVar10);
          auVar40[1] = -(auVar43[1] == cVar16);
          auVar40[2] = -(auVar43[2] == cVar44);
          auVar40[3] = -(auVar43[3] == cVar45);
          auVar40[4] = -(auVar43[4] == (char)iVar11);
          auVar40[5] = -(auVar43[5] == cVar46);
          auVar40[6] = -(auVar43[6] == cVar47);
          auVar40[7] = -(auVar43[7] == cVar48);
          auVar40[8] = -(auVar43[8] == (char)iVar12);
          auVar40[9] = -(auVar43[9] == cVar49);
          auVar40[10] = -(auVar43[10] == cVar50);
          auVar40[0xb] = -(auVar43[0xb] == cVar51);
          auVar40[0xc] = -(auVar43[0xc] == (char)iVar13);
          auVar40[0xd] = -(auVar43[0xd] == cVar52);
          auVar40[0xe] = -(auVar43[0xe] == cVar53);
          auVar40[0xf] = -(auVar43[0xf] == cVar54);
          if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar40 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar40 >> 0x2f,0) & 1) != 0) || (SUB161(auVar40 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
          uVar19 = uVar19 + lVar34 + 0x10;
          lVar34 = lVar34 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14351be90);
    }
    uVar17 = uVar17 + 1;
    lVar30 = lStack_f0;
    lStack_f0 = lVar33;
  } while( true );
LAB_142577858:
  uVar19 = uVar19 & uVar23;
  pcVar3 = (char *)(lVar30 + uVar19);
  auVar43[0] = -(*pcVar3 == auVar39[0]);
  auVar43[1] = -(pcVar3[1] == auVar39[1]);
  auVar43[2] = -(pcVar3[2] == auVar39[2]);
  auVar43[3] = -(pcVar3[3] == auVar39[3]);
  auVar43[4] = -(pcVar3[4] == auVar39[4]);
  auVar43[5] = -(pcVar3[5] == auVar39[5]);
  auVar43[6] = -(pcVar3[6] == auVar39[6]);
  auVar43[7] = -(pcVar3[7] == auVar39[7]);
  auVar43[8] = -(pcVar3[8] == auVar39[0]);
  auVar43[9] = -(pcVar3[9] == auVar39[1]);
  auVar43[10] = -(pcVar3[10] == auVar39[2]);
  auVar43[0xb] = -(pcVar3[0xb] == auVar39[3]);
  auVar43[0xc] = -(pcVar3[0xc] == auVar39[4]);
  auVar43[0xd] = -(pcVar3[0xd] == auVar39[5]);
  auVar43[0xe] = -(pcVar3[0xe] == auVar39[6]);
  auVar43[0xf] = -(pcVar3[0xf] == auVar39[7]);
  uVar27 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
  uVar25 = (uint)uVar27;
  while (uVar27 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar25; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar34 = lVar30 + (uVar8 + uVar19 & uVar23) * -0x10;
    if (lStack_118 == *(longlong *)(lVar34 + -0x10)) goto LAB_1425778c0;
    uVar27 = (ushort)(uVar25 - 1) & (ushort)uVar25;
    uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar27);
  }
  auVar41[0] = -(*pcVar3 == (char)iVar10);
  auVar41[1] = -(pcVar3[1] == cVar16);
  auVar41[2] = -(pcVar3[2] == cVar44);
  auVar41[3] = -(pcVar3[3] == cVar45);
  auVar41[4] = -(pcVar3[4] == (char)iVar11);
  auVar41[5] = -(pcVar3[5] == cVar46);
  auVar41[6] = -(pcVar3[6] == cVar47);
  auVar41[7] = -(pcVar3[7] == cVar48);
  auVar41[8] = -(pcVar3[8] == (char)iVar12);
  auVar41[9] = -(pcVar3[9] == cVar49);
  auVar41[10] = -(pcVar3[10] == cVar50);
  auVar41[0xb] = -(pcVar3[0xb] == cVar51);
  auVar41[0xc] = -(pcVar3[0xc] == (char)iVar13);
  auVar41[0xd] = -(pcVar3[0xd] == cVar52);
  auVar41[0xe] = -(pcVar3[0xe] == cVar53);
  auVar41[0xf] = -(pcVar3[0xf] == cVar54);
  if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') goto LAB_1425778bd;
  uVar19 = uVar19 + lVar33 + 0x10;
  lVar33 = lVar33 + 0x10;
  goto LAB_142577858;
LAB_1425778bd:
  lVar34 = 0;
LAB_1425778c0:
  puVar21 = (undefined4 *)(lVar34 + -8);
  if (lVar34 == 0) {
    puVar21 = (undefined4 *)0x0;
  }
  uVar24 = uStack_140;
  iVar22 = iStack_c4;
  uVar29 = uStack_f4;
  uVar25 = (uint)lStack_e8;
  uStack_190 = uStack_f8;
LAB_1425778ed:
  puVar31 = (undefined4 *)(lStack_108 + -0x10);
  if (puVar21 != (undefined4 *)0x0) {
    puVar31 = puVar21;
  }
  uStack_18c = *puVar31;
  uStack_1b0 = CONCAT44(uStack_12c,uStack_130);
  lStack_1b8 = lStack_138;
  uStack_130 = 0;
  lStack_138 = 0;
  uStack_1a8 = uVar29;
  fStack_1a4 = fVar4;
  uStack_1a0 = uVar25;
  iStack_19c = iVar22;
  uStack_198 = uVar24;
  pdb_1409532a0(uStack_148,lStack_100,&lStack_138,uVar15,&lStack_1b8,&UNK_14351bea8);
  plVar20 = plStack_110;
  pdb_140e9a350(plStack_110);
  pdb_140e9a350();
  LOCK();
  lVar30 = *plVar20;
  if (lVar30 == 8) {
    *plVar20 = 0;
  }
  UNLOCK();
  if (lVar30 != 8) {
    pdb_142dbca40(plVar20,0);
  }
  goto LAB_142577212;
LAB_14257799a:
  if (lStack_128 == 0) {
    return;
  }
  plVar20 = (longlong *)pdb_140e97000();
  if ((char)plVar20[0xd] != '\x01') goto LAB_142577a25;
  do {
    if (*plVar20 == 0) {
      *plVar20 = -1;
      plStack_a0 = plVar20;
      pdb_140e95370(plVar20 + 1,uStack_120);
      *plStack_a0 = *plStack_a0 + 1;
      return;
    }
LAB_142577a19:
    plVar20 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_142577a25:
    plVar20 = (longlong *)pdb_142d8ec20(plVar20,0);
  } while (plVar20 != (longlong *)0x0);
LAB_142577a4d:
  pdb_142dc7890(&UNK_143326860);
LAB_142577a5a:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14351be78);
}

