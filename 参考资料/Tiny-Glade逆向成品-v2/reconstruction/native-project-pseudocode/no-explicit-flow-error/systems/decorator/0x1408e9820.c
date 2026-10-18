// VA 0x1408e9820, PDB extent 4384 bytes
// system_decorator::move_decorators_following_anchors::move_decorators_following_anchors
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/move_decorators_following_anchors.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::move_decorators_following_anchors::move_decorators_following_anchors
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/move_decorators_following_anchors.rs
   Extent: 4384 */

void pdb_1408e9820(undefined1 (*param_1) [16],longlong *param_2,undefined8 *param_3,
                  undefined8 *param_4,undefined8 *param_5,longlong *param_6,longlong *param_7,
                  longlong *param_8,undefined8 param_9)

{
  byte *pbVar1;
  undefined1 (**ppauVar2) [16];
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  undefined1 (**ppauVar25) [16];
  ulonglong uVar26;
  undefined8 *puVar27;
  undefined1 (**ppauVar28) [16];
  undefined1 (**ppauVar29) [16];
  undefined8 *puVar30;
  undefined1 (**ppauVar31) [16];
  undefined *puVar32;
  undefined *puVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  ushort uVar37;
  longlong lVar38;
  undefined1 (*pauVar39) [16];
  undefined8 *puVar40;
  undefined8 *puVar41;
  char cVar42;
  undefined1 (***pppauVar43) [16];
  byte bVar44;
  float fVar45;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
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
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  undefined4 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 (*pauStack_1b0) [16];
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  undefined1 (**ppauStack_198) [16];
  code *pcStack_190;
  undefined8 uStack_188;
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined *puStack_170;
  ushort uStack_168;
  longlong lStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 (**ppauStack_140) [16];
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  ulonglong *puStack_108;
  longlong *plStack_100;
  undefined1 auStack_f3 [3];
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar23 = param_2;
  puStack_1b8 = param_4;
  puStack_108 = param_3;
  uVar18 = pdb_140e94b40();
  pppauVar43 = (undefined1 (***) [16])(ulonglong)uVar18;
  cVar42 = '\0';
  if ((char)uVar18 == '\0') goto LAB_1408e9a25;
  ppauVar31 = (undefined1 (**) [16])0x56;
  lVar21 = pdb_1408ea940(0x56);
  puVar41 = (undefined8 *)&UNK_14301c208;
  if (lVar21 == 1) {
    if ((longlong *)0x56 < plVar23) {
LAB_1408ea626:
      pdb_142dc8070(&UNK_14301c208,0x56,0);
LAB_1408ea646:
      pdb_142dc8070(&UNK_14301c208,0x56);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar22 = pdb_1408ea940(plVar23);
    if ((uVar22 & 1) != 0) {
      if (0x56 < (longlong)plVar23 + 2U) goto LAB_1408ea646;
      ppauVar31 = (undefined1 (**) [16])(0x54 - (longlong)plVar23);
      puVar41 = (undefined8 *)((longlong)plVar23 + 0x14301c20a);
    }
  }
  puVar32 = &UNK_14301c0eb;
  pauVar39 = (undefined1 (*) [16])&UNK_14301c0aa;
  do {
    bVar44 = puVar32[-1];
    uVar18 = (uint)(char)bVar44;
    if ((char)bVar44 < '\0') {
      bVar4 = puVar32[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar32[-3];
        if ((char)bVar5 < -0x40) {
          pbVar1 = puVar32 + -4;
          puVar32 = puVar32 + -4;
          uVar18 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar32 = puVar32 + -3;
          uVar18 = bVar5 & 0xf;
        }
        uVar18 = bVar4 & 0x3f | uVar18 << 6;
      }
      else {
        puVar32 = puVar32 + -2;
        uVar18 = bVar4 & 0x1f;
      }
      uVar18 = (uint)(bVar44 & 0x3f) | uVar18 << 6;
      if (uVar18 != 0x5c) goto LAB_1408e9994;
LAB_1408e99a5:
      puVar33 = puVar32 + -0x14301c0a9;
      if ((undefined *)0x41 < puVar33) {
        pdb_142dc8070(&UNK_14301c0aa,0x41,puVar33,0x41,&UNK_14301c2b8);
        goto LAB_1408ea626;
      }
      uVar22 = 0x41 - (longlong)puVar33;
      pauVar39 = (undefined1 (*) [16])(puVar32 + 1);
      goto LAB_1408e99c7;
    }
    puVar32 = puVar32 + -1;
    if (uVar18 == 0x5c) goto LAB_1408e99a5;
LAB_1408e9994:
    if (uVar18 == 0x2f) goto LAB_1408e99a5;
  } while (puVar32 != &UNK_14301c0aa);
  uVar22 = 0x41;
LAB_1408e99c7:
  plVar23 = (longlong *)pdb_140e97000();
  if ((char)plVar23[0xd] != '\x01') goto LAB_1408ea559;
LAB_1408e99d6:
  cVar42 = (char)pppauVar43;
  if (*plVar23 != 0) goto LAB_1408ea54d;
  *plVar23 = -1;
  plStack_100 = plVar23;
  uStack_150 = pdb_140e94f10(plVar23 + 1,puVar41,ppauVar31,pauVar39,uVar22,1,0);
  *plStack_100 = *plStack_100 + 1;
LAB_1408e9a25:
  auStack_f3[2] = cVar42;
  puVar7 = (ulonglong *)*param_2;
  lVar21 = param_2[1];
  uVar22 = *puVar7;
  uVar34 = 0;
  uVar26 = uVar22 - *(ulonglong *)(lVar21 + 0x18);
  if (uVar22 < *(ulonglong *)(lVar21 + 0x18)) {
    uVar26 = uVar34;
  }
  uVar36 = uVar22 - *(ulonglong *)(lVar21 + 0x38);
  if (uVar22 < *(ulonglong *)(lVar21 + 0x38)) {
    uVar36 = uVar34;
  }
  puVar24 = (undefined8 *)(uVar26 * 0x10 + *(longlong *)(lVar21 + 8));
  uVar22 = *(ulonglong *)(lVar21 + 0x10) - uVar26;
  if (*(ulonglong *)(lVar21 + 0x10) < uVar26) {
    puVar24 = (undefined8 *)0x8;
    uVar22 = uVar34;
  }
  puVar41 = (undefined8 *)(uVar36 * 0x10 + *(longlong *)(lVar21 + 0x28));
  uVar26 = *(ulonglong *)(lVar21 + 0x30) - uVar36;
  if (*(ulonglong *)(lVar21 + 0x30) < uVar36) {
    puVar41 = (undefined8 *)0x8;
    uVar26 = uVar34;
  }
  *puVar7 = (*(longlong *)(lVar21 + 0x40) - uVar26) - uVar22;
  puVar30 = puVar41 + uVar26 * 2;
  plStack_118 = (longlong *)CONCAT44(plStack_118._4_4_,*(undefined4 *)((longlong)param_8 + 0x1c));
  lVar21 = *param_8;
  plStack_110 = (longlong *)param_8[2];
  puVar27 = puVar24;
  pauStack_1b0 = param_1;
  plStack_100 = (longlong *)lVar21;
  do {
    if ((puVar27 == (undefined8 *)0x0) || (puVar27 == puVar24 + uVar22 * 2)) {
      if ((puVar41 == (undefined8 *)0x0) || (puVar41 == puVar30)) break;
      puVar40 = (undefined8 *)0x0;
      puVar27 = puVar41;
      puVar41 = puVar41 + 2;
    }
    else {
      puVar40 = puVar27 + 2;
    }
    *puVar7 = *puVar7 + 1;
    lVar21 = puVar27[1];
    *(undefined4 *)plStack_110 = plStack_118._0_4_;
    pdb_140c3d940(plStack_100);
    puVar27 = puVar40;
  } while( true );
  uStack_1e0 = pdb_140c47770(param_9);
  puVar7 = (ulonglong *)*puStack_108;
  lVar35 = puStack_108[1];
  uVar22 = *puVar7;
  uVar34 = 0;
  uVar26 = uVar22 - *(ulonglong *)(lVar35 + 0x18);
  if (uVar22 < *(ulonglong *)(lVar35 + 0x18)) {
    uVar26 = uVar34;
  }
  uVar36 = uVar22 - *(ulonglong *)(lVar35 + 0x38);
  if (uVar22 < *(ulonglong *)(lVar35 + 0x38)) {
    uVar36 = uVar34;
  }
  puVar24 = (undefined8 *)(uVar26 * 0x10 + *(longlong *)(lVar35 + 8));
  uVar22 = *(ulonglong *)(lVar35 + 0x10) - uVar26;
  if (*(ulonglong *)(lVar35 + 0x10) < uVar26) {
    puVar24 = (undefined8 *)0x8;
    uVar22 = uVar34;
  }
  puVar27 = (undefined8 *)(uVar36 * 0x10 + *(longlong *)(lVar35 + 0x28));
  uVar26 = *(ulonglong *)(lVar35 + 0x30) - uVar36;
  if (*(ulonglong *)(lVar35 + 0x30) < uVar36) {
    puVar27 = (undefined8 *)0x8;
    uVar26 = uVar34;
  }
  *puVar7 = (*(longlong *)(lVar35 + 0x40) - uVar26) - uVar22;
  puStack_1c8 = puVar24 + uVar22 * 2;
  puStack_1c0 = puVar27 + uVar26 * 2;
  puStack_120 = (undefined8 *)CONCAT44(puStack_120._4_4_,*(undefined4 *)((longlong)param_6 + 0x1c));
  lVar35 = *param_6;
  puStack_1d0 = (undefined4 *)param_6[2];
  uVar20 = *(undefined4 *)((longlong)param_7 + 0x1c);
  lVar38 = *param_7;
  puVar8 = (undefined4 *)param_7[2];
  lStack_1d8 = lVar21;
  uStack_1a8 = uStack_1e0;
  lStack_1a0 = lVar21;
  puStack_108 = puVar7;
  do {
    if ((puVar24 == (undefined8 *)0x0) || (puVar24 == puStack_1c8)) {
      if ((puVar27 == (undefined8 *)0x0) || (puVar27 == puStack_1c0)) break;
      puVar24 = (undefined8 *)0x0;
      puVar41 = puVar27;
      puVar27 = puVar27 + 2;
    }
    else {
      puVar41 = puVar24;
      puVar24 = puVar24 + 2;
    }
    *puStack_108 = *puStack_108 + 1;
    *(undefined4 *)plStack_110 = plStack_118._0_4_;
    uVar9 = puVar41[1];
    lVar21 = pdb_140c3f000(plStack_100,uVar9);
    if (lVar21 != 0) {
      pdb_140c3bae0(lVar21);
    }
    *puStack_1d0 = puStack_120._0_4_;
    pdb_1403b05d0(lVar35 + 0x30,uVar9);
    *puVar8 = uVar20;
    pdb_1403b05d0(lVar38 + 0x30,uVar9);
    puVar41 = puVar27;
  } while( true );
  puVar7 = (ulonglong *)*puStack_1b8;
  lVar21 = puStack_1b8[1];
  uVar22 = *puVar7;
  uVar34 = 0;
  uVar26 = uVar22 - *(ulonglong *)(lVar21 + 0x18);
  if (uVar22 < *(ulonglong *)(lVar21 + 0x18)) {
    uVar26 = uVar34;
  }
  uVar36 = uVar22 - *(ulonglong *)(lVar21 + 0x38);
  if (uVar22 < *(ulonglong *)(lVar21 + 0x38)) {
    uVar36 = uVar34;
  }
  puVar24 = (undefined8 *)(uVar26 * 0x20 + *(longlong *)(lVar21 + 8));
  uVar22 = *(ulonglong *)(lVar21 + 0x10) - uVar26;
  if (*(ulonglong *)(lVar21 + 0x10) < uVar26) {
    puVar24 = (undefined8 *)0x8;
    uVar22 = uVar34;
  }
  puVar27 = (undefined8 *)(uVar36 * 0x20 + *(longlong *)(lVar21 + 0x28));
  uVar26 = *(ulonglong *)(lVar21 + 0x30) - uVar36;
  if (*(ulonglong *)(lVar21 + 0x30) < uVar36) {
    puVar27 = (undefined8 *)0x8;
    uVar26 = uVar34;
  }
  *puVar7 = (*(longlong *)(lVar21 + 0x40) - uVar26) - uVar22;
  puStack_108 = puVar24 + uVar22 * 4;
  puStack_120 = puVar27 + uVar26 * 4;
  do {
    if ((puVar24 == (undefined8 *)0x0) || (puVar24 == puStack_108)) {
      if ((puVar27 == (undefined8 *)0x0) || (puVar27 == puStack_120)) break;
      puVar24 = (undefined8 *)0x0;
      puVar41 = puVar27;
      puVar27 = puVar27 + 4;
    }
    else {
      puVar41 = puVar24;
      puVar24 = puVar24 + 4;
    }
    *puVar7 = *puVar7 + 1;
    uVar9 = puVar41[2];
    *(undefined4 *)plStack_110 = plStack_118._0_4_;
    lVar21 = pdb_140c3f000(plStack_100,uVar9);
    puVar41 = puVar24;
    if (lVar21 != 0) {
      pauStack_180 = *(undefined1 (**) [16])(lVar21 + 0x30);
      puStack_170 = *pauStack_180 + *(longlong *)(lVar21 + 0x38) + 1;
      auVar47 = *pauStack_180;
      uStack_168 = ~((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
      lStack_160 = *(longlong *)(lVar21 + 0x48);
      lStack_158 = lVar21 + 0x60;
      pauStack_178 = pauStack_180 + 1;
      while (pdb_140c441a0(&uStack_148,&pauStack_180), ppauStack_140 != (undefined1 (**) [16])0x0) {
        uStack_188 = uStack_130;
        ppauStack_198 = ppauStack_140;
        pcStack_190 = pcStack_138;
        lVar21 = pdb_140315970(&ppauStack_198);
        if (*(char *)(lVar21 + 0x32) == '\x02') {
          pdb_140c413c0(&ppauStack_198);
        }
      }
    }
  } while( true );
  puVar7 = (ulonglong *)*param_5;
  lVar21 = param_5[1];
  uVar22 = *puVar7;
  uVar34 = 0;
  uVar26 = uVar22 - *(ulonglong *)(lVar21 + 0x18);
  if (uVar22 < *(ulonglong *)(lVar21 + 0x18)) {
    uVar26 = uVar34;
  }
  uVar36 = uVar22 - *(ulonglong *)(lVar21 + 0x38);
  if (uVar22 < *(ulonglong *)(lVar21 + 0x38)) {
    uVar36 = uVar34;
  }
  puVar24 = (undefined8 *)(uVar26 * 0x30 + *(longlong *)(lVar21 + 8));
  uVar22 = *(ulonglong *)(lVar21 + 0x10) - uVar26;
  if (*(ulonglong *)(lVar21 + 0x10) < uVar26) {
    puVar24 = (undefined8 *)0x8;
    uVar22 = uVar34;
  }
  puVar27 = (undefined8 *)(uVar36 * 0x30 + *(longlong *)(lVar21 + 0x28));
  uVar26 = *(ulonglong *)(lVar21 + 0x30) - uVar36;
  if (*(ulonglong *)(lVar21 + 0x30) < uVar36) {
    puVar27 = (undefined8 *)0x8;
    uVar26 = uVar34;
  }
  *puVar7 = (*(longlong *)(lVar21 + 0x40) - uVar26) - uVar22;
  puStack_108 = puVar24 + uVar22 * 6;
  puStack_120 = puVar27 + uVar26 * 6;
  param_2 = &uStack_148;
  ppauVar31 = &pauStack_180;
  do {
    if ((puVar24 == (undefined8 *)0x0) || (puVar24 == puStack_108)) {
      if ((puVar27 == (undefined8 *)0x0) || (puVar27 == puStack_120)) break;
      puVar24 = (undefined8 *)0x0;
      puVar41 = puVar27;
      puVar27 = puVar27 + 6;
    }
    else {
      puVar41 = puVar24;
      puVar24 = puVar24 + 6;
    }
    *puVar7 = *puVar7 + 1;
    uVar9 = puVar41[3];
    *(undefined4 *)plStack_110 = plStack_118._0_4_;
    lVar21 = pdb_140c3f000(plStack_100,uVar9);
    puVar41 = puVar24;
    if (lVar21 != 0) {
      pauStack_180 = *(undefined1 (**) [16])(lVar21 + 0x30);
      puStack_170 = *pauStack_180 + *(longlong *)(lVar21 + 0x38) + 1;
      auVar47 = *pauStack_180;
      uStack_168 = ~((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
      lStack_160 = *(longlong *)(lVar21 + 0x48);
      lStack_158 = lVar21 + 0x60;
      pauStack_178 = pauStack_180 + 1;
      while (pdb_140c441a0(param_2,ppauVar31), ppauStack_140 != (undefined1 (**) [16])0x0) {
        uStack_188 = uStack_130;
        ppauStack_198 = ppauStack_140;
        pcStack_190 = pcStack_138;
        lVar21 = pdb_140315970(&ppauStack_198);
        if (*(char *)(lVar21 + 0x32) == '\x02') {
          pdb_140c413c0(&ppauStack_198);
        }
      }
    }
  } while( true );
  *(undefined4 *)plStack_110 = plStack_118._0_4_;
  pdb_140c3d250(&pauStack_180,plStack_100);
  fVar16 = _DAT_142e37ad4;
  fVar15 = _DAT_142e36f50;
  fVar14 = _DAT_142e36f28;
  uVar22 = (ulonglong)uStack_168;
  plStack_118 = *(longlong **)*pauStack_1b0;
  plStack_110 = plStack_118 + 4;
  iVar13 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  unaff_XMM8_Ba = (char)iVar13;
  unaff_XMM8_Bb = (char)((uint)iVar13 >> 8);
  unaff_XMM8_Bc = (char)((uint)iVar13 >> 0x10);
  unaff_XMM8_Bd = (char)((uint)iVar13 >> 0x18);
  iVar13 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  unaff_XMM8_Be = (char)iVar13;
  unaff_XMM8_Bf = (char)((uint)iVar13 >> 8);
  unaff_XMM8_Bg = (char)((uint)iVar13 >> 0x10);
  unaff_XMM8_Bh = (char)((uint)iVar13 >> 0x18);
  iVar13 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  unaff_XMM8_Bi = (char)iVar13;
  unaff_XMM8_Bj = (char)((uint)iVar13 >> 8);
  unaff_XMM8_Bk = (char)((uint)iVar13 >> 0x10);
  unaff_XMM8_Bl = (char)((uint)iVar13 >> 0x18);
  iVar13 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  unaff_XMM8_Bm = (char)iVar13;
  unaff_XMM8_Bn = (char)((uint)iVar13 >> 8);
  unaff_XMM8_Bo = (char)((uint)iVar13 >> 0x10);
  unaff_XMM8_Bp = (char)((uint)iVar13 >> 0x18);
  pppauVar43 = &ppauStack_198;
  pauVar39 = pauStack_180;
  param_1 = pauStack_178;
  plVar23 = (longlong *)lStack_160;
  while (plVar23 != (longlong *)0x0) {
    plStack_100 = (longlong *)((longlong)plVar23 + -1);
    uVar18 = (uint)uVar22;
    if ((short)uVar22 == 0) {
      do {
        auVar47 = *param_1;
        pauVar39 = pauVar39 + -0x98;
        param_1 = param_1 + 1;
        uVar18 = (ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
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
                          (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar47[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar18 == 0);
    }
    uVar19 = 0;
    for (uVar11 = uVar18; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar19 = uVar19 + 1;
    }
    ppauStack_198 = *(undefined1 (***) [16])((longlong)pauVar39 + (ulonglong)uVar19 * -0x98 + -0x98)
    ;
    pdb_140c3ba90(&pauStack_180,
                  (undefined *)((longlong)pauVar39 + (ulonglong)uVar19 * -0x98 + -0x90));
    lVar21 = pdb_140c44370(&pauStack_180);
    plVar23 = plStack_118;
    if (lVar21 != 0) {
      if (plStack_118[3] == 0) {
LAB_1408ea4c4:
        ppauStack_140 = (undefined1 (**) [16])pdb_1408ead60;
        uStack_148 = (undefined1 (**) [16])&ppauStack_198;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14301c130,&uStack_148,&UNK_14301c178);
      }
      uVar22 = pdb_1400af0a0(plStack_110,&ppauStack_198);
      lVar21 = *plVar23;
      bVar44 = (byte)(uVar22 >> 0x39);
      auVar47 = ZEXT216(CONCAT11(bVar44,bVar44));
      auVar47 = pshuflw(auVar47,auVar47,0);
      lVar35 = 0;
      do {
        uVar22 = uVar22 & plVar23[1];
        pcVar3 = (char *)(lVar21 + uVar22);
        auVar49[0] = -(*pcVar3 == auVar47[0]);
        auVar49[1] = -(pcVar3[1] == auVar47[1]);
        auVar49[2] = -(pcVar3[2] == auVar47[2]);
        auVar49[3] = -(pcVar3[3] == auVar47[3]);
        auVar49[4] = -(pcVar3[4] == auVar47[4]);
        auVar49[5] = -(pcVar3[5] == auVar47[5]);
        auVar49[6] = -(pcVar3[6] == auVar47[6]);
        auVar49[7] = -(pcVar3[7] == auVar47[7]);
        auVar49[8] = -(pcVar3[8] == auVar47[0]);
        auVar49[9] = -(pcVar3[9] == auVar47[1]);
        auVar49[10] = -(pcVar3[10] == auVar47[2]);
        auVar49[0xb] = -(pcVar3[0xb] == auVar47[3]);
        auVar49[0xc] = -(pcVar3[0xc] == auVar47[4]);
        auVar49[0xd] = -(pcVar3[0xd] == auVar47[5]);
        auVar49[0xe] = -(pcVar3[0xe] == auVar47[6]);
        auVar49[0xf] = -(pcVar3[0xf] == auVar47[7]);
        uVar37 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (ushort)(auVar49[0xf] >> 7) << 0xf
        ;
        uVar19 = (uint)uVar37;
        if (uVar37 != 0) {
LAB_1408ea122:
          uVar11 = 0;
          for (uVar12 = uVar19; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          lVar38 = (uVar11 + uVar22 & plVar23[1]) * -0x2b0;
          if (ppauStack_198 != *(undefined1 (***) [16])(lVar21 + -0x2b0 + lVar38))
          goto code_r0x0001408ea141;
          pppauVar43 = (undefined1 (***) [16])(lVar21 + lVar38);
          ppauVar28 = ppauStack_198;
          while( true ) {
            ppauVar29 = ppauVar28;
            uVar19 = pdb_140c44230(&pauStack_180);
            puVar41 = (undefined8 *)0x0;
            param_2 = plVar23;
            if (ppauVar29 == (undefined1 (**) [16])0x0) break;
            ppauVar31 = (undefined1 (**) [16])(ulonglong)uVar19;
            lVar21 = (ulonglong)*(byte *)((longlong)ppauVar29 + 0x32) - 1;
            if ((ulonglong)*(byte *)((longlong)ppauVar29 + 0x32) < 2) {
              lVar21 = 0;
            }
            if (lVar21 == 0) {
              plVar23 = (longlong *)pdb_140901050(ppauVar29 + 2);
              fVar45 = (float)pdb_14092fb60(pppauVar43 + -0x55,(int)*plVar23,
                                            *(undefined4 *)((longlong)plVar23 + 4));
              uVar19 = pdb_14148cfc0(pppauVar43 + -0x55,*(undefined4 *)((longlong)plVar23 + 0x14),
                                     *(undefined4 *)((longlong)plVar23 + 0x1c));
              ppauVar25 = (undefined1 (**) [16])(ulonglong)uVar19;
              ppauVar28 = pppauVar43[-0x50];
              if (ppauVar28 <= ppauVar25) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(ppauVar25,ppauVar28,&UNK_14330d6e8);
              }
              if (ppauVar28 <= (undefined1 (**) [16])((longlong)ppauVar25 + 1U)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2((undefined1 (**) [16])((longlong)ppauVar25 + 1U),ppauVar28,
                              &UNK_14330d700);
              }
              if ((extraout_XMM0_Da < 0.0) || (fVar14 < extraout_XMM0_Da)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_14330d490,0x2a,&UNK_14330d4e0);
              }
              pdb_140de9fd0(ppauVar25,
                            *(undefined4 *)
                             ((longlong)pppauVar43[-0x51] + (longlong)ppauVar25 * 4 + 4));
              fVar46 = *(float *)(plVar23 + 2);
              uVar20 = pdb_14092f860(pppauVar43 + -0x55);
              uStack_148 = (undefined1 (**) [16])CONCAT44(extraout_XMM0_Da_00,uVar20);
              uVar20 = pdb_140dea610(&uStack_148);
              *(undefined4 *)plVar23 = uVar20;
              *(float *)((longlong)plVar23 + 4) = fVar45 + fVar46;
              if (*(char *)((longlong)plVar23 + 0x21) == '\x01') {
                uVar6 = *(undefined1 *)((longlong)ppauVar29 + 0x59);
                ppauVar28 = ppauVar31;
                ppauVar25 = (undefined1 (**) [16])pdb_140c45840(&uStack_1e0);
                if (ppauVar25 != (undefined1 (**) [16])0x0) {
                  ppauVar31 = pppauVar43[-0x4c];
                  if (ppauVar31 == (undefined1 (**) [16])0x1) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143314ab0);
                  }
                  if (ppauVar31 == (undefined1 (**) [16])0x0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83b0(&UNK_143314a68,0x2d,&UNK_143314a98);
                  }
                  uStack_148 = pppauVar43[-0x4d];
                  pcStack_138 = pdb_140ade410;
                  uStack_130 = 0;
                  uStack_128 = 0;
                  ppauStack_140 = ppauVar31;
                  pdb_1414d3b90(&uStack_148);
                  ppauVar28 = (undefined1 (**) [16])(uStack_128 & 0xffffffff);
                  ppauVar31 = pppauVar43[-0x4c];
                  if (ppauVar31 <= ppauVar28) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(ppauVar28,ppauVar31,&UNK_14301c190);
                  }
                  ppauVar2 = (undefined1 (**) [16])((longlong)ppauVar28 + 1);
                  if (ppauVar31 <= ppauVar2) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(ppauVar2,ppauVar31,&UNK_14301c190);
                  }
                  fVar50 = uStack_128._4_4_;
                  fVar45 = *(float *)((longlong)pppauVar43[-0x4d] + (longlong)ppauVar28 * 0xc + 4);
                  fVar46 = *(float *)((longlong)pppauVar43[-0x4d] + (longlong)ppauVar2 * 0xc + 4);
                  uVar17 = pdb_1409012c0(*(undefined1 *)ppauVar25,uStack_1a8);
                  auStack_f3[0] =
                       pdb_140c44ba0(CONCAT71((int7)((ulonglong)ppauVar29 >> 8),uVar6) & 0xffffffff)
                  ;
                  auStack_f3[1] = uVar17;
                  ppauVar28 = (undefined1 (**) [16])auStack_f3;
                  lVar21 = pdb_141494370(lStack_1a0);
                  if (lVar21 == 0) {
                    uStack_148 = (undefined1 (**) [16])auStack_f3;
                    ppauStack_140 = (undefined1 (**) [16])pdb_1414942d0;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14330e2c6,&uStack_148,&UNK_14330e310);
                  }
                  fVar45 = fVar50 * (fVar46 - fVar45) + fVar45;
                  if (fVar45 <= 0.0) {
                    fVar45 = 0.0;
                  }
                  fVar46 = (*(float *)(lVar21 + 0x3c) - *(float *)(lVar21 + 0x38)) * fVar15;
                  fVar50 = fVar45 + fVar46 + fVar16;
                  fVar45 = fVar46;
                  if (fVar46 <= fVar50) {
                    fVar45 = fVar50;
                  }
                  fVar46 = (float)(-(uint)NAN(fVar50) & (uint)fVar46 |
                                  ~-(uint)NAN(fVar50) & (uint)fVar45);
                  *(float *)(plVar23 + 3) = fVar46;
                  fVar45 = (float)pdb_140930390(pppauVar43 + -0x55);
                  *(float *)(plVar23 + 2) = fVar46 - fVar45;
                  *(float *)((longlong)plVar23 + 4) = fVar46;
                  ppauVar31 = ppauVar25;
                }
              }
            }
            else {
              ppauVar28 = ppauVar29;
              if ((int)lVar21 != 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_14301c0eb,0x28,&UNK_14301c118);
              }
            }
          }
          break;
        }
LAB_1408ea150:
        auVar48[0] = -(*pcVar3 == unaff_XMM8_Ba);
        auVar48[1] = -(pcVar3[1] == unaff_XMM8_Bb);
        auVar48[2] = -(pcVar3[2] == unaff_XMM8_Bc);
        auVar48[3] = -(pcVar3[3] == unaff_XMM8_Bd);
        auVar48[4] = -(pcVar3[4] == unaff_XMM8_Be);
        auVar48[5] = -(pcVar3[5] == unaff_XMM8_Bf);
        auVar48[6] = -(pcVar3[6] == unaff_XMM8_Bg);
        auVar48[7] = -(pcVar3[7] == unaff_XMM8_Bh);
        auVar48[8] = -(pcVar3[8] == unaff_XMM8_Bi);
        auVar48[9] = -(pcVar3[9] == unaff_XMM8_Bj);
        auVar48[10] = -(pcVar3[10] == unaff_XMM8_Bk);
        auVar48[0xb] = -(pcVar3[0xb] == unaff_XMM8_Bl);
        auVar48[0xc] = -(pcVar3[0xc] == unaff_XMM8_Bm);
        auVar48[0xd] = -(pcVar3[0xd] == unaff_XMM8_Bn);
        auVar48[0xe] = -(pcVar3[0xe] == unaff_XMM8_Bo);
        auVar48[0xf] = -(pcVar3[0xf] == unaff_XMM8_Bp);
        if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 || (SUB161(auVar48 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar48 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar48 >> 0x1f,0) & 1) != 0) || (SUB161(auVar48 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar48 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar48 >> 0x37,0) & 1) != 0) || (SUB161(auVar48 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar48 >> 0x47,0) & 1) != 0) || (SUB161(auVar48 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar48 >> 0x57,0) & 1) != 0) || (SUB161(auVar48 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar48 >> 0x67,0) & 1) != 0) || (SUB161(auVar48 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar48 >> 0x77,0) & 1) != 0) || auVar48[0xf] < '\0') goto LAB_1408ea4c4;
        uVar22 = uVar22 + lVar35 + 0x10;
        lVar35 = lVar35 + 0x10;
      } while( true );
    }
    uVar22 = (ulonglong)(uVar18 - 1 & uVar18);
    plVar23 = plStack_100;
  }
  if (auStack_f3[2] == '\0') {
    return;
  }
  plVar23 = (longlong *)pdb_140e97000();
  if ((char)plVar23[0xd] != '\x01') goto LAB_1408ea578;
  while( true ) {
    if (*plVar23 == 0) {
      *plVar23 = -1;
      plStack_100 = plVar23;
      pdb_140e95370(plVar23 + 1);
      *plStack_100 = *plStack_100 + 1;
      return;
    }
LAB_1408ea54d:
    plVar23 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408ea559:
    plVar23 = (longlong *)pdb_142dde6e0(plVar23,0);
    if (plVar23 != (longlong *)0x0) break;
    do {
      plVar23 = (longlong *)pdb_142dc7890(&UNK_14330e598);
LAB_1408ea578:
      plVar23 = (longlong *)pdb_142dde6e0(plVar23,0);
    } while (plVar23 == (longlong *)0x0);
  }
  goto LAB_1408e99d6;
code_r0x0001408ea141:
  uVar37 = (ushort)(uVar19 - 1) & (ushort)uVar19;
  uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar37);
  if (uVar37 == 0) goto LAB_1408ea150;
  goto LAB_1408ea122;
}

