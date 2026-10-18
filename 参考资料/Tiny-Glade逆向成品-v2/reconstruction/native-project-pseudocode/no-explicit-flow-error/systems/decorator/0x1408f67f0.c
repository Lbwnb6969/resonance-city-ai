// VA 0x1408f67f0, PDB extent 4214 bytes
// system_decorator::blueprint::instantiate_decorator_colliders
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::blueprint::instantiate_decorator_colliders
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 4214 */

void pdb_1408f67f0(undefined8 *param_1,undefined1 (*param_2) [16],longlong *param_3,
                  longlong *param_4)

{
  undefined1 auVar1 [16];
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 (*pauVar15) [16];
  longlong *plVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  byte *pbVar22;
  undefined1 (*pauVar23) [16];
  ushort uVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulonglong uVar27;
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 unaff_XMM8 [16];
  undefined8 *puStack_1c0;
  int iStack_1b4;
  undefined1 (*pauStack_1a8) [16];
  longlong *plStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  longlong lStack_188;
  undefined1 (*pauStack_180) [16];
  undefined8 **ppuStack_170;
  code *pcStack_168;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined *puStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  longlong *plStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined1 (*pauStack_d0) [16];
  longlong *aplStack_c0 [2];
  byte *pbStack_b0;
  undefined1 (*pauStack_a8) [16];
  undefined8 *puStack_a0;
  uint uStack_94;
  longlong *plStack_90;
  bool bStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pauVar28 = param_2;
  puStack_a0 = param_1;
  cVar10 = pdb_140e94b40();
  if (cVar10 == '\0') {
    lStack_150 = 0;
  }
  else {
    pauVar28 = (undefined1 (*) [16])&UNK_14301d294;
    lVar20 = 0x3c;
    pauVar19 = (undefined1 (*) [16])0x3c;
    lVar12 = pdb_1408f7870(&UNK_14301d294);
    if (lVar12 == 1) {
      if ((undefined1 (*) [16])0x3c < pauVar19) {
LAB_1408f7348:
        pdb_142dc8070(&UNK_14301d294,0x3c,0);
LAB_1408f7368:
        pdb_142dc8070(&UNK_14301d294,0x3c);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pauVar28 = (undefined1 (*) [16])&UNK_14301d294;
      uVar13 = pdb_1408f7870(&UNK_14301d294);
      if ((uVar13 & 1) != 0) {
        if ((undefined *)0x3c < *pauVar19 + 2) goto LAB_1408f7368;
        lVar20 = 0x3a - (longlong)pauVar19;
        pauVar28 = (undefined1 (*) [16])(pauVar19[0x14301d29] + 6);
      }
    }
    puVar25 = &UNK_14301ce21;
    pauVar29 = (undefined1 (*) [16])&UNK_14301cdf8;
    do {
      bVar30 = puVar25[-1];
      uVar11 = (uint)(char)bVar30;
      if ((char)bVar30 < '\0') {
        bVar2 = puVar25[-2];
        if ((char)bVar2 < -0x40) {
          bVar3 = puVar25[-3];
          if ((char)bVar3 < -0x40) {
            pbVar22 = puVar25 + -4;
            puVar25 = puVar25 + -4;
            uVar11 = bVar3 & 0x3f | (*pbVar22 & 7) << 6;
          }
          else {
            puVar25 = puVar25 + -3;
            uVar11 = bVar3 & 0xf;
          }
          pauVar19 = (undefined1 (*) [16])(ulonglong)(uVar11 << 6);
          uVar11 = bVar2 & 0x3f | uVar11 << 6;
        }
        else {
          puVar25 = puVar25 + -2;
          uVar11 = bVar2 & 0x1f;
        }
        uVar11 = (uint)(bVar30 & 0x3f) | uVar11 << 6;
        if (uVar11 != 0x5c) goto LAB_1408f6934;
LAB_1408f694c:
        puVar26 = puVar25 + -0x14301cdf7;
        if (puVar26 < (undefined *)0x2a) {
          pauVar21 = (undefined1 (*) [16])(0x29 - (longlong)puVar26);
          pauVar29 = (undefined1 (*) [16])(puVar25 + 1);
          goto LAB_1408f696e;
        }
        pdb_142dc8070(&UNK_14301cdf8,0x29,puVar26,0x29,&UNK_14301d338);
        goto LAB_1408f7348;
      }
      puVar25 = puVar25 + -1;
      if (uVar11 == 0x5c) goto LAB_1408f694c;
LAB_1408f6934:
      if (uVar11 == 0x2f) goto LAB_1408f694c;
    } while (puVar25 != &UNK_14301cdf8);
    pauVar21 = (undefined1 (*) [16])0x29;
LAB_1408f696e:
    plVar14 = (longlong *)pdb_140e97000();
    if ((char)plVar14[0xd] != '\x01') {
      pauVar19 = (undefined1 (*) [16])0x0;
      plVar14 = (longlong *)pdb_142dde6e0(plVar14);
      if (plVar14 == (longlong *)0x0) {
LAB_1408f72c4:
        pdb_142dc7890(&UNK_14330e598);
LAB_1408f72d0:
        uStack_81 = 1;
        pdb_14149add0(&uStack_f8,*(longlong *)(pauVar29[0xc] + 8),
                      *(longlong *)pauVar29[0xd] * 0x170 + *(longlong *)(pauVar29[0xc] + 8));
        pcStack_168 = pdb_141495930;
        ppuStack_170 = (undefined8 **)&uStack_f8;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14301d0f8,&ppuStack_170,&UNK_14301d140);
      }
    }
    if (*plVar14 != 0) goto LAB_1408f7213;
    *plVar14 = -1;
    plStack_90 = plVar14;
    uStack_148 = pdb_140e94f10(plVar14 + 1,pauVar28,lVar20,pauVar29,pauVar21,1,0);
    *plStack_90 = *plStack_90 + 1;
    lStack_150 = 1;
  }
  pauVar21 = (undefined1 (*) [16])*puStack_a0;
  pauVar23 = (undefined1 (*) [16])puStack_a0[1];
  unaff_XMM8 = *pauVar21;
  lVar20 = puStack_a0[3];
  pauVar15 = (undefined1 (*) [16])pdb_140f3bda0();
  pauVar19 = pauVar28;
  pauVar28 = pauVar15;
  pauVar29 = param_2;
  if (pauVar15[1][0] != '\x01') goto LAB_1408f7220;
  lStack_d8 = *(longlong *)*pauVar15;
  pauVar19 = *(undefined1 (**) [16])(*pauVar15 + 8);
  do {
    lVar12 = _UNK_14301cda8;
    uVar17 = _DAT_14301cda0;
    plVar14 = _UNK_14301cd98;
    pauVar15 = _DAT_14301cd90;
    *(longlong *)*pauVar28 = lStack_d8 + 1;
    uStack_e8 = _DAT_14301cda0;
    lStack_e0 = _UNK_14301cda8;
    uStack_f8 = _DAT_14301cd90;
    plStack_f0 = _UNK_14301cd98;
    pauStack_d0 = pauVar19;
    if (lVar20 != 0) {
      pdb_142d96320(&uStack_f8,lVar20,&lStack_d8,1);
    }
    puStack_128 = *pauVar23 + (longlong)(*pauVar21 + 1);
    ppuStack_170 = (undefined8 **)&uStack_f8;
    pauStack_1a8 = (undefined1 (*) [16])&ppuStack_170;
    pauStack_130 = pauVar21 + 1;
    lStack_120 = CONCAT62(lStack_120._2_6_,
                          ~((ushort)(SUB161(unaff_XMM8 >> 7,0) & 1) |
                            (ushort)(SUB161(unaff_XMM8 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(unaff_XMM8 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(unaff_XMM8 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(unaff_XMM8 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(unaff_XMM8[0xf] >> 7) << 0xf));
    pauStack_138 = pauVar21;
    pdb_1414ae040(&pauStack_138,lVar20,&pauStack_1a8);
    pauStack_1a8 = uStack_f8;
    plStack_1a0 = plStack_f0;
    uStack_198 = uStack_e8;
    lStack_190 = lStack_e0;
    lStack_188 = lStack_d8;
    pauStack_180 = pauStack_d0;
    pauVar28 = (undefined1 (*) [16])puStack_a0[6];
    lVar4 = puStack_a0[7];
    unaff_XMM8 = *pauVar28;
    lVar5 = puStack_a0[9];
    uStack_82 = 1;
    plVar16 = (longlong *)pdb_140f3bda0();
    if ((char)plVar16[2] == '\x01') {
      lStack_d8 = *plVar16;
      lVar20 = plVar16[1];
    }
    else {
      uStack_82 = 1;
      lStack_d8 = pdb_140f4fd10();
      *plVar16 = lStack_d8;
      plVar16[1] = lVar20;
      *(undefined1 *)(plVar16 + 2) = 1;
    }
    *plVar16 = lStack_d8 + 1;
    uStack_e8 = uVar17;
    lStack_e0 = lVar12;
    uStack_f8 = pauVar15;
    plStack_f0 = plVar14;
    plStack_108 = param_4;
    pauStack_d0 = (undefined1 (*) [16])lVar20;
    if (lVar5 != 0) {
      pdb_142d96320(&uStack_f8,lVar5,&lStack_d8,1);
    }
    puStack_128 = *pauVar28 + lVar4 + 1;
    puStack_1c0 = &uStack_f8;
    ppuStack_170 = &puStack_1c0;
    pauStack_130 = pauVar28 + 1;
    lStack_120 = CONCAT62(lStack_120._2_6_,
                          ~((ushort)(SUB161(unaff_XMM8 >> 7,0) & 1) |
                            (ushort)(SUB161(unaff_XMM8 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(unaff_XMM8 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(unaff_XMM8 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(unaff_XMM8 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(unaff_XMM8 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(unaff_XMM8[0xf] >> 7) << 0xf));
    pauStack_138 = pauVar28;
    pdb_1414ae040(&pauStack_138,lVar5,&ppuStack_170);
    puStack_140 = puStack_a0 + 6;
    pauStack_138 = uStack_f8;
    pauStack_130 = (undefined1 (*) [16])plStack_f0;
    puStack_128 = (undefined *)uStack_e8;
    lStack_120 = lStack_e0;
    lStack_118 = lStack_d8;
    lStack_110 = (longlong)pauStack_d0;
    pauVar19 = *(undefined1 (**) [16])*pauVar29;
    lVar20 = *(longlong *)(pauVar29[1] + 8);
    auVar31 = *pauVar19;
    pauVar28 = pauVar19 + 1;
    param_4 = (longlong *)
              (ulonglong)
              ~(uint)(ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar31[0xf] >> 7) << 0xf);
    pauStack_a8 = (undefined1 (*) [16])param_3[3];
    pbStack_b0 = (byte *)(param_3 + 4);
    pbVar22 = (byte *)*param_3;
    plStack_90 = (longlong *)param_3[1];
    pbStack_100 = pbVar22;
LAB_1408f6be9:
    param_3 = plStack_108;
    bStack_83 = lVar20 != 0;
    if (lVar20 != 0) {
      if ((short)param_4 == 0) {
        do {
          auVar31 = *pauVar28;
          pauVar19 = pauVar19 + -0x10;
          pauVar28 = pauVar28 + 1;
          uVar11 = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) ^ 0xffff;
          param_4 = (longlong *)(ulonglong)uVar11;
        } while (uVar11 == 0);
      }
      uVar18 = (uint)param_4;
      iVar7 = 0;
      for (uVar11 = uVar18; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        iVar7 = iVar7 + 1;
      }
      lVar20 = lVar20 + -1;
      param_4 = (longlong *)(ulonglong)(uVar18 - 1 & uVar18);
      uVar11 = *(uint *)((longlong)pauVar19 + (-0x10 - (ulonglong)(uint)(iVar7 << 4)));
      pauVar29 = *(undefined1 (**) [16])((longlong)pauVar19 + (-8 - (ulonglong)(uint)(iVar7 << 4)));
      uStack_f8 = (undefined1 (*) [16])CONCAT44(uStack_f8._4_4_,uVar11);
      if (pauStack_a8 != (undefined1 (*) [16])0x0) {
        uVar13 = pdb_1400aede0(pbStack_b0,&uStack_f8);
        bVar30 = (byte)(uVar13 >> 0x39);
        auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
        auVar31 = pshuflw(auVar31,auVar31,0);
        lVar12 = 0;
        while( true ) {
          uVar13 = uVar13 & (ulonglong)plStack_90;
          auVar1 = *(undefined1 (*) [16])(pbVar22 + uVar13);
          auVar33[0] = -(auVar1[0] == auVar31[0]);
          auVar33[1] = -(auVar1[1] == auVar31[1]);
          auVar33[2] = -(auVar1[2] == auVar31[2]);
          auVar33[3] = -(auVar1[3] == auVar31[3]);
          auVar33[4] = -(auVar1[4] == auVar31[4]);
          auVar33[5] = -(auVar1[5] == auVar31[5]);
          auVar33[6] = -(auVar1[6] == auVar31[6]);
          auVar33[7] = -(auVar1[7] == auVar31[7]);
          auVar33[8] = -(auVar1[8] == auVar31[0]);
          auVar33[9] = -(auVar1[9] == auVar31[1]);
          auVar33[10] = -(auVar1[10] == auVar31[2]);
          auVar33[0xb] = -(auVar1[0xb] == auVar31[3]);
          auVar33[0xc] = -(auVar1[0xc] == auVar31[4]);
          auVar33[0xd] = -(auVar1[0xd] == auVar31[5]);
          auVar33[0xe] = -(auVar1[0xe] == auVar31[6]);
          auVar33[0xf] = -(auVar1[0xf] == auVar31[7]);
          uVar24 = (ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
                   (ushort)(auVar33[0xf] >> 7) << 0xf;
          uVar18 = (uint)uVar24;
          while (uVar24 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar18; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            uVar27 = uVar8 + uVar13 & (ulonglong)plStack_90;
            if (uVar11 == *(uint *)(pbVar22 + uVar27 * -0x10 + -0x10)) {
              if (*(undefined1 (**) [16])(pbVar22 + uVar27 * -0x10 + -8) != pauVar29)
              goto LAB_1408f6cfa;
              pauVar29 = (undefined1 (*) [16])&uStack_94;
              uStack_94 = uVar11;
              uVar17 = pdb_1400aede0(&lStack_188,pauVar29);
              uStack_81 = 1;
              pdb_140ca8930(&pauStack_1a8,uVar17,pauVar29);
              uVar17 = pdb_1400aede0(&lStack_118,pauVar29);
              uStack_81 = 1;
              pdb_140ca8930(&pauStack_138,uVar17,pauVar29);
              goto LAB_1408f6be9;
            }
            uVar24 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar24);
          }
          auVar32[0] = -(auVar1[0] == -1);
          auVar32[1] = -(auVar1[1] == -1);
          auVar32[2] = -(auVar1[2] == -1);
          auVar32[3] = -(auVar1[3] == -1);
          auVar32[4] = -(auVar1[4] == -1);
          auVar32[5] = -(auVar1[5] == -1);
          auVar32[6] = -(auVar1[6] == -1);
          auVar32[7] = -(auVar1[7] == -1);
          auVar32[8] = -(auVar1[8] == -1);
          auVar32[9] = -(auVar1[9] == -1);
          auVar32[10] = -(auVar1[10] == -1);
          auVar32[0xb] = -(auVar1[0xb] == -1);
          auVar32[0xc] = -(auVar1[0xc] == -1);
          auVar32[0xd] = -(auVar1[0xd] == -1);
          auVar32[0xe] = -(auVar1[0xe] == -1);
          auVar32[0xf] = -(auVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar32 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar32 >> 0x2f,0) & 1) != 0) || (SUB161(auVar32 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') break;
          uVar13 = uVar13 + lVar12 + 0x10;
          lVar12 = lVar12 + 0x10;
        }
      }
LAB_1408f6cfa:
      uStack_94 = uVar11;
      if (pauVar29[0x16][8] == '\0') {
        if (*(int *)pauVar29[6] == 0) {
          plVar14 = *(longlong **)pauVar29[7];
          LOCK();
          lVar12 = *plVar14;
          *plVar14 = *plVar14 + 1;
          UNLOCK();
          if (*plVar14 == 0 || SCARRY8(lVar12,1) != *plVar14 < 0) goto LAB_1408f7323;
          uStack_f8 = (undefined1 (*) [16])CONCAT44(uVar11,(undefined4)uStack_f8);
          plStack_f0 = *(longlong **)pauVar29[5];
          uStack_e8 = *(undefined8 *)(pauVar29[5] + 8);
          uStack_f8 = (undefined1 (*) [16])CONCAT71(uStack_f8._1_7_,3);
          uStack_81 = 1;
          pdb_1409ed410(&ppuStack_170,plVar14,&uStack_f8);
          plStack_f0 = (longlong *)CONCAT44(plStack_f0._4_4_,*(undefined4 *)(pauVar29[6] + 0xc));
          uStack_f8 = *(undefined1 (**) [16])(pauVar29[6] + 4);
          uStack_e8 = *(undefined8 *)pauVar29[8];
          lStack_e0 = *(longlong *)(pauVar29[8] + 8);
          uStack_81 = 1;
          pdb_1414e8950(&puStack_1c0,plStack_108,puStack_a0,uVar11,&ppuStack_170,&uStack_f8);
          if (iStack_1b4 != 0) {
            uVar17 = pdb_1400aede0(&lStack_188,&uStack_94);
            pbVar22 = pbStack_100;
            uStack_81 = 1;
            pdb_140ca8930(&pauStack_1a8,uVar17,&uStack_94);
          }
        }
        if (*(int *)pauVar29[9] == 0) {
          plVar14 = *(longlong **)pauVar29[10];
          LOCK();
          lVar12 = *plVar14;
          *plVar14 = *plVar14 + 1;
          UNLOCK();
          if (*plVar14 == 0 || SCARRY8(lVar12,1) != *plVar14 < 0) {
LAB_1408f7323:
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          uStack_f8 = (undefined1 (*) [16])CONCAT44(uVar11,(undefined4)uStack_f8);
          plStack_f0 = *(longlong **)pauVar29[5];
          uStack_e8 = *(undefined8 *)(pauVar29[5] + 8);
          uStack_f8 = (undefined1 (*) [16])(CONCAT71(uStack_f8._1_7_,pauVar29[0x16][9]) | 4);
          uStack_81 = 1;
          pdb_1409ed410(&ppuStack_170,plVar14,&uStack_f8);
          plStack_f0 = (longlong *)CONCAT44(plStack_f0._4_4_,*(undefined4 *)(pauVar29[9] + 0xc));
          uStack_f8 = *(undefined1 (**) [16])(pauVar29[9] + 4);
          uStack_e8 = *(undefined8 *)pauVar29[0xb];
          lStack_e0 = *(longlong *)(pauVar29[0xb] + 8);
          uStack_81 = 1;
          pdb_1414e8950(&puStack_1c0,plStack_108,puStack_140,uVar11,&ppuStack_170,&uStack_f8);
          if (iStack_1b4 != 0) {
            uVar17 = pdb_1400aede0(&lStack_118,&uStack_94);
            pbVar22 = pbStack_100;
            uStack_81 = 1;
            pdb_140ca8930(&pauStack_138,uVar17,&uStack_94);
          }
        }
        else if (*(int *)pauVar29[9] != 1) goto LAB_1408f72d0;
      }
      goto LAB_1408f6be9;
    }
    plStack_90 = plStack_1a0;
    if (plStack_1a0 == (longlong *)0x0) {
      pbStack_b0 = (byte *)0x0;
    }
    else {
      uVar13 = (longlong)plStack_1a0 * 4 + 0x13U & 0xfffffffffffffff0;
      pauStack_a8 = (undefined1 (*) [16])((longlong)plStack_1a0 + uVar13 + 0x11);
      pbStack_100 = (byte *)((longlong)pauStack_1a8 - uVar13);
      pbStack_b0 = (byte *)0x10;
    }
    if (lStack_190 != 0) {
      auVar31 = *pauStack_1a8;
      uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar31[0xf] >> 7) << 0xf);
      pauVar19 = pauStack_1a8 + 1;
      pauVar28 = (undefined1 (*) [16])aplStack_c0;
      pauVar29 = (undefined1 (*) [16])&uStack_f8;
      pauVar21 = pauStack_1a8;
      lVar20 = lStack_190;
      do {
        if ((short)uVar11 == 0) {
          do {
            auVar31 = *pauVar19;
            pauVar21 = pauVar21 + -4;
            pauVar19 = pauVar19 + 1;
            uVar11 = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar11 == 0);
        }
        param_4 = (longlong *)(ulonglong)uVar11;
        iVar7 = 0;
        for (uVar18 = uVar11; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          iVar7 = iVar7 + 1;
        }
        pdb_140933da0(pauVar29,param_3,puStack_a0,
                      *(undefined4 *)((longlong)pauVar21 + (-4 - (ulonglong)(uint)(iVar7 << 2))));
        if ((char)lStack_d8 != '\x11') {
          LOCK();
          *aplStack_c0[0] = *aplStack_c0[0] + -1;
          UNLOCK();
          if (*aplStack_c0[0] == 0) {
            pdb_140c7b7a0(pauVar28);
          }
        }
        uVar11 = uVar11 - 1 & uVar11;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    param_2 = (undefined1 (*) [16])0x0;
    if ((plStack_90 != (longlong *)0x0) && (pauStack_a8 != (undefined1 (*) [16])0x0)) {
      pub_1406abac0(pbStack_100,(ulonglong)pauStack_a8,(ulonglong)pbStack_b0);
    }
    plStack_90 = (longlong *)pauStack_130;
    if (pauStack_130 == (undefined1 (*) [16])0x0) {
      puStack_a0 = (undefined8 *)0x0;
    }
    else {
      uVar13 = (longlong)pauStack_130 * 4 + 0x13U & 0xfffffffffffffff0;
      pauStack_a8 = (undefined1 (*) [16])((longlong)pauStack_130 + uVar13 + 0x11);
      pbStack_b0 = (byte *)((longlong)pauStack_138 - uVar13);
      puStack_a0 = (undefined8 *)0x10;
    }
    pauVar21 = pauStack_138;
    if (lStack_120 != 0) {
      auVar31 = *pauStack_138;
      uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar31[0xf] >> 7) << 0xf);
      pauVar29 = pauStack_138 + 1;
      param_2 = (undefined1 (*) [16])aplStack_c0;
      pauVar28 = (undefined1 (*) [16])&uStack_f8;
      lVar20 = lStack_120;
      do {
        if ((short)uVar11 == 0) {
          do {
            auVar31 = *pauVar29;
            pauVar21 = pauVar21 + -4;
            pauVar29 = pauVar29 + 1;
            uVar11 = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar11 == 0);
        }
        param_4 = (longlong *)(ulonglong)uVar11;
        iVar7 = 0;
        for (uVar18 = uVar11; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          iVar7 = iVar7 + 1;
        }
        pdb_140933da0(pauVar28,param_3,puStack_140,
                      *(undefined4 *)((longlong)pauVar21 + (-4 - (ulonglong)(uint)(iVar7 << 2))));
        if ((char)lStack_d8 != '\x11') {
          LOCK();
          *aplStack_c0[0] = *aplStack_c0[0] + -1;
          UNLOCK();
          if (*aplStack_c0[0] == 0) {
            pdb_140c7b7a0(param_2);
          }
        }
        uVar11 = uVar11 - 1 & uVar11;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    lVar20 = 0;
    pauVar19 = pauStack_a8;
    if ((plStack_90 != (longlong *)0x0) && (pauStack_a8 != (undefined1 (*) [16])0x0)) {
      pub_1406abac0(pbStack_b0,(ulonglong)pauStack_a8,(ulonglong)puStack_a0);
    }
    if (lStack_150 == 0) {
      return;
    }
    plVar14 = (longlong *)pdb_140e97000();
    if ((char)plVar14[0xd] != '\x01') {
      pauVar19 = (undefined1 (*) [16])0x0;
      plVar14 = (longlong *)pdb_142dde6e0(plVar14);
      if (plVar14 == (longlong *)0x0) goto LAB_1408f72c4;
    }
    if (*plVar14 == 0) {
      *plVar14 = -1;
      plStack_90 = plVar14;
      pdb_140e95370(plVar14 + 1,uStack_148);
      *plStack_90 = *plStack_90 + 1;
      return;
    }
LAB_1408f7213:
    pdb_142dc8090(&UNK_14330e608);
    pauVar23 = param_2;
LAB_1408f7220:
    lStack_d8 = pdb_140f4fd10();
    *(longlong *)*pauVar28 = lStack_d8;
    *(undefined1 (**) [16])(*pauVar28 + 8) = pauVar19;
    pauVar28[1][0] = 1;
  } while( true );
}

