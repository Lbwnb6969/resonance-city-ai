// VA 0x14298dd00, PDB extent 3725 bytes
// toolbar::decoclutter_picker::decoclutter_picker_menu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/decoclutter_picker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::decoclutter_picker::decoclutter_picker_menu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/decoclutter_picker.rs
   Extent: 3725 */

void pdb_14298dd00(undefined8 *param_1,longlong **param_2,undefined8 *param_3,longlong **param_4,
                  undefined8 param_5,longlong *param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  char *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  char cVar6;
  int *piVar7;
  longlong **pplVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong **pplVar14;
  longlong **pplVar15;
  undefined8 uVar16;
  int *piVar17;
  ulonglong uVar18;
  longlong **pplVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  uint uVar23;
  uint uVar24;
  ushort uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  int iVar32;
  bool bVar33;
  bool bVar34;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  char cVar43;
  undefined1 unaff_XMM6_Bc;
  char cVar44;
  undefined1 unaff_XMM6_Bd;
  char cVar45;
  undefined1 unaff_XMM6_Be;
  char cVar46;
  undefined1 unaff_XMM6_Bf;
  char cVar47;
  undefined1 unaff_XMM6_Bg;
  char cVar48;
  undefined1 unaff_XMM6_Bh;
  char cVar49;
  undefined1 unaff_XMM6_Bi;
  char cVar50;
  undefined1 unaff_XMM6_Bj;
  char cVar51;
  undefined1 unaff_XMM6_Bk;
  char cVar52;
  undefined1 unaff_XMM6_Bl;
  char cVar53;
  undefined1 unaff_XMM6_Bm;
  char cVar54;
  undefined1 unaff_XMM6_Bn;
  char cVar55;
  undefined1 unaff_XMM6_Bo;
  char cVar56;
  undefined1 unaff_XMM6_Bp;
  char cVar57;
  ulonglong in_stack_fffffffffffffd58;
  undefined1 auStack_288 [40];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  longlong *aplStack_1f8 [3];
  longlong lStack_1e0;
  ulonglong uStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong *plStack_1b0;
  longlong lStack_1a8;
  byte *pbStack_1a0;
  ulonglong uStack_198;
  longlong lStack_190;
  longlong *plStack_188;
  longlong **pplStack_180;
  longlong *plStack_178;
  uint uStack_16c;
  longlong *plStack_168;
  longlong **pplStack_160;
  longlong *plStack_158;
  longlong **pplStack_150;
  undefined1 *puStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined8 uStack_120;
  uint *puStack_118;
  undefined8 uStack_110;
  longlong *plStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  longlong *plStack_e8;
  longlong **pplStack_e0;
  longlong *plStack_d8;
  longlong **pplStack_c8;
  ulonglong uStack_c0;
  undefined8 *puStack_b8;
  longlong **pplStack_b0;
  longlong *plStack_a8;
  longlong **pplStack_a0;
  longlong *plStack_98;
  undefined1 uStack_83;
  char cStack_82;
  byte bStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puVar10 = (ulonglong *)*param_9;
  lVar21 = param_9[1];
  uVar18 = *puVar10;
  uVar20 = 0;
  uVar9 = uVar18 - *(ulonglong *)(lVar21 + 0x18);
  if (uVar18 < *(ulonglong *)(lVar21 + 0x18)) {
    uVar9 = uVar20;
  }
  uVar13 = uVar18 - *(ulonglong *)(lVar21 + 0x38);
  if (uVar18 < *(ulonglong *)(lVar21 + 0x38)) {
    uVar13 = uVar20;
  }
  uVar18 = *(ulonglong *)(lVar21 + 0x10);
  uStack_c0 = *(ulonglong *)(lVar21 + 0x30);
  bVar33 = uStack_c0 < uVar13;
  uVar26 = uStack_c0 - uVar13;
  uVar27 = uVar26;
  if (bVar33) {
    uVar27 = uVar20;
  }
  bVar34 = uVar18 < uVar9;
  uVar29 = uVar18 - uVar9;
  uVar30 = uVar29;
  if (bVar34) {
    uVar30 = uVar20;
  }
  uVar20 = *(ulonglong *)(lVar21 + 0x40);
  lVar31 = *(longlong *)(lVar21 + 8);
  lVar21 = *(longlong *)(lVar21 + 0x28);
  *puVar10 = (uVar20 - uVar27) - uVar30;
  cStack_82 = (bVar34 || uVar29 == 0) && (bVar33 || uVar26 == 0);
  if (!bVar34 && uVar29 != 0 || !bVar33 && uVar26 != 0) {
    lVar21 = lVar21 + uVar13 * 0x10;
    lVar31 = lVar31 + uVar9 * 0x10;
    if (uVar18 < uVar9) {
      lVar31 = 8;
    }
    lVar28 = 0;
    if (uVar9 < uVar18) {
      lVar28 = lVar31 + -0x10 + uVar30 * 0x10;
    }
    if (uStack_c0 < uVar13) {
      lVar21 = 8;
    }
    lVar31 = lVar21 + -0x10 + uVar27 * 0x10;
    if (uStack_c0 <= uVar13) {
      lVar31 = lVar28;
    }
    *puVar10 = uVar20;
    uVar24 = *(uint *)(lVar31 + 8);
    puVar3 = (uint *)*param_7;
    uVar23 = 1;
    if ((char)*puVar3 != '\0') {
      uVar23 = (uint)(puVar3[1] != uVar24);
    }
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    *puVar3 = uVar23;
    puVar3[1] = uVar24;
  }
  plVar22 = *param_2;
  if ((char)*plVar22 != '\0') {
    piVar17 = (int *)*param_7;
LAB_14298e046:
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    *piVar17 = 0;
    return;
  }
  piVar17 = (int *)*param_7;
  if ((int)plVar22[1] != 4) goto LAB_14298e046;
  uVar24 = *(uint *)((longlong)plVar22 + 0xc);
  if (*piVar17 != 1) {
    return;
  }
  if (piVar17[1] != uVar24) {
    return;
  }
  uVar12 = *param_3;
  uVar18 = (ulonglong)uVar24;
  uStack_16c = uVar24;
  pplStack_c8 = param_2;
  puStack_b8 = param_3;
  pplStack_b0 = param_4;
  lStack_1e0 = pdb_140c3ee20(uVar12);
  if (((lStack_1e0 == 3) ||
      (uStack_1d8 = uVar18, piVar7 = (int *)pdb_140c3d060(uVar12,lStack_1e0,uVar18,uVar24),
      piVar7 == (int *)0x0)) || (*piVar7 != 6)) goto LAB_14298e046;
  lStack_190 = *(longlong *)(piVar7 + 2);
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  pdb_14116dcb0(auStack_260,*param_1,&UNK_143609269,0x12,
                in_stack_fffffffffffffd58 & 0xffffffffffffff00);
  pdb_141173660(&uStack_230,auStack_260,&UNK_14360927b,0xc);
  piVar7 = (int *)pdb_1411727b0(&uStack_230);
  iVar32 = *piVar7;
  uStack_218 = uStack_230;
  uStack_210 = uStack_228;
  uStack_208 = uStack_220;
  pdb_14116eb20(&plStack_168,&uStack_218);
  pdb_141174160(auStack_288,&plStack_168,&UNK_143609287,7,0);
  pdb_141191ec0(auStack_288,&UNK_14360928e,10);
  pdb_141186290(aplStack_1f8,auStack_288,&UNK_143609298,8);
  pplVar14 = &plStack_a8;
  pdb_141172320(pplVar14,aplStack_1f8,&UNK_1436092a0,10);
  plStack_158 = (longlong *)0x0;
  pplStack_150 = (longlong **)0x0;
  plStack_168 = (longlong *)0x0;
  pplStack_160 = (longlong **)0x0;
  uStack_130 = 0;
  uStack_12a = 0;
  uStack_128 = 0;
  puStack_148 = _DAT_143609150;
  plStack_140 = _UNK_143609158;
  plStack_138 = (longlong *)0x42ac000000000000;
  uStack_122 = 0x102;
  pdb_14072cf30(auStack_248,pplVar14,&plStack_168);
  if (iVar32 < 1) {
    if (-1 < iVar32) {
      uVar18 = 0;
      goto LAB_14298e10b;
    }
    do {
      cVar6 = pdb_1409d54f0(piVar17 + 6);
      if ((cVar6 == '\x04') && (cVar6 = pdb_1409d54e0(), cVar6 == '\x04')) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143609328);
      }
      pplVar14 = (longlong **)param_7[2];
      *(undefined4 *)pplVar14 = *(undefined4 *)((longlong)param_7 + 0x1c);
      *(char *)(piVar17 + 6) = cVar6;
      iVar32 = iVar32 + 1;
    } while (iVar32 != 0);
  }
  else {
    iVar32 = iVar32 + 1;
    do {
      cVar6 = pdb_140948120(piVar17 + 6);
      if ((cVar6 == '\x04') && (cVar6 = pdb_14007fac0(), cVar6 == '\x04')) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143609340);
      }
      pplVar14 = (longlong **)param_7[2];
      *(undefined4 *)pplVar14 = *(undefined4 *)((longlong)param_7 + 0x1c);
      *(char *)(piVar17 + 6) = cVar6;
      iVar32 = iVar32 + -1;
    } while (1 < iVar32);
  }
  uVar18 = CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
LAB_14298e10b:
  uVar24 = (uint)uVar18;
  pplVar8 = (longlong **)pdb_14007fac0();
  if ((char)pplVar8 != '\x04') {
    iVar32 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                    CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    cVar6 = (char)iVar32;
    cVar43 = (char)((uint)iVar32 >> 8);
    cVar44 = (char)((uint)iVar32 >> 0x10);
    cVar45 = (char)((uint)iVar32 >> 0x18);
    iVar32 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                    CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    cVar46 = (char)iVar32;
    cVar47 = (char)((uint)iVar32 >> 8);
    cVar48 = (char)((uint)iVar32 >> 0x10);
    cVar49 = (char)((uint)iVar32 >> 0x18);
    iVar32 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                    CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    cVar50 = (char)iVar32;
    cVar51 = (char)((uint)iVar32 >> 8);
    cVar52 = (char)((uint)iVar32 >> 0x10);
    cVar53 = (char)((uint)iVar32 >> 0x18);
    iVar32 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    cVar54 = (char)iVar32;
    cVar55 = (char)((uint)iVar32 >> 8);
    cVar56 = (char)((uint)iVar32 >> 0x10);
    cVar57 = (char)((uint)iVar32 >> 0x18);
LAB_14298e1cf:
    pplVar19 = &plStack_188;
    puStack_b8 = (undefined8 *)CONCAT44(puStack_b8._4_4_,(int)uVar18);
    plStack_168 = (longlong *)CONCAT71(plStack_168._1_7_,(char)pplVar8);
    bStack_81 = pdb_140948120(&plStack_168);
    uVar12 = pdb_1409d54c0((ulonglong)pplVar8 & 0xffffffff);
    uStack_c0 = CONCAT71(uStack_c0._1_7_,(char)((ulonglong)pplVar8 & 0xffffffff));
    pplVar15 = pplVar14;
    uVar16 = pdb_1409d54a0((ulonglong)pplVar8 & 0xffffffff);
    pdb_1411743c0(pplVar19,auStack_248,uVar12,pplVar14,uVar16,pplVar15);
    plVar22 = plStack_188;
    plStack_a8 = plStack_188;
    pplStack_a0 = pplStack_180;
    plStack_98 = plStack_178;
    if (plStack_188[0x39] != 0) {
      uVar9 = pdb_1400af0a0(plStack_188 + 0x3a,&pplStack_a0);
      plVar11 = plStack_a8;
      lVar21 = plVar22[0x36];
      uVar18 = plVar22[0x37];
      bVar35 = (byte)(uVar9 >> 0x39);
      auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
      auVar36 = pshuflw(auVar36,auVar36,0);
      lVar31 = 0;
      while( true ) {
        uVar9 = uVar9 & uVar18;
        auVar42 = *(undefined1 (*) [16])(lVar21 + uVar9);
        auVar40[0] = -(auVar42[0] == auVar36[0]);
        auVar40[1] = -(auVar42[1] == auVar36[1]);
        auVar40[2] = -(auVar42[2] == auVar36[2]);
        auVar40[3] = -(auVar42[3] == auVar36[3]);
        auVar40[4] = -(auVar42[4] == auVar36[4]);
        auVar40[5] = -(auVar42[5] == auVar36[5]);
        auVar40[6] = -(auVar42[6] == auVar36[6]);
        auVar40[7] = -(auVar42[7] == auVar36[7]);
        auVar40[8] = -(auVar42[8] == auVar36[0]);
        auVar40[9] = -(auVar42[9] == auVar36[1]);
        auVar40[10] = -(auVar42[10] == auVar36[2]);
        auVar40[0xb] = -(auVar42[0xb] == auVar36[3]);
        auVar40[0xc] = -(auVar42[0xc] == auVar36[4]);
        auVar40[0xd] = -(auVar42[0xd] == auVar36[5]);
        auVar40[0xe] = -(auVar42[0xe] == auVar36[6]);
        auVar40[0xf] = -(auVar42[0xf] == auVar36[7]);
        uVar25 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf
        ;
        uVar24 = (uint)uVar25;
        while (uVar25 != 0) {
          uVar23 = 0;
          for (uVar5 = uVar24; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar23 = uVar23 + 1;
          }
          lVar28 = (uVar23 + uVar9 & uVar18) * -0xd8;
          if (pplStack_a0 == *(longlong ***)(lVar21 + -0xd8 + lVar28)) {
            *(undefined2 *)(lVar21 + lVar28 + -8) = 0xf00;
            plStack_158 = plStack_98;
            plStack_168 = plStack_a8;
            pplStack_160 = pplStack_a0;
            if (plStack_a8[0x39] == 0) goto LAB_14298e892;
            uVar9 = pdb_1400af0a0(plStack_a8 + 0x3a,&pplStack_160);
            lVar21 = plVar11[0x36];
            uVar18 = plVar11[0x37];
            bVar35 = (byte)(uVar9 >> 0x39);
            auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
            auVar36 = pshuflw(auVar36,auVar36,0);
            lVar31 = 0;
            goto LAB_14298e37a;
          }
          uVar25 = (ushort)(uVar24 - 1) & (ushort)uVar24;
          uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar25);
        }
        auVar37[0] = -(auVar42[0] == cVar6);
        auVar37[1] = -(auVar42[1] == cVar43);
        auVar37[2] = -(auVar42[2] == cVar44);
        auVar37[3] = -(auVar42[3] == cVar45);
        auVar37[4] = -(auVar42[4] == cVar46);
        auVar37[5] = -(auVar42[5] == cVar47);
        auVar37[6] = -(auVar42[6] == cVar48);
        auVar37[7] = -(auVar42[7] == cVar49);
        auVar37[8] = -(auVar42[8] == cVar50);
        auVar37[9] = -(auVar42[9] == cVar51);
        auVar37[10] = -(auVar42[10] == cVar52);
        auVar37[0xb] = -(auVar42[0xb] == cVar53);
        auVar37[0xc] = -(auVar42[0xc] == cVar54);
        auVar37[0xd] = -(auVar42[0xd] == cVar55);
        auVar37[0xe] = -(auVar42[0xe] == cVar56);
        auVar37[0xf] = -(auVar42[0xf] == cVar57);
        if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x1f,0) & 1) != 0) || (SUB161(auVar37 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
        uVar9 = uVar9 + lVar31 + 0x10;
        lVar31 = lVar31 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
LAB_14298e11f:
  pdb_140c25e00(&lStack_1a8,*pplStack_b0,(char)piVar17[6]);
  pdb_1411739b0(&plStack_e8,aplStack_1f8,&UNK_1436092aa,5,4,uStack_198 + 3 >> 2,0x42d33334);
  if ((char)uVar24 == '\x01') {
    pdb_141b75410(param_12,0xd,&UNK_1436092b0);
    bVar35 = *(byte *)(piVar17 + 6);
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    piVar17 = piVar17 + (ulonglong)bVar35 + 2;
LAB_14298e5d5:
    plStack_158 = plStack_d8;
    plStack_168 = plStack_e8;
    pplStack_160 = pplStack_e0;
    pdb_140726be0(&plStack_a8,&plStack_168,*piVar17);
    plStack_e8 = plStack_a8;
    pplStack_e0 = pplStack_a0;
    plStack_d8 = plStack_98;
  }
  else {
    bVar35 = *(byte *)(piVar17 + 6);
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    piVar17 = piVar17 + (ulonglong)bVar35 + 2;
    if (cStack_82 == '\0') goto LAB_14298e5d5;
  }
  iVar32 = pdb_140726cb0(&plStack_e8);
  *piVar17 = iVar32;
  if (uStack_198 == 0) {
LAB_14298e66d:
    uVar18 = 0;
  }
  else {
    lVar21 = uStack_198 * 8;
    uVar18 = 0;
    while (*(longlong *)(pbStack_1a0 + uVar18 * 8) != lStack_190) {
      uVar18 = uVar18 + 1;
      lVar21 = lVar21 + -8;
      if (lVar21 == 0) goto LAB_14298e66d;
    }
  }
  if (uVar18 < uStack_198) {
    plVar22 = *(longlong **)(pbStack_1a0 + uVar18 * 8);
  }
  else {
    plVar22 = (longlong *)0x0;
  }
  plStack_158 = plStack_d8;
  plStack_168 = plStack_e8;
  pplStack_160 = pplStack_e0;
  plStack_1b0 = plVar22;
  puVar10 = (ulonglong *)pdb_14116e5a0(&plStack_168);
  pplVar19 = (longlong **)(uVar18 >> 2);
  *puVar10 = (ulonglong)(plVar22 != (longlong *)0x0);
  puVar10[1] = (ulonglong)pplVar19;
  plStack_178 = plStack_158;
  plStack_188 = plStack_168;
  pplStack_180 = pplStack_160;
  uStack_83 = pdb_140726d50(&plStack_188);
  lStack_1c0 = 0;
  lStack_1d0 = 0;
  plStack_98 = plStack_178;
  plStack_a8 = plStack_188;
  pplStack_a0 = pplStack_180;
  pplStack_160 = pplStack_b0;
  plStack_158 = &lStack_190;
  pplStack_150 = &plStack_1b0;
  puStack_148 = &uStack_83;
  plStack_140 = &lStack_1d0;
  plStack_138 = &lStack_1c0;
  uStack_130 = (undefined6)param_8;
  uStack_12a = (undefined2)((ulonglong)param_8 >> 0x30);
  uStack_128 = SUB86(param_2,0);
  uStack_122 = (undefined2)((ulonglong)param_2 >> 0x30);
  uStack_120 = param_5;
  puStack_118 = &uStack_16c;
  uStack_110 = param_10;
  plStack_108 = &lStack_1e0;
  uStack_100 = param_11;
  puStack_f8 = param_7;
  plStack_168 = &lStack_1a8;
  pdb_1422fb480(&plStack_a8,&plStack_168);
  lVar21 = lStack_1c0;
  plVar22 = &lStack_1b8;
  if (lStack_1c0 == 0) {
    lVar21 = lStack_1d0;
    plVar22 = &lStack_1c8;
  }
  if (lVar21 != 0) {
    param_2 = (longlong **)*plVar22;
    pdb_140c26890(&plStack_168,*pplStack_b0);
    pplVar14 = pplStack_150;
    plVar22 = plStack_158;
    if (plStack_168 == (longlong *)0x3) {
      pdb_142dc8110(&UNK_1436092c8,0x1e,&UNK_1436092e8);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((int)plStack_168 != 2) {
      if ((*param_6 != 0 & (byte)plStack_168) == 1) {
        pplVar19 = pplStack_160;
        plVar11 = (longlong *)pdb_140a661f0();
      }
      else {
LAB_14298e8b6:
        plVar11 = (longlong *)0x0;
      }
      uVar16 = 0x1a;
      uVar12 = pdb_140dc6290(&UNK_143609300,0x1a);
      if (plVar11 != (longlong *)0x0) {
        plVar22 = plVar11;
        pplVar14 = pplVar19;
      }
      pdb_14298d5a0(&plStack_a8,uVar12,uVar16,plVar22,pplVar14);
      plStack_168 = aplStack_1f8[0];
      plStack_158 = (longlong *)0x0;
      pplStack_c8 = pplStack_a0;
      pplStack_160 = param_2;
      pdb_140726690(&plStack_168,pplStack_a0,plStack_98);
      if (plStack_a8 != (longlong *)0x0) {
        pub_1406abac0((byte *)pplStack_c8,(ulonglong)plStack_a8,1);
      }
    }
  }
  uVar16 = 6;
  uVar12 = pdb_140dc6290(&UNK_14360931f,6);
  pdb_1407339e0(&plStack_168,aplStack_1f8,uVar12,uVar16);
  pdb_140726180(&plStack_a8,&plStack_168,0xc);
  uVar12 = pdb_14116dd60(&plStack_a8);
  pdb_14119b2b0(uVar12,_DAT_142e378c0);
  plStack_158 = plStack_98;
  plStack_168 = plStack_a8;
  pplStack_160 = pplStack_a0;
  lVar21 = pdb_14116dd60(&plStack_168);
  *(undefined4 *)(lVar21 + 600) = 0x7b5a51ff;
  plStack_98 = plStack_158;
  plStack_a8 = plStack_168;
  pplStack_a0 = pplStack_160;
  lVar21 = pdb_14116dd60(&plStack_a8);
  *(undefined1 *)(lVar21 + 0x25d) = 0x14;
  plStack_158 = plStack_98;
  plStack_168 = plStack_a8;
  pplStack_160 = pplStack_a0;
  lVar21 = pdb_140725900(&plStack_168);
  if ((*(byte *)(lVar21 + 0xca) & 0x30) != 0) {
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    *(undefined4 *)*param_7 = 0;
  }
  if (lStack_1a8 == 0) {
    return;
  }
  pub_1406abac0(pbStack_1a0,lStack_1a8 << 3,8);
  return;
LAB_14298e37a:
  uVar9 = uVar9 & uVar18;
  auVar42 = *(undefined1 (*) [16])(lVar21 + uVar9);
  auVar41[0] = -(auVar42[0] == auVar36[0]);
  auVar41[1] = -(auVar42[1] == auVar36[1]);
  auVar41[2] = -(auVar42[2] == auVar36[2]);
  auVar41[3] = -(auVar42[3] == auVar36[3]);
  auVar41[4] = -(auVar42[4] == auVar36[4]);
  auVar41[5] = -(auVar42[5] == auVar36[5]);
  auVar41[6] = -(auVar42[6] == auVar36[6]);
  auVar41[7] = -(auVar42[7] == auVar36[7]);
  auVar41[8] = -(auVar42[8] == auVar36[0]);
  auVar41[9] = -(auVar42[9] == auVar36[1]);
  auVar41[10] = -(auVar42[10] == auVar36[2]);
  auVar41[0xb] = -(auVar42[0xb] == auVar36[3]);
  auVar41[0xc] = -(auVar42[0xc] == auVar36[4]);
  auVar41[0xd] = -(auVar42[0xd] == auVar36[5]);
  auVar41[0xe] = -(auVar42[0xe] == auVar36[6]);
  auVar41[0xf] = -(auVar42[0xf] == auVar36[7]);
  uVar25 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
  uVar24 = (uint)uVar25;
  while (uVar25 != 0) {
    uVar23 = 0;
    for (uVar5 = uVar24; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar23 = uVar23 + 1;
    }
    lVar28 = (uVar23 + uVar9 & uVar18) * -0xd8;
    if (pplStack_160 == *(longlong ***)(lVar21 + -0xd8 + lVar28)) {
      lVar21 = lVar21 + lVar28;
      *(undefined8 *)(lVar21 + -0x9c) = 0;
      *(undefined8 *)(lVar21 + -0x94) = 0;
      *(undefined8 *)(lVar21 + -0xa8) = 0;
      *(undefined8 *)(lVar21 + -0xa0) = 0;
      *(undefined8 *)(lVar21 + -0xb8) = 0;
      *(undefined8 *)(lVar21 + -0xb0) = 0;
      *(undefined8 *)(lVar21 + -0x8c) = 0x42a00000;
      *(undefined4 *)(lVar21 + -0x84) = 0x42a00000;
      *(undefined8 *)(lVar21 + -0x80) = 0;
      *(undefined8 *)(lVar21 + -0x7a) = 0;
      *(undefined2 *)(lVar21 + -0x72) = 0x102;
      plStack_98 = plStack_158;
      plStack_a8 = plStack_168;
      pplStack_a0 = pplStack_160;
      uVar2 = *(undefined4 *)(&UNK_143609160 + (ulonglong)((char)piVar17[6] == (char)uStack_c0) * 4)
      ;
      lVar21 = pdb_14116e020(&plStack_a8);
      plVar22 = plStack_a8;
      *(undefined4 *)(lVar21 + 0x40) = uVar2;
      plStack_e8 = plStack_a8;
      pplStack_e0 = pplStack_a0;
      plStack_d8 = plStack_98;
      if (plStack_a8[0x39] == 0) goto LAB_14298e89e;
      uVar18 = pdb_1400af0a0(plStack_a8 + 0x3a,&pplStack_e0);
      lVar21 = plVar22[0x36];
      puVar10 = (ulonglong *)(plVar22 + 0x37);
      bVar35 = (byte)(uVar18 >> 0x39);
      auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
      auVar36 = pshuflw(auVar36,auVar36,0);
      lVar31 = 0;
      goto LAB_14298e4e5;
    }
    uVar25 = (ushort)(uVar24 - 1) & (ushort)uVar24;
    uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar25);
  }
  auVar38[0] = -(auVar42[0] == cVar6);
  auVar38[1] = -(auVar42[1] == cVar43);
  auVar38[2] = -(auVar42[2] == cVar44);
  auVar38[3] = -(auVar42[3] == cVar45);
  auVar38[4] = -(auVar42[4] == cVar46);
  auVar38[5] = -(auVar42[5] == cVar47);
  auVar38[6] = -(auVar42[6] == cVar48);
  auVar38[7] = -(auVar42[7] == cVar49);
  auVar38[8] = -(auVar42[8] == cVar50);
  auVar38[9] = -(auVar42[9] == cVar51);
  auVar38[10] = -(auVar42[10] == cVar52);
  auVar38[0xb] = -(auVar42[0xb] == cVar53);
  auVar38[0xc] = -(auVar42[0xc] == cVar54);
  auVar38[0xd] = -(auVar42[0xd] == cVar55);
  auVar38[0xe] = -(auVar42[0xe] == cVar56);
  auVar38[0xf] = -(auVar42[0xf] == cVar57);
  if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') {
LAB_14298e892:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  uVar9 = uVar9 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_14298e37a;
LAB_14298e4e5:
  uVar18 = uVar18 & *puVar10;
  pcVar1 = (char *)(lVar21 + uVar18);
  auVar42[0] = -(*pcVar1 == auVar36[0]);
  auVar42[1] = -(pcVar1[1] == auVar36[1]);
  auVar42[2] = -(pcVar1[2] == auVar36[2]);
  auVar42[3] = -(pcVar1[3] == auVar36[3]);
  auVar42[4] = -(pcVar1[4] == auVar36[4]);
  auVar42[5] = -(pcVar1[5] == auVar36[5]);
  auVar42[6] = -(pcVar1[6] == auVar36[6]);
  auVar42[7] = -(pcVar1[7] == auVar36[7]);
  auVar42[8] = -(pcVar1[8] == auVar36[0]);
  auVar42[9] = -(pcVar1[9] == auVar36[1]);
  auVar42[10] = -(pcVar1[10] == auVar36[2]);
  auVar42[0xb] = -(pcVar1[0xb] == auVar36[3]);
  auVar42[0xc] = -(pcVar1[0xc] == auVar36[4]);
  auVar42[0xd] = -(pcVar1[0xd] == auVar36[5]);
  auVar42[0xe] = -(pcVar1[0xe] == auVar36[6]);
  auVar42[0xf] = -(pcVar1[0xf] == auVar36[7]);
  uVar25 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar25;
  while (uVar25 != 0) {
    uVar23 = 0;
    for (uVar5 = uVar24; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar23 = uVar23 + 1;
    }
    lVar28 = (uVar23 + uVar18 & *puVar10) * -0xd8;
    if (pplStack_e0 == *(longlong ***)(lVar21 + -0xd8 + lVar28)) {
      if ((*(byte *)(lVar21 + lVar28 + -6) & 0x30) == 0) {
        uVar24 = (uint)puStack_b8;
      }
      else {
        iVar32 = piVar17[6];
        *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
        *(char *)(piVar17 + 6) = (char)uStack_c0;
        uVar24 = (uint)CONCAT71((int7)(uVar18 >> 8),
                                (char)iVar32 != (char)uStack_c0 | (byte)puStack_b8) & 0xffffff01;
      }
      uVar18 = (ulonglong)uVar24;
      pplVar8 = (longlong **)(ulonglong)bStack_81;
      pplVar14 = pplVar8;
      if (bStack_81 != 4) goto LAB_14298e1cf;
      goto LAB_14298e11f;
    }
    uVar25 = (ushort)(uVar24 - 1) & (ushort)uVar24;
    uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar25);
    plVar22 = (longlong *)(ulonglong)uVar24;
  }
  auVar39[0] = -(*pcVar1 == cVar6);
  auVar39[1] = -(pcVar1[1] == cVar43);
  auVar39[2] = -(pcVar1[2] == cVar44);
  auVar39[3] = -(pcVar1[3] == cVar45);
  auVar39[4] = -(pcVar1[4] == cVar46);
  auVar39[5] = -(pcVar1[5] == cVar47);
  auVar39[6] = -(pcVar1[6] == cVar48);
  auVar39[7] = -(pcVar1[7] == cVar49);
  auVar39[8] = -(pcVar1[8] == cVar50);
  auVar39[9] = -(pcVar1[9] == cVar51);
  auVar39[10] = -(pcVar1[10] == cVar52);
  auVar39[0xb] = -(pcVar1[0xb] == cVar53);
  auVar39[0xc] = -(pcVar1[0xc] == cVar54);
  auVar39[0xd] = -(pcVar1[0xd] == cVar55);
  auVar39[0xe] = -(pcVar1[0xe] == cVar56);
  auVar39[0xf] = -(pcVar1[0xf] == cVar57);
  if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x37,0) & 1) != 0) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') goto LAB_14298e89e;
  uVar18 = uVar18 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_14298e4e5;
LAB_14298e89e:
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
  goto LAB_14298e8b6;
}

