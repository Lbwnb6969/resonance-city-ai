// VA 0x140aa2f60, PDB extent 1261 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_current_decorators_in_storage<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_current_decorators_in_storage<ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 1261 */

void pdb_140aa2f60(undefined8 param_1,ulonglong param_2,ulonglong *param_3,longlong *param_4,
                  undefined8 *param_5,ulonglong param_6,ulonglong param_7)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulonglong *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  ulonglong *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  ulonglong *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  ulonglong *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  ulonglong *puStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    puStack_178 = param_3;
    if (param_4[3] != 0) {
      uVar9 = pdb_1400af0a0(param_4 + 4,&puStack_178);
      bVar16 = (byte)(uVar9 >> 0x39);
      auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
      auVar17 = pshuflw(auVar17,auVar17,0);
      lVar12 = 0;
      while( true ) {
        uVar9 = uVar9 & param_4[1];
        pcVar1 = (char *)(*param_4 + uVar9);
        auVar19[0] = -(*pcVar1 == auVar17[0]);
        auVar19[1] = -(pcVar1[1] == auVar17[1]);
        auVar19[2] = -(pcVar1[2] == auVar17[2]);
        auVar19[3] = -(pcVar1[3] == auVar17[3]);
        auVar19[4] = -(pcVar1[4] == auVar17[4]);
        auVar19[5] = -(pcVar1[5] == auVar17[5]);
        auVar19[6] = -(pcVar1[6] == auVar17[6]);
        auVar19[7] = -(pcVar1[7] == auVar17[7]);
        auVar19[8] = -(pcVar1[8] == auVar17[0]);
        auVar19[9] = -(pcVar1[9] == auVar17[1]);
        auVar19[10] = -(pcVar1[10] == auVar17[2]);
        auVar19[0xb] = -(pcVar1[0xb] == auVar17[3]);
        auVar19[0xc] = -(pcVar1[0xc] == auVar17[4]);
        auVar19[0xd] = -(pcVar1[0xd] == auVar17[5]);
        auVar19[0xe] = -(pcVar1[0xe] == auVar17[6]);
        auVar19[0xf] = -(pcVar1[0xf] == auVar17[7]);
        uVar14 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf
        ;
        uVar13 = (uint)uVar14;
        while (uVar14 != 0) {
          uVar3 = 0;
          for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          if (param_3 == *(ulonglong **)(*param_4 + -0x98 + (uVar3 + uVar9 & param_4[1]) * -0x98))
          goto LAB_140aa30f8;
          uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
        }
        auVar18[0] = -(*pcVar1 == -1);
        auVar18[1] = -(pcVar1[1] == -1);
        auVar18[2] = -(pcVar1[2] == -1);
        auVar18[3] = -(pcVar1[3] == -1);
        auVar18[4] = -(pcVar1[4] == -1);
        auVar18[5] = -(pcVar1[5] == -1);
        auVar18[6] = -(pcVar1[6] == -1);
        auVar18[7] = -(pcVar1[7] == -1);
        auVar18[8] = -(pcVar1[8] == -1);
        auVar18[9] = -(pcVar1[9] == -1);
        auVar18[10] = -(pcVar1[10] == -1);
        auVar18[0xb] = -(pcVar1[0xb] == -1);
        auVar18[0xc] = -(pcVar1[0xc] == -1);
        auVar18[0xd] = -(pcVar1[0xd] == -1);
        auVar18[0xe] = -(pcVar1[0xe] == -1);
        auVar18[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar18 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar18 >> 0x1f,0) & 1) != 0) || (SUB161(auVar18 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
        uVar9 = uVar9 + lVar12 + 0x10;
        lVar12 = lVar12 + 0x10;
      }
    }
  }
  else {
    if (param_2 == 1) {
      lVar12 = param_4[0x12];
    }
    else {
      lVar12 = param_4[0x24];
    }
    if (lVar12 != 0) {
LAB_140aa30f8:
      pdb_140aa21c0();
      return;
    }
  }
  uVar15 = param_7 == 0;
  puVar11 = param_3;
  if (-1 < (longlong)param_7) goto LAB_140aa30af;
  uVar8 = 0;
  while( true ) {
    param_1 = uVar8;
    uVar15 = 1;
    param_2 = param_7;
    pdb_142dc7e2a(param_1);
    puVar11 = param_3;
LAB_140aa30af:
    if ((bool)uVar15) break;
    param_3 = puVar11;
    pdb_14007ee60();
    pbStack_80 = pub_1406abab0(param_7,1);
    uVar8 = 1;
    if (pbStack_80 != (byte *)0x0) {
      pub_142e32760(pbStack_80,param_6,param_7);
LAB_140aa310d:
      uStack_88 = param_7;
      uStack_78 = param_7;
      plVar10 = (longlong *)pdb_14008d710(0);
      if (plVar10 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_143326860);
      }
      else {
        lStack_98 = *plVar10;
        lStack_90 = plVar10[1];
        *plVar10 = *plVar10 + 1;
        uVar7 = _UNK_14306c4f8;
        uVar6 = _DAT_14306c4f0;
        uVar8 = _UNK_14306c4e8;
        puVar5 = _DAT_14306c4e0;
        uStack_a8 = _DAT_14306c4f0;
        uStack_a0 = _UNK_14306c4f8;
        puStack_b8 = _DAT_14306c4e0;
        pcStack_b0 = (code *)_UNK_14306c4e8;
        plVar10 = (longlong *)pdb_140f3bda0();
        if ((char)plVar10[2] == '\x01') {
          lStack_c8 = *plVar10;
          param_6 = plVar10[1];
        }
        else {
          lStack_c8 = pdb_140f4fd10();
          *plVar10 = lStack_c8;
          plVar10[1] = param_6;
          *(undefined1 *)(plVar10 + 2) = 1;
        }
        *plVar10 = lStack_c8 + 1;
        uStack_d8 = _DAT_143046aa0;
        uStack_d0 = _UNK_143046aa8;
        puStack_e8 = _DAT_143046a90;
        uStack_e0 = _UNK_143046a98;
        uStack_c0 = param_6;
        plVar10 = (longlong *)pdb_14008d710(0);
        if (plVar10 != (longlong *)0x0) {
          lStack_f8 = *plVar10;
          lStack_f0 = plVar10[1];
          *plVar10 = *plVar10 + 1;
          lStack_128 = lStack_98;
          lStack_120 = lStack_90;
          uStack_138 = uStack_a8;
          uStack_130 = uStack_a0;
          puStack_148 = puStack_b8;
          uStack_140 = pcStack_b0;
          puStack_178 = puStack_e8;
          uStack_170 = uStack_e0;
          uStack_168 = uStack_d8;
          uStack_160 = uStack_d0;
          lStack_158 = lStack_c8;
          uStack_150 = uStack_c0;
          puStack_118 = puVar5;
          uStack_110 = uVar8;
          uStack_108 = uVar6;
          uStack_100 = uVar7;
          puStack_b8 = &uStack_88;
          pcStack_b0 = pdb_140001020;
          pdb_140f60760(&puStack_e8,&UNK_1430469a0,&puStack_b8);
          puStack_b8 = puStack_e8;
          pcStack_b0 = (code *)uStack_e0;
          uStack_a8 = uStack_d8;
          pdb_140aa1110(param_1,param_2,puVar11,&puStack_178,*param_5,param_5[4],&puStack_b8);
          pdb_1404d6920(&puStack_178);
          if (uStack_88 != 0) {
            pub_1406abac0(pbStack_80,uStack_88,1);
          }
          return;
        }
        pdb_142dc7890(&UNK_143326860);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  pbStack_80 = (byte *)0x1;
  param_6 = param_2;
  goto LAB_140aa310d;
}

