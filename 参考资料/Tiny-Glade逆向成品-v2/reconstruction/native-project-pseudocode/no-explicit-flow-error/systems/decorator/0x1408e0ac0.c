// VA 0x1408e0ac0, PDB extent 5810 bytes
// system_decorator::stone_foundation_cutouts::upload_stone_foundation_cutouts_to_gpu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/stone_foundation_cutouts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::stone_foundation_cutouts::upload_stone_foundation_cutouts_to_gpu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/stone_foundation_cutouts.rs
   Extent: 5810 */

void pdb_1408e0ac0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  byte *pbVar1;
  ulonglong *puVar2;
  char *pcVar3;
  float fVar4;
  byte bVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  longlong lVar29;
  longlong lVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined1 (*pauVar33) [16];
  ushort uVar34;
  int iVar35;
  longlong lVar36;
  byte bVar37;
  undefined1 (*pauVar38) [16];
  ulonglong *puVar39;
  undefined4 *puVar40;
  bool bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
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
  longlong lStack_230;
  byte *pbStack_228;
  undefined1 auStack_218 [16];
  longlong lStack_208;
  ulonglong *puStack_200;
  longlong lStack_1f8;
  ulonglong uStack_1f0;
  undefined1 (*pauStack_1e8) [16];
  undefined1 (*pauStack_1e0) [16];
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1d0) [16];
  undefined1 *puStack_1c8;
  undefined2 uStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_1a0;
  undefined1 (*pauStack_198) [16];
  ulonglong uStack_190;
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  ulonglong *puStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined1 (*pauStack_150) [16];
  undefined8 uStack_148;
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  ulonglong uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined4 *puStack_b8;
  undefined1 (*pauStack_b0) [16];
  ulonglong *puStack_a8;
  undefined1 (*pauStack_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined8 uStack_90;
  undefined1 (*pauStack_88) [16];
  undefined1 (*pauStack_80) [16];
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  pauVar26 = param_2;
  pauStack_98 = param_4;
  cVar15 = pdb_140e94b40();
  if (cVar15 == '\0') {
    lStack_160 = 0;
  }
  else {
    lVar29 = 0x52;
    lVar18 = pdb_1408e2180(0x52);
    pauVar28 = pauVar26;
    pauVar33 = param_4;
    pauVar20 = (undefined1 (*) [16])&UNK_14301b2fb;
    if (lVar18 == 1) {
      if ((undefined1 (*) [16])0x52 < pauVar26) {
LAB_1408e1bdd:
        pdb_142dc8070(&UNK_14301b2fb,0x52,0);
LAB_1408e1bfd:
        pdb_142dc8070(&UNK_14301b2fb,0x52);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pauVar33 = pauVar26;
      uVar19 = pdb_1408e2180(pauVar26);
      pauVar28 = pauVar26;
      if ((uVar19 & 1) != 0) {
        if ((undefined *)0x52 < *pauVar26 + 2) goto LAB_1408e1bfd;
        lVar29 = 0x50 - (longlong)pauVar26;
        pauVar20 = (undefined1 (*) [16])(pauVar26[0x14301b2f] + 0xd);
      }
    }
    pauVar26 = pauVar20;
    puVar31 = &UNK_14301b1d0;
    param_4 = (undefined1 (*) [16])&UNK_14301b198;
    do {
      bVar37 = puVar31[-1];
      uVar16 = (uint)(char)bVar37;
      if ((char)bVar37 < '\0') {
        bVar42 = puVar31[-2];
        if ((char)bVar42 < -0x40) {
          bVar5 = puVar31[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar31 + -4;
            puVar31 = puVar31 + -4;
            uVar16 = (*pbVar1 & 7) << 6;
            pauVar33 = (undefined1 (*) [16])(ulonglong)uVar16;
            uVar16 = bVar5 & 0x3f | uVar16;
          }
          else {
            puVar31 = puVar31 + -3;
            uVar16 = bVar5 & 0xf;
          }
          pauVar28 = (undefined1 (*) [16])(ulonglong)(uVar16 << 6);
          uVar16 = bVar42 & 0x3f | uVar16 << 6;
        }
        else {
          puVar31 = puVar31 + -2;
          uVar16 = bVar42 & 0x1f;
        }
        uVar16 = (uint)(bVar37 & 0x3f) | uVar16 << 6;
        if (uVar16 != 0x5c) goto LAB_1408e0bf4;
LAB_1408e0c0c:
        puVar32 = puVar31 + -0x14301b197;
        if ((undefined *)0x38 < puVar32) {
          pdb_142dc8070(&UNK_14301b198,0x38,puVar32,0x38,&UNK_14301b3b0);
          goto LAB_1408e1bdd;
        }
        lVar18 = 0x38 - (longlong)puVar32;
        param_4 = (undefined1 (*) [16])(puVar31 + 1);
        goto LAB_1408e0c2e;
      }
      puVar31 = puVar31 + -1;
      if (uVar16 == 0x5c) goto LAB_1408e0c0c;
LAB_1408e0bf4:
      if (uVar16 == 0x2f) goto LAB_1408e0c0c;
    } while (puVar31 != &UNK_14301b198);
    lVar18 = 0x38;
LAB_1408e0c2e:
    pauVar20 = (undefined1 (*) [16])pdb_140e97000();
    if (pauVar20[6][8] != '\x01') {
      pauVar28 = (undefined1 (*) [16])0x0;
      pauVar20 = (undefined1 (*) [16])pdb_142dde6e0(pauVar20);
      if (pauVar20 == (undefined1 (*) [16])0x0) goto LAB_1408e1b93;
    }
    if (*(longlong *)*pauVar20 != 0) goto LAB_1408e1acb;
    *(undefined8 *)*pauVar20 = 0xffffffffffffffff;
    pauStack_80 = pauVar20;
    uStack_158 = pdb_140e94f10(*pauVar20 + 8,pauVar26,lVar29,param_4,lVar18,1,0);
    *(longlong *)*pauStack_80 = *(longlong *)*pauStack_80 + 1;
    lStack_160 = 1;
  }
  LOCK();
  bVar41 = DAT_143ca4220 == '\0';
  if (bVar41) {
    DAT_143ca4220 = '\x01';
  }
  UNLOCK();
  if (!bVar41) goto LAB_1408e1ad8;
LAB_1408e0cae:
  puVar2 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uVar16 = 0;
    pauVar33 = param_4;
    pauVar20 = _DAT_143ca4230;
    pauVar38 = _DAT_143ca4238;
  }
  else {
    uVar16 = pdb_142dc79e0();
    uVar16 = uVar16 ^ 1;
    pauVar33 = param_4;
    pauVar20 = _DAT_143ca4230;
    pauVar38 = _DAT_143ca4238;
  }
  _DAT_143ca4230 = pauVar20;
  _DAT_143ca4238 = pauVar38;
  if (DAT_143ca4221 != '\0') {
    pauStack_108 = (undefined1 (*) [16])&DAT_143ca4220;
    uVar19 = (ulonglong)pauStack_100 >> 8;
    pauStack_100 = (undefined1 (*) [16])CONCAT71((int7)uVar19,(char)uVar16);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14301b2d0,0x2b,&pauStack_108,&UNK_14301b2b0,&UNK_14301b200);
  }
  pauVar28 = pauVar26;
  if (pauVar38 != (undefined1 (*) [16])0x0) {
    uVar19 = (longlong)pauVar38 * 0x10 - 0x10;
    pauVar33 = (undefined1 (*) [16])(ulonglong)~(uint)uVar19;
    pauVar26 = pauVar20;
    if ((~(uint)uVar19 & 0x70) != 0) {
      lVar18 = -(ulonglong)(((uint)(uVar19 >> 4) & 0xfffffff) + 1 & 7);
      do {
        *(int *)(*pauVar26 + 8) = *(int *)(*pauVar26 + 8) + -1;
        pauVar26 = pauVar26 + 1;
        lVar18 = lVar18 + 1;
        pauVar33 = (undefined1 (*) [16])0x0;
      } while (lVar18 != 0);
    }
    if (0x6f < uVar19) {
      do {
        *(int *)(*pauVar26 + 8) = *(int *)(*pauVar26 + 8) + -1;
        *(int *)(pauVar26[1] + 8) = *(int *)(pauVar26[1] + 8) + -1;
        *(int *)(pauVar26[2] + 8) = *(int *)(pauVar26[2] + 8) + -1;
        *(int *)(pauVar26[3] + 8) = *(int *)(pauVar26[3] + 8) + -1;
        *(int *)(pauVar26[4] + 8) = *(int *)(pauVar26[4] + 8) + -1;
        *(int *)(pauVar26[5] + 8) = *(int *)(pauVar26[5] + 8) + -1;
        *(int *)(pauVar26[6] + 8) = *(int *)(pauVar26[6] + 8) + -1;
        *(int *)(pauVar26[7] + 8) = *(int *)(pauVar26[7] + 8) + -1;
        pauVar26 = pauVar26 + 8;
      } while (pauVar26 != pauVar20 + (longlong)pauVar38);
    }
    pauVar28 = _DAT_143ca4238;
    if (_DAT_143ca4238 != (undefined1 (*) [16])0x0) {
      pauVar20 = (undefined1 (*) [16])0x0;
      pauVar26 = _DAT_143ca4230;
LAB_1408e0d80:
      if (-1 < *(int *)(*pauVar26 + 8)) goto code_r0x0001408e0d8a;
      pauStack_88 = _DAT_143ca4230;
      pauStack_80 = _DAT_143ca4238;
      uVar19 = (ulonglong)uStack_90 >> 0x20;
      uStack_90 = CONCAT44((int)uVar19,uVar16);
      pauVar26 = (undefined1 (*) [16])(*pauVar20 + 1);
      pauStack_180 = pauVar20;
      pauStack_178 = pauVar26;
      pdb_14149d0a0();
      while (pauVar26 < pauStack_80) {
        while (pauVar28 = pauStack_88, -1 < *(int *)(pauStack_88[(longlong)pauVar26] + 8)) {
          uVar23 = *(undefined8 *)(pauStack_88[(longlong)pauVar26] + 8);
          *(undefined8 *)pauStack_88[(longlong)pauVar20] =
               *(undefined8 *)pauStack_88[(longlong)pauVar26];
          *(undefined8 *)(pauStack_88[(longlong)pauVar20] + 8) = uVar23;
          pauVar20 = (undefined1 (*) [16])(*pauVar20 + 1);
          pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
          if (pauStack_80 <= pauVar26) goto LAB_1408e1ab1;
        }
        pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
        pauStack_180 = pauVar20;
        pauStack_178 = pauVar26;
        pdb_14149d0a0();
      }
LAB_1408e1ab1:
      _DAT_143ca4238 = pauVar20;
      if ((char)uStack_90 != '\0') goto LAB_1408e0da9;
      goto LAB_1408e0d9a;
    }
  }
LAB_1408e0d96:
  if ((char)uVar16 == '\0') {
LAB_1408e0d9a:
    if ((*puVar2 & 0x7fffffffffffffff) != 0) goto LAB_1408e1ba0;
  }
LAB_1408e0da9:
  cVar15 = DAT_143ca4220;
  LOCK();
  DAT_143ca4220 = '\0';
  UNLOCK();
  if (cVar15 == '\x02') {
    pdb_142dc6ca0(&DAT_143ca4220);
  }
  plVar21 = (longlong *)pdb_140f3bda0();
  pauStack_a0 = param_1;
  if ((char)plVar21[2] == '\x01') {
    lStack_118 = *plVar21;
    pauVar28 = (undefined1 (*) [16])plVar21[1];
  }
  else {
    lStack_118 = pdb_140f4fd10();
    *plVar21 = lStack_118;
    plVar21[1] = (longlong)pauVar28;
    *(undefined1 *)(plVar21 + 2) = 1;
  }
  *plVar21 = lStack_118 + 1;
  uVar14 = _UNK_142e47bfc;
  uVar13 = _UNK_142e47bf8;
  lStack_128 = _DAT_14301b240;
  lStack_120 = _UNK_14301b248;
  pauStack_138 = _DAT_14301b230;
  uStack_130 = _UNK_14301b238;
  pauVar20 = (undefined1 (*) [16])**(undefined8 **)*param_3;
  pauStack_80 = (undefined1 (*) [16])(*(undefined8 **)*param_3)[3];
  auVar43 = *pauVar20;
  pauVar26 = pauVar20 + 1;
  param_1 = (undefined1 (*) [16])
            (ulonglong)
            ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
  pauStack_88 = *(undefined1 (**) [16])*param_2;
  iVar35 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                  CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  pauStack_110 = pauVar28;
  while (pauStack_80 != (undefined1 (*) [16])0x0) {
    if ((short)param_1 == 0) {
      do {
        auVar43 = *pauVar26;
        pauVar20 = pauVar20 + -0x10;
        pauVar26 = pauVar26 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
                          (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
        param_1 = (undefined1 (*) [16])(ulonglong)uVar16;
      } while (uVar16 == 0);
    }
    iVar7 = 0;
    uVar17 = (uint)param_1;
    for (uVar16 = uVar17; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
      iVar7 = iVar7 + 1;
    }
    lVar18 = *(longlong *)((longlong)pauVar20 + (-8 - (ulonglong)(uint)(iVar7 << 4)));
    uStack_71 = 1;
    lVar29 = pdb_140c413e0(lVar18 + 0x50);
    param_1 = (undefined1 (*) [16])(ulonglong)(uVar17 - 1 & uVar17);
    pauStack_80 = (undefined1 (*) [16])((longlong)pauStack_80 + -1);
    if ((lVar29 == 1) && (*(longlong *)(lVar18 + 0x100) != 0)) {
      pauStack_108 = pauVar28;
      uVar22 = pdb_1400af0a0(&lStack_118);
      bVar37 = (byte)(uVar22 >> 0x38);
      bVar42 = bVar37 >> 1;
      auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar43 = pshuflw(auVar43,auVar43,0);
      lVar29 = 0;
      uVar19 = uVar22;
      while( true ) {
        uVar19 = uVar19 & uStack_130;
        pcVar3 = *pauStack_138 + uVar19;
        auVar46[0] = -(*pcVar3 == auVar43[0]);
        auVar46[1] = -(pcVar3[1] == auVar43[1]);
        auVar46[2] = -(pcVar3[2] == auVar43[2]);
        auVar46[3] = -(pcVar3[3] == auVar43[3]);
        auVar46[4] = -(pcVar3[4] == auVar43[4]);
        auVar46[5] = -(pcVar3[5] == auVar43[5]);
        auVar46[6] = -(pcVar3[6] == auVar43[6]);
        auVar46[7] = -(pcVar3[7] == auVar43[7]);
        auVar46[8] = -(pcVar3[8] == auVar43[0]);
        auVar46[9] = -(pcVar3[9] == auVar43[1]);
        auVar46[10] = -(pcVar3[10] == auVar43[2]);
        auVar46[0xb] = -(pcVar3[0xb] == auVar43[3]);
        auVar46[0xc] = -(pcVar3[0xc] == auVar43[4]);
        auVar46[0xd] = -(pcVar3[0xd] == auVar43[5]);
        auVar46[0xe] = -(pcVar3[0xe] == auVar43[6]);
        auVar46[0xf] = -(pcVar3[0xf] == auVar43[7]);
        uVar34 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar34;
        while (uVar34 != 0) {
          uVar17 = 0;
          for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          pauVar38 = pauStack_138 + (uVar17 + uVar19 & uStack_130) * -2;
          if (*(undefined1 (**) [16])pauVar38[-2] == pauVar28) goto LAB_1408e1044;
          uVar34 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar34);
        }
        auVar44[0] = -(*pcVar3 == (char)iVar35);
        auVar44[1] = -(pcVar3[1] == (char)((uint)iVar35 >> 8));
        auVar44[2] = -(pcVar3[2] == (char)((uint)iVar35 >> 0x10));
        auVar44[3] = -(pcVar3[3] == (char)((uint)iVar35 >> 0x18));
        auVar44[4] = -(pcVar3[4] == (char)iVar9);
        auVar44[5] = -(pcVar3[5] == (char)((uint)iVar9 >> 8));
        auVar44[6] = -(pcVar3[6] == (char)((uint)iVar9 >> 0x10));
        auVar44[7] = -(pcVar3[7] == (char)((uint)iVar9 >> 0x18));
        auVar44[8] = -(pcVar3[8] == (char)iVar10);
        auVar44[9] = -(pcVar3[9] == (char)((uint)iVar10 >> 8));
        auVar44[10] = -(pcVar3[10] == (char)((uint)iVar10 >> 0x10));
        auVar44[0xb] = -(pcVar3[0xb] == (char)((uint)iVar10 >> 0x18));
        auVar44[0xc] = -(pcVar3[0xc] == (char)iVar11);
        auVar44[0xd] = -(pcVar3[0xd] == (char)((uint)iVar11 >> 8));
        auVar44[0xe] = -(pcVar3[0xe] == (char)((uint)iVar11 >> 0x10));
        auVar44[0xf] = -(pcVar3[0xf] == (char)((uint)iVar11 >> 0x18));
        uVar34 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf
        ;
        if (uVar34 != 0) break;
        uVar19 = uVar19 + lVar29 + 0x10;
        lVar29 = lVar29 + 0x10;
      }
      if (lStack_128 == 0) {
        uStack_71 = 1;
        pdb_142dda2e0(&pauStack_138,1,&lStack_118,CONCAT71((uint7)(byte)(uVar34 >> 8),1));
      }
      uVar22 = uVar22 & uStack_130;
      auVar43 = *(undefined1 (*) [16])(*pauStack_138 + uVar22);
      uVar34 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar43[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar34;
      if (uVar34 == 0) {
        lVar29 = 0x10;
        do {
          uVar22 = uVar22 + lVar29 & uStack_130;
          auVar43 = *(undefined1 (*) [16])(*pauStack_138 + uVar22);
          lVar29 = lVar29 + 0x10;
          uVar16 = (uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
                                  (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
        } while (uVar16 == 0);
      }
      uVar17 = 0;
      for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
        uVar17 = uVar17 + 1;
      }
      uVar19 = uVar17 + uVar22 & uStack_130;
      bVar42 = (*pauStack_138)[uVar19];
      if (-1 < (char)bVar42) {
        auVar43 = *pauStack_138;
        uVar16 = 0;
        for (uVar17 = (uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
                                     (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar43[0xf] >> 7) << 0xf); (uVar17 & 1) == 0;
            uVar17 = uVar17 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        uVar19 = (ulonglong)uVar16;
        bVar42 = (*pauStack_138)[uVar19];
      }
      bVar37 = bVar37 >> 1;
      (*pauStack_138)[uVar19] = bVar37;
      pauStack_138[1][uVar19 - 0x10 & uStack_130] = bVar37;
      pauVar38 = pauStack_138 + uVar19 * -2;
      *(undefined1 (**) [16])pauStack_138[uVar19 * -2 + -2] = pauVar28;
      *(undefined8 *)(pauVar38[-2] + 8) = 0;
      *(undefined8 *)pauVar38[-1] = 4;
      *(undefined8 *)(pauVar38[-1] + 8) = 0;
      auVar43._0_8_ = CONCAT71(0,bVar42 & 1);
      auVar43._8_4_ = uVar13;
      auVar43._12_4_ = uVar14;
      lStack_128 = lStack_128 - auVar43._0_8_;
      lStack_120 = lStack_120 - auVar43._8_8_;
LAB_1408e1044:
      uStack_71 = 1;
      lVar29 = pdb_140b54f80(pauStack_88,pauVar28,&UNK_14301b1e8);
      pauVar27 = *(undefined1 (**) [16])(lVar18 + 0xf8);
      uVar19 = *(ulonglong *)(lVar18 + 0x100);
      pauVar33 = pauVar27;
      if (lVar29 == 0) {
        pauVar28 = *(undefined1 (**) [16])(pauVar38[-1] + 8);
        if ((ulonglong)(*(longlong *)(pauVar38[-2] + 8) - (longlong)pauVar28) < uVar19) {
          uStack_71 = 1;
          pdb_142d7f1b0();
          pauVar28 = *(undefined1 (**) [16])(pauVar38[-1] + 8);
          lVar18 = *(longlong *)pauVar38[-1];
          if (uVar19 == 1) goto LAB_1408e10a0;
LAB_1408e1101:
          lVar36 = (longlong)pauVar28 * 0x20 + lVar18;
          lVar30 = 0x20;
          lVar29 = 0;
          do {
            uVar23 = *(undefined8 *)(pauVar27[-2] + lVar30);
            uVar24 = *(undefined8 *)((longlong)(pauVar27[-2] + lVar30) + 8);
            uVar12 = *(undefined8 *)((longlong)(pauVar27[-1] + lVar30) + 8);
            puVar25 = (undefined8 *)(lVar36 + -0x10 + lVar30);
            *puVar25 = *(undefined8 *)(pauVar27[-1] + lVar30);
            puVar25[1] = uVar12;
            puVar25 = (undefined8 *)(lVar36 + -0x20 + lVar30);
            *puVar25 = uVar23;
            puVar25[1] = uVar24;
            uVar23 = *(undefined8 *)(pauVar27[1] + lVar30);
            uVar24 = *(undefined8 *)((longlong)(pauVar27[1] + lVar30) + 8);
            *(undefined1 (*) [16])(lVar36 + lVar30) = *(undefined1 (*) [16])(*pauVar27 + lVar30);
            puVar25 = (undefined8 *)(lVar36 + 0x10 + lVar30);
            *puVar25 = uVar23;
            puVar25[1] = uVar24;
            lVar30 = lVar30 + 0x40;
            lVar29 = lVar29 + -2;
          } while (-lVar29 != (uVar19 & 0xfffffffffffffffe));
          pauVar28 = (undefined1 (*) [16])((longlong)pauVar28 - lVar29);
          if ((uVar19 & 1) == 0) goto LAB_1408e118f;
          lVar29 = -lVar29;
LAB_1408e1169:
          auVar43 = pauVar27[lVar29 * 2];
          uVar23 = *(undefined8 *)(pauVar27[lVar29 * 2 + 1] + 8);
          puVar25 = (undefined8 *)(lVar18 + 0x10 + (longlong)pauVar28 * 0x20);
          *puVar25 = *(undefined8 *)pauVar27[lVar29 * 2 + 1];
          puVar25[1] = uVar23;
          *(undefined1 (*) [16])(lVar18 + (longlong)pauVar28 * 0x20) = auVar43;
          pauVar28 = (undefined1 (*) [16])(*pauVar28 + 1);
        }
        else if (uVar19 != 0) {
          lVar18 = *(longlong *)pauVar38[-1];
          if (uVar19 != 1) goto LAB_1408e1101;
LAB_1408e10a0:
          lVar29 = 0;
          goto LAB_1408e1169;
        }
LAB_1408e118f:
        *(undefined1 (**) [16])(pauVar38[-1] + 8) = pauVar28;
      }
      else {
        uStack_71 = 1;
        pdb_1408d4170(pauVar38[-2] + 8,pauVar27,pauVar27 + uVar19 * 2,
                      *(undefined4 *)(lVar29 + 0x290),*(int *)(lVar29 + 600) != 2);
        pauVar28 = pauVar27;
      }
    }
  }
  pauVar26 = *(undefined1 (**) [16])*pauStack_98;
  pauStack_108 = *(undefined1 (**) [16])*pauVar26;
  pauStack_f8 = (undefined1 (*) [16])(*pauStack_108 + *(longlong *)(*pauVar26 + 8) + 1);
  auVar43 = *pauStack_108;
  pauStack_e8 = *(undefined1 (**) [16])(pauVar26[1] + 8);
  pauStack_100 = pauStack_108 + 1;
  pauStack_f0 = (undefined1 (*) [16])
                CONCAT62(pauStack_f0._2_6_,
                         ~((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar43[0xf] >> 7) << 0xf));
  pauStack_e0 = (undefined1 (*) [16])&pauStack_138;
  uStack_71 = 1;
  pdb_141499d10(&lStack_208,&pauStack_108);
  uStack_90 = lStack_208;
  puVar2 = puStack_200 + lStack_1f8;
  pauStack_80 = (undefined1 (*) [16])
                CONCAT44(pauStack_80._4_4_,*(undefined4 *)(pauStack_98[1] + 0xc));
  puVar40 = *(undefined4 **)pauStack_98[1];
  pauStack_150 = pauVar26 + 2;
  puStack_a8 = puStack_200;
  for (puVar39 = puStack_200; puVar39 != puVar2; puVar39 = puVar39 + 1) {
    uStack_1f0 = *puVar39;
    *puVar40 = pauStack_80._0_4_;
    pdb_1400af0a0(pauVar26 + 2,(undefined1 (*) [16])&uStack_1f0);
    pauVar33 = (undefined1 (*) [16])&uStack_1f0;
    pdb_140ca8a50(&pauStack_108,pauVar26);
    if (!SBORROW8(0,(longlong)pauStack_100)) {
      pauStack_88 = pauStack_100;
      pauStack_98 = pauStack_f8;
      pdb_1408e0890(pauStack_e8);
      if (pauStack_88 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_98,(longlong)pauStack_88 << 5,4);
      }
    }
  }
  pauVar28 = (undefined1 (*) [16])0x0;
  if (uStack_90 != 0) {
    pauVar28 = (undefined1 (*) [16])(uStack_90 << 3);
    pub_1406abac0((byte *)puStack_a8,(ulonglong)pauVar28,8);
  }
  auVar43 = *pauStack_138;
  if (uStack_130 == 0) {
    uStack_1f0 = 0;
  }
  else {
    pauVar28 = (undefined1 (*) [16])(uStack_130 * 0x21 + 0x31);
    pauVar33 = pauStack_138 + uStack_130 * -2 + -2;
    uStack_1f0 = 0x10;
  }
  param_3 = pauStack_138 + 1;
  uStack_1a0 = uStack_130;
  puStack_1c8 = *pauStack_138 + uStack_130 + 1;
  pauStack_1d8 = pauStack_138;
  uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
  param_2 = (undefined1 (*) [16])(ulonglong)uVar16;
  uStack_1c0 = (undefined2)uVar16;
  lStack_1b8 = lStack_120;
  uStack_148 = *(undefined8 *)*pauStack_a0;
  unaff_XMM6_Ba = 0xff;
  unaff_XMM6_Bb = 0xff;
  unaff_XMM6_Bc = 0xff;
  unaff_XMM6_Bd = 0xff;
  unaff_XMM6_Be = 0xff;
  unaff_XMM6_Bf = 0xff;
  unaff_XMM6_Bg = 0xff;
  unaff_XMM6_Bh = 0xff;
  unaff_XMM6_Bi = 0xff;
  unaff_XMM6_Bj = 0xff;
  unaff_XMM6_Bk = 0xff;
  unaff_XMM6_Bl = 0xff;
  unaff_XMM6_Bm = 0xff;
  unaff_XMM6_Bn = 0xff;
  unaff_XMM6_Bo = 0xff;
  unaff_XMM6_Bp = 0xff;
  pauVar20 = pauStack_138;
  lVar18 = lStack_120;
  pauStack_1e8 = pauVar28;
  pauStack_1e0 = pauVar33;
  pauStack_1d0 = param_3;
  pauStack_198 = pauVar28;
  uStack_190 = uStack_1f0;
  pauStack_188 = pauVar33;
  puStack_b8 = puVar40;
LAB_1408e1432:
  while (lVar18 != 0) {
    if ((short)param_2 == 0) {
      do {
        auVar43 = *param_3;
        pauVar20 = pauVar20 + -0x20;
        param_3 = param_3 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
                          (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
        param_2 = (undefined1 (*) [16])(ulonglong)uVar16;
        pauStack_1d8 = pauVar20;
        pauStack_1d0 = param_3;
      } while (uVar16 == 0);
    }
    uVar17 = (uint)param_2;
    iVar35 = 0;
    for (uVar16 = uVar17; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
      iVar35 = iVar35 + 1;
    }
    uVar17 = uVar17 - 1 & uVar17;
    param_2 = (undefined1 (*) [16])(ulonglong)uVar17;
    uStack_1c0 = (undefined2)uVar17;
    uVar16 = iVar35 << 5;
    lStack_1b8 = lVar18 + -1;
    pauVar28 = *(undefined1 (**) [16])((longlong)pauVar20 + (-0x18 - (ulonglong)uVar16));
    lVar18 = lStack_1b8;
    if (SBORROW8(0,(longlong)pauVar28)) goto joined_r0x0001408e1932;
    puStack_168 = *(ulonglong **)((longlong)pauVar20 + (-0x20 - (ulonglong)uVar16));
    pauVar38 = *(undefined1 (**) [16])((longlong)pauVar20 + (-0x10 - (ulonglong)uVar16));
    pauStack_88 = *(undefined1 (**) [16])((longlong)pauVar20 + (-8 - (ulonglong)uVar16));
    puStack_a8 = puStack_168;
    pauStack_a0 = pauVar28;
    uStack_90 = lStack_1b8;
    if (*(longlong *)(pauVar26[1] + 8) != 0) {
      puVar31 = (undefined *)pdb_1400af0a0(pauStack_150,&puStack_168);
      lVar18 = *(longlong *)*pauVar26;
      bVar37 = (byte)((ulonglong)puVar31 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar37,bVar37));
      auVar43 = pshuflw(auVar43,auVar43,0);
      param_1 = (undefined1 (*) [16])0x0;
      while( true ) {
        uVar19 = (ulonglong)puVar31 & *(ulonglong *)(*pauVar26 + 8);
        pcVar3 = (char *)(lVar18 + uVar19);
        auVar47[0] = -(*pcVar3 == auVar43[0]);
        auVar47[1] = -(pcVar3[1] == auVar43[1]);
        auVar47[2] = -(pcVar3[2] == auVar43[2]);
        auVar47[3] = -(pcVar3[3] == auVar43[3]);
        auVar47[4] = -(pcVar3[4] == auVar43[4]);
        auVar47[5] = -(pcVar3[5] == auVar43[5]);
        auVar47[6] = -(pcVar3[6] == auVar43[6]);
        auVar47[7] = -(pcVar3[7] == auVar43[7]);
        auVar47[8] = -(pcVar3[8] == auVar43[0]);
        auVar47[9] = -(pcVar3[9] == auVar43[1]);
        auVar47[10] = -(pcVar3[10] == auVar43[2]);
        auVar47[0xb] = -(pcVar3[0xb] == auVar43[3]);
        auVar47[0xc] = -(pcVar3[0xc] == auVar43[4]);
        auVar47[0xd] = -(pcVar3[0xd] == auVar43[5]);
        auVar47[0xe] = -(pcVar3[0xe] == auVar43[6]);
        auVar47[0xf] = -(pcVar3[0xf] == auVar43[7]);
        uVar34 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf
        ;
        pauVar33 = (undefined1 (*) [16])(ulonglong)uVar34;
        while (uVar34 != 0) {
          uVar16 = 0;
          for (uVar17 = (uint)pauVar33; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          lVar29 = (uVar16 + uVar19 & *(ulonglong *)(*pauVar26 + 8)) * -0x30;
          if (puStack_a8 == *(ulonglong **)(lVar18 + -0x30 + lVar29)) {
            lVar18 = lVar18 + lVar29;
            if (*(undefined1 (**) [16])(lVar18 + -0x18) != pauStack_88) goto LAB_1408e1640;
            if (pauStack_88 == (undefined1 (*) [16])0x0) goto LAB_1408e1908;
            lVar18 = *(longlong *)(lVar18 + -0x20);
            lVar29 = 0x14;
            pauVar28 = pauStack_88;
            goto LAB_1408e15c0;
          }
          iVar35 = (uint)pauVar33 - 1;
          uVar34 = (ushort)iVar35 & (ushort)pauVar33;
          pauVar33 = (undefined1 (*) [16])(ulonglong)CONCAT22((short)((uint)iVar35 >> 0x10),uVar34);
        }
        auVar45[0] = -(*pcVar3 == -1);
        auVar45[1] = -(pcVar3[1] == -1);
        auVar45[2] = -(pcVar3[2] == -1);
        auVar45[3] = -(pcVar3[3] == -1);
        auVar45[4] = -(pcVar3[4] == -1);
        auVar45[5] = -(pcVar3[5] == -1);
        auVar45[6] = -(pcVar3[6] == -1);
        auVar45[7] = -(pcVar3[7] == -1);
        auVar45[8] = -(pcVar3[8] == -1);
        auVar45[9] = -(pcVar3[9] == -1);
        auVar45[10] = -(pcVar3[10] == -1);
        auVar45[0xb] = -(pcVar3[0xb] == -1);
        auVar45[0xc] = -(pcVar3[0xc] == -1);
        auVar45[0xd] = -(pcVar3[0xd] == -1);
        auVar45[0xe] = -(pcVar3[0xe] == -1);
        auVar45[0xf] = -(pcVar3[0xf] == -1);
        if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar45 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar45 >> 0x1f,0) & 1) != 0) || (SUB161(auVar45 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') break;
        puVar31 = param_1[1] + uVar19;
        param_1 = param_1 + 1;
      }
    }
LAB_1408e1640:
    *puVar40 = pauStack_80._0_4_;
    pauStack_98 = pauVar38;
    uVar23 = pdb_1400af0a0(pauStack_150,&puStack_168);
    uStack_72 = 1;
    pdb_140ca8a50(&pauStack_108,pauVar26,uVar23,&puStack_168);
    if (!SBORROW8(0,(longlong)pauStack_100)) {
      pauStack_b0 = pauStack_100;
      pauStack_140 = pauStack_f8;
      pdb_1408e0890(pauStack_e8);
      if (pauStack_b0 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_140,(longlong)pauStack_b0 << 5,4);
      }
    }
    uStack_72 = 1;
    uVar23 = pdb_140a92040(uStack_148);
    lVar18 = (longlong)pauStack_88 << 5;
    uStack_72 = 1;
    uVar24 = pdb_140e1cff0(lVar18,0x210);
    uStack_72 = 1;
    pauVar33 = (undefined1 (*) [16])0x18;
    pdb_1414f3f20(&pauStack_108,uVar23,&UNK_14301b1d0,0x18,uVar24,pauStack_98,lVar18);
    pauVar28 = pauStack_100;
    if (pauStack_108 != (undefined1 (*) [16])0xb) {
      puVar31 = pauStack_108[-1] + 8;
      if (pauStack_108 < (undefined1 (*) [16])0x8) {
        puVar31 = (undefined *)0x0;
      }
      if (puVar31 == (undefined *)0x0) {
        pauVar28 = pauStack_e8;
        pauVar27 = pauStack_e0;
        if (((pauStack_108 < (undefined1 (*) [16])0x6) &&
            ((0x32UL >> ((ulonglong)pauStack_108 & 0x3f) & 1) != 0)) &&
           (pauStack_100 != (undefined1 (*) [16])0x0)) {
          pub_1406abac0((byte *)pauStack_f8,(ulonglong)pauStack_100,1);
          pauVar28 = pauStack_e8;
          pauVar27 = pauStack_e0;
        }
joined_r0x0001408e18ca:
        pauVar38 = pauStack_98;
        puVar40 = puStack_b8;
        if (pauVar28 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauVar27,(ulonglong)pauVar28,1);
          pauVar38 = pauStack_98;
          puVar40 = puStack_b8;
        }
      }
      else {
        pauVar27 = pauStack_f8;
        if (puVar31 != (undefined *)0x1) goto joined_r0x0001408e18ca;
        uStack_72 = 1;
        pdb_1404b83f0(&pauStack_100);
        pauVar38 = pauStack_98;
        puVar40 = puStack_b8;
      }
      goto LAB_1408e1908;
    }
    pauStack_170 = pauStack_100;
    uStack_73 = 1;
    lVar18 = pdb_140a92040(uStack_148);
    pcVar6 = *(code **)(lVar18 + 0x520);
    uVar23 = *(undefined8 *)(lVar18 + 0x658);
    uStack_73 = 1;
    puVar25 = (undefined8 *)pdb_140e17330(&pauStack_170);
    pauStack_f8 = (undefined1 (*) [16])*puVar25;
    pauStack_108 = (undefined1 (*) [16])CONCAT44(pauStack_108._4_4_,0x3b9e8321);
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauVar33 = (undefined1 (*) [16])&pauStack_108;
    pauStack_e8 = (undefined1 (*) [16])(*pcVar6)(uVar23,pauVar33);
    *puStack_b8 = pauStack_80._0_4_;
    pauStack_108 = pauStack_a0;
    pauStack_100 = pauStack_98;
    pauStack_f8 = pauStack_88;
    pauStack_f0 = pauVar28;
    uStack_73 = 0;
    pdb_1414b4900(&lStack_230,pauVar26,puStack_a8);
    lVar18 = uStack_90;
    param_1 = pauVar26;
    puVar40 = puStack_b8;
    if (!SBORROW8(0,lStack_230)) {
      if (lStack_230 != 0) {
        pub_1406abac0(pbStack_228,lStack_230 << 5,4);
      }
      uStack_73 = 0;
      pdb_14149d0a0(auStack_218);
      lVar18 = uStack_90;
      puVar40 = puStack_b8;
    }
  }
  goto LAB_1408e1938;
code_r0x0001408e0d8a:
  pauVar20 = (undefined1 (*) [16])(*pauVar20 + 1);
  pauVar26 = pauVar26 + 1;
  if (_DAT_143ca4238 == pauVar20) goto LAB_1408e0d96;
  goto LAB_1408e0d80;
joined_r0x0001408e1932:
  for (; lVar18 != 0; lVar18 = lVar18 + -1) {
    uVar16 = (uint)param_2;
    if ((short)param_2 == 0) {
      do {
        auVar43 = *param_3;
        pauVar20 = pauVar20 + -0x20;
        param_3 = param_3 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
                          (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar16 == 0);
    }
    iVar35 = 0;
    for (uVar17 = uVar16; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
      iVar35 = iVar35 + 1;
    }
    lVar29 = *(longlong *)((longlong)pauVar20 + (-0x18 - (ulonglong)(uint)(iVar35 << 5)));
    if (lVar29 != 0) {
      pub_1406abac0(*(byte **)((longlong)pauVar20 + (-0x10 - (ulonglong)(uint)(iVar35 << 5))),
                    lVar29 << 5,4);
    }
    param_2 = (undefined1 (*) [16])(ulonglong)(uVar16 - 1 & uVar16);
  }
LAB_1408e1938:
  pauVar28 = pauStack_198;
  if ((uStack_1a0 != 0) && (pauStack_198 != (undefined1 (*) [16])0x0)) {
    pub_1406abac0((byte *)pauStack_188,(ulonglong)pauStack_198,uStack_190);
  }
  if (lStack_160 == 0) {
    return;
  }
  plVar21 = (longlong *)pdb_140e97000();
  if ((char)plVar21[0xd] != '\x01') {
    pauVar28 = (undefined1 (*) [16])0x0;
    plVar21 = (longlong *)pdb_142dde6e0(plVar21);
    if (plVar21 != (longlong *)0x0) goto LAB_1408e196e;
LAB_1408e1b93:
    pdb_142dc7890(&UNK_14330e598);
LAB_1408e1ba0:
    cVar15 = pdb_142dc79e0();
    if (cVar15 == '\0') {
      DAT_143ca4221 = '\x01';
    }
    goto LAB_1408e0da9;
  }
LAB_1408e196e:
  if (*plVar21 == 0) {
    *plVar21 = -1;
    pauStack_80 = (undefined1 (*) [16])plVar21;
    pdb_140e95370(plVar21 + 1,uStack_158);
    *(longlong *)pauStack_80 = *(longlong *)pauStack_80 + 1;
    return;
  }
LAB_1408e1acb:
  pdb_142dc8090(&UNK_14330e608);
  pauVar26 = pauVar28;
  param_4 = pauVar33;
LAB_1408e1ad8:
  pdb_142dc6be0(&DAT_143ca4220);
  goto LAB_1408e0cae;
  while( true ) {
    lVar29 = lVar29 + 0x20;
    pauVar28 = (undefined1 (*) [16])(pauVar28[-1] + 0xf);
    if (pauVar28 == (undefined1 (*) [16])0x0) break;
LAB_1408e15c0:
    if ((((((*(int *)(lVar18 + -4 + lVar29) != *(int *)(pauVar38[-1] + lVar29 + 0xc)) ||
           (fVar4 = *(float *)(lVar18 + -0x14 + lVar29),
           fVar4 != *(float *)(pauVar38[-2] + lVar29 + 0xc))) ||
          (NAN(fVar4) || NAN(*(float *)(pauVar38[-2] + lVar29 + 0xc)))) ||
         (((fVar4 = *(float *)(lVar18 + -0x10 + lVar29), fVar4 != *(float *)(pauVar38[-1] + lVar29)
           || (NAN(fVar4) || NAN(*(float *)(pauVar38[-1] + lVar29)))) ||
          ((fVar4 = *(float *)(lVar18 + -0xc + lVar29),
           fVar4 != *(float *)(pauVar38[-1] + lVar29 + 4) ||
           ((NAN(fVar4) || NAN(*(float *)(pauVar38[-1] + lVar29 + 4)) ||
            (fVar4 = *(float *)(lVar18 + -8 + lVar29),
            fVar4 != *(float *)(pauVar38[-1] + lVar29 + 8))))))))) ||
        (NAN(fVar4) || NAN(*(float *)(pauVar38[-1] + lVar29 + 8)))) ||
       (uVar16 = *(uint *)(lVar18 + 8 + lVar29), pauVar33 = (undefined1 (*) [16])(ulonglong)uVar16,
       *(longlong *)(lVar18 + lVar29) != *(longlong *)(*pauVar38 + lVar29) ||
       *(uint *)(*pauVar38 + lVar29 + 8) != uVar16)) goto LAB_1408e1640;
  }
LAB_1408e1908:
  lVar18 = uStack_90;
  if (pauStack_a0 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauVar38,(longlong)pauStack_a0 << 5,4);
  }
  goto LAB_1408e1432;
}

