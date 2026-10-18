// VA 0x140aa21c0, PDB extent 3486 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_storage_decorators<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_storage_decorators<ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 3486 */

void pdb_140aa21c0(longlong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  longlong *param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [16];
  undefined *puVar17;
  uint uVar18;
  longlong unaff_RBX;
  byte unaff_SIL;
  byte bVar19;
  longlong *unaff_RDI;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  longlong lVar22;
  ushort uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_R14;
  undefined1 (*pauVar26) [16];
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  longlong lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  longlong lStack_1a8;
  longlong *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  longlong lStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  ulonglong uStack_120;
  longlong lStack_118;
  longlong *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  int iStack_80;
  int iStack_7c;
  longlong *plStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    unaff_RDI = param_1 + 4;
    lStack_148 = param_3;
    unaff_R14 = pdb_1400af0a0(unaff_RDI,&lStack_148);
    bVar27 = (byte)(unaff_R14 >> 0x38);
    unaff_SIL = bVar27 >> 1;
    bVar19 = bVar27 >> 1;
    param_2 = param_1[1];
    auVar28 = ZEXT216(CONCAT11(bVar27 >> 1,bVar27 >> 1));
    auVar28 = pshuflw(auVar28,auVar28,0);
    lVar25 = 0;
    uVar15 = unaff_R14;
    while( true ) {
      uVar15 = uVar15 & param_2;
      pcVar1 = (char *)(*param_1 + uVar15);
      auVar34[0] = -(*pcVar1 == auVar28[0]);
      auVar34[1] = -(pcVar1[1] == auVar28[1]);
      auVar34[2] = -(pcVar1[2] == auVar28[2]);
      auVar34[3] = -(pcVar1[3] == auVar28[3]);
      auVar34[4] = -(pcVar1[4] == auVar28[4]);
      auVar34[5] = -(pcVar1[5] == auVar28[5]);
      auVar34[6] = -(pcVar1[6] == auVar28[6]);
      auVar34[7] = -(pcVar1[7] == auVar28[7]);
      auVar34[8] = -(pcVar1[8] == auVar28[0]);
      auVar34[9] = -(pcVar1[9] == auVar28[1]);
      auVar34[10] = -(pcVar1[10] == auVar28[2]);
      auVar34[0xb] = -(pcVar1[0xb] == auVar28[3]);
      auVar34[0xc] = -(pcVar1[0xc] == auVar28[4]);
      auVar34[0xd] = -(pcVar1[0xd] == auVar28[5]);
      auVar34[0xe] = -(pcVar1[0xe] == auVar28[6]);
      auVar34[0xf] = -(pcVar1[0xf] == auVar28[7]);
      uVar23 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar23;
      while (uVar23 != 0) {
        uVar18 = 0;
        for (uVar8 = uVar10; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        if (*(longlong *)(*param_1 + -0x98 + (uVar18 + uVar15 & param_2) * -0x98) == param_3) {
          return;
        }
        uVar23 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar23);
      }
      auVar31[0] = -(*pcVar1 == -1);
      auVar31[1] = -(pcVar1[1] == -1);
      auVar31[2] = -(pcVar1[2] == -1);
      auVar31[3] = -(pcVar1[3] == -1);
      auVar31[4] = -(pcVar1[4] == -1);
      auVar31[5] = -(pcVar1[5] == -1);
      auVar31[6] = -(pcVar1[6] == -1);
      auVar31[7] = -(pcVar1[7] == -1);
      auVar31[8] = -(pcVar1[8] == -1);
      auVar31[9] = -(pcVar1[9] == -1);
      auVar31[10] = -(pcVar1[10] == -1);
      auVar31[0xb] = -(pcVar1[0xb] == -1);
      auVar31[0xc] = -(pcVar1[0xc] == -1);
      auVar31[0xd] = -(pcVar1[0xd] == -1);
      auVar31[0xe] = -(pcVar1[0xe] == -1);
      auVar31[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      uVar15 = uVar15 + lVar25 + 0x10;
      lVar25 = lVar25 + 0x10;
    }
    if (param_1[2] == 0) {
      param_2 = 1;
      pdb_142dadf10(param_1,1,unaff_RDI,CONCAT71((int7)(uVar15 >> 8),1));
      plVar11 = (longlong *)pdb_14008d710(0);
    }
    else {
      plVar11 = (longlong *)pdb_14008d710(0);
    }
    if (plVar11 == (longlong *)0x0) goto LAB_140aa2c0d;
    lStack_98 = *plVar11;
    lStack_90 = plVar11[1];
    *plVar11 = *plVar11 + 1;
    unaff_XMM6_Qb = _UNK_14306c4f8;
    unaff_XMM6_Qa = _DAT_14306c4f0;
    unaff_XMM7_Dd = _UNK_14306c4ec;
    unaff_XMM7_Dc = _UNK_14306c4e8;
    unaff_XMM7_Db = _UNK_14306c4e4;
    unaff_XMM7_Da = _DAT_14306c4e0;
    uStack_a8 = _DAT_14306c4f0;
    uStack_a0 = _UNK_14306c4f8;
    uStack_b8 = CONCAT44(_UNK_14306c4e4,_DAT_14306c4e0);
    uStack_b0 = (longlong *)CONCAT44(_UNK_14306c4ec,_UNK_14306c4e8);
    unaff_RDI = (longlong *)pdb_140f3bda0();
    unaff_SIL = bVar27 >> 1;
    if ((char)unaff_RDI[2] != '\x01') goto LAB_140aa2c1a;
    lStack_128 = *unaff_RDI;
    param_2 = unaff_RDI[1];
  }
  else {
    param_3 = unaff_RBX;
    plStack_78 = param_1;
    if (param_2 == 1) {
      if (param_1[0x18] != 0) {
        return;
      }
      plVar11 = (longlong *)pdb_14008d710(0);
      if (plVar11 != (longlong *)0x0) {
        lStack_98 = *plVar11;
        lStack_90 = plVar11[1];
        *plVar11 = *plVar11 + 1;
        uVar9 = _UNK_14306c4f8;
        uVar3 = _DAT_14306c4f0;
        uStack_a8 = _DAT_14306c4f0;
        uStack_a0 = _UNK_14306c4f8;
        lVar25 = CONCAT44(_UNK_14306c4e4,_DAT_14306c4e0);
        plVar5 = (longlong *)CONCAT44(_UNK_14306c4ec,_UNK_14306c4e8);
        uStack_b8 = lVar25;
        uStack_b0 = plVar5;
        plVar12 = (longlong *)pdb_140f3bda0();
        plVar11 = plStack_78;
        if ((char)plVar12[2] == '\x01') {
          lStack_1b8 = *plVar12;
          param_2 = plVar12[1];
        }
        else {
          lStack_1b8 = pdb_140f4fd10();
          *plVar12 = lStack_1b8;
          plVar12[1] = param_2;
          *(undefined1 *)(plVar12 + 2) = 1;
        }
        *plVar12 = lStack_1b8 + 1;
        uStack_1c8 = _DAT_143046aa0;
        uStack_1c0 = _UNK_143046aa8;
        lStack_1d8 = _DAT_143046a90;
        uStack_1d0 = _UNK_143046a98;
        uStack_1b0 = param_2;
        plVar12 = (longlong *)pdb_14008d710(0);
        if (plVar12 != (longlong *)0x0) {
          lStack_c8 = *plVar12;
          lStack_c0 = plVar12[1];
          *plVar12 = *plVar12 + 1;
          lStack_f8 = lStack_98;
          lStack_f0 = lStack_90;
          uStack_108 = uStack_a8;
          uStack_100 = uStack_a0;
          lStack_118 = uStack_b8;
          plStack_110 = uStack_b0;
          lStack_148 = lStack_1d8;
          uStack_140 = uStack_1d0;
          uStack_138 = uStack_1c8;
          uStack_130 = uStack_1c0;
          lStack_128 = lStack_1b8;
          uStack_120 = uStack_1b0;
          uStack_d8 = uVar3;
          uStack_d0 = uVar9;
          lStack_e8 = lVar25;
          plStack_e0 = plVar5;
          pdb_140c8eed0(&lStack_148,param_4);
          plVar11 = plVar11 + 0x18;
LAB_140aa24fb:
          pub_142e32760(&lStack_1d8,&lStack_148,0x90);
          pub_142e32760(plVar11,&lStack_1d8,0x90);
          lVar25 = *(longlong *)(param_4 + 0x48);
          uVar15 = param_4;
          goto joined_r0x000140aa252a;
        }
LAB_140aa2c5e:
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140aa2c89;
      }
    }
    else {
      if (param_1[0x2a] != 0) {
        return;
      }
      plVar11 = (longlong *)pdb_14008d710(0);
      if (plVar11 != (longlong *)0x0) {
        lStack_98 = *plVar11;
        lStack_90 = plVar11[1];
        *plVar11 = *plVar11 + 1;
        uVar9 = _UNK_14306c4f8;
        uVar3 = _DAT_14306c4f0;
        uStack_a8 = _DAT_14306c4f0;
        uStack_a0 = _UNK_14306c4f8;
        lVar25 = CONCAT44(_UNK_14306c4e4,_DAT_14306c4e0);
        plVar5 = (longlong *)CONCAT44(_UNK_14306c4ec,_UNK_14306c4e8);
        uStack_b8 = lVar25;
        uStack_b0 = plVar5;
        plVar12 = (longlong *)pdb_140f3bda0();
        plVar11 = plStack_78;
        if ((char)plVar12[2] == '\x01') {
          lStack_1b8 = *plVar12;
          param_2 = plVar12[1];
        }
        else {
          lStack_1b8 = pdb_140f4fd10();
          *plVar12 = lStack_1b8;
          plVar12[1] = param_2;
          *(undefined1 *)(plVar12 + 2) = 1;
        }
        *plVar12 = lStack_1b8 + 1;
        uStack_1c8 = _DAT_143046aa0;
        uStack_1c0 = _UNK_143046aa8;
        lStack_1d8 = _DAT_143046a90;
        uStack_1d0 = _UNK_143046a98;
        uStack_1b0 = param_2;
        plVar12 = (longlong *)pdb_14008d710(0);
        if (plVar12 != (longlong *)0x0) {
          lStack_c8 = *plVar12;
          lStack_c0 = plVar12[1];
          *plVar12 = *plVar12 + 1;
          lStack_f8 = lStack_98;
          lStack_f0 = lStack_90;
          uStack_108 = uStack_a8;
          uStack_100 = uStack_a0;
          lStack_118 = uStack_b8;
          plStack_110 = uStack_b0;
          lStack_148 = lStack_1d8;
          uStack_140 = uStack_1d0;
          uStack_138 = uStack_1c8;
          uStack_130 = uStack_1c0;
          lStack_128 = lStack_1b8;
          uStack_120 = uStack_1b0;
          uStack_d8 = uVar3;
          uStack_d0 = uVar9;
          lStack_e8 = lVar25;
          plStack_e0 = plVar5;
          pdb_140c8eed0(&lStack_148,param_4);
          plVar11 = plVar11 + 0x2a;
          goto LAB_140aa24fb;
        }
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140aa2c89;
      }
    }
LAB_140aa2c0d:
    pdb_142dc7890(&UNK_143326860);
LAB_140aa2c1a:
    bVar19 = unaff_SIL;
    lStack_128 = pdb_140f4fd10();
    *unaff_RDI = lStack_128;
    unaff_RDI[1] = param_2;
    *(undefined1 *)(unaff_RDI + 2) = 1;
  }
  *unaff_RDI = lStack_128 + 1;
  uStack_138 = _DAT_143046aa0;
  uStack_130 = _UNK_143046aa8;
  lStack_148 = _DAT_143046a90;
  uStack_140 = _UNK_143046a98;
  uStack_120 = param_2;
  plVar11 = (longlong *)pdb_14008d710(0);
  if (plVar11 != (longlong *)0x0) {
    lStack_158 = *plVar11;
    lStack_150 = plVar11[1];
    *plVar11 = *plVar11 + 1;
    lStack_188 = lStack_98;
    lStack_180 = lStack_90;
    uStack_198 = uStack_a8;
    uStack_190 = uStack_a0;
    lStack_1a8 = uStack_b8;
    plStack_1a0 = uStack_b0;
    lStack_1d8 = lStack_148;
    uStack_1d0 = uStack_140;
    uStack_1c8 = uStack_138;
    uStack_1c0 = uStack_130;
    lStack_1b8 = lStack_128;
    uStack_1b0 = uStack_120;
    uStack_178 = unaff_XMM7_Da;
    uStack_174 = unaff_XMM7_Db;
    uStack_170 = unaff_XMM7_Dc;
    uStack_16c = unaff_XMM7_Dd;
    uStack_168 = unaff_XMM6_Qa;
    uStack_160 = unaff_XMM6_Qb;
    pdb_140c8eed0(&lStack_1d8,param_4);
    pub_142e32760(&lStack_148,&lStack_1d8,0x90);
    pauVar16 = (undefined1 (*) [16])*param_1;
    puVar17 = (undefined *)param_1[1];
    pauVar26 = (undefined1 (*) [16])(unaff_R14 & (ulonglong)puVar17);
    auVar28 = *(undefined1 (*) [16])(*pauVar26 + (longlong)*pauVar16);
    uVar23 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar28[0xf] >> 7) << 0xf;
    uVar10 = (uint)uVar23;
    if (uVar23 == 0) goto LAB_140aa2b9a;
LAB_140aa2660:
    uVar18 = 0;
    for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    uVar15 = (ulonglong)(*pauVar26 + uVar18) & (ulonglong)puVar17;
    bVar27 = (*pauVar16)[uVar15];
    if (-1 < (char)bVar27) {
      auVar28 = *pauVar16;
      uVar10 = 0;
      for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar28[0xf] >> 7) << 0xf); (uVar18 & 1) == 0;
          uVar18 = uVar18 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      uVar15 = (ulonglong)uVar10;
      bVar27 = (*pauVar16)[uVar15];
    }
    (*pauVar16)[uVar15] = bVar19;
    pauVar16[1][uVar15 - 0x10 & (ulonglong)puVar17] = bVar19;
    *(longlong *)((longlong)pauVar16 + uVar15 * -0x98 + -0x98) = param_3;
    pub_142e32760((longlong)pauVar16 + uVar15 * -0x98 + -0x90,&lStack_148,0x90);
    lVar25 = param_1[3] - _UNK_142e47bf8;
    param_1[2] = param_1[2] - (ulonglong)(bVar27 & 1);
    param_1[3] = lVar25;
    lVar25 = *(longlong *)(param_4 + 0x48);
    uVar15 = param_4;
    plStack_78 = param_1;
joined_r0x000140aa252a:
    if (lVar25 == 0) {
      return;
    }
    param_3 = *param_5;
    param_1 = (longlong *)param_5[4];
    plVar11 = plStack_78 + 0xc;
    pauVar16 = *(undefined1 (**) [16])(uVar15 + 0x30);
    auVar28 = *pauVar16;
    uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar28[0xf] >> 7) << 0xf);
    pauVar26 = pauVar16 + 1;
    do {
      if ((short)uVar10 == 0) {
        do {
          auVar28 = *pauVar26;
          pauVar16 = pauVar16 + -0x68;
          pauVar26 = pauVar26 + 1;
          uVar10 = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar10 == 0);
      }
      param_4 = (ulonglong)uVar10;
      uVar18 = 0;
      for (uVar8 = uVar10; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar18 = uVar18 + 1;
      }
      iVar4 = *(int *)((longlong)pauVar16 + (ulonglong)uVar18 * -0x68 + -0x68);
      iStack_7c = iVar4;
      if (param_1[3] != 0) {
        uVar13 = pdb_1400aede0(param_1 + 4,&iStack_7c);
        lVar22 = *param_1;
        bVar27 = (byte)(uVar13 >> 0x39);
        auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
        auVar28 = pshuflw(auVar28,auVar28,0);
        lVar21 = 0;
        while( true ) {
          uVar13 = uVar13 & param_1[1];
          auVar34 = *(undefined1 (*) [16])(lVar22 + uVar13);
          auVar32[0] = -(auVar34[0] == auVar28[0]);
          auVar32[1] = -(auVar34[1] == auVar28[1]);
          auVar32[2] = -(auVar34[2] == auVar28[2]);
          auVar32[3] = -(auVar34[3] == auVar28[3]);
          auVar32[4] = -(auVar34[4] == auVar28[4]);
          auVar32[5] = -(auVar34[5] == auVar28[5]);
          auVar32[6] = -(auVar34[6] == auVar28[6]);
          auVar32[7] = -(auVar34[7] == auVar28[7]);
          auVar32[8] = -(auVar34[8] == auVar28[0]);
          auVar32[9] = -(auVar34[9] == auVar28[1]);
          auVar32[10] = -(auVar34[10] == auVar28[2]);
          auVar32[0xb] = -(auVar34[0xb] == auVar28[3]);
          auVar32[0xc] = -(auVar34[0xc] == auVar28[4]);
          auVar32[0xd] = -(auVar34[0xd] == auVar28[5]);
          auVar32[0xe] = -(auVar34[0xe] == auVar28[6]);
          auVar32[0xf] = -(auVar34[0xf] == auVar28[7]);
          uVar23 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar32[0xf] >> 7) << 0xf;
          uVar18 = (uint)uVar23;
          while (uVar23 != 0) {
            uVar8 = 0;
            for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            uVar24 = uVar8 + uVar13 & param_1[1];
            if (iVar4 == *(int *)(lVar22 + -0x18 + uVar24 * -0x18)) {
              lVar22 = lVar22 + uVar24 * -0x18;
              uVar13 = (ulonglong)*(byte *)(lVar22 + -4);
              if (uVar13 == 0x11) goto LAB_140aa2910;
              uVar24 = *(ulonglong *)(lVar22 + -0xc);
              puVar14 = (ulonglong *)
                        pdb_140cd4bd0(uVar13 * 0x390 + param_3 + 0x20,uVar24,uVar24 >> 0x20);
              if (puVar14 == (ulonglong *)0x0) goto LAB_140aa2b82;
              uVar13 = *puVar14 & 0xffffffff;
              if (((*(ulonglong *)(param_3 + 0x10) <= uVar13) ||
                  (lVar22 = *(longlong *)(param_3 + 8), lVar22 == 0)) ||
                 (*(uint *)(lVar22 + 0x20 + uVar13 * 0x28) != ((uint)(*puVar14 >> 0x20) | 1)))
              goto LAB_140aa2c45;
              uVar3 = *(undefined8 *)((longlong)puVar14 + 0x44);
              uVar2 = *(undefined4 *)((longlong)puVar14 + 0x4c);
              lVar21 = *(longlong *)((longlong)puVar14 + 0x34);
              uVar9 = *(undefined8 *)((longlong)puVar14 + 0x3c);
              plVar5 = (longlong *)(lVar22 + uVar13 * 0x28);
              plVar12 = (longlong *)plVar5[3];
              LOCK();
              lVar22 = *plVar12;
              *plVar12 = *plVar12 + 1;
              UNLOCK();
              if (*plVar12 == 0 || SCARRY8(lVar22,1) != *plVar12 < 0) goto LAB_140aa2c89;
              lStack_118 = plVar5[2];
              lStack_128 = *plVar5;
              uStack_120 = plVar5[1];
              uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
              lStack_148 = lVar21;
              uStack_140 = uVar9;
              uStack_138 = uVar3;
              plStack_110 = plVar12;
              pdb_141408060(&lStack_1d8,plVar11,iVar4,&lStack_148);
              if ((char)lStack_1b8 != '\x11') {
                LOCK();
                *plStack_1a0 = *plStack_1a0 + -1;
                UNLOCK();
                if (*plStack_1a0 == 0) {
                  pdb_140c7b7a0(&plStack_1a0);
                }
              }
              goto LAB_140aa2910;
            }
            uVar23 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar23);
          }
          auVar29[0] = -(auVar34[0] == -1);
          auVar29[1] = -(auVar34[1] == -1);
          auVar29[2] = -(auVar34[2] == -1);
          auVar29[3] = -(auVar34[3] == -1);
          auVar29[4] = -(auVar34[4] == -1);
          auVar29[5] = -(auVar34[5] == -1);
          auVar29[6] = -(auVar34[6] == -1);
          auVar29[7] = -(auVar34[7] == -1);
          auVar29[8] = -(auVar34[8] == -1);
          auVar29[9] = -(auVar34[9] == -1);
          auVar29[10] = -(auVar34[10] == -1);
          auVar29[0xb] = -(auVar34[0xb] == -1);
          auVar29[0xc] = -(auVar34[0xc] == -1);
          auVar29[0xd] = -(auVar34[0xd] == -1);
          auVar29[0xe] = -(auVar34[0xe] == -1);
          auVar29[0xf] = -(auVar34[0xf] == -1);
          if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x2f,0) & 1) != 0) || (SUB161(auVar29 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
          uVar13 = uVar13 + lVar21 + 0x10;
          lVar21 = lVar21 + 0x10;
        }
      }
LAB_140aa2910:
      uVar10 = uVar10 - 1 & uVar10;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    param_4 = *(ulonglong *)(uVar15 + 0x48);
    if (param_4 == 0) {
      return;
    }
    plStack_78 = plStack_78 + 0x12;
    pauVar16 = *(undefined1 (**) [16])(uVar15 + 0x30);
    auVar28 = *pauVar16;
    uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar28[0xf] >> 7) << 0xf);
    pauVar20 = pauVar16 + 1;
    do {
      if ((short)uVar10 == 0) {
        do {
          auVar28 = *pauVar20;
          pauVar16 = pauVar16 + -0x68;
          pauVar20 = pauVar20 + 1;
          uVar10 = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar10 == 0);
      }
      pauVar26 = (undefined1 (*) [16])(ulonglong)uVar10;
      uVar18 = 0;
      for (uVar8 = uVar10; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar18 = uVar18 + 1;
      }
      iVar4 = *(int *)((longlong)pauVar16 + (ulonglong)uVar18 * -0x68 + -0x68);
      if (param_1[9] != 0) {
        iStack_80 = iVar4;
        uVar15 = pdb_1400aede0(param_1 + 10,&iStack_80);
        lVar25 = param_1[6];
        bVar27 = (byte)(uVar15 >> 0x39);
        auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
        auVar28 = pshuflw(auVar28,auVar28,0);
        lVar22 = 0;
        while( true ) {
          uVar15 = uVar15 & param_1[7];
          auVar34 = *(undefined1 (*) [16])(lVar25 + uVar15);
          auVar33[0] = -(auVar34[0] == auVar28[0]);
          auVar33[1] = -(auVar34[1] == auVar28[1]);
          auVar33[2] = -(auVar34[2] == auVar28[2]);
          auVar33[3] = -(auVar34[3] == auVar28[3]);
          auVar33[4] = -(auVar34[4] == auVar28[4]);
          auVar33[5] = -(auVar34[5] == auVar28[5]);
          auVar33[6] = -(auVar34[6] == auVar28[6]);
          auVar33[7] = -(auVar34[7] == auVar28[7]);
          auVar33[8] = -(auVar34[8] == auVar28[0]);
          auVar33[9] = -(auVar34[9] == auVar28[1]);
          auVar33[10] = -(auVar34[10] == auVar28[2]);
          auVar33[0xb] = -(auVar34[0xb] == auVar28[3]);
          auVar33[0xc] = -(auVar34[0xc] == auVar28[4]);
          auVar33[0xd] = -(auVar34[0xd] == auVar28[5]);
          auVar33[0xe] = -(auVar34[0xe] == auVar28[6]);
          auVar33[0xf] = -(auVar34[0xf] == auVar28[7]);
          uVar23 = (ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
          uVar18 = (uint)uVar23;
          while (uVar23 != 0) {
            uVar8 = 0;
            for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            uVar13 = uVar8 + uVar15 & param_1[7];
            if (iVar4 == *(int *)(lVar25 + -0x18 + uVar13 * -0x18)) {
              lVar25 = lVar25 + uVar13 * -0x18;
              uVar15 = (ulonglong)*(byte *)(lVar25 + -4);
              if (uVar15 == 0x11) goto LAB_140aa2b50;
              uVar13 = *(ulonglong *)(lVar25 + -0xc);
              puVar14 = (ulonglong *)
                        pdb_140cd4bd0(uVar15 * 0x390 + param_3 + 0x20,uVar13,uVar13 >> 0x20);
              if (puVar14 == (ulonglong *)0x0) goto LAB_140aa2b82;
              uVar15 = *puVar14 & 0xffffffff;
              if (((*(ulonglong *)(param_3 + 0x10) <= uVar15) ||
                  (lVar25 = *(longlong *)(param_3 + 8), lVar25 == 0)) ||
                 (*(uint *)(lVar25 + 0x20 + uVar15 * 0x28) != ((uint)(*puVar14 >> 0x20) | 1)))
              goto LAB_140aa2c45;
              uVar3 = *(undefined8 *)((longlong)puVar14 + 0x44);
              uVar2 = *(undefined4 *)((longlong)puVar14 + 0x4c);
              lVar22 = *(longlong *)((longlong)puVar14 + 0x34);
              uVar9 = *(undefined8 *)((longlong)puVar14 + 0x3c);
              plVar11 = (longlong *)(lVar25 + uVar15 * 0x28);
              plVar5 = (longlong *)plVar11[3];
              LOCK();
              lVar25 = *plVar5;
              *plVar5 = *plVar5 + 1;
              UNLOCK();
              if (*plVar5 == 0 || SCARRY8(lVar25,1) != *plVar5 < 0) goto LAB_140aa2c89;
              lStack_118 = plVar11[2];
              lStack_128 = *plVar11;
              uStack_120 = plVar11[1];
              uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
              lStack_148 = lVar22;
              uStack_140 = uVar9;
              uStack_138 = uVar3;
              plStack_110 = plVar5;
              pdb_141408060(&lStack_1d8,plStack_78,iVar4,&lStack_148);
              if ((char)lStack_1b8 != '\x11') {
                LOCK();
                *plStack_1a0 = *plStack_1a0 + -1;
                UNLOCK();
                if (*plStack_1a0 == 0) {
                  pdb_140c7b7a0(&plStack_1a0);
                }
              }
              goto LAB_140aa2b50;
            }
            uVar23 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar23);
          }
          auVar30[0] = -(auVar34[0] == -1);
          auVar30[1] = -(auVar34[1] == -1);
          auVar30[2] = -(auVar34[2] == -1);
          auVar30[3] = -(auVar34[3] == -1);
          auVar30[4] = -(auVar34[4] == -1);
          auVar30[5] = -(auVar34[5] == -1);
          auVar30[6] = -(auVar34[6] == -1);
          auVar30[7] = -(auVar34[7] == -1);
          auVar30[8] = -(auVar34[8] == -1);
          auVar30[9] = -(auVar34[9] == -1);
          auVar30[10] = -(auVar34[10] == -1);
          auVar30[0xb] = -(auVar34[0xb] == -1);
          auVar30[0xc] = -(auVar34[0xc] == -1);
          auVar30[0xd] = -(auVar34[0xd] == -1);
          auVar30[0xe] = -(auVar34[0xe] == -1);
          auVar30[0xf] = -(auVar34[0xf] == -1);
          if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar30 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar30 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar30 >> 0x2f,0) & 1) != 0) || (SUB161(auVar30 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') break;
          uVar15 = uVar15 + lVar22 + 0x10;
          lVar22 = lVar22 + 0x10;
        }
      }
LAB_140aa2b50:
      uVar10 = uVar10 - 1 & uVar10;
      param_4 = param_4 - 1;
      if (param_4 == 0) {
        return;
      }
    } while( true );
  }
  pdb_142dc7890(&UNK_143326860);
LAB_140aa2c89:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
LAB_140aa2b82:
  bVar19 = (byte)pauVar16;
  puVar17 = &UNK_143033b50;
  pauVar16 = (undefined1 (*) [16])pdb_142dc8110(&UNK_143033b50,0x42,&UNK_143033b98);
LAB_140aa2b9a:
  lVar25 = 0x10;
  do {
    pauVar26 = (undefined1 (*) [16])((ulonglong)(*pauVar26 + lVar25) & (ulonglong)puVar17);
    auVar28 = *(undefined1 (*) [16])(*pauVar26 + (longlong)*pauVar16);
    lVar25 = lVar25 + 0x10;
    uVar10 = (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar28[0xf] >> 7) << 0xf);
  } while (uVar10 == 0);
  goto LAB_140aa2660;
LAB_140aa2c45:
  pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033c40);
  goto LAB_140aa2c5e;
}

