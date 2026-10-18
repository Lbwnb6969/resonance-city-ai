// VA 0x140c3f210, PDB extent 3513 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::get_or_insert_default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::get_or_insert_default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 3513 */

longlong * pdb_140c3f210(longlong *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  ushort uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong alStack_158 [2];
  undefined *puStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong *plStack_120;
  undefined *puStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong *plStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong *plStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if ((char)param_1[0x36] != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306cea8);
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      plVar14 = param_1 + 0x24;
      if (param_1[0x24] != 0) {
        return plVar14;
      }
      plVar9 = param_1 + 6;
      uVar6 = pdb_1417c4640(param_1 + 10,&UNK_14306cec0);
      pdb_140ca9590(alStack_158,plVar9,uVar6,&UNK_14306cec0);
      if ((int)alStack_158[0] != 3) {
        lStack_d8 = lStack_140;
        lStack_d0 = lStack_138;
        lStack_c8 = lStack_130;
        if (puStack_148 != (undefined *)0x0) {
          lStack_68 = lStack_130;
          lStack_78 = lStack_140;
          lStack_70 = lStack_138;
          plVar9 = plStack_120;
          goto LAB_140c3f73e;
        }
      }
      plVar8 = (longlong *)pdb_140f3bda0();
      if ((char)plVar8[2] == '\x01') {
        lStack_128 = *plVar8;
        plVar9 = (longlong *)plVar8[1];
      }
      else {
        lStack_128 = pdb_140f4fd10();
        *plVar8 = lStack_128;
        plVar8[1] = (longlong)plVar9;
        *(undefined1 *)(plVar8 + 2) = 1;
      }
      *plVar8 = lStack_128 + 1;
      lStack_78 = 0;
      lStack_70 = 0;
      lStack_68 = 0;
      puStack_148 = &UNK_14306c4d0;
LAB_140c3f73e:
      lStack_100 = lStack_78;
      lStack_f8 = lStack_70;
      lStack_f0 = lStack_68;
      puStack_108 = puStack_148;
      lStack_e8 = lStack_128;
      plStack_e0 = plVar9;
      plVar8 = (longlong *)pdb_140f3bda0();
      if ((char)plVar8[2] == '\x01') {
        lStack_88 = *plVar8;
        plVar9 = (longlong *)plVar8[1];
      }
      else {
        lStack_88 = pdb_140f4fd10();
        *plVar8 = lStack_88;
        plVar8[1] = (longlong)plVar9;
        *(undefined1 *)(plVar8 + 2) = 1;
      }
      *plVar8 = lStack_88 + 1;
      lVar5 = _UNK_14306c4f8;
      lVar19 = _DAT_14306c4f0;
      lVar12 = _UNK_14306c4e8;
      lVar20 = _DAT_14306c4e0;
      lStack_98 = _DAT_14306c4f0;
      lStack_90 = _UNK_14306c4f8;
      lStack_a8 = _DAT_14306c4e0;
      lStack_a0 = _UNK_14306c4e8;
      plStack_80 = plVar9;
      plVar8 = (longlong *)pdb_140f3bda0();
      if ((char)plVar8[2] == '\x01') {
        lStack_b8 = *plVar8;
        plVar9 = (longlong *)plVar8[1];
      }
      else {
        lStack_b8 = pdb_140f4fd10();
        *plVar8 = lStack_b8;
        plVar8[1] = (longlong)plVar9;
        *(undefined1 *)(plVar8 + 2) = 1;
      }
      *plVar8 = lStack_b8 + 1;
      lStack_c8 = lVar19;
      lStack_c0 = lVar5;
      lStack_d8 = lVar20;
      lStack_d0 = lVar12;
      plStack_b0 = plVar9;
      plVar8 = (longlong *)pdb_140f3bda0();
      if ((char)plVar8[2] == '\x01') {
        lVar10 = *plVar8;
        plVar9 = (longlong *)plVar8[1];
      }
      else {
        lVar10 = pdb_140f4fd10();
        *plVar8 = lVar10;
        plVar8[1] = (longlong)plVar9;
        *(undefined1 *)(plVar8 + 2) = 1;
      }
      *plVar8 = lVar10 + 1;
      param_1[0x32] = lVar19;
      param_1[0x33] = lVar5;
      param_1[0x30] = lVar20;
      param_1[0x31] = lVar12;
      param_1[0x2e] = lStack_88;
      param_1[0x2f] = (longlong)plStack_80;
      param_1[0x2c] = lStack_98;
      param_1[0x2d] = lStack_90;
      param_1[0x2a] = lStack_a8;
      param_1[0x2b] = lStack_a0;
      param_1[0x28] = lStack_e8;
      param_1[0x29] = (longlong)plStack_e0;
      param_1[0x26] = lStack_f8;
      param_1[0x27] = lStack_f0;
      *plVar14 = (longlong)puStack_108;
      param_1[0x25] = lStack_100;
      param_1[0x34] = lVar10;
      param_1[0x35] = (longlong)plVar9;
      return plVar14;
    }
    plVar14 = param_1 + 0x12;
    if (param_1[0x12] != 0) {
      return plVar14;
    }
    plVar9 = param_1 + 6;
    uVar6 = pdb_1417c4640(param_1 + 10,&UNK_14306ced0);
    pdb_140ca9590(alStack_158,plVar9,uVar6,&UNK_14306ced0);
    if ((int)alStack_158[0] != 3) {
      lStack_d8 = lStack_140;
      lStack_d0 = lStack_138;
      lStack_c8 = lStack_130;
      if (puStack_148 != (undefined *)0x0) {
        lStack_68 = lStack_130;
        lStack_78 = lStack_140;
        lStack_70 = lStack_138;
        plVar9 = plStack_120;
        goto LAB_140c3f563;
      }
    }
    plVar8 = (longlong *)pdb_140f3bda0();
    if ((char)plVar8[2] == '\x01') {
      lStack_128 = *plVar8;
      plVar9 = (longlong *)plVar8[1];
    }
    else {
      lStack_128 = pdb_140f4fd10();
      *plVar8 = lStack_128;
      plVar8[1] = (longlong)plVar9;
      *(undefined1 *)(plVar8 + 2) = 1;
    }
    *plVar8 = lStack_128 + 1;
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
    puStack_148 = &UNK_14306c4d0;
LAB_140c3f563:
    lStack_100 = lStack_78;
    lStack_f8 = lStack_70;
    lStack_f0 = lStack_68;
    puStack_108 = puStack_148;
    lStack_e8 = lStack_128;
    plStack_e0 = plVar9;
    plVar8 = (longlong *)pdb_140f3bda0();
    if ((char)plVar8[2] == '\x01') {
      lStack_88 = *plVar8;
      plVar9 = (longlong *)plVar8[1];
    }
    else {
      lStack_88 = pdb_140f4fd10();
      *plVar8 = lStack_88;
      plVar8[1] = (longlong)plVar9;
      *(undefined1 *)(plVar8 + 2) = 1;
    }
    *plVar8 = lStack_88 + 1;
    lVar5 = _UNK_14306c4f8;
    lVar19 = _DAT_14306c4f0;
    lVar12 = _UNK_14306c4e8;
    lVar20 = _DAT_14306c4e0;
    lStack_98 = _DAT_14306c4f0;
    lStack_90 = _UNK_14306c4f8;
    lStack_a8 = _DAT_14306c4e0;
    lStack_a0 = _UNK_14306c4e8;
    plStack_80 = plVar9;
    plVar8 = (longlong *)pdb_140f3bda0();
    if ((char)plVar8[2] == '\x01') {
      lStack_b8 = *plVar8;
      plVar9 = (longlong *)plVar8[1];
    }
    else {
      lStack_b8 = pdb_140f4fd10();
      *plVar8 = lStack_b8;
      plVar8[1] = (longlong)plVar9;
      *(undefined1 *)(plVar8 + 2) = 1;
    }
    *plVar8 = lStack_b8 + 1;
    lStack_c8 = lVar19;
    lStack_c0 = lVar5;
    lStack_d8 = lVar20;
    lStack_d0 = lVar12;
    plStack_b0 = plVar9;
    plVar8 = (longlong *)pdb_140f3bda0();
    if ((char)plVar8[2] == '\x01') {
      lVar10 = *plVar8;
      plVar9 = (longlong *)plVar8[1];
    }
    else {
      lVar10 = pdb_140f4fd10();
      *plVar8 = lVar10;
      plVar8[1] = (longlong)plVar9;
      *(undefined1 *)(plVar8 + 2) = 1;
    }
    *plVar8 = lVar10 + 1;
    param_1[0x20] = lVar19;
    param_1[0x21] = lVar5;
    param_1[0x1e] = lVar20;
    param_1[0x1f] = lVar12;
    param_1[0x1c] = lStack_88;
    param_1[0x1d] = (longlong)plStack_80;
    param_1[0x1a] = lStack_98;
    param_1[0x1b] = lStack_90;
    param_1[0x18] = lStack_a8;
    param_1[0x19] = lStack_a0;
    param_1[0x16] = lStack_e8;
    param_1[0x17] = (longlong)plStack_e0;
    param_1[0x14] = lStack_f8;
    param_1[0x15] = lStack_f0;
    *plVar14 = (longlong)puStack_108;
    param_1[0x13] = lStack_100;
    param_1[0x22] = lVar10;
    param_1[0x23] = (longlong)plVar9;
    return plVar14;
  }
  alStack_158[0] = param_3;
  uVar7 = pdb_1400af0a0(param_1 + 4,alStack_158);
  lVar20 = *param_1;
  bVar21 = (byte)(uVar7 >> 0x38);
  bVar22 = bVar21 >> 1;
  auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar23 = pshuflw(auVar23,auVar23,0);
  lVar12 = 0;
  uVar13 = uVar7;
  while( true ) {
    uVar13 = uVar13 & param_1[1];
    pcVar1 = (char *)(lVar20 + uVar13);
    auVar25[0] = -(*pcVar1 == auVar23[0]);
    auVar25[1] = -(pcVar1[1] == auVar23[1]);
    auVar25[2] = -(pcVar1[2] == auVar23[2]);
    auVar25[3] = -(pcVar1[3] == auVar23[3]);
    auVar25[4] = -(pcVar1[4] == auVar23[4]);
    auVar25[5] = -(pcVar1[5] == auVar23[5]);
    auVar25[6] = -(pcVar1[6] == auVar23[6]);
    auVar25[7] = -(pcVar1[7] == auVar23[7]);
    auVar25[8] = -(pcVar1[8] == auVar23[0]);
    auVar25[9] = -(pcVar1[9] == auVar23[1]);
    auVar25[10] = -(pcVar1[10] == auVar23[2]);
    auVar25[0xb] = -(pcVar1[0xb] == auVar23[3]);
    auVar25[0xc] = -(pcVar1[0xc] == auVar23[4]);
    auVar25[0xd] = -(pcVar1[0xd] == auVar23[5]);
    auVar25[0xe] = -(pcVar1[0xe] == auVar23[6]);
    auVar25[0xf] = -(pcVar1[0xf] == auVar23[7]);
    uVar17 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
    uVar15 = (uint)uVar17;
    while (uVar17 != 0) {
      uVar18 = 0;
      for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar18 = uVar18 + 1;
      }
      lVar19 = (uVar18 + uVar13 & param_1[1]) * -0x98;
      if (*(longlong *)(lVar20 + -0x98 + lVar19) == param_3) {
        lVar20 = lVar20 + lVar19;
        goto LAB_140c3fb4e;
      }
      uVar17 = (ushort)(uVar15 - 1) & (ushort)uVar15;
      uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar17);
    }
    auVar24[0] = -(*pcVar1 == -1);
    auVar24[1] = -(pcVar1[1] == -1);
    auVar24[2] = -(pcVar1[2] == -1);
    auVar24[3] = -(pcVar1[3] == -1);
    auVar24[4] = -(pcVar1[4] == -1);
    auVar24[5] = -(pcVar1[5] == -1);
    auVar24[6] = -(pcVar1[6] == -1);
    auVar24[7] = -(pcVar1[7] == -1);
    auVar24[8] = -(pcVar1[8] == -1);
    auVar24[9] = -(pcVar1[9] == -1);
    auVar24[10] = -(pcVar1[10] == -1);
    auVar24[0xb] = -(pcVar1[0xb] == -1);
    auVar24[0xc] = -(pcVar1[0xc] == -1);
    auVar24[0xd] = -(pcVar1[0xd] == -1);
    auVar24[0xe] = -(pcVar1[0xe] == -1);
    auVar24[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
    uVar13 = uVar13 + lVar12 + 0x10;
    lVar12 = lVar12 + 0x10;
  }
  if (param_1[2] == 0) {
    pdb_142dadf10(param_1,1,param_1 + 4,1);
  }
  plVar14 = param_1 + 6;
  lStack_a8 = 0;
  lStack_a0 = param_3;
  uVar6 = pdb_1417c4640(param_1 + 10,&lStack_a8);
  pdb_140ca9590(alStack_158,plVar14,uVar6,&lStack_a8);
  if ((int)alStack_158[0] != 3) {
    lStack_d8 = lStack_140;
    lStack_d0 = lStack_138;
    lStack_c8 = lStack_130;
    if (puStack_148 != (undefined *)0x0) {
      lStack_68 = lStack_130;
      lStack_78 = lStack_140;
      lStack_70 = lStack_138;
      plVar14 = plStack_120;
      goto LAB_140c3f90f;
    }
  }
  plVar9 = (longlong *)pdb_140f3bda0();
  if ((char)plVar9[2] == '\x01') {
    lStack_128 = *plVar9;
    plVar14 = (longlong *)plVar9[1];
  }
  else {
    lStack_128 = pdb_140f4fd10();
    *plVar9 = lStack_128;
    plVar9[1] = (longlong)plVar14;
    *(undefined1 *)(plVar9 + 2) = 1;
  }
  *plVar9 = lStack_128 + 1;
  lStack_78 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  puStack_148 = &UNK_14306c4d0;
LAB_140c3f90f:
  lStack_100 = lStack_78;
  lStack_f8 = lStack_70;
  lStack_f0 = lStack_68;
  puStack_108 = puStack_148;
  lStack_e8 = lStack_128;
  plStack_e0 = plVar14;
  plVar9 = (longlong *)pdb_140f3bda0();
  if ((char)plVar9[2] == '\x01') {
    lStack_88 = *plVar9;
    plVar14 = (longlong *)plVar9[1];
  }
  else {
    lStack_88 = pdb_140f4fd10();
    *plVar9 = lStack_88;
    plVar9[1] = (longlong)plVar14;
    *(undefined1 *)(plVar9 + 2) = 1;
  }
  *plVar9 = lStack_88 + 1;
  lVar10 = _UNK_14306c4f8;
  lVar5 = _DAT_14306c4f0;
  lVar19 = _UNK_14306c4e8;
  lVar12 = _DAT_14306c4e0;
  lStack_98 = _DAT_14306c4f0;
  lStack_90 = _UNK_14306c4f8;
  lStack_a8 = _DAT_14306c4e0;
  lStack_a0 = _UNK_14306c4e8;
  plStack_80 = plVar14;
  plVar9 = (longlong *)pdb_140f3bda0();
  if ((char)plVar9[2] == '\x01') {
    lStack_b8 = *plVar9;
    plVar14 = (longlong *)plVar9[1];
  }
  else {
    lStack_b8 = pdb_140f4fd10();
    *plVar9 = lStack_b8;
    plVar9[1] = (longlong)plVar14;
    *(undefined1 *)(plVar9 + 2) = 1;
  }
  *plVar9 = lStack_b8 + 1;
  lStack_c8 = lVar5;
  lStack_c0 = lVar10;
  lStack_d8 = lVar12;
  lStack_d0 = lVar19;
  plStack_b0 = plVar14;
  plVar9 = (longlong *)pdb_140f3bda0();
  if ((char)plVar9[2] == '\x01') {
    lVar11 = *plVar9;
    plVar14 = (longlong *)plVar9[1];
  }
  else {
    lVar11 = pdb_140f4fd10();
    *plVar9 = lVar11;
    plVar9[1] = (longlong)plVar14;
    *(undefined1 *)(plVar9 + 2) = 1;
  }
  *plVar9 = lVar11 + 1;
  pauVar3 = (undefined1 (*) [16])*param_1;
  uVar13 = param_1[1];
  uVar7 = uVar7 & uVar13;
  auVar23 = *(undefined1 (*) [16])(*pauVar3 + uVar7);
  uVar17 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar23[0xf] >> 7) << 0xf
  ;
  uVar15 = (uint)uVar17;
  if (uVar17 == 0) {
    lVar20 = 0x10;
    do {
      uVar7 = uVar7 + lVar20 & uVar13;
      auVar23 = *(undefined1 (*) [16])(*pauVar3 + uVar7);
      lVar20 = lVar20 + 0x10;
      uVar15 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
    } while (uVar15 == 0);
  }
  uVar18 = 0;
  for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
    uVar18 = uVar18 + 1;
  }
  uVar7 = uVar18 + uVar7 & uVar13;
  bVar22 = (*pauVar3)[uVar7];
  if (-1 < (char)bVar22) {
    auVar23 = *pauVar3;
    uVar15 = 0;
    for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf); (uVar18 & 1) == 0;
        uVar18 = uVar18 >> 1 | 0x80000000) {
      uVar15 = uVar15 + 1;
    }
    uVar7 = (ulonglong)uVar15;
    bVar22 = (*pauVar3)[uVar7];
  }
  bVar21 = bVar21 >> 1;
  (*pauVar3)[uVar7] = bVar21;
  pauVar3[1][uVar7 - 0x10 & uVar13] = bVar21;
  lVar16 = uVar7 * -0x98;
  param_1[2] = param_1[2] - (ulonglong)(bVar22 & 1);
  lVar20 = (longlong)pauVar3 + lVar16;
  *(longlong *)((longlong)pauVar3 + lVar16 + -0x98) = param_3;
  puVar2 = (undefined8 *)((longlong)pauVar3 + lVar16 + -0x90);
  *puVar2 = puStack_108;
  puVar2[1] = lStack_100;
  plVar9 = (longlong *)((longlong)pauVar3 + lVar16 + -0x80);
  *plVar9 = lStack_f8;
  plVar9[1] = lStack_f0;
  plVar9 = (longlong *)((longlong)pauVar3 + lVar16 + -0x70);
  *plVar9 = lStack_e8;
  plVar9[1] = (longlong)plStack_e0;
  plVar9 = (longlong *)((longlong)pauVar3 + lVar16 + -0x60);
  *plVar9 = lStack_a8;
  plVar9[1] = lStack_a0;
  plVar9 = (longlong *)((longlong)pauVar3 + lVar16 + -0x50);
  *plVar9 = lStack_98;
  plVar9[1] = lStack_90;
  plVar9 = (longlong *)((longlong)pauVar3 + lVar16 + -0x40);
  *plVar9 = lStack_88;
  plVar9[1] = (longlong)plStack_80;
  plVar9 = (longlong *)((longlong)pauVar3 + lVar16 + -0x30);
  *plVar9 = lVar12;
  plVar9[1] = lVar19;
  plVar9 = (longlong *)((longlong)pauVar3 + lVar16 + -0x20);
  *plVar9 = lVar5;
  plVar9[1] = lVar10;
  *(longlong *)((longlong)pauVar3 + lVar16 + -0x10) = lVar11;
  *(longlong **)((longlong)pauVar3 + lVar16 + -8) = plVar14;
  param_1[3] = param_1[3] + 1;
LAB_140c3fb4e:
  return (longlong *)(lVar20 + -0x90);
}

