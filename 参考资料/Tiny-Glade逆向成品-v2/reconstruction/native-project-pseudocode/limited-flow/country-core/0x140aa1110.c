// VA 0x140aa1110, PDB extent 4269 bytes
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

void pdb_140aa1110(byte *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong *param_6,ulonglong *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  char cVar19;
  byte bVar20;
  undefined1 (*pauVar21) [16];
  longlong lVar22;
  ushort uVar23;
  ulonglong uVar24;
  uint uVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  ulonglong uStack_1d0;
  longlong lStack_1c8;
  longlong *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  longlong lStack_138;
  longlong *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  int iStack_a8;
  int iStack_a4;
  longlong lStack_a0;
  longlong lStack_98;
  ulonglong *puStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  char cStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lStack_98 = param_5;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar14 = *param_7;
      pbVar12 = (byte *)param_7[1];
      if (*(longlong *)(param_1 + 0xc0) != 0) {
LAB_140aa138e:
        if (uVar14 == 0) {
          return;
        }
        uVar15 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(uVar15,0,pbVar12);
        return;
      }
      puStack_90 = param_7;
      uStack_88 = uVar14;
      pbStack_80 = pbVar12;
      plVar9 = (longlong *)pdb_14008d710(0);
      if (plVar9 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140aa1d6f;
      }
      lStack_b8 = *plVar9;
      lStack_b0 = plVar9[1];
      *plVar9 = *plVar9 + 1;
      uVar8 = _UNK_14306c4f8;
      uVar15 = _DAT_14306c4f0;
      plVar9 = _UNK_14306c4e8;
      lVar17 = _DAT_14306c4e0;
      uStack_c8 = _DAT_14306c4f0;
      uStack_c0 = _UNK_14306c4f8;
      lStack_d8 = _DAT_14306c4e0;
      plStack_d0 = _UNK_14306c4e8;
      plVar10 = (longlong *)pdb_140f3bda0();
      if ((char)plVar10[2] == '\x01') {
        lStack_1d8 = *plVar10;
        uVar14 = plVar10[1];
      }
      else {
        lStack_1d8 = pdb_140f4fd10();
        *plVar10 = lStack_1d8;
        plVar10[1] = uVar14;
        *(undefined1 *)(plVar10 + 2) = 1;
      }
      *plVar10 = lStack_1d8 + 1;
      uStack_1e8 = _DAT_143046aa0;
      uStack_1e0 = _UNK_143046aa8;
      lStack_1f8 = _DAT_143046a90;
      uStack_1f0 = _UNK_143046a98;
      uStack_1d0 = uVar14;
      plVar10 = (longlong *)pdb_14008d710(0);
      if (plVar10 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140aa1d6f;
      }
      lStack_e8 = *plVar10;
      lStack_e0 = plVar10[1];
      *plVar10 = *plVar10 + 1;
      lStack_118 = lStack_b8;
      lStack_110 = lStack_b0;
      uStack_128 = uStack_c8;
      uStack_120 = uStack_c0;
      lStack_138 = lStack_d8;
      plStack_130 = plStack_d0;
      lStack_168 = lStack_1f8;
      uStack_160 = uStack_1f0;
      uStack_158 = uStack_1e8;
      uStack_150 = uStack_1e0;
      lStack_148 = lStack_1d8;
      uStack_140 = uStack_1d0;
      lStack_108 = lVar17;
      plStack_100 = plVar9;
      uStack_f8 = uVar15;
      uStack_f0 = uVar8;
      pdb_140c8eed0(&lStack_168,param_4);
      pbVar12 = param_1 + 0xc0;
    }
    else {
      uVar14 = *param_7;
      pbVar12 = (byte *)param_7[1];
      if (*(longlong *)(param_1 + 0x150) != 0) goto LAB_140aa138e;
      puStack_90 = param_7;
      uStack_88 = uVar14;
      pbStack_80 = pbVar12;
      plVar9 = (longlong *)pdb_14008d710(0);
      if (plVar9 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140aa1d6f;
      }
      lStack_b8 = *plVar9;
      lStack_b0 = plVar9[1];
      *plVar9 = *plVar9 + 1;
      uVar8 = _UNK_14306c4f8;
      uVar15 = _DAT_14306c4f0;
      plVar9 = _UNK_14306c4e8;
      lVar17 = _DAT_14306c4e0;
      uStack_c8 = _DAT_14306c4f0;
      uStack_c0 = _UNK_14306c4f8;
      lStack_d8 = _DAT_14306c4e0;
      plStack_d0 = _UNK_14306c4e8;
      plVar10 = (longlong *)pdb_140f3bda0();
      if ((char)plVar10[2] == '\x01') {
        lStack_1d8 = *plVar10;
        uVar14 = plVar10[1];
      }
      else {
        lStack_1d8 = pdb_140f4fd10();
        *plVar10 = lStack_1d8;
        plVar10[1] = uVar14;
        *(undefined1 *)(plVar10 + 2) = 1;
      }
      *plVar10 = lStack_1d8 + 1;
      uStack_1e8 = _DAT_143046aa0;
      uStack_1e0 = _UNK_143046aa8;
      lStack_1f8 = _DAT_143046a90;
      uStack_1f0 = _UNK_143046a98;
      uStack_1d0 = uVar14;
      plVar10 = (longlong *)pdb_14008d710(0);
      if (plVar10 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140aa1d6f;
      }
      lStack_e8 = *plVar10;
      lStack_e0 = plVar10[1];
      *plVar10 = *plVar10 + 1;
      lStack_118 = lStack_b8;
      lStack_110 = lStack_b0;
      uStack_128 = uStack_c8;
      uStack_120 = uStack_c0;
      lStack_138 = lStack_d8;
      plStack_130 = plStack_d0;
      lStack_168 = lStack_1f8;
      uStack_160 = uStack_1f0;
      uStack_158 = uStack_1e8;
      uStack_150 = uStack_1e0;
      lStack_148 = lStack_1d8;
      uStack_140 = uStack_1d0;
      lStack_108 = lVar17;
      plStack_100 = plVar9;
      uStack_f8 = uVar15;
      uStack_f0 = uVar8;
      pdb_140c8eed0(&lStack_168,param_4);
      pbVar12 = param_1 + 0x150;
    }
    pub_142e32760(&lStack_1f8,&lStack_168,0x90);
    if (uStack_88 != 0) {
      pub_1406abac0(pbStack_80,uStack_88,1);
    }
    pbStack_80 = param_1;
    pub_142e32760(pbVar12,&lStack_1f8,0x90);
    cVar19 = '\0';
LAB_140aa16f8:
    pauVar18 = *(undefined1 (**) [16])(param_4 + 0x30);
    lVar17 = *(longlong *)(param_4 + 0x48);
    auVar27 = *pauVar18;
    pauVar21 = pauVar18 + 1;
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
    pbVar12 = pbStack_80 + 0x60;
    uStack_88 = lStack_98 + 0x20;
    lStack_a0 = param_4;
LAB_140aa18c0:
    do {
      if (lVar17 == 0) {
        pauVar18 = *(undefined1 (**) [16])(lStack_a0 + 0x30);
        lVar17 = *(longlong *)(lStack_a0 + 0x48);
        auVar27 = *pauVar18;
        pauVar21 = pauVar18 + 1;
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
        pbStack_80 = pbStack_80 + 0x90;
LAB_140aa1b00:
        do {
          if (lVar17 == 0) {
            if (cVar19 != '\0') {
LAB_140aa1ba7:
              if (*puStack_90 != 0) {
                pub_1406abac0((byte *)puStack_90[1],*puStack_90,1);
              }
            }
            return;
          }
          if ((short)uVar25 == 0) {
            do {
              auVar27 = *pauVar21;
              pauVar18 = pauVar18 + -0x68;
              pauVar21 = pauVar21 + 1;
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
          for (uVar7 = uVar25; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          uVar25 = uVar25 - 1 & uVar25;
          lVar17 = lVar17 + -1;
          iVar3 = *(int *)((longlong)pauVar18 + (ulonglong)uVar16 * -0x68 + -0x68);
          iStack_a8 = iVar3;
          if (param_6[9] != 0) {
            cStack_71 = cVar19;
            uVar14 = pdb_1400aede0(param_6 + 10,&iStack_a8);
            lVar4 = param_6[6];
            bVar20 = (byte)(uVar14 >> 0x39);
            auVar27 = ZEXT216(CONCAT11(bVar20,bVar20));
            auVar27 = pshuflw(auVar27,auVar27,0);
            lVar22 = 0;
            while( true ) {
              uVar14 = uVar14 & param_6[7];
              auVar33 = *(undefined1 (*) [16])(lVar4 + uVar14);
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
              uVar16 = (uint)uVar23;
              while (uVar23 != 0) {
                uVar7 = 0;
                for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                uVar24 = uVar7 + uVar14 & param_6[7];
                if (iVar3 == *(int *)(lVar4 + -0x18 + uVar24 * -0x18)) {
                  lVar4 = lVar4 + uVar24 * -0x18;
                  uVar14 = (ulonglong)*(byte *)(lVar4 + -4);
                  if (uVar14 == 0x11) goto LAB_140aa1b00;
                  uVar24 = *(ulonglong *)(lVar4 + -0xc);
                  cStack_71 = cVar19;
                  puVar13 = (ulonglong *)
                            pdb_140cd4bd0(uVar14 * 0x390 + uStack_88,uVar24,uVar24 >> 0x20);
                  if (puVar13 == (ulonglong *)0x0) {
                    cStack_71 = cVar19;
                    pdb_142dc8110(&UNK_143033b50,0x42,&UNK_143033b98);
                    goto LAB_140aa1d6f;
                  }
                  uVar14 = *puVar13 & 0xffffffff;
                  if (((*(ulonglong *)(lStack_98 + 0x10) <= uVar14) ||
                      (lVar4 = *(longlong *)(lStack_98 + 8), lVar4 == 0)) ||
                     (*(uint *)(lVar4 + 0x20 + uVar14 * 0x28) != ((uint)(*puVar13 >> 0x20) | 1))) {
                    cStack_71 = cVar19;
                    pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033c40);
                    goto LAB_140aa1d6f;
                  }
                  uVar15 = *(undefined8 *)((longlong)puVar13 + 0x44);
                  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x4c);
                  lVar22 = *(longlong *)((longlong)puVar13 + 0x34);
                  uVar8 = *(undefined8 *)((longlong)puVar13 + 0x3c);
                  plVar9 = (longlong *)(lVar4 + uVar14 * 0x28);
                  plVar10 = (longlong *)plVar9[3];
                  LOCK();
                  lVar4 = *plVar10;
                  *plVar10 = *plVar10 + 1;
                  UNLOCK();
                  if (*plVar10 == 0 || SCARRY8(lVar4,1) != *plVar10 < 0) goto LAB_140aa1d6f;
                  lStack_138 = plVar9[2];
                  lStack_148 = *plVar9;
                  uStack_140 = plVar9[1];
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar2);
                  lStack_168 = lVar22;
                  uStack_160 = uVar8;
                  uStack_158 = uVar15;
                  plStack_130 = plVar10;
                  cStack_71 = cVar19;
                  pdb_141408060(&lStack_1f8,pbStack_80,iVar3,&lStack_168);
                  if ((char)lStack_1d8 != '\x11') {
                    LOCK();
                    *plStack_1c0 = *plStack_1c0 + -1;
                    UNLOCK();
                    if (*plStack_1c0 == 0) {
                      cStack_71 = cVar19;
                      pdb_140c7b7a0(&plStack_1c0);
                    }
                  }
                  goto LAB_140aa1b00;
                }
                uVar23 = (ushort)(uVar16 - 1) & (ushort)uVar16;
                uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar23);
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
              uVar14 = uVar14 + lVar22 + 0x10;
              lVar22 = lVar22 + 0x10;
            }
          }
        } while( true );
      }
      if ((short)uVar25 == 0) {
        do {
          auVar27 = *pauVar21;
          pauVar18 = pauVar18 + -0x68;
          pauVar21 = pauVar21 + 1;
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
      for (uVar7 = uVar25; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      uVar25 = uVar25 - 1 & uVar25;
      lVar17 = lVar17 + -1;
      iVar3 = *(int *)((longlong)pauVar18 + (ulonglong)uVar16 * -0x68 + -0x68);
      iStack_a4 = iVar3;
      if (param_6[3] != 0) {
        cStack_71 = cVar19;
        uVar14 = pdb_1400aede0(param_6 + 4,&iStack_a4);
        lVar4 = *param_6;
        bVar20 = (byte)(uVar14 >> 0x39);
        auVar27 = ZEXT216(CONCAT11(bVar20,bVar20));
        auVar27 = pshuflw(auVar27,auVar27,0);
        lVar22 = 0;
        while( true ) {
          uVar14 = uVar14 & param_6[1];
          auVar33 = *(undefined1 (*) [16])(lVar4 + uVar14);
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
          uVar23 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
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
          uVar16 = (uint)uVar23;
          while (uVar23 != 0) {
            uVar7 = 0;
            for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            uVar24 = uVar7 + uVar14 & param_6[1];
            if (iVar3 == *(int *)(lVar4 + -0x18 + uVar24 * -0x18)) {
              lVar4 = lVar4 + uVar24 * -0x18;
              uVar14 = (ulonglong)*(byte *)(lVar4 + -4);
              if (uVar14 == 0x11) goto LAB_140aa18c0;
              uVar24 = *(ulonglong *)(lVar4 + -0xc);
              cStack_71 = cVar19;
              puVar13 = (ulonglong *)pdb_140cd4bd0(uVar14 * 0x390 + uStack_88,uVar24,uVar24 >> 0x20)
              ;
              if (puVar13 == (ulonglong *)0x0) {
                cStack_71 = cVar19;
                pdb_142dc8110(&UNK_143033b50,0x42,&UNK_143033b98);
                goto LAB_140aa1d6f;
              }
              uVar14 = *puVar13 & 0xffffffff;
              if (((*(ulonglong *)(lStack_98 + 0x10) <= uVar14) ||
                  (lVar4 = *(longlong *)(lStack_98 + 8), lVar4 == 0)) ||
                 (*(uint *)(lVar4 + 0x20 + uVar14 * 0x28) != ((uint)(*puVar13 >> 0x20) | 1))) {
                cStack_71 = cVar19;
                pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033c40);
                goto LAB_140aa1d6f;
              }
              uVar15 = *(undefined8 *)((longlong)puVar13 + 0x44);
              uVar2 = *(undefined4 *)((longlong)puVar13 + 0x4c);
              lVar22 = *(longlong *)((longlong)puVar13 + 0x34);
              uVar8 = *(undefined8 *)((longlong)puVar13 + 0x3c);
              plVar9 = (longlong *)(lVar4 + uVar14 * 0x28);
              plVar10 = (longlong *)plVar9[3];
              LOCK();
              lVar4 = *plVar10;
              *plVar10 = *plVar10 + 1;
              UNLOCK();
              if (*plVar10 == 0 || SCARRY8(lVar4,1) != *plVar10 < 0) goto LAB_140aa1d6f;
              lStack_138 = plVar9[2];
              lStack_148 = *plVar9;
              uStack_140 = plVar9[1];
              uStack_150 = CONCAT44(uStack_150._4_4_,uVar2);
              lStack_168 = lVar22;
              uStack_160 = uVar8;
              uStack_158 = uVar15;
              plStack_130 = plVar10;
              cStack_71 = cVar19;
              pdb_141408060(&lStack_1f8,pbVar12,iVar3,&lStack_168);
              if ((char)lStack_1d8 != '\x11') {
                LOCK();
                *plStack_1c0 = *plStack_1c0 + -1;
                UNLOCK();
                if (*plStack_1c0 == 0) {
                  cStack_71 = cVar19;
                  pdb_140c7b7a0(&plStack_1c0);
                }
              }
              goto LAB_140aa18c0;
            }
            uVar23 = (ushort)(uVar16 - 1) & (ushort)uVar16;
            uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar23);
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
          uVar14 = uVar14 + lVar22 + 0x10;
          lVar22 = lVar22 + 0x10;
        }
      }
    } while( true );
  }
  puStack_90 = param_7;
  cStack_71 = '\x01';
  lStack_168 = param_3;
  lStack_a0 = param_4;
  pbStack_80 = param_1;
  uVar11 = pdb_1400af0a0(param_1 + 0x20);
  bVar20 = (byte)(uVar11 >> 0x38);
  bVar26 = bVar20 >> 1;
  auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
  auVar27 = pshuflw(auVar27,auVar27,0);
  uVar14 = 0;
  uVar24 = uVar11;
  while( true ) {
    uVar24 = uVar24 & *(ulonglong *)(pbStack_80 + 8);
    pcVar1 = (char *)(*(longlong *)pbStack_80 + uVar24);
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
    uVar23 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
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
    uVar25 = (uint)uVar23;
    while (uVar23 != 0) {
      uVar16 = 0;
      for (uVar7 = uVar25; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      if (*(longlong *)
           (*(longlong *)pbStack_80 + -0x98 +
           (uVar16 + uVar24 & *(ulonglong *)(pbStack_80 + 8)) * -0x98) == param_3)
      goto LAB_140aa1ba7;
      uVar23 = (ushort)(uVar25 - 1) & (ushort)uVar25;
      uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar23);
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
    uVar23 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
    if (uVar23 != 0) break;
    uVar24 = uVar24 + uVar14 + 0x10;
    uVar14 = uVar14 + 0x10;
  }
  if (*(longlong *)(pbStack_80 + 0x10) == 0) {
    cStack_71 = 1;
    uVar14 = 1;
    pdb_142dadf10(pbStack_80,1,param_1 + 0x20,CONCAT71((uint7)(byte)(uVar23 >> 8),1));
  }
  cStack_71 = '\x01';
  plVar9 = (longlong *)pdb_14008d710(0);
  if (plVar9 == (longlong *)0x0) {
    cStack_71 = '\x01';
    pdb_142dc7890(&UNK_143326860);
  }
  else {
    lStack_b8 = *plVar9;
    lStack_b0 = plVar9[1];
    *plVar9 = *plVar9 + 1;
    uVar8 = _UNK_14306c4f8;
    uVar15 = _DAT_14306c4f0;
    plVar9 = _UNK_14306c4e8;
    lVar17 = _DAT_14306c4e0;
    uStack_c8 = _DAT_14306c4f0;
    uStack_c0 = _UNK_14306c4f8;
    lStack_d8 = _DAT_14306c4e0;
    plStack_d0 = _UNK_14306c4e8;
    plVar10 = (longlong *)pdb_140f3bda0();
    pbVar12 = pbStack_80;
    if ((char)plVar10[2] == '\x01') {
      lStack_148 = *plVar10;
      uVar14 = plVar10[1];
    }
    else {
      lStack_148 = pdb_140f4fd10();
      *plVar10 = lStack_148;
      plVar10[1] = uVar14;
      *(undefined1 *)(plVar10 + 2) = 1;
    }
    *plVar10 = lStack_148 + 1;
    uStack_158 = _DAT_143046aa0;
    uStack_150 = _UNK_143046aa8;
    lStack_168 = _DAT_143046a90;
    uStack_160 = _UNK_143046a98;
    uStack_140 = uVar14;
    plVar10 = (longlong *)pdb_14008d710(0);
    if (plVar10 != (longlong *)0x0) {
      lStack_178 = *plVar10;
      lStack_170 = plVar10[1];
      *plVar10 = *plVar10 + 1;
      lStack_1a8 = lStack_b8;
      lStack_1a0 = lStack_b0;
      uStack_1b8 = uStack_c8;
      uStack_1b0 = uStack_c0;
      lStack_1c8 = lStack_d8;
      plStack_1c0 = plStack_d0;
      lStack_1f8 = lStack_168;
      uStack_1f0 = uStack_160;
      uStack_1e8 = uStack_158;
      uStack_1e0 = uStack_150;
      lStack_1d8 = lStack_148;
      uStack_1d0 = uStack_140;
      lStack_198 = lVar17;
      plStack_190 = plVar9;
      uStack_188 = uVar15;
      uStack_180 = uVar8;
      pdb_140c8eed0(&lStack_1f8,lStack_a0);
      pub_142e32760(&lStack_168,&lStack_1f8,0x90);
      pauVar21 = *(undefined1 (**) [16])pbVar12;
      uVar14 = *(ulonglong *)(pbVar12 + 8);
      uVar11 = uVar11 & uVar14;
      auVar27 = *(undefined1 (*) [16])(*pauVar21 + uVar11);
      uVar23 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
      uVar25 = (uint)uVar23;
      if (uVar23 == 0) {
        lVar17 = 0x10;
        do {
          uVar11 = uVar11 + lVar17 & uVar14;
          auVar27 = *(undefined1 (*) [16])(*pauVar21 + uVar11);
          lVar17 = lVar17 + 0x10;
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
      uVar24 = uVar16 + uVar11 & uVar14;
      bVar26 = (*pauVar21)[uVar24];
      if (-1 < (char)bVar26) {
        auVar27 = *pauVar21;
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
        uVar24 = (ulonglong)uVar25;
        bVar26 = (*pauVar21)[uVar24];
      }
      bVar20 = bVar20 >> 1;
      (*pauVar21)[uVar24] = bVar20;
      pauVar21[1][uVar24 - 0x10 & uVar14] = bVar20;
      *(longlong *)((longlong)pauVar21 + uVar24 * -0x98 + -0x98) = param_3;
      pub_142e32760((longlong)pauVar21 + uVar24 * -0x98 + -0x90,&lStack_168,0x90);
      lVar17 = *(longlong *)(pbVar12 + 0x18) - _UNK_142e47bf8;
      *(ulonglong *)(pbVar12 + 0x10) = *(longlong *)(pbVar12 + 0x10) - (ulonglong)(bVar26 & 1);
      *(longlong *)(pbVar12 + 0x18) = lVar17;
      cVar19 = '\x01';
      param_4 = lStack_a0;
      goto LAB_140aa16f8;
    }
    pdb_142dc7890(&UNK_143326860);
  }
LAB_140aa1d6f:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

