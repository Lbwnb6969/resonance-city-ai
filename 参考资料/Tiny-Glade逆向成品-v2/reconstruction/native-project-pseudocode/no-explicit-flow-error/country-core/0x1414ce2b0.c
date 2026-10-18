// VA 0x1414ce2b0, PDB extent 3598 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_storage_decorators<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_storage_decorators<ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 3598 */

void pdb_1414ce2b0(longlong *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong unaff_RBX;
  byte unaff_SIL;
  byte bVar18;
  longlong lVar19;
  ulonglong *unaff_RDI;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  ushort uVar22;
  ulonglong uVar23;
  undefined1 (*pauVar24) [16];
  ulonglong unaff_R14;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  ulonglong uStack_1c8;
  longlong *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  longlong lStack_178;
  longlong lStack_170;
  undefined8 uStack_168;
  char cStack_160;
  undefined2 uStack_15f;
  undefined1 uStack_15d;
  undefined8 uStack_158;
  char cStack_150;
  undefined2 uStack_14f;
  undefined1 uStack_14d;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  longlong *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  ulonglong uStack_e8;
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
  if (param_2 != 0) {
    param_3 = unaff_RBX;
    if (param_2 == 1) {
      if (param_1[0x18] != 0) {
        return;
      }
      plStack_78 = param_1;
      plVar12 = (longlong *)pdb_14008d710(0);
      if (plVar12 == (longlong *)0x0) goto LAB_1414ced55;
      lStack_98 = *plVar12;
      lStack_90 = plVar12[1];
      *plVar12 = *plVar12 + 1;
      uVar8 = _UNK_143512188;
      uVar3 = _DAT_143512180;
      uStack_a8 = _DAT_143512180;
      uStack_a0 = _UNK_143512188;
      uVar16 = CONCAT44(_UNK_143512174,_DAT_143512170);
      plVar15 = (longlong *)CONCAT44(_UNK_14351217c,_UNK_143512178);
      uStack_b8 = uVar16;
      uStack_b0 = plVar15;
      puVar13 = (ulonglong *)pdb_140f3bda0();
      plVar12 = plStack_78;
      if ((char)puVar13[2] == '\x01') {
        uStack_1d8 = *puVar13;
        param_2 = puVar13[1];
      }
      else {
        uStack_1d8 = pdb_140f4fd10();
        *puVar13 = uStack_1d8;
        puVar13[1] = param_2;
        *(undefined1 *)(puVar13 + 2) = 1;
      }
      *puVar13 = uStack_1d8 + 1;
      uStack_1e8 = _DAT_143313e50;
      uStack_1e0 = _UNK_143313e58;
      lStack_1f8 = _DAT_143313e40;
      uStack_1f0 = _UNK_143313e48;
      uStack_1d0 = param_2;
      plVar14 = (longlong *)pdb_14008d710(0);
      if (plVar14 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1414cede9;
      }
      lStack_c8 = *plVar14;
      lStack_c0 = plVar14[1];
      *plVar14 = *plVar14 + 1;
      lStack_f8 = lStack_98;
      lStack_f0 = lStack_90;
      uStack_108 = uStack_a8;
      uStack_100 = uStack_a0;
      uStack_118 = uStack_b8;
      plStack_110 = uStack_b0;
      lStack_148 = lStack_1f8;
      uStack_140 = uStack_1f0;
      uStack_138 = uStack_1e8;
      uStack_130 = uStack_1e0;
      uStack_128 = uStack_1d8;
      uStack_120 = uStack_1d0;
      uStack_d8 = uVar3;
      uStack_d0 = uVar8;
      uStack_e8 = uVar16;
      plStack_e0 = plVar15;
      pdb_1414fa150(&lStack_148,param_4);
      plVar12 = plVar12 + 0x18;
    }
    else {
      if (param_1[0x2a] != 0) {
        return;
      }
      plStack_78 = param_1;
      plVar12 = (longlong *)pdb_14008d710(0);
      if (plVar12 == (longlong *)0x0) goto LAB_1414ced55;
      lStack_98 = *plVar12;
      lStack_90 = plVar12[1];
      *plVar12 = *plVar12 + 1;
      uVar8 = _UNK_143512188;
      uVar3 = _DAT_143512180;
      uStack_a8 = _DAT_143512180;
      uStack_a0 = _UNK_143512188;
      uVar16 = CONCAT44(_UNK_143512174,_DAT_143512170);
      plVar15 = (longlong *)CONCAT44(_UNK_14351217c,_UNK_143512178);
      uStack_b8 = uVar16;
      uStack_b0 = plVar15;
      puVar13 = (ulonglong *)pdb_140f3bda0();
      plVar12 = plStack_78;
      if ((char)puVar13[2] == '\x01') {
        uStack_1d8 = *puVar13;
        param_2 = puVar13[1];
      }
      else {
        uStack_1d8 = pdb_140f4fd10();
        *puVar13 = uStack_1d8;
        puVar13[1] = param_2;
        *(undefined1 *)(puVar13 + 2) = 1;
      }
      *puVar13 = uStack_1d8 + 1;
      uStack_1e8 = _DAT_143313e50;
      uStack_1e0 = _UNK_143313e58;
      lStack_1f8 = _DAT_143313e40;
      uStack_1f0 = _UNK_143313e48;
      uStack_1d0 = param_2;
      plVar14 = (longlong *)pdb_14008d710(0);
      if (plVar14 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1414cede9;
      }
      lStack_c8 = *plVar14;
      lStack_c0 = plVar14[1];
      *plVar14 = *plVar14 + 1;
      lStack_f8 = lStack_98;
      lStack_f0 = lStack_90;
      uStack_108 = uStack_a8;
      uStack_100 = uStack_a0;
      uStack_118 = uStack_b8;
      plStack_110 = uStack_b0;
      lStack_148 = lStack_1f8;
      uStack_140 = uStack_1f0;
      uStack_138 = uStack_1e8;
      uStack_130 = uStack_1e0;
      uStack_128 = uStack_1d8;
      uStack_120 = uStack_1d0;
      uStack_d8 = uVar3;
      uStack_d0 = uVar8;
      uStack_e8 = uVar16;
      plStack_e0 = plVar15;
      pdb_1414fa150(&lStack_148,param_4);
      plVar12 = plVar12 + 0x2a;
    }
    pub_142e32760(&lStack_1f8,&lStack_148,0x90);
    pub_142e32760(plVar12,&lStack_1f8,0x90);
    lVar19 = *(longlong *)(param_4 + 0x48);
    goto joined_r0x0001414ce818;
  }
  unaff_RDI = (ulonglong *)(param_1 + 4);
  lStack_148 = param_3;
  unaff_R14 = pdb_1400af0a0(unaff_RDI,&lStack_148);
  bVar25 = (byte)(unaff_R14 >> 0x38);
  unaff_SIL = bVar25 >> 1;
  bVar18 = bVar25 >> 1;
  param_2 = param_1[1];
  auVar26 = ZEXT216(CONCAT11(bVar25 >> 1,bVar25 >> 1));
  auVar26 = pshuflw(auVar26,auVar26,0);
  lVar19 = 0;
  uVar16 = unaff_R14;
  while( true ) {
    uVar16 = uVar16 & param_2;
    pcVar1 = (char *)(*param_1 + uVar16);
    auVar32[0] = -(*pcVar1 == auVar26[0]);
    auVar32[1] = -(pcVar1[1] == auVar26[1]);
    auVar32[2] = -(pcVar1[2] == auVar26[2]);
    auVar32[3] = -(pcVar1[3] == auVar26[3]);
    auVar32[4] = -(pcVar1[4] == auVar26[4]);
    auVar32[5] = -(pcVar1[5] == auVar26[5]);
    auVar32[6] = -(pcVar1[6] == auVar26[6]);
    auVar32[7] = -(pcVar1[7] == auVar26[7]);
    auVar32[8] = -(pcVar1[8] == auVar26[0]);
    auVar32[9] = -(pcVar1[9] == auVar26[1]);
    auVar32[10] = -(pcVar1[10] == auVar26[2]);
    auVar32[0xb] = -(pcVar1[0xb] == auVar26[3]);
    auVar32[0xc] = -(pcVar1[0xc] == auVar26[4]);
    auVar32[0xd] = -(pcVar1[0xd] == auVar26[5]);
    auVar32[0xe] = -(pcVar1[0xe] == auVar26[6]);
    auVar32[0xf] = -(pcVar1[0xf] == auVar26[7]);
    uVar22 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
    uVar11 = (uint)uVar22;
    while (uVar22 != 0) {
      uVar17 = 0;
      for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar17 = uVar17 + 1;
      }
      if (*(longlong *)(*param_1 + -0x98 + (uVar17 + uVar16 & param_2) * -0x98) == param_3) {
        return;
      }
      uVar22 = (ushort)(uVar11 - 1) & (ushort)uVar11;
      uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar22);
    }
    auVar29[0] = -(*pcVar1 == -1);
    auVar29[1] = -(pcVar1[1] == -1);
    auVar29[2] = -(pcVar1[2] == -1);
    auVar29[3] = -(pcVar1[3] == -1);
    auVar29[4] = -(pcVar1[4] == -1);
    auVar29[5] = -(pcVar1[5] == -1);
    auVar29[6] = -(pcVar1[6] == -1);
    auVar29[7] = -(pcVar1[7] == -1);
    auVar29[8] = -(pcVar1[8] == -1);
    auVar29[9] = -(pcVar1[9] == -1);
    auVar29[10] = -(pcVar1[10] == -1);
    auVar29[0xb] = -(pcVar1[0xb] == -1);
    auVar29[0xc] = -(pcVar1[0xc] == -1);
    auVar29[0xd] = -(pcVar1[0xd] == -1);
    auVar29[0xe] = -(pcVar1[0xe] == -1);
    auVar29[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
    uVar16 = uVar16 + lVar19 + 0x10;
    lVar19 = lVar19 + 0x10;
  }
  if (param_1[2] == 0) {
    param_2 = 1;
    pdb_142dadf10(param_1,1,unaff_RDI,CONCAT71((int7)(uVar16 >> 8),1));
    plVar12 = (longlong *)pdb_14008d710(0);
    if (plVar12 != (longlong *)0x0) goto LAB_1414ce66a;
LAB_1414ced55:
    pdb_142dc7890(&UNK_14330e598);
LAB_1414ced62:
    bVar18 = unaff_SIL;
    uStack_128 = pdb_140f4fd10();
    *unaff_RDI = uStack_128;
    unaff_RDI[1] = param_2;
    *(undefined1 *)(unaff_RDI + 2) = 1;
  }
  else {
    plVar12 = (longlong *)pdb_14008d710(0);
    if (plVar12 == (longlong *)0x0) goto LAB_1414ced55;
LAB_1414ce66a:
    lStack_98 = *plVar12;
    lStack_90 = plVar12[1];
    *plVar12 = *plVar12 + 1;
    unaff_XMM6_Qb = _UNK_143512188;
    unaff_XMM6_Qa = _DAT_143512180;
    unaff_XMM7_Dd = _UNK_14351217c;
    unaff_XMM7_Dc = _UNK_143512178;
    unaff_XMM7_Db = _UNK_143512174;
    unaff_XMM7_Da = _DAT_143512170;
    uStack_a8 = _DAT_143512180;
    uStack_a0 = _UNK_143512188;
    uStack_b8 = CONCAT44(_UNK_143512174,_DAT_143512170);
    uStack_b0 = (longlong *)CONCAT44(_UNK_14351217c,_UNK_143512178);
    unaff_RDI = (ulonglong *)pdb_140f3bda0();
    unaff_SIL = bVar25 >> 1;
    if ((char)unaff_RDI[2] != '\x01') goto LAB_1414ced62;
    uStack_128 = *unaff_RDI;
    param_2 = unaff_RDI[1];
  }
  *unaff_RDI = uStack_128 + 1;
  uStack_138 = _DAT_143313e50;
  uStack_130 = _UNK_143313e58;
  lStack_148 = _DAT_143313e40;
  uStack_140 = _UNK_143313e48;
  uStack_120 = param_2;
  plVar12 = (longlong *)pdb_14008d710(0);
  if (plVar12 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_14330e598);
LAB_1414cede9:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lStack_178 = *plVar12;
  lStack_170 = plVar12[1];
  *plVar12 = *plVar12 + 1;
  lStack_1a8 = lStack_98;
  lStack_1a0 = lStack_90;
  uStack_1b8 = uStack_a8;
  uStack_1b0 = uStack_a0;
  uStack_1c8 = uStack_b8;
  plStack_1c0 = uStack_b0;
  lStack_1f8 = lStack_148;
  uStack_1f0 = uStack_140;
  uStack_1e8 = uStack_138;
  uStack_1e0 = uStack_130;
  uStack_1d8 = uStack_128;
  uStack_1d0 = uStack_120;
  uStack_198 = unaff_XMM7_Da;
  uStack_194 = unaff_XMM7_Db;
  uStack_190 = unaff_XMM7_Dc;
  uStack_18c = unaff_XMM7_Dd;
  uStack_188 = unaff_XMM6_Qa;
  uStack_180 = unaff_XMM6_Qb;
  pdb_1414fa150(&lStack_1f8,param_4);
  pub_142e32760(&lStack_148,&lStack_1f8,0x90);
  pauVar20 = (undefined1 (*) [16])*param_1;
  uVar16 = param_1[1];
  uVar23 = unaff_R14 & uVar16;
  auVar26 = *(undefined1 (*) [16])(*pauVar20 + uVar23);
  uVar22 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar26[0xf] >> 7) << 0xf
  ;
  uVar11 = (uint)uVar22;
  if (uVar22 == 0) {
    lVar19 = 0x10;
    do {
      uVar23 = uVar23 + lVar19 & uVar16;
      auVar26 = *(undefined1 (*) [16])(*pauVar20 + uVar23);
      lVar19 = lVar19 + 0x10;
      uVar11 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
    } while (uVar11 == 0);
  }
  uVar17 = 0;
  for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
    uVar17 = uVar17 + 1;
  }
  uVar23 = uVar17 + uVar23 & uVar16;
  bVar25 = (*pauVar20)[uVar23];
  if (-1 < (char)bVar25) {
    auVar26 = *pauVar20;
    uVar11 = 0;
    for (uVar17 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar26[0xf] >> 7) << 0xf); (uVar17 & 1) == 0;
        uVar17 = uVar17 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    uVar23 = (ulonglong)uVar11;
    bVar25 = (*pauVar20)[uVar23];
  }
  (*pauVar20)[uVar23] = bVar18;
  pauVar20[1][uVar23 - 0x10 & uVar16] = bVar18;
  *(longlong *)((longlong)pauVar20 + uVar23 * -0x98 + -0x98) = param_3;
  pub_142e32760((longlong)pauVar20 + uVar23 * -0x98 + -0x90,&lStack_148,0x90);
  lVar19 = param_1[3] - _UNK_142e47bf8;
  param_1[2] = param_1[2] - (ulonglong)(bVar25 & 1);
  param_1[3] = lVar19;
  lVar19 = *(longlong *)(param_4 + 0x48);
  plStack_78 = param_1;
joined_r0x0001414ce818:
  if (lVar19 != 0) {
    uVar3 = *param_5;
    plVar12 = (longlong *)param_5[4];
    plVar15 = plStack_78 + 0xc;
    pauVar24 = *(undefined1 (**) [16])(param_4 + 0x30);
    auVar26 = *pauVar24;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
    pauVar20 = pauVar24 + 1;
    do {
      if ((short)uVar11 == 0) {
        do {
          auVar26 = *pauVar20;
          pauVar24 = pauVar24 + -0x68;
          pauVar20 = pauVar20 + 1;
          uVar11 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar11 == 0);
      }
      uVar17 = 0;
      for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar17 = uVar17 + 1;
      }
      iVar2 = *(int *)((longlong)pauVar24 + (ulonglong)uVar17 * -0x68 + -0x68);
      iStack_7c = iVar2;
      if (plVar12[3] != 0) {
        uVar16 = pdb_1400aede0(plVar12 + 4,&iStack_7c);
        lVar4 = *plVar12;
        bVar25 = (byte)(uVar16 >> 0x39);
        auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
        auVar26 = pshuflw(auVar26,auVar26,0);
        lVar21 = 0;
        while( true ) {
          uVar16 = uVar16 & plVar12[1];
          auVar32 = *(undefined1 (*) [16])(lVar4 + uVar16);
          auVar30[0] = -(auVar32[0] == auVar26[0]);
          auVar30[1] = -(auVar32[1] == auVar26[1]);
          auVar30[2] = -(auVar32[2] == auVar26[2]);
          auVar30[3] = -(auVar32[3] == auVar26[3]);
          auVar30[4] = -(auVar32[4] == auVar26[4]);
          auVar30[5] = -(auVar32[5] == auVar26[5]);
          auVar30[6] = -(auVar32[6] == auVar26[6]);
          auVar30[7] = -(auVar32[7] == auVar26[7]);
          auVar30[8] = -(auVar32[8] == auVar26[0]);
          auVar30[9] = -(auVar32[9] == auVar26[1]);
          auVar30[10] = -(auVar32[10] == auVar26[2]);
          auVar30[0xb] = -(auVar32[0xb] == auVar26[3]);
          auVar30[0xc] = -(auVar32[0xc] == auVar26[4]);
          auVar30[0xd] = -(auVar32[0xd] == auVar26[5]);
          auVar30[0xe] = -(auVar32[0xe] == auVar26[6]);
          auVar30[0xf] = -(auVar32[0xf] == auVar26[7]);
          uVar22 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar30[0xf] >> 7) << 0xf;
          uVar17 = (uint)uVar22;
          while (uVar22 != 0) {
            uVar7 = 0;
            for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            uVar23 = uVar7 + uVar16 & plVar12[1];
            if (iVar2 == *(int *)(lVar4 + -0x18 + uVar23 * -0x18)) {
              lVar4 = lVar4 + uVar23 * -0x18;
              if (*(char *)(lVar4 + -4) == '\x11') goto LAB_1414cea60;
              uStack_158 = *(undefined8 *)(lVar4 + -0xc);
              uStack_14d = *(undefined1 *)(lVar4 + -1);
              uStack_14f = *(undefined2 *)(lVar4 + -3);
              cStack_150 = *(char *)(lVar4 + -4);
              pdb_1409ed9b0(&lStack_148,uVar3,&uStack_158);
              uVar10 = uStack_130;
              uVar9 = uStack_138;
              uVar8 = uStack_140;
              lVar4 = lStack_148;
              if ((int)uStack_128 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143313d71,99,&UNK_143313e00);
              }
              puVar13 = (ulonglong *)pdb_1409ef0f0(uVar3,uStack_128 & 0xffffffff,uStack_128._4_4_);
              plVar14 = (longlong *)puVar13[3];
              LOCK();
              lVar21 = *plVar14;
              *plVar14 = *plVar14 + 1;
              UNLOCK();
              if (*plVar14 == 0 || SCARRY8(lVar21,1) != *plVar14 < 0) goto LAB_1414cede9;
              uStack_118 = puVar13[2];
              uStack_128 = *puVar13;
              uStack_120 = puVar13[1];
              lStack_148 = lVar4;
              uStack_140 = uVar8;
              uStack_138 = uVar9;
              uStack_130 = uVar10;
              plStack_110 = plVar14;
              pdb_141408060(&lStack_1f8,plVar15,iVar2,&lStack_148);
              if ((char)uStack_1d8 != '\x11') {
                LOCK();
                *plStack_1c0 = *plStack_1c0 + -1;
                UNLOCK();
                if (*plStack_1c0 == 0) {
                  pdb_140c7b7a0(&plStack_1c0);
                }
              }
              goto LAB_1414cea60;
            }
            uVar22 = (ushort)(uVar17 - 1) & (ushort)uVar17;
            uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar22);
          }
          auVar27[0] = -(auVar32[0] == -1);
          auVar27[1] = -(auVar32[1] == -1);
          auVar27[2] = -(auVar32[2] == -1);
          auVar27[3] = -(auVar32[3] == -1);
          auVar27[4] = -(auVar32[4] == -1);
          auVar27[5] = -(auVar32[5] == -1);
          auVar27[6] = -(auVar32[6] == -1);
          auVar27[7] = -(auVar32[7] == -1);
          auVar27[8] = -(auVar32[8] == -1);
          auVar27[9] = -(auVar32[9] == -1);
          auVar27[10] = -(auVar32[10] == -1);
          auVar27[0xb] = -(auVar32[0xb] == -1);
          auVar27[0xc] = -(auVar32[0xc] == -1);
          auVar27[0xd] = -(auVar32[0xd] == -1);
          auVar27[0xe] = -(auVar32[0xe] == -1);
          auVar27[0xf] = -(auVar32[0xf] == -1);
          if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar27 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x2f,0) & 1) != 0) || (SUB161(auVar27 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
          uVar16 = uVar16 + lVar21 + 0x10;
          lVar21 = lVar21 + 0x10;
        }
      }
LAB_1414cea60:
      uVar11 = uVar11 - 1 & uVar11;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = *(longlong *)(param_4 + 0x48);
    if (lVar19 != 0) {
      plStack_78 = plStack_78 + 0x12;
      pauVar24 = *(undefined1 (**) [16])(param_4 + 0x30);
      auVar26 = *pauVar24;
      uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
      pauVar20 = pauVar24 + 1;
      do {
        if ((short)uVar11 == 0) {
          do {
            auVar26 = *pauVar20;
            pauVar24 = pauVar24 + -0x68;
            pauVar20 = pauVar20 + 1;
            uVar11 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar11 == 0);
        }
        uVar17 = 0;
        for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar17 = uVar17 + 1;
        }
        iVar2 = *(int *)((longlong)pauVar24 + (ulonglong)uVar17 * -0x68 + -0x68);
        if (plVar12[9] != 0) {
          iStack_80 = iVar2;
          uVar16 = pdb_1400aede0(plVar12 + 10,&iStack_80);
          lVar4 = plVar12[6];
          bVar25 = (byte)(uVar16 >> 0x39);
          auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
          auVar26 = pshuflw(auVar26,auVar26,0);
          lVar21 = 0;
          while( true ) {
            uVar16 = uVar16 & plVar12[7];
            auVar32 = *(undefined1 (*) [16])(lVar4 + uVar16);
            auVar31[0] = -(auVar32[0] == auVar26[0]);
            auVar31[1] = -(auVar32[1] == auVar26[1]);
            auVar31[2] = -(auVar32[2] == auVar26[2]);
            auVar31[3] = -(auVar32[3] == auVar26[3]);
            auVar31[4] = -(auVar32[4] == auVar26[4]);
            auVar31[5] = -(auVar32[5] == auVar26[5]);
            auVar31[6] = -(auVar32[6] == auVar26[6]);
            auVar31[7] = -(auVar32[7] == auVar26[7]);
            auVar31[8] = -(auVar32[8] == auVar26[0]);
            auVar31[9] = -(auVar32[9] == auVar26[1]);
            auVar31[10] = -(auVar32[10] == auVar26[2]);
            auVar31[0xb] = -(auVar32[0xb] == auVar26[3]);
            auVar31[0xc] = -(auVar32[0xc] == auVar26[4]);
            auVar31[0xd] = -(auVar32[0xd] == auVar26[5]);
            auVar31[0xe] = -(auVar32[0xe] == auVar26[6]);
            auVar31[0xf] = -(auVar32[0xf] == auVar26[7]);
            uVar22 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
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
                     (ushort)(auVar31[0xf] >> 7) << 0xf;
            uVar17 = (uint)uVar22;
            while (uVar22 != 0) {
              uVar7 = 0;
              for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              uVar23 = uVar7 + uVar16 & plVar12[7];
              if (iVar2 == *(int *)(lVar4 + -0x18 + uVar23 * -0x18)) {
                lVar4 = lVar4 + uVar23 * -0x18;
                if (*(char *)(lVar4 + -4) == '\x11') goto LAB_1414cecb0;
                uStack_168 = *(undefined8 *)(lVar4 + -0xc);
                uStack_15d = *(undefined1 *)(lVar4 + -1);
                uStack_15f = *(undefined2 *)(lVar4 + -3);
                cStack_160 = *(char *)(lVar4 + -4);
                pdb_1409ed9b0(&lStack_148,uVar3,&uStack_168);
                uVar10 = uStack_130;
                uVar9 = uStack_138;
                uVar8 = uStack_140;
                lVar4 = lStack_148;
                if ((int)uStack_128 == 0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_143313d71,99,&UNK_143313de8);
                }
                puVar13 = (ulonglong *)pdb_1409ef0f0(uVar3,uStack_128 & 0xffffffff,uStack_128._4_4_)
                ;
                plVar15 = (longlong *)puVar13[3];
                LOCK();
                lVar21 = *plVar15;
                *plVar15 = *plVar15 + 1;
                UNLOCK();
                if (*plVar15 == 0 || SCARRY8(lVar21,1) != *plVar15 < 0) goto LAB_1414cede9;
                uStack_118 = puVar13[2];
                uStack_128 = *puVar13;
                uStack_120 = puVar13[1];
                lStack_148 = lVar4;
                uStack_140 = uVar8;
                uStack_138 = uVar9;
                uStack_130 = uVar10;
                plStack_110 = plVar15;
                pdb_141408060(&lStack_1f8,plStack_78,iVar2,&lStack_148);
                if ((char)uStack_1d8 != '\x11') {
                  LOCK();
                  *plStack_1c0 = *plStack_1c0 + -1;
                  UNLOCK();
                  if (*plStack_1c0 == 0) {
                    pdb_140c7b7a0(&plStack_1c0);
                  }
                }
                goto LAB_1414cecb0;
              }
              uVar22 = (ushort)(uVar17 - 1) & (ushort)uVar17;
              uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar22);
            }
            auVar28[0] = -(auVar32[0] == -1);
            auVar28[1] = -(auVar32[1] == -1);
            auVar28[2] = -(auVar32[2] == -1);
            auVar28[3] = -(auVar32[3] == -1);
            auVar28[4] = -(auVar32[4] == -1);
            auVar28[5] = -(auVar32[5] == -1);
            auVar28[6] = -(auVar32[6] == -1);
            auVar28[7] = -(auVar32[7] == -1);
            auVar28[8] = -(auVar32[8] == -1);
            auVar28[9] = -(auVar32[9] == -1);
            auVar28[10] = -(auVar32[10] == -1);
            auVar28[0xb] = -(auVar32[0xb] == -1);
            auVar28[0xc] = -(auVar32[0xc] == -1);
            auVar28[0xd] = -(auVar32[0xd] == -1);
            auVar28[0xe] = -(auVar32[0xe] == -1);
            auVar28[0xf] = -(auVar32[0xf] == -1);
            if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar28 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar28 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar28 >> 0x3f,0) & 1) != 0) || (SUB161(auVar28 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') break;
            uVar16 = uVar16 + lVar21 + 0x10;
            lVar21 = lVar21 + 0x10;
          }
        }
LAB_1414cecb0:
        uVar11 = uVar11 - 1 & uVar11;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
  return;
}

