// VA 0x1402e68b0, PDB extent 8783 bytes
// tiny_glade::gui::gui_mod_editor::do_gui_mod_editor
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_mod_editor::do_gui_mod_editor
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_mod_editor.rs
   Extent: 8783 */

void pdb_1402e68b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  ulonglong *******param_5,ulonglong ******param_6,undefined8 param_7,
                  undefined8 param_8,undefined8 param_9,undefined8 *param_10)

{
  longlong *plVar1;
  ulonglong *****pppppuVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  ulonglong *******pppppppuVar12;
  ulonglong *******pppppppuVar13;
  ulonglong *******pppppppuVar14;
  ulonglong *******pppppppuVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong *******arg1;
  ulonglong *******pppppppuVar19;
  byte *pbVar20;
  uint uVar21;
  ulonglong ******ppppppuVar22;
  ulonglong ******ppppppuVar23;
  ulonglong ******ppppppuVar24;
  longlong lVar25;
  ushort uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong *puVar29;
  longlong lVar30;
  longlong *plVar31;
  ulonglong ******ppppppuVar32;
  ulonglong *******unaff_R15;
  ulonglong ******ppppppuVar33;
  bool bVar34;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulonglong *******pppppppuStack_718;
  ulonglong *******pppppppuStack_710;
  ulonglong *******pppppppuStack_708;
  ulonglong *******apppppppuStack_700 [18];
  longlong lStack_670;
  undefined4 uStack_5fc;
  undefined4 uStack_5f6;
  undefined2 uStack_5f2;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  ulonglong ******ppppppuStack_458;
  ulonglong ******ppppppuStack_450;
  ulonglong *******pppppppuStack_448;
  ulonglong *******pppppppuStack_440;
  ulonglong *******pppppppuStack_438;
  ulonglong *******pppppppuStack_430;
  ulonglong ******ppppppuStack_428;
  ulonglong ******ppppppuStack_420;
  ulonglong *******pppppppuStack_418;
  ulonglong ******ppppppuStack_410;
  ulonglong *******pppppppuStack_408;
  ulonglong *******pppppppuStack_400;
  uint uStack_3f8;
  uint uStack_3f4;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d4;
  undefined8 uStack_3d0;
  undefined8 uStack_3c4;
  undefined8 uStack_3bc;
  undefined8 uStack_3b4;
  undefined4 uStack_3a8;
  undefined8 uStack_3a4;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_36c;
  undefined8 uStack_364;
  undefined8 uStack_35c;
  undefined4 uStack_350;
  undefined8 uStack_34c;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined2 uStack_328;
  undefined2 uStack_326;
  undefined2 uStack_324;
  undefined2 uStack_322;
  ulonglong *******pppppppuStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  uint uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  ulonglong ******ppppppuStack_2f8;
  ulonglong ******ppppppuStack_2f0;
  ulonglong ******ppppppuStack_2e8;
  ulonglong ******ppppppuStack_2e0;
  ulonglong ******ppppppuStack_2d8;
  ulonglong ******ppppppuStack_2d0;
  ulonglong ******ppppppuStack_2c8;
  ulonglong ******ppppppuStack_2c0;
  ulonglong ******ppppppuStack_2b8;
  uint uStack_2b0;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  uint uStack_29c;
  uint uStack_298;
  undefined8 uStack_294;
  uint uStack_28c;
  undefined1 uStack_288;
  undefined4 uStack_287;
  undefined1 uStack_283;
  undefined8 uStack_282;
  undefined2 uStack_27a;
  undefined1 auStack_278 [32];
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined8 uStack_248;
  ulonglong ******ppppppuStack_1d8;
  ulonglong *******pppppppuStack_1d0;
  ulonglong *******pppppppuStack_1c8;
  ulonglong ******ppppppuStack_1c0;
  ulonglong ******ppppppuStack_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  undefined8 *puStack_1a0;
  ulonglong *puStack_198;
  longlong *plStack_190;
  ulonglong *******pppppppuStack_188;
  ulonglong ******ppppppuStack_180;
  ulonglong *******pppppppuStack_178;
  ulonglong *******pppppppuStack_170;
  ulonglong *******pppppppuStack_168;
  ulonglong *******pppppppuStack_160;
  ulonglong *******pppppppuStack_158;
  int iStack_140;
  ulonglong ******ppppppuStack_118;
  ulonglong *******pppppppuStack_110;
  ulonglong *******pppppppuStack_108;
  ulonglong *******pppppppuStack_100;
  ulonglong ******ppppppuStack_f8;
  ulonglong *******pppppppuStack_f0;
  ulonglong ******ppppppuStack_e8;
  ulonglong ******ppppppuStack_e0;
  ulonglong ******ppppppuStack_d8;
  ulonglong *******pppppppuStack_d0;
  ulonglong *******pppppppuStack_c8;
  ulonglong *******pppppppuStack_c0;
  ulonglong *******pppppppuStack_b8;
  ulonglong *******pppppppuStack_b0;
  ulonglong ******ppppppuStack_a8;
  ulonglong *******pppppppuStack_a0;
  ulonglong *******pppppppuStack_98;
  ulonglong *******pppppppuStack_88;
  ulonglong *******pppppppuStack_80;
  ulonglong *******pppppppuStack_78;
  ulonglong *******pppppppuStack_70;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  ppppppuVar32 = (ulonglong ******)*param_1;
  if (ppppppuVar32 == (ulonglong ******)0x0) {
    return;
  }
  puVar29 = (ulonglong *)*param_2;
  cVar10 = pdb_1409012f0(puVar29);
  if (cVar10 == '\0') {
    return;
  }
  plVar31 = (longlong *)*param_10;
  if (plVar31 != (longlong *)0x0) {
    pppppppuVar13 = (ulonglong *******)*param_3;
    pppppppuVar14 = (ulonglong *******)*param_4;
    pppppppuVar12 = (ulonglong *******)pdb_140ad6e60(puVar29);
    if (pppppppuVar12 == (ulonglong *******)0x0) {
      ppppppuStack_d8 = (ulonglong ******)0x0;
      pppppppuStack_d0 = (ulonglong *******)0x8;
      pppppppuStack_c8 = (ulonglong *******)0x0;
    }
    else {
      pppppppuStack_718 = (ulonglong *******)pppppppuVar12[10];
      pppppppuStack_710 = pppppppuStack_718 + (longlong)pppppppuVar12[0xb] * 4;
      apppppppuStack_700[1] = (ulonglong *******)&pppppppuStack_448;
      pppppppuStack_708 = pppppppuVar12;
      apppppppuStack_700[0] = pppppppuVar14;
      apppppppuStack_700[2] = pppppppuVar13;
      pppppppuStack_448 = pppppppuVar14;
      pppppppuStack_440 = pppppppuVar12;
      pdb_140180c80(&ppppppuStack_d8,&pppppppuStack_718);
    }
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar16 = pdb_140ad6e60(puVar29);
    if (lVar16 != 0) {
      pppppppuStack_80 = pppppppuStack_d0;
      pppppppuStack_c0 = (ulonglong *******)0x0;
      pppppppuStack_b8 = (ulonglong *******)0x8;
      pppppppuStack_b0 = (ulonglong *******)0x0;
      pppppppuStack_70 = *(ulonglong ********)(lVar16 + 0x58);
      if (pppppppuStack_c8 < *(ulonglong ********)(lVar16 + 0x58)) {
        pppppppuStack_70 = pppppppuStack_c8;
      }
      lVar30 = *(longlong *)(lVar16 + 0x50);
      plVar1 = (longlong *)(lVar16 + 0x98);
      pppppppuStack_88 = (ulonglong *******)(lVar16 + 0x170);
      pppppppuVar13 = (ulonglong *******)0x0;
      puStack_1a0 = param_2;
      puStack_198 = puVar29;
      plStack_190 = plVar31;
      ppppppuStack_f8 = ppppppuVar32;
LAB_1402e6fce:
      pppppppuStack_78 = pppppppuVar13;
      if (pppppppuStack_78 < pppppppuStack_70) {
        lVar28 = (longlong)pppppppuStack_78 * 0x20;
        lVar25 = *(longlong *)(lVar30 + 8 + lVar28);
        uVar18 = *(ulonglong *)(lVar30 + 0x10 + lVar28);
        if (uVar18 < 4) {
          lVar27 = 0;
          lVar5 = *plVar1;
        }
        else {
          uVar21 = *(uint *)(lVar25 + (uVar18 - 4));
          uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
          lVar27 = 0;
          if (uVar21 < 0x2e676c62 == 0x2e676c62 < uVar21) {
            lVar27 = lVar25;
          }
          lVar5 = *plVar1;
        }
        pppppppuVar13 = (ulonglong *******)((longlong)pppppppuStack_78 + 1);
        if (!SBORROW8(0,lVar5)) {
          pppppppuVar13 = (ulonglong *******)((longlong)pppppppuStack_78 + 1);
          if (lVar27 != 0) {
            lVar25 = lVar27;
            uVar18 = uVar18 - 4;
          }
          pppppppuVar12 = (ulonglong *******)pdb_140c26ac0(plVar1,lVar25,uVar18);
          pppppppuVar14 = pppppppuStack_80 + (longlong)pppppppuStack_78 * 3;
          pppppppuStack_100 = pppppppuVar12;
          if ((longlong)*pppppppuVar14 < -0x7ffffffffffffffe) {
            uVar17 = pdb_1400af800(pppppppuStack_88,&pppppppuStack_100);
            pdb_140269750(&pppppppuStack_718,lVar16 + 0x150,uVar17);
            if ((!SBORROW8(0,(longlong)pppppppuStack_710)) &&
               (pppppppuStack_710 != (ulonglong *******)0x0)) {
              pub_1406abac0((byte *)pppppppuStack_708,(ulonglong)pppppppuStack_710,1);
            }
          }
          else {
            if (*(longlong *)(lVar16 + 0x168) != 0) {
              uVar18 = pdb_1400af800(pppppppuStack_88,&pppppppuStack_100);
              bVar35 = (byte)(uVar18 >> 0x39);
              auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
              auVar36 = pshuflw(auVar36,auVar36,0);
              lVar25 = 0;
              while( true ) {
                uVar18 = uVar18 & *(ulonglong *)(lVar16 + 0x158);
                auVar3 = *(undefined1 (*) [16])(*(longlong *)(lVar16 + 0x150) + uVar18);
                auVar38[0] = -(auVar3[0] == auVar36[0]);
                auVar38[1] = -(auVar3[1] == auVar36[1]);
                auVar38[2] = -(auVar3[2] == auVar36[2]);
                auVar38[3] = -(auVar3[3] == auVar36[3]);
                auVar38[4] = -(auVar3[4] == auVar36[4]);
                auVar38[5] = -(auVar3[5] == auVar36[5]);
                auVar38[6] = -(auVar3[6] == auVar36[6]);
                auVar38[7] = -(auVar3[7] == auVar36[7]);
                auVar38[8] = -(auVar3[8] == auVar36[0]);
                auVar38[9] = -(auVar3[9] == auVar36[1]);
                auVar38[10] = -(auVar3[10] == auVar36[2]);
                auVar38[0xb] = -(auVar3[0xb] == auVar36[3]);
                auVar38[0xc] = -(auVar3[0xc] == auVar36[4]);
                auVar38[0xd] = -(auVar3[0xd] == auVar36[5]);
                auVar38[0xe] = -(auVar3[0xe] == auVar36[6]);
                auVar38[0xf] = -(auVar3[0xf] == auVar36[7]);
                uVar26 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
                uVar21 = (uint)uVar26;
                while (uVar26 != 0) {
                  uVar7 = 0;
                  for (uVar8 = uVar21; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                    uVar7 = uVar7 + 1;
                  }
                  lVar27 = *(longlong *)(lVar16 + 0x150) +
                           (uVar7 + uVar18 & *(ulonglong *)(lVar16 + 0x158)) * -0x20;
                  if (pppppppuVar12 == *(ulonglong ********)(lVar27 + -0x20)) {
                    if ((*(ulonglong *******)(lVar27 + -8) != pppppppuVar14[2]) ||
                       (iVar11 = pub_142e32750(*(undefined8 *)(lVar27 + -0x10),pppppppuVar14[1]),
                       iVar11 != 0)) goto LAB_1402e71b0;
                    goto LAB_1402e6fce;
                  }
                  uVar26 = (ushort)(uVar21 - 1) & (ushort)uVar21;
                  uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar26);
                }
                auVar37[0] = -(auVar3[0] == -1);
                auVar37[1] = -(auVar3[1] == -1);
                auVar37[2] = -(auVar3[2] == -1);
                auVar37[3] = -(auVar3[3] == -1);
                auVar37[4] = -(auVar3[4] == -1);
                auVar37[5] = -(auVar3[5] == -1);
                auVar37[6] = -(auVar3[6] == -1);
                auVar37[7] = -(auVar3[7] == -1);
                auVar37[8] = -(auVar3[8] == -1);
                auVar37[9] = -(auVar3[9] == -1);
                auVar37[10] = -(auVar3[10] == -1);
                auVar37[0xb] = -(auVar3[0xb] == -1);
                auVar37[0xc] = -(auVar3[0xc] == -1);
                auVar37[0xd] = -(auVar3[0xd] == -1);
                auVar37[0xe] = -(auVar3[0xe] == -1);
                auVar37[0xf] = -(auVar3[0xf] == -1);
                if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar37 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar37 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar37 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x5f,0) & 1) != 0) || (SUB161(auVar37 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
                uVar18 = uVar18 + lVar25 + 0x10;
                lVar25 = lVar25 + 0x10;
              }
            }
LAB_1402e71b0:
            pdb_140f60be0(&ppppppuStack_180,lVar28 + lVar30);
            pdb_140f60be0(&pppppppuStack_448,pppppppuVar14);
            pppppppuVar14 = pppppppuStack_b0;
            pppppppuStack_718 = (ulonglong *******)ppppppuStack_180;
            pppppppuStack_710 = pppppppuStack_178;
            pppppppuStack_708 = pppppppuStack_170;
            apppppppuStack_700[3] = pppppppuStack_438;
            apppppppuStack_700[1] = pppppppuStack_448;
            apppppppuStack_700[2] = pppppppuStack_440;
            apppppppuStack_700[0] = pppppppuVar12;
            if (pppppppuStack_b0 == pppppppuStack_c0) {
              pdb_142d7f080(&pppppppuStack_c0);
            }
            pppppppuStack_b8[(longlong)pppppppuVar14 * 7 + 6] =
                 (ulonglong ******)apppppppuStack_700[3];
            pppppppuStack_b8[(longlong)pppppppuVar14 * 7 + 4] =
                 (ulonglong ******)apppppppuStack_700[1];
            (pppppppuStack_b8 + (longlong)pppppppuVar14 * 7 + 4)[1] =
                 (ulonglong ******)apppppppuStack_700[2];
            pppppppuStack_b8[(longlong)pppppppuVar14 * 7 + 2] = (ulonglong ******)pppppppuStack_708;
            (pppppppuStack_b8 + (longlong)pppppppuVar14 * 7 + 2)[1] =
                 (ulonglong ******)apppppppuStack_700[0];
            pppppppuStack_b8[(longlong)pppppppuVar14 * 7] = (ulonglong ******)pppppppuStack_718;
            (pppppppuStack_b8 + (longlong)pppppppuVar14 * 7)[1] =
                 (ulonglong ******)pppppppuStack_710;
            pppppppuStack_b0 = (ulonglong *******)((longlong)pppppppuVar14 + 1);
          }
        }
        goto LAB_1402e6fce;
      }
      lVar30 = (longlong)pppppppuStack_b0 * 0x38;
      pppppppuStack_430 = pppppppuStack_b8 + (longlong)pppppppuStack_b0 * 7;
      pppppppuStack_448 = pppppppuStack_b8;
      pppppppuStack_440 = pppppppuStack_b8;
      pppppppuStack_88 = pppppppuStack_c0;
      pppppppuStack_438 = pppppppuStack_c0;
      pppppppuStack_80 = pppppppuStack_b8;
      pppppppuVar13 = pppppppuStack_b8;
      pppppppuStack_188 = pppppppuStack_430;
      if (pppppppuStack_b0 != (ulonglong *******)0x0) {
        pppppppuVar14 = pppppppuStack_b8;
        do {
          pppppppuVar13 = pppppppuVar14 + 7;
          ppppppuStack_458 = pppppppuVar14[1];
          ppppppuStack_450 = pppppppuVar14[2];
          pppppppuStack_440 = pppppppuVar13;
          if (SBORROW8(0,(longlong)*pppppppuVar14)) break;
          ppppppuVar32 = pppppppuVar14[3];
          pppppppuStack_98 = (ulonglong *******)pppppppuVar14[6];
          ppppppuStack_a8 = pppppppuVar14[4];
          pppppppuStack_a0 = (ulonglong *******)pppppppuVar14[5];
          pppppppuStack_f0 = (ulonglong *******)*pppppppuVar14;
          ppppppuStack_e8 = ppppppuStack_458;
          ppppppuStack_e0 = ppppppuStack_450;
          pdb_140f60be0(&pppppppuStack_718,&ppppppuStack_a8);
          pdb_1403b2590(&ppppppuStack_180,lVar16 + 0x150,ppppppuVar32,&pppppppuStack_718);
          if ((!SBORROW8(0,(longlong)ppppppuStack_180)) &&
             (ppppppuStack_180 != (ulonglong ******)0x0)) {
            pub_1406abac0((byte *)pppppppuStack_178,(ulonglong)ppppppuStack_180,1);
          }
          pppppppuStack_718 = (ulonglong *******)&pppppppuStack_f0;
          pppppppuStack_710 = (ulonglong *******)pdb_140001020;
          pppppppuStack_708 = &ppppppuStack_a8;
          apppppppuStack_700[0] = (ulonglong *******)pdb_140001020;
          pdb_140f60760(&ppppppuStack_180,&UNK_142f382f0,&pppppppuStack_718);
          pppppppuStack_718 = (ulonglong *******)ppppppuStack_180;
          pppppppuStack_710 = pppppppuStack_178;
          pppppppuStack_708 = pppppppuStack_170;
          pdb_140acec60(lVar16,&pppppppuStack_718);
          if (ppppppuStack_a8 != (ulonglong ******)0x0) {
            pub_1406abac0((byte *)pppppppuStack_a0,(ulonglong)ppppppuStack_a8,1);
          }
          if (pppppppuStack_f0 != (ulonglong *******)0x0) {
            pub_1406abac0((byte *)ppppppuStack_e8,(ulonglong)pppppppuStack_f0,1);
          }
          lVar30 = lVar30 + -0x38;
          pppppppuVar14 = pppppppuVar13;
        } while (lVar30 != 0);
      }
      ppppppuVar32 = ppppppuStack_f8;
      plVar31 = plStack_190;
      puVar29 = puStack_198;
      param_2 = puStack_1a0;
      uVar18 = (ulonglong)((longlong)pppppppuStack_188 - (longlong)pppppppuVar13) / 0x38;
      if (pppppppuStack_188 != pppppppuVar13) {
        pppppppuVar13 = pppppppuVar13 + 5;
        do {
          if (pppppppuVar13[-5] != (ulonglong ******)0x0) {
            pub_1406abac0((byte *)pppppppuVar13[-4],(ulonglong)pppppppuVar13[-5],1);
          }
          if (pppppppuVar13[-1] != (ulonglong ******)0x0) {
            pub_1406abac0((byte *)*pppppppuVar13,(ulonglong)pppppppuVar13[-1],1);
          }
          pppppppuVar13 = pppppppuVar13 + 7;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      if (pppppppuStack_88 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_80,(longlong)pppppppuStack_88 * 0x38,8);
      }
    }
    ppppppuStack_a8 = param_6;
    pppppppuStack_a0 = param_5;
    uVar17 = pdb_1406d0830(ppppppuVar32);
    pppppppuStack_f0 = (ulonglong *******)pdb_140d5cb40(uVar17);
    uStack_61 = 1;
    pppppppuStack_78 = pppppppuStack_f0;
    uVar17 = pdb_1406d0830(ppppppuVar32);
    LOCK();
    lVar16 = *plVar31;
    *plVar31 = *plVar31 + 1;
    UNLOCK();
    if (*plVar31 != 0 && SCARRY8(lVar16,1) == *plVar31 < 0) {
      uStack_61 = 1;
      pdb_1400ad460(uVar17,plVar31);
      lVar16 = 2;
      if (1 < *puVar29) {
        lVar16 = *puVar29 - 2;
      }
      if (lVar16 == 0) {
        pdb_14007ee60();
        pppppppuStack_110 = (ulonglong *******)pub_1406abab0(10,1);
        if (pppppppuStack_110 == (ulonglong *******)0x0) {
          uStack_61 = 1;
          pdb_142dc7e2a(1,10);
          goto LAB_1402e7b2e;
        }
        *pppppppuStack_110 = (ulonglong ******)0x7469646520646f4d;
        *(undefined2 *)(pppppppuStack_110 + 1) = 0x726f;
        ppppppuStack_118 = (ulonglong ******)0xa;
        pppppppuStack_108 = (ulonglong *******)0xa;
      }
      else if (lVar16 == 1) {
        pdb_14007ee60();
        pppppppuStack_110 = (ulonglong *******)pub_1406abab0(0x13,1);
        ppppppuVar22 = _UNK_142f3830c;
        if (pppppppuStack_110 == (ulonglong *******)0x0) {
          uStack_61 = 1;
          pdb_142dc7e2a(1,0x13);
          goto LAB_1402e7b2e;
        }
        *pppppppuStack_110 = _DAT_142f38304;
        pppppppuStack_110[1] = ppppppuVar22;
        *(undefined4 *)((longlong)pppppppuStack_110 + 0xf) = 0x646f6d20;
        ppppppuStack_118 = (ulonglong ******)0x13;
        pppppppuStack_108 = (ulonglong *******)0x13;
      }
      else {
        pppppppuStack_448 = (ulonglong *******)(puVar29 + 6);
        pppppppuStack_440 = (ulonglong *******)pdb_140001020;
        uStack_61 = 1;
        pdb_140f60760(&pppppppuStack_718,&UNK_142f38317,&pppppppuStack_448);
        ppppppuStack_118 = (ulonglong ******)pppppppuStack_718;
        pppppppuStack_110 = pppppppuStack_710;
        pppppppuStack_108 = pppppppuStack_708;
      }
      pppppppuStack_c0 = (ulonglong *******)CONCAT71(pppppppuStack_c0._1_7_,1);
      uStack_61 = 1;
      pdb_14058f6b0(&pppppppuStack_718,&ppppppuStack_118);
      pppppppuStack_448 = (ulonglong *******)0x452821e638d01376;
      pppppppuStack_440 = (ulonglong *******)0xbe5466cf34e90c6e;
      pppppppuStack_438 = (ulonglong *******)0xc0ac29b7c97c50de;
      pppppppuStack_430 = (ulonglong *******)0x3f84d5b5b5470913;
      lStack_670 = pdb_140572df0(&pppppppuStack_448,&UNK_142f38326,10);
      lStack_670 = lStack_670 + (ulonglong)(lStack_670 == 0);
      pub_142e32760(&pppppppuStack_448,&pppppppuStack_718,0x118);
      uStack_326 = (undefined2)uStack_5f6;
      uStack_324 = (undefined2)((uint)uStack_5f6 >> 0x10);
      uStack_322 = uStack_5f2;
      uStack_318 = (undefined4)uStack_5e8;
      uStack_314 = (undefined4)((ulonglong)uStack_5e8 >> 0x20);
      uStack_310 = (undefined4)uStack_5e0;
      uStack_30c = (uint)((ulonglong)uStack_5e0 >> 0x20);
      uStack_308 = (undefined4)uStack_5d8;
      uStack_304 = (undefined4)((ulonglong)uStack_5d8 >> 0x20);
      uStack_300 = (undefined4)uStack_5d0;
      uStack_2fc = (undefined4)((ulonglong)uStack_5d0 >> 0x20);
      ppppppuStack_2f8 = (ulonglong ******)uStack_5c8;
      ppppppuStack_2f0 = (ulonglong ******)uStack_5c0;
      ppppppuStack_2e8 = (ulonglong ******)uStack_5b8;
      ppppppuStack_2e0 = (ulonglong ******)uStack_5b0;
      ppppppuStack_2d8 = (ulonglong ******)uStack_5a8;
      ppppppuStack_2d0 = (ulonglong ******)uStack_5a0;
      ppppppuStack_2c8 = (ulonglong ******)uStack_598;
      uStack_330 = CONCAT44(uStack_5fc,0x44610000);
      uStack_328 = 0x101;
      pppppppuStack_320 = (ulonglong *******)&pppppppuStack_c0;
      uStack_64 = 1;
      uVar17 = pdb_1406d0830(ppppppuVar32);
      pub_142e32760(&pppppppuStack_718,&pppppppuStack_448,0x188);
      pdb_14007ee60();
      pppppppuStack_70 = (ulonglong *******)pub_1406abab0(0x30,8);
      if (pppppppuStack_70 == (ulonglong *******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      *pppppppuStack_70 = (ulonglong ******)param_2;
      *(undefined8 *)((longlong)pppppppuStack_70 + 8) = param_7;
      *(ulonglong ********)((longlong)pppppppuStack_70 + 0x10) = &ppppppuStack_d8;
      *(ulonglong ********)((longlong)pppppppuStack_70 + 0x18) = &ppppppuStack_a8;
      *(undefined8 *)((longlong)pppppppuStack_70 + 0x20) = param_8;
      *(undefined8 *)((longlong)pppppppuStack_70 + 0x28) = param_9;
      pdb_14058f940(&ppppppuStack_180,&pppppppuStack_718,uVar17,pppppppuStack_70,&UNK_142f383b8);
      if (iStack_140 != 2) {
        LOCK();
        *pppppppuStack_170 = (ulonglong ******)((longlong)*pppppppuStack_170 - 1);
        UNLOCK();
        if (*pppppppuStack_170 == (ulonglong ******)0x0) {
          uStack_61 = 1;
          pdb_140d71bf0(&pppppppuStack_170);
        }
      }
      *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
      uStack_61 = 1;
      lVar16 = pdb_140ad6e60(*param_2);
      if ((lVar16 != 0) && (*(longlong *)(lVar16 + 0x100) != -0x7ffffffffffffffa)) {
        uStack_61 = 1;
        uVar17 = pdb_1406d0830(ppppppuVar32);
        uStack_61 = 1;
        pdb_1405f0710(uVar17,lVar16,&ppppppuStack_a8);
      }
      uStack_61 = 1;
      uVar17 = pdb_1406d0830(ppppppuVar32);
      uStack_61 = 0;
      pdb_1400ad460(uVar17,pppppppuStack_78);
      if ((char)pppppppuStack_c0 != '\x01') {
        *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
        uStack_61 = 0;
        pdb_140ad6e70(*param_2);
      }
      pppppppuVar13 = pppppppuStack_d0;
      if (pppppppuStack_c8 != (ulonglong *******)0x0) {
        pppppppuVar14 = pppppppuStack_d0 + 1;
        pppppppuVar12 = pppppppuStack_c8;
        do {
          ppppppuVar32 = pppppppuVar14[-1];
          if ((-0x7fffffffffffffff < (longlong)ppppppuVar32) &&
             (ppppppuVar32 != (ulonglong ******)0x0)) {
            pub_1406abac0((byte *)*pppppppuVar14,(ulonglong)ppppppuVar32,1);
          }
          pppppppuVar14 = pppppppuVar14 + 3;
          pppppppuVar12 = (ulonglong *******)((longlong)pppppppuVar12 + -1);
        } while (pppppppuVar12 != (ulonglong *******)0x0);
      }
      if (ppppppuStack_d8 == (ulonglong ******)0x0) {
        return;
      }
      pub_1406abac0((byte *)pppppppuVar13,(longlong)ppppppuStack_d8 * 0x18,8);
      return;
    }
    goto LAB_1402e7b2e;
  }
  pppppppuVar13 = (ulonglong *******)pdb_1406d0830(ppppppuVar32);
  pdb_140d84d00(&ppppppuStack_180);
  pdb_14007ee60();
  pppppppuVar14 = (ulonglong *******)pub_1406abab0(7,1);
  if (pppppppuVar14 == (ulonglong *******)0x0) {
    uStack_62 = 1;
    pdb_142dc7e2a(1,7);
    goto LAB_1402e7b2e;
  }
  *(undefined4 *)((longlong)pppppppuVar14 + 3) = 0x32206f6f;
  *(uint *)pppppppuVar14 = 0x6f6c6142;
  pppppppuVar15 = _UNK_142e6ad88;
  pppppppuVar12 = _DAT_142e6ad80;
  ppppppuStack_a8 = (ulonglong ******)0x7;
  pppppppuStack_98 = (ulonglong *******)0x7;
  pppppppuStack_718 = (ulonglong *******)0x8000000000000000;
  pppppppuStack_710 = (ulonglong *******)&UNK_142e6b0e4;
  pppppppuStack_708 = (ulonglong *******)0x66888;
  apppppppuStack_700[2] = (ulonglong *******)((ulonglong)apppppppuStack_700[2] & 0xffffffff00000000)
  ;
  apppppppuStack_700[0] = _DAT_142e6ad80;
  apppppppuStack_700[1] = _UNK_142e6ad88;
  uStack_62 = 1;
  pppppppuStack_a0 = pppppppuVar14;
  pdb_14057dd60(&pppppppuStack_448,&ppppppuStack_180,&ppppppuStack_a8,&pppppppuStack_718);
  if (((pppppppuStack_448 != (ulonglong *******)0x8000000000000001) &&
      (!SBORROW8(0,(longlong)pppppppuStack_448))) && (pppppppuStack_448 != (ulonglong *******)0x0))
  {
    pub_1406abac0((byte *)pppppppuStack_440,(ulonglong)pppppppuStack_448,1);
  }
  pdb_14007ee60();
  pppppppuVar14 = (ulonglong *******)pub_1406abab0(0x10,1);
  ppppppuVar22 = _UNK_142e6ae10;
  if (pppppppuVar14 == (ulonglong *******)0x0) {
    uStack_62 = 1;
    pdb_142dc7e2a(1,0x10);
    goto LAB_1402e7b2e;
  }
  *pppppppuVar14 = _DAT_142e6ae08;
  pppppppuVar14[1] = ppppppuVar22;
  ppppppuStack_a8 = (ulonglong ******)0x10;
  pppppppuStack_98 = (ulonglong *******)0x10;
  pppppppuStack_718 = (ulonglong *******)0x8000000000000000;
  pppppppuStack_710 = (ulonglong *******)&UNK_142ed196c;
  pppppppuStack_708 = (ulonglong *******)0x6696c;
  apppppppuStack_700[2] = (ulonglong *******)((ulonglong)apppppppuStack_700[2] & 0xffffffff00000000)
  ;
  apppppppuStack_700[0] = pppppppuVar12;
  apppppppuStack_700[1] = pppppppuVar15;
  uStack_62 = 1;
  pppppppuStack_a0 = pppppppuVar14;
  pdb_14057dd60(&pppppppuStack_448,&ppppppuStack_180,&ppppppuStack_a8,&pppppppuStack_718);
  if (((pppppppuStack_448 != (ulonglong *******)0x8000000000000001) &&
      (!SBORROW8(0,(longlong)pppppppuStack_448))) && (pppppppuStack_448 != (ulonglong *******)0x0))
  {
    pub_1406abac0((byte *)pppppppuStack_440,(ulonglong)pppppppuStack_448,1);
  }
  pppppppuStack_70 = pppppppuVar13;
  if (pppppppuStack_168 == (ulonglong *******)0x0) {
LAB_1402e6b89:
    ppppppuStack_d8 = (ulonglong ******)0x0;
    pppppppuStack_d0 = (ulonglong *******)0x8;
    pppppppuStack_c8 = (ulonglong *******)0x0;
  }
  else {
    uStack_62 = 1;
    pdb_1403b8150(&pppppppuStack_718,pppppppuStack_168,pppppppuStack_160,&UNK_142f382d8);
    if ((int)pppppppuStack_718 == 1) goto LAB_1402e6b89;
    uStack_62 = 1;
    pdb_140174e40(&pppppppuStack_718,pppppppuStack_710 + (longlong)apppppppuStack_700[0] * 3 + 0x22)
    ;
    if (SBORROW8(0,(longlong)pppppppuStack_718)) goto LAB_1402e6b89;
    pppppppuStack_c8 = pppppppuStack_708;
    ppppppuStack_d8 = (ulonglong ******)pppppppuStack_718;
    pppppppuStack_d0 = pppppppuStack_710;
  }
  pppppppuStack_708 = (ulonglong *******)&UNK_142e6ae18;
  apppppppuStack_700[0] = (ulonglong *******)0x7;
  apppppppuStack_700[1] = (ulonglong *******)&DAT_142e6ae08;
  apppppppuStack_700[2] = (ulonglong *******)0x10;
  lVar16 = 0;
  pppppppuStack_78 = (ulonglong *******)CONCAT71(pppppppuStack_78._1_7_,1);
  do {
    ppppppuVar22 = (ulonglong ******)(&pppppppuStack_708)[lVar16 * 2];
    pppppppuVar13 = apppppppuStack_700[lVar16 * 2];
    pdb_14007ee60();
    pppppppuVar14 = (ulonglong *******)pub_1406abab0(0x18,8);
    if (pppppppuVar14 == (ulonglong *******)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x18);
    }
    lVar16 = lVar16 + 1;
    if ((longlong)pppppppuVar13 < 0) {
      uVar17 = 0;
LAB_1402e6eba:
      pppppppuStack_70 = pppppppuVar14;
      pdb_142dc7e2a(uVar17,unaff_R15);
      goto LAB_1402e7b2e;
    }
    if (pppppppuVar13 == (ulonglong *******)0x0) {
      unaff_R15 = (ulonglong *******)0x1;
    }
    else {
      pdb_14007ee60();
      unaff_R15 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar13,1);
      if (unaff_R15 == (ulonglong *******)0x0) {
        uVar17 = 1;
        unaff_R15 = pppppppuVar13;
        goto LAB_1402e6eba;
      }
      pub_142e32760(unaff_R15,ppppppuVar22,pppppppuVar13);
    }
    pppppppuVar15 = pppppppuStack_c8;
    pppppppuVar12 = pppppppuStack_d0;
    pppppppuVar19 = (ulonglong *******)0x1;
    *pppppppuVar14 = (ulonglong ******)pppppppuVar13;
    pppppppuVar14[1] = (ulonglong ******)unaff_R15;
    pppppppuVar14[2] = (ulonglong ******)pppppppuVar13;
    pppppppuStack_c0 = (ulonglong *******)0x1;
    pppppppuStack_b0 = (ulonglong *******)0x1;
    ppppppuStack_f8 = ppppppuVar32;
    pppppppuStack_b8 = pppppppuVar14;
    if (pppppppuStack_c8 != (ulonglong *******)0x0) {
      uStack_63 = 1;
      pdb_142d7f1b0(&pppppppuStack_c0,1,pppppppuStack_c8,8,0x18);
      pppppppuStack_88 = pppppppuStack_b0;
      pppppppuVar14 = pppppppuStack_b8 + (longlong)pppppppuStack_b0 * 3;
      pppppppuStack_80 = (ulonglong *******)0x0;
      do {
        pdb_140f60be0(&pppppppuStack_448,pppppppuVar12);
        pppppppuVar14[2] = (ulonglong ******)pppppppuStack_438;
        *pppppppuVar14 = (ulonglong ******)pppppppuStack_448;
        pppppppuVar14[1] = (ulonglong ******)pppppppuStack_440;
        pppppppuStack_80 = (ulonglong *******)((longlong)pppppppuStack_80 + -1);
        pppppppuVar14 = pppppppuVar14 + 3;
        pppppppuVar12 = pppppppuVar12 + 3;
      } while ((ulonglong *******)-(longlong)pppppppuStack_80 != pppppppuVar15);
      pppppppuVar19 = (ulonglong *******)((longlong)pppppppuStack_88 - (longlong)pppppppuStack_80);
    }
    uStack_63 = 1;
    pppppppuVar14 = pppppppuVar13;
    pppppppuStack_b0 = pppppppuVar19;
    pppppppuVar15 = (ulonglong *******)pdb_140f606e0(1);
    pppppppuVar12 = pppppppuVar15;
    if (pppppppuVar14 != (ulonglong *******)0x0) {
      pdb_14007ee60();
      pppppppuVar12 =
           (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar14,(ulonglong)pppppppuVar15);
    }
    if (pppppppuVar12 == (ulonglong *******)0x0) {
      uStack_63 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(pppppppuVar15,pppppppuVar14);
    }
    *pppppppuVar12 = (ulonglong ******)0x1;
    pppppppuVar12[1] = (ulonglong ******)0x1;
    pub_142e32760(pppppppuVar12 + 2,ppppppuVar22,pppppppuVar13);
    ppppppuStack_a8 = (ulonglong ******)0x2;
    pppppppuStack_438 = pppppppuStack_b0;
    pppppppuStack_448 = pppppppuStack_c0;
    pppppppuStack_440 = pppppppuStack_b8;
    uStack_63 = 0;
    pppppppuStack_a0 = pppppppuVar12;
    pppppppuStack_98 = pppppppuVar13;
    pdb_14057e110(&pppppppuStack_f0,&pppppppuStack_168,&ppppppuStack_a8,&pppppppuStack_448);
    ppppppuVar32 = ppppppuStack_e8;
    pppppppuVar13 = pppppppuStack_f0;
    if (!SBORROW8(0,(longlong)pppppppuStack_f0)) {
      if (ppppppuStack_e0 != (ulonglong ******)0x0) {
        ppppppuVar22 = ppppppuStack_e8 + 1;
        ppppppuVar24 = ppppppuStack_e0;
        do {
          if (ppppppuVar22[-1] != (ulonglong *****)0x0) {
            pub_1406abac0((byte *)*ppppppuVar22,(ulonglong)ppppppuVar22[-1],1);
          }
          ppppppuVar22 = ppppppuVar22 + 3;
          ppppppuVar24 = (ulonglong ******)((longlong)ppppppuVar24 - 1);
        } while (ppppppuVar24 != (ulonglong ******)0x0);
      }
      pppppppuVar14 = (ulonglong *******)0x0;
      if (pppppppuVar13 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)ppppppuVar32,(longlong)pppppppuVar13 * 0x18,8);
      }
    }
    ppppppuVar32 = ppppppuStack_f8;
    pppppppuStack_78 = (ulonglong *******)CONCAT71(pppppppuStack_78._1_7_,lVar16 != 2);
  } while (lVar16 != 2);
  apppppppuStack_700[1] = pppppppuStack_160;
  apppppppuStack_700[2] = pppppppuStack_158;
  pppppppuStack_708 = pppppppuStack_170;
  apppppppuStack_700[0] = pppppppuStack_168;
  pppppppuStack_718 = (ulonglong *******)ppppppuStack_180;
  pppppppuStack_710 = pppppppuStack_178;
  pppppppuVar13 = (ulonglong *******)&pppppppuStack_718;
  pdb_140d6c4f0(pppppppuStack_70);
  pppppppuVar12 = pppppppuStack_d0;
  if (pppppppuStack_c8 != (ulonglong *******)0x0) {
    pppppppuVar14 = pppppppuStack_d0 + 1;
    pppppppuVar15 = pppppppuStack_c8;
    do {
      pppppppuVar13 = (ulonglong *******)pppppppuVar14[-1];
      if (pppppppuVar13 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)*pppppppuVar14,(ulonglong)pppppppuVar13,1);
      }
      pppppppuVar14 = pppppppuVar14 + 3;
      pppppppuVar15 = (ulonglong *******)((longlong)pppppppuVar15 + -1);
    } while (pppppppuVar15 != (ulonglong *******)0x0);
  }
  if (ppppppuStack_d8 != (ulonglong ******)0x0) {
    pppppppuVar13 = (ulonglong *******)((longlong)ppppppuStack_d8 * 0x18);
    pub_1406abac0((byte *)pppppppuVar12,(ulonglong)pppppppuVar13,8);
  }
  pppppppuVar12 = (ulonglong *******)pdb_1406d0830(ppppppuVar32);
  pppppppuVar15 = (ulonglong *******)pdb_140d5cb40();
  ppppppuVar22 = pppppppuVar15[9];
  pppppppuStack_f0 = pppppppuVar15;
  if (ppppppuVar22 < (ulonglong ******)0x5) {
LAB_1402e7a36:
    ppppppuVar24 = pppppppuVar15[2];
    ppppppuStack_a8 = ppppppuVar22;
    pppppppuStack_a0 = pppppppuVar13;
    pppppppuStack_98 = pppppppuVar12;
    if (ppppppuVar24 == (ulonglong ******)0x3) goto LAB_1402e7a55;
LAB_1402e7a8e:
    uVar21 = *(uint *)(pppppppuVar15 + 5);
    if ((int)ppppppuVar24 == 2) {
      pppppppuVar13 = (ulonglong *******)pppppppuVar15[3];
      pppppppuVar12 = (ulonglong *******)pppppppuVar15[4];
      LOCK();
      ppppppuVar22 = *pppppppuVar13;
      *pppppppuVar13 = (ulonglong ******)((longlong)*pppppppuVar13 + 1);
      UNLOCK();
      if (*pppppppuVar13 == (ulonglong ******)0x0 ||
          SCARRY8((longlong)ppppppuVar22,1) != (longlong)*pppppppuVar13 < 0) goto LAB_1402e7b2e;
    }
    apppppppuStack_700[0] = (ulonglong *******)CONCAT44(apppppppuStack_700[0]._4_4_,uVar21);
    bVar34 = ppppppuVar24 < (ulonglong ******)0x2;
    pppppppuStack_718 = (ulonglong *******)ppppppuVar24;
    pppppppuStack_710 = pppppppuVar13;
    pppppppuStack_708 = pppppppuVar12;
  }
  else {
    if ((int)ppppppuVar22 == 5) {
      pppppppuVar13 = (ulonglong *******)pppppppuVar15[10];
      pppppppuVar12 = (ulonglong *******)pppppppuVar15[0xb];
      LOCK();
      ppppppuVar24 = *pppppppuVar13;
      *pppppppuVar13 = (ulonglong ******)((longlong)*pppppppuVar13 + 1);
      UNLOCK();
      if (*pppppppuVar13 == (ulonglong ******)0x0 ||
          SCARRY8((longlong)ppppppuVar24,1) != (longlong)*pppppppuVar13 < 0) goto LAB_1402e7b2e;
      goto LAB_1402e7a36;
    }
    ppppppuStack_a8 = (ulonglong ******)0x6;
    ppppppuVar24 = pppppppuVar15[2];
    if (ppppppuVar24 != (ulonglong ******)0x3) goto LAB_1402e7a8e;
LAB_1402e7a55:
    pppppppuStack_718 = (ulonglong *******)0x3;
    bVar34 = true;
  }
  if (pppppppuVar15[0x52] == (ulonglong ******)0x0) {
    ppppppuStack_180 = (ulonglong ******)0x0;
    pppppppuStack_170 = (ulonglong *******)0x0;
  }
  else {
    pppppppuStack_78 = (ulonglong *******)CONCAT71(pppppppuStack_78._1_7_,bVar34);
    pppppppuStack_70 = pppppppuVar13;
    if (pppppppuVar15[0x50] == (ulonglong ******)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f6c700);
    }
    pdb_140580b30(&ppppppuStack_180,pppppppuVar15[0x50],pppppppuVar15[0x51]);
  }
  ppppppuVar22 = pppppppuVar15[6];
  if (ppppppuVar22 == (ulonglong ******)0x5) {
    ppppppuVar32 = pppppppuVar15[7];
    pppppppuVar14 = (ulonglong *******)pppppppuVar15[8];
    LOCK();
    pppppuVar2 = *ppppppuVar32;
    *ppppppuVar32 = (ulonglong *****)((longlong)*ppppppuVar32 + 1);
    UNLOCK();
    if (*ppppppuVar32 == (ulonglong *****)0x0 ||
        SCARRY8((longlong)pppppuVar2,1) != (longlong)*ppppppuVar32 < 0) {
LAB_1402e7b2e:
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
  }
  pub_142e32760(auStack_278,pppppppuVar15 + 0x3c,0xa0);
  ppppppuStack_1c0 = pppppppuVar15[0x53];
  ppppppuStack_1b8 = pppppppuVar15[0x54];
  uStack_1b0 = *(uint *)(pppppppuVar15 + 0x55);
  uVar4 = *(undefined1 *)(pppppppuVar15 + 0x3a);
  uStack_283 = *(undefined *)((longlong)pppppppuVar15 + 0x1d5);
  uStack_287 = *(undefined4 *)((longlong)pppppppuVar15 + 0x1d1);
  pub_142e32760(&uStack_3f0,pppppppuVar15 + 0xd,0xdc);
  fVar9 = _DAT_142e37838;
  uStack_30c = *(uint *)((longlong)pppppppuVar15 + 0x14c);
  uStack_314 = (undefined4)*(undefined8 *)((longlong)pppppppuVar15 + 0x144);
  uStack_310 = (undefined4)((ulonglong)*(undefined8 *)((longlong)pppppppuVar15 + 0x144) >> 0x20);
  ppppppuStack_2f8 = pppppppuVar15[0x2c];
  ppppppuStack_2f0 = pppppppuVar15[0x2d];
  ppppppuStack_2e8 = pppppppuVar15[0x2e];
  ppppppuStack_2e0 = pppppppuVar15[0x2f];
  ppppppuStack_2d8 = pppppppuVar15[0x30];
  ppppppuStack_2d0 = pppppppuVar15[0x31];
  ppppppuStack_2c8 = pppppppuVar15[0x32];
  ppppppuStack_2c0 = pppppppuVar15[0x33];
  ppppppuStack_2b8 = pppppppuVar15[0x34];
  uStack_2b0 = *(uint *)(pppppppuVar15 + 0x35);
  uStack_29c = *(uint *)((longlong)pppppppuVar15 + 0x1bc);
  uStack_2ac = *(undefined8 *)((longlong)pppppppuVar15 + 0x1ac);
  uStack_2a4 = *(undefined8 *)((longlong)pppppppuVar15 + 0x1b4);
  uStack_298 = *(uint *)(pppppppuVar15 + 0x38);
  uStack_294 = *(undefined8 *)((longlong)pppppppuVar15 + 0x1c4);
  uStack_28c = *(uint *)((longlong)pppppppuVar15 + 0x1cc);
  uStack_3f8 = *(uint *)(pppppppuVar15 + 0xc);
  uStack_3f4 = *(uint *)((longlong)pppppppuVar15 + 100);
  uStack_27a = *(undefined2 *)((longlong)pppppppuVar15 + 0x1de);
  uStack_1ac = *(uint *)((longlong)pppppppuVar15 + 0x2ac);
  ppppppuStack_410 = ppppppuStack_a8;
  pppppppuStack_408 = pppppppuStack_a0;
  pppppppuStack_400 = pppppppuStack_98;
  pppppppuStack_448 = pppppppuStack_718;
  pppppppuStack_440 = pppppppuStack_710;
  pppppppuStack_438 = pppppppuStack_708;
  pppppppuStack_430 = apppppppuStack_700[0];
  ppppppuStack_1d8 = ppppppuStack_180;
  pppppppuStack_1d0 = pppppppuStack_178;
  pppppppuStack_1c8 = pppppppuStack_170;
  uStack_308 = SUB84(pppppppuVar15[0x2a],0);
  uStack_304 = (undefined4)((ulonglong)pppppppuVar15[0x2a] >> 0x20);
  uStack_300 = SUB84(pppppppuVar15[0x2b],0);
  uStack_2fc = (undefined4)((ulonglong)pppppppuVar15[0x2b] >> 0x20);
  uStack_282 = *(undefined8 *)((longlong)pppppppuVar15 + 0x1d6);
  uStack_1a8 = *(uint *)(pppppppuVar15 + 0x56);
  bVar34 = ppppppuStack_180 != (ulonglong ******)0x0;
  pppppppuVar13 = (ulonglong *******)0x0;
  if (bVar34) {
    pppppppuVar13 = pppppppuStack_170;
  }
  ppppppuVar33 = (ulonglong ******)0x0;
  ppppppuVar24 = ppppppuStack_180;
  pppppppuVar12 = pppppppuStack_178;
  ppppppuStack_428 = ppppppuVar22;
  ppppppuStack_420 = ppppppuVar32;
  pppppppuStack_418 = pppppppuVar14;
  uStack_288 = uVar4;
  do {
    if (pppppppuVar13 == (ulonglong *******)0x0) {
      fStack_258 = fStack_258 * _DAT_142e6ad90;
      fStack_254 = fStack_254 * _UNK_142e6ad94;
      fStack_250 = fStack_250 * _UNK_142e6ad98;
      fStack_24c = fStack_24c * _UNK_142e6ad9c;
      uStack_248 = CONCAT44((float)((ulonglong)uStack_248 >> 0x20) * _UNK_142e6ada4,
                            (float)uStack_248 * _DAT_142e6ada0);
      uStack_287 = 0xffffff01;
      uStack_283 = 0xff;
      uStack_2b0 = 0xe81a1a1a;
      ppppppuStack_2f0 = (ulonglong ******)_DAT_142e6adb0;
      ppppppuStack_2e8 = (ulonglong ******)_UNK_142e6adb8;
      ppppppuStack_2c8 = (ulonglong ******)0x0;
      ppppppuStack_2d0 = (ulonglong ******)0xe81a1a1a60000000;
      uStack_2fc = 0x60000000;
      uStack_30c = (uint)_DAT_142e6adc0;
      uStack_308 = (undefined4)((ulonglong)_DAT_142e6adc0 >> 0x20);
      uStack_304 = (undefined4)_UNK_142e6adc8;
      uStack_300 = (undefined4)((ulonglong)_UNK_142e6adc8 >> 0x20);
      uStack_314 = 0x3f800000;
      uStack_310 = 0xffffffff;
      uStack_3d4 = 0xffffffff;
      uStack_3e0 = 0;
      uStack_3f0 = _DAT_142e6add0;
      uStack_3e8 = _UNK_142e6add8;
      uStack_3a8 = 0xffffffff;
      uStack_3b4 = 0;
      uStack_3c4 = _DAT_142e6add0;
      uStack_3bc = _UNK_142e6add8;
      uStack_37c = 0xffffffff;
      uStack_388 = 0;
      uStack_398 = _DAT_142e6add0;
      uStack_390 = _UNK_142e6add8;
      uStack_350 = 0xffffffff;
      uStack_35c = 0;
      uStack_36c = _DAT_142e6add0;
      uStack_364 = _UNK_142e6add8;
      uStack_324 = 0xffff;
      uStack_322 = 0xffff;
      uStack_330 = 0;
      uStack_340 = _DAT_142e6add0;
      uStack_338 = _UNK_142e6add8;
      uStack_3d0 = 0x808080808080808;
      uStack_3a4 = 0x5030303060000000;
      uStack_378 = 0x5838383858383838;
      uStack_34c = 0x6048484860484848;
      pppppppuStack_320 = (ulonglong *******)0x5838383858383838;
      pub_142e32760(&pppppppuStack_708,&pppppppuStack_448,0x2a8);
      pppppppuStack_718 = (ulonglong *******)0x1;
      pppppppuStack_710 = (ulonglong *******)0x1;
      pdb_14007ee60();
      pbVar20 = pub_1406abab0(0x2b8,8);
      if (pbVar20 != (byte *)0x0) {
        pppppppuStack_78 = (ulonglong *******)pbVar20;
        pub_142e32760(pbVar20,&pppppppuStack_718,0x2b8);
        plVar31 = (longlong *)*param_10;
        if (plVar31 != (longlong *)0x0) {
          LOCK();
          *plVar31 = *plVar31 + -1;
          UNLOCK();
          if (*plVar31 == 0) {
            pdb_140d727a0(param_10);
          }
        }
        *param_10 = pppppppuStack_78;
        LOCK();
        *pppppppuStack_f0 = (ulonglong ******)((longlong)*pppppppuStack_f0 - 1);
        UNLOCK();
        if (*pppppppuStack_f0 == (ulonglong ******)0x0) {
          pdb_140d727a0(&pppppppuStack_f0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x2b8);
    }
    if (!bVar34) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f6c650);
    }
    if (ppppppuVar33 == (ulonglong ******)0x0) {
      ppppppuVar32 = ppppppuVar24;
      if (pppppppuVar12 != (ulonglong *******)0x0) {
        pppppppuVar14 = pppppppuVar12;
        if (((ulonglong)pppppppuVar12 & 7) != 0) {
          uVar18 = 0;
          do {
            ppppppuVar24 = (ulonglong ******)ppppppuVar24[0x4f];
            uVar18 = uVar18 + 1;
          } while (((ulonglong)pppppppuVar12 & 7) != uVar18);
          pppppppuVar14 = (ulonglong *******)((longlong)pppppppuVar12 - uVar18);
        }
        ppppppuVar32 = ppppppuVar24;
        if ((ulonglong *******)0x7 < pppppppuVar12) {
          do {
            ppppppuVar24 = *(ulonglong *******)
                            (*(longlong *)(ppppppuVar24[0x4f][0x4f][0x4f][0x4f][0x4f][0x4f] + 0x278)
                            + 0x278);
            pppppppuVar14 = pppppppuVar14 + -1;
            ppppppuVar32 = ppppppuVar24;
          } while (pppppppuVar14 != (ulonglong *******)0x0);
        }
      }
      pppppppuVar14 = (ulonglong *******)0x0;
      ppppppuVar24 = (ulonglong ******)0x0;
      if (*(short *)((longlong)ppppppuVar32 + 0x272) == 0) goto LAB_1402e7e80;
    }
    else {
      pppppppuVar14 = pppppppuVar12;
      ppppppuVar32 = ppppppuVar33;
      if ((ulonglong *******)(ulonglong)*(ushort *)((longlong)ppppppuVar33 + 0x272) <= pppppppuVar12
         ) {
LAB_1402e7e80:
        do {
          ppppppuVar22 = (ulonglong ******)ppppppuVar32[0x2c];
          if (ppppppuVar22 == (ulonglong ******)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_142f6c620);
          }
          ppppppuVar24 = (ulonglong ******)((longlong)ppppppuVar24 + 1);
          ppppppuVar33 = ppppppuVar32 + 0x4e;
          pppppppuVar14 = (ulonglong *******)(ulonglong)*(ushort *)ppppppuVar33;
          ppppppuVar32 = ppppppuVar22;
        } while (*(ushort *)((longlong)ppppppuVar22 + 0x272) <= *(ushort *)ppppppuVar33);
      }
    }
    ppppppuVar33 = ppppppuVar32;
    if (ppppppuVar24 == (ulonglong ******)0x0) {
      pppppppuVar12 = (ulonglong *******)((longlong)pppppppuVar14 + 1);
    }
    else {
      ppppppuVar22 = ppppppuVar32 + (longlong)(pppppppuVar14 + 10);
      ppppppuVar23 = ppppppuVar24;
      if (((ulonglong)ppppppuVar24 & 7) != 0) {
        uVar18 = 0;
        do {
          ppppppuVar33 = (ulonglong ******)*ppppppuVar22;
          ppppppuVar22 = ppppppuVar33 + 0x4f;
          uVar18 = uVar18 + 1;
        } while (((ulonglong)ppppppuVar24 & 7) != uVar18);
        ppppppuVar23 = (ulonglong ******)((longlong)ppppppuVar24 - uVar18);
      }
      if ((ulonglong ******)0x7 < ppppppuVar24) {
        do {
          ppppppuVar33 = *(ulonglong *******)
                          (*(longlong *)((*ppppppuVar22)[0x4f][0x4f][0x4f][0x4f][0x4f] + 0x278) +
                          0x278);
          ppppppuVar22 = ppppppuVar33 + 0x4f;
          ppppppuVar23 = ppppppuVar23 + -1;
        } while (ppppppuVar23 != (ulonglong ******)0x0);
      }
      pppppppuVar12 = (ulonglong *******)0x0;
    }
    *(float *)(ppppppuVar32 + (longlong)pppppppuVar14 * 4 + 3) =
         *(float *)(ppppppuVar32 + (longlong)pppppppuVar14 * 4 + 3) * fVar9;
    pppppppuVar15 =
         (ulonglong *******)
         ((ulonglong)((longlong)ppppppuVar32[(longlong)pppppppuVar14 * 3 + 0x2d] - 3U < 2) * 9 + 7);
    pppppppuStack_80 = (ulonglong *******)((longlong)pppppppuVar13 + -1);
    pppppppuStack_78 = pppppppuVar15;
    arg1 = (ulonglong *******)pdb_140f606e0(1);
    pppppppuVar19 = arg1;
    pppppppuVar13 = pppppppuStack_88;
    if (pppppppuVar15 != (ulonglong *******)0x0) {
      pdb_14007ee60();
      pppppppuVar19 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar15,(ulonglong)arg1);
      pppppppuVar13 = pppppppuStack_88;
    }
    pppppppuStack_88 = pppppppuVar19;
    if (pppppppuStack_88 == (ulonglong *******)0x0) {
      pppppppuStack_88 = pppppppuVar13;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(arg1,pppppppuVar15);
    }
    pppppppuVar13 = (ulonglong *******)(ppppppuVar32 + (longlong)pppppppuVar14 * 4);
    *pppppppuStack_88 = (ulonglong ******)0x1;
    pppppppuStack_88[1] = (ulonglong ******)0x1;
    pub_142e32760(pppppppuStack_88 + 2);
    pppppppuStack_70 = pppppppuVar13;
    if (1 < *(uint *)pppppppuVar13) {
      ppppppuVar32 = pppppppuVar13[1];
      LOCK();
      *ppppppuVar32 = (ulonglong *****)((longlong)*ppppppuVar32 - 1);
      UNLOCK();
      if (*ppppppuVar32 == (ulonglong *****)0x0) {
        pdb_1406ed6a0(pppppppuVar13 + 1);
      }
    }
    *pppppppuStack_70 = (ulonglong ******)0x2;
    pppppppuStack_70[1] = (ulonglong ******)pppppppuStack_88;
    pppppppuStack_70[2] = (ulonglong ******)pppppppuStack_78;
    bVar34 = true;
    ppppppuVar24 = (ulonglong ******)0x0;
    pppppppuVar13 = pppppppuStack_80;
  } while( true );
}

