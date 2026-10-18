// VA 0x1414cf0c0, PDB extent 4269 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_storage_decorators<alloc::string::String>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_storage_decorators<alloc::string::String>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 4269 */

void pdb_1414cf0c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6,ulonglong *param_7)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  byte *pbVar15;
  uint uVar16;
  undefined1 (*pauVar17) [16];
  char cVar18;
  byte bVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  ushort uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  longlong lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulonglong uStack_1f8;
  longlong *plStack_1f0;
  ulonglong uStack_1e8;
  longlong *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  ulonglong uStack_1b8;
  longlong *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  undefined8 uStack_188;
  char cStack_180;
  undefined2 uStack_17f;
  undefined1 uStack_17d;
  undefined8 uStack_178;
  char cStack_170;
  undefined2 uStack_16f;
  undefined1 uStack_16d;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong *plStack_140;
  ulonglong uStack_138;
  longlong *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  ulonglong uStack_108;
  longlong *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  ulonglong uStack_d8;
  longlong *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  int iStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  ulonglong *puStack_90;
  byte *pbStack_88;
  longlong *plStack_80;
  char cStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_98 = param_5;
  if (param_2 != 0) {
    if (param_2 == 1) {
      plVar13 = (longlong *)*param_7;
      pbVar15 = (byte *)param_7[1];
      if (param_1[0x18] != 0) {
LAB_1414cf34c:
        if (plVar13 == (longlong *)0x0) {
          return;
        }
        uVar10 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(uVar10,0,pbVar15);
        return;
      }
      puStack_90 = param_7;
      pbStack_88 = pbVar15;
      plStack_80 = plVar13;
      plVar11 = (longlong *)pdb_14008d710(0);
      if (plVar11 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1414cfd25;
      }
      lStack_b8 = *plVar11;
      lStack_b0 = plVar11[1];
      *plVar11 = *plVar11 + 1;
      uVar7 = _UNK_143512188;
      uVar10 = _DAT_143512180;
      plVar11 = _UNK_143512178;
      uVar14 = _DAT_143512170;
      uStack_c8 = _DAT_143512180;
      uStack_c0 = _UNK_143512188;
      uStack_d8 = _DAT_143512170;
      plStack_d0 = _UNK_143512178;
      puVar12 = (ulonglong *)pdb_140f3bda0();
      if ((char)puVar12[2] == '\x01') {
        uStack_1f8 = *puVar12;
        plVar13 = (longlong *)puVar12[1];
      }
      else {
        uStack_1f8 = pdb_140f4fd10();
        *puVar12 = uStack_1f8;
        puVar12[1] = (ulonglong)plVar13;
        *(undefined1 *)(puVar12 + 2) = 1;
      }
      *puVar12 = uStack_1f8 + 1;
      uStack_208 = _DAT_143313e50;
      uStack_200 = _UNK_143313e58;
      lStack_218 = _DAT_143313e40;
      uStack_210 = _UNK_143313e48;
      plStack_1f0 = plVar13;
      plVar13 = (longlong *)pdb_14008d710(0);
      if (plVar13 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1414cfd25;
      }
      lStack_e8 = *plVar13;
      lStack_e0 = plVar13[1];
      *plVar13 = *plVar13 + 1;
      lStack_118 = lStack_b8;
      lStack_110 = lStack_b0;
      uStack_128 = uStack_c8;
      uStack_120 = uStack_c0;
      uStack_138 = uStack_d8;
      plStack_130 = plStack_d0;
      lStack_168 = lStack_218;
      uStack_160 = uStack_210;
      uStack_158 = uStack_208;
      uStack_150 = uStack_200;
      uStack_148 = uStack_1f8;
      plStack_140 = plStack_1f0;
      uStack_108 = uVar14;
      plStack_100 = plVar11;
      uStack_f8 = uVar10;
      uStack_f0 = uVar7;
      pdb_1414fa150(&lStack_168,param_4);
      plVar13 = param_1 + 0x18;
    }
    else {
      plVar13 = (longlong *)*param_7;
      pbVar15 = (byte *)param_7[1];
      if (param_1[0x2a] != 0) goto LAB_1414cf34c;
      puStack_90 = param_7;
      pbStack_88 = pbVar15;
      plStack_80 = plVar13;
      plVar11 = (longlong *)pdb_14008d710(0);
      if (plVar11 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1414cfd25;
      }
      lStack_b8 = *plVar11;
      lStack_b0 = plVar11[1];
      *plVar11 = *plVar11 + 1;
      uVar7 = _UNK_143512188;
      uVar10 = _DAT_143512180;
      plVar11 = _UNK_143512178;
      uVar14 = _DAT_143512170;
      uStack_c8 = _DAT_143512180;
      uStack_c0 = _UNK_143512188;
      uStack_d8 = _DAT_143512170;
      plStack_d0 = _UNK_143512178;
      puVar12 = (ulonglong *)pdb_140f3bda0();
      if ((char)puVar12[2] == '\x01') {
        uStack_1f8 = *puVar12;
        plVar13 = (longlong *)puVar12[1];
      }
      else {
        uStack_1f8 = pdb_140f4fd10();
        *puVar12 = uStack_1f8;
        puVar12[1] = (ulonglong)plVar13;
        *(undefined1 *)(puVar12 + 2) = 1;
      }
      *puVar12 = uStack_1f8 + 1;
      uStack_208 = _DAT_143313e50;
      uStack_200 = _UNK_143313e58;
      lStack_218 = _DAT_143313e40;
      uStack_210 = _UNK_143313e48;
      plStack_1f0 = plVar13;
      plVar13 = (longlong *)pdb_14008d710(0);
      if (plVar13 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1414cfd25;
      }
      lStack_e8 = *plVar13;
      lStack_e0 = plVar13[1];
      *plVar13 = *plVar13 + 1;
      lStack_118 = lStack_b8;
      lStack_110 = lStack_b0;
      uStack_128 = uStack_c8;
      uStack_120 = uStack_c0;
      uStack_138 = uStack_d8;
      plStack_130 = plStack_d0;
      lStack_168 = lStack_218;
      uStack_160 = uStack_210;
      uStack_158 = uStack_208;
      uStack_150 = uStack_200;
      uStack_148 = uStack_1f8;
      plStack_140 = plStack_1f0;
      uStack_108 = uVar14;
      plStack_100 = plVar11;
      uStack_f8 = uVar10;
      uStack_f0 = uVar7;
      pdb_1414fa150(&lStack_168,param_4);
      plVar13 = param_1 + 0x2a;
    }
    pub_142e32760(&lStack_218,&lStack_168,0x90);
    if (plStack_80 != (longlong *)0x0) {
      pub_1406abac0(pbStack_88,(ulonglong)plStack_80,1);
    }
    plStack_80 = param_1;
    pub_142e32760(plVar13,&lStack_218,0x90);
    cVar18 = '\0';
LAB_1414cf6d5:
    pauVar20 = *(undefined1 (**) [16])(param_4 + 0x30);
    lVar24 = *(longlong *)(param_4 + 0x48);
    auVar27 = *pauVar20;
    pauVar17 = pauVar20 + 1;
    uVar25 = ~(uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
    pbStack_88 = (byte *)(plStack_80 + 0xc);
LAB_1414cf8a0:
    do {
      if (lVar24 == 0) {
        pauVar20 = *(undefined1 (**) [16])(param_4 + 0x30);
        lVar24 = *(longlong *)(param_4 + 0x48);
        auVar27 = *pauVar20;
        pauVar17 = pauVar20 + 1;
        uVar25 = ~(uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
        plStack_80 = plStack_80 + 0x12;
LAB_1414cfb00:
        do {
          if (lVar24 == 0) {
            if (cVar18 != '\0') {
LAB_1414cfba7:
              if (*puStack_90 != 0) {
                pub_1406abac0((byte *)puStack_90[1],*puStack_90,1);
              }
            }
            return;
          }
          if ((short)uVar25 == 0) {
            do {
              auVar27 = *pauVar17;
              pauVar20 = pauVar20 + -0x68;
              pauVar17 = pauVar17 + 1;
              uVar25 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar25 == 0);
          }
          uVar16 = 0;
          for (uVar6 = uVar25; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          uVar25 = uVar25 - 1 & uVar25;
          lVar24 = lVar24 + -1;
          iVar2 = *(int *)((longlong)pauVar20 + (ulonglong)uVar16 * -0x68 + -0x68);
          iStack_a0 = iVar2;
          if (param_6[9] != 0) {
            cStack_71 = cVar18;
            uVar14 = pdb_1400aede0(param_6 + 10,&iStack_a0);
            lVar3 = param_6[6];
            bVar19 = (byte)(uVar14 >> 0x39);
            auVar27 = ZEXT216(CONCAT11(bVar19,bVar19));
            auVar27 = pshuflw(auVar27,auVar27,0);
            lVar21 = 0;
            while( true ) {
              uVar14 = uVar14 & param_6[7];
              auVar33 = *(undefined1 (*) [16])(lVar3 + uVar14);
              auVar32[0] = -(auVar33[0] == auVar27[0]);
              auVar32[1] = -(auVar33[1] == auVar27[1]);
              auVar32[2] = -(auVar33[2] == auVar27[2]);
              auVar32[3] = -(auVar33[3] == auVar27[3]);
              auVar32[4] = -(auVar33[4] == auVar27[4]);
              auVar32[5] = -(auVar33[5] == auVar27[5]);
              auVar32[6] = -(auVar33[6] == auVar27[6]);
              auVar32[7] = -(auVar33[7] == auVar27[7]);
              auVar32[8] = -(auVar33[8] == auVar27[0]);
              auVar32[9] = -(auVar33[9] == auVar27[1]);
              auVar32[10] = -(auVar33[10] == auVar27[2]);
              auVar32[0xb] = -(auVar33[0xb] == auVar27[3]);
              auVar32[0xc] = -(auVar33[0xc] == auVar27[4]);
              auVar32[0xd] = -(auVar33[0xd] == auVar27[5]);
              auVar32[0xe] = -(auVar33[0xe] == auVar27[6]);
              auVar32[0xf] = -(auVar33[0xf] == auVar27[7]);
              uVar22 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
              uVar16 = (uint)uVar22;
              while (uVar22 != 0) {
                uVar6 = 0;
                for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar6 = uVar6 + 1;
                }
                uVar23 = uVar6 + uVar14 & param_6[7];
                if (iVar2 == *(int *)(lVar3 + -0x18 + uVar23 * -0x18)) {
                  lVar3 = lVar3 + uVar23 * -0x18;
                  if (*(char *)(lVar3 + -4) == '\x11') goto LAB_1414cfb00;
                  uStack_188 = *(undefined8 *)(lVar3 + -0xc);
                  uStack_17d = *(undefined1 *)(lVar3 + -1);
                  uStack_17f = *(undefined2 *)(lVar3 + -3);
                  cStack_180 = *(char *)(lVar3 + -4);
                  cStack_71 = cVar18;
                  pdb_1409ed9b0(&lStack_168,uStack_98,&uStack_188);
                  uVar8 = uStack_150;
                  uVar7 = uStack_158;
                  uVar10 = uStack_160;
                  lVar3 = lStack_168;
                  if ((int)uStack_148 == 0) {
                    cStack_71 = cVar18;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_143313d71,99,&UNK_143313de8);
                  }
                  cStack_71 = cVar18;
                  puVar12 = (ulonglong *)
                            pdb_1409ef0f0(uStack_98,uStack_148 & 0xffffffff,uStack_148._4_4_);
                  plVar13 = (longlong *)puVar12[3];
                  LOCK();
                  lVar21 = *plVar13;
                  *plVar13 = *plVar13 + 1;
                  UNLOCK();
                  if (*plVar13 == 0 || SCARRY8(lVar21,1) != *plVar13 < 0) goto LAB_1414cfd25;
                  uStack_138 = puVar12[2];
                  uStack_148 = *puVar12;
                  plStack_140 = (longlong *)puVar12[1];
                  lStack_168 = lVar3;
                  uStack_160 = uVar10;
                  uStack_158 = uVar7;
                  uStack_150 = uVar8;
                  plStack_130 = plVar13;
                  cStack_71 = cVar18;
                  pdb_141408060(&lStack_218,plStack_80,iVar2,&lStack_168);
                  if ((char)uStack_1f8 != '\x11') {
                    LOCK();
                    *plStack_1e0 = *plStack_1e0 + -1;
                    UNLOCK();
                    if (*plStack_1e0 == 0) {
                      cStack_71 = cVar18;
                      pdb_140c7b7a0(&plStack_1e0);
                    }
                  }
                  goto LAB_1414cfb00;
                }
                uVar22 = (ushort)(uVar16 - 1) & (ushort)uVar16;
                uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar22);
              }
              auVar29[0] = -(auVar33[0] == -1);
              auVar29[1] = -(auVar33[1] == -1);
              auVar29[2] = -(auVar33[2] == -1);
              auVar29[3] = -(auVar33[3] == -1);
              auVar29[4] = -(auVar33[4] == -1);
              auVar29[5] = -(auVar33[5] == -1);
              auVar29[6] = -(auVar33[6] == -1);
              auVar29[7] = -(auVar33[7] == -1);
              auVar29[8] = -(auVar33[8] == -1);
              auVar29[9] = -(auVar33[9] == -1);
              auVar29[10] = -(auVar33[10] == -1);
              auVar29[0xb] = -(auVar33[0xb] == -1);
              auVar29[0xc] = -(auVar33[0xc] == -1);
              auVar29[0xd] = -(auVar33[0xd] == -1);
              auVar29[0xe] = -(auVar33[0xe] == -1);
              auVar29[0xf] = -(auVar33[0xf] == -1);
              if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
              uVar14 = uVar14 + lVar21 + 0x10;
              lVar21 = lVar21 + 0x10;
            }
          }
        } while( true );
      }
      if ((short)uVar25 == 0) {
        do {
          auVar27 = *pauVar17;
          pauVar20 = pauVar20 + -0x68;
          pauVar17 = pauVar17 + 1;
          uVar25 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar25 == 0);
      }
      uVar16 = 0;
      for (uVar6 = uVar25; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      uVar25 = uVar25 - 1 & uVar25;
      lVar24 = lVar24 + -1;
      iVar2 = *(int *)((longlong)pauVar20 + (ulonglong)uVar16 * -0x68 + -0x68);
      iStack_9c = iVar2;
      if (param_6[3] != 0) {
        cStack_71 = cVar18;
        uVar14 = pdb_1400aede0(param_6 + 4,&iStack_9c);
        lVar3 = *param_6;
        bVar19 = (byte)(uVar14 >> 0x39);
        auVar27 = ZEXT216(CONCAT11(bVar19,bVar19));
        auVar27 = pshuflw(auVar27,auVar27,0);
        lVar21 = 0;
        while( true ) {
          uVar14 = uVar14 & param_6[1];
          auVar33 = *(undefined1 (*) [16])(lVar3 + uVar14);
          auVar31[0] = -(auVar33[0] == auVar27[0]);
          auVar31[1] = -(auVar33[1] == auVar27[1]);
          auVar31[2] = -(auVar33[2] == auVar27[2]);
          auVar31[3] = -(auVar33[3] == auVar27[3]);
          auVar31[4] = -(auVar33[4] == auVar27[4]);
          auVar31[5] = -(auVar33[5] == auVar27[5]);
          auVar31[6] = -(auVar33[6] == auVar27[6]);
          auVar31[7] = -(auVar33[7] == auVar27[7]);
          auVar31[8] = -(auVar33[8] == auVar27[0]);
          auVar31[9] = -(auVar33[9] == auVar27[1]);
          auVar31[10] = -(auVar33[10] == auVar27[2]);
          auVar31[0xb] = -(auVar33[0xb] == auVar27[3]);
          auVar31[0xc] = -(auVar33[0xc] == auVar27[4]);
          auVar31[0xd] = -(auVar33[0xd] == auVar27[5]);
          auVar31[0xe] = -(auVar33[0xe] == auVar27[6]);
          auVar31[0xf] = -(auVar33[0xf] == auVar27[7]);
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
          uVar16 = (uint)uVar22;
          while (uVar22 != 0) {
            uVar6 = 0;
            for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            uVar23 = uVar6 + uVar14 & param_6[1];
            if (iVar2 == *(int *)(lVar3 + -0x18 + uVar23 * -0x18)) {
              lVar3 = lVar3 + uVar23 * -0x18;
              if (*(char *)(lVar3 + -4) == '\x11') goto LAB_1414cf8a0;
              uStack_178 = *(undefined8 *)(lVar3 + -0xc);
              uStack_16d = *(undefined1 *)(lVar3 + -1);
              uStack_16f = *(undefined2 *)(lVar3 + -3);
              cStack_170 = *(char *)(lVar3 + -4);
              cStack_71 = cVar18;
              pdb_1409ed9b0(&lStack_168,uStack_98,&uStack_178);
              uVar8 = uStack_150;
              uVar7 = uStack_158;
              uVar10 = uStack_160;
              lVar3 = lStack_168;
              if ((int)uStack_148 == 0) {
                cStack_71 = cVar18;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143313d71,99,&UNK_143313e00);
              }
              cStack_71 = cVar18;
              puVar12 = (ulonglong *)
                        pdb_1409ef0f0(uStack_98,uStack_148 & 0xffffffff,uStack_148._4_4_);
              plVar13 = (longlong *)puVar12[3];
              LOCK();
              lVar21 = *plVar13;
              *plVar13 = *plVar13 + 1;
              UNLOCK();
              if (*plVar13 == 0 || SCARRY8(lVar21,1) != *plVar13 < 0) goto LAB_1414cfd25;
              uStack_138 = puVar12[2];
              uStack_148 = *puVar12;
              plStack_140 = (longlong *)puVar12[1];
              lStack_168 = lVar3;
              uStack_160 = uVar10;
              uStack_158 = uVar7;
              uStack_150 = uVar8;
              plStack_130 = plVar13;
              cStack_71 = cVar18;
              pdb_141408060(&lStack_218,pbStack_88,iVar2,&lStack_168);
              if ((char)uStack_1f8 != '\x11') {
                LOCK();
                *plStack_1e0 = *plStack_1e0 + -1;
                UNLOCK();
                if (*plStack_1e0 == 0) {
                  cStack_71 = cVar18;
                  pdb_140c7b7a0(&plStack_1e0);
                }
              }
              goto LAB_1414cf8a0;
            }
            uVar22 = (ushort)(uVar16 - 1) & (ushort)uVar16;
            uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar22);
          }
          auVar28[0] = -(auVar33[0] == -1);
          auVar28[1] = -(auVar33[1] == -1);
          auVar28[2] = -(auVar33[2] == -1);
          auVar28[3] = -(auVar33[3] == -1);
          auVar28[4] = -(auVar33[4] == -1);
          auVar28[5] = -(auVar33[5] == -1);
          auVar28[6] = -(auVar33[6] == -1);
          auVar28[7] = -(auVar33[7] == -1);
          auVar28[8] = -(auVar33[8] == -1);
          auVar28[9] = -(auVar33[9] == -1);
          auVar28[10] = -(auVar33[10] == -1);
          auVar28[0xb] = -(auVar33[0xb] == -1);
          auVar28[0xc] = -(auVar33[0xc] == -1);
          auVar28[0xd] = -(auVar33[0xd] == -1);
          auVar28[0xe] = -(auVar33[0xe] == -1);
          auVar28[0xf] = -(auVar33[0xf] == -1);
          if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar28 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar28 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar28 >> 0x2f,0) & 1) != 0) || (SUB161(auVar28 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') break;
          uVar14 = uVar14 + lVar21 + 0x10;
          lVar21 = lVar21 + 0x10;
        }
      }
    } while( true );
  }
  puStack_90 = param_7;
  cStack_71 = '\x01';
  lStack_168 = param_3;
  plStack_80 = param_1;
  uVar23 = pdb_1400af0a0(param_1 + 4);
  bVar19 = (byte)(uVar23 >> 0x38);
  bVar26 = bVar19 >> 1;
  auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
  auVar27 = pshuflw(auVar27,auVar27,0);
  plVar13 = (longlong *)0x0;
  uVar14 = uVar23;
  while( true ) {
    uVar14 = uVar14 & plStack_80[1];
    pcVar1 = (char *)(*plStack_80 + uVar14);
    auVar33[0] = -(*pcVar1 == auVar27[0]);
    auVar33[1] = -(pcVar1[1] == auVar27[1]);
    auVar33[2] = -(pcVar1[2] == auVar27[2]);
    auVar33[3] = -(pcVar1[3] == auVar27[3]);
    auVar33[4] = -(pcVar1[4] == auVar27[4]);
    auVar33[5] = -(pcVar1[5] == auVar27[5]);
    auVar33[6] = -(pcVar1[6] == auVar27[6]);
    auVar33[7] = -(pcVar1[7] == auVar27[7]);
    auVar33[8] = -(pcVar1[8] == auVar27[0]);
    auVar33[9] = -(pcVar1[9] == auVar27[1]);
    auVar33[10] = -(pcVar1[10] == auVar27[2]);
    auVar33[0xb] = -(pcVar1[0xb] == auVar27[3]);
    auVar33[0xc] = -(pcVar1[0xc] == auVar27[4]);
    auVar33[0xd] = -(pcVar1[0xd] == auVar27[5]);
    auVar33[0xe] = -(pcVar1[0xe] == auVar27[6]);
    auVar33[0xf] = -(pcVar1[0xf] == auVar27[7]);
    uVar22 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
    uVar25 = (uint)uVar22;
    while (uVar22 != 0) {
      uVar16 = 0;
      for (uVar6 = uVar25; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      if (*(longlong *)(*plStack_80 + -0x98 + (uVar16 + uVar14 & plStack_80[1]) * -0x98) == param_3)
      goto LAB_1414cfba7;
      uVar22 = (ushort)(uVar25 - 1) & (ushort)uVar25;
      uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar22);
    }
    auVar30[0] = -(*pcVar1 == -1);
    auVar30[1] = -(pcVar1[1] == -1);
    auVar30[2] = -(pcVar1[2] == -1);
    auVar30[3] = -(pcVar1[3] == -1);
    auVar30[4] = -(pcVar1[4] == -1);
    auVar30[5] = -(pcVar1[5] == -1);
    auVar30[6] = -(pcVar1[6] == -1);
    auVar30[7] = -(pcVar1[7] == -1);
    auVar30[8] = -(pcVar1[8] == -1);
    auVar30[9] = -(pcVar1[9] == -1);
    auVar30[10] = -(pcVar1[10] == -1);
    auVar30[0xb] = -(pcVar1[0xb] == -1);
    auVar30[0xc] = -(pcVar1[0xc] == -1);
    auVar30[0xd] = -(pcVar1[0xd] == -1);
    auVar30[0xe] = -(pcVar1[0xe] == -1);
    auVar30[0xf] = -(pcVar1[0xf] == -1);
    uVar22 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
    if (uVar22 != 0) break;
    uVar14 = (longlong)plVar13 + uVar14 + 0x10;
    plVar13 = plVar13 + 2;
  }
  if (plStack_80[2] == 0) {
    cStack_71 = 1;
    plVar13 = (longlong *)0x1;
    pdb_142dadf10(plStack_80,1,param_1 + 4,CONCAT71((uint7)(byte)(uVar22 >> 8),1));
  }
  cStack_71 = '\x01';
  plVar11 = (longlong *)pdb_14008d710(0);
  if (plVar11 == (longlong *)0x0) {
    cStack_71 = '\x01';
    pdb_142dc7890(&UNK_14330e598);
  }
  else {
    lStack_b8 = *plVar11;
    lStack_b0 = plVar11[1];
    *plVar11 = *plVar11 + 1;
    uVar7 = _UNK_143512188;
    uVar10 = _DAT_143512180;
    plVar11 = _UNK_143512178;
    uVar14 = _DAT_143512170;
    uStack_c8 = _DAT_143512180;
    uStack_c0 = _UNK_143512188;
    uStack_d8 = _DAT_143512170;
    plStack_d0 = _UNK_143512178;
    puVar12 = (ulonglong *)pdb_140f3bda0();
    plVar9 = plStack_80;
    if ((char)puVar12[2] == '\x01') {
      uStack_148 = *puVar12;
      plVar13 = (longlong *)puVar12[1];
    }
    else {
      uStack_148 = pdb_140f4fd10();
      *puVar12 = uStack_148;
      puVar12[1] = (ulonglong)plVar13;
      *(undefined1 *)(puVar12 + 2) = 1;
    }
    *puVar12 = uStack_148 + 1;
    uStack_158 = _DAT_143313e50;
    uStack_150 = _UNK_143313e58;
    lStack_168 = _DAT_143313e40;
    uStack_160 = _UNK_143313e48;
    plStack_140 = plVar13;
    plVar13 = (longlong *)pdb_14008d710(0);
    if (plVar13 != (longlong *)0x0) {
      lStack_198 = *plVar13;
      lStack_190 = plVar13[1];
      *plVar13 = *plVar13 + 1;
      lStack_1c8 = lStack_b8;
      lStack_1c0 = lStack_b0;
      uStack_1d8 = uStack_c8;
      uStack_1d0 = uStack_c0;
      uStack_1e8 = uStack_d8;
      plStack_1e0 = plStack_d0;
      lStack_218 = lStack_168;
      uStack_210 = uStack_160;
      uStack_208 = uStack_158;
      uStack_200 = uStack_150;
      uStack_1f8 = uStack_148;
      plStack_1f0 = plStack_140;
      uStack_1b8 = uVar14;
      plStack_1b0 = plVar11;
      uStack_1a8 = uVar10;
      uStack_1a0 = uVar7;
      pdb_1414fa150(&lStack_218,param_4);
      pub_142e32760(&lStack_168,&lStack_218,0x90);
      pauVar17 = (undefined1 (*) [16])*plVar9;
      uVar14 = plVar9[1];
      uVar23 = uVar23 & uVar14;
      auVar27 = *(undefined1 (*) [16])(*pauVar17 + uVar23);
      uVar22 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
      uVar25 = (uint)uVar22;
      if (uVar22 == 0) {
        lVar24 = 0x10;
        do {
          uVar23 = uVar23 + lVar24 & uVar14;
          auVar27 = *(undefined1 (*) [16])(*pauVar17 + uVar23);
          lVar24 = lVar24 + 0x10;
          uVar25 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
        } while (uVar25 == 0);
      }
      uVar16 = 0;
      for (; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      uVar23 = uVar16 + uVar23 & uVar14;
      bVar26 = (*pauVar17)[uVar23];
      if (-1 < (char)bVar26) {
        auVar27 = *pauVar17;
        uVar25 = 0;
        for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar27[0xf] >> 7) << 0xf); (uVar16 & 1) == 0;
            uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        uVar23 = (ulonglong)uVar25;
        bVar26 = (*pauVar17)[uVar23];
      }
      bVar19 = bVar19 >> 1;
      (*pauVar17)[uVar23] = bVar19;
      pauVar17[1][uVar23 - 0x10 & uVar14] = bVar19;
      *(longlong *)((longlong)pauVar17 + uVar23 * -0x98 + -0x98) = param_3;
      pub_142e32760((longlong)pauVar17 + uVar23 * -0x98 + -0x90,&lStack_168,0x90);
      lVar24 = plVar9[3] - _UNK_142e47bf8;
      plVar9[2] = plVar9[2] - (ulonglong)(bVar26 & 1);
      plVar9[3] = lVar24;
      cVar18 = '\x01';
      goto LAB_1414cf6d5;
    }
    pdb_142dc7890(&UNK_14330e598);
  }
LAB_1414cfd25:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

