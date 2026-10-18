// VA 0x141c2b710, PDB extent 2407 bytes
// turbosloth::store::AssetStore::insert_cached_value
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::AssetStore::insert_cached_value
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 2407 */

void pdb_141c2b710(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  uint *puVar2;
  char *pcVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  uint uVar6;
  ulonglong *puVar7;
  byte bVar8;
  char cVar9;
  ulonglong uVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  uint *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar2 = (uint *)(param_1 + 0xd0);
  uVar17 = *(uint *)(param_1 + 0xd0);
  if (uVar17 < 0x3ffffffe) {
    LOCK();
    uVar18 = *puVar2;
    if (uVar17 == uVar18) {
      *puVar2 = uVar17 + 1;
    }
    UNLOCK();
    if (uVar17 == uVar18) {
      cVar9 = *(char *)(param_1 + 0xd8);
      goto joined_r0x000141c2bcc8;
    }
  }
  pdb_142dc6cb0(puVar2);
  cVar9 = *(char *)(param_1 + 0xd8);
joined_r0x000141c2bcc8:
  if (cVar9 != '\0') {
    puStack_a0 = (uint *)(param_1 + 0xe0);
    pcStack_98 = (code *)puVar2;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339fb38,0x2b,&puStack_a0,&UNK_14339fbe8,&UNK_14339ee30);
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    uVar10 = pdb_1417c4de0(param_1 + 0x100,param_2);
    lVar24 = *(longlong *)(param_1 + 0xe0);
    bVar8 = (byte)(uVar10 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar8,bVar8));
    auVar23 = pshuflw(auVar23,auVar23,0);
    lVar19 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(param_1 + 0xe8);
      pcVar3 = (char *)(lVar24 + uVar10);
      auVar27[0] = -(*pcVar3 == auVar23[0]);
      auVar27[1] = -(pcVar3[1] == auVar23[1]);
      auVar27[2] = -(pcVar3[2] == auVar23[2]);
      auVar27[3] = -(pcVar3[3] == auVar23[3]);
      auVar27[4] = -(pcVar3[4] == auVar23[4]);
      auVar27[5] = -(pcVar3[5] == auVar23[5]);
      auVar27[6] = -(pcVar3[6] == auVar23[6]);
      auVar27[7] = -(pcVar3[7] == auVar23[7]);
      auVar27[8] = -(pcVar3[8] == auVar23[0]);
      auVar27[9] = -(pcVar3[9] == auVar23[1]);
      auVar27[10] = -(pcVar3[10] == auVar23[2]);
      auVar27[0xb] = -(pcVar3[0xb] == auVar23[3]);
      auVar27[0xc] = -(pcVar3[0xc] == auVar23[4]);
      auVar27[0xd] = -(pcVar3[0xd] == auVar23[5]);
      auVar27[0xe] = -(pcVar3[0xe] == auVar23[6]);
      auVar27[0xf] = -(pcVar3[0xf] == auVar23[7]);
      uVar14 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar18 = 0;
        for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        uVar15 = uVar18 + uVar10 & *(ulonglong *)(param_1 + 0xe8);
        if (*(longlong *)(lVar24 + -0x18 + uVar15 * -0x18) == *param_2 &&
            *(longlong *)(lVar24 + -0x10 + uVar15 * -0x18) == param_2[1]) {
          puVar16 = *(uint **)(lVar24 + uVar15 * -0x18 + -8);
          LOCK();
          lVar24 = *(longlong *)puVar16;
          *(longlong *)puVar16 = *(longlong *)puVar16 + 1;
          UNLOCK();
          if (*(longlong *)puVar16 == 0 || SCARRY8(lVar24,1) != *(longlong *)puVar16 < 0)
          goto LAB_141c2be6b;
          LOCK();
          uVar17 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if (!SBORROW4(0,uVar17 - 1 & 0xbfffffff)) goto LAB_141c2bb45;
          goto LAB_141c2bd12;
        }
        uVar14 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar14);
      }
      auVar25[0] = -(*pcVar3 == -1);
      auVar25[1] = -(pcVar3[1] == -1);
      auVar25[2] = -(pcVar3[2] == -1);
      auVar25[3] = -(pcVar3[3] == -1);
      auVar25[4] = -(pcVar3[4] == -1);
      auVar25[5] = -(pcVar3[5] == -1);
      auVar25[6] = -(pcVar3[6] == -1);
      auVar25[7] = -(pcVar3[7] == -1);
      auVar25[8] = -(pcVar3[8] == -1);
      auVar25[9] = -(pcVar3[9] == -1);
      auVar25[10] = -(pcVar3[10] == -1);
      auVar25[0xb] = -(pcVar3[0xb] == -1);
      auVar25[0xc] = -(pcVar3[0xc] == -1);
      auVar25[0xd] = -(pcVar3[0xd] == -1);
      auVar25[0xe] = -(pcVar3[0xe] == -1);
      auVar25[0xf] = -(pcVar3[0xf] == -1);
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar10 = uVar10 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
  LOCK();
  uVar17 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if (SBORROW4(0,uVar17 - 1 & 0xbfffffff)) {
    pdb_142dc6fa0(puVar2);
    LOCK();
    bVar21 = *puVar2 == 0;
    if (bVar21) {
      *puVar2 = 0x3fffffff;
    }
    UNLOCK();
  }
  else {
    LOCK();
    bVar21 = *puVar2 == 0;
    if (bVar21) {
      *puVar2 = 0x3fffffff;
    }
    UNLOCK();
  }
  if (!bVar21) {
    pdb_142dc6e70(puVar2);
  }
  puVar7 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_5c = 0;
    cVar9 = *(char *)(param_1 + 0xd8);
  }
  else {
    uStack_5c = pdb_142dc79e0();
    uStack_5c = uStack_5c ^ 1;
    cVar9 = *(char *)(param_1 + 0xd8);
  }
  uStack_50 = (undefined1)uStack_5c;
  if (cVar9 != '\0') {
    pcStack_98._1_7_ = (undefined7)((ulonglong)pcStack_98 >> 8);
    pcStack_98 = (code *)CONCAT71(pcStack_98._1_7_,uStack_50);
    puStack_a0 = puVar2;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339fb38,0x2b,&puStack_a0,&UNK_14339fc08,&UNK_14339ee48);
  }
  puStack_58 = puVar2;
  uVar15 = pdb_1417c4de0(param_1 + 0x100,param_2);
  lVar24 = *(longlong *)(param_1 + 0xe0);
  bVar8 = (byte)(uVar15 >> 0x38);
  bVar22 = bVar8 >> 1;
  auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar23 = pshuflw(auVar23,auVar23,0);
  lVar19 = *param_2;
  lVar12 = param_2[1];
  lVar13 = 0;
  uVar10 = uVar15;
  do {
    uVar10 = uVar10 & *(ulonglong *)(param_1 + 0xe8);
    auVar27 = *(undefined1 (*) [16])(lVar24 + uVar10);
    auVar28[0] = -(auVar27[0] == auVar23[0]);
    auVar28[1] = -(auVar27[1] == auVar23[1]);
    auVar28[2] = -(auVar27[2] == auVar23[2]);
    auVar28[3] = -(auVar27[3] == auVar23[3]);
    auVar28[4] = -(auVar27[4] == auVar23[4]);
    auVar28[5] = -(auVar27[5] == auVar23[5]);
    auVar28[6] = -(auVar27[6] == auVar23[6]);
    auVar28[7] = -(auVar27[7] == auVar23[7]);
    auVar28[8] = -(auVar27[8] == auVar23[0]);
    auVar28[9] = -(auVar27[9] == auVar23[1]);
    auVar28[10] = -(auVar27[10] == auVar23[2]);
    auVar28[0xb] = -(auVar27[0xb] == auVar23[3]);
    auVar28[0xc] = -(auVar27[0xc] == auVar23[4]);
    auVar28[0xd] = -(auVar27[0xd] == auVar23[5]);
    auVar28[0xe] = -(auVar27[0xe] == auVar23[6]);
    auVar28[0xf] = -(auVar27[0xf] == auVar23[7]);
    uVar14 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
    uVar17 = (uint)uVar14;
    while (uVar14 != 0) {
      uVar18 = 0;
      for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar18 = uVar18 + 1;
      }
      uVar20 = uVar18 + uVar10 & *(ulonglong *)(param_1 + 0xe8);
      if (*(longlong *)(lVar24 + -0x18 + uVar20 * -0x18) == lVar19 &&
          *(longlong *)(lVar24 + -0x10 + uVar20 * -0x18) == lVar12) {
        puVar16 = *(uint **)(lVar24 + uVar20 * -0x18 + -8);
        LOCK();
        lVar24 = *(longlong *)puVar16;
        *(longlong *)puVar16 = *(longlong *)puVar16 + 1;
        UNLOCK();
        if (*(longlong *)puVar16 != 0 && SCARRY8(lVar24,1) == *(longlong *)puVar16 < 0)
        goto LAB_141c2bb11;
        goto LAB_141c2be6b;
      }
      uVar14 = (ushort)(uVar17 - 1) & (ushort)uVar17;
      uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar14);
    }
    auVar26[0] = -(auVar27[0] == -1);
    auVar26[1] = -(auVar27[1] == -1);
    auVar26[2] = -(auVar27[2] == -1);
    auVar26[3] = -(auVar27[3] == -1);
    auVar26[4] = -(auVar27[4] == -1);
    auVar26[5] = -(auVar27[5] == -1);
    auVar26[6] = -(auVar27[6] == -1);
    auVar26[7] = -(auVar27[7] == -1);
    auVar26[8] = -(auVar27[8] == -1);
    auVar26[9] = -(auVar27[9] == -1);
    auVar26[10] = -(auVar27[10] == -1);
    auVar26[0xb] = -(auVar27[0xb] == -1);
    auVar26[0xc] = -(auVar27[0xc] == -1);
    auVar26[0xd] = -(auVar27[0xd] == -1);
    auVar26[0xe] = -(auVar27[0xe] == -1);
    auVar26[0xf] = -(auVar27[0xf] == -1);
    uVar14 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
    if (uVar14 != 0) {
      if (*(longlong *)(param_1 + 0xf0) == 0) {
        pdb_142defca0(param_1 + 0xe0,1,param_1 + 0x100,CONCAT71((uint7)(byte)(uVar14 >> 8),1));
      }
      uStack_d1 = (undefined1)_DAT_1435584f0;
      uStack_d0 = (undefined7)((ulonglong)_DAT_1435584f0 >> 8);
      uStack_c9 = (undefined1)_UNK_1435584f8;
      uStack_c8 = (undefined7)((ulonglong)_UNK_1435584f8 >> 8);
      uStack_e1 = (undefined1)_DAT_1435584e0;
      uStack_d9 = (undefined1)_UNK_1435584e8;
      uStack_d8 = (undefined7)((ulonglong)_UNK_1435584e8 >> 8);
      puStack_a0 = (uint *)0x1;
      pcStack_98 = (code *)0x1;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_7f = (undefined7)((ulonglong)_DAT_1435584e0 >> 8);
      uStack_87 = uStack_e8;
      uStack_80 = uStack_e1;
      uStack_78 = uStack_d9;
      uStack_77 = uStack_d8;
      uStack_70 = uStack_d1;
      uStack_6f = uStack_d0;
      uStack_68 = uStack_c9;
      uStack_67 = uStack_c8;
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(0x40,8);
      if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x40);
      }
      *(ulonglong *)(pbVar11 + 0x30) = CONCAT71(uStack_6f,uStack_70);
      *(ulonglong *)(pbVar11 + 0x38) = CONCAT71(uStack_67,uStack_68);
      *(ulonglong *)(pbVar11 + 0x20) = CONCAT71(uStack_7f,uStack_80);
      *(ulonglong *)(pbVar11 + 0x28) = CONCAT71(uStack_77,uStack_78);
      *(undefined8 *)(pbVar11 + 0x10) = uStack_90;
      *(ulonglong *)(pbVar11 + 0x18) = CONCAT71(uStack_87,uStack_88);
      *(uint **)pbVar11 = puStack_a0;
      *(code **)(pbVar11 + 8) = pcStack_98;
      pauVar4 = *(undefined1 (**) [16])(param_1 + 0xe0);
      uVar10 = *(ulonglong *)(param_1 + 0xe8);
      uVar15 = uVar15 & uVar10;
      auVar23 = *(undefined1 (*) [16])(*pauVar4 + uVar15);
      uVar14 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
               (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar14;
      if (uVar14 == 0) {
        lVar24 = 0x10;
        do {
          uVar15 = uVar15 + lVar24 & uVar10;
          auVar23 = *(undefined1 (*) [16])(*pauVar4 + uVar15);
          lVar24 = lVar24 + 0x10;
          uVar17 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
        } while (uVar17 == 0);
      }
      uVar18 = 0;
      for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
        uVar18 = uVar18 + 1;
      }
      uVar15 = uVar18 + uVar15 & uVar10;
      bVar22 = (*pauVar4)[uVar15];
      if (-1 < (char)bVar22) {
        auVar23 = *pauVar4;
        uVar17 = 0;
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
          uVar17 = uVar17 + 1;
        }
        uVar15 = (ulonglong)uVar17;
        bVar22 = (*pauVar4)[uVar15];
      }
      bVar8 = bVar8 >> 1;
      (*pauVar4)[uVar15] = bVar8;
      pauVar4[1][uVar15 - 0x10 & uVar10] = bVar8;
      *(longlong *)((longlong)pauVar4 + uVar15 * -0x18 + -0x18) = lVar19;
      *(longlong *)((longlong)pauVar4 + uVar15 * -0x18 + -0x10) = lVar12;
      *(byte **)((longlong)pauVar4 + uVar15 * -0x18 + -8) = pbVar11;
      lVar24 = *(longlong *)(param_1 + 0xf8) - _UNK_142e47bf8;
      *(ulonglong *)(param_1 + 0xf0) =
           *(longlong *)(param_1 + 0xf0) - ((ulonglong)bVar22 & 0xffffffffffffff01);
      *(longlong *)(param_1 + 0xf8) = lVar24;
      puVar16 = *(uint **)((longlong)pauVar4 + uVar15 * -0x18 + -8);
      LOCK();
      lVar24 = *(longlong *)puVar16;
      *(longlong *)puVar16 = *(longlong *)puVar16 + 1;
      UNLOCK();
      if (*(longlong *)puVar16 != 0 && SCARRY8(lVar24,1) == *(longlong *)puVar16 < 0) {
LAB_141c2bb11:
        if ((((char)uStack_5c == '\0') && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
           (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
          *(undefined1 *)(param_1 + 0xd8) = 1;
        }
        LOCK();
        uVar17 = *puVar2;
        *puVar2 = *puVar2 + 0xc0000001;
        UNLOCK();
        if (0x3fffffff < uVar17 + 0xc0000001) {
LAB_141c2bd12:
          pdb_142dc6fa0(puVar2);
        }
LAB_141c2bb45:
        puVar2 = puVar16 + 4;
        LOCK();
        bVar21 = puVar16[4] == 0;
        if (bVar21) {
          puVar16[4] = 0x3fffffff;
        }
        UNLOCK();
        puStack_58 = puVar16;
        if (!bVar21) {
          pdb_142dc6e70(puVar2);
        }
        puVar7 = _DAT_143ca8f38;
        if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          bVar8 = 0;
          cVar9 = (char)puVar16[6];
        }
        else {
          bVar8 = pdb_142dc79e0();
          bVar8 = bVar8 ^ 1;
          cVar9 = (char)puVar16[6];
        }
        if (cVar9 != '\0') {
          pcStack_98._1_7_ = (undefined7)((ulonglong)pcStack_98 >> 8);
          pcStack_98 = (code *)CONCAT71(pcStack_98._1_7_,bVar8);
          puStack_a0 = puVar2;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14339fb38,0x2b,&puStack_a0,&UNK_14339fba8,&UNK_14339ef00);
        }
        lVar24 = *param_5;
        do {
          lVar19 = *(longlong *)(lVar24 + 8);
          while (lVar19 != -1) {
            if (lVar19 < 0) {
              puStack_a0 = (uint *)&UNK_1431f7898;
              pcStack_98 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_1431f78a8,&puStack_a0,&UNK_1431f7930);
            }
            LOCK();
            lVar12 = *(longlong *)(lVar24 + 8);
            bVar21 = lVar19 == lVar12;
            if (bVar21) {
              *(longlong *)(lVar24 + 8) = lVar19 + 1;
              lVar12 = lVar19;
            }
            UNLOCK();
            lVar19 = lVar12;
            if (bVar21) {
              pbVar11 = (byte *)pdb_142566560(puVar16 + 8,param_3,param_4,lVar24,param_5[1]);
              if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
                LOCK();
                pbVar1 = pbVar11 + 8;
                *(longlong *)pbVar1 = *(longlong *)pbVar1 + -1;
                UNLOCK();
                if (*(longlong *)pbVar1 == 0) {
                  uVar10 = 8;
                  if (8 < *(ulonglong *)(param_3 + 0x10)) {
                    uVar10 = *(ulonglong *)(param_3 + 0x10);
                  }
                  uVar15 = -uVar10 & *(longlong *)(param_3 + 8) + uVar10 + 0xf;
                  if (uVar15 != 0) {
                    pub_1406abac0(pbVar11,uVar15,uVar10);
                  }
                }
              }
              if (((bVar8 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
                 (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
                *(undefined1 *)(puVar16 + 6) = 1;
              }
              LOCK();
              uVar17 = *puVar2;
              *puVar2 = *puVar2 + 0xc0000001;
              UNLOCK();
              if (0x3fffffff < uVar17 + 0xc0000001) {
                pdb_142dc6fa0(puVar2);
              }
              LOCK();
              *(longlong *)puStack_58 = *(longlong *)puStack_58 + -1;
              UNLOCK();
              if (*(longlong *)puStack_58 == 0) {
                pdb_140dd7970(&puStack_58);
              }
              return;
            }
          }
        } while( true );
      }
LAB_141c2be6b:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar10 = uVar10 + lVar13 + 0x10;
    lVar13 = lVar13 + 0x10;
  } while( true );
}

